#pragma once
// game/update/moby580.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003ce5ec; /* 0x3ce5ec */
extern undefined4 DAT_00846290; /* 0x846290 */
extern undefined4 DAT_008462c0; /* 0x8462c0 */
extern undefined4 DAT_008462c4; /* 0x8462c4 */
extern undefined4 DAT_008462c8; /* 0x8462c8 */
extern undefined4 DAT_008462d0; /* 0x8462d0 */
extern undefined4 DAT_008462d4; /* 0x8462d4 */
extern undefined4 DAT_008462d8; /* 0x8462d8 */
extern undefined4 DAT_008462dc; /* 0x8462dc */
extern undefined4 DAT_008462e0; /* 0x8462e0 */
extern undefined4 DAT_008462e4; /* 0x8462e4 */
extern undefined4 DAT_008462e8; /* 0x8462e8 */
extern undefined4 DAT_008462ec; /* 0x8462ec */
extern undefined4 DAT_008462f8; /* 0x8462f8 */
extern undefined4 DAT_008462fc; /* 0x8462fc */
extern undefined4 DAT_00846300; /* 0x846300 */
extern undefined4 DAT_00846304; /* 0x846304 */
extern undefined4 DAT_00846308; /* 0x846308 */
extern undefined4 DAT_0084630c; /* 0x84630c */
extern undefined4 DAT_00846310; /* 0x846310 */
extern undefined4 DAT_00846314; /* 0x846314 */
extern undefined4 DAT_0084631c; /* 0x84631c */
extern undefined4 DAT_00846320; /* 0x846320 */
extern undefined4 DAT_00846324; /* 0x846324 */
extern undefined4 DAT_00846328; /* 0x846328 */
extern undefined4 DAT_0084632c; /* 0x84632c */
extern undefined4 DAT_00846330; /* 0x846330 */
extern undefined4 DAT_0084633c; /* 0x84633c */
extern undefined4 DAT_00846340; /* 0x846340 */
extern undefined4 DAT_00846344; /* 0x846344 */
extern undefined4 DAT_00846348; /* 0x846348 */
extern undefined4 DAT_0084634c; /* 0x84634c */
extern undefined4 DAT_00846350; /* 0x846350 */
extern undefined4 DAT_00846354; /* 0x846354 */
extern undefined4 DAT_00846358; /* 0x846358 */
extern undefined4 DAT_00846360; /* no defined data */
extern undefined4 DAT_0084637c; /* no defined data */
extern undefined4 DAT_00846420; /* 0x846420 */
extern undefined4 DAT_00846424; /* 0x846424 */
extern undefined4 DAT_0084642c; /* 0x84642c */
extern undefined4 DAT_00846430; /* 0x846430 */
extern undefined4 DAT_00846434; /* 0x846434 */
extern undefined4 DAT_00846438; /* 0x846438 */
extern undefined4 DAT_0084643c; /* 0x84643c */
extern undefined4 DAT_00846440; /* 0x846440 */
extern undefined4 DAT_00846444; /* 0x846444 */
extern undefined4 DAT_010c9f78; /* 0x10c9f78 */
extern undefined4 DAT_010c9f7c; /* 0x10c9f7c */
extern undefined4 DAT_010c9f80; /* 0x10c9f80 */

// ---- functions
void M580_003cce70(void);
void M580_003ccea0(double param_1,double param_2);
void M580_003cd150 (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4);
void M580_003cd35c(undefined8 param_1);
MobyInstance * M580_003cd410(int param_1);
void M580_003cd510(undefined8 param_1,undefined8 param_2,uint param_3);
void M580_003cd980(void);
void M580_003cdd50(int param_1);
void M580_003cde20(int param_1);
void M580_003cdf40(MobyInstance *param_1);
void UpdateMoby_580(MobyInstance *moby);
