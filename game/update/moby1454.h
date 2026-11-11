#pragma once
// game/update/moby1454.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00283980; /* 0x283980 */
extern undefined4 DAT_007aac14; /* 0x7aac14 */
extern undefined4 DAT_007aac38; /* 0x7aac38 */
extern undefined4 DAT_007aac40; /* 0x7aac40 */

// ---- functions
void M1454_00283428(int param_1);
void M1454_00283434(void);
void M1454_00283468(int param_1);
void M1454_002839d8(MobyInstance *param_1);
void UpdateMoby_1454(MobyInstance *moby);
