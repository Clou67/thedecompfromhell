#pragma once
// game/update/moby741.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0085a608; /* 0x85a608 */

// ---- functions
void M741_00441eec(MobyInstance *param_1);
void M741_00441f44(int param_1);
void M741_00441f9c(int param_1);
void M741_00441ff4(int param_1);
longlong M741_0044202c(int param_1);
void M741_0044206c(void);
void M741_00442088(int param_1,int param_2,float *param_3);
undefined8 M741_004422e0(int param_1,int param_2,int *param_3,undefined4 *param_4);
void UpdateMoby_741(void *this_,MobyInstance *moby);
