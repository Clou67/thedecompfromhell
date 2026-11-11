#pragma once
// game/update/moby646.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008547b0; /* 0x8547b0 */
extern undefined4 DAT_00854820; /* 0x854820 */

// ---- functions
void FUN_00400670(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8);
double FUN_00400848(int param_1);
longlong FUN_00400854(int param_1);
void M752_004008a8(double param_1,int *param_2,float *param_3);
void M752_004009b8(void);
void M752_004009d0(void);
void UpdateMoby_646(MobyInstance *moby);
void M752_00400f24(void);
