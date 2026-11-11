#pragma once
// game/update/moby457.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0038c860; /* 0x38c860 */
extern undefined4 DAT_0038d24c; /* 0x38d24c */
extern undefined4 DAT_00842180; /* 0x842180 */

// ---- functions
void M457_0038c84c(void);
MobyInstance * FUN_0038c8a0(double param_1,double param_2,double param_3,f32 param_4,f32 *param_5, MobyInstance *param_6);
MobyInstance * M457_0038ccf0 (double param_1,double param_2,double param_3,float *param_4,int param_5);
void UpdateMoby_457(MobyInstance *moby);
