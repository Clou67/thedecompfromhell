#pragma once
// game/update/moby240.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff61c; /* 0x7ff61c */
extern undefined4 DAT_007ff654; /* 0x7ff654 */
extern undefined4 DAT_007ff658; /* 0x7ff658 */

// ---- functions
void M240_0030b548(void);
MobyInstance * FUN_0030b568(f32 *param_1,undefined4 *param_2,u8 param_3,undefined4 param_4);
undefined8 M240_0030b6bc(int param_1);
void M240_0030b740(int param_1);
void M240_0030bbd0 (int param_1,float *param_2,float *param_3,undefined8 param_4,int param_5);
void M240_0030be90(int param_1,float *param_2,int param_3);
void UpdateMoby_240(MobyInstance *moby);
