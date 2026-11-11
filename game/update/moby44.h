#pragma once
// game/update/moby44.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0037dbf0; /* 0x37dbf0 */
extern undefined4 DAT_00841a84; /* 0x841a84 */
extern undefined4 DAT_00841a88; /* 0x841a88 */
extern undefined4 DAT_00841a8c; /* 0x841a8c */
extern undefined4 DAT_00841a90; /* 0x841a90 */
extern undefined4 DAT_00841a94; /* 0x841a94 */
extern undefined4 DAT_00841a98; /* 0x841a98 */
extern undefined4 DAT_00841a9c; /* 0x841a9c */
extern undefined4 DAT_00841aa0; /* 0x841aa0 */
extern undefined4 DAT_00841aa4; /* 0x841aa4 */
extern undefined4 DAT_00841b28; /* no defined data */
extern undefined4 DAT_010c51a8; /* 0x10c51a8 */
extern undefined4 DAT_010c51ac; /* 0x10c51ac */
extern undefined4 DAT_010c51b0; /* 0x10c51b0 */
extern pointer32 PTR_M440_003805d0_0070cbb8; /* 0x70cbb8 */

// ---- functions
void M439_0037c1c0(int param_1,int param_2);
void M44_0037c268(MobyInstance *param_1);
bool M44_0037c500(double param_1,int param_2,undefined8 param_3,float *param_4);
MobyInstance * M44_0037cac8(int param_1);
undefined8 M44_0037cee0(int param_1);
void M44_0037cfe0(MobyInstance *param_1,int param_2);
void UpdateMoby_44(MobyInstance *moby);
