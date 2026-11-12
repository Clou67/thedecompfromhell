// game/update/moby685.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x4122c8-0x414594
#include "game/update/moby685.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby684.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x04122c8 (0x10b4 bytes)
// inlined: FastRSqrt @0x41256c, FastRSqrt @0x4125e0, FastRSqrt @0x412798, FastRSqrt @0x4129c0
void M685_004122c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined2 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined4 local_2f0 [4];
  GPiece<16> auStack_2e0;
  GPiece<16> local_2d0;
  GPiece<16> local_2c0;
  GPiece<16> local_2b0;
  GPiece<64> local_2a0;
  GPiece<64> local_260;
  GPiece<16> local_220;
  GPiece<16> local_210;
  GPiece<16> local_200;
  GPiece<96> local_1f0;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<144> local_160;
  
  GetEffectTex(0x2d);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  dVar7 = (double)FastIntToDouble(DAT_010cc4f0);
  dVar12 = 0.5;
  dVar8 = (double)FastIntToDouble
                            ((int)(animationSpeed * (float)((double)(longlong)DAT_008571e4 + 0.5)));
  dVar11 = 255.0;
  FastDoubleToInt((double)((float)(dVar7 / dVar8) * 255.0));
  uVar10 = 0;
  uVar9 = 0x3ff0000000000000;
  FastMemCopy(local_190,local_220,0x90);
  GetEffectTex(0x2c);
  FUN_005e825c(local_2f0,&DAT_010cc280,local_2a0);
  FUN_005e825c(auStack_2e0,&DAT_010cc290,local_2a0);
  FUN_005e825c(local_220,local_220,local_260);
  FUN_005e825c(local_210,local_210,local_260);
  FUN_005e825c(local_190,local_190,local_260);
  FUN_005e825c(local_180,local_180,local_260);
  uVar4 = 1;
  do {
    iVar5 = (int)uVar4;
    if (iVar5 != 0x27) {
      FUN_005e825c(local_2f0,ZEXT48(&DAT_010cc270) + (uVar4 & 0xfffffff) * 0x10 & 0xffffffff,
                   local_2a0);
    }
    FUN_005e825c(local_200,local_200,local_260);
    FUN_005e825c(local_1f0,local_1f0,local_260);
    FUN_005e825c(local_170,local_170,local_260);
    FUN_005e825c(local_160,local_160,local_260);
    if (iVar5 != 0x27) {
      dVar7 = (double)FastIntToDouble
                                (*(undefined2 *)
                                  ((int)&DAT_010cc4f0 + (int)((uVar4 & 0xffffffff) << 1)));
      dVar8 = (double)FastIntToDouble
                                ((int)(animationSpeed *
                                      (float)((double)(longlong)DAT_008571e4 + dVar12)));
      FastDoubleToInt((double)(float)((double)(float)(dVar7 / dVar8) * dVar11));
    }
    FastDrawQuad(local_220,0,0,EffectTexHeaders,9);
    FastDrawQuad(local_190,0,0,EffectTexHeaders,9);
    dVar7 = (double)FastIntToDouble(uVar4);
    dVar8 = (double)FastIntToDouble(0x28);
    MB_catmullRom(0xbff0000000000000,uVar10,uVar9,uVar10,(double)(float)(dVar7 / dVar8));
    uVar4 = (ulonglong)(iVar5 + 1);
  } while (iVar5 + 1 < 0x28);
  iVar1 = 0;
  iVar2 = 0;
  iVar5 = 0;
  do {
    dVar7 = (double)FastIntToDouble(*(undefined2 *)((int)&DAT_010cc860 + iVar2));
    dVar8 = (double)FastIntToDouble
                              ((int)(animationSpeed *
                                    (float)((double)(longlong)DAT_008571e4 + dVar12)));
    FastDoubleToInt((double)(float)((double)(float)(dVar7 / dVar8) * dVar11));
    dVar7 = (double)FastIntToDouble(*(undefined4 *)((int)&DAT_010cc8c0 + iVar1));
    dVar8 = (double)FastIntToDouble(0x28);
    MB_catmullRom(0xbff0000000000000,uVar10,uVar9,uVar10,(double)(float)(dVar7 / dVar8));
    FUN_005e825c(local_2c0,local_2d0,local_2a0);
    FUN_005e825c(local_2b0,local_2d0,local_2a0);
    FUN_005e825c(local_220,local_220,local_260);
    FUN_005e825c(local_210,local_210,local_260);
    FUN_005e825c(local_190,local_190,local_260);
    FUN_005e825c(local_180,local_180,local_260);
    puVar6 = (undefined2 *)((int)&DAT_010cc860 + iVar2);
    iVar3 = 1;
    do {
      puVar6 = puVar6 + 1;
      FUN_005e825c(local_2b0,local_2d0,local_2a0);
      FUN_005e825c(local_200,local_200,local_260);
      FUN_005e825c(local_1f0,local_1f0,local_260);
      FUN_005e825c(local_170,local_170,local_260);
      FUN_005e825c(local_160,local_160,local_260);
      dVar7 = (double)FastIntToDouble(*puVar6);
      dVar8 = (double)FastIntToDouble
                                ((int)(animationSpeed *
                                      (float)((double)(longlong)DAT_008571e4 + dVar12)));
      FastDoubleToInt((double)(float)((double)(float)(dVar7 / dVar8) * dVar11));
      FastDrawQuad(local_220,0,0,EffectTexHeaders,9);
      FastDrawQuad(local_190,0,0,EffectTexHeaders,9);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    iVar5 = iVar5 + 1;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x20;
  } while (iVar5 < 3);
  return;
}


