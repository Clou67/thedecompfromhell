// game/loaders.cpp -- level data loading: textures, moby classes, scenes, the level file itself
// STATUS: CLEAN (checked against the asm; local names are mine)
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
#include <sys/timer.h>

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

    FastMemCopy(data, (void *)g_IopSpaceships, *(int *)(&DAT_010ea114 + g_SpaceshipVariant * 8) << 11);

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

/* the gameplay file: a table of offsets (from the file start) to its sections. Every section
   starts with a 16-byte header whose first word is usually a count. */
enum GameplaySection {
    GP_SETTINGS = 0x00,      /* fog, death height, ship path and position */
    GP_CAMERAS = 0x02,
    GP_SOUNDS = 0x03,
    GP_HELP = 0x04,          /* + language; a section of help messages per language */
    GP_MOBYS = 0x11,
    GP_MOBY_GROUPS = 0x12,
    GP_SHARED_DATA = 0x13,
    GP_MOBY_LINKS = 0x14,    /* pVar fields holding a moby record index */
    GP_PVAR_TABLE = 0x15,    /* {offset, size} per pVar block */
    GP_PVAR_DATA = 0x16,
    GP_PVAR_POINTERS = 0x17, /* pVar fields holding an offset into their own block */
    GP_CUBOIDS = 0x18,
    GP_SPHERES = 0x19,
    GP_CYLINDERS = 0x1a,
    GP_PILLS = 0x1b,         /* 0x80-byte records, copied as 0x90 */
    GP_SPLINES = 0x1c,
    GP_GRIND_PATHS = 0x1d,
    GP_POINT_LIGHT_GRID = 0x1e, /* a 0x4000-byte grid and its data */
    GP_POINT_LIGHTS = 0x1f,  /* 0x20-byte records */
    GP_BLENDERS = 0x20,      /* the game's name ("Entering blender %d") */
    GP_CAM_COLL_GRID = 0x21,
    GP_ENV_SAMPLES = 0x22,
    GP_OCCLUSION = 0x23,
};

/* a moby record of the gameplay file (record[0] is its size) */
struct GameplayMoby {
    int size;                /* 0x00 */
    int levelFlagIdx;        /* 0x04 */
    int spawnFlags;          /* 0x08  MOBYSPAWN_* */
    int uid;                 /* 0x0c */
    int bolts;               /* 0x10 */
    int boltsAlt;            /* 0x14  the bolts when spawned by level flag bit 2 */
    int oClass;              /* 0x18 */
    float scale;             /* 0x1c */
    int drawDistance;        /* 0x20 */
    int updateDistance;      /* 0x24 */
    int unk28;               /* 0x28 */
    int unk2c;               /* 0x2c */
    float pos[3];            /* 0x30 */
    float rot[3];            /* 0x3c */
    int group;               /* 0x48 */
    int onGround;            /* 0x4c  drop onto the ground below */
    float groundOffset;      /* 0x50 */
    int unk54;               /* 0x54 */
    int pVar;                /* 0x58  index into the pVar table, -1 none */
    int occlusion;           /* 0x5c  0: never occluded */
    int modeBits;            /* 0x60 */
    int red;                 /* 0x64 */
    int green;               /* 0x68 */
    int blue;                /* 0x6c */
    int light;               /* 0x70 */
    int mapObject;           /* 0x74  -1 none */
};

#define MOBYSPAWN_LEVEL_FLAG     0x01   /* spawn while its level flag is set */
#define MOBYSPAWN_NO_LEVEL_FLAG  0x02   /* spawn while its level flag is clear */
#define MOBYSPAWN_IF_CHECKPOINT  0x08   /* spawn unless its checkpoint bit is set */
#define MOBYSPAWN_IF_LEVEL       0x04   /* (without 8) spawn unless its level bit is set */
#define MOBYSPAWN_MAP_SLOT       0x10

#define MAPSLOT_NONE             (-2)
#define MAPSLOT_UNSET            (-1)

#define LEVEL_EXTRA_MOBYS        9      /* this level gets room for 0x80 more mobys */
#define MOBY_PVAR_SIZE           0x80
#define MAX_DIRECTIONAL_LIGHTS   12
#define BLENDER_LIGHT_DEFAULT    11
#define MAX_MOBY_GROUPS          112
#define MOBY_GROUP_END           0x8000
#define OCCL_NONE                0x7f80
#define GROUND_PROBE_UP          0.5f
#define LOCALE_BUFFER_SIZE       0x40000

#define SHIP_VARIANT_GEMLIK      2

static inline u8 *AlignUp64(u8 *ptr)
{
    return (u8 *)(((u32)ptr + 0x3f) & ~0x3f);
}

static inline u32 ByteSwap32(u32 value)
{
    return (value >> 24) | ((value >> 8) & 0xff00) | ((value & 0xff00) << 8) | (value << 24);
}

/* occlusion bits are stored as a big-endian {bit index} word: byte = bit >> 3, mask = 1 << (bit & 7) */
static inline int OcclIndex(u32 stored)
{
    u32 bit = ByteSwap32(stored);

    return (((int)bit >> 3) << 8) | (1 << ((stored >> 24) & 7));
}

static inline void HangForever(void)
{
    for (;;) {
        cellSysutilCheckCallback();
        sys_timer_usleep(100);
    }
}

/* Moves a pVar block from the file to `mem`; the table entry then holds its address. */
static inline u8 *CopyPVar(void **pVar, int *pvarTable, u8 *pvarData, u8 *mem)
{
    int index = (int)*pVar;

    if (index < 0) {
        *pVar = NULL;
        return mem;
    }

    int *entry = &pvarTable[index * 2];
    int size = entry[1];
    *pVar = mem;
    FastMemCopy(mem, pvarData + entry[0], size);
    entry[0] = (int)mem;
    return mem + size;
}

/* Copies count 0x80-byte primitives (cuboids, spheres, cylinders) to mem. */
static inline u8 *LoadPrims(int *section, void **prims, int *count, u8 *mem)
{
    u8 *src = (u8 *)(section + 4);
    int size = section[0] * 0x80;

    *count = section[0];
    *prims = mem;
    if (*count != 0) {
        FastMemSet(mem, 0, size);
    }
    for (int i = 0; i < *count; i++) {
        FastMemCopy32((u8 *)*prims + i * 0x80, src, 0x80);
        src += 0x80;
    }
    return AlignUp64(mem + size);
}

