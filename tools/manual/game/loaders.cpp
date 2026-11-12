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

/* the spaceship file's four textures go to these slots of the GS address table */
#define GSADDR_SHIP_TEX       0x2b    /* 8-bit 64x64 */
#define GSADDR_SHIP_MIP       0x2c    /* 8-bit 32x32 */
#define GSADDR_SHIP_CLUT      0x2d    /* 32-bit 16x16 */
#define GSADDR_COCKPIT_CLUT   0x2e    /* 32-bit 16x16 */

#define SHIP_TEX_HEADER       0x430   /* the texture block's header */
#define SHIP_TEX_SIZE         0x14000
#define COCKPIT_TEX_SIZE      0x4000
#define SHIP_TEX_TAG          0x80000000
#define COCKPIT_TEX_TAG       0x70000000

/* tex_def fields (shorts) that hold GS block addresses */
#define TEXDEF_PAL            5
#define TEXDEF_MIP2           6
#define TEXDEF_MIP3           7

#define GS_PSMT8              0x13
#define GS_PSMCT32            0x12

#define VISGIF_FIXED_A        (-2)    /* SetUpVisGif index: the fixed textures 16 / 17 of the pif file */
#define VISGIF_FIXED_B        (-3)
#define PIF_FIXED_TEX_A       16
#define PIF_FIXED_TEX_B       17

#define MOBY_MEM_MAX          512

/* the spaceship file: offsets of the ship class, its textures, the cockpit class and its
   textures */
struct SpaceshipFile {
    int shipClass;
    int shipTex;
    int cockpitClass;
    int cockpitTex;
};

/* one record of the table PrintMobyMemory reads (32 bytes) */
struct MobyClassRecord {
    int offset;              /* 0x00  of the class in the moby data, 0 if absent */
    int oClass;              /* 0x04 */
    int unk08[6];            /* 0x08 */
};

static inline void UploadImage(u32 *image, int gsAddr, int format, int size, void *src)
{
    sceGsSetDefLoadImage(image, (GSmem.base + gsAddr) >> 8, 1, format, 0, 0, size, size);
    FlushCache(0);
    sceGsExecLoadImage(image, src);
    sceGsSyncPath(0, 0);
}

// 0x00dc210 (0x5ec bytes)
// Copies the chosen spaceship out of the spaceship file to `data`, uploads its textures and loads
// the ship and cockpit classes. Returns the memory after the textures.
u8 *LoadSpaceshipModel(int *data, int *gs_addrs)
{
    SpaceshipFile *ship = (SpaceshipFile *)data;
    u8 *base = (u8 *)data;
    u32 image;

    FastMemCopy(data, (void *)DAT_0096456c, *(int *)(&DAT_010ea114 + g_SpaceshipVariant * 8) << 11);

    u8 *shipTex = base + ship->shipTex;
    u8 *cockpitTex = base + ship->cockpitTex;
    for (int i = 0; i < 4; i++) {
        if (i == 0) {
            UploadImage(&image, gs_addrs[GSADDR_SHIP_TEX], GS_PSMT8, 64, shipTex + SHIP_TEX_HEADER + 0x14000);
        }
        else if (i == 1) {
            UploadImage(&image, gs_addrs[GSADDR_SHIP_MIP], GS_PSMT8, 32, shipTex + SHIP_TEX_HEADER + 0x15000);
        }
        else if (i == 2) {
            UploadImage(&image, gs_addrs[GSADDR_SHIP_CLUT], GS_PSMCT32, 16, shipTex + 0x30);
        }
        else {
            UploadImage(&image, gs_addrs[GSADDR_COCKPIT_CLUT], GS_PSMCT32, 16, cockpitTex + 0x30);
        }
    }

    /* the ship: its textures move down over the header */
    g_SpaceshipTexDef[TEXDEF_PAL] = (short)(gs_addrs[GSADDR_SHIP_CLUT] >> 8);
    g_SpaceshipTexDef[TEXDEF_MIP2] = (short)(gs_addrs[GSADDR_SHIP_TEX] >> 8);
    g_SpaceshipTexDef[TEXDEF_MIP3] = (short)(gs_addrs[GSADDR_SHIP_MIP] >> 8);
    *(Vec4 *)g_MobyTexDefs[g_MobyTexDefCnt] = *(Vec4 *)g_SpaceshipTexDef;
    g_MobyTexAddrs[g_MobyTexDefCnt] = (int)shipTex + SHIP_TEX_TAG;
    FastMemCopy(shipTex, shipTex + SHIP_TEX_HEADER, SHIP_TEX_SIZE);
    u8 *dest = shipTex + SHIP_TEX_SIZE;
    g_MobyTexRef = (u8)g_MobyTexDefCnt;

    int oClass = OCLASSES_SPACESHIP[g_SpaceshipVariant];
    if ((&MobyClassLookup)[oClass] == 0xff) {
        LoadMobyPClasses((MobyClass *)(base + ship->shipClass), g_SpaceshipTexDef - g_MobyTexDefCnt * 8,
                         (char *)&g_MobyTexRef, oClass);
    }
    g_MobyTexDefCnt++;

    /* the cockpit: its textures go after the ship's */
    g_CockpitTexDef[TEXDEF_PAL] = (short)(gs_addrs[GSADDR_COCKPIT_CLUT] >> 8);
    *(Vec4 *)g_MobyTexDefs[g_MobyTexDefCnt] = *(Vec4 *)g_CockpitTexDef;
    g_MobyTexAddrs[g_MobyTexDefCnt] = (int)dest + COCKPIT_TEX_TAG;
    FastMemCopy(dest, cockpitTex + SHIP_TEX_HEADER, COCKPIT_TEX_SIZE);
    g_MobyTexRef = (u8)g_MobyTexDefCnt;

    oClass = OCLASSES_COCKPIT[g_SpaceshipVariant];
    if ((&MobyClassLookup)[oClass] == 0xff) {
        LoadMobyPClasses((MobyClass *)(base + ship->cockpitClass), g_CockpitTexDef - g_MobyTexDefCnt * 8,
                         (char *)&g_MobyTexRef, oClass);
    }

    DAT_00731c90 = 1;
    DAT_00731c94 = 1;
    DAT_00a561c4 = 0;
    g_MobyTexDefCnt++;
    return dest + COCKPIT_TEX_SIZE;
}

