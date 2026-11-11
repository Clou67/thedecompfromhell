#pragma once
// game/update/moby556.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003b3f88; /* 0x3b3f88 */
extern undefined4 DAT_003b4668; /* 0x3b4668 */
extern undefined4 DAT_008458ec; /* 0x8458ec */
extern undefined4 DAT_00845910; /* 0x845910 */
extern undefined4 DAT_00845914; /* 0x845914 */

// ---- functions
void M556_003b3364(void);
void M556_003b3378(int param_1,longlong param_2,undefined4 *param_3);
void M556_003b33c8(int param_1);
MobyInstance * M556_003b39b0(int param_1);
void M556_003b3e70(int param_1);
void M556_003b3f64(void);
void M556_003b3fd0(MobyInstance *param_1);
void UpdateMoby_556(MobyInstance *moby);
