#pragma once
// game/update/moby184.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071cfac; /* 0x71cfac */

// ---- functions
void SECTION_HEADER_MOBY184(void);
MobyInstance * M184_0001b100 (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5, undefined8 param_6,longlong param_7);
void UpdateMoby_184(MobyInstance *moby);
