// game/update/moby1236.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x219264-0x21a074
#include "game/update/moby1236.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0219264 (0x14 bytes)
void M1236_00219264(void)

{
  DAT_007687ec = 0x10000;
  return;
}


// 0x0219280 (0xc8 bytes)
void M1236_00219280(int param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar7 = loadVectorLeftIndexed(in_r0,0x219278);
  auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar6,auVar8);
  auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x128,
                     (ulonglong)*(uint *)(param_1 + 0x78));
  *(undefined4 *)(*(uint *)(param_1 + 0x78) + 0x128 & 0xfffffffc) = uVar2;
  if ((int)param_2 != 0xff) {
    puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
    do {
      pMVar4 = g_MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      if ((g_MobyInstance[uVar3].state == '\x01') || (g_MobyInstance[uVar3].state == '\x02')) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar7 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar7);
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x128,
                           ZEXT48(g_MobyInstance[uVar3].pVar));
        *(undefined4 *)((int)g_MobyInstance[uVar3].pVar + 0x128U & 0xfffffffc) = uVar2;
        pMVar4[uVar3].state = '\x03';
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0219370 (0x3ac bytes)
void M1236_00219370(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  double dVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  int local_40;
  float local_3c;
  longlong local_38;
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768814;
  iVar5 = FastDecTimerS32(uVar7 + 0x128);
  if (iVar5 == 2) {
    param_1->state = '\x06';
    return;
  }
  dVar9 = 10.5;
  iVar5 = *(int *)((int)pvVar1 + 0x128);
  local_38 = (longlong)(int)(animationSpeed * 10.5);
  if (((((iVar5 == (int)(animationSpeed * 10.5)) ||
        (local_38 = (longlong)(int)(animationSpeed * 20.5), iVar5 == (int)(animationSpeed * 20.5)))
       || (local_38 = (longlong)(int)(animationSpeed * 40.5), iVar5 == (int)(animationSpeed * 40.5))
       ) || ((local_38 = (longlong)(int)(animationSpeed * 60.5),
             iVar5 == (int)(animationSpeed * 60.5) ||
             (local_38 = (longlong)(int)(animationSpeed * 120.5),
             iVar5 == (int)(animationSpeed * 120.5))))) ||
     (local_38 = (longlong)(int)(animationSpeed * 179.5), iVar5 == (int)(animationSpeed * 179.5))) {
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
    MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
  }
  dVar8 = 0.0;
  local_3c = 0.0;
  uVar6 = MB_damage(param_1,0x330000,0);
  iVar5 = MB_HandleDamage(param_1,uVar6,uVar7 + 0x20,0,&local_40,&local_3c,0,4);
  if (local_40 == 1) goto LAB_00219610;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_3c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if ((double)fVar3 <= dVar8) {
LAB_00219590:
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    param_1->state = '\x05';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(in_LR,0x219348);
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    local_38 = (longlong)(int)((double)animationSpeed * dVar9);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    if (((int)((double)animationSpeed * dVar9) < *(int *)((int)pvVar1 + 0x128)) ||
       (*(int *)((int)pvVar1 + 0x128) == 0)) {
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x128,uVar7);
      *(undefined4 *)((int)pvVar1 + 0x128U & 0xfffffffc) = uVar6;
    }
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_00219590;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    else {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
    }
  }
  MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
LAB_00219610:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar7 + 0x60);
  *(undefined4 *)((int)pvVar1 + 300) = 0x41400000;
  pSVar2 = Splines[*(int *)((int)pvVar1 + 0x120)];
  iVar5 = MB_getTargetInArea
                    (0x4028000000000000,param_1,uVar7 + 0xc0,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
  if ((iVar5 != 2) &&
     ((fVar3 = (param_1->pos).y - *(float *)((int)pvVar1 + 0xc4),
      fVar4 = (param_1->pos).x - *(float *)((int)pvVar1 + 0xc0),
      *(float *)((int)pvVar1 + 300) < SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
      (4.0 < ABS((param_1->pos).z - *(float *)((int)pvVar1 + 200)))))) {
    *(undefined4 *)((int)pvVar1 + 0x104) = 2;
  }
  if (*(int *)((int)pvVar1 + 0x100) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0x100) = g_heroMobyPtr;
  }
  return;
}


// 0x0219780 (0x8f4 bytes)
// inlined: FastAtan2 @0x219988, FastAtan2 @0x219c9c
/* Moby 1236 */

