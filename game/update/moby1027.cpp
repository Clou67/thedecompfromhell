// game/update/moby1027.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x18e048-0x18f410
#include <stdio.h>
#include "game/update/moby1027.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x018e048 (0x940 bytes)
// inlined: FastAtan2 @0x18e3b0, FastAtan2 @0x18e65c
void M1027_0018e048(MobyInstance *param_1)

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
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r27;
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
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x120;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x26] = in_LR;
  puVar8[0x23] = in_f31;
  puVar8[0x22] = unaff_r31;
  uVar1 = param_1->state;
  puVar8[0x21] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  puVar8[0x20] = unaff_r29;
  puVar8[0x1f] = unaff_r28;
  puVar8[0x1e] = unaff_r27;
  if (uVar1 != '\0') {
    param_1->scale = param_1->pClass->gScale * DAT_0073fc24;
    iVar13 = FastDecTimerS32(uVar20 + 0x184);
    fVar5 = animationSpeed;
    if (iVar13 == 2) {
      param_1->state = '\a';
    }
    else {
      iVar13 = *(int *)((int)pvVar6 + 0x184);
      puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      if (((((iVar13 == *(int *)((int)puVar8 + 0xdc)) ||
            (puVar8[0x1b] = (longlong)(int)(fVar5 * 20.5), iVar13 == *(int *)((int)puVar8 + 0xdc)))
           || (puVar8[0x1b] = (longlong)(int)(fVar5 * 40.5), iVar13 == *(int *)((int)puVar8 + 0xdc))
           ) || ((puVar8[0x1b] = (longlong)(int)(fVar5 * 60.5),
                 iVar13 == *(int *)((int)puVar8 + 0xdc) ||
                 (puVar8[0x1b] = (longlong)(int)(fVar5 * 120.5),
                 iVar13 == *(int *)((int)puVar8 + 0xdc))))) ||
         (puVar8[0x1b] = (longlong)(int)(fVar5 * 179.5), iVar13 == *(int *)((int)puVar8 + 0xdc))) {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      }
      dVar25 = 0.0;
      *(undefined4 *)((int)puVar8 + 0x74) = 0;
      iVar13 = MB_damage(param_1,0x330000,0);
      iVar14 = MB_HandleDamage
                         (param_1,iVar13,uVar20 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
      if ((*(int *)(puVar8 + 0xe) != 1) && (param_1->state != '\x06')) {
        fVar5 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x74);
        *(float *)((int)pvVar6 + 0x20) = fVar5;
        if ((double)fVar5 <= dVar25) {
          iVar14 = 1;
        }
        uVar15 = FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0x98) = 0;
        fVar2 = DAT_0073fc10;
        fVar5 = g_FrameTimeSq;
        *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
        *(float *)((int)pvVar6 + 0x80) = fVar2 * fVar5;
        *(undefined1 *)((int)pvVar6 + 0xad) = 0;
        *(undefined4 *)((int)pvVar6 + 0x94) = 1;
        *(float *)((int)pvVar6 + 0x84) = fVar5 * 30.0;
        fVar2 = DAT_0073fc18;
        fVar5 = g_FrameTime;
        if (iVar14 < 3) {
          if ((-1 < iVar14) && (0 < iVar14)) {
            fVar5 = DAT_0073fc10 * g_FrameTimeSq;
            param_1->modeBits =
                 param_1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(float *)((int)pvVar6 + 0x80) = fVar5;
            fVar5 = g_FrameTime;
            *(float *)((int)pvVar6 + 0x88) = DAT_0073fc20 * g_FrameTime;
            fVar2 = DAT_0073fc1c;
            *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
            *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
            *(float *)((int)pvVar6 + 0x8c) = fVar2 * fVar5;
            fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
            fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
            dVar22 = ABS((double)fVar5);
            dVar23 = ABS((double)fVar2);
            *(float *)(puVar8 + 0x10) = fVar5;
            *(float *)((int)puVar8 + 0x84) = fVar2;
            *(float *)(puVar8 + 0x11) = (float)(dVar22 - dVar23);
            uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
            dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
            if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
              dVar24 = dVar23;
            }
            fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
            if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
              dVar23 = dVar22;
            }
            fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar25 < dVar24) {
              lVar11 = uVar10 - 0x110;
              lVar19 = uVar10 - 0x78;
              lVar16 = uVar10 - 0x88;
              lVar21 = 2;
              fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar8 + 0xa4) = fVar3;
              *(float *)((int)puVar8 + 0x9c) = fVar3;
              *(float *)(puVar8 + 0x14) = fVar3;
              *(float *)(puVar8 + 0x13) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4;
              *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
              *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
                iVar14 = (int)lVar16;
                lVar16 = lVar16 + 8;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar19 = uVar10 - 0x88;
              pfVar17 = (float *)&DAT_007358e0;
              lVar11 = lVar12;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar11 = 2;
              do {
                iVar14 = (int)lVar12;
                iVar9 = (int)lVar19;
                lVar12 = lVar12 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
            }
            *(float *)((int)puVar8 + 0x7c) = (float)dVar25;
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
            *(undefined4 *)(puVar8 + 7) = uVar15;
            uVar15 = *(undefined4 *)(iVar13 + 0x1c);
            *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
            *(undefined4 *)((int)puVar8 + 0x3c) = uVar15;
            MB_VecAtan2Angles
                      (puVar8[6],puVar8[7],uVar10 - 0xa4,uVar20 + 0x88,uVar20 + 0x8c);
            MB_StartKick((double)*(float *)((int)puVar8 + 0x7c),param_1,uVar20 + 0x70);
            MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
            param_1->state = '\x06';
            *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
          }
        }
        else if (iVar14 < 0xb) {
          if (iVar14 < 9) {
            *(undefined4 *)((int)pvVar6 + 0x8c) = 0;
            *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40400000;
            *(undefined4 *)((int)pvVar6 + 0xc4) = 0x40c00000;
            *(float *)((int)pvVar6 + 0x88) = fVar2 * fVar5;
            fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
            fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
            dVar22 = ABS((double)fVar5);
            dVar23 = ABS((double)fVar2);
            *(float *)((int)puVar8 + 0x8c) = fVar5;
            *(float *)(puVar8 + 0x12) = fVar2;
            *(float *)((int)puVar8 + 0x94) = (float)(dVar22 - dVar23);
            uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            dVar24 = ABS((double)*(float *)((int)puVar8 + 0x8c));
            if ((double)*(float *)((int)puVar8 + 0x94) - dVar25 < 0.0) {
              dVar24 = dVar23;
            }
            fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar23 = ABS((double)*(float *)(puVar8 + 0x12));
            if ((double)*(float *)((int)puVar8 + 0x94) - dVar25 < 0.0) {
              dVar23 = dVar22;
            }
            fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar25 < dVar24) {
              lVar11 = uVar10 - 0x110;
              lVar16 = uVar10 - 0x68;
              lVar19 = uVar10 - 0x58;
              lVar21 = 2;
              fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar8 + 0xc4) = fVar3;
              *(float *)((int)puVar8 + 0xbc) = fVar3;
              *(float *)(puVar8 + 0x18) = fVar3;
              *(float *)(puVar8 + 0x17) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar4;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar3 * fVar3;
                iVar14 = (int)lVar16;
                lVar11 = lVar11 + 8;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar19 = uVar10 - 0x68;
              pfVar17 = (float *)&DAT_007358e0;
              lVar11 = lVar12;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar3;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar11 = 2;
              do {
                iVar14 = (int)lVar12;
                iVar9 = (int)lVar19;
                lVar12 = lVar12 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
            }
            *(float *)(puVar8 + 0xf) = (float)dVar25;
            uVar15 = *(undefined4 *)(iVar13 + 0x18);
            *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
            *(undefined4 *)(puVar8 + 7) = uVar15;
            uVar15 = *(undefined4 *)(iVar13 + 0x1c);
            *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
            *(undefined4 *)((int)puVar8 + 0x3c) = uVar15;
            MB_VecAtan2Angles
                      (puVar8[6],puVar8[7],uVar10 - 0xa8,uVar20 + 0x88,uVar20 + 0x8c);
            MB_StartKick((double)*(float *)(puVar8 + 0xf),param_1,uVar20 + 0x70);
            param_1->state = '\x05';
            if (param_1->group != -1) {
              MB_SetGroupField(param_1->group,1);
            }
            *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
          }
          else {
            *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
          }
        }
        MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      }
      param_1->damage = -1;
      MB_ColorDyingMoby(param_1,uVar20 + 0x60);
      if ((*(int *)((int)pvVar6 + 0x38) != 0) || (param_1->setByGroup == '\x01')) {
        dVar25 = (double)MB_randRangeFloat(180.0,240.0);
        uVar15 = FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar6 + 400) = uVar15;
        *(undefined4 *)((int)pvVar6 + 0x38) = 0;
        param_1->setByGroup = '\0';
      }
      FastDecTimerS32(uVar20 + 400);
      uVar15 = 0x41400000;
      if (*(int *)((int)pvVar6 + 400) != 0) {
        uVar15 = 0x41c00000;
      }
      *(undefined4 *)((int)pvVar6 + 0x188) = uVar15;
      pSVar7 = Splines[*(int *)((int)pvVar6 + 0x180)];
      iVar13 = MB_getTargetInArea
                         (param_1,uVar20 + 0x120,pSVar7,0,0,pSVar7->points,pSVar7->cnt);
      if (((iVar13 != 2) && (*(int *)((int)pvVar6 + 400) == 0)) &&
         ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
          fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
          *(float *)((int)pvVar6 + 0x188) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
        *(undefined4 *)((int)pvVar6 + 0x164) = 2;
      }
      if (*(int *)((int)pvVar6 + 0x160) == 0) {
        *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
      }
    }
  }
  return;
}


