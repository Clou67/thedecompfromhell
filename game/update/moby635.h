#pragma once
// game/update/moby635.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003f74e8; /* 0x3f74e8 */
extern undefined4 DAT_003f7be0; /* 0x3f7be0 */
extern undefined4 DAT_00854430; /* 0x854430 */
extern undefined4 DAT_00854434; /* 0x854434 */
extern undefined4 DAT_008544f0; /* 0x8544f0 */
extern undefined4 DAT_00854514; /* no defined data */
extern undefined4 DAT_0085456c; /* 0x85456c */
extern pointer32 PTR_M1382_003f9a38_0070dcd0; /* 0x70dcd0 */

// ---- functions
undefined8 M1382_003f5b10(double param_1,undefined4 param_2,MobyInstance *param_3);
void M1382_003f5d90(int param_1);
MobyInstance * M1382_003f65a0(MobyInstance *param_1,uint param_2,int param_3);
void M1382_003f68d8(void);
bool M1382_003f6930 (double param_1,int param_2,undefined8 param_3,float *param_4);
void M1382_003f6d30(MobyInstance *param_1);
void M1382_003f7040(int param_1);
void M1382_003f7518(MobyInstance *param_1,int param_2);
void UpdateMoby_635(MobyInstance *moby);
undefined8 M1382_003f9798(MobyInstance *param_1);
undefined8 M1382_003f9850(int param_1);
undefined8 M1382_003f9908(int param_1);
void M1382_003f99b8(int param_1);
longlong M1382_003f99f0(int param_1);
void M1382_003f9a38(int param_1);
void M1382_003f9ac8(void);
MobyInstance * M1382_003f9ae0(f32 *param_1,undefined4 *param_2);
