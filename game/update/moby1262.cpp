// game/update/moby1262.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x22caa0-0x22fca0
#include <stdlib.h>
#include "game/update/moby1262.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x022caa0 (0x14 bytes)
void M1262_0022caa0(void)

{
  DAT_00775158 = 0x10000;
  return;
}


// 0x022cae8 (0x344 bytes)
// inlined: FastRSqrt @0x22cbc0
void M1262_0022cae8(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined8 in_LR;
  double dVar7;
  double dVar8;
  double dVar9;
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
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  dVar21 = 0.5;
  uVar2 = *(uint *)(param_1 + 0x78);
  GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar22 = 0.0;
  dVar7 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                  g_CollOutput.normal.x * g_CollOutput.normal.x +
                  g_CollOutput.normal.y * g_CollOutput.normal.y);
  if ((float)SQRT(dVar7) == 0.0) {
    *(float *)(uVar2 + 0x200) = g_CollOutput.normal.x;
    *(float *)(uVar2 + 0x204) = g_CollOutput.normal.y;
    *(float *)(uVar2 + 0x208) = g_CollOutput.normal.z;
    fVar1 = g_CollOutput.normal.w;
    *(undefined4 *)(uVar2 + 0x208) = 0;
    *(undefined4 *)(uVar2 + 0x204) = 0;
    *(undefined4 *)(uVar2 + 0x200) = 0;
  }
  else {
    dVar13 = 1.0 / SQRT(dVar7);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar21 * dVar13) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar21 * dVar13) + dVar13);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                    (double)(float)(dVar21 * dVar13) + dVar13);
    *(float *)(uVar2 + 0x200) = g_CollOutput.normal.x * fVar1;
    *(float *)(uVar2 + 0x204) = g_CollOutput.normal.y * fVar1;
    *(float *)(uVar2 + 0x208) = g_CollOutput.normal.z * fVar1;
    fVar1 = g_CollOutput.normal.w;
  }
  *(float *)(uVar2 + 0x20c) = fVar1;
  GetBonePosition(param_1,0,(ulonglong)uVar2 + 0x1f0);
  dVar7 = 0.01745329238474369;
  dVar13 = 0.0625;
  iVar6 = 0;
  dVar14 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar16 = -3.141592502593994;
  dVar17 = -0.16666656732559204;
  dVar18 = 0.008333025500178337;
  dVar19 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  do {
    dVar10 = (double)(float)((double)DAT_007751a4 * dVar7);
    dVar8 = (double)FastIntToDouble(iVar6);
    fVar1 = (float)(dVar10 * (double)(float)(dVar8 * dVar13 - dVar21));
    dVar11 = (double)fVar1;
    dVar8 = (double)FastWrapRot(fVar1,*(float *)(param_1 + 0x48));
    dVar10 = (double)(float)(dVar8 + dVar14);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar12 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar12 = dVar8;
    }
    dVar8 = (double)(float)(dVar12 * dVar12);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar12));
    dVar10 = (double)(float)(dVar8 * dVar9);
    dVar12 = (double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                            (double)(float)(dVar10 * dVar19 +
                                           (double)(float)(dVar9 * dVar18 +
                                                          (double)(float)((double)(float)(dVar8 * 
                                                  dVar12) * dVar17 + dVar12))));
    dVar10 = (double)FastWrapRot((float)dVar11,*(float *)(param_1 + 0x48));
    iVar4 = iVar6 * 0x10;
    pfVar5 = (float *)(iVar4 + uVar2 + 0x210);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar11 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar11 = dVar8;
    }
    dVar8 = (double)(float)(dVar11 * dVar11);
    *pfVar5 = (float)(dVar12 * dVar21 + (double)*(float *)(uVar2 + 0x1f0));
    dVar12 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
    dVar10 = (double)(float)(dVar8 * dVar12);
    pfVar5[1] = (float)((double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                                       (double)(float)(dVar10 * dVar19 +
                                                      (double)(float)(dVar12 * dVar18 +
                                                                     (double)(float)((double)(float)
                                                  (dVar8 * dVar11) * dVar17 + dVar11)))) * dVar21 +
                       (double)*(float *)(uVar2 + 500));
    pfVar5[2] = *(float *)(uVar2 + 0x1f8);
    pfVar5[3] = *(float *)(uVar2 + 0x1fc);
    dVar8 = dVar22;
    if ((iVar6 != 0) && (iVar6 != 0xf)) {
      dVar8 = 1.0;
    }
    iVar6 = iVar6 + 1;
    *(float *)(iVar4 + uVar2 + 0x21c) = (float)dVar8;
  } while (iVar6 < 0x10);
  auVar25 = ZEXT416(0xffffffff);
  auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
  auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
  auVar25 = loadVectorLeftIndexed(0x51a8,0x770000);
  auVar24 = loadVectorLeftIndexed(in_LR,0x22cab8);
  auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar25 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar25 = vectorAddFloatingPoint
                      (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar26);
  auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
  auVar25 = vectorConvertFromSignedFixedPointWord(auVar25,0);
  auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1fc,
                     (ulonglong)uVar2);
  *(undefined4 *)(uVar2 + 0x1fc & 0xfffffffc) = uVar3;
  return;
}


// 0x022ce50 (0x4d0 bytes)
void M1262_0022ce50(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<32> local_b0;
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = 0;
  dVar8 = 0.0;
  dVar9 = 1.0;
  do {
    uVar1 = (int)*(uint *)(iVar6 + 0x21c) >> 0x1f;
    if (((0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x21c)) - uVar1)) ||
        (uVar1 = (int)*(uint *)(iVar6 + 0x22c) >> 0x1f,
        0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x22c)) - uVar1))) &&
       (dVar7 = (double)MB_randRangeFloat((float)dVar8,(float)dVar9),
       dVar7 <= (double)DAT_00775224)) {
      MB_randRot();
      MB_randRot();
      MB_randRangeFloat(DAT_00775214,DAT_00775218);
      MB_randRangeFloat(DAT_00775214,DAT_00775218);
      MB_randRangeFloat(DAT_00775214,DAT_00775218);
      MB_randRangeFloat(DAT_00775214,DAT_00775218);
      MB_randRangeFloat(DAT_0077521c,DAT_00775220);
      MB_randRangeFloat(DAT_0077521c,DAT_00775220);
      dVar7 = (double)MB_randRangeFloat(DAT_007751fc,DAT_00775200);
      uVar2 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat(DAT_00775204,DAT_00775208);
      uVar3 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat(DAT_0077520c,DAT_00775210);
      uVar4 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      SpawnPart_2(local_d0,local_c0,local_b0,DAT_007751ec,DAT_007751f0,uVar2,uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar5 < 0xf);
  return;
}


