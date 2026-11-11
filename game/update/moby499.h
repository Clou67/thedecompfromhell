#pragma once
// game/update/moby499.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00843444; /* 0x843444 */
extern undefined4 DAT_00843448; /* 0x843448 */
extern undefined4 DAT_00843454; /* 0x843454 */
extern undefined4 DAT_00843458; /* 0x843458 */
extern undefined4 DAT_0084345c; /* 0x84345c */
extern undefined4 DAT_00843460; /* 0x843460 */
extern undefined4 DAT_00843464; /* 0x843464 */
extern undefined4 DAT_00843468; /* 0x843468 */
extern undefined4 DAT_0084346c; /* 0x84346c */
extern undefined4 DAT_00843470; /* 0x843470 */

// ---- functions
MobyInstance * FUN_003a38c8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
MobyInstance * UpdateMoby_499(MobyInstance *moby);
void M499_003a39a8(int param_1);
