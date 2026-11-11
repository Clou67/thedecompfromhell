#pragma once
// game/update/moby1046.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0074052c; /* 0x74052c */
extern undefined4 DAT_00e5ff60; /* 0xe5ff60 */
extern undefined4 DAT_00e5ff64; /* 0xe5ff64 */
extern pointer32 PTR_M1046_0019e010_007086b8; /* 0x7086b8 */
extern undefined4 _DAT_0019df90; /* direct read */
extern undefined4 _DAT_0019dfa0; /* direct read */
extern undefined4 _DAT_0019dfb0; /* direct read */
extern undefined4 _DAT_0019dfc0; /* direct read */
extern undefined4 _DAT_0019dfd0; /* direct read */

// ---- functions
void M1046_0019d958(void);
void M1046_0019dda8(void);
MobyInstance * Spawn_Moby1046 (double param_1,double param_2,double param_3,double param_4,double param_5,float param_6, f32 *param_7);
void M1046_0019e010(undefined8 param_1);
void M1046_0019e848(MobyInstance *param_1,MobyInstance *param_2,int param_3);
void UpdateMoby_1046(MobyInstance *moby);
