#pragma once
// game/update/moby757.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00871c88; /* 0x871c88 */
extern pointer32 PTR_Draw_MobyCounterHud_00705898; /* 0x705898 */
extern pointer32 PTR_MobyCounterHud_Init_00705890; /* 0x705890 */

// ---- functions
MobyInstance * M757_0044e100(int param_1,float *param_2,f32 *param_3,undefined4 param_4);
void M757_0044e618(int param_1);
void UpdateMoby_757(MobyInstance *moby);
