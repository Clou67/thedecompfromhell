#pragma once
// game/update/moby1418.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007a22b8; /* 0x7a22b8 */
extern undefined4 DAT_007a9b80; /* no defined data */
extern pointer32 PTR_M1418_00272c18_0070a490; /* 0x70a490 */

// ---- functions
void M1418_00272c00(void);
void M1418_00272c18(void);
void UpdateMoby_1418(MobyInstance *moby);
