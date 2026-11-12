// game/loaders.cpp -- level data loading: textures, moby classes, scenes, the level file itself
// STATUS: CLEAN (checked against the asm; local names are mine)
// MERGE (22 of 41 functions cleaned; the rest are generated)
// 41 functions, 0xdb1e0-0xe0e14
//
// Most of the data comes in with offsets relative to its own start that are turned into
// pointers here ("relocated"). The texture code is the PS2 path: on PS3 the sceGs* uploads and
// the SCE_GS_SET_* register packers are stubs, so the GS addresses and registers computed here
// are bookkeeping only.
#include <stdio.h>
#include <string.h>
#include "game/loaders.h"
#include "game/bloaders.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initonce.h"
#include "game/initspace.h"
#include "game/lights.h"
#include "game/map.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/respawn.h"
#include "game/skyfunc.h"
#include "game/skyproc.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/tieproc.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/shrubfunc.h"
#include "idol/tfragfunc.h"
#include "sdk/fios.h"
#include "sdk/libfios/fios_op.h"
#include "sdk/libfios/fios_scheduler.h"
#include "sdk/mUnk4.h"
#include "sdk/rUnk.h"
#include "sdk/sce.h"

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


// 0x00dcf58 (0x1fe0 bytes)
// strings: 006522ec: 'rc1/ps3data/level%d/gameplay_pal' | 00652314: 'rc1/ps3data/level%d/gameplay_ntsc' | 0065233c: '!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n' | 0065238c: '***\nocclusion out of date on mobys (%d / %d)\n***\n' | 006523c4: '***\nocclusion out of date on tfrag\n***\n' | 006523ec: '***\nno occlusion\n***\n' | 006522a8: 'rc1/ps3data/global/locale/%s' | 006522c8: 'rc1/ps3data/global/locale/japanese'

ulonglong NAVG_LoadFile(int param_1)

