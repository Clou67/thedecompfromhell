// game/update/moby1259.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x22a704-0x22b694
#include "game/update/moby1259.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x022a704 (0x14 bytes)
void M1259_0022a704(void)

{
  DAT_0076d590 = 0x10000;
  return;
}


// 0x022a720 (0x448 bytes)
void M1259_0022a720(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  int iVar14;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r25;
  undefined *puVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar18;
  int iVar19;
  ulonglong unaff_r28;
  longlong lVar20;
  ulonglong unaff_r29;
  uint uVar21;
  int iVar22;
  ulonglong unaff_r30;
  int iVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar26;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x380;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar8;
  puVar6[0x72] = in_LR;
  puVar6[0x6e] = in_f30;
  puVar6[0x6f] = in_f31;
  puVar6[0x6c] = unaff_r30;
  puVar6[0x6b] = unaff_r29;
  puVar6[0x6d] = unaff_r31;
  puVar6[0x6a] = unaff_r28;
  puVar6[0x69] = unaff_r27;
  puVar6[0x68] = unaff_r26;
  puVar6[0x67] = unaff_r25;
  puVar6[0x66] = unaff_r24;
  puVar6[0x65] = unaff_r23;
  puVar6[100] = unaff_r22;
  puVar6[99] = unaff_r21;
  puVar6[0x62] = unaff_r20;
  iVar5 = *(int *)(param_1 + 0x78);
  FastEulerToMtx1(uVar8 - 0x310,param_1 + 0x40);
  dVar26 = 1.0;
  uVar21 = 0;
  puVar17 = &DAT_0076d680;
  lVar15 = uVar8 - 0x180;
  lVar18 = uVar8 - 0x1b0;
  lVar20 = lVar1;
  do {
    FastEulerToMtx1(lVar18,puVar17);
    FastVecMtx4Mul(lVar18,uVar8 - 0x310,lVar18);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14);
    fVar4 = *(float *)(param_1 + 0x18);
    if ((uVar21 == (((int)uVar21 >> 1) + (uint)((int)uVar21 < 0 && (uVar21 & 1) != 0)) * 2) &&
       (iVar14 = *(int *)(iVar5 + 0x2314), iVar14 != -1)) {
      fVar2 = g_MobyInstance[iVar14].pos.x;
      fVar3 = g_MobyInstance[iVar14].pos.y;
      fVar4 = g_MobyInstance[iVar14].pos.z;
    }
    pfVar16 = (float *)lVar15;
    uVar21 = uVar21 + 1;
    puVar17 = puVar17 + 0x10;
    lVar18 = lVar18 + 0x40;
    *pfVar16 = *pfVar16 + fVar2;
    pfVar16[1] = pfVar16[1] + fVar3;
    pfVar16[2] = pfVar16[2] + fVar4;
    *(undefined4 *)((int)lVar20 + 0x20c) = 0x3f800000;
    lVar15 = lVar15 + 0x40;
    lVar20 = lVar20 + 0x40;
  } while ((int)uVar21 < 2);
  uVar9 = GetEffectTex(0xe);
  puVar6[0x37] = uVar9;
  uVar9 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x38] = uVar9;
  uVar9 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x36] = uVar9;
  uVar9 = idol_draw::PackCmd(DAT_00f0d2f8,DAT_0076d5c0,DAT_00f0d2fc,DAT_0076d5c4,0x80);
  puVar6[0x39] = uVar9;
  iVar23 = 0;
  *(undefined4 *)((int)puVar6 + 0x194) = DAT_0076d5dc;
  uVar7 = DAT_0076d5f4;
  *(undefined4 *)((int)puVar6 + 0x19c) = DAT_0076d5e4;
  uVar10 = DAT_0076d5ec;
  *(undefined4 *)((int)puVar6 + 0x1ac) = uVar7;
  *(undefined4 *)((int)puVar6 + 0x1a4) = uVar10;
  iVar14 = iVar5;
  iVar19 = iVar5;
  do {
    iVar22 = *(int *)(iVar19 + 0x2300);
    if (DAT_00f0d310 < iVar22) {
      dVar24 = (double)FastIntToDouble(iVar22 - DAT_00f0d310);
      dVar25 = (double)FastIntToDouble(DAT_00f0d30c - DAT_00f0d310);
      dVar24 = dVar24 / dVar25;
    }
    else {
      dVar24 = (double)FastIntToDouble(iVar22);
      dVar25 = (double)FastIntToDouble(DAT_00f0d310);
      dVar24 = dVar26 - (double)(float)(dVar24 / dVar25);
    }
    uVar10 = FastLerpColor((double)(float)dVar24,DAT_0076d5d0,PTR_DAT_0076d5d4);
    *(undefined4 *)((int)puVar6 + 0x18c) = uVar10;
    *(undefined4 *)(puVar6 + 0x31) = uVar10;
    iVar22 = 0;
    *(undefined4 *)((int)puVar6 + 0x184) = uVar10;
    *(undefined4 *)(puVar6 + 0x30) = uVar10;
    dVar24 = 0.0;
    if (0 < *(int *)(iVar5 + 0x232c) + -1) {
      do {
        lVar20 = 4;
        dVar24 = (double)(float)((double)DAT_0076d6a0 + dVar24);
        lVar18 = lVar1;
        pfVar16 = (float *)&DAT_0076d5d8;
        if (dVar26 - dVar24 < 0.0) {
          dVar24 = (double)(float)(dVar24 - dVar26);
        }
        do {
          fVar2 = *pfVar16;
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar18 + 400) = (float)((double)fVar2 + dVar24) + DAT_00f0d308;
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        iVar11 = 0;
        lVar18 = uVar8 - 0x240;
        pfVar16 = (float *)&DAT_0076d600;
        lVar20 = 4;
        do {
          pfVar13 = (float *)(((iVar11 >> 1) + iVar22) * 0x10 + iVar14);
          iVar11 = iVar11 + 1;
          pfVar12 = (float *)lVar18;
          *pfVar12 = *pfVar16 + *pfVar13;
          pfVar12[1] = pfVar16[1] + pfVar13[1];
          pfVar12[2] = pfVar16[2] + pfVar13[2];
          pfVar13 = pfVar16 + 3;
          pfVar16 = pfVar16 + 4;
          pfVar12[3] = *pfVar13;
          lVar18 = lVar18 + 0x10;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        iVar11 = 0;
        lVar18 = uVar8 - 0x1b0;
        do {
          FastDrawQuad(uVar8 - 0x240,lVar18,0,EffectTexHeaders,9);
          iVar11 = iVar11 + 1;
          lVar18 = lVar18 + 0x40;
        } while (iVar11 < 2);
        iVar22 = iVar22 + 1;
      } while (iVar22 < *(int *)(iVar5 + 0x232c) + -1);
    }
    iVar23 = iVar23 + 1;
    iVar19 = iVar19 + 4;
    iVar14 = iVar14 + 0x460;
  } while (iVar23 < 4);
  return;
}


