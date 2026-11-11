#pragma once
// game/update/moby156.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ab81c; /* 0x7ab81c */
extern undefined4 DAT_007ab820; /* 0x7ab820 */
extern undefined4 DAT_007ab824; /* 0x7ab824 */
extern undefined4 DAT_007ab828; /* 0x7ab828 */
extern undefined4 DAT_007ab82c; /* 0x7ab82c */

// ---- functions
void M156_00298e30(void);
MobyInstance * FUN_00299400(undefined4 *param_1,f32 *param_2,undefined8 param_3,undefined4 param_4,uint param_5);
void UpdateMoby_156(MobyInstance *moby);
