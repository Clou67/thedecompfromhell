#pragma once
// game/update/moby750.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0044a6a8; /* 0x44a6a8 */
extern undefined4 DAT_0044b580; /* 0x44b580 */
extern undefined4 DAT_0085a81c; /* 0x85a81c */

// ---- functions
void M750_0044a708 (int param_1,int *param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5, undefined8 param_6);
void M750_0044b130(int param_1);
void M750_0044b460(int param_1);
void UpdateMoby_750(MobyInstance *moby);
