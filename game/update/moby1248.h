#pragma once
// game/update/moby1248.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0076d34c; /* 0x76d34c */
extern undefined4 DAT_0076d370; /* 0x76d370 */
extern undefined4 DAT_0076d374; /* 0x76d374 */
extern undefined4 DAT_00f0d2f4; /* 0xf0d2f4 */

// ---- functions
undefined8 MB_isSpecificState(MobyInstance *param_1);
undefined8 M1248_002279c8(MobyInstance *param_1);
void M1248_00227a78(int param_1);
void M1248_00227ae0(int param_1);
void M1248_00227b48(void);
longlong M1248_00227b6c(int param_1);
void M1248_00227bac(void);
undefined4 * UpdateMoby_1248(MobyInstance *moby);
