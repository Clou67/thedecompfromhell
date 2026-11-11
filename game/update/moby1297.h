#pragma once
// game/update/moby1297.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0023fc68; /* 0x23fc68 */
extern undefined4 DAT_0078e060; /* 0x78e060 */
extern undefined4 DAT_0078e064; /* 0x78e064 */
extern undefined4 DAT_0078e068; /* 0x78e068 */
extern undefined4 DAT_0078e06c; /* 0x78e06c */
extern undefined4 DAT_0078e070; /* 0x78e070 */
extern undefined4 DAT_0078e074; /* 0x78e074 */
extern undefined4 DAT_0078e078; /* 0x78e078 */
extern undefined4 DAT_0078e07c; /* 0x78e07c */

// ---- functions
void M1297_0023f9f8(int param_1);
void UpdateMoby_1297(MobyInstance *moby);
void M1297_00240058(void);
longlong FUN_002403a8(int param_1,f32 *param_2,undefined4 param_3);
void M1297_00240590(int param_1,undefined4 *param_2);
void FUN_002405c8(int param_1,undefined4 *param_2);
void M1297_00240630(MobyInstance *param_1);
