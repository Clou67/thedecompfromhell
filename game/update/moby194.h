#pragma once
// game/update/moby194.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002de864; /* 0x2de864 */
extern undefined4 DAT_007f3f08; /* 0x7f3f08 */

// ---- functions
void M194_002de770(void);
MobyInstance * M194_002de788(f32 *param_1,int param_2,undefined8 param_3);
ulonglong UpdateMoby_194(MobyInstance *moby);
