#pragma once
// game/update/moby841.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008ace20; /* 0x8ace20 */
extern undefined4 DAT_008ace24; /* 0x8ace24 */
extern undefined4 DAT_008ace28; /* 0x8ace28 */
extern undefined4 DAT_008ace2c; /* 0x8ace2c */
extern undefined4 DAT_008ace50; /* 0x8ace50 */
extern undefined4 DAT_008ace54; /* 0x8ace54 */
extern undefined4 DAT_008ace64; /* 0x8ace64 */
extern undefined4 DAT_008ace68; /* 0x8ace68 */
extern undefined4 DAT_008ace88; /* 0x8ace88 */
extern undefined4 DAT_008ace90; /* 0x8ace90 */
extern undefined4 DAT_008acf5c; /* 0x8acf5c */
extern undefined4 DAT_010d9d48; /* 0x10d9d48 */
extern undefined4 DAT_010d9d4c; /* 0x10d9d4c */

// ---- functions
void M841_00481ca8(int param_1);
void M841_004820ec(void);
void UpdateMoby_841(MobyInstance *moby);
