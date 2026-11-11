#pragma once
// game/update/moby462.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00842b80; /* 0x842b80 */
extern undefined4 DAT_00842b84; /* 0x842b84 */
extern undefined4 DAT_010c9240; /* 0x10c9240 */

// ---- functions
void M462_00392ee8(int param_1);
ulonglong M462_00393068(MobyInstance *param_1);
void M462_00393420(int param_1);
void UpdateMoby_462(MobyInstance *moby);
