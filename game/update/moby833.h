#pragma once
// game/update/moby833.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00480870; /* 0x480870 */
extern undefined4 DAT_008acc8c; /* 0x8acc8c */
extern undefined4 DAT_008accb8; /* 0x8accb8 */
extern undefined4 _DAT_004808c0; /* direct read */
extern undefined4 _DAT_004808d0; /* direct read */
extern undefined4 _DAT_004808e0; /* direct read */
extern undefined4 _DAT_00480900; /* direct read */
extern undefined4 _DAT_00480910; /* direct read */

// ---- functions
void M833_004804b4(void);
MobyInstance * FUN_004804e0(double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6, undefined4 param_7);
void UpdateMoby_833(MobyInstance *moby);
