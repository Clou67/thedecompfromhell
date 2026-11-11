#pragma once
// game/update/moby253.h
#include "types.h"

// ---- globals
extern undefined4 DAT_0031b3f4; /* 0x31b3f4 */
extern undefined4 DAT_007ffc00; /* 0x7ffc00 */
extern undefined4 DAT_007ffc04; /* 0x7ffc04 */
extern undefined4 DAT_007ffc08; /* 0x7ffc08 */
extern undefined4 DAT_007ffc0c; /* 0x7ffc0c */
extern undefined4 DAT_007ffc1c; /* 0x7ffc1c */
extern undefined4 DAT_007ffc20; /* 0x7ffc20 */
extern undefined4 DAT_007ffc30; /* 0x7ffc30 */
extern undefined4 DAT_007ffcbc; /* 0x7ffcbc */
extern undefined4 DAT_007ffdc0; /* 0x7ffdc0 */
extern undefined4 DAT_007ffdc8; /* 0x7ffdc8 */
extern undefined4 DAT_007ffdec; /* 0x7ffdec */
extern undefined4 DAT_007ffdf0; /* 0x7ffdf0 */
extern undefined4 DAT_007ffdf4; /* 0x7ffdf4 */
extern undefined4 DAT_007ffdf8; /* 0x7ffdf8 */
extern undefined4 DAT_007ffdfc; /* 0x7ffdfc */
extern undefined4 DAT_007ffe04; /* 0x7ffe04 */
extern undefined4 DAT_007ffe08; /* 0x7ffe08 */
extern undefined4 DAT_007ffe0c; /* 0x7ffe0c */
extern undefined4 DAT_007ffe10; /* 0x7ffe10 */
extern int g_Batalia_TankKilledBySandmouse[4]; /* 0xa15f3c */

// ---- functions
void M253_00318b50(int param_1);
void M253_003194d8(MobyInstance *param_1);
void M253_00319530(int param_1);
void M253_00319588(int param_1);
undefined8 M253_003195e0(int param_1);
longlong M253_00319670(int param_1);
void M253_003196c0(int param_1);
void M253_00319a0c(void);
void M253_00319a58(undefined4 param_1,undefined8 param_2,int param_3);
ulonglong M253_0031a070(MobyInstance *param_1,longlong param_2);
void M253_0031a728(MobyInstance *param_1);
void M253_0031b2f8(MobyInstance *param_1);
void M253_0031b438(MobyInstance *param_1);
void UpdateMoby_253(MobyInstance *moby);
