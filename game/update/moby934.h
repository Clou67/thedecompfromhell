#pragma once
// game/update/moby934.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004bff40; /* 0x4bff40 */
extern undefined4 DAT_008f4b24; /* 0x8f4b24 */

// ---- functions
MobyInstance * FUN_004bfdf8(int param_1,f32 *param_2);
void FUN_004bff20(int param_1);
void M934_004bff2c(void);
void UpdateMoby_934(MobyInstance *moby);
