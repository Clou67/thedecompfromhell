#pragma once
// game/update/moby1448.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aab98; /* 0x7aab98 */
extern undefined4 DAT_007aabbc; /* 0x7aabbc */
extern undefined4 DAT_007aabc0; /* 0x7aabc0 */

// ---- functions
void M1448_00280de0(MobyInstance *param_1);
void M1448_00280e38(int param_1);
void M1448_00280e90(int param_1);
void M1448_00280ee8(int param_1);
longlong M1448_00280f20(int param_1);
void M1448_00280f60(void);
bool M1448_00280fb8(int param_1,longlong param_2);
void M1448_002825d4(int param_1);
void UpdateMoby_1448(MobyInstance *moby);
