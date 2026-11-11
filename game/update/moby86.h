#pragma once
// game/update/moby86.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008c7d58; /* no defined data */
extern undefined4 DAT_008c7d5c; /* 0x8c7d5c */
extern undefined4 DAT_008c7d70; /* 0x8c7d70 */
extern undefined4 DAT_008c7d74; /* 0x8c7d74 */
extern undefined1 DAT_010e04b0; /* 0x10e04b0 */

// ---- functions
longlong M86_00496420 (double param_1,int param_2,int *param_3,longlong param_4,longlong param_5);
void UpdateMoby_86(MobyInstance *moby);
