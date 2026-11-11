#pragma once
// game/update/moby248.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00315480; /* 0x315480 */
extern undefined4 DAT_007ffa64; /* 0x7ffa64 */
extern undefined4 DAT_007ffa88; /* 0x7ffa88 */

// ---- functions
void M248_00315160(void);
MobyInstance * FUN_00315198(undefined4 param_1,f32 *param_2,float *param_3);
void UpdateMoby_248(MobyInstance *moby);