// 0x00dc7fc (0x360 bytes)
// Fills the TEX1 / CLAMP / TEX0 / MIPTBP1 values of a GIF packet from a texture definition
// (shorts: [2] width, [3] height, [4] mips, [5] clut, [6] / [7] mips 2 and 3 as GS blocks).
// index -1 is a fixed 8x8 texture, -2 / -3 the two fixed pif-file textures.
void SetUpVisGif(u64 *pGif, short *tex_def, int mip_dist, int filter, int u_clamp, int v_clamp, int index)
{
    int tbw0 = tex_def[2] >> 6;
    int tbw1 = tex_def[2] >> 7;

    tbw0 = tbw0 < 1 ? 1 : tbw0;
    tbw1 = tbw1 < 1 ? 1 : tbw1;

    int uLog = FastLog2(tex_def[2]);
    int vLog = FastLog2(tex_def[3]);
    int gsBase = GSmem.base >> 8;
    int pal = tex_def[TEXDEF_PAL] + gsBase;
    int mip2 = tex_def[TEXDEF_MIP2] + gsBase;
    int mip3 = tex_def[TEXDEF_MIP3] + gsBase;

    if (index >= 0) {
        pGif[0] = SCE_GS_SET_TEX1(0, tex_def[4] - 1, 1, filter, 0, 0, mip_dist);
        pGif[2] = SCE_GS_SET_CLAMP(u_clamp, v_clamp, 0, 0, index, 0);
        pGif[4] = SCE_GS_SET_TEX0(0, tbw0, GS_PSMT8, uLog, vLog, 1, 0, pal, GS_PSMCT32, 0, 0, 4);
        pGif[6] = SCE_GS_SET_MIPTBP1(0, tbw1, mip2, 1, mip3, 1);
    }
    else if (index <= VISGIF_FIXED_A) {
        u64 *regs = g_PifFileTexRegs[index == VISGIF_FIXED_B ? PIF_FIXED_TEX_B : PIF_FIXED_TEX_A];

        pGif[0] = SCE_GS_SET_TEX1(0, 0, 1, filter, 0, 0, mip_dist);
        pGif[2] = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
        pGif[4] = regs[0];
        pGif[6] = regs[2];
    }
    else {
        pGif[0] = SCE_GS_SET_TEX1(0, 0, 1, filter, 0, 0, mip_dist);
        pGif[2] = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
        pGif[4] = SCE_GS_SET_TEX0(0x3ffb, 1, GS_PSMCT32, 3, 3, 1, 0, 0, 0, 0, 0, 4);
        pGif[6] = SCE_GS_SET_MIPTBP1(0, 0, 0, 0, 0, 0);
    }
}

// 0x00dcb5c (0x4 bytes)
void STUB_000dcb5c(...)
{
}

