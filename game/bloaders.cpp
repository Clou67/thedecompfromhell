// game/bloaders.cpp -- textures from .pif files: registering them and uploading to GS memory
// STATUS: CLEAN (checked against the asm; local names are mine)
// 13 functions, 0x4efe4-0x4fee8
//
// The PS2 path: GsTex_Upload builds GIF packets (at g_pPacket) that copy the clut and the mips
// into GS memory allocated from g_GsRamAlloc. On PS3 the SCE_GS_SET_* packers are stubs that
// return 0, so the packets are built but carry no real register values.
#include <stdio.h>
#include <string.h>
#include "game/bloaders.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/loaders.h"
#include "game/music.h"
#include "game/shadow.h"
#include "game/sound.h"
#include "game/vuchain.h"
#include "idol/audio.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/ps2shim.h"
#include "idol/sound.h"
#include "sdk/libscream/common/api.h"

enum {                      /* PifHeader.texFormat / clutFormat */
    PIF_FMT_32 = 0x12,      /* 32 bits per pixel (clut entries: 32-bit) */
    PIF_FMT_8 = 0x13,       /* 8-bit indexed */
    PIF_FMT_16 = 0x26,
    PIF_FMT_4 = 0x27,       /* 4-bit indexed */
};
#define GS_PSMT4      20      /* GS pixel format the debug font is loaded as */
#define GS_BLOCK      256     /* GS memory is allocated in blocks of 256 bytes */
#define GS_PAGE_ALIGN 0x800

/* the qword header in front of each packet part: count, kind, 0, check byte */
static inline void PacketHeader(int qwc, u8 kind)
{
    g_pPacket[0] = (u8)qwc;
    g_pPacket[1] = kind;
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(qwc, 0);
}

static inline u64 *PacketWords(void)
{
    return (u64 *)g_pPacket;
}

// 0x004efe4 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)
{
    DAT_0071e938 = 0x10000;
}

// 0x004eff8 (0x24 bytes)
void GsTex_Init(void)
{
    g_GsTexCount = 0;
    g_GsRamAlloc = GSmem.base;
}

// 0x004f01c (0x48 bytes)
/* free GS memory: every texture uploads again when next used */
void GsTex_ResetAll(void)
{
    g_GsRamAlloc = GSmem.base;

    for (int i = 0; i < g_GsTexCount; i++)
        g_GsTex[i].tex0 = 0;
}

// 0x004f064 (0x290 bytes)
/* add a pif to g_GsTex: where its clut and mips are and how big they are; returns its id */
int GsTex_Register(PifHeader *pif)
{
    FastMemSet(&g_GsTex[g_GsTexCount], 0, sizeof(GsTex));

    GsTex *tex = &g_GsTex[g_GsTexCount];
    tex->texFormat = pif->texFormat;
    tex->clutFormat = pif->clutFormat;
    tex->mipLevels = pif->mipLevels;

    switch (pif->texFormat) {
    case PIF_FMT_4:
    case PIF_FMT_8: {
        bool clut32 = pif->clutFormat == PIF_FMT_32;

        tex->pp.pClut = pif + 1;
        if (pif->texFormat == PIF_FMT_4)
            tex->pp.cSize = clut32 ? 16 * 4 : 16 * 2;
        else
            tex->pp.cSize = clut32 ? 256 * 4 : 256 * 2;
        break;
    }
    case PIF_FMT_16:
    case PIF_FMT_32:
        tex->pp.pClut = 0;
        tex->pp.cSize = 0;
        break;
    }

    tex->pp.uLog = FastLog2(pif->uSize);
    tex->pp.vLog = FastLog2(pif->vSize);
    tex->pp.pTex[0] = (u8 *)(pif + 1) + tex->pp.cSize;

    int width = pif->uSize;
    int height = pif->vSize;
    switch (pif->texFormat) {
    case PIF_FMT_4:
        tex->pp.tSize[0] = width * height >> 1;
        break;
    case PIF_FMT_16:
        tex->pp.tSize[0] = width * height * 2;
        break;
    case PIF_FMT_8:
        tex->pp.tSize[0] = width * height;
        break;
    case PIF_FMT_32:
        tex->pp.tSize[0] = width * height * 4;
        break;
    }
    tex->uSize = width;
    tex->vSize = height;

    /* each mip is a quarter of the one before and follows it */
    for (int i = 1; i < tex->mipLevels; i++) {
        tex->pp.tSize[i] = tex->pp.tSize[i - 1] >> 2;
        tex->pp.pTex[i] = (u8 *)tex->pp.pTex[i - 1] + tex->pp.tSize[i - 1];
    }

    return g_GsTexCount++;
}

