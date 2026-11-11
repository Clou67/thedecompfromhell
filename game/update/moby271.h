#pragma once
// game/update/moby271.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00323b90; /* 0x323b90 */
extern undefined4 DAT_00800130; /* 0x800130 */

// ---- functions
void M271_0032399c(MobyInstance *moby);
void M271_003239f4(int param_1);
undefined8 M271_00323a4c (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4);
void M271_00323b14(int param_1);
undefined4 M271_00323b4c(int param_1);
void M271_00323b78(void);
void UpdateMoby_271(MobyInstance *moby);
