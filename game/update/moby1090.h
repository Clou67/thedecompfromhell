#pragma once
// game/update/moby1090.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001bc230; /* 0x1bc230 */
extern undefined4 DAT_00763b30; /* 0x763b30 */

// ---- functions
void M1090_001bc080(void);
MobyInstance * FUN_001bc0b0(double param_1,double param_2,double param_3,undefined4 param_4,f32 *param_5, undefined4 param_6);
void UpdateMoby_1090(MobyInstance *moby);
