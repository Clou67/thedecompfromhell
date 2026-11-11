#pragma once
// game/update/moby1292.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0023eb74; /* 0x23eb74 */
extern undefined4 DAT_0078df28; /* 0x78df28 */

// ---- functions
void M1292_0023e6bc(void);
MobyInstance * FUN_0023e6e0(float *param_1,f32 *param_2,float param_3,float param_4,undefined4 param_5, float param_6);
void UpdateMoby_1292(MobyInstance *moby);
