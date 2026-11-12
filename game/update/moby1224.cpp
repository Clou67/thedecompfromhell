// game/update/moby1224.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x20ca00-0x20e0f8
#include "game/update/moby1224.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x020ca00 (0x260 bytes)
void M1224_0020ca00(int param_1)

{
  short sVar1;
  int iVar2;
  GPiece<16> auVar3;
  float *pfVar4;
  float *pfVar5;
  byte *pbVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  byte in_cr6;
  undefined8 in_LR;
  longlong lVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  
  iVar2 = *(int *)(param_1 + 0x78);
  sVar1 = *(short *)(iVar2 + 0x12);
  if (sVar1 != 0) {
    iVar7 = iVar2 + 0x40;
    lVar14 = 0x17;
    *(short *)(iVar2 + 0x12) = sVar1 + -1;
    do {
      *(float *)(iVar7 + 0x20) = *(float *)(iVar7 + 0x20) + *(float *)(iVar7 + 0x220);
      *(float *)(iVar7 + 0x24) = *(float *)(iVar7 + 0x24) + *(float *)(iVar7 + 0x224);
      *(float *)(iVar7 + 0x28) = *(float *)(iVar7 + 0x28) + *(float *)(iVar7 + 0x228);
      iVar7 = iVar7 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    auVar3 = ZEXT416(0);
    iVar7 = 0;
    auVar17 = loadVectorLeftIndexed(in_LR,0x20c9f8);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
               auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      pfVar10 = (float *)(iVar2 + 0x420);
      pfVar8 = (float *)(iVar2 + 0x520);
      do {
        lVar14 = 3;
        pfVar4 = pfVar8;
        pfVar5 = pfVar10;
        do {
          pfVar12 = pfVar5 + 0x10;
          *pfVar12 = *pfVar12 + pfVar4[0x10];
          pfVar5[0x11] = pfVar5[0x11] + pfVar4[0x11];
          pfVar5[0x12] = pfVar5[0x12] + pfVar4[0x12];
          lVar14 = lVar14 + -1;
          pfVar4 = pfVar4 + 0x10;
          pfVar5 = pfVar12;
        } while (lVar14 != 0);
        iVar7 = iVar7 + 1;
        pfVar10 = pfVar10 + 4;
        pfVar8 = pfVar8 + 4;
      } while ((float)(longlong)iVar7 < 4.0);
    }
    lVar14 = 4;
    iVar7 = iVar2;
    iVar11 = iVar2;
    do {
      pbVar6 = (byte *)(iVar11 + 0x18);
      iVar11 = iVar11 + 1;
      puVar13 = (undefined4 *)((uint)*pbVar6 * 0x10 + iVar2 + 0x20);
      *(undefined4 *)(iVar7 + 0x420) = *puVar13;
      *(undefined4 *)(iVar7 + 0x424) = puVar13[1];
      *(undefined4 *)(iVar7 + 0x428) = puVar13[2];
      *(undefined4 *)(iVar7 + 0x42c) = puVar13[3];
      iVar7 = iVar7 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    sVar1 = *(short *)(iVar2 + 0x12);
  }
  if (DAT_00766a3c < sVar1) {
    dVar15 = (double)FastIntToDouble(sVar1 - DAT_00766a3c);
    dVar16 = (double)FastIntToDouble(*(int *)(iVar2 + 0x620) - DAT_00766a3c);
    uVar9 = FastLerpColor((double)(float)(dVar15 / dVar16),DAT_00766a50,DAT_00766a4c);
  }
  else {
    uVar9 = 0;
    if (DAT_00f08e3c < sVar1) {
      dVar15 = (double)FastIntToDouble(sVar1 - DAT_00f08e3c);
      dVar16 = (double)FastIntToDouble(DAT_00766a3c - DAT_00f08e3c);
      uVar9 = FastLerpColor((double)(float)(dVar15 / dVar16),DAT_00766a54,DAT_00766a50);
    }
  }
  *(undefined4 *)(iVar2 + 0x14) = uVar9;
  return;
}


// 0x020cc88 (0x738 bytes)
void M1224_0020cc88(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  int iVar10;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<48> local_80;
  
  piVar8 = *(int **)(param_1 + 0x78);
  if (piVar8[7] != 0) {
    iVar10 = *piVar8;
    fVar1 = Cuboids[iVar10].pos.x;
    fVar2 = Cuboids[iVar10].pos.y;
    fVar3 = Cuboids[iVar10].pos.z;
    fVar4 = Cuboids[iVar10].pos.w;
    if (*(short *)(piVar8 + 2) != 0) {
      iVar10 = *piVar8;
      fVar5 = Cuboids[iVar10].matrix.v1.x;
      fVar6 = Cuboids[iVar10].matrix.v1.y;
      fVar7 = Cuboids[iVar10].matrix.v1.z;
      iVar10 = CollLine(local_d0,local_c0,0,param_1,0);
      if (iVar10 == 0) {
        piVar8[0x18c] = (int)(fVar1 + fVar5);
        piVar8[0x18d] = (int)(fVar2 + fVar6);
        piVar8[0x18e] = (int)(fVar3 + fVar7);
        piVar8[399] = (int)fVar4;
      }
      else {
        fVar5 = g_CollOutput.ip.y - fVar2;
        fVar6 = g_CollOutput.ip.x - fVar1;
        fVar7 = g_CollOutput.ip.z - fVar3;
        *(undefined2 *)(piVar8 + 2) = 0;
        fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar9 = (fVar9 * 0.98) / fVar9;
        piVar8[0x18c] = (int)(fVar6 * fVar9 + fVar1);
        piVar8[0x18d] = (int)(fVar5 * fVar9 + fVar2);
        piVar8[0x18e] = (int)(fVar7 * fVar9 + fVar3);
        piVar8[399] = (int)fVar4;
      }
    }
    if (*(short *)((int)piVar8 + 10) != 0) {
      iVar10 = *piVar8;
      fVar5 = Cuboids[iVar10].matrix.v1.x;
      fVar6 = Cuboids[iVar10].matrix.v1.y;
      fVar7 = Cuboids[iVar10].matrix.v1.z;
      iVar10 = CollLine(local_d0,local_b0,0,param_1,0);
      if (iVar10 == 0) {
        piVar8[400] = (int)(fVar1 - fVar5);
        piVar8[0x191] = (int)(fVar2 - fVar6);
        piVar8[0x192] = (int)(fVar3 - fVar7);
        piVar8[0x193] = (int)fVar4;
      }
      else {
        fVar5 = g_CollOutput.ip.y - fVar2;
        fVar6 = g_CollOutput.ip.x - fVar1;
        fVar7 = g_CollOutput.ip.z - fVar3;
        *(undefined2 *)((int)piVar8 + 10) = 0;
        fVar9 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar9 = (fVar9 * 0.98) / fVar9;
        piVar8[400] = (int)(fVar6 * fVar9 + fVar1);
        piVar8[0x191] = (int)(fVar5 * fVar9 + fVar2);
        piVar8[0x192] = (int)(fVar7 * fVar9 + fVar3);
        piVar8[0x193] = (int)fVar4;
      }
    }
    CollLine(local_a0,local_90,1,param_1,local_80);
    CollLine(local_a0,local_90,1,param_1,local_80);
    CollLine(local_a0,local_90,1,param_1,local_80);
    CollLine(local_a0,local_90,1,param_1,local_80);
  }
  return;
}


// 0x020d3e0 (0x914 bytes)
void M1224_0020d3e0(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short sVar16;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  int *piVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  int *piVar22;
  float *pfVar23;
  float *pfVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int *piVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  float local_530;
  float local_52c;
  float local_528;
  float local_520;
  float local_51c;
  float local_518;
  GPiece<16> local_510;
  GPiece<16> local_500;
  GPiece<16> local_4f0;
  GPiece<16> local_4e0;
  GPiece<48> local_4d0;
  float local_4a0 [4];
  float local_490 [124];
  float afStack_2a0 [4];
  float local_290 [128];
  longlong local_90;
  
  piVar30 = *(int **)(param_1 + 0x78);
  Cuboids[*piVar30].pos.w = 1.0;
  dVar34 = 0.5;
  iVar15 = (int)(animationSpeed * (float)((double)(longlong)DAT_00766a38 + 0.5));
  local_90 = (longlong)iVar15;
  sVar16 = MB_randRange
                     ((int)(animationSpeed * (float)((double)(longlong)DAT_00766a34 + 0.5)),iVar15);
  iVar15 = *piVar30;
  fVar2 = Cuboids[iVar15].matrix.v1.y;
  fVar3 = Cuboids[iVar15].matrix.v1.x;
  fVar4 = Cuboids[iVar15].matrix.v1.z;
  pfVar24 = local_490;
  *(short *)((int)piVar30 + 0x12) = sVar16;
  iVar26 = 0;
  pfVar23 = local_290;
  piVar30[0x188] = (int)sVar16;
  uVar33 = 0;
  dVar35 = (double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * 2.0);
  iVar15 = 0;
  do {
    dVar31 = (double)FastIntToDouble(iVar15);
    dVar32 = (double)FastIntToDouble(0x1f);
    dVar31 = (double)(float)(dVar34 - (double)(float)(dVar31 / dVar32));
    if ((iVar15 < 3) || (0x1c < iVar15)) {
      local_490[iVar15 * 4 + 3] = 0.0;
      local_490[iVar15 * 4 + 2] = 0.0;
      local_490[iVar15 * 4 + 1] = 0.0;
      pfVar24[iVar15 * 4] = 0.0;
      local_290[iVar15 * 4 + 3] = 0.0;
      local_290[iVar15 * 4 + 2] = 0.0;
      local_290[iVar15 * 4 + 1] = 0.0;
      pfVar23[iVar15 * 4] = 0.0;
    }
    else {
      MB_randSphere(uVar33,(double)DAT_00766a98);
      MB_randSphere
                (uVar33,(double)(DAT_00766a9c * g_FrameTime),pfVar23 + iVar15 * 4);
    }
    iVar28 = iVar15 + 1;
    local_490[iVar15 * 4 + 3] = 1.0;
    local_490[iVar15 * 4 + 1] = (float)(dVar31 * dVar35 + (double)local_490[iVar15 * 4 + 1]);
    iVar15 = iVar28;
  } while (iVar28 < 0x20);
  iVar15 = 0;
  pfVar21 = local_290;
  pfVar18 = local_4a0;
  pfVar19 = local_490;
  pfVar20 = afStack_2a0;
  piVar22 = piVar30;
  do {
    pfVar21 = pfVar21 + 4;
    pfVar19 = pfVar19 + 4;
    if ((iVar15 == 0) || (iVar15 == 0x1f)) {
      piVar22[8] = (int)*pfVar24;
      piVar22[9] = (int)pfVar24[1];
      piVar22[10] = (int)pfVar24[2];
      piVar22[0xb] = (int)pfVar24[3];
      piVar22[0x88] = (int)*pfVar23;
      piVar22[0x89] = (int)pfVar23[1];
      piVar22[0x8a] = (int)pfVar23[2];
      fVar2 = pfVar23[3];
    }
    else {
      fVar2 = *pfVar18;
      fVar3 = *pfVar24;
      fVar4 = pfVar18[1];
      fVar10 = pfVar24[1];
      fVar5 = pfVar18[2];
      fVar6 = pfVar24[2];
      fVar7 = *pfVar19;
      fVar8 = pfVar19[1];
      fVar9 = pfVar19[2];
      piVar22[0xb] = (int)pfVar18[3];
      piVar22[8] = (int)((fVar2 + fVar3 + fVar7) * 0.333);
      piVar22[9] = (int)((fVar4 + fVar10 + fVar8) * 0.333);
      piVar22[10] = (int)((fVar5 + fVar6 + fVar9) * 0.333);
      fVar3 = pfVar20[1];
      fVar4 = pfVar23[1];
      fVar10 = pfVar20[2];
      fVar5 = pfVar23[2];
      fVar6 = pfVar21[1];
      fVar7 = pfVar21[2];
      fVar2 = pfVar20[3];
      piVar22[0x88] = (int)((*pfVar20 + *pfVar23 + *pfVar21) * 0.333);
      piVar22[0x89] = (int)((fVar3 + fVar4 + fVar6) * 0.333);
      piVar22[0x8a] = (int)((fVar10 + fVar5 + fVar7) * 0.333);
    }
    iVar15 = iVar15 + 1;
    piVar22[0x8b] = (int)fVar2;
    pfVar18 = pfVar18 + 4;
    pfVar24 = pfVar24 + 4;
    pfVar20 = pfVar20 + 4;
    pfVar23 = pfVar23 + 4;
    piVar22 = piVar22 + 4;
  } while (iVar15 < 0x20);
  iVar15 = 0;
  piVar22 = piVar30;
  piVar27 = piVar30;
  do {
    MB_randSphere((double)DAT_00766a98,&local_530);
    lVar13 = (longlong)iVar15;
    iVar15 = iVar15 + 1;
    local_90 = (longlong)iVar15;
    MB_randRangeFloat((float)lVar13 * 6.0,(float)local_90 * 6.0);
    iVar28 = FastDoubleToInt();
    iVar28 = iVar28 + 4;
    piVar14 = piVar30 + iVar28 * 4 + 8;
    *(char *)(piVar27 + 6) = (char)iVar28;
    iVar29 = 1;
    piVar25 = piVar22 + 0x158;
    piVar17 = piVar30 + iVar28 * 4 + 0x88;
    pfVar24 = (float *)(piVar22 + 0x118);
    pfVar23 = (float *)(piVar22 + 0x108);
    piVar22[0x108] = *piVar14;
    piVar22[0x109] = piVar14[1];
    piVar22[0x10a] = piVar14[2];
    piVar22[0x10b] = piVar14[3];
    piVar22[0x148] = *piVar17;
    piVar22[0x149] = piVar17[1];
    piVar22[0x14a] = piVar17[2];
    piVar22[0x14b] = piVar17[3];
    uVar36 = 0x3fb99999a0000000;
    do {
      MB_randSphere(uVar36,uVar36,&local_520);
      MB_randSphere(uVar33,(double)(DAT_00766a9c * g_FrameTime),piVar25);
      fVar2 = *pfVar23;
      iVar29 = iVar29 + 1;
      piVar25 = piVar25 + 0x10;
      *pfVar24 = fVar2 + local_530;
      fVar3 = pfVar23[1];
      pfVar24[1] = fVar3 + local_52c;
      fVar4 = pfVar23[2];
      pfVar24[2] = fVar4 + local_528;
      fVar10 = pfVar23[3];
      pfVar24[3] = fVar10;
      pfVar23 = pfVar23 + 0x10;
      *pfVar24 = fVar2 + local_530 + local_520;
      pfVar24[1] = fVar3 + local_52c + local_51c;
      pfVar24[3] = fVar10;
      pfVar24[2] = fVar4 + local_528 + local_518;
      pfVar24 = pfVar24 + 0x10;
    } while (iVar29 < 4);
    piVar27 = (int *)((int)piVar27 + 1);
    piVar22 = piVar22 + 4;
  } while (iVar15 < 4);
  iVar15 = *piVar30;
  fVar2 = Cuboids[iVar15].pos.y - GameCamera.posY;
  fVar3 = Cuboids[iVar15].pos.x - GameCamera.posX;
  if (4.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
    FastEulerToMtx1(local_4d0,&Cuboids[iVar15].rot);
    iVar15 = 0;
    do {
      MB_randInt(2);
      uVar12 = DAT_00766aa8;
      uVar11 = DAT_00766aa4;
      iVar28 = MB_randInt(10);
      iVar28 = (int)(animationSpeed * (float)((double)(longlong)(iVar28 + 0x14) + dVar34));
      local_90 = (longlong)iVar28;
      SpawnPart_2(local_510,local_500,local_500,uVar11,uVar12,iVar15 >> 1,0xf,iVar28);
      iVar15 = iVar15 + 8;
    } while (iVar15 < 0x20);
    do {
      MB_randInt(2);
      uVar12 = DAT_00766aa8;
      uVar11 = DAT_00766aa4;
      bVar1 = *(byte *)(piVar30 + 6);
      iVar15 = MB_randInt(10);
      iVar15 = (int)(animationSpeed * (float)((double)(longlong)(iVar15 + 0x14) + dVar34));
      local_90 = (longlong)iVar15;
      SpawnPart_2
                (local_4f0,local_4e0,local_4e0,uVar11,uVar12,((ulonglong)bVar1 << 0x20) >> 0x21,0xf,
                 iVar15);
      iVar26 = iVar26 + 1;
      piVar30 = (int *)((int)piVar30 + 1);
    } while (iVar26 < 2);
  }
  return;
}


// 0x020dd00 (0x3f8 bytes)
/* Moby 1224 */

void UpdateMoby_1224(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int *piVar6;
  undefined2 uVar7;
  int iVar8;
  ulonglong uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> local_20;
  
  bVar1 = moby->state;
  piVar6 = (int *)moby->pVar;
  uVar9 = ZEXT48(piVar6);
  if (bVar1 != 0) {
    iVar8 = FastCheckBsphereInView(0x404a000000000000,local_20);
    if (iVar8 < 0) {
      return;
    }
    bVar1 = moby->state;
  }
  if (DAT_00f08e40 == 0) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        M1224_0020d3e0(moby);
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = loadVectorLeftIndexed(0xc,uVar9);
        auVar10 = loadVectorRightIndexed(0x1c,uVar9);
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar11 | auVar10,0);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
        moby->state = '\x02';
        iVar8 = *piVar6;
        fVar2 = Cuboids[iVar8].matrix.v1.y;
        fVar3 = Cuboids[iVar8].matrix.v1.x;
        fVar4 = Cuboids[iVar8].matrix.v1.z;
        *(undefined2 *)(piVar6 + 2) = 1;
        *(undefined2 *)((int)piVar6 + 10) = 1;
        piVar6[0x189] = (int)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      }
      else if ((DAT_00f08e38 != 0) && (*(short *)((int)piVar6 + 0x12) == 0)) {
        DAT_00f08e38 = DAT_00f08e38 + -1;
        M1224_0020d3e0(moby);
      }
    }
    else if (bVar1 < 3) {
      iVar8 = FastDecTimerS16(uVar9 + 0x10);
      if (iVar8 != 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        moby->state = '\x03';
        auVar10 = loadVectorLeftIndexed(4,uVar9);
        auVar12 = loadVectorRightIndexed(0x14,uVar9);
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = ZEXT416(0xfffffff0);
        auVar10 = vectorShiftRightAlgebraicWord
                            (auVar10 | auVar12,
                             auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
        M1224_0020d3e0(moby);
      }
    }
    else if (bVar1 < 4) {
      iVar8 = FastDecTimerS16(uVar9 + 0x10);
      if (iVar8 == 0) {
        if (*(short *)((int)piVar6 + 0x12) == 0) {
          M1224_0020d3e0(moby);
        }
      }
      else if (*(short *)((int)piVar6 + 6) == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar10 = loadVectorLeftIndexed(4,uVar9);
        auVar12 = loadVectorRightIndexed(0x14,uVar9);
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = ZEXT416(0xfffffff0);
        auVar10 = vectorShiftRightAlgebraicWord
                            (auVar10 | auVar12,
                             auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
      }
      else {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        moby->state = '\x02';
        auVar10 = loadVectorLeftIndexed(6,uVar9);
        auVar12 = loadVectorRightIndexed(0x16,uVar9);
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = ZEXT416(0xfffffff0);
        auVar10 = vectorShiftRightAlgebraicWord
                            (auVar10 | auVar12,
                             auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = loadVectorLeftIndexed(4,0x20dcf4);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorAddFloatingPoint
                            (auVar10,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar12,auVar11,auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x10,uVar9);
        *(undefined2 *)(piVar6 + 4) = uVar7;
      }
    }
    if ((DAT_00f08e4c == 0) &&
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 10.0)) {
      M1224_0020cc88(moby);
    }
    sVar5 = *(short *)((int)piVar6 + 0x12);
    if (sVar5 != 0) {
      if (DAT_00f08e44 == 0) {
        M1224_0020ca00(moby);
        sVar5 = *(short *)((int)piVar6 + 0x12);
      }
      if ((DAT_00f08e3c < sVar5) && (DAT_00f08e48 == 0)) {
        RegisterPostDraw(&PTR_M1225_0020e108_00709530,moby);
      }
    }
  }
  return;
}


