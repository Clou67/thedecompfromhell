#pragma once
// game/update/moby1511.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ab1e8; /* 0x7ab1e8 */
extern undefined4 DAT_007ab1ec; /* 0x7ab1ec */
extern undefined4 DAT_007ab23c; /* 0x7ab23c */
extern undefined4 DAT_007ab2a0; /* 0x7ab2a0 */
extern pointer32 PTR_M1512_0028f3f0_0070a8a0; /* 0x70a8a0 */

// ---- functions
MobyInstance * FUN_0028e510(double param_1,float param_2,float *param_3);
void M1511_0028e730(int param_1);
void M1511_0028eb08(void);
void UpdateMoby_1511(MobyInstance *moby);
