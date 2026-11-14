#include <stdio.h>
#include "game/global.h"
#include "game/loaders.h"
#include "game/pause.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "sdk/fios.h"
// game/global.cpp -- reconstructed from NPEA00385 EBOOT (was fUnk.cpp; named after
// Global_QuickMovieMalloc)
// 5 functions, 0x7a338-0x7b0f4: Bink's memory hooks, which hand out g_NpcBuffer, and two PS2
// leftovers nothing calls: the GS register tables' setup and a texture buffer free.

// 0x007a338 (0x14 bytes)
void SECTION_HEADER_GLOBAL(void)
{
    g_GlobalSectionWord = 0x10000;
}

/* 16 sprites side by side across the 512-wide screen, top to bottom (GS XYZ pairs) */
static inline void GlobalScreenStrips(u64 *xyz, int top, int bottom)
{
    for (int i = 0; i < 16; i++) {
        xyz[i * 2] = SCE_GS_SET_XYZ(0x7000 + i * 0x200, top, 0);
        xyz[i * 2 + 1] = SCE_GS_SET_XYZ(0x7200 + i * 0x200, bottom, 0);
    }
}

// 0x007a350 (0xcac bytes)
/* Fills the PS2 GS register tables: the full-screen sprite packets for a 416- and a 448-line
   screen, the fixed register reset and the two drawing contexts' registers. Nothing calls it
   and nothing reads the tables on PS3. */
void Global_InitGsRegs(void)
{
    g_GlobalSectionWord2 = 0x10000;

    g_GsFadeStripsNtsc[0] = SCE_GIF_SET_TAG(1, 0, 0, 0, 0, 2);
    g_GsFadeStripsNtsc[2] = idol_draw::Blend(0, 0, 0, 0, 0, 0, 1, 1);
    g_GsFadeStripsNtsc[4] = SCE_GS_SET_PRIM(0xf, 0, 0, 0, 1, 0, 1, 0);
    g_GsFadeStripsNtsc[6] = SCE_GIF_SET_TAG(0x10, 1, 0, 0, 1, 2);
    GlobalScreenStrips(&g_GsFadeStripsNtsc[8], 0x7300, 0x8d00);

    g_GsFadeStripsPal[0] = SCE_GIF_SET_TAG(1, 0, 0, 0, 0, 2);
    g_GsFadeStripsPal[2] = idol_draw::Blend(0, 0, 0, 0, 0, 0, 1, 1);
    g_GsFadeStripsPal[4] = SCE_GS_SET_PRIM(0xf, 0, 0, 0, 1, 0, 1, 0);
    g_GsFadeStripsPal[6] = SCE_GIF_SET_TAG(0x10, 1, 0, 0, 1, 2);
    GlobalScreenStrips(&g_GsFadeStripsPal[8], 0x7200, 0x8e00);

    g_GsRegs6b0[0] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 10);

    /* the fixed reset: pairs of registers for both contexts */
    u64 *fixed = reset_gs_regs_fixed;

    fixed[0] = SCE_GIF_SET_TAG(0x12, 1, 0, 0, 0, 1);
    fixed[2] = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
    fixed[4] = idol_draw::PackCmd(0, 1, 0, 1, 0x80);
    fixed[6] = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    fixed[8] = SCE_GS_SET_CLAMP(0, 0, 0, 0, 0, 0);
    fixed[10] = STUB_00502e00_RET_0();
    fixed[12] = STUB_00502e08_RET_0();
    fixed[14] = STUB_00502e10_RET_0();
    fixed[16] = STUB_00502e50_RET_0();
    fixed[18] = STUB_00502e50_RET_0();
    fixed[20] = STUB_00502e18_RET_0();
    fixed[22] = STUB_00502e20_RET_0();
    fixed[24] = STUB_00502e28_RET_0();
    fixed[26] = STUB_00502e30_RET_0();
    fixed[28] = FUN_00502f98(1, 5, 0x60, 3, 0, 0, 1, 2);
    fixed[30] = FUN_00502f98(1, 5, 0x60, 3, 0, 0, 1, 2);
    fixed[32] = STUB_00502e38_RET_0();
    fixed[34] = STUB_00502e40_RET_0();

    g_GsRegsContext1[0] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 6);
    g_GsRegsContext1[2] = VU1_addGSregister(0, 0x24, 0);
    g_GsRegsContext1[4] = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    g_GsRegsContext1[6] = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
    g_GsRegsContext1[8] = idol_draw::Blend(0, 0, 0, 0, 0, 0, 1, 1);
    g_GsRegsContext1[10] = idol_draw::PackCmd(0, 1, 0, 1, 0x80);

    g_GsRegsContext2[0] = SCE_GIF_SET_TAG(1, 1, 0, 0, 0, 6);
    g_GsRegsContext2[2] = VU1_addGSregister(0, 0x24, 1);
    g_GsRegsContext2[4] = idol_draw::Blend(1, 5, 0x80, 1, 0, 0, 1, 1);
    g_GsRegsContext2[6] = SCE_GS_SET_CLAMP(1, 1, 0, 0, 0, 0);
    g_GsRegsContext2[8] = SCE_GS_SET_TEX1(0, 0, 1, 1, 1, 0, 0xff90);
    g_GsRegsContext2[10] = idol_draw::PackCmd(0, 1, 0, 1, 0x20);
}

// 0x007affc (0xb8 bytes)
// strings: 0065204c: 'Bink MALLOC!' | 0065205c: 'Global_QuickMovieMalloc:Bink Allocator used %d bytes\n'
/* Bink's allocator: the next size bytes of g_NpcBuffer, aligned to 32. It always charges 32
   bytes of alignment, even when the address is already aligned. */
void *Global_QuickMovieMalloc(int size)
{
    printf("Bink MALLOC!");

    uintptr_t addr = (uintptr_t)g_NpcBuffer + g_QuickMovieUsed;
    int misalign = addr & 0x1f;

    if (misalign != 0) {
        addr = addr - misalign + 0x20;
        print_tty2("Global_QuickMovieMalloc:Bink Allocator used %d bytes\n", 0x20 - misalign);
    }

    g_QuickMovieUsed = size + (0x20 - misalign) + g_QuickMovieUsed;

    return (void *)addr;
}

// 0x007b0b4 (0x10 bytes)
/* Bink's free: everything goes at once (was ____ClearFlag_a1073c) */
void Global_QuickMovieFree(void)
{
    g_QuickMovieUsed = 0;
}

// 0x007b0c4 (0x30 bytes)
/* frees TEX_BASE's two buffers (nothing calls it; was ____FreeTexBase) */
void Global_FreeTexBase(void)
{
    FUN_005084c0((undefined4 *)&TEX_BASE);
}
