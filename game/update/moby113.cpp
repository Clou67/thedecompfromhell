// game/update/moby113.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x24d2e4-0x24f0ec
// shared update function UpdateMoby_a_lot_19; registered for oClasses 113, 1332, 1333, 1334, 1335, 1336, 1337, 1338
#include "game/update/moby113.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1331.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x024d2e4 (0xf8 bytes)
undefined8 FUN_0024d2e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_00fa2f8c;
  piVar3 = piVar2;
  do {
    if (*piVar3 == param_1) {
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 3);
  iVar4 = 0;
  do {
    if (*piVar2 == 0) {
      iVar1 = iVar4 * 4;
      (&DAT_00fa2f8c)[iVar4] = param_1;
      *(undefined4 *)(&DAT_00fa2f2c + iVar1) = 0;
      *(undefined4 *)(&DAT_00fa2f44 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fa2f38 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fa2f68 + iVar1) = param_2;
      *(undefined4 *)(&DAT_00fa2f74 + iVar1) = param_3;
      *(undefined4 *)(&DAT_00fa2f80 + iVar1) = 0;
      (&DAT_00fa2f20)[iVar4] = 1;
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 3);
  return 0;
}


// 0x024d3dc (0x60 bytes)
undefined8 M1338_0024d3dc(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_00fa2f8c;
  do {
    if (*piVar3 == param_1) {
      iVar1 = (int)((uVar2 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fa2f20 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 2;
      }
      return 1;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar2 < 3);
  return 0;
}


// 0x024d43c (0xd0 bytes)
undefined8 FUN_0024d43c(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fa2f8c;
  do {
    if (*piVar2 == param_1) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      *(undefined4 *)((int)&DAT_00fa2f8c + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 0;
      if (*(int *)(&DAT_00fa2f50 + iVar1) != -1) {
        DeletePointLight(*(int *)(&DAT_00fa2f50 + iVar1));
        *(undefined4 *)(&DAT_00fa2f50 + iVar1) = 0xffffffff;
      }
      if (*(int *)(&DAT_00fa2f5c + iVar1) != -1) {
        DeletePointLight(*(int *)(&DAT_00fa2f5c + iVar1));
        *(undefined4 *)(&DAT_00fa2f5c + iVar1) = 0xffffffff;
      }
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}


// 0x024d50c (0xf4 bytes)
undefined8 FUN_0024d50c(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fa2f8c;
  do {
    if (param_1 == *piVar2) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fa2f20 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 2;
      }
      else if (*(int *)((int)&DAT_00fa2f20 + iVar1) == 4) {
        *(undefined4 *)((int)&DAT_00fa2f20 + iVar1) = 3;
      }
      FastMemCopy
                (ZEXT48(&DAT_00fa2fa0) + (uVar3 & 0x3ffffff) * 0x40 & 0xffffffff,param_2,0x40);
      iVar1 = (int)uVar3;
      (&DAT_00fa3060)[iVar1 * 4] = *param_3;
      (&DAT_00fa3064)[iVar1 * 4] = param_3[1];
      (&DAT_00fa3068)[iVar1 * 4] = param_3[2];
      (&DAT_00fa306c)[iVar1 * 4] = param_3[3];
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}


// 0x024d620 (0xbe0 bytes)
// inlined: FastRSqrt @0x24d8cc, FastRSqrt @0x24d9e0, FastRSqrt @0x24dbcc, FastRSqrt @0x24dc84, FastRSqrt @0x24de60, FastRSqrt @0x24df0c
void M1338_0024d620(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float local_260 [4];
  float local_250 [4];
  GPiece<64> local_240;
  GPiece<64> local_200;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<96> local_190;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<96> local_100;
  
  GetEffectTex();
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  GetEffectTex(param_2);
  uVar8 = 0x3ff0000000000000;
  uVar7 = 0;
  uVar6 = 0xbff0000000000000;
  FUN_005e825c(local_260,param_3,local_200);
  FUN_005e825c(local_250,param_3 + 0x10,local_200);
  FUN_005e825c(local_1c0,local_1c0,local_240);
  FUN_005e825c(local_1b0,local_1b0,local_240);
  FUN_005e825c(local_130,local_130,local_240);
  FUN_005e825c(local_120,local_120,local_240);
  uVar2 = 1;
  do {
    lVar1 = (uVar2 & 0xfffffff) * 0x10;
    FUN_005e825c(local_260,lVar1 + param_3 & 0xffffffff,local_200);
    FUN_005e825c(local_250,lVar1 + param_3 + 0x10 & 0xffffffff,local_200);
    FUN_005e825c(local_1a0,local_1a0,local_240);
    FUN_005e825c(local_190,local_190,local_240);
    FUN_005e825c(local_110,local_110,local_240);
    FUN_005e825c(local_100,local_100,local_240);
    if ((int)uVar2 == 1) {
      FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
      FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
    }
    else {
      FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
      FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
    }
    dVar4 = (double)FastIntToDouble(uVar2);
    dVar5 = (double)FastIntToDouble(0x14);
    MB_catmullRom(uVar6,uVar7,uVar8,uVar7,(double)(float)(dVar4 / dVar5));
    iVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)iVar3;
  } while (iVar3 < 0x13);
  return;
}


// 0x024e228 (0x85c bytes)
// inlined: FastRSqrt @0x24e318, FastRSqrt @0x24e748
void M1338_0024e228(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
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
  undefined8 uVar24;
  double dVar25;
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
  float local_180 [46];
  
  iVar5 = (int)(param_2 << 6);
  dVar27 = (double)*(float *)(iVar5 + 0xfa2fd4);
  dVar26 = (double)*(float *)(iVar5 + 0xfa2fd0);
  fVar2 = (float)((double)GameCamera.posY - dVar27);
  dVar28 = (double)*(float *)(iVar5 + 0xfa2fd8);
  fVar3 = (float)((double)GameCamera.posX - dVar26);
  fVar4 = (float)((double)GameCamera.posZ - dVar28);
  dVar23 = 0.0;
  dVar25 = (double)(float)GameCamera.field8_0x14c;
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  dVar30 = dVar23;
  dVar31 = dVar23;
  dVar32 = dVar23;
  if (SQRT(fVar1) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar1);
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar32 = (double)(fVar3 * fVar6);
    dVar31 = (double)(fVar2 * fVar6);
    dVar30 = (double)(fVar4 * fVar6);
  }
  fVar2 = (float)((double)DAT_00969f78 * dVar32 -
                 (double)(float)((double)g_heroGravityDir * dVar30));
  fVar3 = (float)((double)DAT_00969f74 * dVar30 - (double)(float)((double)DAT_00969f78 * dVar31));
  fVar4 = (float)((double)g_heroGravityDir * dVar31 -
                 (double)(float)((double)DAT_00969f74 * dVar32));
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = -1.0 / fVar1;
  dVar29 = dVar23;
  if (0.0 - fVar1 < 0.0) {
    dVar29 = (double)(fVar3 * fVar6);
  }
  dVar19 = dVar23;
  if (0.0 - fVar1 < 0.0) {
    dVar19 = (double)(fVar2 * fVar6);
  }
  dVar20 = dVar23;
  if (0.0 - fVar1 < 0.0) {
    dVar20 = (double)(fVar4 * fVar6);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar29 = (double)(fVar3 * fVar6);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar19 = (double)(fVar2 * fVar6);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar20 = (double)(fVar4 * fVar6);
  }
  dVar35 = (double)(float)(dVar32 * dVar19 - (double)(float)(dVar31 * dVar29));
  dVar33 = (double)(float)(dVar31 * dVar20 - (double)(float)(dVar30 * dVar19));
  dVar34 = (double)(float)(dVar30 * dVar29 - (double)(float)(dVar32 * dVar20));
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,1,0,1,0xff);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  dVar13 = (double)MB_randRangeFloat(0.3,0.325);
  uVar24 = 0x3fa99999a0000000;
  dVar14 = (double)MB_randRangeSigned(dVar23,0x3fa99999a0000000);
  dVar15 = (double)MB_randRangeSigned(dVar23,uVar24);
  dVar16 = (double)MB_randRangeSigned(dVar23,uVar24);
  pfVar11 = local_180;
  pfVar10 = (float *)&DAT_0079b490;
  lVar12 = 4;
  pfVar9 = pfVar10;
  pfVar8 = pfVar11;
  do {
    fVar3 = *pfVar9;
    fVar2 = (float)((double)fVar3 * dVar13);
    dVar17 = (double)fVar2;
    *pfVar8 = fVar2;
    dVar18 = (double)(float)((double)pfVar9[1] * dVar13);
    pfVar8[1] = (float)((double)pfVar9[1] * dVar13);
    dVar21 = (double)(float)((double)pfVar9[2] * dVar13);
    pfVar8[2] = (float)((double)pfVar9[2] * dVar13);
    dVar22 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)((double)fVar3 * (double)(float)(dVar13 * dVar25) + dVar22);
    *pfVar8 = (float)(dVar18 * dVar29 +
                     (double)(float)(dVar22 * dVar26 +
                                    (double)(float)(dVar21 * dVar33 +
                                                   (double)(float)(dVar17 * dVar32 + dVar14))));
    pfVar8[1] = (float)(dVar18 * dVar19 +
                       (double)(float)(dVar22 * dVar27 +
                                      (double)(float)(dVar21 * dVar34 +
                                                     (double)(float)(dVar17 * dVar31 + dVar15))));
    pfVar8[2] = (float)(dVar18 * dVar20 +
                       (double)(float)(dVar22 * dVar28 +
                                      (double)(float)(dVar21 * dVar35 +
                                                     (double)(float)(dVar17 * dVar30 + dVar16))));
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FastDrawQuad(local_180,0,0,EffectTexHeaders,9);
  idol_draw::PackCmd(0,2,0,1,0xff);
  uVar7 = EffectTexHeaders;
  lVar12 = 4;
  dVar13 = (double)(float)(dVar13 * 3.0);
  pfVar9 = pfVar10;
  pfVar8 = pfVar11;
  do {
    fVar3 = *pfVar9;
    fVar2 = (float)((double)fVar3 * dVar13);
    dVar17 = (double)fVar2;
    *pfVar8 = fVar2;
    dVar18 = (double)pfVar9[1];
    pfVar8[1] = (float)(dVar18 * dVar13);
    dVar21 = (double)(float)((double)pfVar9[2] * dVar13);
    pfVar8[2] = (float)((double)pfVar9[2] * dVar13);
    dVar22 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)((double)fVar3 * (double)(float)(dVar13 * dVar25) + dVar22);
    *pfVar8 = (float)(dVar22 * dVar26 +
                     (double)(float)(dVar21 * dVar33 +
                                    (double)(float)(dVar17 * dVar32 +
                                                   (double)(float)(dVar18 * (double)(float)(dVar13 *
                                                                                           dVar29)))
                                    ));
    pfVar8[1] = (float)(dVar22 * dVar27 +
                       (double)(float)(dVar21 * dVar34 +
                                      (double)(float)(dVar17 * dVar31 +
                                                     (double)(float)(dVar18 * (double)(float)(dVar13
                                                                                             * 
                                                  dVar19)))));
    pfVar8[2] = (float)(dVar22 * dVar28 +
                       (double)(float)(dVar21 * dVar35 +
                                      (double)(float)(dVar17 * dVar30 +
                                                     (double)(float)(dVar18 * (double)(float)(dVar13
                                                                                             * 
                                                  dVar20)))));
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FastDrawQuad(local_180,0,0,uVar7,9);
  iVar5 = (int)(param_2 << 4);
  dVar28 = (double)*(float *)(iVar5 + 0xfa3094);
  dVar27 = (double)*(float *)(iVar5 + 0xfa3090);
  fVar2 = (float)((double)GameCamera.posY - dVar28);
  dVar29 = (double)*(float *)(iVar5 + 0xfa3098);
  fVar3 = (float)((double)GameCamera.posX - dVar27);
  fVar4 = (float)((double)GameCamera.posZ - dVar29);
  dVar26 = (double)*(float *)(iVar5 + 0xfa309c);
  dVar25 = (double)(float)GameCamera.field8_0x14c;
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  dVar30 = dVar23;
  dVar31 = dVar23;
  dVar32 = dVar23;
  if ((double)SQRT(fVar1) != dVar23) {
    fVar6 = 1.0 / SQRT(fVar1);
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar32 = (double)(fVar3 * fVar6);
    dVar31 = (double)(fVar2 * fVar6);
    dVar30 = (double)(fVar4 * fVar6);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar32 -
                 (double)(float)((double)g_heroGravityDir * dVar30));
  fVar4 = (float)((double)DAT_00969f74 * dVar30 - (double)(float)((double)DAT_00969f78 * dVar31));
  fVar1 = (float)((double)g_heroGravityDir * dVar31 -
                 (double)(float)((double)DAT_00969f74 * dVar32));
  dVar20 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = (float)(-1.0 / dVar20);
  dVar19 = dVar23;
  if (dVar23 - dVar20 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  dVar13 = dVar23;
  if (dVar23 - dVar20 < 0.0) {
    dVar13 = (double)(fVar3 * fVar2);
  }
  dVar33 = dVar23;
  if (dVar23 - dVar20 < 0.0) {
    dVar33 = (double)(fVar1 * fVar2);
  }
  if (dVar20 - dVar23 < 0.0) {
    dVar19 = (double)(fVar4 * fVar2);
  }
  if (dVar20 - dVar23 < 0.0) {
    dVar13 = (double)(fVar3 * fVar2);
  }
  if (dVar20 - dVar23 < 0.0) {
    dVar33 = (double)(fVar1 * fVar2);
  }
  dVar35 = (double)(float)(dVar32 * dVar13 - (double)(float)(dVar31 * dVar19));
  dVar20 = (double)(float)(dVar31 * dVar33 - (double)(float)(dVar30 * dVar13));
  dVar34 = (double)(float)(dVar30 * dVar19 - (double)(float)(dVar32 * dVar33));
  dVar23 = (double)MB_randRangeFloat(0.2,0.225);
  idol_draw::PackCmd(0,1,0,1,0xff);
  uVar7 = EffectTexHeaders;
  lVar12 = 4;
  pfVar9 = pfVar10;
  pfVar8 = pfVar11;
  do {
    fVar3 = *pfVar9;
    fVar2 = (float)((double)fVar3 * dVar23);
    dVar17 = (double)fVar2;
    *pfVar8 = fVar2;
    dVar18 = (double)(float)((double)pfVar9[1] * dVar23);
    pfVar8[1] = (float)((double)pfVar9[1] * dVar23);
    dVar21 = (double)(float)((double)pfVar9[2] * dVar23);
    pfVar8[2] = (float)((double)pfVar9[2] * dVar23);
    dVar22 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar8[3] = (float)(dVar22 * dVar26 +
                       (double)(float)((double)fVar3 * (double)(float)(dVar23 * dVar25)));
    *pfVar8 = (float)(dVar18 * dVar19 +
                     (double)(float)(dVar22 * dVar27 +
                                    (double)(float)(dVar21 * dVar20 +
                                                   (double)(float)(dVar17 * dVar32 + dVar14))));
    pfVar8[1] = (float)(dVar18 * dVar13 +
                       (double)(float)(dVar22 * dVar28 +
                                      (double)(float)(dVar21 * dVar34 +
                                                     (double)(float)(dVar17 * dVar31 + dVar15))));
    pfVar8[2] = (float)(dVar18 * dVar33 +
                       (double)(float)(dVar22 * dVar29 +
                                      (double)(float)(dVar21 * dVar35 +
                                                     (double)(float)(dVar17 * dVar30 + dVar16))));
    pfVar8 = pfVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FastDrawQuad(local_180,0,0,uVar7,9);
  idol_draw::PackCmd(0,2,0,1,0xff);
  uVar7 = EffectTexHeaders;
  dVar23 = (double)(float)(dVar23 * 3.0);
  lVar12 = 4;
  do {
    fVar3 = *pfVar10;
    fVar2 = (float)((double)fVar3 * dVar23);
    dVar14 = (double)fVar2;
    *pfVar11 = fVar2;
    dVar15 = (double)pfVar10[1];
    pfVar11[1] = (float)(dVar15 * dVar23);
    dVar16 = (double)(float)((double)pfVar10[2] * dVar23);
    pfVar11[2] = (float)((double)pfVar10[2] * dVar23);
    dVar17 = (double)pfVar10[3];
    pfVar10 = pfVar10 + 4;
    pfVar11[3] = (float)(dVar17 * dVar26 +
                        (double)(float)((double)fVar3 * (double)(float)(dVar23 * dVar25)));
    *pfVar11 = (float)(dVar17 * dVar27 +
                      (double)(float)(dVar16 * dVar20 +
                                     (double)(float)(dVar14 * dVar32 +
                                                    (double)(float)(dVar15 * (double)(float)(dVar23 
                                                  * dVar19)))));
    pfVar11[1] = (float)(dVar17 * dVar28 +
                        (double)(float)(dVar16 * dVar34 +
                                       (double)(float)(dVar14 * dVar31 +
                                                      (double)(float)(dVar15 * (double)(float)(
                                                  dVar23 * dVar13)))));
    pfVar11[2] = (float)(dVar17 * dVar29 +
                        (double)(float)(dVar16 * dVar35 +
                                       (double)(float)(dVar14 * dVar30 +
                                                      (double)(float)(dVar15 * (double)(float)(
                                                  dVar23 * dVar33)))));
    pfVar11 = pfVar11 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FastDrawQuad(local_180,0,0,uVar7,9);
  return;
}


// 0x024ea90 (0x1c4 bytes)
void M1338_0024ea90(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  piVar1 = *(int **)(param_1 + 0x78);
  uVar2 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar2);
  dVar7 = 0.20000000298023224;
  dVar8 = -8.0;
  dVar9 = 8.0;
  uVar4 = 0;
  do {
    iVar5 = (int)((uVar4 & 0xffffffff) << 2);
    if ((*(int *)((int)&DAT_00fa2f8c + iVar5) != 0) && (1 < *(int *)((int)&DAT_00fa2f20 + iVar5))) {
      dVar6 = -(double)(float)((double)DAT_0071f408 * dVar7 -
                              (double)*(float *)(&DAT_00fa2f80 + iVar5));
      *(float *)(&DAT_00fa2f80 + iVar5) = (float)dVar6;
      if (dVar6 <= dVar8) {
        *(float *)(&DAT_00fa2f80 + iVar5) = (float)(dVar6 + dVar9);
      }
      M1338_0024e228(*(int *)((int)&DAT_00fa2f8c + iVar5),uVar4);
      iVar5 = piVar1[1] + 0x28;
      iVar3 = *piVar1 + 0x28;
      M1338_0024d620(iVar5,iVar3,ZEXT48(&DAT_00fa30c0) + (uVar4 & 0x7fffffff) * 0x280 & 0xffffffff,
                     0x80,0x40,uVar4);
      M1338_0024d620(iVar5,iVar3,
                     ZEXT48(&DAT_00fa30c0) + ((uVar4 & 0x7fffffff) * 2 + 1) * 0x140 & 0xffffffff,
                     0x30,0x10,uVar4);
    }
    iVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)iVar5;
  } while (iVar5 < 3);
  return;
}


// 0x024ec54 (0x14 bytes)
void M1338_0024ec54(void)

{
  DAT_0079b520 = 0x10000;
  return;
}


// 0x024ec68 (0x11c bytes)
longlong FUN_0024ec68(int param_1,undefined8 param_2,MOBY_OCLASSES param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  pMVar7 = CreateMoby(param_3);
  if (pMVar7 != (MobyInstance *)0x0) {
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar2 = pMVar7->pClass->gScale;
    fVar3 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\0';
    pvVar4 = pMVar7->pVar;
    *(int *)((int)pvVar4 + 0x44) = (int)param_2;
    pMVar7->scale = (fVar2 * fVar1) / fVar3;
    GetBonePosition(param_1,param_2,(longlong)(int)pMVar7 + 0x10);
    *(int *)((int)pvVar4 + 0x3c) = param_1;
    UpdateMobyTransform(pMVar7);
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar5 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar10 = puVar5[2];
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    puVar6 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar14 = puVar6[3];
    uVar13 = puVar6[2];
    uVar12 = puVar6[1];
    uVar11 = *puVar6;
    puVar6 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar18 = puVar6[3];
    uVar17 = puVar6[2];
    uVar16 = puVar6[1];
    uVar15 = *puVar6;
    puVar6 = (undefined4 *)((uint)&pMVar7->transform & 0xfffffff0);
    puVar6[3] = puVar5[3];
    puVar6[2] = uVar10;
    puVar6[1] = uVar9;
    *puVar6 = uVar8;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v1 & 0xfffffff0);
    puVar5[3] = uVar14;
    puVar5[2] = uVar13;
    puVar5[1] = uVar12;
    *puVar5 = uVar11;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v2 & 0xfffffff0);
    puVar5[3] = uVar18;
    puVar5[2] = uVar17;
    puVar5[1] = uVar16;
    *puVar5 = uVar15;
    UpdateMobyTransform(pMVar7);
  }
  return (longlong)(int)pMVar7;
}


// shared update function, registered for oClasses 113, 1332, 1333, 1334, 1335, 1336, 1337, 1338
// 0x024eda0 (0x34c bytes)
/* Moby 113
   Moby 1332
   Moby 1333
   Moby 1334
   Moby 1335
   Moby 1336
   Moby 1337
   Moby 1338 */

void UpdateMoby_113(MobyInstance *moby)

{
  u8 uVar1;
  MOBY_OCLASSES MVar2;
  void *pvVar3;
  f32 fVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  
  lVar6 = (longlong)(int)moby;
  uVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (uVar1 == '\x04') {
    MB_genericExplosion
              (0x4000000000000000,0x4010000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar6,(int)pvVar3 + 0x10,0,1
               ,0xffffffffffffffff,10,3,0x10);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x03') {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x10);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x14);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x18);
    *(float *)((int)pvVar3 + 0x10) = *(float *)((int)pvVar3 + 0x10) * 0.99;
    *(float *)((int)pvVar3 + 0x14) = *(float *)((int)pvVar3 + 0x14) * 0.99;
    *(float *)((int)pvVar3 + 0x18) = *(float *)((int)pvVar3 + 0x18) * 0.99 - g_FrameTimeSq * 39.2;
    iVar8 = CollSphere(0x4000000000000000,lVar6 + 0x10,&DAT_0024ed84,0,lVar6);
    if ((iVar8 != 0) &&
       ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
        ((((MVar2 = (g_CollOutput.pMoby)->oClass, MVar2 != 0x504 && MVar2 != 0x71 &&
           (MVar2 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER))) && (MVar2 != 0x535)) &&
         (((MVar2 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036) &&
           (MVar2 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037))) &&
          ((MVar2 != 0x538 && ((MVar2 != 0x539 && (MVar2 != 0x53a)))))))))))) {
      FastVecReflect((int)pvVar3 + 0x10,(int)pvVar3 + 0x10,0xa10980);
      moby->state = '\x04';
    }
    dVar9 = (double)FastWrapRot((moby->rotation).x,*(float *)((int)pvVar3 + 0x30));
    (moby->rotation).x = (float)dVar9;
    dVar9 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x34));
    (moby->rotation).y = (float)dVar9;
    dVar9 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar3 + 0x38));
    fVar4 = (moby->pos).x;
    (moby->rotation).z = (float)dVar9;
    uVar5 = (int)fVar4 >> 0x1f;
    iVar8 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5;
    if ((((0x411fffff < iVar8) && (iVar8 < 0x447d4001)) &&
        (fVar4 = (moby->pos).y, uVar5 = (int)fVar4 >> 0x1f,
        iVar8 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5, iVar8 < 0x447d4001 && 0x411fffff < iVar8)) &&
       ((fVar4 = (moby->pos).z, uVar5 = (int)fVar4 >> 0x1f,
        iVar8 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5, 0x411fffff < iVar8 && (iVar8 < 0x447d4001)))) {
      return;
    }
    DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x02') {
    return;
  }
  if (uVar1 != '\x01') {
    if (uVar1 != '\0') {
      return;
    }
    moby->state = '\x01';
    *(undefined1 *)((int)pvVar3 + 0x20) = 0;
    *(undefined1 *)((int)pvVar3 + 0x21) = 0;
    *(undefined1 *)((int)pvVar3 + 0x22) = 0;
    *(undefined1 *)((int)pvVar3 + 0x23) = 0;
    *(undefined1 *)((int)pvVar3 + 0x24) = 0;
    *(undefined1 *)((int)pvVar3 + 0x25) = 0;
    *(undefined1 *)((int)pvVar3 + 0x26) = 0;
    *(undefined1 *)((int)pvVar3 + 0x27) = 0;
    *(undefined1 *)((int)pvVar3 + 0x28) = 0;
    *(undefined1 *)((int)pvVar3 + 0x29) = 0;
    *(undefined1 *)((int)pvVar3 + 0x2a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x2b) = 0;
    *(undefined1 *)((int)pvVar3 + 0x2c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x2d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x2e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x2f) = 0;
    return;
  }
  uVar7 = *(undefined8 *)(*(int *)((int)pvVar3 + 0x3c) + 0x38);
  moby->color = (int)((ulonglong)uVar7 >> 0x20);
  moby->light = (int)uVar7;
  return;
}


