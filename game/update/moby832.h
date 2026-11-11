#pragma once
// game/update/moby832.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008acc18; /* 0x8acc18 */
extern pointer32 PTR_M832_00480000_0070eee0; /* 0x70eee0 */

// ---- functions
void M832_0047ffac(void);
void M832_0047ffdc(void);
void M832_00480000(int param_1);
void UpdateMoby_832(MobyInstance *moby);
