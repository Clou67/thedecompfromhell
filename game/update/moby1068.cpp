// game/update/moby1068.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x1ae5f0-0x1b1ea4
#include "game/update/moby1068.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1073.h"
#include "game/update/moby1085.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x01ae5f0 (0x5ec bytes)
void M1068_001ae5f0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  void *pvVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x280;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  pfVar4 = *(float **)(param_1 + 0x78);
  lVar12 = -((longlong)((int)pfVar4[1] << 6) + 0x70);
  pvVar5 = g_MobyInstance[(int)pfVar4[3]].pVar;
  *(ulonglong *)((int)puVar7 + (int)lVar12) = *puVar7;
  fVar6 = *(float *)(param_1 + 0x14) - GameCamera.posY;
  fVar8 = *(float *)(param_1 + 0x10) - GameCamera.posX;
  fVar9 = *(float *)(param_1 + 0x18) - GameCamera.posZ;
  uVar11 = lVar1 + lVar12;
  uVar27 = uVar11 + 0x70;
  dVar33 = 1.0;
  fVar6 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
  dVar30 = (double)((80.0 - fVar6) * 0.03125);
  dVar32 = dVar33;
  if (48.0 - fVar6 < 0.0) {
    dVar32 = dVar30;
  }
  FastMtxScaleIdentity((double)(*pfVar4 * 0.5),dVar30,uVar10 - 0x200);
  iVar26 = 0;
  if (0 < (int)pfVar4[1]) {
    uVar23 = uVar27 & 0xffffffff;
    uVar11 = uVar11 & 0xffffffff;
    do {
      FastEulerToMtx1(uVar23,param_1 + 0x40);
      FastVecMtx4Mul(uVar23,uVar23,uVar10 - 0x200);
      iVar26 = iVar26 + 1;
      iVar25 = (int)uVar11;
      *(undefined4 *)(iVar25 + 0xa0) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(iVar25 + 0xa4) = *(undefined4 *)(param_1 + 0x14);
      dVar31 = (double)*(float *)(param_1 + 0x18);
      *(float *)(iVar25 + 0xa8) = *(float *)(param_1 + 0x18);
      *(undefined4 *)(iVar25 + 0xac) = *(undefined4 *)(param_1 + 0x1c);
      dVar30 = (double)FastIntToDouble(iVar26);
      fVar6 = pfVar4[1];
      uVar23 = uVar23 + 0x40;
      *(float *)(iVar25 + 0xa8) = (float)(dVar30 * (double)pfVar4[2] + dVar31);
      uVar11 = uVar11 + 0x40;
    } while (iVar26 < (int)fVar6);
  }
  uVar11 = GetEffectTex(0xe);
  puVar7[0x39] = uVar11;
  puVar7[0x27] = uVar11;
  uVar11 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar7[0x3a] = uVar11;
  puVar7[0x28] = uVar11;
  uVar11 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar7[0x38] = uVar11;
  puVar7[0x26] = uVar11;
  uVar11 = idol_draw::PackCmd(DAT_00e61fe0,DAT_007579d0,DAT_00e61fe4,DAT_007579d4,0x80);
  puVar7[0x3b] = uVar11;
  puVar7[0x29] = uVar11;
  puVar15 = &DAT_007579ec;
  lVar17 = uVar10 - 0xdc;
  lVar20 = uVar10 - 0x16c;
  lVar28 = 2;
  lVar12 = lVar1;
  do {
    uVar2 = *puVar15;
    uVar3 = puVar15[2];
    *(undefined4 *)((int)lVar12 + 0x1a4) = uVar2;
    puVar15 = puVar15 + 4;
    *(undefined4 *)((int)lVar12 + 0x114) = uVar2;
    *(undefined4 *)((int)lVar17 + 8) = uVar3;
    *(undefined4 *)((int)lVar20 + 8) = uVar3;
    lVar17 = lVar17 + 0x10;
    lVar20 = lVar20 + 0x10;
    lVar12 = lVar12 + 0x10;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  iVar26 = 0;
  do {
    iVar25 = 0;
    dVar30 = 0.0;
    do {
      lVar17 = 4;
      pfVar18 = (float *)&DAT_007579e8;
      dVar30 = (double)(float)((double)DAT_00757e58 + dVar30);
      lVar12 = lVar1;
      if (dVar33 - dVar30 < 0.0) {
        dVar30 = (double)(float)(dVar30 - dVar33);
      }
      do {
        fVar6 = *pfVar18;
        pfVar18 = pfVar18 + 2;
        fVar6 = (float)((double)fVar6 + dVar30) + *(float *)((int)pvVar5 + 0x12de0);
        *(float *)((int)lVar12 + 0x1a0) = fVar6;
        *(float *)((int)lVar12 + 0x110) = fVar6;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      iVar24 = 0;
      if (0 < (int)pfVar4[1]) {
        uVar11 = uVar27 & 0xffffffff;
        pfVar18 = pfVar4;
        do {
          piVar16 = (int *)((int)pvVar5 + (uint)*(byte *)(pfVar18 + 4) * 4 + iVar26 * 0x78 + 0x12c00
                           );
          if (DAT_00eef984 <
              *(int *)((int)pvVar5 + (uint)*(byte *)(pfVar18 + 4) * 4 + iVar26 * 0x78 + 0x12c00)) {
            dVar31 = (double)FastIntToDouble(*piVar16 - DAT_00eef984);
            dVar29 = (double)FastIntToDouble(DAT_00eef980 - DAT_00eef984);
            dVar31 = dVar31 / dVar29;
          }
          else {
            dVar31 = (double)FastIntToDouble(*piVar16);
            dVar29 = (double)FastIntToDouble(DAT_00eef984);
            dVar31 = dVar33 - (double)(float)(dVar31 / dVar29);
          }
          uVar13 = FastLerpColor((double)(float)dVar31,DAT_007579e0,PTR_DAT_007579e4);
          dVar31 = (double)FastIntToDouble((int)uVar13 >> 0x18);
          uVar23 = FastDoubleToInt
                             ((double)(float)((double)(float)(dVar32 * dVar32) * dVar31));
          uVar13 = (uint)((uVar23 & 0xff) << 0x18) | uVar13 & 0xffffff;
          if (*(char *)(param_1 + 0x20) == '\x02') {
            dVar31 = (double)(float)((double)DAT_00757a90 * 60.0);
            dVar29 = (double)(float)((double)animationSpeed * dVar31);
            dVar31 = (double)FastIntToDouble
                                       (dVar31,(double)DAT_00757a90,(double)animationSpeed,
                                        pfVar4[0xd]);
            uVar23 = FastDoubleToInt
                               ((double)(float)((double)(float)(dVar31 * 255.0) / dVar29));
            uVar13 = (uint)((uVar23 & 0xff) << 0x18) | 0xffffff;
          }
          *(uint *)((int)puVar7 + 0x19c) = uVar13;
          *(uint *)(puVar7 + 0x33) = uVar13;
          lVar12 = uVar10 - 0x130;
          *(uint *)((int)puVar7 + 0x194) = uVar13;
          pfVar21 = (float *)&DAT_00757a10;
          *(uint *)(puVar7 + 0x32) = uVar13;
          iVar14 = 0;
          lVar17 = 4;
          do {
            pfVar22 = (float *)((int)pvVar5 +
                               (uint)*(byte *)(pfVar18 + 4) * 0x10 +
                               ((iVar14 >> 1) + iVar25) * 0x140 + iVar26 * 0x2580);
            iVar14 = iVar14 + 1;
            pfVar19 = (float *)lVar12;
            *pfVar19 = *pfVar21 + *pfVar22;
            pfVar19[1] = pfVar21[1] + pfVar22[1];
            pfVar19[2] = pfVar21[2] + pfVar22[2];
            pfVar22 = pfVar21 + 3;
            pfVar21 = pfVar21 + 4;
            pfVar19[3] = *pfVar22;
            lVar12 = lVar12 + 0x10;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          FastDrawQuad(uVar10 - 0x130,uVar11,0,EffectTexHeaders,9);
          iVar24 = iVar24 + 1;
          pfVar18 = (float *)((int)pfVar18 + 1);
          uVar11 = uVar11 + 0x40;
        } while (iVar24 < (int)pfVar4[1]);
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < 0x13);
    iVar26 = iVar26 + 1;
  } while (iVar26 < 4);
  return;
}


// 0x01aebdc (0x14 bytes)
void M1068_001aebdc(void)

{
  DAT_00757b28 = 0x10000;
  return;
}


// 0x01aec28 (0x368 bytes)
// inlined: FastRSqrt @0x1aed08
void M1068_001aec28(int param_1)

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
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  
  dVar23 = 0.5;
  uVar2 = *(uint *)(param_1 + 0x78);
  GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar24 = 0.0;
  dVar7 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                  g_CollOutput.normal.x * g_CollOutput.normal.x +
                  g_CollOutput.normal.y * g_CollOutput.normal.y);
  if ((float)SQRT(dVar7) == 0.0) {
    *(float *)(uVar2 + 0x220) = g_CollOutput.normal.x;
    *(float *)(uVar2 + 0x224) = g_CollOutput.normal.y;
    *(float *)(uVar2 + 0x228) = g_CollOutput.normal.z;
    fVar1 = g_CollOutput.normal.w;
    *(undefined4 *)(uVar2 + 0x228) = 0;
    *(undefined4 *)(uVar2 + 0x224) = 0;
    *(undefined4 *)(uVar2 + 0x220) = 0;
  }
  else {
    dVar13 = 1.0 / SQRT(dVar7);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar23 * dVar13) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar23 * dVar13) + dVar13);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                    (double)(float)(dVar23 * dVar13) + dVar13);
    *(float *)(uVar2 + 0x220) = g_CollOutput.normal.x * fVar1;
    *(float *)(uVar2 + 0x224) = g_CollOutput.normal.y * fVar1;
    *(float *)(uVar2 + 0x228) = g_CollOutput.normal.z * fVar1;
    fVar1 = g_CollOutput.normal.w;
  }
  *(float *)(uVar2 + 0x22c) = fVar1;
  GetBonePosition(param_1,0,(ulonglong)uVar2 + 0x210);
  iVar6 = 0;
  *(undefined4 *)(uVar2 + 0x218) = *(undefined4 *)(param_1 + 0x18);
  dVar7 = 0.01745329238474369;
  dVar13 = 0.0625;
  dVar14 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar16 = -3.141592502593994;
  dVar17 = -0.16666656732559204;
  dVar18 = 0.008333025500178337;
  dVar19 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  dVar21 = 0.20000000298023224;
  dVar22 = 0.15000000596046448;
  do {
    dVar10 = (double)(float)((double)DAT_00757b7c * dVar7);
    dVar8 = (double)FastIntToDouble(iVar6);
    fVar1 = (float)(dVar10 * (double)(float)(dVar8 * dVar13 - dVar23));
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
    pfVar5 = (float *)(iVar4 + uVar2 + 0x230);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar11 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar11 = dVar8;
    }
    dVar8 = (double)(float)(dVar11 * dVar11);
    *pfVar5 = (float)(dVar12 * dVar21 + (double)*(float *)(uVar2 + 0x210));
    dVar12 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
    dVar10 = (double)(float)(dVar8 * dVar12);
    pfVar5[1] = (float)((double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                                       (double)(float)(dVar10 * dVar19 +
                                                      (double)(float)(dVar12 * dVar18 +
                                                                     (double)(float)((double)(float)
                                                  (dVar8 * dVar11) * dVar17 + dVar11)))) * dVar21 +
                       (double)*(float *)(uVar2 + 0x214));
    pfVar5[2] = (float)((double)*(float *)(uVar2 + 0x218) + dVar22);
    pfVar5[3] = *(float *)(uVar2 + 0x21c);
    dVar8 = dVar24;
    if ((iVar6 != 0) && (iVar6 != 0xf)) {
      dVar8 = 1.0;
    }
    iVar6 = iVar6 + 1;
    *(float *)(iVar4 + uVar2 + 0x23c) = (float)dVar8;
  } while (iVar6 < 0x10);
  auVar27 = ZEXT416(0xffffffff);
  auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
  auVar27 = loadVectorLeftIndexed(0x7b80,0x750000);
  auVar26 = loadVectorLeftIndexed(in_LR,0x1aebf0);
  auVar25 = vectorConvertFromSignedFixedPointWord(auVar27,0);
  auVar27 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar27 = vectorAddFloatingPoint
                      (auVar25,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar28);
  auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
  auVar27 = vectorConvertFromSignedFixedPointWord(auVar27,0);
  auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x21c,
                     (ulonglong)uVar2);
  *(undefined4 *)(uVar2 + 0x21c & 0xfffffffc) = uVar3;
  return;
}


