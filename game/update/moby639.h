#pragma once
// game/update/moby639.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008546c8; /* 0x8546c8 */

// ---- functions
void FUN_003fd8d8(int param_1,undefined4 param_2,undefined4 *param_3,int param_4);
void FUN_003fd918(int param_1,undefined2 param_2);
void M639_003fda20(void);
MobyInstance * FUN_003fda38(undefined4 *param_1,f32 *param_2,undefined4 param_3,undefined4 *param_4);
void UpdateMoby_639(MobyInstance *moby);
