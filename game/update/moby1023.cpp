// game/update/moby1023.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x18a80c-0x18cd14
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby1023.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby1292.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x018a80c (0x14 bytes)
void M1023_0018a80c(void)

{
  DAT_0073f950 = 0x10000;
  return;
}


// 0x018a840 (0xa14 bytes)
// inlined: FastAtan2 @0x18abd8, FastAtan2 @0x18ae78
void M1023_0018a840(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar11;
  longlong lVar12;
  undefined2 uVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x160;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x2e] = in_LR;
  puVar8[0x2b] = in_f31;
  puVar8[0x2a] = unaff_r31;
  uVar1 = param_1->state;
  puVar8[0x29] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar22 = ZEXT48(pvVar6);
  puVar8[0x28] = unaff_r29;
  puVar8[0x27] = unaff_r28;
  if (uVar1 != '\0') {
    iVar14 = *(int *)((int)pvVar6 + 0x1f8);
    param_1->scale = param_1->pClass->gScale * DAT_0073f974;
    *(float *)((int)pvVar6 + 0xf4) = DAT_0073f9a4 * g_FrameTime;
    if (iVar14 == 0) {
      pMVar13 = CreateMoby(BLARG_GUN_0401);
      *(MobyInstance **)((int)pvVar6 + 0x1f8) = pMVar13;
      if (pMVar13 != (MobyInstance *)0x0) {
        pMVar13->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar6 + 0x1f8) + 0x30) = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar6 + 0x1f8) + 0x31) = 1;
        *(ushort *)(*(int *)((int)pvVar6 + 0x1f8) + 0x34) =
             *(ushort *)(*(int *)((int)pvVar6 + 0x1f8) + 0x34) | 0x100;
        GetBonePosition(param_1,4,uVar10 - 0xf0);
        iVar14 = *(int *)((int)pvVar6 + 0x1f8);
        *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(puVar8 + 0xe);
        *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)((int)puVar8 + 0x74);
        *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(puVar8 + 0xf);
        *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)((int)puVar8 + 0x7c);
      }
      param_1->modeBits = param_1->modeBits | CAN_BE_AUTO_TARGETED;
    }
    else {
      GetBonePosition(param_1,4,uVar10 - 0xe0);
      GetBoneTransformations(param_1,4,uVar10 - 0xd0);
      FastApplyTransform
                ((Vec4 *)(*(int *)((int)pvVar6 + 0x1f8) + 0xc0),(Vec4 *)(uVar10 - 0xd0));
      iVar14 = *(int *)((int)pvVar6 + 0x1f8);
      *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(puVar8 + 0x10);
      *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)((int)puVar8 + 0x84);
      *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(puVar8 + 0x11);
      *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)((int)puVar8 + 0x8c);
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar6 + 0x1f8));
    }
    dVar27 = 0.0;
    *(undefined4 *)((int)puVar8 + 0xd4) = 0;
    iVar14 = MB_damage(param_1,0x330000,0);
    iVar15 = MB_HandleDamage
                       (param_1,iVar14,uVar22 + 0x20,0,puVar8 + 0x1a,(int)puVar8 + 0xd4,0,4);
    if ((*(int *)(puVar8 + 0x1a) != 1) && (param_1->state != '\v')) {
      fVar5 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0xd4);
      *(float *)((int)pvVar6 + 0x20) = fVar5;
      iVar15 = iVar15 + ((uint)(ZERO_MASK((0x47 - (uint)*(ushort *)(*(int *)(iVar14 + 0x20) + 0xa6)))) & 3U - iVar15);
      if ((double)fVar5 <= dVar27) {
        iVar15 = 1;
      }
      uVar16 = FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f000000;
      fVar2 = DAT_0073f978;
      fVar5 = DAT_0071f418;
      *(undefined4 *)((int)pvVar6 + 0x90) = uVar16;
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x80) = fVar2 * fVar5;
      fVar5 = g_FrameTime;
      if (iVar15 < 3) {
        if ((-1 < iVar15) && (0 < iVar15)) {
          *(undefined4 *)((int)pvVar6 + 0x98) = 0x3e800000;
          fVar5 = DAT_0073f978 * DAT_0071f418;
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(float *)((int)pvVar6 + 0x80) = fVar5;
          fVar2 = DAT_0073f988;
          fVar5 = g_FrameTime;
          *(undefined4 *)((int)pvVar6 + 0x90) = 0x200;
          *(float *)((int)pvVar6 + 0x88) = fVar2 * fVar5;
          fVar2 = DAT_0073f984;
          *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41300000;
          *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41800000;
          *(float *)((int)pvVar6 + 0x8c) = fVar2 * fVar5;
          fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
          dVar24 = ABS((double)fVar5);
          dVar25 = ABS((double)fVar2);
          *(float *)(puVar8 + 0x1c) = fVar5;
          *(float *)((int)puVar8 + 0xe4) = fVar2;
          *(float *)(puVar8 + 0x1d) = (float)(dVar24 - dVar25);
          uVar20 = (ulonglong)(*(uint *)(puVar8 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0xe4) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)(puVar8 + 0x1c));
          if ((double)*(float *)(puVar8 + 0x1d) - dVar27 < 0.0) {
            dVar26 = dVar25;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar25 = ABS((double)*(float *)((int)puVar8 + 0xe4));
          if ((double)*(float *)(puVar8 + 0x1d) - dVar27 < 0.0) {
            dVar25 = dVar24;
          }
          fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar27 < dVar26) {
            lVar11 = uVar10 - 0x150;
            lVar18 = uVar10 - 0x68;
            lVar21 = uVar10 - 0x58;
            lVar23 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar8 + 0x104) = fVar3;
            *(float *)((int)puVar8 + 0xfc) = fVar3;
            *(float *)(puVar8 + 0x20) = fVar3;
            *(float *)(puVar8 + 0x1f) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0xfc) = *(float *)((int)puVar8 + 0xfc) * fVar4;
            *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar3;
            *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar11 + 0xf8) = *(float *)((int)lVar11 + 0xe8) * fVar3 * fVar3;
              iVar15 = (int)lVar18;
              lVar11 = lVar11 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar23 = 4;
            lVar21 = uVar10 - 0x68;
            pfVar19 = (float *)&DAT_007358e0;
            lVar11 = lVar12;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar11 + 0xf8) = *(float *)((int)lVar11 + 0xf8) * fVar3;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar11 = 2;
            do {
              iVar15 = (int)lVar12;
              iVar9 = (int)lVar21;
              lVar12 = lVar12 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xf8)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
          }
          *(float *)((int)puVar8 + 0xdc) = (float)dVar27;
          uVar16 = *(undefined4 *)(iVar14 + 0x18);
          *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar14 + 0x10);
          *(undefined4 *)(puVar8 + 7) = uVar16;
          uVar16 = *(undefined4 *)(iVar14 + 0x1c);
          *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
          *(undefined4 *)((int)puVar8 + 0x3c) = uVar16;
          MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar10 - 0x84,uVar22 + 0x88,uVar22 + 0x8c)
          ;
          MB_StartKick((double)*(float *)((int)puVar8 + 0xdc),param_1,uVar22 + 0x70);
          param_1->state = '\v';
          *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
          MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
        }
      }
      else if (iVar15 < 0xb) {
        if (iVar15 < 9) {
          *(float *)((int)pvVar6 + 0x88) = DAT_0073f980 * g_FrameTime;
          *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40a00000;
          *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41200000;
          *(float *)((int)pvVar6 + 0x8c) = fVar5 * 3.0;
          fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
          dVar24 = ABS((double)fVar5);
          dVar25 = ABS((double)fVar2);
          *(float *)((int)puVar8 + 0xec) = fVar5;
          *(float *)(puVar8 + 0x1e) = fVar2;
          *(float *)((int)puVar8 + 0xf4) = (float)(dVar24 - dVar25);
          uVar20 = (ulonglong)(*(uint *)((int)puVar8 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar8 + 0x1e) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)((int)puVar8 + 0xec));
          if ((double)*(float *)((int)puVar8 + 0xf4) - dVar27 < 0.0) {
            dVar26 = dVar25;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar25 = ABS((double)*(float *)(puVar8 + 0x1e));
          if ((double)*(float *)((int)puVar8 + 0xf4) - dVar27 < 0.0) {
            dVar25 = dVar24;
          }
          fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar27 < dVar26) {
            lVar11 = uVar10 - 0x150;
            lVar18 = uVar10 - 0x48;
            lVar21 = uVar10 - 0x38;
            lVar23 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar8 + 0x124) = fVar3;
            *(float *)((int)puVar8 + 0x11c) = fVar3;
            *(float *)(puVar8 + 0x24) = fVar3;
            *(float *)(puVar8 + 0x23) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0x11c) = *(float *)((int)puVar8 + 0x11c) * fVar4;
            *(float *)(puVar8 + 0x24) = *(float *)(puVar8 + 0x24) * fVar3;
            *(float *)((int)puVar8 + 0x124) = *(float *)((int)puVar8 + 0x124) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar11 + 0x118) = *(float *)((int)lVar11 + 0x108) * fVar3 * fVar3;
              iVar15 = (int)lVar18;
              lVar11 = lVar11 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar23 = 4;
            lVar21 = uVar10 - 0x48;
            pfVar19 = (float *)&DAT_007358e0;
            lVar11 = lVar12;
            lVar18 = lVar21;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar11 + 0x118) = *(float *)((int)lVar11 + 0x118) * fVar3;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar11 = 2;
            do {
              iVar15 = (int)lVar12;
              iVar9 = (int)lVar21;
              lVar12 = lVar12 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x118)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
          }
          *(float *)(puVar8 + 0x1b) = (float)dVar27;
          uVar16 = *(undefined4 *)(iVar14 + 0x18);
          *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar14 + 0x10);
          *(undefined4 *)(puVar8 + 7) = uVar16;
          uVar16 = *(undefined4 *)(iVar14 + 0x1c);
          *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
          *(undefined4 *)((int)puVar8 + 0x3c) = uVar16;
          MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar10 - 0x88,uVar22 + 0x88,uVar22 + 0x8c)
          ;
          MB_StartKick((double)*(float *)(puVar8 + 0x1b),param_1,uVar22 + 0x70);
          param_1->state = '\n';
          *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
        }
        else {
          *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
        }
      }
      MB_UpdateLightsTransition(param_1,uVar22 + 0x60);
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar22 + 0x60);
    if (*(int *)((int)pvVar6 + 0x38) != 0) {
      dVar27 = (double)MB_randRangeFloat(180.0,240.0);
      uVar17 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
      *(undefined2 *)((int)pvVar6 + 0x1d8) = uVar17;
      *(undefined4 *)((int)pvVar6 + 0x38) = 0;
    }
    FastDecTimerS16(uVar22 + 0x1d8);
    if (*(short *)((int)pvVar6 + 0x1d8) == 0) {
      fVar5 = *(float *)((int)pvVar6 + 0x1e4);
    }
    else {
      fVar5 = *(float *)((int)pvVar6 + 0x1e4) + 6.0;
    }
    *(float *)((int)pvVar6 + 0x1dc) = fVar5;
    iVar14 = MB_randInt(4);
    if (iVar14 == 0) {
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x1d0)];
      iVar14 = MB_getTargetInArea
                         ((double)*(float *)((int)pvVar6 + 0x1dc),param_1,uVar22 + 0x120,pSVar7,0,0,
                          pSVar7->points,pSVar7->cnt);
      if ((iVar14 != 2) &&
         ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
          fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
          *(float *)((int)pvVar6 + 0x1dc) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
        *(undefined4 *)((int)pvVar6 + 0x164) = 2;
      }
    }
    else {
      iVar14 = *(int *)((int)pvVar6 + 0x160);
      if ((iVar14 == 0) || (*(char *)(iVar14 + 0x20) == -3 || *(char *)(iVar14 + 0x20) == -2)) {
        *(undefined4 *)((int)pvVar6 + 0x160) = 0;
        *(undefined4 *)((int)pvVar6 + 0x164) = 2;
      }
      else {
        *(undefined4 *)((int)pvVar6 + 0x120) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)((int)pvVar6 + 0x124) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)pvVar6 + 0x128) = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)((int)pvVar6 + 300) = *(undefined4 *)(iVar14 + 0x1c);
      }
    }
    if (*(int *)((int)pvVar6 + 0x160) == 0) {
      *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
    }
    uVar1 = param_1->state;
    if ((((uVar1 == '\x05' || uVar1 == '\0') || (uVar1 == '\a')) || (uVar1 == '\x04')) &&
       (dVar27 = (double)GetGroundZ(0x3fe0000000000000,&param_1->pos,0),
       dVar27 < (double)(param_1->pos).z)) {
      (param_1->pos).z = (float)dVar27;
    }
  }
  return;
}