// 0x00dcf58 (0x1fe0 bytes)
// DL's LoadGameplayCore (the DL helpers it inlines are marked): reads the level's gameplay file
// and builds the level's objects from it in the memory at Gameplay. `reload` forces a new buffer
// for the file. Returns the memory after the help messages.
u8 *LoadGameplayFile(int reload)
{
    char localePath[128];
    u64 fileSize;
    int fileHandle;
    char path[64];

    u8 *mem = (u8 *)Gameplay;
    u8 *file = (u8 *)g_pGameplayFile;
    u32 fs = get_default_fs();

    if (g_IsPal == 0) {
        sprintf(path, "rc1/ps3data/level%d/gameplay_ntsc", Level);
    }
    else {
        sprintf(path, "rc1/ps3data/level%d/gameplay_pal", Level);
    }

    _ZN4cell4fios2op8syncWaitEPx(
        (int)_ZN4cell4fios9scheduler8openFileEPKNS0_8opattr_tEPKcjPPNS0_10filehandleE(fs, 0, (byte *)path, 1,
                                                                                         &fileHandle),
        NULL);
    if (fileHandle == 0) {
        HangForever();
    }

    _ZN4cell4fios2op8syncWaitEPx(
        (int)_ZN4cell4fios9scheduler10statCommonEPKNS0_8opattr_tEPKcPvNS0_2op10e_OPSTAGESE(fs, 0, (byte *)path,
                                                                                            (int)&fileSize, 3),
        NULL);
    if (g_pGameplayFile == 0 || reload != 0) {
        file = (u8 *)(u32)idol::kalloc(TEX_BASE, (int)fileSize);
        g_pGameplayFile = (u32)file;
    }

    if (_ZN4cell4fios2op8syncWaitEPx(read_req_setup(fs, 0, fileHandle, (u32)file, fileSize, -1), NULL) != 0) {
        HangForever();
    }
    if (_ZN4cell4fios2op8syncWaitEPx((int)filehandle_close_setup(fs, 0, fileHandle), NULL) != 0) {
        HangForever();
    }

    FlushCache(0);
    STUB_000e9150(g_IopGameplay, file);
    FlushCache(0);

    FastMemSet(&g_heroMtx, 0, 0x2310);
    FastMemSet(&GameCamera, 0, 0x3a0);
    FastMemSet(&g_AnimLayerPool, 0, 0x180);
    seedRand(1234);
    SetNtscPalTiming();
    g_CollOutput.jointCache = &g_CollMobyJointCache[0][0];
    g_CollOutput.jointCacheKeys = g_CollJointCacheKeys;
    g_CollOutput.jointCacheNext = 0;
    g_CollOutput.collCount = 0;
    g_CollOutput.damageNext = 0;
    FastMemSetZero(g_MobyGrid, 0x10000);
    FastMemSetZero(&MobyGridAlloc, 0x60);

    /* LoadMiscGameplaySettings */
    int *header = (int *)file;
    int *settings = (int *)(file + header[GP_SETTINGS]);
    g_ViewContext.occlColor0 = settings[0];
    g_ViewContext.occlColor1 = settings[1];
    g_ViewContext.occlColor2 = settings[2];
    levelFog.r = (u8)settings[3];
    levelFog.g = (u8)settings[4];
    levelFog.b = (u8)settings[5];
    LevelFogNearDist = ((float *)settings)[6];
    LevelFogFarDist = ((float *)settings)[7];
    LevelFogNearIntensity = ((float *)settings)[8];
    LevelFogFarIntensity = ((float *)settings)[9];
    HeroDeathHeight = ((float *)settings)[10];
    g_shipSplinePath = settings[15];
    g_shipCameraStartCuboid = settings[16];
    g_shipCameraEndCuboid = settings[17];
    UpdateFog();

    TfragDrawDist = 512000.0f;
    DAT_00a390b8 = 500;
    TieDrawDist = 720.0f;
    ShrubDrawDist = 500.0f;
    PartClipDist = 0x1f4000;
    STUB_000780f4(g_ViewContext.occlColor0, g_ViewContext.occlColor1, g_ViewContext.occlColor2);
    STUB_00174bd8(&DAT_00a10680);

    /* lights */
    FastMemSetZero(PointLights, 0x100);
    FastMemSetZero(&PointLightData, 0x180);
    FastMemSetZero(DirectionalLights, 0x400);
    int lightCount = *(int *)(g_EngineData + 0x60);
    if (lightCount >= MAX_DIRECTIONAL_LIGHTS) {
        printf("!!!! Too many directional lights !!!! - Lighting will look bogus as a penalty.\n");
        lightCount = MAX_DIRECTIONAL_LIGHTS;
    }
    if (lightCount != 0) {
        FastMemCopy32(DirectionalLights, (void *)DAT_00a15f70, lightCount << 6);
    }

    /* blenders: a 16-byte header each, then the 0x80-byte blenders */
    if (header[GP_BLENDERS] == 0) {
        BlenderCnt = 0;
    }
    else {
        int *section = (int *)(file + header[GP_BLENDERS]);
        u8 *src = (u8 *)(section + 4);

        BlenderCnt = section[0];
        if (BlenderCnt != 0) {
            FastMemCopy32(&DAT_00a1c900, src, BlenderCnt << 4);
            FastMemCopy32(g_Blenders, src + BlenderCnt * 16, BlenderCnt << 7);
            for (int i = 0; i < (int)BlenderCnt; i++) {
                Blender *blender = &g_Blenders[i];

                if (*(int *)&blender->dLightA < 0) {
                    blender->dLightA.A = 0;
                    blender->dLightA.B = 0;
                    blender->dLightA.G = 0;
                    blender->dLightA.R = BLENDER_LIGHT_DEFAULT;
                }
                if (*(int *)&blender->dLightB < 0) {
                    blender->dLightB.A = 0;
                    blender->dLightB.B = 0;
                    blender->dLightB.G = 0;
                    blender->dLightB.R = BLENDER_LIGHT_DEFAULT;
                }
            }
        }
    }

    /* LoadHelp: the file's messages for the language (replaced from the locale file below) */
    if (header[GP_HELP] != 0) {
        int *messages = (int *)(file + header[GP_HELP + g_Language]);
        int size = ((messages[1] + 3) & ~3) - 8;

        g_Help.num_message = messages[0];
        HelpMsgs = (HelpMsg *)mem;
        FastMemCopy32(mem, messages + 2, size);
        for (int i = 0; i < g_Help.num_message; i++) {
            u32 *message = (u32 *)((u8 *)HelpMsgs + i * 16);

            message[0] += (u32)HelpMsgs - 8;
        }
        mem = AlignUp64(mem + size);
    }

    /* ties and shrubs (already loaded with the level) */
    TieCnt = TieCntBase;
    g_TieInstance = TieInstanceBase;
    TieInstanceEnd = TieInstanceBase + TieCntBase;
    TieClassIndex = 0;
    for (u32 i = 0; i < DAT_00a15f80; i++) {
        u8 *entry = (u8 *)DAT_00a15f7c + i * 0x40;
        u16 id = *(u16 *)(entry + 0x30);

        TieClasses[i] = entry;
        TieClassRef[i] = id;
        TieClassLookup[id] = (u8)i;
        TieClassIndex = i + 1;
    }
    g_ShrubInstance = ShrubInstanceBase;
    ShrubInstanceEnd = ShrubInstanceBase + ShrubInstanceCnt;

    /* LoadCameras: file records are {type, pos, rot, pVar}, ImportCamera is {pos, type, rot, pVar} */
    if (header[GP_CAMERAS] != 0) {
        int *section = (int *)(file + header[GP_CAMERAS]);
        int *src = section + 4;
        int size = section[0] * 0x20;

        ImportCameraCnt = section[0];
        ImportCameras = (u32)mem;
        if (ImportCameraCnt != 0) {
            FastMemSet(mem, 0, size);
        }
        mem = AlignUp64(mem + size);

        for (int i = 0; i < ImportCameraCnt; i++, src += 8) {
            int *camera = (int *)(ImportCameras + i * 0x20);

            camera[3] = src[0];
            camera[0] = src[1];
            camera[1] = src[2];
            camera[2] = src[3];
            camera[4] = src[4];
            camera[5] = src[5];
            camera[6] = src[6];
            camera[7] = src[7];
        }
    }

    /* LoadSound */
    if (header[GP_SOUNDS] != 0) {
        int *section = (int *)(file + header[GP_SOUNDS]);
        u8 *src = (u8 *)(section + 4);

        g_SoundCnt = section[0];
        if (g_SoundCnt == 0) {
            g_pSoundInstances = NULL;
        }
        else {
            g_pSoundInstances = (SoundInstance *)mem;
            u8 *next = AlignUp64(mem + g_SoundCnt * 0x90);
            FastMemSet(mem, 0, g_SoundCnt * 0x90);
            for (int i = 0; i < (int)g_SoundCnt; i++, src += 0x90) {
                SoundInstance *sound = &g_pSoundInstances[i];

                FastMemCopy32(sound, src, sizeof(SoundInstance));
                sound_SetupAmbientFunctions(sound);
            }
            mem = next;
        }
    }

    /* InitLoadMobyInstances / LoadMobyInstances: the records that spawn get the next instance;
       g_MobyShadowList maps record index to instance index (-1 not spawned) */
    int *mobySection = (int *)(file + header[GP_MOBYS]);
    int recordCnt = mobySection[0];
    int extraMobys = mobySection[1] + (Level == LEVEL_EXTRA_MOBYS ? 0x80 : 0);
    GameplayMoby *record = (GameplayMoby *)(mobySection + 4);
    short *recordMoby = (short *)g_MobyShadowList;
    int spawned = 0;

    g_MobyInstance = (MobyInstance *)mem;
    FastMemSet(mem, 0, (recordCnt + extraMobys) << 8);

    for (int i = 0; i < recordCnt; i++, recordMoby++) {
        GameplayMoby *rec = record;
        int flags = rec->spawnFlags;
        char mapSlot = MAPSLOT_NONE;
        int bolts = rec->bolts;
        int boltsBase = rec->bolts;

        record = (GameplayMoby *)((u8 *)record + (rec->size & ~3));

        if (flags != 0) {
            u32 word = rec->uid >> 5;
            u32 bit = 1 << (rec->uid & 0x1f);

            mapSlot = MAPSLOT_UNSET;
            if (flags & MOBYSPAWN_MAP_SLOT) {
                mapSlot = NAVG_AllocSlot(Level, rec->uid);
            }

            if (g_Checkpoint.objState[rec->uid] != 0) {
                *recordMoby = -1;
                continue;
            }

            if ((flags & (MOBYSPAWN_LEVEL_FLAG | MOBYSPAWN_NO_LEVEL_FLAG)) == 0) {
                u32 dead = 0;

                if (flags & MOBYSPAWN_IF_CHECKPOINT) {
                    dead = g_CheckpointBits[word] & bit;
                }
                else if ((flags & (MOBYSPAWN_IF_CHECKPOINT | MOBYSPAWN_IF_LEVEL)) == MOBYSPAWN_IF_LEVEL) {
                    dead = g_LevelObjBits[Level][word] & bit;
                }
                if (dead) {
                    *recordMoby = -1;
                    continue;
                }
            }
            else if ((s8)(&g_CheckpointLevelFlags)[rec->levelFlagIdx] == -1) {
                if (!(flags & MOBYSPAWN_NO_LEVEL_FLAG)) {
                    *recordMoby = -1;
                    continue;
                }
                bolts = rec->boltsAlt;
                boltsBase = rec->boltsAlt;
                if (g_CheckpointBits[word] & bit) {
                    bolts = (rec->boltsAlt + 1) / 2;
                }
            }
            else {
                if (!(flags & MOBYSPAWN_LEVEL_FLAG)) {
                    *recordMoby = -1;
                    continue;
                }
                if (g_LevelObjBits[Level][word] & bit) {
                    bolts = (rec->bolts + 1) / 2;
                }
            }
        }

        *recordMoby = (short)spawned;
        MobyInstance *moby = &g_MobyInstance[spawned];

        InitMobyInstance(moby, rec->oClass);
        moby->field74_0xb1 = mapSlot;
        moby->uid = (u16)rec->uid;
        moby->levelFlagIdx = (char)rec->levelFlagIdx;
        *(short *)&moby->field76_0xb4 = (short)bolts;
        *(short *)&moby->field78_0xb6 = (short)boltsBase;
        if (moby->pClass != NULL) {
            moby->scale = moby->pClass->gScale * rec->scale;
        }
        moby->drawDistance = (short)rec->drawDistance;
        moby->updateDistance = (char)rec->updateDistance;
        moby->pos.x = rec->pos[0];
        moby->pos.y = rec->pos[1];
        moby->pos.z = rec->pos[2];
        moby->rotation.x = rec->rot[0];
        moby->rotation.y = rec->rot[1];
        moby->rotation.z = rec->rot[2];
        moby->group = (s8)rec->group;

        if (rec->onGround != 0) {
            float ground = GetGroundZ(GROUND_PROBE_UP, &moby->pos, 0);

            if (ground > 0.0f) {
                moby->pos.z = ground + rec->groundOffset;
            }
        }

        moby->occlIndex = OCCL_NONE;
        moby->pVar = (void *)rec->pVar;
        if (rec->occlusion == 0) {
            moby->occlIndex = 0;
        }

        if (moby->pClass != NULL) {
            moby->pClass->mode_bits |= (u16)rec->modeBits;
        }
        moby->modeBits |= (u16)rec->modeBits;
        if (moby->pClass != NULL) {
            UpdateMobyTransform(moby);
        }

        moby->colorManipulator = rec->blue * 0x10000 + rec->green * 0x100 + rec->red;
        MB_SetLights(moby, moby->colorManipulator, 0, 0, 0);
        *(u64 *)&moby->color |= (s64)rec->light;

        if (rec->mapObject != -1) {
            Map_RegisterLevelObject(moby, rec->mapObject);
        }
        spawned++;
    }

    MobyInstancePermEnd = &g_MobyInstance[spawned];
    MobyInstancePermEnd->state = 0xff;
    MobyInstanceEnd = &g_MobyInstance[extraMobys + spawned - 1];
    u8 *pvarStart = (u8 *)&g_MobyInstance[extraMobys + spawned];
    g_pMobyVars = pvarStart;
    mem = AlignUp64(pvarStart + extraMobys * MOBY_PVAR_SIZE);
    pvarStart = mem;

    /* LoadCameraPVars, LoadSoundPVars, LoadMobyPVars */
    int *pvarTable = (int *)(file + header[GP_PVAR_TABLE]);
    if (header[GP_PVAR_DATA] != 0) {
        u8 *pvarData = file + header[GP_PVAR_DATA];

        for (int i = 0; i < ImportCameraCnt; i++) {
            mem = CopyPVar((void **)(ImportCameras + i * 0x20 + 0x1c), pvarTable, pvarData, mem);
        }
        for (int i = 0; i < (int)g_SoundCnt; i++) {
            mem = CopyPVar(&g_pSoundInstances[i].pVar, pvarTable, pvarData, mem);
        }
        for (MobyInstance *moby = g_MobyInstance; moby != MobyInstancePermEnd; moby++) {
            mem = CopyPVar(&moby->pVar, pvarTable, pvarData, mem);
        }
        mem = AlignUp64(mem);
    }

    /* LoadMobyLinkRectifyList: {pVar index, field offset} pairs, the field becomes a moby index */
    if (header[GP_MOBY_LINKS] != 0) {
        int *link = (int *)(file + header[GP_MOBY_LINKS]);

        for (; link[0] >= 0; link += 2) {
            u8 *pVar = (u8 *)pvarTable[link[0] * 2];

            if (pVar >= pvarStart) {
                int *field = (int *)(pVar + link[1]);

                if (*field >= 0) {
                    *field = ((short *)g_MobyShadowList)[*field];
                }
            }
        }
    }

    /* LoadPVarRectifyList: offsets in pVar blocks to their own block */
    if (header[GP_PVAR_POINTERS] != 0) {
        int *fix = (int *)(file + header[GP_PVAR_POINTERS]);

        for (; fix[0] >= 0; fix += 2) {
            u8 *pVar = (u8 *)pvarTable[fix[0] * 2];

            if (pVar >= pvarStart) {
                *(int *)(pVar + fix[1]) += (int)pVar;
            }
        }
    }

    /* LoadMobyGroups: lists of record indexes, the last with bit 15; rewritten in place as
       instance indexes, leaving out what did not spawn */
    if (header[GP_MOBY_GROUPS] != 0) {
        int *section = (int *)(file + header[GP_MOBY_GROUPS]);
        int *offsets = section + 4;
        int groupCnt = section[0];
        int size = section[1];
        u8 *groups = mem;

        mem = AlignUp64(mem + size);
        if (size != 0) {
            FastMemCopyReverse16((u16 *)groups, (u8 *)(section + groupCnt + 4), size);
        }
        FastMemSet(&g_MobyGroups, 0, MAX_MOBY_GROUPS * 4);

        for (int i = 0; i < groupCnt; i++) {
            if (offsets[i] < 0) {
                continue;
            }

            u16 *in = (u16 *)(groups + offsets[i]);
            u16 *out = in;
            g_NumMobyGroups = i + 1;
            (&g_MobyGroups)[i] = (u32)in;
            for (;;) {
                u16 entry = *in;
                short moby = ((short *)g_MobyShadowList)[entry & 0x7fff];

                if (moby >= 0) {
                    *out++ = moby;
                }
                if (entry & MOBY_GROUP_END) {
                    break;
                }
                in++;
            }

            if ((u32)out > (&g_MobyGroups)[i]) {
                out[-1] |= MOBY_GROUP_END;
            }
            else {
                (&g_MobyGroups)[i] = 0;
            }
        }
    }

    /* LoadMobySharedData: data pVar fields point into, then {short pVar, short field, int offset} */
    if (header[GP_SHARED_DATA] != 0) {
        int *section = (int *)(file + header[GP_SHARED_DATA]);
        int size = section[0];
        int fixCnt = section[1];
        u8 *shared = mem;

        mem = AlignUp64(mem + size);
        if (size != 0) {
            FastMemCopyReverse32((uint *)shared, (u8 *)(section + 4), size);
        }

        short *fix = (short *)((u8 *)(section + 4) + size);
        for (int i = 0; i < fixCnt; i++, fix += 4) {
            u8 *pVar = (u8 *)pvarTable[fix[0] * 2];

            if (pVar >= pvarStart) {
                *(int *)(pVar + fix[1]) = *(int *)(fix + 2) + (int)shared;
            }
        }
    }

    /* LoadPaths */
    if (header[GP_SPLINES] != 0) {
        int *section = (int *)(file + header[GP_SPLINES]);
        int size = section[2];

        SplineCnt = section[0];
        SplineOfs = mem;
        u8 *next = AlignUp64(mem + size);
        if (size != 0) {
            FastMemCopy(mem, (u8 *)section + section[1], size);
        }
        for (int i = 0; i < (int)SplineCnt; i++) {
            Splines[i] = (Spline *)((u8 *)SplineOfs + section[4 + i]);
        }
        mem = next;
    }

    /* LoadGrindPaths: 0x20-byte paths (a bounding sphere, data, count), then their data */
    if (header[GP_GRIND_PATHS] != 0) {
        int *section = (int *)(file + header[GP_GRIND_PATHS]);
        int *src = section + 4;
        int dataOfs = section[1];
        int size = section[2];

        g_GrindPathCnt = section[0];
        g_GrindPaths = (u32)mem;
        u8 *data = AlignUp64(mem + g_GrindPathCnt * 0x20);
        for (int i = 0; i < (int)g_GrindPathCnt; i++, src += 8) {
            u8 *path = (u8 *)g_GrindPaths + i * 0x20;

            memcpy(path, src, 0x10);
            *(int *)(path + 0x14) = src[4];
        }

        mem = AlignUp64(data + size);
        if (size != 0) {
            FastMemCopy(data, (u8 *)section + dataOfs, size);
        }
        for (int i = 0; i < (int)g_GrindPathCnt; i++, src++) {
            *(int *)((u8 *)g_GrindPaths + i * 0x20 + 0x10) = src[0] + (int)data;
        }
    }

    /* LoadPills */
    if (header[GP_PILLS] != 0) {
        int *section = (int *)(file + header[GP_PILLS]);
        u8 *src = (u8 *)(section + 4);

        g_PillCnt = section[0];
        g_Pills = (u32)mem;
        u8 *next = AlignUp64(mem + g_PillCnt * 0x90);
        if (g_PillCnt != 0) {
            FastMemSet(mem, 0, g_PillCnt * 0x90);
        }
        for (int i = 0; i < (int)g_PillCnt; i++, src += 0x80) {
            FastMemCopy32((u8 *)g_Pills + i * 0x90, src, 0x90);
        }
        mem = next;
    }

    /* LoadCuboids, LoadSpheres, LoadCylinders */
    if (header[GP_CUBOIDS] != 0) {
        mem = LoadPrims((int *)(file + header[GP_CUBOIDS]), (void **)&Cuboids, &CuboidCnt, mem);
    }
    if (header[GP_SPHERES] != 0) {
        mem = LoadPrims((int *)(file + header[GP_SPHERES]), (void **)&Spheres, &SphereCnt, mem);
    }
    if (header[GP_CYLINDERS] != 0) {
        mem = LoadPrims((int *)(file + header[GP_CYLINDERS]), (void **)&Cylinders, &CylinderCnt, mem);
    }

    /* LoadCameraCollisionPrimGrid: a 0x4000-byte grid, then its data */
    if (header[GP_CAM_COLL_GRID] != 0) {
        int *section = (int *)(file + header[GP_CAM_COLL_GRID]);

        CamCollGrid = (u32)mem;
        FastMemCopy32(mem, section + 4, section[0] + 0x4000);
        mem = AlignUp64(mem + section[0] + 0x4000);
    }

    /* the point light grid and the point lights */
    if (header[GP_POINT_LIGHT_GRID] != 0) {
        int *section = (int *)(file + header[GP_POINT_LIGHT_GRID]);

        g_PointLightGrid = mem;
        FastMemCopy32(mem, section + 4, section[0] + 0x4000);
        mem = AlignUp64(mem + section[0] + 0x4000);
    }

    if (header[GP_POINT_LIGHTS] != 0) {
        int *section = (int *)(file + header[GP_POINT_LIGHTS]);
        int size = section[0] * 0x20;

        g_PointLightCnt = section[0];
        g_PointLightRecords = (u32)mem;
        u8 *next = AlignUp64(mem + size);
        if (g_PointLightCnt != 0) {
            FastMemCopy32(mem, section + 4, size);
        }
        mem = next;
    }

    if (header[GP_ENV_SAMPLES] != 0) {
        int *section = (int *)(file + header[GP_ENV_SAMPLES]);
        int size = section[0] * 0x30;

        g_EnvSampleCount = section[0];
        g_EnvSamples = (EnvSample *)mem;
        u8 *next = AlignUp64(mem + size);
        if (g_EnvSampleCount != 0) {
            FastMemCopy32(mem, section + 4, size);
        }
        mem = next;
    }

    /* ResetParticles */
    PartInstances = (PartInstance *)mem;
    PartIndexNext = 0;
    PartActiveCnt = 0;
    PartIndexTop = -1;
    FastMemSetZero(&g_PartUsed, 0x200);

    /* the player's ship, parked where the settings say (none when its x is 0) */
    g_SpaceshipPtr = NULL;
    float *shipPos = (float *)&settings[11];
    if (settings[11] > 0) {
        bool found = false;

        if (Level == Gemlik && g_SpaceshipVariant == SHIP_VARIANT_GEMLIK && DAT_00a561c0 != 0) {
            for (MobyInstance *moby = g_MobyInstance; moby->state != 0xff; moby++) {
                if ((short)moby->oClass == OCLASSES_SPACESHIP[SHIP_VARIANT_GEMLIK]) {
                    SetupSpaceShipVars(moby);
                    MB_SetAnimationNoBlend(moby, 1, 0);
                    found = g_SpaceshipPtr != NULL;
                    break;
                }
            }
        }

        if (!found) {
            MobyInstance *ship = CreateMoby(OCLASSES_SPACESHIP[g_SpaceshipVariant]);

            ship->pos.x = shipPos[0];
            ship->pos.y = shipPos[1];
            ship->pos.z = shipPos[2];
            ship->drawDistance = 0xff;
            ship->rotation.z = shipPos[3];
            ship->updateDistance = 16;
            ship->pUpdate = &PTR_UpdateMoby_Spaceship_00707c58;
            ship->modeBits &= ~NO_UPDATE;
            MB_SetAnimationNoBlend(ship, 1, 0);
            UpdateMobyTransform(ship);
            g_SpaceshipPtr = ship;
            Map_RegisterLevelObject(ship, 0);
        }
    }

    /* AttachMobyOcclusion: {count tfrags, count ties, count mobys}, then {bit, id} pairs for the
       tfrags, ties and mobys */
    int tfragCnt = TfragsCnt;
    if (OcclGrid == NULL || header[GP_OCCLUSION] == 0) {
        printf("***\nno occlusion\n***\n");
        for (MobyInstance *moby = g_MobyInstance; moby != MobyInstanceEnd; moby++) {
            moby->occlIndex = OCCL_NONE;
        }
        for (TieInstance *tie = g_TieInstance; tie != TieInstanceEnd; tie++) {
            tie->occlIndex[0] = 0;
            tie->occlIndex[1] = 0;
            tie->occlIndex[2] = 0x7f;
            tie->occlIndex[3] = 0x80;
        }
        for (int i = 0; i < (int)TfragsCnt; i++) {
            Tfrags[i].occlIndex[0] = 0x7f;
            Tfrags[i].occlIndex[1] = 0x80;
        }
        OcclUpdate = 0;
    }
    else {
        int *section = (int *)(file + header[GP_OCCLUSION]);
        u32 *tfragOccl = (u32 *)(section + 4);
        int occlTfrags = section[0];
        int occlTies = section[1];
        int occlMobys = section[2];
        u32 *mobyOccl = tfragOccl + occlTfrags * 2 + occlTies * 2;

        if (g_MobyInstance->state != 0xff) {
            bool stale = false;
            int occluded = 0;
            int missing = 0;

            for (MobyInstance *moby = g_MobyInstance; moby->state != 0xff; moby++) {
                if (moby->occlIndex == OCCL_NONE) {
                    continue;
                }

                occluded++;
                int j;
                for (j = 0; j < occlMobys; j++) {
                    if ((int)ByteSwap32(mobyOccl[j * 2 + 1]) == (short)moby->uid) {
                        break;
                    }
                }

                if (j == occlMobys) {
                    missing++;
                    stale = true;
                    moby->occlIndex = OCCL_NONE;
                }
                else {
                    moby->occlIndex = (u16)OcclIndex(mobyOccl[j * 2]);
                }
            }

            if (stale) {
                printf("***\nocclusion out of date on mobys (%d / %d)\n***\n", missing, occluded);
            }
        }

        if (tfragCnt == occlTfrags) {
            for (int i = 0; i < occlTfrags; i++) {
                u8 *tfrag = (u8 *)**(int **)&DAT_00a15f74 + i * 0x30;

                *(u16 *)(tfrag + 0x1e) = (u16)OcclIndex(tfragOccl[i * 2]);
            }
        }
        else {
            printf("***\nocclusion out of date on tfrag\n***\n");
            for (int i = 0; i < (int)TfragsCnt; i++) {
                Tfrags[i].occlIndex[0] = 0x7f;
                Tfrags[i].occlIndex[1] = 0x80;
            }
        }

        u32 *tieOccl = tfragOccl + occlTfrags * 2;
        for (int i = 0; i < occlTies; i++) {
            *(int *)g_TieInstance[i].occlIndex = OcclIndex(tieOccl[i * 2]);
        }
        OcclUpdate = 2;
    }

    ResetDrawGlobals();
    Hero_ResetHero();
    Hero_InitStuff();
    InitCameras();
    UpdateCamera();
    InitPadRing();
    EnableFontColors();

    g_mobyIdListCount = 0;
    DAT_00a51ee8 = 0;
    DAT_00a51f68 = 0;
    MobyInstance *hero = *(MobyInstance **)((u8 *)&g_heroMtx + 0x2080);
    worldUpdateTime = 0;
    DAT_00a15c7c = 0;
    for (int i = 0; i < 20; i++) {
        ((u32 *)&DAT_007ff23c)[i] = 0;
    }
    DAT_010bb478 = 0;
    if (g_SpaceshipPtr != NULL) {
        *(u64 *)&g_SpaceshipPtr->color = *(u64 *)&hero->color;
    }

    if (Level == Aridia || (Level >= 5 && Level <= 8) || Level == 10) {
        ScreenColorEffectLevel = (u32)&DAT_0071ef00;
    }
    else {
        ScreenColorEffectLevel = (u32)&DAT_0071eed0;
    }
    ScreenColorEffectNow = (pointer)ScreenColorEffectLevel;

    LoadHelp();
    return mem + LOCALE_BUFFER_SIZE;
}

