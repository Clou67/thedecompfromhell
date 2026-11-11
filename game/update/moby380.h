#pragma once
// game/update/moby380.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840730; /* 0x840730 */

// ---- functions
void M380_00359274(void);
MobyInstance * M380_00359288(int param_1);
MobyInstance * UpdateMoby_380(MobyInstance *moby);
