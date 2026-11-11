#pragma once
// game/update/moby1430.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007aa690; /* 0x7aa690 */

// ---- functions
void M1430_0027b904(void);
void M1430_SetCodeBotState_Crates(longlong param_1,char param_2);
int M1430_0027b9b0(longlong param_1);
void UpdateMoby_1430(MobyInstance *moby);
