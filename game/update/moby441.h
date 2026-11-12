#pragma once
// game/update/moby441.h
#include "types.h"
#include "game/mobyfunc.h"

// ---- globals
extern undefined4 DAT_00841efc; /* 0x841efc */
extern undefined4 DAT_00841f20; /* 0x841f20 */
extern undefined4 DAT_00841f24; /* 0x841f24 */
extern undefined4 DAT_00841f28; /* 0x841f28 */
extern undefined4 DAT_00841f38; /* 0x841f38 */
extern undefined4 DAT_00841f3c; /* 0x841f3c */
extern undefined4 DAT_00841f40; /* 0x841f40 */

// ---- functions
int FUN_00384148(int param_1);
void M465_0038417c(void);
void UpdateMoby_441(MobyInstance *moby);
MobyInstance * M465_003849b8 (int param_1,MOBY_OCLASSES param_2,undefined8 param_3,undefined8 param_4);
