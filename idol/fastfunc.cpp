// idol/fastfunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 298 functions, 0x4fff60-0x503494
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "idol/fastfunc.h"
#include "game/boot.h"
#include "game/hero.h"
#include "game/initonce.h"
#include "game/main.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "idol/idol_draw.h"
#include "sdk/sys.h"

// 0x04fff60 (0x54 bytes)
int FastDecTimerS32(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = (uint)(1 - (longlong)(int)uVar2 >> 0x3f) & uVar2 - 1;
    *param_1 = uVar2;
    if ((int)uVar2 < 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x04fffb4 (0x58 bytes)
undefined8 FastDecTimerS16(ushort *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = (ushort)(1 - (longlong)(short)uVar2 >> 0x3f) & uVar2 - 1;
    *param_1 = uVar2;
    if ((short)uVar2 < 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x050000c (0x54 bytes)
undefined8 FastDecTimerU16(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (longlong)(1 - (ulonglong)uVar1) >> 0x3f & (ulonglong)uVar1 - 1;
    *param_1 = (ushort)uVar3;
    if ((uVar3 & 0xffff) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x0500060 (0x54 bytes)
undefined8 FastDecTimerS8(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (longlong)(1 - (ulonglong)bVar1) >> 0x3f & (ulonglong)bVar1 - 1;
    *param_1 = (byte)uVar3;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x05000b4 (0x54 bytes)
undefined8 FastDecTimerU8(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = (longlong)(1 - (ulonglong)bVar1) >> 0x3f & (ulonglong)bVar1 - 1;
    *param_1 = (byte)uVar3;
    if ((uVar3 & 0xff) == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x0500108 (0x70 bytes)
undefined8 FastDecTimerF32(float *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = (int)*param_1 >> 0x1f;
  iVar3 = (uVar1 >> 1 ^ (uint)*param_1) - uVar1;
  if ((int)(FLOAT_ORDER(DAT_0071f424)) < iVar3) {
    *param_1 = *param_1 - DAT_0071f424;
    uVar2 = 0;
  }
  else {
    *param_1 = 0.0;
    if (iVar3 < 0x3f800000) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = 0xfffffffffffffffe;
    }
  }
  return uVar2;
}


// 0x0500178 (0x80 bytes)
uint FastLog2(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = 0xffff - (ulonglong)param_1 >> 0x3f;
  param_1 = param_1 >> (int)(uVar1 << 4);
  uVar4 = (uint)((0xff - (ulonglong)param_1 >> 0x3f) << 3);
  param_1 = param_1 >> uVar4;
  uVar2 = 0xf - (ulonglong)param_1 >> 0x3f;
  param_1 = param_1 >> (int)(uVar2 << 2);
  uVar3 = 3 - (ulonglong)param_1 >> 0x3f;
  return (uint)(uVar3 << 1) | (uint)(uVar2 << 2) | (uint)(uVar1 << 4) | uVar4 |
         (param_1 >> (int)(uVar3 << 1)) >> 1;
}


// 0x05001f8 (0x4 bytes)
void FastSitAndSpin_STUB(void)

{
  return;
}


// 0x05001fc (0x28 bytes)
void FastMemSet(void *param_1,int param_2,int param_3)

{
  memset(addr,val,size);
  return;
}


// 0x0500224 (0x2c bytes)
void FastMemSetZero16(void *dst,int size)

{
  memset(param_1,0,param_2);
  return;
}


// 0x0500250 (0x2c bytes)
void FastMemSetZero(void *dst,int size)

{
  memset(param_1,0,param_2);
  return;
}


// 0x050027c (0x28 bytes)
void * FastMemCopy32(void *dest,void *src,size_t size)

{
  void *pvVar1;
  
  pvVar1 = memcpy(dest,src,size);
  return pvVar1;
}


// 0x05002a4 (0x28 bytes)
void * FastMemCopy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = memcpy(param_1,param_2,param_3);
  return pvVar1;
}


// 0x05002cc (0x28 bytes)
void * FastMemCopy(void *dest,void *src,size_t size)

{
  void *pvVar1;
  
  pvVar1 = memcpy(dest,src,size);
  return pvVar1;
}


// 0x05002f4 (0x40 bytes)
void FastMemCopyReverse16(undefined2 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_3 = param_3 + -2;
      puVar2 = param_2 + 1;
      param_2 = param_2 + 2;
      *param_1 = CONCAT11(*puVar2,uVar1);
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// 0x0500334 (0x54 bytes)
void FastMemCopyReverse32(uint *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  if (param_3 != 0) {
    do {
      pbVar2 = param_2 + 3;
      param_3 = param_3 + -4;
      pbVar3 = param_2 + 2;
      uVar1 = *param_2;
      puVar4 = param_2 + 1;
      param_2 = param_2 + 4;
      *param_1 = (uint)*pbVar3 << 0x10 | (uint)*pbVar2 << 0x18 | (uint)CONCAT11(*puVar4,uVar1);
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// 0x0500388 (0x3c bytes)
void FastMemCopy16(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar5 = param_2 + param_3;
  uVar4 = param_1 + param_3;
  iVar3 = 0;
  if (-1 < param_3) {
    do {
      iVar3 = iVar3 + 0x10;
      puVar1 = (undefined4 *)(uVar5 & 0xfffffff0);
      uVar8 = puVar1[2];
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      puVar2 = (undefined4 *)(uVar4 & 0xfffffff0);
      puVar2[3] = puVar1[3];
      puVar2[2] = uVar8;
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
      uVar5 = uVar5 - 0x10;
      uVar4 = uVar4 - 0x10;
    } while (iVar3 <= param_3);
  }
  return;
}


// 0x05003c4 (0x4c bytes)
void FastMemOr16(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (0 < param_4) {
    do {
      uVar1 = *param_2;
      param_4 = param_4 + -4;
      uVar2 = *param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      *param_1 = uVar1 | uVar2;
      param_1 = param_1 + 1;
    } while (0 < param_4);
  }
  return;
}


// 0x0500410 (0x48 bytes)
undefined8 FastMemCmp(int *param_1,int *param_2,int param_3)

{
  if (0 < param_3) {
    do {
      if (*param_1 != *param_2) {
        return 0;
      }
      param_3 = param_3 + -4;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (0 < param_3);
  }
  return 1;
}


// 0x0500458 (0x4 bytes)
void STUB_00500458(void *param_1,void *param_2,int param_3)

{
  return;
}


// 0x050045c (0x4 bytes)
void STUB_0050045c(...)

{
  return;
}


// 0x0500460 (0xe0 bytes)
u32 FastUpdateClipFlags(Vec4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = (int)*param_1 >> 0x1f;
  uVar6 = ((ulonglong)DAT_00902ec0 & 0x3ffffff) << 6;
  uVar2 = (int)param_1[1] >> 0x1f;
  iVar4 = (uVar1 >> 1 ^ *param_1) - uVar1;
  DAT_00902ec0 = (uint)uVar6;
  uVar1 = (int)param_1[2] >> 0x1f;
  iVar5 = (uVar1 >> 1 ^ param_1[2]) - uVar1;
  iVar3 = (uVar2 >> 1 ^ param_1[1]) - uVar2;
  if (0x3f800000 < iVar4) {
    uVar6 = uVar6 | 1;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (iVar4 < -0x3f800000) {
    uVar6 = uVar6 | 2;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (0x3f800000 < iVar3) {
    uVar6 = uVar6 | 4;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (iVar3 < -0x3f800000) {
    uVar6 = uVar6 | 8;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (0x3f800000 < iVar5) {
    uVar6 = uVar6 | 0x10;
    DAT_00902ec0 = (uint)uVar6;
  }
  if (iVar5 < -0x3f800000) {
    uVar6 = uVar6 | 0x20;
    DAT_00902ec0 = (uint)uVar6;
  }
  return uVar6 & 0x3f;
}


// 0x0500540 (0x4 bytes)
void STUB_00500540(...)

{
  return;
}


// 0x0500544 (0x8 bytes)
undefined8 STUB_00500544(...)

{
  return 0;
}


// 0x050054c (0x8 bytes)
undefined8 STUB_0050054c(...)

{
  return 0;
}


// 0x0500554 (0x34 bytes)
void FastAbsF(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = ABS(*param_2);
  param_1[1] = ABS(fVar1);
  param_1[2] = ABS(fVar2);
  param_1[3] = ABS(fVar3);
  return;
}


// 0x0500588 (0x70 bytes)
void FastVecClamp(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = ABS(*param_2);
  fVar4 = ABS(param_2[1]);
  fVar6 = ABS(param_2[2]);
  fVar2 = fVar1;
  if (*param_1 - fVar1 < 0.0) {
    fVar2 = *param_1;
  }
  fVar5 = fVar4;
  if (param_1[1] - fVar4 < 0.0) {
    fVar5 = param_1[1];
  }
  fVar7 = fVar6;
  if (param_1[2] - fVar6 < 0.0) {
    fVar7 = param_1[2];
  }
  fVar3 = -fVar1;
  if (-fVar1 - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = -fVar4;
  if (-fVar4 - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = -fVar6;
  if (-fVar6 - fVar7 < 0.0) {
    fVar2 = fVar7;
  }
  *param_1 = fVar3;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  return;
}


// 0x0500608 (0x110 bytes)
// inlined: FastRSqrt @0x500650
void FastVecReflect(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = 0.0;
  fVar5 = *param_2;
  fVar8 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar7 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar8) != 0.0) {
    fVar7 = 1.0 / SQRT(fVar8);
    fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar8 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar4 = fVar2 * fVar7;
    fVar6 = fVar1 * fVar7;
    fVar7 = fVar3 * fVar7;
  }
  fVar1 = fVar7 * param_2[2] + fVar4 * fVar5 + fVar6 * param_2[1];
  if (fVar1 <= 0.0) {
    fVar2 = param_2[1];
    fVar1 = fVar1 * 2.0;
    fVar3 = param_2[2];
    param_1[3] = param_2[3];
    *param_1 = -(fVar1 * fVar4 - fVar5);
    param_1[1] = -(fVar1 * fVar6 - fVar2);
    param_1[2] = -(fVar1 * fVar7 - fVar3);
  }
  else {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}


// 0x0500720 (0x98 bytes)
void FastVecFromPackedBits(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  auVar4 = ZEXT416(0xfffffff0);
  auVar6 = ZEXT416(0xfffffff8);
  auVar3 = loadVectorLeftIndexed(in_r0,0x500718);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8.piece<0,4>() = param_2;
  auVar8.piece<4,4>() = param_2;
  auVar8.piece<8,4>() = param_2;
  auVar8.piece<12,4>() = param_2;
  auVar3 = vectorShiftRightWord(auVar8,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
  auVar5 = vectorRotateLeftIntegerWord
                     (auVar8,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
  auVar7 = vectorRotateLeftIntegerWord
                     (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = (uint)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,param_1);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  auVar4 = loadVectorLeftIndexed(4,0x500718);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar6 = vectorLogicalAnd(auVar5,auVar4);
  auVar3 = vectorLogicalAnd(auVar7,auVar4);
  auVar4 = vectorLogicalAnd(auVar8,auVar4);
  auVar6 = vectorConvertFromUnsignedFixedPointWord(auVar6,0);
  auVar8 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar3 = vectorConvertFromUnsignedFixedPointWord(auVar4,0);
  auVar4 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,4,param_1);
  *(undefined4 *)(uVar2 + 4 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,8,param_1);
  *(undefined4 *)(uVar2 + 8 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar3,0xc,param_1);
  *(undefined4 *)(uVar2 + 0xc & 0xfffffffc) = uVar1;
  return;
}


// 0x05007d8 (0x7c bytes)
uint FastVecToPackedChars(Vec4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_c;
  
  uStack_c = (uint)(longlong)(param_1->x + 0.5);
  uVar1 = uStack_c << 0x18;
  uStack_c = (uint)(longlong)(param_1->y + 0.5);
  uVar2 = uStack_c;
  uStack_c = (uint)(longlong)(param_1->z + 0.5);
  uVar3 = uStack_c;
  uStack_c = (uint)(longlong)(param_1->w + 0.5);
  return uStack_c & 0xff | (uVar3 & 0xff) << 8 | (uVar2 & 0xff) << 0x10 | uVar1;
}


// 0x0500854 (0x7c bytes)
void FastVecFromPackedShorts(Vec4 *param_1,ulonglong param_2)

{
  param_1->x = (float)(param_2 >> 0x30);
  param_1->y = (float)(param_2 >> 0x20 & 0xffff);
  param_1->z = (float)(param_2 >> 0x10 & 0xffff);
  param_1->w = (float)(param_2 & 0xffff);
  return;
}


// 0x05008d0 (0x80 bytes)
void FastVecFromSignedShort(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x40;
  *(ulonglong *)lVar1 = ZEXT48(&stack0x00000000);
  ((ulonglong *)lVar1)[6] = param_2;
  auVar4 = ZEXT416(0xfffffff0);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = loadVectorLeftIndexed(0x30,lVar1);
  auVar6 = loadVectorLeftIndexed(0x32,lVar1);
  auVar5 = vectorShiftRightAlgebraicWord(auVar5,auVar4);
  auVar7 = loadVectorLeftIndexed(0x34,lVar1);
  auVar6 = vectorShiftRightAlgebraicWord(auVar6,auVar4);
  auVar8 = loadVectorLeftIndexed(0x36,lVar1);
  auVar7 = vectorShiftRightAlgebraicWord(auVar7,auVar4);
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar4 = vectorShiftRightAlgebraicWord(auVar8,auVar4);
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar7,0);
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  auVar4 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = (uint)param_1;
  uVar2 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,param_1);
  *(undefined4 *)(uVar3 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,param_1);
  *(undefined4 *)(uVar3 + 4 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,8,param_1);
  *(undefined4 *)(uVar3 + 8 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0xc,param_1);
  *(undefined4 *)(uVar3 + 0xc & 0xfffffffc) = uVar2;
  return;
}


// 0x0500950 (0x6c bytes)
ulonglong FastVecMultAndPack(double param_1,Vec4 *param_2)

{
  return (ulonglong)(uint)(int)((double)param_2->w * param_1) & 0xffff |
         ((ulonglong)(uint)(int)((double)param_2->z * param_1) & 0xffff) << 0x10 |
         ((ulonglong)(uint)(int)((double)param_2->y * param_1) & 0xffff) << 0x20 |
         (ulonglong)(uint)(int)((double)param_2->x * param_1) << 0x30;
}


// 0x05009c8 (0x7c bytes)
void FastVecFromPackedChar(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  auVar5 = ZEXT416(0xfffffff6);
  auVar3 = loadVectorLeftIndexed(in_r0,0x5009bc);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3.piece<0,4>() = param_2;
  auVar3.piece<4,4>() = param_2;
  auVar3.piece<8,4>() = param_2;
  auVar3.piece<12,4>() = param_2;
  auVar5 = vectorRotateLeftIntegerWord
                     (auVar3,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
  auVar6 = vectorLogicalAnd(auVar3,auVar4);
  auVar5 = vectorLogicalAnd(auVar5,auVar4);
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar6,0);
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  uVar2 = (uint)param_1;
  uVar1 = storeVectorElementWordIndexed(auVar4,0,param_1);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,param_1);
  *(undefined4 *)(uVar2 + 4 & 0xfffffffc) = uVar1;
  auVar5 = loadVectorLeftIndexed(4,0x5009bc);
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = vectorShiftRightWord(auVar3,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,8,param_1);
  *(undefined4 *)(uVar2 + 8 & 0xfffffffc) = uVar1;
  return;
}


// 0x0500a44 (0x44 bytes)
int FastFindChar(char param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*param_2 == -1) {
      return -1;
    }
    if (*param_2 == param_1) break;
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  }
  return iVar1;
}


// 0x0500a88 (0x30 bytes)
int FastSumChars(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      bVar1 = *param_1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + (uint)bVar1;
    } while (0 < param_2);
  }
  return iVar2;
}


// 0x0500ab8 (0x8 bytes)
undefined8 STUB_00500ab8(...)

{
  return 0;
}


// 0x0500ac0 (0x8 bytes)
undefined8 STUB_00500ac0(...)

{
  return 0;
}


// 0x0500ac8 (0x4 bytes)
void STUB_00500ac8(...)

{
  return;
}


// 0x0500acc (0x2c bytes)
void FastMtx3Identity(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_1 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *param_1 = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[10] = 0x3f800000;
  return;
}


// 0x0500af8 (0x38 bytes)
void FastMtx4Identity(float *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_1 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  param_1[0xf] = 1.0;
  param_1[10] = 1.0;
  param_1[5] = 1.0;
  *param_1 = 1.0;
  return;
}


// 0x0500b30 (0x34 bytes)
void FastMtxScaleIdentity(double param_1,float *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_2 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 0xc) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  param_2[0xf] = (float)param_1;
  param_2[10] = (float)param_1;
  param_2[5] = (float)param_1;
  *param_2 = (float)param_1;
  return;
}


// 0x0500b64 (0x140 bytes)
void FastEulerToMtx(float *param_1,float *param_2)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = _FSin((double)*param_2,param_1,0);
  dVar7 = extraout_f1;
  uVar1 = _FSin((double)*param_2,uVar1,1);
  dVar6 = extraout_f1_00;
  uVar1 = _FSin((double)param_2[1],uVar1,0);
  dVar5 = extraout_f1_01;
  uVar1 = _FSin((double)param_2[1],uVar1,1);
  dVar4 = extraout_f1_02;
  uVar1 = _FSin((double)param_2[2],uVar1,0);
  dVar3 = extraout_f1_03;
  dVar2 = (double)_FSin((double)param_2[2],uVar1,1);
  *param_1 = (float)(dVar4 * dVar2);
  param_1[1] = (float)(dVar4 * dVar3);
  param_1[2] = (float)-dVar5;
  param_1[6] = (float)(dVar4 * dVar7);
  param_1[10] = (float)(dVar6 * dVar4);
  param_1[4] = (float)(dVar7 * (double)(float)(dVar2 * dVar5) - (double)(float)(dVar6 * dVar3));
  param_1[5] = (float)(dVar7 * (double)(float)(dVar5 * dVar3) + (double)(float)(dVar6 * dVar2));
  param_1[8] = (float)(dVar6 * (double)(float)(dVar2 * dVar5) + (double)(float)(dVar7 * dVar3));
  param_1[9] = (float)(dVar6 * (double)(float)(dVar5 * dVar3) - (double)(float)(dVar2 * dVar7));
  return;
}


// 0x0500ca4 (0x164 bytes)
void FastEulerToMtx1(Mtx4 *param_1,Vec4 *param_2)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = _FSin((double)*param_2,param_1,0);
  dVar7 = extraout_f1;
  uVar1 = _FSin((double)*param_2,uVar1,1);
  dVar6 = extraout_f1_00;
  uVar1 = _FSin((double)param_2[1],uVar1,0);
  dVar5 = extraout_f1_01;
  uVar1 = _FSin((double)param_2[1],uVar1,1);
  dVar4 = extraout_f1_02;
  uVar1 = _FSin((double)param_2[2],uVar1,0);
  dVar3 = extraout_f1_03;
  dVar2 = (double)_FSin((double)param_2[2],uVar1,1);
  param_1[3] = 0.0;
  *param_1 = (float)(dVar4 * dVar2);
  param_1[1] = (float)(dVar4 * dVar3);
  param_1[2] = (float)-dVar5;
  param_1[7] = 0.0;
  param_1[6] = (float)(dVar4 * dVar7);
  param_1[10] = (float)(dVar6 * dVar4);
  param_1[4] = (float)(dVar7 * (double)(float)(dVar2 * dVar5) - (double)(float)(dVar6 * dVar3));
  param_1[5] = (float)(dVar7 * (double)(float)(dVar5 * dVar3) + (double)(float)(dVar6 * dVar2));
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[8] = (float)(dVar6 * (double)(float)(dVar2 * dVar5) + (double)(float)(dVar7 * dVar3));
  param_1[0xd] = 0.0;
  param_1[9] = (float)(dVar6 * (double)(float)(dVar5 * dVar3) - (double)(float)(dVar2 * dVar7));
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}


// 0x0500e08 (0x164 bytes)
void FastEulerToMtx2(float *outMtx,float *eulerAngles)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = _FSin((double)*eulerAngles,outMtx,0);
  dVar7 = extraout_f1;
  uVar1 = _FSin((double)*eulerAngles,uVar1,1);
  dVar6 = extraout_f1_00;
  uVar1 = _FSin((double)eulerAngles[1],uVar1,0);
  dVar5 = extraout_f1_01;
  uVar1 = _FSin((double)eulerAngles[1],uVar1,1);
  dVar4 = extraout_f1_02;
  uVar1 = _FSin((double)eulerAngles[2],uVar1,0);
  dVar3 = extraout_f1_03;
  dVar2 = (double)_FSin((double)eulerAngles[2],uVar1,1);
  outMtx[3] = 0.0;
  *outMtx = (float)(dVar4 * dVar2);
  outMtx[1] = (float)(dVar4 * dVar3);
  outMtx[2] = (float)-dVar5;
  outMtx[7] = 0.0;
  outMtx[6] = (float)(dVar4 * dVar7);
  outMtx[10] = (float)(dVar6 * dVar4);
  outMtx[4] = (float)(dVar7 * (double)(float)(dVar2 * dVar5) - (double)(float)(dVar6 * dVar3));
  outMtx[5] = (float)(dVar7 * (double)(float)(dVar5 * dVar3) + (double)(float)(dVar6 * dVar2));
  outMtx[0xb] = 0.0;
  outMtx[0xc] = 0.0;
  outMtx[8] = (float)(dVar6 * (double)(float)(dVar2 * dVar5) + (double)(float)(dVar7 * dVar3));
  outMtx[0xd] = 0.0;
  outMtx[9] = (float)(dVar6 * (double)(float)(dVar5 * dVar3) - (double)(float)(dVar2 * dVar7));
  outMtx[0xe] = 0.0;
  outMtx[0xf] = 1.0;
  return;
}


// 0x0500f6c (0x3c bytes)
void FastMtxCopyNoTranslate(Mtx4 *param_1,Mtx4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  puVar2 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  uVar13 = puVar2[3];
  uVar12 = puVar2[2];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  puVar2 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


// 0x0500fa8 (0x24 bytes)
void FastApplyTransform(Vec4 *p1,Vec4 *p2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar1 = (undefined4 *)((uint)p2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)((uint)(p2 + 1) & 0xfffffff0);
  uVar9 = puVar2[3];
  uVar8 = puVar2[2];
  uVar7 = puVar2[1];
  uVar6 = *puVar2;
  puVar2 = (undefined4 *)((uint)(p2 + 2) & 0xfffffff0);
  uVar13 = puVar2[3];
  uVar12 = puVar2[2];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  puVar2 = (undefined4 *)((uint)p1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)((uint)(p1 + 1) & 0xfffffff0);
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  puVar1[1] = uVar7;
  *puVar1 = uVar6;
  puVar1 = (undefined4 *)((uint)(p1 + 2) & 0xfffffff0);
  puVar1[3] = uVar13;
  puVar1[2] = uVar12;
  puVar1[1] = uVar11;
  *puVar1 = uVar10;
  return;
}


// 0x0500fcc (0x58 bytes)
void FastMtx3Transpose(double param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_3[4];
  uVar2 = param_3[8];
  uVar3 = param_3[1];
  uVar4 = param_3[5];
  uVar5 = param_3[9];
  uVar6 = param_3[2];
  uVar7 = param_3[6];
  uVar8 = param_3[10];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = (float)param_1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  param_2[7] = (float)param_1;
  param_2[8] = uVar6;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = (float)param_1;
  return;
}


// 0x0501024 (0x9c bytes)
void FastMtx4Transpose(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  uVar3 = param_2[0xc];
  uVar4 = param_2[1];
  uVar5 = param_2[5];
  uVar6 = param_2[9];
  uVar7 = param_2[0xd];
  uVar8 = param_2[2];
  uVar9 = param_2[6];
  uVar10 = param_2[10];
  uVar11 = param_2[0xe];
  uVar12 = param_2[3];
  uVar13 = param_2[7];
  uVar14 = param_2[0xb];
  uVar15 = param_2[0xf];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  return;
}


// 0x05010c0 (0x70 bytes)
void FastNormalizeRMtx4(Mtx4 *param_1,Mtx4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_2[4];
  uVar2 = param_2[8];
  uVar3 = param_2[1];
  uVar4 = param_2[5];
  uVar5 = param_2[9];
  uVar6 = param_2[2];
  uVar7 = param_2[6];
  uVar8 = param_2[10];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = 0;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}


// 0x0501130 (0x58 bytes)
void FastMtx4ToMtx4Scale(double param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_3[4];
  uVar2 = param_3[8];
  uVar3 = param_3[1];
  uVar4 = param_3[5];
  uVar5 = param_3[9];
  uVar6 = param_3[2];
  uVar7 = param_3[6];
  uVar8 = param_3[10];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = (float)param_1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[6] = uVar5;
  param_2[7] = (float)param_1;
  param_2[8] = uVar6;
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = (float)param_1;
  return;
}


// 0x0501188 (0xc4 bytes)
void FastMtxScale(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)fVar1 * param_1);
  param_2[2] = (float)((double)fVar2 * param_1);
  param_2[3] = (float)((double)fVar3 * param_1);
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  param_2[4] = (float)((double)param_3[4] * param_1);
  param_2[5] = (float)((double)fVar1 * param_1);
  param_2[6] = (float)((double)fVar2 * param_1);
  param_2[7] = (float)((double)fVar3 * param_1);
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  param_2[8] = (float)((double)param_3[8] * param_1);
  param_2[9] = (float)((double)fVar1 * param_1);
  param_2[10] = (float)((double)fVar2 * param_1);
  param_2[0xb] = (float)((double)fVar3 * param_1);
  fVar1 = param_3[0xd];
  fVar2 = param_3[0xe];
  fVar3 = param_3[0xf];
  param_2[0xc] = (float)((double)param_3[0xc] * param_1);
  param_2[0xd] = (float)((double)fVar1 * param_1);
  param_2[0xe] = (float)((double)fVar2 * param_1);
  param_2[0xf] = (float)((double)fVar3 * param_1);
  return;
}


// 0x050124c (0x64 bytes)
void FastVecMtx3Mult(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_3[2];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  *param_1 = param_2[8] * fVar7 + *param_2 * fVar3 + param_2[4] * fVar1;
  param_1[1] = fVar8 * fVar7 + fVar5 * fVar3 + fVar2 * fVar1;
  param_1[2] = fVar9 * fVar7 + fVar6 * fVar3 + fVar4 * fVar1;
  return;
}


// 0x05012b0 (0x80 bytes)
void FastVecMtx4Mult(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = param_3[2];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = param_2[8] * fVar9 + *param_2 * fVar3 + param_2[4] * fVar1;
  param_1[1] = fVar10 * fVar9 + fVar6 * fVar3 + fVar2 * fVar1;
  param_1[2] = fVar11 * fVar9 + fVar7 * fVar3 + fVar4 * fVar1;
  param_1[3] = fVar12 * fVar9 + fVar8 * fVar3 + fVar5 * fVar1;
  return;
}


// 0x0501330 (0x7c bytes)
void FastVecMtx3MultTranslate(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_3[2];
  fVar8 = param_2[9];
  fVar9 = param_2[10];
  fVar10 = param_2[0xd];
  fVar11 = param_2[0xe];
  *param_1 = param_2[8] * fVar7 + *param_2 * fVar3 + param_2[4] * fVar1 + param_2[0xc];
  param_1[1] = fVar8 * fVar7 + fVar5 * fVar3 + fVar2 * fVar1 + fVar10;
  param_1[2] = fVar9 * fVar7 + fVar6 * fVar3 + fVar4 * fVar1 + fVar11;
  return;
}


// 0x05013ac (0x84 bytes)
void FastVec3MtxMultTranslateW(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = param_2[4];
  fVar2 = param_3[1];
  fVar3 = param_2[5];
  fVar4 = *param_2;
  fVar5 = *param_3;
  fVar6 = param_2[6];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[8];
  fVar10 = param_3[2];
  fVar11 = param_2[9];
  fVar12 = param_2[10];
  fVar13 = param_2[0xc];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  param_1[3] = 1.0;
  *param_1 = fVar9 * fVar10 + fVar4 * fVar5 + fVar1 * fVar2 + fVar13;
  param_1[1] = fVar11 * fVar10 + fVar7 * fVar5 + fVar3 * fVar2 + fVar14;
  param_1[2] = fVar12 * fVar10 + fVar8 * fVar5 + fVar6 * fVar2 + fVar15;
  return;
}


// 0x0501430 (0xa4 bytes)
void FastVecMtx4MultSingle(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_3[1];
  fVar2 = param_2[5];
  fVar3 = *param_3;
  fVar4 = param_2[6];
  fVar5 = param_2[1];
  fVar6 = param_2[7];
  fVar7 = param_2[2];
  fVar8 = param_3[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_3[3];
  fVar13 = param_2[0xb];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  fVar16 = param_2[0xf];
  *param_1 = param_2[0xc] * fVar12 + param_2[8] * fVar8 + *param_2 * fVar3 + param_2[4] * fVar1;
  param_1[1] = fVar14 * fVar12 + fVar10 * fVar8 + fVar5 * fVar3 + fVar2 * fVar1;
  param_1[2] = fVar15 * fVar12 + fVar11 * fVar8 + fVar7 * fVar3 + fVar4 * fVar1;
  param_1[3] = fVar16 * fVar12 + fVar13 * fVar8 + fVar9 * fVar3 + fVar6 * fVar1;
  return;
}


// 0x05014d4 (0x94 bytes)
void FastVecMtx4MultBatch3(uint param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FastVecMtx4Mult(&uStack_50);
  FastVecMtx4Mult(&uStack_40,param_2,param_3 + 0x10);
  FastVecMtx4Mult(&uStack_30,param_2,param_3 + 0x20);
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = uStack_44;
  puVar1[2] = uStack_48;
  puVar1[1] = uStack_4c;
  *puVar1 = uStack_50;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_24;
  puVar1[2] = uStack_28;
  puVar1[1] = uStack_2c;
  *puVar1 = uStack_30;
  return;
}


// 0x0501568 (0xc4 bytes)
void FastVecMtx4MultBatch3InPlace(uint param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  dVar4 = (double)*(float *)(param_1 + 0xc);
  dVar3 = (double)*(float *)(param_1 + 0x1c);
  dVar2 = (double)*(float *)(param_1 + 0x2c);
  FastVecMtx4Mult(&uStack_60);
  FastVecMtx4Mult(&uStack_50,param_2,param_3 + 0x10);
  FastVecMtx4Mult(&uStack_40,param_2,param_3 + 0x20);
  *(float *)(param_1 + 0xc) = (float)dVar4;
  *(float *)(param_1 + 0x1c) = (float)dVar3;
  *(float *)(param_1 + 0x2c) = (float)dVar2;
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = uStack_54;
  puVar1[2] = uStack_58;
  puVar1[1] = uStack_5c;
  *puVar1 = uStack_60;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_44;
  puVar1[2] = uStack_48;
  puVar1[1] = uStack_4c;
  *puVar1 = uStack_50;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  return;
}


// 0x050162c (0xb4 bytes)
void FastVecMtx4Mul(Mtx4 *param_1,Mtx4 *param_2,Mtx4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FastVecMtx4MultSingle(&uStack_60);
  FastVecMtx4MultSingle(&uStack_50,param_2,param_3 + 0x10);
  FastVecMtx4MultSingle(&uStack_40,param_2,param_3 + 0x20);
  FastVecMtx4MultSingle(&uStack_30,param_2,param_3 + 0x30);
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = uStack_54;
  puVar1[2] = uStack_58;
  puVar1[1] = uStack_5c;
  *puVar1 = uStack_60;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_44;
  puVar1[2] = uStack_48;
  puVar1[1] = uStack_4c;
  *puVar1 = uStack_50;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  puVar1 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar1[3] = uStack_24;
  puVar1[2] = uStack_28;
  puVar1[1] = uStack_2c;
  *puVar1 = uStack_30;
  return;
}


// 0x05016e0 (0xe4 bytes)
void FastVecAdd(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  *param_1 = *param_2 + *param_3;
  fVar6 = param_2[4];
  fVar7 = param_3[4];
  param_1[1] = fVar1 + fVar2;
  fVar1 = param_2[5];
  param_1[2] = fVar3 + fVar4;
  fVar2 = param_3[5];
  fVar3 = param_2[6];
  fVar4 = param_3[6];
  param_1[3] = fVar5;
  param_1[4] = fVar6 + fVar7;
  fVar5 = param_2[8];
  fVar6 = param_3[8];
  param_1[5] = fVar1 + fVar2;
  fVar1 = param_2[9];
  fVar2 = param_3[9];
  param_1[6] = fVar3 + fVar4;
  fVar3 = param_2[10];
  fVar4 = param_3[10];
  param_1[7] = param_2[7];
  param_1[8] = fVar5 + fVar6;
  fVar5 = param_2[0xc];
  fVar6 = param_3[0xc];
  param_1[9] = fVar1 + fVar2;
  fVar1 = param_2[0xd];
  param_1[10] = fVar3 + fVar4;
  fVar2 = param_3[0xd];
  fVar3 = param_2[0xe];
  fVar4 = param_3[0xe];
  param_1[0xb] = param_2[0xb];
  fVar7 = param_2[0xf];
  param_1[0xc] = fVar5 + fVar6;
  param_1[0xf] = fVar7;
  param_1[0xd] = fVar1 + fVar2;
  param_1[0xe] = fVar3 + fVar4;
  return;
}


// 0x05017c4 (0x74 bytes)
void FastQuaternionMult(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[2];
  fVar8 = param_3[1];
  *param_1 = -(fVar5 * fVar8 - (fVar4 * fVar7 + fVar6 * fVar1 + fVar2 * fVar3));
  param_1[1] = -(fVar2 * fVar7 - (fVar5 * fVar1 + fVar6 * fVar8 + fVar4 * fVar3));
  param_1[2] = -(fVar4 * fVar1 - (fVar2 * fVar8 + fVar6 * fVar7 + fVar5 * fVar3));
  param_1[3] = -(fVar5 * fVar7 - -(fVar4 * fVar8 - (fVar6 * fVar3 - fVar2 * fVar1)));
  return;
}


// 0x0501848 (0x110 bytes)
// inlined: FastRSqrt @0x501900
void FastSlerp(double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = (float)(1.0 - param_1);
  fVar1 = (float)((double)param_4[1] * param_1);
  fVar2 = (float)((double)*param_4 * param_1);
  fVar3 = (float)((double)param_4[2] * param_1);
  fVar4 = (float)((double)param_4[3] * param_1);
  fVar6 = param_3[1] * fVar5;
  fVar7 = *param_3 * fVar5;
  fVar8 = param_3[2] * fVar5;
  fVar5 = param_3[3] * fVar5;
  fVar9 = fVar5 * fVar4 + fVar8 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1;
  fVar10 = fVar6 + fVar1;
  if (fVar9 - 0.0 < 0.0) {
    fVar10 = fVar6 - fVar1;
  }
  fVar1 = fVar7 + fVar2;
  if (fVar9 - 0.0 < 0.0) {
    fVar1 = fVar7 - fVar2;
  }
  fVar2 = fVar8 + fVar3;
  if (fVar9 - 0.0 < 0.0) {
    fVar2 = fVar8 - fVar3;
  }
  fVar3 = fVar5 + fVar4;
  if (fVar9 - 0.0 < 0.0) {
    fVar3 = fVar5 - fVar4;
  }
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1 + fVar10 * fVar10;
  fVar5 = 1.0 / SQRT(fVar4);
  fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
  fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
  fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
  *param_2 = fVar5 * fVar1;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar5 * fVar2;
  param_2[3] = fVar5 * fVar3;
  return;
}


// 0x0501980 (0x124 bytes)
void FastQuaternionToEuler(double param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  fVar1 = (float)(param_1 + 1.570796251296997);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar6 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar6 = param_1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  dVar5 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar6 < 0.0) {
    dVar5 = dVar6;
  }
  dVar7 = (double)(float)(dVar5 * dVar5);
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar5));
  dVar6 = (double)(float)(dVar7 * dVar8);
  fVar1 = (fVar1 * fVar4 * 2.601887e-06 +
          fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 2.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  fVar2 = -((float)(dVar7 * dVar6) * 2.601887e-06 +
           (float)(dVar6 * -0.0001980741071747616 +
                  (double)(float)(dVar8 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar7 * dVar5) *
                                                 -0.16666656732559204 + dVar5)))) /
          SQRT(ABS(fVar1) + 2.0);
  fVar3 = SQRT(ABS(fVar1) + 2.0) * 0.5;
  fVar4 = fVar2;
  if (fVar1 - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  *param_2 = fVar4;
  param_2[3] = fVar3;
  if (param_3 < 1) {
    if (-1 < param_3) {
      return;
    }
  }
  else if (param_3 < 2) {
    param_2[1] = fVar4;
    *param_2 = 0.0;
    return;
  }
  param_2[2] = fVar4;
  *param_2 = 0.0;
  return;
}


// 0x0501ab0 (0x144 bytes)
void FastQuaternionToMtx4(float *param_1,float *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((uint)param_2 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *param_2 = 1.0;
  param_2[5] = 1.0;
  param_2[10] = 1.0;
  *param_2 = -((param_1[1] * param_1[1] + param_1[2] * param_1[2]) * 2.0 - 1.0);
  param_2[4] = (*param_1 * param_1[1] + param_1[3] * param_1[2]) * 2.0;
  param_2[8] = (*param_1 * param_1[2] - param_1[3] * param_1[1]) * 2.0;
  param_2[1] = (*param_1 * param_1[1] - param_1[3] * param_1[2]) * 2.0;
  param_2[5] = -((*param_1 * *param_1 + param_1[2] * param_1[2]) * 2.0 - 1.0);
  param_2[9] = (param_1[1] * param_1[2] + param_1[3] * *param_1) * 2.0;
  param_2[2] = (*param_1 * param_1[2] + param_1[3] * param_1[1]) * 2.0;
  param_2[6] = (param_1[1] * param_1[2] - param_1[3] * *param_1) * 2.0;
  param_2[10] = -((*param_1 * *param_1 + param_1[1] * param_1[1]) * 2.0 - 1.0);
  return;
}


// 0x0501bf8 (0x220 bytes)
void FastVecFromSignedShort(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  auVar4 = loadVectorLeftIndexed(in_r0,param_1);
  auVar5 = ZEXT416(0xfffffff0);
  auVar3 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = ZEXT416(0xffffffff);
  auVar8 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = ZEXT416(0xffffffff);
  auVar15 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = loadVectorRightIndexed(0x10,param_1);
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = loadVectorLeftIndexed(2,param_1);
  auVar6 = loadVectorRightIndexed(0x12,param_1);
  auVar5 = vectorShiftRightAlgebraicWord(auVar4 | auVar5,auVar3);
  auVar7 = loadVectorLeftIndexed(in_r0,0x501bf4);
  auVar10 = loadVectorLeftIndexed(4,param_1);
  auVar4 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar5 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = vectorShiftRightAlgebraicWord(auVar8 | auVar6,auVar3);
  auVar6 = loadVectorRightIndexed(0x14,param_1);
  auVar12 = loadVectorLeftIndexed(6,param_1);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar5 = ZEXT416(0xffffffff);
  auVar11 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar13 = loadVectorRightIndexed(0x16,param_1);
  auVar5 = vectorShiftRightAlgebraicWord(auVar10 | auVar6,auVar3);
  auVar10 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar7,auVar9);
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar5,0);
  auVar11 = loadVectorLeftIndexed(8,param_1);
  auVar14 = loadVectorRightIndexed(0x18,param_1);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar10);
  auVar9 = vectorShiftRightAlgebraicWord(auVar12 | auVar13,auVar3);
  auVar12 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar5 = ZEXT416(3);
  auVar13 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = vectorShiftRightWord(auVar11 | auVar14,auVar3);
  auVar11 = loadVectorLeftIndexed(10,param_1);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
  auVar14 = loadVectorRightIndexed(0x1a,param_1);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar6,auVar7,auVar12);
  auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar13);
  auVar5 = ZEXT416(0xffffffff);
  auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  uVar2 = (uint)param_2;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,param_2);
  *(undefined4 *)(uVar2 & 0xfffffffc) = uVar1;
  auVar5 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar4 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar8 = vectorShiftRightWord(auVar11 | auVar14,auVar3);
  auVar11 = loadVectorLeftIndexed(0xc,param_1);
  auVar14 = loadVectorRightIndexed(0x1c,param_1);
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,4,param_2);
  *(undefined4 *)(uVar2 + 4 & 0xfffffffc) = uVar1;
  auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar13);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar7,auVar4);
  auVar5 = ZEXT416(0xffffffff);
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar4 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
  auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar5 = ZEXT416(0xffffffff);
  auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar5 = vectorShiftRightWord(auVar11 | auVar14,auVar3);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar7,auVar9);
  auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,8,param_2);
  *(undefined4 *)(uVar2 + 8 & 0xfffffffc) = uVar1;
  auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar13);
  auVar4 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = ZEXT416(0xffffffff);
  auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar13 = loadVectorLeftIndexed(0x10,param_1);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar11);
  auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0xc,param_2);
  *(undefined4 *)(uVar2 + 0xc & 0xfffffffc) = uVar1;
  auVar10 = loadVectorRightIndexed(0x20,param_1);
  auVar5 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar6 = loadVectorLeftIndexed(0x12,param_1);
  auVar11 = loadVectorRightIndexed(0x22,param_1);
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x10,param_2);
  *(undefined4 *)(uVar2 + 0x10 & 0xfffffffc) = uVar1;
  auVar5 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar4);
  auVar8 = vectorShiftRightAlgebraicWord(auVar13 | auVar10,auVar3);
  auVar10 = loadVectorLeftIndexed(0x14,param_1);
  auVar12 = loadVectorRightIndexed(0x24,param_1);
  auVar4 = vectorShiftRightAlgebraicWord(auVar6 | auVar11,auVar3);
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x14,param_2);
  *(undefined4 *)(uVar2 + 0x14 & 0xfffffffc) = uVar1;
  auVar9 = vectorConvertFromSignedFixedPointWord(auVar8,0);
  auVar11 = loadVectorLeftIndexed(0x16,param_1);
  auVar13 = loadVectorRightIndexed(0x26,param_1);
  auVar6 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  auVar8 = vectorShiftRightAlgebraicWord(auVar10 | auVar12,auVar3);
  auVar5 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = vectorShiftRightAlgebraicWord(auVar11 | auVar13,auVar3);
  auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
  auVar3 = vectorConvertFromSignedFixedPointWord(auVar4,0);
  auVar4 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x18,param_2);
  *(undefined4 *)(uVar2 + 0x18 & 0xfffffffc) = uVar1;
  *(undefined4 *)(uVar2 + 0x1c) = 0;
  auVar5 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x20,param_2);
  *(undefined4 *)(uVar2 + 0x20 & 0xfffffffc) = uVar1;
  auVar4 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x24,param_2);
  *(undefined4 *)(uVar2 + 0x24 & 0xfffffffc) = uVar1;
  auVar5 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x28,param_2);
  *(undefined4 *)(uVar2 + 0x28 & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x2c,param_2);
  *(undefined4 *)(uVar2 + 0x2c & 0xfffffffc) = uVar1;
  return;
}


