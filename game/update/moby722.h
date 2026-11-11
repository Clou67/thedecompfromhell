#pragma once
// game/update/moby722.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00434e5c; /* 0x434e5c */
extern undefined4 DAT_00859fe0; /* no defined data */
extern undefined4 DAT_0085a000; /* 0x85a000 */
extern undefined4 DAT_0085a004; /* 0x85a004 */
extern undefined4 DAT_0085a008; /* 0x85a008 */

// ---- functions
MobyInstance * FUN_00434898(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
uint M722_00434a88 (double param_1,double param_2,MobyInstance *param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8);
void UpdateMoby_722(MobyInstance *moby);
