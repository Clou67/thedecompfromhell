// game/update/moby1038.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1942f4-0x194fc8
#include "game/update/moby1038.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/update.h"
#include "game/update/moby1035.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x01942f4 (0x344 bytes)
void M1038_001942f4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  ulonglong *puVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  ulonglong unaff_r22;
  int iVar23;
  ulonglong unaff_r23;
  longlong lVar24;
  ulonglong unaff_r24;
  longlong lVar25;
  ulonglong unaff_r25;
  undefined *puVar26;
  ulonglong unaff_r26;
  float *pfVar27;
  ulonglong unaff_r27;
  longlong lVar28;
  float *pfVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar30;
  ulonglong unaff_r31;
  longlong lVar31;
  ulonglong in_LR;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 0x3b0;
  puVar18 = (ulonglong *)lVar24;
  *puVar18 = uVar20;
  puVar18[0x78] = in_LR;
  puVar18[0x72] = unaff_r28;
  puVar18[0x75] = unaff_r31;
  lVar31 = uVar20 - 0x340;
  puVar18[0x73] = unaff_r29;
  puVar18[0x74] = unaff_r30;
  puVar18[0x71] = unaff_r27;
  puVar18[0x70] = unaff_r26;
  puVar18[0x6f] = unaff_r25;
  puVar18[0x6e] = unaff_r24;
  puVar18[0x6d] = unaff_r23;
  puVar18[0x6c] = unaff_r22;
  iVar17 = *(int *)(param_1 + 0x78);
  FastEulerToMtx1(lVar31,param_1 + 0x40);
  FastMtxScaleIdentity((double)DAT_00740050,uVar20 - 0x300);
  FastVecMtx4Mul(lVar31,lVar31,uVar20 - 0x300);
  uVar21 = GetEffectTex(0xe);
  SetGSReg(0x18,uVar21);
  uVar21 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar21);
  uVar21 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar21);
  uVar21 = idol_draw::PackCmd(DAT_00e5eff0,DAT_0073fe60,DAT_00e5eff4,DAT_0073fe64,0x80);
  SetGSReg(3,uVar21);
  STUB_00071170();
  iVar23 = 0;
  lVar25 = uVar20 - 0x2c0;
  puVar26 = &DAT_0073ffc0;
  iVar30 = 0;
  lVar28 = uVar20 - 0x290;
  pfVar27 = (float *)&DAT_0073ff30;
  lVar31 = lVar25;
  do {
    FastEulerToMtx1(lVar31,puVar26);
    FastVecMtx4Mul(lVar31,uVar20 - 0x340,lVar31);
    fVar1 = pfVar27[1];
    fVar2 = *pfVar27;
    fVar3 = *(float *)((int)puVar18 + 0x84);
    fVar4 = pfVar27[2];
    fVar5 = *(float *)((int)puVar18 + 0x74);
    fVar6 = pfVar27[3];
    fVar7 = *(float *)(puVar18 + 0x11);
    fVar8 = *(float *)((int)puVar18 + 0x94);
    fVar9 = *(float *)(puVar18 + 0xf);
    iVar23 = iVar23 + 1;
    puVar26 = puVar26 + 0x10;
    fVar10 = *(float *)((int)puVar18 + 0xa4);
    fVar11 = *(float *)((int)puVar18 + 0x8c);
    fVar12 = *(float *)(puVar18 + 0x13);
    fVar13 = *(float *)((int)puVar18 + 0x7c);
    fVar14 = *(float *)(puVar18 + 0x15);
    fVar15 = *(float *)((int)puVar18 + 0x9c);
    fVar16 = *(float *)((int)puVar18 + 0xac);
    pfVar27 = pfVar27 + 4;
    lVar31 = lVar31 + 0x40;
    pfVar29 = (float *)lVar28;
    *pfVar29 = *(float *)(puVar18 + 0x14) * fVar6 +
               *(float *)(puVar18 + 0x12) * fVar4 +
               *(float *)(puVar18 + 0xe) * fVar2 + *(float *)(puVar18 + 0x10) * fVar1 +
               *(float *)(param_1 + 0x10);
    pfVar29[1] = fVar10 * fVar6 + fVar8 * fVar4 + fVar5 * fVar2 + fVar3 * fVar1 +
                 *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    pfVar29[3] = fVar16 * fVar6 + fVar15 * fVar4 + fVar13 * fVar2 + fVar11 * fVar1;
    pfVar29[2] = fVar14 * fVar6 + fVar12 * fVar4 + fVar9 * fVar2 + fVar7 * fVar1 + fVar3;
    *(undefined4 *)((int)lVar24 + 300) = 0x3f800000;
    lVar28 = lVar28 + 0x40;
    lVar24 = lVar24 + 0x40;
  } while (iVar23 < 9);
  uVar22 = FastLerpColor
                     ((double)*(float *)(iVar17 + 0x18),DAT_0073fe70 & 0xffffff,DAT_0073fe70);
  puVar26 = PTR_DAT_0073fe74;
  *(undefined4 *)(puVar18 + 0x66) = DAT_00e5ff20;
  uVar19 = DAT_00e5ff24;
  *(undefined4 **)(puVar18 + 0x67) = &DAT_00e5ff10;
  *(undefined4 *)((int)puVar18 + 0x334) = uVar19;
  *(undefined4 *)((int)puVar18 + 0x33c) = uVar22;
  uVar19 = DAT_0073ff20;
  *(undefined **)(puVar18 + 0x68) = puVar26;
  uVar22 = DAT_00e5f000;
  *(undefined4 *)((int)puVar18 + 0x34c) = uVar19;
  *(undefined4 *)(puVar18 + 0x6a) = uVar22;
  *(undefined4 *)((int)puVar18 + 0x344) = 0x1e;
  *(undefined4 **)(puVar18 + 0x69) = &DAT_00e5f010;
  do {
    DrawColorGradientStrip(uVar20 - 0x80,lVar25);
    iVar30 = iVar30 + 1;
    lVar25 = lVar25 + 0x40;
  } while (iVar30 < 9);
  return;
}


