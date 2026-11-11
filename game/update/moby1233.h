#pragma once
// game/update/moby1233.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00216adc; /* 0x216adc */
extern undefined4 DAT_00216b7c; /* 0x216b7c */
extern undefined4 DAT_00216c14; /* 0x216c14 */

// ---- functions
MobyInstance * M1232_00216430 (double param_1,float *param_2,float *param_3,float param_4,undefined8 param_5, float param_6);
longlong FUN_00216898(int param_1,undefined2 param_2);
void FUN_002169b4(double param_1,MobyInstance *param_2,undefined4 *param_3,undefined8 param_4, undefined4 param_5);
void M1233_00216af0(longlong param_1);
void M1233_00216b88(longlong param_1);
void UpdateMoby_1233(MobyInstance *moby);
