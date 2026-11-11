#pragma once
// game/update/moby794.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00873dbc; /* 0x873dbc */
extern undefined4 DAT_00873e2c; /* 0x873e2c */
extern pointer32 PTR_M800_00465380_0070eaf8; /* 0x70eaf8 */

// ---- functions
void M794_004603c4(void);
ulonglong M794_004603e0(longlong param_1,undefined8 param_2);
void UpdateMoby_794(MobyInstance *moby);
void M794_00460d20(void);
void M8_00460d48(int param_1);
undefined8 M8_00460fd0(void *param_1,int param_2);
