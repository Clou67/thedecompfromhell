#pragma once
// game/update/moby455.h
#include "types.h"
#include "game/mobyfunc.h"

// ---- globals
extern undefined4 DAT_00842090; /* 0x842090 */

// ---- functions
void M455_0038a0c4(void);
bool M455_0038a0e0(longlong param_1,float *param_2);
MobyInstance * FUN_0038a248(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, MOBY_OCLASSES param_5);
void UpdateMoby_455(MobyInstance *moby);
