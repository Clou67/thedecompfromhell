#pragma once
// game/update/moby931.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004bc468; /* 0x4bc468 */
extern undefined4 DAT_008f497c; /* 0x8f497c */
extern undefined4 DAT_008f49a0; /* 0x8f49a0 */
extern undefined4 DAT_008f49a4; /* 0x8f49a4 */
extern undefined4 DAT_008f49a8; /* 0x8f49a8 */
extern undefined4 DAT_008f49ac; /* 0x8f49ac */
extern undefined4 DAT_008f49b0; /* 0x8f49b0 */
extern undefined4 DAT_008f49b4; /* 0x8f49b4 */
extern undefined4 DAT_008f49b8; /* 0x8f49b8 */
extern undefined4 DAT_008f49bc; /* 0x8f49bc */
extern undefined4 DAT_008f49c0; /* 0x8f49c0 */
extern undefined4 DAT_008f49c4; /* 0x8f49c4 */
extern undefined4 DAT_008f49c8; /* 0x8f49c8 */
extern undefined4 DAT_008f49cc; /* 0x8f49cc */
extern undefined4 DAT_008f49d0; /* 0x8f49d0 */
extern undefined4 DAT_008f49d4; /* 0x8f49d4 */

// ---- functions
void M931_004bbde4(void);
double M931_004bbe20(int param_1,float *param_2);
void M931_004bc480(MobyInstance *param_1);
void UpdateMoby_931(MobyInstance *moby);
