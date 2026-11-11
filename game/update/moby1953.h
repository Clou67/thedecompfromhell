#pragma once
// game/update/moby1953.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007fc250; /* 0x7fc250 */
extern undefined4 DAT_010baf30; /* 0x10baf30 */
extern undefined4 DAT_010baf60; /* no defined data */
extern pointer PTR_DAT_007fe848; /* 0x7fe848 */
extern pointer PTR_DAT_007fe854; /* 0x7fe854 */
extern pointer PTR_DAT_007fe860; /* 0x7fe860 */
extern pointer PTR_DAT_007fe86c; /* 0x7fe86c */
extern pointer32 PTR_M1953_002e46f0_0070b660; /* 0x70b660 */

// ---- functions
void M1953_002e44d0 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1953_002e46f0(void);
void UpdateMoby_1953(MobyInstance *moby);
