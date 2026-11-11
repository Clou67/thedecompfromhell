#pragma once
// game/update/moby425.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0036a4b8; /* 0x36a4b8 */
extern undefined4 DAT_0084111c; /* 0x84111c */

// ---- functions
void M425_0036a198(void);
MobyInstance * FUN_0036a1d0(float param_1,f32 *param_2,float *param_3);
void UpdateMoby_425(MobyInstance *moby);
