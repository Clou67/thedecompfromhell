// game/update/moby404.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x363aa0-0x364670
// shared update function UpdateMoby_{404_405}; registered for oClasses 404, 405
#include <stdio.h>
#include <string.h>
#include "game/update/moby404.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0363aa0 (0x328 bytes)
longlong FUN_00363aa0(int param_1,float *param_2,u8 param_3)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  int *piVar4;
  undefined4 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auStack_50;
  float local_40;
  float local_3c;
  float local_38;
  f32 local_34;
  
  pMVar6 = CreateMoby(0x193);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->state = param_3;
    piVar4 = (int *)pMVar6->pVar;
    uVar8 = ZEXT48(piVar4);
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar6->pos).x = *(f32 *)(param_1 + 0x10);
    fVar3 = *(f32 *)(param_1 + 0x18);
    (pMVar6->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar6->pos).z = fVar3;
    fVar3 = *(f32 *)(param_1 + 0x48);
    (pMVar6->pos).w = fVar2;
    (pMVar6->rotation).z = fVar3;
    pMVar6->updateDistance = -1;
    pMVar6->drawDistance = 0xff;
    pMVar6->enabled = '\x01';
    *piVar4 = param_1;
    dVar13 = 0.0;
    if (pMVar6->state == '\0') {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(4,0x363a74);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,4,uVar8);
      *(undefined4 *)((uint)(piVar4 + 1) & 0xfffffffc) = uVar5;
      piVar4[2] = (int)(*param_2 * g_FrameTime);
      iVar7 = *(int *)(*(int *)(param_1 + 0x78) + 0x60);
      piVar4[4] = 0;
      piVar4[3] = iVar7;
      piVar4[5] = 0;
      iVar7 = DAT_00a1a85c + iVar7 * 0x20;
      MB_PathFollowToPos
                (0x4034000000000000,0x4014000000000000,0,*(undefined4 *)(iVar7 + 0x10),
                 (longlong)(int)pMVar6 + 0x10,auStack_50,uVar8 + 0x10,uVar8 + 0x14,iVar7,0);
    }
    else {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x10,0x363a74);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,4,uVar8);
      *(undefined4 *)((uint)(piVar4 + 1) & 0xfffffffc) = uVar5;
      local_40 = (pMVar6->pos).x - g_heroPosition.x;
      local_3c = (pMVar6->pos).y - g_heroPosition.y;
      local_34 = (pMVar6->pos).w;
      local_38 = 0.0;
      dVar9 = (double)MB_randRangeFloat
                                (DAT_0071f408 * DAT_00840a80,DAT_0071f408 * DAT_00840a84);
      dVar12 = (double)SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
      fVar1 = (float)(dVar9 / dVar12);
      dVar9 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar9 = (double)(local_40 * fVar1);
      }
      dVar11 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar11 = (double)(local_3c * fVar1);
      }
      dVar10 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar10 = (double)(local_38 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar9 = (double)(local_40 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar11 = (double)(local_3c * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar10 = (double)(local_38 * fVar1);
      }
      local_40 = (float)dVar9;
      local_3c = (float)dVar11;
      local_38 = (float)dVar10;
      dVar9 = (double)MB_randRangeSigned(0x3fe26e40e0000000,0x3ff6571840000000);
      MB_RotateQuatAxisAngle((float)dVar9,(float *)(piVar4 + 0xc),&local_40);
      dVar9 = (double)MB_randRangeFloat
                                (DAT_0071f408 * DAT_00840a88,DAT_0071f408 * DAT_00840a8c);
      piVar4[0xe] = (int)(float)dVar9;
      dVar9 = (double)MB_randRangeSigned(dVar13,0x3f81df46a0000000);
      piVar4[8] = (int)(float)dVar9;
      dVar9 = (double)MB_randRangeSigned(0x3faaceea00000000,0x3fc1df46a0000000);
      piVar4[9] = (int)(float)dVar9;
      dVar13 = (double)MB_randRangeSigned(dVar13,0x3f91df46a0000000);
      piVar4[10] = (int)(float)dVar13;
    }
    UpdateMobyTransform(pMVar6);
  }
  return (longlong)(int)pMVar6;
}


