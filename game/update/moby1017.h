#pragma once
// game/update/moby1017.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073bb54; /* 0x73bb54 */
extern undefined4 DAT_0073bb58; /* 0x73bb58 */
extern undefined4 DAT_0073bb5c; /* 0x73bb5c */
extern undefined4 DAT_0073bb60; /* 0x73bb60 */

// ---- functions
MobyInstance * FUN_00187e00(double param_1,double param_2,double param_3,float param_4,float *param_5,f32 *param_6);
void UpdateMoby_1017(MobyInstance *moby);
