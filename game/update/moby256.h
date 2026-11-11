#pragma once
// game/update/moby256.h
#include "types.h"

// ---- globals
extern undefined4 DAT_000ed88c; /* 0xed88c */
extern undefined4 DAT_00728fc4; /* 0x728fc4 */
extern undefined4 DAT_00728ff0; /* 0x728ff0 */
extern undefined4 _DAT_00729070; /* direct read */
extern undefined4 _DAT_00729080; /* direct read */
extern undefined4 _DAT_00729090; /* direct read */
extern undefined4 _DAT_007290a0; /* direct read */
extern undefined4 _DAT_007290b0; /* direct read */

// ---- functions
void SECTION_HEADER_MOBY256(void);
MobyInstance * Spawn_Moby256_Rocket (double param_1,double param_2,double param_3,double param_4,double param_5,f32 param_6, f32 *param_7,undefined8 param_8,undefined8 param_9,MobyInstance *param_10);
double M256_000ed830(int param_1);
void UpdateMoby_256_GC_Rocket(MobyInstance *moby);
