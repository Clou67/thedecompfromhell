#pragma once
// idol/collmath.h
#include "types.h"

// ---- globals
extern undefined * PTR_PTR_006616b0; /* 0x6616b0 */
extern pointer PTR_PTR_006616cc; /* 0x6616cc */
extern undefined * PTR_PTR_00661710; /* 0x661710 */
extern undefined * PTR_PTR_00661748; /* 0x661748 */
extern undefined * PTR_PTR_00661760; /* 0x661760 */
extern pointer PTR_PTR_0066177c; /* 0x66177c */
extern undefined * PTR_PTR_006617a0; /* 0x6617a0 */
extern undefined * PTR_PTR_006617ec; /* 0x6617ec */
extern pointer PTR_PTR_0071c7d0; /* 0x71c7d0 */
extern pointer PTR_PTR_0071c7d4; /* 0x71c7d4 */

// ---- functions
undefined4 FUN_005e6a10(undefined4 param_1);
undefined4 FUN_005e6a68(undefined4 param_1);
void FUN_005e6ac0(undefined4 *param_1);
void FUN_005e6ad0(undefined4 *param_1);
void FUN_005e6ae0(undefined4 *param_1);
void FUN_005e6af0(u8 *param_1,u8 *param_2);
void FUN_005e6e10(undefined4 *param_1);
void FUN_005e6e20(undefined4 *param_1);
void FUN_005e6e30(undefined4 *param_1);
void FUN_005e6e40(undefined4 *param_1);
void FUN_005e6e50(void);
void FUN_005e6e54(undefined4 *param_1);
void FUN_005e6e64(undefined4 *param_1);
void FUN_005e6e74(undefined4 *param_1);
void FUN_005e6e84(undefined4 *param_1);
void FUN_005e6ec4(undefined4 *param_1);
void FUN_005e6f04(undefined4 *param_1);
void FUN_005e6f44(undefined4 *param_1);
void FUN_005e6f84(undefined4 *param_1);
void FUN_005e6fc4(undefined4 *param_1);
void FUN_005e6fd4(undefined4 *param_1);
void FUN_005e6fe4(undefined4 *param_1);
void FUN_005e7024(undefined8 param_1,undefined8 param_2,uint param_3);
void FUN_005e7058(undefined8 param_1,undefined8 param_2);
undefined8 FUN_005e7080(void);
void FUN_005e7088(undefined4 *param_1);
void FUN_005e70c8(undefined4 *param_1);
void FUN_005e70d8(undefined4 *param_1);
void FUN_005e7118(undefined4 *param_1);
void FUN_005e7128(undefined4 *param_1);
void FUN_005e7168(undefined4 *param_1);
void FUN_005e7178(undefined4 *param_1);
void FUN_005e71b8(int *param_1,longlong param_2);
void FUN_005e7238(undefined4 *param_1);
void FUN_005e72cc(undefined4 *param_1);
ulonglong FUN_005e7380(longlong param_1,undefined4 *param_2);
ulonglong FUN_005e75f4(undefined8 param_1,int param_2);
undefined8 FUN_005e7608(longlong param_1,int param_2,undefined4 *param_3);
void FUN_005e7770(undefined4 *param_1);
void FUN_005e7820(undefined4 *param_1);
void FUN_005e78e4(void);
void FUN_005e7908(undefined8 param_1,undefined8 param_2);
void FUN_005e7930(int param_1);
void FUN_005e7968(int param_1);
void FUN_005e799c(int param_1,longlong param_2,longlong param_3,undefined8 param_4, undefined2 param_5,undefined8 param_6);
void CollHit_Init(CollHit *param_1);
void Mtx33_Scale(float param_1,float *param_2,float *param_3);
void Mtx33_MulVec3(float *param_1,float *param_2,Vec3 param_3);
void Vec3_Normalize(float *param_1,Vec3 param_2);
void FUN_005e7ca0(undefined4 *param_1);
void FUN_005e7cc8(undefined4 *param_1);
void FUN_005e7cf8(int param_1);
void STUB_005e7d60(...);
void FUN_005e7d64(float *param_1,float *param_2,float *param_3);
namespace idol { int GetAnimDuration(int param_1); } 
void Vec4Zero(undefined4 *param_1);
void Vec4Copy(undefined4 *param_1,undefined4 *param_2);
double Vec2Length(float *param_1);
bool Vec2ClampLength(double param_1,float *param_2,float *param_3);
void Vec3Add(float *param_1,float *param_2,float *param_3);
void Vec3SetLength(double param_1,float *param_2,float *param_3);
double Vec3Length(float *param_1);
