#pragma once
// game/update/moby336.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0071d08c; /* 0x71d08c */
extern undefined4 DAT_0071d0b0; /* 0x71d0b0 */
extern undefined4 DAT_0071d0b4; /* 0x71d0b4 */
extern undefined4 DAT_0071d0b8; /* 0x71d0b8 */

// ---- functions
void SECTION_HEADER_MOBY336(void);
void M336_0001e700(int param_1,int param_2);
void UpdateMoby_336(MobyInstance *moby);
