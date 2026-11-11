#pragma once
// game/update/moby1421.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007a9e80; /* 0x7a9e80 */
extern undefined4 DAT_007a9e84; /* 0x7a9e84 */
extern undefined4 DAT_007a9e88; /* 0x7a9e88 */
extern undefined4 DAT_007a9e8c; /* 0x7a9e8c */
extern undefined4 DAT_007a9edc; /* 0x7a9edc */

// ---- functions
void M1421_00272f40(void);
void M1421_002732d4(void);
void UpdateMoby_1421(MobyInstance *moby);
