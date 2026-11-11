#pragma once
// game/update/moby1317.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00245f88; /* 0x245f88 */
extern undefined4 DAT_0078e3ec; /* 0x78e3ec */

// ---- functions
void M1317_00245a3c(void);
MobyInstance * FUN_00245a60(double param_1,double param_2,float param_3,float *param_4,f32 *param_5);
void UpdateMoby_1317(MobyInstance *moby);
