#pragma once
// game/update/moby1379.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00261cdc; /* 0x261cdc */
extern undefined4 DAT_002626d0; /* 0x2626d0 */
extern undefined4 DAT_0079c110; /* 0x79c110 */
extern undefined4 DAT_0079c114; /* 0x79c114 */
extern undefined4 DAT_0079c134; /* 0x79c134 */
extern undefined4 DAT_0079c174; /* 0x79c174 */
extern undefined4 DAT_0079c1b4; /* 0x79c1b4 */
extern undefined4 DAT_0079c1bc; /* 0x79c1bc */
extern undefined4 DAT_0079c1c4; /* 0x79c1c4 */
extern undefined4 DAT_0079c1cc; /* 0x79c1cc */
extern undefined4 DAT_0079c1d4; /* 0x79c1d4 */
extern undefined4 DAT_0079c200; /* 0x79c200 */
extern undefined4 DAT_0079c240; /* 0x79c240 */
extern undefined4 DAT_0079c2cc; /* 0x79c2cc */
extern undefined4 DAT_0079c2f0; /* 0x79c2f0 */
extern undefined4 DAT_0079c2f4; /* 0x79c2f4 */
extern undefined4 DAT_0079c308; /* 0x79c308 */
extern undefined4 DAT_0079c30c; /* 0x79c30c */
extern undefined4 DAT_0079c310; /* 0x79c310 */
extern undefined4 DAT_0079c314; /* 0x79c314 */
extern undefined4 DAT_0079c318; /* 0x79c318 */
extern undefined4 DAT_0079c31c; /* 0x79c31c */
extern undefined4 DAT_0079c320; /* 0x79c320 */
extern undefined4 DAT_0079c324; /* 0x79c324 */
extern undefined4 DAT_0079c328; /* 0x79c328 */
extern undefined4 DAT_0079c32c; /* 0x79c32c */
extern undefined4 DAT_0079c334; /* 0x79c334 */
extern undefined4 DAT_0079c338; /* 0x79c338 */
extern undefined4 DAT_0079c33c; /* 0x79c33c */
extern undefined4 DAT_0079c340; /* 0x79c340 */
extern undefined4 DAT_0079c344; /* 0x79c344 */
extern undefined4 DAT_0079c348; /* 0x79c348 */
extern undefined4 DAT_0079c34c; /* 0x79c34c */
extern undefined4 DAT_0079c350; /* 0x79c350 */
extern undefined4 DAT_0079c354; /* 0x79c354 */
extern undefined4 DAT_0079c358; /* 0x79c358 */
extern undefined4 DAT_0079c35c; /* 0x79c35c */
extern undefined4 DAT_0079c364; /* 0x79c364 */
extern undefined4 DAT_0079c368; /* 0x79c368 */
extern undefined4 DAT_0079c36c; /* 0x79c36c */
extern undefined4 DAT_0079c370; /* 0x79c370 */
extern undefined4 DAT_0079c374; /* 0x79c374 */
extern undefined4 DAT_0079c378; /* 0x79c378 */
extern undefined4 DAT_0079c37c; /* 0x79c37c */
extern undefined4 DAT_0079c380; /* 0x79c380 */
extern undefined4 DAT_0079c384; /* 0x79c384 */
extern undefined4 DAT_0079c388; /* 0x79c388 */
extern undefined4 DAT_0079c394; /* 0x79c394 */
extern undefined4 DAT_0079c398; /* 0x79c398 */
extern undefined4 DAT_0079c39c; /* 0x79c39c */
extern undefined4 DAT_0079c3a0; /* 0x79c3a0 */
extern undefined4 DAT_0079c3ac; /* 0x79c3ac */
extern undefined4 DAT_0079c3b0; /* 0x79c3b0 */
extern undefined4 DAT_0079c3bc; /* 0x79c3bc */
extern undefined4 DAT_0079c3c0; /* 0x79c3c0 */
extern undefined4 DAT_0079c3c4; /* 0x79c3c4 */
extern undefined4 DAT_0079c3c8; /* 0x79c3c8 */
extern undefined4 DAT_0079c3cc; /* 0x79c3cc */
extern undefined4 DAT_0079c3d0; /* 0x79c3d0 */
extern undefined4 DAT_0079c3d4; /* 0x79c3d4 */
extern undefined4 DAT_0079c3d8; /* 0x79c3d8 */
extern undefined4 DAT_0079c3dc; /* 0x79c3dc */
extern undefined4 DAT_0079c3e0; /* 0x79c3e0 */
extern undefined4 DAT_0079c3e4; /* 0x79c3e4 */
extern undefined4 DAT_0079c400; /* 0x79c400 */
extern undefined4 DAT_0079c404; /* 0x79c404 */
extern undefined4 DAT_0079c408; /* 0x79c408 */
extern undefined4 DAT_0079c40c; /* 0x79c40c */
extern undefined4 DAT_0079c410; /* 0x79c410 */
extern undefined4 DAT_0079c414; /* 0x79c414 */
extern undefined4 DAT_0079c418; /* 0x79c418 */
extern undefined4 DAT_0079c41c; /* 0x79c41c */
extern undefined4 DAT_0079c420; /* 0x79c420 */
extern undefined4 DAT_0079c424; /* 0x79c424 */
extern undefined4 DAT_0079c428; /* 0x79c428 */
extern undefined4 DAT_0079c42c; /* 0x79c42c */
extern undefined4 DAT_0079c430; /* 0x79c430 */
extern undefined4 DAT_0079c434; /* 0x79c434 */
extern undefined4 DAT_0079c438; /* 0x79c438 */
extern undefined4 DAT_0079c43c; /* 0x79c43c */
extern undefined4 DAT_0079c440; /* 0x79c440 */
extern undefined4 DAT_0079c444; /* 0x79c444 */
extern undefined4 DAT_0079c448; /* 0x79c448 */
extern undefined4 DAT_0079c44c; /* 0x79c44c */
extern undefined4 DAT_0079c450; /* 0x79c450 */
extern undefined4 DAT_0079c454; /* 0x79c454 */
extern undefined4 DAT_0079c458; /* 0x79c458 */
extern undefined4 DAT_0079c45c; /* 0x79c45c */
extern undefined4 DAT_0079c460; /* 0x79c460 */
extern undefined4 DAT_0079c464; /* 0x79c464 */
extern undefined4 DAT_0079c46c; /* 0x79c46c */
extern undefined4 DAT_0079c470; /* 0x79c470 */
extern undefined4 DAT_0079c474; /* 0x79c474 */
extern undefined4 DAT_0079c478; /* 0x79c478 */
extern undefined4 DAT_0079c47c; /* 0x79c47c */
extern undefined4 DAT_0079c480; /* 0x79c480 */
extern undefined4 DAT_0079c484; /* 0x79c484 */
extern undefined4 DAT_0079c488; /* 0x79c488 */
extern undefined4 DAT_0079c490; /* no defined data */
extern undefined4 DAT_0079c49c; /* no defined data */
extern undefined4 DAT_0079c578; /* no defined data */
extern undefined4 DAT_0079c5f0; /* no defined data */
extern undefined4 DAT_0079c600; /* no defined data */
extern undefined4 DAT_0079c610; /* no defined data */
extern undefined4 DAT_0079c620; /* no defined data */
extern undefined4 DAT_0079c630; /* no defined data */
extern undefined4 DAT_0079c670; /* 0x79c670 */
extern undefined4 DAT_0079c674; /* 0x79c674 */
extern undefined4 DAT_0079c678; /* 0x79c678 */
extern undefined4 DAT_0096b2dc; /* 0x96b2dc */
extern undefined4 DAT_00fa3f2c; /* 0xfa3f2c */
extern undefined1 DAT_00fa4330; /* 0xfa4330 */
extern pointer32 PTR_M1379_Hud_Draw_0070a1b8; /* 0x70a1b8 */

