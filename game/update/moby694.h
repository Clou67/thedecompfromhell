#pragma once
// game/update/moby694.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00422ea8; /* 0x422ea8 */
extern undefined4 DAT_00857950; /* 0x857950 */
extern undefined4 DAT_00857954; /* 0x857954 */
extern undefined4 DAT_00857958; /* 0x857958 */
extern undefined4 DAT_0085795c; /* 0x85795c */

// ---- functions
undefined8 M694_00421f08(longlong param_1,longlong param_2,float *param_3,float *param_4);
void M694_004226b8(int param_1,int param_2,float *param_3);
void M694_00422828(int param_1,int param_2);
void M694_00422aa0(int param_1,int param_2,float *param_3,float *param_4);
void UpdateMoby_694(MobyInstance *moby);
