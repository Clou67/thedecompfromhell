#pragma once
// game/update/moby923.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004b6e9c; /* 0x4b6e9c */
extern undefined4 DAT_008f45e8; /* 0x8f45e8 */
extern undefined4 DAT_008f45ec; /* 0x8f45ec */
extern undefined4 DAT_008f45f0; /* 0x8f45f0 */
extern undefined4 DAT_008f45f4; /* 0x8f45f4 */
extern undefined4 DAT_008f45f8; /* 0x8f45f8 */

// ---- functions
void FUN_004b62f8(int param_1);
void FUN_004b6304(MobyInstance *param_1);
void M923_004b63a8(void);
undefined8 M923_004b66b8(int param_1);
void M923_004b6a40(int param_1);
void M923_004b6b88(int param_1);
void UpdateMoby_923(MobyInstance *moby);
