// game/update/moby386.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x359ad0-0x35aa94
#include "game/update/moby386.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0359ad0 (0x400 bytes)
void M386_00359ad0(int param_1)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
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
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar15 = uVar9 - 0x1b0;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar9;
  puVar4[0x38] = in_LR;
  puVar4[0x2b] = in_f21;
  puVar4[0x2c] = in_f22;
  puVar4[0x2d] = in_f23;
  puVar4[0x2e] = in_f24;
  puVar4[0x2f] = in_f25;
  puVar4[0x30] = in_f26;
  puVar4[0x31] = in_f27;
  puVar4[0x32] = in_f28;
  puVar4[0x33] = in_f29;
  puVar4[0x34] = in_f30;
  puVar4[0x35] = in_f31;
  puVar4[0x2a] = unaff_r31;
  puVar4[0x29] = unaff_r30;
  puVar4[0x28] = unaff_r29;
  pfVar3 = *(float **)(param_1 + 0x78);
  FastMtxCopyNoTranslate(uVar9 - 0x140,param_1 + 0xc0);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar4 + 0xa4) = uVar11;
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar4 + 0x15) = fVar2;
  *(undefined4 *)((int)puVar4 + 0xac) = uVar11;
  *(float *)(puVar4 + 0x15) = fVar2 + pfVar3[2];
  dVar18 = 1.0;
  *(undefined4 *)((int)puVar4 + 0xac) = 0x3f800000;
  uVar10 = GetEffectTex(0x3ff0000000000000,0x10);
  puVar4[0x25] = uVar10;
  uVar10 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar4[0x26] = uVar10;
  uVar10 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar4[0x24] = uVar10;
  uVar10 = idol_draw::PackCmd(DAT_010c5114,DAT_00840810,DAT_010c5118,DAT_00840814,0x80);
  puVar4[0x27] = uVar10;
  dVar26 = 3.141592502593994;
  fVar2 = *pfVar3;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  fVar6 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar6 = fVar2;
  }
  fVar7 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar8 = fVar7 * fVar7;
  fVar2 = fVar8 * fVar8 * fVar7;
  fVar6 = fVar8 * fVar2;
  uVar11 = FastLerpColor
                     ((double)((float)((double)(fVar8 * fVar6 * 2.601887e-06 +
                                               fVar6 * -0.0001980741 +
                                               fVar2 * 0.0083330255 +
                                               fVar8 * fVar7 * -0.16666657 + fVar7) + dVar18) * 0.5)
                      ,DAT_00840818,DAT_0084081c);
  lVar13 = uVar9 - 0x100;
  puVar12 = &DAT_00840830;
  lVar17 = 4;
  lVar16 = lVar15;
  do {
    *(undefined4 *)((int)lVar16 + 0x100) = 0x3f000000;
    *(undefined4 *)((int)lVar16 + 0x104) = 0x3f000000;
    *(undefined4 *)((int)lVar15 + 0xf0) = uVar11;
    lVar16 = lVar16 + 8;
    lVar15 = lVar15 + 4;
    puVar14 = (undefined4 *)lVar13;
    *puVar14 = *puVar12;
    puVar14[1] = puVar12[1];
    puVar14[2] = puVar12[2];
    puVar5 = puVar12 + 3;
    puVar12 = puVar12 + 4;
    puVar14[3] = *puVar5;
    lVar13 = lVar13 + 0x10;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  dVar18 = -0.4000000059604645;
  dVar32 = 0.36000001430511475;
  dVar34 = 0.10000000149011612;
  dVar35 = 1.570796251296997;
  dVar36 = 2.0;
  do {
    fVar2 = (float)(dVar18 + dVar34);
    dVar33 = (double)fVar2;
    bVar1 = *(byte *)(param_1 + 0xbc);
    *(float *)((int)puVar4 + 0xd4) = (float)dVar18;
    *(float *)((int)puVar4 + 0xb4) = (float)dVar18;
    *(float *)((int)puVar4 + 0xe4) = fVar2;
    *(float *)((int)puVar4 + 0xc4) = fVar2;
    if ((bVar1 & 1) == 0) {
      dVar19 = (double)(float)((double)DAT_00840820 * dVar18 + dVar35);
      dVar21 = (double)(float)(dVar33 * (double)DAT_00840820 + dVar35);
      dVar18 = (double)(float)(dVar26 - dVar19);
      if (dVar19 - (double)(float)(dVar26 - dVar19) < 0.0) {
        dVar18 = dVar19;
      }
      dVar22 = (double)(float)(dVar26 - dVar21);
      if (dVar21 - (double)(float)(dVar26 - dVar21) < 0.0) {
        dVar22 = dVar21;
      }
      dVar20 = (double)(float)(dVar27 - dVar19);
      if ((double)(float)(dVar27 - dVar19) - dVar18 < 0.0) {
        dVar20 = dVar18;
      }
      dVar18 = (double)(float)(dVar27 - dVar21);
      if ((double)(float)(dVar27 - dVar21) - dVar22 < 0.0) {
        dVar18 = dVar22;
      }
      dVar19 = (double)(float)(dVar20 * dVar20);
      dVar21 = (double)(float)(dVar18 * dVar18);
      dVar24 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar20));
      dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar18));
      dVar23 = (double)(float)(dVar19 * dVar24);
      dVar25 = (double)(float)(dVar21 * dVar22);
      dVar18 = (double)(float)(dVar21 * dVar25) * dVar31 +
               (double)(float)(dVar25 * dVar30 +
                              (double)(float)(dVar22 * dVar29 +
                                             (double)(float)((double)(float)(dVar21 * dVar18) *
                                                             dVar28 + dVar18)));
      *(float *)(puVar4 + 0x17) =
           (float)((double)(float)(dVar19 * dVar23) * dVar31 +
                  (double)(float)(dVar23 * dVar30 +
                                 (double)(float)(dVar24 * dVar29 +
                                                (double)(float)((double)(float)(dVar19 * dVar20) *
                                                                dVar28 + dVar20))));
    }
    else {
      dVar19 = (double)(float)((double)DAT_00840820 * dVar18 + dVar35);
      dVar18 = (double)(float)(dVar26 - dVar19);
      if (dVar19 - (double)(float)(dVar26 - dVar19) < 0.0) {
        dVar18 = dVar19;
      }
      dVar21 = (double)(float)(dVar27 - dVar19);
      if ((double)(float)(dVar27 - dVar19) - dVar18 < 0.0) {
        dVar21 = dVar18;
      }
      dVar18 = (double)(float)(dVar21 * dVar21);
      dVar22 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar21));
      dVar19 = (double)(float)(dVar18 * dVar22);
      *(float *)(puVar4 + 0x17) =
           (float)(dVar36 - (double)(float)((double)(float)(dVar18 * dVar19) * dVar31 +
                                           (double)(float)(dVar19 * dVar30 +
                                                          (double)(float)(dVar22 * dVar29 +
                                                                         (double)(float)((double)(
                                                  float)(dVar18 * dVar21) * dVar28 + dVar21)))));
      dVar19 = (double)(float)(dVar33 * (double)DAT_00840820 + dVar35);
      dVar18 = (double)(float)(dVar26 - dVar19);
      if (dVar19 - (double)(float)(dVar26 - dVar19) < 0.0) {
        dVar18 = dVar19;
      }
      dVar21 = (double)(float)(dVar27 - dVar19);
      if ((double)(float)(dVar27 - dVar19) - dVar18 < 0.0) {
        dVar21 = dVar18;
      }
      dVar18 = (double)(float)(dVar21 * dVar21);
      dVar22 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar21));
      dVar19 = (double)(float)(dVar18 * dVar22);
      dVar18 = dVar36 - (double)(float)((double)(float)(dVar18 * dVar19) * dVar31 +
                                       (double)(float)(dVar19 * dVar30 +
                                                      (double)(float)(dVar22 * dVar29 +
                                                                     (double)(float)((double)(float)
                                                  (dVar18 * dVar21) * dVar28 + dVar21))));
    }
    uVar11 = EffectTexHeaders;
    *(float *)(puVar4 + 0x19) = (float)dVar18;
    dVar18 = dVar33;
    FastDrawQuad(uVar9 - 0x100,uVar9 - 0x140,0,uVar11,9);
  } while (dVar18 < dVar32);
  return;
}


