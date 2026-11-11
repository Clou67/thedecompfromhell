#pragma once
// game/update/moby877.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008c8050; /* 0x8c8050 */
extern undefined4 DAT_008c8054; /* 0x8c8054 */
extern undefined4 DAT_008c8058; /* 0x8c8058 */

// ---- functions
void M877_0049eaa0(int param_1);
void M877_0049ec80(int param_1,float *param_2,undefined4 *param_3);
void UpdateMoby_877(MobyInstance *moby);
