#pragma once
// game/update/moby234.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff350; /* 0x7ff350 */
extern undefined4 DAT_007ff374; /* 0x7ff374 */
extern undefined4 DAT_007ff378; /* 0x7ff378 */
extern undefined4 DAT_007ff37c; /* 0x7ff37c */

// ---- functions
void M234_003037f0(void);
void M234_00303818(undefined4 param_1);
void M234_003039ac(int param_1);
bool M234_00303a90(int param_1);
void M234_00303ca8(MobyInstance *param_1);
void UpdateMoby_234(MobyInstance *moby);
