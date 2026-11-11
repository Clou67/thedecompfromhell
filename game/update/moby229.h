#pragma once
// game/update/moby229.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff138; /* 0x7ff138 */
extern undefined4 DAT_007ff1a8; /* 0x7ff1a8 */
extern undefined4 DAT_010bb458; /* 0x10bb458 */
extern undefined4 DAT_010bb470; /* 0x10bb470 */

// ---- functions
void M229_002fbcb8(void);
void M229_002fbe58 (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5, float *param_6);
void M229_002fc3f8 (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4);
void UpdateMoby_229(MobyInstance *moby);
void M229_002fd8b8(void);
