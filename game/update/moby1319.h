#pragma once
// game/update/moby1319.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00247340; /* 0x247340 */
extern undefined4 DAT_00247664; /* 0x247664 */
extern undefined4 DAT_0078e410; /* 0x78e410 */
extern undefined4 DAT_0078e430; /* 0x78e430 */
extern undefined4 DAT_0078e434; /* 0x78e434 */
extern undefined4 DAT_0078e438; /* 0x78e438 */
extern undefined4 DAT_0078e460; /* 0x78e460 */
extern undefined4 DAT_0078e464; /* 0x78e464 */
extern undefined4 DAT_0078e468; /* 0x78e468 */
extern undefined4 DAT_0078e46c; /* 0x78e46c */
extern undefined4 DAT_0078e470; /* 0x78e470 */
extern undefined4 DAT_0078e474; /* 0x78e474 */
extern undefined4 DAT_0078e478; /* 0x78e478 */
extern undefined4 DAT_0078e47c; /* 0x78e47c */
extern undefined2 DAT_00a257f4; /* 0xa257f4 */
extern undefined2 DAT_00a257f6; /* 0xa257f6 */
extern undefined4 DAT_00a257f8; /* 0xa257f8 */
extern pointer32 PTR_M1319_002461a0_00709dc0; /* 0x709dc0 */

// ---- functions
void M1319_002461a0(int param_1);
void M1319_00246598(MobyInstance *param_1);
void M1319_00246800(int param_1);
void M1319_00247350(int param_1);
void UpdateMoby_1319(MobyInstance *moby);
