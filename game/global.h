#pragma once
// game/global.h
#include "types.h"

// ---- globals
extern int g_GlobalSectionWord; /* 0x71f3d8: set by SECTION_HEADER_GLOBAL */ /* type set in global_types.tsv */
extern int g_GlobalSectionWord2; /* 0x71fbac: set by Global_InitGsRegs, like a section header word */ /* type set in global_types.tsv */
extern u64 g_GsFadeStripsNtsc[40]; /* 0x71f430: PS2 GIF packet, the 512x416 screen in 16 sprites (unused on PS3) */ /* type set in global_types.tsv */
extern u64 g_GsFadeStripsPal[40]; /* 0x71f570: the same for 512x448 */ /* type set in global_types.tsv */
extern u64 g_GsRegs6b0[22]; /* 0x71f6b0: PS2 GIF tag for 10 registers (only the tag is set) */ /* type set in global_types.tsv */
extern u64 g_GsRegsContext1[14]; /* 0x71f890: PS2 GS registers for drawing context 1 */ /* type set in global_types.tsv */
extern u64 g_GsRegsContext2[14]; /* 0x71f900: the same for context 2 */ /* type set in global_types.tsv */
extern int g_QuickMovieUsed; /* 0xa1073c: bytes Bink has taken from g_NpcBuffer (reset by Global_QuickMovieFree) */ /* type set in global_types.tsv */
extern u64 reset_gs_regs_fixed[38]; /* 0x71f760: PS2 GS registers reset (DL name, same size) */ /* type set in global_types.tsv */

// ---- functions
void SECTION_HEADER_GLOBAL(void);
void Global_InitGsRegs(void);
void *Global_QuickMovieMalloc(int size);
void Global_QuickMovieFree(void);
void Global_FreeTexBase(void);
