#pragma once
// game/update/moby161.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ac89c; /* 0x7ac89c */

// ---- functions
void M161_002a3d6c(void);
MobyInstance * M161_002a3d80(f32 *param_1);
void UpdateMoby_161(MobyInstance *moby);
