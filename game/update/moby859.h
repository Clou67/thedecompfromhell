#pragma once
// game/update/moby859.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00495c98; /* 0x495c98 */
extern undefined4 DAT_008c7c74; /* 0x8c7c74 */
extern undefined4 DAT_008c7cc4; /* 0x8c7cc4 */
extern undefined4 DAT_008c7d34; /* 0x8c7d34 */
extern undefined4 DAT_010e03e0; /* 0x10e03e0 */
extern undefined4 DAT_010e04a8; /* 0x10e04a8 */

// ---- functions
void M859_00495208 (double param_1,int param_2,int param_3,int param_4,int *param_5,float *param_6);
void FUN_00495490(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
void M859_00495620(int param_1);
void M859_00495754(void);
MobyInstance * FUN_00495778(double param_1,double param_2,double param_3,float param_4,f32 *param_5,float *param_6, undefined2 param_7,float param_8);
void M859_00495c60(double param_1,int param_2);
void UpdateMoby_859(MobyInstance *moby);
void M859_004963fc(void);
