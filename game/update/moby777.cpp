// game/update/moby777.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x458898-0x4598f8
#include <stdio.h>
#include "game/update/moby777.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby819.h"
#include "idol/fastfunc.h"

// 0x0458898 (0x14 bytes)
void M777_00458898(void)

{
  DAT_008738dc = 0x10000;
  return;
}


// 0x04588b8 (0x20c bytes)
void M777_004588b8(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<8> auStack_20;
  
  pvVar2 = param_1->pVar;
  uVar7 = ZEXT48(pvVar2);
  if (param_1->state != '\x06') {
    iVar6 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar6,uVar7 + 0x20,5,auStack_20,0,0,4);
    if (iVar6 != 0) {
      uVar3 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
      uVar4 = (int)*(uint *)(iVar6 + 0x2c) >> 0x1f;
      fVar1 = *(float *)(iVar6 + 0x2c);
      if (((int)((uVar4 >> 1 ^ *(uint *)(iVar6 + 0x2c)) - uVar4) <
           (int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar3)) &&
         (*(short *)(*(int *)(iVar6 + 0x20) + 0xa6) != 0xac)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        *(undefined1 *)((int)pvVar2 + 199) = 0xfa;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *(float *)((int)pvVar2 + 0x20) = *(float *)((int)pvVar2 + 0x20) - fVar1;
        auVar8 = loadVectorLeftIndexed(in_LR,0x4588b0);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar8,0x26,uVar7);
        *(undefined2 *)((int)pvVar2 + 0x26) = uVar5;
        MB_UpdateLightsTransition(param_1,uVar7 + 0xc0);
      }
      else {
        *(undefined1 *)((int)pvVar2 + 199) = 0xfa;
        MB_UpdateLightsTransition(param_1,uVar7 + 0xc0);
        MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
        param_1->state = '\x06';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,uVar7 + 0xc0);
  iVar6 = MB_getTargetInArea
                    (0x4059400000000000,param_1,uVar7 + 0xd0,&DAT_004588b0,0,0,
                     Splines[*(int *)((int)pvVar2 + 400)]->points,
                     Splines[*(int *)((int)pvVar2 + 400)]->cnt);
  if ((iVar6 != 2) && (param_1->enabled == '\0')) {
    *(undefined4 *)((int)pvVar2 + 0x114) = 2;
  }
  if (*(int *)((int)pvVar2 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar2 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x0458b00 (0xdf8 bytes)
// inlined: FastAtan2 @0x458e1c, FastAtan2 @0x459174, FastAtan2 @0x4594a8
// strings: 006582cc: 'ERROR!! Moby class %d maya instance %d has no path set; deleted\n'

/* Moby 777 */

void UpdateMoby_777(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *pMVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined2 uVar20;
  int iVar19;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x1a0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar14;
  puVar12[0x36] = in_LR;
  puVar12[0x2f] = in_f27;
  puVar12[0x30] = in_f28;
  puVar12[0x31] = in_f29;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x2d] = unaff_r30;
  puVar12[0x2e] = unaff_r31;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  iVar19 = *(int *)((int)pvVar8 + 0x140);
  puVar12[0x2c] = unaff_r29;
  puVar12[0x2b] = unaff_r28;
  puVar12[0x2a] = unaff_r27;
  if (iVar19 == -1) {
    printf("ERROR!! Moby class %d maya instance %d has no path set; deleted\n",moby->oClass,
                 (ulonglong)(uint)moby->handle & 0xffff);
    DeleteMoby(moby);
  }
  else {
    M777_004588b8(lVar15);
    uVar1 = moby->state;
    pMVar9 = *(MobyInstance **)((int)pvVar8 + 0x110);
    if (uVar1 == '\x06') {
      DeleteMoby(moby);
    }
    else if (uVar1 == '\x04') {
      FastDecTimerS32(uVar24 + 0x19c);
      fVar3 = (pMVar9->pos).x - (moby->pos).x;
      fVar2 = (pMVar9->pos).y - (moby->pos).y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)(puVar12 + 0x14) = fVar3;
      *(float *)((int)puVar12 + 0xa4) = fVar2;
      *(float *)(puVar12 + 0x15) = fVar4 - fVar7;
      dVar26 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar12 + 0x14));
      if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar12 + 0xa4));
      if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar28 = dVar26;
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 400;
        lVar23 = uVar14 - 0xcc;
        lVar21 = uVar14 - 0xdc;
        lVar25 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x1a) = fVar3;
        *(float *)(puVar12 + 0x19) = fVar3;
        *(float *)((int)puVar12 + 0xcc) = fVar3;
        *(float *)((int)puVar12 + 0xc4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar4;
        *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar3;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0xc4) = *(float *)((int)lVar17 + 0xb4) * fVar3 * fVar3;
          iVar19 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar14 - 0xdc;
        pfVar22 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar17 + 0xc4) = *(float *)((int)lVar17 + 0xc4) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          iVar13 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xc4)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar28,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 12.566371),lVar15,&DAT_00458ac4,uVar24 + 0x198);
      if ((*(int *)((int)pvVar8 + 0x114) != 2) &&
         (iVar19 = FastDecTimerS32(uVar24 + 0x19c), iVar19 != 0)) {
        *(f32 *)(puVar12 + 0x10) = (pMVar9->pos).x;
        *(f32 *)((int)puVar12 + 0x84) = (pMVar9->pos).y;
        fVar3 = (pMVar9->pos).z;
        *(float *)(puVar12 + 0x11) = fVar3;
        *(f32 *)((int)puVar12 + 0x8c) = (pMVar9->pos).w;
        *(float *)(puVar12 + 0x11) = fVar3 + 1.2;
        CollLine(lVar15 + 0x10,uVar14 - 0x120,0,lVar15,0);
        if (g_CollOutput.pMoby == pMVar9) {
          fVar2 = *(float *)((int)puVar12 + 0x84) - (moby->pos).y;
          fVar7 = *(float *)(puVar12 + 0x10) - (moby->pos).x;
          fVar4 = *(float *)(puVar12 + 0x11) - (moby->pos).z;
          fVar3 = DAT_00873904 * g_FrameTime;
          *(float *)(puVar12 + 0x12) = fVar7;
          *(float *)((int)puVar12 + 0x94) = fVar2;
          *(float *)(puVar12 + 0x13) = fVar4;
          *(undefined4 *)((int)puVar12 + 0x9c) = *(undefined4 *)((int)puVar12 + 0x8c);
          fVar5 = animationSpeed;
          dVar29 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
          fVar3 = (float)((double)fVar3 / dVar29);
          dVar28 = dVar26;
          if (dVar26 - dVar29 < 0.0) {
            dVar28 = (double)(fVar7 * fVar3);
          }
          dVar30 = dVar26;
          if (dVar26 - dVar29 < 0.0) {
            dVar30 = (double)(fVar2 * fVar3);
          }
          dVar31 = dVar26;
          if (dVar26 - dVar29 < 0.0) {
            dVar31 = (double)(fVar4 * fVar3);
          }
          if (dVar29 - dVar26 < 0.0) {
            dVar28 = (double)(fVar7 * fVar3);
          }
          if (dVar29 - dVar26 < 0.0) {
            dVar30 = (double)(fVar2 * fVar3);
          }
          if (dVar29 - dVar26 < 0.0) {
            dVar31 = (double)(fVar4 * fVar3);
          }
          *(float *)(puVar12 + 0x12) = (float)dVar28;
          *(float *)((int)puVar12 + 0x94) = (float)dVar30;
          *(float *)(puVar12 + 0x13) = (float)dVar31;
          puVar12[0x25] = (longlong)(int)(fVar5 * 300.5);
          FUN_00470690(0x3ff0000000000000,uVar14 - 0x110,lVar15 + 0x10,lVar15,pMVar9,
                       *(undefined4 *)((int)puVar12 + 300));
        }
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x3900,0x870000);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar32,0);
        auVar32 = loadVectorLeftIndexed(4,0x458ac4);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorAddFloatingPoint
                            (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x19c,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0x19cU & 0xfffffffc) = uVar11;
      }
      iVar19 = *(int *)((int)pvVar8 + 0x158);
      fVar3 = (moby->pos).x;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x144)];
      fVar2 = (moby->pos).y;
      fVar7 = (moby->pos).z;
      fVar4 = pSVar10->points[iVar19].x;
      fVar5 = pSVar10->points[iVar19].y;
      fVar6 = pSVar10->points[iVar19].z;
      *(float *)((int)puVar12 + 0x7c) = pSVar10->points[iVar19].w;
      *(float *)(puVar12 + 0xe) = fVar4 - fVar3;
      *(float *)((int)puVar12 + 0x74) = fVar5 - fVar2;
      *(float *)(puVar12 + 0xf) = fVar6 - fVar7;
      ClampVec3Magnitude((double)(g_FrameTime * 8.0),(Vec4 *)(puVar12 + 0xe));
      fVar3 = *(float *)((int)puVar12 + 0x74);
      fVar2 = *(float *)(puVar12 + 0xe);
      fVar7 = *(float *)(puVar12 + 0xf);
      (moby->pos).x = (moby->pos).x + fVar2;
      (moby->pos).y = (moby->pos).y + fVar3;
      (moby->pos).z = (moby->pos).z + fVar7;
      if ((SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3) < g_FrameTime) &&
         (iVar19 = *(int *)((int)pvVar8 + 0x158) + 1,
         iVar19 < Splines[*(int *)((int)pvVar8 + 0x144)]->cnt)) {
        *(int *)((int)pvVar8 + 0x158) = iVar19;
      }
    }
    else if (uVar1 == '\x03') {
      iVar19 = *(int *)((int)pvVar8 + 0x158);
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x140)];
      dVar31 = (double)pSVar10->points[iVar19].x;
      dVar30 = (double)pSVar10->points[iVar19].y;
      fVar3 = (float)(dVar31 - (double)(moby->pos).x);
      fVar2 = (float)(dVar30 - (double)(moby->pos).y);
      dVar29 = (double)pSVar10->points[iVar19].z;
      dVar28 = (double)pSVar10->points[iVar19].w;
      pfVar22 = (float *)&g_atanQuadrantTable;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)(puVar12 + 0x16) = fVar2;
      *(float *)((int)puVar12 + 0xb4) = fVar4 - fVar7;
      dVar26 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)((int)puVar12 + 0xb4) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)(puVar12 + 0x16));
      if (*(float *)((int)puVar12 + 0xb4) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar27 = dVar26;
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 400;
        lVar21 = uVar14 - 0xbc;
        lVar23 = uVar14 - 0xac;
        lVar25 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x1e) = fVar3;
        *(float *)(puVar12 + 0x1d) = fVar3;
        *(float *)((int)puVar12 + 0xec) = fVar3;
        *(float *)((int)puVar12 + 0xe4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar4;
        *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar3;
        *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xd4) * fVar3 * fVar3;
          iVar19 = (int)lVar21;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar14 - 0xbc;
        pfVar22 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xe4) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar19 + 0xe4)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar27,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 12.566371),lVar15,pfVar22,uVar24 + 0x198);
      fVar2 = (float)(dVar30 - (double)(moby->pos).y);
      fVar7 = (float)(dVar31 - (double)(moby->pos).x);
      fVar4 = (float)(dVar29 - (double)(moby->pos).z);
      fVar3 = g_FrameTime * 8.0;
      *(float *)((int)pvVar8 + 300) = (float)dVar28;
      dVar29 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
      fVar3 = (float)((double)fVar3 / dVar29);
      dVar28 = dVar26;
      if (dVar26 - dVar29 < 0.0) {
        dVar28 = (double)(fVar2 * fVar3);
      }
      dVar30 = dVar26;
      if (dVar26 - dVar29 < 0.0) {
        dVar30 = (double)(fVar7 * fVar3);
      }
      dVar31 = dVar26;
      if (dVar26 - dVar29 < 0.0) {
        dVar31 = (double)(fVar4 * fVar3);
      }
      if (dVar29 - dVar26 < 0.0) {
        dVar28 = (double)(fVar2 * fVar3);
      }
      if (dVar29 - dVar26 < 0.0) {
        dVar30 = (double)(fVar7 * fVar3);
      }
      if (dVar29 - dVar26 < 0.0) {
        dVar31 = (double)(fVar4 * fVar3);
      }
      *(float *)((int)pvVar8 + 0x124) = (float)dVar28;
      *(float *)((int)pvVar8 + 0x120) = (float)dVar30;
      *(float *)((int)pvVar8 + 0x128) = (float)dVar31;
      (moby->pos).x = (float)((double)(moby->pos).x + dVar30);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x124);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x128);
      if (dVar29 < 0.5) {
        iVar19 = *(int *)((int)pvVar8 + 0x158) + 1;
        if (iVar19 < Splines[*(int *)((int)pvVar8 + 0x140)]->cnt) {
          *(int *)((int)pvVar8 + 0x158) = iVar19;
        }
        else {
          *(undefined4 *)((int)pvVar8 + 0x158) = 0;
          moby->state = '\x04';
          if (moby->animationId != '\x06') {
            MB_SetAnimation(lVar15,6,0,0);
          }
        }
      }
    }
    else if (uVar1 == '\x02') {
      fVar3 = (pMVar9->pos).x - (moby->pos).x;
      fVar2 = (pMVar9->pos).y - (moby->pos).y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)(puVar12 + 0x17) = fVar3;
      *(float *)((int)puVar12 + 0xbc) = fVar2;
      *(float *)(puVar12 + 0x18) = fVar4 - fVar7;
      dVar26 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar12 + 0x17));
      if (*(float *)(puVar12 + 0x18) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar12 + 0xbc));
      if (*(float *)(puVar12 + 0x18) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 400;
        lVar21 = uVar14 - 0x9c;
        lVar23 = uVar14 - 0x8c;
        lVar25 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x22) = fVar3;
        *(float *)(puVar12 + 0x21) = fVar3;
        *(float *)((int)puVar12 + 0x10c) = fVar3;
        *(float *)((int)puVar12 + 0x104) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar4;
        *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar3;
        *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x104) = *(float *)((int)lVar17 + 0xf4) * fVar3 * fVar3;
          iVar19 = (int)lVar21;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar14 - 0x9c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar17 + 0x104) = *(float *)((int)lVar17 + 0x104) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          iVar13 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar19 + 0x104)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar26,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 3.1415927),lVar15,&DAT_00720000,uVar24 + 0x198);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId == '\x04')) {
        puVar12[0x25] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar15,5,0,*(undefined4 *)((int)puVar12 + 300));
      }
      fVar3 = g_FrameTime * 4.0 + (moby->pos).z;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x140)];
      (moby->pos).z = fVar3;
      fVar2 = (moby->pos).y - pSVar10->points[0].y;
      fVar7 = (moby->pos).x - pSVar10->points[0].x;
      fVar3 = fVar3 - pSVar10->points[0].z;
      if ((SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) < 0.5) &&
         (moby->state = '\x03', moby->animationId != '\x05')) {
        puVar12[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar15,5,0,*(undefined4 *)((int)puVar12 + 300));
      }
    }
    else if (uVar1 == '\x01') {
      iVar19 = MB_IsPntInCuboid
                         ((Vec4 *)&pMVar9->pos,(longlong)*(int *)((int)pvVar8 + 0x148));
      if (iVar19 != 0) {
        moby->state = '\x02';
        if (moby->animationId != '\x04') {
          puVar12[0x25] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar15,4,0,*(undefined4 *)((int)puVar12 + 300));
        }
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
      }
    }
    else if (uVar1 == '\0') {
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x41100000;
      uVar20 = FastDoubleToInt(0x4022000000000000);
      *(undefined2 *)((int)pvVar8 + 0x24) = uVar20;
      *(undefined1 *)((int)pvVar8 + 0x28) = 2;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x140)];
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      (moby->pos).w = pSVar10->points[0].w;
      auVar32 = loadVectorLeftIndexed(4,0x458ac4);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x3900,0x870000);
      auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      (moby->pos).z = (float)dVar26;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorAddFloatingPoint(auVar32,auVar35);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x19c,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x19cU & 0xfffffffc) = uVar11;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      if (moby->animationId != '\x02') {
        MB_SetAnimation(lVar15,2,0,0);
      }
      moby->state = '\x01';
    }
  }
  return;
}


