#pragma once
// game/update/moby908.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004a87f0; /* 0x4a87f0 */
extern undefined4 DAT_008f3eb8; /* 0x8f3eb8 */
extern undefined4 DAT_008f3ebc; /* 0x8f3ebc */
extern undefined4 DAT_008f3ec0; /* 0x8f3ec0 */
extern undefined4 DAT_008f3ec4; /* 0x8f3ec4 */
extern undefined4 DAT_008f3ec8; /* 0x8f3ec8 */

// ---- functions
void M908_004a79c0(int param_1);
double M908_004a7fc0(int param_1);
void M908_004a8558(int param_1);
void UpdateMoby_908(MobyInstance *moby);
