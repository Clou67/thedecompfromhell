#pragma once
// game/update/moby577.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003c8988; /* 0x3c8988 */
extern undefined4 DAT_008460dc; /* 0x8460dc */
extern undefined4 DAT_008460e0; /* 0x8460e0 */
extern undefined4 DAT_008460e4; /* 0x8460e4 */
extern undefined4 DAT_008460e8; /* 0x8460e8 */
extern undefined4 DAT_008460ec; /* 0x8460ec */
extern undefined4 DAT_008460f0; /* 0x8460f0 */
extern undefined4 DAT_008460f4; /* 0x8460f4 */
extern undefined4 DAT_008460f8; /* 0x8460f8 */
extern undefined4 DAT_008460fc; /* 0x8460fc */
extern undefined4 DAT_00846100; /* 0x846100 */
extern undefined4 DAT_00846168; /* 0x846168 */
extern undefined4 DAT_0084618c; /* 0x84618c */
extern undefined4 DAT_00846190; /* 0x846190 */
extern undefined4 DAT_00846194; /* 0x846194 */
extern undefined4 DAT_00846198; /* 0x846198 */
extern undefined4 DAT_0084619c; /* no defined data */
extern undefined4 DAT_010c9f60; /* 0x10c9f60 */
extern undefined4 DAT_010c9f64; /* 0x10c9f64 */
extern undefined4 DAT_010c9f68; /* no defined data */

// ---- functions
undefined8 M577_003c8180(double param_1,longlong param_2,float *param_3,float *param_4);
short M577_003c8354(longlong param_1);
void M577_003c83e0(int param_1);
void M577_003c8708(MobyInstance *param_1);
void M577_003c8760(int param_1);
void M577_003c87b8(int param_1);
void M577_003c8810(int param_1);
longlong M577_003c8848(int param_1);
void M577_003c8890(int param_1);
void M577_003c8924(void);
longlong M577_003c8938(int param_1,int param_2,int param_3);
void UpdateMoby_577(MobyInstance *moby);
