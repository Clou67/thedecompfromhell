#pragma once
// game/update/moby58.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002ea8f4; /* 0x2ea8f4 */
extern undefined4 DAT_00721034; /* 0x721034 */
extern undefined4 DAT_00737d3c; /* no defined data */
extern undefined4 DAT_007feafc; /* 0x7feafc */
extern undefined4 DAT_010bb410; /* 0x10bb410 */

// ---- functions
MobyInstance * FUN_002ea758(f32 *param_1,longlong param_2,uint param_3,undefined4 param_4);
void UpdateMoby_58(MobyInstance *moby);
bool M1449_002eb3f0(int param_1);
undefined8 M1449_CollectAmmo(MobyInstance *moby);
void M1449_002eb688(void);
void M1449_002eb6d8(int param_1);
