#pragma once
// game/update/moby1906.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002d5f14; /* 0x2d5f14 */
extern undefined4 DAT_002d645c; /* 0x2d645c */
extern undefined4 DAT_007d887c; /* 0x7d887c */
extern undefined4 DAT_007d88ac; /* 0x7d88ac */
extern undefined4 DAT_007d88b0; /* 0x7d88b0 */
extern undefined4 DAT_007d88b4; /* 0x7d88b4 */
extern undefined4 DAT_007d88b8; /* 0x7d88b8 */
extern undefined4 DAT_007d88bc; /* 0x7d88bc */
extern undefined4 DAT_007d88c0; /* 0x7d88c0 */
extern undefined4 DAT_007d88c4; /* 0x7d88c4 */
extern undefined4 DAT_007d88c8; /* 0x7d88c8 */
extern undefined4 DAT_007d88cc; /* 0x7d88cc */
extern undefined4 DAT_010b6ff0; /* 0x10b6ff0 */
extern undefined4 DAT_010b6ff4; /* 0x10b6ff4 */
extern undefined4 DAT_010b6ff8; /* 0x10b6ff8 */
extern pointer PTR_DAT_007d88a0; /* 0x7d88a0 */
extern pointer32 PTR_M1907_002d7188_0070b3a8; /* 0x70b3a8 */
extern pointer32 PTR_M1907_002d74b8_0070b3b0; /* 0x70b3b0 */

// ---- functions
void M1906_002d5ad0(void);
double M1906_002d5b20(int param_1,undefined8 param_2,undefined8 param_3);
void M1906_002d5f48(MobyInstance *param_1);
void UpdateMoby_1906(MobyInstance *moby);
