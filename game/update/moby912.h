#pragma once
// game/update/moby912.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004ad888; /* 0x4ad888 */
extern undefined4 DAT_008f40e8; /* 0x8f40e8 */
extern undefined4 DAT_008f410c; /* 0x8f410c */
extern undefined4 DAT_008f4110; /* 0x8f4110 */
extern undefined4 DAT_008f4120; /* 0x8f4120 */
extern undefined4 DAT_008f4124; /* 0x8f4124 */
extern undefined4 DAT_008f4130; /* 0x8f4130 */
extern undefined4 DAT_008f4134; /* 0x8f4134 */
extern undefined4 DAT_008f413c; /* 0x8f413c */
extern undefined4 DAT_008f4140; /* 0x8f4140 */

// ---- functions
void FUN_004ad264(longlong param_1);
void FUN_004ad2bc(longlong param_1);
void M912_004ad308(void);
void M912_004ad348(MobyInstance *param_1);
void UpdateMoby_912(MobyInstance *moby);
