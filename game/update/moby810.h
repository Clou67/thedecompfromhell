#pragma once
// game/update/moby810.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00877708; /* 0x877708 */
extern undefined4 DAT_00877730; /* 0x877730 */
extern undefined4 DAT_00877734; /* 0x877734 */
extern undefined4 DAT_00877738; /* 0x877738 */
extern undefined4 DAT_0087773c; /* 0x87773c */
extern undefined4 DAT_00877740; /* 0x877740 */
extern undefined4 DAT_00877744; /* 0x877744 */

// ---- functions
MobyInstance * FUN_0046cf30(double param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
void M810_0046d198(void);
void UpdateMoby_810(MobyInstance *moby);
