// game/update/moby234.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x3037f0-0x3048ac
#include "game/update/moby234.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/moby491.h"
#include "idol/fastfunc.h"

// 0x03037f0 (0x14 bytes)
void M234_003037f0(void)

{
  DAT_007ff350 = 0x10000;
  return;
}


// 0x0303818 (0x194 bytes)
void M234_00303818(undefined4 param_1)

{
  GPiece<16> local_20;
  GPiece<16> local_10;
  
  FUN_003a01e0(param_1,local_10,local_20);
  return;
}


// 0x03039ac (0xd4 bytes)
void M234_003039ac(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  int iVar10;
  longlong lVar11;
  
  iVar8 = *(int *)(param_1 + 0x78);
  pSVar9 = Splines[*(int *)(iVar8 + 0xd0)];
  lVar11 = FastDoubleToInt((double)*(float *)(iVar8 + 0xe0));
  iVar10 = (int)(lVar11 << 4);
  fVar1 = *(float *)(iVar8 + 0xe0);
  fVar2 = *(float *)((int)&pSVar9->points[1].x + iVar10);
  fVar3 = *(float *)((int)&pSVar9->points[0].x + iVar10);
  fVar4 = *(float *)((int)&pSVar9->points[1].y + iVar10);
  fVar5 = *(float *)((int)&pSVar9->points[0].y + iVar10);
  fVar6 = *(float *)((int)&pSVar9->points[1].z + iVar10);
  fVar7 = *(float *)((int)&pSVar9->points[0].z + iVar10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)&pSVar9->points[1].w + iVar10);
  fVar1 = fVar1 - (float)(longlong)(int)lVar11;
  *(float *)(param_1 + 0x10) = fVar1 * (fVar2 - fVar3) + fVar3;
  *(float *)(param_1 + 0x14) = fVar1 * (fVar4 - fVar5) + fVar5;
  *(float *)(param_1 + 0x18) = fVar1 * (fVar6 - fVar7) + fVar7;
  *(undefined4 *)(iVar8 + 0xf0) = *(undefined4 *)((int)&pSVar9->points[0].w + iVar10);
  return;
}


// 0x0303a90 (0x204 bytes)
bool M234_00303a90(int param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  Spline *pSVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar11;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  float fVar22;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar6 = (ulonglong *)lVar2;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x16] = in_LR;
  puVar6[0x13] = unaff_r31;
  puVar6[0x10] = unaff_r28;
  fVar22 = g_heroPosition.y - *(float *)(param_1 + 0x14);
  fVar7 = g_heroPosition.x - *(float *)(param_1 + 0x10);
  fVar8 = g_heroPosition.z - *(float *)(param_1 + 0x18);
  puVar6[0x11] = unaff_r29;
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar11 = (ulonglong)uVar3;
  puVar6[0x12] = unaff_r30;
  fVar10 = DAT_0071f418;
  fVar9 = g_FrameTime;
  pSVar4 = Splines[*(int *)(uVar3 + 0xd0)];
  *(float *)(puVar6 + 0xe) = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar22 * fVar22);
  *(float *)((int)puVar6 + 0x74) = *(float *)(uVar3 + 0xdc) - DAT_00969e40;
  fVar22 = OrganicDelt
                     (*(float *)(uVar3 + 0xd4),fVar10 * 10.0,fVar10 * 10.0,fVar9 * 60.0,
                      (float *)(puVar6 + 0xe),0x303a80,(float *)((int)puVar6 + 0x74));
  auVar12 = ZEXT416(0);
  auVar17 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = loadVectorLeftIndexed(0x160,0x969ce0);
  auVar13 = loadVectorLeftIndexed(0x74,lVar2);
  auVar13 = vectorAddFloatingPoint(auVar13,auVar12);
  auVar16 = loadVectorLeftIndexed(0xe0,uVar11);
  auVar14 = loadVectorRightIndexed(0xf0,uVar11);
  auVar15 = loadVectorLeftIndexed(0xe8,uVar11);
  auVar12 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  vectorCompareGreaterThanOrEqualToFloatingPoint(auVar12,auVar17);
  uVar5 = storeVectorElementWordIndexed(auVar12,0xdc,uVar11);
  *(undefined4 *)(uVar3 + 0xdc & 0xfffffffc) = uVar5;
  auVar12 = loadVectorRightIndexed(0xf8,uVar11);
  auVar15 = auVar15 | auVar12;
  if ((bool)(in_cr6 >> 1 & 1)) {
    *(undefined4 *)(uVar3 + 0xdc) = 0;
    auVar13 = auVar17;
  }
  auVar17 = vectorReciprocalEstimateFloatingPoint(auVar15);
  auVar12 = ZEXT416(0xffffffff);
  auVar18 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = ZEXT416(0xffffffff);
  auVar21 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = ZEXT416(0xffffffff);
  auVar20 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
  auVar12 = loadVectorLeftIndexed(8,0x303a80);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar15,auVar19);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar12,auVar18);
  auVar18 = vectorShiftLeftIntegerWord(auVar21,auVar21);
  auVar12 = ZEXT416(1);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar15,auVar19);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar20);
  auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar15,auVar19);
  auVar15 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar18);
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                       auVar16 | auVar14);
  auVar15 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar4));
  auVar12 = vectorSubtractUnsignedWordModulo
                      (auVar15,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
  auVar14 = vectorConvertFromSignedFixedPointWord(auVar12,0);
  auVar12 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar13 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  uVar5 = storeVectorElementWordIndexed(auVar13,0xe0,uVar11);
  *(undefined4 *)(uVar3 + 0xe0 & 0xfffffffc) = uVar5;
  auVar12 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
  bVar1 = (bool)(in_cr6 >> 1 & 1);
  if (bVar1) {
    M234_003039ac((double)fVar22,param_1);
  }
  else {
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar15,0);
    auVar12 = loadVectorLeftIndexed(0xc,0x303a80);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = vectorSubtractFloatingPoint
                        (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xe0,uVar11);
    *(undefined4 *)(uVar3 + 0xe0 & 0xfffffffc) = uVar5;
  }
  return !bVar1;
}


