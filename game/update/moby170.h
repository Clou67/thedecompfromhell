#pragma once
// game/update/moby170.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002add40; /* 0x2add40 */
extern undefined4 DAT_007b72ec; /* 0x7b72ec */

// ---- functions
void M170_002ad088(void);
void M170_002ad118 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, char param_5);
void M170_002ad9c0(MobyInstance *param_1,longlong param_2,undefined8 param_3);
void UpdateMoby_170(MobyInstance *moby);
