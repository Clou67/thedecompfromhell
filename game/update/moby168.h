#pragma once
// game/update/moby168.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00722244; /* 0x722244 */
extern undefined2 DAT_00a0fd9c; /* 0xa0fd9c */
extern undefined2 DAT_00a0fd9e; /* 0xa0fd9e */
extern undefined4 DAT_00a0fda0; /* 0xa0fda0 */

// ---- functions
MobyInstance * M168_002ab180 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, float *param_5,float *param_6);
void UpdateMoby_168(MobyInstance *moby);