// 0x004f2f4 (0x250 bytes)
/* append a packet that copies size bytes at data to GS block dbp */
void GsTex_BuildUploadPacket(void *data, int dbp, int dbw, int dpsm, int width, int height, int size)
{
    int qwc = size / 16;

    PacketHeader(6, 0);
    g_pPacket += 16;

    u64 *regs = PacketWords();
    regs[2] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 4);
    regs[3] = 0xeeeeeee;
    regs[4] = SCE_GS_SET_BITBLTBUF(0, 0, 0, dbp, dbw, dpsm);
    regs[5] = 5;
    regs[6] = 0;
    regs[7] = 31;
    regs[8] = (u64)height << 32 | (u32)width;
    regs[9] = 32;
    regs[10] = 0;
    regs[11] = 30;
    regs[12] = SCE_GIF_SET_TAG(qwc, 0, 0, 0, 2, 0);
    regs[13] = 0;
    g_pPacket += 112;

    /* the image data itself (by reference) */
    PacketHeader(qwc, (u8)(uintptr_t)data);
    g_pPacket += 16;

    PacketHeader(2, 0);
    regs = PacketWords();
    g_pPacket += 16;
    regs[2] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 1);
    regs[4] = 0;
    regs[3] = 14;
    regs[5] = 29;
    g_pPacket = (u8 *)regs + 48;
}

// 0x004f544 (0x2fc bytes)
/* copy a texture into GS memory and build its TEX0/TEX1/MIPTBP1, unless that is done already */
void GsTex_Upload(int id)
{
    GsTex *tex = &g_GsTex[id];

    if (tex->tex0 != 0)
        return;

    if (tex->texFormat == PIF_FMT_4 || tex->texFormat == PIF_FMT_8) {
        int clutBlock = g_GsRamAlloc >> 8;

        tex->pp.cPos = clutBlock;
        if (tex->texFormat == PIF_FMT_4) {
            g_GsRamAlloc += GS_BLOCK;
            GsTex_BuildUploadPacket(tex->pp.pClut, clutBlock, 1, tex->clutFormat, 8, 2, tex->pp.cSize);
        } else {
            g_GsRamAlloc += tex->pp.cSize;
            GsTex_BuildUploadPacket(tex->pp.pClut, clutBlock, 1, tex->clutFormat, 16, 16, tex->pp.cSize);
        }
    }

    for (int i = 0; i < tex->mipLevels; i++) {
        int tbw = tex->uSize >> (i + 6);
        if (tbw < 1)
            tbw = 1;
        tex->pp.tbw[i] = tbw;
        tex->pp.tPos[i] = g_GsRamAlloc >> 8;

        GsTex_BuildUploadPacket(tex->pp.pTex[i], tex->pp.tPos[i], tex->pp.tbw[i], tex->texFormat,
                                tex->uSize >> i, tex->vSize >> i, tex->pp.tSize[i]);

        int used = tex->pp.tSize[0] >> (2 * i);
        if (used < GS_BLOCK)
            used = GS_BLOCK;
        g_GsRamAlloc += used;
    }
    g_GsRamAlloc += GS_PAGE_ALIGN;

    tex->tex0 = SCE_GS_SET_TEX0(tex->pp.tPos[0], tex->pp.tbw[0], tex->texFormat, tex->pp.uLog, tex->pp.vLog,
                                1, 0, tex->pp.cPos, tex->clutFormat, 0, 0, 4);
    tex->tex1 = SCE_GS_SET_TEX1(0, tex->mipLevels - 1, 1, 3, 0, 0, 0xffa0);
    tex->miptbp1 = SCE_GS_SET_MIPTBP1(tex->pp.tPos[1], tex->pp.tbw[1], tex->pp.tPos[2], tex->pp.tbw[2],
                                      tex->pp.tPos[3], tex->pp.tbw[3]);
}

// 0x004f840 (0x268 bytes)
/* draw a texture as a screen sprite covering cells (x, y) to (x + w, y + h), 16 pixels each */
void GsTex_Bind(int id, int x, int y, int w, int h, u64 regs)
{
    GsTex *tex = &g_GsTex[id];
    int left = x * 16 + SCREEN_PROJECTION_MAP_X - 8;
    int right = (x + w) * 16 + SCREEN_PROJECTION_MAP_X - 8;
    int top = y * 16 + SCREEN_PROJECTION_MAP_Y - 8;
    int bottom = (y + h) * 16 + SCREEN_PROJECTION_MAP_Y - 8;
    int texU = tex->uSize * 16;
    int texV = tex->vSize << 20;

    GsTex_Upload(id);

    PacketHeader(7, 0);
    g_pPacket += 16;
    ((u64 *)g_pPacket)[0] = g_SpriteGifTag[0];
    ((u64 *)g_pPacket)[1] = g_SpriteGifTag[1];

    u64 *words = PacketWords();
    g_pPacket += 16;
    words[2] = tex->tex0;
    words[3] = SCE_GS_SET_PRIM(17, 0, 1, 0, 1, 0, 1, 0);
    words[4] = regs;
    words[5] = 0;
    words[6] = SCE_GS_SET_XYZ(left, top, 0xfffff0);
    words[7] = texU;
    words[8] = SCE_GS_SET_XYZ(right, top, 0xfffff0);
    words[9] = texV;
    words[10] = SCE_GS_SET_XYZ(left, bottom, 0xfffff0);
    words[11] = texV + texU;
    words[12] = SCE_GS_SET_XYZ(right, bottom, 0xfffff0);
    words[13] = 0;
    g_pPacket += 96;

    g_pPacket[0] = 0;
    g_pPacket[1] = 0;
    g_pPacket[2] = 0;
    g_pPacket[3] = 0;
    g_pPacket += 16;
}

