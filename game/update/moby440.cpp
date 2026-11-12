// game/update/moby440.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x3804b8-0x384148
#include <math.h>
#include "game/update/moby440.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "game/update/moby1284.h"
#include "game/update/moby458.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "sdk/xUnk5.h"

// 0x03804b8 (0x10c bytes)
void M440_003804b8(MobyInstance *param_1,longlong param_2)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar10;
  
  puVar4 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x30);
  puVar4[3] = in_vr31_32_3;
  puVar4[2] = in_vr31_32_2;
  puVar4[1] = in_vr31_32_1;
  *puVar4 = in_vr31_32_0;
  if ((int)param_2 != 0xff) {
    puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
    if (puVar6 != (ushort *)0x0) {
      auVar10 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x30,0x3804b4);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      do {
        pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
        if ((pMVar7->oClass == SENTRY_BOT) && (param_1 != pMVar7)) {
          pvVar2 = pMVar7->pVar;
          if ((*(short *)((int)pvVar2 + 0x19c) == 0) ||
             (iVar5 = MB_randInt(0x10), iVar5 == 0)) {
            auVar8 = ZEXT416(0xffffffff);
            auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
            auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
            auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            *(MobyInstance **)((int)pvVar2 + 0x198) = param_1;
            auVar8 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar8);
            auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
            auVar8 = vectorSplatHalfWord(auVar8,1);
            uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x19c,ZEXT48(pvVar2));
            *(undefined2 *)((int)pvVar2 + 0x19c) = uVar3;
          }
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x03805d0 (0x90 bytes)
void M440_003805d0(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x78);
  uVar1 = *(uint *)(param_1 + 0x90);
  iVar2 = 0;
  uVar4 = 0x3fc99999a0000000;
  uVar5 = 0x3fb47ae140000000;
  do {
    MB_DrawGlowFX(uVar4,uVar5,uVar3 + 0x2a0,uVar1 & 0xffffff | 0x30000000);
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 0x10;
  } while (iVar2 < 3);
  return;
}


// 0x0380660 (0x14 bytes)
void M440_00380660(void)

{
  DAT_00841c88 = 0x10000;
  return;
}


// 0x03806d0 (0x1a3c bytes)
// strings: 0096c074: 'None'

