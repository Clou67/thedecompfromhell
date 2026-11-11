#pragma once
// game/update/moby333.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00346578; /* 0x346578 */
extern undefined4 DAT_0083fbf0; /* 0x83fbf0 */
extern undefined4 DAT_0083fbf4; /* 0x83fbf4 */
extern undefined4 DAT_0083fbfc; /* 0x83fbfc */
extern undefined4 DAT_0083fc00; /* 0x83fc00 */
extern undefined4 DAT_0083fc1c; /* no defined data */
extern undefined4 DAT_0083fd90; /* 0x83fd90 */
extern undefined4 DAT_0083fd94; /* 0x83fd94 */
extern undefined4 DAT_0083fd9c; /* 0x83fd9c */
extern undefined4 DAT_0083fda0; /* 0x83fda0 */
extern undefined4 DAT_0083fda4; /* 0x83fda4 */
extern undefined4 DAT_0083fda8; /* 0x83fda8 */
extern undefined4 DAT_0083fdac; /* 0x83fdac */
extern undefined4 DAT_0083fdb0; /* 0x83fdb0 */
extern undefined4 DAT_0083fdb4; /* 0x83fdb4 */
extern undefined4 DAT_0083fdb8; /* 0x83fdb8 */
extern undefined4 DAT_0083fdbc; /* 0x83fdbc */
extern undefined4 DAT_0083fdc0; /* 0x83fdc0 */
extern undefined4 DAT_010c5100; /* 0x10c5100 */
extern undefined4 DAT_010c5104; /* 0x10c5104 */
extern undefined4 DAT_010c5108; /* 0x10c5108 */

// ---- functions
void M333_00345798 (double param_1,double param_2,undefined8 param_3,undefined4 param_4, undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8);
void M333_00345d08 (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4);
void M333_00345ea0(undefined8 param_1);
MobyInstance * M333_00346060(int param_1);
void UpdateMoby_333(MobyInstance *moby);
