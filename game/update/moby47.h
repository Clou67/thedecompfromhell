#pragma once
// game/update/moby47.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00398cdc; /* 0x398cdc */
extern undefined4 DAT_00842dd0; /* 0x842dd0 */
extern undefined4 DAT_00842dd8; /* 0x842dd8 */
extern undefined4 DAT_00842ddc; /* 0x842ddc */

// ---- functions
bool M47_003988e8(int param_1,int *param_2);
void M47_00398ac0(int *param_1);
void M47_00398ce8(MobyInstance *param_1);
void UpdateMoby_47(MobyInstance *moby);
