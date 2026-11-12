#pragma once
// game/update/moby1516.h
#include "types.h"
#include "game/mobyfunc.h"

// ---- globals
extern undefined4 DAT_007ab444; /* 0x7ab444 */
extern undefined4 DAT_007ab460; /* 0x7ab460 */
extern undefined4 DAT_007ab464; /* 0x7ab464 */
extern undefined4 DAT_00fadb60; /* 0xfadb60 */

// ---- functions
MobyInstance * FUN_0029125c(int param_1);
MobyInstance * FUN_00291320(double param_1,double param_2,int param_3,int *param_4,f32 *param_5,f32 *param_6, MOBY_OCLASSES param_7,undefined8 param_8,undefined8 param_9,undefined2 param_10);
void UpdateMoby_1516(MobyInstance *moby);
MobyInstance * M1516_00291828(int param_1,int param_2);
