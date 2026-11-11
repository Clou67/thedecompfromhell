#pragma once
// game/update/moby192.h
#include "types.h"

// ---- globals
extern undefined2 DAT_00a0fd74; /* 0xa0fd74 */
extern undefined2 DAT_00a0fd76; /* 0xa0fd76 */
extern undefined4 DAT_00a0fd78; /* 0xa0fd78 */

// ---- functions
void M192_002daa30 (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5, float *param_6);
void UpdateMoby_192(MobyInstance *moby);
