#pragma once
// game/update/moby632.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003f2510; /* 0x3f2510 */
extern undefined4 DAT_0085438c; /* 0x85438c */
extern undefined4 DAT_008543b4; /* 0x8543b4 */
extern undefined4 _DAT_003f2550; /* direct read */
extern undefined4 _DAT_003f2560; /* direct read */
extern undefined4 _DAT_003f2570; /* direct read */
extern undefined4 _DAT_003f2590; /* direct read */
extern undefined4 _DAT_003f25a0; /* direct read */

// ---- functions
void M632_003f24f0(void);
void UpdateMoby_632(MobyInstance *moby);
