#pragma once
// game/update/moby1943.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007f3f78; /* 0x7f3f78 */
extern undefined4 DAT_007f3fa0; /* 0x7f3fa0 */
extern undefined4 DAT_010b9c10; /* 0x10b9c10 */
extern undefined4 DAT_010b9c40; /* no defined data */
extern pointer PTR_DAT_007f6d08; /* 0x7f6d08 */
extern pointer PTR_DAT_007f6d14; /* 0x7f6d14 */
extern pointer PTR_DAT_007f6d20; /* 0x7f6d20 */
extern pointer PTR_DAT_007f6d2c; /* 0x7f6d2c */
extern pointer32 PTR_M1943_002e30b8_0070b600; /* 0x70b600 */

// ---- functions
void M1943_002e2e70(void);
void M1943_002e2e98 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1943_002e30b8(void);
void UpdateMoby_1943(MobyInstance *moby);
