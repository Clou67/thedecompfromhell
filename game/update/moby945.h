#pragma once
// game/update/moby945.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f4d88; /* 0x8f4d88 */
extern undefined4 DAT_008f4d8c; /* 0x8f4d8c */
extern undefined4 DAT_008f4d90; /* 0x8f4d90 */
extern undefined4 DAT_008f4d94; /* 0x8f4d94 */
extern undefined4 DAT_008f4da0; /* 0x8f4da0 */
extern undefined4 DAT_008f4da4; /* 0x8f4da4 */
extern undefined4 DAT_008f4e0c; /* 0x8f4e0c */
extern undefined4 DAT_010e47d0; /* 0x10e47d0 */
extern undefined4 DAT_010e47d4; /* 0x10e47d4 */

// ---- functions
void M945_004c6b80(int param_1);
void M945_004c705c(void);
undefined8 M945_004c7060(int param_1);
void M945_004c709c(void);
MobyInstance * UpdateMoby_945(MobyInstance *moby);
