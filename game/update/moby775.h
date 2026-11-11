#pragma once
// game/update/moby775.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00873860; /* 0x873860 */

// ---- functions
undefined4 * M775_004563a4(int param_1,int param_2);
void M775_00456464(void);
MobyInstance * FUN_00456478(double param_1,f32 *param_2);
void UpdateMoby_775(MobyInstance *moby);
