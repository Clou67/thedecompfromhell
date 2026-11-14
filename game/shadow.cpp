#include <math.h>
#include "game/shadow.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
// game/shadow.cpp -- reconstructed from NPEA00385 EBOOT (was rUnk.cpp)
// 17 functions, 0x15251c-0x15350c: what is left of the PS2 stencil shadow volumes (DL's Shadow*
// functions). The light vectors, the stencil clear and darkening passes, and the list walk;
// the volume building and drawing are empty stubs on PS3.

/* DMA tag ids in the top nibble of a packet's first word (PS2 DMAtag CNT and REF) */
#define DMA_TAG_CNT 0x10000000

/* 1/sqrt (the binary: frsqrte and three Newton steps) */
static inline float FastRSqrtInline(float x)
{
    return 1.0f / sqrtf(x);
}

// 0x015251c (0x14 bytes)
void SECTION_HEADER_SHADOW(void)
{
    g_ShadowSectionWord = 0x10000;
}

// 0x0152540 (0x21c bytes)
// inlined: FastRSqrt @0x1525dc, FastRSqrt @0x1526f8
/* ShadowDir = dir normalized (its w kept), ShadowVec2 = that times length, ShadowVec1 = a unit
   vector across it: the cross product with dir's components reordered by size (signed) */
void ShadowSetupVectors(Vec4 dir, float length)
{
    float lengthSq = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
    float dirX = 0.0f;
    float dirY = 0.0f;
    float dirZ = 0.0f;
    int orderX = FLOAT_ORDER(dir.x);
    int orderY = FLOAT_ORDER(dir.y);
    int orderZ = FLOAT_ORDER(dir.z);

    if (sqrtf(lengthSq) != 0.0f) {
        float inv = FastRSqrtInline(lengthSq);

        dirX = dir.x * inv;
        dirY = dir.y * inv;
        dirZ = dir.z * inv;
    }

    ShadowDir.x = dirX;
    ShadowDir.y = dirY;
    ShadowDir.z = dirZ;
    ShadowDir.w = dir.w;
    ShadowVec2.x = dirX * length;
    ShadowVec2.y = dirY * length;
    ShadowVec2.z = dirZ * length;

    /* the axis to cross with */
    float axisX = dir.y;
    float axisY = dir.x;
    float axisZ = dir.z;

    if (orderX < orderY) {
        if (orderX < orderZ) {
            axisX = dir.x;
            axisY = dir.z;
            axisZ = dir.y;
        }
    }
    else if (orderY < orderZ) {
        axisX = dir.z;
        axisY = dir.y;
        axisZ = dir.x;
    }

    ShadowVec1.w = 0;

    float crossX = dirY * axisZ - dirZ * axisY;
    float crossY = dirZ * axisX - dirX * axisZ;
    float crossZ = dirX * axisY - dirY * axisX;
    float crossSq = crossZ * crossZ + crossX * crossX + crossY * crossY;

    ShadowVec1.x = 0.0f;
    ShadowVec1.y = 0.0f;
    ShadowVec1.z = 0.0f;

    if (sqrtf(crossSq) != 0.0f) {
        float inv = FastRSqrtInline(crossSq);

        ShadowVec1.x = crossX * inv;
        ShadowVec1.y = crossY * inv;
        ShadowVec1.z = crossZ * inv;
    }
}

// 0x015275c (0x64 bytes)
/* builds the volume of one shape record (both builders are stubs) and returns the next record */
short *ShadowCreateVolume(short *prim)
{
    if (prim[0] == 0) {
        STUB_001534ec(prim);
        prim += 0x10;
    }
    else if (prim[0] == 1) {
        STUB_001534f0(prim);
        prim += 0x18;
    }

    return prim;
}

// 0x01527c0 (0xc0 bytes)
/* a REF tag to blend block `block` of shadow_gs_regs, then the stubbed draw with words[word] */
void ShadowSendGsRegs(int pass, int word, int block)
{
    g_pPacket[0] = 3;
    g_pPacket[1] = (u8)(uintptr_t)&shadow_gs_regs.blends[block];
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(3, 0);
    g_pPacket += 16;
    STUB_001534e8(pass, shadow_gs_regs.words[word]);
}

