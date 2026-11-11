#pragma once
// game/update/moby880.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008cbd8c; /* 0x8cbd8c */

// ---- functions
void M880_0049fb70(void);
MobyInstance * FUN_0049fba0(f32 *param_1,float *param_2,undefined4 param_3,undefined4 param_4);
void UpdateMoby_880(MobyInstance *moby);
