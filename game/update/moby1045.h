#pragma once
// game/update/moby1045.h
#include "types.h"

// ---- globals
extern undefined4 DAT_001989ac; /* 0x1989ac */
extern undefined4 DAT_0019adfc; /* 0x19adfc */
extern undefined4 DAT_007402a0; /* 0x7402a0 */
extern undefined4 DAT_007402a4; /* 0x7402a4 */
extern undefined4 DAT_007402a8; /* 0x7402a8 */
extern undefined4 DAT_007402b0; /* 0x7402b0 */
extern undefined4 DAT_007402b4; /* 0x7402b4 */
extern undefined4 DAT_007402b8; /* 0x7402b8 */
extern undefined4 DAT_007402bc; /* 0x7402bc */
extern undefined4 DAT_007402c4; /* 0x7402c4 */
extern undefined4 DAT_007402c8; /* 0x7402c8 */
extern undefined4 DAT_007402cc; /* 0x7402cc */
extern undefined4 DAT_007402d0; /* 0x7402d0 */
extern undefined4 DAT_007402d4; /* 0x7402d4 */
extern undefined4 DAT_007402d8; /* 0x7402d8 */
extern undefined4 DAT_007402dc; /* 0x7402dc */
extern undefined4 DAT_007402e0; /* 0x7402e0 */
extern undefined4 DAT_007402e4; /* 0x7402e4 */
extern undefined4 DAT_007402e8; /* 0x7402e8 */
extern undefined4 DAT_007402ec; /* 0x7402ec */
extern undefined4 DAT_007402f0; /* 0x7402f0 */
extern undefined4 DAT_007402f4; /* 0x7402f4 */
extern undefined4 DAT_007402f8; /* 0x7402f8 */
extern undefined4 DAT_007402fc; /* 0x7402fc */
extern undefined4 DAT_00740300; /* 0x740300 */
extern undefined4 DAT_00740304; /* 0x740304 */
extern undefined4 DAT_00740308; /* 0x740308 */
extern undefined4 DAT_0074030c; /* 0x74030c */
extern undefined4 DAT_00740310; /* 0x740310 */
extern undefined4 DAT_0074031c; /* 0x74031c */
extern undefined4 DAT_00740320; /* 0x740320 */
extern undefined4 DAT_00740324; /* 0x740324 */
extern undefined4 DAT_00740328; /* no defined data */
extern undefined4 DAT_0074032c; /* no defined data */
extern undefined4 DAT_00740388; /* 0x740388 */
extern undefined4 DAT_0074038c; /* 0x74038c */
extern undefined4 DAT_00740390; /* 0x740390 */
extern undefined4 DAT_007403a0; /* 0x7403a0 */
extern undefined4 DAT_0096ba10; /* no defined data */
extern undefined4 DAT_0096ba28; /* 0x96ba28 */
extern undefined4 DAT_00e5ff40; /* 0xe5ff40 */
extern undefined4 DAT_00e5ff44; /* 0xe5ff44 */
extern undefined4 DAT_00e5ff48; /* 0xe5ff48 */
extern undefined4 DAT_00e5ff4c; /* 0xe5ff4c */
extern undefined4 DAT_00e5ff50; /* 0xe5ff50 */
extern undefined4 DAT_00e5ff54; /* 0xe5ff54 */
extern undefined4 DAT_00e5ff58; /* 0xe5ff58 */
extern undefined4 DAT_00e5ff5c; /* 0xe5ff5c */
extern undefined4 DAT_00e5ff68; /* 0xe5ff68 */
extern undefined4 DAT_00e5ff70; /* 0xe5ff70 */
extern undefined4 DAT_00e5ff74; /* 0xe5ff74 */
extern undefined4 DAT_00e5ff78; /* 0xe5ff78 */
extern undefined4 DAT_00e5ff7c; /* 0xe5ff7c */
extern undefined4 DAT_00e5ff80; /* 0xe5ff80 */
extern undefined4 DAT_00e5ff84; /* 0xe5ff84 */
extern undefined4 DAT_00e5ff88; /* 0xe5ff88 */
extern undefined4 DAT_00e5ff8c; /* 0xe5ff8c */
extern undefined4 DAT_00e5ff90; /* 0xe5ff90 */
extern undefined4 DAT_00e5ff94; /* 0xe5ff94 */
extern undefined2 DAT_00e5ff98; /* 0xe5ff98 */
extern undefined2 DAT_00e5ff9a; /* 0xe5ff9a */
extern undefined4 DAT_00e5ff9c; /* 0xe5ff9c */
extern undefined4 DAT_00e5ffa0; /* 0xe5ffa0 */
extern undefined4 DAT_00e5ffa4; /* 0xe5ffa4 */
extern undefined4 DAT_00e5ffa8; /* 0xe5ffa8 */
extern undefined4 DAT_00e5ffac; /* 0xe5ffac */
extern undefined4 DAT_00e61250; /* 0xe61250 */
extern undefined4 DAT_00e61254; /* 0xe61254 */
extern undefined4 DAT_00e61258; /* 0xe61258 */
extern undefined4 DAT_00e61260; /* 0xe61260 */
extern undefined4 DAT_00e61264; /* 0xe61264 */
extern undefined4 DAT_00e61268; /* 0xe61268 */
extern undefined4 DAT_00e6126c; /* 0xe6126c */
extern undefined4 DAT_00e61270; /* 0xe61270 */
extern undefined2 DAT_00e61328; /* 0xe61328 */
extern undefined2 DAT_00e6132a; /* 0xe6132a */
extern undefined4 DAT_00e61340; /* 0xe61340 */
extern undefined4 DAT_00e61344; /* 0xe61344 */
extern undefined4 DAT_00e61348; /* 0xe61348 */
extern pointer32 PTR_M1045_00196fc8_007085b0; /* 0x7085b0 */
extern pointer32 PTR_M1045_00198280_007085c8; /* 0x7085c8 */
extern pointer32 PTR_M1045_001989d0_007085d8; /* 0x7085d8 */
extern pointer32 PTR_M1046_0019d958_007086a0; /* 0x7086a0 */
extern undefined4 _DAT_001983d0; /* direct read */

// ---- functions
undefined1 M1045_00196d68(int param_1,longlong param_2);
void M1045_00196fc8(int param_1);
void M1045_00197938(undefined4 param_1);
void M1045_00197c88 (double param_1,double param_2,double param_3,double param_4,double param_5, int param_6,int param_7);
void M1045_00198280(int param_1);
void M1045_00198408 (double param_1,double param_2,int param_3,undefined8 param_4,int param_5, undefined8 param_6,uint param_7);
void M1045_001989d0 (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulonglong M1045_00198cac(undefined8 param_1,int param_2,int *param_3);
void M1045_00198d88(MobyInstance *param_1,longlong param_2,undefined8 param_3);
void M1045_00199288(double param_1,float *param_2);
void M1045_00199300(MobyInstance *param_1);
void M1045_00199398(MobyInstance *param_1);
void M1045_001995e0(int param_1,undefined4 *param_2);
double M1045_00199888(longlong param_1,float *param_2);
void M1045_0019add8(void);
void UpdateMoby_1045(MobyInstance *moby);