/* the frame buffer covered in 32-pixel strips (GS sprites) after the packet's header */
static inline void ShadowFullScreenStrips(u8 *packet, int strips)
{
    int width = g_FrameBufWidth;
    int height = g_FrameBufHeight;
    u64 *out = (u64 *)(packet + 0x60);
    int x = 0x8000 - width * 8;

    for (int i = 0; i < strips; i++, x += 0x200) {
        out[i * 2] = SCE_GS_SET_XYZ(x, 0x8000 - height * 8, 0);
        out[i * 2 + 1] = SCE_GS_SET_XYZ(x + 0x200, height * 8 + 0x7ff0, 0);
    }
}

// 0x0152880 (0x2c4 bytes)
/* Clears the stencil: depth/alpha test that writes nothing visible (PackCmd alpha 0), then the
   screen in 32-pixel strips with a blend that only touches the stencil bits. */
void ShadowClearStencil(void)
{
    int strips = g_FrameBufWidth / 32;

    SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, 0));

    g_pPacket[0] = (u8)(strips + 5 | DMA_TAG_CNT);
    g_pPacket[1] = 0;
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(strips + 5, 0);

    u8 *packet = g_pPacket;
    u64 *words = (u64 *)packet;

    g_pPacket += 16;
    words[2] = SCE_GIF_SET_TAG(1, 0, 0, 0, 0, 1);
    words[3] = 0xe;
    words[4] = FUN_00502f98(1, 0, 0, 1, 0, 0, 1, 1);
    words[5] = 0x16;
    words[6] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 2);
    words[7] = 0x10;
    words[8] = SCE_GS_SET_PRIM(0xf, 0, 0, 0, 1, 0, 1, 0);
    words[9] = FUN_00502f74_RET_0(0x80, 0x80, 0x80, 0x7f, 0);
    words[10] = SCE_GIF_SET_TAG(strips, 1, 0, 0, 1, 2);
    words[11] = 0x44;
    ShadowFullScreenStrips(packet, strips);
    g_pPacket += (strips << 4) + 0x50;
}

// 0x0152b44 (0x2b0 bytes)
/* Darkens the screen where the stencil marks shadow: the screen in strips drawn in rgba with a
   stencil-tested blend; ends with an empty tag. */
void ShadowDrawStencil(u64 rgba)
{
    int strips = g_FrameBufWidth / 32;

    g_pPacket[0] = (u8)(strips + 5 | DMA_TAG_CNT);
    g_pPacket[1] = 0;
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(strips + 5, 0);

    u8 *packet = g_pPacket;
    u64 *words = (u64 *)packet;

    g_pPacket += 16;
    words[2] = SCE_GIF_SET_TAG(1, 0, 0, 0, 0, 1);
    words[3] = 0xe;
    words[4] = idol_draw::Blend(1, 0, 0x80, 1, 1, 1, 1, 1);
    words[5] = 0x16;
    words[6] = SCE_GIF_SET_TAG(1, 0, 0, 0, 1, 2);
    words[7] = 0x10;
    words[8] = SCE_GS_SET_PRIM(0xf, 0, 0, 0, 1, 0, 1, 0);
    words[9] = rgba;
    words[10] = SCE_GIF_SET_TAG(strips, 1, 0, 0, 1, 2);
    words[11] = 0x44;
    ShadowFullScreenStrips(packet, strips);
    g_pPacket += (strips << 4) + 0x50;

    g_pPacket[0] = 0;
    g_pPacket[1] = 0;
    g_pPacket[2] = 0;
    g_pPacket[3] = 0;
    g_pPacket += 16;
}

// 0x0152df8 (0x39c bytes)
/* The mobies' shadows: the stencil cleared, the stencil register block sent (texture 0xe00, or
   0x1000 in cutscenes), then for every moby in the list its light vectors (extruded 1000) and,
   per shape, the (stubbed) volume and blend block 2 sent twice around the two stubbed draws; then the darkening pass
   at alpha 0x20 and the blend and test put back. Was DrawScreenEffect_152df8. */
