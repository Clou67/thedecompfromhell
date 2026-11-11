#pragma once
// game/update/moby1380.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0079c6cc; /* 0x79c6cc */
extern undefined4 DAT_0079c6f0; /* 0x79c6f0 */

// ---- functions
void M1380_00265a10(void);
void M1380_00265a28(int param_1);
void M1380_00265b38(int param_1,float *param_2,undefined4 *param_3);
void UpdateMoby_1380(MobyInstance *moby);
