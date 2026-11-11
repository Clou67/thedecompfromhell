#pragma once
// game/update/moby238.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003071b8; /* 0x3071b8 */
extern undefined4 DAT_007ff44c; /* 0x7ff44c */
extern undefined4 DAT_007ff470; /* 0x7ff470 */
extern undefined4 DAT_007ff474; /* 0x7ff474 */
extern undefined4 DAT_007ff478; /* 0x7ff478 */
extern undefined4 DAT_007ff47c; /* 0x7ff47c */
extern undefined4 DAT_007ff480; /* 0x7ff480 */
extern undefined4 DAT_007ff484; /* 0x7ff484 */
extern undefined4 DAT_007ff488; /* 0x7ff488 */
extern undefined4 DAT_007ff48c; /* 0x7ff48c */
extern undefined4 DAT_007ff490; /* 0x7ff490 */
extern undefined4 DAT_007ff494; /* 0x7ff494 */
extern undefined4 DAT_007ff498; /* 0x7ff498 */
extern undefined4 DAT_007ff49c; /* 0x7ff49c */
extern undefined4 DAT_007ff4a0; /* 0x7ff4a0 */
extern undefined4 DAT_007ff4a4; /* 0x7ff4a4 */
extern undefined4 DAT_007ff4a8; /* 0x7ff4a8 */
extern undefined4 DAT_007ff4ac; /* 0x7ff4ac */
extern undefined4 DAT_007ff4b0; /* 0x7ff4b0 */
extern undefined4 DAT_007ff4b4; /* 0x7ff4b4 */
extern undefined4 DAT_007ff4b8; /* 0x7ff4b8 */
extern undefined4 DAT_007ff4bc; /* 0x7ff4bc */
extern undefined4 DAT_007ff4c0; /* 0x7ff4c0 */
extern undefined4 DAT_007ff4c4; /* 0x7ff4c4 */
extern undefined4 DAT_007ff4c8; /* 0x7ff4c8 */
extern undefined4 DAT_007ff4cc; /* 0x7ff4cc */
extern undefined4 DAT_007ff4d0; /* 0x7ff4d0 */
extern undefined4 DAT_007ff4d4; /* 0x7ff4d4 */
extern undefined4 DAT_007ff4d8; /* 0x7ff4d8 */
extern undefined4 DAT_007ff4dc; /* 0x7ff4dc */
extern undefined4 DAT_007ff4e0; /* 0x7ff4e0 */
extern undefined4 DAT_007ff4e4; /* 0x7ff4e4 */
extern undefined4 DAT_007ff4e8; /* 0x7ff4e8 */
extern undefined4 DAT_007ff4ec; /* 0x7ff4ec */
extern undefined4 DAT_007ff4f8; /* 0x7ff4f8 */
extern undefined4 DAT_007ff4fc; /* 0x7ff4fc */
extern undefined4 DAT_007ff500; /* 0x7ff500 */
extern undefined4 DAT_007ff504; /* 0x7ff504 */
extern undefined4 DAT_007ff508; /* 0x7ff508 */
extern undefined4 DAT_007ff50c; /* 0x7ff50c */
extern undefined4 DAT_007ff510; /* 0x7ff510 */
extern undefined4 DAT_007ff514; /* 0x7ff514 */
extern undefined4 DAT_007ff51c; /* 0x7ff51c */
extern undefined4 DAT_007ff520; /* 0x7ff520 */
extern undefined4 DAT_007ff524; /* 0x7ff524 */
extern undefined4 DAT_007ff528; /* 0x7ff528 */
extern undefined4 DAT_007ff534; /* no defined data */

// ---- functions
void M238_00305928(void);
undefined8 M238_00305940(MobyInstance *param_1);
void M238_003059f8(int param_1);
void M238_00305a50(int param_1);
undefined8 M238_00305aa8(int param_1);
longlong M238_00305b04(int param_1);
double M238_00305b50(int param_1);
void M238_00305be0(int param_1);
void M238_00305d08(undefined8 param_1,undefined8 param_2);
void M238_00306148(int param_1);
void M238_00306680(void);
undefined8 M238_00306888(undefined8 param_1,MobyInstance *param_2);
void M238_00306c48 (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,int param_4);
void UpdateMoby_238(MobyInstance *moby);
