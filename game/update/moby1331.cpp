// game/update/moby1331.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x24c2f8-0x24d2e4
#include "game/update/moby1331.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby113.h"
#include "idol/fastfunc.h"

// 0x024c2f8 (0x14 bytes)
void M1331_0024c2f8(void)

{
  DAT_0079b46c = 0x10000;
  return;
}


// 0x024c380 (0xcfc bytes)
// inlined: FastRSqrt @0x24c7d0
// strings: 0024c31c: '=Vwp_q' (raw)

void M1331_0024c380(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  float *pfVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar65;
  float fVar66;
  Vec4 local_1b0;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  Vec4 local_180;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  longlong local_160;
  GPiece<16> auVar57;
  GPiece<16> auVar61;
  GPiece<16> auVar64;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar12 = (undefined4 *)(uVar13 - 0x130);
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  iVar10 = (int)(param_2 << 4);
  iVar11 = (int)(param_2 * 0x40);
  fVar66 = *(float *)((int)&DAT_00fa3064 + iVar10) - *(float *)(iVar11 + 0xfa2fd4);
  fVar2 = *(float *)((int)&DAT_00fa3060 + iVar10) - *(float *)(iVar11 + 0xfa2fd0);
  fVar3 = *(float *)((int)&DAT_00fa3068 + iVar10) - *(float *)(iVar11 + 0xfa2fd8);
  auVar55 = ZEXT416(0xffffffff);
  auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
  iVar8 = (int)(param_2 << 2);
  auVar65 = vectorShiftLeftIntegerWord(auVar55,auVar55);
  uVar16 = param_2 & 0x7fffffff;
  iVar14 = (int)uVar16 * 2 + 1;
  local_170 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar66 * fVar66);
  auVar55 = loadVectorLeftIndexed(uVar13 - 0x130,0x24c310);
  auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
  dVar53 = 0.05000000074505806;
  auVar59.piece<0,4>() = local_170;
  auVar59.piece<4,4>() = local_170;
  auVar59.piece<8,4>() = local_170;
  auVar59.piece<12,4>() = local_170;
  auVar55 = vectorMultiplyAddFloatingPoint
                      (auVar59,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,auVar65
                      );
  if (*(int *)((int)&DAT_00fa2f20 + iVar8) == 2) {
    auVar59 = ZEXT416(0);
    auVar65 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
    *(undefined4 *)((int)&DAT_00fa2f20 + iVar8) = 3;
    lVar20 = (longlong)((int)(uVar16 << 9) + (int)(uVar16 << 7));
    lVar25 = (longlong)(iVar14 * 0x140);
    lVar15 = ZEXT48(&DAT_00fa30c0) + lVar20;
    lVar21 = ZEXT48(&DAT_00fa30c0) + lVar25;
    lVar18 = ZEXT48(&DAT_00fa30c8) + lVar20;
    lVar22 = ZEXT48(&DAT_00fa30c8) + lVar25;
    lVar19 = ZEXT48(&DAT_00fa30c4) + lVar20;
    lVar23 = ZEXT48(&DAT_00fa30c4) + lVar25;
    lVar20 = ZEXT48(&DAT_00fa30cc) + lVar20;
    lVar29 = 0x14;
    lVar25 = ZEXT48(&DAT_00fa30cc) + lVar25;
    do {
      auVar58 = vectorConvertFromSignedFixedPointWord(auVar65,0);
      auVar59 = ZEXT416(0xffffffff);
      auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
      auVar56.piece<0,4>() = auVar65.piece<0,4>() + 1;
      auVar56.piece<8,8>() = auVar65.piece<8,8>();
      auVar56.piece<4,4>() = auVar65.piece<4,4>() + 1;
      auVar57.piece<0,8>() = auVar56.piece<0,8>();
      auVar57.piece<12,4>() = auVar65.piece<12,4>();
      auVar57.piece<8,4>() = auVar65.piece<8,4>() + 1;
      auVar65.piece<0,12>() = auVar57.piece<0,12>();
      auVar65.piece<12,4>() = auVar57.piece<12,4>() + 1;
      auVar59 = vectorShiftLeftIntegerWord(auVar59,auVar59);
      auVar59 = vectorMultiplyAddFloatingPoint(auVar58,auVar55,auVar59);
      uVar7 = storeVectorElementWordIndexed(auVar59,0,lVar15);
      *(undefined4 *)lVar15 = uVar7;
      *(undefined4 *)lVar18 = 0;
      lVar15 = lVar15 + 0x10;
      *(undefined4 *)lVar19 = 0;
      lVar18 = lVar18 + 0x10;
      *(undefined4 *)lVar20 = 0x3f800000;
      lVar19 = lVar19 + 0x10;
      uVar7 = storeVectorElementWordIndexed(auVar59,0,lVar21);
      *(undefined4 *)lVar21 = uVar7;
      lVar20 = lVar20 + 0x10;
      *(undefined4 *)lVar22 = 0;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)lVar23 = 0;
      lVar22 = lVar22 + 0x10;
      *(undefined4 *)lVar25 = 0x3f800000;
      lVar23 = lVar23 + 0x10;
      lVar25 = lVar25 + 0x10;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  local_16c = local_170;
  local_168 = local_170;
  local_164 = local_170;
  dVar30 = (double)FastWrapRot(*(float *)(&DAT_00fa2f2c + iVar8),0.17453292);
  *(float *)(&DAT_00fa2f2c + iVar8) = (float)dVar30;
  dVar30 = (double)FastDiffRots
                             ((double)*(float *)(&DAT_00fa2f38 + iVar8),0x3fe9b0f580000000);
  *(float *)(&DAT_00fa2f38 + iVar8) = (float)dVar30;
  dVar30 = (double)FastWrapRot(*(float *)(&DAT_00fa2f44 + iVar8),0.05236);
  *(float *)(&DAT_00fa2f44 + iVar8) = (float)dVar30;
  dVar30 = (double)FastIntToDouble(0x14);
  dVar54 = 0.5;
  dVar52 = 0.30000001192092896;
  dVar43 = 0.10000000149011612;
  dVar51 = 3.141592502593994;
  dVar50 = -3.141592502593994;
  uVar26 = 0;
  dVar49 = -0.16666656732559204;
  dVar48 = 0.008333025500178337;
  iVar24 = (int)uVar16 * 0x280;
  dVar47 = -0.0001980741071747616;
  dVar46 = 2.601886990305502e-06;
  dVar45 = 0.0;
  dVar44 = 1.0;
  auVar59 = ZEXT416(0);
  auVar58 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
  dVar30 = (double)((360.0 / (float)(dVar30 * 0.5)) * 0.017453292);
  do {
    dVar31 = (double)FastIntToDouble(uVar26);
    dVar32 = (double)FastIntToDouble(0x14);
    local_160 = (longlong)(int)uVar26;
    auVar65 = vectorConvertFromSignedFixedPointWord(auVar58,0);
    dVar41 = (double)(float)((double)(float)(dVar31 / dVar32) * dVar52 + dVar43);
    fVar66 = MB_WrapRot
                       ((float)((double)local_160 * dVar30 +
                               (double)*(float *)(&DAT_00fa2f2c + iVar8)));
    dVar32 = (double)fVar66;
    auVar59 = ZEXT416(0xffffffff);
    auVar59 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
    lVar15 = (uVar26 & 0xfffffff) * 0x10;
    iVar27 = (int)uVar26 + 1;
    uVar16 = ZEXT48(&DAT_00fa30c0) + lVar15;
    auVar59 = vectorShiftLeftIntegerWord(auVar59,auVar59);
    auVar59 = vectorMultiplyAddFloatingPoint(auVar65,auVar55,auVar59);
    iVar9 = (int)lVar15;
    dVar31 = (double)(float)(dVar51 - dVar32);
    if (dVar32 - (double)(float)(dVar51 - dVar32) < 0.0) {
      dVar31 = dVar32;
    }
    uVar26 = (ulonglong)iVar27;
    uVar7 = storeVectorElementWordIndexed(auVar59,(longlong)iVar24,uVar16 & 0xffffffff);
    *(undefined4 *)(iVar24 + (int)uVar16) = uVar7;
    *(undefined4 *)(&DAT_00fa30c4 + iVar24 + iVar9) = 0;
    *(undefined4 *)(&DAT_00fa30cc + iVar24 + iVar9) = 0x3f800000;
    auVar60.piece<0,4>() = auVar58.piece<0,4>() + 1;
    auVar60.piece<8,8>() = auVar58.piece<8,8>();
    auVar60.piece<4,4>() = auVar58.piece<4,4>() + 1;
    auVar61.piece<0,8>() = auVar60.piece<0,8>();
    auVar61.piece<12,4>() = auVar58.piece<12,4>();
    auVar61.piece<8,4>() = auVar58.piece<8,4>() + 1;
    auVar58.piece<0,12>() = auVar61.piece<0,12>();
    auVar58.piece<12,4>() = auVar61.piece<12,4>() + 1;
    dVar35 = (double)(float)(dVar50 - dVar32);
    if ((double)(float)(dVar50 - dVar32) - dVar31 < 0.0) {
      dVar35 = dVar31;
    }
    dVar31 = (double)(float)(dVar35 * dVar35);
    dVar34 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar35));
    dVar32 = (double)(float)(dVar31 * dVar34);
    *(float *)(&DAT_00fa30c8 + iVar24 + iVar9) =
         (float)(dVar41 * (double)(float)((double)(float)(dVar31 * dVar32) * dVar46 +
                                         (double)(float)(dVar32 * dVar47 +
                                                        (double)(float)(dVar34 * dVar48 +
                                                                       (double)(float)((double)(
                                                  float)(dVar31 * dVar35) * dVar49 + dVar35)))));
  } while (iVar27 < 0x13);
  fVar66 = *(float *)((int)&DAT_00fa3064 + iVar10) - *(float *)(iVar11 + 0xfa2fd4);
  fVar2 = *(float *)((int)&DAT_00fa3060 + iVar10) - *(float *)(iVar11 + 0xfa2fd0);
  fVar3 = *(float *)((int)&DAT_00fa3068 + iVar10) - *(float *)(iVar11 + 0xfa2fd8);
  dVar32 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar66 * fVar66);
  dVar30 = dVar45;
  dVar43 = dVar45;
  dVar31 = dVar45;
  if ((double)(float)SQRT(dVar32) != dVar45) {
    dVar30 = 1.0 / SQRT(dVar32);
    dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar30) * dVar30 - dVar44) *
                             (double)(float)(dVar54 * dVar30) + dVar30);
    dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar32 * dVar30) * dVar30 - dVar44) *
                             (double)(float)(dVar54 * dVar30) + dVar30);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar32 * dVar30) * dVar30 - dVar44) *
                    (double)(float)(dVar54 * dVar30) + dVar30);
    dVar31 = (double)(fVar2 * fVar1);
    dVar30 = (double)(fVar66 * fVar1);
    dVar43 = (double)(fVar3 * fVar1);
  }
  fVar2 = (float)((double)DAT_00969f78 * dVar31 -
                 (double)(float)((double)g_heroGravityDir * dVar43));
  fVar3 = (float)((double)DAT_00969f74 * dVar43 - (double)(float)((double)DAT_00969f78 * dVar30));
  fVar1 = (float)((double)g_heroGravityDir * dVar30 -
                 (double)(float)((double)DAT_00969f74 * dVar31));
  auVar59 = ZEXT416(0);
  auVar62 = auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60;
  dVar35 = (double)*(float *)(iVar24 + 0xfa31e4);
  dVar34 = (double)*(float *)(iVar24 + 0xfa31e0);
  fVar4 = *(float *)(iVar24 + 0xfa31e8);
  fVar5 = *(float *)(iVar24 + 0xfa31ec);
  local_1b0.w = *(float *)(iVar11 + 0xfa2fdc) * fVar5 +
                (float)((double)*(float *)((int)&DAT_00fa306c + iVar10) * dVar34);
  dVar41 = (double)SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  lVar15 = (longlong)(iVar14 * 0x140);
  iVar14 = 0;
  lVar20 = ZEXT48(&DAT_00fa30c8) + lVar15;
  lVar18 = ZEXT48(&DAT_00fa30c4) + lVar15;
  lVar19 = ZEXT48(&DAT_00fa30c0) + lVar15;
  lVar15 = ZEXT48(&DAT_00fa30cc) + lVar15;
  fVar66 = (float)(-1.0 / dVar41);
  dVar32 = dVar45;
  if (dVar45 - dVar41 < 0.0) {
    dVar32 = (double)(fVar2 * fVar66);
  }
  dVar36 = dVar45;
  if (dVar45 - dVar41 < 0.0) {
    dVar36 = (double)(fVar1 * fVar66);
  }
  dVar37 = dVar45;
  if (dVar45 - dVar41 < 0.0) {
    dVar37 = (double)(fVar3 * fVar66);
  }
  if (dVar41 - dVar45 < 0.0) {
    dVar32 = (double)(fVar2 * fVar66);
  }
  if (dVar41 - dVar45 < 0.0) {
    dVar36 = (double)(fVar1 * fVar66);
  }
  if (dVar41 - dVar45 < 0.0) {
    dVar37 = (double)(fVar3 * fVar66);
  }
  local_1b0.y = *(float *)(iVar11 + 0xfa2fd4) * fVar5 +
                (float)(dVar43 * dVar37 - (double)(float)(dVar31 * dVar36)) * fVar4 +
                (float)(dVar30 * dVar34 + (double)(float)(dVar32 * dVar35));
  local_1b0.z = *(float *)(iVar11 + 0xfa2fd8) * fVar5 +
                (float)(dVar31 * dVar32 - (double)(float)(dVar30 * dVar37)) * fVar4 +
                (float)(dVar43 * dVar34 + (double)(float)(dVar36 * dVar35));
  local_1b0.x = *(float *)(iVar11 + 0xfa2fd0) * fVar5 +
                (float)(dVar30 * dVar36 - (double)(float)(dVar43 * dVar32)) * fVar4 +
                (float)(dVar31 * dVar34 + (double)(float)(dVar37 * dVar35));
  *(float *)(iVar10 + 0xfa3090) = local_1b0.x;
  *(float *)(iVar10 + 0xfa3094) = local_1b0.y;
  *(float *)(iVar10 + 0xfa3098) = local_1b0.z;
  *(float *)(iVar10 + 0xfa309c) = local_1b0.w;
  dVar31 = 0.9948376417160034;
  dVar43 = 0.20943999290466309;
  uVar42 = 0x3fc99999a0000000;
  dVar30 = 1.570796251296997;
  do {
    local_160 = (longlong)iVar14;
    auVar59 = vectorConvertFromSignedFixedPointWord(auVar62,0);
    pfVar28 = (float *)lVar20;
    *pfVar28 = 0.0;
    dVar32 = (double)local_160;
    fVar66 = MB_WrapRot
                       ((float)(dVar32 * dVar31 + (double)*(float *)(&DAT_00fa2f38 + iVar8)));
    dVar41 = (double)fVar66;
    fVar66 = MB_WrapRot
                       ((float)(dVar32 * dVar43 + (double)*(float *)(&DAT_00fa2f44 + iVar8)));
    dVar35 = (double)fVar66;
    dVar32 = (double)(float)(dVar51 - dVar35);
    if (dVar35 - (double)(float)(dVar51 - dVar35) < 0.0) {
      dVar32 = dVar35;
    }
    dVar34 = (double)(float)(dVar50 - dVar35);
    if ((double)(float)(dVar50 - dVar35) - dVar32 < 0.0) {
      dVar34 = dVar32;
    }
    dVar32 = (double)(float)(dVar34 * dVar34);
    dVar36 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar34));
    dVar35 = (double)(float)(dVar32 * dVar36);
    dVar36 = (double)(float)((double)(float)((double)(float)(dVar32 * dVar35) * dVar46 +
                                            (double)(float)(dVar35 * dVar47 +
                                                           (double)(float)(dVar36 * dVar48 +
                                                                          (double)(float)((double)(
                                                  float)(dVar32 * dVar34) * dVar49 + dVar34)))) *
                            dVar54);
    dVar35 = (double)MB_randRangeSigned(dVar45,uVar42);
    dVar34 = (double)(float)(dVar41 + dVar30);
    auVar65 = ZEXT416(0xffffffff);
    auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
    iVar14 = iVar14 + 1;
    auVar65 = vectorShiftLeftIntegerWord(auVar65,auVar65);
    auVar63.piece<0,4>() = auVar62.piece<0,4>() + 1;
    auVar63.piece<8,8>() = auVar62.piece<8,8>();
    auVar63.piece<4,4>() = auVar62.piece<4,4>() + 1;
    auVar64.piece<0,8>() = auVar63.piece<0,8>();
    auVar64.piece<12,4>() = auVar62.piece<12,4>();
    auVar64.piece<8,4>() = auVar62.piece<8,4>() + 1;
    auVar62.piece<0,12>() = auVar64.piece<0,12>();
    auVar62.piece<12,4>() = auVar64.piece<12,4>() + 1;
    auVar59 = vectorMultiplyAddFloatingPoint(auVar59,auVar55,auVar65);
    dVar32 = (double)(float)(dVar51 - dVar41);
    if (dVar41 - (double)(float)(dVar51 - dVar41) < 0.0) {
      dVar32 = dVar41;
    }
    dVar37 = (double)(float)(dVar51 - dVar34);
    if (dVar34 - (double)(float)(dVar51 - dVar34) < 0.0) {
      dVar37 = dVar34;
    }
    dVar33 = (double)(float)(dVar50 - dVar41);
    if ((double)(float)(dVar50 - dVar41) - dVar32 < 0.0) {
      dVar33 = dVar32;
    }
    dVar41 = (double)(float)(dVar33 * dVar33);
    dVar32 = (double)(float)(dVar50 - dVar34);
    if ((double)(float)(dVar50 - dVar34) - dVar37 < 0.0) {
      dVar32 = dVar37;
    }
    fVar66 = *pfVar28;
    uVar7 = storeVectorElementWordIndexed(auVar59,0,lVar19);
    *(undefined4 *)lVar19 = uVar7;
    *(undefined4 *)lVar15 = 0x3f800000;
    lVar19 = lVar19 + 0x10;
    lVar15 = lVar15 + 0x10;
    dVar37 = (double)(float)(dVar32 * dVar32);
    dVar38 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar33));
    dVar40 = (double)(float)(dVar41 * dVar38);
    dVar39 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar32));
    dVar34 = (double)(float)(dVar37 * dVar39);
    *pfVar28 = (float)(dVar36 * (double)(float)((double)(float)(dVar41 * dVar40) * dVar46 +
                                               (double)(float)(dVar40 * dVar47 +
                                                              (double)(float)(dVar38 * dVar48 +
                                                                             (double)(float)((double
                                                  )(float)(dVar41 * dVar33) * dVar49 + dVar33)))) +
                      dVar35) + fVar66;
    lVar20 = lVar20 + 0x10;
    *(float *)lVar18 =
         (float)((double)(float)((double)(float)(dVar37 * dVar34) * dVar46 +
                                (double)(float)(dVar34 * dVar47 +
                                               (double)(float)(dVar39 * dVar48 +
                                                              (double)(float)((double)(float)(dVar37
                                                                                             * 
                                                  dVar32) * dVar49 + dVar32)))) * dVar52);
    lVar18 = lVar18 + 0x10;
  } while (iVar14 < 0x13);
  dVar41 = 0.009999999776482582;
  dVar43 = (double)MB_randRangeFloat(0.01,(float)dVar53);
  dVar31 = (double)MB_randRangeSigned(0x3fd6571840000000,0x3fe6571840000000);
  dVar32 = (double)(float)(dVar31 + dVar30);
  dVar30 = (double)(float)(dVar51 - dVar31);
  if (dVar31 - (double)(float)(dVar51 - dVar31) < 0.0) {
    dVar30 = dVar31;
  }
  dVar35 = (double)(float)(dVar51 - dVar32);
  if (dVar32 - (double)(float)(dVar51 - dVar32) < 0.0) {
    dVar35 = dVar32;
  }
  dVar51 = (double)(float)(dVar50 - dVar31);
  if ((double)(float)(dVar50 - dVar31) - dVar30 < 0.0) {
    dVar51 = dVar30;
  }
  dVar30 = (double)(float)(dVar50 - dVar32);
  if ((double)(float)(dVar50 - dVar32) - dVar35 < 0.0) {
    dVar30 = dVar35;
  }
  dVar50 = (double)(float)(dVar51 * dVar51);
  dVar31 = (double)(float)(dVar30 * dVar30);
  dVar34 = (double)(float)(dVar50 * (double)(float)(dVar50 * dVar51));
  dVar32 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
  dVar35 = (double)(float)(dVar50 * dVar34);
  dVar36 = (double)(float)(dVar31 * dVar32);
  fVar66 = (float)(dVar43 * (double)(float)((double)(float)(dVar50 * dVar35) * dVar46 +
                                           (double)(float)(dVar35 * dVar47 +
                                                          (double)(float)(dVar34 * dVar48 +
                                                                         (double)(float)((double)(
                                                  float)(dVar50 * dVar51) * dVar49 + dVar51)))));
  dVar30 = (double)(float)(dVar43 * (double)(float)((double)(float)(dVar31 * dVar36) * dVar46 +
                                                   (double)(float)(dVar36 * dVar47 +
                                                                  (double)(float)(dVar32 * dVar48 +
                                                                                 (double)(float)((
                                                  double)(float)(dVar31 * dVar30) * dVar49 + dVar30)
                                                  ))));
  local_1a0 = (float)((double)*(float *)(&DAT_00fa2fa0 + iVar11) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfa2fb0) * fVar66));
  local_19c = (float)((double)*(float *)(iVar11 + 0xfa2fa4) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfa2fb4) * fVar66));
  local_198 = (float)((double)*(float *)(iVar11 + 0xfa2fa8) * dVar30 +
                     (double)(*(float *)(iVar11 + 0xfa2fb8) * fVar66));
  local_194 = *(float *)(iVar11 + 0xfa2fbc) * fVar66 +
              (float)((double)*(float *)(iVar11 + 0xfa2fac) * dVar30 + dVar44);
  SpawnPart_69
            (param_2 * 0x40 + 0xfa2fd0 & 0xffffffff,uVar13 - 0x1a0,0x7f,
             *(undefined4 *)((int)&DAT_00fa2f8c + iVar8));
  iVar14 = MB_randInt(3);
  if (iVar14 == 0) {
    local_184 = *(undefined4 *)(iVar11 + 0xfa2fac);
    local_190 = (float)((double)*(float *)(&DAT_00fa2fa0 + iVar11) * dVar52) +
                *(float *)(iVar11 + 0xfa2fd0);
    local_18c = (float)((double)*(float *)(iVar11 + 0xfa2fa4) * dVar52) +
                *(float *)(iVar11 + 0xfa2fd4);
    local_188 = (float)((double)*(float *)(iVar11 + 0xfa2fa8) * dVar52) +
                *(float *)(iVar11 + 0xfa2fd8);
    uVar42 = SpawnPart_69
                       (uVar13 - 400,&DAT_00a15d30,0x7f,*(undefined4 *)((int)&DAT_00fa2f8c + iVar8))
    ;
    iVar14 = (int)uVar42;
    if (iVar14 != 0) {
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar59 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      *(undefined4 *)(iVar14 + 0xc) = 0x47ea6000;
      auVar55 = loadVectorLeftIndexed(100,0x24c310);
      auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar65 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar55 = vectorMultiplyAddFloatingPoint
                          (auVar65,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                           auVar59);
      fVar66 = animationSpeed * 4.5;
      local_160 = (longlong)(int)fVar66;
      auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
      auVar55 = vectorSplatHalfWord(auVar55,1);
      uVar6 = storeVectorElementHalfWordIndexed(auVar55,10,uVar42);
      *(undefined2 *)(iVar14 + 10) = uVar6;
      dVar30 = (double)FastIntToDouble((short)(int)fVar66);
      *(undefined **)(iVar14 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar14 + 0x30) = (float)(dVar44 / dVar30);
      if (*(int *)(&DAT_00fa2f74 + iVar8) == 1) {
        *(undefined2 *)(iVar14 + 0x36) = 1;
      }
    }
  }
  MB_randRangeFloat((float)dVar41,(float)dVar53);
  MB_randVector(dVar41,dVar53,(Vec4 *)(uVar13 - 0x1a0));
  SpawnPart_69
            (uVar13 - 0x1b0,uVar13 - 0x1a0,0x7f,*(undefined4 *)((int)&DAT_00fa2f8c + iVar8));
  iVar14 = MB_randInt(3);
  if ((iVar14 == 0) &&
     (uVar42 = SpawnPart_69
                         (uVar13 - 0x1b0,&DAT_00a15d30,0x7f,
                          *(undefined4 *)((int)&DAT_00fa2f8c + iVar8)), iVar14 = (int)uVar42,
     iVar14 != 0)) {
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    auVar59 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    *(undefined4 *)(iVar14 + 0xc) = 0x47ea6000;
    auVar55 = loadVectorLeftIndexed(100,0x24c310);
    auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar65 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar65,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar59);
    fVar66 = animationSpeed * 4.5;
    local_160 = (longlong)(int)fVar66;
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    auVar55 = vectorSplatHalfWord(auVar55,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar55,10,uVar42);
    *(undefined2 *)(iVar14 + 10) = uVar6;
    dVar53 = (double)FastIntToDouble((short)(int)fVar66);
    *(undefined **)(iVar14 + 0x38) = &DAT_007f7f7f;
    *(float *)(iVar14 + 0x30) = (float)(dVar44 / dVar53);
    if (*(int *)(&DAT_00fa2f74 + iVar8) == 1) {
      *(undefined2 *)(iVar14 + 0x36) = 2;
    }
  }
  uVar17 = *(uint *)(&DAT_00fa2f68 + iVar8);
  if (uVar17 != 0) {
    if ((uVar17 & 1) != 0) {
      local_180.x = *(float *)(iVar11 + 0xfa2fd0);
      local_180.y = *(float *)(iVar11 + 0xfa2fd4);
      local_180.w = *(float *)(iVar11 + 0xfa2fdc);
      local_180.z = *(float *)(iVar11 + 0xfa2fd8) - 0.25;
      uVar16 = (ulonglong)*(uint *)(&DAT_00fa2f50 + iVar8);
      if (*(uint *)(&DAT_00fa2f50 + iVar8) == 0xffffffff) {
        uVar16 = CreatePointLight2
                           (DAT_0079b4d0,dVar45,dVar44,dVar44,0x4000000000000000,&local_180);
        uVar17 = *(uint *)(&DAT_00fa2f68 + iVar8);
        *(int *)(&DAT_00fa2f50 + iVar8) = (int)uVar16;
      }
      if (-1 < (int)uVar16) {
        iVar14 = (int)((uVar16 & 0xffffffff) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar14) = local_180.x;
        *(float *)((int)&PointLights[0].pos.y + iVar14) = local_180.y;
        *(float *)((int)&PointLights[0].pos.z + iVar14) = local_180.z;
        *(float *)((int)&PointLights[0].pos.w + iVar14) = DAT_0079b4d0;
      }
    }
    if ((uVar17 & 2) != 0) {
      local_1b0.z = (float)((double)local_1b0.z + dVar54);
      uVar16 = (ulonglong)*(uint *)(&DAT_00fa2f5c + iVar8);
      if (*(uint *)(&DAT_00fa2f5c + iVar8) == 0xffffffff) {
        uVar16 = CreatePointLight2
                           (DAT_0079b4d0,dVar45,dVar44,dVar44,0x4000000000000000,&local_1b0);
        *(int *)(&DAT_00fa2f5c + iVar8) = (int)uVar16;
      }
      if (-1 < (int)uVar16) {
        iVar8 = (int)((uVar16 & 0xffffffff) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar8) = local_1b0.x;
        *(float *)((int)&PointLights[0].pos.y + iVar8) = local_1b0.y;
        *(float *)((int)&PointLights[0].pos.z + iVar8) = local_1b0.z;
        *(float *)((int)&PointLights[0].pos.w + iVar8) = DAT_0079b4d0;
      }
    }
  }
  return;
}


