// game/update/moby1269.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x235a08-0x236684
#include "game/update/moby1269.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0235a08 (0x14 bytes)
void M1269_00235a08(void)

{
  DAT_0078d98c = 0x10000;
  return;
}


// 0x0235aa0 (0xbe4 bytes)
// inlined: FastAtan2 @0x236044
/* Moby 1269 */

void UpdateMoby_1269(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  f32 fVar12;
  float fVar13;
  MobyModeBit MVar14;
  void *pvVar15;
  MobyInstance *pMVar16;
  undefined4 uVar17;
  ulonglong *puVar18;
  int iVar19;
  float fVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar25;
  longlong lVar23;
  longlong lVar24;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar24 = uVar21 - 0x220;
  puVar18 = (ulonglong *)lVar24;
  *puVar18 = uVar21;
  puVar18[0x46] = in_LR;
  puVar18[0x3a] = in_f22;
  puVar18[0x3b] = in_f23;
  puVar18[0x3c] = in_f24;
  puVar18[0x3d] = in_f25;
  puVar18[0x3e] = in_f26;
  puVar18[0x3f] = in_f27;
  puVar18[0x40] = in_f28;
  puVar18[0x41] = in_f29;
  puVar18[0x42] = in_f30;
  puVar18[0x43] = in_f31;
  puVar18[0x39] = unaff_r31;
  puVar18[0x36] = unaff_r28;
  puVar18[0x38] = unaff_r30;
  pvVar15 = moby->pVar;
  uVar29 = ZEXT48(pvVar15);
  puVar18[0x37] = unaff_r29;
  puVar18[0x35] = unaff_r27;
  MB_getTarget(0x4020000000000000,lVar22,0x230000,uVar21 - 0x110);
  iVar25 = MB_damage(lVar22,0x230000,0);
  MB_HandleDamage(moby,iVar25,uVar29 + 0x20,0,puVar18 + 0x2c,0,0,4);
  fVar7 = animationSpeed;
  fVar3 = (moby->pos).x;
  fVar5 = (moby->pos).y - *(float *)((int)puVar18 + 0x114);
  fVar6 = fVar3 - *(float *)(puVar18 + 0x22);
  bVar1 = moby->state;
  MVar14 = moby->modeBits;
  if ((SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 0.25) ||
     (((1 < *(int *)(puVar18 + 0x2c) && (iVar25 != 0)) &&
      (*(short *)(*(int *)(iVar25 + 0x20) + 0xa6) != 0x4f5)))) {
    puVar18[0x12] = 2;
    puVar18[0x14] = 0;
    puVar18[0x15] = 0;
    puVar18[0x16] = 0xffffffffffffffff;
    puVar18[0x17] = 0;
    MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4010000000000000,0x3fe6666660000000,
               0x401c000000000000,lVar22,&DAT_00a15d30,0,2,0,3,3,5);
    MB_SpawnBoltsFromCrate(lVar22,0,0xffffffffffffffff);
    DeleteMoby(moby);
  }
  else {
    if (bVar1 == 0) {
      *(float *)((int)pvVar15 + 0x60) = fVar3;
      fVar4 = (moby->pos).y;
      moby->modeBits = MVar14 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar15 + 100) = fVar4;
      *(f32 *)((int)pvVar15 + 0x68) = (moby->pos).z;
      pMVar16 = moby->field80_0xb8;
      *(f32 *)((int)pvVar15 + 0x6c) = (moby->pos).w;
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar15 + 0x80) = 0x3f32b8c2;
      if ((pMVar16 != (MobyInstance *)0x0) && (pMVar16->setByGroup != '\0')) {
        *(undefined4 *)((int)pvVar15 + 0x80) = 0xbf32b8c2;
      }
      *(undefined4 *)((int)pvVar15 + 0x84) = 0;
    }
    else if (bVar1 < 2) {
      auVar46 = ZEXT416(1);
      auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar45 = loadVectorLeftIndexed(0x84,uVar29);
      auVar46 = loadVectorRightIndexed(0x94,uVar29);
      iVar25 = *(int *)((int)pvVar15 + 0x84);
      auVar45 = auVar45 | auVar46;
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar47.piece<0,4>() = auVar45.piece<0,4>() + auVar44.piece<0,4>();
      auVar47.piece<4,4>() = auVar45.piece<4,4>() + auVar44.piece<4,4>();
      auVar47.piece<12,4>() = auVar44.piece<12,4>();
      auVar47.piece<8,4>() = auVar45.piece<8,4>() + auVar44.piece<8,4>();
      auVar44.piece<0,12>() = auVar47.piece<0,12>();
      auVar44.piece<12,4>() = auVar45.piece<12,4>() + auVar47.piece<12,4>();
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46.piece<0,4>() = 0;
      auVar46.piece<4,12>() = auVar44.piece<0,12>() >> 0x40;
      auVar46 = auVar46 & (GPiece<16>)0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x84,uVar29)
      ;
      *(undefined4 *)((int)pvVar15 + 0x84U & 0xfffffffc) = uVar17;
      dVar43 = 30.5;
      iVar25 = iVar25 + 1;
      auVar46 = loadVectorLeftIndexed(0x20,0x235a20);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar45,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar47);
      puVar18[0x32] = (longlong)(int)(fVar7 * 30.5);
      if (iVar25 < *(int *)((int)puVar18 + 0x194)) {
        auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        auVar46 = ZEXT416(0xffffffff);
        auVar45 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar44 = vectorConvertFromSignedFixedPointWord(auVar44,0);
        auVar46 = ZEXT416(0xffffffff);
        auVar52 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar46 = ZEXT416(0xffffffff);
        auVar51 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar46 = loadVectorLeftIndexed(0x28,0x235a20);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar52 = vectorConvertFromSignedFixedPointWord(auVar47,0);
        auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar46 = loadVectorLeftIndexed(0x24,0x235a20);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar45);
        auVar46 = ZEXT416(0xffffffff);
        auVar44 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar46 = vectorReciprocalEstimateFloatingPoint(auVar52);
        auVar53 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar52,auVar48);
        auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar44,auVar49);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar44 = loadVectorLeftIndexed(0x2c,0x235a20);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar50 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar52,auVar48);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar47,auVar46,auVar51);
        auVar46 = loadVectorLeftIndexed(0x30,0x235a20);
        auVar47 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar52 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar52,auVar48);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar52 = vectorMultiplyAddFloatingPoint(auVar51,auVar52,auVar50);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar45,auVar53);
        auVar48 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = ZEXT416(0xffffffff);
        auVar51 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar46 = loadVectorLeftIndexed(0x34,0x235a20);
        auVar45 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = vectorSubtractFloatingPoint
                            (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar52);
        auVar47 = vectorSubtractFloatingPoint
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,auVar52);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = vectorCompareGreaterThanFloatingPoint(auVar44,auVar52);
        auVar46 = vectorConditionalSelect(auVar44,auVar52,auVar46);
        auVar44 = vectorCompareGreaterThanFloatingPoint(auVar46,auVar47);
        auVar47 = vectorConditionalSelect(auVar47,auVar46,auVar44);
        auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar46 = ZEXT416(0xffffffff);
        auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        auVar53 = loadVectorLeftIndexed(0x18,lVar22);
        auVar49 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar49);
        auVar44 = loadVectorLeftIndexed(0x38,0x235a20);
        auVar50 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar46 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0x3c,0x235a20);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar52 = vectorMultiplyAddFloatingPoint(auVar49,auVar47,auVar48);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar49,auVar52,auVar51);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar52,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar47);
        auVar47 = loadVectorLeftIndexed(0x40,0x235a20);
        auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = vectorMultiplyAddFloatingPoint(auVar49,auVar51,auVar50);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar45);
        auVar46 = loadVectorLeftIndexed(0x44,0x235a20);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar52 = vectorMultiplyAddFloatingPoint(auVar49,auVar48,auVar54);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar45);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar52,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                             auVar44);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar53);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar17 = storeVectorElementWordIndexed
                           (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x18,
                            lVar22);
        *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar17;
        iVar25 = *(int *)((int)pvVar15 + 0x84);
        fVar7 = animationSpeed;
      }
      puVar18[0x32] = (longlong)(int)(fVar7 * 15.5);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        *(float *)((int)pvVar15 + 0x70) = DAT_0071f418 * 30.0 + *(float *)((int)pvVar15 + 0x70);
      }
      puVar18[0x32] = (longlong)(int)(fVar7 * 30.5);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        uVar2 = moby->animationId;
        if (uVar2 == '\0') {
          MB_SetAnimation(lVar22,1,0,2);
          uVar2 = moby->animationId;
        }
        if ((uVar2 == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
          MB_SetAnimation(lVar22,2,0,2);
        }
      }
      fVar5 = g_FrameTime * 5.75;
      fVar3 = *(float *)((int)pvVar15 + 0x70);
      if (fVar5 < *(float *)((int)pvVar15 + 0x70)) {
        *(float *)((int)pvVar15 + 0x70) = fVar5;
        fVar3 = fVar5;
      }
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      fVar7 = *(float *)(puVar18 + 0x22);
      fVar8 = *(float *)((int)puVar18 + 0x114);
      fVar10 = fVar7 - fVar5;
      fVar9 = fVar8 - fVar6;
      fVar11 = ABS(fVar10);
      fVar13 = ABS(fVar9);
      *(float *)((int)puVar18 + 0x164) = fVar10;
      *(float *)(puVar18 + 0x2d) = fVar9;
      *(float *)((int)puVar18 + 0x16c) = fVar11 - fVar13;
      dVar33 = 0.0;
      uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0x164) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar18 + 0x16c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar18 + 0x2d) >> 0x1d) & 4;
      fVar10 = ABS(*(float *)((int)puVar18 + 0x164));
      if (*(float *)((int)puVar18 + 0x16c) - 0.0 < 0.0) {
        fVar10 = fVar13;
      }
      fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar9 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar20 = ABS(*(float *)(puVar18 + 0x2d));
      if (*(float *)((int)puVar18 + 0x16c) - 0.0 < 0.0) {
        fVar20 = fVar11;
      }
      if (0.0 < fVar10) {
        lVar23 = uVar21 - 0x210;
        lVar26 = uVar21 - 0xb0;
        lVar28 = uVar21 - 0xa0;
        lVar30 = 2;
        fVar10 = (fVar20 - fVar10) / (fVar20 + fVar10);
        fVar11 = fVar10 * fVar10;
        *(float *)((int)puVar18 + 0x17c) = fVar10;
        *(float *)((int)puVar18 + 0x174) = fVar10;
        *(float *)(puVar18 + 0x2f) = fVar10;
        *(float *)(puVar18 + 0x2e) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)((int)puVar18 + 0x174) = *(float *)((int)puVar18 + 0x174) * fVar11;
        *(float *)(puVar18 + 0x2f) = *(float *)(puVar18 + 0x2f) * fVar10;
        *(float *)((int)puVar18 + 0x17c) = *(float *)((int)puVar18 + 0x17c) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar23 + 0x170) = *(float *)((int)lVar23 + 0x160) * fVar10 * fVar10;
          iVar25 = (int)lVar26;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar25 + 4) * fVar10 * fVar10;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar28 = uVar21 - 0xb0;
        pfVar27 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar26 = lVar28;
        do {
          fVar10 = *pfVar27;
          fVar11 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar23 + 0x170) = *(float *)((int)lVar23 + 0x170) * fVar10;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar11;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar23 = 2;
        do {
          iVar25 = (int)lVar24;
          iVar19 = (int)lVar28;
          lVar24 = lVar24 + 0x10;
          lVar28 = lVar28 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar25 + 0x170)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar13 + fVar9);
      }
      fVar8 = fVar6 - fVar8;
      fVar7 = fVar5 - fVar7;
      dVar32 = dVar33;
      if (SQRT(fVar7 * fVar7 + fVar8 * fVar8) < 7.0) {
        dVar33 = (double)FastWrapRot((float)dVar33,*(float *)((int)pvVar15 + 0x80));
        fVar3 = *(float *)((int)pvVar15 + 0x70);
        fVar5 = (moby->pos).x;
        fVar6 = (moby->pos).y;
      }
      dVar42 = 1.570796251296997;
      dVar41 = 3.141592502593994;
      fVar7 = (float)(dVar33 + 1.570796251296997);
      dVar40 = -3.141592502593994;
      dVar39 = -0.16666656732559204;
      dVar38 = 0.008333025500178337;
      dVar37 = -0.0001980741071747616;
      dVar36 = 2.601886990305502e-06;
      dVar34 = (double)(float)(3.141592502593994 - dVar33);
      if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
        dVar34 = dVar33;
      }
      fVar8 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar8 = fVar7;
      }
      dVar31 = (double)(float)(-3.141592502593994 - dVar33);
      if ((double)(float)(-3.141592502593994 - dVar33) - dVar34 < 0.0) {
        dVar31 = dVar34;
      }
      fVar10 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
        fVar10 = fVar8;
      }
      dVar33 = (double)(float)(dVar31 * dVar31);
      fVar9 = fVar10 * fVar10;
      dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar31));
      fVar7 = fVar9 * fVar9 * fVar10;
      dVar34 = (double)(float)(dVar33 * dVar35);
      fVar8 = fVar9 * fVar7;
      (moby->pos).y =
           ((float)(dVar33 * dVar34) * 2.601887e-06 +
           (float)(dVar34 * -0.0001980741071747616 +
                  (double)(float)(dVar35 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar33 * dVar31) *
                                                 -0.16666656732559204 + dVar31)))) * fVar3 + fVar6;
      iVar25 = *(int *)((int)pvVar15 + 0x84);
      (moby->pos).x =
           (fVar9 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar9 * fVar10 * -0.16666657 + fVar10) *
           fVar3 + fVar5;
      dVar33 = (double)animationSpeed;
      puVar18[0x32] = (longlong)(int)(dVar33 * dVar43);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        dVar33 = (double)FastWrapRot
                                   (*(float *)((int)pvVar15 + 0x78),
                                    g_FrameTime * 5.2359877);
        *(float *)((int)pvVar15 + 0x78) = (float)dVar33;
        (moby->pos).z = (moby->pos).z - *(float *)((int)pvVar15 + 0x74);
        dVar34 = (double)*(float *)((int)pvVar15 + 0x78);
        dVar33 = (double)(float)(dVar41 - dVar34);
        if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
          dVar33 = dVar34;
        }
        dVar31 = (double)(float)(dVar40 - dVar34);
        if ((double)(float)(dVar40 - dVar34) - dVar33 < 0.0) {
          dVar31 = dVar33;
        }
        dVar33 = (double)(float)(dVar31 * dVar31);
        dVar35 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar31));
        dVar34 = (double)(float)(dVar33 * dVar35);
        fVar3 = (float)((double)(float)(dVar33 * dVar34) * dVar36 +
                       (double)(float)(dVar34 * dVar37 +
                                      (double)(float)(dVar35 * dVar38 +
                                                     (double)(float)((double)(float)(dVar33 * dVar31
                                                                                    ) * dVar39 +
                                                                    dVar31)))) * 0.1;
        *(float *)((int)pvVar15 + 0x74) = fVar3;
        (moby->pos).z = (moby->pos).z + fVar3;
        iVar25 = *(int *)((int)pvVar15 + 0x84);
        dVar33 = (double)animationSpeed;
      }
      puVar18[0x32] = (longlong)(int)(dVar33 * dVar43);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        dVar34 = 0.5;
        dVar33 = (double)GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
        if (dVar33 - (double)g_heroGroundZ < 0.0) {
          dVar33 = (double)g_heroGroundZ;
        }
        dVar31 = (double)(float)(dVar33 - (double)(moby->pos).z);
        if ((dVar31 < dVar34) && (-3.0 < dVar31)) {
          AccelDelt((float)(dVar33 + 0.5799999833106995),DAT_0071f40c * 0.02,
                              DAT_0071f40c * 0.3,g_FrameTime * 4.0,&(moby->pos).z,0x235a20
                              ,(float *)((int)pvVar15 + 0x7c));
        }
      }
      iVar25 = *(int *)((int)pvVar15 + 0x84);
      puVar18[0x32] = (longlong)(int)((double)animationSpeed * dVar43);
      if (*(int *)((int)puVar18 + 0x194) < iVar25) {
        dVar33 = (double)(float)(dVar32 + dVar42);
        dVar43 = (double)(float)(dVar41 - dVar32);
        if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
          dVar43 = dVar32;
        }
        dVar34 = (double)(float)(dVar41 - dVar33);
        if (dVar33 - (double)(float)(dVar41 - dVar33) < 0.0) {
          dVar34 = dVar33;
        }
        dVar41 = (double)(float)(dVar40 - dVar32);
        if ((double)(float)(dVar40 - dVar32) - dVar43 < 0.0) {
          dVar41 = dVar43;
        }
        dVar43 = (double)(float)(dVar40 - dVar33);
        if ((double)(float)(dVar40 - dVar33) - dVar34 < 0.0) {
          dVar43 = dVar34;
        }
        dVar33 = (double)(float)(dVar41 * dVar41);
        dVar32 = (double)(float)(dVar43 * dVar43);
        dVar40 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar41));
        *(undefined4 *)((int)puVar18 + 0xcc) = 0x45afdf66;
        *(undefined4 *)(puVar18 + 0x19) = 0x3f99999a;
        dVar31 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar43));
        dVar34 = (double)(float)(dVar33 * dVar40);
        dVar42 = (double)(float)(dVar32 * dVar31);
        *(float *)((int)puVar18 + 0xc4) =
             (float)((double)(float)(dVar33 * dVar34) * dVar36 +
                    (double)(float)(dVar34 * dVar37 +
                                   (double)(float)(dVar40 * dVar38 +
                                                  (double)(float)((double)(float)(dVar33 * dVar41) *
                                                                  dVar39 + dVar41)))) * 0.3;
        *(float *)(puVar18 + 0x18) =
             (float)((double)(float)(dVar32 * dVar42) * dVar36 +
                    (double)(float)(dVar42 * dVar37 +
                                   (double)(float)(dVar31 * dVar38 +
                                                  (double)(float)((double)(float)(dVar32 * dVar43) *
                                                                  dVar39 + dVar43)))) * 0.3;
        SetCollDamIn(0x3ff0000000000000,uVar21 - 0x140,lVar22,0x10001);
        fVar4 = (moby->pos).y;
        *(f32 *)(puVar18 + 0x1a) = (moby->pos).x;
        fVar12 = (moby->pos).w;
        *(f32 *)((int)puVar18 + 0xd4) = fVar4;
        *(f32 *)((int)puVar18 + 0xdc) = fVar12;
        *(float *)(puVar18 + 0x1b) = (moby->pos).z + 0.4;
        iVar25 = CollMobySphere(uVar21 - 0x150);
        fVar4 = (moby->pos).y;
        fVar3 = (moby->pos).z;
        fVar12 = (moby->pos).w;
        if ((((iVar25 == 0) || (g_CollOutput.pMoby == (MobyInstance *)0x0)) ||
            ((g_CollOutput.pMoby)->oClass == MINE_04F5)) || (g_CollOutput.pMoby == moby->field80_0xb8))
        {
          *(f32 *)(puVar18 + 0x1a) = (moby->pos).x;
          *(f32 *)((int)puVar18 + 0xd4) = fVar4;
          *(f32 *)((int)puVar18 + 0xdc) = fVar12;
          *(float *)(puVar18 + 0x1b) = fVar3 + 0.35;
          iVar25 = CollSphere(uVar21 - 0x150);
          if (iVar25 != 0) {
            moby->state = '\x02';
          }
        }
        else {
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      puVar18[0x12] = 2;
      puVar18[0x14] = 0;
      puVar18[0x15] = 9;
      puVar18[0x16] = 0xffffffffffffffff;
      puVar18[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                 0x401c000000000000,lVar22,&DAT_00a15d30,0,2,0,5,0xf,0x19);
      DeleteMoby(moby);
      return;
    }
    MB_RegisterLameShadow(1.0,moby);
  }
  return;
}


