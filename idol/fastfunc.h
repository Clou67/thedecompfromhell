#pragma once
// idol/fastfunc.h
#include "types.h"

// ---- globals
extern undefined4 DAT_00902ec0; /* 0x902ec0 */
extern undefined4 _DAT_00502210; /* direct read */
extern undefined4 _DAT_00502220; /* direct read */
extern undefined4 _DAT_005028f0; /* direct read */
extern undefined4 _DAT_00502900; /* direct read */
extern undefined4 _DAT_005029a0; /* direct read */
extern undefined4 _DAT_005029b0; /* direct read */

// ---- functions
int FastDecTimerS32(int *param_1);
undefined8 FastDecTimerS16(ushort *param_1);
undefined8 FastDecTimerU16(ushort *param_1);
undefined8 FastDecTimerS8(byte *param_1);
undefined8 FastDecTimerU8(byte *param_1);
undefined8 FastDecTimerF32(float *param_1);
uint FastLog2(uint param_1);
void FastSitAndSpin_STUB(void);
void FastMemSet(void *param_1,int param_2,int param_3);
void FastMemSetZero16(void *dst,int size);
void FastMemSetZero(void *dst,int size);
void * FastMemCopy32(void *dest,void *src,size_t size);
void * FastMemCopy(void *param_1,void *param_2,size_t param_3);
void * FastMemCopy(void *dest,void *src,size_t size);
void FastMemCopyReverse16(undefined2 *param_1,undefined1 *param_2,int param_3);
void FastMemCopyReverse32(uint *param_1,undefined1 *param_2,int param_3);
void FastMemCopy16(int param_1,int param_2,int param_3);
void FastMemOr16(uint *param_1,uint *param_2,uint *param_3,int param_4);
undefined8 FastMemCmp(int *param_1,int *param_2,int param_3);
void STUB_00500458(void *param_1,void *param_2,int param_3);
void STUB_0050045c(...);
u32 FastUpdateClipFlags(Vec4 *param_1);
void STUB_00500540(...);
undefined8 STUB_00500544(...);
undefined8 STUB_0050054c(...);
void FastAbsF(float *param_1,float *param_2);
void FastVecClamp(float *param_1,float *param_2);
void FastVecReflect(float *param_1,float *param_2,float *param_3);
void FastVecFromPackedBits(undefined8 param_1,undefined4 param_2);
uint FastVecToPackedChars(Vec4 *param_1);
void FastVecFromPackedShorts(Vec4 *param_1,ulonglong param_2);
void FastVecFromSignedShort(undefined8 param_1,ulonglong param_2);
ulonglong FastVecMultAndPack(double param_1,Vec4 *param_2);
void FastVecFromPackedChar(undefined8 param_1,undefined4 param_2);
int FastFindChar(char param_1,char *param_2);
int FastSumChars(byte *param_1,int param_2);
undefined8 STUB_00500ab8(...);
undefined8 STUB_00500ac0(...);
void STUB_00500ac8(...);
void FastMtx3Identity(undefined4 *param_1);
void FastMtx4Identity(float *param_1);
void FastMtxScaleIdentity(double param_1,float *param_2);
void FastEulerToMtx(float *param_1,float *param_2);
void FastEulerToMtx1(Mtx4 *param_1,Vec4 *param_2);
void FastEulerToMtx2(float *outMtx,float *eulerAngles);
void FastMtxCopyNoTranslate(Mtx4 *param_1,Mtx4 *param_2);
void FastApplyTransform(Vec4 *p1,Vec4 *p2);
void FastMtx3Transpose(double param_1,undefined4 *param_2,undefined4 *param_3);
void FastMtx4Transpose(undefined4 *param_1,undefined4 *param_2);
void FastNormalizeRMtx4(Mtx4 *param_1,Mtx4 *param_2);
void FastMtx4ToMtx4Scale(double param_1,undefined4 *param_2,undefined4 *param_3);
void FastMtxScale(double param_1,float *param_2,float *param_3);
void FastVecMtx3Mult(float *param_1,float *param_2,float *param_3);
void FastVecMtx4Mult(float *param_1,float *param_2,float *param_3);
void FastVecMtx3MultTranslate(float *param_1,float *param_2,float *param_3);
void FastVec3MtxMultTranslateW(float *param_1,float *param_2,float *param_3);
void FastVecMtx4MultSingle(float *param_1,float *param_2,float *param_3);
void FastVecMtx4MultBatch3(uint param_1,undefined8 param_2,longlong param_3);
void FastVecMtx4MultBatch3InPlace(uint param_1,undefined8 param_2,longlong param_3);
void FastVecMtx4Mul(Mtx4 *param_1,Mtx4 *param_2,Mtx4 *param_3);
void FastVecAdd(float *param_1,float *param_2,float *param_3);
void FastQuaternionMult(float *param_1,float *param_2,float *param_3);
void FastSlerp(float param_1,float *param_2,float *param_3,float *param_4);
void FastQuaternionToEuler(double param_1,float *param_2,int param_3);
void FastQuaternionToMtx4(float *param_1,float *param_2);
void FastVecFromSignedShort(undefined8 param_1,undefined8 param_2);
void FastQuaternionToMtx4Identity(Vec4 *param_1,Mtx4 *param_2);
void FastQuaternionVecTransform(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FastQuaternionVecTransformInverse (undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FastQuaternionVecTransform (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4, undefined8 param_5,undefined8 param_6,undefined8 param_7);
void FastQuaternionSlerp (double param_1,undefined4 *param_2,undefined4 *param_3,float *param_4);
void FastQSTToMtx4(Vec4 *param_1,Vec4 *param_2,Vec4 *param_3,Mtx4 *param_4);
void FastVecScale(double param_1,float *param_2,float *param_3);
void FastVecAdd(float *param_1,float *param_2,float *param_3);
void FastVecMtx4MultLerp(double param_1,float *param_2,float *param_3,float *param_4);
float FastWrapRot(float param_1,float param_2);
float FastDiffRots(float param_1,float param_2);
float FastAddRots(float param_1);
double FastSubRots(float param_1,float param_2);
void STUB_005026d8(...);
double FastFrac(double param_1,undefined8 param_2,undefined8 param_3);
double FastMod(double param_1);
double FastIntToDouble(int arg);
int FastDoubleToInt(double double_);
void STUB_00502794(...);
void FastFMod(void);
u32 FastLerpColor(float param_1,u32 param_2,u32 param_3);
undefined4 FastModulateColor(void);
int FastCheckBsphereInView(float param_1,void *param_2);
undefined8 FastCheckBsphereFrustum(undefined8 param_1,undefined8 param_2);
undefined8 STUB_00502a48_RET_0(void);
undefined8 STUB_00502a50_RET_0(void);
void STUB_00502a58(void);
undefined8 STUB_00502a5c_RET_M1(void);
void FastVecSub(float *param_1,float *param_2,float *param_3);
longlong FastPointInFrontOfPlane(float *param_1,float *param_2,float *param_3);
void FastVecAddSelf(float *param_1,float *param_2,float *param_3);
void FastVecSubSelf(float *param_1,float *param_2,float *param_3);
void FastVecScaleSelf(double param_1,float *param_2,float *param_3);
void FastVecMul(float *param_1,float *param_2,float *param_3);
void FastVecMulSelf(float *param_1,float *param_2,float *param_3);