// 0x0303ca8 (0x754 bytes)
// inlined: FastAtan2 @0x303e74, FastRSqrt @0x30415c, FastAtan2 @0x304244
void M234_00303ca8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  f32 fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  longlong lVar13;
  longlong lVar14;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x130;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x28] = in_LR;
  puVar9[0x24] = in_f30;
  puVar9[0x25] = in_f31;
  puVar9[0x23] = unaff_r31;
  puVar9[0x22] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar21 = ZEXT48(pvVar8);
  dVar29 = 0.0;
  puVar9[0x21] = unaff_r29;
  *(undefined4 *)((int)puVar9 + 0xa4) = 0;
  iVar15 = MB_damage(param_1,0x330000,0);
  iVar16 = MB_HandleDamage
                     (param_1,iVar15,uVar21 + 0x20,0,puVar9 + 0x14,(int)puVar9 + 0xa4,0,4);
  if ((*(int *)(puVar9 + 0x14) == 1) || (param_1->state == '\x05')) {
    if ((DAT_00969f1c == param_1) || (DAT_00969f20 == param_1)) {
      dVar28 = 1.0;
      SetCollDamIn(0x3ff0000000000000,uVar12 - 0xc0,param_1,1);
      *(MOBY_OCLASSES *)((int)puVar9 + 0x8a) = param_1->oClass;
      pMVar11 = g_heroMobyPtr;
      *(undefined4 *)((int)puVar9 + 0x4c) = *(undefined4 *)((int)puVar9 + 0x7c);
      *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(puVar9 + 0xf);
      *(undefined4 *)((int)puVar9 + 0x44) = *(undefined4 *)((int)puVar9 + 0x74);
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar9 + 0xe);
      *(undefined4 *)((int)puVar9 + 0x5c) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar9 + 0x11);
      *(undefined4 *)((int)puVar9 + 0x54) = *(undefined4 *)((int)puVar9 + 0x84);
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar9 + 0x10);
      *(undefined4 *)((int)puVar9 + 0x6c) = *(undefined4 *)((int)puVar9 + 0x9c);
      *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x13);
      *(undefined4 *)((int)puVar9 + 100) = *(undefined4 *)((int)puVar9 + 0x94);
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x12);
      CollDamageMobyDirect
                (pMVar11,0x60,puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],puVar9[0xc],puVar9[0xd]);
      fVar6 = DAT_007ff37c * DAT_0071f418;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(float *)((int)pvVar8 + 0x80) = fVar6;
      fVar6 = g_FrameTime;
      *(float *)((int)pvVar8 + 0x88) = DAT_007ff378 * g_FrameTime;
      fVar1 = DAT_007ff374;
      *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40f00000;
      *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41300000;
      *(float *)((int)pvVar8 + 0x8c) = fVar1 * fVar6;
      fVar6 = (param_1->pos).y - g_heroPosition.y;
      dVar23 = (double)fVar6;
      fVar1 = (param_1->pos).x - g_heroPosition.x;
      dVar25 = (double)fVar1;
      fVar5 = (param_1->pos).w;
      dVar27 = (double)(float)(dVar25 * dVar25 + (double)(float)(dVar23 * dVar23));
      dVar26 = dVar29;
      dVar24 = dVar29;
      if ((double)(float)SQRT(dVar27) != dVar29) {
        dVar26 = 1.0 / SQRT(dVar27);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar28
                                                 ) * (double)(float)(dVar26 * 0.5) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar28
                                                 ) * (double)(float)(dVar26 * 0.5) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar28
                                                 ) * (double)(float)(dVar26 * 0.5) + dVar26);
        dVar24 = (double)(float)(dVar25 * dVar26);
        dVar26 = (double)(float)(dVar23 * dVar26);
      }
      *(float *)(puVar9 + 0x16) = fVar1;
      *(float *)((int)puVar9 + 0xb4) = fVar6;
      *(float *)(puVar9 + 0x17) = (float)(ABS(dVar25) - ABS(dVar23));
      uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
      dVar27 = ABS((double)*(float *)(puVar9 + 0x16));
      if ((double)*(float *)(puVar9 + 0x17) - dVar29 < 0.0) {
        dVar27 = ABS(dVar23);
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar9 + 0xb4));
      if ((double)*(float *)(puVar9 + 0x17) - dVar29 < 0.0) {
        dVar23 = ABS(dVar25);
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar25 = dVar29;
      if (dVar29 < dVar27) {
        lVar13 = uVar12 - 0x120;
        lVar20 = uVar12 - 0x58;
        lVar17 = uVar12 - 0x68;
        lVar22 = 2;
        fVar2 = (float)(dVar23 - dVar27) / (float)(dVar23 + dVar27);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0xd4) = fVar2;
        *(float *)((int)puVar9 + 0xcc) = fVar2;
        *(float *)(puVar9 + 0x1a) = fVar2;
        *(float *)(puVar9 + 0x19) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar3;
        *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar2;
        *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 200) = *(float *)((int)lVar13 + 0xb8) * fVar2 * fVar2;
          iVar15 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar12 - 0x68;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar20;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 200) = *(float *)((int)lVar13 + 200) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar16 = (int)lVar20;
          lVar14 = lVar14 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 200)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar6 + fVar1);
      }
      *(float *)(puVar9 + 6) = (float)dVar24;
      *(float *)(puVar9 + 7) = (float)dVar29;
      *(float *)((int)puVar9 + 0xac) = (float)dVar25;
      *(float *)((int)puVar9 + 0x34) = (float)dVar26;
      *(f32 *)((int)puVar9 + 0x3c) = fVar5;
      MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x84,uVar21 + 0x88,uVar21 + 0x8c);
      MB_StartKick((double)*(float *)((int)puVar9 + 0xac),param_1,uVar21 + 0x70);
      param_1->state = '\x05';
      *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
  }
  else {
    MVar7 = param_1->modeBits;
    fVar6 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar9 + 0xa4);
    *(float *)((int)pvVar8 + 0x20) = fVar6;
    if (((double)fVar6 <= dVar29) || (iVar16 == 1)) {
      fVar6 = DAT_007ff37c * DAT_0071f418;
      param_1->modeBits =
           MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(float *)((int)pvVar8 + 0x80) = fVar6;
      fVar6 = g_FrameTime;
      *(float *)((int)pvVar8 + 0x88) = DAT_007ff378 * g_FrameTime;
      fVar1 = DAT_007ff374;
      *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40f00000;
      *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41300000;
      *(float *)((int)pvVar8 + 0x8c) = fVar1 * fVar6;
      fVar6 = (param_1->pos).x - *(float *)(*(int *)(iVar15 + 0x20) + 0x10);
      fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar15 + 0x20) + 0x14);
      dVar24 = ABS((double)fVar6);
      dVar25 = ABS((double)fVar1);
      *(float *)((int)puVar9 + 0xbc) = fVar6;
      *(float *)(puVar9 + 0x18) = fVar1;
      *(float *)((int)puVar9 + 0xc4) = (float)(dVar24 - dVar25);
      uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar9 + 0xbc));
      if ((double)*(float *)((int)puVar9 + 0xc4) - dVar29 < 0.0) {
        dVar26 = dVar25;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar25 = ABS((double)*(float *)(puVar9 + 0x18));
      if ((double)*(float *)((int)puVar9 + 0xc4) - dVar29 < 0.0) {
        dVar25 = dVar24;
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      if (dVar29 < dVar26) {
        lVar13 = uVar12 - 0x120;
        lVar20 = uVar12 - 0x38;
        lVar17 = uVar12 - 0x48;
        lVar22 = 2;
        fVar2 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0xf4) = fVar2;
        *(float *)((int)puVar9 + 0xec) = fVar2;
        *(float *)(puVar9 + 0x1e) = fVar2;
        *(float *)(puVar9 + 0x1d) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3;
        *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2;
        *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 0xe8) = *(float *)((int)lVar13 + 0xd8) * fVar2 * fVar2;
          iVar16 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar12 - 0x48;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar20;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0xe8) = *(float *)((int)lVar13 + 0xe8) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar13 = 2;
        do {
          iVar16 = (int)lVar14;
          iVar10 = (int)lVar20;
          lVar14 = lVar14 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xe8)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar1);
      }
      *(float *)(puVar9 + 0x15) = (float)dVar29;
      uVar4 = *(undefined4 *)(iVar15 + 0x18);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
      *(undefined4 *)(puVar9 + 7) = uVar4;
      uVar4 = *(undefined4 *)(iVar15 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x3c) = uVar4;
      MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x88,uVar21 + 0x88,uVar21 + 0x8c);
      MB_StartKick((double)*(float *)(puVar9 + 0x15),param_1,uVar21 + 0x70);
      param_1->state = '\x05';
      *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    else {
      *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
    }
    MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  return;
}