// 0x0501e18 (0x74 bytes)
void FastQuaternionToMtx4Identity(undefined8 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FastQuaternionToMtx4(param_1,&uStack_40);
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  puVar1[3] = uStack_34;
  puVar1[2] = uStack_38;
  puVar1[1] = uStack_3c;
  *puVar1 = uStack_40;
  puVar1 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  puVar1[3] = uStack_24;
  puVar1[2] = uStack_28;
  puVar1[1] = uStack_2c;
  *puVar1 = uStack_30;
  puVar1 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  puVar1[3] = uStack_14;
  puVar1[2] = uStack_18;
  puVar1[1] = uStack_1c;
  *puVar1 = uStack_20;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  return;
}


// 0x0501e8c (0x5c bytes)
void FastQuaternionVecTransform(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  GPiece<56> auStack_50;
  
  FastQuaternionToMtx4(param_3,auStack_50);
  FastVecMtx4Mult(param_1,auStack_50,param_2);
  return;
}


// 0x0501ee8 (0x68 bytes)
void FastQuaternionVecTransformInverse
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  GPiece<56> auStack_50;
  
  FastQuaternionToMtx4(param_3,auStack_50);
  FastMtx3Transpose(auStack_50,auStack_50);
  FastVecMtx4Mult(param_1,auStack_50,param_2);
  return;
}


