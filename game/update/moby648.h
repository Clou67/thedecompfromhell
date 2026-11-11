#pragma once
// game/update/moby648.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854844; /* 0x854844 */
extern undefined4 DAT_00854848; /* 0x854848 */
extern undefined4 DAT_0085484c; /* 0x85484c */
extern undefined4 DAT_00854850; /* 0x854850 */
extern undefined4 DAT_00854854; /* 0x854854 */
extern undefined4 DAT_00854858; /* 0x854858 */
extern undefined4 DAT_0085485c; /* 0x85485c */
extern undefined4 DAT_00854860; /* 0x854860 */
extern undefined4 DAT_00854864; /* 0x854864 */
extern undefined4 DAT_00854868; /* 0x854868 */
extern undefined4 DAT_00854874; /* 0x854874 */
extern undefined4 DAT_010cbbd8; /* 0x10cbbd8 */
extern undefined4 DAT_010cbbdc; /* 0x10cbbdc */

// ---- functions
MobyInstance * FUN_004010d8(longlong param_1,int param_2);
MobyInstance * FUN_004011c8(longlong param_1,int param_2);
void UpdateMoby_648(MobyInstance *moby);
