#pragma once
// game/update/moby295.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00334aa0; /* 0x334aa0 */
extern undefined4 DAT_00334cd8; /* 0x334cd8 */
extern undefined4 DAT_0081090c; /* 0x81090c */

// ---- functions
void M295_00334a8c(void);
MobyInstance * Spawn_Moby295 (double param_1,float param_2,f32 *param_3,MobyInstance *param_4,f32 *param_5, undefined8 param_6,undefined8 param_7);
void UpdateMoby_295(MobyInstance *moby);
