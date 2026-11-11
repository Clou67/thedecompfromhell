#pragma once
// game/update/moby584.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00846588; /* 0x846588 */

// ---- functions
MobyInstance * FUN_003d1d10(float *param_1,float *param_2,longlong param_3);
MobyInstance * FUN_003d2178(float *param_1,longlong param_2);
void FUN_003d2234(longlong param_1);
void FUN_003d22a0(int param_1);
void M584_003d22b8(void);
MobyInstance * M584_003d22d0 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_584(MobyInstance *moby);