// 0x022d358 (0x568 bytes)
void M1262_0022d358(MobyInstance *param_1)

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
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  double extraout_f1;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f24;
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
  ulonglong in_f31;
  double dVar38;
  GPiece<16> auVar39;
  float fVar40;
  
  uVar17 = ZEXT48(&stack0x00000000);
  puVar14 = (ulonglong *)(uVar17 - 0x160);
  *puVar14 = uVar17;
  puVar14[0x2e] = in_LR;
  puVar14[0x24] = in_f24;
  puVar14[0x25] = in_f25;
  puVar14[0x26] = in_f26;
  puVar14[0x27] = in_f27;
  puVar14[0x28] = in_f28;
  puVar14[0x29] = in_f29;
  puVar14[0x2a] = in_f30;
  puVar14[0x2b] = in_f31;
  puVar14[0x23] = unaff_r31;
  puVar14[0x22] = unaff_r30;
  pvVar11 = param_1->pVar;
  uVar22 = ZEXT48(pvVar11);
  puVar14[0x21] = unaff_r29;
  puVar14[0x20] = unaff_r28;
  puVar14[0x1f] = unaff_r27;
  puVar14[0x1e] = unaff_r26;
  puVar14[0x1d] = unaff_r25;
  uVar18 = FastDoubleToInt((double)*(float *)((int)pvVar11 + 0x1fc));
  *(undefined4 *)(puVar14 + 0x1c) = uVar18;
  FastDecTimerS32(uVar17 - 0x80);
  iVar21 = *(int *)(puVar14 + 0x1c);
  auVar39 = loadVectorLeftIndexed(0xe0,uVar17 - 0x160);
  auVar39 = vectorConvertFromSignedFixedPointWord(auVar39,0);
  auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar18 = storeVectorElementWordIndexed
                     (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1fc,uVar22);
  *(undefined4 *)((int)pvVar11 + 0x1fcU & 0xfffffffc) = uVar18;
  if (iVar21 != 0) {
    if (iVar21 == 0x14) {
      iVar21 = 0;
      uVar20 = uVar22;
      do {
        uVar12 = *(uint *)((int)uVar20 + 0x21c);
        uVar13 = (int)uVar12 >> 0x1f;
        if (0x3f7fffff < (int)((uVar13 >> 1 ^ uVar12) - uVar13)) {
          *(undefined4 *)((int)uVar20 + 0x21c) = 0x3f7ae148;
        }
        iVar21 = iVar21 + 1;
        uVar20 = uVar20 + 0x10;
      } while (iVar21 < 0x10);
    }
    iVar21 = 0;
    dVar32 = 0.0;
    dVar33 = 0.3499999940395355;
    dVar38 = 1.0;
    dVar34 = 3.0;
    dVar35 = 4.0;
    dVar36 = 2.0;
    uVar20 = uVar22;
    do {
      iVar15 = (int)uVar20;
      fVar1 = *(float *)(iVar15 + 0x210) - *(float *)((int)pvVar11 + 0x1f0);
      *(float *)(puVar14 + 0xe) = fVar1;
      fVar5 = *(float *)(iVar15 + 0x214) - *(float *)((int)pvVar11 + 500);
      fVar40 = DAT_007751a0 * g_FrameTime;
      *(float *)((int)puVar14 + 0x74) = fVar5;
      dVar27 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5);
      *(float *)(puVar14 + 0xf) = *(float *)(iVar15 + 0x218) - *(float *)((int)pvVar11 + 0x1f8);
      uVar18 = *(undefined4 *)(iVar15 + 0x21c);
      *(undefined4 *)(puVar14 + 0xf) = 0;
      *(undefined4 *)((int)puVar14 + 0x7c) = uVar18;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      fVar2 = (param_1->pos).y;
      fVar3 = (param_1->pos).x;
      fVar4 = (param_1->pos).z;
      fVar40 = (float)((double)fVar40 / dVar27);
      dVar23 = (double)(fVar1 * fVar40);
      dVar25 = (double)(fVar5 * fVar40);
      dVar37 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar37 = dVar23;
      }
      dVar26 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar26 = dVar25;
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar37 = dVar23;
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar26 = dVar25;
      }
      *(float *)(puVar14 + 0xe) = (float)dVar37;
      *(float *)((int)puVar14 + 0x74) = (float)dVar26;
      fVar40 = (float)((double)*(float *)(iVar15 + 0x210) + dVar37);
      *(float *)(puVar14 + 0xe) = fVar40;
      fVar1 = (float)((double)*(float *)(iVar15 + 0x214) + dVar26);
      *(float *)((int)puVar14 + 0x74) = fVar1;
      fVar5 = *(float *)(iVar15 + 0x218);
      *(float *)(puVar14 + 0xf) = fVar5;
      *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)(iVar15 + 0x21c);
      fVar6 = *(float *)((int)pvVar11 + 0x204);
      fVar7 = *(float *)((int)pvVar11 + 0x200);
      fVar8 = *(float *)((int)pvVar11 + 0x208);
      dVar25 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(iVar15 + 0x210);
      *(undefined4 *)((int)puVar14 + 0x84) = *(undefined4 *)(iVar15 + 0x214);
      fVar9 = *(float *)(iVar15 + 0x218);
      *(float *)(puVar14 + 0x11) = fVar9;
      *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)(iVar15 + 0x21c);
      *(float *)(puVar14 + 0x11) = (float)((double)fVar9 + dVar38);
      *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(iVar15 + 0x210);
      *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)(iVar15 + 0x214);
      fVar9 = *(float *)(iVar15 + 0x218);
      *(float *)(puVar14 + 0x13) = fVar9;
      *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)(iVar15 + 0x21c);
      *(float *)(puVar14 + 0x13) = (float)((double)fVar9 - dVar34);
      dVar23 = (double)(fVar8 * (float)((double)(float)(-(double)((fVar5 - fVar4) * fVar8 +
                                                                 (fVar40 - fVar3) * fVar7 +
                                                                 (fVar1 - fVar2) * fVar6) + dVar33)
                                       / dVar25));
      dVar37 = dVar32;
      if (dVar32 - dVar25 < 0.0) {
        dVar37 = dVar23;
      }
      if (dVar25 - dVar32 < 0.0) {
        dVar37 = dVar23;
      }
      iVar19 = CollLine(uVar17 - 0xe0,uVar17 - 0xd0,2,0,0);
      dVar23 = extraout_f1;
      if (iVar19 != 0) {
        dVar23 = (double)*(float *)(puVar14 + 0xf);
        if (dVar37 < dVar23) {
          fVar40 = Delt((float)((double)g_CollOutput.ip.z + dVar33),
                                  (float)((double)g_FrameTime * dVar35),
                                  (float *)(puVar14 + 0xf));
          dVar23 = (double)fVar40;
        }
      }
      uVar12 = (int)*(uint *)(iVar15 + 0x21c) >> 0x1f;
      if (((int)((uVar12 >> 1 ^ *(uint *)(iVar15 + 0x21c)) - uVar12) < 0x3f800000) ||
         (iVar19 = CollLine(dVar23,uVar20 + 0x210,uVar17 - 0xf0,2,0,0), iVar19 == 0)) {
        uVar12 = (int)*(uint *)((int)puVar14 + 0x7c) >> 0x1f;
        if ((int)((uVar12 >> 1 ^ *(uint *)((int)puVar14 + 0x7c)) - uVar12) < 0x3f800000) {
          Delt((float)dVar32,(float)((double)g_FrameTime * dVar36),
                         (float *)((int)puVar14 + 0x7c));
        }
      }
      else {
        *(undefined4 *)((int)puVar14 + 0x7c) = 0x3f7ae148;
      }
      iVar21 = iVar21 + 1;
      *(undefined4 *)(iVar15 + 0x210) = *(undefined4 *)(puVar14 + 0xe);
      *(undefined4 *)(iVar15 + 0x214) = *(undefined4 *)((int)puVar14 + 0x74);
      *(undefined4 *)(iVar15 + 0x218) = *(undefined4 *)(puVar14 + 0xf);
      *(undefined4 *)(iVar15 + 0x21c) = *(undefined4 *)((int)puVar14 + 0x7c);
      uVar20 = uVar20 + 0x10;
    } while (iVar21 < 0x10);
    iVar21 = 0;
    dVar32 = 1.570796251296997;
    dVar33 = 3.141592502593994;
    dVar34 = -3.141592502593994;
    dVar35 = -0.16666656732559204;
    dVar36 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar23 = 2.601886990305502e-06;
    do {
      uVar12 = *(uint *)((int)uVar22 + 0x21c);
      uVar13 = (int)uVar12 >> 0x1f;
      if (0x3f7ae147 < (int)((uVar13 >> 1 ^ uVar12) - uVar13)) {
        uVar12 = *(uint *)((int)uVar22 + 0x22c);
        uVar13 = (int)uVar12 >> 0x1f;
        uVar16 = uVar13 >> 1;
        if (0x3f7ae147 < (int)((uVar16 ^ uVar12) - uVar13)) {
          dVar27 = (double)(param_1->rotation).z;
          dVar26 = (double)(float)(dVar27 + dVar32);
          *(undefined4 *)(puVar14 + 0x15) = 0x3f800000;
          *(undefined4 *)((int)puVar14 + 0xac) = 0x45afdf66;
          dVar25 = (double)(float)(dVar33 - dVar27);
          if (dVar27 - (double)(float)(dVar33 - dVar27) < 0.0) {
            dVar25 = dVar27;
          }
          dVar28 = (double)(float)(dVar33 - dVar26);
          if (dVar26 - (double)(float)(dVar33 - dVar26) < 0.0) {
            dVar28 = dVar26;
          }
          dVar24 = (double)(float)(dVar34 - dVar27);
          if ((double)(float)(dVar34 - dVar27) - dVar25 < 0.0) {
            dVar24 = dVar25;
          }
          dVar25 = (double)(float)(dVar34 - dVar26);
          if ((double)(float)(dVar34 - dVar26) - dVar28 < 0.0) {
            dVar25 = dVar28;
          }
          dVar27 = (double)(float)(dVar24 * dVar24);
          dVar26 = (double)(float)(dVar25 * dVar25);
          dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar24));
          dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar25));
          dVar29 = (double)(float)(dVar27 * dVar30);
          dVar31 = (double)(float)(dVar26 * dVar28);
          *(float *)((int)puVar14 + 0xa4) =
               (float)((double)(float)(dVar27 * dVar29) * dVar23 +
                      (double)(float)(dVar29 * dVar37 +
                                     (double)(float)(dVar30 * dVar36 +
                                                    (double)(float)((double)(float)(dVar27 * dVar24)
                                                                    * dVar35 + dVar24))));
          *(float *)(puVar14 + 0x14) =
               (float)((double)(float)(dVar26 * dVar31) * dVar23 +
                      (double)(float)(dVar31 * dVar37 +
                                     (double)(float)(dVar28 * dVar36 +
                                                    (double)(float)((double)(float)(dVar26 * dVar25)
                                                                    * dVar35 + dVar25))));
          SetCollDamIn(dVar38,uVar17 - 0xb0,param_1,0x10001,uVar16,uVar17 - 0xc0);
          *(undefined1 *)(puVar14 + 0x19) = 0;
          MVar10 = param_1->oClass;
          *(undefined1 *)((int)puVar14 + 0xc9) = 1;
          *(MOBY_OCLASSES *)((int)puVar14 + 0xca) = MVar10;
          CollLine(uVar22 + 0x210,uVar22 + 0x220,0,param_1,uVar17 - 0xb0);
        }
      }
      iVar21 = iVar21 + 1;
      uVar22 = uVar22 + 0x10;
    } while (iVar21 < 0xf);
    RegisterFuncForMoby(&PTR_M1393_0022fcb8_007099e8,param_1);
    M1262_0022ce50(param_1);
  }
  return;
}


