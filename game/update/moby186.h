#pragma once
// game/update/moby186.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002cb1c0; /* 0x2cb1c0 */
extern undefined4 DAT_002cba54; /* 0x2cba54 */
extern undefined4 DAT_00800001; /* no defined data */
extern undefined4 DAT_0096bba0; /* 0x96bba0 */
extern undefined4 DAT_0096bba4; /* 0x96bba4 */
extern undefined4 DAT_0096bba8; /* 0x96bba8 */
extern undefined4 DAT_0096bbac; /* 0x96bbac */
extern undefined4 DAT_0096bbb0; /* 0x96bbb0 */
extern undefined4 DAT_0096bbb4; /* 0x96bbb4 */
extern undefined4 DAT_0096bbb8; /* 0x96bbb8 */
extern undefined4 DAT_0096bbbc; /* 0x96bbbc */
extern undefined4 DAT_0096bbc0; /* 0x96bbc0 */
extern undefined4 DAT_0096bbc4; /* 0x96bbc4 */
extern undefined4 DAT_0096bbc8; /* 0x96bbc8 */
extern undefined4 DAT_0096bbd0; /* 0x96bbd0 */
extern undefined4 DAT_0096bbdc; /* 0x96bbdc */
extern undefined4 DAT_0096bbe0; /* 0x96bbe0 */
extern undefined4 DAT_0096bbe4; /* 0x96bbe4 */
extern undefined4 DAT_0096bbe8; /* 0x96bbe8 */
extern undefined4 DAT_0096bbf0; /* 0x96bbf0 */
extern undefined4 DAT_0096bbf4; /* 0x96bbf4 */
extern undefined4 DAT_0096bbf8; /* 0x96bbf8 */
extern undefined4 DAT_0096bbfc; /* 0x96bbfc */
extern undefined4 DAT_0096bc00; /* 0x96bc00 */
extern undefined4 DAT_0096bc04; /* 0x96bc04 */
extern undefined4 DAT_0096bc08; /* 0x96bc08 */
extern undefined4 DAT_0096bc0c; /* 0x96bc0c */
extern undefined4 DAT_0096bc10; /* 0x96bc10 */
extern undefined4 DAT_0096bc14; /* 0x96bc14 */
extern undefined4 DAT_0096bc18; /* 0x96bc18 */
extern undefined1 DAT_0096bc1c; /* 0x96bc1c */
extern undefined1 DAT_0096bc1f; /* 0x96bc1f */
extern undefined4 DAT_0096bc20; /* 0x96bc20 */
extern undefined4 DAT_0096bc24; /* 0x96bc24 */
extern undefined4 DAT_0096bc28; /* 0x96bc28 */
extern undefined4 DAT_0096bc2c; /* 0x96bc2c */
extern undefined1 _DAT_0096bc1c; /* direct read */

// ---- functions
void M1859_002caea0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void M186_002caee0(int param_1,float *param_2,float *param_3);
undefined8 M186_002cb1e0(int param_1,undefined4 *param_2,float *param_3,char param_4);
MobyInstance * FUN_002cb828(undefined4 param_1,f32 *param_2,undefined4 *param_3);
undefined1 M186_002cb930(int param_1);
void UpdateMoby_186(MobyInstance *moby);
