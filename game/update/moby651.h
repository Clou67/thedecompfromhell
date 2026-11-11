#pragma once
// game/update/moby651.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008548ec; /* 0x8548ec */
extern undefined4 DAT_008548f8; /* 0x8548f8 */
extern undefined4 DAT_008548fc; /* 0x8548fc */
extern pointer32 PTR_M654_00402750_0070de30; /* 0x70de30 */

// ---- functions
MobyInstance * FUN_00401f88(longlong param_1,float *param_2);
void FUN_00402050(MobyInstance *param_1);
void UpdateMoby_651(MobyInstance *moby);
