#pragma once
// game/update/moby1077.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00757f34; /* 0x757f34 */
extern undefined4 DAT_00757f58; /* 0x757f58 */
extern undefined4 DAT_00757f5c; /* 0x757f5c */
extern undefined4 DAT_00757f60; /* 0x757f60 */
extern undefined4 DAT_00757f64; /* 0x757f64 */

// ---- functions
undefined8 FUN_001b67d0(int param_1);
bool FUN_001b6870(int param_1);
void M1077_001b688c(int param_1);
void M1077_001b689c(void);
void UpdateMoby_1077(MobyInstance *moby);