{
  u8 uVar1;
  f32 fVar2;
  ushort uVar3;
  MobyModeBit MVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  bool bVar9;
  MobyInstance *pMVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar16;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar23;
  uint uVar17;
  int iVar18;
  Spline **ppSVar19;
  MobyInstance *pMVar20;
  TieInstance *pTVar21;
  undefined4 *puVar22;
  int iVar24;
  ABGR *pAVar25;
  ushort *puVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined2 *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint *puVar32;
  uint uVar33;
  int *levelVarBlock;
  uint *puVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  ABGR *pAVar39;
  longlong lVar38;
  undefined4 *puVar40;
  short *psVar41;
  int *piVar42;
  uint *puVar43;
  int iVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  char acStack_1d0 [128];
  undefined8 local_150;
  int local_148 [2];
  char acStack_140 [64];
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uint *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  uVar5 = Gameplay;
  uVar28 = (ulonglong)Gameplay;
  uVar31 = (ulonglong)DAT_00a108f4;
  uVar12 = get_default_fs();
  if (g_IsPal == 0) {
    snprintf(acStack_140,"rc1/ps3data/level%d/gameplay_ntsc",Level);
  }
  else {
    snprintf(acStack_140,"rc1/ps3data/level%d/gameplay_pal",Level);
  }
  uVar13 = _ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(uVar12,0,acStack_140,1,local_148);
  _ZN4cell4fios2op8syncWaitEPx(uVar13,0);
  if (local_148[0] == 0) {
    do {
      cellSysutilCheckCallback(local_148[0]);
      local_148[0] = 100;
      syscall();
    } while( true );
  }
  uVar13 = _ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(uVar12,0,acStack_140,&local_150,3);
  _ZN4cell4fios2op8syncWaitEPx(uVar13,0);
  if ((DAT_00a108f4 == 0) || (local_c0 = ZEXT48(&g_MemSlotsBase), param_1 != 0)) {
    local_c0 = ZEXT48(&g_MemSlotsBase);
    uVar31 = idol::kalloc(TEX_BASE,(int)local_150);
    DAT_00a108f4 = (uint)uVar31;
  }
  uVar13 = read_req_setup(uVar12,0,local_148[0],uVar31,local_150,0xffffffffffffffff);
  uVar13 = _ZN4cell4fios2op8syncWaitEPx(uVar13,0);
  if ((int)uVar13 != 0) {
    do {
      cellSysutilCheckCallback(uVar13);
      uVar13 = 100;
      syscall();
    } while( true );
  }
  uVar12 = filehandle_close_setup(uVar12,0,local_148[0]);
  uVar12 = _ZN4cell4fios2op8syncWaitEPx(uVar12,0);
  if ((int)uVar12 != 0) {
    do {
      cellSysutilCheckCallback(uVar12);
      uVar12 = 100;
      syscall();
    } while( true );
  }
  FlushCache(0);
  STUB_000e9150(DAT_00964568,uVar31);
  FlushCache(0);
  FastMemSet(&g_heroMtx,0,0x2310);
  FastMemSet(&GameCamera,0,0x3a0);
  FastMemSet(&g_AnimLayerPool,0,0x180);
  seedRand(0x4d2);
  SetNtscPalTiming();
  g_CollOutput.padding[0] = (int)&g_CollMobyJointCache;
  g_CollOutput.padding[1] = (int)&MobyClassRef;
  g_CollOutput.padding[2] = 0;
  g_CollOutput.collCount = 0;
  g_CollOutput.damageNext = 0;
  FastMemSetZero(g_MobyGrid,0x10000);
  FastMemSetZero(&MobyGridAlloc,0x60);
  puVar32 = (uint *)uVar31;
  uVar14 = uVar31 + *puVar32 & 0xffffffff;
  levelVarBlock = (int *)(uVar31 + *puVar32);
  g_ViewContext.occlColor0 = *levelVarBlock;
  g_ViewContext.occlColor1 = levelVarBlock[1];
  g_ViewContext.occlColor2 = levelVarBlock[2];
  levelFog.r = (u8)levelVarBlock[3];
  levelFog.g = (u8)levelVarBlock[4];
  levelFog.b = (u8)levelVarBlock[5];
  LevelFogNearDist = levelVarBlock[6];
  LevelFogFarDist = (float)levelVarBlock[7];
  LevelFogNearIntensity = (float)levelVarBlock[8];
  LevelFogFarIntensity = (float)levelVarBlock[9];
  HeroDeathHeight = levelVarBlock[10];
  g_shipSplinePath = levelVarBlock[0xf];
  g_shipCameraStartCuboid = levelVarBlock[0x10];
  g_shipCameraEndCuboid = levelVarBlock[0x11];
  UpdateFog();
  TfragDrawDist = 512000.0;
  DAT_00a390b8 = 500;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  PartClipDist = 0x1f4000;
  STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
  STUB_00174bd8(&DAT_00a10680);
  FastMemSetZero(PointLights,0x100);
  FastMemSetZero(&PointLightData,0x180);
  FastMemSetZero(DirectionalLights,0x400);
  local_c8 = ZEXT48(&g_SpaceshipPtr);
  local_b8 = ZEXT48(&g_heroMtx);
  iVar16 = *(int *)(g_EngineData + 0x60);
  local_d0 = uVar14;
  if (iVar16 < 0xc) {
    if (iVar16 != 0) goto LAB_000dd3fc;
  }
  else {
    printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n")
    ;
    iVar16 = 0xc;
LAB_000dd3fc:
    FastMemCopy32(DirectionalLights,DAT_00a15f70,iVar16 << 6);
  }
  if (puVar32[0x20] == 0) {
    BlenderCnt = 0;
  }
  else {
    uVar14 = uVar31 + puVar32[0x20];
    lVar37 = (uVar14 & 0xffffffff) + 0x10;
    BlenderCnt = *(uint *)uVar14;
    if (BlenderCnt != 0) {
      FastMemCopy32(&DAT_00a1c900,lVar37,BlenderCnt << 4);
      FastMemCopy32
                (g_Blenders,lVar37 + ((ulonglong)BlenderCnt & 0xfffffff) * 0x10 & 0xffffffff,
                 BlenderCnt << 7);
      uVar27 = BlenderCnt;
      if (0 < (int)BlenderCnt) {
        pAVar25 = &g_Blenders[0].dLightA;
        iVar16 = 0;
        pAVar39 = &g_Blenders[0].dLightB;
        do {
          if ((int)*pAVar25 < 0) {
            pAVar25->A = '\0';
            pAVar25->B = '\0';
            pAVar25->G = '\0';
            pAVar25->R = '\v';
          }
          if ((int)*pAVar39 < 0) {
            pAVar39->A = '\0';
            pAVar39->B = '\0';
            pAVar39->G = '\0';
            pAVar39->R = '\v';
          }
          iVar16 = iVar16 + 1;
          pAVar25 = pAVar25 + 0x20;
          pAVar39 = pAVar39 + 0x20;
        } while (iVar16 < (int)uVar27);
      }
    }
  }
  if (puVar32[4] != 0) {
    levelVarBlock = (int *)(uVar31 + puVar32[g_Language + 4]);
    g_Help.num_message = *levelVarBlock;
    HelpMsgs = (int *)uVar5;
    lVar37 = (longlong)(int)((levelVarBlock[1] + 3U & 0xfffffffc) - 8);
    FastMemCopy32(uVar28,(uVar31 + puVar32[g_Language + 4] & 0xffffffff) + 8,lVar37);
    if (0 < g_Help.num_message) {
      iVar35 = 0;
      iVar16 = g_Help.num_message;
      do {
        iVar16 = iVar16 + -1;
        *(uint *)((int)HelpMsgs + iVar35) =
             *(int *)((int)HelpMsgs + iVar35) + ((int)HelpMsgs - 8U);
        iVar35 = iVar35 + 0x10;
      } while (0 < iVar16);
    }
    uVar28 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
  }
  uVar5 = DAT_00a15f80;
  local_e0 = ZEXT48(&TEX_BASE);
  TieCnt = TieCntBase;
  g_TieInstance = TieInstanceBase;
  iVar16 = 0;
  TieInstanceEnd = TieInstanceBase + TieCntBase;
  DAT_00e583f0 = 0;
  if (DAT_00a15f80 != 0) {
    iVar35 = 0;
    levelVarBlock = &DAT_00e574f0;
    puVar26 = &DAT_00e576f0;
    do {
      iVar24 = DAT_00a15f7c + iVar35;
      uVar27 = iVar16 + 1;
      iVar35 = iVar35 + 0x40;
      uVar3 = *(ushort *)(iVar24 + 0x30);
      *levelVarBlock = iVar24;
      *puVar26 = uVar3;
      levelVarBlock = levelVarBlock + 1;
      puVar26 = puVar26 + 1;
      (&DAT_00e577f0)[uVar3] = (char)iVar16;
      iVar16 = iVar16 + 1;
      DAT_00e583f0 = iVar16;
    } while (uVar27 < uVar5);
  }
  ShrubInstanceCnt = ShrubInstanceCnt;
  g_ShrubInstance = ShrubInstanceBase;
  ShrubInstanceEnd = ShrubInstanceBase + ShrubInstanceCnt;
  if (puVar32[2] != 0) {
    uVar14 = uVar31 + puVar32[2];
    lVar38 = (uVar14 & 0xffffffff) + 0x10;
    ImportCameraCnt = *(uint *)uVar14;
    ImportCameras = (int)uVar28;
    lVar37 = ((ulonglong)(uint)ImportCameraCnt & 0x7ffffff) * 0x20;
    if (ImportCameraCnt != 0) {
      FastMemSet(uVar28,0,(int)lVar37);
    }
    uVar28 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (0 < ImportCameraCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        puVar40 = (undefined4 *)lVar38;
        puVar22 = (undefined4 *)(ImportCameras + iVar35);
        iVar35 = iVar35 + 0x20;
        puVar22[3] = *puVar40;
        *puVar22 = puVar40[1];
        puVar22[1] = puVar40[2];
        puVar22[2] = puVar40[3];
        puVar22[4] = puVar40[4];
        puVar22[5] = puVar40[5];
        puVar22[6] = puVar40[6];
        lVar38 = lVar38 + 0x20;
        puVar22[7] = puVar40[7];
      } while (iVar16 < ImportCameraCnt);
    }
  }
  uVar14 = uVar28;
  if (puVar32[3] != 0) {
    uVar15 = uVar31 + puVar32[3];
    lVar37 = (uVar15 & 0xffffffff) + 0x10;
    g_SoundCnt = *(uint *)uVar15;
    if (g_SoundCnt == 0) {
      g_pSoundInstances = 0;
    }
    else {
      g_pSoundInstances = (int)uVar28;
      uVar14 = uVar28 + (ulonglong)g_SoundCnt * 0x90 + 0x3f & 0xffffffc0;
      FastMemSet(uVar28,0,(int)((ulonglong)g_SoundCnt * 0x90));
      if (0 < (int)g_SoundCnt) {
        iVar16 = 0;
        iVar35 = 0;
        do {
          iVar24 = g_pSoundInstances + iVar16;
          FastMemCopy32(iVar24,lVar37,0x90);
          sound_SetupAmbientFunctions(iVar24);
          iVar35 = iVar35 + 1;
          iVar16 = iVar16 + 0x90;
          lVar37 = lVar37 + 0x90;
        } while (iVar35 < (int)g_SoundCnt);
      }
    }
  }
  puVar34 = (uint *)(uVar31 + puVar32[0x11]);
  uVar5 = *puVar34;
  local_100 = (ulonglong)uVar5;
  puVar29 = &____oClassInstanceList;
  g_MobyInstance = (MobyInstance *)uVar14;
  uVar28 = (uVar31 + puVar32[0x11] & 0xffffffff) + 0x10;
  uVar31 = (ulonglong)puVar34[1] + (ZERO_MASK((9 - Level)) & 0x80U);
  local_e8 = puVar32;
  FastMemSet(uVar14,0,(int)((local_100 + uVar31 & 0xffffffff) << 8));
  lVar37 = 0;
  local_d8 = uVar31;
  if (0 < (int)uVar5) {
    iVar35 = 0;
    local_f0 = ZEXT48(&g_Checkpoint.objState[0]);
    iVar16 = 0;
    uVar12 = 0x3fe0000000000000;
    local_f8 = ZEXT48(&DAT_00a202c0);
    lVar37 = 0;
    dVar46 = 0.0;
    do {
      puVar32 = (uint *)uVar28;
      cVar23 = -2;
      uVar5 = puVar32[1];
      uVar27 = puVar32[2];
      uVar30 = puVar32[4];
      uVar6 = puVar32[3];
      uVar28 = uVar28 + ((ulonglong)*puVar32 & 0xfffffffc) & 0xffffffff;
      uVar17 = puVar32[5];
      uVar33 = uVar30;
      if (uVar27 == 0) goto LAB_000ddaac;
      cVar23 = -1;
      if ((uVar27 & 0x10) != 0) {
        cVar23 = NAVG_AllocSlot(Level,uVar6);
      }
      if (*(char *)((int)local_f0 + uVar6) == '\0') {
        iVar24 = (int)uVar6 >> 5;
        if ((uVar27 & 3) == 0) {
          if ((uVar27 & 8) == 0) {
            if ((uVar27 & 0xc) != 4) goto LAB_000ddaac;
            uVar27 = *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar24 * 4) & 1 << (uVar6 & 0x1f);
          }
          else {
            uVar27 = *(uint *)(&g_CheckpointBits + iVar24 * 4) & 1 << (uVar6 & 0x1f);
          }
          if (uVar27 == 0) goto LAB_000ddaac;
          goto LAB_000ddaa0;
        }
        if (*(char *)((int)local_f8 + uVar5) == -1) {
          if ((uVar27 & 2) == 0) goto LAB_000ddaa0;
          uVar33 = uVar17;
          uVar30 = uVar17;
          if ((*(uint *)(&g_CheckpointBits + iVar24 * 4) & 1 << (uVar6 & 0x1f)) != 0) {
            uVar17 = uVar17 + 1;
            uVar33 = ((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0);
          }
        }
        else {
          if ((uVar27 & 1) == 0) goto LAB_000ddaa0;
          if ((*(uint *)(&g_LevelObjBits + Level * 0x100 + iVar24 * 4) & 1 << (uVar6 & 0x1f)) != 0) {
            uVar27 = uVar30 + 1;
            uVar33 = ((int)uVar27 >> 1) + (uint)((int)uVar27 < 0 && (uVar27 & 1) != 0);
          }
        }
LAB_000ddaac:
        *puVar29 = (short)lVar37;
        pMVar20 = (MobyInstance *)((int)&(g_MobyInstance->bSphere).x + iVar35);
        InitMobyInstance(pMVar20,puVar32[6]);
        pMVar20->field74_0xb1 = cVar23;
        pMVar20->uid = (ushort)uVar6;
        pMVar20->levelFlagIdx = (char)uVar5;
        pMVar20->field76_0xb4 = (char)((ushort)(short)uVar33 >> 8);
        pMVar20->field77_0xb5 = (char)(short)uVar33;
        pMVar20->field78_0xb6 = (char)((ushort)(short)uVar30 >> 8);
        pMVar20->field79_0xb7 = (char)(short)uVar30;
        if (pMVar20->pClass != (MobyClass *)0x0) {
          pMVar20->scale = pMVar20->pClass->gScale * (float)puVar32[7];
        }
        pMVar20->drawDistance = (short)puVar32[8];
        pMVar20->updateDistance = (char)puVar32[9];
        (pMVar20->pos).x = (f32)puVar32[0xc];
        (pMVar20->pos).y = (f32)puVar32[0xd];
        (pMVar20->pos).z = (f32)puVar32[0xe];
        (pMVar20->rotation).x = (f32)puVar32[0xf];
        (pMVar20->rotation).y = (f32)puVar32[0x10];
        (pMVar20->rotation).z = (f32)puVar32[0x11];
        pMVar20->group = (s8)puVar32[0x12];
        dVar47 = (double)(float)puVar32[0x14];
        if ((puVar32[0x13] != 0) &&
           (dVar45 = (double)GetGroundZ(uVar12,&pMVar20->pos,0), dVar46 < dVar45)) {
          (pMVar20->pos).z = (float)(dVar45 + dVar47);
        }
        pvVar7 = (void *)puVar32[0x16];
        pMVar20->occlIndex = 0x7f80;
        pMVar20->pVar = pvVar7;
        if (puVar32[0x17] == 0) {
          pMVar20->occlIndex = 0;
        }
        pMVar8 = pMVar20->pClass;
        if (pMVar8 != (MobyClass *)0x0) {
          *(ushort *)&pMVar8->mode_bits = *(ushort *)&pMVar8->mode_bits | (ushort)puVar32[0x18];
        }
        pMVar20->modeBits = pMVar20->modeBits | (MobyModeBit)puVar32[0x18];
        if (pMVar8 != (MobyClass *)0x0) {
          UpdateMobyTransform(pMVar20);
        }
        uVar5 = puVar32[0x1c];
        iVar24 = puVar32[0x1b] * 0x10000 + puVar32[0x1a] * 0x100 + puVar32[0x19];
        pMVar20->colorManipulator = iVar24;
        MB_SetLights(pMVar20,iVar24,0,0,0);
        uVar31.piece<0,4>() = pMVar20->color;
        uVar31.piece<4,4>() = pMVar20->light;
        pMVar20->color = (int)((uVar31 | (longlong)(int)uVar5) >> 0x20);
        pMVar20->light = (int)(uVar31 | (longlong)(int)uVar5);
        if (puVar32[0x1d] != 0xffffffff) {
          Map_RegisterLevelObject(pMVar20,puVar32[0x1d]);
        }
        iVar35 = iVar35 + 0x100;
        lVar37 = lVar37 + 1;
      }
      else {
LAB_000ddaa0:
        *puVar29 = 0xffff;
      }
      iVar16 = iVar16 + 1;
      puVar29 = puVar29 + 1;
    } while (iVar16 < (int)local_100);
  }
  puVar32 = local_e8;
  MobyInstancePermEnd = (MobyInstance *)((int)&(g_MobyInstance->bSphere).x + (int)(lVar37 << 8));
  lVar38 = uVar14 + (local_d8 + lVar37 & 0xffffff) * 0x100;
  MobyInstancePermEnd->state = 0xff;
  MobyInstanceEnd = g_MobyInstance + (int)(local_d8 + lVar37) + -1;
  g_pMobyVars = (undefined4)lVar38;
  uVar5 = local_e8[0x16];
  uVar28 = lVar38 + (local_d8 & 0x1ffffff) * 0x80 + 0x3f & 0xffffffc0;
  uVar31 = uVar28;
  puVar34 = local_e8;
  if (uVar5 != 0) {
    uVar27 = local_e8[0x15];
    if (0 < ImportCameraCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar24 = ImportCameras + iVar35;
        if (*(int *)(iVar24 + 0x1c) < 0) {
          *(undefined4 *)(iVar24 + 0x1c) = 0;
        }
        else {
          iVar44 = *(int *)(iVar24 + 0x1c) * 8;
          iVar36 = *(int *)((int)puVar32 + iVar44 + uVar27);
          lVar37 = (longlong)*(int *)((int)puVar32 + iVar44 + uVar27 + 4);
          *(int *)(iVar24 + 0x1c) = (int)uVar31;
          FastMemCopy(uVar31,(int)puVar32 + iVar36 + uVar5,lVar37);
          *(int *)((int)puVar32 + iVar44 + uVar27) = (int)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
        }
        iVar16 = iVar16 + 1;
        iVar35 = iVar35 + 0x20;
      } while (iVar16 < ImportCameraCnt);
    }
    if (0 < (int)g_SoundCnt) {
      iVar35 = 0;
      iVar16 = 0;
      uVar30 = g_SoundCnt;
      do {
        iVar24 = g_pSoundInstances + iVar35;
        if (*(int *)(iVar24 + 8) < 0) {
          *(undefined4 *)(iVar24 + 8) = 0;
        }
        else {
          iVar18 = *(int *)(iVar24 + 8) * 8;
          iVar44 = *(int *)((int)puVar32 + iVar18 + uVar27);
          iVar36 = *(int *)((int)puVar32 + iVar18 + uVar27 + 4);
          *(int *)(iVar24 + 8) = (int)uVar31;
          lVar37 = (longlong)iVar36;
          FastMemCopy(uVar31,(int)puVar32 + iVar44 + uVar5,lVar37);
          *(int *)((int)puVar32 + iVar18 + uVar27) = (int)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
          uVar30 = g_SoundCnt;
        }
        iVar16 = iVar16 + 1;
        iVar35 = iVar35 + 0x90;
      } while (iVar16 < (int)uVar30);
    }
    puVar34 = local_e8;
    if (g_MobyInstance != MobyInstancePermEnd) {
      pMVar20 = g_MobyInstance;
      do {
        if ((int)pMVar20->pVar < 0) {
          pMVar20->pVar = (void *)0x0;
        }
        else {
          iVar35 = (int)pMVar20->pVar * 8;
          iVar16 = *(int *)((int)puVar32 + iVar35 + uVar27);
          lVar37 = (longlong)*(int *)((int)puVar32 + iVar35 + uVar27 + 4);
          pMVar20->pVar = (void *)uVar31;
          FastMemCopy(uVar31,(int)puVar32 + iVar16 + uVar5,lVar37);
          *(void **)((int)puVar32 + iVar35 + uVar27) = (void *)uVar31;
          uVar31 = uVar31 + lVar37 & 0xffffffff;
        }
        pMVar20 = pMVar20 + 1;
      } while (pMVar20 != MobyInstancePermEnd);
    }
    uVar31 = uVar31 + 0x3f & 0xffffffc0;
  }
  iVar16 = (int)uVar28;
  if (puVar34[0x14] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x14]);
    uVar5 = puVar34[0x15];
    iVar35 = *levelVarBlock;
    while (-1 < iVar35) {
      iVar35 = *(int *)((int)puVar34 + *levelVarBlock * 8 + uVar5);
      if (iVar16 <= iVar35) {
        piVar42 = (int *)(iVar35 + levelVarBlock[1]);
        iVar35 = *piVar42;
        if (-1 < iVar35) {
          *piVar42 = (int)(short)(&____oClassInstanceList)[iVar35];
        }
      }
      levelVarBlock = levelVarBlock + 2;
      iVar35 = *levelVarBlock;
    }
  }
  if (puVar34[0x17] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x17]);
    uVar5 = puVar34[0x15];
    iVar35 = *levelVarBlock;
    while (-1 < iVar35) {
      iVar35 = *(int *)((int)puVar34 + *levelVarBlock * 8 + uVar5);
      if (iVar16 <= iVar35) {
        *(int *)(iVar35 + levelVarBlock[1]) = *(int *)(iVar35 + levelVarBlock[1]) + iVar35;
      }
      levelVarBlock = levelVarBlock + 2;
      iVar35 = *levelVarBlock;
    }
  }
  uVar28 = uVar31;
  if (puVar34[0x12] != 0) {
    levelVarBlock = (int *)((int)puVar34 + puVar34[0x12]);
    puVar32 = (uint *)(levelVarBlock + 4);
    iVar35 = *levelVarBlock;
    iVar24 = levelVarBlock[1];
    uVar28 = uVar31 + (longlong)iVar24 + 0x3f & 0xffffffc0;
    if (iVar24 != 0) {
      FastMemCopyReverse16(uVar31,levelVarBlock + iVar35 + 4,(longlong)iVar24);
    }
    levelVarBlock = &g_MobyGroups;
    FastMemSet(&g_MobyGroups,0,0x1c0);
    if (0 < iVar35) {
      iVar24 = 0;
      do {
        if (-1 < (int)*puVar32) {
          uVar15 = *puVar32 + uVar31;
          g_NumMobyGroups = iVar24 + 1;
          uVar14 = uVar15 & 0xffffffff;
          *levelVarBlock = (int)uVar15;
          uVar15 = uVar14;
          while( true ) {
            uVar3 = *(ushort *)uVar15;
            if (-1 < (short)(&____oClassInstanceList)[uVar3 & 0x7fff]) {
              *(short *)uVar14 = (&____oClassInstanceList)[uVar3 & 0x7fff];
              uVar14 = uVar14 + 2;
            }
            if ((uVar3 & 0x8000) != 0) break;
            uVar15 = uVar15 + 2;
          }
          iVar36 = (int)uVar14;
          if (*levelVarBlock < iVar36) {
            *(ushort *)(iVar36 + -2) = *(ushort *)(iVar36 + -2) | 0x8000;
          }
          else {
            *levelVarBlock = 0;
          }
        }
        iVar24 = iVar24 + 1;
        puVar32 = puVar32 + 1;
        levelVarBlock = levelVarBlock + 1;
      } while (iVar24 < iVar35);
    }
  }
  puVar32 = local_e8;
  uVar31 = uVar28;
  if (local_e8[0x13] != 0) {
    levelVarBlock = (int *)((int)local_e8 + local_e8[0x13]);
    iVar35 = levelVarBlock[1];
    lVar37 = (longlong)*levelVarBlock;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (*levelVarBlock != 0) {
      FastMemCopyReverse32(uVar28,ZEXT48(levelVarBlock) + 0x10,lVar37);
    }
    uVar5 = puVar32[0x15];
    uVar14 = ZEXT48(levelVarBlock) + 0x10 + lVar37 & 0xffffffff;
    if (0 < iVar35) {
      iVar24 = 0;
      do {
        psVar41 = (short *)uVar14;
        iVar36 = (int)((longlong)*psVar41 << 3);
        if (iVar16 <= *(int *)((int)puVar32 + iVar36 + uVar5)) {
          *(int *)(*(int *)((int)puVar32 + iVar36 + uVar5) + (int)psVar41[1]) =
               *(int *)(psVar41 + 2) + (int)uVar28;
        }
        iVar24 = iVar24 + 1;
        uVar14 = uVar14 + 8;
      } while (iVar24 < iVar35);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x1c] != 0) {
    levelVarBlock = (int *)((int)puVar32 + puVar32[0x1c]);
    piVar42 = levelVarBlock + 4;
    SplineCnt = *levelVarBlock;
    iVar16 = levelVarBlock[2];
    uVar28 = uVar31 + (longlong)iVar16 + 0x3f & 0xffffffc0;
    SplineOfs = (void *)uVar31;
    if (iVar16 != 0) {
      FastMemCopy(uVar31,(int)levelVarBlock + levelVarBlock[1],(longlong)iVar16);
    }
    pvVar7 = SplineOfs;
    if (0 < SplineCnt) {
      ppSVar19 = Splines;
      iVar16 = SplineCnt;
      do {
        iVar35 = *piVar42;
        iVar16 = iVar16 + -1;
        piVar42 = piVar42 + 1;
        *ppSVar19 = (Spline *)(iVar35 + (int)pvVar7);
        ppSVar19 = ppSVar19 + 1;
      } while (0 < iVar16);
    }
  }
  if (puVar32[0x1d] != 0) {
    puVar32 = (uint *)((int)local_e8 + puVar32[0x1d]);
    puVar34 = puVar32 + 4;
    DAT_00a1a860 = *puVar32;
    uVar5 = puVar32[1];
    uVar27 = puVar32[2];
    DAT_00a1a85c = (int)uVar28;
    uVar31 = uVar28 + ((ulonglong)DAT_00a1a860 & 0x7ffffff) * 0x20 + 0x3f & 0xffffffc0;
    if (0 < (int)DAT_00a1a860) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        memcpy((void *)(DAT_00a1a85c + iVar35),puVar34,0x10);
        puVar43 = puVar34 + 4;
        iVar16 = iVar16 + 1;
        iVar24 = DAT_00a1a85c + iVar35;
        puVar34 = puVar34 + 8;
        iVar35 = iVar35 + 0x20;
        *(uint *)(iVar24 + 0x14) = *puVar43;
      } while (iVar16 < (int)DAT_00a1a860);
    }
    uVar28 = uVar31 + (longlong)(int)uVar27 + 0x3f & 0xffffffc0;
    if (uVar27 != 0) {
      FastMemCopy(uVar31,(int)puVar32 + uVar5,(longlong)(int)uVar27);
    }
    if (0 < (int)DAT_00a1a860) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        uVar5 = *puVar34;
        iVar24 = DAT_00a1a85c + iVar35;
        iVar35 = iVar35 + 0x20;
        puVar34 = puVar34 + 1;
        *(uint *)(iVar24 + 0x10) = uVar5 + (int)uVar31;
      } while (iVar16 < (int)DAT_00a1a860);
    }
  }
  puVar32 = local_e8;
  uVar31 = uVar28;
  if (local_e8[0x1b] != 0) {
    puVar34 = (uint *)((int)local_e8 + local_e8[0x1b]);
    puVar43 = puVar34 + 4;
    DAT_00a51bc4 = *puVar34;
    DAT_00a51bc0 = (int)uVar28;
    uVar31 = uVar28 + (ulonglong)DAT_00a51bc4 * 0x90 + 0x3f & 0xffffffc0;
    if (DAT_00a51bc4 != 0) {
      FastMemSet(uVar28,0,(int)((ulonglong)DAT_00a51bc4 * 0x90));
    }
    if (0 < (int)DAT_00a51bc4) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32(DAT_00a51bc0 + iVar16,puVar43,0x90);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x90;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < (int)DAT_00a51bc4);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x18] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x18]);
    puVar43 = puVar34 + 4;
    CuboidCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)CuboidCnt & 0x1ffffff) * 0x80;
    Cuboids = (Cuboid *)uVar31;
    uVar28 = uVar31 + lVar37 + 0x3f & 0xffffffc0;
    if (CuboidCnt != 0) {
      FastMemSet(uVar31,0,(int)lVar37);
    }
    if (0 < CuboidCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32((int)&(Cuboids->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < CuboidCnt);
    }
  }
  uVar31 = uVar28;
  if (puVar32[0x19] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x19]);
    puVar43 = puVar34 + 4;
    SphereCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)SphereCnt & 0x1ffffff) * 0x80;
    Spheres = (Sphere *)uVar28;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (SphereCnt != 0) {
      FastMemSet(uVar28,0,(int)lVar37);
    }
    if (0 < SphereCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32((int)&(Spheres->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < SphereCnt);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x1a] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1a]);
    puVar43 = puVar34 + 4;
    CylinderCnt = *puVar34;
    lVar37 = ((ulonglong)(uint)CylinderCnt & 0x1ffffff) * 0x80;
    Cylinders = (Cylinder *)uVar31;
    uVar28 = uVar31 + lVar37 + 0x3f & 0xffffffc0;
    if (CylinderCnt != 0) {
      FastMemSet(uVar31,0,(int)lVar37);
    }
    if (0 < CylinderCnt) {
      iVar16 = 0;
      iVar35 = 0;
      do {
        FastMemCopy32((int)&(Cylinders->matrix).v0.x + iVar16,puVar43,0x80);
        iVar35 = iVar35 + 1;
        iVar16 = iVar16 + 0x80;
        puVar43 = puVar43 + 0x20;
      } while (iVar35 < CylinderCnt);
    }
  }
  if (puVar32[0x21] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x21]);
    uVar5 = *puVar34;
    CamCollGrid = (undefined4)uVar28;
    FastMemCopy32(uVar28,puVar34 + 4,uVar5 + 0x4000);
    uVar28 = uVar28 + uVar5 + 0x403f & 0xffffffc0;
  }
  if (puVar32[0x1e] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1e]);
    uVar5 = *puVar34;
    Blenders = (Blender *)uVar28;
    FastMemCopy32(uVar28,puVar34 + 4,uVar5 + 0x4000);
    uVar28 = uVar28 + uVar5 + 0x403f & 0xffffffc0;
  }
  uVar31 = uVar28;
  if (puVar32[0x1f] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x1f]);
    DAT_00a1c840 = *puVar34;
    lVar37 = ((ulonglong)DAT_00a1c840 & 0x7ffffff) * 0x20;
    DAT_00a1c880 = (undefined4)uVar28;
    uVar31 = uVar28 + lVar37 + 0x3f & 0xffffffc0;
    if (DAT_00a1c840 != 0) {
      FastMemCopy32(uVar28,puVar34 + 4,(int)lVar37);
    }
  }
  uVar28 = uVar31;
  if (puVar32[0x22] != 0) {
    puVar34 = (uint *)((int)puVar32 + puVar32[0x22]);
    g_EnvSampleCount = *puVar34;
    g_EnvSamples = (undefined4)uVar31;
    uVar28 = uVar31 + (ulonglong)g_EnvSampleCount * 0x30 + 0x3f & 0xffffffc0;
    if (g_EnvSampleCount != 0) {
      FastMemCopy32(uVar31,puVar34 + 4,(int)((ulonglong)g_EnvSampleCount * 0x30));
    }
  }
  PartInstances = (void *)uVar28;
  PartIndexNext = 0;
  PartActiveCnt = 0;
  PartIndexTop = 0xffffffff;
  FastMemSetZero(&g_PartUsed,0x200);
  g_SpaceshipPtr = (MobyInstance *)0x0;
  iVar16 = (int)local_d0;
  if (0 < *(int *)(iVar16 + 0x2c)) {
    if (((Level == Gemlik) && (*(short *)((int)local_c8 + 0x26) == 2)) && (DAT_00a561c0 != 0)) {
      uVar1 = g_MobyInstance->state;
      pMVar20 = g_MobyInstance;
      while (uVar1 != 0xff) {
        if ((short)pMVar20->oClass == OCLASSES_SPACESHIP[2]) {
          SetupSpaceShipVars(pMVar20);
          MB_SetAnimationNoBlend(pMVar20,1,0);
          if (g_SpaceshipPtr != (MobyInstance *)0x0) goto LAB_000de924;
          break;
        }
        uVar1 = pMVar20[1].state;
        pMVar20 = pMVar20 + 1;
      }
    }
    pMVar20 = CreateMoby
                        ((MOBY_OCLASSES)
                         *(undefined4 *)
                          ((int)OCLASSES_SPACESHIP +
                          (int)((longlong)*(short *)((int)local_c8 + 0x26) << 2)));
    (pMVar20->pos).x = *(f32 *)(iVar16 + 0x2c);
    (pMVar20->pos).y = *(f32 *)(iVar16 + 0x30);
    MVar4 = pMVar20->modeBits;
    (pMVar20->pos).z = *(f32 *)(iVar16 + 0x34);
    fVar2 = *(f32 *)(iVar16 + 0x38);
    pMVar20->drawDistance = 0xff;
    (pMVar20->rotation).z = fVar2;
    pMVar20->updateDistance = '\x10';
    pMVar20->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
    pMVar20->modeBits =
         MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
    MB_SetAnimationNoBlend(pMVar20,1,0);
    UpdateMobyTransform(pMVar20);
    g_SpaceshipPtr = pMVar20;
    Map_RegisterLevelObject(pMVar20,0);
  }