// 0x018b2f8 (0x1a1c bytes)
// inlined: FastRSqrt @0x18c954
// strings: 0065422c: 'Paratrooper with an invalid wakePath. UID = %d' | 0065425c: 'Paratrooper with an invalid jumpPath. UID = %d' | 0073f9bc: '@S33' (raw)

/* Moby 1023 */

void UpdateMoby_1023(MobyInstance *moby)

{
  f32 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  MobyInstance *pMVar10;
  Spline *pSVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar15;
  undefined1 uVar18;
  undefined4 uVar16;
  uint uVar17;
  byte bVar20;
  short sVar19;
  undefined8 in_r9;
  Spline *pSVar22;
  longlong lVar21;
  longlong lVar23;
  double dVar24;
  undefined8 uVar25;
  GPiece<16> auStack_110;
  GPiece<16> auStack_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> auStack_d0;
  GPiece<16> local_c0;
  Vec4 local_b0;
  undefined4 local_a0 [8];
  GPiece<72> auStack_80;
  
  lVar14 = (longlong)(int)moby;
  pvVar9 = moby->pVar;
  if ((moby->enabled == '\0') &&
     (fVar12 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     40.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar12 * fVar12))) {
    return;
  }
  DoManipulator(0x4004000000000000,moby,6,(Manipulator *)((int)pvVar9 + 0x170));
  if ((moby->enabled != '\0') &&
     (fVar12 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar12 * fVar12) < 29.0)) {
    MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x17';
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  M1023_0018a840(lVar14);
  pSVar22 = (Spline *)0x0;
  pMVar10 = *(MobyInstance **)((int)pvVar9 + 0x160);
  bVar20 = moby->state;
  if (*(int *)((int)pvVar9 + 0x1fc) != -1) {
    pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1fc)];
  }
  if ((((g_heroState != DYING_GROUNDED) || ((int)(animationSpeed * 30.5) <= g_heroStateTimer))
      || (bVar20 == 10 || bVar20 == 8)) ||
     ((bVar20 == 0xb || bVar20 == 4 ||
      (fVar2 = (moby->pos).y - g_heroPosition.y, fVar12 = (moby->pos).x - g_heroPosition.x,
      25.0 <= SQRT(fVar12 * fVar12 + fVar2 * fVar2))))) {
LAB_0018b56c:
    if (bVar20 == 0) goto LAB_0018b5a8;
  }
  else {
    iVar15 = MB_randInt(0x31);
    bVar20 = moby->state;
    if (iVar15 != 0) goto LAB_0018b56c;
    if (moby->animationId != '\x0e') {
      MB_SetAnimation(lVar14,0xe,0,(int)(animationSpeed * 11.5));
    }
    bVar20 = 8;
    moby->state = '\b';
  }
  if (*(char *)((int)pvVar9 + 0x2e) == '\x02') {
    DeleteMoby(moby);
    if (*(MobyInstance **)((int)pvVar9 + 0x1f8) == (MobyInstance *)0x0) {
      return;
    }
    DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x1f8));
    return;
  }
