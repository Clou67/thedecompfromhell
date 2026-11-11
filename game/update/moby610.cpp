// game/update/moby610.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3d94e4-0x3da46c
#include <stdio.h>
#include "game/update/moby610.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/moby1400.h"
#include "idol/fastfunc.h"

// 0x03d94e4 (0x14 bytes)
void M610_003d94e4(void)

{
  DAT_00853824 = 0x10000;
  return;
}


// 0x03d9508 (0x228 bytes)
void M610_003d9508(int param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  Cuboid *pCVar5;
  int iVar6;
  undefined2 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  
  pCVar5 = Cuboids;
  iVar3 = *(int *)(param_1 + 0x78);
  dVar14 = (double)*param_3;
  iVar4 = iVar3 + (int)(param_2 << 4);
  uVar12 = 0;
  dVar13 = (double)param_3[1];
  iVar6 = *(int *)(iVar3 + 0x504);
  dVar11 = (double)param_3[2];
  fVar1 = Cuboids[iVar6].pos.y;
  *(float *)(iVar4 + 0x20) = Cuboids[iVar6].pos.x;
  fVar2 = pCVar5[iVar6].pos.z;
  *(float *)(iVar4 + 0x24) = fVar1;
  fVar1 = pCVar5[iVar6].pos.w;
  *(float *)(iVar4 + 0x28) = fVar2;
  *(float *)(iVar4 + 0x2c) = fVar1;
  dVar10 = (double)*(float *)(iVar3 + 0x14);
  dVar8 = (double)MB_randRangeSigned(0,(double)*(float *)(iVar3 + 0x18));
  dVar9 = (double)MB_randRangeSigned(uVar12,(double)*(float *)(iVar3 + 0x1c));
  *(float *)(iVar4 + 0x20) =
       *(float *)(iVar4 + 0x20) + -(float)(dVar10 * dVar14) + -(float)(dVar13 * dVar8);
  *(float *)(iVar4 + 0x24) =
       (float)(dVar14 * dVar8 + (double)(*(float *)(iVar4 + 0x24) + -(float)(dVar10 * dVar13)));
  *(float *)(iVar4 + 0x28) =
       (float)((double)(*(float *)(iVar4 + 0x28) + -(float)(dVar10 * dVar11)) + dVar9);
  dVar8 = (double)MB_randRangeFloat(DAT_008538ec,DAT_008538f0);
  *(float *)(iVar4 + 0x2c) = (float)dVar8;
  dVar8 = (double)MB_randRangeFloat
                            ((float)(longlong)DAT_008538e4,(float)(longlong)DAT_008538e8);
  dVar9 = (double)g_FrameTime;
  fVar1 = *(float *)(iVar3 + 0x14);
  *(float *)(iVar3 + (int)(param_2 << 2) + 0x440) = (float)(dVar8 * dVar9);
  iVar6 = FastDoubleToInt((double)((fVar1 * 2.0) / (float)(dVar8 * dVar9)));
  iVar3 = iVar3 + (int)(param_2 << 1);
  fVar1 = animationSpeed * ((float)(longlong)iVar6 + 0.5);
  *(undefined2 *)(iVar3 + 0x3e0) = 0;
  uVar7 = (undefined2)(int)fVar1;
  *(undefined2 *)(iVar3 + 800) = uVar7;
  *(undefined2 *)(iVar3 + 0x380) = uVar7;
  return;
}


