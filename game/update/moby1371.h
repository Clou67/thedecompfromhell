#pragma once
// game/update/moby1371.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0025d0b8; /* 0x25d0b8 */
extern undefined4 DAT_0079c058; /* 0x79c058 */

// ---- functions
void FUN_0025c7f8(double param_1,float param_2,undefined8 param_3,f32 *param_4,float *param_5);
void M1371_0025cd04(void);
MobyInstance * FUN_0025cd18(MobyInstance *param_1);
void FUN_0025ce40(undefined8 param_1,MobyInstance *param_2);
void UpdateMoby_1371(MobyInstance *moby);
