#pragma once
// game/update/moby820.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0047434c; /* 0x47434c */
extern undefined4 DAT_00877928; /* 0x877928 */

// ---- functions
void M820_00472fbc(void);
void M820_00472fd8(int param_1);
void M820_00473058(int param_1);
undefined8 M820_00473158(longlong param_1,longlong param_2,float *param_3,float *param_4);
void M820_00473940(int param_1,int param_2,float *param_3);
void M820_00473ab0(int param_1,int param_2);
void M820_00473d20(int param_1,int param_2);
void M820_00473fc0(int param_1,int param_2,float *param_3,float *param_4);
void UpdateMoby_820(MobyInstance *moby);
