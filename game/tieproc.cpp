#include <stdio.h>
#include "game/tieproc.h"
#include "game/boot.h"
#include "game/debug.h"
#include "game/loaders.h"
#include "game/pause.h"
#include "game/shadow.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

/* The PS2 packet templates the tie renderer patches each frame. The GS / GIF / VIF code
   builders are stubs that return 0 in this port, so this only clears the templates. */

#define TIE_CLASS_DRAWN 0x08          /* TieClasses[i] + 0x2a */

/* one group of g_TieGsRegs: two sprites' worth of registers */
static inline void TieInitGsRegGroup(u64 *regs)
{
    regs[0] = SCE_GS_SET_PRIM(0x29, 0, 0, 0, 0, 0, 1, 0);
    regs[1] = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    regs[2] = STUB_00502f74_RET_0(0x80, 0x80, 0x80, 0x80, 0);
    regs[3] = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    regs[4] = STUB_00502e48_RET_0(0);
    regs[5] = SCE_GS_SET_XYZ(0, 0, 0);
    regs[6] = STUB_00502f74_RET_0(0x80, 0x80, 0x80, 0x80, 0);
    regs[7] = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
    regs[8] = STUB_00502e48_RET_0(1);
    regs[9] = SCE_GS_SET_XYZ(0, 0, 0);
}

/* one 0x90-byte shell template of g_TieShellVif */
static inline void TieInitShellVif(u32 *vif, int unpackNum)
{
    vif[0x00] = STUB_005030f4_RET_0(0, 0);
    vif[0x01] = SCE_VIF1_SET_UNPACK(0x3c6, unpackNum, 0xc, 0);
    vif[0x04] = STUB_005030cc_RET_0(8, 0);
    vif[0x09] = STUB_005030fc_RET_0(0);
    vif[0x0e] = STUB_005030ac_RET_0(0, 0);
    vif[0x0f] = STUB_005030d4_RET_0(0x2c, 0);
    vif[0x10] = STUB_005030f4_RET_0(0, 0);
    vif[0x11] = SCE_VIF1_SET_STCYCL(4, 4, 0);
    vif[0x14] = STUB_005030b4_RET_0(0);
}

