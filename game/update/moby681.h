#pragma once
// game/update/moby681.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008571ac; /* 0x8571ac */

// ---- functions
void M681_00410504(void);
MobyInstance * FUN_00410528(float *param_1,float *param_2,float param_3,float param_4);
void UpdateMoby_681(MobyInstance *moby);
