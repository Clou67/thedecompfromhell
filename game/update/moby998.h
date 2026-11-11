#pragma once
// game/update/moby998.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f914c; /* 0x8f914c */
extern undefined4 DAT_008f9190; /* 0x8f9190 */
extern undefined4 DAT_008f924c; /* 0x8f924c */
extern undefined4 DAT_008f92bc; /* 0x8f92bc */

// ---- functions
void M998_004cf144(void);
void M998_004cf158(int param_1);
void M998_004cf2d8(int param_1);
void M998_004cf598(int param_1);
MobyInstance * M998_004cf784(int param_1,short param_2);
void M998_004cf7f8(int param_1);
bool M998_004cf940(int param_1);
void M998_004cfa04(int param_1);
void M998_004cfad8(int param_1);
void UpdateMoby_998(MobyInstance *moby);
void M998_004d04ac(void);
undefined8 STUB_004d04c0(...);
undefined8 STUB_004d04c8(...);
undefined8 STUB_004d04d0(...);
void FUN_004d04e0(double param_1,undefined8 param_2,double param_3);
ulonglong FUN_004d05b8(double param_1,undefined8 param_2,int param_3,float *param_4);
ulonglong FUN_004d0f18(int param_1,int param_2,int param_3);
void FUN_004d0fd0(float *param_1,longlong param_2,MobyInstance *param_3,float *param_4, float *param_5);
void FUN_004d2040(undefined8 param_1,double param_2,double param_3,int param_4,float *param_5, int *param_6);
void FUN_004d2438(double param_1,int param_2,float *param_3,int param_4);
void FUN_004d278c(void);
void FUN_004d27a0(void);
