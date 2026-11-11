#pragma once
// game/update/moby1947.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007f6d40; /* 0x7f6d40 */
extern undefined4 DAT_010ba0f0; /* 0x10ba0f0 */
extern undefined4 DAT_010ba100; /* 0x10ba100 */
extern pointer PTR_DAT_007f7ef8; /* 0x7f7ef8 */
extern pointer PTR_DAT_007f7efc; /* 0x7f7efc */
extern pointer PTR_DAT_007f7f00; /* 0x7f7f00 */
extern pointer PTR_DAT_007f7f04; /* 0x7f7f04 */
extern pointer32 PTR_M1947_002e36b8_0070b618; /* 0x70b618 */

// ---- functions
void M1947_002e3498 (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5);
void M1947_002e36b8(void);
void UpdateMoby_1947(MobyInstance *moby);
