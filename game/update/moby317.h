#pragma once
// game/update/moby317.h
#include "types.h"
#include "game/water.h"

// ---- globals
extern undefined4 DAT_00340584; /* 0x340584 */
extern undefined4 DAT_008120c4; /* 0x8120c4 */
extern undefined4 DAT_008324c0; /* no defined data */
extern undefined4 DAT_00835800; /* no defined data */
extern undefined4 DAT_0083581c; /* 0x83581c */
extern OceanPlane OCEAN_GASPAR; /* 0x83bb80 */
extern pointer PTR_DAT_00835810; /* 0x835810 */
extern pointer PTR_DAT_00835814; /* 0x835814 */
extern pointer32 PTR_M317_Gaspar_SubmitOcean_0070c240; /* 0x70c240 */

// ---- functions
void M317_00340168(void);
void M317_Gaspar_SubmitOcean(void);
void UpdateMoby_317_GasparOcean(MobyInstance *moby);
