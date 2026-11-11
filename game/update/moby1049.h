#pragma once
// game/update/moby1049.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001a1f20; /* 0x1a1f20 */
extern undefined4 DAT_001a205c; /* 0x1a205c */
extern undefined4 DAT_007406b8; /* 0x7406b8 */
extern undefined4 DAT_00740728; /* 0x740728 */

// ---- functions
void FUN_001a1e24(longlong param_1);
void FUN_001a1e90(longlong param_1);
void M1049_001a1f0c(void);
MobyInstance * M1049_001a1f28(f32 *param_1,undefined4 *param_2,undefined4 param_3);
void UpdateMoby_1049(MobyInstance *moby);
void M1049_001a2380(void);
