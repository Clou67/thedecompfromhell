#pragma once
// game/update/moby1004.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0018292c; /* 0x18292c */
extern undefined4 DAT_0073b784; /* 0x73b784 */

// ---- functions
void M1004_00181be0(void);
void M1004_00181c08(MobyInstance *param_1,longlong param_2,undefined8 param_3);
bool M1004_00181f00(double param_1,int param_2,int param_3,float *param_4);
void UpdateMoby_1004(MobyInstance *moby);
