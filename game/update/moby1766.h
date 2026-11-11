#pragma once
// game/update/moby1766.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007b7620; /* 0x7b7620 */
extern undefined4 DAT_007b7624; /* 0x7b7624 */
extern undefined4 DAT_007b7628; /* 0x7b7628 */
extern undefined4 DAT_007b7630; /* 0x7b7630 */
extern undefined4 DAT_007b7670; /* 0x7b7670 */
extern undefined4 DAT_007b76b0; /* 0x7b76b0 */
extern undefined4 DAT_007b76c0; /* 0x7b76c0 */
extern undefined4 DAT_007b76c4; /* 0x7b76c4 */
extern undefined4 DAT_007b772c; /* 0x7b772c */
extern undefined4 DAT_007b775c; /* 0x7b775c */
extern undefined4 DAT_007b77ac; /* 0x7b77ac */
extern undefined4 DAT_010a0230; /* 0x10a0230 */
extern undefined4 DAT_010a0234; /* 0x10a0234 */

// ---- functions
void M1766_002b3468(void);
void M1766_002b36cc(void);
void M1766_002b36e0 (double param_1,undefined8 param_2,double param_3,float *param_4);
undefined8 M1766_002b3778(int param_1);
void UpdateMoby_1766(MobyInstance *moby);
void M1766_002b4780(void);
