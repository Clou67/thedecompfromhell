// game/update/moby1199.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1f6ee8-0x1f956c
#include <math.h>
#include "game/update/moby1199.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x01f6ee8 (0x14 bytes)
void M1199_001f6ee8(void)

{
  DAT_00766314 = 0x10000;
  return;
}


// 0x01f6f08 (0xa0 bytes)
void M1199_001f6f08(int param_1)

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
    puVar3 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar3 != (ushort *)0x0) {
      auVar4 = loadVectorLeftIndexed(in_r0,0x1f6f00);
      auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
      do {
        auVar5 = loadVectorLeftIndexed(0x6340,0x760000);
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
  }
  return;
}


// 0x01f6fe0 (0x8f8 bytes)
// inlined: FastAtan2 @0x1f727c, FastAtan2 @0x1f742c
void M1199_001f6fe0(MobyInstance *param_1)

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
  ulonglong uVar15;
  undefined4 uVar18;
  float *pfVar19;
  longlong lVar16;
  longlong lVar17;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  undefined4 *puVar24;
  longlong lVar25;
  ulonglong unaff_r28;
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
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x100;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x22] = in_LR;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r30;
  puVar13[0x1e] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar26 = ZEXT48(pvVar6);
  iVar20 = *(int *)((int)pvVar6 + 0x38);
  puVar13[0x1c] = unaff_r29;
  puVar13[0x1b] = unaff_r28;
  if (iVar20 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,240.0);
    uVar18 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x184) = uVar18;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  FastDecTimerS32(uVar26 + 0x184);
  if (param_1->state != '\r') {
    pfVar19 = (float *)MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,pfVar19,uVar26 + 0x20,5,puVar13 + 0xe,0,0,4);
    if ((pfVar19 != (float *)0x0) && (*(MOBY_OCLASSES *)((int)pfVar19[8] + 0xa6) != param_1->oClass)
       ) {
      uVar10 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar19[0xb] >> 0x1f;
      fVar2 = pfVar19[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar19[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar10)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        auVar32 = loadVectorLeftIndexed(0x20,0x1f6fa8);
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
        if (param_1->animationId != '\x04') {
          puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(param_1,4,0,*(undefined4 *)((int)puVar13 + 0xcc));
        }
        param_1->state = '\r';
        fVar2 = DAT_0071f418 * 26.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 3;
        *(undefined4 *)((int)pvVar6 + 0x74) = 0x3a03126f;
        *(undefined4 *)((int)pvVar6 + 0x84) = 9;
        *(float *)((int)pvVar6 + 0x70) = fVar2;
        fVar2 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x78) = g_FrameTime * 7.0;
        *(float *)((int)pvVar6 + 0x7c) = fVar2 * 10.0;
        PlayMobySound(2,0,param_1);
        if (((uint)pfVar19[0xc] & 1) == 0) {
          fVar2 = (param_1->pos).x - *pfVar19;
          fVar7 = (param_1->pos).y - pfVar19[1];
          dVar31 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar7);
          *(float *)(puVar13 + 0xf) = fVar2;
          *(float *)((int)puVar13 + 0x7c) = fVar7;
          *(float *)(puVar13 + 0x10) = (float)(dVar31 - dVar30);
          uVar21 = (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar13 + 0xf));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar13 + 0x7c));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar30 = dVar31;
          }
          fVar7 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
          if (dVar28 < dVar29) {
            lVar16 = uVar15 - 0xf0;
            lVar25 = uVar15 - 0x68;
            lVar22 = uVar15 - 0x78;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0x94) = fVar3;
            *(float *)((int)puVar13 + 0x8c) = fVar3;
            *(float *)(puVar13 + 0x12) = fVar3;
            *(float *)(puVar13 + 0x11) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar4;
            *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar3;
            *(float *)((int)puVar13 + 0x94) = *(float *)((int)puVar13 + 0x94) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x78) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar15 - 0x78;
            pfVar23 = (float *)&DAT_007358e0;
            lVar16 = lVar17;
            lVar22 = lVar25;
            do {
              fVar3 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar3;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar16 = 2;
            do {
              iVar20 = (int)lVar17;
              iVar8 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x88)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        else {
          fVar2 = pfVar19[4];
          fVar7 = pfVar19[5];
          dVar30 = ABS((double)pfVar19[4]);
          dVar29 = ABS((double)pfVar19[5]);
          *(float *)((int)puVar13 + 0x84) = (float)(dVar30 - dVar29);
          uVar21 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          dVar31 = dVar30;
          if ((double)*(float *)((int)puVar13 + 0x84) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
          if ((double)*(float *)((int)puVar13 + 0x84) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar16 = uVar15 - 0xf0;
            lVar25 = uVar15 - 0x48;
            lVar22 = uVar15 - 0x58;
            lVar27 = 2;
            fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0xb4) = fVar3;
            *(float *)((int)puVar13 + 0xac) = fVar3;
            *(float *)(puVar13 + 0x16) = fVar3;
            *(float *)(puVar13 + 0x15) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar4;
            *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar3;
            *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar15 - 0x58;
            pfVar23 = (float *)&DAT_007358e0;
            lVar16 = lVar17;
            lVar22 = lVar25;
            do {
              fVar3 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar3;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar16 = 2;
            do {
              iVar20 = (int)lVar17;
              iVar8 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0xa8)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        *(float *)((int)puVar13 + 0x74) = (float)dVar28;
        fVar2 = pfVar19[6];
        *(float *)(puVar13 + 6) = pfVar19[4];
        *(float *)(puVar13 + 7) = fVar2;
        fVar2 = pfVar19[7];
        *(float *)((int)puVar13 + 0x34) = pfVar19[5];
        *(float *)((int)puVar13 + 0x3c) = fVar2;
        MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar15 - 0x8c,uVar26 + 0x78,uVar26 + 0x7c)
        ;
        MB_StartKick((double)*(float *)((int)puVar13 + 0x74),param_1,uVar26 + 0x60);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
        MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    puVar24 = &DAT_001f6fa8;
    fVar2 = 42.0;
  }
  else if (*(int *)((int)pvVar6 + 0x184) == 0) {
    puVar24 = (undefined4 *)(uint)param_1->state;
    if (param_1->state == 1) {
      fVar2 = *(float *)((int)pvVar6 + 0x188);
    }
    else {
      fVar2 = *(float *)((int)pvVar6 + 0x178);
    }
  }
  else {
    puVar24 = &DAT_001f6fa8;
    fVar2 = *(float *)((int)pvVar6 + 0x178) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x180) = fVar2;
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    iVar20 = MB_getTarget(param_1,puVar24,uVar26 + 0xc0);
    if (iVar20 != 2) {
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
      if (-1.0 < fVar14) {
        if ((((fVar14 < 1.0) && (-1.0 < fVar4)) && (fVar4 < 1.0)) &&
           ((-1.0 < fVar2 && (fVar2 < 1.0)))) goto LAB_001f784c;
      }
      *(undefined4 *)((int)pvVar6 + 0x104) = 2;
    }
  }
  else {
    bVar1 = param_1->state == '\x01';
    if ((bVar1) && (-1 < *(int *)((int)pvVar6 + 0x18c))) {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x18c)];
      iVar20 = MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
    else if ((bVar1) || (*(int *)((int)pvVar6 + 0x17c) < 0)) {
      iVar20 = MB_getTarget(param_1,puVar24,uVar26 + 0xc0);
    }
    else {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x17c)];
      iVar20 = MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
  }
