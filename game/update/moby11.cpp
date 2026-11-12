// game/update/moby11.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1bd450-0x1bddd0
#include "game/update/moby11.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x01bd450 (0x980 bytes)
// inlined: FastAtan2 @0x1bdbe4
/* Moby 11 */

void UpdateMoby_11(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  GPiece<12> auVar13;
  ulonglong uVar14;
  longlong lVar15;
  MobyInstance *pMVar19;
  uint uVar20;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  uint uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  uint32_t animJoint;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0xe0;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar14;
  puVar9[0x1e] = in_LR;
  puVar9[0x1a] = in_f30;
  puVar9[0x1b] = in_f31;
  puVar9[0x19] = unaff_r31;
  auVar31 = loadVectorLeftIndexed(0x3d9c,0x760000);
  puVar9[0x18] = unaff_r30;
  auVar32 = loadVectorLeftIndexed(in_LR,0x1bd3e0);
  puVar8 = (undefined4 *)moby->pVar;
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = vectorAddFloatingPoint
                      (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
  auVar32 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  DAT_00763d9c = storeVectorElementWordIndexed(auVar33,0x3d9c,0x760000);
  auVar32 = loadVectorLeftIndexed(4,0x1bd3e0);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
  puVar9[0x17] = unaff_r29;
  puVar9[0x16] = unaff_r28;
  puVar9[0x15] = unaff_r27;
  puVar9[0x14] = unaff_r26;
  if (!(bool)(in_cr6 >> 1 & 1)) {
    auVar32 = loadVectorLeftIndexed(8,0x1bd3e0);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    DAT_00763d9c = 0xc048f5c3;
  }
  auVar32 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0xffffffff);
  auVar31 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0xffffffff);
  auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0xffffffff);
  auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar34 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar32 = loadVectorLeftIndexed(0xc,0x1bd3e0);
  auVar31 = loadVectorLeftIndexed(0x10,0x1bd3e0);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
  auVar32 = vectorSubtractFloatingPoint
                      (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar33);
  auVar36 = vectorSubtractFloatingPoint
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar33);
  auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar31 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar33);
  auVar32 = vectorConditionalSelect(auVar32,auVar33,auVar31);
  auVar31 = loadVectorLeftIndexed(0x14,0x1bd3e0);
  auVar38 = loadVectorLeftIndexed(0x18,0x1bd3e0);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar36);
  auVar36 = vectorConditionalSelect(auVar36,auVar32,auVar33);
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar33 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar34);
  auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar40 = loadVectorLeftIndexed(0x1c,0x1bd3e0);
  auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar34);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar32,auVar35);
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar36
                      );
  auVar31 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = loadVectorLeftIndexed(0x20,0x1bd3e0);
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar37);
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32
                      );
  auVar32 = ZEXT416(0xffffffff);
  auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = loadVectorLeftIndexed(0x24,0x1bd3e0);
  auVar33 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar39);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar34
                      );
  auVar34 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar35 = loadVectorLeftIndexed(0x28,0x1bd3e0);
  auVar32 = ZEXT416(0xfffffff0);
  auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0);
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar31
                      );
  auVar31 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar35 = vectorRotateLeftIntegerWord(auVar38,auVar37);
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar34
                      );
  auVar31 = loadVectorLeftIndexed(0x2c,0x1bd3e0);
  auVar36 = loadVectorLeftIndexed(0x30,0x1bd3e0);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  bVar1 = moby->state;
  auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
  auVar36 = vectorMultiplySumSignedHalfWordModulo
                      (auVar33,auVar35,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                      );
  auVar32 = vectorMultiplyOddUnsignedHalfWord(auVar33,auVar38);
  auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar37);
  auVar33.piece<0,4>() = auVar36.piece<0,4>() + auVar32.piece<0,4>();
  auVar33.piece<8,8>() = auVar32.piece<8,8>();
  auVar33.piece<4,4>() = auVar36.piece<4,4>() + auVar32.piece<4,4>();
  auVar13.piece<0,8>() = auVar33.piece<0,8>();
  auVar13.piece<8,4>() = auVar36.piece<8,4>() + auVar32.piece<8,4>();
  auVar36.piece<8,8>() = auVar13.piece<4,8>() << 0x20;
  auVar36.piece<0,4>() = auVar33.piece<0,4>() + auVar34.piece<0,4>();
  auVar36.piece<4,4>() = auVar33.piece<4,4>() + auVar34.piece<4,4>();
  auVar32.piece<0,8>() = 0;
  auVar32.piece<8,8>() = auVar36.piece<0,8>();
  auVar32 = (auVar32 << 0x40 | auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60) >>
            0x60 & (GPiece<16>)0xffffffff;
  uVar21 = storeVectorElementWordIndexed
                     (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x90,lVar15);
  *(undefined4 *)((uint)&moby->glowRgba & 0xfffffffc) = uVar21;
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        animJoint = 0;
        moby->state = '\x01';
        *puVar8 = 0;
        puVar8[1] = 0;
        pMVar19 = CreateMoby(VENDOR_ORB);
        puVar8[3] = pMVar19;
        pMVar19->modeBits = pMVar19->modeBits | NO_UPDATE;
        *(undefined2 *)(puVar8[3] + 0x32) = 0x40;
        *(f32 *)(puVar8[3] + 0x10) = (moby->pos).x;
        *(f32 *)(puVar8[3] + 0x14) = (moby->pos).y;
        *(float *)(puVar8[3] + 0x18) = (moby->pos).z + 2.95;
        puVar8[0x24] = 0;
        do {
          AttachManipulator
                    ((MobyInstance *)puVar8[3],animJoint,puVar8 + animJoint * 0x10 + 4);
          animJoint = animJoint + 1;
        } while ((int)animJoint < 2);
        UpdateMobyTransform((MobyInstance *)puVar8[3]);
      }
      else {
        fVar2 = (float)puVar8[0x24];
        if (0 < (int)puVar8[0x24]) {
          fVar2 = fVar2 - 0.1;
          puVar8[0x24] = fVar2;
        }
        if (fVar2 <= 0.0) {
          *(ushort *)(puVar8[3] + 0x34) = *(ushort *)(puVar8[3] + 0x34) | 1;
        }
        if (((worldUpdateTime ==
              (((int)worldUpdateTime >> 3) +
              (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8) &&
            (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
            SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= 16.0)) &&
           (ABS((moby->pos).z - g_heroPosition.z) <= 8.0)) {
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            MB_SetAnimation(lVar15,1,0,10,4);
          }
          *(ushort *)(puVar8[3] + 0x34) = *(ushort *)(puVar8[3] + 0x34) & 0xfffe;
        }
        RegisterPostDraw(&PTR_M1099_001bc8c8_00708b18,moby);
        FastQuaternionToEuler((double)DAT_00763d94,puVar8 + 8,2);
        FastQuaternionToEuler((double)DAT_00763d98,puVar8 + 0x18,2);
        dVar28 = (double)FastWrapRot(DAT_00763d94,0.01);
        DAT_00763d94 = (float)dVar28;
        dVar28 = (double)FastWrapRot(DAT_00763d98,-0.02);
        DAT_00763d98 = (float)dVar28;
        *(float *)(puVar8[3] + 0x2c) =
             (float)puVar8[0x24] * *(float *)(*(int *)(puVar8[3] + 0x24) + 0x24) * 2.5;
        UpdateMobyTransform((MobyInstance *)puVar8[3]);
      }
    }
  }
  else if (bVar1 < 3) {
    uVar20 = (int)puVar8[0x24] >> 0x1f;
    if ((int)((uVar20 >> 1 ^ puVar8[0x24]) - uVar20) < 0x3f800000) {
      puVar8[0x24] = (float)puVar8[0x24] + 0.1;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    dVar28 = ABS((double)((moby->pos).z - g_heroPosition.z));
    dVar30 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    if ((worldUpdateTime !=
         (((int)worldUpdateTime >> 3) +
         (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8) ||
       ((dVar30 <= 18.0 && (dVar28 <= 10.0)))) {
      RegisterPostDraw(&PTR_M1099_001bc8c8_00708b18,moby);
      FastQuaternionToEuler((double)DAT_00763d94,puVar8 + 8,2);
      FastQuaternionToEuler((double)DAT_00763d98,puVar8 + 0x18,2);
      dVar29 = (double)FastWrapRot(DAT_00763d94,0.01);
      DAT_00763d94 = (float)dVar29;
      dVar29 = (double)FastWrapRot(DAT_00763d98,-0.02);
      DAT_00763d98 = (float)dVar29;
      *(float *)(puVar8[3] + 0x2c) =
           (float)puVar8[0x24] * *(float *)(*(int *)(puVar8[3] + 0x24) + 0x24) * 2.5;
      UpdateMobyTransform((MobyInstance *)puVar8[3]);
      fVar2 = g_heroRotation.z;
      uVar20 = 1;
      if ((g_heroStateType != 0) &&
         ((g_heroState != STOPPING && (g_heroStateType != 1)))) {
        uVar20 = 0;
      }
      if ((g_heroState == VISIBOMB_CONTROL) || (g_heroState == TURRET_PLANE_UI)) {
        uVar20 = 0;
      }
      uVar26 = (uint)(ZERO_MASK((uint)g_heroType)) & uVar20;
      uVar20 = (uint)(ZERO_MASK((1 - (uint)moby->updateId))) &
               (uint)(ZERO_MASK((uint)g_heroType)) & uVar20;
      if ((4.0 < dVar30) || (2.0 < dVar28)) {
        uVar20 = 0;
        uVar26 = 0;
      }
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)(puVar9 + 0xe) = fVar3;
      *(float *)((int)puVar9 + 0x74) = fVar5;
      *(float *)(puVar9 + 0xf) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar10 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0xd0;
        lVar23 = uVar14 - 100;
        lVar25 = uVar14 - 0x54;
        lVar27 = 2;
        fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x11) = fVar5;
        *(float *)(puVar9 + 0x10) = fVar5;
        *(float *)((int)puVar9 + 0x84) = fVar5;
        *(float *)((int)puVar9 + 0x7c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar6;
        *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar5;
        *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar5 * fVar5;
          iVar11 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar5 * fVar5;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar14 - 100;
        pfVar24 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar25;
        do {
          fVar5 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar17 = 2;
        do {
          iVar11 = (int)lVar18;
          iVar12 = (int)lVar25;
          lVar18 = lVar18 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) +
                  *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
      }
      dVar28 = (double)FastSubRots(fVar2,fVar3);
      if (1.5707963705062866 < dVar28) {
        uVar20 = 0;
        uVar26 = 0;
      }
      uVar22 = 0;
      if (uVar26 != 0) {
        uVar21 = MB_ShowPersistentMessage(1,0x53e3);
        uVar22 = (uVar21 != 0);
      }
      if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (uVar22 != 0 && uVar20 != 0)) {
        Spawn_Moby11_Vendor(lVar15);
        moby->state = '\x03';
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar15,0,0,10,4);
      }
    }
  }
  else if ((bVar1 < 4) && (puVar8[3] != 0)) {
    puVar8[0x24] = 0;
    *(undefined4 *)(puVar8[3] + 0x2c) = 0;
    UpdateMobyTransform((MobyInstance *)puVar8[3]);
  }
  return;
}


