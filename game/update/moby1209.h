#pragma once
// game/update/moby1209.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0076659c; /* 0x76659c */
extern undefined4 DAT_007665a0; /* 0x7665a0 */
extern undefined4 DAT_007665a4; /* 0x7665a4 */
extern undefined4 DAT_00766600; /* 0x766600 */

// ---- functions
MobyInstance * FUN_001ffaf0(int param_1,f32 *param_2,float *param_3);
void UpdateMoby_1209(MobyInstance *moby);
void M1209_002005d4(void);
void M1209_00200608(int param_1);
