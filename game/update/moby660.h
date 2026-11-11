#pragma once
// game/update/moby660.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854c2c; /* 0x854c2c */
extern undefined4 DAT_00854c50; /* 0x854c50 */
extern undefined4 DAT_00854c54; /* 0x854c54 */
extern undefined4 DAT_00854c58; /* 0x854c58 */

// ---- functions
void M660_00407eec(void);
void UpdateMoby_660(MobyInstance *moby);
