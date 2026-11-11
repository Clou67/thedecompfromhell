#pragma once
// game/update/moby13.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0078dff4; /* no defined data */
extern undefined4 DAT_0078e0b0; /* 0x78e0b0 */
extern undefined4 DAT_00f1559c; /* 0xf1559c */

// ---- functions
void M16_00240678(MobyInstance *param_1);
void M16_002409e0(int param_1,float *param_2,float *param_3);
undefined8 M16_00240f38(double param_1,double param_2,MobyInstance *param_3,int param_4);
void UpdateMoby_13(MobyInstance *moby);
