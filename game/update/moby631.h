#pragma once
// game/update/moby631.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003f0530; /* 0x3f0530 */
extern undefined4 DAT_00854334; /* 0x854334 */
extern undefined4 DAT_00854338; /* 0x854338 */
extern undefined4 DAT_0085433c; /* 0x85433c */
extern undefined4 _DAT_003f05b0; /* direct read */
extern undefined4 _DAT_003f05c0; /* direct read */
extern undefined4 _DAT_003f05e0; /* direct read */
extern undefined4 _DAT_003f05f0; /* direct read */

// ---- functions
void M631_003f00b8(MobyInstance *param_1);
void UpdateMoby_631(MobyInstance *moby);
