#pragma once
// game/update/moby1193.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001f1f70; /* 0x1f1f70 */
extern undefined4 DAT_007660a8; /* 0x7660a8 */
extern undefined4 DAT_007660cc; /* 0x7660cc */
extern undefined4 DAT_007660d0; /* 0x7660d0 */
extern undefined4 DAT_007660d4; /* 0x7660d4 */
extern undefined4 DAT_007660d8; /* 0x7660d8 */
extern undefined4 DAT_007660e4; /* 0x7660e4 */
extern undefined4 DAT_007660e8; /* 0x7660e8 */

// ---- functions
void M1193_001f1f58(void);
void UpdateMoby_1193(MobyInstance *moby);
