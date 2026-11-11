#pragma once
// game/update/moby1427.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00728e70; /* 0x728e70 */

// ---- functions
void SECTION_HEADER_MOBY1427(void);
MobyInstance * Spawn_Moby1427_GCShockwave (double param_1,double param_2,double param_3,undefined8 param_4,f32 *param_5, float param_6);
void UpdateMoby_1427_GC_Shockwave(MobyInstance *moby);