// 0x0501f50 (0xb8 bytes)
void FastQuaternionVecTransform
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  GPiece<56> auStack_70;
  
  FastQuaternionToMtx4(param_7,auStack_70);
  FastMtx3Transpose(auStack_70,auStack_70);
  FastVecMtx4Mult(param_1,auStack_70,param_4);
  FastVecMtx4Mult(param_2,auStack_70,param_5);
  FastVecMtx4Mult(param_3,auStack_70,param_6);
  return;
}


// 0x0502030 (0x1d8 bytes)
void FastQuaternionSlerp
               (double param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  GPiece<16> local_60;
  GPiece<56> auStack_50;
  
  if (9.999999747378752e-06 <= ABS(param_1)) {
    if (0.0001 <= SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])) {
      FastQuaternionToMtx4(local_60,auStack_50);
      FastMtx3Transpose(auStack_50,auStack_50);
      FastVecMtx4Mult(param_2,auStack_50,param_3);
    }
    else {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
    }
  }
  else {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return;
}


// 0x0502238 (0x184 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FastVecMtx4MultBatch4VMX
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  GPiece<16> auVar1;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auStack_50;
  GPiece<16> auStack_40;
  GPiece<16> auStack_30;
  
  FastQuaternionToMtx4(param_1,auStack_50);
  auVar1 = _DAT_00502210;
  auVar11 = ZEXT416(0xffffffff);
  auVar4 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar9 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar7 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = ZEXT416(0xffffffff);
  auVar2 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = auStack_50 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  auVar6 = loadVectorLeftIndexed(in_LR,param_2);
  auVar4 = auStack_50 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar6,auVar5);
  auVar5 = auStack_50 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar11 = ZEXT416(0xffffffff);
  auVar10 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar7 = auStack_40 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar6,auVar9);
  auVar2 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar8 = vectorMultiplyAddFloatingPoint
                     (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6,auVar8);
  auVar4 = auStack_40 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auStack_40 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar6 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar13 = loadVectorLeftIndexed(4,param_2);
  auVar11 = ZEXT416(0xffffffff);
  auVar15 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar10 = vectorMultiplyAddFloatingPoint
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar13,auVar6);
  auVar11 = ZEXT416(0xffffffff);
  auVar17 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint
                     (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar13,auVar12);
  auVar4 = auStack_30 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar14 = loadVectorLeftIndexed(in_LR,param_3);
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar13,auVar2);
  auVar5 = auStack_30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = loadVectorLeftIndexed(4,param_3);
  auVar13 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar12 = loadVectorLeftIndexed(8,param_3);
  auVar11 = ZEXT416(0xffffffff);
  auVar15 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar16 = loadVectorLeftIndexed(8,param_2);
  auVar11 = auStack_30 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar16,auVar13);
  auVar5 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar16,auVar5);
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar16,auVar15);
  auVar4 = vectorPermute(auVar3,auVar8,_DAT_00502220);
  auVar11 = vectorPermute(auVar9,auStack_50,_DAT_00502220);
  auVar3 = vectorPermute(auVar10,auVar6,_DAT_00502220);
  auVar2 = vectorPermute(auVar2,auStack_40,_DAT_00502220);
  auVar9 = loadVectorLeftIndexed(0x20,0x502210);
  auVar4 = vectorPermute(auVar4,auVar11,_DAT_00502210);
  auVar11 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorPermute(auVar3,auVar2,_DAT_00502210);
  auVar3 = vectorPermute(auVar13,auVar5,_DAT_00502220);
  auVar5 = vectorPermute(auVar15,auStack_30,_DAT_00502220);
  auVar7 = vectorPermute(auVar14,auVar7,_DAT_00502220);
  auVar11 = vectorPermute(auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                          _DAT_00502220);
  *(undefined1 (*) [16])(param_4 & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_4 + 0x10 & 0xfffffff0) = auVar2;
  auVar4 = vectorPermute(auVar3,auVar5,auVar1);
  auVar11 = vectorPermute(auVar7,auVar11,auVar1);
  *(undefined1 (*) [16])(param_4 + 0x20 & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_4 + 0x30 & 0xfffffff0) = auVar11;
  return;
}


