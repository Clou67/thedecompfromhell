#pragma once
// game/update/moby63.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003ec9bc; /* 0x3ec9bc */
extern undefined4 DAT_008542a8; /* 0x8542a8 */
extern undefined4 DAT_008542ac; /* 0x8542ac */
extern undefined4 DAT_008542b0; /* 0x8542b0 */
extern undefined4 DAT_008542b4; /* 0x8542b4 */
extern undefined4 DAT_008542b8; /* no defined data */
extern undefined4 DAT_010cbbc4; /* no defined data */

// ---- functions
longlong M63_003ec788(int param_1,int param_2,int param_3);
void M63_003ec7e0 (int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5, undefined8 param_6,undefined8 param_7);
void M63_003ec878(int param_1);
void M63_003ec8c8(int param_1,int param_2);
void UpdateMoby_63(MobyInstance *moby);
