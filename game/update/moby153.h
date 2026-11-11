#pragma once
// game/update/moby153.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00293b88; /* 0x293b88 */
extern undefined4 DAT_007350c4; /* 0x7350c4 */
extern undefined4 DAT_007350c8; /* 0x7350c8 */
extern undefined4 _DAT_007ab5a0; /* direct read */
extern undefined4 _DAT_007ab5b0; /* direct read */
extern undefined4 _DAT_007ab5c0; /* direct read */
extern undefined4 _DAT_007ab5d0; /* direct read */
extern undefined4 _DAT_007ab5e0; /* direct read */
extern undefined4 _DAT_007ab5f0; /* direct read */
extern undefined4 _DAT_007ab600; /* direct read */
extern undefined4 _DAT_007ab610; /* direct read */
extern undefined4 _DAT_007ab620; /* direct read */
extern undefined4 _DAT_007ab630; /* direct read */

// ---- functions
MobyInstance * FUN_00292d88(double param_1,double param_2,double param_3,double param_4,double param_5,f32 param_6, f32 *param_7,undefined8 param_8,undefined8 param_9,MobyInstance *param_10);
double FUN_002931b8(int param_1);
void M153_00293248(int param_1,f32 *param_2,MobyInstance *param_3);
void UpdateMoby_153(MobyInstance *moby);
