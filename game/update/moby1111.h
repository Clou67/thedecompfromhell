#pragma once
// game/update/moby1111.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007643ec; /* 0x7643ec */
extern undefined4 DAT_007643f8; /* 0x7643f8 */
extern undefined4 DAT_007643fc; /* 0x7643fc */
extern undefined4 DAT_00ef1a80; /* 0xef1a80 */
extern undefined4 DAT_00ef1a84; /* 0xef1a84 */
extern undefined4 DAT_00ef1a88; /* 0xef1a88 */
extern undefined4 DAT_00ef1a8c; /* 0xef1a8c */
extern undefined4 DAT_00ef1a90; /* 0xef1a90 */
extern undefined4 DAT_00ef1a94; /* 0xef1a94 */
extern undefined4 DAT_00ef1a98; /* no defined data */
extern undefined4 DAT_00ef1a9c; /* no defined data */
extern undefined4 DAT_00ef1aa0; /* no defined data */
extern undefined4 DAT_00ef1aa4; /* no defined data */
extern undefined4 DAT_00ef1aa8; /* no defined data */
extern undefined4 DAT_00ef1aac; /* no defined data */
extern undefined4 DAT_00ef1d98; /* no defined data */
extern undefined4 DAT_00ef1d9c; /* no defined data */
extern undefined4 DAT_00ef1e98; /* no defined data */
extern undefined4 DAT_00ef1e9c; /* no defined data */
extern undefined4 DAT_00ef1ea0; /* no defined data */
extern undefined4 DAT_00ef2198; /* no defined data */
extern undefined4 DAT_00ef22a0; /* no defined data */
extern undefined4 DAT_00ef22a4; /* no defined data */
extern undefined4 DAT_00ef22a8; /* no defined data */
extern undefined4 DAT_00ef22ac; /* no defined data */
extern undefined4 DAT_00ef24a0; /* no defined data */
extern undefined4 DAT_00ef24a4; /* no defined data */
extern undefined4 DAT_00ef26b0; /* 0xef26b0 */
extern undefined4 DAT_00ef26b4; /* 0xef26b4 */
extern undefined4 DAT_00ef26b8; /* 0xef26b8 */
extern undefined4 DAT_00ef26bc; /* 0xef26bc */
extern pointer32 PTR_M1111_Pokitaru_Ocean_00708d88; /* 0x708d88 */

// ---- functions
double M1111_001d0f18(void);
void FUN_001d0f24(double param_1);
void M1111_Pokitaru_Ocean(int param_1);
void UpdateMoby_1111(MobyInstance *moby);
