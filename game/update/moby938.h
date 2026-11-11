#pragma once
// game/update/moby938.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f4c3c; /* 0x8f4c3c */
extern undefined4 DAT_008f4c60; /* 0x8f4c60 */

// ---- functions
void M938_004c2b00(void);
MobyInstance * FUN_004c2b28(undefined4 param_1,f32 *param_2,undefined4 *param_3);
undefined8 M938_004c2ce8 (MobyInstance *param_1,float *param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_938(MobyInstance *moby);
