#pragma once
// game/update/moby1012.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073b9c4; /* 0x73b9c4 */
extern undefined4 DAT_0073b9e8; /* 0x73b9e8 */
extern undefined4 DAT_0073b9ec; /* 0x73b9ec */
extern undefined4 DAT_0073b9f0; /* 0x73b9f0 */
extern undefined4 DAT_0073b9f4; /* 0x73b9f4 */
extern undefined4 DAT_0073b9f8; /* 0x73b9f8 */

// ---- functions
void M1012_00186bcc(void);
undefined8 M1012_00186be0(int param_1);
undefined8 M1012_00186c20(int param_1);
int M1012_00186c78(MobyInstance *param_1,int param_2);
void M1012_00186d90(MobyInstance *param_1);
void UpdateMoby_1012(MobyInstance *moby);
