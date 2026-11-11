#pragma once
// game/update/moby327.h
#include "types.h"
#include "game/water.h"

// ---- globals
extern undefined4 DAT_0083bd10; /* 0x83bd10 */
extern undefined4 DAT_0083bd14; /* 0x83bd14 */
extern undefined4 DAT_0083bd18; /* 0x83bd18 */
extern undefined4 DAT_0083bd1c; /* 0x83bd1c */
extern undefined4 DAT_0083bd2c; /* 0x83bd2c */
extern undefined4 DAT_0083bd30; /* 0x83bd30 */
extern undefined4 DAT_0083bd80; /* 0x83bd80 */
extern undefined4 DAT_010c50e0; /* 0x10c50e0 */
extern OceanPlane OCEAN_BATALIA; /* 0x83fa40 */
extern pointer32 PTR_M327_Batalia_SubmitOcean_0070c2e8; /* 0x70c2e8 */

// ---- functions
MobyInstance * FUN_003426d8(float param_1,float *param_2);
void M327_00342950(int param_1);
void M327_00342d24(void);
double FUN_00342d38(int param_1);
void FUN_00342d40(void);
void M327_Batalia_SubmitOcean(void);
void UpdateMoby_327_BataliaOcean(MobyInstance *moby);