// 0x05023bc (0x34 bytes)
void FastVecScale(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)fVar1 * param_1);
  param_2[2] = (float)((double)fVar2 * param_1);
  param_2[3] = (float)((double)fVar3 * param_1);
  return;
}


// 0x05023f0 (0x44 bytes)
void FastVecAdd(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  param_1[3] = fVar5 + fVar6;
  return;
}


// 0x0502438 (0x134 bytes)
void FastVecMtx4MultLerp(double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar2 = param_4[1];
  fVar1 = (float)(1.0 - param_1);
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar5 = param_3[1];
  fVar6 = param_3[4];
  fVar7 = param_3[2];
  fVar8 = param_3[5];
  fVar9 = param_3[3];
  fVar10 = param_3[6];
  fVar11 = param_3[7];
  fVar12 = param_3[8];
  fVar13 = param_3[9];
  fVar14 = param_3[10];
  fVar15 = param_3[0xb];
  fVar16 = param_4[4];
  fVar17 = param_4[5];
  fVar18 = param_4[6];
  fVar19 = param_4[7];
  fVar20 = param_4[8];
  fVar21 = param_4[9];
  fVar22 = param_4[10];
  fVar23 = param_4[0xb];
  *param_2 = *param_3 * fVar1 + (float)((double)*param_4 * param_1);
  param_2[1] = fVar5 * fVar1 + (float)((double)fVar2 * param_1);
  param_2[2] = fVar7 * fVar1 + (float)((double)fVar3 * param_1);
  param_2[3] = fVar9 * fVar1 + (float)((double)fVar4 * param_1);
  param_2[4] = (float)((double)fVar16 * param_1 + (double)(fVar6 * fVar1));
  param_2[5] = (float)((double)fVar17 * param_1 + (double)(fVar8 * fVar1));
  param_2[6] = (float)((double)fVar18 * param_1 + (double)(fVar10 * fVar1));
  param_2[7] = (float)((double)fVar19 * param_1 + (double)(fVar11 * fVar1));
  param_2[8] = (float)((double)fVar20 * param_1 + (double)(fVar12 * fVar1));
  param_2[9] = (float)((double)fVar21 * param_1 + (double)(fVar13 * fVar1));
  param_2[10] = (float)((double)fVar22 * param_1 + (double)(fVar14 * fVar1));
  param_2[0xb] = (float)((double)fVar23 * param_1 + (double)(fVar15 * fVar1));
  return;
}


