#pragma once
// game/update/moby454.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00842020; /* 0x842020 */

// ---- functions
void M454_00388c24(void);
MobyInstance * M454_00388c58 (double param_1,double param_2,double param_3,float *param_4,int param_5);
void UpdateMoby_454(MobyInstance *moby);
