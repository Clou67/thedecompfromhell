#pragma once
// game/update/moby686.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008573ac; /* 0x8573ac */

// ---- functions
void FUN_00414594(int param_1);
void FUN_004145d0(int param_1);
void M686_00414658(void);
MobyInstance * M686_00414688 (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5, ulonglong param_6,undefined8 param_7,undefined8 param_8);
void UpdateMoby_686(MobyInstance *moby);