LAB_0018b5a8:
  if (bVar20 < 5) {
    if (bVar20 < 2) {
      if (bVar20 == 0) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0x28) = 1;
        *(undefined1 *)((int)pvVar9 + 0x29) = 0;
        *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
        uVar18 = FastDoubleToInt(0x402e000000000000);
        *(undefined1 *)((int)pvVar9 + 0x58) = uVar18;
        uVar18 = FastDoubleToInt(0x4028000000000000);
        *(undefined1 *)((int)pvVar9 + 0x5a) = uVar18;
        if (*(int *)((int)pvVar9 + 0x1d0) == -1) {
          printf("Paratrooper with an invalid wakePath. UID = %d",moby->uid);
          DeleteMoby(moby);
        }
        else if (*(int *)((int)pvVar9 + 0x1d4) == -1) {
          printf("Paratrooper with an invalid jumpPath. UID = %d",moby->uid);
          DeleteMoby(moby);
        }
        else {
          MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
          *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
          *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f000000;
          uVar16 = FastDoubleToInt(0x4080000000000000);
          *(undefined4 *)((int)pvVar9 + 0xd0) = uVar16;
          fVar12 = DAT_0071f418 * 6.981317;
          *(float *)((int)pvVar9 + 0x10c) = fVar12;
          *(float *)((int)pvVar9 + 0x110) = fVar12;
          fVar12 = g_FrameTime;
          *(undefined4 *)((int)pvVar9 + 0xf8) = 0x3eb2b8c2;
          *(undefined4 *)((int)pvVar9 + 0xfc) = 0x3e4ccccd;
          *(float *)((int)pvVar9 + 0x114) = fVar12 * 8.726646;
          uVar17 = rand();
          if ((uVar17 & 1) != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
          pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
          (moby->pos).x = pSVar11->points[0].x;
          (moby->pos).y = pSVar11->points[0].y;
          (moby->pos).z = pSVar11->points[0].z;
          (moby->pos).w = pSVar11->points[0].w;
          if (pSVar22 == (Spline *)0x0) {
            moby->state = '\x03';
          }
          else {
            iVar15 = rand();
            *(ushort *)((int)pvVar9 + 0x20c) = ((ushort)iVar15 & 1) * 2 + -1;
            iVar15 = PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,pSVar22);
            iVar15 = iVar15 + *(short *)((int)pvVar9 + 0x20c);
            *(int *)((int)pvVar9 + 500) = iVar15;
            if ((pSVar22->cnt <= iVar15) || (iVar15 < 0)) {
              sVar19 = -*(short *)((int)pvVar9 + 0x20c);
              *(short *)((int)pvVar9 + 0x20c) = sVar19;
              *(int *)((int)pvVar9 + 500) = iVar15 + (int)((longlong)sVar19 << 1);
            }
            if (moby->animationId != '\x02') {
              uVar17 = rand();
              MB_SetAnimation
                        (lVar14,2,0,
                         uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)
                                  ) * -4 + 7);
            }
            moby->state = '\x01';
          }
          *(undefined2 *)((int)pvVar9 + 0x1da) = 0;
        }
      }
      else {
        iVar15 = *(int *)((int)pvVar9 + 500);
        fVar12 = (moby->pos).y - pSVar22->points[iVar15].y;
        fVar2 = (moby->pos).x - pSVar22->points[iVar15].x;
        if (SQRT(fVar2 * fVar2 + fVar12 * fVar12) < *(float *)((int)pvVar9 + 0xe0)) {
          iVar15 = iVar15 + *(short *)((int)pvVar9 + 0x20c);
          *(int *)((int)pvVar9 + 500) = iVar15;
          if ((pSVar22->cnt <= iVar15) || (iVar15 < 0)) {
            sVar19 = -*(short *)((int)pvVar9 + 0x20c);
            *(short *)((int)pvVar9 + 0x20c) = sVar19;
            iVar15 = iVar15 + sVar19 * 2;
            *(undefined4 *)((int)pvVar9 + 0xe0) = 0;
            *(int *)((int)pvVar9 + 500) = iVar15;
          }
        }
        MB_UpdateNavMoveTurning
                  (lVar14,(int)pvVar9 + 0xd0,pSVar22->points + iVar15,auStack_110);
        if (((pMVar10 != (MobyInstance *)0x0) && (*(int *)((int)pvVar9 + 0x164) != 2)) &&
           (iVar15 = FastDecTimerS32((int)pvVar9 + 0x1f0), iVar15 != 0)) {
          iVar15 = PathFindClosestPnt
                             (0.0,(Vec4 *)&moby->pos,Splines[*(int *)((int)pvVar9 + 0x1d4)]);
          *(int *)((int)pvVar9 + 500) = iVar15;
          moby->state = '\x02';
        }
      }
    }
    else if (bVar20 < 3) {
      iVar15 = PathFindClosestPnt
                         (0.0,(Vec4 *)&moby->pos,Splines[*(int *)((int)pvVar9 + 0x1d4)]);
      *(int *)((int)pvVar9 + 500) = iVar15;
      pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
      fVar12 = (moby->pos).y - pSVar22->points[iVar15].y;
      fVar2 = (moby->pos).x - pSVar22->points[iVar15].x;
      fVar12 = SQRT(fVar2 * fVar2 + fVar12 * fVar12);
      if ((fVar12 < 1.0) || (fVar12 < *(float *)((int)pvVar9 + 0xe0))) {
        *(undefined4 *)((int)pvVar9 + 0xe0) = 0;
        moby->state = '\x03';
      }
      else {
        MB_UpdateNavMoveTurning
                  (lVar14,(int)pvVar9 + 0xd0,pSVar22->points + iVar15,auStack_100);
        if (moby->animationId != '\x02') {
          uVar17 = rand();
          MB_SetAnimation
                    (lVar14,2,0,
                     uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)) *
                              -4 + 7);
        }
      }
    }
    else if (bVar20 < 4) {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      if (((moby->field43_0x70 & 2U) != 0) &&
         (bVar20 = moby->animationId, uVar17 = rand(), (uint)bVar20 != (uVar17 & 1))) {
        uVar17 = rand();
        fVar12 = animationSpeed * 7.5;
        iVar15 = rand();
        MB_SetAnimation(lVar14,uVar17 & 1,0,(int)fVar12 + iVar15 % 7);
      }
      if (DAT_0073f9c0 < *(short *)((int)pvVar9 + 0x1da)) {
        *(undefined2 *)((int)pvVar9 + 0x1da) = 0;
        if (moby->animationId != '\n') {
          fVar12 = animationSpeed * 7.5;
          iVar15 = MB_randRange(0,(int)(animationSpeed * 5.5));
          MB_SetAnimation(lVar14,10,2,(int)fVar12 + iVar15);
        }
        moby->state = '\t';
      }
      else if (pMVar10 != (MobyInstance *)0x0) {
        if ((*(int *)((int)pvVar9 + 0x164) == 2) ||
           (iVar15 = FastDecTimerS32((int)pvVar9 + 0x1f0), iVar15 == 0)) {
          fVar12 = (moby->pos).y - (pMVar10->pos).y;
          fVar2 = (moby->pos).x - (pMVar10->pos).x;
          if ((SQRT(fVar2 * fVar2 + fVar12 * fVar12) < DAT_0073f9bc) &&
             (moby->state = '\a', moby->animationId != '\r')) {
            MB_SetAnimation(lVar14,0xd,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          *(f32 *)((int)pvVar9 + 0x1c0) = (moby->pos).x;
          *(f32 *)((int)pvVar9 + 0x1c4) = (moby->pos).y;
          fVar1 = (moby->pos).z;
          *(uint *)((int)pvVar9 + 500) = *(int *)((int)pvVar9 + 500) + 1U & 1;
          *(f32 *)((int)pvVar9 + 0x1c8) = fVar1;
          *(f32 *)((int)pvVar9 + 0x1cc) = (moby->pos).w;
          moby->state = '\x04';
          pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
          iVar15 = *(int *)((int)pvVar9 + 500);
          if (0.0 <= (moby->transform).v1.z * (pSVar22->points[iVar15].z - (moby->pos).z) +
                     (moby->transform).v1.x * (pSVar22->points[iVar15].x - (moby->pos).x) +
                     (moby->transform).v1.y * (pSVar22->points[iVar15].y - (moby->pos).y)) {
            if (moby->animationId != '\x10') {
              MB_SetAnimation(lVar14,0x10,0,(int)(animationSpeed * 5.5));
            }
          }
          else if (moby->animationId != '\x12') {
            MB_SetAnimation(lVar14,0x12,0,(int)(animationSpeed * 5.5));
          }
        }
      }
    }
    else {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      dVar24 = (double)BlendAnimFrame(moby);
      fVar12 = DAT_0073f9c4;
      if (((dVar24 <= 12.0) || (23.0 <= dVar24)) || (moby->updateId != moby->animationId)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          CollLine(local_f0,local_e0,0,lVar14,0);
          if (DAT_0073f9c0 < *(short *)((int)pvVar9 + 0x1da)) {
            *(undefined2 *)((int)pvVar9 + 0x1da) = 0;
            if (moby->animationId != '\n') {
              uVar17 = rand();
              MB_SetAnimation
                        (lVar14,10,2,
                         uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)
                                  ) * -4 + 5);
            }
            moby->state = '\t';
          }
          else {
            fVar12 = (moby->pos).y - (pMVar10->pos).y;
            fVar2 = (moby->pos).x - (pMVar10->pos).x;
            if (DAT_0073f9bc <= SQRT(fVar2 * fVar2 + fVar12 * fVar12)) {
              if (g_CollOutput.pMoby == pMVar10) {
                *(undefined4 *)((int)pvVar9 + 0x1e8) = 0x3f800000;
                moby->state = '\x05';
                *(undefined2 *)((int)pvVar9 + 0x20e) = 0;
                if (moby->animationId != '\x06') {
                  MB_SetAnimation(lVar14,6,0,(int)(animationSpeed * 10.5));
                }
              }
              else {
                moby->state = '\x03';
                if (moby->animationId != '\0') {
                  MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 5.5));
                }
                dVar24 = (double)MB_randRangeFloat(45.0,90.0);
                uVar16 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed))
                ;
                *(undefined4 *)((int)pvVar9 + 0x1f0) = uVar16;
              }
            }
            else {
              moby->state = '\a';
              if (moby->animationId != '\r') {
                uVar17 = rand();
                MB_SetAnimation
                          (lVar14,0xd,0,
                           uVar17 + (((int)uVar17 >> 2) +
                                    (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)) * -4 + 8);
              }
            }
          }
        }
      }
      else {
        fVar2 = 1.0;
        fVar3 = -((float)(23.0 - dVar24) * 0.09090909 - 1.0);
        if ((fVar3 <= 1.0) && (fVar2 = fVar3, fVar3 < 0.0)) {
          fVar2 = 0.0;
        }
        iVar15 = *(int *)((int)pvVar9 + 500);
        pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
        fVar3 = *(float *)((int)pvVar9 + 0x1c8);
        fVar4 = *(float *)((int)pvVar9 + 0x1c0);
        fVar5 = *(float *)((int)pvVar9 + 0x1c4);
        fVar6 = pSVar22->points[iVar15].z;
        fVar7 = pSVar22->points[iVar15].x;
        fVar8 = pSVar22->points[iVar15].y;
        fVar13 = (fVar2 - 0.5) * 2.0;
        (moby->pos).w = pSVar22->points[iVar15].w;
        (moby->pos).x = fVar2 * (fVar7 - fVar4) + fVar4;
        (moby->pos).y = fVar2 * (fVar8 - fVar5) + fVar5;
        (moby->pos).z = fVar12 * -(fVar13 * fVar13 - 1.0) + fVar2 * (fVar6 - fVar3) + fVar3;
      }
    }
  }
  else if (bVar20 < 8) {
    if (bVar20 < 6) {
      fVar12 = (moby->pos).y - (pMVar10->pos).y;
      fVar2 = (moby->pos).x - (pMVar10->pos).x;
      if (SQRT(fVar2 * fVar2 + fVar12 * fVar12) < DAT_0073f9bc) {
        moby->state = '\a';
        *(undefined4 *)((int)pvVar9 + 0x1ec) = 0;
        if (moby->animationId != '\r') {
          uVar17 = rand();
          MB_SetAnimation
                    (lVar14,0xd,0,
                     uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0)) *
                              -4 + 8);
        }
      }
      else {
        iVar15 = FastDecTimerS32((int)pvVar9 + 0x1ec);
        if (iVar15 != 0) {
          iVar15 = FastDoubleToInt((double)(g_PerfLoad * 1.3 + g_FrameLoad));
          *(int *)((int)pvVar9 + 0x1ec) =
               (int)(animationSpeed * ((float)(longlong)(DAT_0073f9b0 + iVar15) + 0.5));
          *(float *)((int)pvVar9 + 0x1e8) = *(float *)((int)pvVar9 + 0x1e8) + DAT_0073f9b4;
          if ((((int)(FLOAT_ORDER(g_PerfLoad)) < 0x3f4ccccd) &&
              ((int)(FLOAT_ORDER(g_FrameLoad)) < 0x3f4ccccd)) ||
             ((*(ushort *)((int)pvVar9 + 0x20e) & 1) == 0)) {
            GetBonePosition(*(undefined4 *)((int)pvVar9 + 0x1f8),0,auStack_d0);
            iVar15 = FUN_0023e6e0(local_c0,auStack_d0,lVar14,pMVar10,(int)(animationSpeed * 180.5),
                                  *(undefined2 *)((int)pvVar9 + 0x20e));
            if (iVar15 != 0) {
              *(float *)(iVar15 + 0x2c) = *(float *)(iVar15 + 0x2c) * 1.7;
            }
          }
          sVar19 = *(short *)((int)pvVar9 + 0x20e) + 1;
          *(short *)((int)pvVar9 + 0x20e) = sVar19;
          if (4 < sVar19) {
            *(undefined2 *)((int)pvVar9 + 0x20e) = 0;
          }
          uVar17 = (int)*(uint *)((int)pvVar9 + 0x1e8) >> 0x1f;
          if (0x41a00000 < (int)((uVar17 >> 1 ^ *(uint *)((int)pvVar9 + 0x1e8)) - uVar17)) {
            *(f32 *)((int)pvVar9 + 0x1c0) = (moby->pos).x;
            *(f32 *)((int)pvVar9 + 0x1c4) = (moby->pos).y;
            fVar1 = (moby->pos).z;
            *(uint *)((int)pvVar9 + 500) = *(int *)((int)pvVar9 + 500) + 1U & 1;
            *(f32 *)((int)pvVar9 + 0x1c8) = fVar1;
            fVar1 = (moby->pos).w;
            *(short *)((int)pvVar9 + 0x1da) = *(short *)((int)pvVar9 + 0x1da) + 1;
            *(f32 *)((int)pvVar9 + 0x1cc) = fVar1;
            moby->state = '\x04';
            pSVar22 = Splines[*(int *)((int)pvVar9 + 0x1d4)];
            iVar15 = *(int *)((int)pvVar9 + 500);
            if (0.0 <= (moby->transform).v1.z * (pSVar22->points[iVar15].z - (moby->pos).z) +
                       (moby->transform).v1.x * (pSVar22->points[iVar15].x - (moby->pos).x) +
                       (moby->transform).v1.y * (pSVar22->points[iVar15].y - (moby->pos).y)) {
              if (moby->animationId != '\x10') {
                MB_SetAnimation(lVar14,0x10,0,(int)(animationSpeed * 5.5));
              }
            }
            else if (moby->animationId != '\x12') {
              MB_SetAnimation(lVar14,0x12,0,(int)(animationSpeed * 5.5));
            }
          }
        }
      }
    }
    else if (bVar20 < 7) {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      dVar24 = (double)BlendAnimFrame(moby);
      if (((dVar24 <= 12.0) || (23.0 <= dVar24)) || (uVar25 = 0, moby->animationBlend != 0.0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          dVar24 = (double)MB_randRangeFloat(45.0,90.0);
          uVar16 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar9 + 0x1f0) = uVar16;
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        ClampVec3Magnitude((double)(g_FrameTime * 24.0),&local_b0);
        MB_MoveAndCollide
                  ((double)DAT_0073f9a8,(double)DAT_0073f9ac,uVar25,lVar14,&local_b0);
      }
    }
    else {
      dVar24 = (double)FUN_005e8338((double)((pMVar10->pos).x - (moby->pos).x),
                                    (double)((pMVar10->pos).y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar24,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1e0));
      dVar24 = (double)BlendAnimFrame(moby);
      if ((16.5 < dVar24) && (dVar24 < 20.0)) {
        GetBonePosition(lVar14,4,local_a0);
        SetCollDamIn(0x3ff0000000000000,auStack_80,lVar14,1);
        CollMobySphere(0x3fe99999a0000000,local_a0);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar20 < 0xb) {
    if (bVar20 < 10) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\0')) {
        MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
      if ((uVar17 & 0x40) == 0) {
        if ((uVar17 & 0x120) != 0) {
          DeleteMoby(moby);
        }
      }
      else {
        fVar12 = (moby->pos).y - (pMVar10->pos).y;
        fVar2 = (moby->pos).x - (pMVar10->pos).x;
        if (DAT_0073f9bc <= SQRT(fVar2 * fVar2 + fVar12 * fVar12)) {
          *(undefined4 *)((int)pvVar9 + 0x1e8) = 0x3f800000;
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar9 + 0x20e) = 0;
          if (moby->animationId != '\x06') {
            fVar12 = animationSpeed * 10.5;
            iVar15 = MB_randRange(0,(int)(animationSpeed * 7.5));
            MB_SetAnimation(lVar14,6,0,(int)fVar12 + iVar15);
          }
        }
        else {
          moby->state = '\a';
          if (moby->animationId != '\r') {
            uVar17 = rand();
            MB_SetAnimation
                      (lVar14,0xd,0,
                       uVar17 + (((int)uVar17 >> 2) + (uint)((int)uVar17 < 0 && (uVar17 & 3) != 0))
                                * -4 + 8);
          }
        }
      }
    }
  }
  else if ((bVar20 < 0xc) &&
          (uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70)),
          (uVar17 & 0x160) != 0)) {
    MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
    lVar23 = lVar14 + 0x10;
    MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar14,lVar23);
    uVar25 = 0;
    lVar21 = lVar14 + 0x40;
    MB_SpawnDebrisMoby(0,lVar14,0x69c,lVar23,lVar21,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar25,lVar14,0x69d,lVar23,lVar21,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar25,lVar14,0x69e,lVar23,lVar21,0,0,in_r9,&DAT_00a15d30);
    DeleteMoby(moby);
    if (*(MobyInstance **)((int)pvVar9 + 0x1f8) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0x1f8));
    }
  }
  return;
}