void TieInitPackets(void)
{
    g_TiePacketScale = 0x10000;

    g_TieGsRegs[0] = SCE_GIF_SET_TAG(6, 1, 0, 0, 1, 10);
    for (int i = 0; i < 6; i++) {
        TieInitGsRegGroup(&g_TieGsRegs[2 + i * 10]);
    }

    /* the shells, 0x735ec8 */
    TieInitShellVif(&g_TieShellVif[0], 9);
    g_TieShellVif[0x19] = Gs_DmaTagByte(2, 0);
    TieInitShellVif(&g_TieShellVif[0x24], 10);
    g_TieShellVif[0x71] = Gs_DmaTagByte(2, 0);
    g_TieShellVif[0x7d] = Gs_DmaTagByte(2, 0);
    g_TieShellVif[0x89] = Gs_DmaTagByte(2, 0);
    g_TieShellVif[0x95] = Gs_DmaTagByte(3, 0);

    /* 0x736198 */
    g_TieUnpackVif[0x00] = SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_TieUnpackVif[0x01] = SCE_VIF1_SET_UNPACK(0x123, 6, 0xc, 0);
    g_TieUnpackVif[0x04] = SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_TieUnpackVif[0x05] = SCE_VIF1_SET_UNPACK(0x287, 6, 0xc, 0);
    g_TieUnpackVif[0x60] = SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_TieUnpackVif[0x64] = SCE_VIF1_SET_STCYCL(4, 4, 0);

    /* 0x736510: GIF tags */
    g_TieGifTags[0x00] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 2);
    g_TieGifTags[0x02] = SCE_GIF_SET_TAG(2, 1, 0, 0, 1, 1);
    g_TieGifTags[0x04] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 0xb);
    g_TieGifTags[0x06] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 0xb);
    g_TieGifTags[0x08] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 0xd);
    g_TieGifTags[0x0a] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 4);
    g_TieGifTags[0x0c] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 4);
    g_TieGifTags[0x0e] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 5);
    g_TieGifTags[0x10] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 6);
    g_TieGifTags[0x12] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 7);
    g_TieGifTags[0x14] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 6);
    g_TieGifTags[0x16] = SCE_GIF_SET_TAG(1, 0, 0, 0, 1, 0xf);
    g_TieGifTags[0x18] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 0xf);
    g_TieGifTags[0x1a] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 1);
    g_TieGifTags[0x1c] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 2);
    g_TieGifTags[0x1e] = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0);
    g_TieGifTags[0x20] = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
    g_TieGifTags[0x22] = SCE_GIF_SET_TAG(1, 0, 0, 0, 0, 2);
    g_TieGifTags[0x24] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 10);
    g_TieGifTags[0x26] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 2);
    g_TieGifTags[0x28] = SCE_GIF_SET_TAG(1, 1, 0, 0, 1, 10);
    g_TieGifTags[0x2a] = SCE_GIF_SET_TAG(1, 1, 1, 0x7c, 0, 0xc);
    ((u32 *)g_TieGifTags)[0x5b] = Gs_DmaTagByte(2, 0);
    g_TieGifTags[0x38] = SCE_GS_SET_TEX0(0, 1, 0x13, 4, 4, 1, 0, 0, 0x12, 0, 0, 4);

    /* 0x736738: the draw packet */
    g_TieDrawVif[0x00] = STUB_005030f4_RET_0(0, 0);
    g_TieDrawVif[0x01] = SCE_VIF1_SET_UNPACK(0, 1, 0xc, 0);
    g_TieDrawVif[0x04] = STUB_005030bc_RET_0(4, 0);
    g_TieDrawVif[0x05] = SCE_VIF1_SET_UNPACK(0x4000, 0, 0xe, 0);
    g_TieDrawVif[0x09] = SCE_VIF1_SET_UNPACK(0x32, 0, 0xd, 0);
    g_TieDrawVif[0x0c] = STUB_005030f4_RET_0(0, 0);
    g_TieDrawVif[0x0d] = SCE_VIF1_SET_UNPACK(0x40cc, 0, 0xe, 0);
    g_TieDrawVif[0x11] = SCE_VIF1_SET_UNPACK(0x80c6, 6, 0xc, 0);
    g_TieDrawVif[0x14] = STUB_005030f4_RET_0(1, 0);
    g_TieDrawVif[0x15] = SCE_VIF1_SET_UNPACK(0x4346, 0x40, 0xe, 0);
    g_TieDrawVif[0x18] = STUB_005030f4_RET_0(0, 0);
    g_TieDrawVif[0x19] = STUB_005030bc_RET_0(0, 0);
    g_TieDrawVif[0x1d] = SCE_VIF1_SET_UNPACK(0x1e, 0, 0xe, 0);
    g_TieDrawVif[0x21] = STUB_005030fc_RET_0(0);
    g_TieDrawVif[0x45] = Gs_DmaTagByte(4, 0);
    g_TieDrawVif[0x4d] = Gs_DmaTagByte(0xd, 0);
    *(u64 *)&g_TieDrawVif[0x4e] = SCE_GIF_SET_TAG(1, 1, 1, 0x7c, 0, 0xc);
    g_TieDrawVif[0x54] = SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_TieDrawVif[0x55] = SCE_VIF1_SET_UNPACK(0, 4, 0xc, 0);
    g_TieDrawVif[0x59] = STUB_005030c4_RET_0(10, 0);

    /* 0x737c48: the texture packet */
    g_TieTexVif[0x00] = SCE_VIF1_SET_STCYCL(4, 4, 0);
    g_TieTexVif[0x0b] = (u32)STUB_005030dc_RET_0(0);
    g_TieTexVif[0x10] = SCE_VIF1_SET_STCYCL(1, 3, 0);
    g_TieTexVif[0x16] = (u32)STUB_005030ec_RET_0(0);
    g_TieTexVif[0x26] = (u32)STUB_005030ec_RET_0(0);
}

