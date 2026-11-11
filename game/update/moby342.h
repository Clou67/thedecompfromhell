#pragma once
// game/update/moby342.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0034e20c; /* 0x34e20c */
extern undefined4 DAT_0034ebd0; /* no defined data */
extern undefined4 DAT_008400e8; /* 0x8400e8 */
extern undefined4 DAT_0084010c; /* 0x84010c */
extern undefined4 DAT_00840110; /* 0x840110 */
extern undefined4 DAT_00840114; /* 0x840114 */
extern undefined4 DAT_00840118; /* 0x840118 */
extern undefined4 DAT_0084011c; /* 0x84011c */
extern undefined4 DAT_00840120; /* 0x840120 */
extern undefined4 DAT_00840124; /* 0x840124 */
extern undefined4 DAT_00840128; /* 0x840128 */
extern undefined4 DAT_00840140; /* 0x840140 */

// ---- functions
void M342_0034dce8(void);
void M342_0034dd10(int param_1);
void M342_0034e230(MobyInstance *param_1);
void UpdateMoby_342(MobyInstance *moby);