// 0x0194638 (0x14 bytes)
void M1038_00194638(void)

{
  DAT_007400cc = 0x10000;
  return;
}


// 0x0194678 (0x524 bytes)
void M1038_00194678(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GPiece<16> auVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  char acVar14 [4];
  ulonglong uVar15;
  int iVar17;
  undefined8 uVar16;
  undefined1 uVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar19;
  ulonglong unaff_r27;
  ulonglong uVar20;
  float *pfVar21;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
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
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar1 = uVar15 - 0x130;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar15;
  puVar7[0x28] = in_LR;
  puVar7[0x1f] = in_f25;
  puVar7[0x20] = in_f26;
  puVar7[0x21] = in_f27;
  puVar7[0x22] = in_f28;
  puVar7[0x23] = in_f29;
  puVar7[0x24] = in_f30;
  puVar7[0x25] = in_f31;
  puVar7[0x1a] = unaff_r27;
  fVar10 = GameCamera.posZ;
  fVar9 = GameCamera.posY;
  iVar8 = (int)param_1;
  uVar20 = (ulonglong)*(uint *)(iVar8 + 0x78);
  iVar17 = *(int *)(*(uint *)(iVar8 + 0x78) + 0x40);
  fVar3 = GameCamera.posX - *(float *)(iVar17 + 0x10);
  *(float *)(puVar7 + 0xe) = fVar3;
  fVar9 = fVar9 - *(float *)(iVar17 + 0x14);
  *(float *)((int)puVar7 + 0x74) = fVar9;
  acVar14 = GameCamera.field8_0x14c;
  fVar10 = fVar10 - *(float *)(iVar17 + 0x18);
  *(float *)(puVar7 + 0xf) = fVar10;
  *(char (*) [4])((int)puVar7 + 0x7c) = acVar14;
  dVar30 = 0.0;
  fVar11 = SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar9 * fVar9);
  puVar7[0x1c] = unaff_r29;
  puVar7[0x19] = unaff_r26;
  iVar19 = 0;
  puVar7[0x1d] = unaff_r30;
  puVar7[0x1b] = unaff_r28;
  puVar7[0x1e] = unaff_r31;
  lVar22 = uVar20 + 0x20;
  fVar13 = -0.3 / fVar11;
  dVar23 = dVar30;
  if (0.0 - fVar11 < 0.0) {
    dVar23 = (double)(fVar9 * fVar13);
  }
  dVar25 = dVar30;
  if (0.0 - fVar11 < 0.0) {
    dVar25 = (double)(fVar3 * fVar13);
  }
  dVar28 = dVar30;
  if (0.0 - fVar11 < 0.0) {
    dVar28 = (double)(fVar10 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar23 = (double)(fVar9 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar25 = (double)(fVar3 * fVar13);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar28 = (double)(fVar10 * fVar13);
  }
  *(float *)(puVar7 + 0xe) = (float)dVar25;
  *(float *)((int)puVar7 + 0x74) = (float)dVar23;
  *(float *)(puVar7 + 0xf) = (float)dVar28;
  *(float *)(puVar7 + 0xe) = (float)(dVar25 + (double)*(float *)(iVar17 + 0x10));
  fVar3 = SQRT((float)(dVar28 * dVar28 +
                      (double)(float)(dVar25 * dVar25 + (double)(float)(dVar23 * dVar23))));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar23 + (double)*(float *)(iVar17 + 0x14));
  dVar26 = (double)(0.1 / fVar3);
  *(float *)(puVar7 + 0xf) = (float)(dVar28 + (double)*(float *)(iVar17 + 0x18));
  dVar31 = 255.0;
  auVar38 = loadVectorLeftIndexed(0x10,0x194650);
  dVar32 = 255.5;
  auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  dVar33 = 0.5;
  dVar34 = dVar30;
  if (0.0 - fVar3 < 0.0) {
    dVar34 = (double)(float)(dVar28 * dVar26);
  }
  dVar27 = dVar30;
  if (0.0 - fVar3 < 0.0) {
    dVar27 = (double)(float)(dVar23 * dVar26);
  }
  dVar29 = dVar30;
  if (0.0 - fVar3 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar26);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar34 = (double)(float)(dVar28 * dVar26);
  }
  puVar7[0x18] = unaff_r25;
  if (fVar3 - 0.0 < 0.0) {
    dVar27 = (double)(float)(dVar23 * dVar26);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar29 = (double)(float)(dVar25 * dVar26);
  }
  do {
    pfVar21 = (float *)uVar20;
    dVar23 = (double)(*pfVar21 + pfVar21[4]);
    *pfVar21 = *pfVar21 + pfVar21[4];
    if (dVar23 < dVar31) {
      if (dVar23 <= dVar30) {
        *pfVar21 = (float)(dVar23 + dVar31);
      }
    }
    else {
      *pfVar21 = (float)(dVar23 - dVar31);
    }
    iVar17 = FastDecTimerS32(uVar20 + 0x20);
    dVar23 = (double)animationSpeed;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar3 = pfVar21[8];
    if (iVar17 != 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar38,auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      puVar7[0x14] = (longlong)(int)(dVar23 * dVar32);
      fVar3 = *(float *)((int)puVar7 + 0xa4);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0,lVar22);
      *(undefined4 *)((uint)lVar22 & 0xfffffffc) = uVar4;
    }
    puVar7[0x14] = (longlong)(int)(dVar23 * dVar32);
    dVar23 = (double)FastIntToDouble(*(int *)((int)puVar7 + 0xa4) - (int)fVar3);
    uVar16 = FastLerpColor
                       (ABS((double)(float)(dVar33 - (double)(float)(dVar23 / (double)(longlong)
                                                                                      ((double)
                                                  animationSpeed * dVar32)))),DAT_007400f0,
                        DAT_007400f4);
    uVar18 = FastDoubleToInt((double)*pfVar21);
    SpawnPart_59
              ((double)pfVar21[0xc],uVar15 - 0xc0,uVar16,uVar18,DAT_007400fc,DAT_007400f8,2,
               DAT_007400f8,0);
    iVar19 = iVar19 + 1;
    lVar22 = lVar22 + 4;
    uVar20 = uVar20 + 4;
    *(float *)(puVar7 + 0xe) = (float)((double)*(float *)(puVar7 + 0xe) + dVar29);
    *(float *)((int)puVar7 + 0x74) = (float)((double)*(float *)((int)puVar7 + 0x74) + dVar27);
    *(float *)(puVar7 + 0xf) = (float)((double)*(float *)(puVar7 + 0xf) + dVar34);
  } while (iVar19 < 4);
  auVar38 = loadVectorLeftIndexed(0x710,0xa10000);
  if (((worldUpdateTime & 3) == 3) && (*(char *)(iVar8 + 0x31) != '\0')) {
    auVar35 = ZEXT416(4);
    uVar12 = worldUpdateTime & 4;
    auVar36 = ZEXT416(0xffffffff);
    auVar6 = ZEXT416(1);
    *(undefined4 *)((int)puVar7 + 0x8c) = 0;
    auVar35 = vectorLogicalAnd(auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                              );
    auVar38 = ZEXT416(0);
    auVar37 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    *(undefined4 *)((int)puVar7 + 0x84) = 0;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    auVar38 = vectorCompareEqualToUnsignedWord(auVar35,auVar37);
    auVar35 = vectorConditionalSelect
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                         auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar38);
    auVar38 = ZEXT416(0xffffffff);
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0);
    auVar36 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    puVar7[0x14] = (longlong)(int)(((uint)(ZERO_MASK(uVar12)) & 2) - 1);
    auVar38 = loadVectorLeftIndexed(0x18,0x194650);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar24 = puVar7[0x14];
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                         auVar36);
    uVar20 = (ulonglong)DAT_00740108;
    auVar38 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar7 + 0x11) = uVar4;
    puVar7[0x14] = uVar20;
    fVar3 = (float)(longlong)uVar24 * 0.9;
    dVar28 = (double)SQRT(fVar3 * fVar3);
    fVar9 = animationSpeed * (float)((double)(longlong)puVar7[0x14] + dVar33);
    fVar10 = animationSpeed * (float)((double)(longlong)puVar7[0x14] + dVar33);
    uVar4 = *(undefined4 *)(iVar8 + 0x10);
    uVar2 = *(undefined4 *)(iVar8 + 0x14);
    uVar5 = storeVectorElementWordIndexed(auVar37,0x90,lVar1);
    *(undefined4 *)(puVar7 + 0x12) = uVar5;
    uVar5 = storeVectorElementWordIndexed(auVar37,0x94,lVar1);
    *(undefined4 *)((int)puVar7 + 0x94) = uVar5;
    *(undefined4 *)((int)puVar7 + 0x9c) = 0;
    *(undefined4 *)(puVar7 + 0x10) = uVar4;
    *(undefined4 *)((int)puVar7 + 0x84) = uVar2;
    uVar4 = DAT_00740100;
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    auVar38 = vectorAddFloatingPoint(auVar35,auVar38);
    dVar34 = (double)DAT_00740104;
    dVar25 = (double)(fVar3 * (float)((double)(-2.0 / (float)(longlong)fVar9) / dVar28));
    dVar23 = dVar30;
    if (dVar30 - dVar28 < 0.0) {
      dVar23 = dVar25;
    }
    if (dVar28 - dVar30 < 0.0) {
      dVar23 = dVar25;
    }
    *(float *)(puVar7 + 0x13) = (float)dVar23;
    auVar35 = loadVectorLeftIndexed(0x20,0x194650);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = vectorAddFloatingPoint
                        (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar7 + 0x11) = uVar2;
    FastDoubleToInt((double)(longlong)fVar10);
    MB_randInt(0xff);
    SpawnPart_60(dVar34,uVar15 - 0xb0,uVar15 - 0xa0,uVar4);
  }
  return;
}


