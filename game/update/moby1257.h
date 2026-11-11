#pragma once
// game/update/moby1257.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0076d4ac; /* 0x76d4ac */
extern undefined4 DAT_0076d4d0; /* 0x76d4d0 */

// ---- functions
void M1257_00229424(void);
MobyInstance * FUN_00229438(undefined8 param_1,f32 *param_2);
void UpdateMoby_1257(void *this_,MobyInstance *moby);