// 0x03d9760 (0x428 bytes)
void M610_003d9760(void *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  short *psVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  float *pfVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  short *psVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> local_d0;
  Vec4 local_c0;
  longlong local_b0;
  
  fVar1 = *(float *)((int)param_1 + 0x48);
  fVar6 = fVar1 + 1.5707963;
  uVar22 = 0;
  fVar7 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar7 = fVar1;
  }
  fVar9 = 3.1415925 - fVar6;
  if (fVar6 - (3.1415925 - fVar6) < 0.0) {
    fVar9 = fVar6;
  }
  fVar8 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
    fVar8 = fVar7;
  }
  uVar5 = *(uint *)((int)param_1 + 0x78);
  fVar1 = -3.1415925 - fVar6;
  if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
    fVar1 = fVar9;
  }
  fVar6 = fVar8 * fVar8;
  fVar7 = fVar1 * fVar1;
  fVar11 = fVar6 * fVar6 * fVar8;
  fVar9 = fVar7 * fVar7 * fVar1;
  fVar12 = fVar6 * fVar11;
  fVar10 = fVar7 * fVar9;
  local_c0.x = g_heroPosition.x;
  local_c0.y = g_heroPosition.y;
  local_c0.w = g_heroPosition.w;
  local_c0.z = g_heroPosition.z + 1.0;
  iVar17 = MB_IsPntInCuboid(&local_c0,(longlong)*(int *)(uVar5 + 0x504));
  dVar29 = 8.0;
  dVar30 = 2.356194496154785;
  auVar34 = loadVectorLeftIndexed(0x28,0x3d9730);
  dVar31 = 20.5;
  auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  do {
    lVar21 = (uVar22 & 0x7fffffff) * 2;
    uVar24 = lVar21 + (ulonglong)uVar5 + 800;
    uVar16 = uVar24 & 0xffffffff;
    iVar18 = FastDecTimerS16(uVar16);
    iVar23 = (int)uVar22;
    if (iVar18 == 0) {
      iVar18 = (int)lVar21;
      psVar14 = (short *)(iVar18 + uVar5 + 0x380);
      puVar15 = (undefined2 *)(iVar18 + uVar5 + 0x3e0);
      local_b0 = (longlong)DAT_008538c4;
      psVar25 = (short *)uVar24;
      sVar3 = *psVar25;
      sVar4 = *psVar14;
      dVar28 = (double)local_b0;
      if (sVar4 - DAT_008538e0 < (int)sVar3) {
        dVar26 = (double)FastIntToDouble((longlong)sVar4 - (longlong)sVar3);
        dVar27 = (double)FastIntToDouble(DAT_008538e0);
        uVar19 = FastDoubleToInt
                           ((double)(float)(dVar28 * (double)(float)(dVar26 / dVar27)));
        *puVar15 = uVar19;
      }
      else {
        dVar26 = (double)FastIntToDouble(local_b0,(longlong)sVar3);
        dVar27 = (double)FastIntToDouble(*psVar14 - DAT_008538e0);
        uVar19 = FastDoubleToInt
                           ((double)(float)(dVar28 * (double)(float)(dVar26 / dVar27)));
        *puVar15 = uVar19;
      }
      pfVar20 = (float *)(iVar23 * 0x10 + uVar5 + 0x20);
      fVar2 = *(float *)((int)((uVar22 & 0xffffffff) << 2) + uVar5 + 0x440);
      fVar13 = (fVar7 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar7 * fVar1 * -0.16666657 + fVar1)
               * fVar2 + *pfVar20;
      *pfVar20 = fVar13;
      pfVar20[1] = (fVar6 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8) * fVar2 + pfVar20[1]
      ;
      pfVar20[2] = fVar2 * 0.0 + pfVar20[2];
      if (((iVar17 != 0) && (ABS((double)(fVar13 - GameCamera.posX)) < dVar29)) &&
         (ABS((double)(*(float *)(iVar23 * 0x10 + uVar5 + 0x24) - GameCamera.posY)) < dVar29)) {
        dVar28 = (double)FastSubRots
                                   (*(float *)((int)param_1 + 0x48),GameCamera.rot.radius);
        if (dVar30 < dVar28) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
          local_b0 = (longlong)(int)((double)animationSpeed * dVar31);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          if ((int)((double)animationSpeed * dVar31) < (int)*psVar25) {
            auVar32 = vectorSplatHalfWord(auVar32,1);
            sVar3 = storeVectorElementHalfWordIndexed(auVar32,0,uVar16);
            *psVar25 = sVar3;
          }
        }
      }
    }
    else if ((iVar17 == 0) || (iVar23 < 0x18)) {
      M610_003d9508(param_1,uVar22,local_d0);
    }
    uVar22 = (ulonglong)(iVar23 + 1);
  } while (iVar23 + 1 < 0x30);
  RegisterPostDraw(&PTR_M611_003da478_0070d8d0,param_1);
  return;
}


