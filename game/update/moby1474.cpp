// game/update/moby1474.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x288730-0x28a988
#include "game/update/moby1474.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1471.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0288730 (0xf8 bytes)
undefined8 FUN_00288730(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = &DAT_00fad14c;
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
      (&DAT_00fad14c)[iVar4] = param_1;
      *(undefined4 *)(&DAT_00fad0ec + iVar1) = 0;
      *(undefined4 *)(&DAT_00fad104 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fad0f8 + iVar1) = 0;
      *(undefined4 *)(&DAT_00fad110 + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fad11c + iVar1) = 0xffffffff;
      *(undefined4 *)(&DAT_00fad128 + iVar1) = param_2;
      *(undefined4 *)(&DAT_00fad134 + iVar1) = param_3;
      *(undefined4 *)(&DAT_00fad140 + iVar1) = 0;
      (&DAT_00fad0e0)[iVar4] = 1;
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 3);
  return 0;
}


// 0x0288828 (0x60 bytes)
undefined8 M1474_00288828(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_00fad14c;
  do {
    if (*piVar3 == param_1) {
      iVar1 = (int)((uVar2 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fad0e0 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 2;
      }
      return 1;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar2 < 3);
  return 0;
}


// 0x0288888 (0xd0 bytes)
undefined8 FUN_00288888(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fad14c;
  do {
    if (*piVar2 == param_1) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      *(undefined4 *)((int)&DAT_00fad14c + iVar1) = 0;
      *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 0;
      if (*(int *)(&DAT_00fad110 + iVar1) != -1) {
        DeletePointLight(*(int *)(&DAT_00fad110 + iVar1));
        *(undefined4 *)(&DAT_00fad110 + iVar1) = 0xffffffff;
      }
      if (*(int *)(&DAT_00fad11c + iVar1) != -1) {
        DeletePointLight(*(int *)(&DAT_00fad11c + iVar1));
        *(undefined4 *)(&DAT_00fad11c + iVar1) = 0xffffffff;
      }
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}


// 0x0288958 (0xf4 bytes)
undefined8 FUN_00288958(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_00fad14c;
  do {
    if (param_1 == *piVar2) {
      iVar1 = (int)((uVar3 & 0xffffffff) << 2);
      if (*(int *)((int)&DAT_00fad0e0 + iVar1) == 1) {
        *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 2;
      }
      else if (*(int *)((int)&DAT_00fad0e0 + iVar1) == 4) {
        *(undefined4 *)((int)&DAT_00fad0e0 + iVar1) = 3;
      }
      FastMemCopy
                (ZEXT48(&DAT_00fad160) + (uVar3 & 0x3ffffff) * 0x40 & 0xffffffff,param_2,0x40);
      iVar1 = (int)uVar3;
      (&DAT_00fad220)[iVar1 * 4] = *param_3;
      (&DAT_00fad224)[iVar1 * 4] = param_3[1];
      (&DAT_00fad228)[iVar1 * 4] = param_3[2];
      (&DAT_00fad22c)[iVar1 * 4] = param_3[3];
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 3);
  return 0;
}


// 0x0288a70 (0xbe0 bytes)
// inlined: FastRSqrt @0x288d1c, FastRSqrt @0x288e30, FastRSqrt @0x28901c, FastRSqrt @0x2890d4, FastRSqrt @0x2892b0, FastRSqrt @0x28935c
void M1474_00288a70(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// 0x0289678 (0x85c bytes)
// inlined: FastRSqrt @0x289768, FastRSqrt @0x289b98
void M1474_00289678(undefined8 param_1,longlong param_2)

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
  dVar27 = (double)*(float *)(iVar5 + 0xfad194);
  dVar26 = (double)*(float *)(iVar5 + 0xfad190);
  fVar2 = (float)((double)GameCamera.posY - dVar27);
  dVar28 = (double)*(float *)(iVar5 + 0xfad198);
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
  pfVar10 = (float *)&DAT_007aae50;
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
  dVar28 = (double)*(float *)(iVar5 + 0xfad254);
  dVar27 = (double)*(float *)(iVar5 + 0xfad250);
  fVar2 = (float)((double)GameCamera.posY - dVar28);
  dVar29 = (double)*(float *)(iVar5 + 0xfad258);
  fVar3 = (float)((double)GameCamera.posX - dVar27);
  fVar4 = (float)((double)GameCamera.posZ - dVar29);
  dVar26 = (double)*(float *)(iVar5 + 0xfad25c);
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


// 0x0289ee0 (0x1c4 bytes)
void M1474_00289ee0(int param_1)

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
    if ((*(int *)((int)&DAT_00fad14c + iVar5) != 0) && (1 < *(int *)((int)&DAT_00fad0e0 + iVar5))) {
      dVar6 = -(double)(float)((double)DAT_0071f408 * dVar7 -
                              (double)*(float *)(&DAT_00fad140 + iVar5));
      *(float *)(&DAT_00fad140 + iVar5) = (float)dVar6;
      if (dVar6 <= dVar8) {
        *(float *)(&DAT_00fad140 + iVar5) = (float)(dVar6 + dVar9);
      }
      M1474_00289678(*(int *)((int)&DAT_00fad14c + iVar5),uVar4);
      iVar5 = piVar1[1] + 0x28;
      iVar3 = *piVar1 + 0x28;
      M1474_00288a70(iVar5,iVar3,ZEXT48(&DAT_00fad280) + (uVar4 & 0x7fffffff) * 0x280 & 0xffffffff,
                     0x80,0x40,uVar4);
      M1474_00288a70(iVar5,iVar3,
                     ZEXT48(&DAT_00fad280) + ((uVar4 & 0x7fffffff) * 2 + 1) * 0x140 & 0xffffffff,
                     0x30,0x10,uVar4);
    }
    iVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)iVar5;
  } while (iVar5 < 3);
  return;
}


// 0x028a0a4 (0x14 bytes)
void M1474_0028a0a4(void)

{
  DAT_007aaee0 = 0x10000;
  return;
}


// 0x028a0b8 (0x58 bytes)
undefined8 M1474_0028a0b8(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


// 0x028a138 (0x850 bytes)
/* Moby 1474 */

void UpdateMoby_1474(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  uint uVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  MobyInstance *pMVar13;
  int iVar15;
  longlong lVar14;
  MobyClass *pMVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  Vec4 local_50;
  
  pvVar9 = moby->pVar;
  uVar17 = ZEXT48(pvVar9);
  if ((&g_CheckpointLevelFlags)[(byte)moby->levelFlagIdx] != -1) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  if (*(int *)((int)pvVar9 + 0xb4) == -1) {
    return;
  }
  dVar21 = (double)(moby->pos).x;
  dVar22 = (double)(moby->pos).y;
  dVar23 = (double)(moby->pos).z;
  pSVar11 = Splines[*(int *)((int)pvVar9 + 0xb4)];
  FastDecTimerS16(uVar17 + 0xba);
  pMVar16 = moby->pClass;
  if (moby->state == '\0') {
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined2 *)((int)pvVar9 + 0x24) = 0;
    *(undefined1 *)((int)pvVar9 + 0x28) = 4;
    uVar10 = *(uint *)((int)pvVar9 + 0xa0);
    *(undefined2 *)((int)pvVar9 + 0x3e) = 5;
    moby->setByGroup = (char)uVar10;
    uVar2 = 0;
    if ((uVar10 & 0xff) == 0) {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)((int)pvVar9 + 0xa4) = uVar2;
    iVar15 = FastDoubleToInt();
    lVar14 = 0;
    if (iVar15 != 0) {
      lVar14 = (ulonglong)(uint)pSVar11->cnt - 1;
    }
    iVar15 = (int)(lVar14 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar11->points[0].x + iVar15);
    (moby->pos).y = *(f32 *)((int)&pSVar11->points[0].y + iVar15);
    (moby->pos).z = *(f32 *)((int)&pSVar11->points[0].z + iVar15);
    (moby->pos).w = *(f32 *)((int)&pSVar11->points[0].w + iVar15);
    *(undefined2 *)((int)pvVar9 + 0xba) = 0;
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
    MVar8 = moby->modeBits;
    moby->state = '\x01';
    moby->updateDistance = -1;
    pMVar16 = moby->pClass;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
    moby->modeBits =
         MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    moby->collision = pMVar16->collision;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        fVar3 = pMVar16->gScale;
        fVar4 = -(fVar3 * 0.016666668 - moby->scale);
        moby->scale = fVar4;
        if (fVar4 < 0.0) {
          moby->scale = fVar3;
          (moby->pos).x = pSVar11->points[0].x;
          (moby->pos).y = pSVar11->points[0].y;
          (moby->pos).z = pSVar11->points[0].z;
          fVar3 = pSVar11->points[0].w;
          moby->setByGroup = '\x01';
          (moby->pos).w = fVar3;
          *(undefined4 *)((int)pvVar9 + 0xa4) = 0;
        }
      }
      else if (((*(short *)((int)pvVar9 + 0xb8) != 0) &&
               (((pMVar13 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
                || (pMVar13 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar13 == moby)) {
        if (((*(int *)((int)pvVar9 + 200) == 0) &&
            (((pMVar13 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP)) ||
             (pMVar13 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar13 == moby)) {
          TransitionMovement(0x72,1);
        }
        moby->setByGroup = '\x02';
        fVar3 = animationSpeed;
        *(undefined2 *)((int)pvVar9 + 0xb8) = 0;
        *(float *)((int)pvVar9 + 0xac) = 1.0 / (fVar3 * *(float *)((int)pvVar9 + 0xb0) * 60.0);
      }
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar9 + 0xba) == 0) {
      dVar20 = 0.0;
      if ((((-1 < *(int *)((int)pvVar9 + 0xbc)) ||
           (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
           2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
          (fVar3 = (moby->pos).z, 4.0 <= ABS(g_heroPosition.z - fVar3))) ||
         (fVar3 - g_heroPosition.z <= 1.0)) {
        iVar15 = IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0xc4));
        if (iVar15 == 0) {
          iVar15 = PlayMobySound(0,4,moby);
          *(int *)((int)pvVar9 + 0xc4) = iVar15;
        }
        dVar18 = (double)*(float *)((int)pvVar9 + 0xac);
        fVar3 = (float)(dVar18 * (double)g_FrameTime +
                       (double)*(float *)((int)pvVar9 + 0xa8));
        dVar19 = (double)fVar3;
        *(float *)((int)pvVar9 + 0xa8) = fVar3;
        if (ABS(dVar18) < ABS(dVar19)) {
          *(float *)((int)pvVar9 + 0xa8) = *(float *)((int)pvVar9 + 0xac);
          dVar19 = dVar18;
        }
        fVar3 = (float)((double)*(float *)((int)pvVar9 + 0xa4) + dVar19);
        *(float *)((int)pvVar9 + 0xa4) = fVar3;
        if (0.5 < ABS(fVar3 - 0.5)) {
          if (((*(int *)((int)pvVar9 + 200) == 0) &&
              (((pMVar13 = DAT_0096a1d8, g_heroStateType == 3 || (g_heroState == EDGE_JUMP))
               || (pMVar13 = g_standingOnMoby, g_framesNotGrounded == 0)))) && (pMVar13 == moby)) {
            Hero_TransitionToDefault();
            dVar18 = (double)*(float *)((int)pvVar9 + 0xac);
          }
          if (dVar18 <= dVar20) {
            moby->setByGroup = '\x01';
          }
          else {
            moby->setByGroup = '\x03';
            dVar20 = 1.0;
          }
          *(float *)((int)pvVar9 + 0xa4) = (float)dVar20;
          auVar24 = ZEXT416(0xffffffff);
          auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
          *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
          auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
          auVar24 = loadVectorLeftIndexed(0x20,0x28a110);
          auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar15 = *(int *)((int)pvVar9 + 0xc4);
          auVar24 = vectorMultiplyAddFloatingPoint
                              (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60
                               ,auVar25);
          auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
          auVar24 = vectorSplatHalfWord(auVar24,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar24,0xba,uVar17);
          *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
          if (((iVar15 != -1) && (g_SoundChannels[iVar15].pMoby == moby)) &&
             (g_SoundChannels[iVar15].state != '\0')) {
            sound_Kill(iVar15);
          }
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
        }
        dVar20 = (double)FastIntToDouble(pSVar11->cnt + -1);
        lVar14 = FastDoubleToInt
                           ((double)(float)(dVar20 * (double)*(float *)((int)pvVar9 + 0xa4)));
        dVar20 = (double)FastIntToDouble();
        dVar19 = (double)FastIntToDouble(pSVar11->cnt + -1);
        fVar3 = (float)(dVar19 * (double)*(float *)((int)pvVar9 + 0xa4) - dVar20);
        iVar15 = (int)(lVar14 << 4);
        if ((int)lVar14 == pSVar11->cnt + -1) {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar15);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar15);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar15);
          fVar7 = *(f32 *)((int)&pSVar11->points[0].w + iVar15);
        }
        else {
          fVar4 = *(float *)((int)&pSVar11->points[0].x + iVar15);
          fVar5 = *(float *)((int)&pSVar11->points[0].y + iVar15);
          fVar6 = *(float *)((int)&pSVar11->points[0].z + iVar15);
          fVar7 = *(f32 *)((int)&pSVar11->points[1].w + iVar15);
          fVar4 = fVar3 * (*(float *)((int)&pSVar11->points[1].x + iVar15) - fVar4) + fVar4;
          fVar5 = fVar3 * (*(float *)((int)&pSVar11->points[1].y + iVar15) - fVar5) + fVar5;
          fVar6 = fVar3 * (*(float *)((int)&pSVar11->points[1].z + iVar15) - fVar6) + fVar6;
        }
        (moby->pos).x = fVar4;
        (moby->pos).y = fVar5;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar7;
        *(float *)((int)pvVar9 + 0xbc) = (float)((double)fVar6 - dVar23);
        goto LAB_0028a87c;
      }
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(0x18,0x28a110);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = vectorSplatHalfWord(auVar24,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar24,0xba,uVar17);
      *(undefined2 *)((int)pvVar9 + 0xba) = uVar12;
    }
    iVar15 = *(int *)((int)pvVar9 + 0xc4);
    *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
    if (((iVar15 != -1) && (g_SoundChannels[iVar15].pMoby == moby)) &&
       (g_SoundChannels[iVar15].state != '\0')) {
      sound_Kill(iVar15);
    }
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0xffffffff;
  }
  else if ((bVar1 < 4) &&
          ((((pMVar13 = DAT_0096a1d8, g_heroStateType != 3 && (g_heroState != EDGE_JUMP)) &&
            (pMVar13 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar13 != moby)))) {
    moby->setByGroup = '\0';
  }
LAB_0028a87c:
  local_50.x = (float)((double)(moby->pos).x - dVar21);
  local_50.y = (float)((double)(moby->pos).y - dVar22);
  local_50.w = (moby->pos).w;
  local_50.z = (float)((double)(moby->pos).z - dVar23);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x60),&local_50,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  pMVar13 = DAT_0096a1d8;
  if (((((g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
       (pMVar13 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar13 != moby)) &&
     ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
      2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(short *)((int)pvVar9 + 0xba) == 0)))) {
    *(undefined2 *)((int)pvVar9 + 0xb8) = 1;
  }
  return;
}