LAB_000de924:
  iVar16 = TfragsCnt;
  if ((OcclGrid == (void *)0x0) || (puVar32[0x23] == 0)) {
    printf("***\nno occlusion\n***\n");
    pMVar20 = g_MobyInstance;
    if (g_MobyInstance != MobyInstanceEnd) {
      do {
        pMVar20->occlIndex = 0x7f80;
        pMVar20 = pMVar20 + 1;
      } while (pMVar20 != MobyInstanceEnd);
    }
    pTVar21 = g_TieInstance;
    if (g_TieInstance != TieInstanceEnd) {
      do {
        pTVar21->occlIndex[0] = '\0';
        pTVar21->occlIndex[1] = '\0';
        pTVar21->occlIndex[2] = '\x7f';
        pTVar21->occlIndex[3] = -0x80;
        pTVar21 = pTVar21 + 1;
      } while (pTVar21 != TieInstanceEnd);
    }
    if (0 < TfragsCnt) {
      iVar35 = 0;
      iVar16 = 0;
      do {
        iVar35 = iVar35 + 1;
        pcVar11 = Tfrags->occlIndex;
        (pcVar11 + iVar16)[0] = '\x7f';
        (pcVar11 + iVar16)[1] = -0x80;
        iVar16 = iVar16 + 0x30;
      } while (iVar35 < TfragsCnt);
    }
    OcclUpdate = 0;
  }
  else {
    levelVarBlock = (int *)((int)local_e8 + puVar32[0x23]);
    puVar34 = (uint *)(levelVarBlock + 4);
    iVar35 = *levelVarBlock;
    iVar24 = levelVarBlock[1];
    uVar5 = levelVarBlock[2];
    puVar32 = puVar34 + iVar35 * 2;
    if (((int)TieInstanceEnd - (int)g_TieInstance) / 0x70 == iVar24) {
      if (0 < iVar24) {
        iVar36 = 0;
        do {
          iVar36 = iVar36 + 1;
          puVar32 = puVar32 + 2;
        } while (iVar36 < iVar24);
      }
    }
    else {
      puVar32 = puVar32 + iVar24 * 2;
    }
    if (g_MobyInstance->state != 0xff) {
      bVar9 = false;
      iVar44 = 0;
      iVar36 = 0;
      pMVar20 = g_MobyInstance;
      do {
        if (pMVar20->occlIndex != 0x7f80) {
          iVar44 = iVar44 + 1;
          uVar27 = 0;
          if (0 < (int)uVar5) {
            uVar27 = 0;
            puVar43 = puVar32;
            do {
              uVar30 = puVar43[1];
              if ((uVar30 >> 0x18 | uVar30 >> 8 & 0xff00 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18)
                  == (int)(short)pMVar20->uid) break;
              uVar27 = uVar27 + 1;
              puVar43 = puVar43 + 2;
            } while ((int)uVar27 < (int)uVar5);
          }
          if (uVar27 == uVar5) {
            iVar36 = iVar36 + 1;
            bVar9 = true;
            pMVar20->occlIndex = 0x7f80;
          }
          else {
            uVar27 = *(uint *)((int)(((ulonglong)uVar27 & 0x7fffffff) << 3) + (int)puVar32);
            pMVar20->occlIndex =
                 (short)((int)(uVar27 >> 0x18 | uVar27 >> 8 & 0xff00 |
                              (uVar27 & 0xff00) << 8 | uVar27 << 0x18) >> 3) << 8 |
                 (ushort)(1 << (uVar27 >> 0x18 & 7));
          }
        }
        pMVar10 = pMVar20 + 1;
        pMVar20 = pMVar20 + 1;
      } while (pMVar10->state != 0xff);
      if (bVar9) {
        printf("***\nocclusion out of date on mobys (%d / %d)\n***\n",iVar36,iVar44);
      }
    }
    if (iVar16 == iVar35) {
      if (0 < iVar35) {
        iVar36 = 0;
        iVar16 = iVar35;
        do {
          uVar5 = *puVar34;
          iVar16 = iVar16 + -1;
          puVar34 = puVar34 + 2;
          iVar44 = **(int **)((int)local_e0 + 0x28) + iVar36;
          iVar36 = iVar36 + 0x30;
          *(ushort *)(iVar44 + 0x1e) =
               (short)((int)(uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 |
                            (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 3) << 8 |
               (ushort)(1 << (uVar5 >> 0x18 & 7));
        } while (0 < iVar16);
      }
    }
    else {
      printf("***\nocclusion out of date on tfrag\n***\n");
      if (0 < TfragsCnt) {
        iVar36 = 0;
        iVar16 = 0;
        do {
          iVar36 = iVar36 + 1;
          pcVar11 = Tfrags->occlIndex;
          (pcVar11 + iVar16)[0] = '\x7f';
          (pcVar11 + iVar16)[1] = -0x80;
          iVar16 = iVar16 + 0x30;
        } while (iVar36 < TfragsCnt);
      }
    }
    puVar32 = (uint *)(levelVarBlock + iVar35 * 2 + 4);
    if (0 < iVar24) {
      iVar16 = 0;
      do {
        uVar5 = *puVar32;
        iVar24 = iVar24 + -1;
        puVar32 = puVar32 + 2;
        *(int *)(g_TieInstance->occlIndex + iVar16) =
             ((int)(uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >>
             3) << 8 | 1 << (uVar5 >> 0x18 & 7);
        iVar16 = iVar16 + 0x70;
      } while (0 < iVar24);
    }
    OcclUpdate = 2;
  }
  uVar31 = local_b8;
  ResetDrawGlobals();
  Hero_ResetHero();
  Hero_InitStuff();
  InitCameras();
  UpdateCamera();
  InitPadRing();
  EnableFontColors();
  pMVar20 = g_SpaceshipPtr;
  g_mobyIdListCount = 0;
  DAT_00a51ee8 = 0;
  DAT_00a51f68 = 0;
  iVar16 = *(int *)((int)uVar31 + 0x2080);
  worldUpdateTime = 0;
  puVar22 = &DAT_007ff23c;
  DAT_00a15c7c = 0;
  lVar37 = 5;
  do {
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22 = puVar22 + 4;
    lVar37 = lVar37 + -1;
  } while (lVar37 != 0);
  DAT_010bb478 = 0;
  if (pMVar20 != (MobyInstance *)0x0) {
    uVar12 = *(undefined8 *)(iVar16 + 0x38);
    pMVar20->color = (int)((ulonglong)uVar12 >> 0x20);
    pMVar20->light = (int)uVar12;
  }
  if ((int)Level < 5) {
    if (Level == Aridia) goto LAB_000dedbc;
  }
  else if ((int)Level < 10) {
    if ((int)Level < 9) {
LAB_000dedbc:
      ScreenColorEffectLevel = &DAT_0071ef00;
      goto LAB_000dede0;
    }
  }
  else if ((int)Level < 0xb) goto LAB_000dedbc;
  ScreenColorEffectLevel = &DAT_0071eed0;
LAB_000dede0:
  ScreenColorEffectNow = ScreenColorEffectLevel;
  if (g_JapaneseMode == false) {
    uVar12 = GetLanguageNameByIdx();
    snprintf(acStack_1d0,"rc1/ps3data/global/locale/%s",uVar12);
  }
  else {
    snprintf(acStack_1d0,"rc1/ps3data/global/locale/japanese");
  }
  iVar16 = (int)local_c0;
  LoadAssetFromFile(acStack_1d0,*(undefined4 *)(iVar16 + 0x54),0x40000);
  HelpMsgs = *(int **)(iVar16 + 0x54);
  g_Help.num_message = *HelpMsgs;
  FastMemCopy32
            (HelpMsgs,HelpMsgs + 2,(HelpMsgs[1] + 3U & 0xfffffffc) - 8);
  if (0 < g_Help.num_message) {
    iVar35 = 0;
    iVar16 = g_Help.num_message;
    do {
      iVar16 = iVar16 + -1;
      *(int *)((int)HelpMsgs + iVar35) =
           (int)HelpMsgs + *(int *)((int)HelpMsgs + iVar35) + -8;
      iVar35 = iVar35 + 0x10;
    } while (0 < iVar16);
  }
  return uVar28 + 0x40000 & 0xffffffff;
}


// 0x00def38 (0x8 bytes)
undefined8 STUB_000def38_RET_1(...)

{
  return 1;
}


// 0x00def40 (0x14 bytes)
void ____Unused_IncCounter_a204ac(void)

{
  DAT_00a204ac = DAT_00a204ac + 1;
  return;
}


// 0x00def54 (0x24 bytes)
void AdvanceLoadingStage(void)

{
  g_LoadingStage = g_LoadingStage + 1;
  DAT_00a204b0 = DAT_00a204b0 + 1;
  return;
}


// 0x00def78 (0x488 bytes)
// strings: 000df3ac: 'HBiu`' (raw) | 000df2f8: 'HBj)`' (raw) | 000df2cc: 'HBjU`' (raw) | 00652404: 'rc1/ps3data/level%d/engine.ps3' | 00652424: 'rc1/ps3data/level%d/vram.ps3' | 00652444: 'space_ships' | 00652454: 'rc1/ps3data/japan_font.ps3' | 00652474: 'rc1/ps3data/japan_font.vram' | 00652494: 'gameplay_pal' | 006524a4: 'gameplay_ntsc' | 006524b4: 'rc1/ps3data/level%d/sound.bnk'

undefined8 LoadLevelFiles(void)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  int iVar5;
  char acStack_160 [64];
  char acStack_120 [128];
  char acStack_a0 [128];
  
  iVar5 = (int)g_SpaceshipVariant;
  iVar3 = FUN_00503128_RET_0(1);
  sVar1 = g_LoadingStage;
  if (iVar3 == 0) {
    if (g_LoadingStage == 7) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if ((iVar3 == 0) && (g_BootSoundBank != -1)) {
        STUB_00505f48();
        return 1;
      }
    }
    else if (g_LoadingStage == 6) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        g_BootSoundBank = -1;
        snprintf(acStack_160,"rc1/ps3data/level%d/sound.bnk",Level);
        FUN_004fe5c8(TEX_BASE,0x10);
        uVar2 = FUN_004fe5ec(TEX_BASE);
        uVar4 = LoadAssetFromFile(acStack_160,uVar2,0xffffffffffffffff);
        FUN_004fe6ec(TEX_BASE,uVar4);
        Sound_LoadBank(uVar2,&PTR_sound_BasicCB_00707c38,&g_BootSoundBank);
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 5) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        STUB_00505f48();
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 4) {
      iVar3 = STUB_00505d20();
      sVar1 = g_LoadingStage;
      if (iVar3 == 0) {
        snd_UnloadBank(g_BootSoundBank,1);
        g_BootSoundBank = 0;
        sVar1 = g_LoadingStage + 1;
      }
    }
    else if (g_LoadingStage == 3) {
      if (DAT_00964562 == 0) {
        FUN_0060c0d0();
        sVar1 = 6;
        if (g_BootSoundBank != 0) {
          sVar1 = g_LoadingStage + 1;
        }
      }
    }
    else if (g_LoadingStage == 2) {
      if (Cutscene == 0) {
        FUN_00503404(DAT_00964568,"gameplay_ntsc");
      }
      else {
        FUN_00503404(DAT_00964568,"gameplay_pal");
      }
      sVar1 = g_LoadingStage + 1;
    }
    else if (g_LoadingStage == 1) {
      if (DAT_00a204b0 == 2) {
        DAT_00a204b0 = 0;
      }
      idol::m_LoadGameFileS(DAT_0096456c,"space_ships");
      LoadAssetFromFile("rc1/ps3data/japan_font.ps3",&g_JapanFontTex,0x24);
      LoadAssetFromFile("rc1/ps3data/japan_font.vram",g_FontVram,0x80000);
      g_JapanFontTex = g_JapanFontTex + (g_FontVram - *(int *)(g_pIdolDraw + 0x4ac));
      sVar1 = g_LoadingStage + 1;
    }
    else if ((g_LoadingStage == 0) && (DAT_00a204b0 == 0)) {
      iVar3 = DAT_010ea644 * 0x800 + 0xfff;
      DAT_00964568 = 0x10000000 -
                     (iVar3 + ((uint)(ZERO_MASK(Cutscene)) &
                              (DAT_010ea63c * 0x800 + 0xfff) - iVar3) & 0xfffff000);
      DAT_0096456c = DAT_00964568 -
                     (*(int *)(&DAT_010ea10c + (iVar5 + 1) * 8) * 0x800 + 0xfffU & 0xfffff000);
      DAT_00964564 = DAT_0096456c - (DAT_010ea634 * 0x800 + 0xfffU & 0xfffff000);
      snprintf(acStack_120,"rc1/ps3data/level%d/engine.ps3",Level);
      snprintf(acStack_a0,"rc1/ps3data/level%d/vram.ps3",Level);
      DAT_00a204b0 = 1;
      LoadAssetAsync(&TEX_BASE,acStack_120,acStack_a0,&PTR_AdvanceLoadingStage_00705ad0);
      sVar1 = g_LoadingStage;
    }
  }
  else {
    DAT_009636c0 = DAT_009636c0 + 1;
  }
  g_LoadingStage = sVar1;
  return 0;
}


