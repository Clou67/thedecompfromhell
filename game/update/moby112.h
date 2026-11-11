#pragma once
// game/update/moby112.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00764554; /* 0x764554 */

// ---- functions
MobyInstance * FUN_001d4cb0(MobyInstance *param_1);
undefined8 FUN_001d4cf8(int param_1);
void M1192_001d4d30(void);
MobyInstance * FUN_001d4d88(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5, undefined8 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9);
void UpdateMoby_112(MobyInstance *moby);
