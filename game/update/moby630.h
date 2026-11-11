#pragma once
// game/update/moby630.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00854310; /* 0x854310 */

// ---- functions
void M630_003efa94(MobyInstance *param_1);
void M630_003efaec(int param_1);
undefined8 M630_003efb44 (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4);
void M630_003efc14(int param_1);
longlong M630_003efc4c(int param_1);
void M630_003efc8c(void);
void UpdateMoby_630(MobyInstance *moby);
