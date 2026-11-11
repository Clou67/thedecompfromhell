#pragma once
// game/update/moby1300.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0078e14c; /* 0x78e14c */

// ---- functions
MobyInstance * MB_SpawnBolts(MobyInstance *moby,Vec4 *param_2,undefined4 *param_3,uint param_4,uint boltValue, undefined1 param_6);
void M1300_00242b8c(void);
MobyInstance * UpdateMoby_1300(MobyInstance *moby);
