// game/loaders.cpp -- level data loading: textures, moby classes, scenes, the level file itself
// STATUS: CLEAN (checked against the asm; local names are mine)
// MERGE
// 41 functions, 0xdb1e0-0xe0e14
//
// Most of the data comes in with offsets relative to its own start that are turned into
// pointers here ("relocated"). The texture code is the PS2 path: on PS3 the sceGs* uploads and
// the SCE_GS_SET_* register packers are stubs, so the GS addresses and registers computed here
// are bookkeeping only.
#include "rc1.h"

enum {                      /* PifHeader.texFormat / clutFormat */
    PIF_FMT_32 = 0x12,      /* 32 bits per pixel (clut entries: 32-bit) */
    PIF_FMT_8 = 0x13,       /* 8-bit indexed */
    PIF_FMT_16 = 0x26,
    PIF_FMT_4 = 0x27,       /* 4-bit indexed */
};
#define GS_BLOCK          256     /* GS memory is allocated in blocks of 256 bytes */

#define HOST_SEEK_END     5
#define HOST_SEEK_SET     6

#define RSX_TEX_SIZE      0x24    /* one entry of the EffectTexHeaders table */
#define TEXREF_EFFECT_0   (-1)    /* MobyGifRef.tex values below 0 pick fixed effect textures */
#define TEXREF_EFFECT_0B  (-2)
#define TEXREF_EFFECT_1   (-3)

#define JOINT_SCALE       (1.0f / 1024.0f)

#define OCLASS_RATCHET    0x472
#define RATCHET_SEQ_FIXES 33

/* the GIF texture references of a moby class's packets (16 bytes each) */
struct MobyGifRef {
    int tex;                 /* 0x00  index into EffectTexHeaders, or after relocation the header */
    int unk04;               /* 0x04 */
    int unk08;               /* 0x08 */
    u8 wrap;                 /* 0x0c  derived from the header's format word when 0 */
    u8 _pad0d[3];            /* 0x0d */
};

/* the header the class's packets offset points at */
struct MobyPacketHeader {
    u32 cnt0;                /* 0x00 */
    u32 cnt1;                /* 0x04 */
    MobyGifRef *gifs0;       /* 0x08 */
    MobyGifRef *gifs1;       /* 0x0c */
    u32 rsxOffset0;          /* 0x10  turned into RSX offsets */
    u32 rsxOffset1;          /* 0x14 */
};

/* per joint: a 4x4 matrix whose translation is stored in 1/1024 units */
struct MobyJoint {
    float mtx[4][4];
};

/* the sky file (g_SkyData) as ParseSky sees it */
struct SkyCluster {
    Vec4 bSphere;            /* 0x00 */
    void *data;              /* 0x10 */
    short counts[6];         /* 0x14 */
};
struct SkyShell {
    int clusterCnt;          /* 0x00 */
    int unk04[3];            /* 0x04 */
    SkyCluster clusters[];   /* 0x10 */
};
struct SkyData {
    int pad;                 /* 0x00 */
    short clearScreen;       /* 0x04 */
    short shellCnt;          /* 0x06 */
    short spriteCnt;         /* 0x08 */
    short spriteMax;         /* 0x0a */
    short texCnt;            /* 0x0c */
    short fxCnt;             /* 0x0e */
    sky_tex *texs;           /* 0x10  read as {pal_loc, tex_loc, u_size, v_size} first */
    void *vtxData;           /* 0x14 */
    u8 *shellTexs;           /* 0x18 */
    void *fxData;            /* 0x1c  may be absent */
    SkyShell *shells[];      /* 0x20 */
};

/* EffectTex / sky_tex from a {pal_loc, tex_loc, u_size, v_size} definition */
static inline void SetTexFromDef(sky_tex *tex, const int *def)
{
    tex->pal_ofs = (u16)(def[0] >> 4);
    tex->tex_ofs = (u16)(def[1] >> 4);
    tex->u_log = (u16)FastLog2(def[2]);
    tex->v_log = (u16)FastLog2(def[3]);
    tex->tex0 = 0;
    tex->tex1 = 0;
}

// 0x00db1e0 (0x14 bytes)
void SECTION_HEADER_LOADERS(void)
{
    DAT_0072479c = 0x10000;
}

// 0x00db200 (0x40 bytes)
// A byte map of values between min and max (MB_SampleByteGrid reads it).
void LoadByteGrid(ByteGridHeader *grid)
{
    g_byteGridStride = grid->stride;
    g_byteGridRows = grid->rows;
    g_byteGridMin = grid->min;
    g_byteGridData = (u8 *)(grid + 1);
    g_byteGridMax = grid->max;
}

