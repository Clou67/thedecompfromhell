#pragma once
// game/update/moby854.h
#include "types.h"
#include "game/water.h"

// ---- globals
extern OceanPlane OceanPlane_008c7880; /* 0x8c7880 */
extern OceanPlane OceanPlane_008c78e0; /* 0x8c78e0 */
extern OceanPlane OceanPlane_008c7950; /* 0x8c7950 */
extern OceanPlane OceanPlane_008c79b0; /* 0x8c79b0 */
extern OceanPlane OceanPlane_008c7a10; /* 0x8c7a10 */
extern OceanPlane OceanPlane_008c7a60; /* 0x8c7a60 */
extern OceanPlane OceanPlane_008c7ab0; /* 0x8c7ab0 */
extern pointer32 PTR_M854_Aridia_SubmitOcean_0070f0f8; /* 0x70f0f8 */

// ---- functions
void M854_Aridia_SubmitOcean(int param_1);
void UpdateMoby_854_AridiaOcean(MobyInstance *moby);
