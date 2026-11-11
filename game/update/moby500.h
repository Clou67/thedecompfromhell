#pragma once
// game/update/moby500.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0084343c; /* 0x84343c */
extern undefined4 DAT_00843440; /* 0x843440 */
extern undefined4 DAT_008434c8; /* 0x8434c8 */
extern undefined4 DAT_008434f0; /* 0x8434f0 */
extern undefined4 DAT_008434f4; /* 0x8434f4 */
extern undefined4 DAT_008434f8; /* 0x8434f8 */
extern undefined4 DAT_00843500; /* 0x843500 */
extern undefined4 DAT_00843560; /* 0x843560 */
extern undefined4 DAT_010c9264; /* 0x10c9264 */
extern undefined4 DAT_010c9268; /* 0x10c9268 */

// ---- functions
MobyInstance * FUN_003a4858(int param_1,float *param_2,f32 *param_3,float *param_4,float param_5);
void M511_003a4d48(void);
void M511_003a4da0(int param_1);
void M511_003a5468(undefined8 param_1,char param_2);
MobyInstance * M511_003a6388(MobyInstance *param_1);
void M511_003a6d40(ulonglong param_1);
void UpdateMoby_500(MobyInstance *moby);