// 0x00dcb60 (0x4 bytes)
void STUB_000dcb60(...)
{
}

// 0x00dcb64 (0x5c bytes)
// A sequence loaded on its own: its pointers are relative to the sequence.
void ParseMobySeq(MobyClass *pClass, int seq)
{
    MobySeq *sequence = pClass->seqs[seq];
    u8 *base = (u8 *)sequence;

    if (sequence->trigs != NULL) {
        sequence->trigs = (short *)(base + (int)sequence->trigs);
    }

    for (int i = 0; i < sequence->frameCnt; i++) {
        sequence->frames[i] = (MobyFrame *)(base + (int)sequence->frames[i]);
    }
}

// 0x00dcbc0 (0x4 bytes)
void STUB_000dcbc0(...)
{
}

// 0x00dcbc4 (0x4 bytes)
void STUB_000dcbc4(...)
{
}

// 0x00dcbc8 (0x4 bytes)
void STUB_000dcbc8(...)
{
}

// 0x00dcbcc (0x7c bytes)
// The collision file: offsets of the collision grid and of the hero-only collision.
void ParseColl(char *data)
{
    int *offsets = (int *)data;

    if (offsets[0] != 0) {
        g_CollOutput.grid = data + offsets[0];
    }

    if (offsets[1] != 0) {
        g_HeroCollision = (HeroCollHeader *)(data + offsets[1]);
        for (int i = 0; i < g_HeroCollision->cellCount; i++) {
            HeroCollCell *cell = &g_HeroCollision->cells[i];

            cell->data = (u8 *)g_HeroCollision + (int)cell->data;
        }
    }
}

// 0x00dcc50 (0x1ec bytes)
// Debug: prints the moby classes by size, biggest first. A class's size runs to the next class
// (or to the one after, when the next is absent).
void PrintMobyMemory(int *classes, int cnt)
{
    struct {
        float oClass;
        float kbytes;
    } sizes[MOBY_MEM_MAX + 1];
    MobyClassRecord *records = (MobyClassRecord *)classes;

    for (int i = 0; i < cnt; i++) {
        MobyClassRecord *record = &records[i];
        float kbytes;

        sizes[i].oClass = (float)record->oClass;
        if (record->offset == 0) {
            kbytes = 0.0f;
        }
        else {
            int end = record[1].offset != 0 ? record[1].offset : record[2].offset;

            kbytes = (float)((double)FastIntToDouble(end - record->offset) * (1.0 / 1024.0));
            sizes[i + 1].oClass = -1.0f;
            sizes[i + 1].kbytes = 0.0f;
        }
        sizes[i].kbytes = kbytes;
    }

    bool sorted;
    do {
        sorted = true;
        for (int i = 0; i < cnt; i++) {
            if (sizes[i].kbytes < sizes[i + 1].kbytes) {
                float oClass = sizes[i].oClass;
                float kbytes = sizes[i].kbytes;

                sorted = false;
                sizes[i].kbytes = sizes[i + 1].kbytes;
                sizes[i].oClass = sizes[i + 1].oClass;
                sizes[i + 1].oClass = oClass;
                sizes[i + 1].kbytes = kbytes;
            }
        }
    } while (!sorted);

    for (int i = 0; i < cnt; i++) {
        printf("moby %d:      %.1fK\n", FastDoubleToInt(sizes[i].oClass), (double)sizes[i].kbytes);
    }
}

// 0x00dce3c (0x4 bytes)
void STUB_000dce3c(...)
{
}

// 0x00dce40 (0x10c bytes)
// Same as boot's LoadLanguageHelpMsgs.
void LoadHelp(void)
{
    char path[128];

    if (g_JapaneseMode) {
        sprintf(path, "rc1/ps3data/global/locale/japanese");
    }
    else {
        sprintf(path, "rc1/ps3data/global/locale/%s", GetLanguageNameByIdx());
    }

    LoadAssetFromFile(path, g_pLocaleBuffer, 0x40000);

    /* drop the 8-byte header: { count, size }, then the messages */
    g_Help.num_message = g_pLocaleBuffer[0];
    HelpMsgs = (HelpMsg *)g_pLocaleBuffer;
    FastMemCopy32(g_pLocaleBuffer, g_pLocaleBuffer + 2, ((g_pLocaleBuffer[1] + 3) & ~3) - 8);
    for (int i = 0; i < g_Help.num_message; i++) {
        u32 *message = (u32 *)((u8 *)HelpMsgs + i * 16);

        message[0] += (u32)HelpMsgs - 8;
    }
}
