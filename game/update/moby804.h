#pragma once
// game/update/moby804.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007bd344; /* 0x7bd344 */

// ---- functions
MobyInstance * M804_00465968(int param_1,int param_2);
void UpdateMoby_804(MobyInstance *moby);
