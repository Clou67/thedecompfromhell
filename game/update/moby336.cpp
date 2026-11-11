// game/update/moby336.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e6c8-0x1f210
// shared update function UpdateMoby_{336_415}; registered for oClasses 336, 415
#include "game/update/moby336.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby1212.h"
#include "idol/fastfunc.h"

// 0x001e6c8 (0x14 bytes)
void SECTION_HEADER_MOBY336(void)

{
  DAT_0071d08c = 0x10000;
  return;
}


// 0x001e700 (0x24c bytes)
void M336_0001e700(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar3 = MB_damage(param_1,0xa30000,0);
  if (iVar3 != 0) {
    if (g_heroState != TURRET_PLANE_UI) {
      ShipsKilledCounts.Hoven = ShipsKilledCounts.Hoven + 1;
      if (4 < ShipsKilledCounts.Hoven) {
        MB_UnlockSkillPoint(0x15);
      }
    }
    uVar4 = 0;
    MB_DistributeBolts(0,param_1,0x1f,0x4a,2,0xffffffffffffffff);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(4,0x1e6e0);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0xa4,
                       (ulonglong)uVar1);
    *(undefined4 *)(uVar1 + 0xa4 & 0xfffffffc) = uVar2;
    MB_genericExplosion
              (uVar4,uVar4,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
               0x4008000000000000,0x402e000000000000,param_1,local_40,local_50,0xa4,1,0x14,3,4);
  }
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  if ((DAT_009271d4 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
  }
  if ((*(int *)(uVar1 + 0xa4) != 0) || ((*(ushort *)(param_1 + 0x34) & 1) != 0)) {
    iVar3 = FastDecTimerS32((ulonglong)uVar1 + 0xa4);
    if ((iVar3 == 0) || ((param_2 == 0 || (DAT_009271d4 != 0)))) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe | 0x1000;
      *(undefined4 *)(param_1 + 0x94) = uVar2;
    }
  }
  return;
}


// shared update function, registered for oClasses 336, 415
// 0x001e958 (0x8b8 bytes)
// inlined: FastAtan2 @0x1ec10, FastAtan2 @0x1eda4, FastAtan2 @0x1f0a0
// strings: 0001eea0: 'HN7A`' (raw)

/* Moby 336
   Moby 415 */