// 0x00df408 (0xc30 bytes)
// strings: 006524d4: 'internal level sound mismatch\n' | 006524f4: 'internal moby sound mismatch on moby %d\n' | 00652524: 'rc1/ps3data/global/spaceship%d.ps3' | 0065254c: 'rc1/ps3data/global/spaceship%d.vram'

int LoadAllMobys(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar8;
  int iVar9;
  undefined8 uVar7;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  byte bVar18;
  int iVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  MOBY_OCLASSES MVar23;
  uint uVar22;
  uint uVar24;
  MobyClass *pMVar25;
  short *psVar26;
  undefined2 *puVar27;
  int iVar28;
  short *psVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  char acStack_130 [64];
  char acStack_f0 [64];
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  piVar17 = g_EngineData;
  uVar5 = g_GameplayBuffer;
  uVar21 = (ulonglong)g_GameplayBuffer;
  local_b0 = param_1;
  local_a8 = param_2;
  if ((int)param_1 != 0) {
    FastMemCopy32(&DAT_00a202c0,g_LevelFlags + Level,0x10);
    DAT_00a1bfd8 = piVar17[0x1d] + (int)piVar17;
    iVar11 = (int)piVar17 + piVar17[1];
    IconTableEntry = (IconTableEntries *)((int)piVar17 + *(int *)(DAT_00a1bfd8 + 4));
    DAT_00a4dae0 = g_BootSoundBank;
    TexturePointerArray = (int)piVar17 + *(int *)(DAT_00a1bfd8 + 8);
    TfragsCnt = (uint)*(ushort *)((int)DAT_00a15f74 + 6);
    OcclGrid = (void *)(iVar11 + ((uint)(ZERO_MASK(piVar17[1])) & -iVar11));
    piVar15 = (int *)((int)piVar17 + piVar17[5]);
    iVar11 = *piVar17;
    Tfrags = (Tfrag *)*DAT_00a15f74;
    if (*piVar15 != 0) {
      g_CollOutput.grid = (void *)((int)piVar15 + *piVar15);
    }
    if (piVar15[1] != 0) {
      g_HeroCollision = (HeroCollHeader *)((int)piVar15 + piVar15[1]);
      iVar28 = 0;
      if (0 < g_HeroCollision->cellCount) {
        iVar33 = 0;
        do {
          iVar28 = iVar28 + 1;
          *(int *)((int)&g_HeroCollision->cells[0].data + iVar33) =
               (int)g_HeroCollision->pad +
               *(int *)((int)&g_HeroCollision->cells[0].data + iVar33) + -4;
          iVar33 = iVar33 + 0x10;
        } while (iVar28 < g_HeroCollision->cellCount);
      }
    }
    iVar28 = 0;
    uVar24 = 0;
    piVar15 = (int *)((int)piVar17 + iVar11) + 1;
    iVar11 = *(int *)((int)piVar17 + iVar11);
    if (0 < iVar11) {
      do {
        iVar19 = oClass_to_mClass_lookup;
        iVar33 = *piVar15;
        iVar9 = piVar15[1] + (int)piVar17;
        pMVar25 = (MobyClass *)(iVar9 + ((uint)(ZERO_MASK(piVar15[1])) & -iVar9));
        iVar9 = oClass_to_mClass_lookup * 4;
        (&MobyClassLookup)[iVar33] = (char)oClass_to_mClass_lookup;
        MVar23 = (MOBY_OCLASSES)iVar33;
        (&mClass_to_oClass)[iVar19] = MVar23;
        MobyClasses[iVar19] = pMVar25;
        if (pMVar25 == (MobyClass *)0x0) {
          GetMobyFunction(MVar23);
          oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        }
        else {
          *(undefined4 *)(&MobyMipDists + iVar9) = *(undefined4 *)&pMVar25->bangles;
          GetMobyFunction(MVar23);
          oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
          LoadMobyModel(pMVar25,(void *)0x0,(char *)(piVar15 + 4),iVar33);
        }
        iVar28 = iVar28 + 1;
        piVar15 = piVar15 + 2;
      } while (iVar28 < iVar11);
    }
    iVar11 = 0;
    piVar15 = (int *)((int)piVar17 + piVar17[6]);
    if (MobyClasses[0]->seq_cnt != '\0') {
      iVar28 = 0;
      do {
        if (*piVar15 != 0) {
          *(int *)(&MobyClasses[0]->type + iVar28) = *piVar15 + (int)piVar17;
          iVar33 = *(int *)(&MobyClasses[0]->type + iVar28);
          if (*(int *)(iVar33 + 0x14) != 0) {
            *(int *)(iVar33 + 0x14) = iVar33 + *(int *)(iVar33 + 0x14);
          }
          iVar19 = 0;
          iVar9 = iVar33;
          if (*(char *)(iVar33 + 0x10) != '\0') {
            do {
              iVar19 = iVar19 + 1;
              *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + iVar33;
              iVar9 = iVar9 + 4;
            } while (iVar19 < (int)(uint)*(byte *)(iVar33 + 0x10));
          }
        }
        iVar11 = iVar11 + 1;
        piVar15 = piVar15 + 1;
        iVar28 = iVar28 + 4;
      } while (iVar11 < (int)(uint)MobyClasses[0]->seq_cnt);
    }
    g_gadgetIdx = 0xffffffff;
    DAT_00a4daec = 0;
    iVar11 = piVar17[0x14];
    puVar14 = (undefined4 *)((int)piVar17 + piVar17[0x13]);
    maximumNumWeapons = iVar11;
    if (0 < iVar11) {
      puVar12 = &DAT_00a4d540;
      piVar15 = &DAT_00a4d5a0;
      puVar20 = &DAT_00a4d600;
      do {
        iVar11 = iVar11 + -1;
        *puVar12 = *puVar14;
        iVar28 = puVar14[1];
        puVar12 = puVar12 + 1;
        *puVar20 = puVar14[2];
        puVar20 = puVar20 + 1;
        puVar14 = puVar14 + 4;
        *piVar15 = iVar28 + (int)piVar17;
        piVar15 = piVar15 + 1;
      } while (0 < iVar11);
    }
    if (piVar17[0x10] == 0) {
      g_byteGridStride = 0;
      g_byteGridData = (undefined4 *)0x0;
      g_byteGridRows = 0;
      g_byteGridMin = 0;
      g_byteGridMax = g_byteGridMin;
    }
    else {
      puVar14 = (undefined4 *)((int)piVar17 + piVar17[0x10]);
      g_byteGridData = puVar14 + 4;
      g_byteGridStride = *puVar14;
      g_byteGridMin = puVar14[2];
      g_byteGridRows = puVar14[1];
      g_byteGridMax = puVar14[3];
    }
    iVar11 = (int)piVar17 + piVar17[2];
    piVar15 = (int *)((int)piVar17 + piVar17[0x1c]);
    OcclOct = (void *)(iVar11 + ((uint)(ZERO_MASK(piVar17[2])) & -iVar11));
    g_PartTexBaseIndex = piVar15[1];
    iVar11 = *piVar15;
    piVar16 = piVar15 + 4;
    iVar28 = piVar15[2];
    if (0 < iVar11) {
      piVar8 = &g_PartTexFrames;
      do {
        iVar33 = *piVar16;
        iVar11 = iVar11 + -1;
        piVar16 = piVar16 + 1;
        *piVar8 = (int)piVar15 + iVar33 + iVar28;
        piVar8 = piVar8 + 1;
      } while (0 < iVar11);
    }
    psVar26 = (short *)((int)piVar17 + piVar17[0x12]);
    g_pSoundDefs = uVar5;
    lVar30 = (longlong)(int)(((longlong)psVar26[1] & 0xffffffffU) << 5);
    g_TotalSoundDefCnt = (int)psVar26[1];
    FastMemCopy32(uVar21,(int)psVar26 + (int)*psVar26,lVar30);
    sVar2 = psVar26[2];
    iVar11 = 0;
    if (0 < g_TotalSoundDefCnt) {
      iVar28 = 0;
      do {
        sVar3 = *(short *)(g_pSoundDefs + iVar28 + 0x1a);
        if (sVar3 < psVar26[3]) {
          *(short *)(g_pSoundDefs + iVar28 + 0x1a) =
               (short)*(undefined4 *)((int)psVar26 + (int)((longlong)sVar3 << 2) + (int)sVar2);
        }
        else {
          printf("internal level sound mismatch\n");
          *(undefined2 *)(g_pSoundDefs + iVar28 + 0x1a) = 0xffff;
        }
        iVar11 = iVar11 + 1;
        iVar33 = g_pSoundDefs + iVar28;
        iVar28 = iVar28 + 0x20;
        bVar1 = iVar11 < g_TotalSoundDefCnt;
        *(undefined4 *)(iVar33 + 0x1c) = g_BootSoundBank;
      } while (bVar1);
    }
    psVar29 = psVar26 + 4;
    iVar11 = 0;
    if (0 < oClass_to_mClass_lookup) {
      iVar28 = 0;
      uVar31 = ZEXT48(MobyClasses);
      puVar27 = &mClass_to_oClass;
      iVar33 = 0;
      do {
        iVar9 = *(int *)uVar31;
        if (iVar9 == 0) {
          iVar9 = 0;
          for (piVar17 = &DAT_00a4d540;
              (iVar9 < maximumNumWeapons &&
              (*piVar17 != (int)*(short *)((int)&mClass_to_oClass + iVar28))); piVar17 = piVar17 + 1
              ) {
            iVar9 = iVar9 + 1;
          }
          if (iVar9 < maximumNumWeapons) {
            local_a0 = uVar31;
            FastMemSet(&DAT_00a4d7e0 + iVar9 * 0x20,0xffffffffffffffff,0x20);
            puVar13 = (undefined2 *)(&DAT_00a4d7e0 + iVar9 * 0x20);
            puVar14 = (undefined4 *)((int)*psVar29 + (int)psVar26);
            for (iVar9 = 0; uVar31 = local_a0, iVar9 < psVar29[1] && iVar9 < 0xf; iVar9 = iVar9 + 1)
            {
              uVar10 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar13 = (short)uVar10;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          if (psVar29[1] != (ushort)*(byte *)(iVar9 + 0xd)) {
            printf("internal moby sound mismatch on moby %d\n",*puVar27);
            iVar9 = *(int *)uVar31;
          }
          iVar19 = 0;
          puVar14 = (undefined4 *)((int)*psVar29 + (int)psVar26);
          if (*(char *)(iVar9 + 0xd) != '\0') {
            iVar9 = 0;
            do {
              iVar19 = iVar19 + 1;
              uVar10 = *puVar14;
              puVar14 = puVar14 + 1;
              iVar4 = *(int *)(*(int *)((int)MobyClasses + iVar33) + 0x28);
              iVar6 = iVar4 + iVar9;
              iVar4 = iVar4 + iVar9;
              iVar9 = iVar9 + 0x20;
              *(undefined4 *)(iVar6 + 0x1c) = g_BootSoundBank;
              *(short *)(iVar4 + 0x1a) = (short)uVar10;
            } while (iVar19 < (int)(uint)*(byte *)(*(int *)((int)MobyClasses + iVar33) + 0xd));
          }
        }
        iVar11 = iVar11 + 1;
        psVar29 = psVar29 + 2;
        puVar27 = puVar27 + 1;
        iVar28 = iVar28 + 2;
        uVar31 = uVar31 + 4;
        iVar33 = iVar33 + 4;
      } while (iVar11 < oClass_to_mClass_lookup);
    }
    uVar21 = uVar21 + lVar30 + 0x3f & 0xffffffc0;
    iVar11 = (int)((longlong)g_SpaceshipVariant << 2);
    iVar33 = *(int *)((int)OCLASSES_SPACESHIP + iVar11);
    iVar9 = *(int *)((int)OCLASSES_COCKPIT + iVar11);
    snprintf(acStack_130,"rc1/ps3data/global/spaceship%d.ps3",(longlong)g_SpaceshipVariant + 1
                  );
    snprintf(acStack_f0,"rc1/ps3data/global/spaceship%d.vram",(longlong)g_SpaceshipVariant + 1
                  );
    lVar30 = LoadAssetFromFile(acStack_130,uVar21,0xffffffffffffffff);
    iVar19 = oClass_to_mClass_lookup;
    piVar17 = (int *)uVar21;
    iVar11 = piVar17[2];
    iVar28 = piVar17[1];
    if ((&MobyClassLookup)[iVar33] == -1) {
      pMVar25 = (MobyClass *)((int)piVar17 + *piVar17);
      (&MobyClassLookup)[iVar33] = (char)oClass_to_mClass_lookup;
      MVar23 = (MOBY_OCLASSES)iVar33;
      (&mClass_to_oClass)[iVar19] = MVar23;
      MobyClasses[iVar19] = pMVar25;
      if (pMVar25 == (MobyClass *)0x0) {
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      }
      else {
        *(undefined4 *)(&MobyMipDists + iVar19 * 4) = *(undefined4 *)&pMVar25->bangles;
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        LoadMobyModel(pMVar25,(void *)0x0,(char *)0x0,iVar33);
      }
    }
    iVar19 = oClass_to_mClass_lookup;
    if ((&MobyClassLookup)[iVar9] == -1) {
      pMVar25 = (MobyClass *)((int)piVar17 + iVar28);
      iVar28 = oClass_to_mClass_lookup * 4;
      (&MobyClassLookup)[iVar9] = (char)oClass_to_mClass_lookup;
      MVar23 = (MOBY_OCLASSES)iVar9;
      (&mClass_to_oClass)[iVar19] = MVar23;
      MobyClasses[iVar19] = pMVar25;
      if (pMVar25 == (MobyClass *)0x0) {
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
      }
      else {
        *(undefined4 *)(&MobyMipDists + iVar28) = *(undefined4 *)&pMVar25->bangles;
        GetMobyFunction(MVar23);
        oClass_to_mClass_lookup = oClass_to_mClass_lookup + 1;
        LoadMobyModel(pMVar25,(void *)0x0,(char *)0x0,iVar9);
      }
    }
    uVar21 = uVar21 + (longlong)iVar11;
    uVar31 = uVar21 & 0xffffffff;
    lVar32 = (lVar30 - iVar11) / 0x24;
    FUN_004fe5c8(DAT_00a15f50,0x80);
    uVar7 = FUN_004fe5f4(DAT_00a15f50,0x80);
    uVar10 = LoadAssetFromFile(acStack_f0,uVar7,0xffffffffffffffff);
    FUN_004fe6ec(DAT_00a15f50,uVar10);
    iVar11 = *(int *)(DAT_00902e9c + 0x4ac);
    if ((int)lVar32 != 0) {
      do {
        lVar32 = lVar32 + -1;
        *(int *)uVar31 = *(int *)uVar31 + ((int)uVar7 - iVar11);
        uVar31 = uVar31 + 0x24;
      } while (0 < (int)lVar32);
    }
    uVar22 = 0;
    piVar15 = *(int **)((int)MobyClasses[(byte)(&MobyClassLookup)[iVar33]]->packets + 8);
                    /* WARNING: Load size is inaccurate */
    uVar5 = *MobyClasses[(byte)(&MobyClassLookup)[iVar33]]->packets;
    iVar11 = (int)uVar21;
    if (uVar5 != 0) {
      do {
        *piVar15 = iVar11;
        if (*(char *)(piVar15 + 3) == '\0') {
          bVar18 = (byte)*(undefined4 *)(iVar11 + 8) & 3;
          *(byte *)(piVar15 + 3) = bVar18;
          *(byte *)(piVar15 + 3) = (byte)(*(uint *)(iVar11 + 8) >> 6) & 0xc | bVar18;
        }
        uVar22 = uVar22 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar22 < uVar5);
    }
    piVar15 = *(int **)((int)MobyClasses[(byte)(&MobyClassLookup)[iVar9]]->packets + 8);
                    /* WARNING: Load size is inaccurate */
    uVar5 = *MobyClasses[(byte)(&MobyClassLookup)[iVar9]]->packets;
    if (uVar5 != 0) {
      do {
        *piVar15 = iVar11 + 0x24;
        if (*(char *)(piVar15 + 3) == '\0') {
          bVar18 = (byte)*(undefined4 *)(iVar11 + 0x2c) & 3;
          *(byte *)(piVar15 + 3) = bVar18;
          *(byte *)(piVar15 + 3) = (byte)(*(uint *)(iVar11 + 0x2c) >> 6) & 0xc | bVar18;
        }
        uVar24 = uVar24 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar24 < uVar5);
    }
    Gameplay = (int)piVar17 + (int)lVar30 + 0x3f & 0xffffffc0;
  }
  uVar7 = local_a8;
  NAVG_LoadFile(local_b0);
  if ((int)uVar7 == 0) {
    ClearCheckpointData();
    puVar14 = &DAT_00a0fcd4;
    lVar30 = 2;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      puVar14 = puVar14 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  else {
    RestoreCheckpoint();
  }
  DAT_00a15c14 = 0;
  DAT_00a15c0c = 0;
  DAT_00a15c10 = 0;
  UpdateMobysInitial();
  worldUpdateTime = worldUpdateTime + 1;
  return 0;
}


// 0x00e0038 (0xd8 bytes)
// strings: 00652577: '9host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat' | 006525b0: 'host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat'


int LoadNpcMobys(int level_id,int scene_id)

{
  bool bVar1;
  undefined8 uVar2;
  char acStack_70 [88];
  
  STUB_00174cf4(1);
  STUB_00503078(0);
  if (Cutscene == 0) {
    snprintf(acStack_70,"host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat",level_id,scene_id
                  );
  }
  else {
    snprintf(acStack_70,"host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat",level_id,
                   scene_id);
  }
  uVar2 = HostOpen(acStack_70,0);
  bVar1 = -1 < (int)uVar2;
  if (bVar1) {
    HostClose(uVar2);
  }
  return (int)bVar1;
}


// 0x00e0110 (0x8 bytes)
int LoadNpcSubtitles(void)

{
  return 1;
}


// 0x00e0118 (0x10c bytes)
// strings: 006525e4: 'rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3' | 00652614: 'rc1/ps3data/level%d/scene[%d]/chunk%d.ps3'


int PreLoadNpcChunk(int chunk_id)

{
  longlong lVar1;
  int iVar2;
  char acStack_50 [64];
  
  iVar2 = g_NpcBuffer + 0x80000;
  g_SceneLoadBuffer = iVar2;
  if (g_IsPal == 0) {
    snprintf(acStack_50,"rc1/ps3data/level%d/scene[%d]/chunk%d.ps3",Level,g_SceneId,
                   chunk_id);
  }
  else {
    snprintf(acStack_50,"rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3",Level,
                   g_SceneId,chunk_id);
  }
  lVar1 = GetFileSize(acStack_50);
  if (lVar1 != 0) {
    if (g_NpcChunkLoadHandle != 0) {
      FUN_005040f4();
    }
    g_NpcChunkLoadHandle = FUN_00503f8c(acStack_50,iVar2,0x80000);
  }
  return 1;
}


// 0x00e0230 (0x2f8 bytes)
// strings: 00652640: '\nnpc error: moby class %d is not on the level\n' | 00652670: '\nnpc error: moby class %d is a null moby or a hand gadget\n'


void ParseNpcChunk(void)

{
  u8 uVar1;
  int iVar2;
  MobyClass *pMVar3;
  undefined4 *puVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  if (g_NpcChunkLoadHandle != 0) {
    FUN_005040f4();
    g_NpcChunkLoadHandle = 0;
  }
  puVar9 = &DAT_0095cd50;
  FastMemCopy(g_NpcBuffer,g_SceneLoadBuffer,0x80000);
  puVar4 = g_NpcBuffer;
  piVar12 = g_NpcBuffer + 5;
  g_cutsceneCameraFrame = 0;
  iVar11 = (int)g_NpcBuffer + g_NpcBuffer[1];
  g_SpaceSceneNumFrames.piece<0,2>() = (undefined2)*g_NpcBuffer;
  g_SpaceSceneCameraFrames = (void *)((int)g_NpcBuffer + g_NpcBuffer[4]);
  g_SpaceSceneMobyCnt.piece<2,2>() = (undefined2)g_NpcBuffer[2];
  g_SpaceSceneMobyCnt.piece<0,2>() = (short)g_NpcBuffer[3];
  g_SubtitleTable =
       iVar11 + ((uint)((longlong)(int)g_NpcBuffer[1] + -0x400 >> 0x3f) & -iVar11);
  if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
    iVar11 = 0;
    do {
      iVar6 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar10 = (int *)(iVar6 + (int)puVar4);
      iVar6 = *piVar10;
      iVar2 = piVar10[3];
      if ((g_gameMode == GAME_MODE_SPACE) && (iVar11 == 0 && iVar6 == 0x215)) {
        iVar6 = *(int *)((int)OCLASSES_SPACESHIP + (int)((longlong)g_SpaceshipVariant << 2));
      }
      if ((&MobyClassLookup)[iVar6] == -1) {
        printf("\nnpc error: moby class %d is not on the level\n",iVar6);
      }
      else {
        pMVar5 = (MobyInstance *)puVar9[0x5e];
        if (pMVar5 == (MobyInstance *)0x0) {
          pMVar5 = CreateMoby((MOBY_OCLASSES)iVar6);
          pMVar3 = pMVar5->pClass;
          if (pMVar3 == (MobyClass *)0x0) {
            printf("\nnpc error: moby class %d is a null moby or a hand gadget\n",iVar6);
            goto LAB_000e04c0;
          }
          uVar1 = pMVar3->seq_cnt;
          pMVar3->seq_cnt = uVar1 + '\x01';
          pMVar5->updateId = uVar1;
          pMVar5->animationId = uVar1;
          pMVar5->drawDistance = 0x1ff;
          pMVar5->unk72 = -1;
          pMVar5->collision = (ushort *)0x0;
          pMVar5->modeBits = pMVar5->modeBits | (NO_POST_UPDATE|NO_UPDATE);
          uVar7 = 0x38383800000000;
          if (g_heroMobyPtr != (MobyInstance *)0x0) {
            uVar7.piece<0,4>() = g_heroMobyPtr->color;
            uVar7.piece<4,4>() = g_heroMobyPtr->light;
          }
          pMVar5->color = (int)((ulonglong)uVar7 >> 0x20);
          pMVar5->light = (int)uVar7;
          puVar9[0x5e] = pMVar5;
        }
        pMVar5->pVar = (void *)(iVar2 + (int)puVar4);
        *(int **)(&pMVar5->pClass->type + (uint)pMVar5->updateId * 4) = piVar10 + 4;
        if (*(char *)(piVar10 + 8) != '\0') {
          iVar6 = 0;
          piVar8 = piVar10;
          do {
            iVar6 = iVar6 + 1;
            piVar8[0xb] = piVar8[0xb] + (int)(piVar10 + 4);
            piVar8 = piVar8 + 1;
          } while (iVar6 < (int)(uint)*(byte *)(piVar10 + 8));
        }
      }
LAB_000e04c0:
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar11 < g_SpaceSceneMobyCnt.piece<0,2>());
  }
  return;
}


// 0x00e0528 (0x12c bytes)
// strings: 006526ac: 'rc1/ps3data/global/weapon%d_pal.ps3' | 006526d4: 'rc1/ps3data/global/weapon%d.ps3' | 006526f4: 'weapon_scenes_pal'


void LoadWeaponCutscene(int weapon)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_50 [64];
  
  FadeToBlack(4);
  if (Cutscene == 0) {
    if (g_IsPal == 0) {
      snprintf(acStack_50,"rc1/ps3data/global/weapon%d.ps3",weapon);
    }
    else {
      snprintf(acStack_50,"rc1/ps3data/global/weapon%d_pal.ps3",weapon);
    }
    LoadAssetFromFile(acStack_50,g_SceneLoadBuffer,0xffffffffffffffff);
  }
  else {
    idol::PRINT_m_LoadGameFile((uint)g_SceneLoadBuffer,"weapon_scenes_pal");
  }
  music_Sync(0);
  music_Sync(1);
  iVar3 = 0;
  piVar2 = &g_SceneChunkPtrs;
  piVar4 = g_SceneLoadBuffer;
  do {
    if (piVar4[1] == 0) {
      return;
    }
    iVar3 = iVar3 + 1;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 2;
    *piVar2 = (int)g_SceneLoadBuffer + iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x46);
  return;
}


// 0x00e0654 (0x5c bytes)
void ParseWeaponSceneChunk(int chunk_id)

{
  g_SceneLoadBuffer = *(undefined4 *)((int)&g_SceneChunkPtrs + (int)((longlong)chunk_id << 2));
  ParseNpcChunk();
  g_SceneLoadBuffer = g_NpcBuffer + 0x40000;
  return;
}


// 0x00e06b0 (0x148 bytes)
// strings: 00652708: 'rc1/ps3data/global/space%d_pal.ps3' | 00652730: 'rc1/ps3data/global/space%d.ps3' | 00652750: 'space_scenes_pal'


void LoadSpaceScene(int scene,int fade)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char acStack_60 [72];
  
  if (fade != 0) {
    FadeToBlack(fade);
  }
  if (Cutscene == 0) {
    if (g_IsPal == 0) {
      snprintf(acStack_60,"rc1/ps3data/global/space%d.ps3",scene);
    }
    else {
      snprintf(acStack_60,"rc1/ps3data/global/space%d_pal.ps3",scene);
    }
    LoadAssetFromFile(acStack_60,g_SceneLoadBuffer,0xffffffffffffffff);
  }
  else {
    idol::PRINT_m_LoadGameFile((uint)g_SceneLoadBuffer,"space_scenes_pal");
  }
  if (fade != 0) {
    music_Sync(0);
  }
  music_Sync(1);
  iVar3 = 0;
  piVar2 = &g_SceneChunkPtrs;
  piVar4 = g_SceneLoadBuffer;
  do {
    if (piVar4[1] == 0) {
      return;
    }
    iVar1 = *piVar4;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 2;
    *piVar2 = (int)g_SceneLoadBuffer + iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 0x46);
  return;
}


