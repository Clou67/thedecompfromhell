#pragma once
// game/update/moby305.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0033abd4; /* 0x33abd4 */
extern undefined4 DAT_00811d48; /* 0x811d48 */
extern undefined4 DAT_00811d4c; /* 0x811d4c */
extern undefined4 DAT_00811d50; /* 0x811d50 */
extern undefined4 DAT_00811d54; /* 0x811d54 */
extern undefined4 DAT_00811d58; /* 0x811d58 */
extern undefined4 DAT_00811d5c; /* 0x811d5c */
extern undefined4 DAT_00811d60; /* 0x811d60 */
extern undefined4 DAT_00811d64; /* 0x811d64 */
extern undefined4 DAT_00811d68; /* 0x811d68 */

// ---- functions
void M305_00339e00(int param_1,int param_2);
longlong FUN_0033a1d0(double param_1,double param_2,double param_3,double param_4,f32 param_5, undefined8 param_6,undefined8 param_7,undefined8 param_8);
void UpdateMoby_305(MobyInstance *moby);
