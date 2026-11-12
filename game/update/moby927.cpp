// game/update/moby927.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4b98ac-0x4bb3d4
#include <stdlib.h>
#include "game/update/moby927.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04b98ac (0x14 bytes)
void M927_004b98ac(void)

{
  DAT_008f47b4 = 0x10000;
  return;
}


// 0x04b98e0 (0x7d4 bytes)
// inlined: FastAtan2 @0x4b9b0c, FastAtan2 @0x4b9d9c
void M927_004b98e0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar10;
  longlong lVar11;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1f] = in_f31;
  puVar7[0x1e] = unaff_r31;
  puVar7[0x1d] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar19 = ZEXT48(pvVar5);
  dVar24 = 0.0;
  puVar7[0x1c] = unaff_r29;
  puVar7[0x1b] = unaff_r28;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  iVar12 = MB_damage(param_1,0x330000,0);
  iVar13 = MB_HandleDamage
                     (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
  if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\t')) {
    fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar7 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar24) {
      iVar13 = 1;
    }
    uVar14 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f47d8;
    fVar4 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar14;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
    fVar4 = g_FrameTime;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        fVar4 = DAT_008f47d8 * g_FrameTimeSq;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar5 + 0x80) = fVar4;
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = DAT_008f47e8 * g_FrameTime;
        fVar1 = DAT_008f47e4;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)(puVar7 + 0x10) = fVar4;
        *(float *)((int)puVar7 + 0x84) = fVar1;
        *(float *)(puVar7 + 0x11) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x58;
          lVar15 = uVar9 - 0x68;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xa4) = fVar2;
          *(float *)((int)puVar7 + 0x9c) = fVar2;
          *(float *)(puVar7 + 0x14) = fVar2;
          *(float *)(puVar7 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar3;
          *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
          *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x88) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x68;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x98) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar7 + 0x7c) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x84,uVar19 + 0x88,uVar19 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
        param_1->state = '\t';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar13 < 0xb) {
      if (iVar13 < 9) {
        *(float *)((int)pvVar5 + 0x88) = DAT_008f47e0 * g_FrameTime;
        fVar1 = DAT_008f47dc;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)((int)puVar7 + 0x8c) = fVar4;
        *(float *)(puVar7 + 0x12) = fVar1;
        *(float *)((int)puVar7 + 0x94) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar7 + 0x8c));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)(puVar7 + 0x12));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x38;
          lVar15 = uVar9 - 0x48;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xc4) = fVar2;
          *(float *)((int)puVar7 + 0xbc) = fVar2;
          *(float *)(puVar7 + 0x18) = fVar2;
          *(float *)(puVar7 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar3;
          *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
          *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xa8) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x48;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xb8) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar7 + 0xf) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x88,uVar19 + 0x88,uVar19 + 0x8c);
        MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    dVar24 = (double)MB_randRangeFloat(180.0,240.0);
    uVar14 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x194) = uVar14;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  FastDecTimerS32(uVar19 + 0x194);
  if (*(int *)((int)pvVar5 + 0x194) == 0) {
    fVar4 = *(float *)((int)pvVar5 + 0x18c);
  }
  else {
    fVar4 = *(float *)((int)pvVar5 + 0x18c) + 6.0;
  }
  *(float *)((int)pvVar5 + 0x198) = fVar4;
  pSVar6 = Splines[*(int *)((int)pvVar5 + 0x180)];
  iVar12 = MB_getTargetInArea
                     (param_1,uVar19 + 0x120,pSVar6,0,0,pSVar6->points,pSVar6->cnt);
  if ((iVar12 != 2) &&
     ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar5 + 0x124),
      fVar1 = (param_1->pos).x - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x198) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x04ba118 (0x12bc bytes)
// inlined: FastAtan2 @0x4ba3c0, FastAtan2 @0x4ba9f0, FastAtan2 @0x4bacec, FastAtan2 @0x4bb098
/* Moby 927 */

