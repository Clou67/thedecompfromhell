#pragma once
// game/update/moby1567.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007abee0; /* 0x7abee0 */
extern undefined4 DAT_007abf00; /* 0x7abf00 */
extern undefined4 DAT_007ac320; /* 0x7ac320 */
extern undefined4 DAT_007ac324; /* 0x7ac324 */
extern undefined4 DAT_007ac74c; /* 0x7ac74c */
extern undefined4 DAT_007ac750; /* 0x7ac750 */
extern undefined4 DAT_007ac754; /* 0x7ac754 */
extern undefined4 DAT_007ac758; /* 0x7ac758 */
extern undefined4 DAT_007ac75c; /* 0x7ac75c */
extern undefined4 DAT_007ac760; /* 0x7ac760 */
extern undefined4 DAT_007ac764; /* 0x7ac764 */
extern undefined4 DAT_007ac768; /* 0x7ac768 */
extern undefined4 DAT_00fae020; /* 0xfae020 */
extern undefined4 DAT_00fae024; /* 0xfae024 */
extern undefined4 DAT_00fae028; /* 0xfae028 */
extern undefined4 DAT_00fae440; /* 0xfae440 */
extern undefined4 DAT_00fae444; /* 0xfae444 */
extern undefined4 DAT_00fae700; /* 0xfae700 */
extern pointer PTR_DAT_007ac740; /* 0x7ac740 */
extern pointer PTR_DAT_007ac744; /* 0x7ac744 */
extern pointer PTR_DAT_007ac748; /* 0x7ac748 */
extern pointer32 PTR_M1567_0029db20_0070aae0; /* 0x70aae0 */

// ---- functions
void M1567_0029db20(int param_1);
void UpdateMoby_1567(MobyInstance *moby);
