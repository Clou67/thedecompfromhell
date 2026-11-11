#pragma once
// game/update/moby1215.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00209440; /* 0x209440 */
extern undefined4 DAT_00766930; /* 0x766930 */
extern undefined4 DAT_007669a0; /* 0x7669a0 */

// ---- functions
void M1215_00207ff4(void);
void M1215_00208018(MobyInstance *param_1,longlong param_2,undefined8 param_3);
bool M1215_002082e8 (double param_1,int param_2,float *param_3,float *param_4,undefined8 param_5, undefined8 param_6);
bool M1215_002088c0(double param_1,int param_2,int param_3,float *param_4);
void M1215_00209300 (int param_1,int param_2,int param_3,float *param_4,int param_5,float *param_6);
void UpdateMoby_1215(MobyInstance *moby);
void M1220_0020ab3c(void);
