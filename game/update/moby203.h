#pragma once
// game/update/moby203.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002e8a68; /* 0x2e8a68 */
extern undefined4 DAT_007fea8c; /* 0x7fea8c */
extern pointer32 PTR_M1900_002e68e0_0070b6c8; /* 0x70b6c8 */

// ---- functions
void M1900_002e68e0(int param_1);
void M1900_002e6f18(MobyInstance *param_1);
MobyInstance * FUN_002e7140(undefined4 param_1,f32 *param_2,undefined4 *param_3);
void FUN_002e74a8(float *param_1,int param_2,undefined4 *param_3);
undefined8 M1900_002e7c08(int param_1,MobyInstance *param_2,int param_3);
void M1900_002e86b8(int param_1);
void M1900_002e89ec(undefined8 param_1);
void UpdateMoby_203(MobyInstance *moby);
void M1900_002ea73c(void);
