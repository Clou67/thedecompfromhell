#pragma once
// game/update/moby1268.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0078d918; /* 0x78d918 */
extern undefined4 DAT_0078d93c; /* 0x78d93c */

// ---- functions
void M1268_00235530(MobyInstance *param_1);
void M1268_00235588(int param_1);
undefined8 M1268_002355e0 (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4);
void M1268_002356b0(int param_1);
longlong M1268_002356e8(int param_1);
void M1268_00235728(void);
void M1268_00235740(undefined8 param_1,int param_2);
void UpdateMoby_1268(MobyInstance *moby);
