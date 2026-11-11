#pragma once
// game/update/moby444.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00841f4c; /* 0x841f4c */
extern undefined4 DAT_00841f50; /* 0x841f50 */
extern undefined4 DAT_00841f58; /* 0x841f58 */
extern undefined4 DAT_00841f5c; /* 0x841f5c */
extern undefined4 DAT_00841fac; /* 0x841fac */
extern undefined4 DAT_010c51c8; /* 0x10c51c8 */

// ---- functions
void M444_00384adc(int param_1);
void M444_00385660(int param_1);
ulonglong M444_00385a50(MobyInstance *param_1);
void UpdateMoby_444(MobyInstance *moby);
void M444_003874d0(void);
