#pragma once
// game/update/moby819.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00470b74; /* 0x470b74 */
extern undefined4 DAT_00471928; /* 0x471928 */
extern undefined4 DAT_008778b8; /* 0x8778b8 */

// ---- functions
MobyInstance * FUN_00470690(double param_1,float *param_2,f32 *param_3,float param_4,float param_5, undefined4 param_6);
void UpdateMoby_819(MobyInstance *moby);
void M819_00471910(void);
MobyInstance * M819_00471930 (double param_1,double param_2,float param_3,f32 *param_4,float param_5,f32 *param_6, undefined8 param_7,undefined8 param_8);