void DrawMobyShadows(ShadowMoby *list)
{
    ShadowClearStencil();

    g_pPacket[0] = 7;
    g_pPacket[1] = (u8)(uintptr_t)(Cutscene == 0 ? shadow_gs_regs.stencils[0] : shadow_gs_regs.stencils[1]);
    g_pPacket[2] = 0;
    g_pPacket[3] = Gs_DmaTagByte(7, 0);
    g_pPacket += 16;

    float far[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
    float near[4] = { 0.0f, 0.0f, 0.0f, 0.0f };

    while (list->primCnt != 0) {
        short *prim = (short *)(list + 1);

        ShadowSetupVectors(list->dir, 1000.0f);
        far[2] = list->unk0c;
        near[2] = list->unk08;

        for (int i = 0; i < list->primCnt; i++) {
            prim = ShadowCreateVolume(prim);
            STUB_001534f4(near, far);
            STUB_001534f8(0x70000000, g_ShadowUnkA54f00, list->value);

            g_pPacket[0] = 3;
            g_pPacket[1] = (u8)(uintptr_t)&shadow_gs_regs.blends[2];
            g_pPacket[2] = 0;
            g_pPacket[3] = Gs_DmaTagByte(3, 0);
            g_pPacket += 16;
            STUB_001534e8(2, shadow_gs_regs.words[1]);

            g_pPacket[0] = 3;
            g_pPacket[1] = (u8)(uintptr_t)&shadow_gs_regs.blends[2];
            g_pPacket[2] = 0;
            g_pPacket[3] = Gs_DmaTagByte(3, 0);
            g_pPacket += 16;
            STUB_001534e8(1, shadow_gs_regs.words[0]);
        }

        list = (ShadowMoby *)prim;
    }

    SetGSReg(0x28, Cutscene == 0 ? 0x80070 : 0x80080);
    SetGSReg(3, idol_draw::PackCmd(0, 1, 2, 1, 0x20));
    ShadowDrawStencil(0);
    SetGSReg(0x16, idol_draw::Blend(1, 5, 0x60, 3, 0, 0, 1, 2));
    SetGSReg(3, idol_draw::PackCmd(0, 1, 0, 1, 0x80));
}

// 0x0153194 (0x350 bytes)
/* fills shadow_gs_regs: four blend blocks (blend modes 0-3) and the two stencil blocks */
void shadow_init_gs_regs(void)
{
    DAT_007319fc = 0x10000;

    for (int i = 0; i < 4; i++) {
        shadow_gs_regs.blends[i][0] = SCE_GIF_SET_TAG(2, 1, 0, 0, 0, 1);
        shadow_gs_regs.blends[i][2] = FUN_00502f98(1, 0, 0, 1, 0, 0, 1, i);
    }

    shadow_gs_regs.stencils[0][0] = SCE_GIF_SET_TAG(6, 1, 0, 0, 0, 1);
    shadow_gs_regs.stencils[0][4] = FUN_00502e50();
    shadow_gs_regs.stencils[0][6] = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    shadow_gs_regs.stencils[0][8] = SCE_GS_SET_TEX1(1, 0, 0, 0, 0, 0, 0);
    shadow_gs_regs.stencils[0][10] = SCE_GS_SET_TEX0(0xe00, 8, 0x12, 9, 9, 1, 0, 0, 0, 0, 0, 0);
    shadow_gs_regs.stencils[0][12] = idol_draw::PackCmd(0, 1, 0, 1, 0x80);

    shadow_gs_regs.stencils[1][0] = SCE_GIF_SET_TAG(6, 1, 0, 0, 0, 1);
    shadow_gs_regs.stencils[1][4] = FUN_00502e50();
    shadow_gs_regs.stencils[1][6] = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    shadow_gs_regs.stencils[1][8] = SCE_GS_SET_TEX1(1, 0, 0, 0, 0, 0, 0);
    shadow_gs_regs.stencils[1][10] = SCE_GS_SET_TEX0(0x1000, 8, 0x12, 9, 9, 1, 0, 0, 0, 0, 0, 0);
    shadow_gs_regs.stencils[1][12] = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
}

// 0x01534e8 (0x4 bytes)
void STUB_001534e8(...)
{
}

// 0x01534ec (0x4 bytes)
void STUB_001534ec(...)
{
}

// 0x01534f0 (0x4 bytes)
void STUB_001534f0(...)
{
}

// 0x01534f4 (0x4 bytes)
void STUB_001534f4(...)
{
}

// 0x01534f8 (0x4 bytes)
void STUB_001534f8(...)
{
}

// 0x01534fc (0x4 bytes)
void STUB_001534fc(...)
{
}

// 0x0153500 (0x4 bytes)
void STUB_00153500(...)
{
}

// 0x0153504 (0x4 bytes)
void STUB_00153504(...)
{
}

// 0x0153508 (0x4 bytes)
void STUB_00153508(...)
{
}