/* the level wad's table of contents: {sector, sector count} per file */
#define WAD_SPACESHIPS        2       /* + ship variant */
#define WAD_ENTRY_166         166
#define WAD_GAMEPLAY_NTSC     167
#define WAD_GAMEPLAY_PAL      168
#define IOP_TOP               0x10000000

#define LOAD_STAGE_ENGINE     0
#define LOAD_STAGE_GLOBALS    1
#define LOAD_STAGE_GAMEPLAY   2
#define LOAD_STAGE_SOUND_WAIT 3
#define LOAD_STAGE_UNLOAD     4
#define LOAD_STAGE_FLUSH      5
#define LOAD_STAGE_SOUND_BANK 6
#define LOAD_STAGE_DONE       7

#define MAX_GADGET_SOUNDS     15
#define GADGET_SOUNDS         16
#define GADGET_CLASS_SIZE     0x30000

#define NPC_BUFFER_SIZE       0x80000
#define SCENE_CHUNK_MAX       70
#define SUBTITLE_MIN_OFFSET   0x400
#define OCLASS_NPC_SHIP       0x215   /* the first actor of a space scene is the player's ship */
#define NPC_COLOR             0x00383838

#define PIF_QUEUE_MAX         64
#define PIF_CLUT_SIZE         0x400

