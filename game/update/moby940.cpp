// game/update/moby940.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x4c4cf0-0x4c6b50
#include "game/update/moby940.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04c4cf0 (0x14 bytes)
void M940_004c4cf0(void)

{
  DAT_008f4d4c = 0x10000;
  return;
}


// 0x04c4d08 (0x3c bytes)
void M940_004c4d08(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a4);
  if (*piVar1 == param_1) {
    *piVar1 = 0;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a8);
    if (*piVar1 == param_1) {
      *piVar1 = 0;
    }
  }
  return;
}


// 0x04c4d44 (0x34 bytes)
void M940_004c4d44(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a4);
  if (*piVar1 == 0) {
    *piVar1 = param_1;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x78) + 0x1a8);
    if (*piVar1 == 0) {
      *piVar1 = param_1;
    }
  }
  return;
}


// 0x04c4d78 (0x64 bytes)
longlong M940_004c4d78(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = ZERO_MASK(**(int **)(*(int *)(param_1 + 0x78) + 0x1a4));
  lVar2 = lVar1 + 2;
  return lVar2 + (ZERO_MASK(**(int **)(*(int *)(param_1 + 0x78) + 0x1a8)) &
                 (lVar1 + 1) - lVar2);
}


// 0x04c4df8 (0x7c8 bytes)
// inlined: FastAtan2 @0x4c504c, FastAtan2 @0x4c532c
void M940_004c4df8(MobyInstance *param_1)

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
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1f] = in_f31;
  puVar7[0x1e] = unaff_r31;
  puVar7[0x1c] = unaff_r29;
  puVar7[0x1d] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar19 = ZEXT48(pvVar5);
  puVar7[0x1b] = unaff_r28;
  FastDecTimerS32(uVar19 + 0x198);
  param_1->scale = param_1->pClass->gScale * DAT_008f4d84;
  dVar24 = 0.0;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  iVar12 = MB_damage(param_1,0x330000,0);
  iVar13 = MB_HandleDamage
                     (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
  if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\a')) {
    fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar7 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar24) {
      iVar13 = 1;
    }
    uVar14 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f4d70;
    fVar4 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar14;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
    fVar4 = g_FrameTime;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        fVar4 = DAT_008f4d70 * g_FrameTimeSq;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar5 + 0x80) = fVar4;
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = DAT_008f4d80 * g_FrameTime;
        fVar1 = DAT_008f4d7c;
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
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
      }
    }
    else if (iVar13 < 0xb) {
      if (iVar13 < 9) {
        *(float *)((int)pvVar5 + 0x88) = DAT_008f4d78 * g_FrameTime;
        fVar1 = DAT_008f4d74;
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
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        param_1->state = '\x06';
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
        auVar25 = loadVectorLeftIndexed(0xc,0x4c4ddc);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar26 = loadVectorLeftIndexed(0x198,uVar19);
        auVar27 = loadVectorRightIndexed(0x1a8,uVar19);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = ZEXT416((auVar26.piece<0,4>() | auVar27.piece<0,4>()) + auVar25.piece<0,4>()) &
                  (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x198,
                            uVar19);
        *(undefined4 *)((int)pvVar5 + 0x198U & 0xfffffffc) = uVar14;
      }
      else {
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  *(undefined4 *)((int)pvVar5 + 0x188) = 0x41c00000;
  pSVar6 = Splines[*(int *)((int)pvVar5 + 0x180)];
  iVar12 = MB_getTargetInArea
                     (0x4038000000000000,param_1,uVar19 + 0x120,pSVar6,0,0,pSVar6->points,
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
  return;
}


// 0x04c5630 (0x1520 bytes)
// inlined: FastAtan2 @0x4c5940, FastAtan2 @0x4c5f88, FastAtan2 @0x4c6184, FastAtan2 @0x4c650c, FastAtan2 @0x4c6710
/* Moby 940 */

void UpdateMoby_940(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *victim;
  void *pvVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  Spline *pSVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  Vec4 *pVVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 *unused;
  longlong lVar27;
  float *pfVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar32;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f18;
  double dVar40;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar42;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar45;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  lVar24 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar25 = uVar19 - 0x2d0;
  puVar14 = (ulonglong *)lVar25;
  *puVar14 = uVar19;
  puVar14[0x5c] = in_LR;
  puVar14[0x4c] = in_f18;
  puVar14[0x4d] = in_f19;
  puVar14[0x4e] = in_f20;
  puVar14[0x4f] = in_f21;
  puVar14[0x50] = in_f22;
  puVar14[0x51] = in_f23;
  puVar14[0x52] = in_f24;
  puVar14[0x53] = in_f25;
  puVar14[0x54] = in_f26;
  puVar14[0x55] = in_f27;
  puVar14[0x56] = in_f28;
  puVar14[0x57] = in_f29;
  puVar14[0x58] = in_f30;
  puVar14[0x59] = in_f31;
  puVar14[0x4b] = unaff_r31;
  puVar14[0x4a] = unaff_r30;
  puVar14[0x49] = unaff_r29;
  puVar14[0x48] = unaff_r28;
  puVar14[0x47] = unaff_r27;
  puVar14[0x46] = unaff_r26;
  puVar14[0x45] = unaff_r25;
  pvVar8 = moby->pVar;
  uVar32 = ZEXT48(pvVar8);
  M940_004c4df8(lVar24);
  victim = *(MobyInstance **)((int)pvVar8 + 0x160);
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar8 + 0x280));
  uVar3 = moby->state;
  if (uVar3 == '\b') {
    *(undefined4 *)((int)puVar14 + 300) = 0;
    *(undefined4 *)(puVar14 + 0x25) = 0;
    *(undefined4 *)((int)puVar14 + 0x124) = 0;
    *(undefined4 *)(puVar14 + 0x24) = 0;
    puVar14[0x12] = 0xffffffffffffffff;
    puVar14[0x14] = 1;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar24,uVar19 - 0x1b0,
               lVar24 + 0x10,0,1,10,3,0x10);
    DeleteMoby(moby);
  }
  else if (uVar3 == '\a') {
    uVar23 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar23 & 0x160) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar24,lVar24 + 0x10,&DAT_004c55c0,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (uVar3 == '\x06') {
    uVar23 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar23 & 0x41) == 0) {
      if ((uVar23 & 0x120) != 0) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\0') {
        puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar24,0,0,*(undefined4 *)((int)puVar14 + 0x214));
      }
      puVar14[0x42] = (longlong)Splines[*(int *)((int)pvVar8 + 400)]->cnt;
      dVar45 = (double)MB_randRangeFloat(0.0,(float)(longlong)puVar14[0x42]);
      uVar20 = FastDoubleToInt((double)(float)(dVar45 - 1.0));
      *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
    }
  }
  else if (uVar3 == '\x05') {
    iVar31 = *(int *)((int)pvVar8 + 0x194);
    pSVar13 = Splines[*(int *)((int)pvVar8 + 400)];
    dVar45 = (double)pSVar13->points[iVar31].x;
    dVar47 = (double)pSVar13->points[iVar31].y;
    fVar1 = (float)(dVar45 - (double)(moby->pos).x);
    fVar2 = (float)(dVar47 - (double)(moby->pos).y);
    dVar35 = (double)pSVar13->points[iVar31].z;
    fVar4 = ABS(fVar1);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar14 + 0x154) = fVar1;
    *(float *)(puVar14 + 0x2b) = fVar2;
    *(float *)((int)puVar14 + 0x15c) = fVar4 - fVar5;
    dVar44 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar14 + 0x154));
    if (*(float *)((int)puVar14 + 0x15c) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar14 + 0x2b));
    if (*(float *)((int)puVar14 + 0x15c) - 0.0 < 0.0) {
      fVar7 = fVar4;
    }
    dVar40 = dVar44;
    if (0.0 < fVar1) {
      lVar27 = uVar19 - 0x2c0;
      lVar33 = uVar19 - 0xf4;
      lVar29 = uVar19 - 0x104;
      lVar34 = 2;
      fVar1 = (fVar7 - fVar1) / (fVar7 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar14 + 0x3b) = fVar1;
      *(float *)(puVar14 + 0x3a) = fVar1;
      *(float *)((int)puVar14 + 0x1d4) = fVar1;
      *(float *)((int)puVar14 + 0x1cc) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x3a) = *(float *)(puVar14 + 0x3a) * fVar4;
      *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar1;
      *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar27 + 0x1cc) = *(float *)((int)lVar27 + 0x1bc) * fVar1 * fVar1;
        iVar31 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar1 * fVar1;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar19 - 0x104;
      pfVar28 = (float *)&DAT_007358e0;
      lVar27 = lVar25;
      lVar29 = lVar33;
      do {
        fVar1 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar27 + 0x1cc) = *(float *)((int)lVar27 + 0x1cc) * fVar1;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
        lVar29 = lVar29 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar29 = 2;
      lVar27 = lVar25;
      do {
        iVar31 = (int)lVar27;
        iVar12 = (int)lVar33;
        lVar27 = lVar27 + 0x10;
        lVar33 = lVar33 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x1cc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar43 = 8.726646423339844;
    dVar42 = 12.566370964050293;
    OrganicDeltAng
              ((float)dVar40,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
               g_FrameTime * 12.566371,(float *)((int)pvVar8 + 0x19c),0x4c55c0,
               (float *)((int)pvVar8 + 0x1a0));
    fVar1 = (victim->pos).x - (moby->pos).x;
    fVar2 = (victim->pos).y - (moby->pos).y;
    dVar38 = ABS((double)fVar1);
    dVar39 = ABS((double)fVar2);
    *(float *)(puVar14 + 0x29) = fVar1;
    *(float *)((int)puVar14 + 0x14c) = fVar2;
    dVar36 = (double)g_FrameTime;
    *(float *)(puVar14 + 0x2a) = (float)(dVar38 - dVar39);
    dVar37 = (double)g_FrameTimeSq;
    uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1d) & 4;
    unused = (undefined4 *)((uint)(uVar26 << 2) | 0x735900);
    dVar40 = ABS((double)*(float *)(puVar14 + 0x29));
    if ((double)*(float *)(puVar14 + 0x2a) - dVar44 < 0.0) {
      dVar40 = dVar39;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar39 = ABS((double)*(float *)((int)puVar14 + 0x14c));
    if ((double)*(float *)(puVar14 + 0x2a) - dVar44 < 0.0) {
      dVar39 = dVar38;
    }
    fVar2 = (float)unused[1];
    dVar38 = dVar44;
    if (dVar44 < dVar40) {
      lVar27 = uVar19 - 0x2c0;
      lVar29 = uVar19 - 0x124;
      lVar33 = uVar19 - 0x114;
      lVar34 = 2;
      fVar5 = (float)(dVar39 - dVar40) / (float)(dVar39 + dVar40);
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x37) = fVar5;
      *(float *)(puVar14 + 0x36) = fVar5;
      *(float *)((int)puVar14 + 0x1b4) = fVar5;
      *(float *)((int)puVar14 + 0x1ac) = fVar5;
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x36) = *(float *)(puVar14 + 0x36) * fVar4;
      *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar5;
      *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar5 * fVar4;
      do {
        *(float *)((int)lVar27 + 0x1ac) = *(float *)((int)lVar27 + 0x19c) * fVar5 * fVar5;
        iVar31 = (int)lVar29;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar5 * fVar5;
        lVar33 = lVar33 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar34 = 4;
      lVar33 = uVar19 - 0x124;
      pfVar28 = (float *)&DAT_007358e0;
      lVar27 = lVar25;
      lVar29 = lVar33;
      do {
        fVar5 = *pfVar28;
        fVar4 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar27 + 0x1ac) = *(float *)((int)lVar27 + 0x1ac) * fVar5;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
        lVar29 = lVar29 + 8;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      lVar29 = 2;
      lVar27 = lVar25;
      dVar40 = dVar44;
      do {
        iVar31 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        iVar12 = (int)lVar33;
        lVar33 = lVar33 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x1ac)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      unused = &DAT_004c55c0;
      dVar38 = (double)((float)(dVar40 + 0.7853981852531433) * fVar1 + fVar2);
    }
    OrganicDeltAng
              ((float)dVar38,(float)(dVar37 * dVar43),(float)(dVar37 * dVar43),
               (float)(dVar36 * dVar42),&(moby->rotation).z,(int)unused,
               (float *)((int)pvVar8 + 0x18c));
    fVar1 = *(float *)((int)pvVar8 + 0x19c);
    dVar48 = 3.141592502593994;
    dVar42 = 1.570796251296997;
    fVar5 = fVar1 + 1.5707963;
    dVar46 = -3.141592502593994;
    dVar43 = -0.16666656732559204;
    dVar39 = 0.008333025500178337;
    dVar38 = -0.0001980741071747616;
    dVar37 = 2.601886990305502e-06;
    dVar36 = 2.0;
    dVar40 = (double)(moby->rotation).z;
    *(undefined4 *)(puVar14 + 0x1d) = 0;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar4 = fVar5;
    }
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar7 = fVar2;
    }
    fVar2 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    fVar6 = fVar7 * fVar7;
    fVar18 = fVar2 * fVar2;
    fVar5 = fVar6 * fVar6 * fVar7;
    fVar15 = fVar18 * fVar18 * fVar2;
    fVar4 = fVar6 * fVar5;
    fVar16 = fVar18 * fVar15;
    *(float *)((int)puVar14 + 0xe4) =
         (fVar6 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar6 * fVar7 * -0.16666657 + fVar7) * 2.0;
    dVar41 = 1.0;
    (moby->rotation).z = fVar1;
    *(float *)(puVar14 + 0x1c) =
         (fVar18 * fVar16 * 2.601887e-06 +
         fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar18 * fVar2 * -0.16666657 + fVar2) *
         2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),puVar14 + 0x1c,
               puVar14 + 0x1e);
    fVar1 = (float)((double)(moby->pos).y - dVar47);
    fVar2 = (float)((double)(moby->pos).x - dVar45);
    fVar5 = (float)((double)(moby->pos).z - dVar35);
    (moby->rotation).z = (float)dVar40;
    if ((double)SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1) < dVar36) {
      puVar14[0x42] = (longlong)Splines[*(int *)((int)pvVar8 + 400)]->cnt;
      dVar45 = (double)MB_randRangeFloat((float)dVar44,(float)(longlong)puVar14[0x42]);
      uVar20 = FastDoubleToInt((double)(float)(dVar45 - dVar41));
      *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
    }
    if (*(int *)((int)pvVar8 + 0x198) == 1) {
      auVar49 = ZEXT416(0xffffffff);
      auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
      fVar1 = (moby->pos).x;
      iVar31 = -0xbf0;
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      fVar5 = (victim->pos).x - fVar1;
      auVar49 = loadVectorLeftIndexed(0x50,0x4c55c0);
      auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      fVar2 = (moby->pos).y;
      auVar49 = vectorMultiplyAddFloatingPoint
                          (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                           auVar50);
      fVar4 = (victim->pos).y - fVar2;
      dVar47 = ABS((double)fVar5);
      dVar35 = ABS((double)fVar4);
      auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
      auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x198,uVar32
                         );
      *(undefined4 *)((int)pvVar8 + 0x198U & 0xfffffffc) = uVar20;
      *(float *)((int)puVar14 + 0x13c) = fVar5;
      *(float *)((int)puVar14 + 0x144) = (float)(dVar47 - dVar35);
      *(float *)(puVar14 + 0x28) = fVar4;
      uVar32 = (ulonglong)(*(uint *)((int)puVar14 + 0x13c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1d) & 4;
      dVar45 = ABS((double)*(float *)((int)puVar14 + 0x13c));
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar44 < 0.0) {
        dVar45 = dVar35;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
      dVar35 = ABS((double)*(float *)(puVar14 + 0x28));
      if ((double)*(float *)((int)puVar14 + 0x144) - dVar44 < 0.0) {
        dVar35 = dVar47;
      }
      fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar45) {
        lVar27 = uVar19 - 0x2c0;
        lVar29 = uVar19 - 0x144;
        lVar33 = uVar19 - 0x134;
        lVar34 = 2;
        fVar7 = (float)(dVar35 - dVar45) / (float)(dVar35 + dVar45);
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar14 + 0x33) = fVar7;
        *(float *)(puVar14 + 0x32) = fVar7;
        *(float *)((int)puVar14 + 0x194) = fVar7;
        *(float *)((int)puVar14 + 0x18c) = fVar7;
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar14 + 0x32) = *(float *)(puVar14 + 0x32) * fVar6;
        *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar7;
        *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar7 * fVar6;
        do {
          *(float *)((int)lVar27 + 0x18c) = *(float *)((int)lVar27 + 0x17c) * fVar7 * fVar7;
          iVar31 = (int)lVar29;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar7 * fVar7;
          lVar33 = lVar33 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar33 = uVar19 - 0x144;
        pfVar28 = (float *)&DAT_007358e0;
        lVar27 = lVar25;
        lVar29 = lVar33;
        do {
          fVar7 = *pfVar28;
          fVar6 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar27 + 0x18c) = *(float *)((int)lVar27 + 0x18c) * fVar7;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar29 = 2;
        lVar27 = lVar25;
        dVar45 = dVar44;
        do {
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          iVar30 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          iVar31 = (int)lVar33;
          dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar12 + 0x18c)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar47 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar47 = (double)(float)(dVar47 + dVar42);
      dVar45 = (double)(float)(dVar48 - dVar47);
      if (dVar47 - (double)(float)(dVar48 - dVar47) < 0.0) {
        dVar45 = dVar47;
      }
      dVar35 = (double)(float)(dVar46 - dVar47);
      if ((double)(float)(dVar46 - dVar47) - dVar45 < 0.0) {
        dVar35 = dVar45;
      }
      dVar45 = (double)(float)(dVar35 * dVar35);
      dVar40 = (double)(float)(dVar45 * (double)(float)(dVar45 * dVar35));
      dVar47 = (double)(float)(dVar45 * dVar40);
      *(float *)(puVar14 + 0x20) =
           (float)((double)(float)(dVar45 * dVar47) * dVar37 +
                  (double)(float)(dVar47 * dVar38 +
                                 (double)(float)(dVar40 * dVar39 +
                                                (double)(float)((double)(float)(dVar45 * dVar35) *
                                                                dVar43 + dVar35)))) * 0.2;
      fVar1 = (victim->pos).x - fVar1;
      fVar2 = (victim->pos).y - fVar2;
      dVar47 = ABS((double)fVar1);
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar14 + 0x26) = fVar1;
      *(float *)((int)puVar14 + 0x134) = fVar2;
      *(float *)(puVar14 + 0x27) = (float)(dVar47 - dVar35);
      uVar32 = (ulonglong)(*(uint *)(puVar14 + 0x26) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x27) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x134) >> 0x1d) & 4;
      dVar45 = ABS((double)*(float *)(puVar14 + 0x26));
      if ((double)*(float *)(puVar14 + 0x27) - dVar44 < 0.0) {
        dVar45 = dVar35;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar1 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar35 = ABS((double)*(float *)((int)puVar14 + 0x134));
      if ((double)*(float *)(puVar14 + 0x27) - dVar44 < 0.0) {
        dVar35 = dVar47;
      }
      if (dVar44 < dVar45) {
        lVar27 = uVar19 - 0x2c0;
        lVar33 = uVar19 - 0x154;
        lVar29 = uVar19 - 0x164;
        lVar34 = 2;
        fVar5 = (float)(dVar35 - dVar45) / (float)(dVar35 + dVar45);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar14 + 0x2f) = fVar5;
        *(float *)(puVar14 + 0x2e) = fVar5;
        *(float *)((int)puVar14 + 0x174) = fVar5;
        *(float *)((int)puVar14 + 0x16c) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x2e) = *(float *)(puVar14 + 0x2e) * fVar4;
        *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar5;
        *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar27 + 0x16c) = *(float *)((int)lVar27 + 0x15c) * fVar5 * fVar5;
          iVar31 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar31 + 4) * fVar5 * fVar5;
          lVar33 = lVar33 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar33 = uVar19 - 0x164;
        pfVar28 = (float *)&DAT_007358e0;
        lVar27 = lVar25;
        lVar29 = lVar33;
        do {
          fVar5 = *pfVar28;
          fVar4 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar27 + 0x16c) = *(float *)((int)lVar27 + 0x16c) * fVar5;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
          lVar29 = lVar29 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar27 = 2;
        do {
          iVar12 = (int)lVar25;
          iVar30 = (int)lVar33;
          lVar25 = lVar25 + 0x10;
          lVar33 = lVar33 + 0x10;
          iVar31 = (int)lVar33;
          dVar44 = (double)((float)(dVar44 + (double)*(float *)(iVar12 + 0x16c)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        dVar44 = (double)((float)(dVar44 + 0.7853981852531433) * fVar2 + fVar1);
      }
      *(undefined4 *)(puVar14 + 0x21) = 0;
      dVar45 = (double)(float)(dVar48 - dVar44);
      if (dVar44 - (double)(float)(dVar48 - dVar44) < 0.0) {
        dVar45 = dVar44;
      }
      dVar47 = (double)(float)(dVar46 - dVar44);
      if ((double)(float)(dVar46 - dVar44) - dVar45 < 0.0) {
        dVar47 = dVar45;
      }
      dVar45 = (double)(float)(dVar47 * dVar47);
      dVar44 = (double)(float)(dVar45 * (double)(float)(dVar45 * dVar47));
      dVar35 = (double)(float)(dVar45 * dVar44);
      *(float *)((int)puVar14 + 0x104) =
           (float)((double)(float)(dVar45 * dVar35) * dVar37 +
                  (double)(float)(dVar35 * dVar38 +
                                 (double)(float)(dVar44 * dVar39 +
                                                (double)(float)((double)(float)(dVar45 * dVar47) *
                                                                dVar43 + dVar47)))) * 0.2;
      *(f32 *)(puVar14 + 0x22) = (victim->pos).x;
      *(f32 *)((int)puVar14 + 0x114) = (victim->pos).y;
      fVar1 = (victim->pos).z;
      *(float *)(puVar14 + 0x23) = fVar1;
      *(f32 *)((int)puVar14 + 0x11c) = (victim->pos).w;
      *(float *)(puVar14 + 0x23) = fVar1 + 0.75;
      CollDamageMobyDirect
                ((float)dVar41,victim,moby,0x10001,iVar31,(float *)(puVar14 + 0x22),
                 (float *)(puVar14 + 0x20));
    }
    if ((*(int *)((int)pvVar8 + 0x164) == 2) && (moby->state = '\x04', moby->animationId != '\0')) {
      puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar24,0,0,*(undefined4 *)((int)puVar14 + 0x214));
    }
    RegisterFuncForMoby(&PTR_M945_004c6b80_0070f848,moby);
  }
  else if (uVar3 == '\x04') {
    if (*(int *)((int)pvVar8 + 0x164) == 2) {
      *(undefined4 *)((int)pvVar8 + 0x1ac) = 0;
      piVar10 = *(int **)((int)moby->pVar + 0x1a4);
      if ((MobyInstance *)*piVar10 == moby) {
        *piVar10 = 0;
      }
      else {
        piVar10 = *(int **)((int)moby->pVar + 0x1a8);
        if ((MobyInstance *)*piVar10 == moby) {
          *piVar10 = 0;
        }
      }
    }
    else {
      pvVar9 = moby->pVar;
      iVar22 = *(int *)((int)pvVar8 + 0x1ac) + 1;
      *(int *)((int)pvVar8 + 0x1ac) = iVar22;
      piVar10 = *(int **)((int)pvVar9 + 0x1a4);
      piVar11 = *(int **)((int)pvVar9 + 0x1a8);
      iVar31 = *piVar10;
      iVar12 = *piVar11;
      iVar17 = (int)(ZERO_MASK(iVar31));
      iVar30 = iVar17 + 2;
      iVar30 = iVar30 + ((uint)(ZERO_MASK(iVar12)) & (iVar17 + 1) - iVar30);
      if (iVar30 == 0) {
        if (iVar31 != 0) {
          if (iVar12 == 0) {
            *piVar11 = (int)moby;
          }
        }
        else {
          *piVar10 = (int)moby;
        }
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar24,3,0,*(undefined4 *)((int)puVar14 + 0x214));
        }
        auVar49 = ZEXT416(0xffffffff);
        auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar49 = loadVectorLeftIndexed(0x48,0x4c55c0);
        auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar49 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                             auVar50);
        pSVar13 = Splines[*(int *)((int)pvVar8 + 400)];
        auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
        auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x198,
                            uVar32);
        *(undefined4 *)((int)pvVar8 + 0x198U & 0xfffffffc) = uVar20;
        puVar14[0x42] = (longlong)pSVar13->cnt;
        dVar45 = (double)MB_randRangeFloat(0.0,(float)(longlong)puVar14[0x42]);
        uVar20 = FastDoubleToInt((double)(float)(dVar45 - 1.0));
        *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
      }
      else if ((iVar30 == 1) &&
              (puVar14[0x42] = (longlong)(int)(animationSpeed * 120.5),
              *(int *)((int)puVar14 + 0x214) <= iVar22)) {
        if (iVar31 != 0) {
          if (iVar12 == 0) {
            *piVar11 = (int)moby;
          }
        }
        else {
          *piVar10 = (int)moby;
        }
        moby->state = '\x05';
        if (moby->animationId != '\x03') {
          puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar24,3,0,*(undefined4 *)((int)puVar14 + 0x214));
        }
        auVar49 = ZEXT416(0xffffffff);
        auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar49 = loadVectorLeftIndexed(0x48,0x4c55c0);
        auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar49 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                             auVar50);
        pSVar13 = Splines[*(int *)((int)pvVar8 + 400)];
        auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
        auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x198,
                            uVar32);
        *(undefined4 *)((int)pvVar8 + 0x198U & 0xfffffffc) = uVar20;
        puVar14[0x42] = (longlong)pSVar13->cnt;
        dVar45 = (double)MB_randRangeFloat(0.0,(float)(longlong)puVar14[0x42]);
        uVar20 = FastDoubleToInt((double)(float)(dVar45 - 1.0));
        *(undefined4 *)((int)pvVar8 + 0x194) = uVar20;
      }
    }
  }
  else if (uVar3 == '\x03') {
    pVVar21 = Splines[*(int *)((int)pvVar8 + 0x1b4)]->points +
              Splines[*(int *)((int)pvVar8 + 0x1b4)]->cnt + -1;
    dVar47 = (double)pVVar21->x;
    dVar45 = (double)pVVar21->y;
    fVar1 = (float)(dVar47 - (double)(moby->pos).x);
    fVar2 = (float)(dVar45 - (double)(moby->pos).y);
    fVar5 = ABS(fVar1);
    fVar4 = ABS(fVar2);
    *(float *)(puVar14 + 0x2c) = fVar1;
    *(float *)((int)puVar14 + 0x164) = fVar2;
    *(float *)(puVar14 + 0x2d) = fVar5 - fVar4;
    fVar1 = 0.0;
    uVar32 = (ulonglong)(*(uint *)(puVar14 + 0x2c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar14 + 0x2c));
    if (*(float *)(puVar14 + 0x2d) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar14 + 0x164));
    if (*(float *)(puVar14 + 0x2d) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    if (0.0 < fVar2) {
      lVar24 = uVar19 - 0x2c0;
      lVar29 = uVar19 - 0xd4;
      lVar27 = uVar19 - 0xe4;
      lVar33 = 2;
      fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar14 + 0x3f) = fVar2;
      *(float *)(puVar14 + 0x3e) = fVar2;
      *(float *)((int)puVar14 + 500) = fVar2;
      *(float *)((int)puVar14 + 0x1ec) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x3e) = *(float *)(puVar14 + 0x3e) * fVar5;
      *(float *)((int)puVar14 + 500) = *(float *)((int)puVar14 + 500) * fVar2;
      *(float *)(puVar14 + 0x3f) = *(float *)(puVar14 + 0x3f) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar24 + 0x1ec) = *(float *)((int)lVar24 + 0x1dc) * fVar2 * fVar2;
        iVar31 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar19 - 0xe4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar27 = lVar29;
      do {
        fVar2 = *pfVar28;
        fVar5 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar24 + 0x1ec) = *(float *)((int)lVar24 + 0x1ec) * fVar2;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar5;
        lVar27 = lVar27 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar24 = 2;
      do {
        iVar31 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar12 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar31 + 0x1ec) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar7 + fVar4;
    }
    OrganicDeltAng
              (fVar1,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar8 + 0x18c));
    fVar1 = (moby->rotation).z;
    fVar5 = fVar1 + 1.5707963;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar4 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar4 = fVar5;
    }
    fVar7 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar7 = fVar2;
    }
    *(undefined4 *)(puVar14 + 0x19) = 0;
    fVar1 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
      fVar1 = fVar4;
    }
    fVar5 = fVar7 * fVar7;
    fVar2 = fVar1 * fVar1;
    fVar4 = fVar5 * fVar5 * fVar7;
    fVar6 = fVar5 * fVar4;
    fVar15 = fVar2 * fVar2 * fVar1;
    fVar16 = fVar2 * fVar15;
    *(float *)((int)puVar14 + 0xc4) =
         (fVar5 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * 2.0;
    dVar35 = 1.0;
    *(float *)(puVar14 + 0x18) =
         (fVar2 * fVar16 * 2.601887e-06 +
         fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar2 * fVar1 * -0.16666657 + fVar1) * 2.0
    ;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),puVar14 + 0x18,
               puVar14 + 0x1a);
    fVar1 = (float)((double)(moby->pos).y - dVar45);
    fVar2 = (float)((double)(moby->pos).x - dVar47);
    if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1) < dVar35) {
      *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 1.5;
      moby->state = '\x04';
    }
  }
  else if (uVar3 == '\x02') {
    if (*(int *)((int)pvVar8 + 0x164) != 2) {
      *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 4.0;
      moby->state = '\x03';
    }
  }
  else if (uVar3 == '\0') {
    *(undefined4 *)((int)pvVar8 + 0x20) = 0x3f800000;
    *(undefined2 *)((int)pvVar8 + 0x24) = 1;
    *(undefined1 *)((int)pvVar8 + 0x28) = 0;
    *(undefined1 *)((int)pvVar8 + 0x29) = 1;
    MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
    *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
    *(undefined4 *)((int)pvVar8 + 0xd8) = 0x3f000000;
    uVar20 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar8 + 0xd0) = uVar20;
    *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 1.5;
    *(f32 *)((int)pvVar8 + 0x19c) = (moby->rotation).z;
    **(undefined4 **)((int)pvVar8 + 0x1a4) = 0;
    **(undefined4 **)((int)pvVar8 + 0x1a8) = 0;
    moby->state = '\x04';
    if (moby->animationId != '\0') {
      puVar14[0x42] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar24,0,0,*(undefined4 *)((int)puVar14 + 0x214));
    }
    if (*(int *)((int)pvVar8 + 0x1b0) != 0) {
      moby->state = '\x02';
      pSVar13 = Splines[*(int *)((int)pvVar8 + 0x1b4)];
      (moby->pos).x = pSVar13->points[0].x;
      (moby->pos).y = pSVar13->points[0].y;
      (moby->pos).z = pSVar13->points[0].z;
      (moby->pos).w = pSVar13->points[0].w;
    }
  }
  return;
}


