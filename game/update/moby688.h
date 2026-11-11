#pragma once
// game/update/moby688.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0041bae8; /* 0x41bae8 */
extern undefined4 DAT_0071d508; /* 0x71d508 */
extern undefined4 DAT_0071d50c; /* 0x71d50c */
extern undefined4 DAT_0085741c; /* 0x85741c */
extern undefined4 DAT_00857440; /* 0x857440 */
extern undefined4 DAT_00857444; /* 0x857444 */
extern undefined4 DAT_00857448; /* 0x857448 */
extern undefined4 DAT_00857498; /* 0x857498 */
extern undefined4 DAT_008574bc; /* 0x8574bc */
extern undefined4 DAT_008574c0; /* 0x8574c0 */
extern undefined4 DAT_008574c4; /* 0x8574c4 */
extern undefined4 DAT_008574c8; /* 0x8574c8 */
extern undefined4 DAT_008574cc; /* 0x8574cc */
extern undefined4 DAT_008574d0; /* 0x8574d0 */
extern undefined4 DAT_008574d4; /* 0x8574d4 */
extern undefined4 DAT_008574d8; /* 0x8574d8 */
extern undefined4 DAT_008574dc; /* 0x8574dc */
extern undefined4 DAT_008574e0; /* 0x8574e0 */
extern undefined4 DAT_008574e4; /* 0x8574e4 */
extern undefined4 DAT_008574e8; /* 0x8574e8 */
extern undefined4 DAT_008574ec; /* 0x8574ec */
extern undefined4 DAT_008574f4; /* 0x8574f4 */
extern undefined4 DAT_008574f8; /* 0x8574f8 */
extern undefined4 DAT_00857508; /* 0x857508 */
extern undefined4 DAT_0085750c; /* 0x85750c */
extern undefined4 DAT_00857510; /* 0x857510 */
extern undefined4 DAT_00857514; /* 0x857514 */
extern undefined4 DAT_00857518; /* 0x857518 */
extern undefined4 DAT_0085751c; /* 0x85751c */
extern undefined4 DAT_00857520; /* 0x857520 */
extern undefined4 DAT_00857524; /* 0x857524 */
extern undefined4 DAT_00857528; /* 0x857528 */
extern undefined4 DAT_0085752c; /* 0x85752c */
extern undefined4 DAT_00857530; /* 0x857530 */
extern undefined4 DAT_00857534; /* 0x857534 */
extern undefined4 DAT_00857538; /* 0x857538 */
extern undefined4 DAT_0085753c; /* 0x85753c */
extern undefined4 DAT_00857540; /* 0x857540 */
extern undefined4 DAT_00857548; /* 0x857548 */
extern undefined4 DAT_0085754c; /* 0x85754c */
extern undefined4 DAT_00857550; /* 0x857550 */
extern undefined4 DAT_00857554; /* 0x857554 */
extern undefined4 DAT_00857558; /* 0x857558 */
extern undefined4 DAT_0085755c; /* 0x85755c */
extern undefined4 DAT_00857560; /* 0x857560 */
extern undefined4 DAT_00857564; /* 0x857564 */
extern undefined4 DAT_00857568; /* 0x857568 */
extern undefined4 DAT_0085756c; /* 0x85756c */
extern undefined4 DAT_00857570; /* 0x857570 */
extern undefined4 DAT_00857574; /* 0x857574 */
extern undefined4 DAT_00857578; /* 0x857578 */
extern undefined4 DAT_0085757c; /* 0x85757c */
extern undefined4 DAT_008575ac; /* 0x8575ac */
extern undefined4 DAT_008575b0; /* 0x8575b0 */
extern undefined4 DAT_008575b4; /* 0x8575b4 */
extern undefined4 DAT_00857604; /* 0x857604 */
extern undefined4 DAT_00857634; /* no defined data */
extern undefined4 DAT_00857640; /* no defined data */
extern undefined4 DAT_0085771c; /* no defined data */
extern undefined4 DAT_00857794; /* no defined data */
extern undefined4 DAT_008577a4; /* no defined data */
extern undefined4 DAT_008577b4; /* no defined data */
extern undefined4 DAT_008577c4; /* no defined data */
extern undefined4 DAT_008577d4; /* no defined data */
extern undefined4 DAT_010cc8d0; /* 0x10cc8d0 */
extern undefined4 DAT_010cc8d4; /* 0x10cc8d4 */
extern undefined4 DAT_010cc8d8; /* 0x10cc8d8 */
extern pointer32 PTR_M688_00417220_0070e0d8; /* 0x70e0d8 */

// ---- functions
void M688_00415ec4(void);
void M688_00415f18(MobyInstance *moby);
void M688_00416c74(void);
void M688_00416c90(int param_1,int param_2);
void M688_00416e80(double param_1,int param_2,int param_3);
void M688_00417220(int param_1);
void UpdateMoby_689(MobyInstance *moby);
void M688_00418724(void);
void M688_00418738(void);
void M688_0041873c (double param_1,double param_2,double param_3,longlong param_4,int param_5);
void M688_004189e4 (double param_1,double param_2,double param_3,double param_4,longlong param_5, int param_6);
void M688_00418d00 (double param_1,double param_2,double param_3,double param_4,double param_5);
void M688_00418d90(double param_1,double param_2,double param_3,double param_4);
void M688_00418fc0 (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4);
void M688_004190b8 (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5, undefined8 param_6,ulonglong param_7);
void M69_00419368(undefined8 param_1,int param_2);
void M688_00419870 (undefined8 param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5, int param_6);
int M688_00419b20(int param_1,int param_2,undefined8 param_3,undefined8 param_4);
void M688_0041ad10(undefined8 param_1,int param_2);
void M688_0041b008(int param_1);
void M688_0041b7c0 (double param_1,double param_2,MobyInstance *param_3,longlong param_4);
void M688_0041bb00(longlong param_1,longlong param_2);
double M688_0041bd08 (double param_1,double param_2,double param_3,double param_4,double param_5);
void M688_0041bdd4 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6);
