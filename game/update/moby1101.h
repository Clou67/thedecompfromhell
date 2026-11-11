#pragma once
// game/update/moby1101.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00763dec; /* 0x763dec */
extern undefined4 DAT_00763e5c; /* 0x763e5c */
extern undefined4 DAT_00763e80; /* 0x763e80 */

// ---- functions
void M1532_001be048(void);
undefined8 M1532_001be070(int param_1);
void UpdateMoby_1101(MobyInstance *moby);
void M1532_001be3b4(void);
void M1532_001be3c8(int param_1);
