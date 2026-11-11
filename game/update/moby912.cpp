// game/update/moby912.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4ad264-0x4af340
#include "game/update/moby912.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x04ad264 (0x58 bytes)
void FUN_004ad264(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x04') {
      g_MobyInstance[*puVar2 & 0x7fff].state = '\0';
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x04ad2bc (0x4c bytes)
void FUN_004ad2bc(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    g_MobyInstance[*puVar2 & 0x7fff].state = '\x04';
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x04ad308 (0x14 bytes)
void M912_004ad308(void)

{
  DAT_008f40e8 = 0x10000;
  return;
}


// 0x04ad348 (0x540 bytes)
// inlined: FastAtan2 @0x4ad5b4
void M912_004ad348(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar14 = uVar10 - 0xd0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar10;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x17] = unaff_r30;
  puVar9[0x18] = unaff_r31;
  pvVar5 = param_1->pVar;
  uVar20 = ZEXT48(pvVar5);
  iVar12 = *(int *)((int)pvVar5 + 0x38);
  puVar9[0x16] = unaff_r29;
  puVar9[0x15] = unaff_r28;
  if (iVar12 != 0) {
    dVar22 = (double)MB_randRangeFloat(180.0,240.0);
    uVar11 = FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x1ac) = uVar11;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  FastDecTimerS32(uVar20 + 0x1ac);
  dVar22 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar12 = MB_damage(param_1,0x330000,0);
  iVar13 = MB_HandleDamage
                     (param_1,iVar12,uVar20 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\v')) {
    fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar22) {
      iVar13 = 1;
    }
    uVar11 = FastDoubleToInt(0x4088000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f400000;
    fVar1 = DAT_008f4110;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar11;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        param_1->state = '\v';
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = g_FrameTime * 8.0;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41d80000;
        *(float *)((int)pvVar5 + 0x8c) = fVar4 * 10.0;
        uVar6 = *(uint *)(iVar12 + 0x10);
        uVar7 = *(uint *)(iVar12 + 0x14);
        dVar24 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar25 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar24 - dVar25);
        uVar15 = (ulonglong)(uVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar7 >> 0x1d) & 4;
        lVar16 = uVar15 << 2;
        dVar23 = dVar24;
        if ((double)*(float *)(puVar9 + 0xf) - dVar22 < 0.0) {
          dVar23 = dVar25;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)lVar16);
        if ((double)*(float *)(puVar9 + 0xf) - dVar22 < 0.0) {
          dVar25 = dVar24;
        }
        fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        dVar24 = dVar22;
        if (dVar22 < dVar23) {
          lVar18 = uVar10 - 0xc0;
          lVar16 = uVar10 - 0x44;
          lVar17 = uVar10 - 0x54;
          lVar21 = 2;
          fVar2 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)(puVar9 + 0x11) = fVar2;
          *(float *)(puVar9 + 0x10) = fVar2;
          *(float *)((int)puVar9 + 0x84) = fVar2;
          *(float *)((int)puVar9 + 0x7c) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar3;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar2 * fVar2;
            iVar12 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = uVar10 - 0x54;
          lVar21 = 4;
          pfVar19 = (float *)&DAT_007358e0;
          lVar17 = lVar16;
          lVar18 = lVar14;
          do {
            fVar2 = *pfVar19;
            fVar3 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x7c) * fVar2;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar17 = 2;
          dVar23 = dVar22;
          do {
            iVar12 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar13 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar1);
        }
        MB_StartKick(dVar24,param_1,uVar20 + 0x70,lVar16,0x12,1,0);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar13 < 0xb) {
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
    }
    MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  if (*(int *)((int)pvVar5 + 0x1ac) == 0) {
    if (param_1->state == '\x01') {
      if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
        dVar22 = 6.0;
      }
    }
    else {
      dVar22 = (double)DAT_008f4130;
    }
  }
  else {
    dVar22 = (double)(DAT_008f4130 + 6.0);
  }
  *(float *)((int)pvVar5 + 0x1a0) = (float)dVar22;
  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x1b0)];
  iVar12 = MB_getTargetInArea
                     (param_1,uVar20 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if ((iVar12 != 2) &&
     ((fVar4 = *(float *)((int)pvVar5 + 0x174) - *(float *)((int)pvVar5 + 0x124),
      fVar1 = *(float *)((int)pvVar5 + 0x170) - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x1a0) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x04ad900 (0x1a40 bytes)
// inlined: FastAtan2 @0x4adefc, FastAtan2 @0x4ae28c, FastAtan2 @0x4ae50c, FastAtan2 @0x4ae8cc, FastAtan2 @0x4aeab8, FastAtan2 @0x4aeed0
/* Moby 912 */

void UpdateMoby_912(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  MobyInstance *victim;
  f32 fVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar21;
  int iVar22;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar20 = uVar15 - 0x250;
  puVar11 = (ulonglong *)lVar20;
  *puVar11 = uVar15;
  puVar11[0x4c] = in_LR;
  puVar11[0x48] = in_f30;
  puVar11[0x49] = in_f31;
  puVar11[0x47] = unaff_r31;
  puVar11[0x46] = unaff_r30;
  puVar11[0x45] = unaff_r29;
  puVar11[0x44] = unaff_r28;
  puVar11[0x43] = unaff_r27;
  puVar11[0x42] = unaff_r26;
  pvVar9 = moby->pVar;
  uVar28 = ZEXT48(pvVar9);
  M912_004ad348();
  victim = *(MobyInstance **)((int)pvVar9 + 0x160);
  bVar1 = moby->state;
  fVar3 = moby->pClass->gScale * DAT_008f410c;
  moby->unk58 = 0.8;
  moby->scale = fVar3;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      fVar3 = (moby->pos).y - (victim->pos).y;
      fVar2 = (moby->pos).x - (victim->pos).x;
      fVar6 = (moby->pos).z - (victim->pos).z;
      if (SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3) <= DAT_008f4120) {
        Delt(0.0,DAT_0071f418 * 20.0,(float *)((int)pvVar9 + 0xf4));
      }
      else {
        Delt(*(float *)((int)pvVar9 + 0x1a4) * g_FrameTime,DAT_0071f418 * 6.0,
                       (float *)((int)pvVar9 + 0xf4));
      }
      fVar3 = (victim->pos).x - (moby->pos).x;
      fVar2 = (victim->pos).y - (moby->pos).y;
      fVar4 = ABS(fVar3);
      fVar6 = ABS(fVar2);
      *(float *)((int)puVar11 + 300) = fVar3;
      *(float *)(puVar11 + 0x26) = fVar2;
      *(float *)((int)puVar11 + 0x134) = fVar4 - fVar6;
      dVar30 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar11 + 300) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0x134) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x26) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar11 + 300));
      if (*(float *)((int)puVar11 + 0x134) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)(puVar11 + 0x26));
      if (*(float *)((int)puVar11 + 0x134) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar35 = dVar30;
      if (0.0 < fVar3) {
        lVar19 = uVar15 - 0x240;
        lVar26 = uVar15 - 0x68;
        lVar24 = uVar15 - 0x78;
        lVar29 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar11 + 0x1e4) = fVar3;
        *(float *)((int)puVar11 + 0x1dc) = fVar3;
        *(float *)(puVar11 + 0x3c) = fVar3;
        *(float *)(puVar11 + 0x3b) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar4;
        *(float *)(puVar11 + 0x3c) = *(float *)(puVar11 + 0x3c) * fVar3;
        *(float *)((int)puVar11 + 0x1e4) = *(float *)((int)puVar11 + 0x1e4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar19 + 0x1d8) = *(float *)((int)lVar19 + 0x1c8) * fVar3 * fVar3;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar15 - 0x78;
        pfVar25 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar26;
        do {
          fVar3 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar19 + 0x1d8) = *(float *)((int)lVar19 + 0x1d8) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar24 = 2;
        lVar19 = lVar20;
        do {
          iVar22 = (int)lVar19;
          iVar12 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0x1d8)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar35,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar16,&DAT_00720000,uVar28 + 400);
      fVar3 = (moby->rotation).z;
      fVar6 = fVar3 + 1.5707963;
      fVar2 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar2 = fVar3;
      }
      fVar4 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar4 = fVar6;
      }
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
        fVar5 = fVar2;
      }
      *(undefined4 *)(puVar11 + 0xf) = 0;
      fVar3 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
        fVar3 = fVar4;
      }
      fVar6 = fVar5 * fVar5;
      fVar2 = fVar3 * fVar3;
      fVar4 = fVar6 * fVar6 * fVar5;
      fVar13 = fVar2 * fVar2 * fVar3;
      fVar7 = fVar6 * fVar4;
      fVar14 = fVar2 * fVar13;
      *(float *)((int)puVar11 + 0x74) =
           (fVar6 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * 2.0
      ;
      dVar35 = 1.0;
      *(float *)(puVar11 + 0xe) =
           (fVar2 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) *
           2.0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0xe,
                 puVar11 + 0x10);
      iVar22 = DAT_00969ea0;
      fVar3 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar4 = fVar3 - *(float *)((int)pvVar9 + 0x174);
      fVar6 = (moby->pos).z;
      fVar5 = fVar2 - *(float *)((int)pvVar9 + 0x170);
      fVar7 = fVar6 - *(float *)((int)pvVar9 + 0x178);
      if ((DAT_008f4124 < SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4)) ||
         (*(int *)((int)pvVar9 + 0x164) == 2)) {
        moby->state = '\b';
      }
      else {
        fVar4 = (victim->pos).y;
        fVar5 = (victim->pos).x;
        fVar7 = fVar3 - fVar4;
        fVar13 = fVar2 - fVar5;
        if ((SQRT(fVar13 * fVar13 + fVar7 * fVar7) < DAT_008f4120) &&
           (ABS((double)((victim->pos).z - fVar6)) < dVar35)) {
          dVar35 = 10.5;
          puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          if (iVar22 < *(int *)((int)puVar11 + 0x1fc)) {
            fVar4 = fVar4 - fVar3;
            fVar5 = fVar5 - fVar2;
            dVar33 = ABS((double)fVar4);
            dVar32 = ABS((double)fVar5);
            *(float *)(puVar11 + 0x24) = fVar5;
            *(float *)((int)puVar11 + 0x124) = fVar4;
            fVar3 = (moby->rotation).z;
            *(float *)(puVar11 + 0x25) = (float)(dVar32 - dVar33);
            uVar28 = (ulonglong)(*(uint *)(puVar11 + 0x24) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar11 + 0x25) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar11 + 0x124) >> 0x1d) & 4;
            dVar31 = ABS((double)*(float *)(puVar11 + 0x24));
            if ((double)*(float *)(puVar11 + 0x25) - dVar30 < 0.0) {
              dVar31 = dVar33;
            }
            fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
            fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
            dVar33 = ABS((double)*(float *)((int)puVar11 + 0x124));
            if ((double)*(float *)(puVar11 + 0x25) - dVar30 < 0.0) {
              dVar33 = dVar32;
            }
            if (dVar30 < dVar31) {
              lVar19 = uVar15 - 0x240;
              lVar26 = uVar15 - 0x88;
              lVar24 = uVar15 - 0x98;
              lVar29 = 2;
              fVar4 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
              fVar5 = fVar4 * fVar4;
              *(float *)((int)puVar11 + 0x1c4) = fVar4;
              *(float *)((int)puVar11 + 0x1bc) = fVar4;
              *(float *)(puVar11 + 0x38) = fVar4;
              *(float *)(puVar11 + 0x37) = fVar4;
              fVar4 = fVar5 * fVar5;
              *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar5;
              *(float *)(puVar11 + 0x38) = *(float *)(puVar11 + 0x38) * fVar4;
              *(float *)((int)puVar11 + 0x1c4) = *(float *)((int)puVar11 + 0x1c4) * fVar4 * fVar5;
              do {
                *(float *)((int)lVar19 + 0x1b8) = *(float *)((int)lVar19 + 0x1a8) * fVar4 * fVar4;
                iVar22 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar19 = lVar19 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
                lVar26 = lVar26 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar29 = 4;
              lVar26 = uVar15 - 0x98;
              pfVar25 = (float *)&DAT_007358e0;
              lVar19 = lVar20;
              lVar24 = lVar26;
              do {
                fVar4 = *pfVar25;
                fVar5 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar19 + 0x1b8) = *(float *)((int)lVar19 + 0x1b8) * fVar4;
                lVar19 = lVar19 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar19 = 2;
              do {
                iVar22 = (int)lVar20;
                iVar12 = (int)lVar26;
                lVar20 = lVar20 + 0x10;
                lVar26 = lVar26 + 0x10;
                dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x1b8)) +
                                  *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                                 *(float *)(iVar12 + 0xc));
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
              dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar2);
            }
            dVar30 = (double)FastSubRots(fVar3,(float)dVar30);
            if ((dVar30 < 0.2617993950843811) && (moby->state = '\a', moby->animationId != '\x01'))
            {
              puVar11[0x3f] = (longlong)(int)((double)animationSpeed * dVar35);
              MB_SetAnimation(lVar16,1,0,*(undefined4 *)((int)puVar11 + 0x1fc));
            }
          }
        }
      }
    }
    else if (bVar1 == 4) {
      iVar22 = FastDecTimerS32(uVar28 + 0x1a8);
      if (iVar22 != 0) {
        moby->state = '\x05';
        dVar30 = (double)MB_randRangeFloat
                                   (*(float *)((int)pvVar9 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar9 + 0x198) * -0.017453292);
        *(float *)((int)pvVar9 + 0x194) = (float)dVar30;
        if (moby->animationId != '\x16') {
          puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
        }
      }
    }
    else if (bVar1 == 3) {
      uVar17 = FUN_005e8338((double)(*(float *)((int)pvVar9 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar9 + 0x124) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar17,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar16,&DAT_004ad888,uVar28 + 400);
      if (*(int *)((int)pvVar9 + 0x164) != 2) {
        moby->state = '\x04';
        puVar11[0x3f] = (longlong)*(int *)((int)pvVar9 + 0x1b8);
        MB_randRangeFloat(0.0,(float)(longlong)puVar11[0x3f]);
        uVar21 = FastDoubleToInt();
        *(undefined4 *)((int)pvVar9 + 0x1a8) = uVar21;
      }
    }
    else if (bVar1 == 2) {
      moby->unk58 = 1.5;
      if (moby->animationId == '\x06') {
        if (*(int *)((int)pvVar9 + 0x1a8) == 0) {
          dVar30 = (double)MB_randRangeFloat(0.0,20.0);
          uVar21 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar9 + 0x1a8) = uVar21;
        }
        else {
          iVar22 = FastDecTimerS32(uVar28 + 0x1a8);
          if ((iVar22 != 0) && (moby->animationId != '\x15')) {
            uVar17 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar16,0x15,0,uVar17);
          }
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        dVar30 = (double)FUN_005e8588(lVar16 + 0x10,&g_heroPosition);
        if ((double)DAT_008f4130 <= dVar30) {
          moby->state = '\x03';
          if (moby->animationId != '\x14') {
            puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar16,0x14,0,*(undefined4 *)((int)puVar11 + 0x1fc));
          }
        }
        else {
          moby->state = '\x05';
          dVar30 = (double)MB_randRangeFloat
                                     (*(float *)((int)pvVar9 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar9 + 0x198) * -0.017453292);
          *(float *)((int)pvVar9 + 0x194) = (float)dVar30;
          if (moby->animationId != '\x16') {
            uVar17 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar16,0x16,0,uVar17);
          }
        }
      }
    }
    else if (bVar1 == 1) {
      iVar22 = *(int *)((int)pvVar9 + 0x164);
      moby->unk58 = 0.25;
      if ((iVar22 != 2) || (*(int *)((int)pvVar9 + 0x1b4) != 0)) {
        moby->state = '\x02';
        uVar21 = idol::GetAnimDuration(1);
        *(undefined4 *)((int)pvVar9 + 0x1a8) = uVar21;
      }
    }
    else if (bVar1 == 0) {
      *(undefined2 *)((int)pvVar9 + 0x24) = 0x14;
      *(undefined1 *)((int)pvVar9 + 0x28) = 3;
      MVar8 = moby->modeBits;
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x41a00000;
      moby->modeBits = MVar8 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      FUN_005e7e98(uVar28 + 0x170,lVar16 + 0x10);
      MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
      *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar9 + 0xd8) = 0x40000000;
      uVar21 = FastDoubleToInt((double)(DAT_008f410c * 1024.0));
      *(float *)((int)pvVar9 + 0xd4) = DAT_008f410c;
      fVar3 = g_FrameTime;
      *(undefined4 *)((int)pvVar9 + 0xd0) = uVar21;
      *(float *)((int)pvVar9 + 0xf4) = *(float *)((int)pvVar9 + 0x1a4) * fVar3;
      moby->state = '\x03';
      if (moby->animationId != '\x14') {
        MB_SetAnimation(lVar16,0x14,0,0);
      }
      *(float *)((int)pvVar9 + 0x1a0) = DAT_008f4130;
    }
  }
  else if (bVar1 == 0xb) {
    uVar23 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar23 & 0x40) == 0) {
      fVar10 = (moby->pos).z;
      uVar23 = (int)fVar10 >> 0x1f;
      if ((int)((uVar23 >> 1 ^ (uint)fVar10) - uVar23) < 0x40000000) {
        DeleteMoby(moby);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 10) {
    uVar23 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar23 & 0x41) == 0) {
      if ((moby->pos).z < *(float *)((int)pvVar9 + 0x178) - 0.2) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\t';
      if (moby->animationId != '\x16') {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x74,0x4ad888);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar21 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x1a8,uVar28
                         );
      *(undefined4 *)((int)pvVar9 + 0x1a8U & 0xfffffffc) = uVar21;
    }
  }
  else if (bVar1 == 9) {
    Delt(*(float *)((int)pvVar9 + 0x1a4) * 3.0 * g_FrameTime,DAT_0071f418 * 20.0
                   ,(float *)((int)pvVar9 + 0xf4));
    fVar3 = (victim->pos).x - (moby->pos).x;
    fVar2 = (victim->pos).y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar2);
    *(float *)(puVar11 + 0x21) = fVar3;
    *(float *)((int)puVar11 + 0x10c) = fVar2;
    *(float *)(puVar11 + 0x22) = fVar4 - fVar6;
    fVar2 = g_FrameTime;
    dVar30 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar11 + 0x21) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x22) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x10c) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar11 + 0x21));
    if (*(float *)(puVar11 + 0x22) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = ABS(*(float *)((int)puVar11 + 0x10c));
    if (*(float *)(puVar11 + 0x22) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar35 = dVar30;
    if (0.0 < fVar3) {
      lVar19 = uVar15 - 0x240;
      lVar26 = uVar15 - 200;
      lVar24 = uVar15 - 0xd8;
      lVar29 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x184) = fVar3;
      *(float *)((int)puVar11 + 0x17c) = fVar3;
      *(float *)(puVar11 + 0x30) = fVar3;
      *(float *)(puVar11 + 0x2f) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x17c) = *(float *)((int)puVar11 + 0x17c) * fVar5;
      *(float *)(puVar11 + 0x30) = *(float *)(puVar11 + 0x30) * fVar3;
      *(float *)((int)puVar11 + 0x184) = *(float *)((int)puVar11 + 0x184) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x168) * fVar3 * fVar3;
        iVar22 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar15 - 0xd8;
      pfVar25 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar24 = lVar26;
      do {
        fVar3 = *pfVar25;
        fVar5 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x178) * fVar3;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar24 = 2;
      lVar19 = lVar20;
      do {
        iVar22 = (int)lVar19;
        iVar12 = (int)lVar26;
        lVar19 = lVar19 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0x178)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar6 + fVar4);
    }
    OrganicDeltAngSpeed
              (dVar35,0x3fa99999a0000000,0x3fd3333340000000,(double)(fVar2 * 6.2831855),lVar16,
               &DAT_004ad888,uVar28 + 400);
    fVar3 = (victim->pos).x - (moby->pos).x;
    fVar2 = (victim->pos).y - (moby->pos).y;
    dVar31 = ABS((double)fVar3);
    dVar32 = ABS((double)fVar2);
    *(float *)((int)puVar11 + 0xfc) = fVar3;
    *(float *)(puVar11 + 0x20) = fVar2;
    dVar33 = (double)(moby->rotation).z;
    *(float *)((int)puVar11 + 0x104) = (float)(dVar31 - dVar32);
    uVar18 = (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x104) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x20) >> 0x1d) & 4;
    dVar35 = ABS((double)*(float *)((int)puVar11 + 0xfc));
    if ((double)*(float *)((int)puVar11 + 0x104) - dVar30 < 0.0) {
      dVar35 = dVar32;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar32 = ABS((double)*(float *)(puVar11 + 0x20));
    if ((double)*(float *)((int)puVar11 + 0x104) - dVar30 < 0.0) {
      dVar32 = dVar31;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (dVar30 < dVar35) {
      lVar19 = uVar15 - 0x240;
      lVar24 = uVar15 - 0xf8;
      lVar26 = uVar15 - 0xe8;
      lVar29 = 2;
      fVar6 = (float)(dVar32 - dVar35) / (float)(dVar32 + dVar35);
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar11 + 0x164) = fVar6;
      *(float *)((int)puVar11 + 0x15c) = fVar6;
      *(float *)(puVar11 + 0x2c) = fVar6;
      *(float *)(puVar11 + 0x2b) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0x15c) = *(float *)((int)puVar11 + 0x15c) * fVar4;
      *(float *)(puVar11 + 0x2c) = *(float *)(puVar11 + 0x2c) * fVar6;
      *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x148) * fVar6 * fVar6;
        iVar22 = (int)lVar24;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar15 - 0xf8;
      pfVar25 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar24 = lVar26;
      do {
        fVar6 = *pfVar25;
        fVar4 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x158) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar19 = 2;
      do {
        iVar22 = (int)lVar20;
        iVar12 = (int)lVar26;
        lVar20 = lVar20 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x158)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar3 + fVar2);
    }
    dVar35 = (double)FastWrapRot((float)dVar30,3.14159);
    fVar3 = (float)(dVar35 + 1.570796251296997);
    dVar30 = (double)(float)(3.141592502593994 - dVar35);
    if (dVar35 - (double)(float)(3.141592502593994 - dVar35) < 0.0) {
      dVar30 = dVar35;
    }
    fVar2 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar2 = fVar3;
    }
    dVar31 = (double)(float)(-3.141592502593994 - dVar35);
    if ((double)(float)(-3.141592502593994 - dVar35) - dVar30 < 0.0) {
      dVar31 = dVar30;
    }
    *(undefined4 *)(puVar11 + 0x17) = 0;
    fVar6 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
      fVar6 = fVar2;
    }
    dVar30 = (double)(float)(dVar31 * dVar31);
    fVar4 = fVar6 * fVar6;
    dVar34 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar31));
    fVar3 = fVar4 * fVar4 * fVar6;
    dVar32 = (double)(float)(dVar30 * dVar34);
    fVar2 = fVar4 * fVar3;
    *(float *)((int)puVar11 + 0xb4) =
         ((float)(dVar30 * dVar32) * 2.601887e-06 +
         (float)(dVar32 * -0.0001980741071747616 +
                (double)(float)(dVar34 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar30 * dVar31) *
                                               -0.16666656732559204 + dVar31)))) * 2.0;
    (moby->rotation).z = (float)dVar35;
    *(float *)(puVar11 + 0x16) =
         (fVar4 * fVar2 * 2.601887e-06 +
         fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x16,
               puVar11 + 0x18);
    (moby->rotation).z = (float)dVar33;
    iVar22 = FastDecTimerS32(uVar28 + 0x1a8);
    if ((iVar22 != 0) ||
       (fVar3 = (moby->pos).y - (victim->pos).y, fVar2 = (moby->pos).x - (victim->pos).x,
       fVar6 = (moby->pos).z - (victim->pos).z,
       DAT_008f4134 < SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3))) {
      moby->state = '\a';
      *(float *)((int)pvVar9 + 0xf4) = g_FrameTime * 5.0;
      uVar21 = DAT_008f4140;
      if (DAT_008f413c == 0) {
        if (moby->animationId != '\x01') {
          puVar11[0x3f] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,1,10,*(undefined4 *)((int)puVar11 + 0x1fc));
        }
      }
      else if (moby->animationId != '\x01') {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar16,1,uVar21,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
    }
  }
  else if (bVar1 == 8) {
    Delt(*(float *)((int)pvVar9 + 0x1a4) * g_FrameTime,DAT_0071f418 * 6.0,
                   (float *)((int)pvVar9 + 0xf4));
    fVar3 = *(float *)((int)pvVar9 + 0x170) - (moby->pos).x;
    fVar2 = *(float *)((int)pvVar9 + 0x174) - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar2);
    *(float *)(puVar11 + 0x1e) = fVar3;
    *(float *)((int)puVar11 + 0xf4) = fVar2;
    *(float *)(puVar11 + 0x1f) = fVar4 - fVar6;
    fVar2 = g_FrameTime;
    dVar30 = 0.0;
    uVar27 = (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1d) & 4;
    uVar18 = uVar27 << 2 | 0x735900;
    fVar3 = ABS(*(float *)(puVar11 + 0x1e));
    if (*(float *)(puVar11 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
    fVar5 = ABS(*(float *)((int)puVar11 + 0xf4));
    if (*(float *)(puVar11 + 0x1f) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)((int)uVar18 + 4);
    if (0.0 < fVar3) {
      lVar19 = uVar15 - 0x240;
      lVar24 = uVar15 - 0x118;
      lVar26 = uVar15 - 0x108;
      lVar29 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x144) = fVar3;
      *(float *)((int)puVar11 + 0x13c) = fVar3;
      *(float *)(puVar11 + 0x28) = fVar3;
      *(float *)(puVar11 + 0x27) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar5;
      *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar3;
      *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x128) * fVar3 * fVar3;
        iVar22 = (int)lVar24;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar15 - 0x118;
      uVar18 = ZEXT48(&DAT_007358e0);
      lVar19 = lVar20;
      lVar24 = lVar26;
      do {
        pfVar25 = (float *)uVar18;
        fVar3 = pfVar25[1];
        uVar18 = uVar18 + 8;
        *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x138) * *pfVar25;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar19 = 2;
      do {
        iVar22 = (int)lVar20;
        iVar12 = (int)lVar26;
        lVar20 = lVar20 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x138)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar4);
    }
    OrganicDeltAngSpeed
              (dVar30,0x3fa99999a0000000,0x3fd3333340000000,(double)(fVar2 * 6.2831855),lVar16,
               uVar18,uVar28 + 400);
    fVar3 = (moby->rotation).z;
    fVar6 = fVar3 + 1.5707963;
    fVar2 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar2 = fVar3;
    }
    fVar4 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar4 = fVar6;
    }
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    *(undefined4 *)(puVar11 + 0x1b) = 0;
    fVar3 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
      fVar3 = fVar4;
    }
    fVar6 = fVar5 * fVar5;
    fVar2 = fVar3 * fVar3;
    fVar4 = fVar6 * fVar6 * fVar5;
    fVar7 = fVar6 * fVar4;
    fVar13 = fVar2 * fVar2 * fVar3;
    fVar14 = fVar2 * fVar13;
    *(float *)((int)puVar11 + 0xd4) =
         (fVar6 * fVar7 * 2.601887e-06 +
         fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * 2.0;
    dVar30 = 1.0;
    *(float *)(puVar11 + 0x1a) =
         (fVar2 * fVar14 * 2.601887e-06 +
         fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) * 2.0
    ;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x1a,
               puVar11 + 0x1c);
    fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x174);
    fVar2 = (moby->pos).x - *(float *)((int)pvVar9 + 0x170);
    fVar6 = (moby->pos).z - *(float *)((int)pvVar9 + 0x178);
    if (dVar30 <= (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar3 * fVar3)) {
      if ((*(int *)((int)pvVar9 + 0x164) != 2) &&
         (moby->state = '\x05', moby->animationId != '\x16')) {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x14') {
        puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar16,0x14,0,*(undefined4 *)((int)puVar11 + 0x1fc));
      }
    }
  }
  else if (bVar1 == 7) {
    dVar30 = (double)BlendAnimFrame(moby);
    if ((20.0 < dVar30) && (dVar30 = (double)BlendAnimFrame(moby), dVar30 < 24.0)) {
      fVar3 = (victim->pos).x - (moby->pos).x;
      fVar2 = (victim->pos).y - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar5 = ABS(fVar2);
      *(float *)((int)puVar11 + 0x114) = fVar3;
      *(float *)(puVar11 + 0x23) = fVar2;
      fVar3 = (moby->rotation).z;
      *(float *)((int)puVar11 + 0x11c) = fVar6 - fVar5;
      fVar2 = 0.0;
      uVar23 = *(uint *)((int)puVar11 + 0x11c);
      uVar28 = (ulonglong)(*(uint *)((int)puVar11 + 0x114) >> 0x1c) & 8 |
               (ulonglong)(uVar23 >> 0x1e) & 2 | (ulonglong)(*(uint *)(puVar11 + 0x23) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar11 + 0x114));
      if (*(float *)((int)puVar11 + 0x11c) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)(puVar11 + 0x23));
      if (*(float *)((int)puVar11 + 0x11c) - 0.0 < 0.0) {
        fVar13 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar19 = uVar15 - 0x240;
        uVar23 = 2;
        lVar26 = uVar15 - 0xa8;
        lVar24 = uVar15 - 0xb8;
        lVar29 = 2;
        fVar6 = (fVar13 - fVar4) / (fVar13 + fVar4);
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x1a4) = fVar6;
        *(float *)((int)puVar11 + 0x19c) = fVar6;
        *(float *)(puVar11 + 0x34) = fVar6;
        *(float *)(puVar11 + 0x33) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x19c) = *(float *)((int)puVar11 + 0x19c) * fVar4;
        *(float *)(puVar11 + 0x34) = *(float *)(puVar11 + 0x34) * fVar6;
        *(float *)((int)puVar11 + 0x1a4) = *(float *)((int)puVar11 + 0x1a4) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x188) * fVar6 * fVar6;
          iVar22 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar26 = uVar15 - 0xb8;
        pfVar25 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x198) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar19 = 2;
        do {
          iVar22 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar12 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar22 + 0x198) + *(float *)(iVar12 + 4) +
                  *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar5;
      }
      dVar30 = (double)FastSubRots(fVar3,fVar2);
      if ((dVar30 < 0.5235987901687622) &&
         (fVar3 = (moby->pos).y - (victim->pos).y, fVar2 = (moby->pos).x - (victim->pos).x,
         SQRT(fVar2 * fVar2 + fVar3 * fVar3) < DAT_008f4120)) {
        fVar3 = (moby->rotation).z;
        fVar2 = fVar3 + 1.5707963;
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar3 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        fVar6 = fVar3 * fVar3;
        fVar13 = fVar2 * fVar2 * fVar5;
        *(undefined4 *)(puVar11 + 0x13) = 0;
        fVar4 = fVar6 * fVar6 * fVar3;
        fVar14 = fVar2 * fVar13;
        fVar7 = fVar6 * fVar4;
        *(float *)((int)puVar11 + 0x94) =
             (fVar2 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
             0.2;
        *(float *)(puVar11 + 0x12) =
             (fVar6 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3) *
             0.2;
        GetBonePosition(lVar16,0,uVar15 - 0x1b0);
        CollDamageMobyDirect
                  (1.0,victim,moby,1,uVar23,(float *)(uVar15 - 0x1b0),(float *)(puVar11 + 0x12));
        return;
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x16')) {
      puVar11[0x3f] = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar16,0x16,0,*(undefined4 *)((int)puVar11 + 0x1fc));
    }
  }
  return;
}


