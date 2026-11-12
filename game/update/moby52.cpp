// game/update/moby52.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3a9af8-0x3ab498
#include <stdio.h>
#include "game/update/moby52.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x03a9af8 (0xa68 bytes)
// inlined: FastAtan2 @0x3a9e88, FastAtan2 @0x3aa134
void M52_003a9af8(MobyInstance *param_1)

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
    param_1->scale =
         (param_1->pClass->gScale * DAT_008436b4 - param_1->scale) * 0.1 + param_1->scale;
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
        fVar2 = DAT_008436a0;
        fVar5 = g_FrameTimeSq;
        *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
        *(float *)((int)pvVar6 + 0x80) = fVar2 * fVar5;
        *(undefined1 *)((int)pvVar6 + 0xad) = 0;
        *(undefined4 *)((int)pvVar6 + 0x94) = 1;
        *(float *)((int)pvVar6 + 0x84) = fVar5 * 30.0;
        PlayMobySound(8,0,param_1);
        fVar2 = DAT_008436a8;
        fVar5 = g_FrameTime;
        if (iVar14 < 3) {
          if ((-1 < iVar14) && (0 < iVar14)) {
            fVar5 = DAT_008436a0 * g_FrameTimeSq;
            param_1->modeBits =
                 param_1->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(float *)((int)pvVar6 + 0x80) = fVar5;
            fVar5 = g_FrameTime;
            *(float *)((int)pvVar6 + 0x88) = DAT_008436b0 * g_FrameTime;
            fVar2 = DAT_008436ac;
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
      iVar13 = MB_randInt(4);
      if (iVar13 == 0) {
        if (*(int *)((int)pvVar6 + 400) == 0) {
          *(undefined4 *)((int)pvVar6 + 0x188) = 0x41400000;
          pSVar7 = Splines[*(int *)((int)pvVar6 + 0x180)];
          iVar13 = MB_getTargetInArea
                             (0x4028000000000000,param_1,uVar20 + 0x120,pSVar7,0,0,pSVar7->points,
                              pSVar7->cnt);
          if (((iVar13 != 2) && (*(int *)((int)pvVar6 + 400) == 0)) &&
             ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
              fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
              *(float *)((int)pvVar6 + 0x188) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
              (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
            *(undefined4 *)((int)pvVar6 + 0x164) = 2;
          }
        }
        else {
          *(undefined4 *)((int)pvVar6 + 0x188) = 0x41c00000;
          iVar13 = MB_getTarget(0x4038000000000000,param_1,&DAT_003a9ab8,uVar20 + 0x120);
          if (((iVar13 != 2) && (*(int *)((int)pvVar6 + 400) == 0)) &&
             ((fVar5 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124),
              fVar2 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120),
              *(float *)((int)pvVar6 + 0x188) < SQRT(fVar2 * fVar2 + fVar5 * fVar5) ||
              (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar6 + 0x128)))))) {
            *(undefined4 *)((int)pvVar6 + 0x164) = 2;
          }
        }
      }
      else {
        iVar13 = *(int *)((int)pvVar6 + 0x160);
        if ((iVar13 == 0) || (*(char *)(iVar13 + 0x20) == -3 || *(char *)(iVar13 + 0x20) == -2)) {
          *(undefined4 *)((int)pvVar6 + 0x160) = 0;
          *(undefined4 *)((int)pvVar6 + 0x164) = 2;
        }
        else {
          *(undefined4 *)((int)pvVar6 + 0x120) = *(undefined4 *)(iVar13 + 0x10);
          *(undefined4 *)((int)pvVar6 + 0x124) = *(undefined4 *)(iVar13 + 0x14);
          *(undefined4 *)((int)pvVar6 + 0x128) = *(undefined4 *)(iVar13 + 0x18);
          *(undefined4 *)((int)pvVar6 + 300) = *(undefined4 *)(iVar13 + 0x1c);
        }
      }
      if (*(int *)((int)pvVar6 + 0x160) == 0) {
        *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
      }
    }
  }
  return;
}


// 0x03aa5f0 (0xea8 bytes)
// inlined: FastAtan2 @0x3aa908, FastAtan2 @0x3aad10
// strings: 00656a08: 'Kamikaze with an invalid boundPath. UID = %d'

/* Moby 52 */