// 0x022d900 (0xbf8 bytes)
// inlined: FastAtan2 @0x22db94, FastAtan2 @0x22dda8, FastAtan2 @0x22e204
void M1262_0022d900(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyClass *pMVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  f32 fVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  longlong lVar16;
  longlong lVar17;
  longlong lVar21;
  float *pfVar25;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar14 = (ulonglong *)lVar17;
  *puVar14 = uVar15;
  puVar14[0x30] = in_LR;
  puVar14[0x2b] = in_f29;
  puVar14[0x2c] = in_f30;
  puVar14[0x2d] = in_f31;
  puVar14[0x2a] = unaff_r31;
  pMVar7 = param_1->pClass;
  puVar14[0x29] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar26 = ZEXT48(pvVar8);
  fVar5 = pMVar7->gScale * DAT_0077517c;
  puVar14[0x28] = unaff_r29;
  param_1->scale = fVar5;
  M1262_0022d358(param_1);
  if (*(int *)((int)pvVar8 + 0x38) != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,240.0);
    uVar18 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x184) = uVar18;
    *(undefined4 *)((int)pvVar8 + 0x38) = 0;
  }
  FastDecTimerS32(uVar26 + 0x184);
  dVar28 = 0.0;
  *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  iVar19 = MB_damage(param_1,0x330000,0);
  iVar20 = MB_HandleDamage
                     (param_1,iVar19,uVar26 + 0x20,0,puVar14 + 0x18,(int)puVar14 + 0xc4,0,4);
  if ((*(int *)(puVar14 + 0x18) != 1) && (param_1->state != '\x10')) {
    if ((iVar19 != 0) &&
       ((*(int *)(iVar19 + 0x20) != 0 && (*(short *)(*(int *)(iVar19 + 0x20) + 0xa6) == 0x4ee)))) {
      *(undefined4 *)((int)puVar14 + 0xc4) = 0;
    }
    fVar5 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar14 + 0xc4);
    *(float *)((int)pvVar8 + 0x20) = fVar5;
    if ((double)fVar5 <= dVar28) {
      iVar20 = 1;
    }
    *(undefined4 *)((int)pvVar8 + 0x80) = 0x2cd;
    *(undefined4 *)((int)pvVar8 + 0x88) = 0x3f333333;
    if (iVar20 < 3) {
      if ((-1 < iVar20) && (0 < iVar20)) {
        param_1->state = '\x10';
        fVar2 = g_FrameTime;
        fVar5 = DAT_0077518c * g_FrameTime;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar8 + 0x78) = fVar5;
        fVar5 = DAT_00775190;
        *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41100000;
        *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41880000;
        *(float *)((int)pvVar8 + 0x7c) = fVar5 * fVar2;
        uVar9 = *(uint *)(iVar19 + 0x10);
        uVar10 = *(uint *)(iVar19 + 0x14);
        dVar31 = ABS((double)*(float *)(iVar19 + 0x10));
        dVar30 = ABS((double)*(float *)(iVar19 + 0x14));
        *(float *)(puVar14 + 0x1a) = (float)(dVar31 - dVar30);
        uVar22 = (ulonglong)(uVar9 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1a) >> 0x1e) & 2 |
                 (ulonglong)(uVar10 >> 0x1d) & 4;
        uVar23 = uVar22 << 2;
        dVar37 = dVar31;
        if ((double)*(float *)(puVar14 + 0x1a) - dVar28 < 0.0) {
          dVar37 = dVar30;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)uVar23);
        if ((double)*(float *)(puVar14 + 0x1a) - dVar28 < 0.0) {
          dVar30 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar31 = dVar28;
        if (dVar28 < dVar37) {
          lVar16 = uVar15 - 0x160;
          lVar21 = uVar15 - 0x78;
          lVar24 = uVar15 - 0x68;
          lVar27 = 2;
          fVar6 = (float)(dVar30 - dVar37) / (float)(dVar30 + dVar37);
          fVar1 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x104) = fVar6;
          *(float *)((int)puVar14 + 0xfc) = fVar6;
          *(float *)(puVar14 + 0x20) = fVar6;
          *(float *)(puVar14 + 0x1f) = fVar6;
          fVar6 = fVar1 * fVar1;
          *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar1;
          *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar6;
          *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar6 * fVar1;
          do {
            *(float *)((int)lVar16 + 0xf8) = *(float *)((int)lVar16 + 0xe8) * fVar6 * fVar6;
            iVar19 = (int)lVar21;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar15 - 0x78;
          uVar23 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar21 = lVar24;
          do {
            pfVar25 = (float *)uVar23;
            fVar6 = pfVar25[1];
            uVar23 = uVar23 + 8;
            *(float *)((int)lVar16 + 0xf8) = *(float *)((int)lVar16 + 0xf8) * *pfVar25;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar21 = 2;
          lVar16 = lVar17;
          dVar30 = dVar28;
          do {
            iVar19 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar20 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar19 + 0xf8)) +
                              *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                             *(float *)(iVar20 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar2);
        }
        MB_StartKick(dVar31,param_1,uVar26 + 0x60,uVar23,8,1,0);
        *(undefined1 *)((int)pvVar8 + 0x117) = 0xfa;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar20 < 0xb) {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      param_1->state = '\x0f';
      fVar2 = g_FrameTime;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0xc,0x22d8c0);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      fVar5 = DAT_00775184 * g_FrameTime;
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x26,uVar26);
      *(undefined2 *)((int)pvVar8 + 0x26) = uVar13;
      *(float *)((int)pvVar8 + 0x78) = fVar5;
      fVar5 = DAT_00775188;
      *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41000000;
      *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41700000;
      *(float *)((int)pvVar8 + 0x7c) = fVar5 * fVar2;
      uVar9 = *(uint *)(iVar19 + 0x10);
      uVar10 = *(uint *)(iVar19 + 0x14);
      dVar31 = ABS((double)*(float *)(iVar19 + 0x10));
      dVar30 = ABS((double)*(float *)(iVar19 + 0x14));
      *(float *)((int)puVar14 + 0xd4) = (float)(dVar31 - dVar30);
      uVar22 = (ulonglong)(uVar9 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)(uVar10 >> 0x1d) & 4;
      uVar23 = uVar22 << 2;
      dVar37 = dVar31;
      if ((double)*(float *)((int)puVar14 + 0xd4) - dVar28 < 0.0) {
        dVar37 = dVar30;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)uVar23);
      if ((double)*(float *)((int)puVar14 + 0xd4) - dVar28 < 0.0) {
        dVar30 = dVar31;
      }
      fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar31 = dVar28;
      if (dVar28 < dVar37) {
        lVar16 = uVar15 - 0x160;
        lVar24 = uVar15 - 0x48;
        lVar21 = uVar15 - 0x58;
        lVar27 = 2;
        fVar6 = (float)(dVar30 - dVar37) / (float)(dVar30 + dVar37);
        fVar1 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x124) = fVar6;
        *(float *)((int)puVar14 + 0x11c) = fVar6;
        *(float *)(puVar14 + 0x24) = fVar6;
        *(float *)(puVar14 + 0x23) = fVar6;
        fVar6 = fVar1 * fVar1;
        *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar1;
        *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar6;
        *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar6 * fVar1;
        do {
          *(float *)((int)lVar16 + 0x118) = *(float *)((int)lVar16 + 0x108) * fVar6 * fVar6;
          iVar19 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar15 - 0x58;
        uVar23 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar21 = lVar24;
        do {
          pfVar25 = (float *)uVar23;
          fVar6 = pfVar25[1];
          uVar23 = uVar23 + 8;
          *(float *)((int)lVar16 + 0x118) = *(float *)((int)lVar16 + 0x118) * *pfVar25;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar21 = 2;
        lVar16 = lVar17;
        dVar30 = dVar28;
        do {
          iVar19 = (int)lVar16;
          iVar20 = (int)lVar24;
          lVar16 = lVar16 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar19 + 0x118)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar2);
      }
      MB_StartKick(dVar31,param_1,uVar26 + 0x60,uVar23,7,1,0);
      *(undefined1 *)((int)pvVar8 + 0x117) = 0xfa;
    }
    MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar8 + 0x184) == 0) {
    uVar18 = *(undefined4 *)((int)pvVar8 + 0x19c);
  }
  else {
    uVar18 = *(undefined4 *)((int)pvVar8 + 0x1a0);
  }
  *(undefined4 *)((int)pvVar8 + 400) = uVar18;
  pSVar12 = Splines[*(int *)((int)pvVar8 + 0x180)];
  iVar19 = MB_getTargetInArea
                     (param_1,uVar26 + 0x120,pSVar12,0,0,pSVar12->points,pSVar12->cnt);
  if (iVar19 != 2) {
    fVar5 = *(float *)((int)pvVar8 + 0x174) - *(float *)((int)pvVar8 + 0x124);
    fVar2 = *(float *)((int)pvVar8 + 0x170) - *(float *)((int)pvVar8 + 0x120);
    if ((*(float *)((int)pvVar8 + 400) < SQRT(fVar2 * fVar2 + fVar5 * fVar5)) ||
       (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0x128)))) {
      *(undefined4 *)((int)pvVar8 + 0x164) = 2;
    }
    if ((*(int *)((int)pvVar8 + 0x1a4) == -1) ||
       (iVar19 = MB_IsPntInCuboid
                           ((Vec4 *)((int)pvVar8 + 0x120),(longlong)*(int *)((int)pvVar8 + 0x1a4)),
       iVar19 != 0)) {
      *(undefined4 *)((int)pvVar8 + 0x1a4) = 0xffffffff;
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0x164) = 2;
    }
  }
  if (*(int *)((int)pvVar8 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar8 + 0x160) = g_heroMobyPtr;
  }
  dVar30 = (double)GetGroundZ(0x3fe0000000000000,&param_1->pos,0);
  if (dVar30 == dVar28) {
    dVar37 = (double)(param_1->pos).z;
    if (param_1->state < 0xf) {
      fVar5 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar8 + 0x68));
      *(float *)((int)pvVar8 + 0x68) = fVar5;
      fVar5 = (param_1->pos).z + fVar5;
      dVar37 = (double)fVar5;
      (param_1->pos).z = fVar5;
    }