static inline int WadSectors(int entry)
{
    return ((int *)&DAT_010ea100)[entry * 2 + 1];
}

static inline u32 RoundUp4K(int sectors)
{
    return (sectors * 0x800 + 0xfff) & ~0xfff;
}

/* the moby class table of the engine file: {oClass, offset} pairs */
struct EngineMobyClass {
    int oClass;
    int offset;              /* 0: a class without a model */
};

/* the gadgets of the engine file (16 bytes each) */
struct EngineGadget {
    int oClass;
    int model;               /* offset of its class */
    int size;
    int unk0c;
};

/* the sounds of the engine file */
struct EngineSounds {
    short defs;              /* offset of the SoundDefs */
    short defCnt;
    short remap;             /* offset of the int table mapping SoundDef.index */
    short remapCnt;
    short classSounds[][2];  /* per mClass: {offset of its sound ids, count} */
};

/* an actor of an npc scene chunk */
struct NpcActor {
    int oClass;
    int unk04;
    int unk08;
    int pVar;                /* offset in the chunk */
    MobySeq seq;             /* 0x10  its one animation, frames relative to it */
};

/* the npc / space scene chunk header */
struct NpcChunk {
    int numFrames;
    int subtitles;           /* offset, below 0x400: none */
    int unk08;
    int mobyCnt;
    int cameraFrames;        /* offset */
    int actors[];            /* offsets */
};