void M440_003806d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte in_cr6;
  undefined8 uVar15;
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
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<32> local_150;
  GPiece<16> local_130;
  GPiece<40> local_120;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar14 = (ulonglong)uVar1;
  uVar6 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar6);
  uVar6 = GetEffectTex(DAT_00841e60 + 0x28);
  lVar13 = 0;
  iVar11 = 0;
  dVar31 = 16.0;
  do {
    dVar32 = (double)(longlong)
                     (int)(((uint)(ZERO_MASK(((uint)lVar13 & 1))) & 2) - 1);
    dVar28 = (double)(longlong)(int)(((uint)(1 - lVar13 >> 0x3f) & 0xfffffffe) + 1);
    FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e4c * dVar28 + (double)DAT_00841e44)
                              * dVar31));
    FastDoubleToInt((double)(float)((double)DAT_00841e48 * dVar32 + (double)DAT_00841e40))
    ;
    FastDoubleToInt((double)(float)((double)DAT_00841e44 * dVar31));
    FastDoubleToInt((double)(float)((double)DAT_00841e48 * dVar32 + (double)DAT_00841e40))
    ;
    FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e4c * dVar28 + (double)DAT_00841e44)
                              * dVar31));
    FastDoubleToInt((double)DAT_00841e40);
    FastDoubleToInt((double)(float)((double)DAT_00841e44 * dVar31));
    FastDoubleToInt((double)DAT_00841e40);
    DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  uVar6 = GetEffectTex(DAT_00841e64);
  iVar7 = 0;
  uVar12 = uVar14;
  do {
    iVar8 = (int)uVar12;
    if (*(int *)(iVar8 + 0x60) != 0) {
      if (*(byte *)(*(int *)(iVar8 + 0x60) + 0x20) < 0x80) {
        uVar15 = FUN_005e8338((double)(*(float *)(*(int *)(iVar8 + 0x60) + 0x10) -
                                      *(float *)(param_1 + 0x10)),
                              (double)(*(float *)(*(int *)(iVar8 + 0x60) + 0x14) -
                                      *(float *)(param_1 + 0x14)));
        dVar28 = (double)FastDiffRots(uVar15,(double)*(float *)(param_1 + 0x48));
        dVar32 = (double)FUN_005e8548((ulonglong)*(uint *)(iVar8 + 0x60) + 0x10,param_1 + 0x10);
        uVar2 = (uint)(byte)Cheats[4];
        dVar29 = (double)(float)(dVar32 * (double)DAT_00841d60);
        dVar32 = (double)FUN_005e8128(dVar28,(double)DAT_00841d60);
        dVar32 = (double)(float)((double)(float)((double)(longlong)
                                                         (int)-(((uint)(ZERO_MASK(uVar2)) & 2) - 1) * dVar32) *
                                dVar29);
        dVar28 = (double)cosf((float)dVar28);
        dVar28 = -(double)(float)(dVar28 * dVar29);
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e54 + DAT_00841e44) * dVar31 + dVar28));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e50 + DAT_00841e40) * dVar31 + dVar32));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e44 - DAT_00841e54) * dVar31 + dVar28));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e50 + DAT_00841e40) * dVar31 + dVar32));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e54 + DAT_00841e44) * dVar31 + dVar28));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e40 - DAT_00841e50) * dVar31 + dVar32));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e44 - DAT_00841e54) * dVar31 + dVar28));
        FastDoubleToInt
                  ((double)(float)((double)(DAT_00841e40 - DAT_00841e50) * dVar31 + dVar32));
        DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
      }
      else {
        *(undefined4 *)(iVar8 + 0x60) = 0;
      }
    }
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 4;
  } while (iVar7 < 8);
  iVar7 = 0;
  dVar30 = 1.570796251296997;
  dVar27 = 3.141592502593994;
  dVar26 = -3.141592502593994;
  dVar25 = -0.16666656732559204;
  dVar29 = 0.008333025500178337;
  dVar32 = -0.0001980741071747616;
  dVar28 = 2.601886990305502e-06;
  uVar12 = uVar14;
  do {
    iVar8 = (int)uVar12;
    if (g_MobyInstance[*(int *)(iVar8 + 0x80)].state < 0x7f) {
      uVar15 = FUN_005e8338((double)(g_MobyInstance[*(int *)(iVar8 + 0x80)].pos.x -
                                    *(float *)(param_1 + 0x10)),
                            (double)(g_MobyInstance[*(int *)(iVar8 + 0x80)].pos.y -
                                    *(float *)(param_1 + 0x14)));
      dVar16 = (double)FastDiffRots(uVar15,(double)*(float *)(param_1 + 0x48));
      iVar8 = *(int *)(iVar8 + 0x80);
      fVar3 = g_MobyInstance[iVar8].pos.y - *(float *)(param_1 + 0x14);
      fVar4 = g_MobyInstance[iVar8].pos.x - *(float *)(param_1 + 0x10);
      fVar5 = g_MobyInstance[iVar8].pos.z - *(float *)(param_1 + 0x18);
      dVar17 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      dVar24 = (double)(float)(dVar17 * (double)DAT_00841d60);
      dVar17 = (double)FUN_005e8128(dVar16,dVar17,(double)DAT_00841d60);
      dVar18 = (double)(float)(dVar16 + dVar30);
      dVar17 = -(double)(float)(dVar17 * dVar24);
      dVar16 = (double)(float)(dVar27 - dVar18);
      if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
        dVar16 = dVar18;
      }
      dVar20 = (double)(float)(dVar26 - dVar18);
      if ((double)(float)(dVar26 - dVar18) - dVar16 < 0.0) {
        dVar20 = dVar16;
      }
      dVar18 = (double)(float)(dVar20 * dVar20);
      dVar16 = (double)(float)(dVar18 * (double)(float)(dVar18 * dVar20));
      dVar21 = (double)(float)(dVar18 * dVar16);
      dVar16 = -(double)(float)((double)(float)((double)(float)(dVar18 * dVar21) * dVar28 +
                                               (double)(float)(dVar21 * dVar32 +
                                                              (double)(float)(dVar16 * dVar29 +
                                                                             (double)(float)((double
                                                  )(float)(dVar18 * dVar20) * dVar25 + dVar20)))) *
                               dVar24);
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 + DAT_00841e5c) * dVar31 + dVar16));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 + DAT_00841e58) * dVar31 + dVar17));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 - DAT_00841e5c) * dVar31 + dVar16));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 + DAT_00841e58) * dVar31 + dVar17));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 + DAT_00841e5c) * dVar31 + dVar16));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 - DAT_00841e58) * dVar31 + dVar17));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e44 - DAT_00841e5c) * dVar31 + dVar16));
      FastDoubleToInt
                ((double)(float)((double)(DAT_00841e40 - DAT_00841e58) * dVar31 + dVar17));
      DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    }
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 4;
  } while (iVar7 < 4);
  uVar6 = GetEffectTex(DAT_00841e60 + 0x28);
  lVar13 = 0;
  do {
    dVar17 = (double)(longlong)
                     (int)(((uint)(ZERO_MASK(((uint)lVar13 & 1))) & 2) - 1);
    dVar16 = (double)(longlong)(int)(((uint)(1 - lVar13 >> 0x3f) & 0xfffffffe) + 1);
    FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e2c * dVar16 + (double)DAT_00841e24)
                              * dVar31));
    FastDoubleToInt((double)(float)((double)DAT_00841e28 * dVar17 + (double)DAT_00841e20))
    ;
    FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    FastDoubleToInt((double)(float)((double)DAT_00841e28 * dVar17 + (double)DAT_00841e20))
    ;
    FastDoubleToInt
              ((double)(float)((double)(float)((double)DAT_00841e2c * dVar16 + (double)DAT_00841e24)
                              * dVar31));
    FastDoubleToInt((double)DAT_00841e20);
    FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    FastDoubleToInt((double)DAT_00841e20);
    DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    lVar13 = lVar13 + 1;
  } while ((int)lVar13 < 4);
  uVar6 = GetEffectTex(DAT_00841e64);
  auVar33 = loadVectorLeftIndexed(0x58,uVar14);
  auVar34 = loadVectorRightIndexed(0x68,uVar14);
  auVar34 = vectorConvertFromSignedFixedPointWord(auVar33 | auVar34,0);
  auVar33 = loadVectorLeftIndexed(0x28,0x380678);
  auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
             auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    FastLerpColor
              ((double)((float)(longlong)*(int *)(uVar1 + 0x58) * 0.01),0x600000ff,0x6000ffff,0x28);
  }
  else {
    FastLerpColor
              ((double)(((float)(longlong)*(int *)(uVar1 + 0x58) - 100.0) * 0.01),0x6000ffff,
               0x6000ff00,0x28);
  }
  FastDoubleToInt
            ((double)(-((float)(longlong)*(int *)(uVar1 + 0x58) * 0.005 - 1.0) * 32.0));
  dVar16 = 0.19634954631328583;
  do {
    dVar18 = (double)FastAddRots((float)((double)(longlong)iVar11 * dVar16));
    dVar24 = (double)FastWrapRot((float)dVar18,(float)dVar16);
    dVar17 = (double)(float)(dVar27 - dVar18);
    if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
      dVar17 = dVar18;
    }
    dVar20 = (double)(float)(dVar26 - dVar18);
    if ((double)(float)(dVar26 - dVar18) - dVar17 < 0.0) {
      dVar20 = dVar17;
    }
    dVar17 = (double)(float)(dVar20 * dVar20);
    dVar19 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar20));
    dVar21 = (double)(float)(dVar17 * dVar19);
    iVar7 = FastDoubleToInt
                      ((double)(DAT_00841e30 *
                               (float)((double)(float)(dVar17 * dVar21) * dVar28 +
                                      (double)(float)(dVar21 * dVar32 +
                                                     (double)(float)(dVar19 * dVar29 +
                                                                    (double)(float)((double)(float)(
                                                  dVar17 * dVar20) * dVar25 + dVar20))))));
    dVar18 = (double)(float)(dVar18 + dVar30);
    dVar17 = (double)(float)(dVar27 - dVar18);
    if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
      dVar17 = dVar18;
    }
    dVar20 = (double)(float)(dVar26 - dVar18);
    if ((double)(float)(dVar26 - dVar18) - dVar17 < 0.0) {
      dVar20 = dVar17;
    }
    dVar17 = (double)(float)(dVar20 * dVar20);
    dVar21 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar20));
    dVar18 = (double)(float)(dVar17 * dVar21);
    iVar8 = FastDoubleToInt
                      (-(double)(DAT_00841e34 *
                                (float)((double)(float)(dVar17 * dVar18) * dVar28 +
                                       (double)(float)(dVar18 * dVar32 +
                                                      (double)(float)(dVar21 * dVar29 +
                                                                     (double)(float)((double)(float)
                                                  (dVar17 * dVar20) * dVar25 + dVar20))))));
    dVar17 = (double)(float)(dVar27 - dVar24);
    if (dVar24 - (double)(float)(dVar27 - dVar24) < 0.0) {
      dVar17 = dVar24;
    }
    dVar18 = (double)(float)(dVar26 - dVar24);
    if ((double)(float)(dVar26 - dVar24) - dVar17 < 0.0) {
      dVar18 = dVar17;
    }
    dVar17 = (double)(float)(dVar18 * dVar18);
    dVar21 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
    dVar20 = (double)(float)(dVar17 * dVar21);
    iVar9 = FastDoubleToInt
                      ((double)(DAT_00841e30 *
                               (float)((double)(float)(dVar17 * dVar20) * dVar28 +
                                      (double)(float)(dVar20 * dVar32 +
                                                     (double)(float)(dVar21 * dVar29 +
                                                                    (double)(float)((double)(float)(
                                                  dVar17 * dVar18) * dVar25 + dVar18))))));
    dVar18 = (double)(float)(dVar24 + dVar30);
    dVar17 = (double)(float)(dVar27 - dVar18);
    if (dVar18 - (double)(float)(dVar27 - dVar18) < 0.0) {
      dVar17 = dVar18;
    }
    dVar24 = (double)(float)(dVar26 - dVar18);
    if ((double)(float)(dVar26 - dVar18) - dVar17 < 0.0) {
      dVar24 = dVar17;
    }
    dVar17 = (double)(float)(dVar24 * dVar24);
    dVar20 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar24));
    dVar18 = (double)(float)(dVar17 * dVar20);
    iVar10 = FastDoubleToInt
                       (-(double)(DAT_00841e34 *
                                 (float)((double)(float)(dVar17 * dVar18) * dVar28 +
                                        (double)(float)(dVar18 * dVar32 +
                                                       (double)(float)(dVar20 * dVar29 +
                                                                      (double)(float)((double)(float
                                                  )(dVar17 * dVar24) * dVar25 + dVar24))))));
    FastDoubleToInt
              ((double)(float)((double)(DAT_00841e24 + (float)(longlong)iVar10) * dVar31));
    FastDoubleToInt((double)(DAT_00841e20 + (float)(longlong)iVar9));
    FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    FastDoubleToInt((double)DAT_00841e20);
    FastDoubleToInt
              ((double)(float)((double)(DAT_00841e24 + (float)(longlong)iVar8) * dVar31));
    FastDoubleToInt((double)(DAT_00841e20 + (float)(longlong)iVar7));
    FastDoubleToInt((double)(float)((double)DAT_00841e24 * dVar31));
    FastDoubleToInt((double)DAT_00841e20);
    DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x20);
  dVar16 = 15.5;
  iVar11 = *(int *)(uVar1 + 0xa0);
  if ((int)(animationSpeed * 15.5) < iVar11) {
    dVar17 = (double)FastIntToDouble(iVar11 - (int)(animationSpeed * 15.5));
    FastLerpColor
              ((double)(float)(dVar17 / (double)(longlong)((double)animationSpeed * dVar16)),
               0x5000ffff,0x500000ff);
  }
  else {
    dVar17 = (double)FastIntToDouble(iVar11);
    FastLerpColor
              ((double)(float)(dVar17 / (double)(longlong)((double)animationSpeed * dVar16)),
               0x5000ff00,0x5000ffff);
  }
  dVar24 = 4.0;
  dVar18 = 0.0;
  dVar16 = (double)FastWrapRot(*(float *)(param_1 + 0x48) * 4.0,0.0);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar20 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar20 = dVar16;
  }
  dVar16 = (double)(float)(dVar20 * dVar20);
  dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar20));
  dVar21 = (double)(float)(dVar16 * dVar19);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar21) * dVar28 +
                                             (double)(float)(dVar21 * dVar32 +
                                                            (double)(float)(dVar19 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar20) * dVar25 + dVar20)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar20 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar20 = dVar16;
  }
  dVar16 = (double)(float)(dVar20 * dVar20);
  dVar21 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar20));
  dVar17 = (double)(float)(dVar16 * dVar21);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar21 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar20) * dVar25 + dVar20)))) *
                                     DAT_00841e38) * dVar31));
  dVar20 = 1.5707963705062866;
  dVar16 = (double)FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x48) * dVar24),1.5707964);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar21 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar21 = dVar16;
  }
  dVar16 = (double)(float)(dVar21 * dVar21);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar21));
  dVar19 = (double)(float)(dVar16 * dVar22);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar19) * dVar28 +
                                             (double)(float)(dVar19 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar21) * dVar25 + dVar21)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar21 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar21 = dVar16;
  }
  dVar16 = (double)(float)(dVar21 * dVar21);
  dVar19 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar21));
  dVar17 = (double)(float)(dVar16 * dVar19);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar19 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar21) * dVar25 + dVar21)))) *
                                     DAT_00841e38) * dVar31));
  dVar21 = -1.5707963705062866;
  dVar16 = (double)FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x48) * dVar24),-1.5707964);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar19 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar19 = dVar16;
  }
  dVar16 = (double)(float)(dVar19 * dVar19);
  dVar23 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar19));
  dVar22 = (double)(float)(dVar16 * dVar23);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar22) * dVar28 +
                                             (double)(float)(dVar22 * dVar32 +
                                                            (double)(float)(dVar23 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar19) * dVar25 + dVar19)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar19 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar19 = dVar16;
  }
  dVar16 = (double)(float)(dVar19 * dVar19);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar19));
  dVar17 = (double)(float)(dVar16 * dVar22);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar19) * dVar25 + dVar19)))) *
                                     DAT_00841e38) * dVar31));
  dVar19 = 3.1415927410125732;
  dVar16 = (double)FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x48) * dVar24),3.1415927);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar24 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar24 = dVar16;
  }
  dVar16 = (double)(float)(dVar24 * dVar24);
  dVar23 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar24));
  dVar22 = (double)(float)(dVar16 * dVar23);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar22) * dVar28 +
                                             (double)(float)(dVar22 * dVar32 +
                                                            (double)(float)(dVar23 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar24) * dVar25 + dVar24)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar24 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar24 = dVar16;
  }
  dVar16 = (double)(float)(dVar24 * dVar24);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar24));
  dVar17 = (double)(float)(dVar16 * dVar22);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar24) * dVar25 + dVar24)))) *
                                     DAT_00841e38) * dVar31));
  uVar6 = GetEffectTex(DAT_00841e68);
  DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
  dVar24 = 8.0;
  dVar16 = (double)FastWrapRot(*(float *)(param_1 + 0x44) * 8.0,(float)dVar18);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar23 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar22 = (double)(float)(dVar16 * dVar23);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar22) * dVar28 +
                                             (double)(float)(dVar22 * dVar32 +
                                                            (double)(float)(dVar23 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar17 = (double)(float)(dVar16 * dVar22);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e38) * dVar31));
  dVar16 = (double)FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x44) * dVar24),(float)dVar20);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar22 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar20 = (double)(float)(dVar16 * dVar22);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar20) * dVar28 +
                                             (double)(float)(dVar20 * dVar32 +
                                                            (double)(float)(dVar22 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar17 = (double)(float)(dVar16 * dVar20);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar20 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e38) * dVar31));
  dVar16 = (double)FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x44) * dVar24),(float)dVar21);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar21 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar20 = (double)(float)(dVar16 * dVar21);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar20) * dVar28 +
                                             (double)(float)(dVar20 * dVar32 +
                                                            (double)(float)(dVar21 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar17 = (double)(float)(dVar17 + dVar30);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar17 = (double)(float)(dVar16 * dVar20);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar17) * dVar28 +
                                             (double)(float)(dVar17 * dVar32 +
                                                            (double)(float)(dVar20 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e38) * dVar31));
  dVar16 = (double)FastWrapRot
                             ((float)((double)*(float *)(param_1 + 0x44) * dVar24),(float)dVar19);
  dVar17 = (double)FastAddRots((float)dVar16);
  dVar16 = (double)(float)(dVar27 - dVar17);
  if (dVar17 - (double)(float)(dVar27 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar18 = (double)(float)(dVar26 - dVar17);
  if ((double)(float)(dVar26 - dVar17) - dVar16 < 0.0) {
    dVar18 = dVar16;
  }
  dVar16 = (double)(float)(dVar18 * dVar18);
  dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar18));
  dVar24 = (double)(float)(dVar16 * dVar20);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar16 * dVar24) * dVar28 +
                                             (double)(float)(dVar24 * dVar32 +
                                                            (double)(float)(dVar20 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar18) * dVar25 + dVar18)))) *
                                     DAT_00841e3c) * dVar31));
  dVar16 = (double)(float)(dVar17 + dVar30);
  dVar30 = (double)(float)(dVar27 - dVar16);
  if (dVar16 - (double)(float)(dVar27 - dVar16) < 0.0) {
    dVar30 = dVar16;
  }
  dVar27 = (double)(float)(dVar26 - dVar16);
  if ((double)(float)(dVar26 - dVar16) - dVar30 < 0.0) {
    dVar27 = dVar30;
  }
  dVar26 = (double)(float)(dVar27 * dVar27);
  dVar16 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar27));
  dVar30 = (double)(float)(dVar26 * dVar16);
  FastDoubleToInt
            ((double)(float)((double)((float)((double)(float)(dVar26 * dVar30) * dVar28 +
                                             (double)(float)(dVar30 * dVar32 +
                                                            (double)(float)(dVar16 * dVar29 +
                                                                           (double)(float)((double)(
                                                  float)(dVar26 * dVar27) * dVar25 + dVar27)))) *
                                     DAT_00841e38) * dVar31));
  uVar6 = GetEffectTex(DAT_00841e6c);
  DrawTexturedQuadHud(local_150,local_120,local_130,uVar6,1);
  return;
}


