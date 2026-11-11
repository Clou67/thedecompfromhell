#pragma once
// game/update/moby567.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003bbd60; /* 0x3bbd60 */
extern undefined4 _DAT_003bbd80; /* direct read */
extern undefined4 _DAT_003bbd90; /* direct read */
extern undefined4 _DAT_003bbda0; /* direct read */
extern undefined4 _DAT_003bbdc0; /* direct read */
extern undefined4 _DAT_003bbdd0; /* direct read */

// ---- functions
MobyInstance * FUN_003bbc08(double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,undefined4 param_5);
void UpdateMoby_567(MobyInstance *moby);
