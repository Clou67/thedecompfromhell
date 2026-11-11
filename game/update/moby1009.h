#pragma once
// game/update/moby1009.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0073b8d4; /* 0x73b8d4 */
extern undefined4 DAT_0073b944; /* 0x73b944 */

// ---- functions
void M1009_00184104(void);
int M1009_00184130 (double param_1,double param_2,double param_3,float *param_4,int param_5);
MobyInstance * M1009_00184670 (double param_1,double param_2,float param_3,float *param_4,f32 *param_5);
void UpdateMoby_1009(MobyInstance *moby);
void M1009_00185640(void);
