#pragma once
// game/update/moby259.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007fffbc; /* 0x7fffbc */

// ---- functions
void M259_0031d8c4(void);
MobyInstance * FUN_0031d8e0(Spline *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_259(MobyInstance *moby);
