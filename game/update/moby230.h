#pragma once
// game/update/moby230.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ff218; /* 0x7ff218 */
extern pointer32 PTR_M230_002fdab8_0070b940; /* 0x70b940 */

// ---- functions
void M230_002fda40(int param_1);
void M230_002fda80(void);
void M230_002fdab8(int param_1);
void M230_002fe0f0(int param_1);
void FUN_002fe338(undefined4 param_1,f32 *param_2,undefined4 *param_3);
void FUN_002fe4e8(undefined4 *param_1,int param_2,float *param_3);
undefined8 M230_002fe758(float *param_1,MobyInstance *param_2,int param_3);
void UpdateMoby_230(MobyInstance *moby);
