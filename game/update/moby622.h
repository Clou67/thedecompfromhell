#pragma once
// game/update/moby622.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00853d80; /* 0x853d80 */

// ---- functions
MobyInstance * M622_003e2a60(f32 *param_1,int param_2,longlong param_3);
void M622_003e2b5c(void);
void M622_003e2b88(MobyInstance *param_1);
MobyInstance * UpdateMoby_622(MobyInstance *moby);