// 0x0382120 (0x1a0 bytes)
// inlined: FastRSqrt @0x382208
undefined4 M440_00382120(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_60;
  float local_5c;
  float local_58;
  
  iVar2 = *(int *)(param_1 + 0x78);
  uVar7 = 0;
  dVar13 = 1.0;
  dVar14 = 0.0;
  dVar15 = 0.5;
  dVar16 = 0.9975639581680298;
  iVar8 = iVar2;
  do {
    if (*(int *)(iVar8 + 0x60) != 0) {
      MB_SphericalToVector
                ((float)dVar13,*(float *)(param_1 + 0x48),-*(float *)(param_1 + 0x44),&local_60);
      iVar3 = *(int *)(iVar8 + 0x60);
      fVar4 = *(float *)(iVar3 + 0x14) - GameCamera.posY;
      fVar5 = *(float *)(iVar3 + 0x10) - GameCamera.posX;
      fVar6 = *(float *)(iVar3 + 0x18) - GameCamera.posZ;
      dVar9 = (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      dVar10 = dVar14;
      dVar11 = dVar14;
      dVar12 = dVar14;
      if ((double)(float)SQRT(dVar9) != dVar14) {
        dVar10 = 1.0 / SQRT(dVar9);
        dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar13)
                                 * (double)(float)(dVar15 * dVar10) + dVar10);
        dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar13)
                                 * (double)(float)(dVar15 * dVar10) + dVar10);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar9 * dVar10) * dVar10 - dVar13) *
                        (double)(float)(dVar15 * dVar10) + dVar10);
        dVar12 = (double)(fVar5 * fVar1);
        dVar11 = (double)(fVar4 * fVar1);
        dVar10 = (double)(fVar6 * fVar1);
      }
      if (dVar16 < (double)(float)(dVar10 * (double)local_58 +
                                  (double)(float)(dVar12 * (double)local_60 +
                                                 (double)(float)(dVar11 * (double)local_5c)))) {
        return *(undefined4 *)(iVar2 + (int)((uVar7 & 0xffffffff) << 2) + 0x60);
      }
    }
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 4;
    if (7 < (int)uVar7) {
      return 0;
    }
  } while( true );
}