// 0x024d07c (0xa0 bytes)
void M1331_0024d07c(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 << 2);
  *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
  *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
  if (*(int *)(&DAT_00fa2f50 + iVar1) != -1) {
    DeletePointLight(*(int *)(&DAT_00fa2f50 + iVar1));
    *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
  }
  if (*(int *)(&DAT_00fa2f5c + iVar1) != -1) {
    DeletePointLight(*(int *)(&DAT_00fa2f5c + iVar1));
    *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
  }
  return;
}


// 0x024d11c (0x1c8 bytes)
/* Moby 1331 */

void UpdateMoby_1331(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (moby->state == 0) {
    DAT_00fa2f28 = 0;
    DAT_00fa2f94 = 0;
    DAT_00fa2f90 = 0;
    DAT_00fa2f24 = 0;
    DAT_00fa2f8c = 0;
    DAT_00fa2f20 = 0;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      iVar4 = *(int *)((int)&DAT_00fa2f20 + iVar1);
      if (iVar4 == 1) {
        if (0x7f < *(byte *)(*(int *)((int)&DAT_00fa2f8c + iVar1) + 0x20)) {
          *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
          *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
        }
      }
      else if (iVar4 == 4) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
        *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
        if (*(int *)(&DAT_00fa2f50 + iVar1) != -1) {
          DeletePointLight(*(int *)(&DAT_00fa2f50 + iVar1));
          *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
        }
        if (*(int *)(&DAT_00fa2f5c + iVar1) != -1) {
          DeletePointLight(*(int *)(&DAT_00fa2f5c + iVar1));
          *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
        }
      }
      else if (iVar4 != 0) {
        iVar2 = iVar2 + 1;
        M1331_0024c380(*(undefined4 *)((int)&DAT_00fa2f8c + iVar1),uVar3);
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 4;
      }
      iVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)iVar4;
    } while (iVar4 < 3);
    if (iVar2 != 0) {
      RegisterPostDraw(&PTR_M1338_0024ea90_00709ee0,moby);
    }
  }
  return;
}