// ---- functions
void M1379_0025e1a8(int param_1);
void M1379_0025e788(void);
void M1379_0025e7a0(void);
void M1379_DrawShapeScaled (double param_1,double param_2,double param_3,longlong param_4,int param_5);
void M1379_DrawShapeRotated (double param_1,double param_2,double param_3,double param_4,longlong param_5, int param_6);
void M1379_0025ed68 (double param_1,double param_2,double param_3,double param_4,double param_5);
void M1379_0025edf8 (double param_1,double param_2,double param_3,double param_4);
void M1379_WorldToScreen (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4);
void M1379_0025f120 (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5, undefined8 param_6,ulonglong param_7);
void M1379_0025f3c8(undefined8 param_1,int param_2);
void M1379_DrawRadarIcon (undefined8 param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5, int param_6);
int M1379_ScanTargets (ulonglong param_1,int param_2,undefined8 param_3,undefined8 param_4);
void M1379_UpdateTargetLock(undefined8 param_1,int param_2);
void M1379_Hud_Draw(int param_1);
void M1379_UpdateGunsMissiles (double param_1,double param_2,MobyInstance *param_3,float *param_4);
void M1379_UpdateMissiles(longlong param_1,int param_2);
double M1379_BlendByDist (double param_1,double param_2,double param_3,double param_4,double param_5);
void M1379_00261f94 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
void M1379_00262030(undefined8 param_1,float *param_2,undefined8 param_3);
void M1379_UpdateFlight(MobyInstance *param_1,int param_2);
void UpdateMoby_1379_JetFighterFleet(MobyInstance *moby);
