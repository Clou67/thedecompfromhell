#pragma once
// game/update/moby1284.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0023ad14; /* 0x23ad14 */
extern undefined4 DAT_0078dc40; /* 0x78dc40 */
extern undefined4 DAT_0078dc64; /* no defined data */
extern undefined4 DAT_0078dc68; /* 0x78dc68 */
extern undefined4 DAT_0078dc90; /* no defined data */
extern undefined4 DAT_0078dc94; /* no defined data */
extern undefined4 DAT_0078dcb0; /* no defined data */
extern undefined4 DAT_0078dd00; /* 0x78dd00 */
extern undefined4 DAT_0078dd04; /* 0x78dd04 */
extern undefined4 DAT_0078dd08; /* 0x78dd08 */
extern undefined4 DAT_0078dd10; /* 0x78dd10 */
extern undefined4 DAT_00f15590; /* 0xf15590 */
extern undefined4 DAT_00f15594; /* 0xf15594 */
extern pointer32 PTR_M1284_0023b238_00709c10; /* 0x709c10 */

// ---- functions
void FUN_0023892c(int param_1,int param_2);
void M1284_002389ac(void);
void M1284_002389c8(int param_1,int param_2);
double M1284_00238e58 (undefined8 param_1,undefined8 param_2,int param_3,int param_4);
bool M1284_00238f88(int param_1,int param_2,longlong param_3,char param_4);
longlong M1284_00239940 (int param_1,int param_2,longlong param_3,undefined1 param_4);
void M1284_00239c18(undefined8 param_1,int param_2,longlong param_3);
void M1284_00239d98(MobyInstance *param_1,longlong param_2);
void M1284_0023a410(double param_1,float *param_2,float *param_3);
void M1284_0023a538 (double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5);
void M1284_0023ad28(int param_1,int param_2);
void M1284_0023aea0(undefined8 param_1);
void M1284_0023b238(int param_1);
void M1284_0023b710(int param_1,longlong param_2);
void UpdateMoby_1284(MobyInstance *moby);