// 0x041337c (0x14 bytes)
void M685_0041337c(void)

{
  DAT_00857270 = 0x10000;
  return;
}


// 0x04133a0 (0x1e8 bytes)
double M685_004133a0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Spline *pSVar4;
  Vec4 *pVVar5;
  undefined4 *unused;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    fVar14 = *(float *)(iVar3 + 0xe0);
    fVar1 = *(float *)(iVar3 + 0xe4);
    fVar2 = *(float *)(iVar3 + 0xe8);
    pSVar4 = Splines[*(int *)(iVar3 + 0xa0)];
  }
  else {
    fVar14 = *(float *)(iVar3 + 0xf0);
    fVar1 = *(float *)(iVar3 + 0xf4);
    fVar2 = *(float *)(iVar3 + 0xf8);
    pSVar4 = Splines[*(int *)(iVar3 + 0xb8)];
  }
  dVar8 = (double)fVar2;
  dVar7 = (double)fVar1;
  dVar6 = (double)fVar14;
  dVar9 = 0.0;
  if (*(int *)(iVar3 + 0xac) < 1) {
    fVar14 = pSVar4->points[0].x;
    fVar1 = pSVar4->points[0].y;
    fVar2 = pSVar4->points[0].z;
  }
  else {
    pVVar5 = pSVar4->points + pSVar4->cnt + -1;
    fVar14 = pVVar5->x;
    fVar1 = pVVar5->y;
    fVar2 = pVVar5->z;
  }
  dVar12 = (double)fVar2;
  dVar10 = (double)fVar1;
  unused = &DAT_00413390;
  dVar11 = 0.003000000026077032;
  dVar13 = 0.20000000298023224;
  AccelDelt(fVar14,0.003,0.2,0.0,(float *)(param_1 + 0x10),0x413390,
                      (float *)(iVar3 + 0xc0));
  AccelDelt((float)dVar10,(float)dVar11,(float)dVar13,(float)dVar9,
                      (float *)(param_1 + 0x14),(int)unused,(float *)(iVar3 + 0xc4));
  fVar14 = AccelDelt((float)dVar12,(float)dVar11,(float)dVar13,(float)dVar9,
                               (float *)(param_1 + 0x18),(int)unused,(float *)(iVar3 + 200));
  if (0 < *(int *)(iVar3 + 0xac)) {
    AccelDelt((float)dVar6,(float)dVar11,(float)dVar13,(float)dVar9,
                        (float *)(param_1 + 0x40),(int)unused,(float *)(iVar3 + 0x100));
    AccelDelt((float)dVar7,(float)dVar11,(float)dVar13,(float)dVar9,
                        (float *)(param_1 + 0x44),(int)unused,(float *)(iVar3 + 0x104));
    fVar14 = AccelDelt((float)dVar8,(float)dVar11,(float)dVar13,(float)dVar9,
                                 (float *)(param_1 + 0x48),(int)unused,(float *)(iVar3 + 0x108));
  }
  return (double)fVar14;
}


