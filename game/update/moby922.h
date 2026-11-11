#pragma once
// game/update/moby922.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004b5bac; /* 0x4b5bac */
extern undefined4 DAT_008f45a4; /* 0x8f45a4 */
extern undefined4 DAT_008f45d8; /* 0x8f45d8 */
extern undefined4 DAT_008f45dc; /* 0x8f45dc */

// ---- functions
void M922_004b56cc(void);
void M922_004b5710(void);
void UpdateMoby_922(MobyInstance *moby);
