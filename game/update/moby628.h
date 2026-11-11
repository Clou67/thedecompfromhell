#pragma once
// game/update/moby628.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003ebd80; /* 0x3ebd80 */
extern undefined4 DAT_008540fc; /* 0x8540fc */
extern undefined4 DAT_00854174; /* 0x854174 */
extern pointer32 PTR_M629_003ec168_0070daa8; /* 0x70daa8 */

// ---- functions
MobyInstance * FUN_003eba50(int param_1,f32 *param_2,float *param_3);
void M628_003ebd6c(void);
void UpdateMoby_628(MobyInstance *moby);