// 0x00e07f8 (0x5c bytes)
void ParseSpaceSceneChunk(int chunk_id)

{
  g_SceneLoadBuffer = *(undefined4 *)((int)&g_SceneChunkPtrs + (int)((longlong)chunk_id << 2));
  ParseNpcChunk();
  g_SceneLoadBuffer = g_NpcBuffer + 0x40000;
  return;
}


// 0x00e0854 (0x1d8 bytes)
void LoadGadgetModel(int oClass,int t_target)

{
  byte bVar1;
  void *pvVar2;
  ulonglong uVar3;
  MobyClass *pClass;
  undefined4 uVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  if ((g_gadgetIdx < 0) || ((&DAT_00a4d540)[g_gadgetIdx] != oClass)) {
    g_gadgetIdx = 0;
    if (0 < maximumNumWeapons) {
      piVar5 = &DAT_00a4d540;
      do {
        if (*piVar5 == oClass) break;
        g_gadgetIdx = g_gadgetIdx + 1;
        piVar5 = piVar5 + 1;
      } while (g_gadgetIdx < maximumNumWeapons);
    }
    if (t_target == -1) {
      t_target = (DAT_00a4daec == 0);
    }
    uVar3 = (ulonglong)(LZCOUNT(t_target) << 0x20) >> 0x25;
    DAT_00a4daec = (t_target == 0);
    pClass = (MobyClass *)(g_MobyClassBuffer + ((int)(uVar3 << 0x12) - (int)(uVar3 << 0x10)));
    bVar1 = (&MobyClassLookup)[oClass];
    memcpy(pClass,(void *)(&DAT_00a4d5a0)[g_gadgetIdx],(&DAT_00a4d600)[g_gadgetIdx]);
    MobyClasses[bVar1] = pClass;
    LoadMobyModel(pClass,(void *)0x0,(char *)0x0,oClass);
    iVar7 = 0;
    iVar8 = 0;
    puVar6 = &DAT_00a4d7e0;
    do {
      uVar4 = DAT_00a4dae0;
      if (-1 < *(short *)(puVar6 + g_gadgetIdx * 0x20)) {
        pvVar2 = MobyClasses[bVar1]->SoundDefs;
        *(short *)((int)pvVar2 + iVar7 + 0x1a) = *(short *)(puVar6 + g_gadgetIdx * 0x20);
        *(undefined4 *)((int)pvVar2 + iVar7 + 0x1c) = uVar4;
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 2;
      iVar7 = iVar7 + 0x20;
    } while (iVar8 < 0x10);
  }
  return;
}


// 0x00e0a2c (0x170 bytes)
longlong QueuePifLoad(void *pPif)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  
  uVar3 = FastLog2(*(undefined4 *)((int)pPif + 8));
  uVar4 = FastLog2(*(undefined4 *)((int)pPif + 0xc));
  iVar2 = g_GsRamAlloc;
  iVar6 = (int)uVar3 + -6;
  iVar7 = g_GsRamAlloc + 0x400;
  iVar1 = g_GsRamAlloc >> 8;
  g_GsRamAlloc = iVar7 + (1 << ((int)uVar3 + (int)uVar4 & 0x3fU));
  lVar5 = SCE_GS_SET_TEX0
                    (iVar7 >> 8,1 << (iVar6 + (iVar6 >> 0x1f & -iVar6) & 0x3fU),0x13,uVar3,uVar4,1,0
                     ,iVar1);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar1 = g_PifLoadQueueCnt * 0x10;
    *(int *)(&g_PifLoadQueue + iVar1) = (int)pPif + 0x20;
    *(undefined2 *)(&DAT_0095d2d0 + iVar1) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar1) = (short)((uint)iVar2 >> 8);
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(int *)(&DAT_0095d2d4 + iVar1) = (int)pPif + 0x420;
    (&DAT_0095d2d8)[iVar1] = (char)uVar3;
    (&DAT_0095d2d9)[iVar1] = (char)uVar4;
    *(short *)(&DAT_0095d2da + iVar1) = (short)((uint)iVar7 >> 8);
  }
  return lVar5;
}


