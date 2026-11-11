#pragma once
// game/update/moby1270.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0078d9fc; /* 0x78d9fc */
extern undefined4 DAT_0078da20; /* 0x78da20 */

// ---- functions
void M1270_00236684(void);
void M1270_00236698(int param_1);
void M1270_002367c0(int param_1,float *param_2,float *param_3);
void UpdateMoby_1270(MobyInstance *moby);
