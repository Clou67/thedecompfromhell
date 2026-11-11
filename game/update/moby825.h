#pragma once
// game/update/moby825.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00877a30; /* 0x877a30 */
extern undefined4 DAT_00877a34; /* 0x877a34 */
extern undefined4 DAT_00877a38; /* 0x877a38 */
extern undefined4 DAT_00877a40; /* 0x877a40 */
extern undefined4 DAT_00877a44; /* 0x877a44 */
extern undefined4 DAT_00877a60; /* 0x877a60 */
extern undefined4 DAT_00877a70; /* 0x877a70 */
extern undefined4 DAT_00877ab0; /* 0x877ab0 */
extern undefined4 DAT_010d99dc; /* 0x10d99dc */
extern undefined4 DAT_010d99e0; /* 0x10d99e0 */
extern pointer PTR_DAT_00877a3c; /* 0x877a3c */

// ---- functions
void M825_00478e68(int param_1);
void UpdateMoby_825(MobyInstance *moby);
