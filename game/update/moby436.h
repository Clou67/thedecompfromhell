#pragma once
// game/update/moby436.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00841780; /* 0x841780 */
extern undefined4 DAT_00841784; /* 0x841784 */
extern undefined4 DAT_00841788; /* 0x841788 */
extern undefined4 DAT_0084178c; /* 0x84178c */
extern undefined4 DAT_008417dc; /* 0x8417dc */

// ---- functions
void M436_00374e80(int param_1);
MobyInstance * FUN_00375430(double param_1,double param_2,float *param_3,undefined4 param_4,undefined8 param_5, undefined8 param_6,undefined4 *param_7);
void M436_003758e0(void);
void UpdateMoby_436_UmbrisInfobot___(MobyInstance *moby);
