#pragma once
// game/update/moby231.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff2d8; /* 0x7ff2d8 */

// ---- functions
void M231_00300130(void);
undefined8 M231_00300150(MobyInstance *param_1,longlong param_2,undefined8 param_3);
void UpdateMoby_231(MobyInstance *moby);
