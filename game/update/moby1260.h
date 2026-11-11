#pragma once
// game/update/moby1260.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007713cc; /* 0x7713cc */
extern undefined4 DAT_00775020; /* no defined data */
extern pointer32 PTR_M1260_0022b828_00709980; /* 0x709980 */

// ---- functions
void M1260_0022b814(void);
void M1260_0022b828(void);
void UpdateMoby_1260(MobyInstance *moby);
