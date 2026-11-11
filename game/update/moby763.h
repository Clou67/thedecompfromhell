#pragma once
// game/update/moby763.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00451b1c; /* 0x451b1c */
extern undefined4 DAT_00873534; /* 0x873534 */
extern undefined4 DAT_00873558; /* 0x873558 */
extern undefined4 DAT_0087355c; /* 0x87355c */
extern undefined4 DAT_00873560; /* 0x873560 */
extern undefined4 DAT_00873564; /* 0x873564 */
extern undefined4 DAT_00873568; /* 0x873568 */
extern undefined4 DAT_0087356c; /* 0x87356c */

// ---- functions
void M763_004515fc(void);
void M763_00451618(int param_1);
void M763_00451730(MobyInstance *param_1);
void UpdateMoby_763(MobyInstance *moby);
