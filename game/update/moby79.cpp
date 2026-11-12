// game/update/moby79.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x45e140-0x45f67c
#include "game/update/moby79.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby789.h"
#include "idol/fastfunc.h"

// 0x045e140 (0x14c bytes)
void M789_0045e140(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte in_cr6;
  undefined8 in_LR;
  double dVar5;
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
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar4 = (ulonglong)uVar1;
  auVar6 = ZEXT416(0xffffffff);
  auVar10 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar13 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = loadVectorLeftIndexed(in_LR,0x45e138);
  auVar7 = loadVectorLeftIndexed(0xc,uVar4);
  auVar8 = loadVectorRightIndexed(0x1c,uVar4);
  auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar7 = auVar7 | auVar8;
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorReciprocalEstimateFloatingPoint(auVar7);
  auVar11 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar12 = loadVectorLeftIndexed(0x3c40,0x870000);
  auVar14 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
  auVar15 = loadVectorLeftIndexed(8,uVar4);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar7,auVar9);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar6,auVar8,auVar10);
  auVar6 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  auVar13 = loadVectorRightIndexed(0x18,uVar4);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar6);
  auVar6 = ZEXT416(0xffffffff);
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  iVar2 = *(int *)param_2;
  auVar10 = loadVectorLeftIndexed(in_LR,param_2);
  auVar14 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar7,auVar9);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar11);
  auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar7,auVar9);
  auVar6 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar8,auVar14);
  dVar5 = (double)(*(float *)(uVar1 + 8) +
                  (DAT_00873c40 * g_FrameTime) / *(float *)(uVar1 + 0xc));
  auVar7 = vectorMultiplyAddFloatingPoint(auVar8,auVar12,auVar15 | auVar13);
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  vectorCompareGreaterThanFloatingPoint
            (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
  uVar3 = storeVectorElementWordIndexed(auVar8,8,uVar4);
  *(undefined4 *)(uVar1 + 8 & 0xfffffffc) = uVar3;
  if (!(bool)(in_cr6 >> 1 & 1)) {
    auVar6 = vectorSubtractFloatingPoint(auVar7,auVar10);
    dVar5 = (double)(float)(dVar5 - (double)(longlong)iVar2);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,8,uVar4);
    *(undefined4 *)(uVar1 + 8 & 0xfffffffc) = uVar3;
  }
  MB_PathEvalSpline(dVar5,param_2,uVar4,1,param_1 + 0x10,param_1 + 0x40,0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x4c);
  return;
}


// 0x045e2e0 (0x139c bytes)
// inlined: FastAtan2 @0x45e4dc, FastAtan2 @0x45e680, FastAtan2 @0x45e860, FastAtan2 @0x45ea04, FastAtan2 @0x45ebf8, FastAtan2 @0x45ed8c
/* Moby 79 */

