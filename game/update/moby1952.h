#pragma once
// game/update/moby1952.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007f90c0; /* 0x7f90c0 */
extern undefined4 DAT_010baa80; /* no defined data */
extern pointer PTR_DAT_007fc218; /* 0x7fc218 */
extern pointer PTR_DAT_007fc224; /* 0x7fc224 */
extern pointer PTR_DAT_007fc230; /* 0x7fc230 */
extern pointer PTR_DAT_007fc23c; /* 0x7fc23c */
extern pointer32 PTR_M1952_002e42c4_0070b648; /* 0x70b648 */

// ---- functions
void M1952_002e40a8 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1952_002e42c4(void);
void UpdateMoby_1952(MobyInstance *moby);
