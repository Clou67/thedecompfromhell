#pragma once
// game/update/moby439.h
#include "types.h"

// ---- globals
extern undefined4 DAT_008419bc; /* 0x8419bc */
extern undefined4 DAT_008419f0; /* 0x8419f0 */
extern undefined4 DAT_008419f4; /* 0x8419f4 */
extern undefined4 DAT_00841a60; /* 0x841a60 */

// ---- functions
void M439_0037af90(void);
MobyInstance * FUN_0037afa8(int param_1);
void UpdateMoby_439(MobyInstance *moby);
void M439_0037b568(void);
void M44_0037b5b0(int param_1);
undefined8 M44_0037bbe8 (double param_1,int param_2,int param_3,undefined8 param_4,undefined1 param_5, undefined8 param_6);
void M44_0037be68 (int param_1,undefined8 param_2,float *param_3,undefined8 param_4,undefined8 param_5);
undefined8 M44_0037c07c(int param_1);
