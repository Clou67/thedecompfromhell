#pragma once
// game/update/moby1907.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007d88d0; /* 0x7d88d0 */
extern undefined4 DAT_007d88d4; /* 0x7d88d4 */
extern undefined4 DAT_007d88d8; /* 0x7d88d8 */
extern undefined4 DAT_007d88dc; /* 0x7d88dc */
extern undefined4 DAT_007d88e0; /* 0x7d88e0 */
extern undefined4 DAT_007d88e4; /* 0x7d88e4 */
extern undefined4 DAT_007d88e8; /* 0x7d88e8 */
extern undefined4 DAT_007d88ec; /* 0x7d88ec */
extern undefined4 DAT_007d88f0; /* 0x7d88f0 */
extern undefined4 DAT_007d88f4; /* 0x7d88f4 */
extern undefined4 DAT_007d8910; /* 0x7d8910 */
extern undefined4 DAT_007d8960; /* 0x7d8960 */
extern undefined4 DAT_007d8990; /* 0x7d8990 */
extern undefined4 DAT_010b6ffc; /* 0x10b6ffc */
extern undefined4 DAT_010b7000; /* 0x10b7000 */
extern undefined4 DAT_010b7010; /* no defined data */
extern pointer PTR_DAT_007d9110; /* 0x7d9110 */
extern pointer PTR_DAT_007d9118; /* 0x7d9118 */
extern pointer PTR_DAT_007d9120; /* 0x7d9120 */
extern pointer PTR_DAT_007d9128; /* 0x7d9128 */
extern pointer32 PTR_M1907_002d7a50_0070b3f8; /* 0x70b3f8 */

// ---- functions
undefined8 FUN_002d6f28(double param_1,longlong param_2,float *param_3,float *param_4);
short FUN_002d70fc(longlong param_1);
void M1907_002d7188(int param_1);
void M1907_002d74b8(int param_1);
void M1907_002d75e0(MobyInstance *param_1);
void M1907_002d7638(int param_1);
void M1907_002d7690(int param_1);
void M1907_002d76e8(int param_1);
longlong M1907_002d7720(int param_1);
void M1907_002d7768(int param_1);
void M1907_002d77fc(void);
void M1907_002d7828 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1907_002d7a50(void);
void UpdateMoby_1907(MobyInstance *moby);