// 0x0502578 (0x58 bytes)
float FastWrapRot(float param_1,float param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(param_1 + param_2);
  dVar2 = (double)(float)(dVar1 - 6.2831854820251465);
  if (dVar1 - 3.1415927410125732 < 0.0) {
    dVar2 = dVar1;
  }
  if (dVar1 < -3.1415927410125732) {
    dVar2 = (double)(float)(dVar2 + 6.2831854820251465);
  }
  return dVar2;
}


// 0x05025e0 (0x58 bytes)
float FastDiffRots(float param_1,float param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(float)(param_1 - param_2);
  dVar2 = (double)(float)(dVar1 - 6.2831854820251465);
  if (dVar1 - 3.1415927410125732 < 0.0) {
    dVar2 = dVar1;
  }
  if (dVar1 < -3.1415927410125732) {
    dVar2 = (double)(float)(dVar2 + 6.2831854820251465);
  }
  return dVar2;
}


// 0x0502648 (0x4c bytes)
void FastAddRots(float param_1)

{
  if (3.1415927 < param_1) {
    do {
      param_1 = param_1 - 6.2831855;
    } while (3.1415927 < param_1);
  }
  for (; param_1 < -3.1415927; param_1 = param_1 + 6.2831855) {
  }
  return;
}


// 0x05026a0 (0x38 bytes)
double FastSubRots(float param_1,float param_2)

{
  double dVar1;
  
  dVar1 = ABS((double)(param_1 - param_2));
  if (3.1415927410125732 <= dVar1) {
    dVar1 = (double)(float)(6.2831854820251465 - dVar1);
  }
  return dVar1;
}