// 0x0359f28 (0x4d0 bytes)
// strings: 00359ed8: '=Vwp_q' (raw) | 00359f14: '>Vwp_q@' (raw)

void M386_00359f28(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  float fVar43;
  GPiece<16> auVar35;
  GPiece<16> auVar42;
  
  uVar1 = *(uint *)((int)param_1 + 0x78);
  uVar8 = (ulonglong)uVar1;
  dVar10 = (double)FastWrapRot(*(float *)(uVar1 + 0x1e0),0.17453292);
  *(float *)(uVar1 + 0x1e0) = (float)dVar10;
  dVar10 = (double)FastDiffRots((double)*(float *)(uVar1 + 0x1e4),0x3fe9b0f580000000);
  *(float *)(uVar1 + 0x1e4) = (float)dVar10;
  dVar10 = (double)FastWrapRot(*(float *)(uVar1 + 0x1e8),0.05236);
  *(float *)(uVar1 + 0x1e8) = (float)dVar10;
  dVar10 = (double)FastIntToDouble(10);
  dVar25 = 0.5;
  dVar26 = 3.141592502593994;
  uVar6 = 0;
  dVar27 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar31 = 2.601886990305502e-06;
  dVar24 = 0.10000000149011612;
  uVar32 = 0x3fc99999a0000000;
  auVar39 = ZEXT416(0);
  auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  auVar39 = loadVectorLeftIndexed(0x3c,0x359ed0);
  auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  dVar23 = (double)((360.0 / (float)(dVar10 * 0.5)) * 0.017453292);
  dVar10 = 0.0;
  do {
    FastIntToDouble(uVar6);
    FastIntToDouble(10);
    iVar7 = (int)uVar6;
    dVar13 = dVar10;
    if (iVar7 != 0) {
      fVar43 = MB_WrapRot
                         ((float)((double)(longlong)iVar7 * dVar23 +
                                 (double)*(float *)(uVar1 + 0x1e0)));
      dVar14 = (double)fVar43;
      dVar13 = (double)(float)(dVar26 - dVar14);
      if (dVar14 - (double)(float)(dVar26 - dVar14) < 0.0) {
        dVar13 = dVar14;
      }
      dVar22 = (double)(float)(dVar27 - dVar14);
      if ((double)(float)(dVar27 - dVar14) - dVar13 < 0.0) {
        dVar22 = dVar13;
      }
      dVar13 = (double)(float)(dVar22 * dVar22);
      dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar22));
      dVar14 = (double)(float)(dVar13 * dVar16);
      dVar14 = (double)(float)((double)(float)(dVar13 * dVar14) * dVar31 +
                              (double)(float)(dVar14 * dVar30 +
                                             (double)(float)(dVar16 * dVar29 +
                                                            (double)(float)((double)(float)(dVar13 *
                                                                                           dVar22) *
                                                                            dVar28 + dVar22))));
      dVar13 = dVar10;
      dVar10 = (double)MB_randRangeSigned(dVar10,uVar32);
      dVar10 = (double)(float)(dVar14 * dVar24 + dVar10);
    }
    auVar33 = vectorConvertFromSignedFixedPointWord(auVar38,0);
    iVar5 = (int)((uVar6 & 0xfffffff) << 4);
    auVar36 = loadVectorLeftIndexed(0x1f0,uVar8);
    auVar37 = loadVectorRightIndexed(0x200,uVar8);
    uVar6 = (ulonglong)(iVar7 + 1);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36 | auVar37,auVar33,auVar39);
    *(float *)(iVar5 + uVar1 + 8) = (float)dVar10;
    *(undefined4 *)(iVar5 + uVar1 + 4) = 0;
    auVar37.piece<0,4>() = auVar38.piece<0,4>() + 1;
    auVar37.piece<8,8>() = auVar38.piece<8,8>();
    auVar37.piece<4,4>() = auVar38.piece<4,4>() + 1;
    auVar36.piece<0,8>() = auVar37.piece<0,8>();
    auVar36.piece<12,4>() = auVar38.piece<12,4>();
    auVar36.piece<8,4>() = auVar38.piece<8,4>() + 1;
    auVar38.piece<0,12>() = auVar36.piece<0,12>();
    auVar38.piece<12,4>() = auVar36.piece<12,4>() + 1;
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,(longlong)iVar5
                       ,uVar8);
    *(undefined4 *)(iVar5 + uVar1 & 0xfffffffc) = uVar2;
    *(undefined4 *)(iVar5 + uVar1 + 0xc) = 0x3f800000;
    dVar10 = dVar13;
  } while (iVar7 + 1 < 5);
  iVar7 = 5;
  lVar4 = uVar8 + 0x50;
  auVar38 = ZEXT416(5);
  auVar33 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  lVar9 = 5;
  do {
    auVar38 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    iVar5 = 9 - iVar7;
    iVar7 = iVar7 + 1;
    auVar36 = loadVectorLeftIndexed(0x1f0,uVar8);
    auVar37 = loadVectorRightIndexed(0x200,uVar8);
    uVar3 = (uint)lVar4;
    *(undefined4 *)(uVar3 + 4) = 0;
    auVar38 = vectorMultiplyAddFloatingPoint(auVar36 | auVar37,auVar38,auVar39);
    *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(iVar5 * 0x10 + uVar1 + 8);
    auVar34.piece<0,4>() = auVar33.piece<0,4>() + 1;
    auVar34.piece<8,8>() = auVar33.piece<8,8>();
    auVar34.piece<4,4>() = auVar33.piece<4,4>() + 1;
    auVar35.piece<0,8>() = auVar34.piece<0,8>();
    auVar35.piece<12,4>() = auVar33.piece<12,4>();
    auVar35.piece<8,4>() = auVar33.piece<8,4>() + 1;
    auVar33.piece<0,12>() = auVar35.piece<0,12>();
    auVar33.piece<12,4>() = auVar35.piece<12,4>() + 1;
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0,lVar4);
    *(undefined4 *)(uVar3 & 0xfffffffc) = uVar2;
    *(undefined4 *)(uVar3 + 0xc) = 0x3f800000;
    lVar4 = lVar4 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  auVar39 = ZEXT416(0);
  auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  iVar7 = 0;
  lVar4 = uVar8 + 0xa0;
  dVar10 = 0.9948376417160034;
  dVar23 = 0.20943999290466309;
  dVar24 = 0.75;
  dVar14 = 1.570796251296997;
  auVar39 = loadVectorLeftIndexed(0x50,0x359ed0);
  auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
  do {
    auVar38 = vectorConvertFromSignedFixedPointWord(auVar40,0);
    iVar5 = (int)uVar8;
    *(undefined4 *)(iVar5 + 0xa8) = 0;
    dVar22 = (double)(longlong)iVar7;
    fVar43 = MB_WrapRot((float)(dVar22 * dVar10 + (double)*(float *)(uVar1 + 0x1e4)));
    dVar16 = (double)fVar43;
    fVar43 = MB_WrapRot((float)(dVar22 * dVar23 + (double)*(float *)(uVar1 + 0x1e8)));
    dVar15 = (double)fVar43;
    dVar22 = (double)(float)(dVar26 - dVar15);
    if (dVar15 - (double)(float)(dVar26 - dVar15) < 0.0) {
      dVar22 = dVar15;
    }
    dVar12 = (double)(float)(dVar27 - dVar15);
    if ((double)(float)(dVar27 - dVar15) - dVar22 < 0.0) {
      dVar12 = dVar22;
    }
    dVar22 = (double)(float)(dVar12 * dVar12);
    dVar17 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar12));
    dVar15 = (double)(float)(dVar22 * dVar17);
    dVar17 = (double)(float)((double)(float)((double)(float)(dVar22 * dVar15) * dVar31 +
                                            (double)(float)(dVar15 * dVar30 +
                                                           (double)(float)(dVar17 * dVar29 +
                                                                          (double)(float)((double)(
                                                  float)(dVar22 * dVar12) * dVar28 + dVar12)))) *
                            dVar24);
    dVar15 = (double)MB_randRangeSigned(dVar13,uVar32);
    dVar12 = (double)(float)(dVar16 + dVar14);
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    iVar7 = iVar7 + 1;
    auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar41.piece<0,4>() = auVar40.piece<0,4>() + 1;
    auVar41.piece<8,8>() = auVar40.piece<8,8>();
    auVar41.piece<4,4>() = auVar40.piece<4,4>() + 1;
    auVar42.piece<0,8>() = auVar41.piece<0,8>();
    auVar42.piece<12,4>() = auVar40.piece<12,4>();
    auVar42.piece<8,4>() = auVar40.piece<8,4>() + 1;
    auVar40.piece<0,12>() = auVar42.piece<0,12>();
    auVar40.piece<12,4>() = auVar42.piece<12,4>() + 1;
    auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar33);
    dVar22 = (double)(float)(dVar26 - dVar16);
    if (dVar16 - (double)(float)(dVar26 - dVar16) < 0.0) {
      dVar22 = dVar16;
    }
    dVar18 = (double)(float)(dVar26 - dVar12);
    if (dVar12 - (double)(float)(dVar26 - dVar12) < 0.0) {
      dVar18 = dVar12;
    }
    dVar11 = (double)(float)(dVar27 - dVar16);
    if ((double)(float)(dVar27 - dVar16) - dVar22 < 0.0) {
      dVar11 = dVar22;
    }
    dVar16 = (double)(float)(dVar11 * dVar11);
    dVar22 = (double)(float)(dVar27 - dVar12);
    if ((double)(float)(dVar27 - dVar12) - dVar18 < 0.0) {
      dVar22 = dVar18;
    }
    fVar43 = *(float *)(iVar5 + 0xa8);
    uVar2 = storeVectorElementWordIndexed(auVar38,0,lVar4);
    *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar2;
    *(undefined4 *)(iVar5 + 0xac) = 0x3f800000;
    lVar4 = lVar4 + 0x10;
    dVar18 = (double)(float)(dVar22 * dVar22);
    dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar11));
    dVar21 = (double)(float)(dVar16 * dVar19);
    dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar22));
    dVar12 = (double)(float)(dVar18 * dVar20);
    *(float *)(iVar5 + 0xa8) =
         (float)(dVar17 * (double)(float)((double)(float)(dVar16 * dVar21) * dVar31 +
                                         (double)(float)(dVar21 * dVar30 +
                                                        (double)(float)(dVar19 * dVar29 +
                                                                       (double)(float)((double)(
                                                  float)(dVar16 * dVar11) * dVar28 + dVar11)))) +
                dVar15) + fVar43;
    *(float *)(iVar5 + 0xa4) =
         (float)((double)(float)((double)(float)(dVar18 * dVar12) * dVar31 +
                                (double)(float)(dVar12 * dVar30 +
                                               (double)(float)(dVar20 * dVar29 +
                                                              (double)(float)((double)(float)(dVar18
                                                                                             * 
                                                  dVar22) * dVar28 + dVar22)))) * dVar25);
    uVar8 = uVar8 + 0x10;
  } while (iVar7 < 0x13);
  RegisterPostDraw(&PTR_M388_0035b698_0070c6b8,param_1);
  return;
}


