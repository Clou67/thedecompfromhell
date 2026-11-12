// game/update/moby1355.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x25672c-0x257bec
#include "game/update/moby1355.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x025672c (0x14 bytes)
void M1355_0025672c(void)

{
  DAT_0079bcb0 = 0x10000;
  return;
}


// 0x0256748 (0x134 bytes)
void M1355_00256748(MobyInstance *param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  byte in_cr6;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  uVar5 = worldUpdateTime;
  pvVar2 = param_1->pVar;
  uVar7 = ZEXT48(pvVar2);
  uVar6 = *(ushort *)((int)pvVar2 + 0x166);
  if ((worldUpdateTime & 3) == 0) {
    auVar8 = ZEXT416(0xfffffff0);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    uVar6 = uVar6 + 1 & 0xf;
    auVar9 = loadVectorLeftIndexed(0x164,uVar7);
    auVar10 = loadVectorRightIndexed(0x174,uVar7);
    *(ushort *)((int)pvVar2 + 0x166) = uVar6;
    auVar11 = vectorShiftRightAlgebraicWord(auVar9 | auVar10,auVar8);
    auVar12 = loadVectorLeftIndexed(in_LR,0x256740);
    auVar10 = vectorShiftRightWord(auVar9 | auVar10,auVar8);
    auVar8 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar9 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
               auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar8.piece<0,4>() = auVar10.piece<0,4>() + 1;
      auVar8.piece<8,8>() = auVar10.piece<8,8>();
      auVar8.piece<4,4>() = auVar10.piece<4,4>() + 1;
      auVar9.piece<0,8>() = auVar8.piece<0,8>();
      auVar9.piece<12,4>() = auVar10.piece<12,4>();
      auVar9.piece<8,4>() = auVar10.piece<8,4>() + 1;
      auVar10.piece<0,12>() = auVar9.piece<0,12>();
      auVar10.piece<12,4>() = auVar9.piece<12,4>() + 1;
      auVar8 = vectorSplatHalfWord(auVar10,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x164,uVar7);
      *(undefined2 *)((int)pvVar2 + 0x164) = uVar3;
    }
  }
  iVar4 = (int)((longlong)(short)uVar6 << 4);
  *(f32 *)((int)pvVar2 + iVar4 + 0x10) = (param_1->pos).x;
  *(f32 *)((int)pvVar2 + iVar4 + 0x14) = (param_1->pos).y;
  *(f32 *)((int)pvVar2 + iVar4 + 0x18) = (param_1->pos).z;
  *(f32 *)((int)pvVar2 + iVar4 + 0x1c) = (param_1->pos).w;
  bVar1 = DAT_00fa3f08 != uVar5;
  *(undefined4 *)((int)pvVar2 + (int)((longlong)*(short *)((int)pvVar2 + 0x166) << 4) + 0x1c) =
       0x3f800000;
  if (bVar1) {
    DAT_00fa3f08 = uVar5;
    RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,param_1);
    RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,param_1);
  }
  return;
}


// 0x02568a0 (0x18c bytes)
void M1355_002568a0(int param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  dVar7 = (double)MB_randRangeFloat(DAT_0079bce8,DAT_0079bcec);
  dVar8 = (double)MB_randRot();
  fVar1 = (float)(dVar8 + 1.570796251296997);
  dVar9 = (double)(float)(3.141592502593994 - dVar8);
  if (dVar8 - (double)(float)(3.141592502593994 - dVar8) < 0.0) {
    dVar9 = dVar8;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  dVar11 = (double)(float)(-3.141592502593994 - dVar8);
  if ((double)(float)(-3.141592502593994 - dVar8) - dVar9 < 0.0) {
    dVar11 = dVar9;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  dVar8 = (double)(float)(dVar11 * dVar11);
  fVar6 = fVar5 * fVar5;
  dVar10 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
  fVar1 = fVar6 * fVar6 * fVar5;
  dVar9 = (double)(float)(dVar8 * dVar10);
  fVar4 = fVar6 * fVar1;
  dVar11 = (double)((float)(dVar8 * dVar9) * 2.601887e-06 +
                   (float)(dVar9 * -0.0001980741071747616 +
                          (double)(float)(dVar10 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar8 * dVar11) *
                                                         -0.16666656732559204 + dVar11))));
  dVar8 = (double)(fVar6 * fVar4 * 2.601887e-06 +
                  fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5
                  );
  dVar9 = (double)MB_randRangeFloat(DAT_0079bce0,DAT_0079bce4);
  *param_2 = (float)(dVar8 * dVar7 + (double)*(float *)(uVar2 + 0x120));
  param_2[1] = (float)(dVar11 * dVar7 + (double)*(float *)(uVar2 + 0x124));
  fVar1 = (float)(dVar9 + (double)*(float *)(uVar2 + 0x128));
  param_2[2] = fVar1;
  auVar12 = ZEXT416(0xffffffff);
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  param_2[3] = fVar1;
  auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar12 = loadVectorLeftIndexed(0x1c,0x25687c);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,auVar13
                      );
  auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x160,
                     (ulonglong)uVar2);
  *(undefined4 *)(uVar2 + 0x160 & 0xfffffffc) = uVar3;
  return;
}