// 0x05026d8 (0x4 bytes)
void STUB_005026d8(...)

{
  return;
}


// 0x05026dc (0x40 bytes)
double FastFrac(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  GPiece<16> auVar2;
  
  auVar2.piece<0,4>() = (float)param_1;
  auVar2.piece<4,4>() = (float)param_1;
  auVar2.piece<8,4>() = (float)param_1;
  auVar2.piece<12,4>() = (float)param_1;
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = vectorConvertFromSignedFixedPointWord(auVar2,0);
  uVar1 = storeVectorElementWordIndexed(auVar2,0,param_3);
  *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar1;
  return (double)(float)(param_1 - (double)(longlong)param_1);
}


// 0x050271c (0x14 bytes)
double FastMod(double param_1)

{
  return (double)(float)(param_1 - (double)(longlong)param_1);
}


// 0x0502730 (0x20 bytes)
double FastIntToDouble(int arg)

{
  return (double)(longlong)arg;
}


// 0x0502758 (0x3c bytes)
int FastDoubleToInt(double double_)

{
  double dVar1;
  
  dVar1 = double + 9.999999747378752e-05;
  if (double - 0.0 < 0.0) {
    dVar1 = double - 9.999999747378752e-05;
  }
  return (int)dVar1;
}


// 0x0502794 (0x4 bytes)
void STUB_00502794(...)

{
  return;
}


// 0x0502798 (0x24 bytes)
void FastFMod(void)

{
  fmodf();
  return;
}


// 0x05027bc (0x94 bytes)
u32 FastLerpColor(float param_1,u32 param_2,u32 param_3)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar3 - 0x50);
  *puVar2 = uVar3;
  *(float *)(puVar2 + 8) = (float)param_1;
  *(float *)((int)puVar2 + 0x44) = (float)param_1;
  lVar4 = 0;
  *(float *)(puVar2 + 9) = (float)param_1;
  *(float *)((int)puVar2 + 0x4c) = (float)param_1;
  *(undefined4 *)(puVar2 + 6) = param_2;
  *(undefined4 *)((int)puVar2 + 0x34) = param_3;
  auVar7 = ZEXT416(0xfffffff8);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar8 = *(undefined1 (*) [16])(puVar2 + 8);
  do {
    auVar9 = loadVectorLeftIndexed(lVar4,uVar3 - 0x20);
    auVar10 = loadVectorLeftIndexed(lVar4,uVar3 - 0x1c);
    auVar9 = vectorShiftRightWord(auVar9,auVar7);
    auVar10 = vectorShiftRightWord(auVar10,auVar7);
    uVar6 = lVar4 + (uVar3 - 0x50);
    iVar5 = (int)lVar4 + 1;
    auVar11 = vectorConvertFromUnsignedFixedPointWord(auVar9,0);
    auVar9 = vectorSubtractUnsignedWordModulo(auVar10,auVar9);
    lVar4 = (longlong)iVar5;
    auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar11);
    auVar9 = vectorConvertToUnsignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xff;
    uVar1 = storeVectorElementByteIndexed
                      (auVar9 | auVar9 << 8 | auVar9 << 0x10 | auVar9 << 0x18 | auVar9 << 0x20 |
                       auVar9 << 0x28 | auVar9 << 0x30 | auVar9 << 0x38 | auVar9 << 0x40 |
                       auVar9 << 0x48 | auVar9 << 0x50 | auVar9 << 0x58 | auVar9 << 0x60 |
                       auVar9 << 0x68 | auVar9 << 0x70 | auVar9 << 0x78,0x38,uVar6 & 0xffffffff);
    *(undefined1 *)((int)uVar6 + 0x38) = uVar1;
  } while (iVar5 < 4);
  return *(undefined4 *)(puVar2 + 7);
}


// 0x0502850 (0x94 bytes)
undefined4 FUN_00502850(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_10 [4];
  byte local_c [4];
  undefined4 local_8 [2];
  
  iVar2 = 0;
  do {
    iVar1 = (int)((longlong)(int)(uint)local_10[iVar2] * (longlong)(int)(uint)local_c[iVar2]);
    iVar3 = iVar2 + 1;
    *(char *)((int)local_8 + iVar2) =
         (char)((int)(iVar1 + ((uint)(0x7fff - (longlong)(int)(uint)local_10[iVar2] *
                                               (longlong)(int)(uint)local_c[iVar2] >> 0x3f) &
                              0x7fffU - iVar1)) >> 7);
    iVar2 = iVar3;
  } while (iVar3 < 4);
  return local_8[0];
}


