#pragma once
// game/update/moby428.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008414cc; /* 0x8414cc */
extern undefined4 DAT_008414f0; /* 0x8414f0 */
extern undefined4 DAT_008414f4; /* 0x8414f4 */
extern undefined4 DAT_008414f8; /* 0x8414f8 */

// ---- functions
void M428_00370f9c(void);
MobyInstance * SpawnMoby_428_Feather(undefined8 param_1,f32 *param_2,float *param_3);
void UpdateMoby_428(MobyInstance *moby);
