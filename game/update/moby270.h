#pragma once
// game/update/moby270.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0032198c; /* 0x32198c */
extern undefined4 DAT_008000c0; /* no defined data */
extern undefined4 DAT_008000d0; /* 0x8000d0 */
extern undefined4 DAT_008000d4; /* 0x8000d4 */
extern undefined4 DAT_008000d8; /* 0x8000d8 */
extern undefined4 DAT_008000e0; /* 0x8000e0 */
extern undefined4 DAT_010bb490; /* 0x10bb490 */
extern undefined4 DAT_010bca30; /* 0x10bca30 */
extern undefined4 DAT_010bca34; /* 0x10bca34 */

// ---- functions
void M270_00320b50(int param_1);
longlong SpawnMoby_270_Chicken(MobyInstance *param_1);
int FUN_003216b8(MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
bool FUN_00321970(int param_1);
void UpdateMoby_270(MobyInstance *moby);
