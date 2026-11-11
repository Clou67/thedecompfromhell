#pragma once
// game/update/moby1178.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00765da8; /* 0x765da8 */
extern undefined4 DAT_00765dac; /* 0x765dac */
extern undefined4 DAT_00765db0; /* 0x765db0 */
extern undefined4 DAT_00765db4; /* 0x765db4 */
extern undefined4 DAT_00765db8; /* 0x765db8 */
extern undefined4 DAT_00765dbc; /* 0x765dbc */
extern undefined4 DAT_00765dc0; /* 0x765dc0 */
extern undefined4 DAT_00765dc4; /* 0x765dc4 */
extern undefined4 DAT_00765dc8; /* 0x765dc8 */

// ---- functions
void M1178_001ee008 (double param_1,longlong param_2,longlong param_3,undefined8 param_4,float *param_5);
void UpdateMoby_1178(MobyInstance *moby);
