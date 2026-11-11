#pragma once
// game/update/moby291.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008008c4; /* 0x8008c4 */
extern undefined4 DAT_0083be04; /* 0x83be04 */
extern undefined2 DAT_0096b2d4; /* 0x96b2d4 */
extern undefined4 DAT_0096b2e8; /* 0x96b2e8 */
extern undefined2 DAT_0096b2ec; /* 0x96b2ec */
extern pointer32 PTR_Draw_MobyMeterHud_00705840; /* 0x705840 */

// ---- functions
void M291_0032f5e8(void);
void M291_0032f620(longlong param_1,int param_2);
void UpdateMoby_291(MobyInstance *moby);