// 0x04135b8 (0x1b8 bytes)
void M685_004135b8(int param_1)

{
  int iVar1;
  undefined4 uVar5;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  uVar10 = 0x3fb99999a0000000;
  iVar1 = *(int *)(param_1 + 0x78);
  if ((ABS(*(float *)(param_1 + 0x10) - g_heroPosition.x) <= 40.0) &&
     (ABS(*(float *)(param_1 + 0x14) - g_heroPosition.y) <= 40.0)) {
    dVar6 = (double)FastWrapRot
                              (*(float *)(iVar1 + 0x138),g_FrameTime * 6.2831855);
    dVar8 = (double)(float)(3.141592502593994 - dVar6);
    if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
      dVar8 = dVar6;
    }
    dVar7 = (double)(float)(-3.141592502593994 - dVar6);
    if ((double)(float)(-3.141592502593994 - dVar6) - dVar8 < 0.0) {
      dVar7 = dVar8;
    }
    dVar8 = (double)(float)(dVar7 * dVar7);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar7));
    *(float *)(iVar1 + 0x138) = (float)dVar6;
    dVar6 = (double)(float)(dVar8 * dVar9);
    lVar2 = FastDoubleToInt
                      ((double)((((float)(dVar8 * dVar6) * 2.601887e-06 +
                                 (float)(dVar6 * -0.0001980741071747616 +
                                        (double)(float)(dVar9 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar8 * dVar7
                                                                                      ) *
                                                                       -0.16666656732559204 + dVar7)
                                                       ))) * 4.0 - 3.0) * 128.0));
    lVar3 = lVar2 + (lVar2 + -0x20 >> 0x3f & 0x20U - lVar2);
    uVar4 = lVar3 + (0x80 - lVar2 >> 0x3f & 0x80U - lVar3);
    uVar5 = FastLerpColor
                      (uVar10,*(undefined4 *)(param_1 + 0x90),
                       (uint)((uVar4 & 0xffffffff) << 8) | (uint)uVar4 |
                       (uint)((uVar4 & 0xffffffff) << 0x10) | 0x80000000);
    *(undefined4 *)(param_1 + 0x90) = uVar5;
    return;
  }
  uVar5 = FastLerpColor
                    (0x3fb99999a0000000,*(undefined4 *)(param_1 + 0x90),0xffffffff80303030);
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  return;
}


// 0x0413770 (0xe4 bytes)
void M685_00413770(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float *pfVar17;
  Spline *pSVar18;
  longlong lVar19;
  
  iVar16 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0xc0);
  pfVar17 = (float *)&DAT_008572b0;
  fVar2 = *(float *)(param_1 + 0xd0);
  lVar19 = 0xb;
  fVar3 = *(float *)(param_1 + 0xe0);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 0xd4);
  pSVar18 = Splines[*(int *)(iVar16 + 0x114)];
  fVar6 = *(float *)(param_1 + 0xe4);
  fVar7 = *(float *)(param_1 + 200);
  fVar8 = *(float *)(param_1 + 0xd8);
  fVar9 = *(float *)(param_1 + 0xe8);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  do {
    fVar13 = *pfVar17;
    fVar14 = pfVar17[2];
    fVar15 = pfVar17[1];
    pSVar18->points[0].w = 1.0;
    pfVar17 = pfVar17 + 4;
    pSVar18->points[0].x = fVar15 * fVar2 + fVar14 * fVar3 + fVar13 * fVar1 + fVar10;
    pSVar18->points[0].y = fVar15 * fVar5 + fVar14 * fVar6 + fVar13 * fVar4 + fVar11;
    pSVar18->points[0].z = fVar15 * fVar8 + fVar14 * fVar9 + fVar13 * fVar7 + fVar12;
    pSVar18 = (Spline *)pSVar18->points;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  DAT_0096bfba = (short)*(undefined4 *)(iVar16 + 0x114);
  return;
}


