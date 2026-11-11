#pragma once
// game/update/moby249.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ffad8; /* 0x7ffad8 */
extern undefined4 DAT_007ffafc; /* 0x7ffafc */
extern undefined4 DAT_007ffb04; /* 0x7ffb04 */
extern undefined4 DAT_007ffb08; /* 0x7ffb08 */
extern undefined4 DAT_007ffb0c; /* 0x7ffb0c */
extern undefined4 DAT_007ffb18; /* 0x7ffb18 */
extern undefined4 DAT_007ffb68; /* 0x7ffb68 */
extern pointer PTR_DAT_007ffb00; /* 0x7ffb00 */

// ---- functions
void M249_00316008(void);
void UpdateMoby_249(MobyInstance *moby);
void M249_003165ec(void);