void UpdateMoby_927(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar24;
  longlong lVar23;
  longlong lVar25;
  undefined8 in_r8;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  float fVar34;
  
  lVar18 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x1b0;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar16;
  puVar11[0x38] = in_LR;
  puVar11[0x35] = in_f31;
  puVar11[0x34] = unaff_r31;
  puVar11[0x33] = unaff_r30;
  pvVar9 = moby->pVar;
  dVar33 = 1.0;
  puVar11[0x32] = unaff_r29;
  moby->unk58 = 1.0;
  M927_004b98e0();
  bVar2 = moby->state;
  iVar22 = *(int *)((int)pvVar9 + 0x160);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x40400000;
      *(undefined1 *)((int)pvVar9 + 0x28) = 2;
      fVar3 = (moby->pos).x;
      *(undefined2 *)((int)pvVar9 + 0x24) = 3;
      *(f32 *)((int)pvVar9 + 0x170) = fVar3;
      *(f32 *)((int)pvVar9 + 0x174) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x178) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x17c) = (moby->pos).w;
      MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
      *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f000000;
      uVar20 = FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar9 + 0xd0) = uVar20;
      *(float *)((int)pvVar9 + 0xf4) = g_FrameTime * 4.0;
      uVar21 = rand();
      if ((uVar21 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      if (*(int *)((int)pvVar9 + 0x188) == 0) {
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          MB_SetAnimation(lVar18,1,0,5);
        }
      }
      else {
        moby->state = '\x01';
        pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
        (moby->pos).x = pSVar10->points[0].x;
        (moby->pos).y = pSVar10->points[0].y;
        fVar34 = pSVar10->points[0].z;
        (moby->pos).w = pSVar10->points[0].w;
        (moby->pos).z = (float)((double)fVar34 - dVar33);
      }
    }
    else if (bVar2 < 2) {
      fVar34 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].x - (moby->pos).x;
      fVar5 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].y - (moby->pos).y;
      fVar6 = ABS(fVar34);
      fVar7 = ABS(fVar5);
      *(float *)((int)puVar11 + 0xf4) = fVar34;
      *(float *)(puVar11 + 0x1f) = fVar5;
      *(float *)((int)puVar11 + 0xfc) = fVar6 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1d) & 4;
      fVar34 = ABS(*(float *)((int)puVar11 + 0xf4));
      if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
        fVar34 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)(puVar11 + 0x1f));
      if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
        fVar8 = fVar6;
      }
      dVar28 = dVar33;
      if (0.0 < fVar34) {
        lVar23 = uVar16 - 0x1a0;
        lVar25 = uVar16 - 0x50;
        lVar27 = uVar16 - 0x40;
        lVar26 = 2;
        fVar34 = (fVar8 - fVar34) / (fVar8 + fVar34);
        fVar6 = fVar34 * fVar34;
        *(float *)((int)puVar11 + 0x16c) = fVar34;
        *(float *)((int)puVar11 + 0x164) = fVar34;
        *(float *)(puVar11 + 0x2d) = fVar34;
        *(float *)(puVar11 + 0x2c) = fVar34;
        fVar34 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar6;
        *(float *)(puVar11 + 0x2d) = *(float *)(puVar11 + 0x2d) * fVar34;
        *(float *)((int)puVar11 + 0x16c) = *(float *)((int)puVar11 + 0x16c) * fVar34 * fVar6;
        do {
          *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x150) * fVar34 * fVar34;
          iVar22 = (int)lVar25;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar34 * fVar34;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar27 = uVar16 - 0x50;
        pfVar24 = (float *)&DAT_007358e0;
        lVar23 = lVar19;
        lVar25 = lVar27;
        do {
          fVar34 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x160) * fVar34;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar23 = 2;
        do {
          iVar22 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x160)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar5);
      }
      fVar34 = OrganicDeltAng
                         ((float)dVar28,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                          g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar9 + 0x1a0));
      if ((*(int *)((int)pvVar9 + 0x164) != 2) &&
         (iVar22 = MB_randInt((double)fVar34,9), iVar22 == 0)) {
        moby->state = '\x06';
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar18,0,0,5);
        }
        pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
        fVar5 = pSVar10->points[1].x - (moby->pos).x;
        *(float *)((int)pvVar9 + 0x40) = fVar5;
        fVar7 = pSVar10->points[1].y - (moby->pos).y;
        *(float *)((int)pvVar9 + 0x44) = fVar7;
        *(float *)((int)pvVar9 + 0x48) = pSVar10->points[1].z - (moby->pos).z;
        dVar32 = (double)SQRT(fVar5 * fVar5 + fVar7 * fVar7);
        *(float *)((int)pvVar9 + 0x4c) = pSVar10->points[1].w;
        fVar6 = DAT_008f47f4 * g_FrameTime;
        fVar34 = (float)((double)fVar6 / dVar32);
        dVar29 = (double)(fVar5 * fVar34);
        dVar30 = (double)(fVar7 * fVar34);
        dVar28 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar28 = dVar29;
        }
        dVar31 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar31 = dVar30;
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar28 = dVar29;
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar31 = dVar30;
        }
        *(float *)((int)pvVar9 + 0x40) = (float)dVar28;
        *(float *)((int)pvVar9 + 0x44) = (float)dVar31;
        dVar33 = (double)MB_computeLobVelocity
                                   ((double)fVar6,-(double)(DAT_008f47f8 * g_FrameTimeSq),
                                    lVar18 + 0x10,pSVar10->points + 1,0x8f0000,&DAT_00720000,0);
        *(float *)((int)pvVar9 + 0x48) = (float)dVar33;
      }
    }
    else if (bVar2 < 3) {
      bVar1 = *(int *)((int)pvVar9 + 0x164) == 2;
      if (bVar1) {
        if ((bVar1) && (*(int *)((int)pvVar9 + 0x188) != 0)) {
          moby->state = '\a';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar18,0,0,5);
          }
          pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
          fVar5 = pSVar10->points[0].x - (moby->pos).x;
          *(float *)((int)pvVar9 + 0x40) = fVar5;
          fVar7 = pSVar10->points[0].y - (moby->pos).y;
          *(float *)((int)pvVar9 + 0x44) = fVar7;
          *(float *)((int)pvVar9 + 0x48) = pSVar10->points[0].z - (moby->pos).z;
          dVar33 = (double)SQRT(fVar5 * fVar5 + fVar7 * fVar7);
          *(float *)((int)pvVar9 + 0x4c) = pSVar10->points[0].w;
          fVar6 = DAT_008f47f4 * g_FrameTime;
          fVar34 = (float)((double)fVar6 / dVar33);
          fVar5 = fVar5 * fVar34;
          fVar7 = fVar7 * fVar34;
          fVar34 = 0.0;
          if (0.0 - dVar33 < 0.0) {
            fVar34 = fVar5;
          }
          fVar8 = 0.0;
          if (0.0 - dVar33 < 0.0) {
            fVar8 = fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar34 = fVar5;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar8 = fVar7;
          }
          *(float *)((int)pvVar9 + 0x40) = fVar34;
          *(float *)((int)pvVar9 + 0x44) = fVar8;
          dVar33 = (double)MB_computeLobVelocity
                                     ((double)fVar6,-(double)(DAT_008f47f8 * g_FrameTimeSq),
                                      lVar18 + 0x10,pSVar10->points,0x8f0000,&DAT_00720000,0);
          *(float *)((int)pvVar9 + 0x48) = (float)dVar33;
        }
      }
      else {
        dVar33 = (double)MB_randRangeFloat(-DAT_008f47f0,DAT_008f47f0);
        *(float *)((int)pvVar9 + 0x19c) = (float)(dVar33 * 0.01745329238474369);
        moby->state = '\x03';
        if (moby->animationId != '\x03') {
          puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar18,3,0,*(undefined4 *)((int)puVar11 + 0x184));
        }
      }
    }
    else {
      fVar34 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar6 = fVar34 - *(float *)(iVar22 + 0x14);
      fVar7 = fVar5 - *(float *)(iVar22 + 0x10);
      if (DAT_008f47ec <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
        fVar5 = *(float *)(iVar22 + 0x10) - fVar5;
        fVar34 = *(float *)(iVar22 + 0x14) - fVar34;
        fVar7 = ABS(fVar5);
        fVar6 = ABS(fVar34);
        *(float *)(puVar11 + 0x1d) = fVar5;
        *(float *)((int)puVar11 + 0xec) = fVar34;
        *(float *)(puVar11 + 0x1e) = fVar7 - fVar6;
        fVar34 = 0.0;
        uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)(puVar11 + 0x1d));
        if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)((int)puVar11 + 0xec));
        if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
          fVar13 = fVar7;
        }
        if (0.0 < fVar5) {
          lVar18 = uVar16 - 0x1a0;
          lVar23 = uVar16 - 0x70;
          lVar25 = uVar16 - 0x60;
          lVar27 = 2;
          fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
          fVar7 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x14c) = fVar5;
          *(float *)((int)puVar11 + 0x144) = fVar5;
          *(float *)(puVar11 + 0x29) = fVar5;
          *(float *)(puVar11 + 0x28) = fVar5;
          fVar5 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar7;
          *(float *)(puVar11 + 0x29) = *(float *)(puVar11 + 0x29) * fVar5;
          *(float *)((int)puVar11 + 0x14c) = *(float *)((int)puVar11 + 0x14c) * fVar5 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x140) = *(float *)((int)lVar18 + 0x130) * fVar5 * fVar5;
            iVar22 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar16 - 0x70;
          pfVar24 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar23 = lVar25;
          do {
            fVar5 = *pfVar24;
            fVar7 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar18 + 0x140) = *(float *)((int)lVar18 + 0x140) * fVar5;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar22 = (int)lVar19;
            iVar12 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar34 = fVar34 + *(float *)(iVar22 + 0x140) + *(float *)(iVar12 + 4) +
                     *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar34 = (fVar34 + 0.7853982) * fVar8 + fVar6;
        }
        dVar28 = (double)FastWrapRot(fVar34,*(float *)((int)pvVar9 + 0x19c));
        OrganicDeltAng
                  ((float)dVar28,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar9 + 0x1a0));
        fVar34 = (moby->rotation).z;
        fVar5 = fVar34 + 1.5707963;
        fVar7 = 3.1415925 - fVar34;
        if (fVar34 - (3.1415925 - fVar34) < 0.0) {
          fVar7 = fVar34;
        }
        fVar6 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar6 = fVar5;
        }
        fVar8 = -3.1415925 - fVar34;
        if ((-3.1415925 - fVar34) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar34 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
          fVar34 = fVar6;
        }
        fVar5 = fVar8 * fVar8;
        fVar7 = fVar34 * fVar34;
        fVar14 = fVar5 * fVar5 * fVar8;
        *(undefined4 *)(puVar11 + 0x13) = 0;
        fVar6 = fVar7 * fVar7 * fVar34;
        fVar15 = fVar5 * fVar14;
        fVar13 = fVar7 * fVar6;
        *(float *)((int)puVar11 + 0x94) =
             (fVar5 * fVar15 * 2.601887e-06 +
             fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) *
             2.0;
        *(float *)(puVar11 + 0x12) =
             (fVar7 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar7 * fVar34 * -0.16666657 + fVar34)
             * 2.0;
        MB_UpdateNavMove
                  (dVar33,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x12,puVar11 + 0x14);
      }
      else {
        moby->state = '\x04';
        uVar20 = DAT_008f47fc;
        if (moby->animationId != '\x06') {
          puVar11[0x30] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar18,6,uVar20,*(undefined4 *)((int)puVar11 + 0x184));
        }
      }
      if (*(int *)((int)pvVar9 + 0x164) == 2) {
        moby->state = '\x05';
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 < 5) {
      fVar34 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar7 = ABS(fVar34);
      fVar6 = ABS(fVar5);
      *(float *)((int)puVar11 + 0xdc) = fVar34;
      *(float *)(puVar11 + 0x1c) = fVar5;
      *(float *)((int)puVar11 + 0xe4) = fVar7 - fVar6;
      fVar34 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0xdc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar11 + 0xdc));
      if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)(puVar11 + 0x1c));
      if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
        fVar13 = fVar7;
      }
      if (0.0 < fVar5) {
        lVar23 = uVar16 - 0x1a0;
        lVar27 = uVar16 - 0x80;
        lVar25 = uVar16 - 0x90;
        lVar26 = 2;
        fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
        fVar7 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 300) = fVar5;
        *(float *)((int)puVar11 + 0x124) = fVar5;
        *(float *)(puVar11 + 0x25) = fVar5;
        *(float *)(puVar11 + 0x24) = fVar5;
        fVar5 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar7;
        *(float *)(puVar11 + 0x25) = *(float *)(puVar11 + 0x25) * fVar5;
        *(float *)((int)puVar11 + 300) = *(float *)((int)puVar11 + 300) * fVar5 * fVar7;
        do {
          *(float *)((int)lVar23 + 0x120) = *(float *)((int)lVar23 + 0x110) * fVar5 * fVar5;
          iVar22 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar27 = uVar16 - 0x90;
        pfVar24 = (float *)&DAT_007358e0;
        lVar23 = lVar19;
        lVar25 = lVar27;
        do {
          fVar5 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar23 + 0x120) = *(float *)((int)lVar23 + 0x120) * fVar5;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar23 = 2;
        do {
          iVar22 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar34 = fVar34 + *(float *)(iVar22 + 0x120) + *(float *)(iVar12 + 4) +
                   *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar34 = (fVar34 + 0.7853982) * fVar8 + fVar6;
      }
      OrganicDeltAng
                (fVar34,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1a0));
      dVar28 = (double)BlendAnimFrame(moby);
      if ((dVar28 < 18.0) || (24.0 < dVar28)) {
        if ((dVar28 < 40.0) || (48.0 < dVar28)) {
          if (((moby->field43_0x70 & 2U) != 0) &&
             (moby->state = '\x03', moby->animationId != '\x03')) {
            puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar18,3,0,*(undefined4 *)((int)puVar11 + 0x184));
          }
        }
        else {
          puVar11[0xe] = 0;
          DamageSphereAtBone
                    (0x3fd0000000000000,dVar33,dVar33,lVar18,0,&DAT_004ba0b4,1,0,in_r8,0,1);
        }
      }
      else {
        puVar11[0xe] = 0;
        DamageSphereAtBone
                  (0x3fd0000000000000,dVar33,dVar33,lVar18,1,0,1,&DAT_004ba0b4,in_r8,0,1);
      }
    }
    else if (bVar2 < 6) {
      fVar34 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar6 = fVar34 - *(float *)((int)pvVar9 + 0x174);
      fVar7 = fVar5 - *(float *)((int)pvVar9 + 0x170);
      if (dVar33 <= (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
        fVar5 = *(float *)((int)pvVar9 + 0x170) - fVar5;
        fVar34 = *(float *)((int)pvVar9 + 0x174) - fVar34;
        fVar7 = ABS(fVar5);
        fVar6 = ABS(fVar34);
        *(float *)(puVar11 + 0x1a) = fVar5;
        *(float *)((int)puVar11 + 0xd4) = fVar34;
        *(float *)(puVar11 + 0x1b) = fVar7 - fVar6;
        fVar34 = 0.0;
        uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)(puVar11 + 0x1a));
        if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)((int)puVar11 + 0xd4));
        if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
          fVar13 = fVar7;
        }
        if (0.0 < fVar5) {
          lVar18 = uVar16 - 0x1a0;
          lVar23 = uVar16 - 0xb0;
          lVar25 = uVar16 - 0xa0;
          lVar27 = 2;
          fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
          fVar7 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x10c) = fVar5;
          *(float *)((int)puVar11 + 0x104) = fVar5;
          *(float *)(puVar11 + 0x21) = fVar5;
          *(float *)(puVar11 + 0x20) = fVar5;
          fVar5 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar7;
          *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar5;
          *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar5 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x100) = *(float *)((int)lVar18 + 0xf0) * fVar5 * fVar5;
            iVar22 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar16 - 0xb0;
          pfVar24 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar23 = lVar25;
          do {
            fVar5 = *pfVar24;
            fVar7 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar18 + 0x100) = *(float *)((int)lVar18 + 0x100) * fVar5;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar22 = (int)lVar19;
            iVar12 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar34 = fVar34 + *(float *)(iVar22 + 0x100) + *(float *)(iVar12 + 4) +
                     *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar34 = (fVar34 + 0.7853982) * fVar8 + fVar6;
        }
        OrganicDeltAng
                  (fVar34,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar9 + 0x1a0));
        fVar34 = (moby->rotation).z;
        fVar5 = fVar34 + 1.5707963;
        fVar7 = 3.1415925 - fVar34;
        if (fVar34 - (3.1415925 - fVar34) < 0.0) {
          fVar7 = fVar34;
        }
        fVar6 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar6 = fVar5;
        }
        fVar8 = -3.1415925 - fVar34;
        if ((-3.1415925 - fVar34) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar34 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
          fVar34 = fVar6;
        }
        fVar5 = fVar8 * fVar8;
        fVar7 = fVar34 * fVar34;
        fVar14 = fVar5 * fVar5 * fVar8;
        *(undefined4 *)(puVar11 + 0x17) = 0;
        fVar6 = fVar7 * fVar7 * fVar34;
        fVar15 = fVar5 * fVar14;
        fVar13 = fVar7 * fVar6;
        *(float *)((int)puVar11 + 0xb4) =
             (fVar5 * fVar15 * 2.601887e-06 +
             fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) *
             2.0;
        *(float *)(puVar11 + 0x16) =
             (fVar7 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar7 * fVar34 * -0.16666657 + fVar34)
             * 2.0;
        MB_UpdateNavMove
                  (dVar33,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x16,puVar11 + 0x18);
      }
      else {
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar11 + 0x184));
        }
      }
    }
    else {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar9 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar9 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar9 + 0x48);
      fVar34 = -(DAT_008f47f8 * g_FrameTimeSq - *(float *)((int)pvVar9 + 0x48));
      *(float *)((int)pvVar9 + 0x48) = fVar34;
      if (fVar34 < 0.0) {
        fVar34 = (moby->pos).z;
        fVar3 = (moby->pos).y;
        *(f32 *)(puVar11 + 0x10) = (moby->pos).x;
        fVar4 = (moby->pos).w;
        *(f32 *)((int)puVar11 + 0x84) = fVar3;
        *(f32 *)((int)puVar11 + 0x8c) = fVar4;
        *(float *)(puVar11 + 0x11) = (float)((double)fVar34 + dVar33);
        dVar28 = (double)GetGroundZ(0x3fe0000000000000,uVar16 - 0x130,0);
        if ((double)(moby->pos).z < dVar28) {
          if (moby->state == '\x06') {
            (moby->pos).z = (float)dVar28;
            moby->state = '\x02';
          }
          else {
            moby->state = '\x01';
            (moby->pos).z = (float)(dVar28 - dVar33);
          }
        }
      }
    }
  }
  else if (bVar2 < 9) {
    uVar21 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar21 & 0x40) == 0) {
      if ((uVar21 & 0x120) == 0) {
        if (*(short *)((int)pvVar9 + 0xae) == 2) {
          moby->unk58 = DAT_008f4800;
        }
      }
      else {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar11 + 0x184));
      }
    }
  }
  else if ((bVar2 < 10) &&
          (uVar21 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70)),
          (uVar21 & 0x160) != 0)) {
    MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar18,lVar18 + 0x10,&DAT_004ba0b4,
               0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


