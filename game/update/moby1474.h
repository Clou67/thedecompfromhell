#pragma once
// game/update/moby1474.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aae50; /* 0x7aae50 */
extern undefined4 DAT_007aaee0; /* 0x7aaee0 */
extern undefined4 DAT_00fad0e0; /* 0xfad0e0 */
extern undefined4 DAT_00fad140; /* no defined data */

// ---- functions
undefined8 FUN_00288730(int param_1,undefined4 param_2,undefined4 param_3);
undefined8 M1474_00288828(int param_1);
undefined8 FUN_00288888(int param_1);
undefined8 FUN_00288958(int param_1,undefined8 param_2,undefined4 *param_3);
void M1474_00288a70(undefined8 param_1,undefined8 param_2,longlong param_3);
void M1474_00289678(undefined8 param_1,longlong param_2);
void M1474_00289ee0(int param_1);
void M1474_0028a0a4(void);
undefined8 M1474_0028a0b8(int param_1);
void UpdateMoby_1474(MobyInstance *moby);
