#pragma once
// game/update/moby1130.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00764870; /* 0x764870 */
extern undefined4 DAT_00764894; /* 0x764894 */
extern undefined1 DAT_00a1bf81; /* 0xa1bf81 */
extern undefined4 DAT_00a1bfa0; /* 0xa1bfa0 */
extern undefined4 DAT_00a1bfa4; /* 0xa1bfa4 */
extern undefined4 DAT_00a1bfa8; /* 0xa1bfa8 */

// ---- functions
void M1130_001d7f20(void);
void M1130_001d7f38(int param_1);
void UpdateMoby_1130(MobyInstance *moby);