/* a queued clut + texture upload (16 bytes, g_PifLoadQueue) */
struct PifLoad {
    void *clut;
    short clutFormat;
    short clutBlock;
    void *tex;
    u8 uLog;
    u8 vLog;
    short texBlock;
};

// 0x00def38 (0x8 bytes)
undefined8 STUB_000def38_RET_1(...)
{
    return 1;
}

// 0x00def40 (0x14 bytes)
void Unused_IncCounter_a204ac(void)
{
    DAT_00a204ac++;
}

// 0x00def54 (0x24 bytes)
// LoadAssetAsync's completion callback.
void AdvanceLoadingStage(void)
{
    g_LoadingStage++;
    g_LevelLoadPending++;
}

// 0x00def78 (0x488 bytes)
// One step of loading a level, called until it returns 1: the engine and VRAM files, the
// spaceships, the gameplay file, then the level's sound bank.
int LoadLevelFiles(void)
{
    char bankPath[64];
    char enginePath[128];
    char vramPath[128];
    int variant = g_SpaceshipVariant;
    short stage = g_LoadingStage;

    if (FUN_00503128_RET_0(1) != 0) {
        DAT_009636c0++;
        g_LoadingStage = stage;
        return 0;
    }

    switch (g_LoadingStage) {
    case LOAD_STAGE_DONE:
        if (STUB_00505d20() == 0 && g_BootSoundBank != (u32)-1) {
            STUB_00505f48();
            return 1;
        }
        break;

    case LOAD_STAGE_SOUND_BANK:
        if (STUB_00505d20() == 0) {
            g_BootSoundBank = -1;
            sprintf(bankPath, "rc1/ps3data/level%d/sound.bnk", Level);
            FUN_004fe5c8(TEX_BASE, 0x10);
            void *bank = FUN_004fe5ec((IMSeqMem *)TEX_BASE);
            int size = LoadAssetFromFile(bankPath, bank, -1);
            FUN_004fe6ec(TEX_BASE, size);
            Sound_LoadBank((u8 *)bank, (u8 *)sound_BasicCB, &g_BootSoundBank);
            stage = g_LoadingStage + 1;
        }
        break;

    case LOAD_STAGE_FLUSH:
        if (STUB_00505d20() == 0) {
            STUB_00505f48();
            stage = g_LoadingStage + 1;
        }
        break;

    case LOAD_STAGE_UNLOAD:
        if (STUB_00505d20() == 0) {
            snd_UnloadBank((int *)g_BootSoundBank, 1);
            g_BootSoundBank = 0;
            stage = g_LoadingStage + 1;
        }
        break;

    case LOAD_STAGE_SOUND_WAIT:
        if (DAT_00964562 == 0) {
            FUN_0060c0d0();
            stage = g_BootSoundBank != 0 ? g_LoadingStage + 1 : LOAD_STAGE_SOUND_BANK;
        }
        break;

    case LOAD_STAGE_GAMEPLAY:
        if (Cutscene == 0) {
            FUN_00503404(g_IopGameplay, "gameplay_ntsc");
        }
        else {
            FUN_00503404(g_IopGameplay, "gameplay_pal");
        }
        stage = g_LoadingStage + 1;
        break;

    case LOAD_STAGE_GLOBALS:
        if (g_LevelLoadPending == 2) {
            g_LevelLoadPending = 0;
        }
        idol::m_LoadGameFileS(g_IopSpaceships, "space_ships");
        LoadAssetFromFile("rc1/ps3data/japan_font.ps3", &g_JapanFontTex, 0x24);
        LoadAssetFromFile("rc1/ps3data/japan_font.vram", (void *)g_FontVram, 0x80000);
        g_JapanFontTex += (u32)g_FontVram - *(u32 *)((u8 *)g_pIdolDraw + 0x4ac);
        stage = g_LoadingStage + 1;
        break;

    case LOAD_STAGE_ENGINE:
        if (g_LevelLoadPending == 0) {
            /* where the files would go in IOP memory, down from its top */
            int gameplay = Cutscene == 0 ? WadSectors(WAD_GAMEPLAY_NTSC) : WadSectors(WAD_GAMEPLAY_PAL);

            g_IopGameplay = IOP_TOP - RoundUp4K(gameplay);
            g_IopSpaceships = g_IopGameplay - RoundUp4K(WadSectors(WAD_SPACESHIPS + variant));
            DAT_00964564 = (u32 *)(g_IopSpaceships - RoundUp4K(WadSectors(WAD_ENTRY_166)));

            sprintf(enginePath, "rc1/ps3data/level%d/engine.ps3", Level);
            sprintf(vramPath, "rc1/ps3data/level%d/vram.ps3", Level);
            g_LevelLoadPending = 1;
            LoadAssetAsync(&TEX_BASE, enginePath, vramPath, (undefined4)&PTR_AdvanceLoadingStage_00705ad0);
        }
        break;
    }

    g_LoadingStage = stage;
    return 0;
}

