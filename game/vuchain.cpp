#include <stdio.h>
#include <stdlib.h>
#include "game/vuchain.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/pause.h"
#include "game/shadow.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/fastinline.h"
#include <cell/gcm/gcm_macros.h>
#include <cell/gcm/gcm_enum.h>
// game/vuchain.cpp -- reconstructed from NPEA00385 EBOOT
// 29 functions, 0x174b0c-0x175558: what is left of the PS2 VU1 chain (DL's vuchain.cpp). The
// chain buffers and their swap, the VIF packet writers (which on PS3 write single bytes), the
// GS register state the draw code keeps in place of the GS, and the scissor/viewport.

/* DMA tag ids in the top nibble of a packet's first word (PS2 DMAtag REF and CNT) */
/* one word into the pass's command buffer */
static inline void Emit(RenderingStep *pass, u32 word)
{
    *pass->command++ = (RsxCmd)word;
}

#define DMA_TAG_CNT 0x10000000
#define DMA_TAG_REF 0x30000000

// 0x0174b0c (0x14 bytes)
/* Was ____Unused_VuChain_SetBufSize_10000; like the other files' section headers */
void SECTION_HEADER_VUCHAIN(void)
{
    DAT_0073a768 = 0x10000;
}

// 0x0174b20 (0xb8 bytes)
/* Copies a VU0 micro program: blocks of 64-bit instructions, each led by an MPG VIF code (its
   top byte 'J', its count in byte 6, 0 meaning 256), until a block that isn't followed by
   another. Instruction word 0x8000033c is patched to 0x80000030 on the way. Returns how many
   instructions were copied. */
int VU0_loadMicroProgram(u64 *program, u64 *dest)
{
    int copied = 0;

    while (((u8 *)program)[7] == 'J') {
        int count = ((u8 *)program)[6];

        count = count == 0 ? 0x100 : count;
        program++;

        for (int i = 0; i < count; i++) {
            if (*(u32 *)program == 0x8000033c) {
                *(u32 *)program = 0x80000030;
            }

            *dest++ = *program;
            copied++;
            program++;
        }

        if (count != 0x100) {
            break;
        }
    }

    return copied;
}

// 0x0174bd8 (0x4 bytes)
void STUB_00174bd8(...)
{
}

// 0x0174bdc (0x48 bytes)
/* the chain buffer size for this level (levels past 18 use level 0's) */
void VU1_setBufSizeByLevel(void)
{
    vu1_bufSize = vu1_buf_table[(int)Level > 18 ? 0 : (int)Level];
}

// 0x0174c24 (0x64 bytes)
/* starts building into the first chain buffer */
void VU1_initChain(void)
{
    vu1_DmaBuffers[0] = g_VifBuffers[0];
    vu1_DmaBuffers[1] = g_VifBuffers[1];
    vu1_bufLimit = g_VifBuffers[0] + vu1_bufSize - g_Vu1Reserve;
    vu1_bufId = 0;
    g_pPacket = g_VifBuffers[0];
    vu1_bufLimitSafe = vu1_bufLimit - 0x2000;
}

// 0x0174c88 (0x68 bytes)
/* the chain built so far ends at vu1_chainEnd; building goes on in the other buffer */
void VU1_swapChain(void)
{
    vu1_bufId = 1 - vu1_bufId;

    u8 *buffer = vu1_DmaBuffers[vu1_bufId];

    vu1_chainEnd = g_pPacket;
    g_pPacket = buffer;
    vu1_bufLimit = buffer + vu1_bufSize - g_Vu1Reserve;
    vu1_bufLimitSafe = vu1_bufLimit - 0x2000;
}

// 0x0174cf0 (0x4 bytes)
void STUB_00174cf0(...)
{
}

// 0x0174cf4 (0x4 bytes)
void STUB_00174cf4(...)
{
}

/* The packet writers keep the PS2 layout (a qword per DMA tag) but store only the low byte of
   each word, as the port's code does. */

// 0x0174cf8 (0x3c bytes)
/* a DMA REF tag for qwc qwords at data */
void VU1_addDataRef(void *data, int qwc)
{
    g_pPacket[0] = (u8)(qwc | DMA_TAG_REF);
    g_pPacket[1] = (u8)(uintptr_t)data;
    g_pPacket[2] = 0;
    g_pPacket[3] = 0;
    g_pPacket += 16;
}

// 0x0174d34 (0x9c bytes)
/* a DMA REF tag for qwc qwords at data, unpacked (V4-32) to VU memory vuAddr */
void VU1_addDataRefToLoc(int vuAddr, void *data, int qwc)
{
    g_pPacket[0] = (u8)(qwc | DMA_TAG_REF);
    g_pPacket[1] = (u8)(uintptr_t)data;
    g_pPacket[2] = (u8)SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_pPacket[3] = (u8)SCE_VIF1_SET_UNPACK(vuAddr, qwc, 0xc, 0);
    g_pPacket += 16;
}

