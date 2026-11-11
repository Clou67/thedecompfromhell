#pragma once
// game/update/moby568.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003bc720; /* 0x3bc720 */
extern undefined4 DAT_00845d10; /* 0x845d10 */
extern undefined4 DAT_00845d34; /* no defined data */
extern undefined4 DAT_00845d40; /* 0x845d40 */

// ---- functions
void M568_003bc494(void);
void M568_003bc4d0(int param_1);
void UpdateMoby_568(MobyInstance *moby);
