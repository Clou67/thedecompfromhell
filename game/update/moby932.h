#pragma once
// game/update/moby932.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004bf178; /* 0x4bf178 */
extern undefined4 DAT_008f4a24; /* 0x8f4a24 */
extern undefined4 DAT_008f4a48; /* 0x8f4a48 */
extern undefined4 DAT_008f4a4c; /* 0x8f4a4c */
extern undefined4 DAT_008f4a50; /* 0x8f4a50 */
extern undefined4 DAT_008f4a54; /* 0x8f4a54 */
extern undefined4 DAT_008f4a58; /* 0x8f4a58 */

// ---- functions
void M932_004be8c0(void);
void M932_004be908(MobyInstance *param_1);
void UpdateMoby_932(MobyInstance *moby);
