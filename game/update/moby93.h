#pragma once
// game/update/moby93.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f4850; /* 0x8f4850 */
extern undefined4 DAT_008f4874; /* 0x8f4874 */
extern undefined4 DAT_008f4878; /* 0x8f4878 */
extern undefined4 DAT_008f48c8; /* 0x8f48c8 */

// ---- functions
void M990_004bb3d4(void);
void UpdateMoby_93(MobyInstance *moby);
void M990_004bb820(void);
void M990_004bb840(int param_1);
void M990_004bb8b8(int param_1);
