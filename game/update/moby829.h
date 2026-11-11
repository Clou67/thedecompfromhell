#pragma once
// game/update/moby829.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00877bb4; /* 0x877bb4 */
extern undefined4 DAT_00877bd8; /* 0x877bd8 */

// ---- functions
bool FUN_0047ca58(int param_1,undefined4 *param_2);
bool FUN_0047cba4(int param_1);
void FUN_0047cbc8(longlong param_1);
undefined8 FUN_0047cc38(longlong param_1);
undefined8 M829_0047ccd0(MobyInstance *param_1);
undefined8 M829_0047cdc8(int param_1);
undefined8 M829_0047ce90(int param_1);
undefined8 M829_0047cf50(int param_1);
longlong M829_0047cfa0(int param_1);
void M829_0047cfe0(void);
void UpdateMoby_829(MobyInstance *moby);
MobyInstance * M829_0047df40(undefined4 param_1,f32 *param_2,undefined4 *param_3);