LAB_001f784c:
  if ((iVar20 != 2) &&
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


// 0x01f7980 (0x1bec bytes)
/* Moby 1199 */

void UpdateMoby_1199(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  void *pvVar11;
  char cVar12;
  float fVar13;
  longlong lVar14;
  undefined1 uVar19;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int unused1;
  Manipulator *manipulator;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  float fVar34;
  GPiece<16> local_120;
  GPiece<16> auStack_110;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  GPiece<96> local_d0;
  float local_70;
  float local_6c;
  longlong local_68;
  
  lVar14 = (longlong)(int)moby;
  pvVar11 = moby->pVar;
  uVar21 = ZEXT48(pvVar11);
  M1199_001f6fe0();
  dVar26 = 2.5;
  iVar18 = *(int *)((int)pvVar11 + 0x100);
  manipulator = (Manipulator *)((int)pvVar11 + 0x270);
  DoManipulator(0x4004000000000000,moby,1,manipulator);
  if ((moby->enabled != '\0') &&
     (fVar34 = (moby->pos).y - GameCamera.posY, fVar7 = (moby->pos).x - GameCamera.posX,
     fVar8 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar34 * fVar34) < 29.0)) {
    MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x17';
  }
  iVar16 = 0x3f800000;
  dVar28 = 1.0;
  bVar1 = moby->state;
  moby->unk58 = 1.0;
  if (bVar1 != 0xd && bVar1 != 0) {
    dVar24 = (double)(moby->pos).z;
    dVar22 = (double)cosf(*(float *)((int)pvVar11 + 0x19c));
    iVar16 = 0x760000;
    bVar1 = moby->state;
    (moby->pos).z = -(float)((double)DAT_0076634c * dVar22 - dVar24);
  }
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      uVar29 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar14,&DAT_001f78d8,uVar21 + 0x170);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\a';
        if (moby->animationId != '\x03') {
          local_68 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
        }
        uVar21 = MB_randInt(0xff);
        uVar15 = 0xbe860a92;
        if ((uVar21 & 1) != 0) {
          uVar15 = 0x3e860a92;
        }
        *(undefined4 *)((int)pvVar11 + 400) = uVar15;
      }
    }
    else if (bVar1 == 5) {
      uVar27 = 0;
      DeltAng(0.0,g_FrameTime * 12.566371,&(moby->rotation).y,iVar16,
                        (int)manipulator,0);
      uVar29 = FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x130) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar11 + 0x134) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar14);
      dVar26 = (double)cosf((moby->rotation).z);
      dVar24 = 6.0;
      *(float *)((int)pvVar11 + 0x120) = (float)((double)(g_FrameTime * 6.0) * dVar26);
      dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar22 = (double)g_FrameTime;
      dVar26 = (double)(float)(dVar22 * dVar24);
      *(undefined4 *)((int)pvVar11 + 0x128) = 0;
      *(float *)((int)pvVar11 + 0x124) = (float)(dVar26 * dVar28);
      dVar24 = 2.0;
      dVar28 = (double)((*(float *)((int)pvVar11 + 0x138) + 2.0) - (moby->pos).z);
      if ((dVar28 <= dVar26) &&
         (dVar22 = (double)(float)(dVar22 * -6.0), dVar26 = dVar28, dVar28 < dVar22)) {
        dVar26 = dVar22;
      }
      *(float *)((int)pvVar11 + 0x128) = (float)dVar26;
      MB_MoveAndCollide2
                (0x3fe0000000000000,uVar27,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
      fVar34 = (moby->pos).y - *(float *)((int)pvVar11 + 0x134);
      fVar7 = (moby->pos).x - *(float *)((int)pvVar11 + 0x130);
      if ((double)SQRT(fVar7 * fVar7 + fVar34 * fVar34) < dVar24) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 4) {
      iVar16 = *(int *)((int)pvVar11 + 0x104);
      dVar26 = 4.0;
      moby->unk58 = 4.0;
      if (((iVar16 == 2) ||
          (fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14),
          fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10),
          SQRT(fVar7 * fVar7 + fVar34 * fVar34) <= 3.0)) ||
         (iVar18 = FastDecTimerS8(lVar14 + 0xbc), iVar18 == 0)) {
        iVar18 = FastDecTimerS32(uVar21 + 0x198);
        if (iVar18 != 0) {
          dVar26 = (double)MB_randRangeFloat((float)dVar26,6.0);
          dVar28 = (double)MB_randRot();
          dVar22 = (double)cosf((float)dVar28);
          dVar28 = (double)FUN_005e8128(dVar28);
          dVar24 = (double)MB_randRangeFloat(DAT_00766344,DAT_00766348);
          fVar34 = (float)(dVar24 + (double)*(float *)((int)pvVar11 + 0x138));
          *(float *)((int)pvVar11 + 0x140) =
               (float)(dVar22 * dVar26 + (double)*(float *)((int)pvVar11 + 0x130));
          *(float *)((int)pvVar11 + 0x144) =
               (float)(dVar28 * dVar26 + (double)*(float *)((int)pvVar11 + 0x134));
          *(float *)((int)pvVar11 + 0x148) = fVar34;
          *(float *)((int)pvVar11 + 0x14c) = fVar34;
          moby->state = '\x03';
        }
      }
      else {
        if (moby->group != -1) {
          M1199_001f6f08(lVar14);
        }
        moby->state = '\x06';
        if (moby->animationId != '\x01') {
          local_68 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 3) {
      dVar22 = 4.0;
      moby->unk58 = 4.0;
      local_70 = SQRT(*(float *)((int)pvVar11 + 0x128) * *(float *)((int)pvVar11 + 0x128) +
                      *(float *)((int)pvVar11 + 0x120) * *(float *)((int)pvVar11 + 0x120) +
                      *(float *)((int)pvVar11 + 0x124) * *(float *)((int)pvVar11 + 0x124));
      fVar34 = *(float *)((int)pvVar11 + 0x144) - (moby->pos).y;
      fVar8 = *(float *)((int)pvVar11 + 0x140) - (moby->pos).x;
      uVar29 = 0;
      fVar7 = *(float *)((int)pvVar11 + 0x148) - (moby->pos).z;
      local_6c = 0.0;
      dVar28 = (double)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar34 * fVar34);
      dVar26 = (double)FUN_005e8338();
      OrganicDeltAng
                ((float)dVar26,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
                 g_FrameTime * 50.265484,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar11 + 0x170));
      dVar26 = (double)FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x140) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar11 + 0x144) - (moby->pos).y));
      dVar26 = (double)FastSubRots((float)dVar26,(moby->rotation).z);
      if (0.7853981852531433 <= dVar26) {
        *(undefined4 *)((int)pvVar11 + 300) = 0;
        *(undefined4 *)((int)pvVar11 + 0x128) = 0;
        *(undefined4 *)((int)pvVar11 + 0x124) = 0;
        *(undefined4 *)((int)pvVar11 + 0x120) = 0;
      }
      else {
        OrganicDelt
                  ((float)dVar28,DAT_0071f418 * 20.0,DAT_0071f418 * 20.0,
                   g_FrameTime * 20.0,&local_6c,0x720000,&local_70);
        *(float *)((int)pvVar11 + 0x120) = *(float *)((int)pvVar11 + 0x140) - (moby->pos).x;
        *(float *)((int)pvVar11 + 0x124) = *(float *)((int)pvVar11 + 0x144) - (moby->pos).y;
        fVar34 = (moby->pos).z;
        *(undefined4 *)((int)pvVar11 + 300) = *(undefined4 *)((int)pvVar11 + 0x14c);
        *(float *)((int)pvVar11 + 0x128) = *(float *)((int)pvVar11 + 0x148) - fVar34;
        ClampVec3Magnitude((double)local_70,(Vec4 *)((int)pvVar11 + 0x120));
      }
      dVar26 = 0.5;
      iVar16 = MB_MoveAndCollide2
                         (0x3fe0000000000000,uVar29,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
      if (iVar16 == 1) {
        dVar26 = (double)MB_randRangeFloat((float)dVar22,6.0);
        dVar28 = (double)MB_randRot();
        dVar22 = (double)cosf((float)dVar28);
        dVar28 = (double)FUN_005e8128(dVar28);
        dVar24 = (double)MB_randRangeFloat(DAT_00766344,DAT_00766348);
        fVar34 = (float)(dVar24 + (double)*(float *)((int)pvVar11 + 0x138));
        *(float *)((int)pvVar11 + 0x140) =
             (float)(dVar22 * dVar26 + (double)*(float *)((int)pvVar11 + 0x130));
        *(float *)((int)pvVar11 + 0x144) =
             (float)(dVar28 * dVar26 + (double)*(float *)((int)pvVar11 + 0x134));
        *(float *)((int)pvVar11 + 0x148) = fVar34;
        *(float *)((int)pvVar11 + 0x14c) = fVar34;
      }
      else if (dVar28 < 0.10000000149011612) {
        moby->state = '\x04';
        MB_randRangeFloat(30.0,90.0);
        iVar16 = FastDoubleToInt();
        local_68 = (longlong)iVar16;
        *(int *)((int)pvVar11 + 0x198) = (int)(animationSpeed * (float)((double)local_68 + dVar26));
      }
      if (((*(int *)((int)pvVar11 + 0x104) != 2) &&
          (fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14),
          fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10),
          3.0 < SQRT(fVar7 * fVar7 + fVar34 * fVar34))) &&
         (iVar18 = FastDecTimerS8(lVar14 + 0xbc), iVar18 != 0)) {
        if (moby->group != -1) {
          M1199_001f6f08(lVar14);
        }
        moby->state = '\x06';
        if (moby->animationId != '\x01') {
          local_68 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 2) {
      moby->unk58 = 4.0;
      fVar34 = OrganicDelt
                         (*(float *)((int)pvVar11 + 0x138) + 2.0,DAT_0071f418 * 18.0,
                          DAT_0071f418 * 18.0,g_FrameTime * 6.0,&(moby->pos).z,0x720000,
                          (float *)((int)pvVar11 + 0x128));
      if (fVar34 == 0.0) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar11 + 0x30) = 0x3e800000;
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x3f800000;
      *(undefined1 *)((int)pvVar11 + 0x28) = 0;
      *(undefined1 *)((int)pvVar11 + 0x29) = 1;
      *(undefined2 *)((int)pvVar11 + 0x24) = 1;
      fVar3 = (moby->pos).x;
      MVar10 = moby->modeBits;
      *(f32 *)((int)pvVar11 + 0x130) = fVar3;
      fVar4 = (moby->pos).y;
      *(f32 *)((int)pvVar11 + 0x134) = fVar4;
      fVar5 = (moby->pos).z;
      moby->modeBits = MVar10 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar11 + 0x138) = fVar5;
      fVar6 = (moby->pos).w;
      *(f32 *)((int)pvVar11 + 0x140) = fVar3;
      *(f32 *)((int)pvVar11 + 0x13c) = fVar6;
      *(f32 *)((int)pvVar11 + 0x144) = fVar4;
      *(f32 *)((int)pvVar11 + 0x148) = fVar5;
      *(f32 *)((int)pvVar11 + 0x14c) = fVar6;
      dVar26 = (double)MB_randRot();
      *(float *)((int)pvVar11 + 0x19c) = (float)dVar26;
      dVar26 = 0.0;
      *(undefined4 *)((int)pvVar11 + 0x170) = 0;
      uVar19 = FastDoubleToInt((double)DAT_0076635c);
      *(undefined1 *)((int)pvVar11 + 0x58) = uVar19;
      uVar19 = FastDoubleToInt((double)(DAT_00766360 * 8.0));
      *(undefined1 *)((int)pvVar11 + 0x5a) = uVar19;
      iVar18 = *(int *)((int)pvVar11 + 0x174);
      if (iVar18 < 1) {
        if (-1 < iVar18) {
          moby->state = '\x03';
          uVar2 = moby->animationId;
          (moby->pos).z = (moby->pos).z + 2.0;
          if (uVar2 != '\x03') {
            local_68 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        if (iVar18 < 2) {
          DeleteMoby(moby);
          return;
        }
        if (iVar18 < 3) {
          dVar28 = (double)MB_randRot();
          cosf((float)dVar28);
          MB_randRot();
          FUN_005e8128();
          moby->state = '\t';
          (moby->pos).z = Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z;
          FastVecAddSelf(auStack_110,lVar14 + 0x10,local_120);
          dVar26 = (double)MB_randRangeFloat((float)dVar26,DAT_00766354);
          *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
          dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
          dVar26 = (double)MB_randRangeFloat(0.75,1.25);
          uVar15 = FastDoubleToInt((double)(float)(dVar28 * dVar26));
          *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
          if (moby->animationId != '\x03') {
            local_68 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x60));
    if ((uVar17 & 1) != 0) {
      MB_SpawnBoltsFromCrate(lVar14,0x200,0xffffffffffffffff);
      MB_SpawnExplosionSparks2
                (0x3fe0000000000000,0x4024000000000000,lVar14,lVar14 + 0x10,&DAT_001f78d8,
                 0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0xc) {
    uVar29 = FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x130) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar11 + 0x134) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 1.0471976),lVar14);
    dVar26 = (double)cosf((moby->rotation).z);
    dVar22 = 4.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(g_FrameTime * 4.0) * dVar26);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar28 = (double)g_FrameTime;
    *(float *)((int)pvVar11 + 0x124) = (float)((double)(float)(dVar28 * dVar22) * dVar26);
    dVar26 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    fVar34 = (float)(dVar28 * 3.0);
    fVar7 = Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z;
    if ((fVar7 <= fVar34) && (fVar34 = fVar7, fVar7 < (float)(dVar28 * -3.0))) {
      fVar34 = (float)(dVar28 * -3.0);
    }
    *(float *)((int)pvVar11 + 0x128) = fVar34;
    FastVecAddSelf(auStack_e0,lVar14 + 0x10,uVar21 + 0x120);
    fVar34 = (moby->pos).y - *(float *)((int)pvVar11 + 0x134);
    fVar7 = (moby->pos).x - *(float *)((int)pvVar11 + 0x130);
    if (SQRT(fVar7 * fVar7 + fVar34 * fVar34) < 2.0) {
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      moby->state = '\t';
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(0x9c,0x1f78d8);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xff;
      cVar12 = storeVectorElementByteIndexed
                         (auVar31 | auVar31 << 8 | auVar31 << 0x10 | auVar31 << 0x18 |
                          auVar31 << 0x20 | auVar31 << 0x28 | auVar31 << 0x30 | auVar31 << 0x38 |
                          auVar31 << 0x40 | auVar31 << 0x48 | auVar31 << 0x50 | auVar31 << 0x58 |
                          auVar31 << 0x60 | auVar31 << 0x68 | auVar31 << 0x70 | auVar31 << 0x78,0xbc
                          ,lVar14);
      moby->setByGroup = cVar12;
      dVar26 = (double)MB_randRangeFloat((float)dVar26,DAT_00766354);
      *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
      dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
      dVar26 = (double)MB_randRangeFloat(0.75,1.25);
      uVar15 = FastDoubleToInt((double)(float)(dVar28 * dVar26));
      *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
    }
  }
  else if (bVar1 == 0xb) {
    if (moby->group != -1) {
      M1199_001f6f08(lVar14);
    }
    uVar29 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar14);
    dVar22 = (double)cosf((moby->rotation).z);
    dVar30 = 6.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(g_FrameTime * 6.0) * dVar22);
    dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar24 = (double)g_FrameTime;
    lVar20 = ((ulonglong)*(uint *)((int)pvVar11 + 0x194) & 0x1ffffff) << 7;
    *(float *)((int)pvVar11 + 0x124) = (float)((double)(float)(dVar24 * dVar30) * dVar22);
    dVar22 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    fVar7 = *(float *)((int)&(Cuboids->pos).z + (int)lVar20) - (moby->pos).z;
    fVar34 = (float)(dVar24 * 3.0);
    if ((fVar7 <= fVar34) && (fVar34 = fVar7, fVar7 < (float)(dVar24 * -3.0))) {
      fVar34 = (float)(dVar24 * -3.0);
    }
    *(float *)((int)pvVar11 + 0x128) = fVar34;
    MB_MoveAndCollide2(0x3fe0000000000000,0,lVar14,uVar21 + 0x120,lVar20,0x200);
    GetBonePosition(lVar14,0,auStack_f0);
    CollMobySphere(0x3fc99999a0000000,auStack_f0);
    fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14);
    fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10);
    fVar8 = (moby->pos).z - *(float *)(iVar18 + 0x18);
    if ((((double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar34 * fVar34) < dVar28) ||
        (g_heroStateType == 7)) || ((moby->field43_0x70 & 2U) != 0)) {
      moby->state = '\f';
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)((double)animationSpeed * dVar26);
        MB_SetAnimation(lVar14,3,0,(int)((double)animationSpeed * dVar26));
      }
    }
    else if (*(int *)((int)pvVar11 + 0x104) == 2) {
      moby->state = '\t';
      dVar26 = (double)MB_randRangeFloat((float)dVar22,DAT_00766354);
      *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
      dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
      dVar26 = (double)MB_randRangeFloat(0.75,1.25);
      uVar15 = FastDoubleToInt((double)(float)(dVar28 * dVar26));
      *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
    }
  }
  else if (bVar1 == 10) {
    fVar34 = (moby->pos).y;
    fVar7 = *(float *)(iVar18 + 0x14);
    fVar8 = (moby->pos).x;
    fVar9 = *(float *)(iVar18 + 0x10);
    fVar13 = (moby->pos).z - *(float *)(iVar18 + 0x18);
    dVar22 = (double)SQRT(fVar13 * fVar13 +
                          (fVar8 - fVar9) * (fVar8 - fVar9) + (fVar34 - fVar7) * (fVar34 - fVar7));
    if (moby->group != -1) {
      M1199_001f6f08(lVar14);
      fVar9 = *(float *)(iVar18 + 0x10);
      fVar8 = (moby->pos).x;
      fVar7 = *(float *)(iVar18 + 0x14);
      fVar34 = (moby->pos).y;
    }
    uVar29 = FUN_005e8338((double)(fVar9 - fVar8),(double)(fVar7 - fVar34));
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 1.5707964),lVar14);
    dVar24 = (double)cosf((moby->rotation).z);
    dVar25 = 4.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(g_FrameTime * 4.0) * dVar24);
    dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar23 = (double)g_FrameTime;
    dVar24 = (double)(float)(dVar23 * dVar25);
    *(float *)((int)pvVar11 + 0x124) = (float)(dVar24 * dVar30);
    dVar25 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    dVar30 = (double)(Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z);
    if ((dVar30 <= dVar24) &&
       (dVar23 = (double)(float)(dVar23 * -4.0), dVar24 = dVar30, dVar30 < dVar23)) {
      dVar24 = dVar23;
    }
    *(float *)((int)pvVar11 + 0x128) = (float)dVar24;
    MB_MoveAndCollide2(0x3fe0000000000000,0,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
    if (((double)DAT_0076633c <= dVar22) ||
       (dVar28 <= ABS((double)(Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z)))) {
      if (*(int *)((int)pvVar11 + 0x104) == 2) {
        moby->state = '\t';
        dVar26 = (double)MB_randRangeFloat((float)dVar25,DAT_00766354);
        *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
        dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
        dVar26 = (double)MB_randRangeFloat(0.75,1.25);
        uVar15 = FastDoubleToInt((double)(float)(dVar28 * dVar26));
        *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
      }
    }
    else {
      PlayMobySound(0,0,moby);
      moby->state = '\v';
      if (moby->animationId != '\x02') {
        local_68 = (longlong)(int)((double)animationSpeed * dVar26);
        MB_SetAnimation(lVar14,2,0,(int)((double)animationSpeed * dVar26));
      }
    }
  }
  else if (bVar1 == 9) {
    fVar34 = (moby->pos).y;
    fVar7 = (moby->pos).x;
    fVar13 = fVar34 - *(float *)(iVar18 + 0x14);
    fVar8 = fVar7 - *(float *)(iVar18 + 0x10);
    fVar9 = (moby->pos).z - *(float *)(iVar18 + 0x18);
    dVar28 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar13 * fVar13);
    uVar29 = FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x130) - fVar7),
                          (double)(*(float *)((int)pvVar11 + 0x134) - fVar34));
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 0.7853982),lVar14);
    dVar26 = (double)cosf((moby->rotation).z);
    dVar22 = 4.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(g_FrameTime * 4.0) * dVar26);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    *(float *)((int)pvVar11 + 0x124) =
         (float)((double)(float)((double)g_FrameTime * dVar22) * dVar26);
    dVar26 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    iVar18 = FastDecTimerS32(uVar21 + 0x1a4);
    if (iVar18 != 0) {
      dVar22 = (double)MB_randRangeFloat((float)dVar26,DAT_00766354);
      *(float *)((int)pvVar11 + 0x1a0) = (float)dVar22;
      dVar24 = (double)(animationSpeed * DAT_00766358 * 60.0);
      dVar22 = (double)MB_randRangeFloat(0.75,1.25);
      uVar15 = FastDoubleToInt((double)(float)(dVar24 * dVar22));
      *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
    }
    fVar7 = g_FrameTime * 2.0;
    fVar34 = (Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z) -
             *(float *)((int)pvVar11 + 0x1a0);
    if ((fVar34 <= fVar7) && (fVar7 = fVar34, fVar34 < g_FrameTime * -2.0)) {
      fVar7 = g_FrameTime * -2.0;
    }
    *(float *)((int)pvVar11 + 0x128) = fVar7;
    MB_MoveAndCollide2
              (0x3fe0000000000000,dVar26,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
    if (((*(int *)((int)pvVar11 + 0x104) != 2) &&
        (iVar18 = FastDecTimerS8(lVar14 + 0xbc), iVar18 != 0)) &&
       ((double)DAT_0076633c < dVar28)) {
      if (moby->group != -1) {
        M1199_001f6f08(lVar14);
      }
      moby->state = '\n';
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 8) {
    uVar29 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
    iVar18 = (int)pvVar11 + 0x170;
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar14);
    fVar34 = (moby->pos).y - *(float *)((int)pvVar11 + 0xe4);
    fVar7 = (moby->pos).x - *(float *)((int)pvVar11 + 0xe0);
    dVar26 = (double)FUN_005e8338((double)SQRT(fVar7 * fVar7 + fVar34 * fVar34),
                                  (double)(*(float *)((int)pvVar11 + 0xe8) - (moby->pos).z));
    DeltAng((float)-dVar26,g_FrameTime * 12.566371,&(moby->rotation).y,iVar16,
                      iVar18,0);
    iVar18 = MB_MayaFrameTrigger(20.0,moby);
    if (iVar18 != 0) {
      cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      GetBonePosition(lVar14,0,auStack_100);
      CollMobySphere(0x3fd99999a0000000,auStack_100,&DAT_001f78d8,0,lVar14,local_d0);
      CollLine(lVar14 + 0x10,auStack_100,9,lVar14,local_d0);
    }
    if ((*(int *)((int)pvVar11 + 0x104) == 2) || ((moby->field43_0x70 & 2U) != 0)) {
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x05';
    }
  }
  else if (bVar1 == 7) {
    dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
    uVar29 = FastWrapRot((float)dVar26,*(float *)((int)pvVar11 + 400));
    iVar16 = (int)pvVar11 + 0x170;
    dVar30 = 6.2831854820251465;
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar14);
    dVar24 = 0.5;
    dVar28 = (double)GetGroundZ(0x3fe0000000000000,lVar14 + 0x10,0);
    fVar7 = g_FrameTime;
    dVar22 = (double)*(float *)(iVar18 + 0x18);
    dVar26 = (double)(moby->pos).z;
    fVar34 = *(float *)(iVar18 + 0x14);
    uVar15 = *(undefined4 *)(iVar18 + 0x1c);
    lVar20 = uVar21 + 0x120;
    *(float *)((int)pvVar11 + 0x120) = *(float *)(iVar18 + 0x10) - (moby->pos).x;
    if (dVar22 - dVar26 < 0.0) {
      dVar26 = -(double)(float)((double)(float)(dVar26 - dVar22) * 4.0 - dVar22);
    }
    *(float *)((int)pvVar11 + 0x124) = fVar34 - (moby->pos).y;
    fVar34 = (moby->pos).z;
    *(undefined4 *)((int)pvVar11 + 300) = uVar15;
    dVar22 = (double)(float)(dVar26 + dVar24);
    if ((double)(float)(dVar26 + dVar24) - dVar28 < 0.0) {
      dVar22 = dVar28;
    }
    *(float *)((int)pvVar11 + 0x128) = (float)(dVar22 - (double)fVar34);
    FUN_005e7f98((double)(fVar7 * 10.0),lVar20,lVar20);
    dVar26 = (double)cosf((moby->rotation).z);
    *(float *)((int)pvVar11 + 0x120) =
         (float)(dVar26 * (double)SQRT(*(float *)((int)pvVar11 + 0x120) *
                                       *(float *)((int)pvVar11 + 0x120) +
                                       *(float *)((int)pvVar11 + 0x124) *
                                       *(float *)((int)pvVar11 + 0x124)));
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    *(float *)((int)pvVar11 + 0x124) =
         (float)(dVar26 * (double)SQRT(*(float *)((int)pvVar11 + 0x120) *
                                       *(float *)((int)pvVar11 + 0x120) +
                                       *(float *)((int)pvVar11 + 0x124) *
                                       *(float *)((int)pvVar11 + 0x124)));
    MB_MoveAndCollide2(dVar24,0,lVar14);
    unused1 = (int)lVar20;
    dVar26 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar11 + 0x120) *
                                               *(float *)((int)pvVar11 + 0x120) +
                                               *(float *)((int)pvVar11 + 0x124) *
                                               *(float *)((int)pvVar11 + 0x124)),
                                  (double)*(float *)((int)pvVar11 + 0x128));
    DeltAng((float)-dVar26,(float)((double)g_FrameTime * dVar30),
                      &(moby->rotation).y,unused1,iVar16,0);
    fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14);
    fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10);
    if (DAT_0076633c <= SQRT(fVar7 * fVar7 + fVar34 * fVar34)) {
      if (*(int *)((int)pvVar11 + 0x104) == 2) {
        if (moby->animationId != '\x03') {
          local_68 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 20.5));
        }
        moby->state = '\x05';
      }
    }
    else if (2.0 <= ABS((moby->pos).z - g_heroPosition.z)) {
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x05';
    }
    else {
      PlayMobySound(0,0,moby);
      moby->state = '\b';
      *(undefined4 *)((int)pvVar11 + 300) = 0;
      *(undefined4 *)((int)pvVar11 + 0x128) = 0;
      *(undefined4 *)((int)pvVar11 + 0x124) = 0;
      *(undefined4 *)((int)pvVar11 + 0x120) = 0;
      if (moby->animationId != '\x02') {
        local_68 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar14,2,4,(int)(animationSpeed * 5.5));
      }
    }
  }
  if (moby->state != '\r' && moby->state != '\0') {
    dVar26 = (double)*(float *)((int)pvVar11 + 0x19c);
    iVar18 = FastDoubleToInt((double)(animationSpeed * DAT_00766350 * 60.0));
    local_68 = (longlong)iVar18;
    dVar26 = (double)FastWrapRot((float)dVar26,(360.0 / (float)local_68) * 0.017453292);
    *(float *)((int)pvVar11 + 0x19c) = (float)dVar26;
    dVar28 = (double)(moby->pos).z;
    dVar26 = (double)cosf((float)dVar26);
    (moby->pos).z = (float)((double)DAT_0076634c * dVar26 + dVar28);
  }
  return;
}


