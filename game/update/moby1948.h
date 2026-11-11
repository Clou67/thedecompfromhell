#pragma once
// game/update/moby1948.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007f7f10; /* 0x7f7f10 */
extern undefined4 DAT_010ba5b0; /* 0x10ba5b0 */
extern undefined4 DAT_010ba5d0; /* no defined data */
extern pointer PTR_DAT_007f9098; /* 0x7f9098 */
extern pointer PTR_DAT_007f90a0; /* 0x7f90a0 */
extern pointer PTR_DAT_007f90a8; /* 0x7f90a8 */
extern pointer PTR_DAT_007f90b0; /* 0x7f90b0 */
extern pointer32 PTR_M1948_002e3cc0_0070b630; /* 0x70b630 */

// ---- functions
void M1948_002e3aa0 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1948_002e3cc0(void);
void UpdateMoby_1948(MobyInstance *moby);
