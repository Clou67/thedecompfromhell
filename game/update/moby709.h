#pragma once
// game/update/moby709.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00857c44; /* 0x857c44 */
extern undefined4 DAT_00857cb4; /* 0x857cb4 */
extern undefined4 DAT_00859aec; /* 0x859aec */
extern undefined2 DAT_00859af0; /* 0x859af0 */
extern undefined4 DAT_010ccce8; /* 0x10ccce8 */

// ---- functions
void M711_0042a688(void);
void UpdateMoby_709(MobyInstance *moby);
void M711_0042ab54(void);
void M711_0042ab78(int param_1);
void M711_0042b160(MobyInstance *param_1);
undefined8 M711_0042b2ac(void);
undefined8 M711_0042b30c(void);
void M711_0042b390(float *param_1,int param_2);
