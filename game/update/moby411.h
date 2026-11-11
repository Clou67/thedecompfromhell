#pragma once
// game/update/moby411.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840c80; /* 0x840c80 */
extern undefined4 DAT_00840c84; /* 0x840c84 */
extern undefined4 DAT_00840c88; /* 0x840c88 */
extern undefined4 DAT_00840c8c; /* 0x840c8c */
extern undefined4 DAT_00840c94; /* 0x840c94 */
extern undefined4 DAT_00840c98; /* 0x840c98 */
extern undefined4 DAT_00840c9c; /* 0x840c9c */
extern undefined4 DAT_00840ca0; /* 0x840ca0 */
extern undefined4 DAT_010c5130; /* 0x10c5130 */

// ---- functions
void M411_003667a0(int param_1);
void M411_00366818(undefined8 param_1,int param_2);
MobyInstance * UpdateMoby_411(MobyInstance *moby);
