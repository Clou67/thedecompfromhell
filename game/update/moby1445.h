#pragma once
// game/update/moby1445.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00280678; /* 0x280678 */
extern undefined4 DAT_007aab30; /* no defined data */
extern undefined4 DAT_007aab3c; /* 0x7aab3c */
extern undefined4 DAT_007aab40; /* 0x7aab40 */
extern undefined4 DAT_007aab44; /* 0x7aab44 */
extern undefined4 DAT_007aab48; /* 0x7aab48 */

// ---- functions
double M1445_00280018(int param_1,float *param_2);
void M1445_002803e8(int param_1);
void UpdateMoby_1445(MobyInstance *moby);
