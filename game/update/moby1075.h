#pragma once
// game/update/moby1075.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001b5810; /* 0x1b5810 */
extern undefined4 DAT_00757ea8; /* 0x757ea8 */
extern undefined4 DAT_00757ecc; /* 0x757ecc */
extern undefined4 DAT_00757ed0; /* 0x757ed0 */
extern undefined4 DAT_00757ed4; /* 0x757ed4 */
extern undefined4 DAT_00757ee0; /* 0x757ee0 */
extern undefined4 DAT_00757ee4; /* 0x757ee4 */

// ---- functions
void M1075_001b5258(void);
undefined8 M1075_001b5270(int param_1);
void M1075_001b5398(MobyInstance *param_1);
void UpdateMoby_1075(MobyInstance *moby);
