// game/update/moby1124.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1d64b0-0x1d6ad0
#include "game/update/moby1124.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1123.h"
#include "game/update/moby1300.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x01d64b0 (0x30c bytes)
void M1124_001d64b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong unaff_r22;
  int iVar9;
  ulonglong unaff_r23;
  longlong lVar10;
  ulonglong unaff_r24;
  longlong lVar11;
  ulonglong unaff_r25;
  undefined *puVar12;
  ulonglong unaff_r26;
  longlong lVar13;
  float *pfVar14;
  ulonglong unaff_r27;
  longlong lVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar16;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar10 = uVar7 - 0x2e0;
  puVar3 = (ulonglong *)lVar10;
  *puVar3 = uVar7;
  puVar3[0x5e] = in_LR;
  lVar5 = uVar7 - 0x60;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  puVar3[0x58] = unaff_r28;
  puVar3[0x5b] = unaff_r31;
  puVar3[0x5a] = unaff_r30;
  lVar17 = uVar7 - 0x270;
  puVar3[0x59] = unaff_r29;
  iVar1 = *(int *)(param_1 + 0x78);
  puVar3[0x57] = unaff_r27;
  puVar3[0x56] = unaff_r26;
  puVar3[0x55] = unaff_r25;
  puVar3[0x54] = unaff_r24;
  puVar3[0x53] = unaff_r23;
  puVar3[0x52] = unaff_r22;
  FastEulerToMtx1(lVar17,param_1 + 0x40);
  FastMtxScaleIdentity((double)DAT_0076477c,uVar7 - 0x230);
  FastVecMtx4Mul(lVar17,lVar17,uVar7 - 0x230);
  uVar8 = GetEffectTex(0xe);
  SetGSReg(0x18,uVar8);
  uVar8 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar8);
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar8);
  uVar8 = idol_draw::PackCmd(DAT_00ef26c8,DAT_00764660,DAT_00ef26cc,DAT_00764664,0x80);
  SetGSReg(3,uVar8);
  STUB_00071170();
  auVar20 = loadVectorLeftIndexed(lVar5,0x1d64a8);
  iVar9 = 0;
  auVar21 = ZEXT416(0);
  auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  lVar11 = uVar7 - 0x1f0;
  auVar21 = loadVectorLeftIndexed(4,0x1d64a8);
  iVar16 = 0;
  auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  puVar12 = &DAT_00764720;
  lVar13 = uVar7 - 0x1c0;
  lVar15 = uVar7 - 0x1b8;
  lVar17 = lVar11;
  do {
    FastEulerToMtx1(lVar17,puVar12);
    FastVecMtx4Mul(lVar17,uVar7 - 0x270,lVar17);
    pfVar14 = (float *)lVar13;
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    iVar9 = iVar9 + 1;
    puVar12 = puVar12 + 0x10;
    auVar19.piece<0,4>() = auVar22.piece<0,4>() + 1;
    auVar19.piece<8,8>() = auVar22.piece<8,8>();
    auVar19.piece<4,4>() = auVar22.piece<4,4>() + 1;
    auVar23.piece<0,8>() = auVar19.piece<0,8>();
    auVar23.piece<12,4>() = auVar22.piece<12,4>();
    auVar23.piece<8,4>() = auVar22.piece<8,4>() + 1;
    auVar22.piece<0,12>() = auVar23.piece<0,12>();
    auVar22.piece<12,4>() = auVar23.piece<12,4>() + 1;
    auVar18 = vectorMultiplyAddFloatingPoint(auVar18,auVar20,auVar21);
    lVar17 = lVar17 + 0x40;
    *pfVar14 = *pfVar14 + *(float *)(param_1 + 0x10);
    pfVar14[1] = pfVar14[1] + *(float *)(param_1 + 0x14);
    pfVar14[2] = pfVar14[2] + *(float *)(param_1 + 0x18);
    auVar19 = loadVectorLeftIndexed(lVar5,lVar15);
    lVar13 = lVar13 + 0x40;
    auVar18 = vectorAddFloatingPoint(auVar18,auVar19);
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0,lVar15);
    *(undefined4 *)lVar15 = uVar2;
    *(undefined4 *)((int)lVar10 + 300) = 0x3f800000;
    uVar2 = DAT_00ef26e0;
    lVar15 = lVar15 + 0x40;
    lVar10 = lVar10 + 0x40;
  } while (iVar9 < 4);
  *(undefined4 *)(puVar3 + 0x46) = DAT_00ef26dc;
  *(int *)(puVar3 + 0x47) = iVar1 + 0xf00;
  *(undefined4 *)((int)puVar3 + 0x234) = uVar2;
  puVar12 = PTR_DAT_00764674;
  *(undefined4 *)((int)puVar3 + 0x23c) = DAT_00764670;
  uVar2 = DAT_0076476c;
  *(undefined **)(puVar3 + 0x48) = puVar12;
  uVar4 = DAT_00ef26d8;
  *(undefined4 *)((int)puVar3 + 0x24c) = uVar2;
  *(undefined4 *)(puVar3 + 0x4a) = uVar4;
  *(undefined4 *)((int)puVar3 + 0x244) = 0x1e;
  *(int *)(puVar3 + 0x49) = iVar1;
  do {
    DrawColorGradientStrip(uVar7 - 0xb0,lVar11);
    iVar16 = iVar16 + 1;
    lVar11 = lVar11 + 0x40;
  } while (iVar16 < 4);
  return;
}


