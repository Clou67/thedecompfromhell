// game/update/moby629.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x3ebfcc-0x3ec788
#include "game/update/moby629.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03ebfcc (0x90 bytes)
void FUN_003ebfcc(double param_1,float param_2,f32 *param_3)

{
  f32 fVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(0x274);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pfVar2 = (float *)pMVar3->pVar;
    (pMVar3->pos).x = *param_3;
    (pMVar3->pos).y = param_3[1];
    (pMVar3->pos).z = param_3[2];
    fVar1 = param_3[3];
    pfVar2[2] = 4.2039e-45;
    (pMVar3->pos).w = fVar1;
    *pfVar2 = (float)param_1;
    pfVar2[3] = param_2;
  }
  return;
}


// 0x03ec060 (0xcc bytes)
void FUN_003ec060(double param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined8 in_r0;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  pfVar2 = *(float **)(param_2 + 0x78);
  *(undefined4 *)(param_2 + 0x10) = *param_3;
  fVar3 = pfVar2[2];
  *(undefined4 *)(param_2 + 0x14) = param_3[1];
  *(undefined4 *)(param_2 + 0x18) = param_3[2];
  uVar1 = param_3[3];
  pfVar2[2] = (float)((int)fVar3 + 2);
  iVar4 = DAT_00854170;
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  *pfVar2 = (float)param_1;
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar7 = loadVectorLeftIndexed(0x4170,0x850000);
  auVar6 = loadVectorLeftIndexed(in_r0,0x3ec05c);
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar7,0);
  auVar7 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = vectorAddFloatingPoint(auVar5,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar8);
  auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
  if ((int)(animationSpeed * ((float)(longlong)iVar4 + 0.5)) < (int)fVar3 + 2) {
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,8,ZEXT48(pfVar2));
    *(undefined4 *)((uint)(pfVar2 + 2) & 0xfffffffc) = uVar1;
  }
  return;
}


