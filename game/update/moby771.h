#pragma once
// game/update/moby771.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00454f78; /* 0x454f78 */
extern undefined4 DAT_00873670; /* 0x873670 */
extern undefined4 DAT_00873770; /* 0x873770 */
extern undefined4 DAT_00873774; /* 0x873774 */
extern undefined4 DAT_00873790; /* 0x873790 */
extern undefined4 DAT_008737ec; /* 0x8737ec */

// ---- functions
undefined8 FUN_00454348(longlong param_1,float *param_2);
void M771_00454680(int param_1);
void M771_00454c90(void);
MobyInstance * M771_00454cb0 (double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6, float param_7,float param_8);
void UpdateMoby_771(MobyInstance *moby);
