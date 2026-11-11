#pragma once
// game/update/moby1843.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002c2d70; /* 0x2c2d70 */
extern undefined4 DAT_002c3094; /* 0x2c3094 */
extern undefined4 DAT_007b7fd0; /* 0x7b7fd0 */
extern undefined4 DAT_007b7fd4; /* 0x7b7fd4 */
extern undefined4 DAT_007b7fd8; /* 0x7b7fd8 */
extern undefined4 DAT_007b7fdc; /* 0x7b7fdc */
extern undefined4 DAT_007b8000; /* 0x7b8000 */
extern undefined4 DAT_007b8004; /* 0x7b8004 */
extern undefined4 DAT_007b8008; /* 0x7b8008 */
extern undefined4 DAT_007b800c; /* 0x7b800c */
extern undefined4 DAT_007b8010; /* 0x7b8010 */
extern undefined4 DAT_007b8014; /* 0x7b8014 */
extern undefined4 DAT_007b8018; /* 0x7b8018 */
extern undefined4 DAT_007b801c; /* 0x7b801c */
extern pointer32 PTR_M1843_002c1bd0_0070b050; /* 0x70b050 */

// ---- functions
void M1843_002c1bd0(int param_1);
void M1843_002c1fc8(MobyInstance *param_1);
void M1843_002c2230(int param_1);
void M1843_002c2d80(int param_1);
void UpdateMoby_1843(MobyInstance *moby);
