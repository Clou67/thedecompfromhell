#pragma once
// game/update/moby233.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003008f8; /* 0x3008f8 */
extern undefined4 DAT_00301c64; /* 0x301c64 */
extern undefined4 DAT_007ff2fc; /* 0x7ff2fc */
extern undefined4 DAT_007ff300; /* 0x7ff300 */

// ---- functions
void M233_00300950 (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
double M233_003010d0 (int param_1,float *param_2,undefined8 param_3,undefined8 param_4);
void M233_00301800(MobyInstance *param_1);
void UpdateMoby_233(MobyInstance *moby);