// 0x0256a60 (0x478 bytes)
// inlined: FastAtan2 @0x256b70
undefined8 M1355_00256a60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  undefined8 uVar14;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar12;
  puVar7[0x20] = in_LR;
  puVar7[0x19] = in_f27;
  puVar7[0x1a] = in_f28;
  puVar7[0x1b] = in_f29;
  puVar7[0x1c] = in_f30;
  puVar7[0x1d] = in_f31;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  dVar25 = (double)fVar1;
  fVar2 = param_2[1] - *(float *)(param_1 + 0x14);
  dVar26 = (double)fVar2;
  puVar7[0x17] = unaff_r30;
  puVar7[0x18] = unaff_r31;
  *(float *)(puVar7 + 0xe) = fVar1;
  puVar7[0x16] = unaff_r29;
  *(float *)((int)puVar7 + 0x74) = fVar2;
  iVar6 = *(int *)(param_1 + 0x78);
  fVar1 = param_2[2];
  *(float *)(puVar7 + 0xf) = (float)(ABS(dVar25) - ABS(dVar26));
  dVar28 = 0.0;
  dVar27 = (double)(fVar1 - *(float *)(param_1 + 0x18));
  uVar18 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar1 = *(float *)(iVar6 + 0x148);
  dVar22 = ABS((double)*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    dVar22 = ABS(dVar26);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar23 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    dVar23 = ABS(dVar25);
  }
  puVar7[0x15] = unaff_r28;
  dVar24 = dVar28;
  pfVar17 = param_2;
  if (0.0 < dVar22) {
    lVar20 = uVar12 - 0xe0;
    lVar19 = uVar12 - 0x74;
    lVar16 = uVar12 - 100;
    lVar21 = 2;
    fVar3 = (float)(dVar23 - dVar22) / (float)(dVar23 + dVar22);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    *(float *)(puVar7 + 0x10) = fVar3;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)((int)puVar7 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar3 * fVar3;
      iVar15 = (int)lVar19;
      lVar20 = lVar20 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar20 = uVar12 - 0x74;
    pfVar17 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar20;
    lVar19 = lVar13;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x7c) * fVar3;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    dVar22 = dVar28;
    do {
      iVar15 = (int)lVar13;
      iVar8 = (int)lVar20;
      lVar13 = lVar13 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0x7c)) + *(float *)(iVar8 + 4)
                        + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar24 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
    pfVar17 = (float *)lVar20;
  }
  dVar22 = (double)FastWrapRot((float)dVar24,fVar1);
  OrganicDeltAng
            ((float)dVar22,*(float *)(iVar6 + 0x150),*(float *)(iVar6 + 0x150),
             *(float *)(iVar6 + 0x154),(float *)(param_1 + 0x48),(int)pfVar17,
             (float *)(iVar6 + 0x140));
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar4 = fVar5;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  fVar2 = fVar4 * fVar4;
  fVar5 = fVar1 * fVar1;
  fVar3 = fVar5 * fVar5 * fVar1;
  fVar10 = fVar2 * fVar2 * fVar4;
  fVar9 = fVar5 * fVar3;
  fVar11 = fVar2 * fVar10;
  *(float *)(param_1 + 0x10) =
       DAT_0079bcd8 * g_FrameTime *
       (fVar5 * fVar9 * 2.601887e-06 +
       fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar1 * -0.16666657 + fVar1) +
       *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) =
       DAT_0079bcd8 * g_FrameTime *
       (fVar2 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) +
       *(float *)(param_1 + 0x14);
  OrganicDelt
            (param_2[2],*(float *)(iVar6 + 0x158),*(float *)(iVar6 + 0x158),
             *(float *)(iVar6 + 0x15c),(float *)(param_1 + 0x18),0x7a0000,(float *)(iVar6 + 0x144));
  *(float *)(param_1 + 0x44) = DAT_0079bcf0 * *(float *)(iVar6 + 0x144);
  if ((SQRT((float)(dVar27 * dVar27 +
                   (double)(float)(dVar25 * dVar25 + (double)(float)(dVar26 * dVar26)))) < 2.0) ||
     (iVar15 = FastDecTimerS32(iVar6 + 0x160), iVar15 != 0)) {
    uVar14 = 1;
  }
  else {
    iVar15 = *(int *)(iVar6 + 0x16c);
    if (iVar15 != 0) {
      dVar27 = (double)(*(float *)(param_1 + 0x14) - *(float *)(iVar15 + 0x14));
      dVar26 = (double)(*(float *)(param_1 + 0x10) - *(float *)(iVar15 + 0x10));
      dVar22 = (double)*(float *)(param_1 + 0x1c);
      dVar25 = (double)SQRT((float)(dVar26 * dVar26 + (double)(float)(dVar27 * dVar27)));
      if (dVar25 < 4.5) {
        dVar23 = (double)MB_randRangeFloat(15.0,20.0);
        fVar1 = *(float *)(*(int *)(iVar6 + 0x16c) + 0x10);
        fVar2 = *(float *)(*(int *)(iVar6 + 0x16c) + 0x14);
        param_2[3] = (float)dVar22;
        dVar27 = (double)(float)(dVar27 * (double)(float)(dVar23 / dVar25));
        dVar26 = (double)(float)(dVar26 * (double)(float)(dVar23 / dVar25));
        dVar22 = dVar28;
        if (dVar28 - dVar25 < 0.0) {
          dVar22 = dVar27;
        }
        dVar23 = dVar28;
        if (dVar28 - dVar25 < 0.0) {
          dVar23 = dVar26;
        }
        if (dVar25 - dVar28 < 0.0) {
          dVar22 = dVar27;
        }
        if (dVar25 - dVar28 < 0.0) {
          dVar23 = dVar26;
        }
        param_2[1] = (float)(dVar22 + (double)fVar2);
        *param_2 = (float)(dVar23 + (double)fVar1);
      }
    }
    uVar14 = 0;
  }
  return uVar14;
}


