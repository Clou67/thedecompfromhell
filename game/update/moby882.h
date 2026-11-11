#pragma once
// game/update/moby882.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004a11b0; /* 0x4a11b0 */

// ---- functions
MobyInstance * M881_004a1030(f32 *param_1,undefined4 *param_2,undefined4 param_3,short param_4);
void UpdateMoby_882(MobyInstance *moby);
