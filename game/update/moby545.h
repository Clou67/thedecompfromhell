#pragma once
// game/update/moby545.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003b0140; /* 0x3b0140 */
extern undefined4 DAT_008456ac; /* 0x8456ac */

// ---- functions
void M545_003aff7c(void);
MobyInstance * FUN_003affa0(undefined4 param_1,f32 *param_2,undefined4 *param_3,undefined2 param_4, undefined4 param_5);
void UpdateMoby_545(MobyInstance *moby);
