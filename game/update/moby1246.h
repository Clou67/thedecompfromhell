#pragma once
// game/update/moby1246.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00225020; /* 0x225020 */
extern undefined4 DAT_00225ac0; /* 0x225ac0 */
extern undefined4 DAT_0076d234; /* 0x76d234 */
extern undefined4 DAT_0076d238; /* 0x76d238 */
extern undefined4 DAT_0076d23c; /* 0x76d23c */
extern undefined4 DAT_0076d244; /* 0x76d244 */
extern undefined4 DAT_0076d248; /* 0x76d248 */
extern undefined4 DAT_0076d24c; /* 0x76d24c */
extern undefined4 DAT_0076d250; /* 0x76d250 */
extern undefined4 DAT_0076d254; /* 0x76d254 */
extern undefined4 DAT_0076d2a4; /* 0x76d2a4 */
extern undefined4 DAT_0076d2c8; /* 0x76d2c8 */
extern undefined4 DAT_0076d2cc; /* 0x76d2cc */
extern undefined4 DAT_0076d2d0; /* 0x76d2d0 */
extern undefined4 DAT_0076d2d4; /* 0x76d2d4 */
extern undefined4 DAT_0076d2d8; /* 0x76d2d8 */
extern undefined4 DAT_0076d2dc; /* 0x76d2dc */
extern undefined4 DAT_0076d2e0; /* 0x76d2e0 */
extern undefined4 DAT_0076d2e4; /* 0x76d2e4 */
extern undefined4 DAT_0076d2e8; /* 0x76d2e8 */
extern undefined4 DAT_0076d2ec; /* 0x76d2ec */
extern undefined4 DAT_0076d2f8; /* 0x76d2f8 */
extern undefined4 DAT_00f0d2e8; /* no defined data */

// ---- functions
void FUN_002247e4(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5 );
void M1246_0022485c(void);
void M1246_00224a00(void);
void M1246_00224ba4(void);
void M1246_00224bf8(MobyInstance *param_1,float *param_2);
short M1246_00224f8c(int param_1);
void M1246_00225048(MobyInstance *param_1);
void UpdateMoby_1246(MobyInstance *moby);