// 0x00db240 (0xac bytes)
// Not called. A count, `count` 32-byte entries, then an offset per entry to the entry, whose
// second word is an offset too; both are relative to the offset table.
void Loaders_RelocEffectTable(int *table)
{
    int count = table[0];

    g_EffectTableEntries = table + 4;
    g_EffectTableOffsets = table + 4 + count * 8;
    g_EffectTableCnt = count;

    for (int i = 0; i < count; i++) {
        g_EffectTableOffsets[i] += (int)g_EffectTableOffsets;
    }

    for (int i = 0; i < count; i++) {
        int *entry = (int *)g_EffectTableOffsets[i];

        entry[1] += (int)g_EffectTableOffsets;
    }
}

// 0x00db2ec (0x4b8 bytes)
// Uploads a pif's clut and mips to GS memory and builds its TEX0/TEX1/MIPTBP1 registers.
int ParsePif(struct PifHeader *pPif, u64 *tex_regs)
{
    PifParser parser;
    u32 clutImage;
    u32 texImage;

    FastMemSet(&parser, 0, sizeof(parser));

    int format = pPif->texFormat;
    if (format == PIF_FMT_4 || format == PIF_FMT_8) {
        bool clut32 = pPif->clutFormat == PIF_FMT_32;

        parser.pClut = pPif + 1;
        if (format == PIF_FMT_4) {
            parser.cSize = clut32 ? 16 * 4 : 16 * 2;
        }
        else {
            parser.cSize = clut32 ? 256 * 4 : 256 * 2;
        }
    }
    else if (format == PIF_FMT_16 || format == PIF_FMT_32) {
        parser.pClut = NULL;
        parser.cSize = 0;
    }

    parser.uLog = FastLog2(pPif->uSize);
    parser.vLog = FastLog2(pPif->vSize);
    parser.pTex[0] = (u8 *)(pPif + 1) + parser.cSize;

    format = pPif->texFormat;
    if (format == PIF_FMT_4) {
        parser.tSize[0] = pPif->uSize * pPif->vSize >> 1;
    }
    else if (format == PIF_FMT_16) {
        parser.tSize[0] = pPif->uSize * pPif->vSize * 2;
    }
    else if (format == PIF_FMT_8) {
        parser.tSize[0] = pPif->uSize * pPif->vSize;
    }
    else if (format == PIF_FMT_32) {
        parser.tSize[0] = pPif->uSize * pPif->vSize * 4;
    }

    /* the clut: a 8x2 block for 4-bit textures, 16x16 for 8-bit */
    if (format == PIF_FMT_4 || format == PIF_FMT_8) {
        parser.cPos = g_GsRamAlloc >> 8;
        if (format == PIF_FMT_4) {
            g_GsRamAlloc += GS_BLOCK;
            sceGsSetDefLoadImage(&clutImage, parser.cPos, 1, pPif->clutFormat, 0, 0, 8, 2);
        }
        else {
            g_GsRamAlloc += parser.cSize;
            sceGsSetDefLoadImage(&clutImage, parser.cPos, 1, pPif->clutFormat, 0, 0, 16, 16);
        }
        FlushCache(0);
        sceGsExecLoadImage(&clutImage, parser.pClut);
        sceGsSyncPath(0, 0);
    }

    /* each mip is a quarter of the one before and follows it */
    for (int i = 1; i < pPif->mipLevels; i++) {
        parser.tSize[i] = parser.tSize[i - 1] >> 2;
        parser.pTex[i] = (u8 *)parser.pTex[i - 1] + parser.tSize[i - 1];
    }

    for (int i = 0; i < pPif->mipLevels; i++) {
        int tbw = pPif->uSize >> (i + 6);

        parser.tPos[i] = g_GsRamAlloc >> 8;
        parser.tbw[i] = tbw < 1 ? 1 : tbw;
        sceGsSetDefLoadImage(&texImage, parser.tPos[i], parser.tbw[i], pPif->texFormat, 0, 0, pPif->uSize >> i,
                             pPif->vSize >> i);
        FlushCache(0);
        sceGsExecLoadImage(&texImage, parser.pTex[i]);
        sceGsSyncPath(0, 0);

        int size = parser.tSize[0] >> (i * 2);
        g_GsRamAlloc += size < GS_BLOCK ? GS_BLOCK : size;
    }

    tex_regs[0] = SCE_GS_SET_TEX0(parser.tPos[0], parser.tbw[0], pPif->texFormat, parser.uLog, parser.vLog, 1, 0,
                                  parser.cPos, pPif->clutFormat, 0, 0, 4);
    tex_regs[1] = SCE_GS_SET_TEX1(0, pPif->mipLevels - 1, 1, 3, 0, 0, 0xffa0);
    tex_regs[2] = SCE_GS_SET_MIPTBP1(parser.tPos[1], parser.tbw[1], parser.tPos[2], parser.tbw[2], parser.tPos[3],
                                     parser.tbw[3]);
    return -1;
}

