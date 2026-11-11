#pragma once
// game/update/moby235.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff3d0; /* 0x7ff3d0 */

// ---- functions
void M235_003048ac(void);
MobyInstance * M235_003048c0 (double param_1,double param_2,int param_3,undefined8 param_4,uint param_5,int param_6, undefined2 param_7);
void UpdateMoby_235(MobyInstance *moby);
