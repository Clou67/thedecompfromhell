#pragma once
// game/update/moby713.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0042fc40; /* 0x42fc40 */
extern undefined4 DAT_00859d9c; /* 0x859d9c */
extern undefined4 DAT_00859dc0; /* 0x859dc0 */
extern undefined4 DAT_00859dc4; /* 0x859dc4 */
extern undefined4 DAT_00859dc8; /* 0x859dc8 */
extern undefined4 DAT_00859dcc; /* 0x859dcc */
extern undefined4 DAT_00859dd0; /* 0x859dd0 */
extern undefined4 DAT_00859dd4; /* 0x859dd4 */
extern undefined4 DAT_00859dd8; /* 0x859dd8 */
extern undefined4 DAT_00859ddc; /* 0x859ddc */
extern undefined4 DAT_010cccec; /* 0x10cccec */
extern undefined4 DAT_010cccf0; /* 0x10cccf0 */
extern undefined4 DAT_010cccfc; /* 0x10cccfc */
extern undefined4 DAT_010ccd00; /* 0x10ccd00 */
extern undefined4 DAT_010ccd04; /* 0x10ccd04 */
extern undefined4 DAT_010ccd08; /* 0x10ccd08 */

// ---- functions
void M713_0042f948(void);
void M713_0042f968(int param_1,int param_2);
void M713_0042faf8(int param_1);
void UpdateMoby_713(MobyInstance *moby);
