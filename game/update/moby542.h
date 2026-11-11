#pragma once
// game/update/moby542.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008455a4; /* 0x8455a4 */
extern undefined4 DAT_008455a8; /* 0x8455a8 */
extern undefined4 DAT_008455b0; /* 0x8455b0 */
extern undefined4 DAT_0084563c; /* 0x84563c */

// ---- functions
void FUN_003aef30(longlong param_1);
void M542_003aefd0(int param_1);
void M542_003af42c(void);
void M542_003af440(int param_1);
void M542_003af4f0(int param_1);
void UpdateMoby_542(MobyInstance *moby);
