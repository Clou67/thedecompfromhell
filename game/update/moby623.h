#pragma once
// game/update/moby623.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003e5174; /* 0x3e5174 */
extern undefined4 DAT_00853da4; /* 0x853da4 */
extern undefined4 DAT_00853da8; /* 0x853da8 */
extern undefined4 DAT_00853dac; /* 0x853dac */
extern undefined4 DAT_00853db0; /* 0x853db0 */
extern undefined4 DAT_00853db4; /* 0x853db4 */
extern undefined4 DAT_00853db8; /* 0x853db8 */
extern undefined4 DAT_00853dbc; /* 0x853dbc */
extern undefined4 DAT_00853dc0; /* 0x853dc0 */
extern undefined4 DAT_00853dc4; /* 0x853dc4 */
extern undefined4 DAT_00853dc8; /* 0x853dc8 */
extern undefined4 DAT_00853dcc; /* 0x853dcc */
extern undefined4 DAT_00853dd0; /* 0x853dd0 */
extern undefined4 DAT_00853dd4; /* 0x853dd4 */
extern undefined4 DAT_00853dd8; /* 0x853dd8 */
extern undefined4 DAT_00853ddc; /* 0x853ddc */
extern undefined4 DAT_00853de0; /* 0x853de0 */
extern undefined4 DAT_00853de4; /* 0x853de4 */
extern undefined4 DAT_00853de8; /* 0x853de8 */
extern undefined4 DAT_00853df0; /* 0x853df0 */
extern undefined4 DAT_00853df4; /* 0x853df4 */
extern undefined4 DAT_010cbba8; /* 0x10cbba8 */

// ---- functions
double M623_003e30b0 (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5);
ulonglong M623_003e3378(double param_1,int param_2,float *param_3);
void M623_003e37b0(double param_1,MobyInstance *param_2,undefined4 param_3);
MobyInstance * M623_003e4098(int param_1,longlong param_2);
void M623_003e41c8(MobyInstance *param_1);
void UpdateMoby_623(MobyInstance *moby);
