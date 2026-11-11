#pragma once
// game/update/moby42.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0084360c; /* 0x84360c */
extern undefined4 DAT_0084367c; /* 0x84367c */
extern undefined4 DAT_010c926c; /* 0x10c926c */

// ---- functions
int M1340_003a8068(int param_1);
void M1340_003a8148(void);
void M1340_003a8168(int param_1,float *param_2);
void UpdateMoby_42(MobyInstance *moby);
void M1340_003a9aa4(void);