// 0x0304418 (0x494 bytes)
/* Moby 234 */

void UpdateMoby_234(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  Spline *pSVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  Vec4 local_30;
  longlong local_20;
  
  pvVar2 = moby->pVar;
  M234_00303ca8();
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    uVar9 = MB_UpdateKick(moby,(KickVars *)((int)pvVar2 + 0x70));
    if ((uVar9 & 0x162) != 0) {
      DeleteMoby(moby);
    }
  }
  else {
    if (uVar1 != '\x04') {
      if (uVar1 != '\x03') {
        if (uVar1 == '\x02') {
          iVar8 = M234_00303a90(moby);
          if (iVar8 != 0) {
            moby->state = '\x04';
            return;
          }
          if (*(int *)((int)pvVar2 + 0xf0) != 0) {
            return;
          }
          auVar10 = ZEXT416(0xffffffff);
          auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
          auVar10 = loadVectorLeftIndexed(0xc,0x3043fc);
          auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar10 = vectorMultiplyAddFloatingPoint
                              (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60
                               ,auVar11);
          auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
          auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0xec,
                             ZEXT48(pvVar2));
          *(undefined4 *)((int)pvVar2 + 0xecU & 0xfffffffc) = uVar4;
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          local_20 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(moby,2,0,(int)(animationSpeed * 5.5));
          return;
        }
        if (uVar1 == '\x01') {
          fVar5 = (moby->pos).y - g_heroPosition.y;
          fVar6 = (moby->pos).x - g_heroPosition.x;
          if (*(float *)((int)pvVar2 + 0xd4) <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
            return;
          }
          moby->state = '\x02';
          return;
        }
        if (uVar1 != '\0') {
          return;
        }
        if ((*(int *)((int)pvVar2 + 0xd0) == -1) ||
           (pSVar3 = Splines[*(int *)((int)pvVar2 + 0xd0)], pSVar3->cnt == 0)) {
          DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar2 + 0xd8) == -1) {
          DeleteMoby(moby);
          return;
        }
        fVar5 = pSVar3->points[0].y - pSVar3->points[1].y;
        fVar6 = pSVar3->points[0].x - pSVar3->points[1].x;
        fVar7 = pSVar3->points[0].z - pSVar3->points[1].z;
        fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        *(float *)((int)pvVar2 + 0xe8) = fVar5;
        if (fVar5 == 0.0) {
          DeleteMoby(moby);
          return;
        }
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        auVar10 = loadVectorLeftIndexed(4,0x3043fc);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0xec,
                           ZEXT48(pvVar2));
        *(undefined4 *)((int)pvVar2 + 0xecU & 0xfffffffc) = uVar4;
        M234_003039ac(moby);
        *(undefined4 *)((int)pvVar2 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar2 + 0x24) = 2;
        *(undefined1 *)((int)pvVar2 + 0x28) = 1;
        moby->state = '\x01';
        if (moby->animationId == '\0') {
          return;
        }
        local_20 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
        return;
      }
      iVar8 = M234_00303a90(moby);
      if (iVar8 == 0) {
        iVar8 = MB_MayaFrameTrigger(5.0,moby);
        if (iVar8 == 0) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\0'))
          {
            local_20 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          M234_00303818(moby);
        }
      }
      else {
        if (moby->animationId != '\0') {
          local_20 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x04';
      }
    }
    iVar8 = *(int *)((int)pvVar2 + 0xd8);
    local_30.x = Cuboids[iVar8].pos.x - (moby->pos).x;
    local_30.y = Cuboids[iVar8].pos.y - (moby->pos).y;
    local_30.z = Cuboids[iVar8].pos.z - (moby->pos).z;
    local_30.w = Cuboids[iVar8].pos.w;
    ClampVec3Magnitude((double)(g_FrameTime * 30.0),&local_30);
    (moby->pos).x = (moby->pos).x + local_30.x;
    (moby->pos).y = (moby->pos).y + local_30.y;
    (moby->pos).z = (moby->pos).z + local_30.z;
  }
  return;
}


