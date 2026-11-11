#pragma once
// game/update/moby1108.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007641d0; /* 0x7641d0 */
extern undefined4 DAT_007641d4; /* 0x7641d4 */
extern undefined4 DAT_007641d8; /* 0x7641d8 */
extern undefined4 DAT_007641dc; /* 0x7641dc */
extern undefined4 DAT_007641e0; /* 0x7641e0 */
extern undefined4 DAT_00ef1a50; /* 0xef1a50 */
extern undefined4 DAT_00ef1a54; /* 0xef1a54 */
extern undefined4 DAT_00ef1a58; /* 0xef1a58 */
extern undefined4 DAT_00ef1a5c; /* 0xef1a5c */
extern undefined4 DAT_00ef1a60; /* 0xef1a60 */
extern pointer32 PTR_M1109_001ca5d8_00708cd8; /* 0x708cd8 */

// ---- functions
void M1108_001c9528(int param_1,int param_2);
void UpdateMoby_1108(MobyInstance *moby);