// 0x00e0b9c (0x148 bytes)
longlong QueuePifLoad(int log_w,int log_h,char *tex,char *pal)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = g_GsRamAlloc;
  iVar4 = log_w + -6;
  iVar5 = g_GsRamAlloc + 0x400;
  iVar1 = g_GsRamAlloc >> 8;
  g_GsRamAlloc = iVar5 + (1 << (log_w + log_h & 0x3fU));
  lVar3 = SCE_GS_SET_TEX0
                    (iVar5 >> 8,1 << (iVar4 + (iVar4 >> 0x1f & -iVar4) & 0x3fU),0x13,log_w,log_h,1,0
                     ,iVar1);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar1 = g_PifLoadQueueCnt * 0x10;
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(char **)(&g_PifLoadQueue + iVar1) = tex;
    *(undefined2 *)(&DAT_0095d2d0 + iVar1) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar1) = (short)((uint)iVar2 >> 8);
    *(char **)(&DAT_0095d2d4 + iVar1) = pal;
    (&DAT_0095d2d8)[iVar1] = (char)log_w;
    (&DAT_0095d2d9)[iVar1] = (char)log_h;
    *(short *)(&DAT_0095d2da + iVar1) = (short)((uint)iVar5 >> 8);
  }
  return lVar3;
}