// 0x0174dd0 (0xd0 bytes)
/* qwc qwords from data copied into the packet behind a CNT tag, unpacked to vuAddr */
void VU1_addDataDirect(int vuAddr, void *data, int qwc)
{
    g_pPacket[0] = (u8)(qwc | DMA_TAG_CNT);
    g_pPacket[1] = 0;
    g_pPacket[2] = (u8)SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_pPacket[3] = (u8)SCE_VIF1_SET_UNPACK(vuAddr, qwc, 0xc, 0);
    g_pPacket += 16;

    FastMemCopy(g_pPacket, data, qwc << 4);
    g_pPacket += qwc << 4;
}

// 0x0174ea0 (0xa8 bytes)
/* room for qwc qwords unpacked to vuAddr, left for the caller to fill */
void VU1_skipData(int vuAddr, int qwc)
{
    g_pPacket[0] = (u8)(qwc | DMA_TAG_CNT);
    g_pPacket[1] = 0;
    g_pPacket[2] = (u8)SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_pPacket[3] = (u8)SCE_VIF1_SET_UNPACK(vuAddr, qwc, 0xc, 0);
    g_pPacket += (qwc << 4) + 16;
}

// 0x0174f48 (0x38 bytes)
/* one VIF code */
void VU1_addVIFcode(u32 code)
{
    g_pPacket[0] = 0;
    g_pPacket[1] = 0;
    g_pPacket[2] = 0;
    g_pPacket[3] = (u8)code;
    g_pPacket += 16;
}

// 0x0174f80 (0xec bytes)
/* Keeps value as the draw state for one of the port's GS register ids: 3 the alpha/depth test,
   6 the clamp (TexSamplerFlags), 7, 8, 0x16 the blend, 0x18/0x19 the effect texture header of
   texture unit 0/1 (value is the effect texture), 0x1a TEX1, 0x21 the z buffer. Other ids are
   ignored. */
void SetGSReg(int id, u64 value)
{
    switch (id) {
    case 3:
        g_GsRegTest = value;
        break;
    case 6:
        TexSamplerFlags = value;
        break;
    case 7:
        g_GsReg7 = value;
        break;
    case 8:
        g_GsReg8 = value;
        break;
    case 0x16:
        g_GsRegBlend = value;
        break;
    case 0x18:
        g_GsRegTexHeader0 = EffectTexHeaders + (int)value * 0x24;
        break;
    case 0x19:
        g_GsRegTexHeader1 = EffectTexHeaders + (int)value * 0x24;
        break;
    case 0x1a:
        g_GsRegTex1 = value;
        break;
    case 0x21:
        g_GsRegZbuf = value;
        break;
    }
}

// 0x017506c (0x4c bytes)
/* a DMA tag whose address is the end of the qwc qwords that follow it inline */
void VU1_addDataInLine(int qwc)
{
    g_pPacket[0] = 0;
    g_pPacket[1] = (u8)(((uintptr_t)g_pPacket + (qwc << 4) + 16) & 0x0fffffff);
    g_pPacket[2] = 0;
    g_pPacket[3] = 0;
    g_pPacket += (qwc << 4) + 16;
}

// 0x01750c8 (0x328 bytes)
/* Sets the HUD pass's viewport and scissor to the rectangle left..right, top..bot (inclusive):
   the viewport scale and offset (each written twice, as BeginAuxDrawMode does), the depth range
   0..1, and the same scale into vertex constant c[18]. Sizes and centers are worked out four at
   a time in vector registers. */
