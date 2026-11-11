#pragma once
// game/update/moby1181.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00765ef8; /* 0x765ef8 */

// ---- functions
void FUN_001eede4(int param_1);
void M1181_001eee08(void);
void M1181_001eee28(MobyInstance *param_1,undefined8 param_2,undefined8 param_3);
int M1181_001ef090 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5);
void UpdateMoby_1181(MobyInstance *moby);
