#pragma once
// game/update/moby1032.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073fdbc; /* 0x73fdbc */
extern undefined4 DAT_0073fde0; /* 0x73fde0 */
extern undefined4 DAT_0073fde4; /* 0x73fde4 */
extern undefined4 DAT_00e5efec; /* 0xe5efec */

// ---- functions
void M1032_00190b38(void);
bool M1032_00190b58(int param_1);
bool M1032_00190bd8(int param_1);
void M1032_00190c70(int param_1);
MobyInstance * UpdateMoby_1032(MobyInstance *moby);
