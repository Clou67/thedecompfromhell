#pragma once
// game/update/moby939.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008f4cb0; /* 0x8f4cb0 */
extern undefined4 DAT_008f4cd4; /* 0x8f4cd4 */
extern undefined4 DAT_008f4cd8; /* 0x8f4cd8 */
extern undefined4 DAT_008f4cdc; /* 0x8f4cdc */
extern undefined4 DAT_008f4ce0; /* 0x8f4ce0 */
extern undefined4 DAT_008f4ce4; /* 0x8f4ce4 */
extern undefined4 DAT_008f4ce8; /* 0x8f4ce8 */
extern undefined4 DAT_008f4cec; /* 0x8f4cec */

// ---- functions
void M939_004c467c(void);
void UpdateMoby_939(MobyInstance *moby);
void M939_004c48b8(int param_1);