// 0x035a450 (0x10c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M386_0035a450(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  GPiece<16> auStack_30;
  
  iVar1 = (int)param_1;
  iVar2 = MB_IsPntInCuboid
                    (&g_heroPosition,(longlong)*(int *)(*(int *)(iVar1 + 0x78) + 0x200));
  if (iVar2 != 0) {
    auVar5 = ZEXT416(0xfffffff0);
    auVar3 = ZEXT416(1);
    auVar4 = loadVectorLeftIndexed(0xa6,param_1);
    g_heroHealth = 0;
    auVar4 = vectorShiftRightWord(auVar4,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
    auVar3 = vectorPermute(auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auStack_30,
                           _DAT_0035a440);
    auVar5.piece<0,4>() = iVar1;
    auVar5.piece<4,4>() = iVar1;
    auVar5.piece<8,4>() = iVar1;
    auVar5.piece<12,4>() = iVar1;
    auVar5 = vectorPermute(auVar5,auVar4,_DAT_0035a420);
    auVar5 = vectorPermute(auVar5,_DAT_0035a410,_DAT_0035a430);
    local_60 = auVar3.piece<0,8>();
    local_70 = auVar5.piece<0,8>();
    local_68 = auVar5.piece<8,8>();
    local_58 = auVar3.piece<8,8>();
    CollDamageMobyDirect
              (g_heroMobyPtr,g_heroMobyPtr,0,0x3f80000045afdf66,local_70,local_68,local_60,local_58)
    ;
  }
  return;
}


