#pragma once
// game/update/moby562.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00845acc; /* 0x845acc */

// ---- functions
void M562_003b66b4(void);
void M562_003b6708 (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5, float *param_6);
void M562_003b6ca8 (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_562(MobyInstance *moby);
