#pragma once
// game/update/moby1632.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ac95c; /* 0x7ac95c */
extern undefined4 _DAT_002a4f80; /* direct read */
extern undefined4 _DAT_002a4f90; /* direct read */

// ---- functions
void M1632_002a4e7c(void);
MobyInstance * FUN_002a4e90(double param_1,int param_2,f32 *param_3);
void UpdateMoby_1632(MobyInstance *moby);
