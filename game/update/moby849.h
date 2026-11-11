#pragma once
// game/update/moby849.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008ad10c; /* 0x8ad10c */
extern undefined4 DAT_008ad130; /* no defined data */
extern undefined4 DAT_008ad140; /* no defined data */
extern undefined4 DAT_008ad150; /* 0x8ad150 */
extern undefined4 DAT_008ad154; /* 0x8ad154 */
extern undefined4 DAT_008ad158; /* 0x8ad158 */
extern undefined4 DAT_008ad160; /* 0x8ad160 */
extern undefined4 DAT_008ad2ec; /* 0x8ad2ec */
extern undefined4 DAT_0096bd30; /* 0x96bd30 */
extern undefined4 DAT_0096bd58; /* 0x96bd58 */
extern undefined4 DAT_0096bd5c; /* 0x96bd5c */
extern undefined2 DAT_00a0fd6c; /* 0xa0fd6c */
extern undefined2 DAT_00a0fd6e; /* 0xa0fd6e */
extern undefined4 DAT_00a0fd70; /* 0xa0fd70 */
extern undefined4 DAT_010da310; /* 0x10da310 */
extern undefined4 DAT_010da314; /* 0x10da314 */
extern undefined4 DAT_010da318; /* 0x10da318 */
extern undefined4 DAT_010da320; /* 0x10da320 */
extern undefined4 DAT_010da324; /* 0x10da324 */
extern undefined4 DAT_010da328; /* 0x10da328 */
extern undefined4 DAT_010da32c; /* 0x10da32c */
extern undefined4 DAT_010da330; /* 0x10da330 */
extern undefined4 DAT_010da334; /* 0x10da334 */
extern undefined4 DAT_010da338; /* 0x10da338 */
extern undefined4 DAT_010da33c; /* 0x10da33c */
extern undefined4 DAT_010da340; /* 0x10da340 */
extern undefined4 DAT_010da344; /* 0x10da344 */
extern undefined4 DAT_010da348; /* 0x10da348 */
extern undefined2 DAT_010da34c; /* 0x10da34c */
extern undefined2 DAT_010da34e; /* 0x10da34e */
extern undefined4 DAT_010da350; /* 0x10da350 */
extern undefined4 DAT_010da354; /* 0x10da354 */
extern undefined4 DAT_010da358; /* 0x10da358 */
extern undefined4 DAT_010da35c; /* 0x10da35c */
extern undefined4 DAT_010da360; /* 0x10da360 */
extern undefined4 DAT_010db610; /* 0x10db610 */
extern undefined4 DAT_010db614; /* 0x10db614 */
extern undefined4 DAT_010db618; /* 0x10db618 */
extern undefined4 DAT_010db61c; /* 0x10db61c */
extern undefined4 DAT_010db620; /* 0x10db620 */
extern undefined2 DAT_010db6d8; /* 0x10db6d8 */
extern undefined2 DAT_010db6da; /* 0x10db6da */
extern undefined4 DAT_010db6f0; /* 0x10db6f0 */
extern undefined4 DAT_010db6f4; /* 0x10db6f4 */
extern undefined4 DAT_010db6f8; /* 0x10db6f8 */
extern pointer32 PTR_Draw_Moby849Meter_007057b0; /* 0x7057b0 */
extern pointer32 PTR_M849_0048a6c8_0070f040; /* 0x70f040 */
extern pointer32 PTR_M849_0048d430_0070f0c0; /* 0x70f0c0 */
extern pointer32 PTR_Moby849Hud_Init_00705798; /* 0x705798 */
extern pointer32 PTR_Moby849Hud_Update_007057a0; /* 0x7057a0 */

// ---- functions
void FUN_00486008(double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4, undefined4 param_5);
void M849_004860e0(void);
undefined8 M849_004860f8(void);
void M849_0048616c(longlong param_1,MobyInstance *param_2,undefined8 param_3);
undefined8 M849_00486220 (undefined8 param_1,undefined8 param_2,int param_3,int param_4,float *param_5);
undefined8 M849_00486434(int param_1);
undefined8 M849_00486484(int param_1,undefined8 param_2);
void M849_004864f0(int param_1,float *param_2,float *param_3,float *param_4);
void M849_00486608(MobyInstance *param_1);
undefined8 FUN_00486828(int param_1);
void M849_004868d8(int param_1,undefined4 *param_2);
void M849_00486bf8(void *param_1,float *param_2);
void M849_00488250(int param_1,undefined8 param_2);
void M849_004889a0(void);
void M849_00488b5c(MobyInstance *param_1);
void M849_00488bf8(MobyInstance *param_1);
void M849_00488e34(void);
void UpdateMoby_849(MobyInstance *moby);
undefined8 M849_0048a6c8(void);
undefined8 M849_0048a6d0(void);
undefined8 M849_0048a6d8(void);
undefined8 M849_0048a6e0(void);
void M849_0048a6e8(MobyInstance *param_1);
undefined8 M849_0048a70c(void);
undefined8 M849_MB_Sucking(MobyInstance *moby);
undefined8 M849_0048aa70(MobyInstance *param_1,f32 *param_2);
undefined8 M849_0048acb8 (double param_1,MobyInstance *param_2,undefined4 *param_3,MobyInstance *param_4);
undefined8 M849_0048afe8(int param_1);
void M849_0048b288(int param_1);
void M849_0048c008(MobyInstance *param_1,int param_2,char param_3);
undefined8 FUN_0048c188(MobyInstance *param_1,longlong param_2);
void M849_0048d430(void);
void M849_0048d858(void);