void UpdateMoby_336(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  int iVar17;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  float *pfVar20;
  longlong lVar18;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x160;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar14;
  puVar13[0x2e] = in_LR;
  puVar13[0x24] = in_f24;
  puVar13[0x25] = in_f25;
  puVar13[0x26] = in_f26;
  puVar13[0x27] = in_f27;
  puVar13[0x28] = in_f28;
  puVar13[0x29] = in_f29;
  puVar13[0x2a] = in_f30;
  puVar13[0x2b] = in_f31;
  puVar13[0x22] = unaff_r30;
  puVar13[0x23] = unaff_r31;
  pvVar8 = moby->pVar;
  puVar13[0x21] = unaff_r29;
  puVar13[0x20] = unaff_r28;
  if (pvVar8 != (void *)0x0) {
    FastIntToDouble(moby->drawDistance);
    iVar17 = MB_ScaledVecWrapper(moby);
    M336_0001e700(moby,(ulonglong)(LZCOUNT(iVar17 + 1) << 0x20) >> 0x25);
    if (moby->state == 0) {
      if (*(int *)((int)pvVar8 + 0x74) != -1) {
        InitFollower((PathFollower *)((int)pvVar8 + 0x60));
        iVar17 = *(int *)((int)pvVar8 + 0xa0);
        pSVar12 = Splines[*(int *)((int)pvVar8 + 0x74)];
        *(Spline **)((int)pvVar8 + 0x70) = pSVar12;
        iVar19 = pSVar12->cnt + -1;
        iVar17 = iVar17 + ((uint)((longlong)iVar19 - (longlong)iVar17 >> 0x3f) & iVar19 - iVar17);
        (moby->pos).x = pSVar12->points[iVar17].x;
        (moby->pos).y = pSVar12->points[iVar17].y;
        (moby->pos).z = pSVar12->points[iVar17].z;
        (moby->pos).w = pSVar12->points[iVar17].w;
        *(undefined1 *)((int)pvVar8 + 0x28) = 2;
        *(undefined1 *)((int)pvVar8 + 0x2c) = 0x2c;
        *(undefined1 *)((int)pvVar8 + 0x2b) = 1;
        *(int *)((int)pvVar8 + 0x60) = iVar17;
        *(undefined1 *)((int)pvVar8 + 0x2a) = 0x10;
        MVar7 = moby->modeBits;
        *(undefined4 *)((int)pvVar8 + 0x30) = 0x3fb33333;
        moby->drawDistance = 0xaa;
        moby->state = '\x01';
        moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
      }
    }
    else if (moby->state < 2) {
      piVar9 = *(int **)((int)pvVar8 + 0x70);
      iVar17 = *(int *)((int)pvVar8 + 0x60);
      iVar19 = *piVar9;
      iVar23 = (iVar17 + iVar19) - (int)*(char *)((int)pvVar8 + 100);
      iVar24 = iVar17 + iVar19 + (int)*(char *)((int)pvVar8 + 100);
      iVar23 = iVar23 - (iVar23 / iVar19) * iVar19;
      iVar24 = iVar24 - (iVar24 / iVar19) * iVar19;
      fVar4 = (float)piVar9[iVar17 * 4 + 4];
      fVar5 = (float)piVar9[iVar17 * 4 + 5];
      fVar1 = (float)((double)fVar4 - (double)(float)piVar9[iVar23 * 4 + 4]);
      dVar32 = (double)fVar1;
      fVar2 = (float)((double)fVar5 - (double)(float)piVar9[iVar23 * 4 + 5]);
      dVar31 = (double)fVar2;
      dVar30 = (double)((float)piVar9[iVar17 * 4 + 6] - (float)piVar9[iVar23 * 4 + 6]);
      dVar36 = (double)(float)piVar9[iVar24 * 4 + 4];
      dVar35 = (double)(float)piVar9[iVar24 * 4 + 5];
      dVar34 = (double)(float)piVar9[iVar24 * 4 + 6];
      *(float *)(puVar13 + 0x11) = fVar1;
      *(float *)((int)puVar13 + 0x8c) = fVar2;
      fVar1 = (float)(dVar36 - (double)fVar4);
      fVar2 = (float)(dVar35 - (double)fVar5);
      *(float *)(puVar13 + 0x12) = (float)(ABS(dVar32) - ABS(dVar31));
      dVar28 = 0.0;
      uVar21 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
      dVar27 = ABS((double)*(float *)(puVar13 + 0x11));
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        dVar27 = ABS(dVar31);
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)((int)puVar13 + 0x8c));
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        dVar33 = ABS(dVar32);
      }
      dVar29 = 0.7853981852531433;
      dVar26 = dVar28;
      if (0.0 < dVar27) {
        lVar15 = uVar14 - 0x150;
        lVar18 = uVar14 - 0x8c;
        lVar22 = uVar14 - 0x7c;
        lVar25 = 2;
        fVar3 = (float)(dVar33 - dVar27) / (float)(dVar33 + dVar27);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x1c) = fVar3;
        *(float *)(puVar13 + 0x1b) = fVar3;
        *(float *)((int)puVar13 + 0xdc) = fVar3;
        *(float *)((int)puVar13 + 0xd4) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar6;
        *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar3;
        *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar3 * fVar3;
          iVar17 = (int)lVar18;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x8c;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar16;
        lVar18 = lVar22;
        do {
          fVar3 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar3;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
          lVar18 = lVar18 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar18 = 2;
        lVar15 = lVar16;
        dVar27 = dVar28;
        do {
          iVar17 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar19 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xd4)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar26 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar4);
      }
      fVar5 = ABS(fVar1);
      *(float *)((int)puVar13 + 0x7c) = fVar1;
      fVar4 = ABS(fVar2);
      *(float *)(puVar13 + 0x10) = fVar2;
      *(float *)((int)puVar13 + 0x84) = fVar5 - fVar4;
      uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar13 + 0x7c));
      if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
        fVar1 = fVar4;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = ABS(*(float *)(puVar13 + 0x10));
      if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar27 = dVar28;
      if (0.0 < fVar1) {
        lVar15 = uVar14 - 0x150;
        lVar22 = uVar14 - 0x9c;
        lVar18 = uVar14 - 0xac;
        lVar25 = 2;
        fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
        fVar4 = fVar1 * fVar1;
        *(float *)(puVar13 + 0x18) = fVar1;
        *(float *)(puVar13 + 0x17) = fVar1;
        *(float *)((int)puVar13 + 0xbc) = fVar1;
        *(float *)((int)puVar13 + 0xb4) = fVar1;
        fVar1 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar4;
        *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar1;
        *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar1 * fVar4;
        do {
          *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar1 * fVar1;
          iVar17 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar1 * fVar1;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0xac;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar16;
        lVar18 = lVar22;
        do {
          fVar1 = *pfVar20;
          fVar4 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar1;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
          lVar18 = lVar18 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar18 = 2;
        lVar15 = lVar16;
        do {
          iVar17 = (int)lVar15;
          iVar19 = (int)lVar22;
          lVar15 = lVar15 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xb4)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar5);
      }
      dVar27 = (double)FastDiffRots(dVar26,dVar27);
      dVar33 = (double)(moby->rotation).x;
      dVar27 = (double)FastDiffRots
                                 ((double)((float)(dVar27 / (double)SQRT((float)(dVar30 * dVar30 +
                                                                                (double)(float)(
                                                  dVar32 * dVar32 + (double)(float)(dVar31 * dVar31)
                                                  )))) * DAT_0071d0b4),dVar33);
      dVar27 = (double)FastWrapRot((float)dVar33,(float)(dVar27 / (double)DAT_0071d0b8));
      dVar31 = (double)(moby->pos).y;
      dVar30 = (double)(moby->pos).x;
      dVar32 = (double)(moby->pos).z;
      (moby->rotation).x = (float)dVar27;
      fVar2 = g_FrameTime;
      fVar1 = DAT_0071d0b0;
      if (SQRT((float)(dVar32 - dVar34) * (float)(dVar32 - dVar34) +
               (float)(dVar30 - dVar36) * (float)(dVar30 - dVar36) +
               (float)(dVar31 - dVar35) * (float)(dVar31 - dVar35)) <
          DAT_0071d0b0 * g_FrameTime) {
        *(int *)((int)pvVar8 + 0x60) = iVar24;
        piVar9 = *(int **)((int)pvVar8 + 0x70);
        dVar30 = (double)(moby->pos).x;
        dVar31 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).z;
        if (iVar24 == *piVar9 + -1) {
          dVar30 = (double)(float)piVar9[4];
          (moby->pos).x = (f32)piVar9[4];
          dVar31 = (double)(float)piVar9[5];
          (moby->pos).y = (f32)piVar9[5];
          dVar32 = (double)(float)piVar9[6];
          (moby->pos).z = (f32)piVar9[6];
          (moby->pos).w = (f32)piVar9[7];
          fVar1 = DAT_0071d0b0;
          fVar2 = g_FrameTime;
        }
      }
      fVar4 = (float)(dVar35 - dVar31);
      fVar5 = (float)(dVar36 - dVar30);
      fVar3 = (float)(dVar34 - dVar32);
      dVar35 = (double)(moby->rotation).z;
      dVar34 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar1 = (float)((double)(fVar1 * fVar2) / dVar34);
      dVar27 = dVar28;
      if (dVar28 - dVar34 < 0.0) {
        dVar27 = (double)(fVar4 * fVar1);
      }
      dVar36 = dVar28;
      if (dVar28 - dVar34 < 0.0) {
        dVar36 = (double)(fVar5 * fVar1);
      }
      dVar33 = dVar28;
      if (dVar28 - dVar34 < 0.0) {
        dVar33 = (double)(fVar3 * fVar1);
      }
      if (dVar34 - dVar28 < 0.0) {
        dVar27 = (double)(fVar4 * fVar1);
      }
      if (dVar34 - dVar28 < 0.0) {
        dVar36 = (double)(fVar5 * fVar1);
      }
      if (dVar34 - dVar28 < 0.0) {
        dVar33 = (double)(fVar3 * fVar1);
      }
      *(float *)(puVar13 + 0xe) = (float)dVar36;
      *(float *)((int)puVar13 + 0x74) = (float)dVar27;
      *(float *)(puVar13 + 0xf) = (float)(ABS(dVar36) - ABS(dVar27));
      uVar10 = *(uint *)(puVar13 + 0xe);
      fVar1 = *(float *)(puVar13 + 0xe);
      uVar11 = *(uint *)((int)puVar13 + 0x74);
      (moby->pos).x = (float)(dVar30 + dVar36);
      (moby->pos).y = (float)(dVar31 + dVar27);
      (moby->pos).z = (float)(dVar32 + dVar33);
      uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      dVar30 = ABS((double)fVar1);
      if ((double)*(float *)(puVar13 + 0xf) - dVar28 < 0.0) {
        dVar30 = ABS(dVar27);
      }
      fVar1 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
      dVar27 = ABS((double)*(float *)((int)puVar13 + 0x74));
      if ((double)*(float *)(puVar13 + 0xf) - dVar28 < 0.0) {
        dVar27 = ABS(dVar36);
      }
      if (dVar28 < dVar30) {
        lVar15 = uVar14 - 0x150;
        lVar18 = uVar14 - 0xcc;
        lVar22 = uVar14 - 0xbc;
        lVar25 = 2;
        fVar4 = (float)(dVar27 - dVar30) / (float)(dVar27 + dVar30);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x14) = fVar4;
        *(float *)(puVar13 + 0x13) = fVar4;
        *(float *)((int)puVar13 + 0x9c) = fVar4;
        *(float *)((int)puVar13 + 0x94) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar5;
        *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar4;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar4 * fVar4;
          iVar17 = (int)lVar18;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0xcc;
        pfVar20 = (float *)&DAT_007358e0;
        lVar15 = lVar16;
        lVar18 = lVar22;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar4;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
          lVar18 = lVar18 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar15 = 2;
        do {
          iVar17 = (int)lVar16;
          iVar19 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0x94)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar28 = (double)((float)(dVar28 + dVar29) * fVar2 + fVar1);
      }
      dVar27 = (double)FastDiffRots(dVar28,dVar35);
      dVar27 = (double)FastWrapRot((float)dVar35,(float)(dVar27 / (double)DAT_0071d0b8));
      (moby->rotation).z = (float)dVar27;
      (moby->rotation).y = 0.5235988;
    }
  }
  return;
}


