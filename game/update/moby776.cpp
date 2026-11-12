// game/update/moby776.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4565b8-0x458898
#include <math.h>
#include "game/update/moby776.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x04565b8 (0x98 bytes)
void M776_004565b8(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 in_r0;
  ushort *puVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    auVar4 = loadVectorLeftIndexed(in_r0,0x4565b0);
    puVar3 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    do {
      auVar5 = loadVectorLeftIndexed(0x388c,0x870000);
      auVar6 = ZEXT416(0xffffffff);
      auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar5,0);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar5 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar6 = vectorAddFloatingPoint
                         (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar5);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xff;
      cVar2 = storeVectorElementByteIndexed
                        (auVar6 | auVar6 << 8 | auVar6 << 0x10 | auVar6 << 0x18 | auVar6 << 0x20 |
                         auVar6 << 0x28 | auVar6 << 0x30 | auVar6 << 0x38 | auVar6 << 0x40 |
                         auVar6 << 0x48 | auVar6 << 0x50 | auVar6 << 0x58 | auVar6 << 0x60 |
                         auVar6 << 0x68 | auVar6 << 0x70 | auVar6 << 0x78,0xbc,
                         ZEXT48(g_MobyInstance + (*puVar3 & 0x7fff)));
      g_MobyInstance[*puVar3 & 0x7fff].setByGroup = cVar2;
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0456650 (0x60 bytes)
void M776_00456650(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        g_MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x04566e8 (0x88c bytes)
// inlined: FastAtan2 @0x456950, FastAtan2 @0x456b00
void M776_004566e8(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  float fVar14;
  undefined4 uVar17;
  float *pfVar18;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar16 = uVar25 - 0x100;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar25;
  puVar13[0x22] = in_LR;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r30;
  puVar13[0x1e] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar26 = ZEXT48(pvVar6);
  iVar19 = *(int *)((int)pvVar6 + 0x38);
  puVar13[0x1c] = unaff_r29;
  if (iVar19 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,240.0);
    uVar17 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x184) = uVar17;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  FastDecTimerS32(uVar26 + 0x184);
  if (param_1->state != '\x11') {
    pfVar18 = (float *)MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,pfVar18,uVar26 + 0x20,5,puVar13 + 0xe,0,0,4);
    if (pfVar18 != (float *)0x0) {
      uVar10 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar18[0xb] >> 0x1f;
      fVar2 = pfVar18[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar18[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar10)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        auVar32 = loadVectorLeftIndexed(0x20,0x4566b0);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar32,0x26,uVar26);
        *(undefined2 *)((int)pvVar6 + 0x26) = uVar12;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
      }
      else {
        MVar5 = param_1->modeBits;
        dVar28 = 0.0;
        *(undefined4 *)((int)pvVar6 + 0x20) = 0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (param_1->animationId != '\f') {
          puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(param_1,0xc,0,*(undefined4 *)((int)puVar13 + 0xcc));
        }
        param_1->state = '\x11';
        fVar2 = g_FrameTimeSq * 26.0;
        *(undefined4 *)((int)pvVar6 + 0x74) = 0x3a03126f;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 3;
        *(undefined4 *)((int)pvVar6 + 0x84) = 9;
        *(float *)((int)pvVar6 + 0x70) = fVar2;
        fVar2 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x78) = g_FrameTime * 7.0;
        *(float *)((int)pvVar6 + 0x7c) = fVar2 * 10.0;
        if (((uint)pfVar18[0xc] & 1) == 0) {
          fVar2 = (param_1->pos).x - *pfVar18;
          fVar7 = (param_1->pos).y - pfVar18[1];
          dVar31 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar7);
          *(float *)((int)puVar13 + 0x74) = fVar2;
          *(float *)(puVar13 + 0xf) = fVar7;
          *(float *)((int)puVar13 + 0x7c) = (float)(dVar31 - dVar30);
          uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1d) & 4;
          uVar23 = uVar20 << 2;
          dVar29 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar23);
          dVar30 = ABS((double)*(float *)(puVar13 + 0xf));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar30 = dVar31;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar29) {
            lVar15 = uVar25 - 0xf0;
            lVar24 = uVar25 - 0x6c;
            lVar21 = uVar25 - 0x7c;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x12) = fVar3;
            *(float *)(puVar13 + 0x11) = fVar3;
            *(float *)((int)puVar13 + 0x8c) = fVar3;
            *(float *)((int)puVar13 + 0x84) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x11) = *(float *)(puVar13 + 0x11) * fVar4;
            *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar3;
            *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar15 + 0x84) = *(float *)((int)lVar15 + 0x74) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 4;
            uVar25 = uVar25 - 0x7c;
            pfVar18 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            uVar23 = uVar25;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar15 + 0x84) = *(float *)((int)lVar15 + 0x84) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar4;
              uVar23 = uVar23 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            lVar15 = 2;
            do {
              iVar19 = (int)lVar16;
              iVar8 = (int)uVar25;
              lVar16 = lVar16 + 0x10;
              uVar25 = uVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0x84)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        else {
          fVar2 = pfVar18[4];
          fVar7 = pfVar18[5];
          dVar30 = ABS((double)pfVar18[4]);
          dVar29 = ABS((double)pfVar18[5]);
          uVar23 = ZEXT48(&g_atanQuadrantTable);
          *(float *)(puVar13 + 0x10) = (float)(dVar30 - dVar29);
          uVar20 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          dVar31 = dVar30;
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar15 = uVar25 - 0xf0;
            lVar24 = uVar25 - 0x4c;
            lVar21 = uVar25 - 0x5c;
            lVar27 = 2;
            fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x16) = fVar3;
            *(float *)(puVar13 + 0x15) = fVar3;
            *(float *)((int)puVar13 + 0xac) = fVar3;
            *(float *)((int)puVar13 + 0xa4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar4;
            *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar3;
            *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar15 + 0xa4) = *(float *)((int)lVar15 + 0x94) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 4;
            uVar25 = uVar25 - 0x5c;
            pfVar18 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            uVar23 = uVar25;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar15 + 0xa4) = *(float *)((int)lVar15 + 0xa4) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar4;
              uVar23 = uVar23 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            lVar15 = 2;
            do {
              iVar19 = (int)lVar16;
              iVar8 = (int)uVar25;
              lVar16 = lVar16 + 0x10;
              uVar25 = uVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xa4)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        MB_StartKick(dVar28,param_1,uVar26 + 0x60,uVar23,0xc,1,0);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
        MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    puVar22 = &DAT_004566b0;
    fVar2 = 42.0;
  }
  else if (*(int *)((int)pvVar6 + 0x184) == 0) {
    puVar22 = (undefined4 *)(uint)param_1->state;
    if (param_1->state == 1) {
      fVar2 = *(float *)((int)pvVar6 + 0x188);
    }
    else {
      fVar2 = *(float *)((int)pvVar6 + 0x178);
    }
  }
  else {
    puVar22 = &DAT_004566b0;
    fVar2 = *(float *)((int)pvVar6 + 0x178) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x180) = fVar2;
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    iVar19 = MB_getTarget(param_1,puVar22,uVar26 + 0xc0);
    if (iVar19 != 2) {
      iVar8 = *(int *)((int)pvVar6 + 0x194);
      fVar2 = g_heroPosition.y - Cuboids[iVar8].pos.y;
      fVar7 = g_heroPosition.x - Cuboids[iVar8].pos.x;
      fVar3 = g_heroPosition.z - Cuboids[iVar8].pos.z;
      fVar14 = Cuboids[iVar8].imatrix.v2.x * fVar3 +
               Cuboids[iVar8].imatrix.v0.x * fVar7 + Cuboids[iVar8].imatrix.v1.x * fVar2;
      fVar4 = Cuboids[iVar8].imatrix.v2.y * fVar3 +
              Cuboids[iVar8].imatrix.v0.y * fVar7 + Cuboids[iVar8].imatrix.v1.y * fVar2;
      fVar2 = Cuboids[iVar8].imatrix.v2.z * fVar3 +
              Cuboids[iVar8].imatrix.v0.z * fVar7 + Cuboids[iVar8].imatrix.v1.z * fVar2;
      if (((((fVar14 <= -1.0) || (0.0 <= fVar14)) || (fVar4 <= -1.0)) ||
          ((1.0 <= fVar4 || (fVar2 <= -1.0)))) || (1.0 <= fVar2)) {
        *(undefined4 *)((int)pvVar6 + 0x104) = 2;
      }
    }
  }
  else {
    bVar1 = param_1->state == '\x01';
    if ((bVar1) && (-1 < *(int *)((int)pvVar6 + 0x18c))) {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x18c)];
      iVar19 = MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
    else if ((bVar1) || (*(int *)((int)pvVar6 + 0x17c) < 0)) {
      iVar19 = MB_getTarget(param_1,puVar22,uVar26 + 0xc0);
    }
    else {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x17c)];
      iVar19 = MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
  }
  if ((iVar19 != 2) &&
     ((fVar2 = *(float *)((int)pvVar6 + 0x134) - *(float *)((int)pvVar6 + 0xc4),
      fVar7 = *(float *)((int)pvVar6 + 0x130) - *(float *)((int)pvVar6 + 0xc0),
      *(float *)((int)pvVar6 + 0x180) < SQRT(fVar7 * fVar7 + fVar2 * fVar2) ||
      (param_1->enabled == '\0')))) {
    *(undefined4 *)((int)pvVar6 + 0x104) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x100) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x100) = g_heroMobyPtr;
  }
  return;
}


