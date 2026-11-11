#pragma once
// game/update/moby1918.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007dc410; /* 0x7dc410 */
extern undefined4 DAT_010b8780; /* no defined data */
extern pointer PTR_DAT_007dcd80; /* 0x7dcd80 */
extern pointer PTR_DAT_007dcd84; /* 0x7dcd84 */
extern pointer PTR_DAT_007dcd88; /* 0x7dcd88 */
extern pointer PTR_DAT_007dcd8c; /* 0x7dcd8c */
extern pointer32 PTR_M1918_002d94c8_0070b480; /* 0x70b480 */

// ---- functions
void M1918_002d92a0 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1918_002d94c8(void);
void UpdateMoby_1918(MobyInstance *moby);
