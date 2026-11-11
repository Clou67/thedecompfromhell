#pragma once
// game/update/moby650.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008548c4; /* 0x8548c4 */
extern undefined4 DAT_008548e8; /* 0x8548e8 */
extern undefined4 DAT_010cbbe0; /* 0x10cbbe0 */

// ---- functions
void M650_00401de4(int param_1);
void M650_00401e30(void);
void UpdateMoby_650(MobyInstance *moby);
