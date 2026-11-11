#pragma once
// game/update/moby1000.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073b698; /* 0x73b698 */
extern undefined4 DAT_0073b69c; /* 0x73b69c */
extern undefined4 DAT_00e5af08; /* 0xe5af08 */
extern undefined4 DAT_00e5af0c; /* 0xe5af0c */
extern undefined4 DAT_00f08e20; /* 0xf08e20 */

// ---- functions
void M1000_0018150c(int param_1);
char * UpdateMoby_1000(MobyInstance *moby);
