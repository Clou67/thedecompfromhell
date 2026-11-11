#pragma once
// game/update/moby28.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00327edc; /* 0x327edc */
extern undefined4 DAT_0080025c; /* 0x80025c */
extern undefined4 DAT_00800260; /* 0x800260 */
extern undefined4 DAT_00800270; /* 0x800270 */
extern undefined4 DAT_00800274; /* 0x800274 */
extern undefined4 DAT_0080027c; /* 0x80027c */
extern undefined4 DAT_00800280; /* 0x800280 */
extern undefined4 DAT_00800284; /* 0x800284 */
extern undefined4 DAT_0080028c; /* 0x80028c */

// ---- functions
void M279_00327030(longlong param_1);
int M279_003270e0(longlong param_1);
void M279_00327178(int param_1);
bool M28_003271f0(int param_1);
void M28_00327518(int param_1);
void M279_00327534(int param_1);
undefined8 M279_00327558(int param_1);
void M28_003275e0(int param_1);
void M28_003276a8(int param_1);
void M28_00327754(int param_1);
void M28_00327848(MobyInstance *param_1);
void UpdateMoby_28(MobyInstance *moby);