// 0x022ab80 (0x430 bytes)
void M1259_0022ab80(MobyInstance *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar13;
  longlong lVar12;
  float *pfVar14;
  float *pfVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x120;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  pvVar4 = param_1->pVar;
  uVar24 = ZEXT48(pvVar4);
  DAT_00f0d308 = DAT_0076d6a4 * g_FrameTime + DAT_00f0d308;
  if (1.0 < DAT_00f0d308) {
    DAT_00f0d308 = DAT_00f0d308 - 1.0;
  }
  iVar23 = 0;
  lVar19 = 0;
  uVar16 = uVar24;
  uVar21 = uVar24;
  do {
    iVar13 = FastDecTimerS32(uVar21 + 0x2300);
    if (iVar13 == 0) {
      iVar13 = 1;
      if (1 < *(int *)((int)pvVar4 + 0x232c) + -1) {
        lVar11 = uVar16 + 0x1190;
        uVar20 = uVar16;
        do {
          uVar20 = uVar20 + 0x10;
          pfVar14 = (float *)uVar20;
          pfVar15 = (float *)lVar11;
          iVar13 = iVar13 + 1;
          *pfVar14 = *pfVar14 + *pfVar15;
          pfVar14[1] = pfVar14[1] + pfVar15[1];
          lVar11 = lVar11 + 0x10;
          pfVar14[2] = pfVar14[2] + pfVar15[2];
        } while (iVar13 < *(int *)((int)pvVar4 + 0x232c) + -1);
      }
    }
    else {
      iVar22 = 0;
      lVar12 = -((longlong)(*(int *)((int)pvVar4 + 0x232c) << 4) + 0x70);
      lVar11 = lVar12 + lVar1;
      *(ulonglong *)((int)lVar12 + (int)puVar6) = *puVar6;
      iVar13 = *(int *)((int)pvVar4 + 0x232c);
      if (0 < iVar13) {
        uVar25 = 0;
        auVar36 = ZEXT416(0);
        auVar37 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar36 = loadVectorLeftIndexed(8,0x22ab68);
        uVar20 = lVar11 + 0x70U & 0xffffffff;
        uVar17 = lVar19 + uVar24 + 0xc & 0xffffffff;
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        uVar18 = uVar16;
        do {
          puVar7 = (undefined4 *)uVar18;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          auVar26 = loadVectorLeftIndexed(0x232c,uVar24);
          auVar27 = loadVectorRightIndexed(0x233c,uVar24);
          auVar29 = ZEXT416(0xffffffff);
          auVar28 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar26 | auVar27,0);
          auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar33 = loadVectorLeftIndexed(0x2324,uVar24);
          auVar34 = loadVectorRightIndexed(0x2334,uVar24);
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = ZEXT416(0xffffffff);
          auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar37,0);
          auVar29 = vectorReciprocalEstimateFloatingPoint(auVar26);
          auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar26,auVar36);
          auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar28,auVar27);
          auVar28 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar29 = ZEXT416(0xffffffff);
          auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar32 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar26,auVar36);
          auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar30);
          auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar26,auVar36);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar28);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar33 | auVar34,auVar31);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar35,auVar29,auVar32);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0,uVar18)
          ;
          *(undefined4 *)((uint)puVar7 & 0xfffffffc) = uVar5;
          *(undefined4 *)uVar17 = 0x3f800000;
          MB_randSphere(uVar25,(double)(DAT_0076d6a8 * g_FrameTime),uVar20);
          iVar22 = iVar22 + 1;
          iVar13 = *(int *)((int)pvVar4 + 0x232c);
          uVar18 = uVar18 + 0x10;
          uVar17 = uVar17 + 0x10;
          auVar29.piece<0,4>() = auVar37.piece<0,4>() + 1;
          auVar29.piece<8,8>() = auVar37.piece<8,8>();
          auVar29.piece<4,4>() = auVar37.piece<4,4>() + 1;
          auVar26.piece<0,8>() = auVar29.piece<0,8>();
          auVar26.piece<12,4>() = auVar37.piece<12,4>();
          auVar26.piece<8,4>() = auVar37.piece<8,4>() + 1;
          auVar37.piece<0,12>() = auVar26.piece<0,12>();
          auVar37.piece<12,4>() = auVar26.piece<12,4>() + 1;
          uVar20 = uVar20 + 0x10;
        } while (iVar22 < iVar13);
      }
      iVar22 = 1;
      if (1 < iVar13 + -1) {
        uVar20 = lVar11 + 0x10U & 0xffffffff;
        uVar17 = lVar11 + 0x80U & 0xffffffff;
        lVar11 = uVar16 + 0x1190;
        do {
          iVar13 = (int)uVar20;
          pfVar14 = (float *)uVar17;
          fVar8 = *(float *)(iVar13 + 0x60) + *pfVar14;
          iVar22 = iVar22 + 1;
          pfVar15 = (float *)lVar11;
          *pfVar15 = fVar8;
          fVar9 = *(float *)(iVar13 + 100) + pfVar14[1];
          pfVar15[1] = fVar9;
          fVar10 = *(float *)(iVar13 + 0x68) + pfVar14[2];
          uVar17 = uVar17 + 0x10;
          pfVar15[2] = fVar10;
          fVar2 = *(float *)(iVar13 + 0x6c);
          pfVar15[3] = fVar2;
          fVar8 = fVar8 + *(float *)(iVar13 + 0x80);
          *pfVar15 = fVar8;
          fVar9 = fVar9 + *(float *)(iVar13 + 0x84);
          pfVar15[1] = fVar9;
          fVar3 = *(float *)(iVar13 + 0x88);
          *pfVar15 = fVar8 * 0.333;
          uVar20 = uVar20 + 0x10;
          pfVar15[3] = fVar2;
          pfVar15[1] = fVar9 * 0.333;
          pfVar15[2] = (fVar10 + fVar3) * 0.333;
          lVar11 = lVar11 + 0x10;
        } while (iVar22 < *(int *)((int)pvVar4 + 0x232c) + -1);
      }
      *(undefined4 *)((int)uVar21 + 0x2300) = DAT_00f0d30c;
    }
    iVar23 = iVar23 + 1;
    uVar21 = uVar21 + 4;
    lVar19 = lVar19 + 0x460;
    uVar16 = uVar16 + 0x460;
  } while (iVar23 < 4);
  fVar2 = (param_1->pos).y - GameCamera.posY;
  fVar3 = (param_1->pos).x - GameCamera.posX;
  fVar8 = (param_1->pos).z - GameCamera.posZ;
  if (SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2) < 48.0) {
    RegisterFuncForMoby(&PTR_M1259_0022a720_00709940,param_1);
  }
  return;
}