// 0x0502910 (0x88 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FastCheckBsphereInView(float param_1,void *param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 in_LR;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auStack_10;
  
  auVar3 = loadVectorLeftIndexed(in_LR,param_2);
  auVar4 = loadVectorLeftIndexed(4,param_2);
  auVar5 = loadVectorLeftIndexed(8,param_2);
  auVar3 = vectorPermute(auVar3,auVar4,_DAT_005028f0);
  auVar4 = vectorPermute(auVar5,auStack_10,_DAT_005028f0);
  vectorPermute(auVar3,auVar4,_DAT_00502900);
  iVar2 = FastCheckBsphere((double)*(float *)((int)param_2 + 0xc),param_1,
                           (ulonglong)DAT_00902e9c + 800);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x05029c0 (0x88 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005029c0(undefined8 param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined8 in_LR;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auStack_10;
  
  auVar3 = loadVectorLeftIndexed(in_LR,param_2);
  auVar4 = loadVectorLeftIndexed(4,param_2);
  auVar5 = loadVectorLeftIndexed(8,param_2);
  auVar3 = vectorPermute(auVar3,auVar4,_DAT_005029a0);
  auVar4 = vectorPermute(auVar5,auStack_10,_DAT_005029a0);
  vectorPermute(auVar3,auVar4,_DAT_005029b0);
  iVar2 = FastCheckBsphere
                    ((double)*(float *)((int)param_2 + 0xc),param_1,(ulonglong)DAT_00902e9c + 800);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x0502a48 (0x8 bytes)
undefined8 FUN_00502a48(void)

{
  return 0;
}


// 0x0502a50 (0x8 bytes)
undefined8 FUN_00502a50(void)

{
  return 0;
}


// 0x0502a58 (0x4 bytes)
void FUN_00502a58(void)

{
  return;
}


// 0x0502a5c (0x8 bytes)
undefined8 FUN_00502a5c(void)

{
  return 0xffffffffffffffff;
}


// 0x0502a64 (0x44 bytes)
void FastVecSub(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  param_1[3] = fVar5 - fVar6;
  return;
}


// 0x0502aa8 (0x60 bytes)
longlong FUN_00502aa8(float *param_1,float *param_2,float *param_3)

{
  return 1 - ((ulonglong)
              (longlong)
              ((param_1[2] - param_2[2]) * param_3[2] +
              (*param_1 - *param_2) * *param_3 + (param_1[1] - param_2[1]) * param_3[1]) >> 0x1f & 1
             );
}


// 0x0502b08 (0x64 bytes)
void FastVecAddSelf(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  param_2[3] = param_2[3] + fVar3;
  *param_1 = *param_2;
  fVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = fVar1;
  param_1[3] = param_2[3];
  return;
}


// 0x0502b6c (0x64 bytes)
void FastVecSubSelf(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = *param_2 - *param_3;
  param_2[1] = param_2[1] - fVar1;
  param_2[2] = param_2[2] - fVar2;
  param_2[3] = param_2[3] - fVar3;
  *param_1 = *param_2;
  fVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = fVar1;
  param_1[3] = param_2[3];
  return;
}


// 0x0502bd0 (0x54 bytes)
void FastVecScaleSelf(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  *param_3 = (float)((double)*param_3 * param_1);
  param_3[1] = (float)((double)param_3[1] * param_1);
  param_3[2] = (float)((double)param_3[2] * param_1);
  param_3[3] = (float)((double)param_3[3] * param_1);
  fVar1 = param_3[1];
  *param_2 = *param_3;
  fVar2 = param_3[2];
  param_2[1] = fVar1;
  fVar1 = param_3[3];
  param_2[2] = fVar2;
  param_2[3] = fVar1;
  return;
}


// 0x0502c24 (0x44 bytes)
void FastVecMul(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar1 * fVar2;
  param_1[2] = fVar3 * fVar4;
  param_1[3] = fVar5 * fVar6;
  return;
}


// 0x0502c68 (0x64 bytes)
void FastVecMulSelf(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_2 = *param_2 * *param_3;
  param_2[1] = param_2[1] * fVar1;
  param_2[2] = param_2[2] * fVar2;
  param_2[3] = param_2[3] * fVar3;
  *param_1 = *param_2;
  fVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = fVar1;
  param_1[3] = param_2[3];
  return;
}


// 0x0502cd0 (0x54 bytes)
void FUN_00502cd0(void)

{
  DAT_009271f8 = &DAT_0159b374;
  g_pFrameTicks = &DAT_0159b37c;
  DAT_00927204 = &DAT_0159b380;
  g_pDebugCounterMode = &DAT_0159b378;
  DAT_0159b35c = &DAT_0159b384;
  return;
}


// 0x0502d24 (0x5c bytes)
void FUN_00502d24(uint param_1,int *param_2)

{
  param_1 = param_1 & 3;
  if (param_1 == 0) {
    *param_2 = *param_2 + 0x100;
  }
  else if (param_1 < 2) {
    *param_2 = *param_2 + 0x10;
  }
  else if (param_1 < 3) {
    *param_2 = *param_2 + 1;
  }
  return;
}


// 0x0502d80 (0x4c bytes)
void FUN_00502d80(void)

{
  FUN_00502d24(DAT_0159b378,&DAT_0159b374);
  FUN_00502d24(DAT_0159b380,&DAT_0159b37c);
  return;
}


// 0x0502dcc (0x8 bytes)
int HostOpen(const char *param_1,int param_2)

{
  return 0;
}


// 0x0502dd4 (0x8 bytes)
int HostRead(int param_1,void *param_2,int param_3)

{
  return 0;
}


// 0x0502ddc (0x4 bytes)
void HostClose(int param_1)

{
  return;
}


// 0x0502de0 (0x8 bytes)
int HostSeek(int param_1,int param_2,int param_3)

{
  return 0;
}


// 0x0502de8 (0x4 bytes)
void STUB_00502de8(...)

{
  return;
}


// 0x0502dec (0x4 bytes)
void FUN_00502dec(void)

{
  return;
}


// 0x0502df0 (0x4 bytes)
void FUN_00502df0(void)

{
  return;
}


// 0x0502df4 (0x4 bytes)
void FUN_00502df4(void)

{
  return;
}


// 0x0502df8 (0x4 bytes)
void FUN_00502df8(void)

{
  return;
}


// 0x0502dfc (0x4 bytes)
void FUN_00502dfc(void)

{
  return;
}


// 0x0502e00 (0x8 bytes)
undefined8 FUN_00502e00(void)

{
  return 0;
}


// 0x0502e08 (0x8 bytes)
undefined8 FUN_00502e08(void)

{
  return 0;
}


// 0x0502e10 (0x8 bytes)
undefined8 FUN_00502e10(void)

{
  return 0;
}


// 0x0502e18 (0x8 bytes)
undefined8 FUN_00502e18(void)

{
  return 0;
}


// 0x0502e20 (0x8 bytes)
undefined8 FUN_00502e20(void)

{
  return 0;
}


// 0x0502e28 (0x8 bytes)
undefined8 FUN_00502e28(void)

{
  return 0;
}


// 0x0502e30 (0x8 bytes)
undefined8 FUN_00502e30(void)

{
  return 0;
}


// 0x0502e38 (0x8 bytes)
undefined8 FUN_00502e38(void)

{
  return 0;
}


// 0x0502e40 (0x8 bytes)
undefined8 FUN_00502e40(void)

{
  return 0;
}


// 0x0502e48 (0x8 bytes)
undefined8 FUN_00502e48(void)

{
  return 0;
}


// 0x0502e50 (0x8 bytes)
undefined8 FUN_00502e50(void)

{
  return 0;
}


// 0x0502e58 (0x8 bytes)
undefined8 FUN_00502e58(void)

{
  return 0;
}


// 0x0502e60 (0x8 bytes)
undefined8 FUN_00502e60(void)

{
  return 0;
}


// 0x0502e68 (0x8 bytes)
undefined8 FUN_00502e68(void)

{
  return 0;
}


// 0x0502e70 (0x8 bytes)
u64 SCE_GS_SET_PRIM(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  return 0;
}


// 0x0502e78 (0x8 bytes)
undefined8 FUN_00502e78(void)

{
  return 0;
}


// 0x0502e80 (0x8 bytes)
undefined8 FUN_00502e80(void)

{
  return 0;
}


// 0x0502e88 (0x8 bytes)
undefined8 FUN_00502e88(void)

{
  return 0;
}


// 0x0502e90 (0x8 bytes)
undefined8 FUN_00502e90(void)

{
  return 0;
}


// 0x0502e98 (0x8 bytes)
u64 FUN_00502e98(int param_1,int param_2,int param_3)

{
  return 0;
}


// 0x0502ea0 (0x8 bytes)
u64 SCE_GIF_SET_TAG(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return 0;
}


// 0x0502ea8 (0x30 bytes)
ulonglong idol_draw::PackCmd(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4
                            ,longlong depth)

{
  return depth << 0x20 | param_1 | (param_2 & 0x3fffffff) << 2 | (param_3 & 0xfffffff) << 4 |
         (param_4 & 0x3ffffff) << 6;
}


// 0x0502ed8 (0x30 bytes)
ulonglong FUN_00502ed8(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5)

{
  return param_5 << 0x20 | param_1 | (param_2 & 0x3fffffff) << 2 | (param_3 & 0xfffffff) << 4 |
         (param_4 & 0x3ffffff) << 6;
}


// 0x0502f08 (0x54 bytes)
u64 SCE_GS_SET_CLAMP(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_1 & 3 | (param_2 & 3) << 2 | (param_3 & 0x3ff) << 4 | (param_4 & 0x3ff) << 0xe |
         (param_5 & 0x3ff) << 0x18 | (param_6 & 0x3ff) << 0x22;
}


// 0x0502f5c (0x8 bytes)
undefined8 FUN_00502f5c(void)

{
  return 0;
}


// 0x0502f64 (0x8 bytes)
undefined8 FUN_00502f64(void)

{
  return 0;
}


// 0x0502f6c (0x8 bytes)
u64 SCE_GS_SET_MIPTBP1(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return 0;
}


// 0x0502f74 (0x8 bytes)
undefined8 FUN_00502f74_RET_0(void)

{
  return 0;
}


// 0x0502f7c (0x1c bytes)
uint idol_draw::Blend(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  return param_1 | param_2 << 1 | param_3 << 4;
}


// 0x0502f98 (0x1c bytes)
u64 FUN_00502f98(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  return param_1 | param_2 << 1 | param_3 << 4;
}


// 0x0502fb4 (0x8 bytes)
undefined8 FUN_00502fb4(void)

{
  return 0;
}


// 0x0502fbc (0x8 bytes)
u64 SCE_GS_SET_TEX0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  return 0;
}


// 0x0502fc4 (0x8 bytes)
undefined8 FUN_00502fc4(void)

{
  return 0;
}


// 0x0502fcc (0x8 bytes)
undefined8 FUN_00502fcc(void)

{
  return 0;
}


// 0x0502fd4 (0x8 bytes)
u64 SCE_GS_SET_TEX1(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  return 0;
}


// 0x0502fdc (0x8 bytes)
undefined8 FUN_00502fdc(void)

{
  return 0;
}


// 0x0502fe4 (0x8 bytes)
undefined8 FUN_00502fe4(void)

{
  return 0;
}


// 0x0502fec (0x8 bytes)
u64 SCE_GS_SET_XYZ(int param_1,int param_2,int param_3)

{
  return 0;
}


// 0x0502ff4 (0x8 bytes)
undefined8 FUN_00502ff4(void)

{
  return 0;
}


// 0x0502ffc (0x8 bytes)
u64 VU1_addGSregister(int param_1,int param_2,int param_3)

{
  return 0;
}


// 0x0503004 (0x8 bytes)
undefined8 FUN_00503004(void)

{
  return 0;
}


// 0x050300c (0x8 bytes)
u8 Gs_DmaTagByte(int param_1,int param_2)

{
  return 0;
}


// 0x0503014 (0x8 bytes)
undefined8 FUN_00503014(void)

{
  return 0;
}


// 0x050301c (0x8 bytes)
undefined8 FUN_0050301c(void)

{
  return 0;
}


// 0x0503024 (0x8 bytes)
undefined8 FUN_00503024(void)

{
  return 0;
}


// 0x050302c (0x8 bytes)
undefined8 FUN_0050302c(void)

{
  return 0;
}


// 0x0503034 (0x8 bytes)
undefined8 FUN_00503034(void)

{
  return 0;
}


// 0x050303c (0x8 bytes)
undefined8 FUN_0050303c(void)

{
  return 0;
}


// 0x0503044 (0x8 bytes)
u64 SCE_GS_SET_BITBLTBUF(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return 0;
}


// 0x050304c (0x8 bytes)
undefined8 FUN_0050304c(void)

{
  return 0;
}


// 0x0503054 (0x4 bytes)
void FUN_00503054(void)

{
  return;
}


// 0x0503058 (0x8 bytes)
undefined8 FUN_00503058(void)

{
  return 0;
}


// 0x0503060 (0x8 bytes)
undefined8 FUN_00503060_RET_0(void)

{
  return 0;
}


// 0x0503068 (0x4 bytes)
void FUN_00503068(void)

{
  return;
}


// 0x050306c (0x4 bytes)
void sceGsExecLoadImage(void *param_1,void *param_2)

{
  return;
}


// 0x0503070 (0x4 bytes)
void STUB_00503070(...)

{
  return;
}


// 0x0503074 (0x4 bytes)
void sceGsSyncPath(int param_1,int param_2)

{
  return;
}


// 0x0503078 (0x4 bytes)
void STUB_00503078(...)

{
  return;
}


// 0x050307c (0x4 bytes)
void STUB_0050307c(...)

{
  return;
}


// 0x0503080 (0x4 bytes)
void STUB_00503080(...)

{
  return;
}


// 0x0503084 (0x4 bytes)
void sceGsSetDefLoadImage(void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)

{
  return;
}


// 0x0503088 (0x4 bytes)
void FUN_00503088(void)

{
  return;
}


// 0x050308c (0x4 bytes)
void FUN_0050308c(void)

{
  return;
}


// 0x0503090 (0x4 bytes)
void FUN_00503090(void)

{
  return;
}


// 0x0503094 (0x8 bytes)
undefined8 FUN_00503094(void)

{
  return 0;
}


// 0x050309c (0x8 bytes)
undefined8 FUN_0050309c(void)

{
  return 0;
}


// 0x05030a4 (0x8 bytes)
undefined8 FUN_005030a4(void)

{
  return 2;
}


// 0x05030ac (0x8 bytes)
undefined8 FUN_005030ac(void)

{
  return 0;
}


// 0x05030b4 (0x8 bytes)
undefined8 FUN_005030b4(void)

{
  return 0;
}


// 0x05030bc (0x8 bytes)
undefined8 FUN_005030bc(void)

{
  return 0;
}


// 0x05030c4 (0x8 bytes)
undefined8 FUN_005030c4(void)

{
  return 0;
}


// 0x05030cc (0x8 bytes)
undefined8 FUN_005030cc(void)

{
  return 0;
}


// 0x05030d4 (0x8 bytes)
undefined8 FUN_005030d4(void)

{
  return 0;
}


// 0x05030dc (0x8 bytes)
u64 FUN_005030dc(int param_1)

{
  return 0;
}


// 0x05030e4 (0x8 bytes)
undefined8 FUN_005030e4(void)

{
  return 0;
}


// 0x05030ec (0x8 bytes)
u64 FUN_005030ec(int param_1)

{
  return 0;
}


// 0x05030f4 (0x8 bytes)
undefined8 FUN_005030f4(void)

{
  return 0;
}


// 0x05030fc (0x8 bytes)
undefined8 FUN_005030fc(void)

{
  return 0;
}


// 0x0503104 (0x8 bytes)
undefined8 FUN_00503104(void)

{
  return 0;
}


// 0x050310c (0x8 bytes)
undefined8 FUN_0050310c(void)

{
  return 0;
}


// 0x0503114 (0x4 bytes)
void STUB_00503114(...)

{
  return;
}


// 0x0503118 (0x4 bytes)
void STUB_00503118(...)

{
  return;
}


// 0x050311c (0x4 bytes)
void FUN_0050311c(void)

{
  return;
}


// 0x0503120 (0x8 bytes)
undefined8 FUN_00503120(void)

{
  return 0;
}


// 0x0503128 (0x8 bytes)
undefined8 FUN_00503128_RET_0(void)

{
  return 0;
}


// 0x0503130 (0x8 bytes)
undefined8 FUN_00503130_RET_3(void)

{
  return 3;
}


// 0x0503138 (0x8 bytes)
undefined8 FUN_00503138_RET_0(void)

{
  return 0;
}


// 0x0503140 (0x4 bytes)
void FUN_00503140(void)

{
  return;
}


// 0x0503144 (0x8 bytes)
undefined8 FUN_00503144(void)

{
  return 0;
}


// 0x050314c (0x10 bytes)
undefined8 FUN_0050314c(undefined4 *param_1)

{
  *param_1 = 1;
  return 0;
}


// 0x050315c (0x8 bytes)
int FUN_0050315c_RET_0(int param_1)

{
  return 0;
}


// 0x0503164 (0x8 bytes)
int FUN_00503164(int param_1,int param_2,int param_3)

{
  return 0;
}


// 0x050316c (0x8 bytes)
undefined8 FUN_0050316c(void)

{
  return 1;
}


// 0x0503174 (0x4 bytes)
void FUN_00503174(void)

{
  return;
}


// 0x0503178 (0x4 bytes)
void FUN_00503178(void)

{
  return;
}


// 0x050317c (0x4 bytes)
void FUN_0050317c(void)

{
  return;
}


// 0x0503180 (0x8 bytes)
undefined8 FUN_00503180(void)

{
  return 1;
}


// 0x0503188 (0x4 bytes)
void FUN_00503188(void)

{
  return;
}


// 0x050318c (0x8 bytes)
undefined8 FUN_0050318c(void)

{
  return 0;
}


// 0x0503194 (0x8 bytes)
undefined8 FUN_00503194(void)

{
  return 0;
}


// 0x050319c (0x8 bytes)
undefined8 FUN_0050319c(void)

{
  return 0;
}


// 0x05031a4 (0x4 bytes)
void STUB_005031a4(...)

{
  return;
}


// 0x05031a8 (0x8 bytes)
int FUN_005031a8(int param_1)

{
  return 0;
}


// 0x05031b0 (0x8 bytes)
undefined8 FUN_005031b0(void)

{
  return 0;
}


// 0x05031b8 (0x4 bytes)
void STUB_005031b8(...)

{
  return;
}


// 0x05031bc (0x38 bytes)
int FUN_005031bc(void *param_1,int param_2)

{
  memcpy((void *)param_1[1],(void *)*param_1,param_1[2]);
  return 0;
}


// 0x05031f4 (0x4 bytes)
void FUN_005031f4(void)

{
  return;
}


// 0x05031f8 (0x4 bytes)
void STUB_005031f8(...)

{
  return;
}


// 0x05031fc (0x4 bytes)
void STUB_005031fc(...)

{
  return;
}


// 0x0503200 (0x4 bytes)
void FUN_00503200(void)

{
  return;
}


// 0x0503204 (0x4 bytes)
void STUB_00503204(...)

{
  return;
}


// 0x0503208 (0x4 bytes)
void STUB_00503208(...)

{
  return;
}


// 0x050320c (0x8 bytes)
undefined8 FUN_0050320c(void)

{
  return 0;
}


// 0x0503214 (0x4 bytes)
void FUN_00503214(int param_1)

{
  return;
}


// 0x0503218 (0x4 bytes)
void STUB_00503218(...)

{
  return;
}


// 0x050321c (0x4 bytes)
void STUB_0050321c(...)

{
  return;
}


// 0x0503220 (0x8 bytes)
undefined8 FUN_00503220(void)

{
  return 0;
}


// 0x0503228 (0x8 bytes)
undefined8 FUN_00503228(void)

{
  return 0;
}


// 0x0503230 (0x8 bytes)
undefined8 FUN_00503230(void)

{
  return 0;
}


// 0x0503238 (0x8 bytes)
undefined8 FUN_00503238(void)

{
  return 0;
}


// 0x0503240 (0x4 bytes)
void FUN_00503240(void)

{
  return;
}


// 0x0503244 (0x4 bytes)
void FlushCache(int param_1)

{
  return;
}


// 0x0503248 (0x4 bytes)
void FUN_00503248(void)

{
  return;
}


// 0x050324c (0x4 bytes)
void FUN_0050324c(void)

{
  return;
}


// 0x0503250 (0x8 bytes)
undefined8 FUN_00503250(void)

{
  return 0;
}


// 0x0503258 (0x8 bytes)
undefined8 FUN_00503258(void)

{
  return 0;
}


// 0x0503260 (0x8 bytes)
undefined8 FUN_00503260(void)

{
  return 0;
}


// 0x0503268 (0x4 bytes)
void FUN_00503268(void)

{
  return;
}


// 0x050326c (0x4 bytes)
void FUN_0050326c(void)

{
  return;
}


// 0x0503270 (0x4 bytes)
void FUN_00503270(void)

{
  return;
}


// 0x0503274 (0x8 bytes)
undefined8 FUN_00503274(void)

{
  return 0;
}


// 0x050327c (0x4 bytes)
void FUN_0050327c(void)

{
  return;
}


// 0x0503280 (0x4 bytes)
void FUN_00503280(void)

{
  return;
}


// 0x0503284 (0x8 bytes)
undefined8 FUN_00503284(void)

{
  return 0;
}


// 0x050328c (0x4 bytes)
void FUN_0050328c(void)

{
  return;
}


// 0x0503290 (0x8 bytes)
undefined8 FUN_00503290(void)

{
  return 0;
}


// 0x0503298 (0x4 bytes)
void FUN_00503298(void)

{
  return;
}


// 0x050329c (0x8 bytes)
undefined8 FUN_0050329c(void)

{
  return 0;
}


// 0x05032a4 (0x4 bytes)
void FUN_005032a4(void)

{
  return;
}


// 0x05032a8 (0x8 bytes)
undefined8 FUN_005032a8(void)

{
  return 0;
}


// 0x05032b0 (0x8 bytes)
undefined8 FUN_005032b0(void)

{
  return 0;
}


// 0x05032b8 (0x4 bytes)
void FUN_005032b8(void)

{
  return;
}


// 0x05032bc (0x8 bytes)
undefined8 FUN_005032bc(void)

{
  return 0;
}


// 0x05032c4 (0x8 bytes)
undefined8 FUN_005032c4(void)

{
  return 0;
}


// 0x05032cc (0x8 bytes)
undefined8 FUN_005032cc(void)

{
  return 0;
}


// 0x05032d4 (0x8 bytes)
undefined8 FUN_005032d4(void)

{
  return 0;
}


// 0x05032dc (0x8 bytes)
undefined8 FUN_005032dc(void)

{
  return 0;
}


// 0x05032e4 (0x8 bytes)
undefined8 FUN_005032e4(void)

{
  return 0;
}


// 0x05032ec (0x8 bytes)
undefined8 FUN_005032ec(void)

{
  return 0;
}


// 0x05032f4 (0x8 bytes)
undefined8 FUN_005032f4(void)

{
  return 0;
}


// 0x05032fc (0x8 bytes)
undefined8 FUN_005032fc(void)

{
  return 0;
}


// 0x0503304 (0x8 bytes)
undefined8 FUN_00503304(void)

{
  return 0;
}


// 0x050330c (0x8 bytes)
undefined8 FUN_0050330c(void)

{
  return 0;
}


// 0x0503314 (0x8 bytes)
undefined8 FUN_00503314(void)

{
  return 0;
}


// 0x050331c (0x4 bytes)
void FUN_0050331c(void)

{
  return;
}


// 0x0503320 (0x4 bytes)
void FUN_00503320(void)

{
  return;
}


// 0x0503324 (0x4 bytes)
void FUN_00503324(void)

{
  return;
}


// 0x0503328 (0x4 bytes)
void FUN_00503328(void)

{
  return;
}


// 0x050332c (0x4 bytes)
void FUN_0050332c(void)

{
  return;
}


// 0x0503330 (0x24 bytes)
void FUN_00503330(void)

{
  syscall_sys_timer_usleep();
  return;
}


// 0x0503354 (0x8 bytes)
undefined8 FUN_00503354(void)

{
  return 0;
}


// 0x050335c (0x8 bytes)
undefined8 FUN_0050335c(void)

{
  return 0;
}


// 0x0503364 (0x8 bytes)
undefined8 FUN_00503364(void)

{
  return 0;
}


// 0x050336c (0x4 bytes)
void FUN_0050336c(void)

{
  return;
}


// 0x0503370 (0x8 bytes)
undefined8 FUN_00503370(void)

{
  return 0;
}


// 0x0503378 (0x4 bytes)
void FUN_00503378(void)

{
  return;
}


// 0x050337c (0x8 bytes)
undefined8 FUN_0050337c(void)

{
  return 0;
}


// 0x0503384 (0x4 bytes)
void FUN_00503384(void)

{
  return;
}


// 0x0503388 (0x8 bytes)
undefined8 FUN_00503388(void)

{
  return 0;
}


// 0x0503390 (0x28 bytes)
undefined4 FUN_00503390(void)

{
  undefined4 uVar1;
  
  uVar1 = sys_time_get_system_time();
  return uVar1;
}


// 0x05033b8 (0x8 bytes)
undefined8 FUN_005033b8(void)

{
  return 0;
}


// 0x05033c0 (0x8 bytes)
undefined8 FUN_005033c0(void)

{
  return 0;
}


// 0x05033c8 (0x8 bytes)
undefined8 FUN_005033c8(void)

{
  return 0;
}


// 0x05033d0 (0x4 bytes)
void FUN_005033d0(void)

{
  return;
}


// 0x05033d4 (0x8 bytes)
undefined8 FUN_005033d4(void)

{
  return 0;
}


// 0x05033dc (0x8 bytes)
undefined8 FUN_005033dc(void)

{
  return 0;
}


// 0x05033e4 (0x4 bytes)
void FUN_005033e4(void)

{
  return;
}


// 0x05033e8 (0x8 bytes)
void FUN_005033e8(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}


// 0x05033f0 (0x8 bytes)
undefined8 FUN_005033f0(void)

{
  return 0;
}


// 0x05033f8 (0x4 bytes)
void FUN_005033f8(void)

{
  return;
}


// 0x05033fc (0x8 bytes)
undefined8 FUN_005033fc(void)

{
  return 0;
}


// 0x0503404 (0x30 bytes)
// strings: 0065f69c: 'm_LoadLevelFileS %s\n'

undefined8 FUN_00503404(void)

{
  printf("m_LoadLevelFileS %s\n");
  return 0;
}


// 0x0503434 (0x30 bytes)
// strings: 0065f6b4: 'm_LoadLevelFile %s\n'

undefined8 FUN_00503434(void)

{
  printf("m_LoadLevelFile %s\n");
  return 0;
}


// 0x0503464 (0x30 bytes)
// strings: 0065f6c8: 'm_LoadLevelFileB %s\n'

undefined8 FUN_00503464(void)

{
  printf("m_LoadLevelFileB %s\n");
  return 0;
}