void UpdateMoby_52(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar15;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte bVar25;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  float fVar37;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar20 = uVar13 - 0x1a0;
  puVar7 = (ulonglong *)lVar20;
  *puVar7 = uVar13;
  puVar7[0x36] = in_LR;
  puVar7[0x32] = in_f30;
  puVar7[0x33] = in_f31;
  puVar7[0x31] = unaff_r31;
  puVar7[0x2f] = unaff_r29;
  puVar7[0x30] = unaff_r30;
  puVar7[0x2e] = unaff_r28;
  pvVar6 = moby->pVar;
  M52_003a9af8(lVar14);
  iVar17 = *(int *)((int)pvVar6 + 0x160);
  DoManipulator(0x40059999a0000000,moby,0,(Manipulator *)((int)pvVar6 + 0x280));
  if ((moby->enabled != '\0') &&
     (fVar37 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar2 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar37 * fVar37) < 29.0)) {
    MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x17';
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  uVar1 = moby->state;
  bVar25 = (uVar1 == '\x05') << 1;
  if (uVar1 == '\a') {
    MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
    iVar17 = *(int *)((int)pvVar6 + 0x194);
    if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == moby)) &&
       (g_SoundChannels[iVar17].state != '\0')) {
      sound_Kill(iVar17);
    }
    *(undefined4 *)((int)pvVar6 + 0x194) = 0xffffffff;
    *(undefined4 *)((int)puVar7 + 0xec) = 0;
    *(undefined4 *)(puVar7 + 0x1d) = 0;
    *(undefined4 *)((int)puVar7 + 0xe4) = 0;
    *(undefined4 *)(puVar7 + 0x1c) = 0;
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0xffffffffffffffff;
    puVar7[0x17] = 0;
    MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar14,uVar13 - 0xc0,
               lVar14 + 0x10,0xffffffffffffffff,0,10,3,0x10);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x06') {
    iVar17 = *(int *)((int)pvVar6 + 0x194);
    if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == moby)) &&
       (g_SoundChannels[iVar17].state != '\0')) {
      sound_Kill(iVar17);
    }
    *(undefined4 *)((int)pvVar6 + 0x194) = 0xffffffff;
    uVar18 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar18 & 0x121) == 0) {
      return;
    }
    MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar14,lVar14 + 0x10,&DAT_003aa560,0);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x05') {
    dVar27 = (double)(moby->pos).z;
    MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    (moby->pos).z = (float)dVar27;
    *(undefined4 *)((int)pvVar6 + 0x78) = 0;
    if (g_FrameTime * 2.0 <=
        SQRT(*(float *)((int)pvVar6 + 0x70) * *(float *)((int)pvVar6 + 0x70) +
             *(float *)((int)pvVar6 + 0x74) * *(float *)((int)pvVar6 + 0x74))) {
      return;
    }
    if (*(int *)((int)pvVar6 + 0x194) == -1) {
      iVar17 = PlayMobySound(1,4,moby);
      *(int *)((int)pvVar6 + 0x194) = iVar17;
    }
    *(undefined4 *)((int)pvVar6 + 0x198) = 1;
    moby->state = '\x04';
    if (*(int *)((int)pvVar6 + 0x184) != 0) {
      return;
    }
    auVar36 = ZEXT416(0xffffffff);
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar36 = loadVectorLeftIndexed(0x34,0x3aa560);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar36 = vectorMultiplyAddFloatingPoint
                        (auVar31,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar29);
    auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar16 = storeVectorElementWordIndexed
                       (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,
                        ZEXT48(pvVar6));
    *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
    return;
  }
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      *(undefined4 *)((int)pvVar6 + 0x198) = 1;
      moby->state = '\x04';
      if (*(int *)((int)pvVar6 + 0x194) == -1) {
        iVar17 = PlayMobySound(1,4,moby);
        *(int *)((int)pvVar6 + 0x194) = iVar17;
      }
      if (moby->animationId != '\x04') {
        puVar7[0x29] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,4,0,*(undefined4 *)((int)puVar7 + 0x14c));
      }
      if (*(int *)((int)pvVar6 + 0x184) != 0) {
        return;
      }
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x34,0x3aa560);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar29);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,
                          ZEXT48(pvVar6));
      *(undefined4 *)((int)pvVar6 + 0x184U & 0xfffffffc) = uVar16;
      return;
    }
    if (uVar1 != '\x02') {
      if (uVar1 == '\x01') {
        dVar28 = 0.5;
        dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar14 + 0x10,0);
        fVar37 = (moby->pos).z;
        (moby->pos).z = ((float)(dVar27 + dVar28) - fVar37) * 0.1 + fVar37;
        fVar37 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
        fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
        fVar2 = ABS(fVar37);
        fVar5 = ABS(fVar3);
        *(float *)((int)puVar7 + 0xfc) = fVar37;
        *(float *)(puVar7 + 0x20) = fVar3;
        *(float *)((int)puVar7 + 0x104) = fVar2 - fVar5;
        fVar37 = 0.0;
        uVar23 = (ulonglong)(*(uint *)((int)puVar7 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x20) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar7 + 0xfc));
        if (*(float *)((int)puVar7 + 0x104) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar4 = ABS(*(float *)(puVar7 + 0x20));
        if (*(float *)((int)puVar7 + 0x104) - 0.0 < 0.0) {
          fVar4 = fVar2;
        }
        fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar19 = uVar13 - 400;
          lVar21 = uVar13 - 0x78;
          lVar24 = uVar13 - 0x68;
          lVar26 = 2;
          fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x134) = fVar3;
          *(float *)((int)puVar7 + 300) = fVar3;
          *(float *)(puVar7 + 0x26) = fVar3;
          *(float *)(puVar7 + 0x25) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar7 + 300) = *(float *)((int)puVar7 + 300) * fVar4;
          *(float *)(puVar7 + 0x26) = *(float *)(puVar7 + 0x26) * fVar3;
          *(float *)((int)puVar7 + 0x134) = *(float *)((int)puVar7 + 0x134) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x118) * fVar3 * fVar3;
            iVar17 = (int)lVar21;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar13 - 0x78;
          pfVar22 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar21 = lVar24;
          do {
            fVar3 = *pfVar22;
            fVar4 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar19 + 0x128) = *(float *)((int)lVar19 + 0x128) * fVar3;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
            lVar21 = lVar21 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar20;
            iVar8 = (int)lVar24;
            lVar20 = lVar20 + 0x10;
            lVar24 = lVar24 + 0x10;
            fVar37 = fVar37 + *(float *)(iVar17 + 0x128) + *(float *)(iVar8 + 4) +
                     *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar37 = (fVar37 + 0.7853982) * fVar5 + fVar2;
        }
        fVar37 = OrganicDeltAng
                           (fVar37,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x3aa560,
                            (float *)((int)pvVar6 + 0x18c));
        if ((moby->field43_0x70 & 2U) != 0) {
          iVar17 = MB_randInt((double)fVar37,0x13);
          if (iVar17 == 0) {
            if (moby->animationId != '\x02') {
              uVar15 = MB_randRange(7,0xc);
              MB_SetAnimation(lVar14,2,0,uVar15);
            }
          }
          else if (moby->animationId != '\x01') {
            uVar15 = MB_randRange(7,0xe);
            MB_SetAnimation(lVar14,1,0,uVar15);
          }
          dVar27 = (double)MB_randRangeFloat(0.95,1.05);
          moby->unk58 = (float)dVar27;
        }
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          return;
        }
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,1);
        }
        if (*(int *)((int)pvVar6 + 0x194) == -1) {
          iVar17 = PlayMobySound(1,4,moby);
          *(int *)((int)pvVar6 + 0x194) = iVar17;
        }
        *(undefined4 *)((int)pvVar6 + 0x198) = 1;
        moby->state = '\x02';
        return;
      }
      if (uVar1 != '\0') {
        return;
      }
      *(undefined4 *)((int)pvVar6 + 0x20) = 0x40400000;
      *(undefined2 *)((int)pvVar6 + 0x24) = 3;
      *(undefined1 *)((int)pvVar6 + 0x28) = 2;
      *(undefined1 *)((int)pvVar6 + 0x5a) = 6;
      *(undefined1 *)((int)pvVar6 + 0x58) = 8;
      if (*(int *)((int)pvVar6 + 0x180) == -1) {
        printf("Kamikaze with an invalid boundPath. UID = %d",moby->uid);
        DeleteMoby(moby);
        return;
      }
      MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
      *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
      uVar16 = FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar6 + 0xd0) = uVar16;
      *(float *)((int)pvVar6 + 0xf4) = g_FrameTime * 7.75;
      moby->state = '\x01';
      if (moby->animationId != '\x01') {
        puVar7[0x29] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar7 + 0x14c));
      }
      *(undefined4 *)((int)pvVar6 + 0x194) = 0xffffffff;
      return;
    }
  }
  fVar37 = *(float *)(iVar17 + 0x10) - (moby->pos).x;
  fVar3 = *(float *)(iVar17 + 0x14) - (moby->pos).y;
  fVar5 = ABS(fVar37);
  fVar2 = ABS(fVar3);
  *(float *)(puVar7 + 0x1e) = fVar37;
  *(float *)((int)puVar7 + 0xf4) = fVar3;
  *(float *)(puVar7 + 0x1f) = fVar5 - fVar2;
  dVar27 = 0.0;
  auVar36 = loadVectorLeftIndexed(0x18,lVar14);
  uVar23 = (ulonglong)(*(uint *)(puVar7 + 0x1e) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x1f) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0xf4) >> 0x1d) & 4;
  fVar37 = ABS(*(float *)(puVar7 + 0x1e));
  if (*(float *)(puVar7 + 0x1f) - 0.0 < 0.0) {
    fVar37 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar7 + 0xf4));
  if (*(float *)(puVar7 + 0x1f) - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  dVar28 = dVar27;
  if (0.0 < fVar37) {
    lVar19 = uVar13 - 400;
    lVar21 = uVar13 - 0x98;
    lVar24 = uVar13 - 0x88;
    lVar26 = 2;
    fVar37 = (fVar4 - fVar37) / (fVar4 + fVar37);
    fVar5 = fVar37 * fVar37;
    *(float *)((int)puVar7 + 0x114) = fVar37;
    *(float *)((int)puVar7 + 0x10c) = fVar37;
    *(float *)(puVar7 + 0x22) = fVar37;
    *(float *)(puVar7 + 0x21) = fVar37;
    fVar37 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar5;
    *(float *)(puVar7 + 0x22) = *(float *)(puVar7 + 0x22) * fVar37;
    *(float *)((int)puVar7 + 0x114) = *(float *)((int)puVar7 + 0x114) * fVar37 * fVar5;
    do {
      *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0xf8) * fVar37 * fVar37;
      iVar8 = (int)lVar21;
      lVar19 = lVar19 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar8 + 4) * fVar37 * fVar37;
      lVar24 = lVar24 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar24 = uVar13 - 0x98;
    pfVar22 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar21 = lVar24;
    do {
      fVar37 = *pfVar22;
      fVar5 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0x108) * fVar37;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    lVar19 = lVar20;
    do {
      iVar8 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar9 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar8 + 0x108)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  OrganicDeltAng
            ((float)dVar28,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
             g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
             (float *)((int)pvVar6 + 0x18c));
  fVar37 = (moby->pos).y - *(float *)(iVar17 + 0x14);
  fVar3 = (moby->pos).x - *(float *)(iVar17 + 0x10);
  iVar17 = *(int *)((int)pvVar6 + 0x198);
  dVar28 = (double)SQRT(fVar3 * fVar3 + fVar37 * fVar37);
  if (1.899999976158142 < dVar28) {
    iVar17 = 1;
    *(undefined4 *)((int)pvVar6 + 0x198) = 1;
  }
  if (1.399999976158142 <= dVar28) {
    if (iVar17 != 0) {
      fVar37 = (moby->rotation).z;
      fVar3 = fVar37 + 1.5707963;
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      fVar2 = 3.1415925 - fVar37;
      if (fVar37 - (3.1415925 - fVar37) < 0.0) {
        fVar2 = fVar37;
      }
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      fVar5 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar5 = fVar3;
      }
      auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      fVar4 = -3.1415925 - fVar37;
      if ((-3.1415925 - fVar37) - fVar2 < 0.0) {
        fVar4 = fVar2;
      }
      fVar37 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
        fVar37 = fVar5;
      }
      fVar3 = fVar4 * fVar4;
      fVar2 = fVar37 * fVar37;
      fVar11 = fVar3 * fVar3 * fVar4;
      fVar5 = fVar2 * fVar2 * fVar37;
      fVar12 = fVar3 * fVar11;
      fVar10 = fVar2 * fVar5;
      *(float *)(puVar7 + 0x18) =
           (fVar2 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar37 * -0.16666657 + fVar37) *
           *(float *)((int)pvVar6 + 0xf4);
      fVar37 = *(float *)((int)pvVar6 + 0xf4);
      *(undefined4 *)(puVar7 + 0x19) = 0;
      auVar33 = loadVectorLeftIndexed(0x18,lVar14);
      *(float *)((int)puVar7 + 0xc4) =
           (fVar3 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) *
           fVar37;
      auVar30 = loadVectorLeftIndexed(0x5c,0x3aa560);
      auVar34 = loadVectorLeftIndexed(0x88,0x969ce0);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0x18,0x3aa560);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = vectorAddFloatingPoint
                          (auVar34,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
      auVar30 = loadVectorLeftIndexed(0x60,0x3aa560);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = vectorSubtractFloatingPoint(auVar34,auVar36);
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar34,auVar33);
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar36 = vectorConditionalSelect
                          (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar36,auVar29);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar29 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      uVar16 = storeVectorElementWordIndexed(auVar29,200,lVar20);
      *(undefined4 *)(puVar7 + 0x19) = uVar16;
      auVar36 = loadVectorLeftIndexed(100,0x3aa560);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar31);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar29,auVar36);
      if ((bool)(bVar25 >> 1 & 1)) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar31 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(0x68,0x3aa560);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar31);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        vectorCompareGreaterThanOrEqualToFloatingPoint(auVar29,auVar36);
        if ((bool)(bVar25 >> 1 & 1)) {
          uVar16 = storeVectorElementWordIndexed(auVar36,200,lVar20);
          *(undefined4 *)(puVar7 + 0x19) = uVar16;
        }
      }
      else {
        uVar16 = storeVectorElementWordIndexed(auVar36,200,lVar20);
        *(undefined4 *)(puVar7 + 0x19) = uVar16;
      }
      MB_MoveAndCollide(dVar27,0x3fe0000000000000,dVar27,lVar14,uVar13 - 0xe0);
      goto LAB_003ab190;
    }
  }
  else {
    *(undefined4 *)((int)pvVar6 + 0x198) = 0;
  }
  auVar29 = ZEXT416(0xffffffff);
  auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  *(undefined4 *)((int)puVar7 + 0xdc) = 0;
  *(undefined4 *)(puVar7 + 0x1b) = 0;
  *(undefined4 *)((int)puVar7 + 0xd4) = 0;
  *(undefined4 *)(puVar7 + 0x1a) = 0;
  auVar29 = loadVectorLeftIndexed(0x6c,0x3aa560);
  auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = loadVectorLeftIndexed(0x88,0x969ce0);
  auVar30 = vectorAddFloatingPoint
                      (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
  auVar29 = loadVectorLeftIndexed(0x18,0x3aa560);
  auVar32 = loadVectorLeftIndexed(0x18,lVar14);
  auVar31 = loadVectorLeftIndexed(0x60,0x3aa560);
  auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = vectorSubtractFloatingPoint(auVar30,auVar36);
  auVar36 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar32);
  auVar32 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
  auVar30 = vectorShiftLeftIntegerWord(auVar33,auVar33);
  auVar29 = vectorConditionalSelect
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                       auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar36);
  auVar36 = ZEXT416(0xffffffff);
  auVar31 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar29,auVar30);
  auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar29 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  uVar16 = storeVectorElementWordIndexed(auVar29,0xd8,lVar20);
  *(undefined4 *)(puVar7 + 0x1b) = uVar16;
  auVar36 = loadVectorLeftIndexed(100,0x3aa560);
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar31
                      );
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  vectorCompareGreaterThanFloatingPoint(auVar29,auVar36);
  if ((bool)(bVar25 >> 1 & 1)) {
    auVar36 = ZEXT416(0xffffffff);
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar36 = loadVectorLeftIndexed(0x68,0x3aa560);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar31);
    auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
    vectorCompareGreaterThanOrEqualToFloatingPoint(auVar29,auVar36);
    if ((bool)(bVar25 >> 1 & 1)) {
      uVar16 = storeVectorElementWordIndexed(auVar36,0xd8,lVar20);
      *(undefined4 *)(puVar7 + 0x1b) = uVar16;
    }
  }
  else {
    uVar16 = storeVectorElementWordIndexed(auVar36,0xd8,lVar20);
    *(undefined4 *)(puVar7 + 0x1b) = uVar16;
  }
  MB_MoveAndCollide(dVar27,0x3fe0000000000000,dVar27,lVar14,uVar13 - 0xd0);
LAB_003ab190:
  if (((dVar28 < 6.0) && (moby->state == '\x02')) &&
     (moby->state = '\x03', moby->animationId != '\x03')) {
    puVar7[0x29] = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(lVar14,3,0,*(undefined4 *)((int)puVar7 + 0x14c));
  }
  return;
}


