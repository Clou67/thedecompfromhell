#pragma once
// game/update/moby921.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004b4908; /* 0x4b4908 */
extern undefined4 DAT_008f4504; /* 0x8f4504 */
extern undefined4 DAT_008f4540; /* 0x8f4540 */
extern undefined4 DAT_008f4544; /* 0x8f4544 */
extern undefined4 DAT_008f4548; /* 0x8f4548 */
extern undefined4 DAT_008f454c; /* 0x8f454c */
extern undefined4 DAT_008f4550; /* 0x8f4550 */

// ---- functions
void M921_004b390c(void);
void M921_004b3950(int param_1);
undefined8 M921_004b4020(MobyInstance *param_1);
void M921_004b4670(int param_1);
void UpdateMoby_921(MobyInstance *moby);
