#pragma once
// game/update/moby404.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840a80; /* 0x840a80 */
extern undefined4 DAT_00840a84; /* 0x840a84 */
extern undefined4 DAT_00840a88; /* 0x840a88 */
extern undefined4 DAT_00840a8c; /* 0x840a8c */
extern undefined4 DAT_00840ae8; /* 0x840ae8 */

// ---- functions
longlong FUN_00363aa0(int param_1,float *param_2,u8 param_3);
void M405_00363dc8(void);
ulonglong M405_00363df8(longlong param_1,undefined8 param_2);
void UpdateMoby_404(MobyInstance *moby);