/* Gives a gadget's sound ids to its class, or (class absent) stores them for LoadGadgetModel. */
static inline void SetClassSounds(int mClass, int *ids, int count)
{
    MobyClass *pClass = MobyClasses[mClass];

    if (pClass == NULL) {
        int gadget;

        for (gadget = 0; gadget < maximumNumWeapons; gadget++) {
            if (g_GadgetOClasses[gadget] == (short)(&mClass_to_oClass)[mClass]) {
                break;
            }
        }
        if (gadget < maximumNumWeapons) {
            FastMemSet(g_GadgetSoundIds[gadget], -1, sizeof(g_GadgetSoundIds[gadget]));
            for (int i = 0; i < count && i < MAX_GADGET_SOUNDS; i++) {
                g_GadgetSoundIds[gadget][i] = (short)ids[i];
            }
        }
        return;
    }

    if (count != pClass->sound_cnt) {
        printf("internal moby sound mismatch on moby %d\n", (&mClass_to_oClass)[mClass]);
    }
    for (int i = 0; i < MobyClasses[mClass]->sound_cnt; i++) {
        SoundDef *def = (SoundDef *)MobyClasses[mClass]->SoundDefs + i;

        def->bank_index = g_BootSoundBank;
        def->index = (short)ids[i];
    }
}

/* Points a class's first GIF list at one texture header. */
static inline void SetGifTexture(MobyClass *pClass, int header)
{
    MobyPacketHeader *packets = (MobyPacketHeader *)pClass->packets;
    MobyGifRef *ref = packets->gifs0;

    for (u32 i = 0; i < packets->cnt0; i++, ref++) {
        ref->tex = header;
        if (ref->wrap == 0) {
            u32 format = *(u32 *)(header + 8);

            ref->wrap = (u8)(((format >> 6) & 0xc) | (format & 3));
        }
    }
}