// 0x01aefb8 (0x4d0 bytes)
void M1068_001aefb8(int param_1)

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
    uVar1 = (int)*(uint *)(iVar6 + 0x23c) >> 0x1f;
    if (((0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x23c)) - uVar1)) ||
        (uVar1 = (int)*(uint *)(iVar6 + 0x24c) >> 0x1f,
        0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x24c)) - uVar1))) &&
       (dVar7 = (double)MB_randRangeFloat((float)dVar8,(float)dVar9),
       dVar7 <= (double)DAT_00757bf4)) {
      MB_randRot();
      MB_randRot();
      MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      MB_randRangeFloat(DAT_00757bec,DAT_00757bf0);
      MB_randRangeFloat(DAT_00757bec,DAT_00757bf0);
      dVar7 = (double)MB_randRangeFloat(DAT_00757bcc,DAT_00757bd0);
      uVar2 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat(DAT_00757bd4,DAT_00757bd8);
      uVar3 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat(DAT_00757bdc,DAT_00757be0);
      uVar4 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      SpawnPart_2(local_d0,local_c0,local_b0,DAT_00757bbc,DAT_00757bc0,uVar2,uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar5 < 0xf);
  return;
}


// 0x01af4c0 (0x520 bytes)
void M1068_001af4c0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MOBY_OCLASSES MVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar13;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  
  uVar12 = ZEXT48(&stack0x00000000);
  puVar10 = (ulonglong *)(uVar12 - 0x140);
  *puVar10 = uVar12;
  puVar10[0x2a] = in_LR;
  puVar10[0x20] = in_f24;
  puVar10[0x21] = in_f25;
  puVar10[0x22] = in_f26;
  puVar10[0x23] = in_f27;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x1f] = unaff_r31;
  puVar10[0x1e] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar19 = ZEXT48(pvVar8);
  puVar10[0x1d] = unaff_r29;
  puVar10[0x1c] = unaff_r28;
  puVar10[0x1b] = unaff_r27;
  puVar10[0x1a] = unaff_r26;
  uVar14 = FastDoubleToInt((double)*(float *)((int)pvVar8 + 0x21c));
  *(undefined4 *)(puVar10 + 0x18) = uVar14;
  FastDecTimerS32(uVar12 - 0x80);
  iVar17 = *(int *)(puVar10 + 0x18);
  auVar36 = loadVectorLeftIndexed(0xc0,uVar12 - 0x140);
  auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar14 = storeVectorElementWordIndexed
                     (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x21c,uVar19);
  *(undefined4 *)((int)pvVar8 + 0x21cU & 0xfffffffc) = uVar14;
  if (iVar17 != 0) {
    if (iVar17 == 0x14) {
      iVar17 = 0;
      uVar16 = uVar19;
      do {
        uVar18 = *(uint *)((int)uVar16 + 0x23c);
        uVar9 = (int)uVar18 >> 0x1f;
        if (0x3f7fffff < (int)((uVar9 >> 1 ^ uVar18) - uVar9)) {
          *(undefined4 *)((int)uVar16 + 0x23c) = 0x3f7ae148;
        }
        iVar17 = iVar17 + 1;
        uVar16 = uVar16 + 0x10;
      } while (iVar17 < 0x10);
    }
    iVar17 = 0;
    dVar30 = 0.5;
    dVar31 = 0.0;
    dVar32 = 0.4000000059604645;
    dVar33 = 2.0;
    dVar34 = 0.30000001192092896;
    dVar35 = 1.0;
    uVar16 = uVar19;
    do {
      if (g_heroType == '\x01') {
        dVar21 = dVar30;
        fVar2 = DAT_00757b78 * g_FrameTime;
      }
      else {
        dVar21 = (double)g_FrameTime;
        fVar2 = DAT_00757b78;
      }
      iVar11 = (int)uVar16;
      fVar1 = *(float *)(iVar11 + 0x230) - *(float *)((int)pvVar8 + 0x210);
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar6 = *(float *)(iVar11 + 0x234) - *(float *)((int)pvVar8 + 0x214);
      *(float *)((int)puVar10 + 0x74) = fVar6;
      dVar23 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6);
      fVar3 = (param_1->pos).y;
      fVar4 = (param_1->pos).x;
      fVar5 = (param_1->pos).z;
      *(float *)(puVar10 + 0xf) = *(float *)(iVar11 + 0x238) - *(float *)((int)pvVar8 + 0x218);
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(iVar11 + 0x23c);
      *(undefined4 *)(puVar10 + 0xf) = 0;
      fVar2 = (float)((double)(float)((double)fVar2 * dVar21) / dVar23);
      dVar25 = (double)(fVar1 * fVar2);
      dVar20 = (double)(fVar6 * fVar2);
      dVar21 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar21 = dVar25;
      }
      dVar24 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar24 = dVar20;
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar21 = dVar25;
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar24 = dVar20;
      }
      *(float *)(puVar10 + 0xe) = (float)dVar21;
      *(float *)((int)puVar10 + 0x74) = (float)dVar24;
      fVar2 = (float)((double)*(float *)(iVar11 + 0x230) + dVar21);
      *(float *)(puVar10 + 0xe) = fVar2;
      fVar1 = (float)((double)*(float *)(iVar11 + 0x234) + dVar24);
      *(float *)((int)puVar10 + 0x74) = fVar1;
      dVar21 = (double)*(float *)(iVar11 + 0x238);
      *(float *)(puVar10 + 0xf) = *(float *)(iVar11 + 0x238);
      fVar6 = *(float *)(iVar11 + 0x23c);
      *(float *)((int)puVar10 + 0x7c) = fVar6;
      dVar20 = (double)((float)(dVar21 - (double)fVar5) * *(float *)((int)pvVar8 + 0x228) +
                       (fVar2 - fVar4) * *(float *)((int)pvVar8 + 0x220) +
                       (fVar1 - fVar3) * *(float *)((int)pvVar8 + 0x224));
      if (dVar20 <= dVar32) {
        if (dVar20 < dVar34) {
          *(float *)(puVar10 + 0xf) = (float)((double)g_FrameTime * dVar33 + dVar21);
        }
      }
      else {
        *(float *)(puVar10 + 0xf) = -(float)((double)g_FrameTime * dVar33 - dVar21);
      }
      uVar18 = (int)*(uint *)(iVar11 + 0x23c) >> 0x1f;
      if ((int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x23c)) - uVar18) < 0x3f800000) {
LAB_001af770:
        if ((double)fVar6 < dVar35) {
          Delt((float)dVar31,(float)((double)g_FrameTime * dVar33),
                         (float *)((int)puVar10 + 0x7c));
        }
      }
      else {
        iVar15 = CollLine(uVar16 + 0x230,uVar12 - 0xd0,2,0,0);
        fVar6 = *(float *)((int)puVar10 + 0x7c);
        if (iVar15 == 0) goto LAB_001af770;
        *(undefined4 *)((int)puVar10 + 0x7c) = 0x3f7ae148;
      }
      iVar17 = iVar17 + 1;
      *(undefined4 *)(iVar11 + 0x230) = *(undefined4 *)(puVar10 + 0xe);
      *(undefined4 *)(iVar11 + 0x234) = *(undefined4 *)((int)puVar10 + 0x74);
      *(undefined4 *)(iVar11 + 0x238) = *(undefined4 *)(puVar10 + 0xf);
      *(undefined4 *)(iVar11 + 0x23c) = *(undefined4 *)((int)puVar10 + 0x7c);
      uVar16 = uVar16 + 0x10;
    } while (iVar17 < 0x10);
    iVar17 = 0;
    dVar30 = 1.570796251296997;
    dVar31 = 3.141592502593994;
    dVar32 = -3.141592502593994;
    dVar33 = -0.16666656732559204;
    dVar34 = 0.008333025500178337;
    dVar21 = -0.0001980741071747616;
    dVar20 = 2.601886990305502e-06;
    do {
      iVar11 = (int)uVar19;
      uVar18 = (int)*(uint *)(iVar11 + 0x23c) >> 0x1f;
      if ((0x3f199999 < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x23c)) - uVar18)) &&
         (uVar18 = (int)*(uint *)(iVar11 + 0x24c) >> 0x1f,
         0x3f199999 < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x24c)) - uVar18))) {
        dVar25 = (double)(param_1->rotation).z;
        dVar24 = (double)(float)(dVar25 + dVar30);
        *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
        uVar13 = 0x10000;
        *(undefined4 *)((int)puVar10 + 0x8c) = 0x45afdf66;
        dVar23 = (double)(float)(dVar31 - dVar25);
        if (dVar25 - (double)(float)(dVar31 - dVar25) < 0.0) {
          dVar23 = dVar25;
        }
        dVar26 = (double)(float)(dVar31 - dVar24);
        if (dVar24 - (double)(float)(dVar31 - dVar24) < 0.0) {
          dVar26 = dVar24;
        }
        dVar22 = (double)(float)(dVar32 - dVar25);
        if ((double)(float)(dVar32 - dVar25) - dVar23 < 0.0) {
          dVar22 = dVar23;
        }
        dVar23 = (double)(float)(dVar32 - dVar24);
        if ((double)(float)(dVar32 - dVar24) - dVar26 < 0.0) {
          dVar23 = dVar26;
        }
        dVar25 = (double)(float)(dVar22 * dVar22);
        dVar24 = (double)(float)(dVar23 * dVar23);
        dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar22));
        dVar26 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar23));
        dVar27 = (double)(float)(dVar25 * dVar28);
        dVar29 = (double)(float)(dVar24 * dVar26);
        *(float *)((int)puVar10 + 0x84) =
             (float)((double)(float)(dVar25 * dVar27) * dVar20 +
                    (double)(float)(dVar27 * dVar21 +
                                   (double)(float)(dVar28 * dVar34 +
                                                  (double)(float)((double)(float)(dVar25 * dVar22) *
                                                                  dVar33 + dVar22))));
        *(float *)(puVar10 + 0x10) =
             (float)((double)(float)(dVar24 * dVar29) * dVar20 +
                    (double)(float)(dVar29 * dVar21 +
                                   (double)(float)(dVar26 * dVar34 +
                                                  (double)(float)((double)(float)(dVar24 * dVar23) *
                                                                  dVar33 + dVar23))));
        uVar18 = (int)*(uint *)(iVar11 + 0x23c) >> 0x1f;
        if (0x3f7fffff < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x23c)) - uVar18)) {
          uVar18 = (int)*(uint *)(iVar11 + 0x24c) >> 0x1f;
          if (0x3f7fffff < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x24c)) - uVar18)) {
            uVar13 = 0x10001;
          }
        }
        SetCollDamIn(dVar35,uVar12 - 0xb0,param_1,uVar13,uVar18,uVar12 - 0xc0);
        *(undefined1 *)(puVar10 + 0x15) = 0;
        MVar7 = param_1->oClass;
        *(undefined1 *)((int)puVar10 + 0xa9) = 1;
        *(MOBY_OCLASSES *)((int)puVar10 + 0xaa) = MVar7;
        CollLine(uVar19 + 0x230,uVar19 + 0x240,0,param_1,uVar12 - 0xb0);
      }
      iVar17 = iVar17 + 1;
      uVar19 = uVar19 + 0x10;
    } while (iVar17 < 0xf);
    RegisterMobyDraw(&PTR_M1069_001b1eb8_00708938,param_1);
    M1068_001aefb8(param_1);
  }
  return;
}


