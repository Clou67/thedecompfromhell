#pragma once
// game/update/moby1083.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007580c4; /* 0x7580c4 */
extern undefined4 DAT_007580f0; /* 0x7580f0 */
extern undefined4 DAT_007580f4; /* 0x7580f4 */
extern undefined4 DAT_007580fc; /* 0x7580fc */
extern pointer32 PTR_M1089_001ba794_00708a88; /* 0x708a88 */
extern pointer32 PTR_M1089_001ba9c0_00708a90; /* 0x708a90 */
extern pointer32 PTR_M1089_001babf8_00708a98; /* 0x708a98 */
extern pointer32 PTR_M1089_001bafc0_00708aa0; /* 0x708aa0 */

// ---- functions
void M1083_001b971c(void);
double M1083_001b9730 (double param_1,double param_2,double param_3,double param_4,double param_5, float *param_6,int param_7,float *param_8);
void M1083_001b99d4(void);
void M1083_001b9a20(int param_1,int param_2);
void UpdateMoby_1083(MobyInstance *moby);
