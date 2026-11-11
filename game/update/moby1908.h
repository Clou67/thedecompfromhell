#pragma once
// game/update/moby1908.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007d9130; /* 0x7d9130 */
extern undefined4 DAT_010b74c0; /* no defined data */
extern pointer PTR_DAT_007d9aa0; /* 0x7d9aa0 */
extern pointer PTR_DAT_007d9aa4; /* 0x7d9aa4 */
extern pointer PTR_DAT_007d9aa8; /* 0x7d9aa8 */
extern pointer PTR_DAT_007d9aac; /* 0x7d9aac */
extern pointer32 PTR_M1908_002d7e90_0070b410; /* 0x70b410 */

// ---- functions
void M1908_002d7c68 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1908_002d7e90(void);
void UpdateMoby_1908(MobyInstance *moby);
