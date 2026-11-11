#pragma once
// game/update/moby175.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b74ac; /* 0x7b74ac */
extern undefined4 DAT_007b74d4; /* 0x7b74d4 */
extern undefined4 DAT_007b74d8; /* 0x7b74d8 */
extern undefined4 DAT_007b74dc; /* 0x7b74dc */
extern undefined2 DAT_00a0fd94; /* 0xa0fd94 */
extern undefined2 DAT_00a0fd96; /* 0xa0fd96 */
extern undefined4 DAT_00a0fd98; /* 0xa0fd98 */
extern undefined4 DAT_00fb0190; /* 0xfb0190 */
extern undefined4 DAT_00fb0194; /* 0xfb0194 */
extern undefined2 DAT_00fb0198; /* 0xfb0198 */
extern undefined4 DAT_00fb019a; /* no defined data */
extern undefined2 DAT_00fb019c; /* 0xfb019c */
extern undefined4 DAT_00fb020c; /* 0xfb020c */
extern undefined4 DAT_00fb0210; /* 0xfb0210 */
extern undefined4 DAT_00fb0214; /* 0xfb0214 */
extern undefined4 DAT_00fb0220; /* 0xfb0220 */
extern pointer32 PTR_M1750_002b1950_0070ae30; /* 0x70ae30 */

// ---- functions
void M175_002b06bc(void);
int M175_002b06f0(double param_1,undefined8 param_2,MobyInstance *param_3);
void M175_002b1078(undefined8 param_1);
void UpdateMoby_175(MobyInstance *moby);
