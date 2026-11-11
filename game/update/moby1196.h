#pragma once
// game/update/moby1196.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001f2d20; /* 0x1f2d20 */
extern undefined4 DAT_001f35fc; /* 0x1f35fc */
extern undefined4 DAT_007660dc; /* 0x7660dc */
extern undefined4 DAT_00766138; /* 0x766138 */
extern undefined4 DAT_00fa3840; /* 0xfa3840 */

// ---- functions
MobyInstance * FUN_001f29e8(double param_1,undefined4 param_2,f32 *param_3,float *param_4,undefined8 param_5, undefined4 param_6);
void M1196_001f2ca4(void);
void M1196_001f2cb8(int param_1);
void M1196_001f2d58(MobyInstance *param_1);
void UpdateMoby_1196(MobyInstance *moby);
