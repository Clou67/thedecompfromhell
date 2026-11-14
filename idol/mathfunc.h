#pragma once
// idol/mathfunc.h
#include "types.h"
#include "idol/idol_draw.h"

// ---- globals
extern undefined * PTR_PTR_006618e0; /* 0x6618e0 */
extern undefined4 _DAT_005e8fa0; /* direct read */
extern undefined4 _DAT_005e8fb0; /* direct read */
extern undefined4 _DAT_005e8fd0; /* direct read */
extern undefined4 _DAT_005e8fe0; /* direct read */
extern undefined4 _DAT_005e8ff0; /* direct read */
extern Vec3 g_FrustumExtra; /* 0xa24608: the renderer vector after the six frustum planes (IdolDraw+0x380) */ /* type set in global_types.tsv */

// ---- functions
double MathSin(double param_1);
double Vec3Dot(float *param_1,float *param_2);
void Vec3Sub(float *param_1,float *param_2,float *param_3);
void Vec3Scale(double param_1,float *param_2,float *param_3);
void Vec3TransformMtx(float *param_1,float *param_2,float *param_3);
double MathAtan2(double param_1,double param_2);
void Vec2SetLength(double param_1,float *param_2,float *param_3);
double Vec3Distance(float *param_1,float *param_2);
double Vec2Distance(float *param_1,float *param_2);
void GcmSetVertexDataArrayFormat(RenderingStep *param_1,int param_2,u32 param_3,int param_4,u32 param_5,u32 param_6);
void GcmSetAlphaFunc(RenderingStep *param_1,u32 param_2);
void GcmDisableVertexDataArray(RenderingStep *param_1,int param_2);
u32 IsVisMaskHidden(int param_1,u32 param_2);
void Vec3Copy(float *param_1,float *param_2);
void Vec3Div(float param_1,float *param_2,float *param_3);
bool CheckSphereFrustum(float param_1,float param_2,Vec4 param_3);
void Vec3Set(float param_1,float param_2,float param_3,float *param_4);
float Vec4Distance3(Vec4 param_1,Vec4 param_2);
void Vec4Set(float param_1,float param_2,float param_3,float param_4,float *param_5);
void FUN_005e885c(double param_1,uint param_2);
void Mtx4Identity(Mtx4 *param_1);
void Mtx4Copy(Mtx4 *param_1,Mtx4 *param_2);
void GcmSetVertexDataArrayOffset(RenderingStep *param_1,int param_2,u32 param_3);
void GcmSetIndexArrayAddress(RenderingStep *param_1,u32 param_2);
void Mtx4Copy_2(Mtx4 *param_1,Mtx4 *param_2);
void Mtx4SetScale(float param_1,Mtx4 *param_2);
void Mtx4Transpose(Mtx4 *param_1,Mtx4 *param_2);
void Vec3Set_2(float param_1,float param_2,float param_3,float *param_4);
void GcmSetBegin(RenderingStep *param_1,u32 param_2);
void GcmDrawArrays(RenderingStep *param_1,u32 param_2,u32 param_3);
void * Mtx4FromEulerXYZ(undefined8 param_1,float *param_2);
void STUB_005e8df4(...);
double MathAcos(double param_1);
bool Vec3ClampLength(double param_1,float *param_2,float *param_3);
void Vec3Lerp(double param_1,float *param_2,float *param_3,float *param_4);
void Vec3Cross(float *param_1,float *param_2,float *param_3);
void FUN_005e9008(uint param_1,uint param_2,uint param_3,uint param_4);
void STUB_005e91b0(void);
void STUB_005e91b4(void);
void FUN_005e91b8(undefined4 *param_1);
void FUN_005e91f0(int param_1);
void IdolDraw_DeletingDtor(undefined4 *param_1);
void Vtbl00661748_DeletingDtor(undefined4 *param_1);
void Vtbl00666410_DeletingDtor(undefined4 *param_1);
void Vtbl006618e0_Ctor(undefined4 *param_1);
void Vtbl006618e0_DeletingDtor(undefined4 *param_1);
void Vtbl006618e0_Ctor_2(undefined4 *param_1);
void Vtbl006618e0_DeletingDtor_2(undefined4 *param_1);
void Vtbl00661760_DeletingDtor(undefined4 *param_1);
void STUB_005e93bc(void);
void STUB_005e93c0(void);
void STUB_005e93c4(void);
void STUB_005e93c8(void);
void STUB_005e93cc(void);
void STUB_005e93d0(void);
void Vtbl0066177c_DeletingDtor(undefined4 *param_1);
