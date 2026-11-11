#pragma once
// game/update/moby1231.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00214a64; /* 0x214a64 */
extern undefined4 DAT_007685bc; /* 0x7685bc */
extern undefined4 DAT_007685c0; /* 0x7685c0 */
extern undefined4 DAT_007685c4; /* 0x7685c4 */
extern undefined4 DAT_007685c8; /* 0x7685c8 */
extern undefined4 DAT_007685cc; /* 0x7685cc */
extern undefined4 DAT_007685d0; /* 0x7685d0 */
extern undefined4 DAT_0076860c; /* 0x76860c */
extern undefined4 DAT_00768610; /* 0x768610 */

// ---- functions
undefined8 FUN_00214100(longlong param_1);
ulonglong FUN_0021416c(int param_1);
void M1231_00214198(MobyInstance *param_1);
void UpdateMoby_1231(MobyInstance *moby);
