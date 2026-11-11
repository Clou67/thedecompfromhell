#pragma once
// game/update/moby293.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00800934; /* 0x800934 */
extern undefined4 DAT_00810240; /* no defined data */
extern pointer32 PTR_M293_00331468_0070c028; /* 0x70c028 */

// ---- functions
void M293_00331450(void);
void M293_00331468(void);
void UpdateMoby_293(MobyInstance *moby);
