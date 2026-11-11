#pragma once
// game/update/moby1910.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007d9b0c; /* 0x7d9b0c */
extern undefined4 DAT_007d9b30; /* 0x7d9b30 */
extern undefined4 DAT_010b7970; /* no defined data */
extern pointer PTR_DAT_007da150; /* 0x7da150 */
extern pointer PTR_DAT_007da158; /* 0x7da158 */
extern pointer PTR_DAT_007da160; /* 0x7da160 */
extern pointer PTR_DAT_007da168; /* 0x7da168 */
extern pointer32 PTR_M1910_002d8858_0070b438; /* 0x70b438 */

// ---- functions
void M1910_002d8600(void);
void M1910_002d8630 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1910_002d8858(void);
void UpdateMoby_1910(MobyInstance *moby);
