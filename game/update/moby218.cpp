// game/update/moby218.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2f4458-0x2f5a7c
#include "game/update/moby218.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"

// 0x02f4458 (0x14 bytes)
void M218_002f4458(void)

{
  DAT_007fee48 = 0x10000;
  return;
}


// 0x02f44c0 (0x15bc bytes)
// inlined: FastAtan2 @0x2f46a0, FastAtan2 @0x2f4888, FastAtan2 @0x2f4b80, FastAtan2 @0x2f5054, FastAtan2 @0x2f5278, FastAtan2 @0x2f54fc, FastAtan2 @0x2f56d0
/* Moby 218 */

void UpdateMoby_218(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  int *piVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  MobyInstance *victim;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  longlong lVar15;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  short sVar23;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong uVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  byte bVar26;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x260;
  puVar12 = (ulonglong *)lVar15;
  *puVar12 = uVar13;
  puVar12[0x4e] = in_LR;
  puVar12[0x44] = in_f24;
  puVar12[0x45] = in_f25;
  puVar12[0x46] = in_f26;
  puVar12[0x47] = in_f27;
  puVar12[0x48] = in_f28;
  puVar12[0x49] = in_f29;
  puVar12[0x4a] = in_f30;
  puVar12[0x4b] = in_f31;
  puVar12[0x43] = unaff_r31;
  puVar12[0x42] = unaff_r30;
  puVar12[0x41] = unaff_r29;
  puVar12[0x40] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  iVar16 = MB_damage(moby,0x10000,0);
  if (((iVar16 != 0) && (uVar1 = moby->state, uVar1 != '\x04' && uVar1 != '\x03')) &&
     ((g_heroState != WRENCH_ATTACK || (uVar1 != '\x02')))) {
    *(undefined4 *)((int)pvVar9 + 0x74) = 1;
    *(undefined4 *)((int)pvVar9 + 0x60) = 0x3c03126f;
    *(undefined4 *)((int)pvVar9 + 100) = 0x3a03126f;
    dVar28 = 0.0;
    dVar29 = dVar28;
    if (*(int *)((int)pvVar9 + 0x148) != 2) {
      dVar29 = (double)(g_FrameTime * 10.0);
    }
    *(float *)((int)pvVar9 + 0x68) = (float)dVar29;
    fVar3 = g_FrameTime * 6.0;
    sVar23 = *(short *)((int)pvVar9 + 0x142) + -1;
    *(undefined1 *)((int)pvVar9 + 0x8d) = 0;
    *(short *)((int)pvVar9 + 0x142) = sVar23;
    *(float *)((int)pvVar9 + 0x6c) = fVar3;
    if (sVar23 == 0) {
      moby->state = '\x04';
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)(puVar12 + 0x21) = fVar3;
      *(float *)((int)puVar12 + 0x10c) = fVar2;
      *(float *)(puVar12 + 0x22) = fVar4 - fVar7;
      uVar24 = (ulonglong)(*(uint *)(puVar12 + 0x21) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x10c) >> 0x1d) & 4;
      uVar20 = uVar24 << 2 | 0x735900;
      fVar3 = ABS(*(float *)(puVar12 + 0x21));
      if (*(float *)(puVar12 + 0x22) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar2 = *(float *)((int)uVar20 + 4);
      fVar5 = ABS(*(float *)((int)puVar12 + 0x10c));
      if (*(float *)(puVar12 + 0x22) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0x7c;
        lVar19 = uVar13 - 0x8c;
        lVar27 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x3c) = fVar3;
        *(float *)(puVar12 + 0x3b) = fVar3;
        *(float *)((int)puVar12 + 0x1dc) = fVar3;
        *(float *)((int)puVar12 + 0x1d4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x3b) = *(float *)(puVar12 + 0x3b) * fVar4;
        *(float *)((int)puVar12 + 0x1dc) = *(float *)((int)puVar12 + 0x1dc) * fVar3;
        *(float *)(puVar12 + 0x3c) = *(float *)(puVar12 + 0x3c) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x1d4) = *(float *)((int)lVar14 + 0x1c4) * fVar3 * fVar3;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0x8c;
        uVar20 = ZEXT48(&DAT_007358e0);
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          pfVar22 = (float *)uVar20;
          fVar3 = pfVar22[1];
          uVar20 = uVar20 + 8;
          *(float *)((int)lVar14 + 0x1d4) = *(float *)((int)lVar14 + 0x1d4) * *pfVar22;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1d4)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      MB_StartKick(dVar28,moby,uVar25 + 0x50,uVar20,3,3,0);
    }
    else {
      moby->state = '\x03';
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar12 + 0xfc) = fVar3;
      *(float *)(puVar12 + 0x20) = fVar2;
      *(float *)((int)puVar12 + 0x104) = fVar4 - fVar7;
      uVar24 = (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1d) & 4;
      uVar20 = uVar24 << 2 | 0x735900;
      fVar3 = ABS(*(float *)((int)puVar12 + 0xfc));
      if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar2 = *(float *)((int)uVar20 + 4);
      fVar5 = ABS(*(float *)(puVar12 + 0x20));
      if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0x9c;
        lVar19 = uVar13 - 0xac;
        lVar27 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x38) = fVar3;
        *(float *)(puVar12 + 0x37) = fVar3;
        *(float *)((int)puVar12 + 0x1bc) = fVar3;
        *(float *)((int)puVar12 + 0x1b4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x37) = *(float *)(puVar12 + 0x37) * fVar4;
        *(float *)((int)puVar12 + 0x1bc) = *(float *)((int)puVar12 + 0x1bc) * fVar3;
        *(float *)(puVar12 + 0x38) = *(float *)(puVar12 + 0x38) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x1b4) = *(float *)((int)lVar14 + 0x1a4) * fVar3 * fVar3;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0xac;
        uVar20 = ZEXT48(&DAT_007358e0);
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          pfVar22 = (float *)uVar20;
          fVar3 = pfVar22[1];
          uVar20 = uVar20 + 8;
          *(float *)((int)lVar14 + 0x1b4) = *(float *)((int)lVar14 + 0x1b4) * *pfVar22;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1b4)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      MB_StartKick(dVar28,moby,uVar25 + 0x50,uVar20,2,3,0);
    }
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\x04') {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x50));
    if ((uVar18 & 0x40) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x50));
    if ((uVar18 & 0x40) != 0) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(moby,0,0,3);
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x10,0x2f4470);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
      *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x02') {
    iVar16 = *(int *)((int)pvVar9 + 0x148);
    bVar26 = (iVar16 == 1) << 1;
    if (iVar16 < 1) {
      if (-1 < iVar16) {
        MB_UpdateNavMoveTurning(moby,uVar25 + 0xb0,uVar25 + 0x130,uVar13 - 0x1f0);
      }
    }
    else if (iVar16 < 2) {
      MB_UpdateNavMoveTurning(moby,uVar25 + 0xb0,&g_heroPosition,uVar13 - 0x1f0);
    }
    else if (iVar16 < 3) {
      iVar16 = *(int *)((int)pvVar9 + 0x110) + *(int *)((int)pvVar9 + 0x100) * 0x10;
      *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(iVar16 + 0x10);
      *(undefined4 *)((int)puVar12 + 0x84) = *(undefined4 *)(iVar16 + 0x14);
      *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)(iVar16 + 0x18);
      *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)(iVar16 + 0x1c);
      iVar16 = MB_UpdateNavMoveTurning(moby,uVar25 + 0xb0,uVar13 - 0x1e0,uVar13 - 0x1d0);
      if (iVar16 != 0) {
        piVar10 = *(int **)((int)pvVar9 + 0x110);
        uVar18 = *(uint *)((int)pvVar9 + 0x100);
        lVar14 = (ulonglong)uVar18 + 1;
        iVar17 = uVar18 - 1;
        uVar20 = lVar14 + (ZERO_MASK((*piVar10 - (int)lVar14)) &
                          (ulonglong)uVar18 - lVar14);
        iVar16 = (int)((uVar20 & 0xffffffff) << 4);
        iVar17 = iVar17 + (iVar17 >> 0x1f & uVar18 - iVar17);
        fVar3 = g_heroPosition.y - *(float *)((int)piVar10 + iVar16 + 0x14);
        fVar2 = g_heroPosition.x - *(float *)((int)piVar10 + iVar16 + 0x10);
        if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) <
            SQRT((g_heroPosition.x - (float)piVar10[iVar17 * 4 + 4]) *
                 (g_heroPosition.x - (float)piVar10[iVar17 * 4 + 4]) +
                 (g_heroPosition.y - (float)piVar10[iVar17 * 4 + 5]) *
                 (g_heroPosition.y - (float)piVar10[iVar17 * 4 + 5]))) {
          iVar17 = (int)uVar20;
        }
        *(int *)((int)pvVar9 + 0x100) = iVar17;
      }
    }
    fVar3 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar7 = SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
                 (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y));
    if ((*(float *)((int)pvVar9 + 0x14c) <= fVar7) || (g_heroState == TAKING_DAMAGE)) {
      if (((*(float *)((int)pvVar9 + 0x15c) < fVar7) && ((moby->field43_0x70 & 2U) != 0)) ||
         (sVar23 = *(short *)((int)pvVar9 + 0x140) + -1, *(short *)((int)pvVar9 + 0x140) = sVar23,
         sVar23 == 0)) {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          MB_SetAnimation(moby,0,0,3);
        }
        auVar41 = ZEXT416(0xffffffff);
        auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar44 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x154,uVar25);
        auVar43 = loadVectorRightIndexed(0x164,uVar25);
        auVar41 = loadVectorLeftIndexed(0x24,0x2f4470);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar42 | auVar43,
                             auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar44);
        auVar42 = vectorShiftLeftIntegerWord(auVar47,auVar47);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
        *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
      }
    }
    else {
      fVar7 = g_heroPosition.y - fVar3;
      fVar5 = ABS(g_heroPosition.x - fVar2);
      fVar4 = ABS(fVar7);
      *(float *)((int)puVar12 + 0xe4) = g_heroPosition.x - fVar2;
      *(float *)(puVar12 + 0x1d) = fVar7;
      *(float *)((int)puVar12 + 0xec) = fVar5 - fVar4;
      dVar29 = 0.0;
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)((int)puVar12 + 0xe4));
      if (*(float *)((int)puVar12 + 0xec) - 0.0 < 0.0) {
        fVar7 = fVar4;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar12 + 0x1d));
      if (*(float *)((int)puVar12 + 0xec) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      dVar28 = dVar29;
      if (0.0 < fVar7) {
        lVar14 = uVar13 - 0x250;
        lVar19 = uVar13 - 0xec;
        lVar21 = uVar13 - 0xdc;
        lVar27 = 2;
        fVar7 = (fVar6 - fVar7) / (fVar6 + fVar7);
        fVar5 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x30) = fVar7;
        *(float *)(puVar12 + 0x2f) = fVar7;
        *(float *)((int)puVar12 + 0x17c) = fVar7;
        *(float *)((int)puVar12 + 0x174) = fVar7;
        fVar7 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x2f) = *(float *)(puVar12 + 0x2f) * fVar5;
        *(float *)((int)puVar12 + 0x17c) = *(float *)((int)puVar12 + 0x17c) * fVar7;
        *(float *)(puVar12 + 0x30) = *(float *)(puVar12 + 0x30) * fVar7 * fVar5;
        do {
          *(float *)((int)lVar14 + 0x174) = *(float *)((int)lVar14 + 0x164) * fVar7 * fVar7;
          iVar16 = (int)lVar19;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar7 * fVar7;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0xec;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar7 = *pfVar22;
          fVar5 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x174) = *(float *)((int)lVar14 + 0x174) * fVar7;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar17 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x174)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar8 + fVar4);
      }
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      fVar7 = (float)(dVar28 + 1.570796251296997);
      dVar38 = -3.141592502593994;
      fVar3 = g_heroPosition.y - fVar3;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar28 = 2.601886990305502e-06;
      fVar5 = ABS(g_heroPosition.x - fVar2);
      fVar4 = ABS(fVar3);
      *(float *)(puVar12 + 0x1b) = g_heroPosition.x - fVar2;
      fVar2 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar2 = fVar7;
      }
      *(float *)(puVar12 + 0x1c) = fVar5 - fVar4;
      *(float *)((int)puVar12 + 0xdc) = fVar3;
      fVar3 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar8 = fVar3 * fVar3;
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1d) & 4;
      fVar2 = fVar8 * fVar8 * fVar3;
      fVar7 = fVar8 * fVar2;
      fVar6 = ABS(*(float *)(puVar12 + 0x1b));
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar4 = ABS(*(float *)((int)puVar12 + 0xdc));
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      *(float *)(puVar12 + 0x14) =
           (fVar8 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar2 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3) * 0.5
      ;
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar31 = dVar29;
      if (0.0 < fVar6) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0xfc;
        lVar19 = uVar13 - 0x10c;
        lVar27 = 2;
        fVar7 = (fVar4 - fVar6) / (fVar4 + fVar6);
        fVar4 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x2c) = fVar7;
        *(float *)(puVar12 + 0x2b) = fVar7;
        *(float *)((int)puVar12 + 0x15c) = fVar7;
        *(float *)((int)puVar12 + 0x154) = fVar7;
        fVar7 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x2b) = *(float *)(puVar12 + 0x2b) * fVar4;
        *(float *)((int)puVar12 + 0x15c) = *(float *)((int)puVar12 + 0x15c) * fVar7;
        *(float *)(puVar12 + 0x2c) = *(float *)(puVar12 + 0x2c) * fVar7 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x154) = *(float *)((int)lVar14 + 0x144) * fVar7 * fVar7;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar7 * fVar7;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0x10c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar7 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x154) = *(float *)((int)lVar14 + 0x154) * fVar7;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0x154)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(undefined4 *)(puVar12 + 0x15) = 0;
      victim = g_heroMobyPtr;
      dVar32 = (double)(float)(3.141592502593994 - dVar31);
      if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
        dVar32 = dVar31;
      }
      dVar30 = (double)(float)(-3.141592502593994 - dVar31);
      if ((double)(float)(-3.141592502593994 - dVar31) - dVar32 < 0.0) {
        dVar30 = dVar32;
      }
      dVar31 = (double)(float)(dVar30 * dVar30);
      dVar33 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
      dVar32 = (double)(float)(dVar31 * dVar33);
      *(float *)((int)puVar12 + 0xa4) =
           ((float)(dVar31 * dVar32) * 2.601887e-06 +
           (float)(dVar32 * -0.0001980741071747616 +
                  (double)(float)(dVar33 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar31 * dVar30) *
                                                 -0.16666656732559204 + dVar30)))) * 0.5;
      *(f32 *)(puVar12 + 0x16) = (victim->pos).x;
      *(f32 *)((int)puVar12 + 0xb4) = (victim->pos).y;
      fVar3 = (victim->pos).z;
      *(float *)(puVar12 + 0x17) = fVar3;
      *(f32 *)((int)puVar12 + 0xbc) = (victim->pos).w;
      *(float *)(puVar12 + 0x17) = fVar3 + 0.75;
      CollDamageMobyDirect
                (1.0,victim,moby,1,0x2f4470,(float *)(puVar12 + 0x16),(float *)(puVar12 + 0x14));
      fVar3 = (moby->pos).x;
      fVar7 = g_heroPosition.x - fVar3;
      fVar4 = g_heroPosition.y - (moby->pos).y;
      dVar32 = ABS((double)fVar7);
      dVar30 = ABS((double)fVar4);
      *(float *)((int)puVar12 + 0xcc) = fVar7;
      *(float *)(puVar12 + 0x1a) = fVar4;
      *(float *)((int)puVar12 + 0xd4) = (float)(dVar32 - dVar30);
      auVar41 = loadVectorLeftIndexed(0x140,uVar25);
      auVar42 = loadVectorRightIndexed(0x150,uVar25);
      auVar44 = loadVectorLeftIndexed(0x150,uVar25);
      auVar43 = loadVectorRightIndexed(0x160,uVar25);
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1d) & 4;
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar31 = ABS((double)*(float *)((int)puVar12 + 0xcc));
      if ((double)*(float *)((int)puVar12 + 0xd4) - dVar29 < 0.0) {
        dVar31 = dVar30;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)(puVar12 + 0x1a));
      if ((double)*(float *)((int)puVar12 + 0xd4) - dVar29 < 0.0) {
        dVar33 = dVar32;
      }
      dVar34 = dVar29;
      if (dVar29 < dVar31) {
        lVar14 = uVar13 - 0x250;
        lVar19 = uVar13 - 300;
        lVar21 = uVar13 - 0x11c;
        lVar27 = 2;
        fVar8 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
        fVar6 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x28) = fVar8;
        *(float *)(puVar12 + 0x27) = fVar8;
        *(float *)((int)puVar12 + 0x13c) = fVar8;
        *(float *)((int)puVar12 + 0x134) = fVar8;
        fVar8 = fVar6 * fVar6;
        *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar6;
        *(float *)((int)puVar12 + 0x13c) = *(float *)((int)puVar12 + 0x13c) * fVar8;
        *(float *)(puVar12 + 0x28) = *(float *)(puVar12 + 0x28) * fVar8 * fVar6;
        do {
          *(float *)((int)lVar14 + 0x134) = *(float *)((int)lVar14 + 0x124) * fVar8 * fVar8;
          iVar16 = (int)lVar19;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar8 * fVar8;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 300;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar8 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x134) = *(float *)((int)lVar14 + 0x134) * fVar8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        dVar31 = dVar29;
        do {
          iVar16 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar17 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0x134)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar34 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar5);
      }
      dVar31 = (double)(float)(dVar34 + dVar40);
      *(float *)(puVar12 + 0x18) = fVar7;
      *(float *)(puVar12 + 0x19) = (float)(dVar32 - dVar30);
      *(float *)((int)puVar12 + 0xc4) = fVar4;
      dVar40 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar40 = dVar31;
      }
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)(puVar12 + 0x18));
      if ((double)*(float *)(puVar12 + 0x19) - dVar29 < 0.0) {
        dVar33 = dVar30;
      }
      dVar30 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar40 < 0.0) {
        dVar30 = dVar40;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar31 = (double)(float)(dVar30 * dVar30);
      dVar40 = ABS((double)*(float *)((int)puVar12 + 0xc4));
      if ((double)*(float *)(puVar12 + 0x19) - dVar29 < 0.0) {
        dVar40 = dVar32;
      }
      dVar34 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
      fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar32 = (double)(float)(dVar31 * dVar34);
      if (dVar29 < dVar33) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0x13c;
        lVar19 = uVar13 - 0x14c;
        lVar27 = 2;
        fVar4 = (float)(dVar40 - dVar33) / (float)(dVar40 + dVar33);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x24) = fVar4;
        *(float *)(puVar12 + 0x23) = fVar4;
        *(float *)((int)puVar12 + 0x11c) = fVar4;
        *(float *)((int)puVar12 + 0x114) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar5;
        *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar4;
        *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar14 + 0x114) = *(float *)((int)lVar14 + 0x104) * fVar4 * fVar4;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0x14c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar22;
          fVar5 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x114) = *(float *)((int)lVar14 + 0x114) * fVar4;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar14 = 2;
        do {
          iVar16 = (int)lVar15;
          iVar17 = (int)lVar21;
          lVar15 = lVar15 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x114)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar7);
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar45 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = ZEXT416(0xfffffff0);
      auVar46 = ZEXT416(0xffffffff);
      auVar48 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar42 = vectorShiftRightAlgebraicWord
                          (auVar41 | auVar42,
                           auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      auVar47 = vectorShiftLeftIntegerWord(auVar48,auVar48);
      auVar41 = ZEXT416(0xffffffff);
      auVar45 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorConvertFromSignedFixedPointWord(auVar42,0);
      dVar40 = (double)(float)(dVar39 - dVar29);
      if (dVar29 - (double)(float)(dVar39 - dVar29) < 0.0) {
        dVar40 = dVar29;
      }
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      dVar39 = (double)(float)(dVar38 - dVar29);
      if ((double)(float)(dVar38 - dVar29) - dVar40 < 0.0) {
        dVar39 = dVar40;
      }
      dVar29 = (double)(float)(dVar39 * dVar39);
      *(float *)((int)pvVar9 + 0x130) =
           fVar3 + (float)((double)(float)(dVar31 * dVar32) * dVar28 +
                          (double)(float)(dVar32 * dVar35 +
                                         (double)(float)(dVar34 * dVar36 +
                                                        (double)(float)((double)(float)(dVar31 * 
                                                  dVar30) * dVar37 + dVar30))));
      dVar40 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar39));
      dVar38 = (double)(float)(dVar29 * dVar40);
      *(float *)((int)pvVar9 + 0x134) =
           (moby->pos).y +
           (float)((double)(float)(dVar29 * dVar38) * dVar28 +
                  (double)(float)(dVar38 * dVar35 +
                                 (double)(float)(dVar40 * dVar36 +
                                                (double)(float)((double)(float)(dVar29 * dVar39) *
                                                                dVar37 + dVar39))));
      *(f32 *)((int)pvVar9 + 0x138) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x13c) = (moby->pos).w;
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar44 = vectorMultiplyAddFloatingPoint(auVar44 | auVar43,auVar48,auVar46);
      auVar43 = loadVectorLeftIndexed(0x20,0x2f4470);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = vectorReciprocalEstimateFloatingPoint(auVar44);
      auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar44,auVar46);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar43,auVar48,auVar47);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar44,auVar46);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar47,auVar43,auVar45);
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar44,auVar46);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar42);
      auVar42 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                 auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
      if ((bool)(bVar26 >> 1 & 1)) {
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
        *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
      }
    }
  }
  else if (uVar1 == '\x01') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar7 = ABS(fVar2);
    *(float *)(puVar12 + 0x1e) = fVar3;
    *(float *)((int)puVar12 + 0xf4) = fVar2;
    *(float *)(puVar12 + 0x1f) = fVar4 - fVar7;
    dVar29 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar12 + 0x1e));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0xf4));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar13 - 0x250;
      lVar21 = uVar13 - 0xbc;
      lVar19 = uVar13 - 0xcc;
      lVar27 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x34) = fVar3;
      *(float *)(puVar12 + 0x33) = fVar3;
      *(float *)((int)puVar12 + 0x19c) = fVar3;
      *(float *)((int)puVar12 + 0x194) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x33) = *(float *)(puVar12 + 0x33) * fVar4;
      *(float *)((int)puVar12 + 0x19c) = *(float *)((int)puVar12 + 0x19c) * fVar3;
      *(float *)(puVar12 + 0x34) = *(float *)(puVar12 + 0x34) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0x194) = *(float *)((int)lVar14 + 0x184) * fVar3 * fVar3;
        iVar16 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar21 = uVar13 - 0xcc;
      pfVar22 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar21;
      do {
        fVar3 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar14 + 0x194) = *(float *)((int)lVar14 + 0x194) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar17 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x194)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_002f4470,
               uVar25 + 0x144);
    sVar23 = *(short *)((int)pvVar9 + 0x140);
    if (0 < sVar23) {
      sVar23 = sVar23 + -1;
      *(short *)((int)pvVar9 + 0x140) = sVar23;
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (((SQRT(fVar2 * fVar2 + fVar3 * fVar3) < *(float *)((int)pvVar9 + 0x15c)) && (sVar23 == 0))
       && (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
      *(float *)((int)pvVar9 + 0x130) = g_heroPosition.x;
      *(float *)((int)pvVar9 + 0x134) = g_heroPosition.y;
      *(float *)((int)pvVar9 + 0x138) = g_heroPosition.z;
      *(float *)((int)pvVar9 + 0x13c) = g_heroPosition.w;
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,3);
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x158,uVar25);
      auVar43 = loadVectorRightIndexed(0x168,uVar25);
      auVar41 = loadVectorLeftIndexed(0x24,0x2f4470);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar42 | auVar43,
                           auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar44);
      auVar42 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
      *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar9 + 0x148) == 2) {
      InitFollower((PathFollower *)((int)pvVar9 + 0x100));
    }
    moby->state = '\x01';
    MB_InitDefaultParams((float *)((int)pvVar9 + 0xb0));
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40000000;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    *(undefined4 *)((int)pvVar9 + 0xec) = 0x3d4ccccd;
    *(undefined4 *)((int)pvVar9 + 0xf0) = 0x3e99999a;
    *(undefined4 *)((int)pvVar9 + 0xf4) = 0x3e4ccccd;
    fVar3 = *(float *)((int)pvVar9 + 0x150) * g_FrameTime;
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x38d;
    *(float *)((int)pvVar9 + 0xd4) = fVar3;
    auVar41 = loadVectorLeftIndexed(0x10,0x2f4470);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
    *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
    if (moby->animationId != '\0') {
      MB_SetAnimation(moby,0,0,3);
    }
  }
  return;
}