/* a DMA tag as this port writes it: only the low byte of the address it points to */
static inline void TieDmaTag(u8 *tag, u8 *next)
{
    tag[0] = 0;
    tag[1] = (u8)(uintptr_t)next;
    tag[2] = 0;
    tag[3] = 0;
}

/* closes the packet section started at g_TieDmaMarker, and with the texture debug
   on, tracks how much GS memory the tie textures used */
void DrawTies_CheckTexOverflow(void)
{
    u8 *start = g_pPacket;

    g_pPacket += 0x10;
    TieDmaTag(g_TieDmaMarker, g_pPacket);

    if (g_DebugEnables[6] != 0 && g_DebugEnables[5] != 0) {
        int used = (int)STUB_00166e20_RET_0(g_GsRamAlloc);

        STUB_001754c0();
        if (used > 0x400000) {
            printf("tie texture overflow\n");
        }

        if (g_TieTexPeak < used) {
            g_TieTexPeak = used;
        }
    }

    TieDmaTag(g_pPacket, g_TieDmaMarker + 0x10);
    g_pPacket += 0x10;
    TieDmaTag(start, g_pPacket);
}

void STUB_00166ad8(...)
{
}

/* unused */
void TieSaveDrawState(void)
{
    FastMemCopy(g_TieTexState, g_TieTexStateSave, sizeof(g_TieTexState));
    FastMemCopy(g_TieDrawState, g_TieDrawStateSave, sizeof(g_TieDrawState));
}

/* unused */
void TieClearPackets(void)
{
    STUB_00166e28(g_TieDrawPacket);
    STUB_00166e28(g_TieTexPacket);
}

void STUB_00166b6c(...)
{
}

/* sets or clears TIE_CLASS_DRAWN on every other tie class, starting at `first` */
static inline void TieMarkClasses(int first, int on)
{
    for (int i = first; i < TieClassIndex; i += 2) {
        u16 *flags = (u16 *)(TieClasses[i] + 0x2a);

        if (on) {
            *flags |= TIE_CLASS_DRAWN;
        }
        else {
            *flags &= ~TIE_CLASS_DRAWN;
        }
    }
}

/* starts a packet section: a DMA tag that DrawTies_CheckTexOverflow fills in */
static inline void TieBeginSection(u8 *packet)
{
    g_GsRamAlloc = g_GsRamBase;
    g_TieDmaMarker = g_pPacket;
    g_pPacket += 0x10;

    if (g_DebugEnables[6] != 0) {
        FlushCache(0);
        STUB_00166e1c();
        STUB_0050045c(packet, 0x3600, 0x40);
    }
}

/* two passes, odd then even tie classes: the texture upload, then the draw */
void DrawTies(void)
{
    TieMarkClasses(1, 1);
    g_GsRamAlloc = g_GsRamBase;
    g_TieDmaMarker = g_pPacket;
    g_pPacket += 0x10;
    STUB_00065630("tie texs", 1);

    if (g_DebugEnables[6] != 0) {
        FlushCache(0);
        STUB_00166e1c();
        STUB_0050045c(g_TieTexPacket, 0x3600, 0x40);
    }

    DrawTies_CheckTexOverflow();
    FastMemCopy(g_TieTexStateSave, g_TieTexState, sizeof(g_TieTexState));
    FastMemCopy(g_TieDrawStateSave, g_TieDrawState, sizeof(g_TieDrawState));
    TieMarkClasses(1, 0);

    TieMarkClasses(0, 1);
    TieBeginSection(g_TieDrawPacket);
    STUB_00065630("tie draw", 5);
    DrawTies_CheckTexOverflow();
    TieMarkClasses(0, 0);

    FastMemCopy(g_pPacket, &g_TieDrawVif[0x1e], 0x20);
    STUB_0006562c("tie draw", 5);
}
