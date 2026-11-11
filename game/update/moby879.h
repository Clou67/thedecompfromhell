#pragma once
// game/update/moby879.h
#include "types.h"
#include "game/water.h"

// ---- globals
extern undefined4 DAT_008c80a8; /* 0x8c80a8 */
extern OceanPlane OCEAN_RILGAR; /* 0x8cbd00 */
extern pointer32 PTR_M879_Rilgar_SubmitOcean_0070f340; /* 0x70f340 */

// ---- functions
void M879_0049f894(void);
void M879_Rilgar_SubmitOcean(int param_1);
void UpdateMoby_879_RilgarOcean(MobyInstance *moby);
