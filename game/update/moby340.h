#pragma once
// game/update/moby340.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0034aa34; /* 0x34aa34 */
extern undefined4 DAT_0034ab70; /* 0x34ab70 */
extern undefined4 DAT_0034b228; /* 0x34b228 */
extern undefined4 DAT_0083ffdc; /* 0x83ffdc */
extern undefined4 DAT_0084000c; /* 0x84000c */

// ---- functions
void M340_0034a598(void);
int M340_0034a5d0(MobyInstance *param_1);
int M340_0034a8d8(MobyInstance *param_1);
undefined8 M340_0034aa40(int param_1);
double M340_0034ab98(int param_1,float *param_2);
void UpdateMoby_340(MobyInstance *moby);