// 0x0363dc8 (0x14 bytes)
void M405_00363dc8(void)

{
  DAT_00840ae8 = 0x10000;
  return;
}


// 0x0363df8 (0x600 bytes)
ulonglong M405_00363df8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte in_cr6;
  undefined8 uVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar43;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x1f0;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  lVar8 = uVar10 - 0x80;
  puVar9 = (undefined4 *)lVar8;
  puVar9[3] = in_vr31_32_3;
  puVar9[2] = in_vr31_32_2;
  puVar9[1] = in_vr31_32_1;
  *puVar9 = in_vr31_32_0;
  FastEulerToMtx(uVar10 - 0x150,param_1 + 0x40);
  sVar3 = *(short *)((int)param_2 + 8);
  sVar4 = *(short *)((int)param_2 + 10);
  auVar21 = ZEXT416(0xfffffff0);
  auVar23 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = loadVectorLeftIndexed(8,param_2);
  auVar24 = loadVectorLeftIndexed(10,param_2);
  auVar25 = vectorShiftRightAlgebraicWord(auVar21,auVar23);
  auVar26 = vectorShiftRightAlgebraicWord(auVar24,auVar23);
  auVar22 = vectorShiftRightWord(auVar21,auVar23);
  auVar24 = vectorShiftRightWord(auVar24,auVar23);
  auVar25 = vectorCompareGreaterThanSignedWord(auVar25,auVar26);
  auVar21 = ZEXT416(0xffffffff);
  auVar26 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar22 = vectorConditionalSelect(auVar24,auVar22,auVar25);
  auVar21 = ZEXT416(0xffffffff);
  auVar32 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar22,auVar23);
  auVar26 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar21 = vectorShiftRightAlgebraicWord(auVar21,auVar23);
  auVar23 = loadVectorLeftIndexed(0xc0,lVar1);
  puVar7[0x22] = (longlong)
                 (int)(short)(sVar4 + ((ushort)((longlong)sVar4 - (longlong)sVar3 >> 0x3f) &
                                      sVar3 - sVar4));
  auVar22 = vectorConvertFromSignedFixedPointWord(auVar21,0);
  auVar24 = loadVectorLeftIndexed(0xc4,lVar1);
  auVar21 = loadVectorLeftIndexed(lVar8,0x363de0);
  auVar25 = loadVectorLeftIndexed(0xcc,lVar1);
  auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar42 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar27 = loadVectorLeftIndexed(200,lVar1);
  auVar28 = loadVectorLeftIndexed(0x10,param_1);
  auVar29 = loadVectorLeftIndexed(0x14,param_1);
  auVar30 = loadVectorLeftIndexed(0x18,param_1);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar22,auVar42,auVar26);
  auVar22 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)(puVar7 + 0x11) = 0;
  *(undefined4 *)((int)puVar7 + 0x84) = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar21,auVar22);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar28);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar21,auVar29);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar21,auVar30);
  auVar21 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar6 = storeVectorElementWordIndexed
                    (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x8c,lVar1);
  *(undefined4 *)((int)puVar7 + 0x8c) = uVar6;
  uVar6 = storeVectorElementWordIndexed
                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x80,lVar1);
  *(undefined4 *)(puVar7 + 0x10) = uVar6;
  uVar6 = storeVectorElementWordIndexed
                    (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x84,lVar1);
  *(undefined4 *)((int)puVar7 + 0x84) = uVar6;
  uVar6 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar7 + 0x11) = uVar6;
  uVar11 = CollMobySphere
                     ((double)((float)(longlong)puVar7[0x22] * 0.5),uVar10 - 0x170,0x8c,0x10,param_1
                      ,0);
  iVar19 = (int)uVar11;
  if (iVar19 != 0) {
    lVar8 = -((longlong)(int)(uVar11 << 2) + 0x7fU & 0xfffffffffffffff0);
    uVar12 = lVar1 + lVar8;
    uVar15 = uVar12 & 0xffffffff;
    *(ulonglong *)((int)puVar7 + (int)lVar8) = *puVar7;
    pvVar13 = memcpy((void *)((int)uVar12 + 0x70),&g_CollMobyHits,
                           (size_t)((uVar11 & 0xffffffff) << 2));
    uVar11 = (ulonglong)(int)pvVar13;
    iVar18 = 0;
    if (0 < iVar19) {
      do {
        uVar5 = *(uint *)((int)uVar15 + 0x70);
        uVar12 = (ulonglong)uVar5;
        if (uVar5 != 0) {
          bVar2 = *(byte *)(uVar5 + 0x20);
          uVar11 = (ulonglong)bVar2;
          if (bVar2 != 0xfd && bVar2 != 0xfe) {
            auVar21 = loadVectorLeftIndexed(0x14,uVar12);
            auVar22 = loadVectorLeftIndexed(0x14,param_1);
            auVar23 = loadVectorLeftIndexed(0x10,uVar12);
            auVar24 = loadVectorLeftIndexed(0x10,param_1);
            auVar27 = vectorSubtractFloatingPoint(auVar21,auVar22);
            auVar21 = loadVectorLeftIndexed(0x18,uVar12);
            auVar22 = loadVectorLeftIndexed(0x18,param_1);
            auVar39 = vectorSubtractFloatingPoint(auVar23,auVar24);
            auVar38 = vectorSubtractFloatingPoint(auVar21,auVar22);
            auVar43 = loadVectorLeftIndexed(0x1c,uVar12);
            FastNormalizeRMtx4(uVar10 - 0x120,uVar10 - 0x150);
            auVar21 = ZEXT416(0xffffffff);
            auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
            auVar22 = loadVectorLeftIndexed(0xe0,lVar1);
            auVar24 = loadVectorLeftIndexed(0xd0,lVar1);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar27,auVar21);
            auVar21 = ZEXT416(0xffffffff);
            auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar25 = loadVectorLeftIndexed(0xf0,lVar1);
            auVar29 = loadVectorLeftIndexed(0x100,lVar1);
            auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
            auVar26 = loadVectorLeftIndexed(8,param_2);
            auVar23 = loadVectorLeftIndexed(0xe8,lVar1);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar27,auVar21);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar39,auVar22);
            auVar21 = ZEXT416(0xfffffff0);
            auVar30 = vectorShiftRightAlgebraicWord
                                (auVar26,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 |
                                         auVar21 << 0x60);
            auVar24 = loadVectorLeftIndexed(0xd8,lVar1);
            auVar21 = loadVectorLeftIndexed(4,0x363de0);
            auVar32 = vectorConvertFromSignedFixedPointWord(auVar30,0);
            auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar31 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar39,auVar23);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar38,auVar22);
            auVar21 = ZEXT416(0xffffffff);
            auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar25 = loadVectorLeftIndexed(0xec,lVar1);
            auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
            auVar24 = loadVectorLeftIndexed(0xf8,lVar1);
            auVar34 = loadVectorLeftIndexed(0xdc,lVar1);
            auVar26 = loadVectorLeftIndexed(8,0x363de0);
            auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar27,auVar21);
            auVar21 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar33 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar28 = vectorMultiplyAddFloatingPoint(auVar24,auVar38,auVar23);
            auVar26 = loadVectorLeftIndexed(0x108,lVar1);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar29,auVar43,auVar22);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar32,auVar42,auVar31);
            auVar35 = loadVectorLeftIndexed(0xfc,lVar1);
            auVar24 = loadVectorLeftIndexed(0x10c,lVar1);
            auVar29 = loadVectorLeftIndexed(10,param_2);
            auVar27 = vectorMultiplyAddFloatingPoint(auVar34,auVar39,auVar27);
            auVar39 = loadVectorLeftIndexed(0xa0,lVar1);
            auVar36 = loadVectorLeftIndexed(0xc0,lVar1);
            auVar21 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar22 = vectorMultiplyAddFloatingPoint(auVar26,auVar43,auVar28);
            auVar28 = loadVectorLeftIndexed(0xa4,lVar1);
            auVar37 = loadVectorLeftIndexed(0xc4,lVar1);
            auVar40 = loadVectorLeftIndexed(0xa8,lVar1);
            auVar21 = (auVar25 ^ auVar33) >> 0x60 & (GPiece<16>)0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar34,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar35,auVar38,auVar27);
            auVar38 = loadVectorLeftIndexed(200,lVar1);
            auVar21 = loadVectorLeftIndexed(0xac,lVar1);
            auVar25 = loadVectorLeftIndexed(0xcc,lVar1);
            auVar27 = loadVectorLeftIndexed(0x10,param_1);
            auVar41 = loadVectorLeftIndexed(0x14,param_1);
            auVar35 = loadVectorLeftIndexed(0x18,param_1);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar23 = ZEXT416(0);
              auVar32 = ZEXT416(0xffffffff);
              auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
              auVar23 = vectorSubtractUnsignedWordModulo
                                  (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                                   auVar30);
              auVar30 = vectorShiftLeftIntegerWord(auVar32,auVar32);
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar42,auVar30);
            }
            else {
              auVar30 = ZEXT416(0xffffffff);
              auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar42,auVar30);
              auVar30 = vectorAddFloatingPoint(auVar32,auVar31);
              auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
              vectorCompareGreaterThanFloatingPoint
                        (auVar34,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
              if (!(bool)(in_cr6 >> 1 & 1)) {
                auVar23 = auVar32;
              }
            }
            auVar30 = ZEXT416(0xfffffff0);
            auVar32 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar31 = vectorShiftRightAlgebraicWord
                                (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60);
            auVar23 = loadVectorLeftIndexed(0xc,0x363de0);
            auVar29 = vectorConvertFromSignedFixedPointWord(auVar31,0);
            auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar30 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar23 = vectorMultiplyAddFloatingPoint(auVar29,auVar42,auVar30);
            auVar23 = (auVar23 ^ auVar33) >> 0x60 & (GPiece<16>)0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar32,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar22 = ZEXT416(0);
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar22 = vectorSubtractUnsignedWordModulo
                                  (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                   auVar31);
              auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar22 = vectorConvertFromSignedFixedPointWord(auVar22,0);
              auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar42,auVar23);
            }
            else {
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar42,auVar23);
              auVar23 = vectorAddFloatingPoint(auVar29,auVar30);
              auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
              vectorCompareGreaterThanFloatingPoint
                        (auVar32,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
              if (!(bool)(in_cr6 >> 1 & 1)) {
                auVar22 = auVar29;
              }
            }
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar26 = vectorMultiplyAddFloatingPoint(auVar24,auVar43,auVar26);
            auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
            auVar22 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar36,auVar24,auVar27);
            auVar29 = vectorMultiplyAddFloatingPoint(auVar37,auVar24,auVar41);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar38,auVar24,auVar35);
            auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar34,auVar22);
            auVar27 = vectorMultiplyAddFloatingPoint(auVar39,auVar34,auVar23);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar24,auVar21);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar28,auVar34,auVar29);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar40,auVar34,auVar30);
            auVar21 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar24 = vectorAddFloatingPoint(auVar22,auVar26);
            auVar22 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar6 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x9c,
                               lVar1);
            *(undefined4 *)((int)puVar7 + 0x9c) = uVar6;
            uVar6 = storeVectorElementWordIndexed
                              (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x90,
                               lVar1);
            *(undefined4 *)(puVar7 + 0x12) = uVar6;
            uVar6 = storeVectorElementWordIndexed
                              (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x94,
                               lVar1);
            *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
            uVar6 = storeVectorElementWordIndexed
                              (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x98,
                               lVar1);
            *(undefined4 *)(puVar7 + 0x13) = uVar6;
            uVar11 = CollMobySphere(0x3fe6666660000000,uVar10 - 0x160,0x9c,0x10,param_1,0)
            ;
            iVar16 = 0;
            iVar17 = (int)uVar11;
            if (0 < iVar17) {
              uVar20 = 0x3ff0000000000000;
              puVar14 = &g_CollMobyHits;
              do {
                uVar11 = (ulonglong)*puVar14;
                if (*puVar14 == uVar5) {
                  uVar11 = CollDamageMobyDirect_wrap(uVar20,uVar12,param_1,0x10001);
                }
                iVar16 = iVar16 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar16 < iVar17);
            }
          }
        }
        iVar18 = iVar18 + 1;
        uVar15 = uVar15 + 4;
      } while (iVar18 < iVar19);
    }
  }
  return uVar11;
}


