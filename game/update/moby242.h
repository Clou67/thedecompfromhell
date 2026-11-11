#pragma once
// game/update/moby242.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff758; /* 0x7ff758 */

// ---- functions
void M242_0030e964(void);
ulonglong M242_0030e980(longlong param_1,undefined8 param_2);
int M242_0030edd8 (longlong param_1,int *param_2,int *param_3,uint param_4,uint param_5);
void M242_0030ee80(int param_1,int param_2,MobyInstance *param_3);
void UpdateMoby_242(MobyInstance *moby);
