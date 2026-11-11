#pragma once
// game/update/moby388.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0035eba4; /* 0x35eba4 */
extern undefined4 DAT_0035f648; /* no defined data */
extern undefined4 DAT_007350a0; /* 0x7350a0 */
extern undefined4 DAT_008408bc; /* 0x8408bc */
extern undefined4 DAT_008408e0; /* no defined data */
extern undefined4 DAT_0084090c; /* no defined data */
extern undefined4 DAT_00840910; /* no defined data */
extern undefined4 DAT_0084093c; /* no defined data */
extern undefined4 DAT_0084096c; /* no defined data */
extern undefined4 DAT_00840998; /* 0x840998 */
extern undefined4 DAT_008409b0; /* 0x8409b0 */
extern undefined4 DAT_008409c8; /* 0x8409c8 */
extern undefined4 DAT_008409e4; /* 0x8409e4 */
extern undefined4 DAT_008409e8; /* no defined data */
extern undefined4 DAT_00840a5c; /* 0x840a5c */
extern undefined4 DAT_010c511c; /* 0x10c511c */
extern pointer32 PTR_Draw_MobyHealthBarHud_00705868; /* 0x705868 */
extern pointer32 PTR_M388_0035f100_0070c738; /* 0x70c738 */

// ---- functions
void M388_0035aac0 (int param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5);
void M388_0035b698(int param_1);
void M388_0035b774(void);
undefined8 M388_0035b790(undefined8 param_1,int param_2,int param_3,int param_4);
void M388_0035b9b0(int param_1,int param_2);
void M388_0035bcf0(int param_1);
void M388_0035bfb0(int param_1,int param_2);
double M388_0035c3c8 (undefined8 param_1,undefined8 param_2,int param_3,int param_4);
bool M388_0035c4f8(int param_1,int param_2,longlong param_3,char param_4);
longlong M388_0035ceb0 (int param_1,int param_2,longlong param_3,undefined1 param_4);
void M388_0035d190(undefined8 param_1,int param_2,longlong param_3);
void M388_0035d338(int param_1,longlong param_2,undefined4 *param_3);
void M388_0035d950(MobyInstance *param_1,longlong param_2);
void M388_0035e29c(double param_1,float *param_2,float *param_3);
void M388_0035e3c8 (double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5);
undefined8 M388_0035ebb8(MobyInstance *param_1,int param_2);
undefined8 M388_0035ed70(undefined8 param_1);
void M388_0035f100(int param_1);
undefined * M388_0035f670(MobyInstance *param_1,longlong param_2);
void UpdateMoby_388(MobyInstance *moby);
void M401_003621ac(void);
