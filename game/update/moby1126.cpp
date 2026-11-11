// game/update/moby1126.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1d6b28-0x1d7850
#include "game/update/moby1126.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby880.h"
#include "idol/fastfunc.h"

// 0x01d6b28 (0xd28 bytes)
// inlined: FastAtan2 @0x1d6dbc, FastAtan2 @0x1d6fcc
/* Moby 1126 */

void UpdateMoby_1126(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  f32 fVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined4 uVar22;
  longlong lVar21;
  int iVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  ulonglong in_f31;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  float fVar36;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x130;
  puVar12 = (ulonglong *)lVar21;
  *puVar12 = uVar20;
  puVar12[0x28] = in_LR;
  puVar12[0x25] = in_f31;
  lVar18 = uVar20 - 0x40;
  puVar19 = (undefined4 *)lVar18;
  puVar19[3] = in_vr31_32_3;
  puVar19[2] = in_vr31_32_2;
  puVar19[1] = in_vr31_32_1;
  *puVar19 = in_vr31_32_0;
  puVar12[0x24] = unaff_r31;
  puVar12[0x23] = unaff_r30;
  puVar12[0x22] = unaff_r29;
  puVar12[0x21] = unaff_r28;
  if (moby != (MobyInstance *)0x0) {
    pvVar7 = moby->pVar;
    uVar27 = ZEXT48(pvVar7);
    if (pvVar7 != (void *)0x0) {
      uVar22 = MB_damage(moby,0x230000,0);
      MB_HandleDamage(moby,uVar22,uVar27 + 0x20,0,puVar12 + 0x12,0,0,4);
      if ((moby->state < 2) && (1 < *(int *)(puVar12 + 0x12))) {
        PlayMobySound(1,0,moby);
        MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
        auVar32 = loadVectorLeftIndexed(lVar18,0x1d6ad0);
        auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar32,auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar27);
        *(undefined2 *)((int)pvVar7 + 0x26) = uVar11;
        MB_UpdateLightsTransition(moby,uVar27 + 0x60);
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar31,auVar32,auVar30);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x7c,uVar27);
        *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(moby,2,0,5);
        }
        moby->state = '\x02';
      }
      moby->damage = -1;
      MB_ColorDyingMoby(moby,uVar27 + 0x60);
      uVar1 = moby->state;
      if (uVar1 == '\x04') {
        fVar8 = (moby->pos).z;
        uVar9 = (int)fVar8 >> 0x1f;
        uVar10 = (int)*(uint *)((int)pvVar7 + 0x90) >> 0x1f;
        if ((int)((uVar9 >> 1 ^ (uint)fVar8) - uVar9) <
            (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar7 + 0x90)) - uVar10)) {
          (moby->pos).z = g_FrameTime * 5.0 + (moby->pos).z;
        }
        else {
          MVar6 = moby->modeBits;
          uVar1 = moby->animationId;
          (moby->pos).z = *(f32 *)((int)pvVar7 + 0x90);
          moby->modeBits = MVar6 | CAN_BE_AUTO_TARGETED;
          if (uVar1 != '\x01') {
            MB_SetAnimation(moby,1,0,5);
          }
          moby->state = '\x01';
        }
      }
      else if (uVar1 == '\x03') {
        if (((moby->updateId != '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,0);
        }
        fVar36 = 0.7;
        fVar4 = (moby->pos).z;
        fVar3 = *(float *)((int)pvVar7 + 0x90);
        if (*(float *)((int)pvVar7 + 0x90) - 0.7 < fVar4) {
          fVar36 = g_FrameTime * 5.0;
          fVar3 = fVar4;
        }
        dVar29 = (double)(moby->rotation).z;
        (moby->pos).z = fVar3 - fVar36;
        fVar36 = MB_WrapRot
                           (*(float *)((int)pvVar7 + 0x80) + *(float *)((int)pvVar7 + 0x88));
        dVar29 = (double)FastSubRots((float)dVar29,fVar36);
        if (dVar29 <= (double)(g_FrameTime * 12.566371)) {
          fVar36 = MB_WrapRot
                             (*(float *)((int)pvVar7 + 0x80) + *(float *)((int)pvVar7 + 0x88));
          dVar29 = (double)fVar36;
        }
        else {
          dVar29 = (double)FastWrapRot
                                     ((moby->rotation).z,g_FrameTime * 12.566371);
        }
        (moby->rotation).z = (float)dVar29;
        iVar23 = FastDecTimerS16(uVar27 + 0x7c);
        if (iVar23 != 0) {
          PlayMobySound(2,0,moby);
          if (moby->animationId != '\x03') {
            MB_SetAnimation(moby,3,0,5);
          }
          moby->state = '\x04';
        }
      }
      else if (uVar1 == '\x02') {
        if (((moby->updateId != '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,1);
        }
        dVar29 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 12.566371)
        ;
        (moby->rotation).z = (float)dVar29;
        iVar23 = FastDecTimerS16(uVar27 + 0x7c);
        if (iVar23 != 0) {
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0x4c,0x1d6ad0);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = vectorSplatHalfWord(auVar30,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x7c,uVar27);
          *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
          moby->state = '\x03';
        }
      }
      else if (uVar1 == '\x01') {
        if (((moby->updateId != '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x01')) {
          MB_SetAnimation(moby,1,0,1);
        }
        if (*(short *)((int)pvVar7 + 0x7e) == 0) {
          fVar36 = *(float *)((int)pvVar7 + 0x8c);
          fVar4 = *(float *)((int)pvVar7 + 0x78) * 0.017453292 * g_FrameTime +
                  *(float *)((int)pvVar7 + 0x88);
          *(float *)((int)pvVar7 + 0x88) = fVar4;
          if (fVar36 < fVar4) {
            *(undefined2 *)((int)pvVar7 + 0x7e) = 1;
            *(float *)((int)pvVar7 + 0x88) = fVar36;
            fVar4 = fVar36;
          }
        }
        else {
          fVar4 = -(*(float *)((int)pvVar7 + 0x78) * 0.017453292 * g_FrameTime -
                   *(float *)((int)pvVar7 + 0x88));
          *(float *)((int)pvVar7 + 0x88) = fVar4;
          if (fVar4 < 0.0) {
            *(undefined2 *)((int)pvVar7 + 0x7e) = 0;
            *(undefined4 *)((int)pvVar7 + 0x88) = 0;
            fVar4 = 0.0;
          }
        }
        fVar36 = MB_WrapRot(*(float *)((int)pvVar7 + 0x80) + fVar4);
        (moby->rotation).z = fVar36;
        iVar23 = FastDecTimerS16(uVar27 + 0x7c);
        if (iVar23 != 0) {
          if (moby->setByGroup == '\0') {
            iVar23 = *(int *)((int)pvVar7 + 0x98);
            if ((iVar23 == 0) || ((*(ushort *)((int)pvVar7 + 0x9c) & 1) != 0)) {
              GetBonePosition(moby,0,uVar20 - 0xc0);
              fVar2 = g_FrameTime;
              fVar36 = (moby->rotation).z;
              fVar4 = fVar36 + 1.5707963;
              fVar3 = 3.1415925 - fVar36;
              if (fVar36 - (3.1415925 - fVar36) < 0.0) {
                fVar3 = fVar36;
              }
              fVar5 = 3.1415925 - fVar4;
              if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                fVar5 = fVar4;
              }
              fVar13 = -3.1415925 - fVar36;
              if ((-3.1415925 - fVar36) - fVar3 < 0.0) {
                fVar13 = fVar3;
              }
              fVar36 = -3.1415925 - fVar4;
              if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
                fVar36 = fVar5;
              }
              fVar4 = fVar13 * fVar13;
              fVar3 = fVar36 * fVar36;
              fVar16 = fVar4 * fVar4 * fVar13;
              fVar5 = fVar3 * fVar3 * fVar36;
              fVar17 = fVar4 * fVar16;
              *(undefined4 *)(puVar12 + 0x11) = 0;
              fVar15 = fVar3 * fVar5;
              *(float *)((int)puVar12 + 0x84) =
                   fVar2 * 15.0 *
                   (fVar4 * fVar17 * 2.601887e-06 +
                   fVar17 * -0.0001980741 +
                   fVar16 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13);
              *(float *)(puVar12 + 0x10) =
                   fVar2 * 15.0 *
                   (fVar3 * fVar15 * 2.601887e-06 +
                   fVar15 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar3 * fVar36 * -0.16666657 + fVar36);
              PlayMobySound(0,0,moby);
              FUN_0049fba0(uVar20 - 0xc0,uVar20 - 0xb0,moby,*(undefined1 *)((int)pvVar7 + 0x9e));
              iVar23 = *(int *)((int)pvVar7 + 0x98);
            }
            if (iVar23 == 0) {
              *(ushort *)((int)pvVar7 + 0x9c) = *(ushort *)((int)pvVar7 + 0x9c) ^ 1;
            }
            else {
              iVar23 = FastDecTimerS16(uVar27 + 0x9c);
              if (iVar23 != 0) {
                moby->setByGroup = '\x01';
                *(short *)((int)pvVar7 + 0x9c) = (short)*(undefined4 *)((int)pvVar7 + 0x98);
              }
            }
          }
          else {
            iVar23 = FastDecTimerS16(uVar27 + 0x9c);
            if (iVar23 != 0) {
              moby->setByGroup = '\0';
              *(short *)((int)pvVar7 + 0x9c) = (short)*(undefined4 *)((int)pvVar7 + 0x94);
            }
          }
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0x34,0x1d6ad0);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar31 = vectorSplatHalfWord(auVar30,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar31,0x7c,uVar27);
          *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
          fVar36 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          fVar36 = SQRT(fVar4 * fVar4 + fVar36 * fVar36);
          if ((55.0 < fVar36) || ((35.0 < fVar36 && (moby->enabled == '\0')))) {
            if (fVar36 <= 80.0) {
              auVar31 = ZEXT416(2);
              auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              if (120.0 < fVar36) {
                auVar31 = ZEXT416(4);
                auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              }
              auVar32 = ZEXT416(0xfffffff0);
              auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
              auVar34 = vectorMultiplyOddUnsignedHalfWord(auVar30,auVar31);
              auVar32 = ZEXT416(0);
              auVar31 = vectorRotateLeftIntegerWord(auVar31,auVar33);
              auVar30 = vectorMultiplySumSignedHalfWordModulo
                                  (auVar30,auVar31,
                                   auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar33);
              auVar30 = ZEXT416((uint)(auVar30.piece<0,4>() + auVar34.piece<0,4>())) &
                        (GPiece<16>)0xffffffff;
              auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            }
            else {
              auVar31 = ZEXT416(3);
              auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              auVar31 = ZEXT416(0xfffffff0);
              auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              auVar31 = ZEXT416(0);
              auVar35 = vectorRotateLeftIntegerWord(auVar32,auVar34);
              auVar33 = vectorMultiplyOddUnsignedHalfWord(auVar30,auVar32);
              auVar30 = vectorMultiplySumSignedHalfWordModulo
                                  (auVar30,auVar35,
                                   auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar34);
              auVar32.piece<0,4>() = auVar30.piece<0,4>() + auVar33.piece<0,4>();
              auVar32.piece<8,8>() = auVar30.piece<8,8>();
              auVar32.piece<4,4>() = auVar30.piece<4,4>() + auVar33.piece<4,4>();
              auVar31.piece<0,8>() = auVar32.piece<0,8>();
              auVar31.piece<12,4>() = auVar30.piece<12,4>();
              auVar31.piece<8,4>() = auVar30.piece<8,4>() + auVar33.piece<8,4>();
              auVar30.piece<0,12>() = auVar31.piece<0,12>();
              auVar30.piece<12,4>() = auVar31.piece<12,4>() + auVar33.piece<12,4>();
            }
            auVar30 = vectorSplatHalfWord(auVar30,1);
            uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x7c,uVar27);
            *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
          }
        }
      }
      else if (uVar1 == '\0') {
        iVar23 = *(int *)((int)pvVar7 + 0x70);
        if (iVar23 != -1) {
          fVar36 = g_MobyInstance[iVar23].pos.x - (moby->pos).x;
          fVar4 = g_MobyInstance[iVar23].pos.y - (moby->pos).y;
          fVar3 = ABS(fVar36);
          fVar2 = ABS(fVar4);
          *(float *)(puVar12 + 0x14) = fVar36;
          *(float *)((int)puVar12 + 0xa4) = fVar4;
          *(float *)(puVar12 + 0x15) = fVar3 - fVar2;
          fVar36 = 0.0;
          uVar27 = (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)(puVar12 + 0x14));
          if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
            fVar4 = fVar2;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
          fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          fVar13 = ABS(*(float *)((int)puVar12 + 0xa4));
          if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
            fVar13 = fVar3;
          }
          if (0.0 < fVar4) {
            lVar18 = uVar20 - 0x120;
            lVar26 = uVar20 - 0x54;
            lVar24 = uVar20 - 100;
            lVar28 = 2;
            fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x1b) = fVar4;
            *(float *)(puVar12 + 0x1a) = fVar4;
            *(float *)((int)puVar12 + 0xd4) = fVar4;
            *(float *)((int)puVar12 + 0xcc) = fVar4;
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar3;
            *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar4;
            *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar4 * fVar3;
            do {
              *(float *)((int)lVar18 + 0xcc) = *(float *)((int)lVar18 + 0xbc) * fVar4 * fVar4;
              iVar23 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar20 - 100;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar21;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar3 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0xcc) = *(float *)((int)lVar18 + 0xcc) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar18 = lVar21;
            do {
              iVar23 = (int)lVar18;
              iVar14 = (int)lVar26;
              lVar18 = lVar18 + 0x10;
              lVar26 = lVar26 + 0x10;
              fVar36 = fVar36 + *(float *)(iVar23 + 0xcc) + *(float *)(iVar14 + 4) +
                       *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar36 = (fVar36 + 0.7853982) * fVar5 + fVar2;
          }
          *(float *)((int)pvVar7 + 0x80) = fVar36;
          if (fVar36 < 0.0) {
            *(float *)((int)pvVar7 + 0x80) = fVar36 + 6.2831855;
          }
        }
        iVar23 = *(int *)((int)pvVar7 + 0x74);
        if (iVar23 == -1) {
          fVar4 = *(float *)((int)pvVar7 + 0x80);
          fVar36 = fVar4 + 6.2831855;
          *(float *)((int)pvVar7 + 0x84) = fVar36;
        }
        else {
          fVar36 = g_MobyInstance[iVar23].pos.x - (moby->pos).x;
          fVar4 = g_MobyInstance[iVar23].pos.y - (moby->pos).y;
          fVar3 = ABS(fVar36);
          fVar2 = ABS(fVar4);
          *(float *)((int)puVar12 + 0x94) = fVar36;
          *(float *)(puVar12 + 0x13) = fVar4;
          *(float *)((int)puVar12 + 0x9c) = fVar3 - fVar2;
          fVar36 = 0.0;
          uVar27 = (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar12 + 0x94));
          if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
            fVar4 = fVar2;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
          fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          fVar13 = ABS(*(float *)(puVar12 + 0x13));
          if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
            fVar13 = fVar3;
          }
          if (0.0 < fVar4) {
            lVar18 = uVar20 - 0x120;
            lVar26 = uVar20 - 0x74;
            lVar24 = uVar20 - 0x84;
            lVar28 = 2;
            fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x17) = fVar4;
            *(float *)(puVar12 + 0x16) = fVar4;
            *(float *)((int)puVar12 + 0xb4) = fVar4;
            *(float *)((int)puVar12 + 0xac) = fVar4;
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar3;
            *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar4;
            *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar4 * fVar3;
            do {
              *(float *)((int)lVar18 + 0xac) = *(float *)((int)lVar18 + 0x9c) * fVar4 * fVar4;
              iVar23 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar20 - 0x84;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar21;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar3 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0xac) = *(float *)((int)lVar18 + 0xac) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar18 = 2;
            do {
              iVar23 = (int)lVar21;
              iVar14 = (int)lVar26;
              lVar21 = lVar21 + 0x10;
              lVar26 = lVar26 + 0x10;
              fVar36 = fVar36 + *(float *)(iVar23 + 0xac) + *(float *)(iVar14 + 4) +
                       *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar36 = (fVar36 + 0.7853982) * fVar5 + fVar2;
          }
          *(float *)((int)pvVar7 + 0x84) = fVar36;
          if (fVar36 < 0.0) {
            fVar36 = fVar36 + 6.2831855;
            *(float *)((int)pvVar7 + 0x84) = fVar36;
          }
          fVar4 = *(float *)((int)pvVar7 + 0x80);
          if (fVar36 < fVar4) {
            fVar36 = fVar36 + 6.2831855;
            *(float *)((int)pvVar7 + 0x84) = fVar36;
          }
        }
        *(undefined4 *)((int)pvVar7 + 0x88) = 0;
        *(float *)((int)pvVar7 + 0x8c) = fVar36 - fVar4;
        fVar36 = MB_WrapRot(fVar4);
        (moby->rotation).z = fVar36;
        *(f32 *)((int)pvVar7 + 0x90) = (moby->pos).z;
        *(undefined1 *)((int)pvVar7 + 0x29) = 0;
        moby->setByGroup = '\0';
        *(short *)((int)pvVar7 + 0x9c) = (short)*(undefined4 *)((int)pvVar7 + 0x94);
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,0);
        }
        moby->state = '\x01';
      }
    }
  }
  return;
}