// 0x004faa8 (0x4c bytes)
/* GsTex_Bind at the texture's own size */
void GsTex_BindWrapper(int id, int x, int y, u64 regs)
{
    GsTex_Bind(id, x, y, g_GsTex[id].uSize, g_GsTex[id].vSize, regs);
}

// 0x004faf4 (0x54 bytes)
void GsTex_StaticInit(void)
{
    DAT_0071e9bc = 0x10000;
    g_SpriteGifTag[0] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 11);
}

// 0x004fb48 (0x8 bytes)
int ReturnTrue_GameStart(void)
{
    return 1;
}

// 0x004fb50 (0x270 bytes)
/* load a pif straight into GS memory (clut at pal_loc, the 8-bit image as 4-bit pairs at tex_loc)
   and return its TEX0/TEX1/MIPTBP1 in gsRegs */
void LoadPifAsPSMT8H(PifHeader *pPif, u64 *gsRegs, int tex_loc, int pal_loc)
{
    PifParser parser;
    u32 image;

    FastMemSet(&parser, 0, sizeof(parser));
    parser.pClut = pPif + 1;
    parser.cSize = pPif->clutFormat == PIF_FMT_32 ? 1024 : 512;
    parser.uLog = FastLog2(pPif->uSize);
    parser.vLog = FastLog2(pPif->vSize);
    parser.tSize[0] = pPif->uSize * pPif->vSize;
    parser.pTex[0] = (u8 *)(pPif + 1) + parser.cSize;

    sceGsSetDefLoadImage(&image, pal_loc >> 8, 1, pPif->clutFormat, 0, 0, 16, 16);
    FlushCache(0);
    sceGsExecLoadImage(&image, parser.pClut);
    sceGsSyncPath(0, 0);

    int tbw = pPif->uSize >> 6;
    if (tbw < 1)
        tbw = 1;
    parser.tbw[0] = tbw;
    parser.tPos[0] = tex_loc >> 8;

    sceGsSetDefLoadImage(&image, tex_loc >> 8, tbw, GS_PSMT4, 0, 0, pPif->uSize, pPif->vSize);
    FlushCache(0);
    sceGsExecLoadImage(&image, parser.pTex[0]);
    sceGsSyncPath(0, 0);

    gsRegs[0] = SCE_GS_SET_TEX0(parser.tPos[0], parser.tbw[0], GS_PSMT4, parser.uLog, parser.vLog, 1, 0,
                                pal_loc >> 8, pPif->clutFormat, 0, 0, 4);
    gsRegs[1] = SCE_GS_SET_TEX1(1, 0, 0, 0, 0, 0, 0);
    gsRegs[2] = SCE_GS_SET_MIPTBP1(0, 0, 0, 0, 0, 0);
}

// 0x004fdc0 (0x78 bytes)
void LoadDebugFont(void)
{
    u64 regs[3];

    idol::m_LoadGameFileB(&DAT_00a2c5c0, "debugfont");
    LoadPifAsPSMT8H((PifHeader *)&DAT_00a2c5c0, regs, GSmem.zbuf + 0xc0000, 0x3ffc00);

    DebugFontTex0 = regs[0];
}

// 0x004fe38 (0xb0 bytes)
void UnloadSoundBanks(void)
{
    FlushCache(0);
    STUB_00505f4c();
    STUB_00505d20();
    sound_StopAllSounds();
    music_Stop();
    snd_StreamSafeCdCallback(NULL);
    STUB_001754e0();

    if (g_pSoundDefs != 0) {
        snd_UnloadBank(*(int **)(g_pSoundDefs + 0x1c), 1);
        STUB_00505f48();
        printf("unloaded sound bank %#010x\n", *(u32 *)(g_pSoundDefs + 0x1c));
    }

    STUB_00503078(0);
}
