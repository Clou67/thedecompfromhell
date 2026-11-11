#pragma once
// game/update/moby717.h
#include "types.h"

// ---- globals
extern undefined4 DAT_004333a0; /* 0x4333a0 */
extern undefined4 DAT_00859f18; /* 0x859f18 */

// ---- functions
void M717_00431a0c(void);
void M717_00431a30(int param_1,longlong param_2,float *param_3);
void M717_00431c90(int param_1);
MobyInstance * M717_00432258(int param_1);
void M717_00432718(int param_1);
longlong M717_00432828(longlong param_1);
void M717_00432858 (undefined8 param_1,longlong param_2,int param_3,undefined8 param_4);
void M717_00432a70(undefined8 param_1);
void UpdateMoby_717(MobyInstance *moby);
