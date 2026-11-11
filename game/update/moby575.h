#pragma once
// game/update/moby575.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003c6c30; /* 0x3c6c30 */
extern undefined4 DAT_00846038; /* 0x846038 */

// ---- functions
void M575_003c656c(void);
void M575_003c65c8 (double param_1,float *param_2,undefined4 *param_3,float *param_4,float *param_5, undefined8 param_6);
void UpdateMoby_575(MobyInstance *moby);
