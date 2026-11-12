// game/update/moby1827.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2c11e8-0x2c1ab8
#include "game/update/moby1827.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1826.h"
#include "idol/fastfunc.h"

// 0x02c11e8 (0x7c0 bytes)
ulonglong M1827_002c11e8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong unaff_r24;
  int iVar17;
  ulonglong unaff_r25;
  int iVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f19;
  double dVar25;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar26;
  ulonglong in_f22;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
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
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar15 = uVar10 - 0x240;
  puVar6 = (ulonglong *)lVar15;
  *puVar6 = uVar10;
  puVar6[0x4a] = in_LR;
  puVar6[0x3b] = in_f19;
  puVar6[0x3c] = in_f20;
  puVar6[0x3d] = in_f21;
  puVar6[0x3e] = in_f22;
  puVar6[0x3f] = in_f23;
  puVar6[0x40] = in_f24;
  puVar6[0x41] = in_f25;
  puVar6[0x42] = in_f26;
  puVar6[0x43] = in_f27;
  puVar6[0x44] = in_f28;
  puVar6[0x45] = in_f29;
  puVar6[0x46] = in_f30;
  puVar6[0x47] = in_f31;
  puVar6[0x39] = unaff_r30;
  lVar8 = uVar10 - 0xc0;
  puVar9 = (undefined4 *)lVar8;
  puVar9[3] = in_vr31_32_3;
  puVar9[2] = in_vr31_32_2;
  puVar9[1] = in_vr31_32_1;
  *puVar9 = in_vr31_32_0;
  puVar6[0x36] = unaff_r27;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar6[0x35] = unaff_r26;
  uVar12 = DAT_007b7f28;
  uVar4 = DAT_007b7f24;
  fVar1 = *(float *)(iVar5 + 0xb0);
  fVar2 = Cylinders[*(int *)(iVar5 + 0xa0)].pos.z;
  fVar3 = Cylinders[*(int *)(iVar5 + 0xa0)].matrix.v2.z;
  fVar7 = DAT_007b7f08 * g_FrameTime;
  dVar36 = (double)((fVar2 - fVar3) + *(float *)(iVar5 + 0xb8));
  dVar28 = (double)(fVar2 + fVar3 + *(float *)(iVar5 + 0xb8));
  puVar6[0x3a] = unaff_r31;
  puVar6[0x38] = unaff_r29;
  puVar6[0x37] = unaff_r28;
  puVar6[0x34] = unaff_r25;
  puVar6[0x33] = unaff_r24;
  uVar12 = FastLerpColor((double)(ABS(fVar1) / fVar7),uVar4,uVar12);
  FastMtxCopyNoTranslate(uVar10 - 0x1d0,param_1 + 0xc0);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar4;
  *(float *)(puVar6 + 0x15) = (float)dVar36;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar11 = GetEffectTex(0xe);
  puVar6[0x25] = uVar11;
  uVar11 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar11;
  uVar11 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar11;
  uVar11 = idol_draw::PackCmd(DAT_010a0bd0,DAT_007b7f1c,DAT_010a0bd4,DAT_007b7f20,0x80);
  puVar6[0x27] = uVar11;
  auVar40 = loadVectorLeftIndexed(lVar8,0x2c11b4);
  auVar43 = ZEXT416(0);
  auVar39 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar43 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar16 = 0;
  auVar40 = loadVectorLeftIndexed(4,0x2c11b4);
  dVar29 = 0.01745329238474369;
  auVar48 = loadVectorLeftIndexed(8,0x2c11b4);
  dVar30 = 1.570796251296997;
  auVar50 = loadVectorLeftIndexed(0xc,0x2c11b4);
  dVar31 = 3.141592502593994;
  auVar47 = loadVectorLeftIndexed(0x10,0x2c11b4);
  dVar32 = -3.141592502593994;
  auVar42 = loadVectorLeftIndexed(0x14,0x2c11b4);
  dVar33 = -0.16666656732559204;
  auVar44 = loadVectorLeftIndexed(0x18,0x2c11b4);
  dVar34 = 0.008333025500178337;
  puVar14 = &DAT_007b7f34;
  auVar45 = loadVectorLeftIndexed(0x1c,0x2c11b4);
  puVar9 = &DAT_007b7f38;
  dVar35 = -0.0001980741071747616;
  lVar13 = uVar10 - 400;
  auVar46 = loadVectorLeftIndexed(0x20,0x2c11b4);
  uVar11 = uVar10 - 0x18c;
  dVar37 = 2.601886990305502e-06;
  auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar49 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
  auVar40 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar48 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar50 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar47 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar42 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar46 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  dVar36 = (double)*(float *)(puVar6 + 0x15);
  lVar8 = lVar15;
  auVar48 = auVar39;
  do {
    uVar4 = *puVar9;
    *(undefined4 *)((int)lVar8 + 0x100) = *puVar14;
    *(undefined4 *)((int)lVar8 + 0x104) = uVar4;
    iVar17 = (int)lVar15;
    if ((uVar16 & 1) == 0) {
      auVar41 = loadVectorLeftIndexed(0x7f14,0x7b0000);
      auVar41 = vectorSubtractFloatingPoint
                          (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
      *(float *)(iVar17 + 0xb8) = -DAT_007b7f18;
    }
    else {
      *(float *)(iVar17 + 0xb8) = DAT_007b7f18;
      auVar41 = loadVectorLeftIndexed(0x7f14,0x7b0000);
    }
    auVar52 = ZEXT416(0xffffffff);
    auVar51 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(1);
    auVar38 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar54 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar56 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
    auVar53 = vectorShiftRightAlgebraicWord(auVar48,auVar38);
    auVar51 = loadVectorLeftIndexed(0x7f30,0x7b0000);
    auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar51,auVar49,auVar52);
    auVar57 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar56 = vectorConvertFromSignedFixedPointWord(auVar53,0);
    auVar52 = ZEXT416(0xffffffff);
    auVar60 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar51 = vectorMultiplyAddFloatingPoint(auVar51,auVar49,auVar55);
    auVar52 = ZEXT416(0xffffffff);
    auVar55 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar53 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar58 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar59 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    auVar53 = vectorMultiplyAddFloatingPoint
                        (auVar54,auVar56,
                         auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar51,auVar56,auVar57);
    auVar54.piece<0,4>() = auVar48.piece<0,4>() + auVar38.piece<0,4>();
    auVar54.piece<8,8>() = auVar48.piece<8,8>();
    auVar54.piece<4,4>() = auVar48.piece<4,4>() + auVar38.piece<4,4>();
    auVar51.piece<0,8>() = auVar54.piece<0,8>();
    auVar51.piece<12,4>() = auVar48.piece<12,4>();
    auVar51.piece<8,4>() = auVar48.piece<8,4>() + auVar38.piece<8,4>();
    auVar48.piece<0,12>() = auVar51.piece<0,12>();
    auVar48.piece<12,4>() = auVar51.piece<12,4>() + auVar38.piece<12,4>();
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    uVar16 = uVar16 + 1;
    puVar14 = puVar14 + 2;
    puVar9 = puVar9 + 2;
    lVar8 = lVar8 + 8;
    auVar41 = vectorSubtractFloatingPoint(auVar50,auVar53);
    auVar56 = vectorSubtractFloatingPoint(auVar47,auVar53);
    auVar57 = vectorSubtractFloatingPoint(auVar50,auVar52);
    auVar51 = vectorCompareGreaterThanFloatingPoint(auVar41,auVar53);
    auVar51 = vectorConditionalSelect(auVar41,auVar53,auVar51);
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar57,auVar52);
    auVar54 = vectorSubtractFloatingPoint(auVar47,auVar52);
    auVar52 = vectorConditionalSelect(auVar57,auVar52,auVar41);
    auVar41 = ZEXT416(0xffffffff);
    auVar53 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar51,auVar56);
    auVar51 = vectorConditionalSelect(auVar56,auVar51,auVar41);
    auVar56 = vectorShiftLeftIntegerWord(auVar60,auVar60);
    auVar62 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar51,auVar51,auVar55);
    auVar41 = ZEXT416(0xffffffff);
    auVar57 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar52,auVar54);
    auVar52 = vectorConditionalSelect(auVar54,auVar52,auVar41);
    auVar41 = ZEXT416(0xffffffff);
    auVar54 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar56 = vectorMultiplyAddFloatingPoint(auVar52,auVar52,auVar56);
    auVar54 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar60 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar53,auVar51,auVar58);
    auVar41 = ZEXT416(0xffffffff);
    auVar58 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar61 = vectorShiftLeftIntegerWord(auVar57,auVar57);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar56,auVar52,auVar54);
    auVar57 = vectorMultiplyAddFloatingPoint(auVar53,auVar55,auVar59);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar55,auVar42,auVar51);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar55 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar59 = vectorMultiplyAddFloatingPoint(auVar56,auVar54,auVar62);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar54,auVar42,auVar52);
    auVar54 = vectorShiftLeftIntegerWord(auVar58,auVar58);
    auVar58 = vectorMultiplyAddFloatingPoint(auVar53,auVar57,auVar60);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar57,auVar44,auVar51);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar57 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar56,auVar59,auVar55);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar59,auVar44,auVar52);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar53,auVar58,auVar61);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar58,auVar45,auVar51);
    auVar41 = ZEXT416(0xffffffff);
    auVar58 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar54 = vectorMultiplyAddFloatingPoint(auVar56,auVar55,auVar54);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar55,auVar45,auVar52);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar53,auVar46,auVar51);
    auVar53 = vectorShiftLeftIntegerWord(auVar58,auVar58);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar54,auVar46,auVar41);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar52,auVar38,auVar57);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar53);
    auVar41 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0,lVar13);
    *(undefined4 *)lVar13 = uVar4;
    lVar13 = lVar13 + 0x10;
    auVar41 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0,uVar11);
    *(undefined4 *)uVar11 = uVar4;
    *(undefined4 *)(iVar17 + 0xbc) = 0x3f800000;
    uVar11 = uVar11 + 0x10;
    lVar15 = lVar15 + 0x10;
  } while ((int)uVar16 < 4);
  iVar17 = 1;
  if (dVar36 < dVar28) {
    do {
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar40 = loadVectorLeftIndexed(0x7f30,0x7b0000);
      auVar48 = vectorReciprocalEstimateFloatingPoint(auVar40);
      puVar6[0x28] = (longlong)(worldUpdateTime % 0x78);
      auVar43 = loadVectorLeftIndexed(0x2c,0x2c11b4);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar42 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      uVar11 = 0x28;
      auVar43 = ZEXT416(0xffffffff);
      auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar40,auVar42);
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      iVar17 = -iVar17;
      iVar18 = 0;
      auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar43,auVar44);
      auVar43 = ZEXT416(0xffffffff);
      auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = loadVectorLeftIndexed(0x28,0x2c11b4);
      uVar19 = puVar6[0x28];
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      dVar27 = 360.0;
      auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar40,auVar42);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar46,auVar45);
      dVar20 = (double)DAT_007b7f30;
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar40,auVar42);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar44);
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar47);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar39,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        puVar6[0x28] = (longlong)iVar17;
        dVar26 = 1.5707963705062866;
        dVar36 = (double)((float)(longlong)puVar6[0x28] * (float)(longlong)uVar19 * 0.026179917);
        do {
          puVar6[0x28] = (longlong)iVar18;
          dVar25 = (double)(longlong)puVar6[0x28];
          dVar20 = (double)FastAddRots
                                     ((float)((double)(float)(dVar20 * dVar29) * dVar25 + dVar36));
          dVar21 = (double)(float)(dVar20 + dVar30);
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar23 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar23 = dVar20;
          }
          dVar20 = (double)DAT_007b7f30;
          dVar21 = (double)(float)(dVar23 * dVar23);
          dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
          dVar22 = (double)(float)(dVar21 * dVar24);
          *(float *)(puVar6 + 0xe) =
               (float)((double)(float)(dVar21 * dVar22) * dVar37 +
                      (double)(float)(dVar22 * dVar35 +
                                     (double)(float)(dVar24 * dVar34 +
                                                    (double)(float)((double)(float)(dVar21 * dVar23)
                                                                    * dVar33 + dVar23))));
          dVar21 = (double)FastAddRots
                                     ((float)((double)(float)(dVar20 * dVar29) * dVar25 + dVar36));
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar22 = (double)DAT_007b7f30;
          *(undefined4 *)(puVar6 + 0xf) = 0;
          dVar23 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar23 = dVar20;
          }
          dVar20 = (double)(float)(dVar23 * dVar23);
          dVar24 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
          dVar21 = (double)(float)(dVar20 * dVar24);
          *(float *)((int)puVar6 + 0x74) =
               (float)((double)(float)(dVar20 * dVar21) * dVar37 +
                      (double)(float)(dVar21 * dVar35 +
                                     (double)(float)(dVar24 * dVar34 +
                                                    (double)(float)((double)(float)(dVar20 * dVar23)
                                                                    * dVar33 + dVar23))));
          dVar20 = (double)FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar22 * dVar29) *
                                                              dVar25 + dVar26) + dVar36));
          dVar21 = (double)(float)(dVar20 + dVar30);
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar22 = (double)DAT_007b7f30;
          dVar23 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar23 = dVar20;
          }
          dVar20 = (double)(float)(dVar23 * dVar23);
          dVar24 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
          dVar21 = (double)(float)(dVar20 * dVar24);
          *(float *)(puVar6 + 0x10) =
               (float)((double)(float)(dVar20 * dVar21) * dVar37 +
                      (double)(float)(dVar21 * dVar35 +
                                     (double)(float)(dVar24 * dVar34 +
                                                    (double)(float)((double)(float)(dVar20 * dVar23)
                                                                    * dVar33 + dVar23))));
          dVar21 = (double)FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar22 * dVar29) *
                                                              dVar25 + dVar26) + dVar36));
          uVar4 = EffectTexHeaders;
          *(undefined4 *)(puVar6 + 0x11) = 0;
          *(undefined4 *)(puVar6 + 0x13) = 0x3f800000;
          *(undefined4 *)((int)puVar6 + 0xfc) = uVar12;
          *(undefined4 *)(puVar6 + 0x1f) = uVar12;
          *(undefined4 *)((int)puVar6 + 0xf4) = uVar12;
          *(undefined4 *)(puVar6 + 0x1e) = uVar12;
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar25 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar25 = dVar20;
          }
          dVar20 = (double)(float)(dVar25 * dVar25);
          dVar23 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar25));
          dVar21 = (double)(float)(dVar20 * dVar23);
          *(float *)((int)puVar6 + 0x84) =
               (float)((double)(float)(dVar20 * dVar21) * dVar37 +
                      (double)(float)(dVar21 * dVar35 +
                                     (double)(float)(dVar23 * dVar34 +
                                                    (double)(float)((double)(float)(dVar20 * dVar25)
                                                                    * dVar33 + dVar25))));
          FastDrawQuad(uVar10 - 400,uVar10 - 0x1d0,0,uVar4,9);
          dVar20 = (double)DAT_007b7f30;
          iVar18 = iVar18 + 1;
          uVar11 = (ulonglong)iVar18;
          puVar6[0x28] = uVar11;
        } while ((float)(longlong)puVar6[0x28] < (float)(dVar27 / dVar20));
        dVar36 = (double)*(float *)(puVar6 + 0x15);
      }
      fVar1 = (float)(dVar36 + (double)*(float *)(iVar5 + 0xbc));
      dVar36 = (double)fVar1;
      *(float *)(puVar6 + 0x15) = fVar1;
    } while (dVar36 < dVar28);
  }
  return uVar11;
}


// 0x02c19a8 (0x14 bytes)
void M1827_002c19a8(void)

{
  DAT_007b7fa0 = 0x10000;
  return;
}


// 0x02c19c0 (0xf8 bytes)
/* Moby 1827 */

void UpdateMoby_1827(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x725,1,0x725,1,1,2);
    MB_SpawnReplacementMoby(moby,0x724);
    DeleteMoby(moby);
  }
  return;
}


