#pragma once
// game/update/moby1886.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002cf40c; /* 0x2cf40c */

// ---- functions
MobyInstance * M1885_002cf208 (undefined4 param_1,f32 *param_2,undefined4 *param_3,undefined1 param_4,undefined1 param_5 );
void M1886_002cf3a0(MobyInstance *param_1,int param_2);
void UpdateMoby_1886(MobyInstance *moby);
