// game/update/moby932.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4be8c0-0x4bf81c
#include <stdio.h>
#include "game/update/moby932.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04be8c0 (0x14 bytes)
void M932_004be8c0(void)

{
  DAT_008f4a24 = 0x10000;
  return;
}


// 0x04be908 (0x870 bytes)
// inlined: FastAtan2 @0x4bec54, FastAtan2 @0x4beee4
void M932_004be908(MobyInstance *param_1)

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
  lVar11 = uVar9 - 0x110;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x24] = in_LR;
  puVar7[0x21] = in_f31;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1f] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar19 = ZEXT48(pvVar5);
  puVar7[0x1e] = unaff_r29;
  puVar7[0x1d] = unaff_r28;
  iVar12 = FastDecTimerS32(uVar19 + 0x184);
  fVar4 = animationSpeed;
  if (iVar12 == 2) {
    param_1->state = '\x05';
  }
  else {
    iVar12 = *(int *)((int)pvVar5 + 0x184);
    puVar7[0x1b] = (longlong)(int)(animationSpeed * 10.5);
    if (((((iVar12 == *(int *)((int)puVar7 + 0xdc)) ||
          (puVar7[0x1b] = (longlong)(int)(fVar4 * 20.5), iVar12 == *(int *)((int)puVar7 + 0xdc))) ||
         (puVar7[0x1b] = (longlong)(int)(fVar4 * 40.5), iVar12 == *(int *)((int)puVar7 + 0xdc))) ||
        ((puVar7[0x1b] = (longlong)(int)(fVar4 * 60.5), iVar12 == *(int *)((int)puVar7 + 0xdc) ||
         (puVar7[0x1b] = (longlong)(int)(fVar4 * 120.5), iVar12 == *(int *)((int)puVar7 + 0xdc)))))
       || (puVar7[0x1b] = (longlong)(int)(fVar4 * 179.5), iVar12 == *(int *)((int)puVar7 + 0xdc))) {
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
      MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
    }
    dVar24 = 0.0;
    *(undefined4 *)((int)puVar7 + 0x74) = 0;
    iVar12 = MB_damage(param_1,0x330000,0);
    iVar13 = MB_HandleDamage
                       (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
    if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\x04')) {
      fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar7 + 0x74);
      *(float *)((int)pvVar5 + 0x20) = fVar4;
      if ((double)fVar4 <= dVar24) {
        iVar13 = 1;
      }
      uVar14 = FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f000000;
      fVar1 = DAT_008f4a48;
      fVar4 = DAT_0071f418;
      *(undefined4 *)((int)pvVar5 + 0x90) = uVar14;
      *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
      *(undefined1 *)((int)pvVar5 + 0xad) = 0;
      *(undefined4 *)((int)pvVar5 + 0x94) = 9;
      *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
      fVar4 = g_FrameTime;
      if (iVar13 < 3) {
        if ((-1 < iVar13) && (0 < iVar13)) {
          fVar4 = DAT_008f4a48 * DAT_0071f418;
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(float *)((int)pvVar5 + 0x80) = fVar4;
          fVar4 = g_FrameTime;
          *(float *)((int)pvVar5 + 0x88) = DAT_008f4a58 * g_FrameTime;
          fVar1 = DAT_008f4a54;
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
            lVar10 = uVar9 - 0x100;
            lVar15 = uVar9 - 0x78;
            lVar18 = uVar9 - 0x68;
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
              lVar10 = lVar10 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
              lVar18 = lVar18 + 8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            lVar20 = 4;
            lVar18 = uVar9 - 0x78;
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
          MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x94,uVar19 + 0x88,uVar19 + 0x8c);
          MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
          param_1->state = '\x04';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
        }
      }
      else if (iVar13 < 0xb) {
        if (iVar13 < 9) {
          *(float *)((int)pvVar5 + 0x88) = DAT_008f4a50 * g_FrameTime;
          fVar1 = DAT_008f4a4c;
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
            lVar10 = uVar9 - 0x100;
            lVar15 = uVar9 - 0x58;
            lVar18 = uVar9 - 0x48;
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
              lVar10 = lVar10 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
              lVar18 = lVar18 + 8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            lVar20 = 4;
            lVar18 = uVar9 - 0x58;
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
          MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x98,uVar19 + 0x88,uVar19 + 0x8c);
          MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
          param_1->state = '\x03';
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
    *(undefined4 *)((int)pvVar5 + 0x188) = 0x41400000;
    pSVar6 = Splines[*(int *)((int)pvVar5 + 0x180)];
    iVar12 = MB_getTargetInArea
                       (0x4028000000000000,param_1,uVar19 + 0x120,pSVar6,0,0,pSVar6->points,
                        pSVar6->cnt);
    if ((iVar12 != 2) &&
       ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar5 + 0x124),
        fVar1 = (param_1->pos).x - *(float *)((int)pvVar5 + 0x120),
        *(float *)((int)pvVar5 + 0x188) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
        (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 2;
    }
    if (*(int *)((int)pvVar5 + 0x160) == 0) {
      *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
    }
  }
  return;
}


// 0x04bf1d0 (0x64c bytes)
// inlined: FastAtan2 @0x4bf47c
// strings: 00658cd4: 'Kamakazie with an invalid boudPath. UID = %d'

