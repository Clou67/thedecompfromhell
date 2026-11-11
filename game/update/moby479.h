#pragma once
// game/update/moby479.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0039aeac; /* 0x39aeac */
extern undefined4 DAT_0039b2d0; /* 0x39b2d0 */
extern undefined4 DAT_00842fec; /* 0x842fec */
extern undefined4 DAT_00843028; /* 0x843028 */
extern undefined4 DAT_0084302c; /* 0x84302c */
extern undefined1 DAT_0096bcd4; /* 0x96bcd4 */
extern undefined4 DAT_0096bcd8; /* 0x96bcd8 */
extern undefined4 DAT_0096bcdc; /* no defined data */
extern undefined4 DAT_0096bd00; /* 0x96bd00 */
extern undefined4 _DAT_0039b320; /* direct read */
extern undefined4 _DAT_0039b330; /* direct read */
extern undefined4 _DAT_0039b350; /* direct read */
extern undefined4 _DAT_0039b360; /* direct read */

// ---- functions
MobyInstance * SpawnMoby_479_DroneDevice(undefined4 param_1,f32 *param_2);
void M479_0039ac10(void);
void M479_0039aeb8(int param_1);
MobyInstance * M479_0039af88(float *param_1,int *param_2);
void UpdateMoby_479(MobyInstance *moby);
void M479_0039cdcc(void);
double M48_0039cdf0(int param_1,float *param_2,int param_3);
