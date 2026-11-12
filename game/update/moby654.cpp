// game/update/moby654.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x402750-0x403594
#include "game/update/moby654.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1118.h"
#include "game/update/moby542.h"
#include "game/update/moby648.h"
#include "game/update/moby651.h"
#include "idol/fastfunc.h"

// 0x0402750 (0x7bc bytes)
void M654_00402750(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  Cylinder *pCVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 uVar14;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong unaff_r25;
  int iVar19;
  ulonglong unaff_r26;
  int iVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f19;
  double dVar26;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar27;
  ulonglong in_f22;
  double dVar28;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  double dVar38;
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
  GPiece<16> auVar63;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar17 = uVar11 - 0x230;
  puVar6 = (ulonglong *)lVar17;
  *puVar6 = uVar11;
  puVar6[0x48] = in_LR;
  puVar6[0x39] = in_f19;
  puVar6[0x3a] = in_f20;
  puVar6[0x3b] = in_f21;
  puVar6[0x3c] = in_f22;
  puVar6[0x3d] = in_f23;
  puVar6[0x3e] = in_f24;
  puVar6[0x3f] = in_f25;
  puVar6[0x40] = in_f26;
  puVar6[0x41] = in_f27;
  puVar6[0x42] = in_f28;
  puVar6[0x43] = in_f29;
  puVar6[0x44] = in_f30;
  puVar6[0x45] = in_f31;
  puVar6[0x37] = unaff_r30;
  lVar9 = uVar11 - 0xb0;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  pCVar8 = Cylinders;
  iVar19 = *(int *)(param_1 + 0x78);
  iVar20 = *(int *)(iVar19 + 0xa0);
  fVar1 = *(float *)(iVar19 + 0xb0);
  fVar2 = *(float *)(iVar19 + 0xb8);
  puVar6[0x34] = unaff_r27;
  uVar14 = DAT_0085491c;
  uVar5 = DAT_00854918;
  fVar3 = pCVar8[iVar20].pos.z;
  fVar4 = pCVar8[iVar20].matrix.v2.z;
  fVar7 = DAT_008548f8 * g_FrameTime;
  dVar37 = (double)((fVar3 - fVar4) + fVar2);
  dVar29 = (double)(fVar3 + fVar4 + fVar2);
  puVar6[0x38] = unaff_r31;
  puVar6[0x36] = unaff_r29;
  puVar6[0x35] = unaff_r28;
  puVar6[0x33] = unaff_r26;
  puVar6[0x32] = unaff_r25;
  uVar14 = FastLerpColor((double)(ABS(fVar1) / fVar7),uVar5,uVar14);
  FastMtxCopyNoTranslate(uVar11 - 0x1c0,param_1 + 0xc0);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar5;
  *(float *)(puVar6 + 0x15) = (float)dVar37;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar12 = GetEffectTex(0xe);
  puVar6[0x25] = uVar12;
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar12;
  uVar12 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_010cbbe4,DAT_00854910,DAT_010cbbe8,DAT_00854914,0x80);
  puVar6[0x27] = uVar12;
  auVar41 = loadVectorLeftIndexed(lVar9,0x40271c);
  auVar44 = ZEXT416(0);
  auVar40 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar18 = 0;
  auVar41 = loadVectorLeftIndexed(4,0x40271c);
  dVar30 = 0.01745329238474369;
  auVar49 = loadVectorLeftIndexed(8,0x40271c);
  dVar31 = 1.570796251296997;
  auVar51 = loadVectorLeftIndexed(0xc,0x40271c);
  dVar32 = 3.141592502593994;
  auVar48 = loadVectorLeftIndexed(0x10,0x40271c);
  dVar33 = -3.141592502593994;
  auVar43 = loadVectorLeftIndexed(0x14,0x40271c);
  dVar34 = -0.16666656732559204;
  auVar45 = loadVectorLeftIndexed(0x18,0x40271c);
  dVar35 = 0.008333025500178337;
  puVar16 = &DAT_00854928;
  auVar46 = loadVectorLeftIndexed(0x1c,0x40271c);
  puVar10 = &DAT_0085492c;
  dVar36 = -0.0001980741071747616;
  lVar15 = uVar11 - 0x180;
  auVar47 = loadVectorLeftIndexed(0x20,0x40271c);
  lVar13 = uVar11 - 0x17c;
  dVar38 = 2.601886990305502e-06;
  auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar50 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  auVar41 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar49 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar51 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar48 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar46 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  auVar49 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar47 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  dVar37 = (double)*(float *)(puVar6 + 0x15);
  lVar9 = lVar17;
  auVar49 = auVar40;
  do {
    uVar5 = *puVar10;
    *(undefined4 *)((int)lVar9 + 0x100) = *puVar16;
    *(undefined4 *)((int)lVar9 + 0x104) = uVar5;
    iVar19 = (int)lVar17;
    if ((uVar18 & 1) == 0) {
      auVar42 = loadVectorLeftIndexed(0x4908,0x850000);
      auVar42 = vectorSubtractFloatingPoint
                          (auVar42,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
      *(float *)(iVar19 + 0xb8) = -DAT_0085490c;
    }
    else {
      *(float *)(iVar19 + 0xb8) = DAT_0085490c;
      auVar42 = loadVectorLeftIndexed(0x4908,0x850000);
    }
    auVar53 = ZEXT416(0xffffffff);
    auVar52 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(1);
    auVar39 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar55 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar57 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    auVar54 = vectorShiftRightAlgebraicWord(auVar49,auVar39);
    auVar52 = loadVectorLeftIndexed(0x4924,0x850000);
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar52,auVar50,auVar53);
    auVar58 = vectorShiftLeftIntegerWord(auVar57,auVar57);
    auVar57 = vectorConvertFromSignedFixedPointWord(auVar54,0);
    auVar53 = ZEXT416(0xffffffff);
    auVar61 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar50,auVar56);
    auVar53 = ZEXT416(0xffffffff);
    auVar56 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar54 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar53 = ZEXT416(0xffffffff);
    auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
    auVar59 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar56 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar60 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar54 = vectorMultiplyAddFloatingPoint
                        (auVar55,auVar57,
                         auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar52,auVar57,auVar58);
    auVar55.piece<0,4>() = auVar49.piece<0,4>() + auVar39.piece<0,4>();
    auVar55.piece<8,8>() = auVar49.piece<8,8>();
    auVar55.piece<4,4>() = auVar49.piece<4,4>() + auVar39.piece<4,4>();
    auVar52.piece<0,8>() = auVar55.piece<0,8>();
    auVar52.piece<12,4>() = auVar49.piece<12,4>();
    auVar52.piece<8,4>() = auVar49.piece<8,4>() + auVar39.piece<8,4>();
    auVar49.piece<0,12>() = auVar52.piece<0,12>();
    auVar49.piece<12,4>() = auVar52.piece<12,4>() + auVar39.piece<12,4>();
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    uVar18 = uVar18 + 1;
    puVar16 = puVar16 + 2;
    puVar10 = puVar10 + 2;
    lVar9 = lVar9 + 8;
    auVar42 = vectorSubtractFloatingPoint(auVar51,auVar54);
    auVar57 = vectorSubtractFloatingPoint(auVar48,auVar54);
    auVar58 = vectorSubtractFloatingPoint(auVar51,auVar53);
    auVar52 = vectorCompareGreaterThanFloatingPoint(auVar42,auVar54);
    auVar52 = vectorConditionalSelect(auVar42,auVar54,auVar52);
    auVar42 = vectorCompareGreaterThanFloatingPoint(auVar58,auVar53);
    auVar55 = vectorSubtractFloatingPoint(auVar48,auVar53);
    auVar53 = vectorConditionalSelect(auVar58,auVar53,auVar42);
    auVar42 = ZEXT416(0xffffffff);
    auVar54 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = vectorCompareGreaterThanFloatingPoint(auVar52,auVar57);
    auVar52 = vectorConditionalSelect(auVar57,auVar52,auVar42);
    auVar57 = vectorShiftLeftIntegerWord(auVar61,auVar61);
    auVar63 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar52,auVar52,auVar56);
    auVar42 = ZEXT416(0xffffffff);
    auVar58 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = vectorCompareGreaterThanFloatingPoint(auVar53,auVar55);
    auVar53 = vectorConditionalSelect(auVar55,auVar53,auVar42);
    auVar42 = ZEXT416(0xffffffff);
    auVar55 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar57 = vectorMultiplyAddFloatingPoint(auVar53,auVar53,auVar57);
    auVar55 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar61 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar56 = vectorMultiplyAddFloatingPoint(auVar54,auVar52,auVar59);
    auVar42 = ZEXT416(0xffffffff);
    auVar59 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar62 = vectorShiftLeftIntegerWord(auVar58,auVar58);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar57,auVar53,auVar55);
    auVar58 = vectorMultiplyAddFloatingPoint(auVar54,auVar56,auVar60);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar56,auVar43,auVar52);
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar56 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar60 = vectorMultiplyAddFloatingPoint(auVar57,auVar55,auVar63);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar55,auVar43,auVar53);
    auVar55 = vectorShiftLeftIntegerWord(auVar59,auVar59);
    auVar59 = vectorMultiplyAddFloatingPoint(auVar54,auVar58,auVar61);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar58,auVar45,auVar52);
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar58 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar56 = vectorMultiplyAddFloatingPoint(auVar57,auVar60,auVar56);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar60,auVar45,auVar53);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar54,auVar59,auVar62);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar59,auVar46,auVar52);
    auVar42 = ZEXT416(0xffffffff);
    auVar59 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar55 = vectorMultiplyAddFloatingPoint(auVar57,auVar56,auVar55);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar56,auVar46,auVar53);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar54,auVar47,auVar52);
    auVar54 = vectorShiftLeftIntegerWord(auVar59,auVar59);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar55,auVar47,auVar42);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar53,auVar39,auVar58);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar42,auVar39,auVar54);
    auVar42 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar15);
    *(undefined4 *)lVar15 = uVar5;
    lVar15 = lVar15 + 0x10;
    auVar42 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar13);
    *(undefined4 *)lVar13 = uVar5;
    *(undefined4 *)(iVar19 + 0xbc) = 0x3f800000;
    lVar13 = lVar13 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while ((int)uVar18 < 4);
  iVar19 = 1;
  if (dVar37 < dVar29) {
    do {
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar46 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar41 = loadVectorLeftIndexed(0x4924,0x850000);
      auVar49 = vectorReciprocalEstimateFloatingPoint(auVar41);
      puVar6[0x28] = (longlong)(worldUpdateTime % 0x78);
      auVar44 = loadVectorLeftIndexed(0x2c,0x40271c);
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = ZEXT416(0xffffffff);
      auVar47 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar41,auVar43);
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      iVar19 = -iVar19;
      iVar20 = 0;
      auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar44,auVar45);
      auVar44 = ZEXT416(0xffffffff);
      auVar45 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = loadVectorLeftIndexed(0x28,0x40271c);
      uVar12 = puVar6[0x28];
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      dVar28 = 360.0;
      auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar41,auVar43);
      auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar47,auVar46);
      dVar21 = (double)DAT_00854924;
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar41,auVar43);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar49,auVar41,auVar45);
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                           auVar48);
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar40,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        puVar6[0x28] = (longlong)iVar19;
        dVar27 = 1.5707963705062866;
        dVar37 = (double)((float)(longlong)puVar6[0x28] * (float)(longlong)uVar12 * 0.026179917);
        do {
          puVar6[0x28] = (longlong)iVar20;
          dVar26 = (double)(longlong)puVar6[0x28];
          dVar21 = (double)FastAddRots
                                     ((float)((double)(float)(dVar21 * dVar30) * dVar26 + dVar37));
          dVar22 = (double)(float)(dVar21 + dVar31);
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar24 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar24 = dVar21;
          }
          dVar21 = (double)DAT_00854924;
          dVar22 = (double)(float)(dVar24 * dVar24);
          dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
          dVar23 = (double)(float)(dVar22 * dVar25);
          *(float *)(puVar6 + 0xe) =
               (float)((double)(float)(dVar22 * dVar23) * dVar38 +
                      (double)(float)(dVar23 * dVar36 +
                                     (double)(float)(dVar25 * dVar35 +
                                                    (double)(float)((double)(float)(dVar22 * dVar24)
                                                                    * dVar34 + dVar24))));
          dVar22 = (double)FastAddRots
                                     ((float)((double)(float)(dVar21 * dVar30) * dVar26 + dVar37));
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar23 = (double)DAT_00854924;
          *(undefined4 *)(puVar6 + 0xf) = 0;
          dVar24 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar24 = dVar21;
          }
          dVar21 = (double)(float)(dVar24 * dVar24);
          dVar25 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar24));
          dVar22 = (double)(float)(dVar21 * dVar25);
          *(float *)((int)puVar6 + 0x74) =
               (float)((double)(float)(dVar21 * dVar22) * dVar38 +
                      (double)(float)(dVar22 * dVar36 +
                                     (double)(float)(dVar25 * dVar35 +
                                                    (double)(float)((double)(float)(dVar21 * dVar24)
                                                                    * dVar34 + dVar24))));
          dVar21 = (double)FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar23 * dVar30) *
                                                              dVar26 + dVar27) + dVar37));
          dVar22 = (double)(float)(dVar21 + dVar31);
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar23 = (double)DAT_00854924;
          dVar24 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar24 = dVar21;
          }
          dVar21 = (double)(float)(dVar24 * dVar24);
          dVar25 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar24));
          dVar22 = (double)(float)(dVar21 * dVar25);
          *(float *)(puVar6 + 0x10) =
               (float)((double)(float)(dVar21 * dVar22) * dVar38 +
                      (double)(float)(dVar22 * dVar36 +
                                     (double)(float)(dVar25 * dVar35 +
                                                    (double)(float)((double)(float)(dVar21 * dVar24)
                                                                    * dVar34 + dVar24))));
          dVar22 = (double)FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar23 * dVar30) *
                                                              dVar26 + dVar27) + dVar37));
          uVar5 = EffectTexHeaders;
          *(undefined4 *)(puVar6 + 0x11) = 0;
          *(undefined4 *)(puVar6 + 0x13) = 0x3f800000;
          *(undefined4 *)((int)puVar6 + 0xfc) = uVar14;
          *(undefined4 *)(puVar6 + 0x1f) = uVar14;
          *(undefined4 *)((int)puVar6 + 0xf4) = uVar14;
          *(undefined4 *)(puVar6 + 0x1e) = uVar14;
          dVar21 = (double)(float)(dVar32 - dVar22);
          if (dVar22 - (double)(float)(dVar32 - dVar22) < 0.0) {
            dVar21 = dVar22;
          }
          dVar26 = (double)(float)(dVar33 - dVar22);
          if ((double)(float)(dVar33 - dVar22) - dVar21 < 0.0) {
            dVar26 = dVar21;
          }
          dVar21 = (double)(float)(dVar26 * dVar26);
          dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar26));
          dVar22 = (double)(float)(dVar21 * dVar24);
          *(float *)((int)puVar6 + 0x84) =
               (float)((double)(float)(dVar21 * dVar22) * dVar38 +
                      (double)(float)(dVar22 * dVar36 +
                                     (double)(float)(dVar24 * dVar35 +
                                                    (double)(float)((double)(float)(dVar21 * dVar26)
                                                                    * dVar34 + dVar26))));
          FastDrawQuad(uVar11 - 0x180,uVar11 - 0x1c0,0,uVar5,9);
          dVar21 = (double)DAT_00854924;
          iVar20 = iVar20 + 1;
          puVar6[0x28] = (longlong)iVar20;
        } while ((float)(longlong)puVar6[0x28] < (float)(dVar28 / dVar21));
        dVar37 = (double)*(float *)(puVar6 + 0x15);
      }
      dVar21 = dVar37 + (double)DAT_00854904;
      dVar37 = (double)(float)dVar21;
      *(float *)(puVar6 + 0x15) = (float)dVar21;
    } while (dVar37 < dVar29);
  }
  return;
}


