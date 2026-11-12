// game/update/moby808.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x46a680-0x46c32c
#include "game/update/moby808.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby722.h"
#include "game/update/moby849.h"

// 0x046a680 (0x58 bytes)
void M808_0046a680(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x05';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}


// 0x046a6d8 (0x58 bytes)
void M808_0046a6d8(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x046a730 (0x58 bytes)
void M808_0046a730(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x046a788 (0x38 bytes)
void M808_0046a788(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}


// 0x046a7c0 (0x40 bytes)
longlong M808_0046a7c0(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x046a800 (0x14 bytes)
void M808_0046a800(void)

{
  DAT_008775f8 = 0x10000;
  return;
}


// 0x046a830 (0x640 bytes)
// inlined: FastAtan2 @0x46ab04
void M808_0046a830(MobyInstance *param_1)

{
  u8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  MobyInstance *pMVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0xd0;
  puVar14 = (ulonglong *)lVar21;
  *puVar14 = uVar18;
  puVar14[0x1c] = in_LR;
  puVar14[0x19] = in_f31;
  puVar14[0x18] = unaff_r31;
  uVar1 = param_1->state;
  puVar14[0x17] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar27 = ZEXT48(pvVar8);
  puVar14[0x16] = unaff_r29;
  puVar14[0x15] = unaff_r28;
  if (uVar1 != '\0') {
    dVar32 = 0.0;
    *(undefined4 *)((int)puVar14 + 0x74) = 0;
    iVar19 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar19,uVar27 + 0x20,0,puVar14 + 0xe,(int)puVar14 + 0x74,0,4);
    if (((*(int *)(puVar14 + 0xe) != 1) && (param_1->state != '\b')) &&
       (*(int *)((int)puVar14 + 0x74) != 0)) {
      fVar4 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar14 + 0x74);
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
      *(float *)((int)pvVar8 + 0x20) = fVar4;
      fVar3 = g_FrameTimeSq;
      fVar5 = DAT_00877620 * g_FrameTimeSq;
      *(undefined4 *)((int)pvVar8 + 0x90) = 0x200;
      *(float *)((int)pvVar8 + 0x80) = fVar5;
      *(float *)((int)pvVar8 + 0x84) = DAT_00877624 * fVar3;
      fVar5 = g_FrameTime;
      *(float *)((int)pvVar8 + 0x88) = DAT_00877628 * g_FrameTime;
      fVar3 = DAT_0087762c;
      *(undefined1 *)((int)pvVar8 + 0xad) = 0;
      *(float *)((int)pvVar8 + 0x8c) = fVar3 * fVar5;
      *(float *)((int)pvVar8 + 0xbc) = fVar5 * 2.0;
      if (dVar32 < (double)fVar4) {
        *(undefined4 *)((int)pvVar8 + 0x94) = 9;
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar14 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar14 + 0x3c) = uVar2;
        MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar18 - 0x54,uVar27 + 0x88,uVar27 + 0x8c)
        ;
        uVar9 = *(uint *)(iVar19 + 0x10);
        uVar10 = *(uint *)(iVar19 + 0x14);
        dVar30 = ABS((double)*(float *)(iVar19 + 0x10));
        dVar29 = ABS((double)*(float *)(iVar19 + 0x14));
        *(float *)(puVar14 + 0x10) = (float)(dVar30 - dVar29);
        uVar22 = (ulonglong)(uVar9 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(uVar10 >> 0x1d) & 4;
        uVar24 = uVar22 << 2;
        dVar31 = dVar30;
        if ((double)*(float *)(puVar14 + 0x10) - dVar32 < 0.0) {
          dVar31 = dVar29;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar24);
        if ((double)*(float *)(puVar14 + 0x10) - dVar32 < 0.0) {
          dVar29 = dVar30;
        }
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar32 < dVar31) {
          lVar20 = uVar18 - 0xc0;
          lVar26 = uVar18 - 0x3c;
          lVar23 = uVar18 - 0x4c;
          lVar28 = 2;
          fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
          fVar15 = fVar3 * fVar3;
          *(float *)(puVar14 + 0x12) = fVar3;
          *(float *)(puVar14 + 0x11) = fVar3;
          *(float *)((int)puVar14 + 0x8c) = fVar3;
          *(float *)((int)puVar14 + 0x84) = fVar3;
          fVar3 = fVar15 * fVar15;
          *(float *)(puVar14 + 0x11) = *(float *)(puVar14 + 0x11) * fVar15;
          *(float *)((int)puVar14 + 0x8c) = *(float *)((int)puVar14 + 0x8c) * fVar3;
          *(float *)(puVar14 + 0x12) = *(float *)(puVar14 + 0x12) * fVar3 * fVar15;
          do {
            *(float *)((int)lVar20 + 0x84) = *(float *)((int)lVar20 + 0x74) * fVar3 * fVar3;
            iVar19 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar18 - 0x4c;
          uVar24 = ZEXT48(&DAT_007358e0);
          lVar20 = lVar21;
          lVar23 = lVar26;
          do {
            pfVar25 = (float *)uVar24;
            fVar3 = pfVar25[1];
            uVar24 = uVar24 + 8;
            *(float *)((int)lVar20 + 0x84) = *(float *)((int)lVar20 + 0x84) * *pfVar25;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar20 = 2;
          do {
            iVar19 = (int)lVar21;
            iVar16 = (int)lVar26;
            lVar21 = lVar21 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x84)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar5);
        }
        MB_StartKick(dVar32,param_1,uVar27 + 0x70,uVar24,0xb,1,0);
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        param_1->state = '\a';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        auVar33 = loadVectorLeftIndexed(0xc,0x46a818);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = vectorSplatHalfWord(auVar33,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar33,0x26,uVar27);
        *(undefined2 *)((int)pvVar8 + 0x26) = uVar13;
        MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
      }
      else {
        MVar7 = param_1->modeBits;
        *(undefined4 *)((int)pvVar8 + 0x94) = 0x29;
        param_1->modeBits =
             MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar14 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar14 + 0x3c) = uVar2;
        MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar18 - 0x58,uVar27 + 0x88,uVar27 + 0x8c)
        ;
        MB_StartKick((double)*(float *)(puVar14 + 0xf),param_1,uVar27 + 0x70);
        param_1->collision = (ushort *)0x0;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40e00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41600000;
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar27 + 0x60);
    if (param_1->state == '\x01') {
      pSVar12 = Splines[*(int *)((int)pvVar8 + 0x134)];
      MB_getTargetInArea
                (0x4050000000000000,param_1,uVar27 + 0xd0,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
    }
    else {
      pSVar12 = Splines[*(int *)((int)pvVar8 + 0x130)];
      MB_getTargetInArea
                (0x4038000000000000,param_1,uVar27 + 0xd0,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
    }
    pMVar17 = g_heroMobyPtr;
    pMVar11 = *(MobyInstance **)((int)pvVar8 + 0x110);
    if (*(MobyInstance **)((int)pvVar8 + 0x110) == (MobyInstance *)0x0) {
      *(float *)((int)pvVar8 + 0xd0) = g_heroPosition.x;
      fVar4 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar8 + 0x110) = pMVar17;
      *(float *)((int)pvVar8 + 0xd4) = fVar4;
      *(float *)((int)pvVar8 + 0xd8) = g_heroPosition.z;
      *(float *)((int)pvVar8 + 0xdc) = g_heroPosition.w;
      pMVar11 = pMVar17;
    }
    if (-1 < *(int *)((int)pvVar8 + 0x13c)) {
      pMVar17 = g_MobyInstance + *(int *)((int)pvVar8 + 0x13c);
      if (((pMVar17 == (MobyInstance *)0x0) || (pMVar17->state == 0xfe)) || (pMVar17->state == 0xfd)
         ) {
        *(undefined4 *)((int)pvVar8 + 0x13c) = 0xffffffff;
      }
      else {
        fVar4 = (param_1->pos).y;
        fVar3 = fVar4 - (pMVar17->pos).y;
        fVar4 = fVar4 - (pMVar11->pos).y;
        fVar5 = (param_1->pos).x;
        fVar15 = fVar5 - (pMVar17->pos).x;
        fVar5 = fVar5 - (pMVar11->pos).x;
        if (SQRT(fVar15 * fVar15 + fVar3 * fVar3) < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
          *(MobyInstance **)((int)pvVar8 + 0x110) = pMVar17;
          *(f32 *)((int)pvVar8 + 0xd0) = (pMVar17->pos).x;
          *(f32 *)((int)pvVar8 + 0xd4) = (pMVar17->pos).y;
          *(f32 *)((int)pvVar8 + 0xd8) = (pMVar17->pos).z;
          fVar6 = (pMVar17->pos).w;
          *(undefined4 *)((int)pvVar8 + 0x114) = 1;
          *(f32 *)((int)pvVar8 + 0xdc) = fVar6;
        }
      }
    }
  }
  return;
}


// 0x046aec0 (0x146c bytes)
// inlined: FastAtan2 @0x46b180, FastAtan2 @0x46b4a8, FastAtan2 @0x46b708, FastAtan2 @0x46bba4, FastAtan2 @0x46bd4c, FastAtan2 @0x46c034
/* Moby 808 */

void UpdateMoby_808(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  void *pvVar14;
  Spline *pSVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  int iVar22;
  Vec4 *pVVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar29;
  longlong lVar28;
  longlong lVar30;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar27 = uVar21 - 0x210;
  puVar17 = (ulonglong *)lVar27;
  *puVar17 = uVar21;
  puVar17[0x44] = in_LR;
  puVar17[0x3d] = in_f27;
  puVar17[0x3e] = in_f28;
  puVar17[0x3f] = in_f29;
  puVar17[0x40] = in_f30;
  puVar17[0x41] = in_f31;
  puVar17[0x3c] = unaff_r31;
  puVar17[0x3b] = unaff_r30;
  puVar17[0x3a] = unaff_r29;
  puVar17[0x39] = unaff_r28;
  puVar17[0x38] = unaff_r27;
  pvVar14 = moby->pVar;
  M808_0046a830();
  bVar1 = moby->state;
  iVar22 = *(int *)((int)pvVar14 + 0x110);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      *(f32 *)((int)pvVar14 + 0x120) = (moby->pos).x;
      *(f32 *)((int)pvVar14 + 0x124) = (moby->pos).y;
      *(f32 *)((int)pvVar14 + 0x128) = (moby->pos).z;
      *(f32 *)((int)pvVar14 + 300) = (moby->pos).w;
      iVar22 = MB_randInt(2);
      if (iVar22 != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      if (*(int *)((int)pvVar14 + 0x138) < 0) {
        moby->state = '\x03';
      }
      else if (*(int *)((int)pvVar14 + 0x134) == -1) {
        DeleteMoby(moby);
      }
      else {
        pSVar15 = Splines[*(int *)((int)pvVar14 + 0x138)];
        (moby->pos).x = pSVar15->points[0].x;
        (moby->pos).y = pSVar15->points[0].y;
        (moby->pos).z = pSVar15->points[0].z;
        fVar3 = pSVar15->points[0].w;
        moby->state = '\x01';
        (moby->pos).w = fVar3;
      }
    }
    else if (bVar1 < 2) {
      if ((*(int *)((int)pvVar14 + 0x114) != 2) &&
         (moby->state = '\x02', moby->animationId != '\x05')) {
        puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar17 + 0x1b4));
      }
    }
    else if (bVar1 < 3) {
      dVar34 = 0.0;
      *(undefined4 *)(puVar17 + 0x14) = 0;
      pVVar23 = Splines[*(int *)((int)pvVar14 + 0x138)]->points +
                Splines[*(int *)((int)pvVar14 + 0x138)]->cnt + -1;
      dVar39 = (double)pVVar23->x;
      dVar37 = (double)pVVar23->y;
      fVar3 = (float)(dVar39 - (double)(moby->pos).x);
      dVar35 = (double)pVVar23->z;
      fVar5 = (float)(dVar37 - (double)(moby->pos).y);
      fVar4 = ABS(fVar3);
      fVar6 = ABS(fVar5);
      *(float *)(puVar17 + 0x1c) = fVar3;
      *(float *)((int)puVar17 + 0xe4) = fVar5;
      *(float *)(puVar17 + 0x1d) = fVar4 - fVar6;
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xe4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar17 + 0x1c));
      if (*(float *)(puVar17 + 0x1d) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar17 + 0xe4));
      if (*(float *)(puVar17 + 0x1d) - 0.0 < 0.0) {
        fVar11 = fVar4;
      }
      dVar36 = dVar34;
      if (0.0 < fVar3) {
        lVar26 = uVar21 - 0x200;
        lVar28 = uVar21 - 0x84;
        lVar30 = uVar21 - 0x74;
        lVar31 = 2;
        fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar17 + 0x33) = fVar3;
        *(float *)(puVar17 + 0x32) = fVar3;
        *(float *)((int)puVar17 + 0x194) = fVar3;
        *(float *)((int)puVar17 + 0x18c) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar17 + 0x32) = *(float *)(puVar17 + 0x32) * fVar4;
        *(float *)((int)puVar17 + 0x194) = *(float *)((int)puVar17 + 0x194) * fVar3;
        *(float *)(puVar17 + 0x33) = *(float *)(puVar17 + 0x33) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar26 + 0x18c) = *(float *)((int)lVar26 + 0x17c) * fVar3 * fVar3;
          iVar22 = (int)lVar28;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0x84;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar3 = *pfVar29;
          fVar4 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0x18c) = *(float *)((int)lVar26 + 0x18c) * fVar3;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          iVar18 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar22 + 0x18c)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar6 + fVar5);
      }
      iVar22 = 0x470000;
      OrganicDeltAng
                ((float)dVar36,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x470000,
                 (float *)((int)pvVar14 + 0x140));
      dVar38 = (double)(float)(dVar37 - (double)(moby->pos).y);
      dVar40 = (double)(float)(dVar39 - (double)(moby->pos).x);
      dVar36 = (double)(float)(dVar35 - (double)(moby->pos).z);
      fVar3 = SQRT((float)(dVar36 * dVar36 +
                          (double)(float)(dVar40 * dVar40 + (double)(float)(dVar38 * dVar38))));
      dVar39 = (double)fVar3;
      OrganicDelt
                (fVar3,g_FrameTimeSq * 8.0,g_FrameTimeSq * 16.0,g_FrameTime * 12.0,
                 (float *)(puVar17 + 0x14),iVar22,(float *)((int)pvVar14 + 0x144));
      dVar37 = (double)(float)((double)*(float *)((int)pvVar14 + 0x144) / dVar39);
      uVar2 = moby->animationId;
      dVar35 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar35 = (double)(float)(dVar36 * dVar37);
      }
      dVar33 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar33 = (double)(float)(dVar38 * dVar37);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar32 = (double)(float)(dVar40 * dVar37);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar35 = (double)(float)(dVar36 * dVar37);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar33 = (double)(float)(dVar38 * dVar37);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar32 = (double)(float)(dVar40 * dVar37);
      }
      (moby->pos).z = (float)((double)(moby->pos).z + dVar35);
      (moby->pos).y = (float)((double)(moby->pos).y + dVar33);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar32);
      if ((dVar39 < 0.009999999776482582) && (moby->state = '\x03', uVar2 != '\0')) {
        puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 0x1b4));
      }
    }
    else {
      fVar3 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)((int)puVar17 + 0xd4) = fVar3;
      *(float *)(puVar17 + 0x1b) = fVar5;
      *(float *)((int)puVar17 + 0xdc) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x1b) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar17 + 0xd4));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar19 = ABS(*(float *)(puVar17 + 0x1b));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar19 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar26 = uVar21 - 0x200;
        lVar28 = uVar21 - 0xa4;
        lVar30 = uVar21 - 0x94;
        lVar31 = 2;
        fVar5 = (fVar19 - fVar5) / (fVar19 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x2f) = fVar5;
        *(float *)(puVar17 + 0x2e) = fVar5;
        *(float *)((int)puVar17 + 0x174) = fVar5;
        *(float *)((int)puVar17 + 0x16c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar17 + 0x2e) = *(float *)(puVar17 + 0x2e) * fVar6;
        *(float *)((int)puVar17 + 0x174) = *(float *)((int)puVar17 + 0x174) * fVar5;
        *(float *)(puVar17 + 0x2f) = *(float *)(puVar17 + 0x2f) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar26 + 0x16c) = *(float *)((int)lVar26 + 0x15c) * fVar5 * fVar5;
          iVar22 = (int)lVar28;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0xa4;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar5 = *pfVar29;
          fVar6 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0x16c) = *(float *)((int)lVar26 + 0x16c) * fVar5;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          iVar18 = (int)lVar30;
          lVar27 = lVar27 + 0x10;
          lVar30 = lVar30 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar22 + 0x16c) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar11 + fVar4;
      }
      OrganicDeltAng
                (fVar3,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x46ae70,
                 (float *)((int)pvVar14 + 0x140));
      if ((*(int *)((int)pvVar14 + 0x114) != 2) && (moby->state = '\x04', moby->animationId != '\a')
         ) {
        puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar17 + 0x1b4));
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      fVar3 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)(puVar17 + 0x19) = fVar3;
      *(float *)((int)puVar17 + 0xcc) = fVar5;
      *(float *)(puVar17 + 0x1a) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xcc) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar17 + 0x19));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar19 = ABS(*(float *)((int)puVar17 + 0xcc));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar19 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar26 = uVar21 - 0x200;
        lVar28 = uVar21 - 0xc4;
        lVar30 = uVar21 - 0xb4;
        lVar31 = 2;
        fVar5 = (fVar19 - fVar5) / (fVar19 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x2b) = fVar5;
        *(float *)(puVar17 + 0x2a) = fVar5;
        *(float *)((int)puVar17 + 0x154) = fVar5;
        *(float *)((int)puVar17 + 0x14c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar17 + 0x2a) = *(float *)(puVar17 + 0x2a) * fVar6;
        *(float *)((int)puVar17 + 0x154) = *(float *)((int)puVar17 + 0x154) * fVar5;
        *(float *)(puVar17 + 0x2b) = *(float *)(puVar17 + 0x2b) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar26 + 0x14c) = *(float *)((int)lVar26 + 0x13c) * fVar5 * fVar5;
          iVar22 = (int)lVar28;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0xc4;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar5 = *pfVar29;
          fVar6 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0x14c) = *(float *)((int)lVar26 + 0x14c) * fVar5;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          iVar18 = (int)lVar30;
          lVar27 = lVar27 + 0x10;
          lVar30 = lVar30 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar22 + 0x14c) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar11 + fVar4;
      }
      OrganicDeltAng
                (fVar3,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x46ae70,
                 (float *)((int)pvVar14 + 0x140));
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined4 *)((int)pvVar14 + 0x148) = 0;
        moby->state = '\x05';
        if (moby->animationId != '\b') {
          puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,8,0,*(undefined4 *)((int)puVar17 + 0x1b4));
        }
      }
    }
    else if (bVar1 < 6) {
      if ((moby->field43_0x70 & 2U) != 0) {
        GetBonePosition(moby,0,uVar21 - 400);
        fVar4 = DAT_0087761c;
        fVar3 = (moby->rotation).z;
        fVar5 = fVar3 + 1.5707963;
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        fVar11 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar11 = fVar5;
        }
        fVar19 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar19 = fVar6;
        }
        fVar3 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar11 < 0.0) {
          fVar3 = fVar11;
        }
        fVar5 = fVar19 * fVar19;
        fVar6 = fVar3 * fVar3;
        fVar10 = fVar5 * fVar5 * fVar19;
        fVar11 = fVar6 * fVar6 * fVar3;
        fVar12 = fVar5 * fVar10;
        fVar20 = fVar6 * fVar11;
        *(undefined4 *)((int)puVar17 + 0x9c) = *(undefined4 *)((int)puVar17 + 0x8c);
        *(float *)((int)puVar17 + 0x94) = *(float *)((int)puVar17 + 0x84);
        *(undefined4 *)(puVar17 + 0x13) = *(undefined4 *)(puVar17 + 0x11);
        *(float *)(puVar17 + 0x12) = *(float *)(puVar17 + 0x10);
        *(float *)((int)puVar17 + 0x94) =
             (fVar5 * fVar12 * 2.601887e-06 +
             fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar5 * fVar19 * -0.16666657 + fVar19)
             * fVar4 + *(float *)((int)puVar17 + 0x84);
        *(float *)(puVar17 + 0x12) =
             (fVar6 * fVar20 * 2.601887e-06 +
             fVar20 * -0.0001980741 + fVar11 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3) *
             fVar4 + *(float *)(puVar17 + 0x10);
        dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar21 - 0x180,0);
        fVar3 = (moby->pos).z;
        dVar35 = (double)fVar3;
        fVar5 = *(float *)(puVar17 + 0x10);
        auVar41 = loadVectorLeftIndexed(0x90,lVar27);
        auVar44 = loadVectorLeftIndexed(0x84,lVar27);
        auVar42 = loadVectorLeftIndexed(0x80,lVar27);
        auVar43 = loadVectorLeftIndexed(0x94,lVar27);
        *(float *)(puVar17 + 0x13) = (float)dVar34;
        fVar6 = *(float *)((int)puVar17 + 0x84);
        fVar4 = *(float *)(puVar17 + 0x11);
        uVar7 = *(undefined4 *)((int)puVar17 + 0x9c);
        uVar8 = *(undefined4 *)((int)puVar17 + 0x8c);
        if (dVar34 < dVar35) {
          *(float *)(puVar17 + 0x13) = fVar3;
          dVar34 = dVar35;
        }
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = loadVectorLeftIndexed(0x40,0x46ae70);
        fVar20 = animationSpeed * 20.5;
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar46);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar44 = vectorSubtractFloatingPoint(auVar43,auVar44);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar42 = vectorSubtractFloatingPoint(auVar41,auVar42);
        auVar48 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar41 = loadVectorLeftIndexed(0x48,0x46ae70);
        auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        auVar43 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar46 = vectorConvertFromSignedFixedPointWord(auVar46,0);
        auVar41 = vectorReciprocalEstimateFloatingPoint(auVar46);
        fVar19 = 1.0 / (float)(longlong)fVar20;
        auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar47);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar41,auVar50,auVar48);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar46,auVar47);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar48,auVar41,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar47);
        fVar3 = (*(float *)(puVar17 + 0x12) - fVar5) * fVar19;
        fVar11 = (*(float *)((int)puVar17 + 0x94) - fVar6) * fVar19;
        auVar43 = vectorMultiplyAddFloatingPoint(auVar41,auVar43,auVar49);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar45);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar50);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xbc,
                            lVar27);
        *(undefined4 *)((int)puVar17 + 0xbc) = uVar16;
        uVar16 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xc0,
                            lVar27);
        *(undefined4 *)(puVar17 + 0x18) = uVar16;
        *(float *)((int)puVar17 + 0xc4) = ABS(fVar3) - ABS(fVar11);
        dVar35 = 0.0;
        fVar19 = (float)(dVar34 - (double)fVar4) * fVar19;
        uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)((int)puVar17 + 0xbc));
        if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
          fVar10 = ABS(fVar11);
        }
        fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar13 = ABS(*(float *)(puVar17 + 0x18));
        if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
          fVar13 = ABS(fVar3);
        }
        fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar34 = dVar35;
        if (0.0 < fVar10) {
          lVar26 = uVar21 - 0x200;
          lVar30 = uVar21 - 0xd4;
          lVar28 = uVar21 - 0xe4;
          lVar31 = 2;
          fVar10 = (fVar13 - fVar10) / (fVar13 + fVar10);
          fVar13 = fVar10 * fVar10;
          *(float *)(puVar17 + 0x27) = fVar10;
          *(float *)(puVar17 + 0x26) = fVar10;
          *(float *)((int)puVar17 + 0x134) = fVar10;
          *(float *)((int)puVar17 + 300) = fVar10;
          fVar10 = fVar13 * fVar13;
          *(float *)(puVar17 + 0x26) = *(float *)(puVar17 + 0x26) * fVar13;
          *(float *)((int)puVar17 + 0x134) = *(float *)((int)puVar17 + 0x134) * fVar10;
          *(float *)(puVar17 + 0x27) = *(float *)(puVar17 + 0x27) * fVar10 * fVar13;
          do {
            *(float *)((int)lVar26 + 300) = *(float *)((int)lVar26 + 0x11c) * fVar10 * fVar10;
            iVar22 = (int)lVar28;
            lVar28 = lVar28 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
            lVar30 = lVar30 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar30 = uVar21 - 0xe4;
          pfVar29 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar28 = lVar30;
          do {
            fVar10 = *pfVar29;
            fVar13 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar26 + 300) = *(float *)((int)lVar26 + 300) * fVar10;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar13;
            lVar28 = lVar28 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar28 = 2;
          lVar26 = lVar27;
          do {
            iVar22 = (int)lVar26;
            iVar18 = (int)lVar30;
            lVar26 = lVar26 + 0x10;
            lVar30 = lVar30 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 300)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar12 + fVar9);
        }
        *(float *)((int)puVar17 + 0xb4) = fVar19;
        fVar10 = SQRT(fVar3 * fVar3 + fVar11 * fVar11);
        fVar12 = ABS(fVar10);
        *(float *)(puVar17 + 0x16) = fVar10;
        *(float *)(puVar17 + 0x17) = fVar12 - ABS(fVar19);
        uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)(puVar17 + 0x16));
        if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
          fVar10 = ABS(fVar19);
        }
        fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar9 = ABS(*(float *)((int)puVar17 + 0xb4));
        if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
          fVar9 = fVar12;
        }
        fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        if (0.0 < fVar10) {
          lVar26 = uVar21 - 0x200;
          lVar30 = uVar21 - 0xf4;
          lVar28 = uVar21 - 0x104;
          lVar31 = 2;
          fVar10 = (fVar9 - fVar10) / (fVar9 + fVar10);
          fVar9 = fVar10 * fVar10;
          *(float *)(puVar17 + 0x23) = fVar10;
          *(float *)(puVar17 + 0x22) = fVar10;
          *(float *)((int)puVar17 + 0x114) = fVar10;
          *(float *)((int)puVar17 + 0x10c) = fVar10;
          fVar10 = fVar9 * fVar9;
          *(float *)(puVar17 + 0x22) = *(float *)(puVar17 + 0x22) * fVar9;
          *(float *)((int)puVar17 + 0x114) = *(float *)((int)puVar17 + 0x114) * fVar10;
          *(float *)(puVar17 + 0x23) = *(float *)(puVar17 + 0x23) * fVar10 * fVar9;
          do {
            *(float *)((int)lVar26 + 0x10c) = *(float *)((int)lVar26 + 0xfc) * fVar10 * fVar10;
            iVar22 = (int)lVar28;
            lVar28 = lVar28 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
            lVar30 = lVar30 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar30 = uVar21 - 0x104;
          pfVar29 = (float *)&DAT_007358e0;
          lVar26 = lVar27;
          lVar28 = lVar30;
          do {
            fVar10 = *pfVar29;
            fVar9 = pfVar29[1];
            pfVar29 = pfVar29 + 2;
            *(float *)((int)lVar26 + 0x10c) = *(float *)((int)lVar26 + 0x10c) * fVar10;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar9;
            lVar28 = lVar28 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar26 = 2;
          do {
            iVar22 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            iVar18 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0x10c)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar13 + fVar12);
        }
        *(float *)(puVar17 + 8) = fVar5;
        *(float *)(puVar17 + 9) = fVar4;
        *(float *)(puVar17 + 10) = fVar3;
        *(float *)(puVar17 + 0xb) = fVar19;
        *(float *)((int)puVar17 + 0x44) = fVar6;
        *(undefined4 *)((int)puVar17 + 0x4c) = uVar8;
        puVar17[0x36] = (longlong)(int)fVar20;
        *(float *)((int)puVar17 + 0x54) = fVar11;
        *(undefined4 *)((int)puVar17 + 0x5c) = uVar7;
        puVar17[0xe] = (longlong)*(int *)((int)puVar17 + 0x1b4);
        FUN_00434898(dVar34,dVar35,moby,(longlong)*(int *)((int)puVar17 + 0x1b4),puVar17[8],
                     puVar17[9],puVar17[10],puVar17[0xb]);
        iVar22 = *(int *)((int)pvVar14 + 0x148);
        *(int *)((int)pvVar14 + 0x148) = iVar22 + 1;
        if (iVar22 == 5) {
          moby->state = '\x06';
          iVar22 = MB_randInt(2);
          if (iVar22 == 0) {
            if (moby->animationId != '\n') {
              puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(moby,10,0,*(undefined4 *)((int)puVar17 + 0x1b4));
            }
          }
          else if (moby->animationId != '\t') {
            puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,9,0,*(undefined4 *)((int)puVar17 + 0x1b4));
          }
        }
      }
    }
    else {
      fVar3 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)((int)puVar17 + 0xa4) = fVar3;
      *(float *)(puVar17 + 0x15) = fVar5;
      *(float *)((int)puVar17 + 0xac) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xac) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x15) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar17 + 0xa4));
      if (*(float *)((int)puVar17 + 0xac) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar19 = ABS(*(float *)(puVar17 + 0x15));
      if (*(float *)((int)puVar17 + 0xac) - 0.0 < 0.0) {
        fVar19 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar26 = uVar21 - 0x200;
        lVar30 = uVar21 - 0x114;
        lVar28 = uVar21 - 0x124;
        lVar31 = 2;
        fVar5 = (fVar19 - fVar5) / (fVar19 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar17 + 0x1f) = fVar5;
        *(float *)(puVar17 + 0x1e) = fVar5;
        *(float *)((int)puVar17 + 0xf4) = fVar5;
        *(float *)((int)puVar17 + 0xec) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar17 + 0x1e) = *(float *)(puVar17 + 0x1e) * fVar6;
        *(float *)((int)puVar17 + 0xf4) = *(float *)((int)puVar17 + 0xf4) * fVar5;
        *(float *)(puVar17 + 0x1f) = *(float *)(puVar17 + 0x1f) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar26 + 0xec) = *(float *)((int)lVar26 + 0xdc) * fVar5 * fVar5;
          iVar22 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar21 - 0x124;
        pfVar29 = (float *)&DAT_007358e0;
        lVar26 = lVar27;
        lVar28 = lVar30;
        do {
          fVar5 = *pfVar29;
          fVar6 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar26 + 0xec) = *(float *)((int)lVar26 + 0xec) * fVar5;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
          lVar28 = lVar28 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        do {
          iVar22 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          iVar18 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar22 + 0xec) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar11 + fVar4;
      }
      OrganicDeltAng
                (fVar3,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x46ae70,
                 (float *)((int)pvVar14 + 0x140));
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar14 + 0x114) == 2) {
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 0x1b4));
          }
        }
        else {
          *(undefined4 *)((int)pvVar14 + 0x148) = 0;
          moby->state = '\x05';
          if (moby->animationId != '\b') {
            puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,8,0,*(undefined4 *)((int)puVar17 + 0x1b4));
          }
        }
      }
    }
  }
  else if (bVar1 < 8) {
    uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70));
    if (((uVar24 & 0x140) != 0) && (moby->state = '\x03', moby->animationId != '\0')) {
      puVar17[0x36] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 0x1b4));
    }
  }
  else if ((bVar1 < 9) &&
          (uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar14 + 0x70)),
          (uVar24 & 0x140) != 0)) {
    MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


