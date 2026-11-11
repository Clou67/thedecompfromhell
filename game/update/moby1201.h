#pragma once
// game/update/moby1201.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007663b0; /* 0x7663b0 */
extern undefined4 DAT_007663e0; /* 0x7663e0 */
extern undefined4 DAT_007663e4; /* 0x7663e4 */
extern undefined4 DAT_007663f0; /* 0x7663f0 */
extern undefined4 DAT_007663f4; /* 0x7663f4 */
extern undefined4 DAT_007663f8; /* 0x7663f8 */
extern undefined4 DAT_007663fc; /* 0x7663fc */

// ---- functions
void M1201_001f956c(int param_1);
void M1201_001f95d4(void);
void UpdateMoby_1201(MobyInstance *moby);
