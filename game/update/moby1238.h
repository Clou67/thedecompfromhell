#pragma once
// game/update/moby1238.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00768864; /* 0x768864 */
extern undefined4 DAT_007688d8; /* 0x7688d8 */
extern undefined4 DAT_0076c520; /* no defined data */
extern undefined4 DAT_0076c528; /* 0x76c528 */

// ---- functions
void M1238_0021a074(void);
MobyInstance * FUN_0021a098(double param_1,float *param_2,float *param_3,float param_4);
void UpdateMoby_1238(MobyInstance *moby);
void M1238_0021af44(void);
double M1238_0021af58(void);
void M1238_0021af68(void);