// 0x00df408 (0xc30 bytes)
// Sets the level up from its engine file (on a full load), loads the ship models, then the
// gameplay file; then either clears or restores the checkpoint.
int LoadAllMobys(int reload, int restoreCheckpoint)
{
    char shipPath[64];
    char vramPath[64];
    int *engine = (int *)g_EngineData;
    u8 *buffer = (u8 *)g_GameplayBuffer;
    u8 *base = (u8 *)engine;

    if (reload != 0) {
        FastMemCopy32(&g_CheckpointLevelFlags, g_LevelFlags + Level, 0x10);

        DAT_00a1bfd8 = engine[0x1d] + (int)engine;
        IconTableEntry = (IconTableEntries *)(base + *(int *)(DAT_00a1bfd8 + 4));
        g_LevelSoundBank = g_BootSoundBank;
        TexturePointerArray = (int)engine + *(int *)(DAT_00a1bfd8 + 8);
        TfragsCnt = *(u16 *)(DAT_00a15f74 + 6);
        OcclGrid = engine[1] != 0 ? base + engine[1] : NULL;
        Tfrags = (Tfrag *)*(int *)DAT_00a15f74;
        ParseColl((char *)(base + engine[5]));

        /* the moby classes */
        int *classTable = (int *)(base + engine[0]);
        EngineMobyClass *entry = (EngineMobyClass *)(classTable + 1);
        for (int i = 0; i < classTable[0]; i++, entry++) {
            MobyClass *pClass = entry->offset != 0 ? (MobyClass *)(base + entry->offset) : NULL;

            LoadMobyPClasses(pClass, NULL, (char *)((int *)entry + 4), entry->oClass);
        }

        /* Ratchet's sequences are separate */
        int *seqOffsets = (int *)(base + engine[6]);
        for (int i = 0; i < MobyClasses[0]->seq_cnt; i++) {
            if (seqOffsets[i] != 0) {
                MobyClasses[0]->seqs[i] = (MobySeq *)(base + seqOffsets[i]);
                ParseMobySeq(MobyClasses[0], i);
            }
        }

        /* the gadgets */
        g_gadgetIdx = -1;
        g_GadgetBufferSlot = 0;
        maximumNumWeapons = engine[0x14];
        EngineGadget *gadget = (EngineGadget *)(base + engine[0x13]);
        for (int i = 0; i < maximumNumWeapons; i++, gadget++) {
            g_GadgetOClasses[i] = gadget->oClass;
            g_GadgetModelSizes[i] = gadget->size;
            g_GadgetModels[i] = (int)engine + gadget->model;
        }

        if (engine[0x10] == 0) {
            g_byteGridStride = 0;
            g_byteGridData = NULL;
            g_byteGridRows = 0;
            g_byteGridMin = 0;
            g_byteGridMax = g_byteGridMin;
        }
        else {
            LoadByteGrid((ByteGridHeader *)(base + engine[0x10]));
        }

        /* occlusion octants: a centre, then a 0x80-byte visibility set per octant around it */
        OcclOct = engine[2] != 0 ? base + engine[2] : NULL;
        Loaders_RelocSpaceWadPtrs((int *)(base + engine[0x1c]));

        /* the sounds: the level's SoundDefs go to the gameplay buffer */
        EngineSounds *sounds = (EngineSounds *)(base + engine[0x12]);
        int *remap = (int *)((u8 *)sounds + sounds->remap);
        int defsSize = sounds->defCnt * (int)sizeof(SoundDef);

        g_pSoundDefs = (SoundDef *)buffer;
        g_TotalSoundDefCnt = sounds->defCnt;
        FastMemCopy32(buffer, (u8 *)sounds + sounds->defs, defsSize);
        for (int i = 0; i < g_TotalSoundDefCnt; i++) {
            SoundDef *def = g_pSoundDefs + i;

            if (def->index < sounds->remapCnt) {
                def->index = (short)remap[def->index];
            }
            else {
                printf("internal level sound mismatch\n");
                def->index = -1;
            }
            def->bank_index = g_BootSoundBank;
        }

        for (int i = 0; i < oClass_to_mClass_lookup; i++) {
            short *classSounds = sounds->classSounds[i];

            SetClassSounds(i, (int *)((u8 *)sounds + classSounds[0]), classSounds[1]);
        }
        buffer = AlignUp64(buffer + defsSize);

        /* the ship and cockpit: classes, then their two texture headers */
        int shipOClass = OCLASSES_SPACESHIP[g_SpaceshipVariant];
        int cockpitOClass = OCLASSES_COCKPIT[g_SpaceshipVariant];
        sprintf(shipPath, "rc1/ps3data/global/spaceship%d.ps3", g_SpaceshipVariant + 1);
        sprintf(vramPath, "rc1/ps3data/global/spaceship%d.vram", g_SpaceshipVariant + 1);
        int shipSize = LoadAssetFromFile(shipPath, buffer, -1);
        int *ship = (int *)buffer;
        int texOffset = ship[2];

        if ((&MobyClassLookup)[shipOClass] == 0xff) {
            LoadMobyPClasses((MobyClass *)(buffer + ship[0]), NULL, NULL, shipOClass);
        }
        if ((&MobyClassLookup)[cockpitOClass] == 0xff) {
            LoadMobyPClasses((MobyClass *)(buffer + ship[1]), NULL, NULL, cockpitOClass);
        }

        u8 *texHeaders = buffer + texOffset;
        int texCnt = (shipSize - texOffset) / RSX_TEX_SIZE;
        FUN_004fe5c8(DAT_00a15f50, 0x80);
        u8 *vram = (u8 *)FUN_004fe5f4(DAT_00a15f50, 0x80);
        int vramSize = LoadAssetFromFile(vramPath, vram, -1);
        FUN_004fe6ec(DAT_00a15f50, vramSize);

        int vramBase = *(int *)(g_pIdolDrawBase + 0x4ac);
        for (int i = 0; i < texCnt; i++) {
            *(int *)(texHeaders + i * RSX_TEX_SIZE) += (int)vram - vramBase;
        }

        SetGifTexture(MobyClasses[(&MobyClassLookup)[shipOClass]], (int)texHeaders);
        SetGifTexture(MobyClasses[(&MobyClassLookup)[cockpitOClass]], (int)texHeaders + RSX_TEX_SIZE);

        Gameplay = (u32)AlignUp64(buffer + shipSize);
    }

    LoadGameplayFile(reload);

    if (restoreCheckpoint == 0) {
        ClearCheckpointData();
        for (int i = 0; i < 16; i++) {
            ((u32 *)&DAT_00a0fcd4)[i] = 0;
        }
    }
    else {
        RestoreCheckpoint();
    }

    DAT_00a15c14 = 0;
    g_DialogMoby = 0;
    g_DialogLine = 0;
    UpdateMobysInitial();
    worldUpdateTime++;
    return 0;
}

// 0x00e0038 (0xd8 bytes)
// Debug: whether the scene's npc file is on the host.
int LoadNpcMobys(int level_id, int scene_id)
{
    char path[88];

    STUB_00174cf4(1);
    STUB_00503078(0);
    if (Cutscene == 0) {
        sprintf(path, "host0:z:/i5/levels/level%d/npcs/scene_%d/scene.dat", level_id, scene_id);
    }
    else {
        sprintf(path, "host0:z:/i5/levels/level%d/npcs/scene_%d/scenep.dat", level_id, scene_id);
    }

    int file = HostOpen(path, 0);
    if (file < 0) {
        return 0;
    }
    HostClose(file);
    return 1;
}

// 0x00e0110 (0x8 bytes)
int LoadNpcSubtitles(int level, int scene)
{
    return 1;
}

// 0x00e0118 (0x10c bytes)
// Starts loading a scene chunk into the second half of the npc buffer.
int PreLoadNpcChunk(int chunk_id)
{
    char path[64];
    u32 dest = g_NpcBuffer + NPC_BUFFER_SIZE;

    g_SceneLoadBuffer = dest;
    if (g_IsPal == 0) {
        sprintf(path, "rc1/ps3data/level%d/scene[%d]/chunk%d.ps3", Level, g_SceneId, chunk_id);
    }
    else {
        sprintf(path, "rc1/ps3data/level%d/scene[%d]_pal/chunk%d.ps3", Level, g_SceneId, chunk_id);
    }

    if (GetFileSize(path) != 0) {
        if (g_NpcChunkLoadHandle != 0) {
            FUN_005040f4(g_NpcChunkLoadHandle);
        }
        g_NpcChunkLoadHandle = FUN_00503f8c(path, dest, NPC_BUFFER_SIZE);
    }
    return 1;
}

// 0x00e0230 (0x2f8 bytes)
// Takes the loaded chunk: each actor gets a moby (made on the first chunk) playing the chunk's
// sequence for it, held in an extra sequence slot of its class.
void ParseNpcChunk(void)
{
    if (g_NpcChunkLoadHandle != 0) {
        FUN_005040f4(g_NpcChunkLoadHandle);
        g_NpcChunkLoadHandle = 0;
    }

    FastMemCopy((void *)g_NpcBuffer, (void *)g_SceneLoadBuffer, NPC_BUFFER_SIZE);
    NpcChunk *chunk = (NpcChunk *)g_NpcBuffer;
    u8 *base = (u8 *)chunk;

    g_cutsceneCameraFrame = 0;
    *(short *)&g_SpaceSceneNumFrames = (short)chunk->numFrames;
    g_SpaceSceneCameraFrames = (SceneCameraFrame *)(base + chunk->cameraFrames);
    g_SceneSpeechFrame = (short)chunk->unk08;
    g_SpaceSceneMobyCnt = (short)chunk->mobyCnt;
    g_SubtitleTable = chunk->subtitles >= SUBTITLE_MIN_OFFSET ? (u32)(base + chunk->subtitles) : 0;

    for (int i = 0; i < g_SpaceSceneMobyCnt; i++) {
        NpcActor *actor = (NpcActor *)(base + chunk->actors[i]);
        int oClass = actor->oClass;

        if (g_gameMode == GAME_MODE_SPACE && i == 0 && oClass == OCLASS_NPC_SHIP) {
            oClass = OCLASSES_SPACESHIP[g_SpaceshipVariant];
        }

        if ((&MobyClassLookup)[oClass] == 0xff) {
            printf("\nnpc error: moby class %d is not on the level\n", oClass);
            continue;
        }

        MobyInstance *moby = g_SpaceSceneMobys[i];
        if (moby == NULL) {
            moby = CreateMoby(oClass);
            if (moby->pClass == NULL) {
                printf("\nnpc error: moby class %d is a null moby or a hand gadget\n", oClass);
                continue;
            }

            u8 seq = moby->pClass->seq_cnt;
            moby->pClass->seq_cnt = seq + 1;
            moby->updateId = seq;
            moby->animationId = seq;
            moby->drawDistance = 0x1ff;
            moby->unk72 = -1;
            moby->collision = NULL;
            moby->modeBits |= NO_POST_UPDATE | NO_UPDATE;
            if (g_heroMobyPtr != NULL) {
                moby->color = g_heroMobyPtr->color;
                moby->light = g_heroMobyPtr->light;
            }
            else {
                moby->color = NPC_COLOR;
                moby->light = 0;
            }
            g_SpaceSceneMobys[i] = moby;
        }

        moby->pVar = base + actor->pVar;
        moby->pClass->seqs[moby->updateId] = &actor->seq;
        for (int j = 0; j < actor->seq.frameCnt; j++) {
            actor->seq.frames[j] = (MobyFrame *)((u8 *)&actor->seq + (int)actor->seq.frames[j]);
        }
    }
}

