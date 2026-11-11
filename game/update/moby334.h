#pragma once
// game/update/moby334.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0083fe10; /* 0x83fe10 */

// ---- functions
void M334_003486f0(void);
MobyInstance * FUN_003487b8(double param_1,double param_2,double param_3,double param_4,float param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8,ulonglong param_9, ulonglong param_10,float param_11);
int M334_00348da0 (double param_1,double param_2,double param_3,float *param_4,int param_5);
void UpdateMoby_334(MobyInstance *moby);
