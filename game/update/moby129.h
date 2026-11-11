#pragma once
// game/update/moby129.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00757fb4; /* 0x757fb4 */
extern undefined4 DAT_00757fd8; /* 0x757fd8 */

// ---- functions
void FUN_001b7028(undefined8 param_1,f32 *param_2,undefined4 *param_3);
MobyInstance * UpdateMoby_129(MobyInstance *moby);
void M1131_001b77b0(void);
void M108_001b77f0 (double param_1,undefined8 param_2,double param_3,double param_4);
void M108_001b78c0 (double param_1,double param_2,MobyInstance *param_3,float *param_4,float *param_5);