// 0x0382358 (0x1df0 bytes)
// inlined: FastRSqrt @0x382be8
/* Moby 440 */

void UpdateMoby_440(MobyInstance *moby)

{
  int iVar1;
  u8 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  longlong lVar16;
  int iVar19;
  uint uVar20;
  MobyInstance *pMVar21;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined8 uVar46;
  double dVar47;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  f32 local_1e0;
  f32 local_1dc;
  float local_1d8;
  f32 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0 [2];
  f32 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  f32 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  f32 local_130;
  f32 local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  float local_118;
  f32 local_114;
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  longlong local_d0;
  
  lVar16 = (longlong)(int)moby;
  pvVar7 = moby->pVar;
  uVar24 = ZEXT48(pvVar7);
  dVar45 = (double)(moby->pos).x;
  dVar44 = (double)(moby->pos).y;
  dVar43 = (double)(moby->pos).w;
  dVar47 = (double)((moby->pos).z + 0.4);
  iVar19 = FastDecTimerS16(uVar24 + 0x42);
  if ((iVar19 == 0) || (moby->setByGroup != '\x01')) {
    if (moby->setByGroup == '\x02') {
      fVar4 = (float)(dVar44 - (double)(g_heroMobyPtr->pos).y);
      fVar5 = (float)(dVar45 - (double)(g_heroMobyPtr->pos).x);
      if (1.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
        auVar51 = ZEXT416(0xffffffff);
        auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
        moby->setByGroup = '\0';
        auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = loadVectorLeftIndexed(0x34,0x3822c0);
        auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar51 = vectorMultiplyAddFloatingPoint
                            (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                             auVar49);
        auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
        auVar51 = vectorSplatHalfWord(auVar51,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x42,uVar24);
        *(undefined2 *)((int)pvVar7 + 0x42) = uVar8;
      }
    }
    else if ((((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) &&
              (fVar4 = (float)(dVar44 - (double)(g_heroMobyPtr->pos).y),
              fVar5 = (float)(dVar45 - (double)(g_heroMobyPtr->pos).x),
              SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.0)) &&
             (g_heroPosition.z - (moby->pos).z < 7.0)) &&
            ((*(short *)((int)pvVar7 + 0x42) == 0 && (0 < *(int *)((int)pvVar7 + 0x58))))) {
      moby->setByGroup = '\x01';
      TransitionMovement(0x32,1);
    }
  }
  else {
    g_heroRotation.z = (moby->rotation).z;
    fVar4 = g_heroRotation.z + 1.5707963;
    fVar5 = 3.1415925 - g_heroRotation.z;
    if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
      fVar5 = g_heroRotation.z;
    }
    fVar6 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar6 = fVar4;
    }
    fVar10 = -3.1415925 - g_heroRotation.z;
    if ((-3.1415925 - g_heroRotation.z) - fVar5 < 0.0) {
      fVar10 = fVar5;
    }
    fVar5 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
      fVar5 = fVar6;
    }
    fVar4 = fVar10 * fVar10;
    fVar6 = fVar5 * fVar5;
    fVar13 = fVar4 * fVar4 * fVar10;
    g_heroRotation.x = (moby->rotation).x;
    fVar11 = fVar6 * fVar6 * fVar5;
    fVar14 = fVar4 * fVar13;
    g_heroRotation.y = (moby->rotation).y;
    g_heroRotation.w = (moby->rotation).w;
    g_heroPosition.z = (float)dVar47;
    fVar12 = fVar6 * fVar11;
    g_heroPosition.w = (float)dVar43;
    g_heroPosition.y =
         (float)((double)(fVar4 * fVar14 * 2.601887e-06 +
                         fVar14 * -0.0001980741 +
                         fVar13 * 0.0083330255 + fVar4 * fVar10 * -0.16666657 + fVar10) *
                 -0.699999988079071 + dVar44);
    g_heroPosition.x =
         (float)((double)(fVar6 * fVar12 * 2.601887e-06 +
                         fVar12 * -0.0001980741 +
                         fVar11 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
                 -0.699999988079071 + dVar45);
    FastMemSetZero(&g_heroVelocity,0x90);
    if (*(int *)((int)pvVar7 + 0x58) == 0) {
      moby->setByGroup = '\x02';
      dVar44 = 0.0;
      (moby->rotation).y = 0.0;
      Camera_DeactivateMobyDrivenCam(0);
      moby->state = '\x04';
      pMVar21 = g_MobyInstance + *(int *)((int)pvVar7 + 0x9c);
      local_1e0 = (pMVar21->rotation).x;
      local_1dc = (pMVar21->rotation).y;
      local_1d8 = (pMVar21->rotation).z;
      local_1d4 = (pMVar21->rotation).w;
      dVar43 = (double)FastWrapRot(local_1d8,3.1415927);
      local_1d8 = (float)dVar43;
      fVar4 = (pMVar21->transform).v0.y;
      fVar5 = (pMVar21->transform).v0.x;
      fVar6 = (pMVar21->transform).v0.z;
      dVar43 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      if (dVar43 == dVar44) {
        local_1e4 = (pMVar21->transform).v0.w;
        dVar43 = dVar44;
        dVar45 = dVar44;
      }
      else {
        fVar4 = (float)(2.5 / dVar43);
        dVar45 = (double)(fVar5 * fVar4);
        dVar44 = (double)((pMVar21->transform).v0.y * fVar4);
        dVar43 = (double)((pMVar21->transform).v0.z * fVar4);
        local_1e4 = (pMVar21->transform).v0.w;
      }
      local_1f0 = (float)(dVar45 + (double)(pMVar21->pos).x);
      local_1ec = (float)(dVar44 + (double)(pMVar21->pos).y);
      local_1e8 = (float)(dVar43 + (double)(pMVar21->pos).z);
      Hero_Warp(&local_1f0,&local_1e0,0,1);
      FUN_0023892c(pMVar21,0);
      return;
    }
    uVar22 = (ulonglong)Level;
    uVar20 = (uint)(byte)moby->levelFlagIdx;
    if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) && ((DAT_0096b2ef & 1) != 0)) {
      HandleHeroDeath();
      uVar20 = (uint)(byte)moby->levelFlagIdx;
      uVar22 = (ulonglong)Level;
    }
    if ((((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) && ((DAT_0096b2ef & 1) == 0)) ||
       (g_LevelFlags[0][(int)(uVar22 << 4) + uVar20] != -1)) {
      if (moby->state != '\x05') {
        *(undefined2 *)((int)pvVar7 + 0x52) = 2;
        SetCameraPosition(lVar16 + 0x10,lVar16 + 0x40,1,0,0);
      }
      iVar19 = 0;
      moby->state = '\x05';
      uVar22 = uVar24;
      do {
        iVar1 = *(int *)((int)uVar22 + 0x80);
        if (g_MobyInstance[iVar1].state == '\x02') {
          g_MobyInstance[iVar1].state = '\x03';
        }
        iVar19 = iVar19 + 1;
        uVar22 = uVar22 + 4;
      } while (iVar19 < 4);
    }
    else {
      DAT_0096b2ef = 0;
      TransitionMovement(0,1);
      (moby->rotation).y = 0.0;
      moby->setByGroup = '\x02';
      FastEulerToMtx(lVar16 + 0xc0,lVar16 + 0x40);
      local_1b4 = 0;
      local_1b8 = (moby->rotation).z;
      local_1c0[1] = 0.0;
      local_1c0[0] = 0.0;
      FUN_005e7d64(&local_1d0,&DAT_00841cb0,lVar16 + 0xc0);
      local_1d0 = local_1d0 + (moby->pos).x;
      local_1cc = local_1cc + (moby->pos).y;
      local_1c8 = local_1c8 + (moby->pos).z;
      Hero_Warp(&local_1d0,local_1c0,0,1);
      Camera_DeactivateMobyDrivenCam(0);
      dVar43 = (double)FastWrapRot(g_heroRotation.z,3.1415927);
      g_heroRotation.z = (float)dVar43;
      moby->state = '\x04';
    }
  }
  uVar2 = moby->state;
  if (uVar2 == '\x06') {
    DeleteMoby(*(MobyInstance **)((int)pvVar7 + 0x90));
    DeleteMoby(*(MobyInstance **)((int)pvVar7 + 0x94));
    DeleteMoby(moby);
  }
  else {
    if (uVar2 == '\x05') {
      iVar19 = *(int *)((int)pvVar7 + 0x58);
      *(int *)((int)pvVar7 + 0x58) = iVar19 + (iVar19 >> 0x1f & -iVar19);
      dVar44 = -1.0;
      dVar43 = dVar44;
      if (g_GameSettings.CameraUpDown != 0) {
        dVar43 = 1.0;
      }
      fVar4 = (float)((double)DAT_0096ba04 * dVar43);
      dVar43 = 1.0;
      fVar6 = g_heroPadStick * g_heroPadStick + fVar4 * fVar4;
      fVar5 = g_heroPadStick;
      if (1.0 < SQRT(fVar6)) {
        fVar10 = 1.0 / SQRT(fVar6);
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar5 = fVar10 * g_heroPadStick;
        fVar4 = fVar10 * fVar4;
      }
      dVar47 = 0.01745329238474369;
      dVar45 = 0.0;
      fVar5 = -(DAT_00841da8 * 0.017453292 * g_FrameTime * fVar5);
      dVar48 = -(double)(DAT_00841dac * 0.017453292 * g_FrameTime * fVar4);
      if (((-1 < *(int *)((int)pvVar7 + 0x4c)) && (*(float *)((int)pvVar7 + 0x4c) < fVar5)) ||
         ((*(int *)((int)pvVar7 + 0x4c) < 1 && (fVar5 < *(float *)((int)pvVar7 + 0x4c))))) {
        Delt(fVar5,DAT_00841db0 * 0.017453292 * g_FrameTimeSq,(float *)((int)pvVar7 + 0x4c)
                      );
      }
      else {
        Delt(fVar5,DAT_00841db8 * 0.017453292 * g_FrameTimeSq,(float *)((int)pvVar7 + 0x4c)
                      );
      }
      if (((-1 < *(int *)((int)pvVar7 + 0x48)) && ((double)*(float *)((int)pvVar7 + 0x48) < dVar48))
         || ((*(int *)((int)pvVar7 + 0x48) < 1 && (dVar48 < (double)*(float *)((int)pvVar7 + 0x48)))
            )) {
        Delt((float)dVar48,(float)((double)DAT_00841db4 * dVar47) * g_FrameTimeSq,
                       (float *)((int)pvVar7 + 0x48));
      }
      else {
        Delt((float)dVar48,(float)((double)DAT_00841dbc * dVar47) * g_FrameTimeSq,
                       (float *)((int)pvVar7 + 0x48));
      }
      dVar47 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar7 + 0x4c));
      (moby->rotation).z = (float)dVar47;
      dVar47 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar7 + 0x48));
      (moby->rotation).y = (float)dVar47;
      if (-0.7853981852531433 <= dVar47) {
        if (0.3490658402442932 < dVar47) {
          (moby->rotation).y = 0.34906584;
        }
      }
      else {
        (moby->rotation).y = -0.7853982;
      }
      iVar19 = M440_00382120(lVar16);
      if (iVar19 == 0) {
        if (*(int *)((int)pvVar7 + 0xa0) != 0) {
          *(int *)((int)pvVar7 + 0xa0) = *(int *)((int)pvVar7 + 0xa0) + -1;
        }
      }
      else {
        local_d0 = (longlong)(int)(animationSpeed * 30.5);
        if (*(int *)((int)pvVar7 + 0xa0) < (int)(animationSpeed * 30.5)) {
          *(int *)((int)pvVar7 + 0xa0) = *(int *)((int)pvVar7 + 0xa0) + 1;
        }
      }
      FastDecTimerS16(uVar24 + 0x40);
      if (((g_Pad.downButtons & CIRCLE) != 0) && (*(short *)((int)pvVar7 + 0x40) == 0)) {
        dVar47 = 4.5;
        uVar46 = 0x411e848000000000;
        if (*(short *)((int)pvVar7 + 0x54) == 1) {
          MB_SphericalToVector
                    (DAT_00841dc0 * g_FrameTime,(moby->rotation).z,-(moby->rotation).y,
                     &local_1b0);
          MB_SetAnimation(*(undefined4 *)((int)pvVar7 + 0x90),1,0,0);
          FUN_005e7d64(&local_1a0,&DAT_00841df0,lVar16 + 0xc0);
          local_1a0 = (moby->pos).x + local_1a0;
          local_198 = (moby->pos).z + local_198;
          local_19c = (moby->pos).y + local_19c;
          local_194 = (moby->pos).w;
          M458_SpawnRocket(lVar16);
          PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(100,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar52 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          dVar42 = 10.5;
          auVar49 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = ZEXT416(0xffffffff);
          auVar50 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar51 = ZEXT416(0xffffffff);
          auVar53 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
          iVar19 = 0;
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x68,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          dVar41 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar50);
          auVar49 = vectorShiftLeftIntegerWord(auVar53,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)pvVar7 + 0x54) = 0;
          auVar51 = loadVectorLeftIndexed(0x6c,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x40,uVar24);
          *(undefined2 *)((int)pvVar7 + 0x40) = uVar8;
          dVar40 = -0.3500000238418579;
          dVar39 = 3.0;
          dVar38 = 6.0;
          dVar48 = 5.5;
          uVar37 = 0x40e86a0000000000;
          do {
            local_190 = 0.0;
            local_18c = 0.0;
            local_188 = 0.0;
            local_184 = 0;
            dVar26 = (double)MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_190 = (float)dVar26;
            dVar26 = (double)MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_18c = (float)dVar26;
            dVar27 = (double)MB_randRangeFloat((float)dVar44,(float)dVar43);
            dVar28 = (double)local_1ac;
            dVar29 = (double)local_1b0;
            dVar30 = (double)local_18c;
            dVar32 = (double)local_1a8;
            dVar35 = (double)local_190;
            local_184 = local_1a4;
            dVar33 = (double)SQRT((float)(dVar27 * dVar27 +
                                         (double)(float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar30 * dVar30))));
            dVar36 = (double)(float)((double)(SQRT((float)(dVar32 * dVar32 +
                                                          (double)(float)(dVar29 * dVar29 +
                                                                         (double)(float)(dVar28 * 
                                                  dVar28)))) *
                                             (float)((double)DAT_0071f408 * dVar40 + dVar43)) /
                                    dVar33);
            dVar26 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            dVar31 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            dVar34 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            local_188 = (float)(dVar32 + dVar26);
            local_18c = (float)(dVar28 + dVar31);
            local_190 = (float)(dVar29 + dVar34);
            dVar26 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar39),
                                        (float)((double)g_FrameTime * dVar38));
            iVar1 = (int)((double)animationSpeed * dVar42);
            local_d0 = (longlong)iVar1;
            dVar27 = (double)SQRT(local_188 * local_188 +
                                  local_190 * local_190 + local_18c * local_18c);
            fVar4 = (float)(dVar26 / dVar27);
            dVar26 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar26 = (double)(local_190 * fVar4);
            }
            dVar28 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar28 = (double)(local_18c * fVar4);
            }
            dVar29 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar29 = (double)(local_188 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar26 = (double)(local_190 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar28 = (double)(local_18c * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar29 = (double)(local_188 * fVar4);
            }
            local_190 = (float)dVar26;
            local_18c = (float)dVar28;
            local_188 = (float)dVar29;
            uVar17 = MB_randRange((int)((double)animationSpeed * dVar48),iVar1);
            SpawnPart_27(uVar37,&local_1a0,&local_190,0x5f2f4f6f,uVar17);
            iVar19 = iVar19 + 1;
          } while (iVar19 < 5);
          dVar44 = (double)SQRT(local_1a8 * local_1a8 +
                                local_1b0 * local_1b0 + local_1ac * local_1ac);
          iVar19 = (int)((double)animationSpeed * dVar41);
          local_d0 = (longlong)iVar19;
          fVar4 = (float)((double)(g_FrameTime * 0.5) / dVar44);
          dVar43 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar43 = (double)(local_1b0 * fVar4);
          }
          dVar48 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar48 = (double)(local_1ac * fVar4);
          }
          dVar38 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar38 = (double)(local_1a8 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar43 = (double)(local_1b0 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar48 = (double)(local_1ac * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar38 = (double)(local_1a8 * fVar4);
          }
          local_1b0 = (float)dVar43;
          local_1ac = (float)dVar48;
          local_1a8 = (float)dVar38;
          uVar37 = MB_randRange((int)((double)animationSpeed * dVar47),iVar19);
          SpawnPart_27(uVar46,&local_1a0,&local_1b0,0x2f4f7f7f,uVar37);
        }
        else {
          MB_SphericalToVector
                    (DAT_00841dc0 * g_FrameTime,(moby->rotation).z,-(moby->rotation).y,
                     &local_180);
          MB_SetAnimation(*(undefined4 *)((int)pvVar7 + 0x94),1,0,0);
          FUN_005e7d64(&local_170,&DAT_00841e00,lVar16 + 0xc0);
          local_170 = (moby->pos).x + local_170;
          local_16c = (moby->pos).y + local_16c;
          local_168 = (moby->pos).z + local_168;
          local_164 = (moby->pos).w;
          M440_00382120(lVar16);
          M458_SpawnRocket(lVar16);
          PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(100,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar52 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          dVar42 = 10.5;
          auVar49 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = ZEXT416(0xffffffff);
          auVar50 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar51 = ZEXT416(0xffffffff);
          auVar53 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
          iVar19 = 0;
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x68,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          dVar41 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar50);
          auVar49 = vectorShiftLeftIntegerWord(auVar53,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)pvVar7 + 0x54) = 1;
          auVar51 = loadVectorLeftIndexed(0x6c,0x3822c0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar52,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar49);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x40,uVar24);
          *(undefined2 *)((int)pvVar7 + 0x40) = uVar8;
          dVar40 = -0.3500000238418579;
          dVar39 = 3.0;
          dVar38 = 6.0;
          dVar48 = 5.5;
          uVar37 = 0x40e86a0000000000;
          do {
            local_160 = 0.0;
            local_15c = 0.0;
            local_158 = 0.0;
            local_154 = 0;
            dVar26 = (double)MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_160 = (float)dVar26;
            dVar26 = (double)MB_randRangeFloat((float)dVar44,(float)dVar43);
            local_15c = (float)dVar26;
            dVar27 = (double)MB_randRangeFloat((float)dVar44,(float)dVar43);
            dVar28 = (double)local_17c;
            dVar29 = (double)local_180;
            dVar30 = (double)local_15c;
            dVar32 = (double)local_178;
            dVar35 = (double)local_160;
            local_154 = local_174;
            dVar33 = (double)SQRT((float)(dVar27 * dVar27 +
                                         (double)(float)(dVar35 * dVar35 +
                                                        (double)(float)(dVar30 * dVar30))));
            dVar36 = (double)(float)((double)(SQRT((float)(dVar32 * dVar32 +
                                                          (double)(float)(dVar29 * dVar29 +
                                                                         (double)(float)(dVar28 * 
                                                  dVar28)))) *
                                             (float)((double)DAT_0071f408 * dVar40 + dVar43)) /
                                    dVar33);
            dVar26 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            dVar31 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            dVar34 = dVar45;
            if (dVar45 - dVar33 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar26 = (double)(float)(dVar27 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar31 = (double)(float)(dVar30 * dVar36);
            }
            if (dVar33 - dVar45 < 0.0) {
              dVar34 = (double)(float)(dVar35 * dVar36);
            }
            local_158 = (float)(dVar32 + dVar26);
            local_15c = (float)(dVar28 + dVar31);
            local_160 = (float)(dVar29 + dVar34);
            dVar26 = (double)MB_randRangeFloat
                                       ((float)((double)g_FrameTime * dVar39),
                                        (float)((double)g_FrameTime * dVar38));
            iVar1 = (int)((double)animationSpeed * dVar42);
            local_d0 = (longlong)iVar1;
            dVar27 = (double)SQRT(local_158 * local_158 +
                                  local_160 * local_160 + local_15c * local_15c);
            fVar4 = (float)(dVar26 / dVar27);
            dVar26 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar26 = (double)(local_160 * fVar4);
            }
            dVar28 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar28 = (double)(local_15c * fVar4);
            }
            dVar29 = dVar45;
            if (dVar45 - dVar27 < 0.0) {
              dVar29 = (double)(local_158 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar26 = (double)(local_160 * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar28 = (double)(local_15c * fVar4);
            }
            if (dVar27 - dVar45 < 0.0) {
              dVar29 = (double)(local_158 * fVar4);
            }
            local_160 = (float)dVar26;
            local_15c = (float)dVar28;
            local_158 = (float)dVar29;
            uVar17 = MB_randRange((int)((double)animationSpeed * dVar48),iVar1);
            SpawnPart_27(uVar37,&local_170,&local_160,0x5f2f4f6f,uVar17);
            iVar19 = iVar19 + 1;
          } while (iVar19 < 5);
          dVar44 = (double)SQRT(local_178 * local_178 +
                                local_180 * local_180 + local_17c * local_17c);
          iVar19 = (int)((double)animationSpeed * dVar41);
          local_d0 = (longlong)iVar19;
          fVar4 = (float)((double)(g_FrameTime * 0.5) / dVar44);
          dVar43 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar43 = (double)(local_180 * fVar4);
          }
          dVar48 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar48 = (double)(local_17c * fVar4);
          }
          dVar38 = dVar45;
          if (dVar45 - dVar44 < 0.0) {
            dVar38 = (double)(local_178 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar43 = (double)(local_180 * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar48 = (double)(local_17c * fVar4);
          }
          if (dVar44 - dVar45 < 0.0) {
            dVar38 = (double)(local_178 * fVar4);
          }
          local_180 = (float)dVar43;
          local_17c = (float)dVar48;
          local_178 = (float)dVar38;
          uVar37 = MB_randRange((int)((double)animationSpeed * dVar47),iVar19);
          SpawnPart_27(uVar46,&local_170,&local_180,0x2f4f7f7f,uVar37);
        }
      }
      iVar19 = FastDecTimerS16(uVar24 + 0x52);
      if (iVar19 != 0) {
        DeactivateMobyDrivenCamAccel();
        FUN_005e7d64(&local_150,&DAT_00841e10,lVar16 + 0xc0);
        local_150 = local_150 + (moby->pos).x;
        local_14c = local_14c + (moby->pos).y;
        local_148 = local_148 + (moby->pos).z;
        Camera_SetMobyDrivenTargetPos(&local_150);
        Camera_SetMobyDrivenTargetRot(&(moby->rotation).x);
      }
      RegisterPostDraw(&PTR_M440_003806d0_0070cbe8,moby);
      iVar19 = FastDecTimerS16(uVar24 + 0x5c);
      if (iVar19 != 0) {
        lVar18 = 0;
        bVar15 = true;
        iVar19 = 0;
        uVar22 = uVar24;
        do {
          iVar1 = *(int *)((int)uVar22 + 0x60);
          if ((iVar1 != 0) && (bVar3 = *(byte *)(iVar1 + 0x20), bVar3 < 0x80 && bVar3 != 2)) {
            bVar15 = false;
          }
          iVar19 = iVar19 + 1;
          uVar22 = uVar22 + 4;
        } while (iVar19 < 8);
        if (bVar15) {
          lVar25 = 4;
          uVar22 = uVar24;
          do {
            iVar19 = (int)uVar22;
            uVar22 = uVar22 + 4;
            lVar18 = lVar18 + ((longlong)
                               (0x7f - (ulonglong)g_MobyInstance[*(int *)(iVar19 + 0x80)].state) >>
                               0x3f & 1U);
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          iVar19 = (int)lVar18;
          if (iVar19 == 4) {
            if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
              moby->setByGroup = '\x02';
              (moby->rotation).y = 0.0;
              Camera_DeactivateMobyDrivenCam(0);
              moby->state = '\x04';
              pMVar21 = g_MobyInstance + *(int *)((int)pvVar7 + 0x9c);
              local_130 = (pMVar21->rotation).x;
              local_12c = (pMVar21->rotation).y;
              local_128 = (pMVar21->rotation).z;
              local_124 = (pMVar21->rotation).w;
              dVar43 = (double)FastWrapRot(local_128,3.1415927);
              local_128 = (float)dVar43;
              fVar4 = (pMVar21->transform).v0.y;
              fVar5 = (pMVar21->transform).v0.x;
              fVar6 = (pMVar21->transform).v0.z;
              dVar43 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
              if (dVar43 == dVar45) {
                local_134 = (pMVar21->transform).v0.w;
                dVar43 = dVar45;
                dVar44 = dVar45;
              }
              else {
                fVar4 = (float)(2.5 / dVar43);
                dVar44 = (double)(fVar5 * fVar4);
                dVar45 = (double)((pMVar21->transform).v0.y * fVar4);
                dVar43 = (double)((pMVar21->transform).v0.z * fVar4);
                local_134 = (pMVar21->transform).v0.w;
              }
              local_140 = (float)(dVar44 + (double)(pMVar21->pos).x);
              local_13c = (float)(dVar45 + (double)(pMVar21->pos).y);
              local_138 = (float)(dVar43 + (double)(pMVar21->pos).z);
              Hero_Warp(&local_140,&local_130,0,1);
              FUN_0023892c(pMVar21,1);
              *(undefined4 *)((int)pvVar7 + 0xa8) = 0x3fc90fdb;
              return;
            }
          }
          else if (iVar19 == 3) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x418c0000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x90,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          else if (iVar19 == 2) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x41700000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x8c,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          else if (iVar19 == 1) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x41480000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x88,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          else if (iVar19 == 0) {
            auVar51 = ZEXT416(0xffffffff);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x98) = 0x41200000;
            auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
            auVar51 = loadVectorLeftIndexed(0x84,0x3822c0);
            auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                         auVar51 << 0x60,auVar49);
            auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
            auVar51 = vectorSplatHalfWord(auVar51,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x5c,uVar24);
            *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
          }
          iVar19 = FastDecTimerU8(uVar24 + 0x5f);
          if ((iVar19 != 0) ||
             (uVar22 = (ulonglong)*(byte *)((int)pvVar7 + 0x5e),
             0x7f < g_MobyInstance
                    [*(int *)((int)pvVar7 + (uint)*(byte *)((int)pvVar7 + 0x5e) * 4 + 0x80)].state))
          {
            uVar23 = 0;
            *(undefined1 *)((int)pvVar7 + 0x5f) = 1;
            uVar22 = 0xffffffffffffffff;
            dVar43 = 3.1415927410125732;
            do {
              pMVar21 = g_MobyInstance;
              iVar19 = *(int *)((int)uVar24 + 0x80);
              dVar44 = (double)FUN_005e8338((double)(g_MobyInstance[iVar19].pos.x - g_heroPosition.x),
                                            (double)(g_MobyInstance[iVar19].pos.y - g_heroPosition.y))
              ;
              dVar44 = (double)FastSubRots((float)dVar44,g_heroRotation.z);
              if ((dVar44 < dVar43) && (pMVar21[iVar19].state < 0x7f)) {
                dVar43 = (double)FUN_005e8338((double)(pMVar21[iVar19].pos.x - g_heroPosition.x),
                                              (double)(pMVar21[iVar19].pos.y - g_heroPosition.y));
                dVar43 = (double)FastSubRots((float)dVar43,g_heroRotation.z);
                uVar22 = uVar23;
              }
              uVar23 = uVar23 + 1;
              uVar24 = uVar24 + 4;
            } while ((int)uVar23 < 4);
            *(char *)((int)pvVar7 + 0x5e) = (char)uVar22;
          }
          g_MobyInstance[*(int *)((int)pvVar7 + ((uint)((uVar22 & 0xffffffff) << 2) & 0x3fc) + 0x80)].
          setByGroup = '\x01';
        }
      }
    }
    else if ((uVar2 != '\x04') && (uVar2 == '\0')) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar7 + 0x58) = 200;
      *(undefined4 *)((int)pvVar7 + 0x98) = 0x41200000;
      pMVar21 = CreateMoby(0x710);
      *(MobyInstance **)((int)pvVar7 + 0xa4) = pMVar21;
      if (pMVar21 != (MobyInstance *)0x0) {
        (pMVar21->pos).x = (moby->pos).x;
        (pMVar21->pos).y = (moby->pos).y;
        (pMVar21->pos).z = (moby->pos).z;
        (pMVar21->pos).w = (moby->pos).w;
        iVar19 = *(int *)((int)pvVar7 + 0xa4);
        *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
        *(undefined2 *)(*(int *)((int)pvVar7 + 0xa4) + 0x32) = 0x30;
        *(undefined1 *)(*(int *)((int)pvVar7 + 0xa4) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar7 + 0xa4) + 0x38) = *(undefined8 *)&moby->color;
      }
      auVar51 = ZEXT416(0xffffffff);
      auVar49 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar49 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      (moby->rotation).y = 0.0;
      auVar51 = loadVectorLeftIndexed(0x3c,0x3822c0);
      *(undefined4 *)((int)pvVar7 + 0x60) = 0;
      auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      *(undefined4 *)((int)pvVar7 + 100) = 0;
      *(undefined4 *)((int)pvVar7 + 0x68) = 0;
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x70) = 0;
      *(undefined4 *)((int)pvVar7 + 0x74) = 0;
      *(undefined4 *)((int)pvVar7 + 0x78) = 0;
      *(undefined4 *)((int)pvVar7 + 0x7c) = 0;
      auVar49 = vectorMultiplyAddFloatingPoint
                          (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar49);
      auVar51 = loadVectorLeftIndexed(0x40,0x3822c0);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar50 = vectorMultiplyAddFloatingPoint
                          (auVar50,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar52);
      auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
      auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
      auVar51 = vectorSplatHalfWord(auVar51,1);
      auVar49 = vectorSplatHalfWord(auVar49,1);
      uVar8 = storeVectorElementHalfWordIndexed(auVar49,0x5c,uVar24);
      *(undefined2 *)((int)pvVar7 + 0x5c) = uVar8;
      *(undefined1 *)((int)pvVar7 + 0x5f) = 0;
      *(undefined1 *)((int)pvVar7 + 0x5e) = 0;
      *(undefined4 *)((int)pvVar7 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x48) = 0;
      *(undefined2 *)((int)pvVar7 + 0x42) = 0;
      uVar8 = storeVectorElementHalfWordIndexed(auVar51,0x40,uVar24);
      *(undefined2 *)((int)pvVar7 + 0x40) = uVar8;
      uVar9 = 0x3fc90fdb;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
        uVar9 = 0;
      }
      *(undefined4 *)((int)pvVar7 + 0xa8) = uVar9;
    }
    if (*(int *)((int)pvVar7 + 0x90) == 0) {
      pMVar21 = CreateMoby(0x236);
      *(MobyInstance **)((int)pvVar7 + 0x90) = pMVar21;
      if (pMVar21 != (MobyInstance *)0x0) {
        pMVar21->updateDistance = -1;
        *(undefined2 *)(*(int *)((int)pvVar7 + 0x90) + 0x32) = 0x7e;
        *(undefined1 *)(*(int *)((int)pvVar7 + 0x90) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar7 + 0x90) + 0x38) = *(undefined8 *)&moby->color;
        FUN_005e7d64(&local_120,&DAT_00841dd0,lVar16 + 0xc0);
        local_11c = (moby->pos).y + local_11c;
        local_118 = (moby->pos).z + local_118;
        local_114 = (moby->pos).w;
        local_120 = (moby->pos).x + local_120;
        iVar19 = *(int *)((int)pvVar7 + 0x90);
        *(float *)(iVar19 + 0x10) = local_120;
        *(float *)(iVar19 + 0x14) = local_11c;
        *(float *)(iVar19 + 0x18) = local_118;
        *(f32 *)(iVar19 + 0x1c) = local_114;
        iVar19 = *(int *)((int)pvVar7 + 0x90);
        *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
        UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0x90));
      }
    }
    else {
      FUN_005e7d64(&local_110,&DAT_00841dd0,lVar16 + 0xc0);
      local_10c = (moby->pos).y + local_10c;
      local_108 = (moby->pos).z + local_108;
      local_104 = (moby->pos).w;
      local_110 = (moby->pos).x + local_110;
      iVar19 = *(int *)((int)pvVar7 + 0x90);
      *(float *)(iVar19 + 0x10) = local_110;
      *(float *)(iVar19 + 0x14) = local_10c;
      *(float *)(iVar19 + 0x18) = local_108;
      *(f32 *)(iVar19 + 0x1c) = local_104;
      iVar19 = *(int *)((int)pvVar7 + 0x90);
      *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
      iVar19 = *(int *)((int)pvVar7 + 0x90);
      if (((*(byte *)(iVar19 + 0x70) & 2) != 0) && (*(char *)(iVar19 + 0x53) == '\x01')) {
        MB_SetAnimation(iVar19,0,0,0);
      }
    }
    if (*(int *)((int)pvVar7 + 0x94) == 0) {
      pMVar21 = CreateMoby(0x236);
      *(MobyInstance **)((int)pvVar7 + 0x94) = pMVar21;
      if (pMVar21 != (MobyInstance *)0x0) {
        pMVar21->updateDistance = -1;
        *(undefined2 *)(*(int *)((int)pvVar7 + 0x94) + 0x32) = 0x7e;
        *(undefined1 *)(*(int *)((int)pvVar7 + 0x94) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar7 + 0x94) + 0x38) = *(undefined8 *)&moby->color;
        FUN_005e7d64(&local_100,&DAT_00841de0,lVar16 + 0xc0);
        local_fc = (moby->pos).y + local_fc;
        local_f8 = (moby->pos).z + local_f8;
        local_f4 = (moby->pos).w;
        local_100 = (moby->pos).x + local_100;
        iVar19 = *(int *)((int)pvVar7 + 0x94);
        *(float *)(iVar19 + 0x10) = local_100;
        *(float *)(iVar19 + 0x14) = local_fc;
        *(float *)(iVar19 + 0x18) = local_f8;
        *(f32 *)(iVar19 + 0x1c) = local_f4;
        iVar19 = *(int *)((int)pvVar7 + 0x94);
        *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
        UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0x94));
      }
    }
    else {
      FUN_005e7d64(&local_f0,&DAT_00841de0,lVar16 + 0xc0);
      local_ec = (moby->pos).y + local_ec;
      local_e8 = (moby->pos).z + local_e8;
      local_e4 = (moby->pos).w;
      local_f0 = (moby->pos).x + local_f0;
      iVar19 = *(int *)((int)pvVar7 + 0x94);
      *(float *)(iVar19 + 0x10) = local_f0;
      *(float *)(iVar19 + 0x14) = local_ec;
      *(float *)(iVar19 + 0x18) = local_e8;
      *(f32 *)(iVar19 + 0x1c) = local_e4;
      iVar19 = *(int *)((int)pvVar7 + 0x94);
      *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
      iVar19 = *(int *)((int)pvVar7 + 0x94);
      if (((*(byte *)(iVar19 + 0x70) & 2) != 0) && (*(char *)(iVar19 + 0x53) == '\x01')) {
        MB_SetAnimation(iVar19,0,0,0);
      }
    }
    if (*(int *)((int)pvVar7 + 0xa4) != 0) {
      FUN_005e7d64(&local_e0,&DAT_00841ea0,lVar16 + 0xc0);
      iVar19 = *(int *)((int)pvVar7 + 0xa4);
      *(float *)(iVar19 + 0x10) = local_e0 + (moby->pos).x;
      *(float *)(iVar19 + 0x14) = local_dc + (moby->pos).y;
      *(float *)(iVar19 + 0x18) = local_d8 + (moby->pos).z;
      *(undefined4 *)(iVar19 + 0x1c) = local_d4;
      iVar19 = *(int *)((int)pvVar7 + 0xa4);
      *(f32 *)(iVar19 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar19 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar19 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar19 + 0x4c) = (moby->rotation).w;
      dVar43 = (double)FastWrapRot
                                 (*(float *)(*(int *)((int)pvVar7 + 0xa4) + 0x44),
                                  *(float *)((int)pvVar7 + 0xa8));
      *(float *)(*(int *)((int)pvVar7 + 0xa4) + 0x44) = (float)dVar43;
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar7 + 0xa4));
    }
  }
  return;
}


