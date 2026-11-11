#pragma once
// game/update/moby224.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff098; /* 0x7ff098 */
extern undefined4 DAT_007ff0c0; /* 0x7ff0c0 */

// ---- functions
MobyInstance * FUN_002f9610(f32 *param_1,MOBY_OCLASSES param_2);
void UpdateMoby_224(MobyInstance *moby);
void M228_002f9f30(void);
void M228_002f9f70(int param_1);