// 0x01d67f0 (0x2e0 bytes)
/* Moby 1124 */

void UpdateMoby_1124(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint boltValue;
  double dVar4;
  double dVar5;
  double dVar6;
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
  float local_b0;
  float local_ac;
  float local_a8;
  Vec4 local_a0;
  
  fVar1 = moby->pClass->gScale;
  if (moby->setByGroup != '\0') {
    moby->setByGroup = moby->setByGroup + -1;
  }
  moby->scale = fVar1 * DAT_007647b0;
  iVar2 = MB_damage(moby,0x330000,0);
  if ((iVar2 != 0) && (moby->setByGroup == '\0')) {
    iVar2 = 0;
    dVar8 = 2.0;
    dVar9 = 1.570796251296997;
    dVar10 = 3.141592502593994;
    dVar11 = -3.141592502593994;
    dVar12 = -0.16666656732559204;
    dVar13 = 0.008333025500178337;
    dVar14 = -0.0001980741071747616;
    dVar15 = 2.601886990305502e-06;
    dVar16 = 0.0;
    dVar17 = 4.0;
    dVar18 = 3.0;
    dVar19 = 6.0;
    do {
      boltValue = 1;
      iVar3 = MB_randInt(4);
      local_a0.x = (moby->pos).x;
      local_a0.y = (moby->pos).y;
      local_a0.w = (moby->pos).w;
      if (iVar3 < 2) {
        if ((-1 < iVar3) && (0 < iVar3)) {
          boltValue = 5;
        }
      }
      else if (iVar3 < 3) {
        boltValue = 0x14;
      }
      else if (iVar3 < 4) {
        boltValue = 0x32;
      }
      local_a0.z = (float)((double)(moby->pos).z + dVar8);
      dVar4 = (double)MB_randRot();
      dVar5 = (double)(float)(dVar4 + dVar9);
      dVar4 = (double)(float)(dVar10 - dVar5);
      if (dVar5 - (double)(float)(dVar10 - dVar5) < 0.0) {
        dVar4 = dVar5;
      }
      dVar6 = (double)(float)(dVar11 - dVar5);
      if ((double)(float)(dVar11 - dVar5) - dVar4 < 0.0) {
        dVar6 = dVar4;
      }
      dVar4 = (double)(float)(dVar6 * dVar6);
      dVar7 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar6));
      dVar5 = (double)(float)(dVar4 * dVar7);
      dVar5 = (double)(float)((double)(float)(dVar4 * dVar5) * dVar15 +
                             (double)(float)(dVar5 * dVar14 +
                                            (double)(float)(dVar7 * dVar13 +
                                                           (double)(float)((double)(float)(dVar4 * 
                                                  dVar6) * dVar12 + dVar6))));
      dVar4 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
      local_b0 = (float)((double)(float)(dVar4 * (double)g_FrameTime) * dVar5);
      dVar5 = (double)MB_randRot();
      dVar4 = (double)(float)(dVar10 - dVar5);
      if (dVar5 - (double)(float)(dVar10 - dVar5) < 0.0) {
        dVar4 = dVar5;
      }
      dVar6 = (double)(float)(dVar11 - dVar5);
      if ((double)(float)(dVar11 - dVar5) - dVar4 < 0.0) {
        dVar6 = dVar4;
      }
      dVar4 = (double)(float)(dVar6 * dVar6);
      dVar7 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar6));
      dVar5 = (double)(float)(dVar4 * dVar7);
      dVar5 = (double)(float)((double)(float)(dVar4 * dVar5) * dVar15 +
                             (double)(float)(dVar5 * dVar14 +
                                            (double)(float)(dVar7 * dVar13 +
                                                           (double)(float)((double)(float)(dVar4 * 
                                                  dVar6) * dVar12 + dVar6))));
      dVar4 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
      local_a8 = 0.0;
      local_ac = (float)((double)(float)(dVar4 * (double)g_FrameTime) * dVar5);
      dVar4 = (double)MB_randRangeFloat((float)dVar18,(float)dVar19);
      local_a8 = (float)(dVar4 * (double)g_FrameTime);
      MB_SpawnBolts(moby,&local_a0,&local_b0,0,boltValue,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    moby->damage = -1;
  }
  return;
}


