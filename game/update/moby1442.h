#pragma once
// game/update/moby1442.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aa900; /* 0x7aa900 */
extern undefined4 DAT_007aa930; /* 0x7aa930 */
extern undefined4 DAT_007aa934; /* 0x7aa934 */
extern undefined4 DAT_007aa938; /* 0x7aa938 */

// ---- functions
void M1442_0027f360(void);
void M1442_0027f378(int param_1);
void UpdateMoby_1442(MobyInstance *moby);
