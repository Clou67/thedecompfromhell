#pragma once
// game/update/moby326.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0001bf28; /* 0x1bf28 */
extern undefined4 DAT_0001cad0; /* 0x1cad0 */
extern undefined4 DAT_0071d01c; /* 0x71d01c */

// ---- functions
void SECTION_HEADER_MOBY326(void);
void M326_0001bbd8(int param_1);
undefined8 M326_0001bf50(int param_1,longlong param_2);
void M326_0001c618(MobyInstance *param_1);
void UpdateMoby_326(MobyInstance *moby);