// 0x0456fe0 (0x18b8 bytes)
/* Moby 776 */

void UpdateMoby_776(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  u8 uVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  f32 fVar9;
  undefined4 uVar10;
  MobyModeBit MVar11;
  void *pvVar12;
  Spline *pSVar13;
  Cuboid *pCVar14;
  float fVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  int unused1;
  int in_r5;
  int iVar20;
  ulonglong uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  float fVar33;
  GPiece<16> auStack_110;
  GPiece<64> auStack_100;
  GPiece<48> local_c0;
  float local_90;
  float local_8c;
  longlong local_88;
  
  lVar16 = (longlong)(int)moby;
  pvVar12 = moby->pVar;
  uVar21 = ZEXT48(pvVar12);
  M776_004566e8();
  dVar25 = 1.0;
  iVar18 = *(int *)((int)pvVar12 + 0x100);
  moby->unk58 = 1.0;
  dVar24 = 0.5;
  MB_RegisterLameShadow(0.5,moby);
  bVar3 = moby->state;
  bVar4 = moby->animationId;
  if (bVar3 < 9) {
    if (bVar3 < 4) {
      if (bVar3 == 0) {
        *(undefined4 *)((int)pvVar12 + 0x30) = 0x3e800000;
        *(undefined4 *)((int)pvVar12 + 0x20) = 0x3f800000;
        *(undefined1 *)((int)pvVar12 + 0x28) = 0;
        *(undefined1 *)((int)pvVar12 + 0x29) = 1;
        *(undefined2 *)((int)pvVar12 + 0x24) = 1;
        fVar6 = (moby->pos).x;
        MVar11 = moby->modeBits;
        *(f32 *)((int)pvVar12 + 0x130) = fVar6;
        fVar7 = (moby->pos).y;
        *(f32 *)((int)pvVar12 + 0x134) = fVar7;
        fVar8 = (moby->pos).z;
        moby->modeBits = MVar11 | CAN_BE_AUTO_TARGETED;
        *(f32 *)((int)pvVar12 + 0x138) = fVar8;
        fVar9 = (moby->pos).w;
        iVar18 = *(int *)((int)pvVar12 + 0x174);
        *(f32 *)((int)pvVar12 + 0x13c) = fVar9;
        *(f32 *)((int)pvVar12 + 0x140) = fVar6;
        *(f32 *)((int)pvVar12 + 0x144) = fVar7;
        *(f32 *)((int)pvVar12 + 0x148) = fVar8;
        *(f32 *)((int)pvVar12 + 0x14c) = fVar9;
        if (iVar18 < 1) {
          if (-1 < iVar18) {
            moby->state = '\x06';
            uVar5 = moby->animationId;
            (moby->pos).z = (moby->pos).z + 2.0;
            if (uVar5 != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else if (iVar18 < 2) {
          moby->state = '\x01';
        }
        else if (iVar18 < 3) {
          moby->state = '\r';
          uVar5 = moby->animationId;
          (moby->pos).z = Cuboids[*(int *)((int)pvVar12 + 0x194)].pos.z;
          if (uVar5 != '\x05') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar3 < 2) {
        if (((*(int *)((int)pvVar12 + 0x104) != 2) || (*(int *)((int)pvVar12 + 0x174) == 0)) &&
           (moby->state = '\x02', bVar4 != 1)) {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else if (bVar3 < 3) {
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\x03';
          *(undefined4 *)((int)pvVar12 + 300) = 0;
          *(undefined4 *)((int)pvVar12 + 0x128) = 0;
          *(undefined4 *)((int)pvVar12 + 0x124) = 0;
          *(undefined4 *)((int)pvVar12 + 0x120) = 0;
          if (moby->animationId != '\x05') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        moby->unk58 = 4.0;
        fVar33 = OrganicDelt
                           (*(float *)((int)pvVar12 + 0x138) + 2.0,g_FrameTimeSq * 18.0,
                            g_FrameTimeSq * 18.0,g_FrameTime * 6.0,&(moby->pos).z,0x720000,
                            (float *)((int)pvVar12 + 0x128));
        if (fVar33 == 0.0) {
          moby->state = ((byte)(ZERO_MASK(*(int *)((int)pvVar12 + 0x174))) & 2) + 4
          ;
        }
      }
    }
    else if (bVar3 < 6) {
      if (bVar3 < 5) {
        moby->unk58 = 4.0;
        iVar18 = *(int *)((int)pvVar12 + 0x158);
        pSVar13 = Splines[*(int *)((int)pvVar12 + 0x150)];
        dVar29 = (double)pSVar13->points[iVar18].y;
        dVar30 = (double)pSVar13->points[iVar18].x;
        fVar33 = (float)(dVar29 - (double)(moby->pos).y);
        dVar28 = (double)pSVar13->points[iVar18].z;
        dVar27 = (double)pSVar13->points[iVar18].w;
        local_90 = SQRT(*(float *)((int)pvVar12 + 0x128) * *(float *)((int)pvVar12 + 0x128) +
                        *(float *)((int)pvVar12 + 0x120) * *(float *)((int)pvVar12 + 0x120) +
                        *(float *)((int)pvVar12 + 0x124) * *(float *)((int)pvVar12 + 0x124));
        fVar1 = (float)(dVar30 - (double)(moby->pos).x);
        fVar2 = (float)(dVar28 - (double)(moby->pos).z);
        dVar26 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar33 * fVar33);
        uVar23 = 0;
        local_8c = 0.0;
        dVar22 = (double)FUN_005e8338();
        OrganicDeltAng
                  ((float)dVar22,g_FrameTimeSq * 25.132742,g_FrameTimeSq * 25.132742,
                   g_FrameTime * 50.265484,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar12 + 0x170));
        dVar22 = (double)FUN_005e8338((double)(float)(dVar30 - (double)(moby->pos).x),
                                      (double)(float)(dVar29 - (double)(moby->pos).y));
        dVar22 = (double)FastSubRots((float)dVar22,(moby->rotation).z);
        if (0.7853981852531433 <= dVar22) {
          *(undefined4 *)((int)pvVar12 + 300) = 0;
          *(undefined4 *)((int)pvVar12 + 0x128) = 0;
          *(undefined4 *)((int)pvVar12 + 0x124) = 0;
          *(undefined4 *)((int)pvVar12 + 0x120) = 0;
        }
        else {
          OrganicDelt
                    ((float)dVar26,g_FrameTimeSq * 20.0,g_FrameTimeSq * 20.0,
                     g_FrameTime * 20.0,&local_8c,0x720000,&local_90);
          *(float *)((int)pvVar12 + 0x120) = (float)(dVar30 - (double)(moby->pos).x);
          *(float *)((int)pvVar12 + 0x124) = (float)(dVar29 - (double)(moby->pos).y);
          fVar33 = (moby->pos).z;
          *(float *)((int)pvVar12 + 300) = (float)dVar27;
          *(float *)((int)pvVar12 + 0x128) = (float)(dVar28 - (double)fVar33);
          ClampVec3Magnitude((double)local_90,(Vec4 *)((int)pvVar12 + 0x120));
        }
        MB_MoveAndCollide2(dVar24,uVar23,lVar16,uVar21 + 0x120);
        if (dVar26 < dVar25) {
          iVar18 = *(int *)((int)pvVar12 + 0x158);
          iVar20 = iVar18 + 1;
          *(int *)((int)pvVar12 + 0x158) = iVar20;
          if ((int)Splines[*(int *)((int)pvVar12 + 0x150)]->points[iVar18].w < 1) {
            if (iVar20 == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
              moby->state = '\x06';
              GetGroundZ(dVar24,lVar16 + 0x10,0);
              *(float *)((int)pvVar12 + 0x130) = g_CollOutput.ip.x;
              *(float *)((int)pvVar12 + 0x134) = g_CollOutput.ip.y;
              *(float *)((int)pvVar12 + 0x138) = g_CollOutput.ip.z;
              *(float *)((int)pvVar12 + 0x13c) = g_CollOutput.ip.w;
              *(f32 *)((int)pvVar12 + 0x140) = (moby->pos).x;
              *(f32 *)((int)pvVar12 + 0x144) = (moby->pos).y;
              *(f32 *)((int)pvVar12 + 0x148) = (moby->pos).z;
              *(f32 *)((int)pvVar12 + 0x14c) = (moby->pos).w;
            }
          }
          else {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar16,6,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
      else {
        dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
        OrganicDeltAng
                  ((float)dVar25,g_FrameTimeSq * 25.132742,g_FrameTimeSq * 25.132742,
                   g_FrameTime * 50.265484,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar12 + 0x170));
        if ((moby->field43_0x70 & 2U) != 0) {
          lVar17 = FastDoubleToInt
                             ((double)Splines[*(int *)((int)pvVar12 + 0x150)]->points
                                      [*(int *)((int)pvVar12 + 0x158) + -1].w);
          if (g_MobyInstance + *(int *)((int)pvVar12 + (int)(lVar17 << 2) + 0x15c) !=
              (MobyInstance *)0x0) {
            M776_00456650();
          }
          if (*(int *)((int)pvVar12 + 0x158) == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
            moby->state = '\x06';
            if (moby->animationId != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
            }
            GetGroundZ(dVar24,lVar16 + 0x10,0);
            *(float *)((int)pvVar12 + 0x130) = g_CollOutput.ip.x;
            *(float *)((int)pvVar12 + 0x134) = g_CollOutput.ip.y;
            *(float *)((int)pvVar12 + 0x138) = g_CollOutput.ip.z;
            *(float *)((int)pvVar12 + 0x13c) = g_CollOutput.ip.w;
            *(f32 *)((int)pvVar12 + 0x140) = (moby->pos).x;
            *(f32 *)((int)pvVar12 + 0x144) = (moby->pos).y;
            *(f32 *)((int)pvVar12 + 0x148) = (moby->pos).z;
            *(f32 *)((int)pvVar12 + 0x14c) = (moby->pos).w;
          }
          else {
            moby->state = '\x04';
            if (moby->animationId != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
    }
    else if (6 < bVar3) {
      if (bVar3 < 8) {
        iVar20 = *(int *)((int)pvVar12 + 0x104);
        dVar24 = 4.0;
        moby->unk58 = 4.0;
        if (((iVar20 == 2) ||
            (fVar33 = (moby->pos).y - *(float *)(iVar18 + 0x14),
            fVar1 = (moby->pos).x - *(float *)(iVar18 + 0x10),
            SQRT(fVar1 * fVar1 + fVar33 * fVar33) <= 3.0)) ||
           (iVar18 = FastDecTimerS8(lVar16 + 0xbc), iVar18 == 0)) {
          iVar18 = FastDecTimerS32(uVar21 + 0x198);
          if (iVar18 != 0) {
            dVar24 = (double)MB_randRangeFloat((float)dVar24,6.0);
            dVar25 = (double)MB_randRot();
            dVar22 = (double)cosf((float)dVar25);
            dVar25 = (double)FUN_005e8128(dVar25);
            dVar26 = (double)MB_randRangeFloat(1.5,2.5);
            fVar33 = (float)(dVar26 + (double)*(float *)((int)pvVar12 + 0x138));
            *(float *)((int)pvVar12 + 0x140) =
                 (float)(dVar22 * dVar24 + (double)*(float *)((int)pvVar12 + 0x130));
            *(float *)((int)pvVar12 + 0x144) =
                 (float)(dVar25 * dVar24 + (double)*(float *)((int)pvVar12 + 0x134));
            *(float *)((int)pvVar12 + 0x148) = fVar33;
            *(float *)((int)pvVar12 + 0x14c) = fVar33;
            moby->state = '\x06';
          }
        }
        else {
          if (moby->group != -1) {
            M776_004565b8(lVar16);
          }
          moby->state = '\t';
          if (moby->animationId != '\a') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        uVar31 = 0;
        DeltAng(0.0,g_FrameTime * 12.566371,&(moby->rotation).y,(uint)bVar4,
                          in_r5,0);
        uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar12 + 0x130) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar12 + 0x134) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar16);
        dVar25 = (double)cosf((moby->rotation).z);
        dVar27 = 6.0;
        *(float *)((int)pvVar12 + 0x120) = (float)((double)(g_FrameTime * 6.0) * dVar25);
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        dVar26 = (double)g_FrameTime;
        dVar25 = (double)(float)(dVar26 * dVar27);
        *(undefined4 *)((int)pvVar12 + 0x128) = 0;
        *(float *)((int)pvVar12 + 0x124) = (float)(dVar25 * dVar22);
        dVar27 = 2.0;
        dVar22 = (double)((*(float *)((int)pvVar12 + 0x138) + 2.0) - (moby->pos).z);
        if ((dVar22 <= dVar25) &&
           (dVar26 = (double)(float)(dVar26 * -6.0), dVar25 = dVar22, dVar22 < dVar26)) {
          dVar25 = dVar26;
        }
        *(float *)((int)pvVar12 + 0x128) = (float)dVar25;
        MB_MoveAndCollide2(dVar24,uVar31,lVar16,uVar21 + 0x120);
        fVar33 = (moby->pos).y - *(float *)((int)pvVar12 + 0x134);
        fVar1 = (moby->pos).x - *(float *)((int)pvVar12 + 0x130);
        if ((double)SQRT(fVar1 * fVar1 + fVar33 * fVar33) < dVar27) {
          moby->state = '\x06';
        }
      }
    }
  }
  else if (bVar3 < 0xe) {
    if (bVar3 < 0xb) {
      if (bVar3 < 10) {
        uVar23 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar16,&DAT_00456f74,uVar21 + 0x170);
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\n';
          if (moby->animationId != '\x05') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
          }
          uVar21 = MB_randInt(0xff);
          uVar10 = 0xbe860a92;
          if ((uVar21 & 1) != 0) {
            uVar10 = 0x3e860a92;
          }
          *(undefined4 *)((int)pvVar12 + 400) = uVar10;
        }
      }
      else {
        dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
        uVar23 = FastWrapRot((float)dVar25,*(float *)((int)pvVar12 + 400));
        iVar20 = (int)pvVar12 + 0x170;
        dVar25 = 6.2831854820251465;
        OrganicDeltAngSpeed
                  (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar16);
        fVar15 = g_FrameTime;
        fVar33 = (float)((double)*(float *)(iVar18 + 0x18) + dVar24);
        fVar1 = (moby->pos).z;
        fVar2 = *(float *)(iVar18 + 0x14);
        uVar10 = *(undefined4 *)(iVar18 + 0x1c);
        lVar17 = uVar21 + 0x120;
        *(float *)((int)pvVar12 + 0x120) = *(float *)(iVar18 + 0x10) - (moby->pos).x;
        if (fVar33 - fVar1 < 0.0) {
          fVar1 = -((fVar1 - fVar33) * 4.0 - fVar33);
        }
        *(float *)((int)pvVar12 + 0x124) = fVar2 - (moby->pos).y;
        fVar33 = (moby->pos).z;
        *(undefined4 *)((int)pvVar12 + 300) = uVar10;
        *(float *)((int)pvVar12 + 0x128) = fVar1 - fVar33;
        FUN_005e7f98((double)(fVar15 * 10.0),lVar17,lVar17);
        dVar22 = (double)cosf((moby->rotation).z);
        *(float *)((int)pvVar12 + 0x120) =
             (float)(dVar22 * (double)SQRT(*(float *)((int)pvVar12 + 0x120) *
                                           *(float *)((int)pvVar12 + 0x120) +
                                           *(float *)((int)pvVar12 + 0x124) *
                                           *(float *)((int)pvVar12 + 0x124)));
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        *(float *)((int)pvVar12 + 0x124) =
             (float)(dVar22 * (double)SQRT(*(float *)((int)pvVar12 + 0x120) *
                                           *(float *)((int)pvVar12 + 0x120) +
                                           *(float *)((int)pvVar12 + 0x124) *
                                           *(float *)((int)pvVar12 + 0x124)));
        MB_MoveAndCollide2(dVar24,0,lVar16);
        unused1 = (int)lVar17;
        dVar24 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar12 + 0x120) *
                                                   *(float *)((int)pvVar12 + 0x120) +
                                                   *(float *)((int)pvVar12 + 0x124) *
                                                   *(float *)((int)pvVar12 + 0x124)),
                                      (double)*(float *)((int)pvVar12 + 0x128));
        DeltAng((float)-dVar24,(float)((double)g_FrameTime * dVar25),
                          &(moby->rotation).y,unused1,iVar20,0);
        fVar33 = (moby->pos).y - *(float *)(iVar18 + 0x14);
        fVar1 = (moby->pos).x - *(float *)(iVar18 + 0x10);
        if (DAT_00873888 <= SQRT(fVar1 * fVar1 + fVar33 * fVar33)) {
          if (*(int *)((int)pvVar12 + 0x104) == 2) {
            if (moby->animationId != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 20.5));
            }
            moby->state = '\b';
          }
        }
        else {
          moby->state = '\v';
          *(undefined4 *)((int)pvVar12 + 300) = 0;
          *(undefined4 *)((int)pvVar12 + 0x128) = 0;
          *(undefined4 *)((int)pvVar12 + 0x124) = 0;
          *(undefined4 *)((int)pvVar12 + 0x120) = 0;
          if (moby->animationId != '\r') {
            local_88 = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation(lVar16,0xd,4,(int)(animationSpeed * 5.5));
          }
        }
      }
    }
    else if (bVar3 < 0xc) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\f', bVar4 != 0xe)) {
        local_88 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar16,0xe,4,(int)(animationSpeed * 5.5));
      }
    }
    else if (bVar3 < 0xd) {
      uVar23 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar16,&DAT_00720000,uVar21 + 0x170);
      cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      GetBonePosition(lVar16,0,auStack_110);
      CollMobySphere(0x3fc99999a0000000,auStack_110);
      if ((*(int *)((int)pvVar12 + 0x104) == 2) || ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->animationId != '\x05') {
          local_88 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 20.5));
        }
        moby->state = '\b';
      }
    }
    else {
      uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar12 + 0x130) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar12 + 0x134) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 0.7853982),lVar16);
      dVar25 = (double)cosf((moby->rotation).z);
      dVar26 = 4.0;
      *(float *)((int)pvVar12 + 0x120) = (float)((double)(g_FrameTime * 4.0) * dVar25);
      dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar22 = (double)g_FrameTime;
      lVar17 = ((ulonglong)*(uint *)((int)pvVar12 + 0x194) & 0x1ffffff) << 7;
      *(float *)((int)pvVar12 + 0x124) = (float)((double)(float)(dVar22 * dVar26) * dVar25);
      *(undefined4 *)((int)pvVar12 + 0x128) = 0;
      fVar33 = (float)(dVar22 * 6.0);
      fVar1 = *(float *)((int)&(Cuboids->pos).z + (int)lVar17) - (moby->pos).z;
      if ((fVar1 <= fVar33) && (fVar33 = fVar1, fVar1 < (float)(dVar22 * -6.0))) {
        fVar33 = (float)(dVar22 * -6.0);
      }
      *(float *)((int)pvVar12 + 0x128) = fVar33;
      MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120,lVar17,0x200);
      if ((*(int *)((int)pvVar12 + 0x104) != 2) &&
         (iVar18 = FastDecTimerS8(lVar16 + 0xbc), iVar18 != 0)) {
        if (moby->group != -1) {
          M776_004565b8(lVar16);
        }
        moby->state = '\x0e';
        if (moby->animationId != '\x05') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar3 < 0x10) {
    if (bVar3 < 0xf) {
      pCVar14 = Cuboids + *(int *)((int)pvVar12 + 0x194);
      if (moby->group != -1) {
        M776_004565b8(lVar16);
      }
      dVar30 = (double)((pCVar14->pos).x + (pCVar14->matrix).v0.x);
      dVar29 = (double)((pCVar14->pos).y + (pCVar14->matrix).v0.y);
      dVar28 = (double)((pCVar14->pos).z + (pCVar14->matrix).v0.z);
      uVar23 = FUN_005e8338((double)(float)(dVar30 - (double)(moby->pos).x),
                            (double)(float)(dVar29 - (double)(moby->pos).y));
      OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 3.1415927),lVar16);
      dVar22 = (double)cosf((moby->rotation).z);
      dVar27 = 4.0;
      *(float *)((int)pvVar12 + 0x120) = (float)((double)(g_FrameTime * 4.0) * dVar22);
      dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar26 = (double)g_FrameTime;
      lVar17 = ((ulonglong)*(uint *)((int)pvVar12 + 0x194) & 0x1ffffff) << 7;
      *(float *)((int)pvVar12 + 0x124) = (float)((double)(float)(dVar26 * dVar27) * dVar22);
      *(undefined4 *)((int)pvVar12 + 0x128) = 0;
      fVar1 = *(float *)((int)&(Cuboids->pos).z + (int)lVar17) - (moby->pos).z;
      fVar33 = (float)(dVar26 * 6.0);
      if ((fVar1 <= fVar33) && (fVar33 = fVar1, fVar1 < (float)(dVar26 * -6.0))) {
        fVar33 = (float)(dVar26 * -6.0);
      }
      *(float *)((int)pvVar12 + 0x128) = fVar33;
      MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120,lVar17,0x200);
      fVar33 = (float)((double)(moby->pos).y - dVar29);
      fVar1 = (float)((double)(moby->pos).x - dVar30);
      fVar2 = (float)((double)(moby->pos).z - dVar28);
      if (((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar33 * fVar33) < dVar25) &&
         (moby->state = '\x0f', moby->animationId != '\t')) {
        local_88 = (longlong)(int)(animationSpeed * 2.5);
        MB_SetAnimation(lVar16,9,0,(int)(animationSpeed * 2.5));
      }
    }
    else {
      if (moby->group != -1) {
        M776_004565b8(lVar16);
      }
      pCVar14 = Cuboids + *(int *)((int)pvVar12 + 0x194);
      dVar32 = (double)((pCVar14->pos).x - (pCVar14->matrix).v0.x);
      dVar30 = (double)((pCVar14->pos).y - (pCVar14->matrix).v0.y);
      dVar29 = (double)((pCVar14->pos).z - (pCVar14->matrix).v0.z);
      uVar23 = FUN_005e8338((double)(float)(dVar32 - (double)(moby->pos).x),
                            (double)(float)(dVar30 - (double)(moby->pos).y));
      OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar16);
      dVar22 = (double)cosf((moby->rotation).z);
      dVar28 = 6.0;
      *(float *)((int)pvVar12 + 0x120) = (float)((double)(g_FrameTime * 6.0) * dVar22);
      dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar27 = (double)g_FrameTime;
      dVar22 = (double)(float)(dVar27 * dVar28);
      *(float *)((int)pvVar12 + 0x124) = (float)(dVar22 * dVar26);
      *(undefined4 *)((int)pvVar12 + 0x128) = 0;
      dVar26 = (double)(Cuboids[*(int *)((int)pvVar12 + 0x194)].pos.z - (moby->pos).z);
      if ((dVar26 <= dVar22) &&
         (dVar27 = (double)(float)(dVar27 * -6.0), dVar22 = dVar26, dVar26 < dVar27)) {
        dVar22 = dVar27;
      }
      *(float *)((int)pvVar12 + 0x128) = (float)dVar22;
      MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120);
      GetBonePosition(lVar16,0,auStack_100);
      CollMobySphere(0x3fc99999a0000000,auStack_100,&DAT_00456f74,0,lVar16,local_c0);
      fVar33 = (float)((double)(moby->pos).y - dVar30);
      fVar1 = (float)((double)(moby->pos).x - dVar32);
      fVar2 = (float)((double)(moby->pos).z - dVar29);
      if ((((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar33 * fVar33) < dVar25) ||
          (g_heroStateType == 7)) && (moby->state = '\x10', moby->animationId != '\x05')) {
        local_88 = (longlong)(int)(animationSpeed * 2.5);
        MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 2.5));
      }
    }
  }
  else if (bVar3 < 0x11) {
    uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar12 + 0x130) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar12 + 0x134) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar23,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 0.7853982),lVar16);
    dVar25 = (double)cosf((moby->rotation).z);
    dVar26 = 4.0;
    *(float *)((int)pvVar12 + 0x120) = (float)((double)(g_FrameTime * 4.0) * dVar25);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar22 = (double)g_FrameTime;
    lVar17 = ((ulonglong)*(uint *)((int)pvVar12 + 0x194) & 0x1ffffff) << 7;
    *(float *)((int)pvVar12 + 0x124) = (float)((double)(float)(dVar22 * dVar26) * dVar25);
    *(undefined4 *)((int)pvVar12 + 0x128) = 0;
    fVar33 = (float)(dVar22 * 6.0);
    fVar1 = *(float *)((int)&(Cuboids->pos).z + (int)lVar17) - (moby->pos).z;
    if ((fVar1 <= fVar33) && (fVar33 = fVar1, fVar1 < (float)(dVar22 * -6.0))) {
      fVar33 = (float)(dVar22 * -6.0);
    }
    *(float *)((int)pvVar12 + 0x128) = fVar33;
    MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120,lVar17,0x200);
    fVar33 = (moby->pos).y - *(float *)((int)pvVar12 + 0x134);
    fVar1 = (moby->pos).x - *(float *)((int)pvVar12 + 0x130);
    if (SQRT(fVar1 * fVar1 + fVar33 * fVar33) < 2.0) {
      moby->state = '\r';
    }
  }
  else if ((bVar3 < 0x12) &&
          (uVar19 = MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60)),
          (uVar19 & 1) != 0)) {
    DeleteMoby(moby);
  }
  return;
}


