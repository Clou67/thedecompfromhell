#pragma once
// game/update/moby1903.h
#include "types.h"

// ---- globals
extern undefined4 DAT_007ca594; /* 0x7ca594 */
extern undefined4 DAT_007ca5c0; /* 0x7ca5c0 */
extern undefined4 DAT_007ca5c4; /* 0x7ca5c4 */
extern undefined4 DAT_007ca5c8; /* 0x7ca5c8 */
extern undefined4 DAT_007ca5d0; /* 0x7ca5d0 */
extern undefined4 DAT_007ca5d4; /* 0x7ca5d4 */
extern undefined4 DAT_007ca5dc; /* no defined data */
extern undefined4 DAT_007ca5e0; /* no defined data */
extern undefined4 DAT_007ca5f4; /* no defined data */
extern undefined4 DAT_007ca5f8; /* no defined data */
extern undefined4 DAT_007ca604; /* 0x7ca604 */
extern undefined4 DAT_007ca608; /* 0x7ca608 */
extern undefined4 DAT_007ca60c; /* no defined data */
extern undefined4 DAT_007ca610; /* no defined data */
extern undefined4 DAT_007ca614; /* 0x7ca614 */
extern undefined4 DAT_007ca618; /* 0x7ca618 */
extern undefined4 DAT_007cdaf0; /* 0x7cdaf0 */
extern undefined4 DAT_007d2b78; /* 0x7d2b78 */
extern undefined1 DAT_010b6010; /* 0x10b6010 */
extern undefined4 DAT_010b6014; /* 0x10b6014 */
extern undefined4 DAT_010b6018; /* 0x10b6018 */
extern undefined4 DAT_010b601c; /* 0x10b601c */
extern undefined4 DAT_010b6020; /* 0x10b6020 */
extern undefined4 DAT_010b6024; /* 0x10b6024 */
extern undefined4 DAT_010b6028; /* 0x10b6028 */
extern undefined4 DAT_010b602c; /* 0x10b602c */
extern undefined4 DAT_010b6030; /* 0x10b6030 */
extern undefined4 DAT_010b6034; /* 0x10b6034 */
extern undefined4 DAT_010b6038; /* 0x10b6038 */
extern undefined4 DAT_010b603c; /* 0x10b603c */
extern undefined4 DAT_010b6040; /* 0x10b6040 */
extern undefined4 DAT_010b6044; /* 0x10b6044 */
extern undefined4 DAT_010b6048; /* 0x10b6048 */
extern undefined4 DAT_010b604c; /* 0x10b604c */
extern undefined4 DAT_010b6050; /* no defined data */
extern undefined * PTR_DAT_007cdab0; /* 0x7cdab0 */
extern pointer PTR_DAT_007cdac0; /* 0x7cdac0 */
extern undefined * PTR_DAT_007cdae0; /* 0x7cdae0 */
extern undefined * PTR_DAT_007d2ac8; /* 0x7d2ac8 */
extern pointer PTR_DAT_007d2af4; /* 0x7d2af4 */
extern undefined * PTR_DAT_007d87b0; /* 0x7d87b0 */
extern pointer PTR_DAT_007d87d0; /* 0x7d87d0 */
extern pointer32 PTR_M1903_002d4ad0_0070b340; /* 0x70b340 */
extern undefined * PTR_PTR_007d2b4c; /* 0x7d2b4c */
extern undefined * PTR_PTR_007d8810; /* 0x7d8810 */

// ---- functions
void M1903_002d47e8(void);
void M1903_002d4800(int param_1);
void M1903_002d48f0(int param_1);
void M1903_002d49e0(int param_1);
void M1903_002d4ad0(void);
void M1903_002d5170 (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6, int *param_7);
void M1903_002d53b8 (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5, undefined8 param_6,float *param_7);
void M1903_002d5510(longlong param_1);
void M1903_002d55d0(longlong param_1);
void M1903_002d5690(longlong param_1);
void UpdateMoby_1903(MobyInstance *moby);