/* Moby 932 */

void UpdateMoby_932(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  lVar19 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x150;
  puVar8 = (ulonglong *)lVar18;
  *puVar8 = uVar14;
  puVar8[0x2c] = in_LR;
  puVar8[0x29] = unaff_r31;
  puVar8[0x28] = unaff_r30;
  puVar8[0x27] = unaff_r29;
  pvVar7 = moby->pVar;
  M932_004be908();
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    *(undefined4 *)((int)puVar8 + 0xec) = 0;
    *(undefined4 *)(puVar8 + 0x1d) = 0;
    *(undefined4 *)((int)puVar8 + 0xe4) = 0;
    *(undefined4 *)(puVar8 + 0x1c) = 0;
    puVar8[0x12] = 0xffffffffffffffff;
    puVar8[0x14] = 1;
    puVar8[0x15] = 1;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar19,uVar14 - 0x70,
               lVar19 + 0x10,0,&DAT_004bf178,10,3,0x10);
    DeleteMoby(moby);
  }
  else if (uVar1 == '\x04') {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar16 & 0x160) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_004bf178,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar16 & 0x41) == 0) {
      if ((uVar16 & 0x120) != 0) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar8[0x24] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar8 + 0x124));
      }
    }
  }
  else if (uVar1 == '\x02') {
    fVar2 = *(float *)(*(int *)((int)pvVar7 + 0x160) + 0x10) - (moby->pos).x;
    fVar4 = *(float *)(*(int *)((int)pvVar7 + 0x160) + 0x14) - (moby->pos).y;
    fVar5 = ABS(fVar2);
    fVar3 = ABS(fVar4);
    *(float *)(puVar8 + 0x1e) = fVar2;
    *(float *)((int)puVar8 + 0xf4) = fVar4;
    *(float *)(puVar8 + 0x1f) = fVar5 - fVar3;
    fVar2 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xf4) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0x1e));
    if (*(float *)(puVar8 + 0x1f) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar8 + 0xf4));
    if (*(float *)(puVar8 + 0x1f) - 0.0 < 0.0) {
      fVar9 = fVar5;
    }
    if (0.0 < fVar4) {
      lVar21 = uVar14 - 0x140;
      lVar19 = uVar14 - 0x44;
      lVar20 = uVar14 - 0x54;
      lVar23 = 2;
      fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x21) = fVar4;
      *(float *)(puVar8 + 0x20) = fVar4;
      *(float *)((int)puVar8 + 0x104) = fVar4;
      *(float *)((int)puVar8 + 0xfc) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar5;
      *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar4;
      *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar21 + 0xfc) = *(float *)((int)lVar21 + 0xec) * fVar4 * fVar4;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar14 - 0x54;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar19 = lVar21;
      lVar20 = lVar18;
      do {
        fVar4 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0xfc) = *(float *)((int)lVar20 + 0xfc) * fVar4;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      do {
        iVar10 = (int)lVar18;
        iVar11 = (int)lVar21;
        lVar18 = lVar18 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0xfc) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    OrganicDeltAng
              (fVar2,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 0x18c));
    fVar2 = (moby->rotation).z;
    fVar4 = fVar2 + 1.5707963;
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar3 = fVar4;
    }
    fVar6 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar6 = fVar5;
    }
    fVar2 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar4 = fVar6 * fVar6;
    fVar5 = fVar2 * fVar2;
    fVar12 = fVar4 * fVar4 * fVar6;
    *(undefined4 *)(puVar8 + 0x19) = 0;
    fVar3 = fVar5 * fVar5 * fVar2;
    fVar13 = fVar4 * fVar12;
    fVar9 = fVar5 * fVar3;
    *(float *)((int)puVar8 + 0xc4) =
         (fVar4 * fVar13 * 2.601887e-06 +
         fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * 2.0
    ;
    *(float *)(puVar8 + 0x18) =
         (fVar5 * fVar9 * 2.601887e-06 +
         fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar2 * -0.16666657 + fVar2) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),puVar8 + 0x18,
               puVar8 + 0x1a);
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar7 + 0x164) != 2) {
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        puVar8[0x24] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar8 + 0x124));
      }
      if (*(int *)((int)pvVar7 + 0x184) == 0) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0xc,0x4bf178);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x184,
                            ZEXT48(pvVar7));
        *(undefined4 *)((int)pvVar7 + 0x184U & 0xfffffffc) = uVar15;
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar7 + 0x20) = 0x40400000;
    *(undefined2 *)((int)pvVar7 + 0x24) = 3;
    *(undefined1 *)((int)pvVar7 + 0x28) = 2;
    if (*(int *)((int)pvVar7 + 0x180) == -1) {
      printf("Kamakazie with an invalid boudPath. UID = %d",moby->uid);
      DeleteMoby(moby);
    }
    else {
      MB_InitDefaultParams((float *)((int)pvVar7 + 0xd0));
      *(undefined4 *)((int)pvVar7 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar7 + 0xd8) = 0x3f000000;
      uVar15 = FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar7 + 0xd0) = uVar15;
      *(float *)((int)pvVar7 + 0xf4) = g_FrameTime * 4.0;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar8[0x24] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar8 + 0x124));
      }
    }
  }
  return;
}


