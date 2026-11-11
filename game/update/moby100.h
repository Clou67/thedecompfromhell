#pragma once
// game/update/moby100.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073b66c; /* 0x73b66c */
extern undefined4 DAT_0073b690; /* 0x73b690 */
extern undefined4 DAT_0073b694; /* 0x73b694 */
extern undefined4 DAT_00e5af04; /* 0xe5af04 */
extern pointer32 PTR_M1000_0018150c_007082b8; /* 0x7082b8 */

// ---- functions
void M100_00180984(void);
void M100_00180998(MobyInstance *param_1);
void M100_00180ae8(MobyInstance *param_1,int *param_2);
void UpdateMoby_100(MobyInstance *moby);