LAB_0022e43c:
    fVar11 = (param_1->pos).x;
    uVar9 = (int)fVar11 >> 0x1f;
    iVar19 = (uVar9 >> 1 ^ (uint)fVar11) - uVar9;
    if ((((iVar19 < 0x40000000) || (0x447f4000 < iVar19)) ||
        (fVar11 = (param_1->pos).y, uVar9 = (int)fVar11 >> 0x1f,
        iVar19 = (uVar9 >> 1 ^ (uint)fVar11) - uVar9, iVar19 < 0x40000000)) ||
       (((0x447f4000 < iVar19 || (dVar37 < 2.0)) || (1021.0 < dVar37)))) {
      DeleteMoby(param_1);
    }
  }
  else {
    iVar19 = CollHotspot();
    fVar6 = g_CollOutput.normal.z;
    dVar37 = (double)(param_1->pos).z;
    fVar5 = (param_1->pos).x;
    fVar2 = (param_1->pos).y;
    if (iVar19 < 4) {
      if (iVar19 < 2) {
        if (iVar19 < 0) {
LAB_0022e148:
          if (param_1->state < 0xf) {
            dVar35 = (double)g_CollOutput.normal.y;
            dVar34 = (double)g_CollOutput.normal.x;
            dVar33 = (double)g_CollOutput.normal.z;
            dVar32 = ABS(dVar33);
            dVar36 = (double)(float)(dVar34 * dVar34 + (double)(float)(dVar35 * dVar35));
            fVar1 = (float)SQRT(dVar36);
            dVar38 = ABS((double)fVar1);
            *(float *)(puVar14 + 0x19) = fVar1;
            *(float *)((int)puVar14 + 0xcc) = (float)(dVar32 - dVar38);
            uVar26 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0xcc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1d) & 4;
            dVar31 = dVar32;
            if ((double)*(float *)((int)puVar14 + 0xcc) - dVar28 < 0.0) {
              dVar31 = dVar38;
            }
            fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
            dVar38 = ABS((double)*(float *)(puVar14 + 0x19));
            if ((double)*(float *)((int)puVar14 + 0xcc) - dVar28 < 0.0) {
              dVar38 = dVar32;
            }
            fVar1 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
            dVar32 = dVar28;
            if (dVar28 < dVar31) {
              lVar16 = uVar15 - 0x160;
              lVar21 = uVar15 - 0x98;
              lVar24 = uVar15 - 0x88;
              lVar27 = 2;
              fVar3 = (float)(dVar38 - dVar31) / (float)(dVar38 + dVar31);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar14 + 0xe4) = fVar3;
              *(float *)((int)puVar14 + 0xdc) = fVar3;
              *(float *)(puVar14 + 0x1c) = fVar3;
              *(float *)(puVar14 + 0x1b) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar4;
              *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) * fVar3;
              *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar16 + 0xd8) = *(float *)((int)lVar16 + 200) * fVar3 * fVar3;
                iVar19 = (int)lVar21;
                lVar16 = lVar16 + 8;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
                lVar24 = lVar24 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar27 = 4;
              lVar24 = uVar15 - 0x98;
              pfVar25 = (float *)&DAT_007358e0;
              lVar16 = lVar17;
              lVar21 = lVar24;
              do {
                fVar3 = *pfVar25;
                fVar4 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar16 + 0xd8) = *(float *)((int)lVar16 + 0xd8) * fVar3;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
                lVar21 = lVar21 + 8;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
              lVar16 = 2;
              dVar31 = dVar28;
              do {
                iVar19 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                iVar20 = (int)lVar24;
                lVar24 = lVar24 + 0x10;
                dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0xd8)) +
                                  *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                                 *(float *)(iVar20 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar32 = (double)((float)(dVar31 + 0.7853981852531433) * fVar6 + fVar1);
            }
            if (0.6981316804885864 < dVar32) {
              dVar32 = (double)SQRT((float)(dVar33 * dVar33 + dVar36));
              dVar36 = (double)(float)(0.05000000074505806 / dVar32);
              dVar31 = dVar28;
              if (dVar28 - dVar32 < 0.0) {
                dVar31 = (double)(float)(dVar33 * dVar36);
              }
              dVar38 = dVar28;
              if (dVar28 - dVar32 < 0.0) {
                dVar38 = (double)(float)(dVar35 * dVar36);
              }
              dVar29 = dVar28;
              if (dVar28 - dVar32 < 0.0) {
                dVar29 = (double)(float)(dVar34 * dVar36);
              }
              if (dVar32 - dVar28 < 0.0) {
                dVar31 = (double)(float)(dVar33 * dVar36);
              }
              if (dVar32 - dVar28 < 0.0) {
                dVar38 = (double)(float)(dVar35 * dVar36);
              }
              if (dVar32 - dVar28 < 0.0) {
                dVar29 = (double)(float)(dVar34 * dVar36);
              }
              dVar31 = dVar37 + dVar31;
              dVar37 = (double)(float)dVar31;
              (param_1->pos).z = (float)dVar31;
              (param_1->pos).y = (float)((double)fVar2 + dVar38);
              (param_1->pos).x = (float)((double)fVar5 + dVar29);
            }
            if (dVar37 <= dVar30) {
              if (dVar37 < dVar30) {
                dVar28 = dVar37 + 0.05000000074505806;
                dVar37 = (double)(float)dVar28;
                (param_1->pos).z = (float)dVar28;
              }
            }
            else {
              fVar5 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar8 + 0x68));
              *(float *)((int)pvVar8 + 0x68) = fVar5;
              fVar5 = (param_1->pos).z + fVar5;
              dVar37 = (double)fVar5;
              (param_1->pos).z = fVar5;
              if (dVar37 < dVar30) {
                *(undefined4 *)((int)pvVar8 + 0x68) = 0;
                (param_1->pos).z = (float)dVar30;
                dVar37 = dVar30;
              }
            }
          }
          goto LAB_0022e43c;
        }
      }
      else if (iVar19 < 3) goto LAB_0022e148;
    }
    else if (iVar19 < 0xc) {
      if (iVar19 < 0xb) goto LAB_0022e148;
    }
    else if (iVar19 != 0xd) goto LAB_0022e148;
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    puVar14[0x12] = 0xffffffffffffffff;
    puVar14[0x14] = 1;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    MB_genericExplosion
              (dVar28,dVar28,0x4010000000000000,0x4000000000000000,0x4022000000000000,
               0x3ff0000000000000,0x402e000000000000,param_1,&DAT_007350c0,0,&DAT_0022d8c0,1,10,3,
               0x10);
    DeleteMoby(param_1);
  }
  return;
}


