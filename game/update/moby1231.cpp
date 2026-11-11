// game/update/moby1231.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x214100-0x215778
#include "game/update/moby1231.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1297.h"
#include "idol/fastfunc.h"

// 0x0214100 (0x6c bytes)
undefined8 FUN_00214100(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x02') {
        return 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 0;
}


// 0x021416c (0x14 bytes)
ulonglong FUN_0021416c(int param_1)

{
  return (ulonglong)(LZCOUNT(*(byte *)(param_1 + 0x20) - 2) << 0x20) >> 0x25;
}


// 0x0214198 (0x8cc bytes)
// inlined: FastAtan2 @0x21449c, FastAtan2 @0x21479c
void M1231_00214198(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar15;
  longlong lVar16;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x24] = in_LR;
  puVar10[0x21] = in_f31;
  puVar10[0x20] = unaff_r31;
  puVar10[0x1f] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar10[0x1e] = unaff_r29;
  puVar10[0x1d] = unaff_r28;
  FastDecTimerS32(uVar24 + 0x158);
  iVar17 = *(int *)((int)pvVar8 + 0x160);
  fVar1 = (param_1->pos).x;
  fVar2 = (param_1->pos).y;
  fVar3 = (param_1->pos).z;
  param_1->scale = param_1->pClass->gScale * DAT_007685d0;
  fVar7 = DAT_00768610;
  if (iVar17 != 0) {
    fVar4 = (param_1->transform).v0.y;
    fVar5 = (param_1->transform).v0.x;
    fVar6 = (param_1->transform).v0.z;
    fVar11 = 0.0;
    fVar12 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if (fVar12 == 0.0) {
      fVar5 = (param_1->transform).v0.w;
      fVar4 = fVar11;
      fVar6 = fVar11;
    }
    else {
      fVar12 = DAT_0076860c / fVar12;
      fVar11 = fVar5 * fVar12;
      fVar4 = fVar4 * fVar12;
      fVar5 = (param_1->transform).v0.w;
      fVar6 = fVar6 * fVar12;
    }
    fVar6 = fVar6 + fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar5;
    uVar19 = *(undefined4 *)((int)pvVar8 + 0x160);
    *(float *)(puVar10 + 0xf) = fVar6;
    *(float *)(puVar10 + 0xe) = fVar11 + fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar4 + fVar2;
    *(float *)(puVar10 + 0xf) = fVar6 + fVar7;
    M1297_00240590(uVar19,uVar14 - 0xa0);
  }
  dVar29 = 0.0;
  *(undefined4 *)((int)puVar10 + 0x84) = 0;
  iVar17 = MB_damage(param_1,0x330000,0);
  iVar18 = MB_HandleDamage
                     (param_1,iVar17,uVar24 + 0x20,0,puVar10 + 0x10,(int)puVar10 + 0x84,0,4);
  if ((*(int *)(puVar10 + 0x10) != 1) && (param_1->state != '\b')) {
    fVar1 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar10 + 0x84);
    *(float *)((int)pvVar8 + 0x20) = fVar1;
    if ((double)fVar1 <= dVar29) {
      iVar18 = 1;
    }
    uVar19 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
    fVar2 = DAT_007685bc;
    fVar1 = DAT_0071f418;
    *(undefined4 *)((int)pvVar8 + 0x90) = uVar19;
    *(undefined4 *)((int)pvVar8 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar8 + 0xad) = 0;
    *(undefined4 *)((int)pvVar8 + 0x94) = 9;
    *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar1;
    fVar1 = g_FrameTime;
    if (iVar18 < 3) {
      if ((-1 < iVar18) && (0 < iVar18)) {
        fVar1 = DAT_007685bc * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar8 + 0x80) = fVar1;
        fVar1 = g_FrameTime;
        *(float *)((int)pvVar8 + 0x88) = DAT_007685cc * g_FrameTime;
        fVar2 = DAT_007685c8;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40800000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar17 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar17 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar1);
        dVar27 = ABS((double)fVar2);
        *(float *)(puVar10 + 0x12) = fVar1;
        *(float *)((int)puVar10 + 0x94) = fVar2;
        *(float *)(puVar10 + 0x13) = (float)(dVar26 - dVar27);
        uVar22 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar10 + 0x12));
        if ((double)*(float *)(puVar10 + 0x13) - dVar29 < 0.0) {
          dVar28 = dVar27;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar10 + 0x94));
        if ((double)*(float *)(puVar10 + 0x13) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar29 < dVar28) {
          lVar15 = uVar14 - 0x100;
          lVar23 = uVar14 - 0x58;
          lVar20 = uVar14 - 0x68;
          lVar25 = 2;
          fVar3 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
          fVar7 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xb4) = fVar3;
          *(float *)((int)puVar10 + 0xac) = fVar3;
          *(float *)(puVar10 + 0x16) = fVar3;
          *(float *)(puVar10 + 0x15) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar7;
          *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar3;
          *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0x98) * fVar3 * fVar3;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar14 - 0x68;
          pfVar21 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar20 = lVar23;
          do {
            fVar3 = *pfVar21;
            fVar7 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar15 + 0xa8) = *(float *)((int)lVar15 + 0xa8) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar15 = 2;
          do {
            iVar18 = (int)lVar16;
            iVar13 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0xa8)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)((int)puVar10 + 0x8c) = (float)dVar29;
        uVar19 = *(undefined4 *)(iVar17 + 0x18);
        *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar10 + 7) = uVar19;
        uVar19 = *(undefined4 *)(iVar17 + 0x1c);
        *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar17 + 0x14);
        *(undefined4 *)((int)puVar10 + 0x3c) = uVar19;
        MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar14 - 0x84,uVar24 + 0x88,uVar24 + 0x8c)
        ;
        MB_StartKick((double)*(float *)((int)puVar10 + 0x8c),param_1,uVar24 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
        if (*(int *)((int)pvVar8 + 0x160) != 0) {
          M1297_00240630(*(int *)((int)pvVar8 + 0x160));
          *(undefined4 *)((int)pvVar8 + 0x160) = 0;
        }
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar18 < 0xb) {
      if (iVar18 < 9) {
        *(float *)((int)pvVar8 + 0x88) = DAT_007685c4 * g_FrameTime;
        fVar2 = DAT_007685c0;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar17 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar17 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar1);
        dVar27 = ABS((double)fVar2);
        *(float *)((int)puVar10 + 0x9c) = fVar1;
        *(float *)(puVar10 + 0x14) = fVar2;
        *(float *)((int)puVar10 + 0xa4) = (float)(dVar26 - dVar27);
        uVar22 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)((int)puVar10 + 0x9c));
        if ((double)*(float *)((int)puVar10 + 0xa4) - dVar29 < 0.0) {
          dVar28 = dVar27;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar27 = ABS((double)*(float *)(puVar10 + 0x14));
        if ((double)*(float *)((int)puVar10 + 0xa4) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar29 < dVar28) {
          lVar15 = uVar14 - 0x100;
          lVar23 = uVar14 - 0x38;
          lVar20 = uVar14 - 0x48;
          lVar25 = 2;
          fVar3 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
          fVar7 = fVar3 * fVar3;
          *(float *)((int)puVar10 + 0xd4) = fVar3;
          *(float *)((int)puVar10 + 0xcc) = fVar3;
          *(float *)(puVar10 + 0x1a) = fVar3;
          *(float *)(puVar10 + 0x19) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar7;
          *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar3;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 0xb8) * fVar3 * fVar3;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar14 - 0x48;
          pfVar21 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar20 = lVar23;
          do {
            fVar3 = *pfVar21;
            fVar7 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar15 + 200) = *(float *)((int)lVar15 + 200) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar15 = 2;
          do {
            iVar18 = (int)lVar16;
            iVar13 = (int)lVar23;
            lVar16 = lVar16 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 200)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)(puVar10 + 0x11) = (float)dVar29;
        uVar19 = *(undefined4 *)(iVar17 + 0x18);
        *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar10 + 7) = uVar19;
        uVar19 = *(undefined4 *)(iVar17 + 0x1c);
        *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar17 + 0x14);
        *(undefined4 *)((int)puVar10 + 0x3c) = uVar19;
        MB_VecAtan2Angles(puVar10[6],puVar10[7],uVar14 - 0x88,uVar24 + 0x88,uVar24 + 0x8c)
        ;
        MB_StartKick((double)*(float *)(puVar10 + 0x11),param_1,uVar24 + 0x70);
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
        if (*(int *)((int)pvVar8 + 0x160) != 0) {
          M1297_00240630(*(int *)((int)pvVar8 + 0x160));
          *(undefined4 *)((int)pvVar8 + 0x160) = 0;
        }
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(0xc,0x214180);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar31);
        auVar31 = loadVectorLeftIndexed(0x158,uVar24);
        auVar32 = loadVectorRightIndexed(0x168,uVar24);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = ZEXT416((auVar31.piece<0,4>() | auVar32.piece<0,4>()) + auVar30.piece<0,4>()) &
                  (GPiece<16>)0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x158,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0x158U & 0xfffffffc) = uVar19;
      }
      else {
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar24 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar24 + 0x60);
  *(undefined4 *)((int)pvVar8 + 0x140) = 0x41c00000;
  pSVar9 = Splines[*(int *)((int)pvVar8 + 0x13c)];
  iVar17 = MB_getTargetInArea
                     (0x4038000000000000,param_1,uVar24 + 0xd0,pSVar9,0,0,pSVar9->points,pSVar9->cnt
                     );
  if ((iVar17 != 2) &&
     ((fVar1 = (param_1->pos).y - *(float *)((int)pvVar8 + 0xd4),
      fVar2 = (param_1->pos).x - *(float *)((int)pvVar8 + 0xd0),
      *(float *)((int)pvVar8 + 0x140) < SQRT(fVar2 * fVar2 + fVar1 * fVar1) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0xd8)))))) {
    *(undefined4 *)((int)pvVar8 + 0x114) = 2;
  }
  if (*(int *)((int)pvVar8 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar8 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x0214a98 (0xce0 bytes)
// inlined: FastAtan2 @0x214da4, FastAtan2 @0x215008, FastAtan2 @0x215330
/* Moby 1231 */

void UpdateMoby_1231(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 uVar18;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  ulonglong in_f31;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar21 = uVar13 - 0x150;
  puVar11 = (ulonglong *)lVar21;
  *puVar11 = uVar13;
  puVar11[0x2c] = in_LR;
  puVar11[0x29] = in_f31;
  puVar11[0x28] = unaff_r31;
  puVar11[0x26] = unaff_r29;
  puVar11[0x27] = unaff_r30;
  pvVar9 = moby->pVar;
  M1231_00214198(lVar14);
  iVar15 = *(int *)((int)pvVar9 + 0x110);
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar9 + 0x1e0));
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) < 28.0)) {
    MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x16';
  }
  uVar2 = moby->state;
  if (uVar2 == '\b') {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar17 & 0x160) != 0) {
      MB_SpawnExplosionSparks2
                (0x3ff0000000000000,0x4024000000000000,lVar14,lVar14 + 0x10,&DAT_00214a64,
                 0xffffffffffffffff);
      MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\a') {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar17 & 0x41) != 0) {
      iVar15 = PointInsideComplexPoly
                         ((Vec4 *)&moby->pos,(Vec4 *)Splines[*(int *)((int)pvVar9 + 0x13c)]->points,
                          Splines[*(int *)((int)pvVar9 + 0x13c)]->cnt);
      if (iVar15 != 0) {
        moby->state = '\x03';
        if (moby->animationId == '\0') {
          return;
        }
        puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
        return;
      }
      uVar17 = 0x100;
    }
    if ((uVar17 & 0x120) != 0) {
      MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      MB_SpawnExplosionSparks2
                (0x3fe0000000000000,0x4024000000000000,lVar14,lVar14 + 0x10,&DAT_00214a64,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar2 == '\x06') {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\0')) {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
    }
  }
  else if (uVar2 == '\x05') {
    fVar3 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar5);
    *(float *)(puVar11 + 0x12) = fVar3;
    *(float *)((int)puVar11 + 0x94) = fVar5;
    *(float *)(puVar11 + 0x13) = fVar4 - fVar6;
    dVar28 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar11 + 0x12));
    if (*(float *)(puVar11 + 0x13) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar11 + 0x94));
    if (*(float *)(puVar11 + 0x13) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    dVar26 = dVar28;
    if (0.0 < fVar3) {
      lVar20 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x9c;
      lVar24 = uVar13 - 0x8c;
      lVar25 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)(puVar11 + 0x17) = fVar3;
      *(float *)((int)puVar11 + 0xbc) = fVar3;
      *(float *)((int)puVar11 + 0xb4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar4;
      *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar3;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xa4) * fVar3 * fVar3;
        iVar15 = (int)lVar22;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar13 - 0x9c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar3 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xb4) * fVar3;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0xb4)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar6 + fVar5);
    }
    OrganicDeltAng
              ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 0x14c));
    if ((*(int *)((int)pvVar9 + 0x160) != 0) &&
       (iVar15 = MB_MayaFrameTrigger(33.0,moby), iVar15 != 0)) {
      fVar3 = (moby->transform).v0.y;
      fVar5 = (moby->transform).v0.x;
      fVar6 = (moby->transform).v0.z;
      dVar26 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
      if (dVar26 == dVar28) {
        fVar8 = (moby->transform).v0.w;
        dVar26 = dVar28;
        dVar29 = dVar28;
      }
      else {
        fVar4 = (float)((double)(g_FrameTime * 30.0) / dVar26);
        fVar8 = (moby->transform).v0.w;
        dVar26 = (double)(fVar5 * fVar4);
        dVar28 = (double)(fVar3 * fVar4);
        dVar29 = (double)(fVar6 * fVar4);
      }
      *(float *)(puVar11 + 0x10) = (float)dVar26;
      *(float *)((int)puVar11 + 0x84) = (float)dVar28;
      uVar16 = *(undefined4 *)((int)pvVar9 + 0x160);
      *(float *)(puVar11 + 0x11) = (float)dVar29;
      *(float *)((int)puVar11 + 0x8c) = fVar8;
      FUN_002405c8(uVar16,uVar13 - 0xd0);
      *(undefined4 *)((int)pvVar9 + 0x160) = 0;
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x06', moby->animationId != '\x04')) {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar14,4,0,*(undefined4 *)((int)puVar11 + 0x11c));
    }
  }
  else if (uVar2 == '\x04') {
    fVar3 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
    fVar5 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar11 + 0x9c) = fVar3;
    *(float *)(puVar11 + 0x14) = fVar5;
    *(float *)((int)puVar11 + 0xa4) = fVar4 - fVar6;
    dVar28 = 0.0;
    uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar11 + 0x9c));
    if (*(float *)((int)puVar11 + 0xa4) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar11 + 0x14));
    if (*(float *)((int)puVar11 + 0xa4) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    dVar26 = dVar28;
    if (0.0 < fVar3) {
      lVar20 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x7c;
      lVar24 = uVar13 - 0x6c;
      lVar25 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x1c) = fVar3;
      *(float *)(puVar11 + 0x1b) = fVar3;
      *(float *)((int)puVar11 + 0xdc) = fVar3;
      *(float *)((int)puVar11 + 0xd4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar4;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar3;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar20 + 0xd4) = *(float *)((int)lVar20 + 0xc4) * fVar3 * fVar3;
        iVar15 = (int)lVar22;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar13 - 0x7c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar3 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xd4) = *(float *)((int)lVar20 + 0xd4) * fVar3;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0xd4)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar6 + fVar5);
    }
    OrganicDeltAng
              ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 0x14c));
    iVar15 = MB_MayaFrameTrigger(15.0,moby);
    fVar6 = DAT_00768610;
    fVar3 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    if (iVar15 == 0) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,3,0,*(undefined4 *)((int)puVar11 + 0x11c));
      }
    }
    else {
      fVar4 = (moby->transform).v0.y;
      fVar8 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      dVar26 = (double)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar4 * fVar4);
      if (dVar26 == dVar28) {
        fVar4 = (moby->transform).v0.w;
        dVar26 = dVar28;
        dVar29 = dVar28;
      }
      else {
        fVar1 = (float)((double)DAT_0076860c / dVar26);
        dVar29 = (double)(fVar8 * fVar1);
        dVar28 = (double)(fVar4 * fVar1);
        fVar4 = (moby->transform).v0.w;
        dVar26 = (double)(fVar7 * fVar1);
      }
      fVar8 = (float)(dVar26 + (double)(moby->pos).z);
      *(float *)((int)puVar11 + 0x7c) = fVar4;
      *(float *)(puVar11 + 0xf) = fVar8;
      *(float *)(puVar11 + 0xe) = (float)(dVar29 + (double)fVar3);
      *(float *)((int)puVar11 + 0x74) = (float)(dVar28 + (double)fVar5);
      *(float *)(puVar11 + 0xf) = fVar8 + fVar6;
      uVar16 = FUN_002403a8(lVar14,uVar13 - 0xe0,5);
      *(undefined4 *)((int)pvVar9 + 0x160) = uVar16;
    }
  }
  else if (uVar2 == '\x03') {
    fVar3 = (g_heroMobyPtr->pos).x - (moby->pos).x;
    fVar5 = (g_heroMobyPtr->pos).y - (moby->pos).y;
    fVar6 = ABS(fVar3);
    fVar4 = ABS(fVar5);
    *(float *)(puVar11 + 0x15) = fVar3;
    *(float *)((int)puVar11 + 0xac) = fVar5;
    *(float *)(puVar11 + 0x16) = fVar6 - fVar4;
    fVar3 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar11 + 0x15));
    if (*(float *)(puVar11 + 0x16) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar11 + 0xac));
    if (*(float *)(puVar11 + 0x16) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar20 = uVar13 - 0x140;
      lVar24 = uVar13 - 0x4c;
      lVar22 = uVar13 - 0x5c;
      lVar25 = 2;
      fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x20) = fVar5;
      *(float *)(puVar11 + 0x1f) = fVar5;
      *(float *)((int)puVar11 + 0xfc) = fVar5;
      *(float *)((int)puVar11 + 0xf4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar6;
      *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar5;
      *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar20 + 0xf4) = *(float *)((int)lVar20 + 0xe4) * fVar5 * fVar5;
        iVar15 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar24 = uVar13 - 0x5c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xf4) = *(float *)((int)lVar20 + 0xf4) * fVar5;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar15 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar15 + 0xf4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar4;
    }
    OrganicDeltAng
              (fVar3,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               g_FrameTime * 6.2831855,&(moby->rotation).z,0x214a64,
               (float *)((int)pvVar9 + 0x14c));
    if ((*(int *)((int)pvVar9 + 0x114) != 2) && (moby->state = '\x04', moby->animationId != '\x02'))
    {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar11 + 0x11c));
    }
  }
  else if (uVar2 == '\0') {
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40400000;
    *(undefined2 *)((int)pvVar9 + 0x24) = 3;
    *(undefined1 *)((int)pvVar9 + 0x28) = 2;
    *(undefined1 *)((int)pvVar9 + 0x2a) = 6;
    uVar27 = 0x4020000000000000;
    uVar18 = FastDoubleToInt(0x4020000000000000);
    *(undefined1 *)((int)pvVar9 + 0x58) = uVar18;
    uVar18 = FastDoubleToInt(uVar27);
    *(undefined1 *)((int)pvVar9 + 0x5a) = uVar18;
    uVar2 = moby->animationId;
    moby->state = '\x03';
    if (uVar2 != '\0') {
      puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
      uVar2 = moby->animationId;
    }
    if (*(int *)((int)pvVar9 + 0x130) == 0) {
      moby->state = '\x03';
      if (uVar2 != '\0') {
        puVar11[0x23] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar11 + 0x11c));
      }
    }
    else {
      moby->state = '\x01';
      pSVar10 = Splines[*(int *)((int)pvVar9 + 0x134)];
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      (moby->pos).w = pSVar10->points[0].w;
    }
  }
  return;
}