// 0x0402f0c (0x14 bytes)
void M654_00402f0c(void)

{
  DAT_00854994 = 0x10000;
  return;
}


// 0x0402f30 (0x188 bytes)
void M654_00402f30(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  Spline *pSVar10;
  
  piVar8 = *(int **)(param_1 + 0x78);
  iVar9 = *piVar8;
  pSVar10 = Splines[piVar8[3]];
  OrganicDelt
            ((Cuboids[iVar9].imatrix.v2.y * (g_heroPosition.z - Cuboids[iVar9].pos.z) +
              Cuboids[iVar9].imatrix.v0.y * (g_heroPosition.x - Cuboids[iVar9].pos.x) +
              Cuboids[iVar9].imatrix.v1.y * (g_heroPosition.y - Cuboids[iVar9].pos.y) + 1.0) * 0.5,
             DAT_0071f418,DAT_0071f418,g_FrameTime * 2.0,(float *)(piVar8 + 7),0x720000,
             (float *)(piVar8 + 8));
  fVar1 = pSVar10->points[0].x;
  fVar2 = (float)piVar8[7];
  fVar3 = pSVar10->points[1].y;
  fVar4 = pSVar10->points[0].y;
  fVar5 = pSVar10->points[1].z;
  fVar6 = pSVar10->points[0].z;
  fVar7 = pSVar10->points[1].w;
  *param_2 = fVar2 * (pSVar10->points[1].x - fVar1) + fVar1;
  param_2[1] = fVar2 * (fVar3 - fVar4) + pSVar10->points[0].y;
  fVar1 = pSVar10->points[0].z;
  param_2[3] = fVar7;
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_2[2] = fVar2 * (fVar5 - fVar6) + fVar1;
  param_3[2] = 0;
  param_3[1] = DAT_008549b8;
  param_3[2] = *(undefined4 *)(param_1 + 0x48);
  return;
}