// 0x022e580 (0x1720 bytes)
/* Moby 1262 */

void UpdateMoby_1262(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  float fVar29;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  GPiece<16> local_180;
  GPiece<16> local_170;
  float local_160;
  float local_15c;
  undefined4 local_158;
  GPiece<16> auStack_150;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  GPiece<16> auStack_120;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  f32 local_f0;
  f32 local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  GPiece<16> auStack_c0;
  GPiece<24> auStack_b0;
  undefined1 local_98;
  undefined1 local_97;
  MOBY_OCLASSES local_96;
  GPiece<24> auStack_80;
  undefined1 local_68;
  undefined1 local_67;
  MOBY_OCLASSES local_66;
  longlong local_50;
  
  lVar13 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  uVar18 = ZEXT48(pvVar4);
  M1262_0022d900(lVar13);
  iVar5 = *(int *)((int)pvVar4 + 0x160);
  DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar4 + 0x400));
  if ((moby->enabled != '\0') &&
     (fVar29 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar29 * fVar29) < 28.0)) {
    MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x16';
  }
  bVar1 = moby->state;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->state = moby->setByGroup, moby->animationId != '\0')) {
        local_50 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 == 5) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
      fVar29 = OrganicDeltAng
                         ((float)dVar19,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar4 + 0x188));
      GetBonePosition((double)fVar29,lVar13,0,&local_190);
      dVar19 = (double)BlendAnimFrame(moby);
      if ((9.0 <= dVar19) && (dVar19 <= 15.0)) {
        SetCollDamIn(0x3ff0000000000000,auStack_b0,lVar13,1,&DAT_0022e4f8,local_170);
        local_96 = moby->oClass;
        local_98 = 0;
        local_97 = 1;
        MB_CollLineMulti
                  (&local_190,local_180,uVar18 + 0x1e0,local_180,lVar13,auStack_b0,5);
      }
      *(undefined4 *)((int)pvVar4 + 0x1e0) = local_190;
      *(undefined4 *)((int)pvVar4 + 0x1e4) = local_18c;
      *(undefined4 *)((int)pvVar4 + 0x1e8) = local_188;
      *(undefined4 *)((int)pvVar4 + 0x1ec) = local_184;
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x06';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x02') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 4) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
      fVar29 = OrganicDeltAng
                         ((float)dVar19,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar4 + 0x188));
      iVar15 = FastDecTimerS32((double)fVar29,uVar18 + 0x194);
      if (iVar15 == 0) {
        fVar29 = (moby->pos).y - *(float *)(iVar5 + 0x14);
        fVar3 = (moby->pos).x - *(float *)(iVar5 + 0x10);
        if (DAT_00775198 <= SQRT(fVar3 * fVar3 + fVar29 * fVar29)) {
          if ((*(int *)((int)pvVar4 + 0x184) != 0) &&
             (moby->state = '\v', moby->animationId != '\x01')) {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          GetBonePosition(lVar13,0,uVar18 + 0x1e0);
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        moby->state = '\x03';
        M1262_0022cae8(lVar13);
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 5.5));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((moby->field43_0x70 & 2U) != 0) {
        fVar29 = (moby->pos).y - *(float *)(iVar5 + 0x14);
        fVar3 = (moby->pos).x - *(float *)(iVar5 + 0x10);
        if ((*(int *)((int)pvVar4 + 0x164) == 2) || (15.0 <= SQRT(fVar3 * fVar3 + fVar29 * fVar29)))
        {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x04') {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
          }
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = loadVectorLeftIndexed(0x5194,0x770000);
          auVar25 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          auVar26 = loadVectorLeftIndexed(0x30,0x22e4f8);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar26 = vectorAddFloatingPoint
                              (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60
                              );
          auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
          auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x194,
                              uVar18);
          *(undefined4 *)((int)pvVar4 + 0x194U & 0xfffffffc) = uVar14;
        }
      }
    }
    else if (bVar1 == 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x03';
        M1262_0022cae8(lVar13);
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 1) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar19,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar4 + 0x188));
      if (*(int *)((int)pvVar4 + 0x164) == 2) {
        if ((*(int *)((int)pvVar4 + 0x184) != 0) &&
           (moby->state = '\v', moby->animationId != '\x01')) {
          local_50 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        fVar29 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar6 = fVar29 - *(float *)(iVar5 + 0x14);
        fVar8 = fVar3 - *(float *)(iVar5 + 0x10);
        dVar19 = (double)SQRT(fVar8 * fVar8 + fVar6 * fVar6);
        if (dVar19 <= (double)DAT_00775198) {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          dVar24 = (double)(moby->rotation).z;
          dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - fVar3),
                                        (double)(*(float *)(iVar5 + 0x14) - fVar29));
          dVar20 = (double)FastSubRots((float)dVar24,(float)dVar20);
          if ((0.2617993950843811 <= dVar20) || (15.0 <= dVar19)) {
            moby->state = '\a';
            if (moby->animationId != '\x01') {
              local_50 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
            }
          }
          else {
            moby->state = '\x02';
            if (moby->animationId != '\x03') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x40000000;
      *(undefined2 *)((int)pvVar4 + 0x24) = 2;
      *(undefined1 *)((int)pvVar4 + 0x28) = 1;
      *(undefined4 *)((int)pvVar4 + 0x30) = 0x3fc00000;
      *(undefined1 *)((int)pvVar4 + 0x5a) = 8;
      *(undefined1 *)((int)pvVar4 + 0x58) = 0xc;
      MB_InitDefaultParams((float *)((int)pvVar4 + 0xc0));
      *(undefined4 *)((int)pvVar4 + 200) = 0x40000000;
      *(undefined4 *)((int)pvVar4 + 0xcc) = 0x3f000000;
      uVar14 = FastDoubleToInt((double)(DAT_0077517c * 716.8));
      *(undefined4 *)((int)pvVar4 + 0xc0) = uVar14;
      *(float *)((int)pvVar4 + 0xc4) = DAT_0077517c * 0.7;
      dVar19 = (double)MB_randRangeFloat(0.95,1.05);
      *(float *)((int)pvVar4 + 0xe4) =
           (float)((double)(DAT_0077519c * g_FrameTime) * dVar19);
      *(f32 *)((int)pvVar4 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x174) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x178) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x17c) = (moby->pos).w;
      GetBonePosition(lVar13,0,uVar18 + 0x1e0);
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 0x10) {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x60));
    if ((uVar16 & 0x160) != 0) {
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar13,uVar18 + 0x60,0,1,0xffffffffffffffff,10,3,0x10);
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 0xf) {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x60));
    if ((uVar16 & 0x40) == 0) {
      if ((uVar16 & 0x120) != 0) {
        DeleteMoby(moby);
      }
    }
    else {
      *(undefined1 *)((int)pvVar4 + 0x60) = 0;
      *(undefined1 *)((int)pvVar4 + 0x61) = 0;
      *(undefined1 *)((int)pvVar4 + 0x62) = 0;
      *(undefined1 *)((int)pvVar4 + 99) = 0;
      *(undefined1 *)((int)pvVar4 + 100) = 0;
      *(undefined1 *)((int)pvVar4 + 0x65) = 0;
      *(undefined1 *)((int)pvVar4 + 0x66) = 0;
      *(undefined1 *)((int)pvVar4 + 0x67) = 0;
      *(undefined1 *)((int)pvVar4 + 0x68) = 0;
      *(undefined1 *)((int)pvVar4 + 0x69) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6a) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6b) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6c) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6d) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6e) = 0;
      *(undefined1 *)((int)pvVar4 + 0x6f) = 0;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar4 + 0x174) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar18 + 0x188);
    dVar20 = (double)(moby->rotation).z;
    fVar29 = (float)(dVar20 + 1.570796251296997);
    dVar19 = (double)(float)(3.141592502593994 - dVar20);
    if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
      dVar19 = dVar20;
    }
    fVar3 = 3.1415925 - fVar29;
    if (fVar29 - (3.1415925 - fVar29) < 0.0) {
      fVar3 = fVar29;
    }
    dVar24 = (double)(float)(-3.141592502593994 - dVar20);
    if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
      dVar24 = dVar19;
    }
    fVar6 = -3.1415925 - fVar29;
    if ((-3.1415925 - fVar29) - fVar3 < 0.0) {
      fVar6 = fVar3;
    }
    dVar19 = (double)(float)(dVar24 * dVar24);
    fVar8 = fVar6 * fVar6;
    dVar23 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar24));
    fVar29 = fVar8 * fVar8 * fVar6;
    dVar22 = (double)(float)(dVar19 * dVar23);
    local_c8 = 0;
    fVar3 = fVar8 * fVar29;
    local_cc = ((float)(dVar19 * dVar22) * 2.601887e-06 +
               (float)(dVar22 * -0.0001980741071747616 +
                      (double)(float)(dVar23 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar19 * dVar24) *
                                                     -0.16666656732559204 + dVar24)))) * 2.0;
    local_d0 = (fVar8 * fVar3 * 2.601887e-06 +
               fVar3 * -0.0001980741 + fVar29 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6)
               * 2.0;
    dVar19 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x170) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar4 + 0x174) - (moby->pos).y));
    dVar19 = (double)FastSubRots((float)dVar20,(float)dVar19);
    if (dVar19 < 0.7853981852531433) {
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0xc0),&local_d0,auStack_c0);
      MB_PushOutOfSplineWalls(0x3fe8000000000000,*(undefined4 *)((int)pvVar4 + 0x198));
    }
    fVar29 = *(float *)((int)pvVar4 + 0x174) - (moby->pos).y;
    fVar3 = *(float *)((int)pvVar4 + 0x170) - (moby->pos).x;
    fVar6 = *(float *)((int)pvVar4 + 0x178) - (moby->pos).z;
    if ((SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar29 * fVar29) < 1.0) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xc) {
    GetBonePosition(lVar13,0,&local_100);
    local_f0 = (moby->pos).x;
    local_ec = (moby->pos).y;
    local_e4 = (moby->pos).w;
    local_e8 = (moby->pos).z + 1.5;
    dVar19 = (double)BlendAnimFrame(moby);
    if ((9.0 <= dVar19) && (dVar19 <= 15.0)) {
      fVar29 = (moby->rotation).z;
      fVar3 = fVar29 + 1.5707963;
      fVar6 = 3.1415925 - fVar29;
      if (fVar29 - (3.1415925 - fVar29) < 0.0) {
        fVar6 = fVar29;
      }
      fVar8 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar8 = fVar3;
      }
      fVar7 = -3.1415925 - fVar29;
      if ((-3.1415925 - fVar29) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar29 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
        fVar29 = fVar8;
      }
      fVar3 = fVar7 * fVar7;
      fVar6 = fVar29 * fVar29;
      fVar10 = fVar3 * fVar3 * fVar7;
      fVar8 = fVar6 * fVar6 * fVar29;
      fVar11 = fVar3 * fVar10;
      fVar9 = fVar6 * fVar8;
      local_dc = fVar3 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 +
                 fVar10 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7;
      local_e0 = fVar6 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 +
                 fVar8 * 0.0083330255 + fVar6 * fVar29 * -0.16666657 + fVar29;
      local_d8 = 0x3f800000;
      local_d4 = 0x45afdf66;
      SetCollDamIn(0x3ff0000000000000,auStack_80,lVar13,1,&DAT_0022e4f8,&local_e0);
      local_66 = moby->oClass;
      local_68 = 0;
      local_67 = 1;
      MB_CollLineMulti(&local_100,&local_f0,uVar18 + 0x1e0,&local_f0,lVar13,auStack_80,5);
    }
    *(undefined4 *)((int)pvVar4 + 0x1e0) = local_100;
    *(undefined4 *)((int)pvVar4 + 0x1e4) = local_fc;
    *(undefined4 *)((int)pvVar4 + 0x1e8) = local_f8;
    *(undefined4 *)((int)pvVar4 + 0x1ec) = local_f4;
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\v', moby->animationId != '\x01')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xb) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar18 + 0x188);
    fVar29 = (moby->rotation).z;
    fVar3 = fVar29 + 1.5707963;
    fVar6 = 3.1415925 - fVar29;
    if (fVar29 - (3.1415925 - fVar29) < 0.0) {
      fVar6 = fVar29;
    }
    fVar8 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar8 = fVar3;
    }
    fVar7 = -3.1415925 - fVar29;
    if ((-3.1415925 - fVar29) - fVar6 < 0.0) {
      fVar7 = fVar6;
    }
    fVar29 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
      fVar29 = fVar8;
    }
    fVar3 = fVar7 * fVar7;
    fVar6 = fVar29 * fVar29;
    fVar10 = fVar3 * fVar3 * fVar7;
    local_128 = 0;
    fVar8 = fVar6 * fVar6 * fVar29;
    fVar11 = fVar3 * fVar10;
    fVar9 = fVar6 * fVar8;
    local_12c = (fVar3 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7
                ) * 2.0;
    local_130 = (fVar6 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar29 * -0.16666657 + fVar29
                ) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0xc0),&local_130,auStack_120);
    MB_PushOutOfSplineWalls(0x3fe8000000000000,*(undefined4 *)((int)pvVar4 + 0x198));
    iVar15 = MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar4 + 0x198),lVar13 + 0x10,iVar5 + 0x10,&local_110);
    bVar12 = false;
    fVar29 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    if ((iVar15 != 0) &&
       (local_10c = fVar3 - local_10c, local_110 = fVar29 - local_110,
       local_108 = (moby->pos).z - local_108,
       SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) < 0.8)) {
      bVar12 = true;
    }
    if (*(int *)((int)pvVar4 + 0x184) == 0) {
      moby->state = '\r';
    }
    else if (bVar12) {
      moby->state = '\f';
      if (moby->animationId != '\x06') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      fVar3 = fVar3 - *(float *)(iVar5 + 0x14);
      fVar29 = fVar29 - *(float *)(iVar5 + 0x10);
      if (SQRT(fVar29 * fVar29 + fVar3 * fVar3) < DAT_00775198) {
        GetBonePosition(lVar13,0,uVar18 + 0x1e0);
        moby->state = '\f';
        if (moby->animationId != '\x06') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar1 == 7) {
    dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar5 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar5 + 0x14) - (moby->pos).y));
    uVar21 = FastWrapRot((float)dVar19,*(float *)((int)pvVar4 + 0x1a8));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar18 + 0x188);
    fVar29 = (moby->rotation).z;
    fVar3 = fVar29 + 1.5707963;
    fVar6 = 3.1415925 - fVar29;
    if (fVar29 - (3.1415925 - fVar29) < 0.0) {
      fVar6 = fVar29;
    }
    fVar8 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar8 = fVar3;
    }
    fVar7 = -3.1415925 - fVar29;
    if ((-3.1415925 - fVar29) - fVar6 < 0.0) {
      fVar7 = fVar6;
    }
    fVar29 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
      fVar29 = fVar8;
    }
    fVar3 = fVar7 * fVar7;
    fVar6 = fVar29 * fVar29;
    fVar10 = fVar3 * fVar3 * fVar7;
    fVar8 = fVar6 * fVar6 * fVar29;
    fVar11 = fVar3 * fVar10;
    fVar9 = fVar6 * fVar8;
    local_15c = (fVar3 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7
                ) * 2.0;
    local_160 = (fVar6 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar6 * fVar29 * -0.16666657 + fVar29
                ) * 2.0;
    dVar19 = 0.0;
    local_158 = 0;
    uVar18 = MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0xc0),&local_160,
                        auStack_150);
    if ((uVar18 & 2) != 0) {
      iVar15 = rand();
      iVar15 = (int)((longlong)iVar15 << 1);
      dVar19 = (double)FastIntToDouble(iVar15 + (iVar15 >> 1) * -2 + -1);
      dVar19 = (double)(float)(dVar19 * 1.0995573997497559);
    }
    *(float *)((int)pvVar4 + 0x1a8) = (float)dVar19;
    lVar17 = lVar13 + 0x10;
    MB_PushOutOfSplineWalls
              (0x3fe8000000000000,*(undefined4 *)((int)pvVar4 + 0x198),
               *(undefined4 *)((int)pvVar4 + 0x198),lVar17,lVar17);
    iVar15 = MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar4 + 0x198),lVar17,iVar5 + 0x10,&local_140);
    fVar29 = (moby->pos).x;
    bVar12 = false;
    fVar3 = (moby->pos).y;
    uVar2 = moby->animationId;
    if ((iVar15 != 0) &&
       (local_13c = fVar3 - local_13c, local_140 = fVar29 - local_140,
       local_138 = (moby->pos).z - local_138, bVar12 = false,
       SQRT(local_138 * local_138 + local_140 * local_140 + local_13c * local_13c) < 0.8)) {
      bVar12 = true;
    }
    fVar3 = fVar3 - *(float *)(iVar5 + 0x14);
    fVar29 = fVar29 - *(float *)(iVar5 + 0x10);
    fVar29 = SQRT(fVar29 * fVar29 + fVar3 * fVar3);
    if (15.0 <= fVar29) {
      if (bVar12) {
        moby->state = '\x02';
        if (uVar2 != '\x03') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
        }
      }
      else if ((fVar29 < DAT_00775198) && (moby->state = '\x05', uVar2 != '\x06')) {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      moby->state = '\x02';
      if (uVar2 != '\x03') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}


