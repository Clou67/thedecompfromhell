#pragma once
// game/update/moby570.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003bcd2c; /* 0x3bcd2c */
extern undefined4 DAT_00845d90; /* 0x845d90 */

// ---- functions
MobyInstance * FUN_003bcd40(double param_1,undefined4 param_2,longlong param_3,float *param_4,float *param_5, undefined8 param_6,undefined4 param_7);
undefined8 M570_003bd1ec(MobyInstance *param_1);
void M570_003bd27c(int param_1);
void M570_003bd2d4(int param_1);
void M570_003bd32c(void);
longlong M570_003bd350(int param_1);
void M570_003bd398(int param_1);
void M570_003bd42c(void);
MobyInstance * FUN_003bd440(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
MobyInstance * UpdateMoby_570(MobyInstance *moby);
