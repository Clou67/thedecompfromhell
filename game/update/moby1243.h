#pragma once
// game/update/moby1243.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00222f98; /* 0x222f98 */
extern undefined4 DAT_0076d1dc; /* 0x76d1dc */
extern undefined4 DAT_0076d200; /* 0x76d200 */
extern undefined4 DAT_0076d204; /* 0x76d204 */
extern undefined4 DAT_0076d208; /* 0x76d208 */
extern undefined4 DAT_0076d20c; /* 0x76d20c */
extern undefined4 DAT_0076d210; /* 0x76d210 */
extern undefined4 DAT_0076d214; /* 0x76d214 */
extern undefined4 DAT_0076d218; /* 0x76d218 */
extern undefined4 DAT_0076d21c; /* 0x76d21c */
extern undefined4 DAT_0076d220; /* 0x76d220 */
extern undefined4 DAT_0076d224; /* 0x76d224 */
extern undefined4 DAT_0076d228; /* 0x76d228 */
extern undefined4 DAT_0076d22c; /* 0x76d22c */
extern undefined4 DAT_0076d230; /* 0x76d230 */
extern undefined4 DAT_00f0d2d8; /* 0xf0d2d8 */
extern undefined4 DAT_00f0d2dc; /* 0xf0d2dc */
extern undefined4 DAT_00f0d2e0; /* 0xf0d2e0 */
extern undefined4 DAT_00f0d2e4; /* 0xf0d2e4 */
extern pointer32 PTR_M1246_0022485c_00709818; /* 0x709818 */
extern pointer32 PTR_M1246_00224a00_00709820; /* 0x709820 */

// ---- functions
void M1243_00222564(void);
void M1243_00222588(longlong param_1,undefined8 param_2);
undefined8 M1243_00222788(int param_1,float *param_2);
void M1243_002229f8(int param_1,Vec4 *param_2,undefined4 *param_3);
void M1243_00222c50(int param_1,float *param_2,Vec4 *param_3);
ulonglong M1243_00222e88 (double param_1,int param_2,float *param_3,undefined8 param_4,int param_5);
void UpdateMoby_1243(MobyInstance *moby);