// 0x03ec168 (0x5f4 bytes)
ulonglong M629_003ec168(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  ulonglong *puVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar11;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint uVar12;
  ulonglong unaff_r23;
  undefined4 *puVar13;
  ulonglong unaff_r24;
  undefined4 *puVar14;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  longlong lVar16;
  ulonglong unaff_r27;
  longlong lVar17;
  ulonglong unaff_r28;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar19;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar18 = uVar6 - 0x410;
  puVar4 = (ulonglong *)lVar18;
  *puVar4 = uVar6;
  puVar4[0x84] = in_LR;
  puVar4[0x75] = in_f19;
  puVar4[0x76] = in_f20;
  puVar4[0x77] = in_f21;
  puVar4[0x78] = in_f22;
  puVar4[0x79] = in_f23;
  puVar4[0x7a] = in_f24;
  puVar4[0x7b] = in_f25;
  puVar4[0x7c] = in_f26;
  puVar4[0x7d] = in_f27;
  puVar4[0x7e] = in_f28;
  puVar4[0x7f] = in_f29;
  puVar4[0x80] = in_f30;
  puVar4[0x81] = in_f31;
  puVar4[0x74] = unaff_r31;
  puVar4[0x72] = unaff_r29;
  puVar4[0x68] = unaff_r19;
  puVar4[0x73] = unaff_r30;
  puVar4[0x71] = unaff_r28;
  puVar4[0x70] = unaff_r27;
  puVar4[0x6f] = unaff_r26;
  puVar4[0x6e] = unaff_r25;
  puVar4[0x6d] = unaff_r24;
  puVar4[0x6c] = unaff_r23;
  puVar4[0x6b] = unaff_r22;
  puVar4[0x6a] = unaff_r21;
  puVar4[0x69] = unaff_r20;
  pfVar3 = *(float **)(param_1 + 0x78);
  FastMtx4Identity((float *)(puVar4 + 0x16));
  fVar1 = *(float *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  iVar11 = 0;
  *(undefined4 *)(puVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  fVar5 = DAT_008541b0;
  iVar19 = 0;
  *(undefined4 *)((int)puVar4 + 0xe4) = uVar10;
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar4 + 0x1d) = fVar1;
  *(undefined4 *)((int)puVar4 + 0xec) = uVar10;
  *(float *)(puVar4 + 0x1d) = fVar1 + fVar5;
  dVar38 = 1.0;
  *(undefined4 *)((int)puVar4 + 0xec) = 0x3f800000;
  do {
    uVar7 = GetEffectTex(0xe);
    iVar9 = (int)lVar18;
    *(undefined8 *)(iVar9 + 0x168) = uVar7;
    uVar7 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar9 + 0x170) = uVar7;
    uVar7 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    *(undefined8 *)(iVar9 + 0x160) = uVar7;
    uVar7 = idol_draw::PackCmd(DAT_010cbbbc,DAT_00854178,DAT_010cbbc0,DAT_0085417c,0x80);
    *(undefined8 *)(iVar9 + 0x178) = uVar7;
    puVar4[0x66] = (longlong)iVar11;
    dVar34 = 0.25;
    dVar39 = (double)(longlong)puVar4[0x66];
    dVar36 = (double)(float)(dVar39 * 0.25 + (double)pfVar3[1]);
    dVar35 = (double)(float)((double)DAT_008541b8 * dVar39 + (double)*pfVar3);
    iVar9 = FastDoubleToInt(dVar36);
    puVar4[0x66] = (longlong)iVar9;
    dVar37 = (double)(float)(dVar36 - (double)(longlong)puVar4[0x66]);
    uVar8 = FastLerpColor(dVar37,DAT_00854184,DAT_00854188);
    dVar36 = (double)(float)((double)DAT_008541c0 * dVar37);
    if (dVar38 - (double)(float)((double)DAT_008541c0 * dVar37) < 0.0) {
      dVar36 = dVar38;
    }
    uVar8 = FastLerpColor(dVar36,uVar8 & 0xffffff);
    dVar36 = (double)FastIntToDouble(pfVar3[2]);
    puVar4[0x66] = (longlong)DAT_00854170;
    dVar20 = (double)(float)(dVar36 / (double)(longlong)
                                              (animationSpeed *
                                              ((float)(longlong)puVar4[0x66] + 0.5)));
    dVar36 = dVar38;
    if ((dVar20 <= dVar38) && (dVar36 = dVar20, dVar20 < 0.0)) {
      dVar36 = 0.0;
    }
    uVar10 = FastLerpColor(dVar36,uVar8 & 0xffffff,uVar8);
    dVar40 = 0.01745329238474369;
    dVar36 = 3.141590118408203;
    dVar20 = 1.570796251296997;
    dVar28 = 3.141592502593994;
    dVar29 = -3.141592502593994;
    dVar30 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    uVar12 = 0;
    dVar32 = -0.0001980741071747616;
    dVar33 = 2.601886990305502e-06;
    puVar13 = &DAT_00854190;
    puVar14 = &DAT_00854194;
    dVar39 = (double)((float)(dVar34 * dVar39) * 0.017453292);
    lVar15 = lVar18;
    lVar16 = lVar18;
    lVar17 = lVar18;
    do {
      uVar2 = *puVar14;
      *(undefined4 *)((int)lVar15 + 0x140) = *puVar13;
      *(undefined4 *)((int)lVar15 + 0x144) = uVar2;
      if ((uVar12 & 1) == 0) {
        fVar1 = -(float)((double)DAT_008541b4 * dVar37);
      }
      else {
        fVar1 = (float)((double)DAT_008541b4 * dVar37);
      }
      puVar4[0x66] = (longlong)((int)uVar12 >> 1);
      iVar9 = (int)lVar16;
      *(float *)(iVar9 + 0xf8) = fVar1;
      dVar21 = (double)FastWrapRot
                                 ((float)((double)(float)((double)DAT_0085418c * dVar40) *
                                          (double)(longlong)puVar4[0x66] - dVar36),
                                  (float)((double)DAT_0085418c * dVar39));
      dVar23 = (double)(float)(dVar21 + dVar20);
      *(undefined4 *)((int)lVar17 + 0x130) = uVar10;
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 2;
      *(undefined4 *)(iVar9 + 0xfc) = 0x3f800000;
      lVar15 = lVar15 + 8;
      puVar14 = puVar14 + 2;
      lVar17 = lVar17 + 4;
      dVar34 = (double)(float)(dVar28 - dVar21);
      if (dVar21 - (double)(float)(dVar28 - dVar21) < 0.0) {
        dVar34 = dVar21;
      }
      dVar24 = (double)(float)(dVar28 - dVar23);
      if (dVar23 - (double)(float)(dVar28 - dVar23) < 0.0) {
        dVar24 = dVar23;
      }
      dVar22 = (double)(float)(dVar29 - dVar21);
      if ((double)(float)(dVar29 - dVar21) - dVar34 < 0.0) {
        dVar22 = dVar34;
      }
      dVar34 = (double)(float)(dVar29 - dVar23);
      if ((double)(float)(dVar29 - dVar23) - dVar24 < 0.0) {
        dVar34 = dVar24;
      }
      dVar21 = (double)(float)(dVar22 * dVar22);
      dVar23 = (double)(float)(dVar34 * dVar34);
      dVar26 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar22));
      dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar34));
      dVar25 = (double)(float)(dVar21 * dVar26);
      dVar27 = (double)(float)(dVar23 * dVar24);
      *(float *)(iVar9 + 0xf4) =
           (float)((double)(float)((double)(float)(dVar21 * dVar25) * dVar33 +
                                  (double)(float)(dVar25 * dVar32 +
                                                 (double)(float)(dVar26 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar21 * dVar22) * dVar30 + dVar22)))) * dVar35);
      *(float *)(iVar9 + 0xf0) =
           (float)((double)(float)((double)(float)(dVar23 * dVar27) * dVar33 +
                                  (double)(float)(dVar27 * dVar32 +
                                                 (double)(float)(dVar24 * dVar31 +
                                                                (double)(float)((double)(float)(
                                                  dVar23 * dVar34) * dVar30 + dVar34)))) * dVar35);
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar12 < 4);
    iVar11 = iVar11 + 1;
    lVar18 = lVar18 + 0x90;
  } while (iVar11 < 4);
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(float *)(puVar4 + 0xf) = (float)((double)DAT_0085418c * dVar40);
  FastEulerToMtx(uVar6 - 0x390,uVar6 - 0x3a0);
  auVar42 = ZEXT416(0xffffffff);
  auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar46 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar42 = ZEXT416(0xffffffff);
  auVar48 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar41 = loadVectorLeftIndexed(0x418c,0x850000);
  auVar42 = loadVectorLeftIndexed(0x38,0x3ec12c);
  auVar44 = vectorReciprocalEstimateFloatingPoint(auVar41);
  auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
  uVar8 = 0x34;
  auVar42 = ZEXT416(0);
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar46,auVar45);
  auVar46 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  auVar44 = ZEXT416(0xffffffff);
  auVar48 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = loadVectorLeftIndexed(0x34,0x3ec12c);
  auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
  dVar38 = 360.0;
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar49,auVar47);
  auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar43);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar41,auVar46);
  auVar44 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar48
                      );
  auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
             auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    do {
      lVar18 = uVar6 - 0x360;
      FastDrawQuad(uVar6 - 800,lVar18,0,EffectTexHeaders,9);
      FastDrawQuad(uVar6 - 0x290,lVar18,0,EffectTexHeaders,9);
      FastDrawQuad(uVar6 - 0x200,lVar18,0,EffectTexHeaders,9);
      FastDrawQuad(uVar6 - 0x170,lVar18,0,EffectTexHeaders,9);
      FastVecMtx4MultBatch3(lVar18,lVar18,uVar6 - 0x390);
      dVar36 = (double)DAT_0085418c;
      iVar19 = iVar19 + 1;
      uVar8 = (ulonglong)iVar19;
      puVar4[0x66] = uVar8;
    } while ((float)(longlong)puVar4[0x66] < (float)(dVar38 / dVar36));
  }
  return uVar8;
}


// 0x03ec75c (0x14 bytes)
void M629_003ec75c(void)

{
  DAT_00854214 = 0x10000;
  return;
}


// 0x03ec770 (0x4 bytes)
/* Moby 629 */

MobyInstance * UpdateMoby_629(MobyInstance *moby)

{
  return moby;
}


// 0x03ec774 (0x14 bytes)
void M629_003ec774(void)

{
  DAT_00854284 = 0x10000;
  return;
}


