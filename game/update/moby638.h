#pragma once
// game/update/moby638.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003fb798; /* 0x3fb798 */
extern undefined4 DAT_0085464c; /* 0x85464c */
extern undefined4 DAT_00854670; /* 0x854670 */
extern undefined4 DAT_00854674; /* 0x854674 */
extern undefined4 DAT_00854678; /* 0x854678 */

// ---- functions
void M638_003f9d70(void);
void M638_003f9dc0(int param_1);
void M638_003fa1a8(int param_1);
void M638_003fac98(undefined8 param_1);
double M638_003fb180(int param_1,float *param_2);
void M638_003fb2e8(int param_1);
void M638_003fb658(int param_1,int param_2,int param_3);
void M638_003fb7c8(MobyInstance *param_1);
void UpdateMoby_638(MobyInstance *moby);
