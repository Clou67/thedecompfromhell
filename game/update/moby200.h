#pragma once
// game/update/moby200.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00081020; /* 0x81020 */
extern undefined4 DAT_00857a30; /* 0x857a30 */

// ---- functions
void M1807_00425508(void);
MobyInstance * FUN_00425540(double param_1,double param_2,double param_3,double param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8,MOBY_OCLASSES param_9, undefined8 param_10,undefined4 param_11);
void UpdateMoby_200(MobyInstance *moby);
int32_t M1807_00426178(float *param_1);
int32_t M1807_0042664c(float *param_1);
ulonglong M1807_004272d8(double param_1,float *param_2,ulonglong param_3);