// 0x03d9bb8 (0x8b4 bytes)
// strings: 00656c24: '*Error: Moby 610 (wind-control) with no cuboid index (wind pushing hero area). UID: %d - RAR\n' | 00656c84: '*Error: Moby 610 (wind-control) with no fxArea cuboid (fx drawing area). UID: %d - RAR\n' | 00656cdc: '*Error: Moby 610 (wind-control) with no fxAct cuboid (fx activation area). UID: %d - RAR\n'

/* Moby 610 */

void UpdateMoby_610_WindControl(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  Cuboid *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 in_LR;
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
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<32> local_80;
  
  piVar4 = (int *)moby->pVar;
  uVar15 = ZEXT48(piVar4);
  if (moby->state == '\0') {
    moby->state = '\x01';
    pCVar7 = Cuboids;
    if (*piVar4 < 0) {
      printf("*Error: Moby 610 (wind-control) with no cuboid index (wind pushing hero area). UID: %d - RAR\n"
                   ,moby->uid);
      DeleteMoby(moby);
      return;
    }
    if (piVar4[0x141] < 0) {
      printf("*Error: Moby 610 (wind-control) with no fxArea cuboid (fx drawing area). UID: %d - RAR\n"
                   ,moby->uid);
      DeleteMoby(moby);
      return;
    }
    if (piVar4[0x140] < 0) {
      printf("*Error: Moby 610 (wind-control) with no fxAct cuboid (fx activation area). UID: %d - RAR\n"
                   ,moby->uid);
      DeleteMoby(moby);
      return;
    }
    iVar14 = 0;
    *(undefined2 *)((int)piVar4 + 0xe) = 0;
    pCVar7 = pCVar7 + piVar4[0x141];
    fVar1 = (pCVar7->matrix).v0.y;
    fVar2 = (pCVar7->matrix).v0.x;
    fVar3 = (pCVar7->matrix).v0.z;
    auVar29 = ZEXT416(0xfffffff0);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    piVar4[5] = (int)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 2.0);
    fVar1 = (pCVar7->matrix).v1.y;
    fVar2 = (pCVar7->matrix).v1.x;
    fVar3 = (pCVar7->matrix).v1.z;
    auVar30 = loadVectorLeftIndexed(0x508,uVar15);
    auVar32 = loadVectorRightIndexed(0x518,uVar15);
    auVar29 = vectorShiftRightAlgebraicWord
                        (auVar30 | auVar32,
                         auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar30 = vectorConvertFromSignedFixedPointWord(auVar29,0);
    piVar4[6] = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar1 = (pCVar7->matrix).v2.y;
    fVar2 = (pCVar7->matrix).v2.x;
    fVar3 = (pCVar7->matrix).v2.z;
    piVar4[7] = (int)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    auVar29 = loadVectorLeftIndexed(4,0x3d9b88);
    auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = vectorAddFloatingPoint
                        (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar31);
    fVar1 = animationSpeed * ((float)(longlong)(int)*(short *)(piVar4 + 0x142) + 0.5);
    auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar29 = vectorSplatHalfWord(auVar29,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar29,0x50a,uVar15);
    *(undefined2 *)((int)piVar4 + 0x50a) = uVar5;
    dVar16 = (double)FastIntToDouble((short)(int)fVar1);
    piVar4[0x143] = (int)(float)(1.0 / dVar16);
    do {
      M610_003d9508(moby,iVar14,local_80);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x30);
  }
  iVar14 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar4[0x140]);
  if (iVar14 != 0) {
    dVar16 = 1.570796251296997;
    dVar22 = 3.141592502593994;
    fVar1 = (moby->rotation).z + 1.5707963;
    dVar23 = -3.141592502593994;
    dVar24 = -0.16666656732559204;
    dVar25 = 0.008333025500178337;
    dVar26 = -0.0001980741071747616;
    dVar27 = 2.601886990305502e-06;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar9 = fVar3 * fVar3;
    fVar1 = fVar9 * fVar9 * fVar3;
    fVar2 = fVar9 * fVar1;
    DAT_00fa4360 = g_FrameTime * DAT_00853854 *
                   (fVar9 * fVar2 * 2.601887e-06 +
                   fVar2 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3);
    fVar1 = (moby->rotation).z;
    DAT_00fa4368 = 0;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar9 = fVar3 * fVar3;
    fVar1 = fVar9 * fVar9 * fVar3;
    fVar2 = fVar9 * fVar1;
    DAT_00fa4364 = g_FrameTime * DAT_00853854 *
                   (fVar9 * fVar2 * 2.601887e-06 +
                   fVar2 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3);
    dVar28 = 1.0;
    DAT_00fa4370 = 0x3f800000;
    M610_003d9760(moby);
    if ((((g_onMagnerail == 0) && (g_HeroRequestedCamType != 0xd)) &&
        ((DAT_0096afc2 != '\0' || (DAT_00969fec != 0)))) &&
       (iVar14 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar4), iVar14 != 0)) {
      FastDecTimerS16(uVar15 + 0x50a);
      dVar17 = (double)FastIntToDouble(*(undefined2 *)((int)piVar4 + 0x50a));
      iVar14 = DAT_00853850;
      dVar18 = (double)(moby->rotation).z;
      dVar19 = (double)(float)(dVar18 + dVar16);
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      dVar16 = (double)(float)(dVar22 - dVar18);
      if (dVar18 - (double)(float)(dVar22 - dVar18) < 0.0) {
        dVar16 = dVar18;
      }
      dVar20 = (double)(float)(dVar22 - dVar19);
      if (dVar19 - (double)(float)(dVar22 - dVar19) < 0.0) {
        dVar20 = dVar19;
      }
      dVar22 = (double)(float)(dVar23 - dVar18);
      if ((double)(float)(dVar23 - dVar18) - dVar16 < 0.0) {
        dVar22 = dVar16;
      }
      dVar16 = (double)(float)(dVar23 - dVar19);
      if ((double)(float)(dVar23 - dVar19) - dVar20 < 0.0) {
        dVar16 = dVar20;
      }
      dVar18 = (double)(float)(dVar22 * dVar22);
      fVar1 = (float)piVar4[2] * g_FrameTime *
              -(float)(dVar17 * (double)(float)piVar4[0x143] - dVar28);
      dVar23 = (double)(float)(dVar16 * dVar16);
      *(undefined2 *)((int)piVar4 + 0xe) = 1;
      dVar20 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar22));
      auVar30 = loadVectorLeftIndexed(0x3850,0x850000);
      auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
      dVar17 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar16));
      dVar19 = (double)(float)(dVar18 * dVar20);
      dVar21 = (double)(float)(dVar23 * dVar17);
      DAT_00969dd4 = (float)((double)(float)(dVar18 * dVar19) * dVar27 +
                            (double)(float)(dVar19 * dVar26 +
                                           (double)(float)(dVar20 * dVar25 +
                                                          (double)(float)((double)(float)(dVar18 * 
                                                  dVar22) * dVar24 + dVar22)))) * fVar1 +
                     DAT_00969dd4;
      DAT_00969dd0 = (float)((double)(float)(dVar23 * dVar21) * dVar27 +
                            (double)(float)(dVar21 * dVar26 +
                                           (double)(float)(dVar17 * dVar25 +
                                                          (double)(float)((double)(float)(dVar23 * 
                                                  dVar16) * dVar24 + dVar16)))) * fVar1 +
                     DAT_00969dd0;
      auVar30 = loadVectorLeftIndexed(4,0x3d9b88);
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = vectorAddFloatingPoint
                          (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar29);
      fVar1 = animationSpeed * ((float)(longlong)iVar14 + 0.5);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = vectorSplatHalfWord(auVar29,1);
      uVar5 = storeVectorElementHalfWordIndexed(auVar29,0xc,uVar15);
      *(undefined2 *)(piVar4 + 3) = uVar5;
      dVar16 = (double)FastIntToDouble((short)(int)fVar1);
      piVar4[4] = (int)(float)(dVar28 / dVar16);
      return;
    }
  }
  if ((*(short *)((int)piVar4 + 0xe) != 0) && (*(short *)(piVar4 + 3) != 0)) {
    iVar14 = FastDecTimerS16(uVar15 + 0xc);
    if (iVar14 != 0) {
      auVar29 = ZEXT416(0xffffffff);
      auVar32 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar30 = loadVectorLeftIndexed(0x508,uVar15);
      auVar31 = loadVectorRightIndexed(0x518,uVar15);
      *(undefined2 *)((int)piVar4 + 0xe) = 0;
      auVar29 = ZEXT416(0xfffffff0);
      auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar29 = vectorShiftRightAlgebraicWord
                          (auVar30 | auVar31,
                           auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
      auVar31 = loadVectorLeftIndexed(4,0x3d9b88);
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar29,0);
      auVar29 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar29 = vectorAddFloatingPoint
                          (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar32);
      fVar1 = animationSpeed * ((float)(longlong)(int)*(short *)(piVar4 + 0x142) + 0.5);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = vectorSplatHalfWord(auVar29,1);
      uVar5 = storeVectorElementHalfWordIndexed(auVar29,0x50a,uVar15);
      *(undefined2 *)((int)piVar4 + 0x50a) = uVar5;
      dVar16 = (double)FastIntToDouble((short)(int)fVar1);
      piVar4[0x143] = (int)(float)(1.0 / dVar16);
    }
    if ((g_onMagnerail != 0) || (DAT_0096afc2 == '\0')) {
      auVar29 = ZEXT416(0xffffffff);
      auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar29 = loadVectorLeftIndexed(0x28,0x3d9b88);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                           auVar30);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      if ((int)(animationSpeed * 15.5) < (int)*(short *)(piVar4 + 3)) {
        auVar30 = ZEXT416(0xfffffff0);
        auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar32 = vectorSplatHalfWord(auVar29,1);
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar31);
        auVar29 = ZEXT416(0xffffffff);
        auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        uVar5 = storeVectorElementHalfWordIndexed(auVar32,0xc,uVar15);
        *(undefined2 *)(piVar4 + 3) = uVar5;
        auVar30 = vectorShiftRightAlgebraicWord(auVar30,auVar31);
        auVar31 = loadVectorLeftIndexed(in_LR,0x3d9b88);
        auVar29 = ZEXT416(0xffffffff);
        auVar32 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar30 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar29 = ZEXT416(0xffffffff);
        auVar35 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = vectorReciprocalEstimateFloatingPoint(auVar30);
        auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar30,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar33,auVar32);
        auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar30,auVar31);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar29,auVar32,auVar34);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar30,auVar31);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar33);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x10,uVar15
                          );
        *(undefined4 *)((uint)(piVar4 + 4) & 0xfffffffc) = uVar6;
      }
    }
    dVar16 = (double)FastIntToDouble(*(undefined2 *)(piVar4 + 3));
    fVar1 = (moby->rotation).z;
    fVar2 = fVar1 + 1.5707963;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar9 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar9 = fVar2;
    }
    fVar8 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar8 = fVar3;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
      fVar1 = fVar9;
    }
    fVar2 = fVar8 * fVar8;
    fVar13 = (float)piVar4[2] * g_FrameTime * (float)(dVar16 * (double)(float)piVar4[4]);
    fVar3 = fVar1 * fVar1;
    fVar11 = fVar2 * fVar2 * fVar8;
    fVar9 = fVar3 * fVar3 * fVar1;
    fVar12 = fVar2 * fVar11;
    fVar10 = fVar3 * fVar9;
    DAT_00969dd4 = (fVar2 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) * fVar13 +
                   DAT_00969dd4;
    DAT_00969dd0 = (fVar3 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) * fVar13 +
                   DAT_00969dd0;
  }
  return;
}


