#pragma once
// game/update/moby352.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840398; /* 0x840398 */

// ---- functions
void M352_00354148(void);
MobyInstance * Spawn_Moby352(int param_1);
void UpdateMoby_352(MobyInstance *moby);