void UpdateMoby_1236(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 400;
  puVar9 = (ulonglong *)lVar22;
  *puVar9 = uVar18;
  puVar9[0x34] = in_LR;
  puVar9[0x31] = in_f31;
  puVar9[0x30] = unaff_r31;
  puVar9[0x2f] = unaff_r30;
  puVar9[0x2e] = unaff_r29;
  puVar9[0x2d] = unaff_r28;
  puVar9[0x2c] = unaff_r27;
  pvVar6 = moby->pVar;
  M1236_00219370();
  uVar1 = moby->state;
  iVar7 = *(int *)((int)pvVar6 + 0x100);
  if (uVar1 == '\x06') {
    *(undefined4 *)((int)puVar9 + 0xec) = 0;
    *(undefined4 *)(puVar9 + 0x1d) = 0;
    *(undefined4 *)((int)puVar9 + 0xe4) = 0;
    *(undefined4 *)(puVar9 + 0x1c) = 0;
    puVar9[0x12] = 0xffffffffffffffff;
    puVar9[0x14] = 1;
    puVar9[0x15] = 1;
    puVar9[0x16] = 0xffffffffffffffff;
    puVar9[0x17] = 0;
    MB_genericExplosion
              (0x4010000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar19,uVar18 - 0xb0,
               lVar19 + 0x10,0,1,10,3,0x10);
    DeleteMoby(moby);
  }
  else if (uVar1 != '\x05') {
    if (uVar1 == '\x03') {
      fVar2 = *(float *)(iVar7 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar7 + 0x14) - (moby->pos).y;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)(puVar9 + 0x1e) = fVar2;
      *(float *)((int)puVar9 + 0xf4) = fVar3;
      *(float *)(puVar9 + 0x1f) = fVar4 - fVar5;
      dVar28 = 0.0;
      uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar9 + 0x1e));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)((int)puVar9 + 0xf4));
      if (*(float *)(puVar9 + 0x1f) - 0.0 < 0.0) {
        fVar17 = fVar4;
      }
      dVar27 = dVar28;
      if (0.0 < fVar2) {
        lVar21 = uVar18 - 0x180;
        lVar25 = uVar18 - 0x78;
        lVar23 = uVar18 - 0x88;
        lVar26 = 2;
        fVar2 = (fVar17 - fVar2) / (fVar17 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0x114) = fVar2;
        *(float *)((int)puVar9 + 0x10c) = fVar2;
        *(float *)(puVar9 + 0x22) = fVar2;
        *(float *)(puVar9 + 0x21) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar2;
        *(float *)((int)puVar9 + 0x114) = *(float *)((int)puVar9 + 0x114) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x108) = *(float *)((int)lVar21 + 0xf8) * fVar2 * fVar2;
          iVar10 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar25 = uVar18 - 0x88;
        pfVar24 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar23 = lVar25;
        do {
          fVar2 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar21 + 0x108) = *(float *)((int)lVar21 + 0x108) * fVar2;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar21 = 2;
        do {
          iVar10 = (int)lVar22;
          iVar11 = (int)lVar25;
          lVar22 = lVar22 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0x108)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
      }
      OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x130));
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar5 = fVar2 - *(float *)((int)pvVar6 + 0x114);
      fVar4 = fVar3 - *(float *)((int)pvVar6 + 0x110);
      fVar2 = fVar2 - *(float *)(iVar7 + 0x14);
      fVar3 = fVar3 - *(float *)(iVar7 + 0x10);
      if ((20.0 < SQRT(fVar4 * fVar4 + fVar5 * fVar5)) ||
         (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 3.0)) {
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = loadVectorLeftIndexed(0x44,0x21971c);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                             auVar30);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x128,
                           ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x128U & 0xfffffffc) = uVar8;
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          puVar9[0x29] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar19,4,0,*(undefined4 *)((int)puVar9 + 0x14c));
        }
      }
      else {
        fVar2 = (moby->rotation).z;
        fVar3 = fVar2 + 1.5707963;
        fVar5 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar5 = fVar2;
        }
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar17 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
          fVar17 = fVar5;
        }
        fVar2 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar2 = fVar4;
        }
        fVar4 = fVar17 * fVar17;
        fVar13 = fVar2 * fVar2;
        fVar15 = fVar4 * fVar4 * fVar17;
        fVar12 = fVar13 * fVar13 * fVar2;
        fVar16 = fVar4 * fVar15;
        fVar3 = DAT_00768810 * g_FrameTime;
        fVar14 = fVar13 * fVar12;
        fVar5 = DAT_00768810 * g_FrameTime;
        *(undefined4 *)(puVar9 + 0x1b) = 0;
        *(float *)((int)puVar9 + 0xd4) =
             fVar5 * (fVar4 * fVar16 * 2.601887e-06 +
                     fVar16 * -0.0001980741 +
                     fVar15 * 0.0083330255 + fVar4 * fVar17 * -0.16666657 + fVar17);
        *(float *)(puVar9 + 0x1a) =
             fVar3 * (fVar13 * fVar14 * 2.601887e-06 +
                     fVar14 * -0.0001980741 +
                     fVar12 * 0.0083330255 + fVar13 * fVar2 * -0.16666657 + fVar2);
        MB_MoveAndCollide(dVar28,0x3fe0000000000000,dVar28,lVar19,uVar18 - 0xc0);
      }
    }
    else if (uVar1 == '\x02') {
      fVar2 = *(float *)((int)pvVar6 + 0x110) - (moby->pos).x;
      fVar3 = *(float *)((int)pvVar6 + 0x114) - (moby->pos).y;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar3;
      *(float *)((int)puVar9 + 0x104) = fVar4 - fVar5;
      dVar28 = 0.0;
      uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar9 + 0xfc));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)(puVar9 + 0x20));
      if (*(float *)((int)puVar9 + 0x104) - 0.0 < 0.0) {
        fVar17 = fVar4;
      }
      dVar27 = dVar28;
      if (0.0 < fVar2) {
        lVar21 = uVar18 - 0x180;
        lVar25 = uVar18 - 0x58;
        lVar23 = uVar18 - 0x68;
        lVar26 = 2;
        fVar2 = (fVar17 - fVar2) / (fVar17 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0x134) = fVar2;
        *(float *)((int)puVar9 + 300) = fVar2;
        *(float *)(puVar9 + 0x26) = fVar2;
        *(float *)(puVar9 + 0x25) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar4;
        *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar2;
        *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x118) * fVar2 * fVar2;
          iVar7 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar25 = uVar18 - 0x68;
        pfVar24 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar23 = lVar25;
        do {
          fVar2 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x128) * fVar2;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar21 = 2;
        do {
          iVar7 = (int)lVar22;
          iVar10 = (int)lVar25;
          lVar22 = lVar22 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar7 + 0x128)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
      }
      OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x130));
      fVar17 = DAT_00768810;
      fVar4 = g_FrameTime;
      fVar2 = (moby->rotation).z;
      fVar3 = fVar2 + 1.5707963;
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar13 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar13 = fVar3;
      }
      fVar12 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar12 = fVar5;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar13 < 0.0) {
        fVar2 = fVar13;
      }
      fVar3 = fVar12 * fVar12;
      fVar5 = fVar2 * fVar2;
      fVar15 = fVar3 * fVar3 * fVar12;
      fVar13 = fVar5 * fVar5 * fVar2;
      fVar16 = fVar3 * fVar15;
      *(undefined4 *)(puVar9 + 0x19) = 0;
      fVar14 = fVar5 * fVar13;
      *(float *)((int)puVar9 + 0xc4) =
           fVar17 * fVar4 *
           (fVar3 * fVar16 * 2.601887e-06 +
           fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar3 * fVar12 * -0.16666657 + fVar12);
      *(float *)(puVar9 + 0x18) =
           fVar17 * fVar4 *
           (fVar5 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar5 * fVar2 * -0.16666657 + fVar2);
      MB_MoveAndCollide(dVar28,0x3fe0000000000000,dVar28,lVar19,uVar18 - 0xd0);
      if (*(int *)((int)pvVar6 + 0x104) != 2) {
        M1236_00219280(lVar19,moby->group);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      if (*(int *)((int)pvVar6 + 0x104) != 2) {
        M1236_00219280(lVar19,moby->group);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\0') {
      *(f32 *)((int)pvVar6 + 0x110) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x114) = (moby->pos).y;
      *(f32 *)((int)pvVar6 + 0x118) = (moby->pos).z;
      *(f32 *)((int)pvVar6 + 0x11c) = (moby->pos).w;
      fVar2 = (moby->pos).z;
      uVar1 = moby->animationId;
      moby->state = (char)(ZERO_MASK(*(int *)((int)pvVar6 + 0x124))) + '\x02';
      (moby->pos).z = fVar2 + 0.5;
      if (uVar1 != '\x01') {
        puVar9[0x29] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar9 + 0x14c));
      }
    }
  }
  return;
}


