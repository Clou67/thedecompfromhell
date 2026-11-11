#pragma once
// game/update/moby1218.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0020ad88; /* 0x20ad88 */
extern undefined4 DAT_00766a10; /* 0x766a10 */

// ---- functions
MobyInstance * M1215_0020ab50(f32 *param_1,undefined4 *param_2,MOBY_OCLASSES param_3);
undefined8 M1220_0020ac48(int param_1,float *param_2);
void UpdateMoby_1218(MobyInstance *moby);
void M1220_0020b698(void);
MobyInstance * M1220_0020b6b0(int param_1);
