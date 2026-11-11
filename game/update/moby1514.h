#pragma once
// game/update/moby1514.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ab384; /* 0x7ab384 */
extern undefined4 DAT_007ab3a8; /* 0x7ab3a8 */
extern undefined4 DAT_007ab3ac; /* 0x7ab3ac */
extern undefined4 DAT_007ab3c8; /* 0x7ab3c8 */
extern undefined4 DAT_007ab3cc; /* 0x7ab3cc */
extern undefined4 DAT_007ab3d0; /* 0x7ab3d0 */
extern undefined4 DAT_007ab420; /* 0x7ab420 */
extern undefined4 DAT_00fadb50; /* 0xfadb50 */
extern undefined4 DAT_00fadb54; /* 0xfadb54 */

// ---- functions
void M1514_00290e8c(int param_1);
void M1514_00291240(void);
MobyInstance * UpdateMoby_1514(MobyInstance *moby);
