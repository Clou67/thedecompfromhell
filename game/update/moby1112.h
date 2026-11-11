#pragma once
// game/update/moby1112.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001d2200; /* 0x1d2200 */
extern undefined4 DAT_0076445c; /* 0x76445c */

// ---- functions
void M1112_001d216c(void);
void M1112_001d2188(MobyInstance *param_1,undefined8 param_2);
void UpdateMoby_1112(void *this_,MobyInstance *moby);
