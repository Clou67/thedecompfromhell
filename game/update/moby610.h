#pragma once
// game/update/moby610.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00853824; /* 0x853824 */
extern undefined4 DAT_00853850; /* 0x853850 */
extern undefined4 DAT_00853854; /* 0x853854 */
extern undefined4 DAT_008538c4; /* 0x8538c4 */
extern undefined4 DAT_008538e0; /* 0x8538e0 */
extern undefined4 DAT_008538e4; /* 0x8538e4 */
extern undefined4 DAT_008538e8; /* 0x8538e8 */
extern undefined4 DAT_008538ec; /* 0x8538ec */
extern undefined4 DAT_008538f0; /* 0x8538f0 */
extern undefined4 DAT_00fa4368; /* 0xfa4368 */
extern pointer32 PTR_M611_003da478_0070d8d0; /* 0x70d8d0 */

// ---- functions
void M610_003d94e4(void);
void M610_003d9508(int param_1,longlong param_2,float *param_3);
void M610_003d9760(void *param_1);
void UpdateMoby_610_WindControl(MobyInstance *moby);