// 0x04030c8 (0x4cc bytes)
/* Moby 654 */

MobyInstance * UpdateMoby_654(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 in_LR;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  float afStack_40 [4];
  float afStack_30 [4];
  
  bVar1 = moby->state;
  pMVar4 = (MobyInstance *)(uint)bVar1;
  piVar2 = (int *)moby->pVar;
  uVar6 = ZEXT48(piVar2);
  if (bVar1 == 6) {
    iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if ((iVar5 != 0) && (-1 < piVar2[5])) {
      DAT_0096bfba = (undefined2)piVar2[5];
    }
    pMVar4 = (MobyInstance *)MB_CountActiveMobysByGroup(piVar2[2],0xffffffffffffffff);
    if (pMVar4 == (MobyInstance *)0x0) {
      moby->state = '\x04';
      pMVar4 = (MobyInstance *)FUN_004010d8(piVar2[1],0);
      if (pMVar4 != (MobyInstance *)0x0) {
        PlayMobySound(1,0,pMVar4);
      }
      pMVar4 = (MobyInstance *)0x96c062;
      (&g_MiscLevelFlags.field114_0x72)[piVar2[6]] = 1;
    }
  }
  else if (bVar1 == 5) {
    pMVar4 = (MobyInstance *)MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if (pMVar4 != (MobyInstance *)0x0) {
      FUN_004011c8(piVar2[1],0);
      FUN_003aef30(piVar2[2]);
      pMVar4 = (MobyInstance *)0x6;
      moby->state = '\x06';
    }
  }
  else if (bVar1 != 4) {
    if (bVar1 == 3) {
      M654_00402f30(moby,afStack_40,afStack_30);
      Camera_SetMobyDrivenTargetPos(afStack_40);
      Camera_SetMobyDrivenTargetRot(afStack_30);
      if (-1 < piVar2[5]) {
        DAT_0096bfba = (undefined2)piVar2[5];
      }
      pMVar4 = (MobyInstance *)MB_CountActiveMobysByGroup(piVar2[2],0xffffffffffffffff);
      if ((pMVar4 == (MobyInstance *)0x0) &&
         (pMVar4 = (MobyInstance *)FastDecTimerS32(uVar6 + 0x24),
         pMVar4 != (MobyInstance *)0x0)) {
        moby->state = '\x04';
        moby->enabled = '\x01';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        Camera_DeactivateMobyDrivenCam(3);
        Hero_Warp(&Cuboids[piVar2[4]].pos.x,&Cuboids[piVar2[4]].rot.x,0,1);
        DamageSphereAtPos
                  (0x4014000000000000,0x4049000000000000,0x3ff0000000000000,moby,
                   &Cuboids[piVar2[4]].pos,0,0x10000);
        (&g_MiscLevelFlags.field114_0x72)[piVar2[6]] = 1;
        pMVar4 = (MobyInstance *)FUN_004010d8(piVar2[1],0);
        if (pMVar4 != (MobyInstance *)0x0) {
          pMVar4 = (MobyInstance *)PlayMobySound(1,0,pMVar4);
        }
      }
    }
    else if (bVar1 == 2) {
      if (-1 < piVar2[5]) {
        DAT_0096bfba = (undefined2)piVar2[5];
      }
      pMVar4 = (MobyInstance *)FastDecTimerS32(uVar6 + 0x24);
      if (pMVar4 != (MobyInstance *)0x0) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        moby->state = '\x03';
        auVar7 = loadVectorLeftIndexed(in_LR,0x4030b8);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x24,uVar6);
        *(undefined4 *)((uint)(piVar2 + 9) & 0xfffffffc) = uVar3;
        moby->enabled = '\0';
        iVar5 = piVar2[2];
        moby->modeBits = moby->modeBits | DISABLED;
        pMVar4 = (MobyInstance *)FUN_003aef30(iVar5);
      }
    }
    else if (bVar1 == 1) {
      pMVar4 = (MobyInstance *)MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
      if (pMVar4 != (MobyInstance *)0x0) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar7 = loadVectorLeftIndexed(in_LR,0x4030b8);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x24,uVar6);
        *(undefined4 *)((uint)(piVar2 + 9) & 0xfffffffc) = uVar3;
        moby->state = '\x02';
        if (-1 < piVar2[5]) {
          DAT_0096bfba = (undefined2)piVar2[5];
        }
        SetCameraPosition(0x951500,0x951510,1,0,0);
        pMVar4 = (MobyInstance *)FUN_004011c8(piVar2[1],0);
        if (pMVar4 != (MobyInstance *)0x0) {
          pMVar4 = (MobyInstance *)PlayMobySound(1,0,pMVar4);
        }
      }
    }
    else if (bVar1 == 0) {
      if (piVar2 == (int *)0x0) {
        pMVar4 = (MobyInstance *)DeleteMoby(moby);
      }
      else if (*piVar2 == -1) {
        pMVar4 = (MobyInstance *)DeleteMoby(moby);
      }
      else if (piVar2[3] == -1) {
        moby->state = '\x05';
        pMVar4 = (MobyInstance *)(moby->modeBits | 1);
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->modeBits = (MobyModeBit)pMVar4;
      }
      else {
        moby->state = '\x01';
        pMVar4 = (MobyInstance *)FUN_004010d8(piVar2[1],1);
      }
    }
  }
  return pMVar4;
}


