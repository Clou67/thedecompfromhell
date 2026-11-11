#pragma once
// game/update/moby1059.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001a91e8; /* 0x1a91e8 */
extern undefined4 DAT_001a98f4; /* 0x1a98f4 */
extern undefined4 DAT_001a9fc0; /* 0x1a9fc0 */
extern undefined4 DAT_007408e0; /* 0x7408e0 */
extern undefined4 DAT_00740904; /* no defined data */
extern undefined4 DAT_0074090d; /* no defined data */

// ---- functions
void FUN_001a87d8(int param_1);
void M1059_001a87e4(void);
void M1059_001a8808(undefined8 param_1,int param_2,undefined8 *param_3);
void M1059_001a8960(undefined8 param_1,int param_2,undefined8 *param_3);
void M1059_001a8ac0(MobyInstance *param_1,longlong param_2,undefined8 param_3);
void M1059_001a8cf0(int *param_1);
undefined8 M1059_001a8d88(longlong param_1,int param_2);
void M1059_001a8e20(int param_1);
undefined8 M1059_001a8f18(int param_1,Spline *param_2);
void M1059_001a9218(int param_1,int param_2);
void M1059_001a9908 (double param_1,double param_2,double param_3,int param_4,undefined *param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8);
undefined8 M1059_001a9a58 (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6 ,double param_7,int param_8,int param_9);
void M1059_001a9c20 (double param_1,double param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,MobyInstance *param_6,int param_7,uint param_8,uint param_9);
undefined8 M1059_001a9e58 (undefined8 param_1,undefined8 param_2,undefined8 param_3,MobyInstance *param_4);
undefined8 M1059_001a9ef4(MobyInstance *param_1,int param_2,int param_3);
void UpdateMoby_1059(MobyInstance *moby);
