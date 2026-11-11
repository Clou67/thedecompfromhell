#pragma once
// game/update/moby910.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004aacd0; /* 0x4aacd0 */
extern undefined4 DAT_008f3f90; /* 0x8f3f90 */
extern undefined4 DAT_008f3fb4; /* 0x8f3fb4 */
extern undefined4 DAT_008f3fb8; /* 0x8f3fb8 */
extern undefined4 DAT_008f3fbc; /* 0x8f3fbc */
extern undefined4 DAT_008f3fc0; /* 0x8f3fc0 */
extern undefined4 DAT_008f3fc8; /* 0x8f3fc8 */
extern undefined4 DAT_008f3fcc; /* 0x8f3fcc */
extern undefined4 DAT_008f3fd8; /* 0x8f3fd8 */
extern undefined4 DAT_008f3fdc; /* 0x8f3fdc */
extern undefined4 DAT_008f3fe0; /* 0x8f3fe0 */
extern undefined4 DAT_008f3fe4; /* 0x8f3fe4 */
extern undefined4 DAT_008f3fe8; /* 0x8f3fe8 */

// ---- functions
void M910_004a9d64(void);
double M910_004a9d90(int param_1);
void M910_004aa488(int param_1);
void M910_004aa510(MobyInstance *param_1);
void UpdateMoby_910(MobyInstance *moby);
