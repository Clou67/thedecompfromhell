#pragma once
// game/update/moby685.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00413390; /* 0x413390 */
extern undefined4 DAT_00857270; /* 0x857270 */
extern undefined4 DAT_008572a4; /* 0x8572a4 */
extern undefined4 DAT_008572b0; /* 0x8572b0 */
extern undefined4 DAT_010cc280; /* no defined data */
extern undefined4 DAT_010cc290; /* no defined data */

// ---- functions
void M685_004122c8(void);
void M685_0041337c(void);
double M685_004133a0(int param_1);
void M685_004135b8(int param_1);
void M685_00413770(int param_1);
undefined8 M685_00413870(int param_1);
void M685_00413b0c(MobyInstance *param_1);
void UpdateMoby_685(MobyInstance *moby);