// 0x00db7a4 (0x134 bytes)
// A host file of pifs: a count, then an offset per pif from the start of the file.
int LoadPifFile(char *filename)
{
    int *file = (int *)g_pPifFileBuffer;

    int handle = HostOpen(filename, 0);
    if (handle < 0) {
        return 0;
    }

    int size = HostSeek(handle, 0, HOST_SEEK_END);
    HostSeek(handle, 0, HOST_SEEK_SET);
    if (HostRead(handle, file, size) != size) {
        HostClose(handle);
        return 0;
    }
    HostClose(handle);

    if (size == 0) {
        return 0;
    }

    int count = file[0];
    for (int i = 0; i < count; i++) {
        ParsePif((PifHeader *)((u8 *)file + file[i + 1]), g_PifFileTexRegs[i]);
    }
    return count;
}

// 0x00db8d8 (0x54 bytes)
// The particle texture frames in the space wad: a count, the first texture index, the base of
// the frame data, then an offset per frame.
void Loaders_RelocSpaceWadPtrs(int *data)
{
    int *offsets = data + 4;
    int count = data[0];
    int base = data[2];

    g_PartTexBaseIndex = data[1];
    for (int i = 0; i < count; i++) {
        (&g_PartTexFrames)[i] = (int)data + offsets[i] + base;
    }
}

// 0x00db92c (0x10c bytes)
void ParseEffectTexs(int *tex_defs, int tex_cnt)
{
    g_EffectTexCnt = 0;

    for (int i = 0; i < tex_cnt; i++) {
        SetTexFromDef(&g_EffectTexs[g_EffectTexCnt], tex_defs);
        tex_defs += 4;
        g_EffectTexCnt++;
    }
}

// 0x00dba38 (0x1fc bytes)
void ParseSky(char *data)
{
    SkyData *sky = (SkyData *)data;

    g_SkyData = data;
    sky->clearScreen = 1;
    sky->texs = (sky_tex *)(data + (int)sky->texs);
    sky->vtxData = data + (int)sky->vtxData;
    sky->shellTexs = (u8 *)data + (int)sky->shellTexs;
    if (sky->fxData != NULL) {
        sky->fxData = data + (int)sky->fxData;
    }

    /* the texture definitions are converted in place */
    int *def = (int *)sky->texs;
    for (int i = 0; i < sky->texCnt; i++) {
        int texDef[4] = { def[0], def[1], def[2], def[3] };

        SetTexFromDef(&sky->texs[i], texDef);
        def += 4;
    }

    for (int i = 0; i < sky->shellCnt; i++) {
        SkyShell *shell = (SkyShell *)(data + (int)sky->shells[i]);

        sky->shells[i] = shell;
        for (int j = 0; j < shell->clusterCnt; j++) {
            shell->clusters[j].data = data + (int)shell->clusters[j].data;
        }
    }
}

/* Points a class's GIF texture references at their EffectTexHeaders entries. */
static inline void ResolveGifRefs(MobyGifRef *ref, u32 count)
{
    for (u32 i = 0; i < count; i++, ref++) {
        int header = ref->tex;

        if (header < 0) {
            if (header == TEXREF_EFFECT_0 || header == TEXREF_EFFECT_0B) {
                header = EffectTexHeaders;
                ref->tex = header;
            }
            else if (header == TEXREF_EFFECT_1) {
                header = EffectTexHeaders + RSX_TEX_SIZE;
                ref->tex = header;
            }
        }
        else {
            header = EffectTexHeaders + header * RSX_TEX_SIZE;
            ref->tex = header;
        }

        if (ref->wrap == 0) {
            u32 format = *(u32 *)(header + 8);

            ref->wrap = (u8)(((format >> 6) & 0xc) | (format & 3));
        }
    }
}

