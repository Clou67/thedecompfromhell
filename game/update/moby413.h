#pragma once
// game/update/moby413.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00840d2c; /* 0x840d2c */
extern undefined4 DAT_00840d50; /* 0x840d50 */
extern undefined4 DAT_00840d54; /* 0x840d54 */
extern undefined4 DAT_00840d58; /* 0x840d58 */
extern undefined4 DAT_00840d5c; /* 0x840d5c */
extern undefined4 DAT_00840d70; /* 0x840d70 */
extern undefined4 DAT_00840db0; /* 0x840db0 */
extern undefined4 DAT_00840df0; /* 0x840df0 */
extern undefined4 DAT_00840df4; /* 0x840df4 */
extern undefined4 DAT_00840df8; /* 0x840df8 */
extern undefined4 DAT_00840dfc; /* 0x840dfc */
extern pointer32 PTR_M413_00366968_0070c898; /* 0x70c898 */

// ---- functions
void M413_00366940(void);
void M413_00366968(int param_1);
MobyInstance * FUN_00366d48(undefined4 *param_1,f32 *param_2,undefined8 param_3,undefined4 param_4);
void UpdateMoby_413(MobyInstance *moby);