// 0x0413870 (0x29c bytes)
undefined8 M685_00413870(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Spline *pSVar6;
  int iVar8;
  undefined8 uVar7;
  int unused;
  undefined8 in_r7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_80;
  float local_7c;
  float local_78;
  
  iVar5 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    fVar1 = *(float *)(iVar5 + 0xb4);
    fVar2 = *(float *)(iVar5 + 0xe0);
    fVar3 = *(float *)(iVar5 + 0xe4);
    fVar4 = *(float *)(iVar5 + 0xe8);
    pSVar6 = Splines[*(int *)(iVar5 + 0xa0)];
  }
  else {
    fVar1 = *(float *)(iVar5 + 0xbc);
    fVar2 = *(float *)(iVar5 + 0xf0);
    fVar3 = *(float *)(iVar5 + 0xf4);
    fVar4 = *(float *)(iVar5 + 0xf8);
    pSVar6 = Splines[*(int *)(iVar5 + 0xb8)];
  }
  dVar15 = (double)fVar1;
  dVar14 = (double)fVar4;
  dVar13 = (double)fVar3;
  dVar12 = (double)fVar2;
  dVar11 = (double)(g_FrameTime * DAT_008572a4);
  iVar8 = MB_PathMoveDist
                    ((double)(float)(dVar11 * (double)*(float *)(iVar5 + 0xac)),pSVar6,&local_80,
                     iVar5 + 0xa4,iVar5 + 0xa8,in_r7,0);
  unused = 0x410000;
  dVar10 = 0.003000000026077032;
  dVar9 = 0.20000000298023224;
  dVar16 = 0.0;
  AccelDelt(local_80,0.003,0.2,0.0,(float *)(param_1 + 0x10),0x410000,
                      (float *)(iVar5 + 0xc0));
  AccelDelt(local_7c,(float)dVar10,(float)dVar9,(float)dVar16,(float *)(param_1 + 0x14),
                      unused,(float *)(iVar5 + 0xc4));
  AccelDelt(local_78,(float)dVar10,(float)dVar9,(float)dVar16,(float *)(param_1 + 0x18),
                      unused,(float *)(iVar5 + 200));
  fVar1 = (float)((double)*(float *)(iVar5 + 0xb0) + dVar11);
  dVar9 = (double)(float)((double)fVar1 / dVar15);
  *(float *)(iVar5 + 0xb0) = fVar1;
  dVar10 = 1.0;
  if (1.0 - dVar9 < 0.0) {
    dVar9 = dVar10;
  }
  if (iVar8 != 0) {
    dVar9 = dVar10;
  }
  if ((double)*(float *)(iVar5 + 0xac) - dVar16 < 0.0) {
    dVar9 = (double)(float)(1.0 - dVar9);
  }
  dVar11 = (double)(float)(dVar9 * 2.0);
  if (0.5 - dVar9 < 0.0) {
    dVar11 = dVar10;
  }
  dVar15 = dVar16;
  if (0.5 - dVar9 < 0.0) {
    dVar15 = (double)((float)(dVar9 - 0.5) * 2.0);
  }
  if (dVar16 - (double)*(float *)(iVar5 + 0xac) < 0.0) {
    dVar11 = dVar15;
  }
  if (1.0 - dVar11 < 0.0) {
    dVar11 = dVar10;
  }
  dVar10 = (double)MB_LerpRot((double)*(float *)(iVar5 + 0xd0),dVar12,dVar11);
  *(float *)(param_1 + 0x40) = (float)dVar10;
  dVar10 = (double)MB_LerpRot((double)*(float *)(iVar5 + 0xd4),dVar13,dVar9);
  *(float *)(param_1 + 0x44) = (float)dVar10;
  dVar9 = (double)MB_LerpRot((double)*(float *)(iVar5 + 0xd8),dVar14,dVar9);
  *(float *)(param_1 + 0x48) = (float)dVar9;
  if (iVar8 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(int *)(iVar5 + 0xac) < 1) {
      *(undefined4 *)(iVar5 + 0xa4) = 0;
    }
    else {
      iVar8 = pSVar6->cnt;
      *(int *)(iVar5 + 0xa4) = iVar8 + -2;
      dVar16 = (double)pSVar6->points[iVar8 + -2].w;
    }
    uVar7 = 1;
    *(float *)(iVar5 + 0xa8) = (float)dVar16;
  }
  return uVar7;
}