// shared update function, registered for oClasses 404, 405
// 0x0364408 (0x268 bytes)
// strings: 006566c0: 'Error! No trigger for moby %d (UID:%d)\n'

/* Moby 404
   Moby 405 */

void UpdateMoby_404(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  short sVar3;
  int *piVar4;
  MobyInstance *pMVar5;
  float fVar6;
  s8 sVar7;
  undefined8 uVar8;
  short sVar9;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        MVar2 = moby->modeBits;
        moby->alpha = '\x14';
        moby->state = '\x01';
        piVar4[1] = 0x3f800000;
        moby->modeBits = MVar2 | (DISABLE_Z_WRITE|DRAW_TRANSPARENT_WEIRD|TRANSPARENT);
        *(undefined2 *)((int)piVar4 + 0xe) = 0xffff;
        SetColorOfMoby(moby,0x80,0x80,0x80);
      }
      else {
        if (*piVar4 == -1) {
          piVar4[1] = 0x3f800000;
          moby->state = '\x02';
          printf("Error! No trigger for moby %d (UID:%d)\n",moby->oClass,moby->uid);
        }
        else {
          pMVar5 = g_MobyInstance + *piVar4;
          if (((pMVar5 == (MobyInstance *)0x0) || (pMVar5->state == 0xfd || pMVar5->state == 0xfe))
             || ((*(uint *)(&g_LevelObjBits +
                           Level * 0x100 + (int)((longlong)((int)(short)pMVar5->uid >> 5) << 2)) &
                 1 << (pMVar5->uid & 0x1f)) != 0)) {
            piVar4[1] = 0x3f800000;
            moby->state = '\x02';
          }
        }
        M405_00363df8(moby,piVar4);
      }
    }
  }
  else if (bVar1 < 3) {
    fVar6 = -(DAT_0071f408 * 0.05 - (float)piVar4[1]);
    piVar4[1] = (int)fVar6;
    if (0.0 <= fVar6) {
      sVar7 = FastDoubleToInt((double)(fVar6 * 20.0));
      moby->alpha = sVar7;
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    if (*(short *)((int)piVar4 + 0xe) != -1) {
      DeletePointLight();
      *(undefined2 *)((int)piVar4 + 0xe) = 0xffff;
    }
    DeleteMoby(moby);
    return;
  }
  sVar3 = *(short *)(piVar4 + 3);
  uVar8 = 0xc0;
  sVar9 = sVar3 + 0xc0;
  *(short *)(piVar4 + 3) = sVar9;
  if (sVar9 < 0x1001) {
    if (sVar9 < 0) {
      uVar8 = 0x10c0;
      *(short *)(piVar4 + 3) = sVar3 + 0x10c0;
    }
  }
  else {
    uVar8 = 0xfffffffffffff0c0;
    *(short *)(piVar4 + 3) = sVar3 + -0xf40;
  }
  MB_AddShortPairOffset(moby->pClass,uVar8,0);
  return;
}


