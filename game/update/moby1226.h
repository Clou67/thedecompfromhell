#pragma once
// game/update/moby1226.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0020fd68; /* 0x20fd68 */
extern undefined4 DAT_007683ec; /* 0x7683ec */
extern undefined4 DAT_00768420; /* 0x768420 */
extern undefined4 DAT_00768424; /* 0x768424 */
extern undefined4 DAT_00768428; /* 0x768428 */
extern undefined4 DAT_0076842c; /* 0x76842c */
extern undefined4 DAT_00768430; /* 0x768430 */
extern undefined4 DAT_00768434; /* 0x768434 */
extern undefined4 DAT_00768438; /* 0x768438 */
extern undefined4 DAT_00768440; /* 0x768440 */
extern undefined4 DAT_00768444; /* 0x768444 */
extern undefined4 DAT_00768448; /* 0x768448 */
extern undefined4 DAT_0076844c; /* 0x76844c */
extern undefined4 DAT_00f08e60; /* 0xf08e60 */
extern undefined4 DAT_00f08e64; /* 0xf08e64 */

// ---- functions
void M1226_0020ea6c(void);
undefined8 M1226_0020ea80(int param_1);
void M1226_0020ebd8(int param_1);
bool M1226_0020ed70 (double param_1,int param_2,undefined8 param_3,float *param_4);
void M1226_0020f330(MobyInstance *param_1);
void UpdateMoby_1226(MobyInstance *moby);