// 0x0413b0c (0x254 bytes)
void M685_00413b0c(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  
  pvVar1 = param_1->pVar;
  if (*(int *)((int)pvVar1 + 0xa0) == -1) {
    DeleteMoby(param_1);
  }
  else {
    pSVar2 = Splines[*(int *)((int)pvVar1 + 0xa0)];
    if (pSVar2->cnt == 0) {
      DeleteMoby(param_1);
    }
    else if (*(int *)((int)pvVar1 + 0x114) == -1) {
      DeleteMoby(param_1);
    }
    else if (Splines[*(int *)((int)pvVar1 + 0x114)]->cnt == 0xb) {
      iVar6 = 0;
      *(undefined4 *)((int)pvVar1 + 0xb4) = 0;
      if (0 < pSVar2->cnt + -1) {
        iVar6 = 0;
        pSVar8 = pSVar2;
        do {
          fVar3 = pSVar8->points[0].y - pSVar8->points[1].y;
          fVar4 = pSVar8->points[0].x - pSVar8->points[1].x;
          fVar5 = pSVar8->points[0].z - pSVar8->points[1].z;
          iVar6 = iVar6 + 1;
          fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
          pSVar8->points[0].w = fVar3;
          pSVar8 = (Spline *)pSVar8->points;
          *(float *)((int)pvVar1 + 0xb4) = *(float *)((int)pvVar1 + 0xb4) + fVar3;
        } while (iVar6 < pSVar2->cnt + -1);
      }
      fVar3 = pSVar2->points[iVar6].y - pSVar2->points[0].y;
      fVar4 = pSVar2->points[iVar6].x - pSVar2->points[0].x;
      fVar5 = pSVar2->points[iVar6].z - pSVar2->points[0].z;
      iVar7 = 0;
      pSVar2->points[iVar6].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      *(undefined4 *)((int)pvVar1 + 0xbc) = 0;
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0xb8)];
      pSVar8 = pSVar2;
      if (0 < pSVar2->cnt + -1) {
        do {
          fVar3 = pSVar8->points[0].y - pSVar8->points[1].y;
          fVar4 = pSVar8->points[0].x - pSVar8->points[1].x;
          fVar5 = pSVar8->points[0].z - pSVar8->points[1].z;
          iVar7 = iVar7 + 1;
          fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
          pSVar8->points[0].w = fVar3;
          *(float *)((int)pvVar1 + 0xbc) = *(float *)((int)pvVar1 + 0xbc) + fVar3;
          pSVar8 = (Spline *)pSVar8->points;
        } while (iVar7 < pSVar2->cnt + -1);
      }
      fVar3 = pSVar2->points[iVar7].y - pSVar2->points[0].y;
      fVar4 = pSVar2->points[iVar7].x - pSVar2->points[0].x;
      fVar5 = pSVar2->points[iVar7].z - pSVar2->points[0].z;
      pSVar2->points[iVar7].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
      *(undefined4 *)((int)pvVar1 + 0xa8) = 0;
      *(undefined4 *)((int)pvVar1 + 0xac) = 0xbf800000;
    }
    else {
      DeleteMoby(param_1);
    }
  }
  return;
}


// 0x0413d80 (0x814 bytes)
/* Moby 685 */