// 0x0194ba8 (0x120 bytes)
void M1038_00194ba8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> in_vs39;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xc0000000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0880000;
  *(undefined4 *)(uVar1 + 0x18) = 0x40100000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40900000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x194b9c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x194b9c);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x194b9c);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7.piece<0,4>() = iVar4 + auVar9.piece<0,4>();
    auVar7.piece<8,8>() = in_vs39.piece<8,8>();
    auVar7.piece<4,4>() = iVar10 + auVar9.piece<4,4>();
    auVar16.piece<0,8>() = auVar7.piece<0,8>();
    auVar16.piece<8,4>() = iVar11 + auVar9.piece<8,4>();
    auVar16.piece<12,4>() = iVar12 + auVar9.piece<12,4>();
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8.piece<0,4>();
    iVar10 = iVar10 + auVar8.piece<4,4>();
    iVar11 = iVar11 + auVar8.piece<8,4>();
    iVar12 = iVar12 + auVar8.piece<12,4>();
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x3fe00000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40100000;
  *(undefined4 *)(uVar1 + 0x38) = 0x40100000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x3fe00000;
  return;
}


// 0x0194cd0 (0x2f8 bytes)
/* Moby 1038 */

void UpdateMoby_1038(MobyInstance *moby)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  MobyInstance *pMVar6;
  float *ip;
  double dVar7;
  
  pvVar2 = moby->pVar;
  if (moby->state == 0) {
    if (((*(uint *)(&g_LevelObjBits +
                   Level * 0x100 + (int)((longlong)((int)(short)moby->uid >> 5) << 2)) &
         1 << (moby->uid & 0x1f)) == 0) ||
       ((Level == Orxon && (g_LevelFlags[10][(byte)moby->levelFlagIdx] != -1)))) {
      pMVar6 = CreateMoby(ENERGY_SPHERE_0410);
      pMVar6->updateDistance = '@';
      pMVar6->drawDistance = 0x40;
      pMVar6->enabled = '\x01';
      uVar3 = moby->light;
      pMVar6->color = moby->color;
      pMVar6->light = uVar3;
      pMVar6->modeBits = moby->modeBits | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
      (pMVar6->pos).x = (moby->pos).x;
      (pMVar6->pos).y = (moby->pos).y;
      (pMVar6->pos).z = (moby->pos).z;
      (pMVar6->pos).w = (moby->pos).w;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).x = (float)dVar7;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).y = (float)dVar7;
      dVar7 = (double)MB_randRot();
      (pMVar6->rotation).z = (float)dVar7;
      (pMVar6->pos).z = (pMVar6->pos).z + 0.85;
      *(MobyInstance **)((int)pvVar2 + 0x40) = pMVar6;
      moby->state = '\x01';
      M1038_00194ba8(moby);
      uVar1 = moby->uid;
      iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar3 = *(uint *)(&g_CheckpointBits + iVar4);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar5) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar5) & ~(1 << (uVar1 & 0x1f));
      *(uint *)(&g_CheckpointBits + iVar4) = uVar3 & ~(1 << (uVar1 & 0x1f));
    }
    else {
      moby->state = '\x02';
      moby->setByGroup = '\x01';
    }
  }
  else if (moby->state < 2) {
    ip = (float *)MB_damage(moby,0x330000,0);
    if (ip != (float *)0x0) {
      CollDamageMobyDirect
                (1.0,*(MobyInstance **)((int)pvVar2 + 0x40),(MobyInstance *)ip[8],0x10000,
                 (int)*(MobyInstance **)((int)pvVar2 + 0x40),ip,ip + 4);
      moby->damage = -1;
    }
    if (*(byte *)(*(int *)((int)pvVar2 + 0x40) + 0x20) < 0x80) {
      M1038_00194678(moby);
    }
    else {
      uVar1 = moby->uid;
      moby->setByGroup = '\x01';
      moby->state = '\x02';
      iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar3 = *(uint *)(&g_CheckpointBits + iVar4);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar5) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar5) | 1 << (uVar1 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar4) = uVar3 | 1 << (uVar1 & 0x1f);
    }
  }
  return;
}


