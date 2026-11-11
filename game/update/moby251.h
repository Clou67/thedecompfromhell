#pragma once
// game/update/moby251.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ffbd8; /* 0x7ffbd8 */

// ---- functions
undefined8 M251_CheckPlasmabotHatchAvailability(int param_1);
void M251_00316c54(void);
MobyInstance * M251_00316c68 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_251(MobyInstance *moby);
