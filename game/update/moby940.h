#pragma once
// game/update/moby940.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004c55c0; /* 0x4c55c0 */
extern undefined4 DAT_008f4d4c; /* 0x8f4d4c */
extern undefined4 DAT_008f4d70; /* 0x8f4d70 */
extern undefined4 DAT_008f4d74; /* 0x8f4d74 */
extern undefined4 DAT_008f4d78; /* 0x8f4d78 */
extern undefined4 DAT_008f4d7c; /* 0x8f4d7c */
extern undefined4 DAT_008f4d80; /* 0x8f4d80 */
extern undefined4 DAT_008f4d84; /* 0x8f4d84 */
extern pointer32 PTR_M945_004c6b80_0070f848; /* 0x70f848 */

// ---- functions
void M940_004c4cf0(void);
void M940_004c4d08(int param_1);
void M940_004c4d44(int param_1);
longlong M940_004c4d78(int param_1);
void M940_004c4df8(MobyInstance *param_1);
void UpdateMoby_940(MobyInstance *moby);