// 0x00dbc38 (0x4b4 bytes)
// DL's ParseMobyClass: relocates a moby class and scales its joints. Everything in the class is
// an offset from the class itself.
void LoadMobyModel(MobyClass *pClass, void *tex_regs, char *tex_refs, int oClass)
{
    u8 *base = (u8 *)pClass;

    if (pClass->packets != NULL) {
        MobyPacketHeader *packets = (MobyPacketHeader *)(base + (int)pClass->packets);
        u32 memBase = *(u32 *)((u8 *)g_pIdolDraw + 0x4a8);

        pClass->packets = packets;
        MobyGifRef *gifs0 = packets->gifs0;
        MobyGifRef *gifs1 = packets->gifs1;
        if (gifs0 != NULL) {
            gifs0 = (MobyGifRef *)(base + (int)gifs0);
            packets->gifs0 = gifs0;
        }
        if (gifs1 != NULL) {
            gifs1 = (MobyGifRef *)(base + (int)gifs1);
            packets->gifs1 = gifs1;
        }

        packets->rsxOffset1 = (u32)base + (packets->rsxOffset1 - memBase);
        packets->rsxOffset0 = (u32)base + (packets->rsxOffset0 - memBase);

        ResolveGifRefs(gifs0, packets->cnt0);
        ResolveGifRefs(gifs1, packets->cnt1);
    }

    if (pClass->collision != NULL) {
        pClass->collision = (u16 *)(base + (int)pClass->collision);
    }

    if (pClass->skeleton != NULL) {
        MobyJoint *joint = (MobyJoint *)(base + (int)pClass->skeleton);

        pClass->skeleton = joint;
        for (u32 i = 0; i < pClass->joint_cnt; i++, joint++) {
            joint->mtx[0][3] = 0.0f;
            joint->mtx[1][3] = 0.0f;
            joint->mtx[2][3] = 0.0f;
            joint->mtx[3][3] = 1.0f;
            joint->mtx[3][0] *= JOINT_SCALE;
            joint->mtx[3][1] *= JOINT_SCALE;
            joint->mtx[3][2] *= JOINT_SCALE;
        }
    }

    if (pClass->common_trans != NULL) {
        float *trans = (float *)(base + (int)pClass->common_trans);

        pClass->common_trans = trans;
        for (u32 i = 0; i < pClass->joint_cnt; i++, trans += 4) {
            trans[0] *= JOINT_SCALE;
            trans[1] *= JOINT_SCALE;
            trans[2] *= JOINT_SCALE;
        }
    }

    if (pClass->anim_joints != NULL) {
        int *animJoints = (int *)(base + (int)pClass->anim_joints);

        pClass->anim_joints = animJoints;
        for (int i = 0; i < animJoints[0]; i++) {
            animJoints[i + 1] += (int)base;
        }
    }

    if (pClass->SoundDefs != NULL) {
        pClass->SoundDefs = base + (int)pClass->SoundDefs;
    }

    for (int i = 0; i < pClass->seq_cnt; i++) {
        if (pClass->seqs[i] == NULL) {
            continue;
        }

        MobySeq *seq = (MobySeq *)(base + (int)pClass->seqs[i]);
        pClass->seqs[i] = seq;
        if (seq->trigs != NULL) {
            seq->trigs = (short *)(base + (int)seq->trigs);
        }
        for (int j = 0; j < seq->frameCnt; j++) {
            seq->frames[j] = (MobyFrame *)(base + (int)seq->frames[j]);
        }
    }

    /* widescreen: shift some of Ratchet's frames */
    if (oClass == OCLASS_RATCHET && *(int *)((u8 *)g_pIdolDraw + 0xc) != 0) {
        for (u32 i = 0; i < RATCHET_SEQ_FIXES; i++) {
            SeqFrameFix *fix = &g_RatchetWideFixes[i];
            MobySeq *seq = pClass->seqs[fix->seq];
            u32 end = fix->endFrame < seq->frameCnt ? fix->endFrame : seq->frameCnt;

            for (u32 frameIndex = fix->startFrame; frameIndex < end; frameIndex++) {
                MobyFrame *frame = seq->frames[frameIndex];
                u8 *data = (u8 *)frame + (u16)frame->unk0c;

                *(short *)(data + 0x12) += (short)fix->add;
            }
        }
    }
}

// 0x00dc0ec (0xf4 bytes)
// DL's ParseMoby: gives the class the next mClass slot.
void LoadMobyPClasses(MobyClass *pClass, void *tex_regs, char *tex_refs, int oClass)
{
    int mClass = oClass_to_mClass_lookup;

    (&MobyClassLookup)[oClass] = (char)mClass;
    (&mClass_to_oClass)[mClass] = (MOBY_OCLASSES)oClass;
    MobyClasses[mClass] = pClass;

    if (pClass == NULL) {
        GetMobyFunction((MOBY_OCLASSES)oClass);
        oClass_to_mClass_lookup++;
        return;
    }

    ((u32 *)&MobyMipDists)[mClass] = *(u32 *)&pClass->bangles;
    GetMobyFunction((MOBY_OCLASSES)oClass);
    oClass_to_mClass_lookup++;
    LoadMobyModel(pClass, tex_regs, tex_refs, oClass);
}
