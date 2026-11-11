#pragma once
// game/update/moby1488.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ab170; /* no defined data */
extern undefined4 DAT_007ab1b0; /* 0x7ab1b0 */
extern undefined4 DAT_00fada10; /* 0xfada10 */
extern undefined4 DAT_00fada20; /* no defined data */
extern undefined4 DAT_00fada60; /* 0xfada60 */

// ---- functions
void UpdateMoby_1488(MobyInstance *moby);
MobyInstance * M1488_0028cce0 (double param_1,double param_2,int param_3,int *param_4,f32 *param_5,f32 *param_6, MOBY_OCLASSES param_7,undefined8 param_8,undefined8 param_9,undefined2 param_10);