// 0x00e0ce4 (0x12c bytes)
longlong QueuePifLoad(int log_w,int log_h,char *tex,char *pal,int tex_addr,int pal_addr)

{
  int iVar2;
  longlong lVar1;
  
  iVar2 = log_w + -6;
  lVar1 = SCE_GS_SET_TEX0
                    (pal_addr >> 8,1 << (iVar2 + (iVar2 >> 0x1f & -iVar2) & 0x3fU),0x13,log_w,log_h,
                     1,0,tex_addr >> 8);
  if (g_PifLoadQueueCnt < 0x40) {
    iVar2 = g_PifLoadQueueCnt * 0x10;
    g_PifLoadQueueCnt = g_PifLoadQueueCnt + 1;
    *(char **)(&g_PifLoadQueue + iVar2) = tex;
    *(undefined2 *)(&DAT_0095d2d0 + iVar2) = 0x12;
    *(short *)(&DAT_0095d2d2 + iVar2) = (short)((uint)tex_addr >> 8);
    *(char **)(&DAT_0095d2d4 + iVar2) = pal;
    (&DAT_0095d2d8)[iVar2] = (char)log_w;
    (&DAT_0095d2d9)[iVar2] = (char)log_h;
    *(short *)(&DAT_0095d2da + iVar2) = (short)((uint)pal_addr >> 8);
  }
  return lVar1;
}


// 0x00e0e10 (0x4 bytes)
void STUB_000e0e10(...)

{
  return;
}


