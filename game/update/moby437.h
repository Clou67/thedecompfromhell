#pragma once
// game/update/moby437.h
#include "types.h"

// ---- globals
extern undefined4 DAT_003760d0; /* 0x3760d0 */
extern undefined4 DAT_00376524; /* 0x376524 */
extern undefined4 DAT_0037871c; /* 0x37871c */
extern undefined4 DAT_0084184c; /* 0x84184c */
extern undefined4 DAT_00841874; /* 0x841874 */
extern undefined4 DAT_00841878; /* 0x841878 */
extern undefined4 DAT_0084187c; /* 0x84187c */
extern undefined4 DAT_00841880; /* 0x841880 */
extern undefined4 DAT_00841884; /* 0x841884 */
extern undefined4 DAT_0084188c; /* 0x84188c */
extern undefined4 DAT_00841890; /* 0x841890 */
extern undefined4 DAT_00841894; /* 0x841894 */
extern undefined4 DAT_00841898; /* 0x841898 */
extern undefined4 DAT_0084189c; /* 0x84189c */
extern undefined4 DAT_008418a0; /* 0x8418a0 */
extern undefined4 DAT_008418a4; /* 0x8418a4 */
extern undefined4 DAT_008418a8; /* 0x8418a8 */
extern undefined4 DAT_008418b0; /* 0x8418b0 */
extern undefined4 DAT_008418b4; /* 0x8418b4 */
extern undefined4 DAT_008418b8; /* 0x8418b8 */
extern undefined4 DAT_008418bc; /* 0x8418bc */
extern undefined4 DAT_010c5154; /* 0x10c5154 */
extern undefined4 DAT_010c515c; /* 0x10c515c */
extern undefined4 DAT_010c5184; /* 0x10c5184 */

// ---- functions
void M437_00375fd0(void);
void M437_00375ff8(undefined8 param_1,float *param_2);
void M437_003760e8(undefined8 param_1,float *param_2);
undefined8 M437_003762b8(undefined8 param_1,undefined4 *param_2);
void M437_00376538(undefined8 param_1,int param_2);
MobyInstance * M437_003765e0 (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6 ,undefined8 param_7,float *param_8,int param_9);
void M437_00376c48(longlong param_1,longlong param_2);
void M437_003777f8(int param_1,float *param_2);
void UpdateMoby_437(MobyInstance *moby);