// 0x035a560 (0xcc bytes)
void M386_0035a560(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_r0;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)uVar1;
  auVar9 = ZEXT416(0);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  lVar7 = 10;
  uVar6 = uVar5;
  do {
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar9,0);
    auVar12 = ZEXT416(0xffffffff);
    auVar11 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13 = loadVectorLeftIndexed(0x1f0,uVar5);
    auVar12.piece<0,4>() = auVar9.piece<0,4>() + 1;
    auVar12.piece<8,8>() = auVar9.piece<8,8>();
    auVar12.piece<4,4>() = auVar9.piece<4,4>() + 1;
    auVar14.piece<0,8>() = auVar12.piece<0,8>();
    auVar14.piece<12,4>() = auVar9.piece<12,4>();
    auVar14.piece<8,4>() = auVar9.piece<8,4>() + 1;
    auVar9.piece<0,12>() = auVar14.piece<0,12>();
    auVar9.piece<12,4>() = auVar14.piece<12,4>() + 1;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar14 = loadVectorRightIndexed(0x200,uVar5);
    auVar12 = vectorMultiplyAddFloatingPoint(auVar13 | auVar14,auVar10,auVar12);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = (uint)uVar6;
    uVar2 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0,uVar6);
    *(undefined4 *)(uVar3 & 0xfffffffc) = uVar2;
    *(undefined4 *)(uVar3 + 8) = 0;
    *(undefined4 *)(uVar3 + 4) = 0;
    *(undefined4 *)(uVar3 + 0xc) = 0x3f800000;
    uVar6 = uVar6 + 0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar9 = ZEXT416(0);
  auVar10 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  lVar7 = uVar5 + 0xa0;
  lVar8 = 0x14;
  auVar9 = loadVectorLeftIndexed(in_r0,0x35a55c);
  auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  do {
    auVar14 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13.piece<0,4>() = auVar10.piece<0,4>() + 1;
    auVar13.piece<8,8>() = auVar10.piece<8,8>();
    auVar13.piece<4,4>() = auVar10.piece<4,4>() + 1;
    auVar11.piece<0,8>() = auVar13.piece<0,8>();
    auVar11.piece<12,4>() = auVar10.piece<12,4>();
    auVar11.piece<8,4>() = auVar10.piece<8,4>() + 1;
    auVar10.piece<0,12>() = auVar11.piece<0,12>();
    auVar10.piece<12,4>() = auVar11.piece<12,4>() + 1;
    auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar12);
    uVar2 = storeVectorElementWordIndexed(auVar12,0,lVar7);
    *(undefined4 *)((uint)lVar7 & 0xfffffffc) = uVar2;
    iVar4 = (int)uVar5;
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    lVar7 = lVar7 + 0x10;
    *(undefined4 *)(iVar4 + 0xa4) = 0;
    *(undefined4 *)(iVar4 + 0xac) = 0x3f800000;
    uVar5 = uVar5 + 0x10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(undefined4 *)(uVar1 + 0x1e0) = 0;
  *(undefined4 *)(uVar1 + 0x1e4) = 0;
  *(undefined4 *)(uVar1 + 0x1e8) = 0;
  *(undefined4 *)(uVar1 + 0x1ec) = 0;
  return;
}