// 0x01afa30 (0xce4 bytes)
// inlined: FastAtan2 @0x1afd0c, FastAtan2 @0x1aff20, FastAtan2 @0x1b01f4, FastAtan2 @0x1b03b8
void M1068_001afa30(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyClass *pMVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  Spline *pSVar15;
  undefined2 uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  longlong lVar24;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  float *pfVar34;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar45;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar46;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar47;
  ulonglong in_f27;
  double dVar48;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  double dVar51;
  ulonglong in_f30;
  double dVar52;
  ulonglong in_f31;
  double dVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar29 = uVar23 - 0x1d0;
  puVar17 = (ulonglong *)lVar29;
  *puVar17 = uVar23;
  puVar17[0x3c] = in_LR;
  puVar17[0x28] = in_f14;
  puVar17[0x29] = in_f15;
  puVar17[0x2a] = in_f16;
  puVar17[0x2b] = in_f17;
  puVar17[0x2c] = in_f18;
  puVar17[0x2d] = in_f19;
  puVar17[0x2e] = in_f20;
  puVar17[0x2f] = in_f21;
  puVar17[0x30] = in_f22;
  puVar17[0x31] = in_f23;
  puVar17[0x32] = in_f24;
  puVar17[0x33] = in_f25;
  puVar17[0x34] = in_f26;
  puVar17[0x35] = in_f27;
  puVar17[0x36] = in_f28;
  puVar17[0x37] = in_f29;
  puVar17[0x38] = in_f30;
  puVar17[0x39] = in_f31;
  puVar17[0x27] = unaff_r31;
  puVar17[0x22] = unaff_r26;
  puVar17[0x21] = unaff_r25;
  pMVar9 = param_1->pClass;
  puVar17[0x26] = unaff_r30;
  pvVar10 = param_1->pVar;
  uVar35 = ZEXT48(pvVar10);
  fVar7 = pMVar9->gScale * DAT_00757b50;
  puVar17[0x25] = unaff_r29;
  puVar17[0x24] = unaff_r28;
  puVar17[0x23] = unaff_r27;
  param_1->scale = fVar7;
  M1068_001af4c0(param_1);
  if (*(int *)((int)pvVar10 + 0x38) != 0) {
    dVar37 = (double)MB_randRangeFloat(180.0,240.0);
    uVar25 = FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar10 + 0x188) = uVar25;
    *(undefined4 *)((int)pvVar10 + 0x38) = 0;
  }
  FastDecTimerS32(uVar35 + 0x188);
  dVar37 = 0.0;
  *(undefined4 *)((int)puVar17 + 0x74) = 0;
  iVar26 = MB_damage(param_1,0x330000,0);
  iVar27 = MB_HandleDamage
                     (param_1,iVar26,uVar35 + 0x20,0,puVar17 + 0xe,(int)puVar17 + 0x74,0,4);
  if ((*(int *)(puVar17 + 0xe) != 1) && (param_1->state != '\x10')) {
    if ((Level == Orxon) &&
       (((iVar26 != 0 && (*(int *)(iVar26 + 0x20) != 0)) &&
        (*(short *)(*(int *)(iVar26 + 0x20) + 0xa6) == 0x31a)))) {
      MB_UnlockSkillPoint(0x11);
    }
    fVar7 = *(float *)((int)pvVar10 + 0x20) - *(float *)((int)puVar17 + 0x74);
    *(float *)((int)pvVar10 + 0x20) = fVar7;
    if ((double)fVar7 <= dVar37) {
      iVar27 = 1;
    }
    *(undefined4 *)((int)pvVar10 + 0x80) = 500;
    *(undefined4 *)((int)pvVar10 + 0x88) = 0x3f000000;
    dVar53 = 0.7853981852531433;
    if (iVar27 < 3) {
      if ((-1 < iVar27) && (0 < iVar27)) {
        param_1->state = '\x10';
        fVar2 = g_FrameTime;
        fVar7 = DAT_00757b60 * g_FrameTime;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar10 + 0x78) = fVar7;
        fVar7 = DAT_00757b64;
        *(undefined4 *)((int)pvVar10 + 0xb0) = 0x41100000;
        *(undefined4 *)((int)pvVar10 + 0xb4) = 0x41900000;
        *(float *)((int)pvVar10 + 0x7c) = fVar7 * fVar2;
        uVar11 = *(uint *)(iVar26 + 0x10);
        uVar12 = *(uint *)(iVar26 + 0x14);
        dVar39 = ABS((double)*(float *)(iVar26 + 0x10));
        dVar41 = ABS((double)*(float *)(iVar26 + 0x14));
        *(float *)(puVar17 + 0x10) = (float)(dVar39 - dVar41);
        uVar32 = (ulonglong)*(uint *)(puVar17 + 0x10);
        uVar30 = (ulonglong)(uVar11 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(uVar12 >> 0x1d) & 4;
        dVar47 = dVar39;
        if ((double)*(float *)(puVar17 + 0x10) - dVar37 < 0.0) {
          dVar47 = dVar41;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
        if ((double)*(float *)(puVar17 + 0x10) - dVar37 < 0.0) {
          dVar41 = dVar39;
        }
        fVar2 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        dVar39 = dVar37;
        if (dVar37 < dVar47) {
          lVar24 = uVar23 - 0x1c0;
          lVar33 = uVar23 - 0xf8;
          lVar31 = uVar23 - 0x108;
          lVar36 = 2;
          fVar3 = (float)(dVar41 - dVar47) / (float)(dVar41 + dVar47);
          fVar6 = fVar3 * fVar3;
          *(float *)(puVar17 + 0x19) = fVar3;
          *(float *)((int)puVar17 + 0xcc) = fVar3;
          *(float *)(puVar17 + 0x1a) = fVar3;
          *(float *)((int)puVar17 + 0xd4) = fVar3;
          fVar3 = fVar6 * fVar6;
          *(float *)((int)puVar17 + 0xcc) = *(float *)((int)puVar17 + 0xcc) * fVar6;
          *(float *)(puVar17 + 0x1a) = *(float *)(puVar17 + 0x1a) * fVar3;
          *(float *)((int)puVar17 + 0xd4) = *(float *)((int)puVar17 + 0xd4) * fVar3 * fVar6;
          do {
            *(float *)((int)lVar24 + 200) = *(float *)((int)lVar24 + 0xb8) * fVar3 * fVar3;
            iVar27 = (int)lVar31;
            lVar31 = lVar31 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
            lVar33 = lVar33 + 8;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          lVar31 = 4;
          uVar30 = uVar23 - 0x108;
          pfVar34 = (float *)&DAT_007358e0;
          lVar24 = lVar29;
          uVar32 = uVar30;
          do {
            fVar3 = *pfVar34;
            fVar6 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar24 + 200) = *(float *)((int)lVar24 + 200) * fVar3;
            lVar24 = lVar24 + 8;
            *(float *)((int)uVar32 + 4) = *(float *)((int)uVar32 + 4) * fVar6;
            uVar32 = uVar32 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 2;
          lVar24 = lVar29;
          dVar41 = dVar37;
          do {
            iVar27 = (int)lVar24;
            iVar28 = (int)uVar30;
            lVar24 = lVar24 + 0x10;
            uVar30 = uVar30 + 0x10;
            dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar27 + 200)) +
                              *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                             *(float *)(iVar28 + 0xc));
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          dVar39 = (double)((float)(dVar41 + 0.7853981852531433) * fVar7 + fVar2);
        }
        MB_StartKick(dVar39,param_1,uVar35 + 0x60,uVar32,9,1,0);
        iVar27 = 0;
        do {
          uVar40 = 0x3fc99999a0000000;
          dVar50 = (double)(param_1->pos).x;
          dVar39 = (double)(param_1->pos).y;
          dVar47 = (double)((param_1->pos).z + 2.5);
          dVar52 = (double)(param_1->pos).w;
          dVar41 = (double)MB_randRangeSigned(dVar37,0x3fc99999a0000000);
          dVar51 = (double)(float)(dVar50 + dVar41);
          dVar41 = (double)MB_randRangeSigned(dVar37,uVar40);
          dVar49 = (double)(float)(dVar39 + dVar41);
          dVar41 = (double)MB_randRangeSigned(dVar37,uVar40);
          dVar48 = (double)(float)(dVar47 + dVar41);
          dVar39 = (double)MB_randRot();
          dVar46 = 3.0;
          dVar50 = (double)MB_randRangeFloat(3.0,5.7);
          fVar7 = (float)(dVar39 + 1.570796251296997);
          uVar11 = *(uint *)(iVar26 + 0x10);
          uVar12 = *(uint *)(iVar26 + 0x14);
          dVar45 = ABS((double)*(float *)(iVar26 + 0x10));
          dVar47 = ABS((double)*(float *)(iVar26 + 0x14));
          uVar13 = *(uint *)(iVar26 + 0x10);
          fVar2 = *(float *)(iVar26 + 0x10);
          uVar14 = *(uint *)(iVar26 + 0x14);
          fVar3 = *(float *)(iVar26 + 0x14);
          dVar41 = (double)(float)(3.141592502593994 - dVar39);
          if (dVar39 - (double)(float)(3.141592502593994 - dVar39) < 0.0) {
            dVar41 = dVar39;
          }
          fVar6 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar6 = fVar7;
          }
          dVar38 = (double)(float)(-3.141592502593994 - dVar39);
          if ((double)(float)(-3.141592502593994 - dVar39) - dVar41 < 0.0) {
            dVar38 = dVar41;
          }
          *(float *)((int)puVar17 + 0x7c) = (float)(dVar45 - dVar47);
          dVar41 = (double)g_FrameTime;
          fVar1 = (float)(dVar50 * dVar41);
          fVar21 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar6 < 0.0) {
            fVar21 = fVar6;
          }
          dVar50 = (double)(float)(dVar38 * dVar38);
          uVar32 = (ulonglong)(uVar11 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x7c) >> 0x1e) & 2 |
                   (ulonglong)(uVar12 >> 0x1d) & 4;
          fVar6 = fVar21 * fVar21;
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
          dVar39 = dVar45;
          if ((double)*(float *)((int)puVar17 + 0x7c) - dVar37 < 0.0) {
            dVar39 = dVar47;
          }
          fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
          dVar44 = (double)(float)(dVar50 * (double)(float)(dVar50 * dVar38));
          fVar19 = fVar6 * fVar6 * fVar21;
          dVar43 = (double)(float)(dVar50 * dVar44);
          fVar20 = fVar6 * fVar19;
          if ((double)*(float *)((int)puVar17 + 0x7c) - dVar37 < 0.0) {
            dVar47 = dVar45;
          }
          dVar45 = dVar37;
          if (dVar37 < dVar39) {
            lVar24 = uVar23 - 0x1c0;
            lVar31 = uVar23 - 0x128;
            lVar33 = uVar23 - 0x118;
            lVar36 = 2;
            fVar8 = (float)(dVar47 - dVar39) / (float)(dVar47 + dVar39);
            fVar5 = fVar8 * fVar8;
            *(float *)(puVar17 + 0x15) = fVar8;
            *(float *)((int)puVar17 + 0xac) = fVar8;
            *(float *)(puVar17 + 0x16) = fVar8;
            *(float *)((int)puVar17 + 0xb4) = fVar8;
            fVar8 = fVar5 * fVar5;
            *(float *)((int)puVar17 + 0xac) = *(float *)((int)puVar17 + 0xac) * fVar5;
            *(float *)(puVar17 + 0x16) = *(float *)(puVar17 + 0x16) * fVar8;
            *(float *)((int)puVar17 + 0xb4) = *(float *)((int)puVar17 + 0xb4) * fVar8 * fVar5;
            do {
              *(float *)((int)lVar24 + 0xa8) = *(float *)((int)lVar24 + 0x98) * fVar8 * fVar8;
              iVar28 = (int)lVar31;
              lVar24 = lVar24 + 8;
              lVar31 = lVar31 + 8;
              *(float *)((int)lVar33 + 4) = *(float *)(iVar28 + 4) * fVar8 * fVar8;
              lVar33 = lVar33 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar33 = uVar23 - 0x128;
            pfVar34 = (float *)&DAT_007358e0;
            lVar24 = lVar29;
            lVar31 = lVar33;
            do {
              fVar8 = *pfVar34;
              fVar5 = pfVar34[1];
              pfVar34 = pfVar34 + 2;
              *(float *)((int)lVar24 + 0xa8) = *(float *)((int)lVar24 + 0xa8) * fVar8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar5;
              lVar31 = lVar31 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar31 = 2;
            lVar24 = lVar29;
            dVar47 = dVar37;
            do {
              iVar28 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              iVar18 = (int)lVar33;
              lVar33 = lVar33 + 0x10;
              dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar28 + 0xa8)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            dVar45 = (double)((float)(dVar47 + dVar53) * fVar7 + fVar4);
          }
          fVar7 = (float)(dVar45 + 1.570796251296997);
          dVar39 = ABS((double)fVar2);
          dVar47 = ABS((double)fVar3);
          fVar2 = (float)(dVar41 * 7.0);
          *(float *)(puVar17 + 0xf) = (float)(dVar39 - dVar47);
          fVar3 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar3 = fVar7;
          }
          fVar4 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
            fVar4 = fVar3;
          }
          uVar32 = (ulonglong)(uVar13 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(uVar14 >> 0x1d) & 4;
          fVar7 = fVar4 * fVar4;
          dVar41 = dVar39;
          if ((double)*(float *)(puVar17 + 0xf) - dVar37 < 0.0) {
            dVar41 = dVar47;
          }
          if ((double)*(float *)(puVar17 + 0xf) - dVar37 < 0.0) {
            dVar47 = dVar39;
          }
          fVar5 = fVar7 * fVar7 * fVar4;
          fVar22 = fVar7 * fVar5;
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
          fVar3 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
          dVar45 = (double)((fVar6 * fVar20 * 2.601887e-06 +
                            fVar20 * -0.0001980741 +
                            fVar19 * 0.0083330255 + fVar6 * fVar21 * -0.16666657 + fVar21) * fVar1 +
                           fVar2 * (fVar7 * fVar22 * 2.601887e-06 +
                                   fVar22 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4));
          dVar39 = dVar37;
          if (dVar37 < dVar41) {
            lVar24 = uVar23 - 0x1c0;
            lVar33 = uVar23 - 0x138;
            lVar31 = uVar23 - 0x148;
            lVar36 = 2;
            fVar7 = (float)(dVar47 - dVar41) / (float)(dVar47 + dVar41);
            fVar6 = fVar7 * fVar7;
            *(float *)(puVar17 + 0x11) = fVar7;
            *(float *)((int)puVar17 + 0x8c) = fVar7;
            *(float *)(puVar17 + 0x12) = fVar7;
            *(float *)((int)puVar17 + 0x94) = fVar7;
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar17 + 0x8c) = *(float *)((int)puVar17 + 0x8c) * fVar6;
            *(float *)(puVar17 + 0x12) = *(float *)(puVar17 + 0x12) * fVar7;
            *(float *)((int)puVar17 + 0x94) = *(float *)((int)puVar17 + 0x94) * fVar7 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x88) = *(float *)((int)lVar24 + 0x78) * fVar7 * fVar7;
              iVar28 = (int)lVar31;
              lVar31 = lVar31 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar33 + 4) = *(float *)(iVar28 + 4) * fVar7 * fVar7;
              lVar33 = lVar33 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar33 = uVar23 - 0x148;
            pfVar34 = (float *)&DAT_007358e0;
            lVar24 = lVar29;
            lVar31 = lVar33;
            do {
              fVar7 = *pfVar34;
              fVar6 = pfVar34[1];
              pfVar34 = pfVar34 + 2;
              *(float *)((int)lVar24 + 0x88) = *(float *)((int)lVar24 + 0x88) * fVar7;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar6;
              lVar31 = lVar31 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar31 = 2;
            lVar24 = lVar29;
            dVar41 = dVar37;
            do {
              iVar28 = (int)lVar24;
              iVar18 = (int)lVar33;
              lVar24 = lVar24 + 0x10;
              lVar33 = lVar33 + 0x10;
              dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar28 + 0x88)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            dVar39 = (double)((float)(dVar41 + dVar53) * fVar8 + fVar3);
          }
          dVar41 = (double)(float)(3.141592502593994 - dVar39);
          if (dVar39 - (double)(float)(3.141592502593994 - dVar39) < 0.0) {
            dVar41 = dVar39;
          }
          dVar47 = (double)(float)(-3.141592502593994 - dVar39);
          if ((double)(float)(-3.141592502593994 - dVar39) - dVar41 < 0.0) {
            dVar47 = dVar41;
          }
          dVar41 = (double)(float)(dVar47 * dVar47);
          dVar42 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar47));
          dVar39 = (double)(float)(dVar41 * dVar42);
          dVar39 = (double)(((float)(dVar50 * dVar43) * 2.601887e-06 +
                            (float)(dVar43 * -0.0001980741071747616 +
                                   (double)(float)(dVar44 * 0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar50 * dVar38) *
                                                                  -0.16666656732559204 + dVar38))))
                            * fVar1 +
                           fVar2 * ((float)(dVar41 * dVar39) * 2.601887e-06 +
                                   (float)(dVar39 * -0.0001980741071747616 +
                                          (double)(float)(dVar42 * 0.008333025500178337 +
                                                         (double)(float)((double)(float)(dVar41 * 
                                                  dVar47) * -0.16666656732559204 + dVar47)))));
          dVar41 = (double)MB_randRangeFloat((float)dVar46,8.5);
          *(float *)(puVar17 + 8) = (float)dVar51;
          *(float *)(puVar17 + 9) = (float)dVar48;
          dVar47 = (double)g_FrameTime;
          *(float *)(puVar17 + 10) = (float)dVar45;
          *(float *)((int)puVar17 + 0x44) = (float)dVar49;
          *(float *)((int)puVar17 + 0x4c) = (float)dVar52;
          *(float *)((int)puVar17 + 0x54) = (float)dVar39;
          *(float *)(puVar17 + 0xb) = (float)(dVar41 * dVar47);
          *(float *)((int)puVar17 + 0x5c) = (float)(dVar41 * dVar47);
          iVar28 = M1089_001bb4e0(param_1);
          if (iVar28 != 0) {
            *(float *)(iVar28 + 0x2c) = *(float *)(iVar28 + 0x2c) * 0.4;
          }
          iVar27 = iVar27 + 1;
        } while (iVar27 < 10);
        *(undefined1 *)((int)pvVar10 + 0x117) = 0xfa;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar27 < 0xb) {
      auVar54 = ZEXT416(0xffffffff);
      auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      param_1->state = '\x0f';
      fVar2 = g_FrameTime;
      auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorLeftIndexed(0x10,0x1af9e0);
      auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar54 = vectorMultiplyAddFloatingPoint
                          (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                           auVar55);
      fVar7 = DAT_00757b58 * g_FrameTime;
      auVar54 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
      auVar54 = vectorSplatHalfWord(auVar54,1);
      uVar16 = storeVectorElementHalfWordIndexed(auVar54,0x26,uVar35);
      *(undefined2 *)((int)pvVar10 + 0x26) = uVar16;
      *(float *)((int)pvVar10 + 0x78) = fVar7;
      fVar7 = DAT_00757b5c;
      *(undefined4 *)((int)pvVar10 + 0xb0) = 0x41000000;
      *(undefined4 *)((int)pvVar10 + 0xb4) = 0x41700000;
      *(float *)((int)pvVar10 + 0x7c) = fVar7 * fVar2;
      uVar11 = *(uint *)(iVar26 + 0x10);
      uVar12 = *(uint *)(iVar26 + 0x14);
      dVar47 = ABS((double)*(float *)(iVar26 + 0x10));
      dVar53 = ABS((double)*(float *)(iVar26 + 0x14));
      *(float *)((int)puVar17 + 0x84) = (float)(dVar47 - dVar53);
      uVar30 = (ulonglong)(uVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(uVar12 >> 0x1d) & 4;
      uVar32 = uVar30 << 2;
      dVar41 = dVar47;
      if ((double)*(float *)((int)puVar17 + 0x84) - dVar37 < 0.0) {
        dVar41 = dVar53;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)uVar32);
      if ((double)*(float *)((int)puVar17 + 0x84) - dVar37 < 0.0) {
        dVar53 = dVar47;
      }
      fVar2 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      if (dVar37 < dVar41) {
        lVar36 = 2;
        fVar3 = (float)(dVar53 - dVar41) / (float)(dVar53 + dVar41);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar17 + 0x1d) = fVar3;
        *(float *)((int)puVar17 + 0xec) = fVar3;
        *(float *)(puVar17 + 0x1e) = fVar3;
        *(float *)((int)puVar17 + 0xf4) = fVar3;
        lVar33 = uVar23 - 0x1c0;
        fVar3 = fVar6 * fVar6;
        lVar24 = uVar23 - 0xe8;
        lVar31 = uVar23 - 0xd8;
        *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar6;
        *(float *)(puVar17 + 0x1e) = *(float *)(puVar17 + 0x1e) * fVar3;
        *(float *)((int)puVar17 + 0xf4) = *(float *)((int)puVar17 + 0xf4) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar33 + 0xe8) = *(float *)((int)lVar33 + 0xd8) * fVar3 * fVar3;
          iVar26 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar23 - 0xe8;
        uVar32 = ZEXT48(&DAT_007358e0);
        lVar24 = lVar29;
        lVar31 = lVar33;
        do {
          pfVar34 = (float *)uVar32;
          fVar3 = pfVar34[1];
          uVar32 = uVar32 + 8;
          *(float *)((int)lVar24 + 0xe8) = *(float *)((int)lVar24 + 0xe8) * *pfVar34;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar3;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar24 = 2;
        do {
          iVar26 = (int)lVar29;
          iVar27 = (int)lVar33;
          lVar29 = lVar29 + 0x10;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar26 + 0xe8)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar7 + fVar2);
      }
      MB_StartKick(dVar37,param_1,uVar35 + 0x60,uVar32,7,1,0);
      *(undefined1 *)((int)pvVar10 + 0x117) = 0xfa;
    }
    MB_UpdateLightsTransition(param_1,uVar35 + 0x110);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar35 + 0x110);
  fVar7 = DAT_00757b54;
  if (*(int *)((int)pvVar10 + 0x188) != 0) {
    fVar7 = DAT_00757b54 + 6.0;
  }
  *(float *)((int)pvVar10 + 0x198) = fVar7;
  pSVar15 = Splines[*(int *)((int)pvVar10 + 0x180)];
  iVar26 = MB_getTargetInArea
                     (param_1,uVar35 + 0x120,pSVar15,0,0,pSVar15->points,pSVar15->cnt);
  if ((iVar26 != 2) &&
     ((fVar7 = *(float *)((int)pvVar10 + 0x174) - *(float *)((int)pvVar10 + 0x124),
      fVar2 = *(float *)((int)pvVar10 + 0x170) - *(float *)((int)pvVar10 + 0x120),
      *(float *)((int)pvVar10 + 0x198) < SQRT(fVar2 * fVar2 + fVar7 * fVar7) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar10 + 0x128)))))) {
    *(undefined4 *)((int)pvVar10 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar10 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar10 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x01b07a8 (0x16fc bytes)
/* Moby 1068 */

void UpdateMoby_1068(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  Vec4 *pVVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 uVar17;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  float fVar32;
  float local_190;
  float local_18c;
  undefined4 local_188;
  GPiece<16> auStack_180;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  f32 local_160;
  f32 local_15c;
  float local_158;
  f32 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  f32 local_100;
  f32 local_fc;
  float local_f8;
  f32 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  GPiece<16> auStack_d0;
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
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
  pvVar5 = moby->pVar;
  uVar19 = ZEXT48(pvVar5);
  M1068_001afa30(lVar13);
  iVar6 = *(int *)((int)pvVar5 + 0x160);
  DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar5 + 0x420));
  if ((moby->enabled != '\0') &&
     (fVar32 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar32 * fVar32) < 27.0)) {
    MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x15';
  }
  bVar1 = moby->state;
  dVar26 = 1.0;
  moby->unk58 = 1.0;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->state = moby->setByGroup, moby->animationId != '\0')) {
        local_50 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 == 5) {
      dVar27 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      fVar32 = OrganicDeltAng
                         ((float)dVar27,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x18c));
      GetBonePosition((double)fVar32,lVar13,0,&local_170);
      local_160 = (moby->pos).x;
      local_15c = (moby->pos).y;
      local_154 = (moby->pos).w;
      local_158 = (moby->pos).z + 0.3;
      dVar27 = (double)BlendAnimFrame(moby);
      fVar32 = (moby->rotation).z;
      if ((g_heroType == '\x01') && (dVar27 < 9.0)) {
        moby->unk58 = DAT_00757b74;
      }
      if ((9.0 <= dVar27) && (dVar27 <= 15.0)) {
        fVar2 = fVar32 + 1.5707963;
        fVar3 = 3.1415925 - fVar32;
        if (fVar32 - (3.1415925 - fVar32) < 0.0) {
          fVar3 = fVar32;
        }
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar8 = -3.1415925 - fVar32;
        if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
          fVar8 = fVar3;
        }
        local_148 = 0x3f800000;
        fVar32 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar32 = fVar4;
        }
        fVar2 = fVar8 * fVar8;
        local_144 = 0x45afdf66;
        fVar3 = fVar32 * fVar32;
        fVar10 = fVar2 * fVar2 * fVar8;
        fVar4 = fVar3 * fVar3 * fVar32;
        fVar11 = fVar2 * fVar10;
        fVar9 = fVar3 * fVar4;
        local_14c = fVar2 * fVar11 * 2.601887e-06 +
                    fVar11 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8;
        local_150 = fVar3 * fVar9 * 2.601887e-06 +
                    fVar9 * -0.0001980741 +
                    fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32;
        SetCollDamIn(dVar26,auStack_b0,lVar13,1);
        local_96 = moby->oClass;
        local_98 = 0;
        local_97 = 1;
        MB_CollLineMulti
                  (&local_170,&local_160,uVar19 + 0x200,&local_160,lVar13,auStack_b0,5);
      }
      *(undefined4 *)((int)pvVar5 + 0x200) = local_170;
      *(undefined4 *)((int)pvVar5 + 0x204) = local_16c;
      *(undefined4 *)((int)pvVar5 + 0x208) = local_168;
      *(undefined4 *)((int)pvVar5 + 0x20c) = local_164;
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
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      fVar32 = OrganicDeltAng
                         ((float)dVar26,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x18c));
      iVar15 = FastDecTimerS32((double)fVar32,uVar19 + 0x19c);
      if (iVar15 == 0) {
        fVar32 = (moby->pos).y - *(float *)(iVar6 + 0x14);
        fVar2 = (moby->pos).x - *(float *)(iVar6 + 0x10);
        if (DAT_00757b6c <= SQRT(fVar2 * fVar2 + fVar32 * fVar32)) {
          if ((*(int *)((int)pvVar5 + 0x188) != 0) &&
             (moby->state = '\v', moby->animationId != '\x01')) {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        M1068_001aec28(lVar13);
        moby->state = '\x03';
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 5.5));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar5 + 0x164) == 2) {
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
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(0x7b68,0x750000);
          auVar28 = vectorConvertFromSignedFixedPointWord(auVar29,0);
          auVar29 = loadVectorLeftIndexed(0x70,0x1b0714);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorAddFloatingPoint
                              (auVar28,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                              );
          auVar29 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x19c,
                              uVar19);
          *(undefined4 *)((int)pvVar5 + 0x19cU & 0xfffffffc) = uVar14;
        }
      }
    }
    else if (bVar1 == 2) {
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      fVar32 = OrganicDeltAng
                         ((float)dVar26,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x18c));
      if ((moby->field43_0x70 & 2U) != 0) {
        M1068_001aec28((double)fVar32,lVar13);
        moby->state = '\x03';
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 1) {
      if ((*(int *)((int)pvVar5 + 0x1ac) != -1) && (*(int *)((int)pvVar5 + 0x1a8) != -1)) {
        iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x1ac))
        ;
        if (iVar15 != 0) {
          moby->state = '\x0e';
          return;
        }
        fVar32 = (moby->pos).y - *(float *)(iVar6 + 0x14);
        fVar2 = (moby->pos).x - *(float *)(iVar6 + 0x10);
        if (7.0 < SQRT(fVar2 * fVar2 + fVar32 * fVar32)) {
          return;
        }
      }
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar26,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                 g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar5 + 0x18c));
      if (*(int *)((int)pvVar5 + 0x164) == 2) {
        if ((*(int *)((int)pvVar5 + 0x188) != 0) &&
           (moby->state = '\v', moby->animationId != '\x01')) {
          local_50 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        fVar32 = (moby->pos).y;
        fVar2 = (moby->pos).x;
        fVar3 = fVar32 - *(float *)(iVar6 + 0x14);
        fVar4 = fVar2 - *(float *)(iVar6 + 0x10);
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_00757b6c) {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          dVar27 = (double)(moby->rotation).z;
          dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - fVar2),
                                        (double)(*(float *)(iVar6 + 0x14) - fVar32));
          dVar26 = (double)FastSubRots((float)dVar27,(float)dVar26);
          if ((dVar26 < 0.1745329201221466) && (moby->state = '\x02', moby->animationId != '\x03'))
          {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x40000000;
      *(undefined2 *)((int)pvVar5 + 0x24) = 2;
      *(undefined1 *)((int)pvVar5 + 0x28) = 1;
      *(undefined4 *)((int)pvVar5 + 0x30) = 0x40000000;
      *(undefined1 *)((int)pvVar5 + 0x29) = 1;
      uVar17 = FastDoubleToInt(0x4028000000000000);
      *(undefined1 *)((int)pvVar5 + 0x58) = uVar17;
      uVar17 = FastDoubleToInt(0x402b333340000000);
      *(undefined1 *)((int)pvVar5 + 0x5a) = uVar17;
      MB_InitDefaultParams((float *)((int)pvVar5 + 0xc0));
      *(undefined4 *)((int)pvVar5 + 200) = 0x40000000;
      *(undefined4 *)((int)pvVar5 + 0xcc) = 0x3f000000;
      uVar14 = FastDoubleToInt((double)(DAT_00757b50 * 307.2));
      *(undefined4 *)((int)pvVar5 + 0xc0) = uVar14;
      fVar32 = DAT_00757b50 * 0.3;
      *(uint *)((int)pvVar5 + 0xf8) = *(uint *)((int)pvVar5 + 0xf8) | 8;
      *(float *)((int)pvVar5 + 0xc4) = fVar32;
      *(float *)((int)pvVar5 + 0xe4) = DAT_00757b70 * g_FrameTime;
      *(f32 *)((int)pvVar5 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar5 + 0x174) = (moby->pos).y;
      *(f32 *)((int)pvVar5 + 0x178) = (moby->pos).z;
      *(f32 *)((int)pvVar5 + 0x17c) = (moby->pos).w;
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 0x10) {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x60));
    if ((uVar16 & 0x160) != 0) {
      local_c0 = (moby->pos).x;
      local_b8 = (float)((double)(moby->pos).z + dVar26);
      local_bc = (moby->pos).y;
      local_b4 = (moby->pos).w;
      uVar21 = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,dVar26,0x4022000000000000,dVar26,0x402e000000000000,lVar13,
                 uVar19 + 0x40,&local_c0,&DAT_001b0714,1,5,2,4);
      lVar20 = lVar13 + 0x10;
      lVar18 = lVar13 + 0x40;
      MB_SpawnDebrisMoby(uVar21,lVar13,0x6a6,lVar20,lVar18,0,0);
      MB_SpawnDebrisMoby(uVar21,lVar13,0x6a7,lVar20,lVar18,0,0);
      MB_SpawnDebrisMoby(uVar21,lVar13,0x6a8,lVar20,lVar18,0,0);
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 0xf) {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x60));
    if ((uVar16 & 0x40) == 0) {
      if ((uVar16 & 0x120) != 0) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 0xe) {
    if (moby->animationId != '\x01') {
      local_50 = (longlong)(int)(animationSpeed * 12.5);
      MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 12.5));
    }
    fVar32 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    pVVar7 = Splines[*(int *)((int)pvVar5 + 0x1a8)]->points +
             Splines[*(int *)((int)pvVar5 + 0x1a8)]->cnt + -1;
    fVar3 = pVVar7->y;
    fVar4 = pVVar7->x;
    fVar8 = fVar32 - fVar3;
    fVar9 = fVar2 - fVar4;
    dVar27 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8);
    if (0.25 <= dVar27) {
      uVar21 = FUN_005e8338((double)(fVar4 - fVar2),(double)(fVar3 - fVar32));
      OrganicDeltAngSpeed
                (uVar21,0x3f999999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 5.5850534),lVar13,&DAT_00720000,uVar19 + 0x18c);
      fVar32 = (moby->rotation).z;
      fVar2 = fVar32 + 1.5707963;
      fVar3 = 3.1415925 - fVar32;
      if (fVar32 - (3.1415925 - fVar32) < 0.0) {
        fVar3 = fVar32;
      }
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar8 = -3.1415925 - fVar32;
      if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
        fVar8 = fVar3;
      }
      fVar32 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar32 = fVar4;
      }
      fVar2 = fVar8 * fVar8;
      fVar3 = fVar32 * fVar32;
      if (2.0 - dVar27 < 0.0) {
        dVar27 = 2.0;
      }
      fVar10 = fVar2 * fVar2 * fVar8;
      local_188 = 0;
      fVar4 = fVar3 * fVar3 * fVar32;
      fVar11 = fVar2 * fVar10;
      fVar9 = fVar3 * fVar4;
      local_18c = (float)((double)(fVar2 * fVar11 * 2.601887e-06 +
                                  fVar11 * -0.0001980741 +
                                  fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
                         dVar27);
      local_190 = (float)((double)(fVar3 * fVar9 * 2.601887e-06 +
                                  fVar9 * -0.0001980741 +
                                  fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32) *
                         dVar27);
      MB_UpdateNavMove
                (dVar26,moby,(MobyInstance *)((int)pvVar5 + 0xc0),&local_190,auStack_180);
    }
    else {
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - fVar2),
                                    (double)(*(float *)(iVar6 + 0x14) - fVar32));
      OrganicDeltAngSpeed
                (dVar26,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 5.5850534),lVar13,&DAT_00720000,uVar19 + 0x18c);
      dVar26 = (double)FastSubRots((float)dVar26,(moby->rotation).z);
      if (dVar26 < 0.2617993950843811) {
        *(undefined4 *)((int)pvVar5 + 0x1ac) = 0xffffffff;
        *(undefined4 *)((int)pvVar5 + 0x18c) = 0;
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 18.5);
          MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 18.5));
        }
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar5 + 0x174) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 0x18c);
    dVar25 = (double)(moby->rotation).z;
    fVar32 = (float)(dVar25 + 1.570796251296997);
    dVar27 = (double)(float)(3.141592502593994 - dVar25);
    if (dVar25 - (double)(float)(3.141592502593994 - dVar25) < 0.0) {
      dVar27 = dVar25;
    }
    fVar2 = 3.1415925 - fVar32;
    if (fVar32 - (3.1415925 - fVar32) < 0.0) {
      fVar2 = fVar32;
    }
    dVar22 = (double)(float)(-3.141592502593994 - dVar25);
    if ((double)(float)(-3.141592502593994 - dVar25) - dVar27 < 0.0) {
      dVar22 = dVar27;
    }
    fVar3 = -3.1415925 - fVar32;
    if ((-3.1415925 - fVar32) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    dVar27 = (double)(float)(dVar22 * dVar22);
    fVar4 = fVar3 * fVar3;
    dVar24 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar22));
    fVar32 = fVar4 * fVar4 * fVar3;
    dVar23 = (double)(float)(dVar27 * dVar24);
    local_d8 = 0;
    fVar2 = fVar4 * fVar32;
    local_dc = ((float)(dVar27 * dVar23) * 2.601887e-06 +
               (float)(dVar23 * -0.0001980741071747616 +
                      (double)(float)(dVar24 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar27 * dVar22) *
                                                     -0.16666656732559204 + dVar22)))) * 2.0;
    local_e0 = (fVar4 * fVar2 * 2.601887e-06 +
               fVar2 * -0.0001980741 + fVar32 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)
               * 2.0;
    dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x170) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar5 + 0x174) - (moby->pos).y));
    dVar27 = (double)FastSubRots((float)dVar25,(float)dVar27);
    if (dVar27 < 0.7853981852531433) {
      MB_UpdateNavMove
                (dVar26,moby,(MobyInstance *)((int)pvVar5 + 0xc0),&local_e0,auStack_d0);
      MB_PushOutOfSplineWalls
                (0x3fe8000000000000,*(undefined4 *)((int)pvVar5 + 0x1a4),
                 *(undefined4 *)((int)pvVar5 + 0x1a4),lVar13 + 0x10,lVar13 + 0x10);
    }
    fVar32 = *(float *)((int)pvVar5 + 0x174) - (moby->pos).y;
    fVar2 = *(float *)((int)pvVar5 + 0x170) - (moby->pos).x;
    fVar3 = *(float *)((int)pvVar5 + 0x178) - (moby->pos).z;
    if (((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar32 * fVar32) < dVar26) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xc) {
    GetBonePosition(lVar13,0,&local_110);
    local_100 = (moby->pos).x;
    local_fc = (moby->pos).y;
    local_f4 = (moby->pos).w;
    local_f8 = (moby->pos).z + 1.5;
    dVar27 = (double)BlendAnimFrame(moby);
    if ((9.0 <= dVar27) && (dVar27 <= 15.0)) {
      fVar32 = (moby->rotation).z;
      fVar2 = fVar32 + 1.5707963;
      fVar3 = 3.1415925 - fVar32;
      if (fVar32 - (3.1415925 - fVar32) < 0.0) {
        fVar3 = fVar32;
      }
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar8 = -3.1415925 - fVar32;
      if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
        fVar8 = fVar3;
      }
      local_e8 = 0x3f800000;
      fVar32 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar32 = fVar4;
      }
      fVar2 = fVar8 * fVar8;
      local_e4 = 0x45afdf66;
      fVar3 = fVar32 * fVar32;
      fVar10 = fVar2 * fVar2 * fVar8;
      fVar4 = fVar3 * fVar3 * fVar32;
      fVar11 = fVar2 * fVar10;
      fVar9 = fVar3 * fVar4;
      local_ec = fVar2 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 +
                 fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8;
      local_f0 = fVar3 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 +
                 fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32;
      SetCollDamIn(dVar26,auStack_80,lVar13,1);
      local_66 = moby->oClass;
      local_68 = 0;
      local_67 = 1;
      MB_CollLineMulti
                (&local_110,&local_100,uVar19 + 0x200,&local_100,lVar13,auStack_80,5);
    }
    *(undefined4 *)((int)pvVar5 + 0x200) = local_110;
    *(undefined4 *)((int)pvVar5 + 0x204) = local_10c;
    *(undefined4 *)((int)pvVar5 + 0x208) = local_108;
    *(undefined4 *)((int)pvVar5 + 0x20c) = local_104;
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\v', moby->animationId != '\x01')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xb) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 0x18c);
    fVar32 = (moby->rotation).z;
    fVar2 = fVar32 + 1.5707963;
    fVar3 = 3.1415925 - fVar32;
    if (fVar32 - (3.1415925 - fVar32) < 0.0) {
      fVar3 = fVar32;
    }
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar8 = -3.1415925 - fVar32;
    if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
      fVar8 = fVar3;
    }
    fVar32 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar32 = fVar4;
    }
    fVar2 = fVar8 * fVar8;
    fVar3 = fVar32 * fVar32;
    fVar10 = fVar2 * fVar2 * fVar8;
    local_138 = 0;
    fVar4 = fVar3 * fVar3 * fVar32;
    fVar11 = fVar2 * fVar10;
    fVar9 = fVar3 * fVar4;
    local_13c = (fVar2 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8
                ) * 2.0;
    local_140 = (fVar3 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32
                ) * 2.0;
    MB_UpdateNavMove
              (dVar26,moby,(MobyInstance *)((int)pvVar5 + 0xc0),&local_140,auStack_130);
    MB_PushOutOfSplineWalls(0x3fe8000000000000,*(undefined4 *)((int)pvVar5 + 0x1a4));
    iVar15 = MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar5 + 0x1a4),lVar13 + 0x10,iVar6 + 0x10,&local_120);
    bVar12 = false;
    fVar32 = (moby->pos).x;
    fVar2 = (moby->pos).y;
    if ((iVar15 != 0) &&
       (local_11c = fVar2 - local_11c, local_120 = fVar32 - local_120,
       local_118 = (moby->pos).z - local_118,
       SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c) < 0.8)) {
      bVar12 = true;
    }
    if (*(int *)((int)pvVar5 + 0x188) == 0) {
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
      fVar2 = fVar2 - *(float *)(iVar6 + 0x14);
      fVar32 = fVar32 - *(float *)(iVar6 + 0x10);
      if ((SQRT(fVar32 * fVar32 + fVar2 * fVar2) < DAT_00757b6c) &&
         (moby->state = '\f', moby->animationId != '\x06')) {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}