void UpdateMoby_685(MobyInstance *moby)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  Spline *pSVar4;
  float fVar5;
  longlong lVar6;
  u8 uVar12;
  undefined2 uVar10;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar11;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  Vec4 local_50;
  float local_40 [4];
  
  lVar6 = (longlong)(int)moby;
  uVar12 = moby->state;
  pvVar3 = moby->pVar;
  if (((uVar12 != '\0') && (moby->setByGroup == '\x02')) && (*(int *)((int)pvVar3 + 0xac) < 0)) {
    *(float *)((int)pvVar3 + 0xac) = -*(float *)((int)pvVar3 + 0xac);
    pSVar4 = Splines[*(int *)((int)pvVar3 + 0xb8)];
    iVar7 = pSVar4->cnt;
    *(int *)((int)pvVar3 + 0xa4) = iVar7 + -2;
    *(float *)((int)pvVar3 + 0xa8) = pSVar4->points[iVar7 + -2].w;
    moby->setByGroup = '\x01';
    uVar12 = moby->state;
  }
  dVar17 = (double)(moby->pos).x;
  dVar16 = (double)(moby->pos).y;
  dVar15 = (double)(moby->pos).z;
  if (uVar12 == '\x04') {
    M685_004135b8(lVar6);
    if (g_standingOnMoby != moby) {
      moby->state = '\x01';
    }
  }
  else if (uVar12 == '\x03') {
    if (SQRT(*(float *)((int)pvVar3 + 200) * *(float *)((int)pvVar3 + 200) +
             *(float *)((int)pvVar3 + 0xc0) * *(float *)((int)pvVar3 + 0xc0) +
             *(float *)((int)pvVar3 + 0xc4) * *(float *)((int)pvVar3 + 0xc4)) < 0.001) {
      M685_004135b8(lVar6);
      iVar7 = *(int *)((int)pvVar3 + 300);
      if (((iVar7 != -1) && (g_SoundChannels[iVar7].pMoby == moby)) &&
         (g_SoundChannels[iVar7].state != '\0')) {
        sound_Kill(iVar7);
      }
      *(undefined4 *)((int)pvVar3 + 300) = 0xffffffff;
      iVar7 = PlayMobySound(1,0,moby);
      if (-1 < iVar7) {
        sound_SetVol(iVar7,*(int *)((int)pvVar3 + 0x134) / 3);
      }
      moby->state = '\x04';
      if (g_standingOnMoby != moby) {
        moby->state = '\x01';
      }
    }
    else {
      iVar7 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 300));
      if (iVar7 == 0) {
        iVar7 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar3 + 300) = iVar7;
      }
      dVar14 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar3 + 0x126));
      local_40[0] = (float)dVar14;
      dVar14 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar3 + 0x130));
      AccelDelt((float)(dVar14 * 0.25),0.003,0.2,0.0,local_40,0x413d60,
                          (float *)((int)pvVar3 + 0x128));
      sVar11 = FastDoubleToInt((double)local_40[0]);
      *(short *)((int)pvVar3 + 0x126) = sVar11;
      if (-1 < *(int *)((int)pvVar3 + 300)) {
        sound_SetVol(*(int *)((int)pvVar3 + 300),(int)sVar11);
      }
      M685_00413770(lVar6);
    }
  }
  else if (uVar12 == '\x02') {
    iVar7 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 300));
    if (iVar7 == 0) {
      iVar8 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 300) = iVar8;
      iVar7 = g_SoundChannels[0].vol;
      if (iVar8 != 0) {
        iVar13 = *(int *)((int)pvVar3 + 0x130);
        if (*(int *)((int)pvVar3 + 0x130) < 0) {
          *(int *)((int)pvVar3 + 0x130) = g_SoundChannels[0].vol;
          iVar13 = iVar7;
        }
        sound_SetVol(iVar8,iVar13);
      }
    }
    uVar9 = FastLerpColor(0x3fb99999a0000000,moby->glowRgba,0xffffffff80808040);
    moby->glowRgba = uVar9;
    iVar7 = M685_00413870(lVar6);
    if (iVar7 != 0) {
      moby->state = '\x03';
      *(short *)((int)pvVar3 + 0x126) = (short)*(undefined4 *)((int)pvVar3 + 0x130);
    }
    M685_00413770(lVar6);
    local_50.x = (float)((double)(moby->pos).x - dVar17);
    local_50.y = (float)((double)(moby->pos).y - dVar16);
    local_50.w = (moby->pos).w;
    local_50.z = (float)((double)(moby->pos).z - dVar15);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x60,
               lVar6 + 0x40);
  }
  else if (uVar12 == '\x01') {
    M685_004135b8(lVar6);
    if ((-1 < *(int *)((int)pvVar3 + 0x118)) &&
       (iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x118)),
       iVar7 != 0)) {
      moby->setByGroup = '\0';
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa8) = 0;
      *(undefined4 *)((int)pvVar3 + 0xac) = 0xbf800000;
    }
    if ((-1 < *(int *)((int)pvVar3 + 0x11c)) &&
       (iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x11c)),
       iVar7 != 0)) {
      moby->setByGroup = '\0';
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0xa0)];
      iVar7 = pSVar4->cnt;
      *(int *)((int)pvVar3 + 0xa4) = iVar7 + -2;
      fVar1 = pSVar4->points[iVar7 + -2].w;
      *(undefined4 *)((int)pvVar3 + 0xac) = 0x3f800000;
      *(float *)((int)pvVar3 + 0xa8) = fVar1;
    }
    if ((-1 < *(int *)((int)pvVar3 + 0x120)) &&
       (iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x120)),
       iVar7 != 0)) {
      moby->setByGroup = '\x01';
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0xb8)];
      iVar7 = pSVar4->cnt;
      *(int *)((int)pvVar3 + 0xa4) = iVar7 + -2;
      fVar1 = pSVar4->points[iVar7 + -2].w;
      *(undefined4 *)((int)pvVar3 + 0xac) = 0x3f800000;
      *(float *)((int)pvVar3 + 0xa8) = fVar1;
    }
    if ((g_standingOnMoby == moby) && (DAT_00969fec == 0)) {
      if ((0.0 < (moby->transform).v2.z * (g_heroMobyPtr->transform).v2.z +
                 (moby->transform).v2.x * (g_heroMobyPtr->transform).v2.x +
                 (moby->transform).v2.y * (g_heroMobyPtr->transform).v2.y) &&
         (fVar1 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
         SQRT(fVar5 * fVar5 + fVar1 * fVar1) < 1.0)) {
        iVar8 = PlayMobySound(1,0,moby);
        iVar7 = g_SoundChannels[1].vol;
        if (-1 < iVar8) {
          iVar13 = *(int *)((int)pvVar3 + 0x134);
          if (*(int *)((int)pvVar3 + 0x134) < 0) {
            *(int *)((int)pvVar3 + 0x134) = g_SoundChannels[1].vol;
            iVar13 = iVar7;
          }
          sound_SetVol(iVar8,iVar13);
        }
        if (*(int *)((int)pvVar3 + 0xac) == -0x40800000) {
          moby->setByGroup =
               ((byte)(ZERO_MASK((uint)*(ushort *)((int)pvVar3 + 0x124))) & 0xfe) +
               2;
        }
        moby->state = '\x02';
        *(undefined4 *)((int)pvVar3 + 0xb0) = 0;
        *(float *)((int)pvVar3 + 0xac) = -*(float *)((int)pvVar3 + 0xac);
      }
    }
  }
  else if (uVar12 == '\0') {
    moby->state = '\x01';
    moby->setByGroup = '\0';
    M685_00413b0c(lVar6);
    pSVar4 = Splines[*(int *)((int)pvVar3 + 0xa0)];
    (moby->pos).x = pSVar4->points[0].x;
    (moby->pos).y = pSVar4->points[0].y;
    (moby->pos).z = pSVar4->points[0].z;
    uVar10 = 0;
    (moby->pos).w = pSVar4->points[0].w;
    (moby->rotation).x = *(f32 *)((int)pvVar3 + 0xd0);
    uVar2 = moby->uid;
    (moby->rotation).y = *(f32 *)((int)pvVar3 + 0xd4);
    (moby->rotation).z = *(f32 *)((int)pvVar3 + 0xd8);
    (moby->rotation).w = *(f32 *)((int)pvVar3 + 0xdc);
    if ((&g_Checkpoint.objState[0])[(short)uVar2] == '\0') {
      uVar10 = 0;
      if (((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) == 0) &&
         (uVar10 = 0, g_LevelFlags[Level][*(int *)((int)pvVar3 + 0x110)] == -1)) {
        uVar10 = 1;
      }
    }
    *(undefined2 *)((int)pvVar3 + 0x124) = uVar10;
    moby->updateDistance = -1;
    *(undefined4 *)((int)pvVar3 + 0x138) = 0;
    moby->glowRgba = 0x80303030;
    *(undefined4 *)((int)pvVar3 + 300) = 0xffffffff;
    *(undefined4 *)((int)pvVar3 + 0x130) = 0xffffffff;
    *(undefined4 *)((int)pvVar3 + 0x134) = 0xffffffff;
  }
  if ((moby->state != '\0' && moby->state != '\x02') &&
     (M685_004133a0(lVar6), g_standingOnMoby == moby)) {
    local_50.x = (float)((double)(moby->pos).x - dVar17);
    local_50.y = (float)((double)(moby->pos).y - dVar16);
    local_50.w = (moby->pos).w;
    local_50.z = (float)((double)(moby->pos).z - dVar15);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x60,
               lVar6 + 0x40);
  }
  return;
}


