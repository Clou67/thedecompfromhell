#pragma once
// game/update/moby64.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004482e0; /* 0x4482e0 */
extern undefined4 DAT_0085a788; /* 0x85a788 */
extern undefined4 DAT_0085a7f8; /* 0x85a7f8 */

// ---- functions
void M795_00447768(MobyInstance *param_1);
void M795_004477c0(int param_1);
void M795_00447818(int param_1);
void M795_00447870(int param_1);
longlong M795_004478a8(int param_1);
void M795_004478e8(void);
void M795_00447908(int param_1,float *param_2);
void M795_004479ec(MobyInstance *param_1);
void M795_00447b40 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5);
void M795_004482f8(int param_1);
void M795_00448858(MobyInstance *param_1);
void M795_00448ab0(MobyInstance *param_1,undefined8 param_2,int param_3);
void UpdateMoby_64(MobyInstance *moby);
void M795_0044a694(void);
