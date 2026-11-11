#pragma once
// game/update/moby1885.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007bd5f0; /* 0x7bd5f0 */

// ---- functions
MobyInstance * FUN_002ce020(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void M1885_002ce340(MobyInstance *param_1,longlong param_2);
ulonglong M1885_002ce4ac(undefined8 param_1,int param_2);
void UpdateMoby_1885(MobyInstance *moby);
void M1886_002cf1e4(void);
