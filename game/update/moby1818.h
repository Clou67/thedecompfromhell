#pragma once
// game/update/moby1818.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b7e00; /* 0x7b7e00 */
extern undefined4 DAT_007b7e04; /* 0x7b7e04 */
extern undefined4 DAT_007b7e08; /* 0x7b7e08 */
extern undefined4 DAT_007b7e0c; /* 0x7b7e0c */
extern undefined4 DAT_007b7e10; /* 0x7b7e10 */
extern undefined4 DAT_007b7e18; /* 0x7b7e18 */
extern undefined4 DAT_007b7e20; /* 0x7b7e20 */
extern undefined4 DAT_007b7e24; /* 0x7b7e24 */
extern undefined4 DAT_007b7e28; /* 0x7b7e28 */
extern undefined4 DAT_007b7e2c; /* 0x7b7e2c */
extern undefined4 DAT_007b7e30; /* 0x7b7e30 */
extern undefined4 DAT_007b7e34; /* 0x7b7e34 */
extern undefined4 DAT_007b7e3c; /* 0x7b7e3c */
extern undefined4 DAT_007b7e40; /* 0x7b7e40 */
extern undefined4 DAT_007b7e44; /* 0x7b7e44 */
extern undefined4 DAT_007b7e48; /* 0x7b7e48 */
extern undefined4 DAT_007b7e4c; /* 0x7b7e4c */
extern undefined4 DAT_007b7e50; /* 0x7b7e50 */
extern undefined4 DAT_007b7e54; /* 0x7b7e54 */
extern undefined4 DAT_007b7e58; /* 0x7b7e58 */
extern undefined4 DAT_007b7e5c; /* no defined data */
extern undefined4 DAT_007b7e6c; /* no defined data */
extern undefined4 DAT_007b7e7c; /* no defined data */
extern undefined4 DAT_010c5158; /* 0x10c5158 */
extern undefined4 DAT_010c5160; /* 0x10c5160 */
extern undefined4 DAT_010c5164; /* 0x10c5164 */
extern undefined4 DAT_010c5168; /* 0x10c5168 */
extern undefined4 DAT_010c5170; /* 0x10c5170 */
extern undefined4 DAT_010c5178; /* 0x10c5178 */
extern undefined4 DAT_010c517c; /* 0x10c517c */
extern undefined4 DAT_010c518c; /* 0x10c518c */
extern undefined4 DAT_010c5190; /* 0x10c5190 */
extern undefined4 DAT_010c5194; /* 0x10c5194 */
extern undefined4 DAT_010c5198; /* 0x10c5198 */
extern undefined4 DAT_010c519c; /* 0x10c519c */
extern undefined4 DAT_010c51a4; /* 0x10c51a4 */
extern pointer32 PTR_M1818_002bea00_0070afe8; /* 0x70afe8 */

// ---- functions
void M1818_002bc878(undefined8 param_1,float *param_2);
void M1818_002bc960(undefined8 param_1,float *param_2);
MobyInstance * M1818_002bca98 (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6 ,undefined8 param_7,float *param_8,int param_9);
void M1818_002bd110(MobyInstance *param_1,longlong param_2);
void M1818_002bdc98(int param_1,float *param_2);
void M1818_002be8f8(int param_1);
void M1818_002bea00(int param_1);
void M1818_002bea80(MobyInstance *param_1);
void UpdateMoby_1818(MobyInstance *moby);