// 0x018e9f8 (0xa18 bytes)
// inlined: FastAtan2 @0x18ec38, FastAtan2 @0x18ef2c
// strings: 0065429c: 'Kamikaze with an invalid boundPath. UID = %d'

/* Moby 1027 */

void UpdateMoby_1027(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  longlong lVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  float fVar32;
  
  lVar19 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar20 = uVar15 - 0x180;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar15;
  puVar8[0x32] = in_LR;
  puVar8[0x2d] = in_f29;
  puVar8[0x2e] = in_f30;
  puVar8[0x2f] = in_f31;
  puVar8[0x2c] = unaff_r31;
  puVar8[0x2b] = unaff_r30;
  puVar8[0x2a] = unaff_r29;
  puVar8[0x29] = unaff_r28;
  pvVar6 = moby->pVar;
  M1027_0018e048();
  uVar1 = moby->state;
  iVar7 = *(int *)((int)pvVar6 + 0x160);
  dVar26 = (double)(moby->pos).z;
  fVar32 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  if (uVar1 == '\a') {
    *(undefined4 *)((int)puVar8 + 0xdc) = 0;
    *(undefined4 *)(puVar8 + 0x1b) = 0;
    *(undefined4 *)((int)puVar8 + 0xd4) = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0;
    puVar8[0x12] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar19,uVar15 - 0xb0,
               lVar19 + 0x10,0,0xffffffffffffffff,10,3,0x10);
    DeleteMoby(moby);
  }
  else if (uVar1 == '\x06') {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar17 & 0x121) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_0018e988,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x05') {
    MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    (moby->pos).z = (float)dVar26;
    *(undefined4 *)((int)pvVar6 + 0x78) = 0;
    if ((SQRT(*(float *)((int)pvVar6 + 0x70) * *(float *)((int)pvVar6 + 0x70) +
              *(float *)((int)pvVar6 + 0x74) * *(float *)((int)pvVar6 + 0x74)) <
         g_FrameTime) && (moby->state = '\x04', *(int *)((int)pvVar6 + 0x184) == 0)) {
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar29 = loadVectorLeftIndexed(0x20,0x18e988);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                           auVar30);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x184,
                          ZEXT48(pvVar6));
      *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
    }
  }
  else {
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') {
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,1);
        }
        moby->state = '\x04';
        if (moby->animationId != '\x04') {
          puVar8[0x27] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,4,0,*(undefined4 *)((int)puVar8 + 0x13c));
        }
        if (*(int *)((int)pvVar6 + 0x184) != 0) {
          return;
        }
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = loadVectorLeftIndexed(0x20,0x18e988);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                             auVar30);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x184,
                            ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
        return;
      }
      if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          fVar32 = *(float *)(iVar7 + 0x10) - fVar32;
          fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
          fVar4 = ABS(fVar32);
          fVar3 = ABS(fVar2);
          *(float *)((int)puVar8 + 0xec) = fVar32;
          *(float *)(puVar8 + 0x1e) = fVar2;
          *(float *)((int)puVar8 + 0xf4) = fVar4 - fVar3;
          fVar32 = 0.0;
          uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar8 + 0x1e) >> 0x1d) & 4;
          fVar2 = ABS(*(float *)((int)puVar8 + 0xec));
          if (*(float *)((int)puVar8 + 0xf4) - 0.0 < 0.0) {
            fVar2 = fVar3;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
          fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
          fVar9 = ABS(*(float *)(puVar8 + 0x1e));
          if (*(float *)((int)puVar8 + 0xf4) - 0.0 < 0.0) {
            fVar9 = fVar4;
          }
          if (0.0 < fVar2) {
            lVar19 = uVar15 - 0x170;
            lVar23 = uVar15 - 0x58;
            lVar21 = uVar15 - 0x68;
            lVar24 = 2;
            fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
            fVar4 = fVar2 * fVar2;
            *(float *)((int)puVar8 + 0x124) = fVar2;
            *(float *)((int)puVar8 + 0x11c) = fVar2;
            *(float *)(puVar8 + 0x24) = fVar2;
            *(float *)(puVar8 + 0x23) = fVar2;
            fVar2 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0x11c) = *(float *)((int)puVar8 + 0x11c) * fVar4;
            *(float *)(puVar8 + 0x24) = *(float *)(puVar8 + 0x24) * fVar2;
            *(float *)((int)puVar8 + 0x124) = *(float *)((int)puVar8 + 0x124) * fVar2 * fVar4;
            do {
              *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x108) * fVar2 * fVar2;
              iVar7 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
              lVar23 = lVar23 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar23 = uVar15 - 0x68;
            pfVar22 = (float *)&DAT_007358e0;
            lVar19 = lVar20;
            lVar21 = lVar23;
            do {
              fVar2 = *pfVar22;
              fVar4 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x118) * fVar2;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar19 = 2;
            do {
              iVar7 = (int)lVar20;
              lVar20 = lVar20 + 0x10;
              iVar10 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              fVar32 = fVar32 + *(float *)(iVar7 + 0x118) + *(float *)(iVar10 + 4) +
                       *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc);
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            fVar32 = (fVar32 + 0.7853982) * fVar5 + fVar3;
          }
          fVar32 = OrganicDeltAng
                             (fVar32,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                              g_FrameTime * 12.566371,&(moby->rotation).z,0x18e988,
                              (float *)((int)pvVar6 + 0x18c));
          if (*(int *)((int)pvVar6 + 0x164) == 2) {
            return;
          }
          if (moby->group != -1) {
            MB_SetGroupField((double)fVar32,moby->group,1);
          }
          moby->state = '\x02';
          return;
        }
        if (uVar1 != '\0') {
          return;
        }
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x40400000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 3;
        *(undefined1 *)((int)pvVar6 + 0x28) = 2;
        *(undefined1 *)((int)pvVar6 + 0x29) = 0;
        if (*(int *)((int)pvVar6 + 0x180) == -1) {
          printf("Kamikaze with an invalid boundPath. UID = %d",moby->uid);
          DeleteMoby(moby);
          return;
        }
        MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
        dVar26 = 0.5;
        *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
        uVar16 = FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0xd0) = uVar16;
        *(float *)((int)pvVar6 + 0xf4) = g_FrameTime * 4.0;
        moby->state = '\x01';
        if (moby->animationId != '\x01') {
          puVar8[0x27] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar8 + 0x13c));
        }
        (moby->pos).z = (float)((double)(moby->pos).z + dVar26);
        return;
      }
    }
    fVar32 = *(float *)(iVar7 + 0x10) - fVar32;
    fVar2 = *(float *)(iVar7 + 0x14) - fVar2;
    fVar3 = ABS(fVar32);
    fVar4 = ABS(fVar2);
    *(float *)(puVar8 + 0x1c) = fVar32;
    *(float *)((int)puVar8 + 0xe4) = fVar2;
    *(float *)(puVar8 + 0x1d) = fVar3 - fVar4;
    dVar27 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xe4) >> 0x1d) & 4;
    fVar32 = ABS(*(float *)(puVar8 + 0x1c));
    if (*(float *)(puVar8 + 0x1d) - 0.0 < 0.0) {
      fVar32 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar8 + 0xe4));
    if (*(float *)(puVar8 + 0x1d) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    dVar28 = dVar27;
    if (0.0 < fVar32) {
      lVar21 = uVar15 - 0x170;
      lVar23 = uVar15 - 0x88;
      lVar24 = uVar15 - 0x78;
      lVar25 = 2;
      fVar32 = (fVar5 - fVar32) / (fVar5 + fVar32);
      fVar3 = fVar32 * fVar32;
      *(float *)((int)puVar8 + 0x104) = fVar32;
      *(float *)((int)puVar8 + 0xfc) = fVar32;
      *(float *)(puVar8 + 0x20) = fVar32;
      *(float *)(puVar8 + 0x1f) = fVar32;
      fVar32 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0xfc) = *(float *)((int)puVar8 + 0xfc) * fVar3;
      *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar32;
      *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar32 * fVar3;
      do {
        *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xe8) * fVar32 * fVar32;
        iVar10 = (int)lVar23;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar10 + 4) * fVar32 * fVar32;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar15 - 0x88;
      pfVar22 = (float *)&DAT_007358e0;
      lVar21 = lVar20;
      lVar23 = lVar24;
      do {
        fVar32 = *pfVar22;
        fVar3 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xf8) * fVar32;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar21 = 2;
      do {
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar11 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar2);
    }
    OrganicDeltAng
              ((float)dVar28,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x18c));
    fVar2 = (moby->pos).y - *(float *)(iVar7 + 0x14);
    fVar4 = (moby->pos).x - *(float *)(iVar7 + 0x10);
    fVar32 = (moby->pos).z;
    dVar28 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2);
    if (1.5 < dVar28) {
      fVar2 = (moby->rotation).z;
      fVar4 = fVar2 + 1.5707963;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar9 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar9 = fVar3;
      }
      fVar2 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar2 = fVar5;
      }
      fVar4 = fVar9 * fVar9;
      fVar3 = fVar2 * fVar2;
      fVar13 = fVar4 * fVar4 * fVar9;
      fVar5 = fVar3 * fVar3 * fVar2;
      fVar14 = fVar4 * fVar13;
      fVar12 = fVar3 * fVar5;
      *(float *)(puVar8 + 0x18) =
           (fVar3 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2) *
           *(float *)((int)pvVar6 + 0xf4);
      fVar2 = *(float *)((int)pvVar6 + 0xf4);
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(float *)((int)puVar8 + 0xc4) =
           (fVar4 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar4 * fVar9 * -0.16666657 + fVar9) *
           fVar2;
      fVar2 = DAT_0071f408;
      fVar4 = 0.05;
      if ((double)fVar32 - (double)(g_heroPosition.z + 0.8) < 0.0) {
        fVar4 = 0.1;
      }
      fVar4 = (float)((double)(g_heroPosition.z + 0.8) - dVar26) * fVar4;
      *(float *)(puVar8 + 0x19) = fVar4;
      fVar32 = fVar2 * 0.3;
      if (fVar4 <= fVar32) {
        fVar2 = fVar2 * -0.3;
        if (fVar4 < fVar2) {
          *(float *)(puVar8 + 0x19) = fVar2;
        }
      }
      else {
        *(float *)(puVar8 + 0x19) = fVar32;
      }
      MB_MoveAndCollide(dVar27,0x3fe0000000000000,dVar27,lVar19,uVar15 - 0xc0);
    }
    if (((dVar28 < 6.0) && (moby->state == '\x02')) &&
       (moby->state = '\x03', moby->animationId != '\x03')) {
      puVar8[0x27] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar19,3,0,*(undefined4 *)((int)puVar8 + 0x13c));
    }
  }
  return;
}


