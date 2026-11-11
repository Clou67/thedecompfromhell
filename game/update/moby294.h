#pragma once
// game/update/moby294.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00332ba0; /* 0x332ba0 */
extern undefined4 DAT_0081086c; /* 0x81086c */

// ---- functions
void M294_00331540(void);
void M294_00331560(void);
void M294_00331598(MobyInstance *param_1);
void M294_00331670(MobyInstance *param_1);
double M294_00331708(double param_1,double param_2,int param_3,float *param_4);
double M294_00332230(longlong param_1);
void M294_003322b0(int param_1,float *param_2);
void M294_00332560 (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,int param_4);
void UpdateMoby_294(MobyInstance *moby);
