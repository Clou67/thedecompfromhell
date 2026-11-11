#pragma once
// game/update/moby460.h
#include "types.h"
#include "game/water.h"

// ---- globals
extern undefined4 DAT_00392e54; /* 0x392e54 */
extern undefined4 DAT_008422e8; /* 0x8422e8 */
extern OceanPlane OCEAN_UMBRIS; /* 0x842b30 */
extern pointer32 PTR_M460_00392e28_0070cd80; /* 0x70cd80 */

// ---- functions
void M460_00392e10(void);
void M460_00392e28(void);
void UpdateMoby_460(MobyInstance *moby);
