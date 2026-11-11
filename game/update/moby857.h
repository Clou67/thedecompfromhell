#pragma once
// game/update/moby857.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004928c8; /* 0x4928c8 */
extern undefined4 DAT_00492ccc; /* 0x492ccc */
extern undefined4 DAT_008c7c4c; /* 0x8c7c4c */
extern undefined4 DAT_008c7c70; /* 0x8c7c70 */
extern undefined4 DAT_010e03c4; /* 0x10e03c4 */
extern undefined4 DAT_010e03c8; /* 0x10e03c8 */
extern undefined4 DAT_010e03cc; /* 0x10e03cc */
extern pointer32 PTR_M859_00495620_0070f208; /* 0x70f208 */

// ---- functions
undefined8 M857_00490188 (longlong param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5);
uint M857_00490480 (double param_1,undefined4 *param_2,int param_3,undefined8 param_4,longlong param_5, undefined4 param_6);
uint M857_004906e0(longlong param_1,uint param_2,uint param_3);
void M857_00490764(undefined4 *param_1,int param_2,longlong param_3);
undefined8 M857_00490928 (double param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,undefined8 param_5 ,undefined4 param_6,undefined4 *param_7,undefined4 *param_8);
void M857_00490c78(void);
void M857_00490cb8(MobyInstance *param_1);
undefined8 M857_00490fb0 (int param_1,int param_2,MobyInstance *param_3,int param_4,undefined4 *param_5);
undefined4 M857_00491998(int param_1,undefined8 param_2);
void M857_00491ae8(int param_1);
double M857_00491d68(int param_1,int param_2,int param_3);
void M857_004921e0(void);
void M857_004928e0(MobyInstance *param_1);
void UpdateMoby_857(MobyInstance *moby);