void UpdateMoby_79(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  int *piVar12;
  void *pvVar13;
  uint *puVar14;
  f32 fVar15;
  Spline *pSVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  int iVar28;
  longlong lVar25;
  longlong lVar26;
  uint uVar29;
  ulonglong uVar27;
  int iVar30;
  float *pfVar33;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar34;
  undefined8 in_r9;
  ulonglong unaff_r24;
  longlong lVar35;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar36;
  ulonglong unaff_r28;
  ulonglong uVar37;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  u16 *puVar38;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar46;
  ulonglong in_f31;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  
  lVar24 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar26 = uVar27 - 0x200;
  puVar19 = (ulonglong *)lVar26;
  *puVar19 = uVar27;
  puVar19[0x42] = in_LR;
  puVar19[0x3d] = in_f29;
  puVar19[0x3e] = in_f30;
  puVar19[0x3f] = in_f31;
  puVar19[0x39] = unaff_r28;
  puVar19[0x3c] = unaff_r31;
  piVar12 = (int *)moby->pVar;
  uVar37 = ZEXT48(piVar12);
  puVar19[0x35] = unaff_r24;
  uVar29 = (int)GameCamera.posZ >> 0x1f;
  uVar20 = uVar29 >> 1 ^ (uint)GameCamera.posZ;
  puVar19[0x3b] = unaff_r30;
  puVar19[0x3a] = unaff_r29;
  puVar19[0x38] = unaff_r27;
  puVar19[0x37] = unaff_r26;
  puVar19[0x36] = unaff_r25;
  if (0x425bffff < (int)(uVar20 - uVar29)) {
    puVar38 = (u16 *)0x0;
    iVar28 = MB_damage(lVar24,0x10000,0);
    bVar1 = moby->state;
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      moby->scale = moby->pClass->gScale * DAT_00873c44;
      dVar40 = (double)MB_randRot();
      piVar12[7] = (int)(float)dVar40;
      piVar12[0xca] = -1;
      dVar40 = (double)MB_randRot();
      piVar12[0xda] = (int)(float)dVar40;
      pSVar16 = Splines[*piVar12];
      uVar36 = ZEXT48(pSVar16);
      if (pSVar16->points[0].w == -1.0) {
        fVar2 = pSVar16->points[0].x;
        fVar3 = pSVar16->points[0].y;
        fVar10 = fVar2 - pSVar16->points[pSVar16->cnt + -1].x;
        fVar9 = fVar3 - pSVar16->points[pSVar16->cnt + -1].y;
        fVar4 = ABS(fVar10);
        *(float *)((int)puVar19 + 0xcc) = fVar10;
        fVar5 = ABS(fVar9);
        *(float *)(puVar19 + 0x1a) = fVar9;
        *(float *)((int)puVar19 + 0xd4) = fVar4 - fVar5;
        dVar40 = 0.0;
        dVar46 = 0.7853981852531433;
        uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0xcc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xd4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar19 + 0x1a) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)((int)puVar19 + 0xcc));
        if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
          fVar10 = fVar5;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = ABS(*(float *)(puVar19 + 0x1a));
        if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar41 = dVar40;
        if (0.0 < fVar10) {
          lVar25 = uVar27 - 0x1f0;
          lVar35 = uVar27 - 0x78;
          lVar32 = uVar27 - 0x88;
          lVar39 = 2;
          fVar10 = (fVar5 - fVar10) / (fVar5 + fVar10);
          fVar5 = fVar10 * fVar10;
          *(float *)(puVar19 + 0x2f) = fVar10;
          *(float *)((int)puVar19 + 0x17c) = fVar10;
          *(float *)(puVar19 + 0x30) = fVar10;
          *(float *)((int)puVar19 + 0x184) = fVar10;
          fVar10 = fVar5 * fVar5;
          *(float *)((int)puVar19 + 0x17c) = *(float *)((int)puVar19 + 0x17c) * fVar5;
          *(float *)(puVar19 + 0x30) = *(float *)(puVar19 + 0x30) * fVar10;
          *(float *)((int)puVar19 + 0x184) = *(float *)((int)puVar19 + 0x184) * fVar10 * fVar5;
          do {
            *(float *)((int)lVar25 + 0x178) = *(float *)((int)lVar25 + 0x168) * fVar10 * fVar10;
            iVar28 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar10 * fVar10;
            lVar35 = lVar35 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0x88;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar10 = *pfVar33;
            fVar5 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0x178) = *(float *)((int)lVar25 + 0x178) * fVar10;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar5;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar32 = 2;
          lVar25 = lVar26;
          do {
            iVar28 = (int)lVar25;
            iVar30 = (int)lVar35;
            lVar25 = lVar25 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar28 + 0x178)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar41 = (double)((float)(dVar41 + 0.7853981852531433) * fVar9 + fVar4);
        }
        fVar2 = pSVar16->points[1].x - fVar2;
        fVar3 = pSVar16->points[1].y - fVar3;
        fVar9 = ABS(fVar2);
        fVar10 = ABS(fVar3);
        *(float *)(puVar19 + 0x18) = fVar2;
        *(float *)((int)puVar19 + 0xc4) = fVar3;
        *(float *)(puVar19 + 0x19) = fVar9 - fVar10;
        uVar34 = (ulonglong)(*(uint *)(puVar19 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar19 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xc4) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar19 + 0x18));
        if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar10;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar10 = ABS(*(float *)((int)puVar19 + 0xc4));
        if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
          fVar10 = fVar9;
        }
        fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar42 = dVar40;
        if (0.0 < fVar2) {
          lVar25 = uVar27 - 0x1f0;
          lVar32 = uVar27 - 0xa8;
          lVar35 = uVar27 - 0x98;
          lVar39 = 2;
          fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
          fVar10 = fVar2 * fVar2;
          *(float *)(puVar19 + 0x2b) = fVar2;
          *(float *)((int)puVar19 + 0x15c) = fVar2;
          *(float *)(puVar19 + 0x2c) = fVar2;
          *(float *)((int)puVar19 + 0x164) = fVar2;
          fVar2 = fVar10 * fVar10;
          *(float *)((int)puVar19 + 0x15c) = *(float *)((int)puVar19 + 0x15c) * fVar10;
          *(float *)(puVar19 + 0x2c) = *(float *)(puVar19 + 0x2c) * fVar2;
          *(float *)((int)puVar19 + 0x164) = *(float *)((int)puVar19 + 0x164) * fVar2 * fVar10;
          do {
            *(float *)((int)lVar25 + 0x158) = *(float *)((int)lVar25 + 0x148) * fVar2 * fVar2;
            iVar28 = (int)lVar32;
            lVar25 = lVar25 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar2 * fVar2;
            lVar35 = lVar35 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0xa8;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar2 = *pfVar33;
            fVar10 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0x158) = *(float *)((int)lVar25 + 0x158) * fVar2;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar10;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar32 = 2;
          lVar25 = lVar26;
          do {
            iVar28 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            iVar30 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar28 + 0x158)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar3 + fVar9);
        }
        dVar41 = (double)FastDiffRots(dVar42,dVar41);
        uVar29 = pSVar16->cnt;
        iVar28 = 1;
        pSVar16->points[0].w = (float)dVar41;
        dVar41 = dVar40;
        uVar34 = uVar36;
        if (1 < (int)(uVar29 - 1)) {
          do {
            pfVar33 = (float *)(uVar34 + 0x10);
            fVar2 = pfVar33[4];
            iVar30 = (int)uVar34;
            fVar3 = *(float *)(iVar30 + 0x24);
            fVar10 = fVar2 - *pfVar33;
            fVar9 = fVar3 - *(float *)(iVar30 + 0x14);
            dVar43 = ABS((double)fVar10);
            dVar44 = ABS((double)fVar9);
            *(float *)((int)puVar19 + 0xb4) = fVar10;
            *(float *)(puVar19 + 0x17) = fVar9;
            *(float *)((int)puVar19 + 0xbc) = (float)(dVar43 - dVar44);
            uVar31 = (ulonglong)(*(uint *)((int)puVar19 + 0xb4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar19 + 0xbc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar19 + 0x17) >> 0x1d) & 4;
            dVar42 = ABS((double)*(float *)((int)puVar19 + 0xb4));
            if ((double)*(float *)((int)puVar19 + 0xbc) - dVar40 < 0.0) {
              dVar42 = dVar44;
            }
            fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
            dVar44 = ABS((double)*(float *)(puVar19 + 0x17));
            if ((double)*(float *)((int)puVar19 + 0xbc) - dVar40 < 0.0) {
              dVar44 = dVar43;
            }
            fVar9 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            dVar43 = dVar40;
            if (dVar40 < dVar42) {
              lVar25 = uVar27 - 0x1f0;
              lVar32 = uVar27 - 200;
              lVar35 = uVar27 - 0xb8;
              lVar39 = 2;
              fVar5 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
              fVar4 = fVar5 * fVar5;
              *(float *)(puVar19 + 0x27) = fVar5;
              *(float *)((int)puVar19 + 0x13c) = fVar5;
              *(float *)(puVar19 + 0x28) = fVar5;
              *(float *)((int)puVar19 + 0x144) = fVar5;
              fVar5 = fVar4 * fVar4;
              *(float *)((int)puVar19 + 0x13c) = *(float *)((int)puVar19 + 0x13c) * fVar4;
              *(float *)(puVar19 + 0x28) = *(float *)(puVar19 + 0x28) * fVar5;
              *(float *)((int)puVar19 + 0x144) = *(float *)((int)puVar19 + 0x144) * fVar5 * fVar4;
              do {
                *(float *)((int)lVar25 + 0x138) = *(float *)((int)lVar25 + 0x128) * fVar5 * fVar5;
                iVar21 = (int)lVar32;
                lVar25 = lVar25 + 8;
                lVar32 = lVar32 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
                lVar35 = lVar35 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar39 = 4;
              lVar35 = uVar27 - 200;
              pfVar33 = (float *)&DAT_007358e0;
              lVar25 = lVar26;
              lVar32 = lVar35;
              do {
                fVar5 = *pfVar33;
                fVar4 = pfVar33[1];
                pfVar33 = pfVar33 + 2;
                *(float *)((int)lVar25 + 0x138) = *(float *)((int)lVar25 + 0x138) * fVar5;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar4;
                lVar32 = lVar32 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar32 = 2;
              lVar25 = lVar26;
              dVar42 = dVar40;
              do {
                iVar21 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                iVar22 = (int)lVar35;
                lVar35 = lVar35 + 0x10;
                dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar21 + 0x138)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              dVar43 = (double)((float)(dVar42 + dVar46) * fVar10 + fVar9);
            }
            fVar2 = *(float *)(iVar30 + 0x30) - fVar2;
            fVar3 = *(float *)(iVar30 + 0x34) - fVar3;
            dVar45 = ABS((double)fVar2);
            dVar44 = ABS((double)fVar3);
            *(float *)(puVar19 + 0x15) = fVar2;
            *(float *)((int)puVar19 + 0xac) = fVar3;
            *(float *)(puVar19 + 0x16) = (float)(dVar45 - dVar44);
            uVar31 = (ulonglong)(*(uint *)(puVar19 + 0x15) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar19 + 0x16) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar19 + 0xac) >> 0x1d) & 4;
            dVar42 = ABS((double)*(float *)(puVar19 + 0x15));
            if ((double)*(float *)(puVar19 + 0x16) - dVar40 < 0.0) {
              dVar42 = dVar44;
            }
            fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
            dVar44 = ABS((double)*(float *)((int)puVar19 + 0xac));
            if ((double)*(float *)(puVar19 + 0x16) - dVar40 < 0.0) {
              dVar44 = dVar45;
            }
            fVar3 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            dVar45 = dVar40;
            if (dVar40 < dVar42) {
              lVar25 = uVar27 - 0x1f0;
              lVar35 = uVar27 - 0xd8;
              lVar32 = uVar27 - 0xe8;
              lVar39 = 2;
              fVar10 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
              fVar9 = fVar10 * fVar10;
              *(float *)(puVar19 + 0x23) = fVar10;
              *(float *)((int)puVar19 + 0x11c) = fVar10;
              *(float *)(puVar19 + 0x24) = fVar10;
              *(float *)((int)puVar19 + 0x124) = fVar10;
              fVar10 = fVar9 * fVar9;
              *(float *)((int)puVar19 + 0x11c) = *(float *)((int)puVar19 + 0x11c) * fVar9;
              *(float *)(puVar19 + 0x24) = *(float *)(puVar19 + 0x24) * fVar10;
              *(float *)((int)puVar19 + 0x124) = *(float *)((int)puVar19 + 0x124) * fVar10 * fVar9;
              do {
                *(float *)((int)lVar25 + 0x118) = *(float *)((int)lVar25 + 0x108) * fVar10 * fVar10;
                iVar21 = (int)lVar32;
                lVar32 = lVar32 + 8;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar21 + 4) * fVar10 * fVar10;
                lVar35 = lVar35 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar39 = 4;
              lVar35 = uVar27 - 0xe8;
              pfVar33 = (float *)&DAT_007358e0;
              lVar25 = lVar26;
              lVar32 = lVar35;
              do {
                fVar10 = *pfVar33;
                fVar9 = pfVar33[1];
                pfVar33 = pfVar33 + 2;
                *(float *)((int)lVar25 + 0x118) = *(float *)((int)lVar25 + 0x118) * fVar10;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
                lVar32 = lVar32 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar32 = 2;
              lVar25 = lVar26;
              dVar42 = dVar40;
              do {
                iVar21 = (int)lVar25;
                iVar22 = (int)lVar35;
                lVar25 = lVar25 + 0x10;
                lVar35 = lVar35 + 0x10;
                dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar21 + 0x118)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              dVar45 = (double)((float)(dVar42 + dVar46) * fVar2 + fVar3);
            }
            dVar42 = (double)FastDiffRots(dVar45,dVar43);
            *(float *)(iVar30 + 0x2c) = (float)dVar42;
            iVar28 = iVar28 + 1;
            uVar29 = pSVar16->cnt;
            if (dVar41 - ABS(dVar42) < 0.0) {
              dVar41 = ABS(dVar42);
            }
            uVar34 = uVar34 + 0x10;
          } while (iVar28 < (int)(uVar29 - 1));
        }
        iVar28 = (int)(((ulonglong)uVar29 & 0xfffffff) << 4);
        fVar3 = *(float *)((int)&((Spline *)(pSVar16->points + -1))->cnt + iVar28);
        fVar2 = *(float *)((int)pSVar16->points + iVar28 + -0xc);
        fVar10 = fVar3 - *(float *)((int)(pSVar16->points + -2) + iVar28);
        fVar9 = fVar2 - *(float *)((int)pSVar16->points + iVar28 + -0x1c);
        dVar43 = ABS((double)fVar10);
        dVar44 = ABS((double)fVar9);
        *(float *)((int)puVar19 + 0x9c) = fVar10;
        *(float *)(puVar19 + 0x14) = fVar9;
        *(float *)((int)puVar19 + 0xa4) = (float)(dVar43 - dVar44);
        uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1d) & 4;
        dVar42 = ABS((double)*(float *)((int)puVar19 + 0x9c));
        if ((double)*(float *)((int)puVar19 + 0xa4) - dVar40 < 0.0) {
          dVar42 = dVar44;
        }
        fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        dVar44 = ABS((double)*(float *)(puVar19 + 0x14));
        if ((double)*(float *)((int)puVar19 + 0xa4) - dVar40 < 0.0) {
          dVar44 = dVar43;
        }
        fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar43 = dVar40;
        if (dVar40 < dVar42) {
          lVar25 = uVar27 - 0x1f0;
          lVar35 = uVar27 - 0xf8;
          lVar32 = uVar27 - 0x108;
          lVar39 = 2;
          fVar5 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar19 + 0x1f) = fVar5;
          *(float *)((int)puVar19 + 0xfc) = fVar5;
          *(float *)(puVar19 + 0x20) = fVar5;
          *(float *)((int)puVar19 + 0x104) = fVar5;
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar19 + 0xfc) = *(float *)((int)puVar19 + 0xfc) * fVar4;
          *(float *)(puVar19 + 0x20) = *(float *)(puVar19 + 0x20) * fVar5;
          *(float *)((int)puVar19 + 0x104) = *(float *)((int)puVar19 + 0x104) * fVar5 * fVar4;
          do {
            *(float *)((int)lVar25 + 0xf8) = *(float *)((int)lVar25 + 0xe8) * fVar5 * fVar5;
            iVar28 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar5 * fVar5;
            lVar35 = lVar35 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0x108;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar5 = *pfVar33;
            fVar4 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0xf8) = *(float *)((int)lVar25 + 0xf8) * fVar5;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar4;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar32 = 2;
          lVar25 = lVar26;
          dVar42 = dVar40;
          do {
            iVar28 = (int)lVar25;
            iVar30 = (int)lVar35;
            lVar25 = lVar25 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar28 + 0xf8)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar43 = (double)((float)(dVar42 + dVar46) * fVar10 + fVar9);
        }
        fVar3 = pSVar16->points[0].x - fVar3;
        fVar2 = pSVar16->points[0].y - fVar2;
        dVar45 = ABS((double)fVar3);
        dVar44 = ABS((double)fVar2);
        *(float *)(puVar19 + 0x12) = fVar3;
        *(float *)((int)puVar19 + 0x94) = fVar2;
        *(float *)(puVar19 + 0x13) = (float)(dVar45 - dVar44);
        uVar34 = (ulonglong)(*(uint *)(puVar19 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar19 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0x94) >> 0x1d) & 4;
        dVar42 = ABS((double)*(float *)(puVar19 + 0x12));
        if ((double)*(float *)(puVar19 + 0x13) - dVar40 < 0.0) {
          dVar42 = dVar44;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        dVar44 = ABS((double)*(float *)((int)puVar19 + 0x94));
        if ((double)*(float *)(puVar19 + 0x13) - dVar40 < 0.0) {
          dVar44 = dVar45;
        }
        fVar3 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        if (dVar40 < dVar42) {
          lVar39 = 2;
          fVar10 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
          fVar9 = fVar10 * fVar10;
          *(float *)(puVar19 + 0x1b) = fVar10;
          *(float *)((int)puVar19 + 0xdc) = fVar10;
          *(float *)(puVar19 + 0x1c) = fVar10;
          *(float *)((int)puVar19 + 0xe4) = fVar10;
          lVar35 = uVar27 - 0x1f0;
          fVar10 = fVar9 * fVar9;
          lVar25 = uVar27 - 0x128;
          lVar32 = uVar27 - 0x118;
          *(float *)((int)puVar19 + 0xdc) = *(float *)((int)puVar19 + 0xdc) * fVar9;
          *(float *)(puVar19 + 0x1c) = *(float *)(puVar19 + 0x1c) * fVar10;
          *(float *)((int)puVar19 + 0xe4) = *(float *)((int)puVar19 + 0xe4) * fVar10 * fVar9;
          do {
            *(float *)((int)lVar35 + 0xd8) = *(float *)((int)lVar35 + 200) * fVar10 * fVar10;
            iVar28 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar35 = lVar35 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)(iVar28 + 4) * fVar10 * fVar10;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0x128;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar10 = *pfVar33;
            fVar9 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0xd8) = *(float *)((int)lVar25 + 0xd8) * fVar10;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar25 = 2;
          do {
            iVar28 = (int)lVar26;
            iVar30 = (int)lVar35;
            lVar26 = lVar26 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar28 + 0xd8)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar40 = (double)((float)(dVar40 + dVar46) * fVar2 + fVar3);
        }
        dVar40 = (double)FastDiffRots(dVar40,dVar43);
        pSVar16->points[pSVar16->cnt + -1].w = (float)dVar40;
        uVar27 = uVar36;
        if (0 < pSVar16->cnt) {
          do {
            puVar38 = (u16 *)((int)puVar38 + 1);
            *(float *)((int)uVar27 + 0x1c) =
                 *(float *)((int)uVar27 + 0x1c) * (float)(1.0471975803375244 / dVar41);
            uVar27 = uVar27 + 0x10;
          } while ((int)puVar38 < pSVar16->cnt);
        }
      }
      fVar2 = pSVar16->points[0].y - pSVar16->points[1].y;
      fVar3 = pSVar16->points[0].x - pSVar16->points[1].x;
      fVar10 = pSVar16->points[0].z - pSVar16->points[1].z;
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      piVar12[3] = (int)SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar2 * fVar2);
      moby->state = '\x01';
      auVar48 = loadVectorLeftIndexed(in_LR,uVar36);
      auVar49 = loadVectorLeftIndexed(4,uVar37);
      auVar48 = vectorConvertFromSignedFixedPointWord(auVar48,0);
      auVar50 = loadVectorRightIndexed(0x14,uVar37);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar48,auVar49 | auVar50,auVar47);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,8,uVar37);
      *(undefined4 *)((uint)(piVar12 + 2) & 0xfffffffc) = uVar18;
    }
    else if (bVar1 < 2) {
      dVar46 = (double)FastWrapRot((float)piVar12[7],g_FrameTime * 12.566371);
      uVar23 = DAT_00873c4c;
      uVar18 = DAT_00873c48;
      dVar40 = (double)(float)(3.141592502593994 - dVar46);
      if (dVar46 - (double)(float)(3.141592502593994 - dVar46) < 0.0) {
        dVar40 = dVar46;
      }
      dVar41 = (double)(float)(-3.141592502593994 - dVar46);
      if ((double)(float)(-3.141592502593994 - dVar46) - dVar40 < 0.0) {
        dVar41 = dVar40;
      }
      dVar40 = (double)(float)(dVar41 * dVar41);
      dVar43 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar41));
      dVar42 = (double)(float)(dVar40 * dVar43);
      piVar12[7] = (int)(float)dVar46;
      uVar29 = FastLerpColor
                         ((double)(((float)(dVar40 * dVar42) * 2.601887e-06 +
                                    (float)(dVar42 * -0.0001980741071747616 +
                                           (double)(float)(dVar43 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar40 * 
                                                  dVar41) * -0.16666656732559204 + dVar41))) + 1.0)
                                  * 0.5),uVar18,uVar23);
      moby->glowRgba = uVar29;
      pvVar13 = moby->pVar;
      uVar27 = ZEXT48(pvVar13);
      auVar47 = ZEXT416(0xffffffff);
      auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = ZEXT416(0xffffffff);
      auVar54 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = ZEXT416(0xffffffff);
      auVar51 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar48 = loadVectorLeftIndexed(0xc,uVar27);
      auVar47 = loadVectorRightIndexed(0x1c,uVar27);
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar48 = auVar48 | auVar47;
      auVar47 = loadVectorLeftIndexed(0x30,0x45e28c);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = vectorReciprocalEstimateFloatingPoint(auVar48);
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      auVar53 = loadVectorLeftIndexed(0x3c40,0x870000);
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
      auVar57 = loadVectorLeftIndexed(8,uVar27);
      auVar51 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar48,auVar49);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar47,auVar51,auVar50);
      auVar47 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorRightIndexed(0x18,uVar27);
      auVar55 = vectorNegativeMultiplySubtractFloatingPoint(auVar50,auVar48,auVar49);
      auVar51 = vectorMultiplyAddFloatingPoint(auVar53,auVar56,auVar47);
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar53 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar50,auVar55,auVar52);
      pSVar16 = Splines[*piVar12];
      uVar36 = ZEXT48(pSVar16);
      auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar50,auVar48,auVar49);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar47,auVar53);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar47,auVar51,auVar57 | auVar54);
      dVar40 = (double)(*(float *)((int)pvVar13 + 8) +
                       (DAT_00873c40 * g_FrameTime) / *(float *)((int)pvVar13 + 0xc));
      auVar47 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar50 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      uVar18 = storeVectorElementWordIndexed(auVar50,8,uVar27);
      *(undefined4 *)((int)pvVar13 + 8U & 0xfffffffc) = uVar18;
      auVar47 = loadVectorLeftIndexed(in_LR,uVar36);
      auVar49 = vectorConvertFromSignedFixedPointWord(auVar47,0);
      puVar19[0x33] = (longlong)pSVar16->cnt;
      auVar47 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar50,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar47 = vectorSubtractFloatingPoint(auVar48,auVar49);
        dVar40 = (double)(float)(dVar40 - (double)(longlong)puVar19[0x33]);
        auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar18 = storeVectorElementWordIndexed
                           (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,8,uVar27);
        *(undefined4 *)((int)pvVar13 + 8U & 0xfffffffc) = uVar18;
      }
      MB_PathEvalSpline(dVar40,uVar36,uVar36,1,lVar24 + 0x10,lVar24 + 0x40,0);
      iVar30 = piVar12[0xca];
      (moby->rotation).x = (moby->rotation).w;
      iVar30 = IsMobyPlayingSound(moby,iVar30);
      if (iVar30 == 0) {
        iVar30 = PlayMobySound(1,4,moby);
        piVar12[0xca] = iVar30;
      }
      uVar29 = worldUpdateTime;
      if ((worldUpdateTime & 3) == 0) {
        auVar47 = ZEXT416(0xfffffff0);
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar48 = loadVectorLeftIndexed(800,uVar37);
        auVar49 = loadVectorRightIndexed(0x330,uVar37);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar47);
        auVar51 = loadVectorLeftIndexed(0x3c50,0x870000);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar47);
        auVar47 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        *(ushort *)((int)piVar12 + 0x322) = *(short *)((int)piVar12 + 0x322) + 1U & 0xf;
        auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar48.piece<0,4>() = auVar49.piece<0,4>() + 1;
          auVar48.piece<8,8>() = auVar49.piece<8,8>();
          auVar48.piece<4,4>() = auVar49.piece<4,4>() + 1;
          auVar47.piece<0,8>() = auVar48.piece<0,8>();
          auVar47.piece<12,4>() = auVar49.piece<12,4>();
          auVar47.piece<8,4>() = auVar49.piece<8,4>() + 1;
          auVar49.piece<0,12>() = auVar47.piece<0,12>();
          auVar49.piece<12,4>() = auVar47.piece<12,4>() + 1;
          auVar47 = vectorSplatHalfWord(auVar49,1);
          uVar17 = storeVectorElementHalfWordIndexed(auVar47,800,uVar37);
          *(undefined2 *)(piVar12 + 200) = uVar17;
        }
      }
      fVar2 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v0.y;
      fVar10 = (moby->transform).v1.z;
      fVar9 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v0.z;
      iVar30 = (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4);
      fVar4 = (moby->transform).v1.w;
      fVar6 = (moby->transform).v2.z;
      fVar7 = (moby->transform).v0.w;
      fVar8 = (moby->transform).v2.w;
      *(float *)((int)piVar12 + iVar30 + 0x20) =
           (moby->transform).v2.x * 0.45 +
           (moby->transform).v0.x * -1.2 + (moby->transform).v1.x * 0.4 + (moby->pos).x;
      *(float *)((int)piVar12 + iVar30 + 0x24) =
           fVar9 * 0.45 + fVar3 * -1.2 + fVar2 * 0.4 + (moby->pos).y;
      fVar2 = (moby->pos).z;
      *(float *)((int)piVar12 + iVar30 + 0x2c) = fVar8 * 0.45 + fVar7 * -1.2 + fVar4 * 0.4;
      *(float *)((int)piVar12 + iVar30 + 0x28) = fVar6 * 0.45 + fVar5 * -1.2 + fVar10 * 0.4 + fVar2;
      iVar30 = (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4);
      *(undefined4 *)((int)piVar12 + (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4) + 0x2c)
           = 0x3f800000;
      fVar2 = (moby->transform).v0.y;
      fVar3 = (moby->transform).v2.y;
      fVar10 = (moby->transform).v0.z;
      fVar9 = (moby->transform).v2.z;
      fVar5 = (moby->transform).v0.w;
      fVar4 = (moby->transform).v2.w;
      *(float *)((int)piVar12 + iVar30 + 0x120) =
           (moby->transform).v2.x * -0.3 + (moby->transform).v0.x * -1.5 + (moby->pos).x;
      *(float *)((int)piVar12 + iVar30 + 0x124) = fVar3 * -0.3 + fVar2 * -1.5 + (moby->pos).y;
      fVar2 = (moby->pos).z;
      *(float *)((int)piVar12 + iVar30 + 300) = fVar4 * -0.3 + fVar5 * -1.5;
      *(float *)((int)piVar12 + iVar30 + 0x128) = fVar9 * -0.3 + fVar10 * -1.5 + fVar2;
      sVar11 = *(short *)((int)piVar12 + 0x322);
      *(undefined4 *)((int)piVar12 + (int)((longlong)sVar11 << 4) + 300) = 0x3f800000;
      fVar2 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v0.y;
      iVar30 = (int)((longlong)sVar11 << 4);
      fVar10 = (moby->transform).v1.z;
      fVar9 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v0.z;
      fVar4 = (moby->transform).v1.w;
      fVar6 = (moby->transform).v2.z;
      fVar7 = (moby->transform).v0.w;
      fVar8 = (moby->transform).v2.w;
      *(float *)((int)piVar12 + iVar30 + 0x220) =
           (moby->transform).v2.x * 0.45 +
           (moby->transform).v0.x * -1.2 + (moby->transform).v1.x * -0.4 + (moby->pos).x;
      *(float *)((int)piVar12 + iVar30 + 0x224) =
           fVar9 * 0.45 + fVar3 * -1.2 + fVar2 * -0.4 + (moby->pos).y;
      fVar2 = (moby->pos).z;
      *(float *)((int)piVar12 + iVar30 + 0x22c) = fVar8 * 0.45 + fVar7 * -1.2 + fVar4 * -0.4;
      *(float *)((int)piVar12 + iVar30 + 0x228) =
           fVar6 * 0.45 + fVar5 * -1.2 + fVar10 * -0.4 + fVar2;
      puVar14 = (uint *)piVar12[0xc9];
      *(undefined4 *)((int)piVar12 + (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4) + 0x22c)
           = 0x3f800000;
      if (uVar29 != *puVar14) {
        *puVar14 = uVar29;
        RegisterFuncForMoby(&PTR_M792_0045f698_0070ea40,moby);
      }
      fVar15 = (moby->pos).x;
      uVar29 = (int)fVar15 >> 0x1f;
      if ((0x40ffffff < (int)((uVar29 >> 1 ^ (uint)fVar15) - uVar29)) &&
         (fVar15 = (moby->pos).y, uVar29 = (int)fVar15 >> 0x1f,
         0x40ffffff < (int)((uVar29 >> 1 ^ (uint)fVar15) - uVar29))) {
        puVar38 = moby->pClass->collision;
      }
      moby->collision = puVar38;
      if ((iVar28 != 0) && (0 < *(int *)(iVar28 + 0x2c))) {
        moby->state = '\x02';
      }
    }
    else if (bVar1 < 3) {
      PlayMobySound(0,0,moby);
      fVar4 = DAT_00873c5c;
      fVar5 = DAT_0071f408;
      fVar2 = (moby->transform).v0.z;
      fVar3 = (moby->transform).v0.x;
      fVar9 = DAT_00873c58 * DAT_0071f408;
      fVar10 = (moby->transform).v0.y;
      *(float *)((int)puVar19 + 0x8c) = (moby->transform).v0.w;
      lVar32 = lVar24 + 0x10;
      lVar25 = lVar24 + 0x40;
      fVar2 = fVar2 * fVar9;
      lVar26 = uVar27 - 0x180;
      *(float *)(puVar19 + 0x11) = fVar2;
      *(float *)(puVar19 + 0x10) = fVar3 * fVar9;
      *(float *)((int)puVar19 + 0x84) = fVar10 * fVar9;
      fVar3 = animationSpeed;
      *(float *)(puVar19 + 0x11) = fVar4 * fVar5 + fVar2;
      fVar2 = DAT_0071f418;
      dVar42 = 90.5;
      puVar19[0xe] = ZEXT48(&DAT_00a15d30);
      puVar19[0xf] = ZEXT48(&DAT_00a15d30);
      puVar19[0x33] = (longlong)(int)(fVar3 * 90.5);
      dVar41 = 12.0;
      MB_SpawnDebrisMoby
                ((double)(fVar2 * 12.0),lVar24,0x72e,lVar32,lVar25,
                 *(undefined4 *)((int)puVar19 + 0x19c),0,in_r9,lVar26);
      dVar40 = (double)animationSpeed;
      dVar46 = (double)DAT_0071f418;
      puVar19[0xe] = ZEXT48(&DAT_00a15d30);
      puVar19[0xf] = ZEXT48(&DAT_00a15d30);
      puVar19[0x33] = (longlong)(int)(dVar40 * dVar42);
      MB_SpawnDebrisMoby
                ((double)(float)(dVar46 * dVar41),lVar24,0x72e,lVar32,lVar25,
                 *(undefined4 *)((int)puVar19 + 0x19c),0,in_r9,lVar26);
      dVar40 = (double)animationSpeed;
      dVar46 = (double)DAT_0071f418;
      puVar19[0xe] = ZEXT48(&DAT_00a15d30);
      puVar19[0xf] = ZEXT48(&DAT_00a15d30);
      puVar19[0x33] = (longlong)(int)(dVar40 * dVar42);
      MB_SpawnDebrisMoby
                ((double)(float)(dVar46 * dVar41),lVar24,0x72e,lVar32,lVar25,
                 *(undefined4 *)((int)puVar19 + 0x19c),0,in_r9,lVar26);
      DeleteMoby(moby);
      return;
    }
    if (DAT_00873c54 != 0) {
      M79_0045dfb0(lVar24);
    }
  }
  return;
}


