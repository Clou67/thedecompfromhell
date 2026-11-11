#pragma once
// game/update/moby1524.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ab4b4; /* 0x7ab4b4 */
extern undefined4 DAT_007ab4d8; /* 0x7ab4d8 */
extern undefined4 DAT_007ab4dc; /* 0x7ab4dc */
extern undefined4 DAT_007ab4e0; /* 0x7ab4e0 */
extern undefined4 DAT_007ab4e4; /* 0x7ab4e4 */
extern undefined4 DAT_007ab4e8; /* 0x7ab4e8 */
extern undefined4 DAT_007ab4ec; /* 0x7ab4ec */
extern undefined4 DAT_007ab4f0; /* 0x7ab4f0 */
extern undefined4 DAT_007ab4f4; /* 0x7ab4f4 */
extern undefined4 DAT_007ab4f8; /* 0x7ab4f8 */
extern undefined4 DAT_007ab4fc; /* 0x7ab4fc */
extern undefined4 DAT_007ab500; /* 0x7ab500 */
extern undefined4 DAT_007ab504; /* 0x7ab504 */
extern undefined4 DAT_007ab508; /* 0x7ab508 */
extern undefined4 DAT_007ab514; /* 0x7ab514 */
extern undefined4 DAT_007ab518; /* 0x7ab518 */
extern undefined4 DAT_007ab51c; /* 0x7ab51c */
extern undefined4 DAT_007ab520; /* 0x7ab520 */
extern undefined4 DAT_007ab524; /* 0x7ab524 */
extern undefined4 DAT_007ab528; /* 0x7ab528 */
extern undefined4 DAT_007ab52c; /* 0x7ab52c */

// ---- functions
void M1524_002921d0(void);
void M1524_00292250(int param_1,float *param_2,int param_3,int param_4);
void M1524_002925d0(int param_1);
void UpdateMoby_1524(MobyInstance *moby);
MobyInstance * M1524_00292c60 (double param_1,f32 *param_2,undefined4 *param_3,undefined4 param_4);