/* A scene file: {offset, size} per chunk, until a size of 0. */
static inline void SetSceneChunks(void)
{
    int *table = (int *)g_SceneLoadBuffer;

    for (int i = 0; i < SCENE_CHUNK_MAX; i++, table += 2) {
        if (table[1] == 0) {
            return;
        }
        (&g_SceneChunkPtrs)[i] = g_SceneLoadBuffer + table[0];
    }
}

// 0x00e0528 (0x12c bytes)
void LoadWeaponCutscene(int weapon)
{
    char path[64];

    FadeToBlack(4);
    if (Cutscene == 0) {
        if (g_IsPal == 0) {
            sprintf(path, "rc1/ps3data/global/weapon%d.ps3", weapon);
        }
        else {
            sprintf(path, "rc1/ps3data/global/weapon%d_pal.ps3", weapon);
        }
        LoadAssetFromFile(path, (void *)g_SceneLoadBuffer, -1);
    }
    else {
        idol::PRINT_m_LoadGameFile(g_SceneLoadBuffer, "weapon_scenes_pal");
    }

    music_Sync(0);
    music_Sync(1);
    SetSceneChunks();
}

// 0x00e0654 (0x5c bytes)
void ParseWeaponSceneChunk(int chunk_id)
{
    g_SceneLoadBuffer = (&g_SceneChunkPtrs)[chunk_id];
    ParseNpcChunk();
    g_SceneLoadBuffer = g_NpcBuffer + NPC_BUFFER_SIZE / 2;
}

// 0x00e06b0 (0x148 bytes)
void LoadSpaceScene(int scene, int fade)
{
    char path[72];

    if (fade != 0) {
        FadeToBlack(fade);
    }

    if (Cutscene == 0) {
        if (g_IsPal == 0) {
            sprintf(path, "rc1/ps3data/global/space%d.ps3", scene);
        }
        else {
            sprintf(path, "rc1/ps3data/global/space%d_pal.ps3", scene);
        }
        LoadAssetFromFile(path, (void *)g_SceneLoadBuffer, -1);
    }
    else {
        idol::PRINT_m_LoadGameFile(g_SceneLoadBuffer, "space_scenes_pal");
    }

    if (fade != 0) {
        music_Sync(0);
    }
    music_Sync(1);
    SetSceneChunks();
}

// 0x00e07f8 (0x5c bytes)
void ParseSpaceSceneChunk(int chunk_id)
{
    g_SceneLoadBuffer = (&g_SceneChunkPtrs)[chunk_id];
    ParseNpcChunk();
    g_SceneLoadBuffer = g_NpcBuffer + NPC_BUFFER_SIZE / 2;
}

// 0x00e0854 (0x1d8 bytes)
// Copies a gadget's class into one of the two gadget class buffers (`slot` 1 / 0, -1 the one
// not used last) and gives it its sounds.
void LoadGadgetModel(int oClass, int slot)
{
    if (g_gadgetIdx >= 0 && g_GadgetOClasses[g_gadgetIdx] == oClass) {
        return;
    }

    for (g_gadgetIdx = 0; g_gadgetIdx < maximumNumWeapons; g_gadgetIdx++) {
        if (g_GadgetOClasses[g_gadgetIdx] == oClass) {
            break;
        }
    }

    if (slot == -1) {
        slot = g_GadgetBufferSlot == 0;
    }
    int buffer = slot == 0 ? 1 : 0;
    g_GadgetBufferSlot = slot == 0;

    MobyClass *pClass = (MobyClass *)(g_MobyClassBuffer + buffer * GADGET_CLASS_SIZE);
    u8 mClass = (&MobyClassLookup)[oClass];
    memcpy(pClass, (void *)g_GadgetModels[g_gadgetIdx], g_GadgetModelSizes[g_gadgetIdx]);
    MobyClasses[mClass] = pClass;
    LoadMobyModel(pClass, NULL, NULL, oClass);

    for (int i = 0; i < GADGET_SOUNDS; i++) {
        short id = g_GadgetSoundIds[g_gadgetIdx][i];

        if (id >= 0) {
            SoundDef *def = (SoundDef *)MobyClasses[mClass]->SoundDefs + i;

            def->index = id;
            def->bank_index = g_LevelSoundBank;
        }
    }
}

/* Queues a clut + texture upload and returns its TEX0 register. */
static inline u64 QueueUpload(int uLog, int vLog, void *clut, void *tex, int clutAddr, int texAddr)
{
    int tbw = uLog - 6;
    u64 tex0 = SCE_GS_SET_TEX0(texAddr >> 8, 1 << (tbw < 0 ? 0 : tbw), PIF_FMT_8, uLog, vLog, 1, 0, clutAddr >> 8,
                               PIF_FMT_32, 0, 0, 4);

    if (g_PifLoadQueueCnt < PIF_QUEUE_MAX) {
        PifLoad *load = &((PifLoad *)&g_PifLoadQueue)[g_PifLoadQueueCnt];

        g_PifLoadQueueCnt++;
        load->clut = clut;
        load->clutFormat = PIF_FMT_32;
        load->clutBlock = (short)((u32)clutAddr >> 8);
        load->tex = tex;
        load->uLog = (u8)uLog;
        load->vLog = (u8)vLog;
        load->texBlock = (short)((u32)texAddr >> 8);
    }
    return tex0;
}

// 0x00e0a2c (0x170 bytes)
// An 8-bit pif with a 32-bit clut, given GS memory from g_GsRamAlloc.
u64 QueuePifLoad(PifHeader *pPif)
{
    int uLog = FastLog2(pPif->uSize);
    int vLog = FastLog2(pPif->vSize);
    int clutAddr = g_GsRamAlloc;
    int texAddr = g_GsRamAlloc + PIF_CLUT_SIZE;

    g_GsRamAlloc = texAddr + (1 << (uLog + vLog));
    return QueueUpload(uLog, vLog, pPif + 1, (u8 *)(pPif + 1) + PIF_CLUT_SIZE, clutAddr, texAddr);
}

// 0x00e0b9c (0x148 bytes)
u64 QueuePifLoad(int log_w, int log_h, char *clut, char *tex)
{
    int clutAddr = g_GsRamAlloc;
    int texAddr = g_GsRamAlloc + PIF_CLUT_SIZE;

    g_GsRamAlloc = texAddr + (1 << (log_w + log_h));
    return QueueUpload(log_w, log_h, clut, tex, clutAddr, texAddr);
}

// 0x00e0ce4 (0x12c bytes)
u64 QueuePifLoad(int log_w, int log_h, char *clut, char *tex, int clut_addr, int tex_addr)
{
    return QueueUpload(log_w, log_h, clut, tex, clut_addr, tex_addr);
}

// 0x00e0e10 (0x4 bytes)
void STUB_000e0e10(...)
{
}
