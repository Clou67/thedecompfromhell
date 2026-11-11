#pragma once
// game/update/moby190.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007bd6e8; /* 0x7bd6e8 */
extern undefined2 DAT_00a0fdac; /* 0xa0fdac */
extern undefined2 DAT_00a0fdae; /* 0xa0fdae */
extern undefined4 DAT_00a0fdb0; /* 0xa0fdb0 */

// ---- functions
void M190_002d2290(void);
void M190_002d22c0(void);
void M190_002d2308 (double param_1,double param_2,double param_3,float *param_4,float *param_5, float *param_6);
void UpdateMoby_190(MobyInstance *moby);