// 0x0256f38 (0xcb4 bytes)
// inlined: FastAtan2 @0x2574b8, FastAtan2 @0x25765c, FastRSqrt @0x25777c
/* Moby 1355 */

undefined4 * UpdateMoby_1355(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar23;
  int iVar24;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar25;
  ushort uVar26;
  undefined *in_r5;
  ulonglong uVar27;
  ulonglong uVar28;
  float *pfVar30;
  longlong lVar29;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  byte in_cr6;
  byte bVar32;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar46;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  float fVar51;
  GPiece<16> auVar44;
  GPiece<16> auVar47;
  GPiece<16> auVar45;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar22 = uVar20 - 0x170;
  puVar17 = (ulonglong *)lVar22;
  *puVar17 = uVar20;
  puVar17[0x30] = in_LR;
  puVar17[0x29] = in_f27;
  puVar17[0x2a] = in_f28;
  puVar17[0x2b] = in_f29;
  puVar17[0x2c] = in_f30;
  puVar17[0x2d] = in_f31;
  puVar17[0x28] = unaff_r31;
  puVar17[0x27] = unaff_r30;
  bVar3 = moby->state;
  pvVar11 = moby->pVar;
  uVar31 = ZEXT48(pvVar11);
  puVar17[0x26] = unaff_r29;
  if (bVar3 != 4) {
    in_r5 = &DAT_00720000;
    dVar34 = (double)FastWrapRot
                               ((moby->rotation).x,
                                DAT_0079bcd4 * 0.017453292 * g_FrameTime);
    (moby->rotation).x = (float)dVar34;
    bVar3 = moby->state;
  }
  fVar51 = DAT_0071f418;
  if ((g_gameMode == GAME_MODE_SCENE) && (g_SceneId == 3)) {
    puVar23 = (undefined4 *)DeleteMoby(moby);
  }
  else if (bVar3 == 4) {
    fVar51 = (moby->rotation).y;
    if (fVar51 - 0.87266463 < 0.0) {
      fVar51 = 0.87266463;
    }
    fVar51 = DeltAng(fVar51,g_FrameTime * 12.566371,&(moby->rotation).y,0x720000
                               ,(int)in_r5,0);
    iVar24 = FastDecTimerS32((double)fVar51,uVar31 + 0x160);
    puVar19 = worldUpdateTime;
    if (iVar24 == 0) {
      pvVar11 = moby->pVar;
      uVar20 = ZEXT48(pvVar11);
      uVar26 = *(ushort *)((int)pvVar11 + 0x166);
      if (((uint)worldUpdateTime & 3) == 0) {
        auVar42 = ZEXT416(0xfffffff0);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        uVar26 = uVar26 + 1 & 0xf;
        *(ushort *)((int)pvVar11 + 0x166) = uVar26;
        auVar48 = loadVectorLeftIndexed(0x164,uVar20);
        auVar49 = loadVectorRightIndexed(0x174,uVar20);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar42);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar42);
        auVar42 = loadVectorLeftIndexed(0x18,0x256ed8);
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar50.piece<0,4>() = auVar49.piece<0,4>() + 1;
          auVar50.piece<8,8>() = auVar49.piece<8,8>();
          auVar50.piece<4,4>() = auVar49.piece<4,4>() + 1;
          auVar48.piece<0,8>() = auVar50.piece<0,8>();
          auVar48.piece<12,4>() = auVar49.piece<12,4>();
          auVar48.piece<8,4>() = auVar49.piece<8,4>() + 1;
          auVar42.piece<0,12>() = auVar48.piece<0,12>();
          auVar42.piece<12,4>() = auVar48.piece<12,4>() + 1;
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x164,uVar20);
          *(undefined2 *)((int)pvVar11 + 0x164) = uVar15;
        }
      }
      iVar24 = (int)((longlong)(short)uVar26 << 4);
      *(f32 *)((int)pvVar11 + iVar24 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar11 + iVar24 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar11 + iVar24 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar11 + iVar24 + 0x1c) = (moby->pos).w;
      *(undefined4 *)((int)pvVar11 + (int)((longlong)*(short *)((int)pvVar11 + 0x166) << 4) + 0x1c)
           = 0x3f800000;
      puVar23 = DAT_00fa3f08;
      if (DAT_00fa3f08 != puVar19) {
        DAT_00fa3f08 = puVar19;
        RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,moby);
        puVar23 = (undefined4 *)RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,moby);
      }
    }
    else {
      moby->state = '\x02';
      *(undefined2 *)((int)pvVar11 + 0x164) = 0;
      uVar16 = *(undefined4 *)((int)pvVar11 + 0x16c);
      puVar17[0x12] = 2;
      puVar17[0x14] = 0;
      puVar17[0x15] = 0;
      puVar17[0x16] = 0xffffffffffffffff;
      puVar17[0x17] = 0;
      MB_genericExplosion
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff8000000000000,0x3fe0000000000000,
                 0x4022000000000000,0x3ff0000000000000,0x4014000000000000,uVar16,&DAT_00a15d30,
                 lVar21 + 0x10,2,0,10,3,0x10);
      auVar42 = ZEXT416(0);
      (moby->pos).x = GameCamera.posX;
      (moby->pos).y = GameCamera.posY;
      fVar51 = GameCamera.posZ;
      (moby->pos).w = (f32)GameCamera.field8_0x14c;
      (moby->pos).z = fVar51 + 20.0;
      auVar48 = loadVectorLeftIndexed(0x18,0x256ed8);
      auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                 auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60);
      puVar23 = (undefined4 *)0x18;
      if ((bool)(in_cr6 >> 1 & 1)) {
        puVar23 = (undefined4 *)0x0;
        do {
          puVar23 = (undefined4 *)((int)puVar23 + 1);
          fVar4 = (moby->pos).x;
          puVar17[0x23] = (longlong)(int)puVar23;
          iVar24 = (int)uVar31;
          *(f32 *)(iVar24 + 0x10) = fVar4;
          *(f32 *)(iVar24 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar24 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar24 + 0x1c) = (moby->pos).w;
          uVar31 = uVar31 + 0x10;
        } while ((float)(longlong)puVar17[0x23] < 4.0);
      }
    }
  }
  else {
    bVar32 = (bVar3 == 2) << 1;
    if (bVar3 == 3) {
      fVar51 = *(float *)((int)pvVar11 + 0x124) - (moby->pos).y;
      fVar1 = *(float *)((int)pvVar11 + 0x120) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar11 + 0x128) - (moby->pos).z;
      fVar5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar51 * fVar51);
      dVar41 = 0.0;
      dVar40 = 1.0;
      fVar6 = (DAT_0079bcdc * g_FrameTime) / fVar5;
      dVar34 = dVar41;
      if (0.0 - fVar5 < 0.0) {
        dVar34 = (double)(fVar51 * fVar6);
      }
      dVar35 = dVar41;
      if (0.0 - fVar5 < 0.0) {
        dVar35 = (double)(fVar1 * fVar6);
      }
      dVar37 = dVar41;
      if (0.0 - fVar5 < 0.0) {
        dVar37 = (double)(fVar2 * fVar6);
      }
      if (fVar5 - 0.0 < 0.0) {
        dVar34 = (double)(fVar51 * fVar6);
      }
      if (fVar5 - 0.0 < 0.0) {
        dVar35 = (double)(fVar1 * fVar6);
      }
      if (fVar5 - 0.0 < 0.0) {
        dVar37 = (double)(fVar2 * fVar6);
      }
      Delt(1.0,g_FrameTime,(float *)((int)pvVar11 + 0x14c));
      dVar38 = (double)*(float *)((int)pvVar11 + 0x14c);
      fVar51 = (float)(dVar38 * (double)(float)(dVar35 - (double)*(float *)((int)pvVar11 + 0x130)) +
                      (double)*(float *)((int)pvVar11 + 0x130));
      dVar35 = (double)fVar51;
      fVar1 = (float)(dVar38 * (double)(float)(dVar34 - (double)*(float *)((int)pvVar11 + 0x134)) +
                     (double)*(float *)((int)pvVar11 + 0x134));
      dVar36 = (double)fVar1;
      fVar2 = (float)(dVar38 * (double)(float)(dVar37 - (double)*(float *)((int)pvVar11 + 0x138)) +
                     (double)*(float *)((int)pvVar11 + 0x138));
      dVar37 = (double)fVar2;
      *(float *)((int)puVar17 + 0xcc) = fVar51;
      *(float *)(puVar17 + 0x1a) = fVar1;
      fVar1 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar51 = (float)((double)(moby->pos).z + dVar37);
      *(float *)((int)puVar17 + 0xd4) = (float)(ABS(dVar35) - ABS(dVar36));
      uVar13 = *(uint *)((int)puVar17 + 0xcc);
      fVar6 = *(float *)((int)puVar17 + 0xcc);
      uVar14 = *(uint *)(puVar17 + 0x1a);
      (moby->pos).x = (float)((double)fVar1 + dVar35);
      (moby->pos).y = (float)((double)fVar5 + dVar36);
      (moby->pos).z = fVar51;
      pvVar12 = moby->pVar;
      uVar27 = ZEXT48(pvVar12);
      fVar1 = (moby->transform).v0.x;
      uVar28 = (ulonglong)(uVar13 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)(uVar14 >> 0x1d) & 4;
      dVar34 = ABS((double)fVar6);
      if ((double)*(float *)((int)puVar17 + 0xd4) - dVar41 < 0.0) {
        dVar34 = ABS(dVar36);
      }
      fVar5 = (moby->transform).v0.y;
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar6 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      dVar38 = ABS((double)*(float *)(puVar17 + 0x1a));
      if ((double)*(float *)((int)puVar17 + 0xd4) - dVar41 < 0.0) {
        dVar38 = ABS(dVar35);
      }
      fVar7 = (moby->transform).v0.z;
      dVar39 = dVar41;
      if (dVar41 < dVar34) {
        lVar21 = uVar20 - 0x160;
        lVar25 = uVar20 - 0x78;
        lVar29 = uVar20 - 0x68;
        lVar33 = 2;
        fVar9 = (float)(dVar38 - dVar34) / (float)(dVar38 + dVar34);
        fVar8 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0x104) = fVar9;
        *(float *)((int)puVar17 + 0xfc) = fVar9;
        *(float *)(puVar17 + 0x20) = fVar9;
        *(float *)(puVar17 + 0x1f) = fVar9;
        fVar9 = fVar8 * fVar8;
        *(float *)((int)puVar17 + 0xfc) = *(float *)((int)puVar17 + 0xfc) * fVar8;
        *(float *)(puVar17 + 0x20) = *(float *)(puVar17 + 0x20) * fVar9;
        *(float *)((int)puVar17 + 0x104) = *(float *)((int)puVar17 + 0x104) * fVar9 * fVar8;
        do {
          *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xe8) * fVar9 * fVar9;
          iVar24 = (int)lVar25;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar9 * fVar9;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar20 - 0x78;
        pfVar30 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar25 = lVar29;
        do {
          fVar9 = *pfVar30;
          fVar8 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xf8) * fVar9;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
          lVar25 = lVar25 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar25 = 2;
        lVar21 = lVar22;
        dVar34 = dVar41;
        do {
          iVar24 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar18 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xf8)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar39 = (double)((float)(dVar34 + 0.7853981852531433) * fVar10 + fVar6);
      }
      *(float *)((int)puVar17 + 0xc4) = fVar2;
      (moby->rotation).z = (float)dVar39;
      dVar37 = ABS(dVar37);
      fVar2 = SQRT((float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36)));
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar17 + 0x18) = fVar2;
      *(float *)(puVar17 + 0x19) = (float)(dVar35 - dVar37);
      uVar28 = (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1d) & 4;
      dVar34 = ABS((double)*(float *)(puVar17 + 0x18));
      if ((double)*(float *)(puVar17 + 0x19) - dVar41 < 0.0) {
        dVar34 = dVar37;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      dVar37 = ABS((double)*(float *)((int)puVar17 + 0xc4));
      if ((double)*(float *)(puVar17 + 0x19) - dVar41 < 0.0) {
        dVar37 = dVar35;
      }
      fVar6 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      dVar35 = dVar41;
      if (dVar41 < dVar34) {
        lVar21 = uVar20 - 0x160;
        lVar29 = uVar20 - 0x88;
        lVar25 = uVar20 - 0x98;
        lVar33 = 2;
        fVar10 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
        fVar9 = fVar10 * fVar10;
        *(float *)((int)puVar17 + 0xe4) = fVar10;
        *(float *)((int)puVar17 + 0xdc) = fVar10;
        *(float *)(puVar17 + 0x1c) = fVar10;
        *(float *)(puVar17 + 0x1b) = fVar10;
        fVar10 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0xdc) = *(float *)((int)puVar17 + 0xdc) * fVar9;
        *(float *)(puVar17 + 0x1c) = *(float *)(puVar17 + 0x1c) * fVar10;
        *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar10 * fVar9;
        do {
          *(float *)((int)lVar21 + 0xd8) = *(float *)((int)lVar21 + 200) * fVar10 * fVar10;
          iVar24 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar10 * fVar10;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar20 - 0x98;
        pfVar30 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar25 = lVar29;
        do {
          fVar10 = *pfVar30;
          fVar9 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar21 + 0xd8) = *(float *)((int)lVar21 + 0xd8) * fVar10;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
          lVar25 = lVar25 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar21 = 2;
        dVar34 = dVar41;
        do {
          iVar24 = (int)lVar22;
          iVar18 = (int)lVar29;
          lVar22 = lVar22 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xd8)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar6);
      }
      (moby->rotation).y = (float)-dVar35;
      puVar23 = worldUpdateTime;
      uVar26 = *(ushort *)((int)pvVar12 + 0x166);
      dVar34 = (double)(fVar7 * fVar7 + fVar1 * fVar1 + fVar5 * fVar5);
      if ((double)(float)SQRT(dVar34) != dVar41) {
        dVar41 = 1.0 / SQRT(dVar34);
        dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar41) * dVar41 - dVar40
                                                 ) * (double)(float)(dVar41 * 0.5) + dVar41);
        dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar41) * dVar41 - dVar40
                                                 ) * (double)(float)(dVar41 * 0.5) + dVar41);
        dVar41 = (double)(fVar7 * (float)(-(double)(float)((double)(float)(dVar34 * dVar41) * dVar41
                                                          - dVar40) * (double)(float)(dVar41 * 0.5)
                                         + dVar41));
      }
      dVar34 = (double)(float)(dVar41 + (double)fVar51);
      if (((uint)worldUpdateTime & 3) == 0) {
        auVar42 = ZEXT416(0xfffffff0);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        uVar26 = uVar26 + 1 & 0xf;
        *(ushort *)((int)pvVar12 + 0x166) = uVar26;
        auVar48 = loadVectorLeftIndexed(0x164,uVar27);
        auVar49 = loadVectorRightIndexed(0x174,uVar27);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar42);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar42);
        auVar42 = loadVectorLeftIndexed(0x18,0x256ed8);
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        if ((bool)(bVar32 >> 1 & 1)) {
          auVar46.piece<0,4>() = auVar49.piece<0,4>() + 1;
          auVar46.piece<8,8>() = auVar49.piece<8,8>();
          auVar46.piece<4,4>() = auVar49.piece<4,4>() + 1;
          auVar47.piece<0,8>() = auVar46.piece<0,8>();
          auVar47.piece<12,4>() = auVar49.piece<12,4>();
          auVar47.piece<8,4>() = auVar49.piece<8,4>() + 1;
          auVar49.piece<0,12>() = auVar47.piece<0,12>();
          auVar49.piece<12,4>() = auVar47.piece<12,4>() + 1;
          auVar42 = vectorSplatHalfWord(auVar49,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x164,uVar27);
          *(undefined2 *)((int)pvVar12 + 0x164) = uVar15;
        }
      }
      iVar24 = (int)((longlong)(short)uVar26 << 4);
      *(f32 *)((int)pvVar12 + iVar24 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar12 + iVar24 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar12 + iVar24 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar12 + iVar24 + 0x1c) = (moby->pos).w;
      *(undefined4 *)((int)pvVar12 + (int)((longlong)*(short *)((int)pvVar12 + 0x166) << 4) + 0x1c)
           = 0x3f800000;
      if (DAT_00fa3f08 != puVar23) {
        DAT_00fa3f08 = puVar23;
        RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,moby);
        puVar23 = (undefined4 *)RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,moby);
      }
      if (dVar34 < (double)*(float *)((int)pvVar11 + 0x128)) {
        PlayMobySound(1,0,moby);
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        moby->state = '\x04';
        auVar48 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x44,0x256ed8);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        fVar51 = *(float *)((int)pvVar11 + 0x128);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar48);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x160,
                            uVar31);
        *(undefined4 *)((int)pvVar11 + 0x160U & 0xfffffffc) = uVar16;
        fVar51 = fVar51 + 0.7;
        puVar23 = &DAT_00256ed8;
        if ((moby->pos).z < fVar51) {
          (moby->pos).z = fVar51;
        }
      }
    }
    else if (bVar3 == 2) {
      iVar24 = M1355_00256a60(lVar21,uVar31 + 0x110);
      if (iVar24 != 0) {
        M1355_002568a0(lVar21,uVar31 + 0x110);
      }
      puVar19 = worldUpdateTime;
      pvVar12 = moby->pVar;
      uVar20 = ZEXT48(pvVar12);
      if (((uint)worldUpdateTime & 3) == 0) {
        auVar42 = ZEXT416(0xfffffff0);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        *(ushort *)((int)pvVar12 + 0x166) = *(short *)((int)pvVar12 + 0x166) + 1U & 0xf;
        auVar48 = loadVectorLeftIndexed(0x164,uVar20);
        auVar49 = loadVectorRightIndexed(0x174,uVar20);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar42);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar42);
        auVar42 = loadVectorLeftIndexed(0x18,0x256ed8);
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        if ((bool)(bVar32 >> 1 & 1)) {
          auVar43.piece<0,4>() = auVar49.piece<0,4>() + 1;
          auVar43.piece<8,8>() = auVar49.piece<8,8>();
          auVar43.piece<4,4>() = auVar49.piece<4,4>() + 1;
          auVar44.piece<0,8>() = auVar43.piece<0,8>();
          auVar44.piece<12,4>() = auVar49.piece<12,4>();
          auVar44.piece<8,4>() = auVar49.piece<8,4>() + 1;
          auVar45.piece<0,12>() = auVar44.piece<0,12>();
          auVar45.piece<12,4>() = auVar44.piece<12,4>() + 1;
          auVar42 = vectorSplatHalfWord(auVar45,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x164,uVar20);
          *(undefined2 *)((int)pvVar12 + 0x164) = uVar15;
        }
      }
      iVar24 = (int)((longlong)*(short *)((int)pvVar12 + 0x166) << 4);
      *(f32 *)((int)pvVar12 + iVar24 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar12 + iVar24 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar12 + iVar24 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar12 + iVar24 + 0x1c) = (moby->pos).w;
      *(undefined4 *)((int)pvVar12 + (int)((longlong)*(short *)((int)pvVar12 + 0x166) << 4) + 0x1c)
           = 0x3f800000;
      if (DAT_00fa3f08 != puVar19) {
        DAT_00fa3f08 = puVar19;
        RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,moby);
        RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,moby);
      }
      puVar23 = (undefined4 *)MB_randInt(DAT_0079bcf4);
      if (puVar23 == (undefined4 *)0x0) {
        moby->state = '\x03';
        fVar51 = (moby->rotation).z + 1.5707963;
        fVar1 = 3.1415925 - fVar51;
        if (fVar51 - (3.1415925 - fVar51) < 0.0) {
          fVar1 = fVar51;
        }
        fVar2 = -3.1415925 - fVar51;
        if ((-3.1415925 - fVar51) - fVar1 < 0.0) {
          fVar2 = fVar1;
        }
        fVar51 = fVar2 * fVar2;
        fVar6 = DAT_0079bcd8 * g_FrameTime;
        fVar1 = fVar51 * fVar51 * fVar2;
        fVar5 = fVar51 * fVar1;
        *(float *)((int)pvVar11 + 0x130) =
             fVar6 * (fVar51 * fVar5 * 2.601887e-06 +
                     fVar5 * -0.0001980741 +
                     fVar1 * 0.0083330255 + fVar51 * fVar2 * -0.16666657 + fVar2);
        fVar51 = (moby->rotation).z;
        fVar1 = 3.1415925 - fVar51;
        if (fVar51 - (3.1415925 - fVar51) < 0.0) {
          fVar1 = fVar51;
        }
        *(undefined4 *)((int)pvVar11 + 0x138) = *(undefined4 *)((int)pvVar11 + 0x144);
        *(undefined4 *)((int)pvVar11 + 0x14c) = 0;
        fVar2 = -3.1415925 - fVar51;
        if ((-3.1415925 - fVar51) - fVar1 < 0.0) {
          fVar2 = fVar1;
        }
        fVar51 = fVar2 * fVar2;
        fVar1 = fVar51 * fVar51 * fVar2;
        fVar5 = fVar51 * fVar1;
        *(float *)((int)pvVar11 + 0x134) =
             fVar6 * (fVar51 * fVar5 * 2.601887e-06 +
                     fVar5 * -0.0001980741 +
                     fVar1 * 0.0083330255 + fVar51 * fVar2 * -0.16666657 + fVar2);
        puVar23 = (undefined4 *)0x0;
      }
    }
    else {
      puVar23 = (undefined4 *)(uint)bVar3;
      if (bVar3 == 0) {
        *(float *)((int)pvVar11 + 0x150) = DAT_0071f418 * 3.1415927;
        fVar1 = g_FrameTime;
        *(float *)((int)pvVar11 + 0x154) = g_FrameTime * 12.566371;
        *(float *)((int)pvVar11 + 0x158) = fVar51 * 10.0;
        *(float *)((int)pvVar11 + 0x15c) = fVar1 * 10.0;
        dVar34 = (double)MB_randRot();
        *(float *)((int)pvVar11 + 0x168) = (float)dVar34;
        *(f32 *)((int)pvVar11 + 0x120) = (moby->pos).x;
        fVar4 = (moby->pos).y;
        moby->drawDistance = 0xff;
        *(f32 *)((int)pvVar11 + 0x124) = fVar4;
        fVar51 = (moby->pos).z;
        *(float *)((int)pvVar11 + 0x128) = fVar51;
        *(f32 *)((int)pvVar11 + 300) = (moby->pos).w;
        *(float *)((int)pvVar11 + 0x128) = fVar51 + 5.0;
        dVar34 = (double)GetGroundZ(0x3fe0000000000000,uVar31 + 0x120,0);
        *(float *)((int)pvVar11 + 0x128) = (float)dVar34;
        M1355_002568a0(lVar21,uVar31 + 0x110);
        moby->state = '\x01';
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
        puVar23 = (undefined4 *)0x1;
      }
    }
  }
  return puVar23;
}


