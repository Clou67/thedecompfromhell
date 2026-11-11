#pragma once
// game/update/moby808.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008775f8; /* 0x8775f8 */
extern undefined4 DAT_0087761c; /* 0x87761c */
extern undefined4 DAT_00877620; /* 0x877620 */
extern undefined4 DAT_00877624; /* 0x877624 */
extern undefined4 DAT_00877628; /* 0x877628 */
extern undefined4 DAT_0087762c; /* 0x87762c */

// ---- functions
void M808_0046a680(MobyInstance *param_1);
void M808_0046a6d8(int param_1);
void M808_0046a730(int param_1);
void M808_0046a788(int param_1);
longlong M808_0046a7c0(int param_1);
void M808_0046a800(void);
void M808_0046a830(MobyInstance *param_1);
void UpdateMoby_808(MobyInstance *moby);
