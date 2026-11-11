#pragma once
// game/update/moby1827.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b7f18; /* 0x7b7f18 */
extern undefined4 DAT_007b7f1c; /* 0x7b7f1c */
extern undefined4 DAT_007b7f20; /* 0x7b7f20 */
extern undefined4 DAT_007b7f24; /* 0x7b7f24 */
extern undefined4 DAT_007b7f28; /* 0x7b7f28 */
extern undefined4 DAT_007b7f30; /* 0x7b7f30 */
extern undefined4 DAT_007b7f34; /* 0x7b7f34 */
extern undefined4 DAT_007b7f38; /* 0x7b7f38 */
extern undefined4 DAT_007b7fa0; /* 0x7b7fa0 */
extern undefined4 DAT_010a0bd0; /* 0x10a0bd0 */
extern undefined4 DAT_010a0bd4; /* 0x10a0bd4 */

// ---- functions
ulonglong M1827_002c11e8(int param_1);
void M1827_002c19a8(void);
void UpdateMoby_1827(MobyInstance *moby);
