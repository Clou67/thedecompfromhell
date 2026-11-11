#pragma once
// game/update/moby1236.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007687ec; /* 0x7687ec */
extern undefined4 DAT_00768810; /* 0x768810 */
extern undefined4 DAT_00768814; /* 0x768814 */

// ---- functions
void M1236_00219264(void);
void M1236_00219280(int param_1,longlong param_2);
void M1236_00219370(MobyInstance *param_1);
void UpdateMoby_1236(MobyInstance *moby);
