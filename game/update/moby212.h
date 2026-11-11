#pragma once
// game/update/moby212.h
#include "types.h"

// ---- globals
extern undefined4 DAT_002f0cc0; /* 0x2f0cc0 */
extern undefined4 DAT_007fec40; /* 0x7fec40 */
extern undefined4 DAT_007feccc; /* 0x7feccc */
extern undefined4 DAT_007fed3c; /* 0x7fed3c */
extern undefined4 DAT_007fed80; /* 0x7fed80 */
extern undefined4 DAT_010bb440; /* 0x10bb440 */

// ---- functions
void M1412_002ef9c8(int param_1);
void M1412_002effe0(int param_1);
void M1412_002f0594(void);
MobyInstance * M1412_002f05c0 (double param_1,int param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5, undefined2 param_6);
void M1412_002f0898(double param_1,MobyInstance *param_2,undefined8 param_3);
void UpdateMoby_212(MobyInstance *moby);
void M1412_002f1624(void);
double M1412_002f1660(double param_1,double param_2,double param_3);
void M1412_002f1710(int param_1);
