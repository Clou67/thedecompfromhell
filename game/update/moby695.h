#pragma once
// game/update/moby695.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008579ac; /* 0x8579ac */
extern undefined4 DAT_008579d0; /* 0x8579d0 */
extern undefined4 DAT_008579d4; /* 0x8579d4 */
extern undefined4 DAT_008579d8; /* 0x8579d8 */
extern undefined4 DAT_008579dc; /* 0x8579dc */
extern undefined4 DAT_008579e0; /* 0x8579e0 */

// ---- functions
void M695_00424db8(void);
double M695_00424dd8 (double param_1,double param_2,double param_3,double param_4,float *param_5, undefined8 param_6,float *param_7);
void UpdateMoby_695(MobyInstance *moby);
