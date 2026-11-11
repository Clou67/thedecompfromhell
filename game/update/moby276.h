#pragma once
// game/update/moby276.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00325a0c; /* 0x325a0c */
extern undefined4 DAT_008001a0; /* 0x8001a0 */
extern undefined4 DAT_00800210; /* 0x800210 */

// ---- functions
void M1299_003258b4(void);
longlong M1299_003258d0(int param_1,int param_2);
void UpdateMoby_276(MobyInstance *moby);
void M1299_003261c4(void);
MobyInstance * M1299_003261d8 (double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