// 0x035a6b8 (0x3dc bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 386 */

void UpdateMoby_386(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  GPiece<48> local_70;
  GPiece<16> auStack_40;
  
  lVar2 = (longlong)(int)moby;
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    if (((*(int *)((int)pvVar1 + 500) == -1) || (*(int *)((int)pvVar1 + 0x1f8) == -1)) ||
       (*(int *)((int)pvVar1 + 0x1fc) == -1)) {
      DeleteMoby(moby);
      return;
    }
    if (*(int *)((int)pvVar1 + 0x200) < 0) {
      DeleteMoby(moby);
      return;
    }
    M386_0035a560(lVar2);
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar1 + 0x204) = 0xffffffff;
  }
  else if ((moby->state < 2) &&
          (((g_heroStateType == 0xf &&
            (((g_heroGrindPath == *(int *)(g_GrindPaths + *(int *)((int)pvVar1 + 500) * 0x20 + 0x10) ||
              (g_heroGrindPath == *(int *)(g_GrindPaths + *(int *)((int)pvVar1 + 0x1f8) * 0x20 + 0x10))
              ) || (g_heroGrindPath ==
                    *(int *)(g_GrindPaths + *(int *)((int)pvVar1 + 0x1fc) * 0x20 + 0x10))))) ||
           ((ABS(g_heroPosition.x - (moby->pos).x) <= 16.0 &&
            (ABS(g_heroPosition.y - (moby->pos).y) <= 16.0)))))) {
    iVar3 = IsMobyPlayingSound(moby,*(int *)((int)pvVar1 + 0x204));
    if (iVar3 == 0) {
      iVar3 = sound_MobyPlay_oClass(6,4,moby,0xd3);
      *(int *)((int)pvVar1 + 0x204) = iVar3;
    }
    iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)moby->pVar + 0x200));
    if (iVar3 != 0) {
      auVar5 = ZEXT416(0xfffffff0);
      auVar6 = ZEXT416(1);
      g_heroHealth = 0;
      auVar4 = loadVectorLeftIndexed(0xa6,lVar2);
      auVar4 = vectorShiftRightWord
                         (auVar4,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60);
      auVar6 = vectorPermute(auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auStack_40,
                             _DAT_0035a680);
      auVar5.piece<0,4>() = moby;
      auVar5.piece<4,4>() = moby;
      auVar5.piece<8,4>() = moby;
      auVar5.piece<12,4>() = moby;
      auVar5 = vectorPermute(auVar5,auVar4,_DAT_0035a660);
      auVar5 = vectorPermute(auVar5,_DAT_0035a650,_DAT_0035a670);
      local_80 = auVar6.piece<0,8>();
      local_78 = auVar6.piece<8,8>();
      local_90 = auVar5.piece<0,8>();
      local_88 = auVar5.piece<8,8>();
      CollDamageMobyDirect
                (g_heroMobyPtr,0x50,0,0x3f80000045afdf66,local_90,local_88,local_80,local_78);
    }
    iVar3 = FastCheckBsphereInView(0x4050000000000000,local_70);
    if (iVar3 < 0) {
      return;
    }
    M386_00359f28(lVar2);
    return;
  }
  iVar3 = *(int *)((int)pvVar1 + 0x204);
  if (-1 < iVar3) {
    if (((iVar3 != -1) && (g_SoundChannels[iVar3].pMoby == moby)) &&
       (g_SoundChannels[iVar3].state != '\0')) {
      sound_Kill(iVar3);
    }
    *(undefined4 *)((int)pvVar1 + 0x204) = 0xffffffff;
  }
                    /* WARNING: Read-only address (ram,0x0035a650) is written */
                    /* WARNING: Read-only address (ram,0x0035a660) is written */
                    /* WARNING: Read-only address (ram,0x0035a670) is written */
                    /* WARNING: Read-only address (ram,0x0035a680) is written */
  return;
}


