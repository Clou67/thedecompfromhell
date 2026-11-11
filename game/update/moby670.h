#pragma once
// game/update/moby670.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008550dc; /* 0x8550dc */

// ---- functions
void M670_0040bd38(void);
void M670_0040bd50 (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4, undefined8 param_5,float *param_6);
void UpdateMoby_670(MobyInstance *moby);
