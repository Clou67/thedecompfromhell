#pragma once
// game/update/moby520.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00843704; /* 0x843704 */

// ---- functions
void M520_003ab498(void);
void M520_003ab4e8(undefined8 param_1);
MobyInstance * M520_003ab874(int param_1);
void UpdateMoby_520(MobyInstance *moby);
