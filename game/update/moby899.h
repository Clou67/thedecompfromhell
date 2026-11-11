#pragma once
// game/update/moby899.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008cc1bc; /* 0x8cc1bc */
extern undefined4 DAT_010e4500; /* 0x10e4500 */

// ---- functions
MobyInstance * M899_004a4540(double param_1,int *param_2);
void UpdateMoby_899(MobyInstance *moby);
void M899_004a4a80(int param_1);