void VU1_setScissor(int left, int right, int top, int bot)
{
    const u32 mask = 0xffff;
    const float half = 0.5f;
    const float negHalf = -0.5f;

    VecU vBot = VecSplatU(bot);
    VecU vTop = VecSplatU(top);
    VecU vRight = VecSplatU(right);
    VecU vLeft = VecSplatU(left);
    VecU one = vec_splat_u32(1);
    VecU height = vec_add(vec_sub(vBot, vTop), one);
    VecU width = vec_add(vec_sub(vRight, vLeft), one);
    u32 horizontal = (left & 0xffff) | (right - left + 1) << 16;
    u32 vertical = (top & 0xffff) | (bot - top + 1) << 16;
    VecU vMask = VecSplatU(mask);
    VecF vHalf = VecSplatF(half);
    VecF vNegHalf = VecSplatF(negHalf);
    VecF heightF = vec_ctf(vec_and(height, vMask), 0);
    VecF topF = vec_ctf(vec_and(vTop, vMask), 0);
    VecF leftF = vec_ctf(vec_and(vLeft, vMask), 0);
    VecF widthF = vec_ctf(vec_and(width, vMask), 0);
    VecF halfWidth = vec_madd(widthF, vHalf, VecNegZero());
    VecF halfHeight = vec_madd(heightF, vHalf, VecNegZero());
    VecF centerX = vec_add(leftF, halfWidth);
    VecF centerY = vec_add(topF, halfHeight);
    VecF scaleY = vec_madd(heightF, vNegHalf, VecNegZero());
    RenderingStep *pass = HUD_Pass;

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VIEWPORT_HORIZONTAL, 2));
    Emit(pass, horizontal);
    Emit(pass, vertical);
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_CLIP_MIN, 2));
    Emit(pass, 0);
    Emit(pass, 0x3f800000);

    for (int i = 0; i < 2; i++) {
        RsxCmd *cmd = pass->command;

        cmd[0] = (RsxCmd)(CELL_GCM_METHOD(CELL_GCM_NV4097_SET_VIEWPORT_OFFSET, 8));
        vec_ste((VecU)centerX, 4, (u32 *)cmd);
        vec_ste((VecU)centerY, 8, (u32 *)cmd);
        cmd[3] = (RsxCmd)(0x3f000000);
        cmd[4] = (RsxCmd)(0);
        vec_ste((VecU)halfWidth, 20, (u32 *)cmd);
        vec_ste((VecU)scaleY, 24, (u32 *)cmd);
        cmd[7] = (RsxCmd)(0x3f000000);
        cmd[8] = (RsxCmd)(0);
        pass->command = cmd + 9;
    }

    /* c[18] = (width/2, height/2, width/2, -height/2) */
    u32 screen[4];

    vec_ste((VecU)halfWidth, 0, screen);
    vec_ste((VecU)halfHeight, 4, screen);
    vec_ste((VecU)halfWidth, 8, screen);
    vec_ste((VecU)scaleY, 12, screen);

    pass = HUD_Pass;
    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_TRANSFORM_CONSTANT_LOAD, 5));
    Emit(pass, 18);

    for (int i = 0; i < 4; i++) {
        Emit(pass, screen[i]);
    }

    Emit(pass, CELL_GCM_METHOD(CELL_GCM_NV4097_SET_SCISSOR_HORIZONTAL, 2));
    Emit(pass, horizontal);
    Emit(pass, vertical);
}

// 0x01753f0 (0xd0 bytes)
// strings: 00653ffc: '%x %x %x %x\n'
/* prints the first four bytes of every qword of the chain being built */
void VU1_dumpChain(void)
{
    for (u8 *packet = vu1_DmaBuffers[vu1_bufId]; packet != g_pPacket; packet += 16) {
        vector unsigned char qword = *(vector unsigned char *)packet;

        printf("%x %x %x %x\n", VecByte(qword, 0), VecByte(qword, 1), VecByte(qword, 2), VecByte(qword, 3));
    }
}

// 0x01754c0 (0x4 bytes)
void STUB_001754c0(...)
{
}

// 0x01754c4 (0x4 bytes)
void STUB_001754c4(...)
{
}

// 0x01754c8 (0x4 bytes)
void STUB_001754c8(...)
{
}

// 0x01754cc (0x4 bytes)
void STUB_001754cc(...)
{
}

// 0x01754d0 (0x4 bytes)
void STUB_001754d0(...)
{
}

// 0x01754d4 (0x4 bytes)
void STUB_001754d4(...)
{
}

// 0x01754d8 (0x4 bytes)
void STUB_001754d8(...)
{
}

// 0x01754dc (0x4 bytes)
void STUB_001754dc(...)
{
}

// 0x01754e0 (0x4 bytes)
void STUB_001754e0(...)
{
}

// 0x01754e4 (0x8 bytes)
u64 STUB_001754e4_RET_0(...)
{
    return 0;
}

// 0x01754ec (0x68 bytes)
// strings: 0065400c: 'DMAC(15) - Bus Error\n' | 00654024: 'D1_CHCR=%X\nD1_TADR=%X' | 0065403c: "Why doesn't this work?"
/* the PS2 DMA bus error handler: prints channel 1's registers and hangs */
void DMAC_BEIS_Handler(void)
{
    u32 chcr = *g_D1Chcr;
    u32 tadr = *g_D1Tadr;

    printf("DMAC(15) - Bus Error\n");
    printf("D1_CHCR=%X\nD1_TADR=%X", chcr, tadr);
    printf("Why doesn't this work?");

    for (;;) {
    }
}

// 0x0175554 (0x4 bytes)
void STUB_00175554(...)
{
}
