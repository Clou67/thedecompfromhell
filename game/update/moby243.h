#pragma once
// game/update/moby243.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff7cc; /* 0x7ff7cc */

// ---- functions
void M243_0030f5a0(void);
MobyInstance * FUN_0030f5c8(undefined4 param_1,f32 *param_2,undefined4 *param_3);
void UpdateMoby_243(MobyInstance *moby);
