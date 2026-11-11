#pragma once
// game/update/moby712.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0042e8cc; /* 0x42e8cc */
extern undefined4 DAT_00859cbc; /* 0x859cbc */
extern undefined4 DAT_00859ce0; /* 0x859ce0 */

// ---- functions
void M712_0042de7c(void);
void M712_0042de90(int param_1);
void M712_0042e010(int param_1);
MobyInstance * M712_0042e2c8(int param_1,short param_2);
void M712_0042e360(int param_1);
void M712_0042e4c8(int param_1);
void M712_0042e5dc(int param_1);
void M712_0042e6b0(int param_1);
bool M712_0042e808(int param_1);
void UpdateMoby_712(MobyInstance *moby);