// 0x022aff8 (0x648 bytes)
// inlined: FastAtan2 @0x22b174
/* Moby 1259 */

void UpdateMoby_1259(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  f32 fVar9;
  float fVar10;
  void *pvVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  MobyInstance *pMVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x130;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x28] = in_LR;
  puVar13[0x24] = in_f30;
  puVar13[0x25] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x22] = unaff_r30;
  pvVar11 = moby->pVar;
  fVar1 = (moby->pos).z;
  iVar19 = *(int *)((int)pvVar11 + 0x2314);
  puVar13[0x21] = unaff_r29;
  if (iVar19 != -1) {
    if (moby->state == 0) {
      DAT_00f0d310 = 0x16;
      DAT_00f0d30c = 0x2d;
      *(undefined4 *)((int)pvVar11 + 0x2300) = 0;
      *(undefined4 *)((int)pvVar11 + 0x2304) = 0xb;
      *(undefined4 *)((int)pvVar11 + 0x2308) = 0x17;
      *(undefined4 *)((int)pvVar11 + 0x230c) = 0x22;
      *(undefined4 *)((int)pvVar11 + 0x231c) = 0xffffffff;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = g_MobyInstance[iVar19].pos.x - fVar2;
      fVar6 = g_MobyInstance[iVar19].pos.y - fVar3;
      fVar7 = ABS(fVar4);
      fVar5 = ABS(fVar6);
      *(float *)(puVar13 + 0x1a) = fVar4;
      *(float *)((int)puVar13 + 0xd4) = fVar6;
      *(float *)(puVar13 + 0x1b) = fVar7 - fVar5;
      fVar4 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)(puVar13 + 0x1a));
      if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)((int)puVar13 + 0xd4));
      if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
        fVar14 = fVar7;
      }
      if (0.0 < fVar6) {
        lVar23 = uVar16 - 0x120;
        lVar21 = uVar16 - 0x44;
        lVar22 = uVar16 - 0x54;
        lVar25 = 2;
        fVar6 = (fVar14 - fVar6) / (fVar14 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x1d) = fVar6;
        *(float *)(puVar13 + 0x1c) = fVar6;
        *(float *)((int)puVar13 + 0xe4) = fVar6;
        *(float *)((int)puVar13 + 0xdc) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar7;
        *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar6;
        *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar23 + 0xdc) = *(float *)((int)lVar23 + 0xcc) * fVar6 * fVar6;
          iVar19 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar23 = uVar16 - 0x54;
        lVar25 = 4;
        pfVar24 = (float *)&DAT_007358e0;
        lVar21 = lVar23;
        lVar22 = lVar18;
        do {
          fVar6 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0xdc) = *(float *)((int)lVar22 + 0xdc) * fVar6;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar21 = 2;
        do {
          iVar19 = (int)lVar18;
          iVar15 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar19 + 0xdc) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar10 + fVar5;
      }
      pMVar20 = g_MobyInstance;
      iVar19 = *(int *)((int)pvVar11 + 0x2314);
      (moby->rotation).z = fVar4;
      fVar3 = fVar3 - pMVar20[iVar19].pos.y;
      fVar2 = fVar2 - pMVar20[iVar19].pos.x;
      fVar1 = fVar1 - pMVar20[iVar19].pos.z;
      *(float *)((int)pvVar11 + 0x2324) = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      dVar26 = (double)FastWrapRot
                                 (*(float *)((int)pvVar11 + 0x2318),
                                  *(float *)((int)pvVar11 + 9000) * 0.017453292 *
                                  g_FrameTime);
      *(float *)((int)pvVar11 + 0x2318) = (float)dVar26;
      dVar28 = (double)(float)(3.141592502593994 - dVar26);
      if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
        dVar28 = dVar26;
      }
      dVar27 = (double)(float)(-3.141592502593994 - dVar26);
      if ((double)(float)(-3.141592502593994 - dVar26) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      pSVar12 = Splines[*(int *)((int)pvVar11 + 0x2310)];
      dVar29 = (double)(float)(dVar27 * dVar27);
      dVar30 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar27));
      dVar28 = (double)(float)(dVar29 * dVar30);
      fVar1 = (float)(dVar29 * dVar28) * 2.601887e-06 +
              (float)(dVar28 * -0.0001980741071747616 +
                     (double)(float)(dVar30 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar29 * dVar27) *
                                                    -0.16666656732559204 + dVar27)));
      if ((1.5707963705062866 < dVar26) && (dVar26 < 3.1415927410125732)) {
        fVar1 = 2.0 - fVar1;
      }
      if ((-3.1415927410125732 < dVar26) && (dVar26 < -1.5707963705062866)) {
        fVar1 = 2.0 - fVar1;
      }
      dVar28 = 0.5;
      uVar31 = 0x3ff0000000000000;
      fVar1 = fVar1 * 0.5 + 0.5;
      *(float *)(puVar13 + 8) = pSVar12->points[0].x;
      *(float *)((int)puVar13 + 0x44) = pSVar12->points[0].y;
      *(float *)(puVar13 + 9) = pSVar12->points[0].z;
      *(float *)((int)puVar13 + 0x4c) = pSVar12->points[0].w;
      *(float *)(puVar13 + 10) = pSVar12->points[1].x;
      *(float *)((int)puVar13 + 0x54) = pSVar12->points[1].y;
      *(float *)(puVar13 + 0xb) = pSVar12->points[1].z;
      if (1.0 - fVar1 < 0.0) {
        fVar1 = fVar1 - 2.0;
      }
      *(float *)((int)puVar13 + 0x5c) = pSVar12->points[1].w;
      Lerp_vec4(ABS(fVar1),&(moby->pos).x);
      pMVar20 = g_MobyInstance;
      fVar1 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar3 = fVar1 - g_heroPosition.y;
      fVar4 = fVar2 - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= 64.0) {
        if ((moby->enabled == '\0') &&
           (iVar19 = *(int *)((int)pvVar11 + 0x2314), g_MobyInstance[iVar19].enabled == '\0')) {
          fVar2 = fVar2 + g_MobyInstance[iVar19].pos.x;
          fVar3 = (moby->pos).z;
          *(float *)(puVar13 + 0xe) = fVar2;
          fVar1 = fVar1 + pMVar20[iVar19].pos.y;
          *(float *)((int)puVar13 + 0x74) = fVar1;
          fVar4 = pMVar20[iVar19].pos.z;
          *(float *)(puVar13 + 0xe) = (float)((double)fVar2 * dVar28);
          *(undefined4 *)((int)puVar13 + 0x7c) = 0x41800000;
          *(float *)((int)puVar13 + 0x74) = (float)((double)fVar1 * dVar28);
          *(float *)(puVar13 + 0xf) = (float)((double)(fVar3 + fVar4) * dVar28);
          iVar19 = FastCheckBsphereInView(0x4040000000000000,uVar16 - 0xc0);
          if (iVar19 == -1) {
            return;
          }
        }
        if ((((*(int *)((int)pvVar11 + 0x2330) == -1) ||
             (iVar19 = MB_IsPntInCuboid
                                 ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar11 + 0x2330)
                                 ), iVar19 == 0)) && (*(int *)((int)pvVar11 + 0x2320) != 0)) &&
           (M1259_0022ab80(moby), *(int *)((int)pvVar11 + 0x2314) != -1)) {
          fVar8 = (moby->pos).y;
          pMVar20 = g_MobyInstance + *(int *)((int)pvVar11 + 0x2314);
          *(f32 *)(puVar13 + 0x10) = (moby->pos).x;
          fVar9 = (moby->pos).z;
          *(f32 *)((int)puVar13 + 0x84) = fVar8;
          fVar8 = (moby->pos).w;
          *(f32 *)(puVar13 + 0x11) = fVar9;
          *(f32 *)((int)puVar13 + 0x8c) = fVar8;
          *(f32 *)(puVar13 + 0x12) = (pMVar20->pos).x;
          *(f32 *)((int)puVar13 + 0x94) = (pMVar20->pos).y;
          *(f32 *)(puVar13 + 0x13) = (pMVar20->pos).z;
          *(f32 *)((int)puVar13 + 0x9c) = (pMVar20->pos).w;
          SetCollDamIn(uVar31,uVar16 - 0x90,moby,0x10001,pMVar20,&DAT_00a15d30);
          CollLine(uVar16 - 0xb0,uVar16 - 0xa0,0,0,uVar16 - 0x90);
        }
      }
    }
  }
  return;
}


// 0x022b640 (0x14 bytes)
void M1259_0022b640(void)

{
  DAT_0076d6f8 = 0x10000;
  return;
}


// 0x022b658 (0x10 bytes)
double M1259_0022b658(void)

{
  return (double)DAT_00771348;
}


// 0x022b668 (0x2c bytes)
void M1259_0022b668(void)

{
  SubmitZone((OceanPlane *)&DAT_00771340);
  return;
}


