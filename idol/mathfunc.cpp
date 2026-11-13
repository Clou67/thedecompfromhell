// idol/mathfunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 258 functions, 0x5e8078-0x604574
#include <math.h>
#include <string.h>
#include "idol/mathfunc.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mission.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "idol/idol_draw.h"
#include "idol/tiefunc.h"
#include "sdk/cell.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/libc/xlv2tls.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/mUnk3.h"
#include "sdk/sce.h"
#include "sdk/sys.h"
#include "sdk/xUnk5.h"

// 0x05e8078 (0x94 bytes)
double cosf(float f)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = f + 1.5707963;
  fVar2 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar2 = 3.1415925 - fVar1;
  }
  if (fVar2 <= -3.1415925 - fVar1) {
    fVar2 = -3.1415925 - fVar1;
  }
  fVar1 = fVar2 * fVar2;
  fVar3 = fVar1 * fVar1 * fVar2;
  fVar4 = fVar1 * fVar3;
  return (double)(fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741
                 + fVar1 * fVar4 * 2.601887e-06);
}


// 0x05e8128 (0x94 bytes)
double FUN_005e8128(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1;
  if ((double)(float)(3.141592502593994 - param_1) <= param_1) {
    dVar1 = (double)(float)(3.141592502593994 - param_1);
  }
  if (dVar1 <= (double)(float)(-3.141592502593994 - param_1)) {
    dVar1 = (double)(float)(-3.141592502593994 - param_1);
  }
  dVar2 = (double)(float)(dVar1 * dVar1);
  dVar4 = (double)(float)(dVar2 * (double)(float)(dVar2 * dVar1));
  dVar3 = (double)(float)(dVar2 * dVar4);
  return (double)((float)(dVar1 + (double)(float)((double)(float)(dVar2 * dVar1) *
                                                 -0.16666656732559204)) +
                  (float)(dVar4 * 0.008333025500178337) + (float)(dVar3 * -0.0001980741071747616) +
                 (float)(dVar2 * dVar3) * 2.601887e-06);
}


// 0x05e81c0 (0x30 bytes)
double FUN_005e81c0(float *param_1,float *param_2)

{
  return (double)(*param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2]);
}


// 0x05e81f0 (0x3c bytes)
void FUN_005e81f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  param_1[3] = param_2[3];
  *param_1 = fVar1 - fVar2;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar5 - fVar6;
  return;
}


// 0x05e822c (0x30 bytes)
void FUN_005e822c(double param_1,float *param_2,float *param_3)

{
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)param_3[1] * param_1);
  param_2[2] = (float)((double)param_3[2] * param_1);
  param_2[3] = param_3[3];
  return;
}


// 0x05e825c (0xd4 bytes)
void FUN_005e825c(float *param_1,float *param_2,float *param_3)

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
  float fVar16;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_3[1];
  fVar4 = param_3[5];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  fVar7 = param_3[6];
  fVar8 = param_3[9];
  fVar9 = param_3[3];
  fVar10 = param_3[7];
  fVar11 = param_2[3];
  fVar12 = param_3[10];
  fVar13 = param_3[0xd];
  fVar14 = param_3[0xb];
  fVar15 = param_3[0xe];
  fVar16 = param_3[0xf];
  *param_1 = *param_3 * fVar1 + param_3[4] * fVar2 + param_3[8] * fVar5 + param_3[0xc] * fVar11;
  param_1[1] = fVar3 * fVar1 + fVar4 * fVar2 + fVar8 * fVar5 + fVar13 * fVar11;
  param_1[2] = fVar6 * fVar1 + fVar7 * fVar2 + fVar12 * fVar5 + fVar15 * fVar11;
  param_1[3] = fVar9 * fVar1 + fVar10 * fVar2 + fVar14 * fVar5 + fVar16 * fVar11;
  return;
}


// 0x05e8338 (0x180 bytes)
// inlined: FastAtan2 @0x5e83d4
double FUN_005e8338(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar10;
  longlong lVar9;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar9 = uVar7 - 0x60;
  puVar3 = (ulonglong *)lVar9;
  *puVar3 = uVar7;
  dVar14 = ABS(param_1);
  *(float *)((int)puVar3 + 0x34) = (float)param_2;
  param_2 = ABS(param_2);
  *(float *)(puVar3 + 6) = (float)param_1;
  *(float *)(puVar3 + 7) = (float)(dVar14 - param_2);
  dVar13 = 0.0;
  iVar8 = (int)(((ulonglong)(*(uint *)(puVar3 + 6) >> 0x1c) & 8 |
                (ulonglong)(*(uint *)(puVar3 + 7) >> 0x1e) & 2 |
                (ulonglong)(*(uint *)((int)puVar3 + 0x34) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&g_atanQuadrantTable + iVar8);
  fVar1 = *(float *)(&DAT_00735904 + iVar8);
  if (0.0 <= *(float *)(puVar3 + 7)) {
    dVar14 = ABS((double)*(float *)((int)puVar3 + 0x34));
    param_2 = ABS((double)*(float *)(puVar3 + 6));
  }
  if (0.0 < param_2) {
    iVar10 = 4;
    iVar8 = 4;
    fVar4 = (float)(dVar14 - param_2) / (float)(dVar14 + param_2);
    lVar11 = lVar9;
    do {
      iVar10 = iVar10 + -1;
      *(float *)((int)lVar11 + 0x3c) = fVar4;
      lVar11 = lVar11 + 4;
    } while (iVar10 != 0);
    fVar4 = fVar4 * fVar4;
    lVar11 = uVar7 - 0x50;
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar3 + 8) = *(float *)(puVar3 + 8) * fVar4;
    *(float *)((int)puVar3 + 0x44) = *(float *)((int)puVar3 + 0x44) * fVar5;
    *(float *)(puVar3 + 9) = *(float *)(puVar3 + 9) * fVar5 * fVar4;
    do {
      iVar8 = iVar8 + -1;
      *(float *)((int)lVar11 + 0x3c) = *(float *)((int)lVar11 + 0x2c) * fVar5 * fVar5;
      lVar11 = lVar11 + 4;
    } while (iVar8 != 0);
    iVar10 = 8;
    iVar12 = 0;
    iVar8 = 8;
    lVar11 = lVar9;
    do {
      pfVar6 = (float *)((int)&DAT_007358e0 + iVar12);
      iVar10 = iVar10 + -1;
      iVar12 = iVar12 + 4;
      *(float *)((int)lVar11 + 0x3c) = *(float *)((int)lVar11 + 0x3c) * *pfVar6;
      lVar11 = lVar11 + 4;
    } while (iVar10 != 0);
    do {
      iVar8 = iVar8 + -1;
      iVar10 = (int)lVar9;
      lVar9 = lVar9 + 4;
      dVar13 = (double)(float)(dVar13 + (double)*(float *)(iVar10 + 0x3c));
    } while (iVar8 != 0);
    dVar13 = (double)((float)(dVar13 + 0.7853981852531433) * fVar2 + fVar1);
  }
  return dVar13;
}


// 0x05e84c0 (0x84 bytes)
void FUN_005e84c0(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *param_3;
  dVar3 = (double)SQRT(fVar2 * fVar2 + param_3[1] * param_3[1]);
  if (dVar3 == 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fVar2 = param_3[3];
    param_2[1] = 0.0;
    param_2[3] = fVar2;
    *param_2 = 0.0;
  }
  else {
    fVar1 = (float)(param_1 / dVar3);
    *param_2 = fVar2 * fVar1;
    param_2[1] = param_3[1] * fVar1;
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return;
}


// 0x05e8548 (0x40 bytes)
double FUN_005e8548(float *param_1,float *param_2)

{
  return (double)SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                      (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}


// 0x05e8588 (0x2c bytes)
double FUN_005e8588(float *param_1,float *param_2)

{
  return (double)SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
}


// 0x05e85b4 (0x3c bytes)
void FUN_005e85b4(int param_1,int param_2,uint param_3,int param_4,ulonglong param_5,
                 ulonglong param_6)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 * 4 + 0x1740U | 0x40000;
  *(uint **)(param_1 + 8) = puVar1 + 2;
  puVar1[1] = (uint)((param_6 & 0xffffffff) << 0x10) | (uint)((param_5 & 0xffffffff) << 8) |
              param_4 << 4 | param_3;
  return;
}


// 0x05e85f0 (0x20 bytes)
void FUN_005e85f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0x40304;
  puVar1[1] = param_2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  return;
}


// 0x05e8610 (0x28 bytes)
void FUN_005e8610(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 * 4 + 0x1740U | 0x40000;
  puVar1[1] = 2;
  *(uint **)(param_1 + 8) = puVar1 + 2;
  return;
}


// 0x05e8638 (0x54 bytes)
ulonglong FUN_005e8638(int param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (PTR_DAT_00902e98.piece<0,1>() == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = LZCOUNT(param_2 & 0xff &
                    (uint)*(byte *)(*(int *)(param_1 + 0x41c) + (param_2 >> 8 & 0xff)));
    uVar2 = (ulonglong)(lVar1 << 0x20) >> 0x25;
    if (DAT_01593350 != '\0') {
      uVar2 = (ulonglong)(LZCOUNT((uint)lVar1 >> 5) << 0x20) >> 0x25;
    }
  }
  return uVar2;
}


// 0x05e868c (0x1c bytes)
void FUN_005e868c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


// 0x05e86a8 (0x28 bytes)
void FUN_005e86a8(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = (float)((double)*param_3 / param_1);
  param_2[1] = (float)((double)fVar1 / param_1);
  param_2[2] = (float)((double)fVar2 / param_1);
  return;
}


// 0x05e86d8 (0xfc bytes)
bool FUN_005e86d8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  float fStack00000030;
  float fStack00000034;
  
  fVar1 = (float)((ulonglong)param_4 >> 0x20);
  iVar2 = 0;
  fStack00000030 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000034 = (float)param_3;
  do {
    if ((float)((double)((float)(&g_FrustumPlanes[0].x)[iVar2 * 4] * fStack00000030 +
                         (float)(&g_FrustumPlanes[0].y)[iVar2 * 4] * fStack00000034 +
                         (float)(&g_FrustumPlanes[0].z)[iVar2 * 4] * fVar1 +
                        (float)(&g_FrustumPlanes[0].w)[iVar2 * 4]) + param_1) < 0.0) {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  fVar1 = fVar1 - g_FrustumExtra.z;
  return (fStack00000030 - g_FrustumExtra.x) * (fStack00000030 - g_FrustumExtra.x) +
         (fStack00000034 - g_FrustumExtra.y) * (fStack00000034 - g_FrustumExtra.y) + fVar1 * fVar1 <=
         (float)(param_2 + param_1) * (float)(param_2 + param_1);
}


// 0x05e87d8 (0x10 bytes)
void FUN_005e87d8(double param_1,double param_2,double param_3,float *param_4)

{
  *param_4 = (float)param_1;
  param_4[1] = (float)param_2;
  param_4[2] = (float)param_3;
  return;
}


// 0x05e87e8 (0x60 bytes)
double FUN_005e87e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fStack00000030;
  float fStack00000034;
  float fStack00000040;
  float fStack00000044;
  
  fStack00000034 = (float)param_1;
  fStack00000044 = (float)param_3;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fVar1 = (float)((ulonglong)param_2 >> 0x20) - (float)((ulonglong)param_4 >> 0x20);
  return (double)SQRT((fStack00000030 - fStack00000040) * (fStack00000030 - fStack00000040) +
                      (fStack00000034 - fStack00000044) * (fStack00000034 - fStack00000044) +
                      fVar1 * fVar1);
}


// 0x05e8848 (0x14 bytes)
void FUN_005e8848(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  *param_5 = (float)param_1;
  param_5[1] = (float)param_2;
  param_5[2] = (float)param_3;
  param_5[3] = (float)param_4;
  return;
}


// 0x05e885c (0x54 bytes)
void FUN_005e885c(double param_1,uint param_2)

{
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  
  auVar1 = ZEXT416(0);
  auVar2.piece<0,4>() = (float)param_1;
  auVar2.piece<4,4>() = (float)param_1;
  auVar2.piece<8,4>() = (float)param_1;
  auVar2.piece<12,4>() = (float)param_1;
  vectorMultiplyAddFloatingPoint
            (*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar2,
             auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60);
  return;
}


// 0x05e88f0 (0x44 bytes)
void FUN_005e88f0(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0x3f800000;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0x3f800000;
  *puVar1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0x3f800000;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar1[3] = 0x3f800000;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}


// 0x05e8940 (0x30 bytes)
void FUN_005e8940(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x30 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  return;
}


// 0x05e8970 (0x2c bytes)
void FUN_005e8970(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 * 4 + 0x1680U | 0x40000;
  puVar1[1] = param_3 | 0x80000000;
  *(uint **)(param_1 + 8) = puVar1 + 2;
  return;
}


// 0x05e899c (0x28 bytes)
void FUN_005e899c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0x8181c;
  puVar1[1] = param_2;
  puVar1[2] = 0x11;
  *(undefined4 **)(param_1 + 8) = puVar1 + 3;
  return;
}


// 0x05e89c4 (0x30 bytes)
void FUN_005e89c4(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x30 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  return;
}


// 0x05e89f4 (0xa0 bytes)
void FUN_005e89f4(double param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  fVar1 = (float)param_1;
  fVar2 = (float)param_1;
  fVar3 = (float)param_1;
  fVar4 = (float)param_1;
  auVar6 = ZEXT416(0);
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar5.piece<0,4>() = fVar1;
  auVar5.piece<4,4>() = fVar2;
  auVar5.piece<8,4>() = fVar3;
  auVar5.piece<12,4>() = fVar4;
  auVar10.piece<0,4>() = fVar1;
  auVar10.piece<4,4>() = fVar2;
  auVar10.piece<8,4>() = fVar3;
  auVar10.piece<12,4>() = fVar4;
  auVar8.piece<0,4>() = fVar1;
  auVar8.piece<4,4>() = fVar2;
  auVar8.piece<8,4>() = fVar3;
  auVar8.piece<12,4>() = fVar4;
  auVar6.piece<0,4>() = fVar1;
  auVar6.piece<4,4>() = fVar2;
  auVar6.piece<8,4>() = fVar3;
  auVar6.piece<12,4>() = fVar4;
  auVar6 = vectorMultiplyAddFloatingPoint
                     (*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar6,auVar7);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (*(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0),auVar8,auVar7);
  auVar10 = vectorMultiplyAddFloatingPoint
                      (*(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0),auVar10,auVar7);
  auVar8 = vectorMultiplyAddFloatingPoint
                     (*(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0),auVar5,auVar7);
  *(undefined1 (*) [16])(param_2 & 0xfffffff0) = auVar6;
  *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0) = auVar9;
  *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0) = auVar8;
  return;
}


// 0x05e8a94 (0x7c bytes)
void FUN_005e8a94(uint param_1,uint param_2)

{
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  auVar2 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar1 = vectorMergeLowWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar2);
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar4 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar5 = vectorMergeHighWord(auVar3,auVar4);
  auVar3 = vectorMergeLowWord(auVar3,auVar4);
  auVar4 = vectorMergeHighWord(auVar1,auVar3);
  auVar1 = vectorMergeLowWord(auVar1,auVar3);
  auVar2 = vectorMergeHighWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar2);
  auVar3 = vectorMergeHighWord(auVar2,auVar5);
  auVar2 = vectorMergeLowWord(auVar2,auVar5);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar1;
  return;
}


// 0x05e8b10 (0x10 bytes)
void FUN_005e8b10(double param_1,double param_2,double param_3,float *param_4)

{
  *param_4 = (float)param_1;
  param_4[1] = (float)param_2;
  param_4[2] = (float)param_3;
  return;
}


// 0x05e8b20 (0x3c bytes)
void FUN_005e8b20(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0x400c1714;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0x41808;
  puVar1[5] = param_2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 6;
  return;
}


// 0x05e8b5c (0x108 bytes)
void FUN_005e8b5c(int param_1,ulonglong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = 0x100 - (param_2 & 0xff);
  uVar4 = param_3 - lVar9;
  lVar9 = lVar9 + (uVar4 & (longlong)((int)uVar4 >> 0x1f));
  uVar8 = param_3 - lVar9 & ~(longlong)((int)(param_3 - lVar9) >> 0x1f);
  lVar6 = uVar8 - (uVar8 & 0xffffff00);
  piVar5 = (int *)(param_1 + 8);
  iVar7 = (int)lVar6;
  uVar4 = (uVar8 << 0x20) >> 0x28;
  puVar1 = (uint *)*piVar5;
  *puVar1 = (((uint)uVar8 >> 8) + ((iVar7 != 0)) +
            (((int)lVar9 != 0))) * 0x40000 | 0x40001824;
  *piVar5 = (int)(puVar1 + 1);
  if ((int)lVar9 != 0) {
    uVar3 = (uint)param_2;
    param_2 = lVar9 + param_2;
    puVar1 = (uint *)*piVar5;
    *puVar1 = uVar3 | (uint)((lVar9 - 1U & 0xffffffff) << 0x18);
    *piVar5 = (int)(puVar1 + 1);
  }
  uVar3 = (uint)param_2;
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      puVar1 = (uint *)*piVar5;
      uVar8 = uVar8 + 1;
      uVar2 = (uint)param_2;
      param_2 = param_2 + 0x100;
      uVar3 = (uint)param_2;
      *puVar1 = uVar2 | 0xff000000;
      *piVar5 = (int)(puVar1 + 1);
    } while ((uVar8 & 0xffffffff) < uVar4);
  }
  if (iVar7 != 0) {
    puVar1 = (uint *)*piVar5;
    *puVar1 = uVar3 | (uint)((lVar6 - 1U & 0xffffffff) << 0x18);
    *piVar5 = (int)(puVar1 + 1);
  }
  return;
}


// 0x05e8c64 (0x190 bytes)
void * FUN_005e8c64(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  uVar1 = _FSin((double)*param_2,param_1,0);
  dVar10 = extraout_f1;
  uVar1 = _FSin((double)*param_2,uVar1,1);
  dVar9 = extraout_f1_00;
  uVar1 = _FSin((double)param_2[1],uVar1,0);
  dVar8 = extraout_f1_01;
  uVar1 = _FSin((double)param_2[1],uVar1,1);
  dVar7 = extraout_f1_02;
  uVar1 = _FSin((double)param_2[2],uVar1,0);
  dVar6 = extraout_f1_03;
  dVar3 = (double)_FSin((double)param_2[2],uVar1,1);
  dVar5 = (double)(float)(dVar8 * dVar6);
  dVar4 = (double)(float)(dVar3 * dVar8);
  memcpy(&local_90,&DAT_00734b00,0x40);
  local_90 = (float)(dVar7 * dVar3);
  local_8c = (float)(dVar7 * dVar6);
  local_78 = (float)(dVar7 * dVar10);
  local_68 = (float)(dVar9 * dVar7);
  local_80 = (float)(dVar10 * dVar4 - (double)(float)(dVar9 * dVar6));
  local_7c = (float)(dVar10 * dVar5 + (double)(float)(dVar9 * dVar3));
  local_70 = (float)(dVar9 * dVar4 + (double)(float)(dVar10 * dVar6));
  local_6c = (float)(dVar9 * dVar5 - (double)(float)(dVar3 * dVar10));
  local_88 = (float)-dVar8;
  pvVar2 = memcpy((void *)param_1,&local_90,0x40);
  return pvVar2;
}


// 0x05e8df4 (0x4 bytes)
void STUB_005e8df4(...)

{
  return;
}


// 0x05e8e08 (0x74 bytes)
double FUN_005e8e08(double param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = param_1;
  if (param_1 - 0.0 < 0.0) {
    dVar3 = ABS(param_1);
  }
  fVar1 = (float)(1.0 - dVar3);
  if ((float)(1.0 - dVar3) - 0.0 < 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = 1.0;
  if (param_1 - 0.0 < 0.0) {
    fVar2 = -1.0;
  }
  return (double)(-(((float)((double)(float)(dVar3 * dVar3) * dVar3) * DAT_007358cc +
                    (float)((double)(float)(dVar3 * dVar3) * (double)DAT_007358c8 +
                           (double)(float)(dVar3 * (double)DAT_007358c4 + (double)DAT_007358c0))) *
                    SQRT(fVar1) - 1.5707964) * fVar2);
}


// 0x05e8e80 (0x84 bytes)
bool FUN_005e8e80(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *param_3;
  dVar3 = (double)SQRT(param_3[2] * param_3[2] + fVar2 * fVar2 + param_3[1] * param_3[1]);
  if (dVar3 <= param_1) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  else {
    fVar1 = (float)(param_1 / dVar3);
    *param_2 = fVar2 * fVar1;
    param_2[1] = param_3[1] * fVar1;
    param_2[2] = param_3[2] * fVar1;
    param_2[3] = param_3[3];
  }
  return dVar3 > param_1;
}


// 0x05e8f04 (0x48 bytes)
void FUN_005e8f04(double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_4;
  fVar2 = *param_3;
  fVar3 = param_4[1];
  fVar4 = param_3[1];
  fVar5 = param_4[2];
  fVar6 = param_3[2];
  param_2[3] = param_4[3];
  *param_2 = (float)(param_1 * (double)(float)((double)fVar1 - (double)fVar2) + (double)fVar2);
  param_2[1] = (float)(param_1 * (double)(float)((double)fVar3 - (double)fVar4) + (double)fVar4);
  param_2[2] = (float)(param_1 * (double)(float)((double)fVar5 - (double)fVar6) + (double)fVar6);
  return;
}


// 0x05e8f4c (0x48 bytes)
void FUN_005e8f4c(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_2[2];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = *param_2;
  fVar6 = *param_3;
  param_1[3] = 0.0;
  *param_1 = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar6 * fVar4 - fVar1 * fVar5;
  param_1[1] = fVar3 * fVar5 - fVar6 * fVar2;
  return;
}


// 0x05e9008 (0x1a0 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e9008(uint param_1,uint param_2,uint param_3,uint param_4)

{
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  
  auVar1 = _DAT_005e8ff0;
  auVar6 = ZEXT416(0);
  auVar3 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar2 = *(undefined1 (*) [16])(param_4 & 0xfffffff0);
  auVar4 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar2,auVar2,auVar3);
  auVar5 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(param_3 & 0xfffffff0),auVar4);
  auVar7 = vectorPermute(auVar2,auVar2,_DAT_005e8fa0);
  auVar9 = vectorPermute(auVar2,auVar2,_DAT_005e8fb0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar7,auVar6);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar5,auVar5,auVar3);
  auVar11 = vectorPermute(auVar5,auVar5,_DAT_005e8fa0);
  auVar13 = vectorPermute(auVar5,auVar5,_DAT_005e8fb0);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar6);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar8);
  auVar6 = loadVectorLeftIndexed(0x20,0x5e8fa0);
  auVar9 = loadVectorLeftIndexed(0x24,0x5e8fa0);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar8);
  auVar11 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar7);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar13 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar9);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar11,auVar7,auVar3);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar3);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar7,auVar12);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar13,auVar9,auVar3);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar3);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar11);
  auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar9,auVar12);
  auVar6 = vectorCompareEqualToFloatingPoint(auVar8,auVar8);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar13);
  auVar6 = vectorConditionalSelect(auVar11,auVar8,auVar6);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar2,auVar6,auVar3);
  auVar6 = vectorCompareEqualToFloatingPoint(auVar9,auVar9);
  auVar6 = vectorConditionalSelect(auVar13,auVar9,auVar6);
  auVar2 = vectorPermute(auVar7,auVar7,_DAT_005e8fe0);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar5,auVar6,auVar3);
  auVar6 = vectorPermute(auVar7,auVar7,_DAT_005e8fd0);
  auVar8 = vectorPermute(auVar5,auVar5,_DAT_005e8fd0);
  auVar9 = vectorPermute(auVar5,auVar5,_DAT_005e8fe0);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar8,auVar2,auVar3);
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar6,auVar7);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar7,auVar7,auVar3);
  auVar11 = vectorPermute(auVar7,auVar7,_DAT_005e8fa0);
  auVar6 = vectorPermute(auVar7,auVar7,_DAT_005e8fb0);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar2);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar6,auVar2);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar11 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar6);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar11,auVar6,auVar3);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar3);
  auVar2 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar2,auVar12);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar2,auVar6,auVar11);
  auVar6 = vectorCompareEqualToFloatingPoint(auVar2,auVar2);
  auVar6 = vectorConditionalSelect(auVar11,auVar2,auVar6);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar3);
  auVar6 = vectorPermute(auVar7,auVar7,_DAT_005e8fd0);
  auVar2 = vectorPermute(auVar7,auVar7,_DAT_005e8fe0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar9,auVar3);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar8,auVar6);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar3);
  auVar6 = vectorPermute(auVar8,auVar8,_DAT_005e8fa0);
  auVar9 = vectorPermute(auVar8,auVar8,_DAT_005e8fb0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar6,auVar2);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar6);
  auVar6 = loadVectorLeftIndexed(0x60,0x5e8fa0);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorPermute(auVar7,auVar3,_DAT_005e8ff0);
  auVar7 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar11 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar9);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar2;
  auVar2 = vectorPermute(auVar5 ^ SPLAT(auVar6),auVar3
                         ,auVar1);
  auVar7 = vectorPermute(auVar4,auVar12,auVar1);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar3);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar3);
  auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar6,auVar12);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar11);
  auVar4 = vectorCompareEqualToFloatingPoint(auVar6,auVar6);
  auVar6 = vectorConditionalSelect(auVar11,auVar6,auVar4);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar3);
  auVar6 = vectorPermute(auVar6,auVar3,auVar1);
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar6;
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar7;
  return;
}


// 0x05e91b0 (0x4 bytes)
void FUN_005e91b0(void)

{
  return;
}


// 0x05e91b4 (0x4 bytes)
void FUN_005e91b4(void)

{
  return;
}


// 0x05e91b8 (0x38 bytes)
void FUN_005e91b8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_0066173c;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


// 0x05e91f0 (0xc bytes)
void FUN_005e91f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_vr2_32_0;
  undefined4 in_vr2_32_1;
  undefined4 in_vr2_32_2;
  undefined4 in_vr2_32_3;
  
  puVar1 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  puVar1[3] = in_vr2_32_3;
  puVar1[2] = in_vr2_32_2;
  puVar1[1] = in_vr2_32_1;
  *puVar1 = in_vr2_32_0;
  return;
}


// 0x05e91fc (0x40 bytes)
void FUN_005e91fc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661710;
    FUN_005e387c();
  }
  return;
}


// 0x05e923c (0x40 bytes)
void FUN_005e923c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661748;
    FUN_005e387c();
  }
  return;
}


// 0x05e927c (0x40 bytes)
void FUN_005e927c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00666410;
    FUN_005e387c();
  }
  return;
}


// 0x05e92bc (0x18 bytes)
void FUN_005e92bc(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_PTR_006618e0;
  return;
}


// 0x05e92d4 (0x48 bytes)
void FUN_005e92d4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006618e0;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_005e387c();
  }
  return;
}


// 0x05e931c (0x18 bytes)
void FUN_005e931c(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_PTR_006618e0;
  return;
}


// 0x05e9334 (0x48 bytes)
void FUN_005e9334(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006618e0;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_005e387c();
  }
  return;
}


// 0x05e937c (0x40 bytes)
void FUN_005e937c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661760;
    FUN_005e387c();
  }
  return;
}


// 0x05e93bc (0x4 bytes)
void FUN_005e93bc(void)

{
  return;
}


// 0x05e93c0 (0x4 bytes)
void FUN_005e93c0(void)

{
  return;
}


// 0x05e93c4 (0x4 bytes)
void FUN_005e93c4(void)

{
  return;
}


// 0x05e93c8 (0x4 bytes)
void FUN_005e93c8(void)

{
  return;
}


// 0x05e93cc (0x4 bytes)
void FUN_005e93cc(void)

{
  return;
}


// 0x05e93d0 (0x4 bytes)
void FUN_005e93d0(void)

{
  return;
}


// 0x05e93d4 (0x40 bytes)
void FUN_005e93d4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_0066177c;
    FUN_005e387c();
  }
  return;
}


// 0x05e9414 (0x34 bytes)
void FUN_005e9414(int param_1,int param_2)

{
  if (0x10000 < param_2) {
    param_2 = 0x10000;
  }
  *(float *)(param_1 + 0x5c) = (float)(longlong)param_2 * DAT_0071a3c0;
  return;
}


// 0x05e9448 (0xc bytes)
undefined8 FUN_005e9448(int param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x8c) = (int)param_2;
  return param_2;
}


// 0x05e9454 (0x30 bytes)
undefined * FUN_005e9454(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 3) {
    puVar1 = PTR_PTR_0071a3c8;
    *(uint *)PTR_DAT_0071a3c4 = param_1;
    return puVar1;
  }
  puVar1 = PTR_PTR_0071a3c8;
  *(undefined4 *)PTR_DAT_0071a3c4 = 8;
  return puVar1;
}


// 0x05e9484 (0xd8 bytes)
int FUN_005e9484(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
      uVar1 = (int)(*(uint *)PTR_DAT_0071a3c4 ^ 2) >> 0x1f;
      memset(*(undefined4 *)(PTR_DAT_0071a3c4 + 4),0,
                   ((int)(uVar1 - (uVar1 ^ *(uint *)PTR_DAT_0071a3c4 ^ 2)) >> 0x1f & 0x18000U) +
                   0x8000);
    }
  }
  else if (((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x98) == 0)) &&
          (*(int *)(param_1 + 0x34) == 0)) {
    *(undefined4 *)(PTR_DAT_0071a3c4 + 0xc) = **(undefined4 **)(PTR_DAT_0071a3c4 + 8);
  }
  *(int *)(param_1 + 0x34) = param_2;
  return param_2;
}


// 0x05e9560 (0x94 bytes)
// strings: 005e9574: '}ISx8' (raw)

void FUN_005e9560(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (8 < param_3) {
    param_3 = 8;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (param_3 == 0) {
    return;
  }
  uVar6 = (ulonglong)param_3;
  uVar3 = *(int *)(param_1 + 0x28) - 1;
  uVar4 = 0;
  iVar5 = param_1 + 0x58;
  do {
    uVar2 = uVar3 & uVar4;
    iVar1 = uVar4 << (uVar3 & 0x3f);
    uVar4 = uVar4 + 1;
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)((iVar1 + uVar2) * 4 + param_2);
    uVar6 = uVar6 - 1;
    iVar5 = iVar5 + 4;
  } while (uVar6 != 0);
  return;
}


// 0x05e95f8 (0x250 bytes)
undefined4
FUN_005e95f8(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  GPiece<32> local_80;
  GPiece<28> local_60;
  undefined4 local_44;
  
  memset(param_1,0,0x180);
  puVar2 = PTR_DAT_0071a3c4;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 0x4c) = 0xfffffffb;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x28) = param_4;
  *(int *)(param_1 + 0x2c) =
       (int)(((longlong)param_4 * (longlong)(param_2 * 0xc) & 0xffffffffU) / 1000);
  *(undefined4 *)(param_1 + 0x90) = param_6;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  uVar1 = *(uint *)puVar2;
  if (5 < uVar1) {
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    if (7 < uVar1) {
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    }
  }
  puVar5 = PTR_PTR_0071a3d4;
  puVar4 = PTR_PTR_0071a3d0;
  puVar3 = PTR_PTR_0071a3cc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  puVar9 = PTR_PTR_0071a3e4;
  puVar8 = PTR_PTR_0071a3e0;
  puVar7 = PTR_PTR_0071a3dc;
  puVar6 = PTR_PTR_0071a3d8;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined **)(param_1 + 0x164) = puVar3;
  *(undefined **)(param_1 + 0x168) = puVar4;
  *(undefined **)(param_1 + 0x16c) = puVar5;
  *(undefined **)(param_1 + 0x170) = puVar6;
  *(undefined **)(param_1 + 0x174) = puVar7;
  *(undefined **)(param_1 + 0x178) = puVar8;
  *(undefined **)(param_1 + 0x17c) = puVar9;
  *(undefined4 *)(param_1 + 0x38) = 0x20;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(int *)(param_1 + 0x80) = (int)(((ulonglong)*(uint *)(param_1 + 0x20) << 0x10) / 48000);
  iVar11 = *(int *)(puVar2 + 0x10);
  *(int *)(param_1 + 0x98) = iVar11;
  puVar3 = PTR_DAT_0071a3e8;
  if (iVar11 == 0) {
    *(undefined4 *)PTR_DAT_0071a3e8 = 0xffff;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    iVar11 = cellAudioPortOpen(local_80,puVar3);
    uVar10 = 0;
    if (iVar11 == 0) {
      cellAudioGetPortConfig(*(undefined4 *)puVar3,local_60);
      uVar10 = 1;
      *(int *)(puVar2 + 0x10) = param_1;
      *(undefined4 *)(puVar2 + 4) = local_44;
      *(undefined4 *)(puVar2 + 8) = 4;
    }
  }
  else {
    uVar10 = 1;
    *(int *)(iVar11 + 0x94) = param_1;
    *(int *)(puVar2 + 0x10) = param_1;
  }
  return uVar10;
}


// 0x05e9848 (0x144 bytes)
void FUN_005e9848(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  (*(code *)**(undefined4 **)(param_1 + 0x174))(param_1,0);
  puVar3 = PTR_DAT_0071a3c4;
  uVar2 = (int)(*(uint *)PTR_DAT_0071a3c4 ^ 2) >> 0x1f;
  memset(*(undefined4 *)(PTR_DAT_0071a3c4 + 4),0,
               ((int)(uVar2 - (uVar2 ^ *(uint *)PTR_DAT_0071a3c4 ^ 2)) >> 0x1f & 0x18000U) + 0x8000)
  ;
  if (param_1 == *(int *)(puVar3 + 0x10)) {
    *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(param_1 + 0x98);
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x98);
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    *(int *)(*(int *)(param_1 + 0x98) + 0x94) = iVar1;
  }
  puVar4 = PTR_DAT_0071a3e8;
  if (*(int *)(puVar3 + 0x10) == 0) {
    if (*(int *)PTR_DAT_0071a3e8 != 0xffff) {
      cellAudioPortClose(*(int *)PTR_DAT_0071a3e8);
      *(undefined4 *)puVar4 = 0xffff;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      return;
    }
  }
  return;
}


// 0x05e998c (0x68 bytes)
void FUN_005e998c(int param_1,int param_2)

{
  double dVar1;
  
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  dVar1 = (double)FUN_005dcbd8((double)((float)(longlong)param_2 * DAT_0071a3ec),
                               (double)DAT_0071a3f0);
  *(float *)(param_1 + 0x58) = (float)dVar1;
  return;
}


// 0x05e99f8 (0x908 bytes)
undefined8 FUN_005e99f8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  short *psVar6;
  float *pfVar7;
  ulonglong uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  undefined *puVar12;
  ulonglong uVar13;
  uint uVar15;
  ulonglong uVar14;
  undefined *puVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint uVar23;
  ulonglong uVar22;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  int *piVar27;
  ulonglong uVar28;
  float *pfVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  undefined *puStack_124;
  
  puVar12 = PTR_DAT_0071a3c4;
  puVar16 = &TOC_BASE;
  piVar27 = *(int **)(PTR_DAT_0071a3c4 + 0x10);
  if (piVar27 == (int *)0x0) {
LAB_005e9c8c:
    if (*(int *)(PTR_DAT_0071a3c4 + 0x14) != 0) {
      uVar23 = *(uint *)(PTR_DAT_0071a3c4 + 0xc);
      iVar17 = **(int **)(PTR_DAT_0071a3c4 + 8);
      uVar15 = uVar23 - iVar17;
      while ((uVar15 & 0xf) < 6) {
        *(uint *)(puVar12 + 0xc) = uVar23 & 0xf;
        iVar26 = 0x800;
        uVar21 = 0x800;
        if (*(int *)puVar12 != 2) {
          iVar26 = 0x2000;
          uVar21 = 0x2000;
        }
        memset((uVar23 & 0xf) * iVar26 + *(int *)(puVar12 + 4),0,uVar21);
        uVar23 = *(int *)(puVar12 + 0xc) + 1;
        *(uint *)(puVar12 + 0xc) = uVar23;
        uVar15 = uVar23 - iVar17;
      }
    }
    return 0;
  }
  auVar40 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a3f4 & 0xfffffff0);
  auVar39 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a3f8 & 0xfffffff0);
  while (iVar17 = *piVar27 - piVar27[6], iVar17 < 0) {
    if (piVar27[0xb] < iVar17 + piVar27[2]) goto LAB_005e9ac8;
LAB_005e9a88:
    piVar27 = (int *)piVar27[0x26];
    if (piVar27 == (int *)0x0) goto LAB_005e9c8c;
  }
  if (iVar17 <= piVar27[0xb]) goto LAB_005e9a88;
LAB_005e9ac8:
  if (*(int *)(PTR_DAT_0071a3c4 + 0x14) == 0) {
    iVar17 = cellAudioPortStart(*(undefined4 *)PTR_DAT_0071a3e8);
    puVar16 = puStack_124;
    if (iVar17 == 0) {
      uVar18 = FUN_005f5090();
      *(undefined4 *)(puVar12 + 0x18) = uVar18;
      *(undefined4 *)(puVar12 + 0x14) = 1;
      *(undefined4 *)(puVar12 + 0xc) = **(undefined4 **)(puVar12 + 8);
    }
  }
  else {
    iVar17 = FUN_005f5090();
    if (0x19 < (uint)(iVar17 - *(int *)(puVar12 + 0x18))) {
      iVar26 = *(int *)(puVar12 + 0x10);
      *(int *)(puVar12 + 0x18) = iVar17;
      *(undefined4 *)(puVar12 + 0xc) = **(undefined4 **)(puVar12 + 8);
      for (; iVar26 != 0; iVar26 = *(int *)(iVar26 + 0x98)) {
        if ((*(int *)(iVar26 + 0x8c) == 0) && (*(int *)(iVar26 + 0x34) != 0)) {
          *(undefined4 *)(iVar26 + 0x50) = 1;
        }
      }
    }
  }
  uVar18 = FUN_005f5090();
  uVar28 = (ulonglong)*(uint *)(puVar12 + 0xc);
  uVar31 = (ulonglong)**(uint **)(puVar12 + 8);
  if (5 < (uVar28 - uVar31 & 0xf)) goto LAB_005e9c2c;
  dVar34 = (double)*(float *)(puVar16 + -0x7f2c);
LAB_005e9b20:
  *(uint *)(puVar12 + 0xc) = (uint)uVar28 & 0xf;
  if (*(int *)(puVar12 + 0x10) != 0) {
    if (*(int *)puVar12 == 2) {
      uVar32 = (uVar28 & 0xf) * 0x800 + (ulonglong)*(uint *)(puVar12 + 4);
      uVar28 = uVar32 & 0xffffffff;
      iVar17 = 0;
      memset(uVar28,0,0x800);
      piVar27 = *(int **)(puVar12 + 0x10);
      pfVar29 = (float *)(piVar27 + 0x16);
      if (piVar27 != (int *)0x0) {
        do {
          iVar26 = *piVar27 - piVar27[6];
          while( true ) {
            if (iVar26 < 0) {
              iVar26 = iVar26 + piVar27[2];
            }
            if (iVar26 < piVar27[0xb]) break;
            if (((pfVar29[0xd] == 0.0) && (piVar27[0xd] != 0)) && (piVar27[0xb] <= iVar26)) {
              fVar19 = pfVar29[1];
              fVar5 = *pfVar29 * pfVar29[2];
              fVar3 = *pfVar29 * pfVar29[3];
              uVar24 = (ulonglong)(uint)piVar27[6];
              uVar30 = (ulonglong)(uint)piVar27[4];
              uVar13 = (ulonglong)(uint)pfVar29[0xb];
              fVar2 = pfVar29[10];
              if (*(float *)(puVar16 + -0x7f28) <= fVar19) {
                if (*(float *)(puVar16 + -0x7f28) < fVar19) {
                  fVar5 = (*(float *)(puVar16 + -0x7f24) - fVar19) * (fVar5 + fVar5);
                }
              }
              else {
                fVar3 = fVar19 * (fVar3 + fVar3);
              }
              lVar20 = 0x100;
              lVar33 = 0x100;
              uVar14 = uVar32;
              if (piVar27[10] == 1) {
                do {
                  pfVar7 = (float *)uVar14;
                  uVar22 = uVar13 + (uint)fVar2;
                  uVar14 = uVar14 + 8;
                  uVar13 = uVar22 & 0xffff;
                  fVar19 = (float)uVar13;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar24 = (ulonglong)(uint)piVar27[3] + (uVar24 - uVar30);
                  }
                  psVar6 = (short *)uVar24;
                  lVar20 = lVar20 + -1;
                  uVar24 = uVar24 + ((uVar22 << 0x20) >> 0x2f & 0x1fffe);
                  iVar26 = (int)uVar24;
                  fVar1 = (float)((double)(longlong)*psVar6 * dVar34);
                  *pfVar7 = fVar5 * fVar1 + *pfVar7;
                  pfVar7[1] = fVar3 * fVar1 + pfVar7[1];
                } while (lVar20 != 0);
              }
              else {
                do {
                  pfVar7 = (float *)uVar14;
                  uVar22 = uVar13 + (uint)fVar2;
                  uVar14 = uVar14 + 8;
                  uVar13 = uVar22 & 0xffff;
                  fVar19 = (float)uVar13;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar24 = (ulonglong)(uint)piVar27[3] + (uVar24 - uVar30);
                  }
                  psVar6 = (short *)uVar24;
                  uVar24 = uVar24 + ((uVar22 << 0x20) >> 0x2e & 0x3fffc);
                  iVar26 = (int)uVar24;
                  sVar4 = psVar6[1];
                  *pfVar7 = fVar5 * (float)((double)(longlong)*psVar6 * dVar34) + *pfVar7;
                  pfVar7[1] = fVar3 * (float)((double)(longlong)sVar4 * dVar34) + pfVar7[1];
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
              iVar17 = iVar17 + 1;
              pfVar29[0xb] = fVar19;
              piVar27[6] = iVar26;
            }
            piVar27 = (int *)pfVar29[0x10];
            if (piVar27 == (int *)0x0) goto LAB_005e9e00;
            pfVar29 = (float *)(piVar27 + 0x16);
            iVar26 = *piVar27 - piVar27[6];
          }
          pfVar7 = pfVar29 + 0xe;
          do {
            piVar27 = (int *)pfVar29[0x10];
            pfVar29 = (float *)(piVar27 + 0x16);
            if (piVar27 == (int *)0x0) goto LAB_005e9e00;
          } while (*pfVar7 == (float)piVar27[0x24]);
        } while( true );
      }
    }
    else {
      uVar32 = (uVar28 & 0xf) * 0x2000 + (ulonglong)*(uint *)(puVar12 + 4);
      uVar28 = uVar32 & 0xffffffff;
      iVar17 = 0;
      memset(uVar28,0,0x2000);
      piVar27 = *(int **)(puVar12 + 0x10);
      pfVar29 = (float *)(piVar27 + 0x16);
      if (piVar27 != (int *)0x0) {
        do {
          iVar26 = *piVar27 - piVar27[6];
          while( true ) {
            if (iVar26 < 0) {
              iVar26 = iVar26 + piVar27[2];
            }
            if (iVar26 < piVar27[0xb]) break;
            if (((pfVar29[0xd] == 0.0) && (piVar27[0xd] != 0)) && (piVar27[0xb] < iVar26)) {
              fVar19 = *pfVar29;
              uVar24 = (ulonglong)(uint)piVar27[6];
              uVar30 = (ulonglong)(uint)piVar27[4];
              uVar13 = (ulonglong)(uint)pfVar29[0xb];
              fVar3 = pfVar29[10];
              auVar35 = *(undefined1 (*) [16])(pfVar29 + 2);
              auVar11 = *(undefined1 (*) [16])(pfVar29 + 2);
              auVar9 = *(undefined1 (*) [16])(pfVar29 + 6);
              auVar10 = *(undefined1 (*) [16])(pfVar29 + 6);
              fVar2 = pfVar29[1];
              if (*(float *)(puVar16 + -0x7f28) <= fVar2) {
                fVar5 = fVar19;
                if (fVar2 <= *(float *)(puVar16 + -0x7f28)) goto LAB_005ea038;
                uVar23 = piVar27[10];
                fVar2 = (*(float *)(puVar16 + -0x7f24) - fVar2) * (fVar19 + fVar19);
              }
              else {
                fVar5 = fVar2 * (fVar19 + fVar19);
LAB_005ea038:
                uVar23 = piVar27[10];
                fVar2 = fVar19;
              }
              uVar14 = (ulonglong)uVar23;
              if (uVar23 == 1) {
                auVar10.piece<0,4>() = fVar2;
                auVar10.piece<4,4>() = fVar5;
                auVar10.piece<8,4>() = fVar19;
                auVar10.piece<12,4>() = fVar19;
                auVar11.piece<0,4>() = fVar2;
                auVar11.piece<4,4>() = fVar5;
                auVar11.piece<8,4>() = fVar2;
                auVar11.piece<12,4>() = fVar5;
                uVar22 = uVar32;
                do {
                  uVar25 = (uint)fVar3 + uVar13;
                  uVar23 = (uint)uVar22;
                  uVar22 = uVar22 + 0x20;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar14 = (ulonglong)(uint)piVar27[3];
                    uVar24 = uVar14 + (uVar24 - uVar30);
                  }
                  uVar8 = uVar24 & 0xffffffff;
                  uVar13 = uVar25 & 0xffff;
                  uVar24 = uVar24 + ((uVar25 << 0x20) >> 0x2f & 0x1fffe);
                  auVar36 = loadVectorLeftIndexed(uVar14,uVar8);
                  auVar36 = vectorSplatHalfWord(auVar36,0);
                  auVar36 = vectorUnpackHighSignedHalfWord(auVar36);
                  auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0xf);
                  auVar37 = vectorMultiplyAddFloatingPoint(auVar11,auVar36,(GPiece<16>)0x0);
                  auVar36 = vectorMultiplyAddFloatingPoint(auVar10,auVar36,(GPiece<16>)0x0);
                  auVar37 = vectorMultiplyAddFloatingPoint
                                      (auVar37,auVar9,
                                       *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0));
                  auVar36 = vectorMultiplyAddFloatingPoint
                                      (auVar36,auVar35,*(undefined1 (*) [16])(uVar23 & 0xfffffff0));
                  *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0) = auVar37;
                  *(undefined1 (*) [16])(uVar23 & 0xfffffff0) = auVar36;
                } while ((int)uVar32 + 0x1fe0U != uVar23);
                iVar17 = iVar17 + 1;
                pfVar29[0xb] = (float)uVar13;
                piVar27[6] = (int)uVar24;
              }
              else {
                auVar9.piece<0,4>() = fVar2;
                auVar9.piece<4,4>() = fVar5;
                auVar9.piece<8,4>() = fVar2;
                auVar9.piece<12,4>() = fVar5;
                uVar22 = uVar32;
                do {
                  uVar25 = (uint)fVar3 + uVar13;
                  uVar23 = (uint)uVar22;
                  uVar22 = uVar22 + 0x20;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar14 = (ulonglong)(uint)piVar27[3];
                    uVar24 = uVar14 + (uVar24 - uVar30);
                  }
                  uVar8 = uVar24 & 0xffffffff;
                  auVar37 = *(undefined1 (*) [16])(uVar23 & 0xfffffff0);
                  uVar13 = uVar25 & 0xffff;
                  uVar24 = uVar24 + ((uVar25 << 0x20) >> 0x2e & 0x3fffc);
                  auVar35 = loadVectorLeftIndexed(uVar14,uVar8);
                  auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
                  auVar35 = vectorUnpackHighSignedHalfWord
                                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                                      );
                  auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0xf);
                  auVar35 = vectorMultiplyAddFloatingPoint(auVar9,auVar35,(GPiece<16>)0x0);
                  auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar40,(GPiece<16>)0x0);
                  auVar35 = vectorMultiplyAddFloatingPoint
                                      (auVar35,auVar10,
                                       *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0));
                  auVar38 = vectorMultiplyAddFloatingPoint(auVar36,auVar11,(GPiece<16>)0x0);
                  auVar36 = vectorPermute(auVar36,auVar36,auVar39);
                  *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0) = auVar35;
                  auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar11,auVar38);
                  auVar35 = vectorAddFloatingPoint(auVar35,auVar37);
                  *(undefined1 (*) [16])(uVar23 & 0xfffffff0) = auVar35;
                } while ((int)uVar32 + 0x1fe0U != uVar23);
                iVar17 = iVar17 + 1;
                pfVar29[0xb] = (float)uVar13;
                piVar27[6] = (int)uVar24;
              }
            }
            piVar27 = (int *)pfVar29[0x10];
            if (piVar27 == (int *)0x0) goto LAB_005e9bc8;
            pfVar29 = (float *)(piVar27 + 0x16);
            iVar26 = *piVar27 - piVar27[6];
          }
          pfVar7 = pfVar29 + 0xe;
          do {
            piVar27 = (int *)pfVar29[0x10];
            pfVar29 = (float *)(piVar27 + 0x16);
            if (piVar27 == (int *)0x0) goto LAB_005e9bc8;
          } while (*pfVar7 == (float)piVar27[0x24]);
        } while( true );
      }
    }
  }
  goto LAB_005e9c10;
LAB_005e9e00:
  if (iVar17 != 0) {
    uVar13 = uVar32 + 0x800;
    fVar19 = *(float *)(puVar16 + -0x7f24);
    fVar2 = *(float *)(puVar16 + -0x7f20);
    if ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff)) {
      do {
        fVar3 = *(float *)uVar28;
        fVar5 = fVar3;
        if (fVar3 + fVar19 < 0.0) {
          fVar5 = fVar2;
        }
        fVar1 = fVar19;
        if (fVar3 - fVar19 < 0.0) {
          fVar1 = fVar5;
        }
        uVar32 = uVar32 + 4;
        *(float *)uVar28 = fVar1;
        uVar28 = uVar32 & 0xffffffff;
      } while ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff));
      uVar28 = (ulonglong)*(uint *)(puVar12 + 0xc) + 1;
      uVar32 = uVar28 - uVar31;
      *(int *)(puVar12 + 0xc) = (int)uVar28;
      goto joined_r0x005e9e60;
    }
  }
  goto LAB_005e9c10;
LAB_005e9bc8:
  if (iVar17 != 0) {
    uVar13 = uVar32 + 0x2000;
    fVar19 = *(float *)(puVar16 + -0x7f24);
    fVar2 = *(float *)(puVar16 + -0x7f20);
    if ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff)) {
      do {
        fVar3 = *(float *)uVar28;
        fVar5 = fVar3;
        if (fVar3 + fVar19 < 0.0) {
          fVar5 = fVar2;
        }
        fVar1 = fVar19;
        if (fVar3 - fVar19 < 0.0) {
          fVar1 = fVar5;
        }
        uVar32 = uVar32 + 4;
        *(float *)uVar28 = fVar1;
        uVar28 = uVar32 & 0xffffffff;
      } while ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff));
    }
  }
LAB_005e9c10:
  uVar28 = (ulonglong)*(uint *)(puVar12 + 0xc) + 1;
  uVar32 = uVar28 - uVar31;
  *(int *)(puVar12 + 0xc) = (int)uVar28;
joined_r0x005e9e60:
  if (5 < (uVar32 & 0xf)) {
LAB_005e9c2c:
    *(undefined4 *)(puVar12 + 0x18) = uVar18;
    return 0;
  }
  goto LAB_005e9b20;
}


// 0x05ea300 (0x44 bytes)
void FUN_005ea300(char *param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  pcVar1 = PTR_DAT_0071a40c;
  lVar2 = 0xfe;
  *PTR_DAT_0071a40c = *param_1;
  do {
    pcVar1 = pcVar1 + 1;
    if (*param_1 == '\0') {
      return;
    }
    param_1 = param_1 + 1;
    *pcVar1 = *param_1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *pcVar1 = '\0';
  return;
}


// 0x05ea348 (0x8 bytes)
undefined * FUN_005ea348(void)

{
  return PTR_DAT_0071a40c;
}


// 0x05ea350 (0x14 bytes)
void FUN_005ea350(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071a410;
  *(undefined4 *)(PTR_DAT_0071a40c + 0x100) = param_2;
  *(undefined4 *)puVar1 = param_1;
  return;
}


// 0x05ea364 (0xc bytes)
void FUN_005ea364(undefined8 param_1)

{
  *(undefined8 *)(PTR_DAT_0071a40c + 0x108) = param_1;
  return;
}


// 0x05ea370 (0xc bytes)
void FUN_005ea370(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a410 + 4) = param_1;
  return;
}


// 0x05ea37c (0xc bytes)
void FUN_005ea37c(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a40c + 0x110) = param_1;
  return;
}


// 0x05ea388 (0xc bytes)
void FUN_005ea388(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a410 + 8) = param_1;
  return;
}


// 0x05ea398 (0x50 bytes)
void FUN_005ea398(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if (0x20 < param_1) {
    param_1 = 0x20;
  }
  *(uint *)(PTR_DAT_0071a410 + 0xc) = param_1;
  if (param_1 == 0) {
    return;
  }
  uVar2 = (ulonglong)param_1;
  puVar1 = (undefined4 *)(PTR_DAT_0071a40c + 0x114);
  do {
    *puVar1 = *param_2;
    uVar2 = uVar2 - 1;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 != 0);
  return;
}


// 0x05ea3e8 (0xf4 bytes)
void FUN_005ea3e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  param_2[5] = 0;
  param_2[1] = *(int *)(param_1 + 0x168) + 7U & 0xfffffff8;
  param_2[2] = *(int *)(param_1 + 0x16c) + 7U & 0xfffffff8;
  param_2[3] = (*(int *)(param_1 + 0x168) + 1U >> 1) + 7 & 0xfffffff8;
  iVar1 = *(int *)(param_1 + 0x16c);
  param_2[6] = 1;
  param_2[9] = 1;
  param_2[0xc] = 1;
  param_2[4] = (iVar1 + 1U >> 1) + 7 & 0xfffffff8;
  uVar2 = *(uint *)(param_1 + 0x20);
  param_2[7] = 0;
  uVar2 = uVar2 >> 0x14 & 1;
  param_2[10] = 0;
  param_2[0xf] = uVar2;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[0xe] = 0;
  param_2[0x11] = 0;
  if (*(int *)(param_1 + 8) != 1) {
    param_2[0x18] = 1;
    *param_2 = 2;
    param_2[0x12] = 1;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 1;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = uVar2;
    param_2[0x1d] = 0;
    param_2[0x1c] = 0;
    return;
  }
  *param_2 = 1;
  return;
}


// 0x05ea4dc (0x18 bytes)
void FUN_005ea4dc(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 0xd0) = param_2;
  return;
}


// 0x05ea4f8 (0x20c bytes)
ulonglong FUN_005ea4f8(int param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != 0) {
    if (((param_3 & 0x80) == 0) &&
       ((*(uint *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x158) + -4) & 1) != 0))
    goto LAB_005ea640;
    if ((param_3 & 0x7f) == 1) {
      uVar1 = *(uint *)(param_1 + 8);
      lVar4 = (param_2 & 0x3fffffff) << 2;
      uVar5 = (uVar1 - param_2) + 1 & 0xffffffff;
      if (((ulonglong)uVar1 < (param_2 & 0xffffffff)) || (uVar1 == 0)) {
        uVar5 = 1;
      }
      do {
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_005ea63c;
        iVar3 = (int)lVar4;
        lVar4 = lVar4 + 4;
      } while ((*(uint *)(iVar3 + *(int *)(param_1 + 0x158)) & 1) == 0);
LAB_005ea634:
      return param_2 & 0xffffffff;
    }
    if ((param_3 & 0x7f) == 2) {
      lVar4 = param_2 - 2;
      lVar6 = (param_2 & 0x3fffffff) * 4 + -8;
      do {
        iVar3 = (int)((param_2 & 0xffffffff) << 2);
        if ((int)lVar4 < 0) {
          if ((ulonglong)*(uint *)(param_1 + 8) <= (param_2 & 0xffffffff)) goto LAB_005ea63c;
          uVar1 = *(uint *)(iVar3 + *(int *)(param_1 + 0x158));
joined_r0x005ea698:
          param_2 = param_2 + 1;
          if ((uVar1 & 1) != 0) goto LAB_005ea634;
        }
        else {
          if ((*(uint *)(*(int *)(param_1 + 0x158) + (int)lVar6) & 1) != 0) {
            param_2 = lVar4 + 1;
            goto LAB_005ea640;
          }
          if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8)) {
            uVar1 = *(uint *)(iVar3 + *(int *)(param_1 + 0x158));
            goto joined_r0x005ea698;
          }
        }
        lVar4 = lVar4 + -1;
        lVar6 = lVar6 + -4;
      } while( true );
    }
    if ((param_3 & 0x7f) == 0) {
      uVar5 = param_2 - 2;
      if ((0 < (int)uVar5) &&
         ((*(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(uint *)(param_1 + 0x158)) & 1) == 0)) {
        uVar7 = uVar5 & 0xffffffff;
        lVar4 = (ulonglong)*(uint *)(param_1 + 0x158) + (param_2 & 0x3fffffff) * 4 + -0xc;
        if ((int)param_2 + -3 < 0) {
          uVar7 = 1;
        }
        do {
          puVar2 = (uint *)lVar4;
          uVar5 = uVar5 - 1;
          lVar4 = lVar4 + -4;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) break;
        } while ((*puVar2 & 1) == 0);
      }
      return uVar5 + 1 & 0xffffffff;
    }
  }
LAB_005ea63c:
  param_2 = 0;
LAB_005ea640:
  return param_2 & 0xffffffff;
}


// 0x05ea708 (0x2a8 bytes)
// strings: 005ea96c: '}$8P9`' (raw)

undefined4 FUN_005ea708(int *param_1,longlong param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar2 = param_4[3];
  uVar3 = param_4[2];
  lVar12 = (longlong)((int)uVar2 >> 4) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 0xf) != 0);
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar7 = (longlong)((int)uVar3 >> 4) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 0xf) != 0);
  iVar11 = (int)lVar12;
  if (iVar11 < 1) {
    return 0;
  }
  uVar10 = 0;
  lVar8 = (longlong)((int)uVar4 >> 4) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 0xf) != 0) + param_2
          + (longlong)(int)(((int)uVar5 >> 4) + (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0)) *
            (longlong)(int)param_3;
  lVar15 = lVar8;
  do {
    if (0 < (int)uVar7) {
      if (*(char *)lVar15 != '\0') {
LAB_005ea7c4:
        uVar17 = lVar12 - uVar10;
        iVar11 = (int)((uVar10 & 0xfffffff) << 4);
        iVar13 = uVar2 - iVar11;
        param_1[1] = uVar5 + iVar11;
        param_1[3] = iVar13;
        lVar8 = lVar8 + (longlong)(int)param_3 * (longlong)(int)uVar10;
        if (iVar13 < 2) goto LAB_005ea87c;
        iVar9 = (int)uVar17;
        uVar10 = 0;
        iVar11 = 0;
        if (iVar9 < 1) goto LAB_005ea870;
        lVar15 = 0;
        lVar16 = lVar8 + (longlong)(int)param_3 * (longlong)(iVar9 + -1);
        lVar12 = lVar16;
        break;
      }
      uVar17 = uVar7 & 0xffffffff;
      iVar13 = 0;
      while( true ) {
        iVar13 = iVar13 + 1;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) break;
        if (((char *)lVar15)[iVar13] != '\0') goto LAB_005ea7c4;
      }
    }
    uVar10 = uVar10 + 1;
    if (iVar11 == (int)uVar10) {
      return 0;
    }
    lVar15 = lVar15 + (ulonglong)param_3;
  } while( true );
LAB_005ea814:
  if (*(char *)((int)lVar15 + (int)lVar16) != '\0') goto LAB_005ea86c;
  uVar18 = uVar7 & 0xffffffff;
  iVar11 = 0;
  while( true ) {
    iVar11 = iVar11 + 1;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) break;
    if (*(char *)(iVar11 + (int)lVar12) != '\0') goto LAB_005ea86c;
  }
  uVar10 = uVar10 + 1;
  lVar15 = lVar15 + -(ulonglong)param_3;
  if (iVar9 == (int)uVar10) {
    iVar11 = (int)((uVar17 & 0xffffffff) << 4);
    goto LAB_005ea870;
  }
  lVar12 = lVar12 + -(ulonglong)param_3;
  goto LAB_005ea814;
LAB_005ea86c:
  iVar11 = (int)((uVar10 & 0xffffffff) << 4);
LAB_005ea870:
  uVar17 = uVar17 - uVar10;
  param_1[3] = iVar13 - iVar11;
LAB_005ea87c:
  lVar12 = lVar8 + (ulonglong)param_3;
  uVar10 = 0;
  bVar1 = 0 < (int)uVar17;
  do {
    if (bVar1) {
      lVar15 = lVar8 + uVar10;
      if (*(char *)lVar15 != '\0') goto LAB_005ea8dc;
      uVar18 = uVar17 & 0xffffffff;
      lVar16 = lVar12;
      while( true ) {
        pcVar6 = (char *)lVar16;
        lVar16 = lVar16 + (ulonglong)param_3;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) break;
        if (*pcVar6 != '\0') goto LAB_005ea8dc;
      }
    }
    uVar10 = uVar10 + 1;
    lVar12 = lVar12 + 1;
  } while ((int)uVar7 != (int)uVar10);
  lVar15 = uVar7 + lVar8;
LAB_005ea8dc:
  iVar11 = (int)((uVar10 & 0xfffffff) << 4);
  iVar13 = uVar3 - iVar11;
  *param_1 = iVar11 + uVar4;
  param_1[2] = iVar13;
  if (1 < iVar13) {
    lVar12 = uVar7 - uVar10;
    lVar8 = lVar12 + -1;
    if (-1 < (int)lVar8) {
      lVar15 = lVar15 + lVar12;
      lVar16 = lVar15 + (ulonglong)param_3;
      do {
        lVar16 = lVar16 + -1;
        lVar15 = lVar15 + -1;
        if (bVar1) {
          if (*(char *)lVar15 != '\0') break;
          uVar7 = uVar17 & 0xffffffff;
          lVar14 = lVar16;
          while( true ) {
            pcVar6 = (char *)lVar14;
            lVar14 = lVar14 + (ulonglong)param_3;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) break;
            if (*pcVar6 != '\0') goto LAB_005ea96c;
          }
        }
        iVar11 = (int)lVar8;
        lVar8 = lVar8 + -1;
      } while (iVar11 != 0);
    }
LAB_005ea96c:
    param_1[2] = iVar13 + (int)((lVar8 - lVar12 & 0xffffffffU) << 4) + 0x10;
  }
  return 1;
}


// 0x05ea9b0 (0x28c bytes)
int FUN_005ea9b0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  GPiece<16> local_60;
  
  if (*(int *)(param_3 + 8) < 0x20) {
    iVar2 = 0;
    iVar1 = *(int *)(param_3 + 0xc);
  }
  else {
    FUN_005ea708(param_1,param_4,param_5,local_60);
    FUN_005ea708(param_2,param_4,param_5,local_60);
    iVar1 = *(int *)(param_3 + 0xc);
    iVar2 = (*(int *)(param_3 + 8) * iVar1 - param_1[2] * param_1[3]) - param_2[2] * param_2[3];
  }
  if (0x1f < iVar1) {
    FUN_005ea708(&local_80,param_4,param_5,local_60);
    FUN_005ea708(&local_70,param_4,param_5,local_60);
    iVar1 = (*(int *)(param_3 + 8) * *(int *)(param_3 + 0xc) - local_78 * local_74) -
            local_68 * local_64;
    if (iVar2 < iVar1) {
      param_1[3] = local_74;
      *param_1 = local_80;
      param_1[1] = local_7c;
      param_1[2] = local_78;
      param_2[3] = local_64;
      *param_2 = local_70;
      param_2[1] = local_6c;
      param_2[2] = local_68;
      return iVar1;
    }
  }
  return iVar2;
}


// 0x05eac3c (0xfc bytes)
void FUN_005eac3c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x124);
    if ((uVar4 != 0) && (0 < (int)uVar4)) {
      piVar3 = *(int **)(param_1 + 0xec);
      uVar5 = (ulonglong)uVar4;
      iVar2 = 0;
      uVar4 = 0;
      if (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2) {
        do {
          piVar3 = piVar3 + 1;
          uVar4 = uVar4 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return;
          }
        } while (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2);
        if (uVar4 == 0xffffffff) {
          return;
        }
        iVar2 = uVar4 * 0x200 + (uVar4 & 0x1ffffff) * -0x80;
      }
      iVar2 = iVar2 + *(int *)(param_1 + 0x154);
      puVar1 = *(undefined4 **)(iVar2 + 0x16c);
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(iVar2,param_3);
        return;
      }
    }
  }
  return;
}


// 0x05ead38 (0x28 bytes)
undefined4 FUN_005ead38(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x174));
  }
  return uVar1;
}


// 0x05ead60 (0x2c bytes)
int FUN_005ead60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x170)) + 0x200;
  }
  return iVar1;
}


// 0x05ead8c (0x28 bytes)
undefined4 FUN_005ead8c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x178));
  }
  return uVar1;
}


// 0x05eadb4 (0x1c bytes)
undefined4 FUN_005eadb4(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x114) = param_2;
  }
  return param_2;
}


// 0x05eadd0 (0x34 bytes)
void FUN_005eadd0(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff7f;
    return;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80;
  return;
}


// 0x05eae04 (0x24 bytes)
void FUN_005eae04(u8 *param_1,u8 *param_2)

{
  FUN_005f515c();
  return;
}


// 0x05eae28 (0x290 bytes)
// strings: 00661be0: 'Locked %s' | 00661bf0: 'Trying to lock %s'

undefined4
FUN_005eae28(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_005fc20c(param_1,0);
  puVar1 = PTR_DAT_0071a414;
  if (iVar2 != 0) {
    iVar2 = *(int *)PTR_DAT_0071a414;
    if (iVar2 == 0) {
      return 1;
    }
    (*(code *)**(undefined4 **)(iVar2 + 0x6c))
              (iVar2,param_1,2,param_4,param_5,ZEXT48(PTR_DAT_0071a40c) + 0x194,
               PTR_s_Locked__s_0071a418,param_3);
    return 1;
  }
  if (param_2 != 0) {
    iVar2 = *(int *)PTR_DAT_0071a414;
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x60))
                (iVar2,0,0,param_4,param_5,param_1,ZEXT48(PTR_DAT_0071a40c) + 0x198,
                 PTR_s_Trying_to_lock__s_0071a41c);
    }
    iVar2 = FUN_005fc20c(param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = *(int *)puVar1;
      if (iVar2 == 0) {
        return 1;
      }
      (*(code *)**(undefined4 **)(iVar2 + 100))(iVar2,0,param_4,param_5,param_1,0);
      return 1;
    }
    iVar2 = *(int *)puVar1;
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 100))(iVar2,0,param_4,param_5,param_1,1);
      return 0;
    }
  }
  return 0;
}


// 0x05eb0b8 (0x3c bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

undefined8 FUN_005eb0b8(int param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) != 0) {
    return 1;
  }
  uVar1 = FUN_005eae28(param_1 + 0x1a0,0,PTR_s_Bink_instance_io_mutex_0071a420,
                       PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x586);
  return uVar1;
}


// 0x05eb0f8 (0x1b4 bytes)
// strings: 00661c58: 'Waiting on %s'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071a40c : 0x005eb264 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_005eb0f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_005fc20c(param_1,0);
  puVar1 = PTR_DAT_0071a414;
  if (iVar2 == 0) {
    iVar2 = *(int *)PTR_DAT_0071a414;
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x60))
                (iVar2,0,0,param_3,param_4,param_1,ZEXT48(PTR_DAT_0071a40c) + 0x19c,
                 PTR_s_Waiting_on__s_0071a428);
    }
    FUN_005fc1d8(param_1);
    iVar2 = *(int *)puVar1;
    if (iVar2 == 0) {
      return;
    }
    (*(code *)**(undefined4 **)(iVar2 + 100))(iVar2,0,param_3,param_4,param_1,0);
    iVar2 = *(int *)puVar1;
  }
  else {
    iVar2 = *(int *)PTR_DAT_0071a414;
  }
  if (iVar2 == 0) {
    return;
  }
  (*(code *)**(undefined4 **)(iVar2 + 0x6c))
            (iVar2,param_1,2,param_3,param_4,ZEXT48(PTR_DAT_0071a40c) + 0x1a0,
             PTR_s_Waiting_on__s_0071a428,param_2);
  return;
}


// 0x05eb2b0 (0x30 bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

void FUN_005eb2b0(int param_1)

{
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) != 0) {
    return;
  }
  FUN_005eb0f8(param_1 + 0x1a0,PTR_s_Bink_instance_io_mutex_0071a420,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x57d);
  return;
}


// 0x05eb2e0 (0x94 bytes)
// strings: 00661c68: 'Unlocking %s'

void FUN_005eb2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071a414;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x6c))
              (iVar1,param_1,1,param_3,param_4,ZEXT48(PTR_DAT_0071a40c) + 0x1a4,
               PTR_s_Unlocking__s_0071a42c,param_2);
  }
  FUN_005fc2bc(param_1);
  return;
}


// 0x05eb374 (0xa8 bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

void FUN_005eb374(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar1 = PTR_s_Bink_instance_io_mutex_0071a420;
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) == 0) {
    iVar3 = FUN_005eae28(param_1 + 0x1a0,1,PTR_s_Bink_instance_io_mutex_0071a420,
                         PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x598);
    if (iVar3 != 0) {
      FUN_005eb2e0(param_1 + 0x1a0,puVar1,puVar2,0x599);
      return;
    }
  }
  return;
}


// 0x05eb41c (0x30 bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

void FUN_005eb41c(int param_1)

{
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) != 0) {
    return;
  }
  FUN_005eb2e0(param_1 + 0x1a0,PTR_s_Bink_instance_io_mutex_0071a420,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x58f);
  return;
}


// 0x05eb450 (0x200 bytes)
// strings: 00661c78: 'Wait for frame IO to complete' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c98: 'Bink instance priority io mutex'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071a434 : 0x005eb4f4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_005eb450(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
  puVar5 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar4 = PTR_DAT_0071a414;
  puVar3 = PTR_DAT_0071a40c;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar1 = *(int *)PTR_DAT_0071a414;
    if (iVar1 == 0) {
      FUN_005eb0f8(param_1 + 0x2b0,PTR_s_Bink_instance_priority_io_mutex_0071a434,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x30b);
      iVar1 = *(int *)(param_1 + 0x118);
    }
    else {
      (*(code *)**(undefined4 **)(iVar1 + 0x50))
                (iVar1,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x308,
                 PTR_DAT_0071a40c + 0x1a8);
      puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
      FUN_005eb0f8(param_1 + 0x2b0,PTR_s_Bink_instance_priority_io_mutex_0071a434,puVar5,0x30b);
      iVar1 = *(int *)(param_1 + 0x118);
    }
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(param_1 + 0x194))
                (param_1 + 400,*(undefined4 *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x188),
                 *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x11c));
      *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x188) + *(int *)(param_1 + 0x11c);
      *(undefined4 *)(param_1 + 0x118) = 0;
      if (*(int *)(param_1 + 0x1d0) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_005eb2e0(param_1 + 0x2b0,puVar2,puVar5,0x318);
    iVar1 = *(int *)puVar4;
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(iVar1 + 0x54))(iVar1,0,0,puVar5,0x31b);
    }
    if (*(int *)(puVar3 + 0x1ac) != 0) {
      FUN_005fc190(puVar3 + 0x1b0,1);
    }
  }
  return;
}


// 0x05eb650 (0xec bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005eb650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  while( true ) {
    FUN_005eb0f8(param_1,param_2,puVar1,0x134);
    iVar2 = FUN_005eae28(param_3,0,param_4,puVar1,0x135);
    if (iVar2 != 0) {
      return;
    }
    FUN_005eb2e0(param_1,param_2,puVar1,0x137);
    FUN_005eb0f8(param_3,param_4,puVar1,0x139);
    iVar2 = FUN_005eae28(param_1,0,param_2,puVar1,0x13a);
    if (iVar2 != 0) break;
    FUN_005eb2e0(param_3,param_4,puVar1,0x13c);
  }
  return;
}


// 0x05eb740 (0x22c bytes)
int FUN_005eb740(int param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  GPiece<4> local_50;
  uint local_4c [5];
  
  if ((param_1 != 0) && (param_2 != (undefined2 *)0x0)) {
    iVar12 = *(int *)(param_1 + 0x10);
    puVar8 = *(uint **)(iVar12 + 0xe8);
    iVar6 = *(int *)(iVar12 + 0x11c);
    FUN_005eb450(iVar12);
    iVar12 = *(int *)(param_1 + 0x10);
    if ((*(int *)(iVar12 + 0x1c) == 0) && (0 < *(int *)(iVar12 + 0x38))) {
      puVar4 = (uint *)((int)puVar8 + iVar6);
      puVar10 = puVar8 + 1;
      uVar9 = *puVar8;
      if (((puVar8 + 1 <= puVar4) && (*(uint **)(iVar12 + 0xe8) <= puVar8 + 1)) &&
         (puVar8 = (uint *)(uVar9 + (int)puVar10), puVar8 <= puVar4)) {
        iVar6 = 0;
        while( true ) {
          bVar1 = *(int *)(param_1 + 0x18) == iVar6;
          iVar6 = iVar6 + 1;
          if ((bVar1) && (uVar9 != 0)) break;
          puVar10 = puVar8 + 1;
          if (*(int *)(iVar12 + 0x38) <= iVar6) {
            return 0;
          }
          uVar9 = *puVar8;
          if (puVar4 < puVar10) {
            return 0;
          }
          puVar8 = (uint *)((int)puVar10 + uVar9);
          if (puVar10 < *(uint **)(iVar12 + 0xe8)) {
            return 0;
          }
          if (puVar4 < puVar8) {
            return 0;
          }
        }
        uVar11 = *puVar10;
        if (uVar11 != 0) {
          iVar12 = 0;
          while( true ) {
            FUN_005f5398(*(undefined4 *)(param_1 + 0x14),param_2,local_4c,puVar10 + 1,local_50,
                         (int)(puVar10 + 1) + uVar9,(int)param_2 + 0xfU & 0xfffffff0,0);
            if (uVar11 < local_4c[0]) {
              local_4c[0] = uVar11;
            }
            uVar11 = uVar11 - local_4c[0];
            if ((*(int *)(param_1 + 4) != 0x10) &&
               (local_4c[0] = local_4c[0] >> 1, local_4c[0] != 0)) {
              uVar5 = 0;
              puVar7 = param_2;
              do {
                pcVar3 = (char *)(uVar5 + (int)param_2);
                uVar5 = uVar5 + 1;
                uVar2 = *puVar7;
                puVar7 = puVar7 + 1;
                *pcVar3 = (char)((ushort)uVar2 >> 8) + -0x80;
              } while (uVar5 < local_4c[0]);
            }
            iVar12 = iVar12 + local_4c[0];
            if (uVar11 == 0) break;
            param_2 = (undefined2 *)(local_4c[0] + (int)param_2);
          }
          return iVar12;
        }
      }
    }
  }
  return 0;
}


// 0x05eb970 (0x3c bytes)
void FUN_005eb970(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_005f516c(param_1);
  }
  return;
}


// 0x05eb9ac (0x114 bytes)
ulonglong FUN_005eb9ac(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = *param_1 - param_1[6];
  if (iVar4 < 0) {
    iVar4 = iVar4 + param_1[2];
  }
  iVar3 = param_1[0x12] - iVar4;
  uVar2 = param_1[6] - iVar3;
  if (iVar4 < param_1[0x12]) {
    uVar1 = param_1[3];
    param_1[6] = uVar2;
    uVar5 = (ulonglong)(uint)(iVar3 * 1000) /
            ((ulonglong)((longlong)(param_1[8] * param_1[9]) * (longlong)param_1[10] << 0x20) >>
            0x23);
    if (uVar2 < uVar1) {
      param_1[6] = uVar2 + param_1[2];
      memset(uVar1,0,iVar3 - (uVar1 - uVar2));
      memset(param_1[6],0,uVar1 - uVar2);
      return uVar5;
    }
    memset(uVar2,0,iVar3);
  }
  return uVar5;
}


// 0x05ebac0 (0x490 bytes)
// strings: 00661cb8: 'Bink instance sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ebac0(int param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar6;
  int iVar7;
  ulonglong uVar5;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar15;
  ulonglong uVar14;
  uint uVar16;
  ulonglong uVar17;
  char *local_60;
  uint local_5c [3];
  
  puVar3 = PTR_s_Bink_instance_sound_mutex_0071a438;
  puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  if ((((*(int *)(*(int *)(param_1 + 0x124) * 0x180 + *(int *)(param_1 + 0x154) + -0x24) != 0) &&
       (*(int *)(param_1 + 0x460) != 0)) && (*(int *)(param_1 + 0x124) != 0)) &&
     ((iVar6 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar6 < 1 || (iVar6 == 2)))) {
    iVar6 = FUN_005eae28(param_1 + 0x3b0,0,PTR_s_Bink_instance_sound_mutex_0071a438,
                         PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x27f);
    if ((iVar6 != 0) && (*(int *)(param_1 + 0x124) != 0)) {
      uVar12 = 0;
      iVar6 = 0;
      do {
        puVar4 = (uint *)(iVar6 + *(int *)(param_1 + 0x154));
        iVar7 = (**(code **)puVar4[0x57])(puVar4);
        while (iVar7 != 0) {
          uVar13 = (ulonglong)*puVar4 - (ulonglong)puVar4[6];
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + puVar4[2];
          }
          uVar15 = (uint)uVar13;
          if ((((int)uVar15 <= (int)puVar4[0xb]) &&
              ((*(int *)(param_1 + 0xc) <= (int)puVar4[0x10] || (uVar15 == 0)))) ||
             (iVar7 = (**(code **)puVar4[0x58])(puVar4,&local_60,local_5c), iVar7 == 0)) break;
          if (puVar4[0x15] == 0) {
            uVar8 = (ulonglong)local_5c[0];
          }
          else {
            uVar8 = ((ulonglong)local_5c[0] & 0x7fffffff) << 1;
            local_5c[0] = (uint)uVar8;
          }
          if ((uVar13 & 0xffffffff) < uVar8) {
            uVar8 = uVar13;
            local_5c[0] = uVar15;
          }
          if (*(int *)(param_1 + 0xc) <= (int)puVar4[0x10]) {
            uVar8 = uVar8 & puVar4[0xc] << (puVar4[0x15] & 0x3f);
            local_5c[0] = (uint)uVar8;
          }
          uVar15 = puVar4[6];
          uVar13 = (ulonglong)uVar15;
          uVar14 = puVar4[4] - uVar13;
          if ((uVar14 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            uVar16 = (uint)uVar14;
            if (uVar16 == 0) {
              uVar5 = ZEXT48(local_60);
              if (puVar4[0x15] != 0) goto LAB_005ebd50;
LAB_005ebeec:
              FUN_005c6094(uVar5 & 0xffffffff,puVar4[3],uVar8 - uVar14 & 0xffffffff);
              uVar15 = local_5c[0];
            }
            else {
              if (puVar4[0x15] == 0) {
                FUN_005c6094(local_60,uVar15,uVar14 & 0xffffffff);
                uVar8 = (ulonglong)local_5c[0];
                uVar5 = ZEXT48(local_60) + uVar14;
              }
              else {
                uVar1 = (uVar14 << 0x20) >> 0x21;
                uVar5 = ZEXT48(local_60);
                uVar9 = uVar5;
                uVar17 = uVar1;
                if (uVar16 >> 1 != 0) {
                  do {
                    puVar10 = (undefined2 *)uVar13;
                    uVar13 = uVar13 + 2;
                    *(char *)uVar9 = (char)((ushort)*puVar10 >> 8) + -0x80;
                    uVar17 = uVar17 - 1;
                    uVar9 = uVar9 + 1;
                  } while (uVar17 != 0);
                  uVar5 = uVar5 + uVar1;
                  uVar8 = (ulonglong)local_5c[0];
                }
              }
              local_60 = (char *)uVar5;
              if (puVar4[0x15] == 0) goto LAB_005ebeec;
LAB_005ebd50:
              puVar10 = (undefined2 *)puVar4[3];
              uVar13 = (uVar8 - uVar14 << 0x20) >> 0x21;
              uVar15 = (uint)uVar8;
              if ((uint)(uVar8 - uVar14) >> 1 != 0) {
                do {
                  pcVar11 = (char *)uVar5;
                  uVar5 = uVar5 + 1;
                  *pcVar11 = (char)((ushort)*puVar10 >> 8) + -0x80;
                  uVar13 = uVar13 - 1;
                  uVar15 = local_5c[0];
                  puVar10 = puVar10 + 1;
                } while (uVar13 != 0);
              }
            }
            puVar4[6] = puVar4[3] + (uVar15 - uVar16);
            uVar15 = puVar4[0x15];
          }
          else {
            if (puVar4[0x15] == 0) {
              FUN_005c6094(local_60,uVar15,uVar8 & 0xffffffff);
              uVar15 = local_5c[0];
            }
            else {
              uVar14 = (uVar8 << 0x20) >> 0x21;
              pcVar11 = local_60;
              uVar15 = (uint)uVar8;
              if ((uint)uVar8 >> 1 != 0) {
                do {
                  puVar10 = (undefined2 *)uVar13;
                  uVar13 = uVar13 + 2;
                  *pcVar11 = (char)((ushort)*puVar10 >> 8) + -0x80;
                  uVar14 = uVar14 - 1;
                  pcVar11 = pcVar11 + 1;
                  uVar15 = local_5c[0];
                } while (uVar14 != 0);
              }
            }
            puVar4[6] = puVar4[6] + uVar15;
            uVar15 = puVar4[0x15];
          }
          if (uVar15 != 0) {
            local_5c[0] = local_5c[0] >> 1;
          }
          (**(code **)puVar4[0x59])(puVar4,local_5c[0]);
          iVar7 = (**(code **)puVar4[0x57])(puVar4);
        }
        uVar12 = uVar12 + 1;
        iVar6 = iVar6 + 0x180;
      } while (uVar12 < *(uint *)(param_1 + 0x124));
      if ((*(uint *)(param_1 + 0x124) != 0) &&
         ((iVar6 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar6 < 1 || (iVar6 == 2)))) {
        FUN_005eb2e0(param_1 + 0x3b0,puVar3,puVar2,0x28d);
      }
    }
  }
  return;
}


// 0x05ebf50 (0xbc bytes)
void FUN_005ebf50(int param_1)

{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
      FUN_005ebac0(param_1);
    }
    if ((*(int *)(param_1 + 0x17c) == 0) && ((*(uint *)(param_1 + 0x20) & 0x8000000) != 0)) {
      (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1 + 400);
      return;
    }
  }
  return;
}


// 0x05ec00c (0x28 bytes)
undefined4 FUN_005ec00c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005f5090();
  return uVar1;
}


// 0x05ec034 (0xac bytes)
uint FUN_005ec034(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (param_1 == 1) {
    if (*(int *)(PTR_DAT_0071a40c + 0x1f0) != 0) {
      uVar1 = FUN_005fcc50(PTR_DAT_0071a40c + 500,param_2);
      uVar1 = ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1);
LAB_005ec098:
      return uVar1 >> 0x1f;
    }
  }
  else if (param_1 == 2) {
    if (*(int *)(PTR_DAT_0071a40c + 0x1ac) != 0) {
      uVar1 = FUN_005fcc50(PTR_DAT_0071a40c + 0x2f4,param_2);
      uVar1 = ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1);
      goto LAB_005ec098;
    }
  }
  return 0;
}


// 0x05ec0e0 (0xf4 bytes)
// strings: 00661cd8: 'Bink global IO mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ec0e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_s_Bink_global_IO_mutex_0071a43c;
  puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar2 = PTR_DAT_0071a40c;
  puVar1 = PTR_DAT_0071a40c + 0x3f4;
  FUN_005eb0f8(puVar1,PTR_s_Bink_global_IO_mutex_0071a43c,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x553);
  if (*(int *)(puVar2 + 0x1ac) != 0) {
    *(undefined4 *)(puVar2 + 0x474) = 1;
    FUN_005fc190(puVar2 + 0x1b0,4);
    FUN_005fc2ec(puVar2 + 0x2f4,0xffffffff,0);
    FUN_005fd4d0(puVar2 + 0x2f4);
    FUN_005fc098(puVar2 + 0x1b0);
    *(undefined4 *)(puVar2 + 0x478) = 0;
    *(undefined4 *)(puVar2 + 0x1ac) = 0;
  }
  FUN_005eb2e0(puVar1,puVar4,puVar3,0x563);
  return;
}


// 0x05ec1d4 (0xf4 bytes)
// strings: 00661cf0: 'Bink global sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ec1d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_s_Bink_global_sound_mutex_0071a440;
  puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar2 = PTR_DAT_0071a40c;
  puVar1 = PTR_DAT_0071a40c + 0x47c;
  FUN_005eb0f8(puVar1,PTR_s_Bink_global_sound_mutex_0071a440,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,600);
  if (*(int *)(puVar2 + 0x1f0) != 0) {
    *(undefined4 *)(puVar2 + 0x4fc) = 1;
    FUN_005fc190(puVar2 + 0x500,4);
    FUN_005fc2ec(puVar2 + 500,0xffffffff,0);
    FUN_005fd4d0(puVar2 + 500);
    FUN_005fc098(puVar2 + 0x500);
    *(undefined4 *)(puVar2 + 0x540) = 0;
    *(undefined4 *)(puVar2 + 0x1f0) = 0;
  }
  FUN_005eb2e0(puVar1,puVar4,puVar3,0x267);
  return;
}


// 0x05ec2c8 (0x28 bytes)
undefined4 FUN_005ec2c8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005fbef8();
  return uVar1;
}


// 0x05ec2f0 (0xd4 bytes)
void FUN_005ec2f0(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + -0x10);
  if (0 < iVar1) {
    iVar2 = FUN_005f5090();
    iVar1 = ((int)(((param_2 & 0xffffffff) * 1000) / (ulonglong)(longlong)iVar1) - (iVar2 - param_3)
            ) + *(int *)(param_1 + -0xc);
    *(int *)(param_1 + -0xc) = iVar1;
    while (0 < iVar1) {
      do {
        FUN_005fbf74(1);
        iVar3 = FUN_005f5090();
        iVar1 = *(int *)(param_1 + -0xc) - (iVar3 - iVar2);
      } while (iVar3 - iVar2 < *(int *)(param_1 + -0xc));
      *(int *)(param_1 + -0xc) = iVar1;
      iVar2 = iVar3;
    }
  }
  return;
}


// 0x05ec3c8 (0x258 bytes)
// strings: 00661d08: 'Bink list mutex' | 00661cf0: 'Bink global sound mutex' | 00661d18: 'Bink global io mutex'

void FUN_005ec3c8(void)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  uint uVar10;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x12] = unaff_r30;
  puVar5[0x13] = unaff_r31;
  puVar6 = PTR_DAT_0071a40c;
  uVar10 = 0;
  puVar5[0xf] = unaff_r27;
  puVar5[0x10] = unaff_r28;
  puVar5[0x11] = unaff_r29;
  puVar5[0x16] = in_LR;
LAB_005ec3f0:
  do {
    iVar9 = FUN_005fbef8(puVar6 + 0x544,1);
    while( true ) {
      if (iVar9 == 0) {
        if (*(int *)(puVar6 + 0x548) == 0) {
          iVar9 = FUN_005fc508(puVar6 + 0x54c,2);
          if (iVar9 == 0) {
            trapWord(0x1f,lVar1,lVar1);
          }
          iVar9 = FUN_005fc508(puVar6 + 0x47c,1);
          if (iVar9 == 0) {
            trapWord(0x1f,lVar1,lVar1);
          }
          iVar9 = FUN_005fc508(puVar6 + 0x3f4,1);
          puVar8 = PTR_s_Bink_list_mutex_0071a444;
          puVar7 = PTR_DAT_0071a414;
          if (iVar9 == 0) {
            trapWord(0x1f,lVar1,lVar1);
          }
          iVar9 = *(int *)PTR_DAT_0071a414;
          if (iVar9 != 0) {
            pcVar3 = (code *)**(undefined4 **)(iVar9 + 0x5c);
            puVar5[5] = ZEXT48(&TOC_BASE);
            (*pcVar3)(iVar9,puVar6 + 0x54c,puVar6 + 0x5cc,puVar8);
            iVar9 = *(int *)puVar7;
            if (iVar9 != 0) {
              uVar4 = *(undefined4 *)((int)puVar5[5] + -0x7ee8);
              pcVar3 = (code *)**(undefined4 **)(iVar9 + 0x5c);
              puVar5[5] = puVar5[5];
              (*pcVar3)(iVar9,puVar6 + 0x47c,puVar6 + 0x5d0,uVar4);
              iVar9 = *(int *)puVar7;
              if (iVar9 != 0) {
                uVar4 = *(undefined4 *)((int)puVar5[5] + -0x7ee0);
                pcVar3 = (code *)**(undefined4 **)(iVar9 + 0x5c);
                puVar5[5] = puVar5[5];
                (*pcVar3)(iVar9,puVar6 + 0x3f4,puVar6 + 0x5d4,uVar4);
              }
            }
          }
          *(undefined4 *)(puVar6 + 0x548) = 1;
          FUN_005fbef8(puVar6 + 0x544,0xffffffffffffffff);
          return;
        }
        FUN_005fbef8(puVar6 + 0x544,0xffffffffffffffff);
        return;
      }
      FUN_005fbef8(puVar6 + 0x544,0xffffffffffffffff);
      FUN_005fbfc8();
      bVar2 = uVar10 == 0x1ff;
      uVar10 = uVar10 + 1;
      if (bVar2) break;
      if (uVar10 < 0x400) goto LAB_005ec3f0;
      FUN_005fbf74(1);
      uVar10 = 0;
      iVar9 = FUN_005fbef8(puVar6 + 0x544,1);
    }
    FUN_005fbfac();
  } while( true );
}


// 0x05ec620 (0x158 bytes)
// strings: 00661cf0: 'Bink global sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

u32 FUN_005ec620(u8 *param_1,u32 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_005ec3c8();
  puVar5 = PTR_s_Bink_global_sound_mutex_0071a440;
  puVar4 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar3 = PTR_DAT_0071a40c;
  puVar2 = PTR_DAT_0071a40c + 0x47c;
  FUN_005eb0f8(puVar2,PTR_s_Bink_global_sound_mutex_0071a440,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x152);
  if (*(int *)(puVar3 + 0x5d8) != 0) {
    if (param_1 == *(int *)(puVar3 + 0x5d8)) goto LAB_005ec6ac;
    if (*(int *)(puVar3 + 0x5dc) != 0) {
      FUN_005eb2e0(puVar2,puVar5,puVar4,0x15f);
      return 0;
    }
  }
  *(int *)(puVar3 + 0x5d8) = param_1;
LAB_005ec6ac:
  iVar6 = (*(code *)**(undefined4 **)(puVar3 + 0x5d8))(param_2);
  if (iVar6 != 0) {
    *(int *)(puVar3 + 0x5e0) = iVar6;
  }
  FUN_005eb2e0(puVar3 + 0x47c,puVar5,puVar4,0x16b);
  uVar1 = (int)*(uint *)(puVar3 + 0x5e0) >> 0x1f;
  return uVar1 - (uVar1 ^ *(uint *)(puVar3 + 0x5e0)) >> 0x1f;
}


// 0x05ec778 (0x508 bytes)
// strings: 00661d30: 'Bink Snd' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661d40: 'Sound mix delay' | 00661d08: 'Bink list mutex' | 00661cb8: 'Bink instance sound mutex' | 00661cf0: 'Bink global sound mutex' | 00661d60: 'Global sound mix' | 00661d50: 'Sound mix'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071a410 : 0x005ec7fc */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_005ec778(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  
  puVar2 = PTR_DAT_0071a414;
  puVar1 = PTR_DAT_0071a40c;
  iVar7 = *(int *)PTR_DAT_0071a414;
  puVar9 = PTR_DAT_0071a410;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x58))
              (iVar7,0,PTR_DAT_0071a40c + 0x5e4,PTR_s_Bink_Snd_0071a44c);
    puVar9 = PTR_DAT_0071a410;
  }
LAB_005ec800:
  do {
    iVar7 = *(int *)puVar2;
    if (iVar7 != 0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x50))
                (iVar7,0,0,0,2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x21f,puVar1 + 0x5e8)
      ;
    }
    FUN_005fc0f8(puVar1 + 0x500,*(undefined4 *)(puVar9 + 0x10));
    iVar7 = *(int *)puVar2;
    if (iVar7 != 0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x54))
                (iVar7,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x221);
    }
LAB_005ec8a4:
    puVar5 = PTR_s_Bink_list_mutex_0071a444;
    puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    if ((*(int *)(puVar1 + 0x4fc) == 0) && (*(int *)(puVar1 + 0x548) != 0)) {
      FUN_005eb0f8(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x1d4);
      puVar4 = PTR_s_Bink_instance_sound_mutex_0071a438;
      iVar7 = *(int *)(puVar1 + 0x5ec);
      if (iVar7 != 0) {
        puVar8 = (undefined4 *)0x0;
        do {
          if ((*(int *)(iVar7 + 300) == 0) && (*(int *)(iVar7 + 0x124) != 0)) {
            iVar6 = FUN_005eae28(iVar7 + 0x3b0,0,puVar4,puVar3,0x1da);
            if (iVar6 != 0) {
              FUN_005eb2e0(puVar1 + 0x54c,puVar5,puVar3,0x1de);
              *(undefined4 *)(puVar9 + 0x10) = 0xd;
              if ((*(int *)(iVar7 + 300) == 0) && (*(int *)(iVar7 + 0x124) != 0)) {
                iVar6 = *(int *)(*(int *)(iVar7 + 0x154) + 0x4c);
                if ((iVar6 == 0) || (iVar6 == 2)) {
                  iVar6 = *(int *)puVar2;
                  if (iVar6 != 0) {
                    (*(code *)**(undefined4 **)(iVar6 + 0x50))
                              (iVar6,0,0,0,0,puVar3,0x1e6,puVar1 + 0x5f0);
                  }
                  FUN_005ebac0(iVar7);
                  iVar6 = *(int *)puVar2;
                  if (iVar6 != 0) {
                    (*(code *)**(undefined4 **)(iVar6 + 0x54))(iVar6,0,0,puVar3,0x1e8);
                  }
                }
                else if (iVar6 < 0) {
                  puVar8 = *(undefined4 **)(*(int *)(iVar7 + 0x154) + 0x164);
                  if ((uint)-iVar6 < *(uint *)(puVar9 + 0x10)) {
                    *(int *)(puVar9 + 0x10) = -iVar6;
                  }
                }
              }
              iVar6 = FUN_005eae28(puVar1 + 0x54c,2,puVar5,puVar3,0x1f2);
              FUN_005eb2e0(iVar7 + 0x3b0,puVar4,puVar3,500);
              if (iVar6 != 0) goto LAB_005ec904;
              goto LAB_005ec8a4;
            }
            if (*(uint *)(puVar9 + 0x10) < 3) goto LAB_005ec904;
            *(undefined4 *)(puVar9 + 0x10) = 2;
            iVar7 = *(int *)(iVar7 + 0xe4);
          }
          else {
LAB_005ec904:
            iVar7 = *(int *)(iVar7 + 0xe4);
          }
          if (iVar7 == 0) {
            FUN_005eb2e0(puVar1 + 0x54c,puVar5,puVar3,0x202);
            puVar5 = PTR_s_Bink_global_sound_mutex_0071a440;
            if (puVar8 == (undefined4 *)0x0) goto LAB_005eca90;
            iVar7 = FUN_005eae28(puVar1 + 0x47c,0,PTR_s_Bink_global_sound_mutex_0071a440,puVar3,
                                 0x207);
            if (iVar7 == 0) {
              if (*(uint *)(puVar9 + 0x10) < 3) goto LAB_005eca90;
              *(undefined4 *)(puVar9 + 0x10) = 2;
              iVar7 = *(int *)(puVar1 + 0x4fc);
              goto joined_r0x005ecb8c;
            }
            iVar7 = *(int *)puVar2;
            if (iVar7 != 0) {
              (*(code *)**(undefined4 **)(iVar7 + 0x50))(iVar7,0,0,0,0,puVar3,0x209,puVar1 + 0x5f4);
            }
            (*(code *)*puVar8)(0,0);
            iVar7 = *(int *)puVar2;
            if (iVar7 != 0) {
              (*(code *)**(undefined4 **)(iVar7 + 0x54))(iVar7,0,0,puVar3,0x20b);
            }
            FUN_005eb2e0(puVar1 + 0x47c,puVar5,puVar3,0x20c);
            goto LAB_005eca90;
          }
        } while( true );
      }
      FUN_005eb2e0(puVar1 + 0x54c,puVar5,puVar3,0x202);
      if (*(int *)(puVar1 + 0x4fc) != 0) {
        return 1;
      }
      goto LAB_005ec800;
    }
LAB_005eca90:
    iVar7 = *(int *)(puVar1 + 0x4fc);
joined_r0x005ecb8c:
    if (iVar7 != 0) {
      return 1;
    }
  } while( true );
}


// 0x05ecc80 (0x1dc bytes)
// strings: 00661d78: 'Byte swap' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ecc80(uint *param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  puVar2 = PTR_DAT_0071a414;
  uVar8 = (ulonglong)(param_2 + 3 << 0x20) >> 0x22;
  auVar14 = *(undefined1 (*) [16])((uint)(PTR_DAT_0071a410 + 0x20) & 0xfffffff0);
  iVar1 = *(int *)PTR_DAT_0071a414;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x50))
              (iVar1,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x5fb,
               ZEXT48(PTR_DAT_0071a40c) + 0x5f8);
  }
  if (((uint)param_1 & 0xf) == 0) {
LAB_005ecd54:
    lVar7 = ((uVar8 - 0x10 << 0x20) >> 0x24) + 1;
    puVar3 = param_1;
    puVar6 = param_1 + 0xc;
    puVar5 = param_1 + 8;
    puVar4 = param_1 + 4;
    if (0xf < (uVar8 & 0xffffffff)) {
      do {
        uVar8 = uVar8 - 0x10;
        param_1 = puVar3 + 0x10;
        auVar10 = vectorPermute(*(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),auVar14);
        auVar11 = vectorPermute(*(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),auVar14);
        auVar13 = vectorPermute(*(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),auVar14);
        auVar12 = vectorPermute(*(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),auVar14);
        *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0) = auVar10;
        *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0) = auVar11;
        *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0) = auVar13;
        *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0) = auVar12;
        lVar7 = lVar7 + -1;
        puVar3 = param_1;
        puVar6 = puVar6 + 0x10;
        puVar5 = puVar5 + 0x10;
        puVar4 = puVar4 + 0x10;
      } while (lVar7 != 0);
    }
    if ((int)uVar8 != 0) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar9 = uVar8;
    if ((uint)(param_2 + 3) >> 2 != 0) {
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
        if (((uint)param_1 & 0xf) == 0) goto LAB_005ecd54;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  iVar1 = *(int *)puVar2;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x54))
              (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x627);
  }
  return;
}


// 0x05ece60 (0x4 bytes)
void thunk_FUN_005ecc80(uint *param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  puVar2 = PTR_DAT_0071a414;
  uVar8 = (ulonglong)(param_2 + 3 << 0x20) >> 0x22;
  auVar14 = *(undefined1 (*) [16])((uint)(PTR_DAT_0071a410 + 0x20) & 0xfffffff0);
  iVar1 = *(int *)PTR_DAT_0071a414;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x50))
              (iVar1,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x5fb,
               ZEXT48(PTR_DAT_0071a40c) + 0x5f8);
  }
  if (((uint)param_1 & 0xf) == 0) {
LAB_005ecd54:
    lVar7 = ((uVar8 - 0x10 << 0x20) >> 0x24) + 1;
    puVar3 = param_1;
    puVar6 = param_1 + 0xc;
    puVar5 = param_1 + 8;
    puVar4 = param_1 + 4;
    if (0xf < (uVar8 & 0xffffffff)) {
      do {
        uVar8 = uVar8 - 0x10;
        param_1 = puVar3 + 0x10;
        auVar10 = vectorPermute(*(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),auVar14);
        auVar11 = vectorPermute(*(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),auVar14);
        auVar13 = vectorPermute(*(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),auVar14);
        auVar12 = vectorPermute(*(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),auVar14);
        *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0) = auVar10;
        *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0) = auVar11;
        *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0) = auVar13;
        *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0) = auVar12;
        lVar7 = lVar7 + -1;
        puVar3 = param_1;
        puVar6 = puVar6 + 0x10;
        puVar5 = puVar5 + 0x10;
        puVar4 = puVar4 + 0x10;
      } while (lVar7 != 0);
    }
    if ((int)uVar8 != 0) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar9 = uVar8;
    if ((uint)(param_2 + 3) >> 2 != 0) {
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
        if (((uint)param_1 & 0xf) == 0) goto LAB_005ecd54;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  iVar1 = *(int *)puVar2;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x54))
              (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x627);
  }
  return;
}


// 0x05ece64 (0x74 bytes)
undefined4 FUN_005ece64(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x468);
  iVar2 = FUN_005fd778();
  *(int *)(param_2 + 0x468) = iVar2 + iVar1 + param_3;
  uVar3 = FUN_005fd790(param_1,param_3);
  return uVar3;
}


// 0x05eced8 (0x2ac bytes)
void FUN_005eced8(int param_1,undefined4 *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_005f5090();
  if (*(int *)(param_1 + 0x470) - 1U < 0xfffffffe) {
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar2 - *(int *)(param_1 + 0x470));
    *(undefined4 *)(param_1 + 0x470) = 0;
    if ((int)param_3 != 0) goto LAB_005ed150;
LAB_005ecf34:
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x450);
  }
  else {
    if ((int)param_3 == 0) goto LAB_005ecf34;
LAB_005ed150:
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x450);
    if ((param_3 & 0xffffffff) < uVar3) goto LAB_005ecf3c;
  }
  param_3 = uVar3 - 1;
LAB_005ecf3c:
  if ((ulonglong)*(uint *)(param_1 + 0xc) < (param_3 & 0xffffffff)) {
    param_3 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
  }
  uVar3 = param_3 & 0xffffffff;
  if ((int)param_3 == 0) {
    param_3 = 1;
    uVar3 = 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x1f8);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x1fc);
  param_2[0xd] = (int)((((ulonglong)
                         *(uint *)(*(uint *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x158)) -
                        (ulonglong)
                        *(uint *)((int)((*(uint *)(param_1 + 0xc) - param_3 & 0xffffffff) << 2) +
                                 *(int *)(param_1 + 0x158))) * (ulonglong)*(uint *)(param_1 + 0x4a0)
                       ) / (*(uint *)(param_1 + 0x4a4) * uVar3));
  uVar3 = param_3 + *(uint *)(param_1 + 0x454);
  if ((ulonglong)*(uint *)(param_1 + 0x450) <= (uVar3 & 0xffffffff)) {
    uVar3 = uVar3 - *(uint *)(param_1 + 0x450);
  }
  param_2[3] = (int)param_3;
  iVar2 = (int)((uVar3 & 0x3fffffff) << 2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x434)) -
          *(int *)(*(int *)(param_1 + 0x434) + iVar2);
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[4] = 1;
  }
  param_2[5] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x43c)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x43c));
  param_2[6] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x438)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x438));
  param_2[10] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x440)) -
                *(int *)(iVar2 + *(int *)(param_1 + 0x440));
  param_2[7] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x444)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x444));
  param_2[8] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x448)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x448));
  param_2[9] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x44c)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x44c));
  return;
}


// 0x05ed184 (0x21c bytes)
void FUN_005ed184(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_005f5090();
    iVar2 = param_1[0x11c];
    if (iVar2 - 1U < 0xfffffffe) {
      param_1[0x11c] = 0;
      param_1[0x126] = param_1[0x126] + (iVar1 - iVar2);
    }
    memset(param_2,0,0x7c);
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[0xb] = param_1[0x131];
    param_2[0xc] = param_1[0x11b];
    param_2[3] = param_1[0x128];
    param_2[4] = param_1[0x129];
    param_2[8] = param_1[2];
    param_2[9] = param_1[0x118];
    iVar2 = FUN_005f5090();
    param_2[2] = iVar2 - param_1[0x119];
    param_2[7] = param_1[0x127];
    param_2[0x10] = param_1[0x125];
    param_2[0xf] = param_1[0x124];
    param_2[0xd] = param_1[0x126];
    param_2[0x1a] = param_2[0x1a] + param_1[0x11a];
    param_2[0x1b] = param_1[0x116];
    if ((uint)param_1[0x78] < 1000) {
      param_2[0x13] = param_1[0x76] * (int)(1000 / (ulonglong)(param_1[0x78] + 1));
    }
    else {
      param_2[0x13] =
           (int)(((ulonglong)(uint)param_1[0x76] * 1000) / (ulonglong)(uint)param_1[0x78]);
    }
    param_2[0xe] = param_1[0x79];
    param_2[0x11] = param_1[0x7a];
    param_2[0x12] = param_1[0x7b];
    uVar3 = (ulonglong)(uint)param_1[10] - ((ulonglong)*(uint *)param_1[0x56] & 0xfffffffe);
    param_2[0x18] =
         (int)(((uVar3 & 0xffffffff) * (ulonglong)(uint)param_1[0x128]) /
              ((ulonglong)(uint)param_1[0x129] * (ulonglong)(uint)param_1[2]));
    param_2[0x19] = (int)((uVar3 & 0xffffffff) / (ulonglong)(uint)param_1[2]);
    param_2[0x1d] = param_1[0x32];
    param_2[0x1e] = param_1[0x33] + 1;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[0x14] = param_1[0x120];
    param_2[0x15] = param_1[0x122];
    param_2[0x16] = param_1[0x121];
    param_2[0x17] = param_1[0x123];
    param_2[0x1b] = param_1[0x7c];
    param_2[0x1c] = param_1[0x7d];
  }
  return;
}


// 0x05ed3a0 (0x4f4 bytes)
void FUN_005ed3a0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar9;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float local_a0 [8];
  float local_80 [16];
  longlong local_40;
  
  fVar3 = DAT_0071a460;
  if (param_1 == 0) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x124);
  if (uVar15 == 0) {
    return;
  }
  if ((int)uVar15 < 1) {
    return;
  }
  piVar14 = *(int **)(param_1 + 0xec);
  uVar21 = (ulonglong)uVar15;
  iVar18 = 0;
  uVar15 = 0;
  if (*(int *)(*piVar14 * 4 + *(int *)(param_1 + 0x178)) != param_2) {
    do {
      piVar14 = piVar14 + 1;
      uVar15 = uVar15 + 1;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) {
        return;
      }
    } while (*(int *)(*piVar14 * 4 + *(int *)(param_1 + 0x178)) != param_2);
    if (uVar15 == 0xffffffff) {
      return;
    }
    iVar18 = uVar15 * 0x200 + (uVar15 & 0x1ffffff) * -0x80;
  }
  iVar16 = *(int *)(param_1 + 0x154);
  if (*(int *)(iVar18 + iVar16 + 0x17c) == 0) {
    return;
  }
  if (param_5 < 9) {
    if (param_4 != 0) goto LAB_005ed4b0;
LAB_005ed6a4:
    bVar1 = param_5 == 0;
    if (bVar1) goto LAB_005ed858;
    uVar21 = (ulonglong)param_5;
    pfVar17 = local_a0;
    do {
      *pfVar17 = 1.0;
      uVar21 = uVar21 - 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar21 != 0);
  }
  else {
    param_5 = 8;
    if (param_4 == 0) goto LAB_005ed6a4;
LAB_005ed4b0:
    bVar1 = param_5 == 0;
    if (bVar1) {
LAB_005ed858:
      local_a0[0] = 1.0;
      goto LAB_005ed520;
    }
    uVar21 = (ulonglong)param_5;
    iVar16 = 0;
    do {
      piVar14 = (int *)(iVar16 + param_4);
      pfVar17 = (float *)((int)local_a0 + iVar16);
      iVar16 = iVar16 + 4;
      local_40 = (longlong)*piVar14;
      fVar4 = DAT_0071a464;
      if (*piVar14 < 0x10000) {
        fVar4 = (float)local_40 * fVar3;
      }
      *pfVar17 = fVar4;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  iVar16 = *(int *)(param_1 + 0x154);
LAB_005ed520:
  local_80[0xf] = 0.0;
  local_80[0] = 0.0;
  local_80[1] = 0.0;
  local_80[2] = 0.0;
  local_80[3] = 0.0;
  local_80[4] = 0.0;
  local_80[5] = 0.0;
  local_80[6] = 0.0;
  local_80[7] = 0.0;
  local_80[8] = 0.0;
  local_80[9] = 0.0;
  local_80[10] = 0.0;
  local_80[0xb] = 0.0;
  local_80[0xc] = 0.0;
  local_80[0xd] = 0.0;
  local_80[0xe] = 0.0;
  uVar15 = *(uint *)(iVar18 + iVar16 + 0x28);
  uVar9 = uVar15 ^ 2;
  uVar21 = (ulonglong)uVar15 - 1;
  uVar15 = (int)uVar9 >> 0x1f;
  uVar15 = ((uVar15 ^ uVar9) - uVar15) - 1 >> 0x1f;
  if (param_3 == 0) {
    lVar8 = 0;
    lVar19 = 0;
    lVar11 = 0;
    lVar20 = 0;
    lVar10 = 0;
    if (1 < param_5) {
      lVar8 = 1;
      lVar11 = 1;
      lVar10 = 1;
      if (4 < param_5) {
        lVar19 = 4;
        lVar11 = 4;
        lVar20 = 4;
        lVar10 = 4;
        if (param_5 != 5) {
          lVar11 = 5;
          lVar10 = 5;
          if (param_5 != 6) {
            lVar20 = 6;
            lVar10 = 7;
            if (param_5 == 7) {
              lVar10 = 6;
            }
          }
        }
      }
    }
    local_80[0] = local_a0[0];
    *(undefined4 *)((int)local_80 + (int)((uVar21 + (uint)(1 << uVar15) & 0xffffffff) << 2)) =
         *(undefined4 *)((int)local_a0 + (int)(lVar8 << 2));
    if ((int)uVar21 == 1) {
      local_a0[2] = local_a0[2] * DAT_0071a468;
      local_a0[3] = local_a0[3] * DAT_0071a468;
      local_80[5] = local_a0[2];
      local_80[6] = local_a0[3];
    }
    uVar2 = *(undefined4 *)((int)local_a0 + (int)(lVar11 << 2));
    fVar3 = *(float *)((int)local_a0 + (int)(lVar19 << 2));
    fVar4 = *(float *)((int)local_a0 + (int)(lVar20 << 2));
    uVar5 = *(undefined4 *)((int)local_a0 + (int)(lVar10 << 2));
    local_80[2 << uVar15] = local_a0[2];
    *(float *)((int)local_80 + (int)((uVar21 + (uint)(3 << uVar15) & 0xffffffff) << 2)) =
         local_a0[3];
    local_80[4 << uVar15] = fVar3;
    *(undefined4 *)((int)local_80 + (int)((uVar21 + (uint)(5 << uVar15) & 0xffffffff) << 2)) = uVar2
    ;
    local_80[6 << uVar15] = fVar4;
    *(undefined4 *)((int)local_80 + (int)((uVar21 + (uint)(7 << uVar15) & 0xffffffff) << 2)) = uVar5
    ;
  }
  else if (!bVar1) {
    uVar22 = (ulonglong)param_5;
    iVar13 = 0;
    uVar12 = 0;
    do {
      piVar14 = (int *)(iVar13 + param_3);
      uVar7 = uVar21 & uVar12;
      puVar6 = (undefined4 *)((int)local_a0 + iVar13);
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 4;
      *(undefined4 *)((int)local_80 + (int)(((uint)(*piVar14 << uVar15) + uVar7 & 0xffffffff) << 2))
           = *puVar6;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  uVar15 = *(uint *)(param_1 + 0x4e8);
  if ((uVar15 == 0) || (7 < uVar15)) {
    (*(code *)**(undefined4 **)(iVar18 + iVar16 + 0x17c))(iVar18 + iVar16,local_80,8);
  }
  else {
    (*(code *)**(undefined4 **)(iVar18 + iVar16 + 0x17c))(iVar18 + iVar16,local_80,uVar15);
  }
  return;
}


// 0x05ed898 (0xfc bytes)
void FUN_005ed898(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x124);
    if ((uVar4 != 0) && (0 < (int)uVar4)) {
      piVar3 = *(int **)(param_1 + 0xec);
      uVar5 = (ulonglong)uVar4;
      iVar2 = 0;
      uVar4 = 0;
      if (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2) {
        do {
          piVar3 = piVar3 + 1;
          uVar4 = uVar4 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return;
          }
        } while (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2);
        if (uVar4 == 0xffffffff) {
          return;
        }
        iVar2 = uVar4 * 0x200 + (uVar4 & 0x1ffffff) * -0x80;
      }
      iVar2 = iVar2 + *(int *)(param_1 + 0x154);
      puVar1 = *(undefined4 **)(iVar2 + 0x168);
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(iVar2,param_3);
        return;
      }
    }
  }
  return;
}


// 0x05ed994 (0x94 bytes)
undefined4 FUN_005ed994(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (*(undefined4 **)(param_1 + 0x1a8) != (undefined4 *)0x0) {
      uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1a8))(param_1 + 400,param_2);
      if (*(int *)(PTR_DAT_0071a40c + 0x1ac) != 0) {
        FUN_005fc190(PTR_DAT_0071a40c + 0x1b0,1);
      }
    }
  }
  return uVar1;
}


// 0x05eda28 (0x474 bytes)
// strings: 00661db8: 'ratemem' | 00661d88: 'Bink %d/%s/%s (%s)' | 00661db0: 'Size' (raw) | 00661da0: 'IO buffer' | 00661dc0: 'In Use' | 00661dc8: 'Bink %d/%s/%s' | 00661dd8: 'Percent Full' | 00661de8: 'Bink %d/%s (%s)' | 00661df8: 'Data rate'

void FUN_005eda28(int param_1,longlong param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar9 = (int)param_2;
  bVar1 = iVar9 == 0;
  if (bVar1) {
    iVar9 = 1;
    iVar12 = 0;
  }
  else {
    iVar12 = (int)((param_2 - 1U & 0x3fffffff) << 2);
    bVar1 = (int)(param_2 - 1U) == 0;
  }
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  FUN_005eb450(param_1);
  if (bVar1) {
    iVar8 = FUN_005f5090();
    if (*(int *)(param_1 + 0x4b4) == 0) {
      *(int *)(param_1 + 0x4b4) = iVar8;
    }
    else if (300000 < (uint)(iVar8 - *(int *)(param_1 + 0x4b4))) {
      *(int *)(param_1 + 0x4b4) = iVar8;
      *(undefined4 *)(param_1 + 0x4b8) = 1;
    }
  }
  puVar2 = *(uint **)(param_1 + 0x158);
  *(int *)(param_1 + 0x18c) = iVar9;
  uVar3 = *(uint *)(iVar12 + (int)puVar2);
  uVar4 = uVar3 & 0xfffffffe;
  *(uint *)(param_1 + 0x188) = uVar4;
  *(uint *)(param_1 + 0x120) = *(uint *)(iVar12 + (int)puVar2) & 1;
  iVar12 = (*(uint *)((int)puVar2 + iVar12 + 4) & 0xfffffffe) - uVar4;
  *(int *)(param_1 + 0x11c) = iVar12;
  if (*(int *)(param_1 + 0x17c) == 0) {
    *(uint *)(param_1 + 0xe8) =
         (*(int *)(param_1 + 0x4e0) + 0x100U & 0xffffff80) - (0x80 - (uVar3 & 0x7e));
    puVar5 = PTR_DAT_0071a40c;
    if ((uVar4 < *(uint *)(param_1 + 0x4d8)) ||
       (*(uint *)(param_1 + 0x4d8) + *(int *)(param_1 + 0x1fc) < uVar4 + iVar12)) {
      *(undefined4 *)(param_1 + 0x118) = 1;
      if (*(int *)(puVar5 + 0x1ac) != 0) {
        FUN_005fc190(puVar5 + 0x1b0,1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 1;
      FUN_005eb450(param_1);
    }
  }
  else {
    *(uint *)(param_1 + 0xe8) = *(int *)(param_1 + 0x17c) + (uVar4 - (*puVar2 & 0xfffffffe));
  }
  if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  puVar7 = PTR_s_IO_buffer_0071a470;
  puVar6 = PTR_DAT_0071a414;
  puVar5 = PTR_DAT_0071a40c;
  iVar12 = *(int *)PTR_DAT_0071a414;
  if (iVar12 != 0) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x450) - 1;
    if ((ulonglong)*(uint *)(param_1 + 0xc) < (uVar11 & 0xffffffff)) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
      iVar8 = (int)uVar11;
    }
    else {
      iVar8 = (int)uVar11;
    }
    if (iVar8 == 0) {
      uVar11 = 1;
    }
    (*(code *)**(undefined4 **)(iVar12 + 0x84))((double)*(uint *)(param_1 + 0x1f8),iVar12,1);
    iVar12 = *(int *)puVar6;
    if (iVar12 != 0) {
      (*(code *)**(undefined4 **)(iVar12 + 0x84))((double)*(uint *)(param_1 + 0x1fc),iVar12,1);
      iVar12 = *(int *)puVar6;
      if (iVar12 != 0) {
        (*(code *)**(undefined4 **)(iVar12 + 0x84))
                  ((double)((float)*(uint *)(param_1 + 0x1fc) /
                           ((float)*(uint *)(param_1 + 0x1f8) + DAT_0071a490)),iVar12,5,
                   *(undefined4 **)(iVar12 + 0x84),puVar5 + 0x604,PTR_s_Bink__d__s__s_0071a480,
                   *(undefined4 *)(param_1 + 0x160),puVar7,PTR_s_Percent_Full_0071a484);
      }
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    if (((int)uVar11 < (int)uVar3) && (iVar12 = *(int *)puVar6, iVar12 != 0)) {
      uVar10 = (uVar11 & 0xffffffff) * (ulonglong)*(uint *)(param_1 + 0x4a4);
      (*(code *)**(undefined4 **)(iVar12 + 0x84))
                ((double)((((ulonglong)*(uint *)(uVar3 * 4 + *(int *)(param_1 + 0x158)) -
                           (ulonglong)
                           *(uint *)((int)((uVar3 - uVar11 & 0xffffffff) << 2) +
                                    *(int *)(param_1 + 0x158))) *
                          (ulonglong)*(uint *)(param_1 + 0x4a0)) / uVar10 & 0xffffffff),iVar12,1,
                 uVar10,puVar5 + 0x608,PTR_s_Bink__d__s___s__0071a488,
                 *(undefined4 *)(param_1 + 0x160),PTR_s_Data_rate_0071a48c,PTR_s_ratemem_0071a478);
    }
  }
  *(int *)(param_1 + 0xc) = iVar9;
  return;
}


// 0x05edea0 (0x280 bytes)
undefined4 FUN_005edea0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  
  if ((param_1 != 0) &&
     (((*(int *)(param_1 + 0x460) != 0 || (*(int *)(param_1 + 0x108) != 0)) &&
      (*(int *)(param_1 + 0x1c) == 0)))) {
    iVar6 = *(int *)(param_1 + 0x474);
    if (iVar6 == 0) {
      iVar6 = FUN_005f5090();
      iVar2 = *(int *)(param_1 + 0x124);
      *(int *)(param_1 + 0x474) = iVar6;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x124);
    }
    if ((iVar2 != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
      FUN_005ebac0(param_1);
    }
    iVar5 = FUN_005f5090();
    iVar2 = *(int *)(param_1 + 0x470);
    if (iVar2 - 1U < 0xfffffffe) {
      iVar3 = *(int *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar5 - iVar2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x108);
    }
    if ((iVar3 != 0) ||
       ((bVar1 = *(int *)(param_1 + 0x124) == 0, !bVar1 && (*(int *)(param_1 + 0x110) == 0)))) {
LAB_005edf2c:
      if (((*(int *)(param_1 + 0x17c) == 0) && ((*(uint *)(param_1 + 0x20) & 0x8000000) != 0)) &&
         ((*(undefined4 **)(param_1 + 0x1a8) == (undefined4 *)0x0 ||
          (uVar4 = (*(code *)**(undefined4 **)(param_1 + 0x1a8))(param_1 + 400,0), (uVar4 & 1) == 0)
          ))) {
        (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1 + 400);
        return 1;
      }
      return 1;
    }
    if (*(uint *)(param_1 + 0x14) != 0) {
      iVar6 = (iVar5 - iVar6) -
              (int)(((((ulonglong)*(uint *)(param_1 + 0x460) - (ulonglong)*(uint *)(param_1 + 0x478)
                      & 0xffffffff) * (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                     (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                    (ulonglong)*(uint *)(*(int *)(param_1 + 0x154) + 0x3c) >> 0x10);
      if (iVar6 < 0) goto LAB_005edf2c;
      if ((bVar1) && (*(int *)(param_1 + 0x47c) << 1 < iVar6)) {
        *(undefined4 *)(param_1 + 0x474) = 0;
        return 0;
      }
    }
  }
  return 0;
}


// 0x05ee120 (0x288 bytes)
undefined8 FUN_005ee120(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + ((int)((CONCAT44(uVar2,uVar2) ^ 0x100000001) << 6) -
                         (int)((CONCAT44(uVar2,uVar2) ^ 0x100000001) << 4)) + 0x1c) != 0) {
      *(uint *)(iVar1 + 0x14) = uVar2 ^ 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x454);
  uVar5 = (ulonglong)uVar2 - 1;
  *(int *)(param_1 + 0x454) = (int)uVar5;
  if ((int)uVar5 < 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x450) - 1;
    *(int *)(param_1 + 0x454) = (int)uVar5;
  }
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar4 = param_2 - *(int *)(param_1 + 0x4b0);
    if (*(uint *)(param_1 + 0x480) < uVar4) {
      *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x480);
      *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x484);
      *(uint *)(param_1 + 0x480) = uVar4;
      *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x4ac);
    }
    else if (*(uint *)(param_1 + 0x488) < param_2) {
      *(uint *)(param_1 + 0x488) = uVar4;
      *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x4ac);
    }
  }
  *(uint *)(param_1 + 0x4b0) = param_2;
  *(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x434)) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x43c)) =
       *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x438)) =
       *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x440)) =
       *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x444)) =
       *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x448)) =
       *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x44c)) =
       *(undefined4 *)(param_1 + 0x1ec);
  if (*(int *)(param_1 + 0x464) == 0) {
    *(uint *)(uVar2 * 4 + *(int *)(param_1 + 0x434)) =
         param_2 - (int)(((ulonglong)*(uint *)(param_1 + 0x4a4) * 1000) /
                        (ulonglong)*(uint *)(param_1 + 0x4a0));
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(uint *)(param_1 + 0x464) = param_2;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  else if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xdc);
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  }
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  if (*(int *)(param_1 + 0x474) == 0) {
    uVar3 = FUN_005f5090();
    *(undefined4 *)(param_1 + 0x474) = uVar3;
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
  }
  *(undefined4 *)(param_1 + 0x470) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}


// 0x05ee3a8 (0x28c bytes)
// strings: 00661cb8: 'Bink instance sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

undefined4 FUN_005ee3a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = FUN_005f5090();
  iVar5 = *(int *)(param_1 + 0x470);
  if (iVar5 - 1U < 0xfffffffe) {
    iVar2 = *(int *)(param_1 + 0x108);
    iVar1 = *(int *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar4 - iVar5);
    *(int *)(param_1 + 0x108) = param_2;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x124);
    iVar2 = *(int *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(int *)(param_1 + 0x108) = param_2;
  }
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x154);
    if ((*(int *)(iVar5 + 0x4c) < 1) || (*(int *)(iVar5 + 0x4c) == 2)) {
      FUN_005eb0f8(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x287);
      if (*(int *)(param_1 + 0x124) == 0) goto LAB_005ee498;
      iVar5 = *(int *)(param_1 + 0x154);
    }
    uVar7 = 0;
    iVar4 = 0;
    while( true ) {
      iVar5 = iVar4 + iVar5;
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 0x180;
      (*(code *)**(undefined4 **)(iVar5 + 0x170))(iVar5,param_2);
      if (*(uint *)(param_1 + 0x124) <= uVar7) break;
      iVar5 = *(int *)(param_1 + 0x154);
    }
  }
LAB_005ee498:
  iVar5 = FUN_005f5090();
  if (param_2 == 0) {
    bVar3 = true;
    if (iVar2 == 0) goto LAB_005ee570;
  }
  else if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x474) == 0) {
      bVar3 = false;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
    }
    else {
      bVar3 = false;
      *(int *)(param_1 + 0x4cc) = iVar5 - *(int *)(param_1 + 0x474);
    }
  }
  else {
LAB_005ee570:
    bVar3 = false;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    iVar4 = *(int *)(param_1 + 0x154);
    if ((*(int *)(iVar4 + 0x4c) < 1) || (*(int *)(iVar4 + 0x4c) == 2)) {
      FUN_005eb2e0(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x28d);
      if (*(int *)(param_1 + 0x124) == 0) goto LAB_005ee50c;
      iVar4 = *(int *)(param_1 + 0x154);
    }
    if (*(int *)(iVar4 + 0x4c) == 1) {
      FUN_005ebac0(param_1);
    }
  }
LAB_005ee50c:
  if (bVar3) {
    *(int *)(param_1 + 0x474) = iVar5 - *(int *)(param_1 + 0x4cc);
  }
  if (*(int *)(PTR_DAT_0071a40c + 0x1ac) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x108);
  }
  else {
    FUN_005fc190(PTR_DAT_0071a40c + 0x1b0,1);
    uVar6 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar6;
}


// 0x05ee638 (0x5d4 bytes)
// strings: 00661d08: 'Bink list mutex' | 00661cb8: 'Bink instance sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cf0: 'Bink global sound mutex' | 00661cd8: 'Bink global IO mutex' | 00661c08: 'Bink instance io mutex'

void FUN_005ee638(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 300) = 1;
    FUN_005ee3a8(param_1,1);
    puVar1 = PTR_DAT_0071a40c;
    if (*(undefined4 **)(PTR_DAT_0071a40c + 0x60c) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(PTR_DAT_0071a40c + 0x60c))(param_1);
    }
    puVar4 = PTR_s_Bink_list_mutex_0071a444;
    puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_005eb0f8(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x11a);
      if (param_1 == *(int *)(puVar1 + 0x5ec)) {
        *(undefined4 *)(puVar1 + 0x5ec) = *(undefined4 *)(*(int *)(puVar1 + 0x5ec) + 0xe4);
      }
      else {
        iVar7 = *(int *)(puVar1 + 0x5ec);
        if (iVar7 != 0) {
          for (iVar5 = *(int *)(iVar7 + 0xe4); param_1 != iVar5; iVar5 = *(int *)(iVar5 + 0xe4)) {
            if (iVar5 == 0) goto LAB_005eeaf8;
            iVar7 = iVar5;
          }
          *(undefined4 *)(iVar7 + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
        }
      }
LAB_005eeaf8:
      FUN_005eb2e0(puVar1 + 0x54c,puVar4,puVar2,0x12d);
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    puVar4 = PTR_s_Bink_list_mutex_0071a444;
    puVar2 = PTR_s_Bink_instance_io_mutex_0071a420;
    if ((*(uint *)(param_1 + 0x20) & 0x8000000) == 0) {
      FUN_005eb650(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,param_1 + 0x330,
                   PTR_s_Bink_instance_io_mutex_0071a420);
      if (param_1 == *(int *)(puVar1 + 0x610)) {
        *(undefined4 *)(puVar1 + 0x610) = 0;
      }
      puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
      FUN_005eb2e0(param_1 + 0x330,puVar2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd02);
      FUN_005eb2e0(puVar1 + 0x54c,puVar4,puVar3,0xd03);
      iVar7 = *(int *)(puVar1 + 0x610);
    }
    else {
      iVar7 = *(int *)(puVar1 + 0x610);
    }
    if (param_1 == iVar7) {
      *(undefined4 *)(puVar1 + 0x610) = 0;
    }
    puVar4 = PTR_s_Bink_list_mutex_0071a444;
    puVar2 = PTR_s_Bink_instance_sound_mutex_0071a438;
    if ((*(int *)(param_1 + 0x124) == 0) ||
       ((iVar7 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), 0 < iVar7 && (iVar7 != 2)))) {
      iVar7 = *(int *)(puVar1 + 0x548);
    }
    else {
      FUN_005eb650(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,param_1 + 0x3b0,
                   PTR_s_Bink_instance_sound_mutex_0071a438);
      puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
      FUN_005eb2e0(param_1 + 0x3b0,puVar2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd0f);
      FUN_005eb2e0(puVar1 + 0x54c,puVar4,puVar3,0xd10);
      iVar7 = *(int *)(puVar1 + 0x548);
    }
    if (iVar7 != 0) {
      FUN_005eb0f8(puVar1 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd16);
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      uVar6 = 0;
      iVar7 = 0;
      do {
        uVar6 = uVar6 + 1;
        iVar5 = iVar7 + *(int *)(param_1 + 0x154);
        iVar7 = iVar7 + 0x180;
        (*(code *)**(undefined4 **)(iVar5 + 0x178))(iVar5);
        *(int *)(puVar1 + 0x5dc) = *(int *)(puVar1 + 0x5dc) + -1;
      } while (uVar6 < *(uint *)(param_1 + 0x124));
    }
    if (*(int *)(puVar1 + 0x548) != 0) {
      FUN_005eb2e0(puVar1 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd2b);
    }
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_005f516c(*(int *)(param_1 + 0x15c));
    }
    if (*(int *)(param_1 + 0x17c) == 0) {
      if (*(int *)(puVar1 + 0x548) != 0) {
        FUN_005eb0f8(puVar1 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd3b);
      }
      (*(code *)**(undefined4 **)(param_1 + 0x1a4))(param_1 + 400);
      if (*(int *)(puVar1 + 0x548) != 0) {
        FUN_005eb2e0(puVar1 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd42);
      }
      FUN_005f516c(*(undefined4 *)(param_1 + 0x430));
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x20);
      if ((uVar6 & 0x4000000) == 0) {
        FUN_005f516c(*(int *)(param_1 + 0x17c));
        uVar6 = *(uint *)(param_1 + 0x20);
      }
    }
    if ((uVar6 & 0x8000000) == 0) {
      FUN_005fc490(param_1 + 0x330);
    }
    FUN_005fc490(param_1 + 0x2b0);
    if ((*(int *)(param_1 + 0x124) != 0) &&
       ((iVar7 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar7 < 1 || (iVar7 == 2)))) {
      FUN_005fc490(param_1 + 0x3b0);
    }
    if (*(int *)(param_1 + 0x4e4) != 0) {
      FUN_005f516c(*(int *)(param_1 + 0x4e4));
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_005f516c(*(int *)(param_1 + 0xd4));
    }
    iVar7 = *(int *)(param_1 + 0xd8);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0xd4) != iVar7)) {
      FUN_005f516c(iVar7);
    }
    puVar4 = PTR_s_Bink_global_sound_mutex_0071a440;
    puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) < 1)) {
      uVar6 = *(uint *)(param_1 + 0x20);
      FUN_005eb0f8(puVar1 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x26c);
      *(int *)(puVar1 + 0x540) = *(int *)(puVar1 + 0x540) + -1;
      if (*(int *)(puVar1 + 0x540) == 0) {
        if ((uVar6 & 0x40) == 0) {
          FUN_005ec1d4();
        }
        else {
          *(undefined4 *)(PTR_DAT_0071a410 + 0x10) = 0xffffffff;
        }
      }
      FUN_005eb2e0(puVar1 + 0x47c,puVar4,puVar2,0x278);
    }
    puVar4 = PTR_s_Bink_global_IO_mutex_0071a43c;
    puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((uVar6 & 0x8000000) == 0) {
      FUN_005eb0f8(puVar1 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x568);
      *(int *)(puVar1 + 0x478) = *(int *)(puVar1 + 0x478) + -1;
      if ((*(int *)(puVar1 + 0x478) == 0) && ((uVar6 & 0x40) == 0)) {
        FUN_005ec0e0();
      }
      FUN_005eb2e0(puVar1 + 0x3f4,puVar4,puVar2,0x56f);
    }
    memset(param_1,0,0x4f0);
    FUN_005f516c(param_1);
  }
  return;
}


// 0x05eec10 (0xb2c bytes)
// strings: 00661e08: 'Bink IO' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661e10: 'No IO to do' | 00661d08: 'Bink list mutex' | 00661e20: 'Waiting for both io mutexes' | 00661c98: 'Bink instance priority io mutex' | 00661c08: 'Bink instance io mutex'

undefined8 FUN_005eec10(void)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar10;
  int iVar11;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar5 = PTR_DAT_0071a414;
  puVar4 = PTR_DAT_0071a40c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar13 = *(int *)PTR_DAT_0071a414;
  if (iVar13 != 0) {
    (*(code *)**(undefined4 **)(iVar13 + 0x58))
              (iVar13,0,PTR_DAT_0071a40c + 0x614,PTR_s_Bink_IO_0071a494);
  }
  do {
    iVar13 = *(int *)puVar5;
    if (iVar13 != 0) {
      (*(code *)**(undefined4 **)(iVar13 + 0x50))
                (iVar13,0,0,0,2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x451,puVar4 + 0x618
                );
    }
    FUN_005fc0f8(puVar4 + 0x1b0,0xffffffff);
    iVar13 = *(int *)puVar5;
    if (iVar13 != 0) {
      (*(code *)**(undefined4 **)(iVar13 + 0x54))
                (iVar13,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x453);
    }
    do {
      bVar3 = false;
LAB_005eed4c:
      puVar8 = PTR_s_Bink_list_mutex_0071a444;
      puVar7 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
      if ((*(int *)(puVar4 + 0x474) != 0) || (*(int *)(puVar4 + 0x548) == 0)) break;
      FUN_005eb0f8(puVar4 + 0x54c,PTR_s_Bink_list_mutex_0071a444,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x45d);
      iVar13 = *(int *)(puVar4 + 0x610);
      if ((iVar13 == 0) ||
         ((*(int *)(iVar13 + 0x118) == 0 || ((*(uint *)(iVar13 + 0x20) & 0x8000000) != 0)))) {
        iVar10 = 0;
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x487);
      }
      else {
        iVar10 = *(int *)puVar5;
        if (iVar10 != 0) {
          (*(code *)**(undefined4 **)(iVar10 + 0x50))(iVar10,0,0,0,1,puVar7,0x465,puVar4 + 0x61c);
        }
        puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
        iVar15 = iVar13 + 0x2b0;
        iVar10 = FUN_005eae28(iVar15,1,PTR_s_Bink_instance_priority_io_mutex_0071a434,puVar7,0x466);
        bVar1 = iVar10 == 0;
        if (!bVar1) {
          iVar10 = FUN_005eae28(iVar13 + 0x330,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x469)
          ;
          bVar1 = iVar10 == 0;
          if (bVar1) {
            FUN_005eb2e0(iVar15,puVar2,puVar7,0x46b);
          }
        }
        iVar10 = *(int *)puVar5;
        if (iVar10 != 0) {
          (*(code *)**(undefined4 **)(iVar10 + 0x54))(iVar10,0,0,puVar7,0x46d);
        }
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x471);
        if (bVar1) {
          iVar10 = 1;
        }
        else {
          iVar10 = 1;
          if (*(int *)(iVar13 + 0x118) != 0) {
            if ((*(int *)(iVar13 + 0x1d0) == 0) && (*(int *)(iVar13 + 300) == 0)) {
              iVar10 = (*(code *)**(undefined4 **)(iVar13 + 0x194))
                                 (iVar13 + 400,*(int *)(iVar13 + 0xc) + -1,
                                  *(undefined4 *)(iVar13 + 0x188),*(undefined4 *)(iVar13 + 0xe8),
                                  *(undefined4 *)(iVar13 + 0x11c));
              *(undefined4 *)(iVar13 + 0x118) = 0;
              *(int *)(iVar13 + 0x4d8) = *(int *)(iVar13 + 0x188) + *(int *)(iVar13 + 0x11c);
              if (*(int *)(iVar13 + 0x1d0) != 0) {
                *(undefined4 *)(iVar13 + 0x1c) = 1;
              }
              if (iVar10 != 0) {
                bVar3 = true;
                iVar10 = 0;
                goto LAB_005ef420;
              }
            }
            iVar10 = 0;
          }
LAB_005ef420:
          FUN_005eb2e0(iVar13 + 0x330,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x47e);
          FUN_005eb2e0(iVar15,puVar2,puVar7,0x481);
        }
      }
      FUN_005eb0f8(puVar4 + 0x54c,puVar8,puVar7,0x48b);
      puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
      for (iVar13 = *(int *)(puVar4 + 0x5ec); iVar13 != 0; iVar13 = *(int *)(iVar13 + 0xe4)) {
        iVar15 = iVar10;
        if ((*(int *)(iVar13 + 0x118) != 0) && ((*(uint *)(iVar13 + 0x20) & 0x8000000) == 0)) {
          iVar12 = *(int *)puVar5;
          iVar15 = iVar10 + 1;
          if (iVar12 != 0) {
            (*(code *)**(undefined4 **)(iVar12 + 0x50))(iVar12,0,0,0,1,puVar7,0x496,puVar4 + 0x620);
          }
          iVar12 = iVar13 + 0x2b0;
          iVar11 = FUN_005eae28(iVar12,1,puVar2,puVar7,0x497);
          bVar1 = iVar11 == 0;
          if (!bVar1) {
            iVar11 = FUN_005eae28(iVar13 + 0x330,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,
                                  0x49a);
            bVar1 = iVar11 == 0;
            if (bVar1) {
              FUN_005eb2e0(iVar12,puVar2,puVar7,0x49c);
            }
          }
          iVar11 = *(int *)puVar5;
          if (iVar11 != 0) {
            (*(code *)**(undefined4 **)(iVar11 + 0x54))(iVar11,0,0,puVar7,0x49e);
          }
          if (!bVar1) {
            FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x4a4);
            if (((*(int *)(iVar13 + 0x118) != 0) && (iVar15 = iVar10, *(int *)(iVar13 + 0x1d0) == 0)
                ) && (*(int *)(iVar13 + 300) == 0)) {
              iVar11 = (*(code *)**(undefined4 **)(iVar13 + 0x194))
                                 (iVar13 + 400,*(int *)(iVar13 + 0xc) + -1,
                                  *(undefined4 *)(iVar13 + 0x188),*(undefined4 *)(iVar13 + 0xe8),
                                  *(undefined4 *)(iVar13 + 0x11c));
              *(undefined4 *)(iVar13 + 0x118) = 0;
              *(int *)(iVar13 + 0x4d8) = *(int *)(iVar13 + 0x188) + *(int *)(iVar13 + 0x11c);
              if (*(int *)(iVar13 + 0x1d0) != 0) {
                *(undefined4 *)(iVar13 + 0x1c) = 1;
              }
              if (iVar11 != 0) {
                bVar3 = true;
                *(int *)(puVar4 + 0x610) = iVar13;
              }
            }
            iVar10 = FUN_005eae28(puVar4 + 0x54c,0,puVar8,puVar7,0x4b0);
            FUN_005eb2e0(iVar13 + 0x330,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x4b2);
            FUN_005eb2e0(iVar12,puVar2,puVar7,0x4b5);
            if (iVar10 == 0) goto LAB_005eed4c;
          }
        }
        iVar10 = iVar15;
      }
      puVar2 = puVar4 + 0x54c;
      FUN_005eb2e0(puVar2,puVar8,puVar7,0x4bf);
      if (!bVar3) {
        FUN_005eb0f8(puVar2,puVar8,puVar7,0x4c6);
        puVar6 = PTR_s_Bink_instance_io_mutex_0071a420;
        iVar13 = *(int *)(puVar4 + 0x610);
        if ((iVar13 != 0) && ((*(uint *)(iVar13 + 0x20) & 0x8000000) == 0)) {
          iVar15 = iVar13 + 0x330;
          iVar12 = FUN_005eae28(iVar15,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x4ca);
          if (iVar12 != 0) {
            FUN_005eb2e0(puVar2,puVar8,puVar7,0x4cd);
            if (*(int *)(iVar13 + 0x118) == 0) {
              if ((((*(int *)(iVar13 + 0x1d0) == 0) && (*(int *)(iVar13 + 300) == 0)) &&
                  ((*(undefined4 **)(iVar13 + 0x1a8) == (undefined4 *)0x0 ||
                   (uVar9 = (*(code *)**(undefined4 **)(iVar13 + 0x1a8))(iVar13 + 400,0),
                   (uVar9 & 1) == 0)))) &&
                 ((*(int *)(iVar13 + 0x17c) == 0 &&
                  (iVar13 = (*(code *)**(undefined4 **)(iVar13 + 0x1a0))(iVar13 + 400), iVar13 != 0)
                  ))) {
                bVar3 = true;
              }
              FUN_005eb2e0(iVar15,puVar6,puVar7,0x4d3);
              goto joined_r0x005ef1f4;
            }
            FUN_005eb2e0(iVar15,puVar6,puVar7,0x4d7);
            goto LAB_005eed4c;
          }
        }
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x4dd);
      }
joined_r0x005ef1f4:
      if (iVar10 != 0) goto LAB_005eefd8;
      iVar13 = *(int *)(puVar4 + 0x610);
      FUN_005eb0f8(puVar4 + 0x54c,puVar8,puVar7,0x4e7);
      iVar15 = *(int *)(puVar4 + 0x610);
      if (((((iVar15 == 0) || (*(int *)(iVar15 + 0x1f8) == 0)) || (*(int *)(iVar15 + 0x1d0) != 0))
          || (*(int *)(iVar15 + 300) != 0)) ||
         ((*(undefined4 **)(iVar15 + 0x1a8) != (undefined4 *)0x0 &&
          (uVar9 = (*(code *)**(undefined4 **)(iVar15 + 0x1a8))(iVar15 + 400,0), (uVar9 & 1) != 0)))
         ) {
        iVar12 = 0x81;
      }
      else {
        iVar12 = 0x80;
        if (*(uint *)(iVar15 + 0x1fc) < *(uint *)(iVar15 + 0x1f8)) {
          iVar12 = (int)((((ulonglong)*(uint *)(iVar15 + 0x1fc) & 0x1ffffff) << 7) /
                        (ulonglong)*(uint *)(iVar15 + 0x1f8));
        }
      }
      uVar9 = 0x81;
      iVar11 = 0x81;
      for (iVar15 = *(int *)(puVar4 + 0x5ec); iVar15 != 0; iVar15 = *(int *)(iVar15 + 0xe4)) {
        if (((*(int *)(iVar15 + 0x1f8) == 0) || (*(int *)(iVar15 + 0x1d0) != 0)) ||
           ((*(int *)(iVar15 + 300) != 0 ||
            ((*(undefined4 **)(iVar15 + 0x1a8) != (undefined4 *)0x0 &&
             (uVar14 = (*(code *)**(undefined4 **)(iVar15 + 0x1a8))(iVar15 + 400,0),
             (uVar14 & 1) != 0)))))) {
          uVar14 = 0x81;
        }
        else {
          uVar14 = 0x80;
          if (*(uint *)(iVar15 + 0x1fc) < *(uint *)(iVar15 + 0x1f8)) {
            uVar14 = (((ulonglong)*(uint *)(iVar15 + 0x1fc) & 0x1ffffff) << 7) /
                     (ulonglong)*(uint *)(iVar15 + 0x1f8);
          }
        }
        if ((((int)uVar14 < (int)uVar9) && ((*(uint *)(iVar15 + 0x20) & 0x8000000) == 0)) &&
           (*(int *)(iVar15 + 0x118) == 0)) {
          uVar9 = uVar14;
          iVar13 = iVar15;
        }
        iVar11 = (int)uVar9;
      }
      if (((((iVar12 < 0x67) || (0x18 < iVar11)) && ((iVar12 < 0x7a || (0x3f < iVar11)))) &&
          (0xb < iVar11)) ||
         ((*(int *)(puVar4 + 0x610) = iVar13, puVar2 = PTR_s_Bink_instance_io_mutex_0071a420,
          iVar13 == 0 || ((*(uint *)(iVar13 + 0x20) & 0x8000000) != 0)))) {
LAB_005ef3d4:
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x515);
        goto LAB_005eefd8;
      }
      iVar15 = iVar13 + 0x330;
      iVar12 = FUN_005eae28(iVar15,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x502);
      if (iVar12 == 0) goto LAB_005ef3d4;
      FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x505);
      if (*(int *)(iVar13 + 0x118) != 0) {
        FUN_005eb2e0(iVar15,puVar2,puVar7,0x50e);
        goto LAB_005eed4c;
      }
      if ((((*(int *)(iVar13 + 0x1d0) == 0) && (*(int *)(iVar13 + 300) == 0)) &&
          ((*(undefined4 **)(iVar13 + 0x1a8) == (undefined4 *)0x0 ||
           (uVar9 = (*(code *)**(undefined4 **)(iVar13 + 0x1a8))(iVar13 + 400,0), (uVar9 & 1) == 0))
          )) && ((*(int *)(iVar13 + 0x17c) == 0 &&
                 (iVar13 = (*(code *)**(undefined4 **)(iVar13 + 0x1a0))(iVar13 + 400), iVar13 != 0))
                )) {
        bVar3 = true;
      }
      FUN_005eb2e0(iVar15,puVar2,puVar7,0x50a);
LAB_005eefd8:
    } while (bVar3 || iVar10 != 0);
    if (*(int *)(puVar4 + 0x474) != 0) {
      return 1;
    }
  } while( true );
}


// 0x05ef740 (0x1ac bytes)
int FUN_005ef740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((((param_1 == 0) || (*(int *)(param_1 + 0x1c) != 0)) || (*(int *)(param_1 + 0x108) != 0)) ||
      ((*(int *)(param_1 + 0x124) == 0 || (*(int *)(param_1 + 0x110) == 0)))) ||
     (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0xc) + 2U)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4bc) + -1;
    if (*(int *)(param_1 + 0x4bc) == 0) {
      if (*(int *)(param_1 + 0x474) == 0) {
        uVar2 = FUN_005f5090();
        *(undefined4 *)(param_1 + 0x474) = uVar2;
        *(undefined4 *)(param_1 + 0x4cc) = 0;
        *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        iVar1 = FUN_005f5090();
        iVar3 = (iVar1 - *(int *)(param_1 + 0x474)) -
                (int)(((((ulonglong)*(uint *)(param_1 + 0x460) -
                         (ulonglong)*(uint *)(param_1 + 0x478) & 0xffffffff) *
                       (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                       (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                      (ulonglong)*(uint *)(*(int *)(param_1 + 0x154) + 0x3c) >> 0x10);
        if ((-1 < iVar3) && (*(int *)(param_1 + 0x47c) < iVar3)) {
          if (*(int *)(param_1 + 0x124) == 0) {
            *(int *)(param_1 + 0x474) = iVar1;
            *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x460) - 1;
            *(undefined4 *)(param_1 + 0x4cc) = 0;
          }
          else {
            if (0x2d5 < iVar3) {
              *(undefined4 *)(param_1 + 0x4c0) = 1;
            }
            if (*(uint *)(param_1 + 0x4c8) < 4) {
              *(int *)(param_1 + 0x4c4) = *(int *)(param_1 + 0x4c4) + 1;
              *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) + 1;
              *(undefined4 *)(param_1 + 0x4bc) = 2;
              *(undefined4 *)(param_1 + 0x10c) = 1;
              return 1;
            }
            *(undefined4 *)(param_1 + 0x4c8) = 0;
          }
        }
      }
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x4bc) = 1;
    }
  }
  return iVar1;
}


// 0x05ef8f0 (0x1e4 bytes)
// strings: 00661cd8: 'Bink global IO mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cf0: 'Bink global sound mutex'

void FUN_005ef8f0(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_DAT_0071a40c;
  iVar4 = *(int *)(PTR_DAT_0071a40c + 0x548);
  if (iVar4 != 0) {
    FUN_005eb0f8(PTR_DAT_0071a40c + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcbd);
  }
  if (*(int *)(puVar2 + 0x540) == 0) {
    FUN_005ec1d4();
  }
  if ((iVar4 != 0) && (*(int *)(puVar2 + 0x548) != 0)) {
    FUN_005eb2e0(puVar2 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcc4);
  }
  iVar4 = *(int *)(puVar2 + 0x548);
  if (iVar4 != 0) {
    FUN_005eb0f8(puVar2 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcce);
  }
  if (*(int *)(puVar2 + 0x478) == 0) {
    FUN_005ec0e0();
  }
  if ((iVar4 != 0) && (*(int *)(puVar2 + 0x548) != 0)) {
    FUN_005eb2e0(puVar2 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcd5);
  }
  puVar3 = PTR_DAT_0071a4a0;
  uVar5 = 0;
LAB_005ef978:
  do {
    iVar4 = FUN_005fbef8(puVar3,1);
    while( true ) {
      if (iVar4 == 0) {
        if (*(int *)(puVar2 + 0x548) != 0) {
          FUN_005fc490(puVar2 + 0x54c);
          FUN_005fc490(puVar2 + 0x3f4);
          FUN_005fc490(puVar2 + 0x47c);
          *(undefined4 *)(puVar2 + 0x548) = 0;
        }
        FUN_005fbef8(puVar2 + 0x544,0xffffffffffffffff);
        return;
      }
      FUN_005fbef8(puVar3,0xffffffffffffffff);
      FUN_005fbfc8();
      bVar1 = uVar5 == 0x1ff;
      uVar5 = uVar5 + 1;
      if (bVar1) break;
      if (uVar5 < 0x400) goto LAB_005ef978;
      FUN_005fbf74(1);
      uVar5 = 0;
      iVar4 = FUN_005fbef8(puVar3,1);
    }
    FUN_005fbfac();
  } while( true );
}


// 0x05efad8 (0x3d4 bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cb8: 'Bink instance sound mutex' | 00661cf0: 'Bink global sound mutex'

undefined4 FUN_005efad8(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 == 0) || (uVar8 = *(uint *)(param_1 + 0x124), uVar8 == 0)) {
    return 0;
  }
  iVar9 = 0;
  uVar11 = 0;
  iVar12 = 0;
  bVar2 = true;
  uVar3 = 0;
LAB_005efb48:
  do {
    while (uVar10 = uVar3, iVar5 = *(int *)(param_1 + 0x154), uVar3 = uVar10,
          *(int *)(iVar5 + iVar12 + 0x174) == 0) {
LAB_005efc68:
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 0x180;
      if (uVar8 <= uVar11) goto LAB_005efc78;
    }
    if (bVar2) {
      iVar1 = *(int *)(iVar5 + 0x4c);
      if (iVar1 < 1) {
        if (-1 < iVar1) goto LAB_005efd4c;
        iVar9 = 1;
        bVar2 = false;
        FUN_005eb0f8(ZEXT48(PTR_DAT_0071a40c) + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x113c);
        iVar5 = *(int *)(param_1 + 0x154);
      }
      else if (iVar1 == 2) {
LAB_005efd4c:
        iVar9 = 2;
        bVar2 = false;
        FUN_005eb0f8(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x1141);
        iVar5 = *(int *)(param_1 + 0x154);
      }
    }
    iVar5 = (*(code *)**(undefined4 **)(iVar12 + iVar5 + 0x174))
                      (iVar12 + iVar5,
                       ((int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f ^ param_2) >> 0x1f);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        uVar8 = *(uint *)(param_1 + 0x124);
        uVar11 = uVar11 + 1;
        uVar10 = 1;
        *(undefined4 *)(param_1 + 0x110) = 1;
        *(undefined4 *)(param_1 + 0x4cc) = 0;
        *(undefined4 *)(param_1 + 0x474) = 0;
        iVar12 = iVar12 + 0x180;
        uVar3 = 1;
        if (uVar8 <= uVar11) goto LAB_005efc78;
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x124);
        uVar11 = uVar11 + 1;
        uVar10 = 1;
        iVar12 = iVar12 + 0x180;
        uVar3 = 1;
        if (uVar8 <= uVar11) goto LAB_005efc78;
      }
      goto LAB_005efb48;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      puVar7 = (undefined4 *)(iVar12 + *(int *)(param_1 + 0x154));
      *puVar7 = puVar7[3];
      iVar5 = iVar12 + *(int *)(param_1 + 0x154);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0xc);
      if ((*(int *)(param_1 + 0xc) == 1) && (*(int *)(param_1 + 0x4ac) != 1)) {
        uVar8 = *(uint *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      else {
        piVar4 = (int *)(iVar12 + *(int *)(param_1 + 0x154));
        iVar5 = *piVar4 - piVar4[6];
        if (iVar5 < 0) {
          iVar5 = iVar5 + piVar4[2];
        }
        if (iVar5 < piVar4[0x12]) {
          iVar5 = piVar4[0x12] - iVar5;
          uVar8 = piVar4[3];
          uVar6 = piVar4[6] - iVar5;
          piVar4[6] = uVar6;
          if (uVar6 < uVar8) {
            piVar4[6] = uVar6 + piVar4[2];
            memset(uVar8,0,iVar5 - (uVar8 - uVar6));
            memset(piVar4[6],0,uVar8 - uVar6);
            uVar8 = *(uint *)(param_1 + 0x124);
            *(undefined4 *)(param_1 + 0x110) = 0;
            goto LAB_005efc68;
          }
          memset(uVar6,0,iVar5);
        }
        uVar8 = *(uint *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      goto LAB_005efc68;
    }
    uVar8 = *(uint *)(param_1 + 0x124);
    uVar11 = uVar11 + 1;
    iVar12 = iVar12 + 0x180;
    if (uVar8 <= uVar11) {
LAB_005efc78:
      if (!bVar2) {
        if (iVar9 == 1) {
          FUN_005eb2e0(ZEXT48(PTR_DAT_0071a40c) + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                       PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x1168);
          return uVar10;
        }
        FUN_005eb2e0(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x116c);
      }
      return uVar10;
    }
  } while( true );
}


// 0x05efeb0 (0x324 bytes)
void FUN_005efeb0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x124);
  if ((((uVar6 == 0) || (*(int *)(param_1 + 0x14) == 0)) || (*(int *)(param_1 + 0x108) != 0)) ||
     (*(int *)(param_1 + 0x110) == 0)) goto LAB_005eff10;
  if (*(int *)(param_1 + 0x4bc) == 0) {
    if (*(int *)(param_1 + 0x474) == 0) {
      uVar4 = FUN_005f5090();
      *(undefined4 *)(param_1 + 0x474) = uVar4;
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      if (*(int *)(param_1 + 0x14) != 0) goto LAB_005effe0;
    }
    else {
LAB_005effe0:
      iVar3 = FUN_005f5090();
      iVar2 = (iVar3 - *(int *)(param_1 + 0x474)) -
              (int)(((((ulonglong)*(uint *)(param_1 + 0x460) - (ulonglong)*(uint *)(param_1 + 0x478)
                      & 0xffffffff) * (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                     (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                    (ulonglong)*(uint *)(*(int *)(param_1 + 0x154) + 0x3c) >> 0x10);
      if ((-1 < iVar2) && (*(int *)(param_1 + 0x47c) < iVar2)) {
        if (*(int *)(param_1 + 0x124) == 0) {
          *(int *)(param_1 + 0x474) = iVar3;
          *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x460) - 1;
          *(undefined4 *)(param_1 + 0x4cc) = 0;
        }
        else {
          if (0x2d5 < iVar2) {
            *(undefined4 *)(param_1 + 0x4c0) = 1;
          }
          if (*(uint *)(param_1 + 0x4c8) < 4) {
            *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) + 1;
            *(undefined4 *)(param_1 + 0x4bc) = 2;
            *(undefined4 *)(param_1 + 0x10c) = 1;
            *(int *)(param_1 + 0x4c4) = *(int *)(param_1 + 0x4c4) + 1;
            goto LAB_005f0064;
          }
          *(undefined4 *)(param_1 + 0x4c8) = 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4bc) = 1;
  }
LAB_005f0064:
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    uVar6 = *(uint *)(param_1 + 0x124);
    if (uVar6 == 0) goto LAB_005eff10;
    bVar1 = false;
    uVar5 = 0;
    iVar3 = 0;
    do {
      iVar2 = iVar3 + *(int *)(param_1 + 0x154);
      if (*(int *)(iVar2 + 0x50) != 0) {
        *(undefined4 *)(iVar2 + 0x50) = 0;
        if ((*(uint *)(param_1 + 0xc) < 2) ||
           (*(int *)(iVar3 + *(int *)(param_1 + 0x154) + 0x40) < (int)*(uint *)(param_1 + 0xc))) {
          uVar6 = *(uint *)(param_1 + 0x124);
        }
        else {
          bVar1 = true;
          uVar6 = *(uint *)(param_1 + 0x124);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x180;
    } while (uVar5 < uVar6);
    if (!bVar1) goto LAB_005eff10;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
  FUN_005efad8(param_1,0);
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  FUN_005efad8(param_1,1);
  uVar6 = *(uint *)(param_1 + 0x124);
LAB_005eff10:
  *(undefined4 *)(param_1 + 0x1dc) = 1;
  if ((uVar6 != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  iVar2 = FUN_005f5090();
  iVar3 = *(int *)(param_1 + 0x470);
  if (iVar3 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar2 - iVar3);
  }
  iVar3 = 1;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    iVar3 = *(uint *)(param_1 + 0xc) + 1;
  }
  FUN_005eda28(param_1,iVar3);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}


// 0x05f01d8 (0x198 bytes)
int FUN_005f01d8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x4ac) != *(int *)(param_1 + 0xc)) {
      if (*(int *)(param_1 + 0x1d0) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
        return 0;
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        iVar1 = *(int *)(param_1 + 0x470);
        if (iVar1 - 1U < 0xfffffffe) {
          *(undefined4 *)(param_1 + 0x470) = 0;
          *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (param_2 - iVar1);
        }
        if (*(int *)(param_1 + 0x4b8) != 0) {
          *(undefined4 *)(param_1 + 0x4b8) = 0;
          if (*(int *)(param_1 + 0x110) != 0) {
            FUN_005efad8(param_1,0);
            FUN_005efad8(param_1,1);
          }
          *(undefined4 *)(param_1 + 0x4cc) = 0;
          *(undefined4 *)(param_1 + 0x474) = 0;
        }
        if (*(int *)(param_1 + 0x108) != 0) {
          *(undefined4 *)(param_1 + 0x4cc) = 0;
          *(undefined4 *)(param_1 + 0x474) = 0;
        }
        *(undefined4 *)(param_1 + 0x4bc) = 0;
        *(undefined4 *)(param_1 + 0x1dc) = 1;
        if ((((*(int *)(param_1 + 0x114) != 0) && (*(int *)(param_1 + 0xd0) != 0)) &&
            (*(int *)(param_1 + 0x4dc) != 0x6132424b)) &&
           ((*(int *)(param_1 + 0x10c) == 0 && (*(int *)(param_1 + 0xd8) != 0)))) {
          memset(*(int *)(param_1 + 0xd8),0,*(undefined4 *)(param_1 + 0xf4));
        }
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0x128) = 0;
        return param_1;
      }
    }
    param_1 = 0;
  }
  return param_1;
}


// 0x05f0370 (0x728 bytes)
// strings: 00661e78: 'Decompress' | 00661e40: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\/binkdoframe.inl' | 00661e88: 'Decompress audio' | 00661ea0: 'Decompress video'

undefined4 FUN_005f0370(uint param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar5;
  ulonglong uVar9;
  uint uVar10;
  int *piVar12;
  ulonglong uVar11;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int *piVar21;
  uint local_415c;
  GPiece<16521> auStack_4149;
  uint local_c0;
  int local_bc;
  int local_b8;
  undefined1 *local_b4;
  ulonglong local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  
  if ((param_2 & 0x100) != 0) {
    uVar8 = FUN_005f5090();
    param_1 = FUN_005f01d8(param_1,uVar8);
    if (param_1 == 0) {
      return 0;
    }
  }
  local_b0 = (ulonglong)param_1;
  local_b8 = *(int *)(param_1 + 0xd0);
  piVar1 = *(int **)(param_1 + 0xec);
  piVar2 = *(int **)(param_1 + 0xe8);
  iVar6 = *(int *)(param_1 + 0x11c);
  if (((*(int *)(param_1 + 300) != 0) || (FUN_005eb450(local_b0), *(int *)(param_1 + 0x1c) != 0)) ||
     (*(int *)(param_1 + 300) != 0)) {
    return 0;
  }
  iVar7 = *(int *)PTR_DAT_0071a414;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x50))
              (iVar7,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x1b9,
               ZEXT48(PTR_DAT_0071a40c) + 0x624);
  }
  local_bc = FUN_005f5090();
  iVar7 = *(int *)PTR_DAT_0071a414;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x50))
              (iVar7,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x1c2,
               ZEXT48(PTR_DAT_0071a40c) + 0x628);
  }
  iVar7 = *(int *)(param_1 + 0x38);
  uVar4 = (param_2 << 0x20) >> 0x29 & 1;
  piVar14 = (int *)((int)piVar2 + iVar6);
  piVar21 = piVar2;
  if (0 < iVar7) {
    local_b4 = auStack_4149;
    local_98 = ZEXT48(&stack0x00000000) - 0x4160;
    local_a0 = ZEXT48(&stack0x00000000) - 0x415c;
    iVar6 = 0;
    piVar12 = piVar14;
    while (piVar2 <= piVar12) {
      iVar3 = *piVar21;
      iVar20 = iVar3;
      if ((uVar4 != 0) && (0 < (int)*(uint *)(param_1 + 0x124))) {
        uVar15 = (ulonglong)*(uint *)(param_1 + 0x124);
        uVar10 = 0;
        piVar12 = piVar1;
        if (*piVar1 == iVar6) {
          uVar10 = 0;
        }
        else {
          do {
            piVar12 = piVar12 + 1;
            uVar10 = uVar10 + 1;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_005f05e8;
          } while (*piVar12 != iVar6);
          if (uVar10 == 0xffffffff) goto LAB_005f05e8;
        }
        iVar20 = 0;
        if (iVar3 != 0) {
          piVar12 = piVar21 + 2;
          uVar15 = (ulonglong)(uint)piVar21[1] & 0xfffffff0;
          if ((int)uVar15 != 0) {
            puVar17 = (uint *)(uVar10 * 0x200 + (uVar10 & 0x1ffffff) * -0x80 +
                              *(int *)(param_1 + 0x154));
            local_c0 = puVar17[5];
            lVar13 = (ulonglong)*puVar17 - (ulonglong)puVar17[6];
            if ((int)lVar13 < 0) {
              lVar13 = lVar13 + (ulonglong)puVar17[2];
            }
            do {
              uVar10 = local_c0;
              if (((piVar14 < piVar12) || (piVar12 < piVar2)) ||
                 (piVar14 < (int *)((int)piVar12 + iVar3))) break;
              uVar18 = (ulonglong)puVar17[2] - lVar13 & 0xfffffff0;
              if (0x10 < uVar18) {
                uVar18 = uVar18 - 0x10;
              }
              uVar5 = FUN_005f538c(local_c0);
              local_415c = (uint)uVar5;
              uVar11 = (ulonglong)*puVar17;
              uVar19 = uVar18;
              if ((puVar17[4] - uVar11 & 0xffffffff) < (uVar18 & 0xffffffff)) {
                uVar19 = puVar17[4] - uVar11;
              }
              uVar9 = uVar11;
              uVar16 = uVar11;
              if (((uVar19 & 0xffffffff) < (uVar5 & 0x7fffffff) << 1) &&
                 (uVar9 = ZEXT48(local_b4) & 0xfffffff0, uVar16 = uVar9,
                 (uVar5 & 0xffffffff) <= (uVar19 & 0xffffffff))) {
                uVar16 = uVar11;
              }
              FUN_005f5398(uVar10,uVar16,local_a0 & 0xffffffff,piVar12,local_98 & 0xffffffff,
                           (int *)((int)piVar12 + iVar3),uVar9,0);
              uVar11 = uVar5 & 0xffffffff;
              if ((uVar15 & 0xffffffff) < (uVar5 & 0xffffffff)) {
                local_415c = (uint)uVar15;
                uVar11 = uVar15;
              }
              uVar15 = uVar15 - uVar11;
              if ((uVar18 & 0xffffffff) < (uVar11 & 0xffffffff)) {
                local_415c = (uint)uVar18;
                uVar11 = uVar18;
              }
              uVar10 = *puVar17;
              if ((uint)uVar16 == uVar10) {
                *puVar17 = uVar10 + (int)uVar11;
              }
              else if ((uVar19 & 0xffffffff) < (uVar11 & 0xffffffff)) {
                if ((int)uVar19 != 0) {
                  FUN_005c6094(uVar10,uVar16,uVar19 & 0xffffffff);
                  uVar16 = uVar16 + uVar19 & 0xffffffff;
                  uVar11 = local_415c - uVar19;
                  local_415c = (uint)uVar11;
                }
                FUN_005c6094(puVar17[3],uVar16,uVar11 & 0xffffffff);
                *puVar17 = puVar17[3] + local_415c;
              }
              else {
                FUN_005c6094(uVar10,uVar16,uVar11 & 0xffffffff);
                *puVar17 = *puVar17 + local_415c;
              }
            } while ((int)uVar15 != 0);
          }
          iVar7 = *(int *)(param_1 + 0x38);
          iVar20 = iVar3;
        }
      }
LAB_005f05e8:
      iVar6 = iVar6 + 1;
      piVar21 = (int *)((int)(piVar21 + 1) + iVar20);
      if ((iVar7 <= iVar6) || (piVar12 = piVar21, piVar14 < piVar21)) break;
    }
  }
  iVar6 = *(int *)PTR_DAT_0071a414;
  if (iVar6 != 0) {
    (*(code *)**(undefined4 **)(iVar6 + 0x54))
              (iVar6,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x1d6);
  }
  iVar6 = FUN_005f5090();
  if ((*(int *)(param_1 + 0x114) == 0) || (local_b8 == 0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x20);
    if ((param_2 & 1) == 0) {
      uVar15 = uVar15 | 0x200;
    }
    if ((param_2 & 2) == 0) {
      uVar15 = ((uVar15 << 0x20) >> 0x35) << 0x15 | uVar15 & 0xfffff | 0x20000;
    }
    iVar7 = *(int *)PTR_DAT_0071a414;
    if (iVar7 != 0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x50))
                (iVar7,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x204,
                 ZEXT48(PTR_DAT_0071a40c) + 0x62c);
    }
    if ((piVar21 <= piVar14) && (piVar2 <= piVar21)) {
      uVar15 = FUN_005fb780(local_b8,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xf0)
                            ,piVar21,*(undefined4 *)(param_1 + 0x120),piVar14,param_1 + 0x130,uVar15
                           );
    }
    iVar7 = *(int *)PTR_DAT_0071a414;
    if (iVar7 == 0) goto LAB_005f0778;
    (*(code *)**(undefined4 **)(iVar7 + 0x54))
              (iVar7,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x22c);
  }
  iVar7 = *(int *)PTR_DAT_0071a414;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x54))
              (iVar7,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a4a4,0x233);
  }
LAB_005f0778:
  *(int *)(param_1 + 0x494) = (iVar6 - local_bc) + *(int *)(param_1 + 0x494);
  iVar7 = FUN_005f5090();
  *(int *)(param_1 + 0x490) = (iVar7 - iVar6) + *(int *)(param_1 + 0x490);
  if ((ulonglong)*(uint *)(param_1 + 0x128) < (uVar15 & 0xffffffff)) {
    *(int *)(param_1 + 0x128) = (int)uVar15;
  }
  if (uVar4 != 0) {
    uVar8 = FUN_005ee120(local_b0,iVar7);
    return uVar8;
  }
  return 1;
}


// 0x05f0a98 (0x8 bytes)
void FUN_005f0a98(undefined8 param_1)

{
  FUN_005f0370(param_1,0x303);
  return;
}


// 0x05f0aa0 (0x494 bytes)
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cb8: 'Bink instance sound mutex' | 00661c98: 'Bink instance priority io mutex'

void FUN_005f0aa0(int param_1,ulonglong param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar12;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong uVar13;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    return;
  }
  if ((int)param_2 == 0) {
    param_2 = 1;
  }
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 1;
  if ((ulonglong)*(uint *)(param_1 + 8) < (param_2 & 0xffffffff)) {
    param_2 = (ulonglong)*(uint *)(param_1 + 8);
  }
  uVar11 = (uint)param_2;
  uVar7 = param_2;
  if (((param_3 & 2) == 0) && (*(int *)(param_1 + 0x124) != 0)) {
    uVar9 = (ulonglong)((*(uint *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) - 1) /
            (ulonglong)*(uint *)(param_1 + 0x18);
    uVar7 = 1;
    if (uVar9 < (param_2 & 0xffffffff)) {
      uVar7 = param_2 - uVar9;
    }
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 == uVar11) goto LAB_005f0c70;
  if ((param_3 & 3) == 3) {
    FUN_005eda28(param_1,param_2 & 0xffffffff);
    goto LAB_005f0c70;
  }
  uVar9 = param_2;
  if ((param_3 & 1) == 0) {
    lVar8 = (ulonglong)*(uint *)(param_1 + 0x158) + (param_2 & 0x3fffffff) * 4;
    if ((*(uint *)((int)lVar8 + -4) & 1) == 0) {
      uVar9 = param_2 - 2;
      if ((0 < (int)uVar9) &&
         ((*(uint *)((int)((uVar9 & 0xffffffff) << 2) + *(uint *)(param_1 + 0x158)) & 1) == 0)) {
        lVar8 = lVar8 + -0xc;
        uVar13 = uVar9 & 0xffffffff;
        if ((int)(uVar11 - 3) < 0) {
          uVar13 = 1;
        }
        do {
          puVar4 = (uint *)lVar8;
          uVar9 = uVar9 - 1;
          lVar8 = lVar8 + -4;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) break;
        } while ((*puVar4 & 1) == 0);
      }
      uVar9 = uVar9 + 1;
    }
  }
  iVar10 = 0;
  uVar13 = uVar9;
  if ((uVar7 & 0xffffffff) < (uVar9 & 0xffffffff)) {
    uVar13 = uVar7;
    if (((param_2 & 0xffffffff) < (ulonglong)uVar2) || ((ulonglong)uVar2 < (uVar7 & 0xffffffff))) {
      iVar10 = *(int *)(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x114) = 0;
      goto LAB_005f0e44;
    }
LAB_005f0ce8:
    if ((ulonglong)uVar2 < (uVar13 & 0xffffffff)) goto LAB_005f0cf0;
  }
  else {
LAB_005f0e44:
    if ((ulonglong)uVar2 <= (param_2 & 0xffffffff)) goto LAB_005f0ce8;
LAB_005f0cf0:
    FUN_005eda28(param_1,uVar13 & 0xffffffff);
    if ((uint)uVar13 == uVar11) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
      if (*(int *)(param_1 + 0x110) == 0) {
        return;
      }
      FUN_005efad8(param_1,0);
      FUN_005efad8(param_1,1);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x124) != 0) &&
     ((iVar3 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar3 < 1 || (iVar3 == 2)))) {
    FUN_005eb0f8(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x287);
  }
  bVar1 = *(int *)(param_1 + 0x110) == 0;
  bVar12 = bVar1 << 1;
  if (!bVar1) {
    FUN_005efad8(param_1,0);
  }
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x4ac)) {
    FUN_005f0370(param_1,0x303);
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  bVar1 = iVar10 == 0;
  FUN_005efeb0(param_1);
  puVar6 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
  puVar5 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  if (*(uint *)(param_1 + 0xc) != uVar11) {
    do {
      if (*(int *)(param_1 + 0x118) != 0) {
        FUN_005eb0f8(param_1 + 0x2b0,puVar6,puVar5,0xc87);
        if (*(int *)(param_1 + 0x118) != 0) {
          (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1 + 400);
        }
        FUN_005eb2e0(param_1 + 0x2b0,puVar6,puVar5,0xc8c);
      }
      if ((!bVar1) && (*(int *)(param_1 + 0xc) == (int)uVar9)) {
        bVar1 = true;
        *(undefined4 *)(param_1 + 0x114) = 1;
      }
      FUN_005f0370(param_1,0x303);
      *(undefined4 *)(param_1 + 0x10c) = 1;
      FUN_005efeb0(param_1);
    } while (*(uint *)(param_1 + 0xc) != uVar11);
  }
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x114) = 1;
  }
  if ((*(int *)(param_1 + 0x124) != 0) &&
     ((iVar10 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar10 < 1 || (iVar10 == 2)))) {
    FUN_005eb2e0(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x28d);
  }
  if (!(bool)(bVar12 >> 1 & 1)) {
    FUN_005efad8(param_1,1);
  }
LAB_005f0c70:
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}


// 0x05f0f38 (0x260 bytes)
uint * FUN_005f0f38(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_c0 [2];
  GPiece<136> auStack_b8;
  
  FUN_005fd6d0(auStack_b8,8);
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 0x38))) {
    uVar8 = 0;
    iVar3 = (int)(((ulonglong)param_2 & 0x3fffffff) << 2);
    uVar7 = *(uint *)(iVar3 + *(int *)(param_1 + 0x174));
    if (((int)uVar7 < 0) || (uVar8 = 1, (uVar7 & 0x10000000) != 0)) {
      uVar4 = FUN_005f533c(uVar7 & 0xffff,(uVar7 >> 0x1d & 1) + 1,uVar8);
      FUN_005fd700(auStack_b8,local_c0,uVar4);
      iVar2 = *(int *)(param_1 + 0x468);
      iVar5 = FUN_005fd778(auStack_b8);
      *(int *)(param_1 + 0x468) = iVar5 + iVar2 + 0x1c;
      puVar6 = (uint *)FUN_005fd790(auStack_b8,0x1c);
      uVar9 = 0;
      uVar7 = *(uint *)(iVar3 + *(int *)(param_1 + 0x174));
      if (-1 < (int)uVar7) {
        uVar9 = uVar7 >> 0x1c & 1;
      }
      uVar7 = FUN_005f5cd0(local_c0[0],uVar7 & 0xffff,(uVar7 >> 0x1d & 1) + 1,uVar9);
      if (uVar7 != 0) {
        puVar6[4] = param_1;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[5] = uVar7;
        uVar1 = *(ushort *)(iVar3 + *(int *)(param_1 + 0x174) + 2);
        puVar6[1] = 0x10;
        *puVar6 = (uint)uVar1;
        puVar6[2] = (*(uint *)(iVar3 + *(int *)(param_1 + 0x174)) >> 0x1d & 1) + 1;
        uVar9 = (*(int *)(iVar3 + *(int *)(param_1 + 0x170)) + 3U & 0xfffffffc) + 0x2000;
        puVar6[3] = uVar9;
        uVar7 = FUN_005f538c(uVar7);
        puVar6[6] = param_2;
        puVar6[3] = uVar9 + (uVar7 >> 4);
        return puVar6;
      }
      FUN_005f516c(puVar6);
    }
  }
  return (uint *)0x0;
}


// 0x05f1198 (0x5ec bytes)
uint FUN_005f1198(uint *param_1,ulonglong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  int local_1f0 [8];
  uint auStack_1d0 [32];
  uint auStack_150 [32];
  uint local_d0 [32];
  
  if (((param_1 == (uint *)0x0) || ((param_2 & 0x4000000) != 0)) ||
     (((param_2 & 0x80000) == 0 && (((param_1[8] & 0x80000) == 0 && (param_1[0x12f] == 2)))))) {
    return 0;
  }
  if (param_1[0x35] == 0) {
    uVar9 = param_1[0x3d];
    uVar2 = param_1[0x11a];
    param_1[0xd] = 100;
    param_1[0x4a] = 100;
    iVar11 = FUN_005fd778(0);
    param_1[0x11a] = iVar11 + uVar9 + 0x10 + uVar2;
    uVar9 = FUN_005fd790(0,uVar9 + 0x10);
    param_1[0x35] = uVar9;
    param_1[0x36] = uVar9;
    *(undefined1 *)(param_1[0x3d] + uVar9) = 0;
  }
  if (param_1[0x38] == 0) {
    param_1[0xf] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = *param_1;
    param_1[0x13] = param_1[1];
    param_1[0x10] = 0;
    return 1;
  }
  uVar9 = param_1[0xf];
  if (uVar9 == 0xffffffff) {
    puVar10 = param_1 + 0x10;
    local_d0[2] = *param_1 + 0xf & 0xfffffff0;
    local_d0[3] = param_1[1] + 0xf & 0xfffffff0;
    local_d0[0] = 0;
    local_d0[1] = 0;
    uVar9 = FUN_005ea708(puVar10,param_1[0x38],param_1[0x3c],local_d0);
    param_1[0xf] = uVar9;
    if ((param_2 & 0x8000000) == 0) {
      if (uVar9 == 0) {
        uVar9 = param_1[0xf];
      }
      else {
        local_d0[0] = param_1[0x10];
        local_d0[1] = param_1[0x11];
        local_d0[2] = param_1[0x12];
        local_d0[3] = param_1[0x13];
        local_1f0[0] = FUN_005ea9b0(auStack_1d0,auStack_150,local_d0,param_1[0x38],param_1[0x3c]);
        while (uVar9 = param_1[0xf], 0 < (int)uVar9) {
          uVar16 = (ulonglong)uVar9;
          iVar12 = 0;
          iVar15 = -1;
          iVar11 = 0;
          piVar14 = local_1f0;
          do {
            if (iVar11 < *piVar14) {
              iVar11 = *piVar14;
              iVar15 = iVar12;
            }
            iVar12 = iVar12 + 1;
            uVar16 = uVar16 - 1;
            piVar14 = piVar14 + 1;
          } while (uVar16 != 0);
          if (iVar15 == -1) {
            bVar1 = 0 < (int)uVar9;
            goto LAB_005f138c;
          }
          uVar2 = auStack_150[iVar15 * 4 + 3];
          uVar3 = auStack_1d0[iVar15 * 4 + 1];
          uVar4 = auStack_1d0[iVar15 * 4 + 2];
          uVar8 = auStack_1d0[iVar15 * 4 + 3];
          uVar7 = auStack_150[iVar15 * 4];
          uVar5 = auStack_150[iVar15 * 4 + 1];
          uVar6 = auStack_150[iVar15 * 4 + 2];
          local_d0[iVar15 * 4] = auStack_1d0[iVar15 * 4];
          local_d0[iVar15 * 4 + 1] = uVar3;
          local_d0[iVar15 * 4 + 2] = uVar4;
          local_d0[iVar15 * 4 + 3] = uVar8;
          local_d0[uVar9 * 4 + 3] = uVar2;
          local_d0[uVar9 * 4] = uVar7;
          local_d0[uVar9 * 4 + 1] = uVar5;
          local_d0[uVar9 * 4 + 2] = uVar6;
          param_1[0xf] = uVar9 + 1;
          if (uVar9 + 1 == 8) {
            bVar1 = true;
            uVar9 = 8;
            goto LAB_005f138c;
          }
          iVar11 = FUN_005ea9b0(auStack_1d0 + iVar15 * 4,auStack_150 + iVar15 * 4,
                                local_d0 + iVar15 * 4,param_1[0x38],param_1[0x3c]);
          uVar9 = param_1[0x3c];
          iVar12 = param_1[0xf] - 1;
          local_1f0[iVar15] = iVar11;
          iVar11 = FUN_005ea9b0(auStack_1d0 + iVar12 * 4,auStack_150 + iVar12 * 4,
                                local_d0 + iVar12 * 4,param_1[0x38],uVar9);
          local_1f0[iVar12] = iVar11;
        }
      }
    }
    else {
      uVar9 = param_1[0xf];
      bVar1 = 0 < (int)uVar9;
      if (bVar1) {
LAB_005f138c:
        uVar2 = param_1[0x12a];
        uVar3 = *param_1;
        iVar11 = 0;
        uVar4 = param_1[1];
        while( true ) {
          if (bVar1) {
            uVar16 = (ulonglong)uVar9;
            uVar8 = 0x7fff0000;
            iVar13 = 0;
            iVar15 = 0;
            iVar12 = 0;
            do {
              uVar7 = *(int *)((int)local_d0 + iVar12 + 4) * 0x10000 +
                      *(int *)((int)local_d0 + iVar12);
              if (uVar7 < uVar8) {
                iVar15 = iVar13;
                uVar8 = uVar7;
              }
              iVar13 = iVar13 + 1;
              uVar16 = uVar16 - 1;
              iVar12 = iVar12 + 0x10;
            } while (uVar16 != 0);
          }
          else {
            iVar15 = 0;
          }
          uVar8 = uVar2 & 0x70000000;
          if (uVar8 == 0x30000000) {
            iVar12 = iVar15 * 0x10;
            uVar8 = local_d0[iVar15 * 4 + 2];
            local_d0[iVar15 * 4] = local_d0[iVar15 * 4] << 1;
            local_d0[iVar15 * 4 + 2] = uVar8 << 1;
          }
          else if (uVar8 < 0x30000001) {
            if ((uVar8 == 0x10000000) || (iVar12 = iVar15 << 4, uVar8 == 0x20000000)) {
              iVar12 = iVar15 * 0x10;
              local_d0[iVar15 * 4 + 1] = local_d0[iVar15 * 4 + 1] << 1;
              local_d0[iVar15 * 4 + 3] = local_d0[iVar15 * 4 + 3] << 1;
            }
          }
          else if ((uVar8 == 0x40000000) || (iVar12 = iVar15 << 4, uVar8 == 0x50000000)) {
            iVar12 = iVar15 * 0x10;
            uVar8 = local_d0[iVar15 * 4 + 2];
            uVar7 = local_d0[iVar15 * 4 + 1];
            uVar5 = local_d0[iVar15 * 4 + 3];
            local_d0[iVar15 * 4] = local_d0[iVar15 * 4] << 1;
            local_d0[iVar15 * 4 + 3] = uVar5 << 1;
            local_d0[iVar15 * 4 + 2] = uVar8 << 1;
            local_d0[iVar15 * 4 + 1] = uVar7 << 1;
          }
          iVar15 = *(int *)((int)local_d0 + iVar12 + 8);
          uVar8 = iVar15 + *(int *)((int)local_d0 + iVar12);
          if (uVar3 < uVar8) {
            *(uint *)((int)local_d0 + iVar12 + 8) = iVar15 - (uVar8 - uVar3);
          }
          iVar15 = *(int *)((int)local_d0 + iVar12 + 0xc);
          uVar8 = iVar15 + *(int *)((int)local_d0 + iVar12 + 4);
          if (uVar4 < uVar8) {
            *(uint *)((int)local_d0 + iVar12 + 0xc) = iVar15 - (uVar8 - uVar4);
          }
          iVar11 = iVar11 + 1;
          *puVar10 = *(uint *)((int)local_d0 + iVar12);
          puVar10[1] = *(uint *)((int)local_d0 + iVar12 + 4);
          puVar10[2] = *(uint *)((int)local_d0 + iVar12 + 8);
          puVar10[3] = *(uint *)((int)local_d0 + iVar12 + 0xc);
          *(undefined4 *)((int)local_d0 + iVar12 + 4) = 0x7fffffff;
          *(undefined4 *)((int)local_d0 + iVar12) = 0;
          puVar10 = puVar10 + 4;
          if ((int)uVar9 <= iVar11) break;
          bVar1 = 0 < (int)uVar9;
        }
      }
    }
  }
  return uVar9;
}


// 0x05f1788 (0x21f8 bytes)
// strings: 00661cd8: 'Bink global IO mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661eb8: 'Not a Bink file.' | 00661ed0: "The file doesn't contain any compressed frames yet." | 005f27dc: 'Vi80V`H,|\t' (raw) | 00661f08: 'The file has a corrupt header.' | 00661fa0: 'Error opening file.' | 00661f60: 'Error reading Bink header.' | 00661f28: 'Out of memory.' | 00661f38: 'This file has bad frame size data.' | 00661c98: 'Bink instance priority io mutex' | 00661cf0: 'Bink global sound mutex' | 00661cb8: 'Bink instance sound mutex' | 00661d08: 'Bink list mutex' | 00661d30: 'Bink Snd' | 00661c08: 'Bink instance io mutex' | 00661e08: 'Bink IO'

/* WARNING: Type propagation algorithm not settling */

void * FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  void *__dest;
  void *pvVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  char *pcVar31;
  longlong lVar30;
  char *pcVar32;
  bool bVar33;
  uint uVar35;
  longlong lVar34;
  undefined4 *puVar36;
  char *pcVar37;
  char *pcVar38;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong uVar39;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  uint uVar40;
  ulonglong unaff_r20;
  uint uVar41;
  ulonglong unaff_r21;
  ulonglong uVar42;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar43;
  ulonglong unaff_r27;
  int *piVar44;
  ulonglong unaff_r28;
  int *piVar45;
  int iVar46;
  ulonglong unaff_r29;
  uint uVar47;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar48;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  longlong lVar49;
  ulonglong uVar50;
  
  uVar43 = ZEXT48(&stack0x00000000);
  uVar16 = ZEXT48(&TOC_BASE);
  lVar49 = uVar43 - 0x890;
  puVar12 = (ulonglong *)lVar49;
  *puVar12 = uVar43;
  puVar12[0x107] = unaff_r21;
  uVar42 = uVar43 - 0x6f8;
  puVar12[0x10b] = unaff_r25;
  puVar12[0x10f] = unaff_r29;
  puVar12[0x110] = unaff_r30;
  puVar12[0x102] = unaff_r16;
  puVar12[0x105] = unaff_r19;
  puVar12[0x108] = unaff_r22;
  puVar12[0x100] = unaff_r14;
  puVar12[0x101] = unaff_r15;
  puVar12[0x103] = unaff_r17;
  puVar12[0x104] = unaff_r18;
  puVar12[0x106] = unaff_r20;
  puVar12[0x109] = unaff_r23;
  puVar12[0x10a] = unaff_r24;
  puVar12[0x10c] = unaff_r26;
  puVar12[0x10d] = unaff_r27;
  puVar12[0x10e] = unaff_r28;
  puVar12[0x111] = unaff_r31;
  uVar40 = 1;
  uVar39 = uVar43 - 0x820;
  *(uint *)(puVar12 + 0x113) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar12[0x114] = in_LR;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  FUN_005fd6d0(uVar42,0x20);
  if ((param_3 & 0x4000) != 0) {
    uVar40 = *(uint *)(param_2 + 3);
    uVar39 = (ulonglong)*(uint *)((int)param_2 + 0x1c);
  }
  uVar41 = (uint)param_3 & 0x4000000;
  memset(uVar43 - 0x5b8,0,0x4f0);
  uVar17 = FUN_005f5090();
  pcVar32 = PTR_DAT_0071a40c;
  bVar1 = (param_3 & 0x4000000) == 0;
  *(undefined4 *)((int)puVar12 + 0x774) = uVar17;
  *pcVar32 = 0;
  if (bVar1) {
    if (((param_3 & 0x2000000) == 0) ||
       (puVar36 = *(undefined4 **)(param_2 + 4), *(undefined4 **)(param_2 + 4) == (undefined4 *)0x0)
       ) {
      puVar36 = (undefined4 *)PTR_PTR_0071a4d0;
    }
    uVar16 = uVar43 - 0x428 & 0xffffffff;
    memset(uVar16,0,0x120);
    puVar14 = PTR_PTR_0071a4dc;
    puVar13 = PTR_PTR_0071a4d8;
    *(undefined **)((int)puVar12 + 0x49c) = PTR_PTR_0071a4d4;
    *(undefined **)((int)puVar12 + 0x4a4) = puVar13;
    *(undefined **)(puVar12 + 0x94) = puVar14;
    FUN_005ec3c8();
    if ((param_3 & 0x20) != 0) {
      puVar12[0x73] = *param_2;
    }
    puVar14 = PTR_s_Bink_global_IO_mutex_0071a43c;
    puVar13 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    FUN_005eb0f8(pcVar32 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x6e7);
    pcVar3 = (code *)*puVar36;
    puVar12[5] = ZEXT48(&TOC_BASE);
    iVar18 = (*pcVar3)(uVar16,param_1,param_3 & 0xffffffff);
    uVar16 = puVar12[5];
    if (iVar18 == 0) {
      FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6f5);
      if (*pcVar32 != '\0') {
        return (void *)0x0;
      }
      pcVar37 = *(char **)((int)uVar16 + -0x7e5c);
      lVar49 = 0xfe;
      *pcVar32 = 0x45;
      do {
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
        pcVar32 = pcVar32 + 1;
        if (cVar2 == '\0') {
          return (void *)0x0;
        }
        *pcVar32 = *pcVar37;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      *pcVar32 = '\0';
      return (void *)0x0;
    }
    FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6fe);
    pcVar3 = (code *)**(undefined4 **)(puVar12 + 0x8d);
    puVar12[5] = uVar16;
    (*pcVar3)(uVar43 - 0x428,0,uVar43 - 0x81c,0x2c);
    uVar16 = puVar12[5];
  }
  iVar18 = *(int *)((int)puVar12 + 0x74);
  iVar19 = (int)uVar16;
  pcVar37 = pcVar32;
  if (((((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) || (iVar18 == 0x684b4942)) ||
      (iVar18 == 0x694b4942)) && (*(int *)(puVar12 + 0x95) == 0)) {
    uVar4 = *(uint *)((int)puVar12 + 0x7c);
    if (uVar4 == 0) {
      pcVar31 = *(char **)(iVar19 + -0x7e70);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
    else {
      uVar26 = *(uint *)((int)puVar12 + 0x84);
      if ((uVar4 <= uVar26) && (uVar26 < 0xf4241)) {
        uVar47 = *(uint *)(puVar12 + 0xf);
        if ((((*(uint *)(puVar12 + 0x10) <= uVar47) &&
             ((uVar35 = *(uint *)((int)puVar12 + 0x9c), uVar35 < 0x101 &&
              (uVar26 * (uVar35 * 4 + 4) <= uVar47)))) &&
            (uVar29 = *(uint *)(puVar12 + 0x11), uVar29 < 0x8000)) &&
           (uVar5 = *(uint *)((int)puVar12 + 0x8c), uVar5 < 0x8000)) {
          uVar6 = *(uint *)(puVar12 + 0x12);
          if ((uVar6 != 0) && (uVar7 = *(uint *)((int)puVar12 + 0x94), uVar7 != 0)) {
            uVar8 = *(uint *)(puVar12 + 0x13);
            uVar28 = ((param_3 << 0x20) >> 0x3f) << 0x1f | param_3 & 0xfffffff |
                     (ulonglong)uVar8 & 0x20000;
            *(uint *)(puVar12 + 0x79) = (uVar29 + 0xf >> 4) + 0xf & 0xfffffff0;
            *(uint *)((int)puVar12 + 0x444) = uVar5;
            *(uint *)(puVar12 + 0x5b) = uVar29;
            *(uint *)((int)puVar12 + 0x2dc) = uVar5;
            *(uint *)(puVar12 + 0x88) = uVar29;
            *(int *)((int)puVar12 + 0x7b4) = iVar18;
            *(uint *)((int)puVar12 + 0x2fc) = uVar8;
            *(int *)(puVar12 + 0x5f) = (int)uVar28;
            if ((uVar8 & 0x100000) == 0) {
              uVar28 = (param_3 & 0xfffff | (ulonglong)uVar8 & 0x20000) << 0xb |
                       (uVar28 << 0x20) >> 0x35;
              *(uint *)(puVar12 + 0x5f) = (uint)(uVar28 << 0x15) | (uint)uVar28 >> 0xb;
            }
            iVar19 = (int)(param_3 & 0x70000000);
            if (iVar19 == 0x70000000) goto LAB_005f1d5c;
            if (iVar19 == 0) {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | (ulonglong)uVar8 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            else {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | param_3 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            iVar19 = (int)(uVar28 & 0x70000000);
            if (iVar19 == 0x30000000) {
              iVar19 = *(int *)((int)puVar12 + 0x2dc);
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            else if ((uVar28 & 0x70000000) < 0x30000001) {
              if ((iVar19 == 0x10000000) || (iVar19 == 0x20000000)) {
                iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
                *(int *)((int)puVar12 + 0x2dc) = iVar19;
              }
              else {
LAB_005f1d5c:
                iVar19 = *(int *)((int)puVar12 + 0x2dc);
              }
            }
            else {
              if ((iVar19 != 0x40000000) && (iVar19 != 0x50000000)) goto LAB_005f1d5c;
              iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
              *(int *)((int)puVar12 + 0x2dc) = iVar19;
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            if ((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x18000;
            }
            else if (iVar18 == 0x684b4942) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x8000;
            }
            *(uint *)(puVar12 + 0x5c) = uVar4;
            *(uint *)((int)puVar12 + 0x3d4) = uVar26;
            if (((param_3 & 0x1000) == 0) || (*(int *)(param_2 + 1) == -1)) {
              *(uint *)((int)puVar12 + 0x2ec) = uVar6;
              *(uint *)(puVar12 + 0x5e) = uVar7;
            }
            else {
              uVar17 = *(undefined4 *)((int)param_2 + 0xc);
              *(int *)((int)puVar12 + 0x2ec) = *(int *)(param_2 + 1);
              *(undefined4 *)(puVar12 + 0x5e) = uVar17;
            }
            *(uint *)(puVar12 + 0x60) = uVar47;
            *(uint *)(puVar12 + 0x62) = uVar35;
            *(uint *)(puVar12 + 0x7a) = *(uint *)(puVar12 + 0x10);
            *(uint *)((int)puVar12 + 0x3cc) = *(int *)(puVar12 + 0x79) * (iVar19 + 0xfU >> 4);
            *(uint *)(puVar12 + 0xef) = uVar6;
            *(uint *)((int)puVar12 + 0x77c) = uVar7;
            iVar18 = (int)(((ulonglong)(uVar7 >> 1) + (ulonglong)uVar6 & 0xffffffff) /
                          (ulonglong)uVar7);
            *(int *)(puVar12 + 0xe5) = iVar18;
            if (iVar18 == 0) {
              *(undefined4 *)(puVar12 + 0xe5) = 1;
            }
            uVar28 = uVar42 & 0xffffffff;
            bVar48 = (uVar40 == 0) << 1;
            FUN_005fd700(uVar28,uVar43 - 0x184,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x180,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x17c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x178,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x174,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x170,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x16c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            if ((bool)(bVar48 >> 1 & 1)) {
              iVar18 = 0x180;
            }
            else {
              iVar18 = uVar40 * 0x200 + (uVar40 & 0x1ffffff) * -0x80;
            }
            uVar28 = uVar42 & 0xffffffff;
            FUN_005fd700(uVar28,uVar43 - 0x464,iVar18);
            FUN_005fd700(uVar28,uVar43 - 0x4cc,((ulonglong)uVar40 & 0x3fffffff) << 2);
            FUN_005f8758(uVar43 - 0x488,*(int *)(puVar12 + 0x5b) + 0xfU & 0xfffffff0);
            if (bVar1) {
              FUN_005fd700(uVar28,uVar43 - 0x448,
                           (*(int *)(puVar12 + 0x62) * 3 + *(int *)((int)puVar12 + 0x3d4)) * 4 +
                           0x104);
            }
            iVar18 = *(int *)(puVar12 + 0xe8);
            iVar19 = FUN_005fd778(uVar28);
            *(int *)(puVar12 + 0xe8) = iVar19 + iVar18 + 0x4f0;
            __dest = (void *)FUN_005fd790(uVar28,0x4f0);
            if (__dest != (void *)0x0) {
              memcpy(__dest,(void *)(uVar43 - 0x5b8),0x4f0);
              *(void **)((int)__dest + 0x1ac) = __dest;
              **(undefined4 **)((int)__dest + 0x438) = 0;
              **(undefined4 **)((int)__dest + 0x43c) = 0;
              **(undefined4 **)((int)__dest + 0x440) = 0;
              **(undefined4 **)((int)__dest + 0x444) = 0;
              **(undefined4 **)((int)__dest + 0x448) = 0;
              **(undefined4 **)((int)__dest + 0x44c) = 0;
              pcVar31 = pcVar32;
              if (bVar1) {
                iVar18 = *(int *)(puVar12 + 0x62);
                iVar19 = *(int *)((int)puVar12 + 0x3d4);
                iVar23 = (*(int *)((int)__dest + 0x170) + 0x100U & 0xffffff80) - 0x54;
                *(int *)((int)__dest + 0x170) = iVar23;
                pcVar3 = (code *)**(undefined4 **)((int)__dest + 400);
                puVar12[5] = uVar16;
                (*pcVar3)((int)__dest + 400,0xffffffffffffffff,iVar23,(iVar18 * 3 + iVar19) * 4 + 4)
                ;
                uVar16 = puVar12[5];
                iVar19 = *(int *)(puVar12 + 0x62) * 4;
                iVar23 = *(int *)((int)__dest + 0x170) + iVar19;
                iVar18 = iVar23 + iVar19;
                *(int *)((int)__dest + 0x174) = iVar23;
                *(int *)((int)__dest + 0x178) = iVar18;
                *(int *)((int)__dest + 0x158) = iVar18 + iVar19;
                if (*(int *)((int)__dest + 0x1d0) == 0) goto LAB_005f2004;
                pcVar38 = *(char **)((int)uVar16 + -0x7e60);
                lVar49 = 0xfe;
                *pcVar32 = 0x45;
                do {
                  cVar2 = *pcVar38;
                  pcVar38 = pcVar38 + 1;
                  pcVar31 = pcVar31 + 1;
                  if (cVar2 == '\0') goto LAB_005f277c;
                  *pcVar31 = *pcVar38;
                  lVar49 = lVar49 + -1;
                } while (lVar49 != 0);
LAB_005f2774:
                *pcVar31 = '\0';
              }
              else {
                uVar4 = *(uint *)((int)__dest + 0x38);
                *(int *)((int)__dest + 0x170) = param_1 + 0x2c;
                *(uint *)((int)__dest + 0x174) = param_1 + (uVar4 & 0x3fffffff) * 4 + 0x2c;
                *(uint *)((int)__dest + 0x178) = param_1 + uVar4 * 8 + 0x2c;
                *(uint *)((int)__dest + 0x158) =
                     param_1 + uVar4 * 0x10 + (uVar4 & 0x3fffffff) * -4 + 0x2c;
LAB_005f2004:
                uVar4 = *(uint *)((int)__dest + 8);
                uVar28 = (ulonglong)uVar4;
                uVar26 = *(uint *)((int)__dest + 0x450);
                puVar9 = *(uint **)((int)__dest + 0x158);
                uVar27 = ZEXT48(puVar9);
                uVar25 = uVar28 - uVar26;
                if ((int)uVar25 < 0) {
                  uVar25 = 0;
LAB_005f22b4:
                  uVar47 = 1;
                  iVar18 = 0;
LAB_005f20d0:
                  uVar29 = (uint)((((ulonglong)puVar9[uVar4] - (ulonglong)*puVar9) *
                                  (ulonglong)uVar26) / (ulonglong)uVar4);
LAB_005f20f8:
                  if ((int)uVar25 < (int)uVar4) {
                    lVar34 = uVar27 + (uVar25 & 0x3fffffff) * 4;
                    uVar25 = uVar28 - uVar25 & 0xffffffff;
                    lVar30 = lVar34 + 4;
                    uVar4 = *(uint *)lVar34;
                    uVar47 = uVar47 & uVar4;
                    if (uVar4 < *(uint *)lVar30) {
                      do {
                        lVar34 = lVar30 + 4;
                        puVar9 = (uint *)lVar30;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_005f2164;
                        uVar47 = *puVar9 & uVar47;
                        lVar30 = lVar34;
                      } while (*puVar9 < *(uint *)lVar34);
                    }
                    goto LAB_005f22c4;
                  }
LAB_005f2164:
                  *(uint *)((int)__dest + 0x4d4) = uVar47;
                  *(int *)((int)__dest + 0xcc) = iVar18;
                }
                else {
                  if ((int)uVar25 < 1) goto LAB_005f22b4;
                  lVar30 = uVar27 + ((ulonglong)uVar26 & 0x3fffffff) * 4;
                  uVar35 = *puVar9;
                  if (uVar35 < *(uint *)(uVar27 + 4)) {
                    uVar50 = uVar25 & 0xffffffff;
                    uVar47 = uVar35 & 1;
                    uVar35 = *(int *)lVar30 - uVar35;
                    uVar29 = 0;
                    iVar18 = 0;
                    iVar19 = 0;
                    lVar34 = uVar27 + 4;
                    do {
                      lVar30 = lVar30 + 4;
                      lVar15 = lVar34 + 4;
                      if (uVar29 < uVar35) {
                        iVar18 = iVar19;
                        uVar29 = uVar35;
                      }
                      iVar19 = iVar19 + 1;
                      uVar50 = uVar50 - 1;
                      if (uVar50 == 0) {
                        if (uVar29 != 0) goto LAB_005f20f8;
                        goto LAB_005f20d0;
                      }
                      uVar5 = *(uint *)lVar34;
                      uVar47 = uVar5 & uVar47;
                      uVar35 = *(int *)lVar30 - uVar5;
                      lVar34 = lVar15;
                    } while (uVar5 < *(uint *)lVar15);
                  }
LAB_005f22c4:
                  uVar29 = 0xffffffff;
                }
                *(uint *)((int)__dest + 200) = uVar29;
                if (uVar29 == 0xffffffff) {
                  pcVar38 = *(char **)((int)uVar16 + -0x7e64);
                  lVar49 = 0xfe;
                  *pcVar32 = 0x54;
                  do {
                    cVar2 = *pcVar38;
                    pcVar38 = pcVar38 + 1;
                    pcVar31 = pcVar31 + 1;
                    if (cVar2 == '\0') goto LAB_005f277c;
                    *pcVar31 = *pcVar38;
                    lVar49 = lVar49 + -1;
                  } while (lVar49 != 0);
                  goto LAB_005f2774;
                }
                uVar4 = (uint)param_3 & 0x400;
                if ((param_3 & 0x400) != 0) {
LAB_005f2548:
                  if ((((param_3 & 0x1000000) == 0) ||
                      (iVar18 = *(int *)(param_2 + 2), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = *(int *)((int)__dest + 200);
                  }
                  *(int *)((int)__dest + 0x458) = iVar18;
                  if ((((param_3 & 0x400000) == 0) ||
                      (iVar18 = *(int *)((int)param_2 + 0x14), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = 0;
                  }
                  *(int *)((int)__dest + 0x180) = iVar18;
                  if (bVar1) {
                    iVar19 = (int)__dest + 400;
                    uVar17 = *(undefined4 *)((int)__dest + 0x458);
                    pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x198);
                    puVar12[5] = uVar16;
                    uVar28 = (*pcVar3)(iVar19,uVar17);
                    uVar16 = puVar12[5];
                    uVar41 = *(uint *)((int)__dest + 0x28);
                    *(int *)((int)__dest + 0x458) = (int)uVar28;
                    if ((uVar28 + 0x20000 & 0xffffffff) < (ulonglong)uVar41) {
                      if ((((ulonglong)uVar41 / 10) * 9 & 0xffffffff) <= (uVar28 & 0xffffffff)) {
                        *(uint *)((int)__dest + 0x458) = uVar41 + 0x10;
                      }
                    }
                    else {
                      param_3 = param_3 | 0x2000;
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8002000;
                    }
                    if ((param_3 & 0x2000) == 0) {
                      uVar28 = uVar42 & 0xffffffff;
                      FUN_005fd700(uVar28,(int)__dest + 0x4e0,*(int *)((int)__dest + 0xf8) + 0x500);
                      iVar23 = *(int *)((int)__dest + 0x458);
                      iVar22 = *(int *)((int)__dest + 0x468);
                      iVar24 = FUN_005fd778(uVar28);
                      *(int *)((int)__dest + 0x468) = iVar24 + iVar23 + iVar22;
                      iVar23 = FUN_005fd790(uVar28,iVar23);
                      *(int *)((int)__dest + 0x430) = iVar23;
                      if (iVar23 == 0) goto LAB_005f3700;
                      iVar22 = *(int *)((int)__dest + 0x28);
                      uVar17 = *(undefined4 *)((int)__dest + 0x458);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      uVar28 = (*pcVar3)(iVar19,iVar23,uVar17,iVar22 + 8,iVar18);
                      uVar16 = puVar12[5];
                    }
                    else {
                      iVar23 = *(int *)((int)__dest + 0x468);
                      iVar24 = *(int *)((int)__dest + 0x28) -
                               (**(uint **)((int)__dest + 0x158) & 0xfffffffe);
                      iVar46 = iVar24 + 0x408;
                      iVar22 = FUN_005fd778(uVar42 & 0xffffffff);
                      *(int *)((int)__dest + 0x468) = iVar22 + iVar46 + iVar23;
                      iVar23 = FUN_005fd790(uVar42 & 0xffffffff,iVar46);
                      *(int *)((int)__dest + 0x17c) = iVar23;
                      if (iVar23 == 0) {
LAB_005f3700:
                        uVar41 = (uint)param_3 & 0x4000000;
                        if (*(int *)((int)__dest + 0xd0) != 0) {
                          FUN_005f516c(*(int *)((int)__dest + 0xd0));
                        }
                        goto LAB_005f277c;
                      }
                      iVar23 = *(int *)((int)__dest + 0x28);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      (*pcVar3)(iVar19,0,0,iVar23 + 8,iVar18);
                      uVar17 = *(undefined4 *)((int)__dest + 0x17c);
                      uVar41 = **(uint **)((int)__dest + 0x158);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x194);
                      puVar12[5] = puVar12[5];
                      (*pcVar3)(iVar19,0,uVar41 & 0xfffffffe,uVar17,iVar24 + 8);
                      uVar43 = puVar12[5];
                      iVar18 = (int)uVar43;
                      uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                      uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                      FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x83b);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a4);
                      puVar12[5] = uVar43;
                      (*pcVar3)(iVar19);
                      uVar16 = puVar12[5];
                      uVar28 = FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x841);
                      *(undefined4 *)((int)__dest + 0x1e4) = 0;
                    }
                  }
                  else {
                    uVar41 = **(uint **)((int)__dest + 0x158);
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    *(uint *)((int)__dest + 0x17c) = (uVar41 & 0xfffffffe) + param_1;
                  }
                  *(undefined4 *)((int)__dest + 0xc) = 0xffffffff;
                  if (*(uint *)((int)__dest + 0x14) == 0) {
                    *(undefined4 *)((int)__dest + 0x47c) = 2000;
                  }
                  else {
                    *(int *)((int)__dest + 0x47c) =
                         (int)(((ulonglong)*(uint *)((int)__dest + 0x18) * 2000) /
                              (ulonglong)*(uint *)((int)__dest + 0x14));
                  }
                  *(undefined4 *)((int)__dest + 0x114) = 1;
                  iVar18 = FUN_005f5090(uVar28);
                  *(int *)((int)__dest + 0x49c) = iVar18 - *(int *)((int)__dest + 0x49c);
                  *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x3c) = 0x10000;
                  *(undefined4 *)((int)__dest + 0x124) = 0;
                  if ((*(int *)((int)__dest + 0x38) == 0) || ((bool)(bVar48 >> 1 & 1))) {
LAB_005f2a30:
                    iVar18 = 0;
                  }
                  else {
                    uVar41 = 0;
                    uVar43 = 0;
                    do {
                      if (0 < *(int *)((int)__dest + 0x38)) {
                        iVar19 = 0;
                        iVar23 = 0;
                        iVar18 = 4;
                        if (**(int **)((int)__dest + 0x178) != *(int *)uVar39) {
                          do {
                            iVar23 = iVar18;
                            iVar19 = iVar19 + 1;
                            if (*(int *)((int)__dest + 0x38) <= iVar19) goto LAB_005f2a18;
                            iVar18 = iVar23 + 4;
                          } while (*(int *)(*(int *)((int)__dest + 0x178) + iVar23) !=
                                   *(int *)uVar39);
                        }
                        uVar26 = 0;
                        iVar18 = *(int *)((int)__dest + 0x124) * 4;
                        *(int *)((int)__dest + 0x124) = *(int *)((int)__dest + 0x124) + 1;
                        *(int *)(*(int *)((int)__dest + 0xec) + iVar18) = iVar19;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x174));
                        if (-1 < (int)uVar4) {
                          uVar26 = uVar4 >> 0x1c & 1;
                        }
                        lVar30 = FUN_005f533c(uVar4 & 0xffff,(uVar4 >> 0x1d & 1) + 1,uVar26);
                        *(int *)((int)puVar12 + iVar18 + 0x118) = (int)lVar30;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x170));
                        uVar43 = uVar43 + (((((ulonglong)uVar4 & 0x3fffffff) * 4 + (ulonglong)uVar4
                                            << 0x20) >> 0x22) + 0xff & 0xffffff00) + lVar30 + 0x10;
                      }
LAB_005f2a18:
                      uVar41 = uVar41 + 1;
                      uVar39 = uVar39 + 4;
                    } while (uVar40 != uVar41);
                    if ((int)uVar43 == 0) goto LAB_005f2a30;
                    iVar18 = *(int *)((int)__dest + 0x468);
                    iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                    *(int *)((int)__dest + 0x468) = (int)uVar43 + iVar18 + iVar19;
                    iVar18 = FUN_005fd790(uVar42 & 0xffffffff,uVar43 & 0xffffffff);
                    *(int *)((int)__dest + 0x15c) = iVar18;
                    if (iVar18 == 0) {
                      *(undefined4 *)((int)__dest + 0x124) = 0;
                    }
                  }
                  iVar19 = *(int *)((int)uVar16 + -0x7f18);
                  uVar43 = (ulonglong)*(uint *)((int)uVar16 + -0x7e2c);
                  uVar39 = 0;
                  iVar23 = 0;
                  puVar12[0xfd] = uVar43;
                  *(undefined4 *)(iVar19 + 0xc) = 1;
                  *(undefined4 *)(pcVar32 + 0x114) = 0;
                  while( true ) {
                    iVar22 = (int)uVar16;
                    if ((ulonglong)*(uint *)((int)__dest + 0x124) <= (uVar39 & 0xffffffff)) break;
                    iVar24 = *(int *)((int)__dest + 0x154);
                    iVar46 = (int)((uVar39 & 0xffffffff) << 2);
                    *(int *)(puVar12 + 0xfc) = iVar46;
                    *(undefined4 *)(iVar24 + iVar23 + 0xc) = 0;
                    iVar24 = *(int *)(*(int *)((int)__dest + 0xec) + iVar46) * 4;
                    uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) + iVar24);
                    if ((((int)uVar40 < 0) || ((uVar40 & 0x10000000) != 0)) &&
                       (*(int *)(pcVar32 + 0x5e0) != 0)) {
                      uVar42 = (ulonglong)uVar40 & 0xffff;
                      if (uVar42 < 0x3e801) {
                        lVar30 = ((ulonglong)(uVar40 >> 0x1d) & 1) + 1;
                        uVar40 = *(uint *)(*(int *)((int)__dest + 0x170) + iVar24);
                        uVar28 = ((((ulonglong)uVar40 & 0x3fffffff) * 4 + (ulonglong)uVar40 << 0x20)
                                 >> 0x22) + 0xff & 0xffffff00;
                        uVar25 = uVar42;
                        if ((*(int *)((int)puVar12 + 0x2ec) != 0) && (*(int *)(puVar12 + 0x5e) != 0)
                           ) {
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x2ec);
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x77c);
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0x5e);
                          puVar12[0xfe] = (longlong)(int)uVar42;
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0xef);
                          uVar25 = (ulonglong)*(uint *)(puVar12 + 0xfa);
                          if (0x3e800 < (ulonglong)*(uint *)(puVar12 + 0xfa)) {
                            uVar25 = 0x3e800;
                          }
                        }
                        if (uVar28 <= (ulonglong)
                                      ((longlong)(int)lVar30 * (longlong)(int)(uVar42 << 5) << 0x20)
                                      >> 0x23) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                          uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                          FUN_005eb0f8(uVar43,uVar17,uVar10,0x8c4);
                          iVar22 = *(int *)((int)__dest + 0x154);
                          uVar21 = *(undefined4 *)((int)__dest + 0x20);
                          pcVar3 = (code *)**(undefined4 **)(pcVar32 + 0x5e0);
                          puVar12[5] = uVar16;
                          iVar22 = (*pcVar3)(iVar23 + iVar22,uVar25,0x10,(int)lVar30,uVar21,__dest);
                          uVar16 = puVar12[5];
                          FUN_005eb2e0(uVar43,uVar17,uVar10,0x8cc);
                          if (iVar22 != 0) {
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x1c) = (int)uVar42;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar23 + iVar22 + 0x30) == 0) {
                              *(undefined4 *)(iVar23 + iVar22 + 0x30) = 0xffffffff;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            *(int *)(iVar23 + iVar22 + 8) = (int)uVar28 + 0x10;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = iVar18;
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x54) = 0;
                            uVar40 = 0x2ee - *(int *)(iVar22 + 0x38);
                            iVar24 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)(iVar22 + 8);
                            *(int *)(iVar24 + 0x10) = *(int *)(iVar24 + 0xc) + *(int *)(iVar24 + 8);
                            puVar36 = (undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154));
                            *puVar36 = puVar36[3];
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x18) = *(undefined4 *)(iVar22 + 0xc);
                            *(uint *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x48) =
                                 (uint)((uVar25 * (longlong)(int)(uVar40 & (int)~uVar40 >> 0x1f) *
                                        lVar30 * 2) / 1000) & 0xfffffffc;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            iVar24 = iVar23 + iVar22;
                            if (*(int *)(iVar24 + 8) - *(int *)(iVar24 + 0x48) < 0x10) {
                              *(int *)(iVar24 + 0x48) = *(int *)(iVar24 + 8) + -0x10;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            uVar41 = 0;
                            uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) +
                                              *(int *)(*(int *)(puVar12 + 0xfc) +
                                                      *(int *)((int)__dest + 0xec)) * 4);
                            if (-1 < (int)uVar40) {
                              uVar41 = uVar40 >> 0x1c & 1;
                            }
                            uVar21 = FUN_005f5cd0(iVar18,uVar40 & 0xffff,lVar30,uVar41);
                            *(undefined4 *)(iVar23 + iVar22 + 0x14) = uVar21;
                            FUN_005eb0f8(puVar12[0xfd],uVar17,uVar10,0x8f5);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar22 + 0x14) == 0) {
                              pcVar3 = (code *)**(undefined4 **)(iVar22 + 0x178);
                              puVar12[5] = uVar16;
                              (*pcVar3)();
                              uVar16 = puVar12[5];
                              *(undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = 0;
                            }
                            FUN_005eb2e0(puVar12[0xfd],uVar17,uVar10,0x900);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)((int)puVar12 +
                                                      *(int *)(puVar12 + 0xfc) + 0x118);
                            uVar17 = FUN_005f5384(*(undefined4 *)(iVar22 + 0x14));
                            *(undefined4 *)(iVar22 + 4) = uVar17;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x40) =
                                 *(int *)((int)__dest + 8) -
                                 (int)((((ulonglong)*(uint *)((int)__dest + 0x4a0) & 0x7fffffff) * 2
                                        + (ulonglong)*(uint *)((int)__dest + 0x4a0) & 0xffffffff) /
                                      (((ulonglong)*(uint *)((int)__dest + 0x4a4) & 0x3fffffff) << 2
                                      ));
                          }
                        }
                      }
                    }
                    iVar22 = *(int *)((int)__dest + 0x154);
                    if (*(int *)(iVar23 + iVar22 + 0x3c) == 0) {
                      *(undefined4 *)(iVar23 + iVar22 + 0x3c) = 0x10000;
                      iVar22 = *(int *)((int)__dest + 0x154);
                    }
                    if (*(int *)(iVar23 + iVar22 + 0xc) == 0) {
                      lVar30 = (ulonglong)*(uint *)((int)__dest + 0x124) - 1;
                      iVar22 = *(int *)(puVar12 + 0xfc) + *(int *)((int)__dest + 0xec);
                      *(int *)((int)__dest + 0x124) = (int)lVar30;
                      FUN_005c6094(iVar22,iVar22 + 4,(lVar30 - uVar39 & 0x3fffffff) << 2);
                    }
                    else {
                      uVar39 = uVar39 + 1;
                      iVar23 = iVar23 + 0x180;
                    }
                  }
                  if (*(uint *)((int)__dest + 0x124) == 0) {
LAB_005f2c00:
                    piVar44 = *(int **)(iVar22 + -0x7f14);
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                    uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                    puVar13 = pcVar32 + 0x47c;
                    *(undefined4 *)((int)__dest + 0x110) = 1;
                    FUN_005eb0f8(puVar13,uVar17,uVar10,0x924);
                    *(int *)(pcVar32 + 0x5dc) =
                         *(int *)((int)__dest + 0x124) + *(int *)(pcVar32 + 0x5dc);
                    FUN_005eb2e0(puVar13,uVar17,uVar10,0x92a);
                    iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                    if (iVar18 < 1) {
                      iVar23 = (int)__dest + 0x3b0;
                      iVar18 = FUN_005fc508(iVar23,1);
                      if (iVar18 == 0) {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar21 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,iVar23,pcVar32 + 0x630,uVar21);
                          uVar16 = puVar12[5];
                        }
                        if (*(int *)(pcVar32 + 0x5ec) == 0) {
                          *(undefined4 *)(iVar19 + 0x10) = 0xd;
                        }
                        FUN_005eb0f8(puVar13,uVar17,uVar10,0x22c);
                        iVar18 = (int)uVar16;
                        if (*(int *)(pcVar32 + 0x1f0) == 0) {
                          *(undefined4 *)(pcVar32 + 0x4fc) = 0;
                          iVar22 = FUN_005fbfd4(pcVar32 + 0x500,0,0x4000);
                          if (iVar22 != 0) {
                            puVar13 = pcVar32 + 500;
                            iVar22 = FUN_005fc620(puVar13,*(undefined4 *)(iVar18 + -0x7e48),0x8000,0
                                                  ,0,*(undefined4 *)(iVar18 + -0x7edc));
                            if (iVar22 != 0) {
                              *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
                              *(undefined4 *)(pcVar32 + 0x1f0) = 1;
                              FUN_005fccc8(puVar13,0x10);
                              FUN_005fccc8(puVar13,0x10);
                              goto LAB_005f2fac;
                            }
                            FUN_005fc098(pcVar32 + 0x500);
                          }
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005fc490(iVar23);
                          *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                        }
                        else {
                          *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
LAB_005f2fac:
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005ec3c8();
                          uVar17 = *(undefined4 *)(iVar18 + -0x7ee4);
                          FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                          for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                              pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                            if (__dest == pvVar20) goto LAB_005f3008;
                          }
                          *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                          *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3008:
                          FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                          *(undefined4 *)((int)__dest + 0x164) = 1;
                        }
                        iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                        if ((iVar18 < 0) && (uVar40 = -iVar18, uVar40 < *(uint *)(iVar19 + 0x10))) {
                          *(uint *)(iVar19 + 0x10) = uVar40;
                        }
                      }
                    }
                    else {
                      if (iVar18 != 2) goto LAB_005f2c00;
                      iVar18 = FUN_005fc508((int)__dest + 0x3b0,1);
                      if (iVar18 == 0) {
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)(iVar22 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2ec8;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2ec8:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,(int)__dest + 0x3b0,pcVar32 + 0x634,uVar17);
                          uVar16 = puVar12[5];
                        }
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2e60;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2e60:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                    }
                  }
                  iVar18 = (int)uVar16;
                  uVar17 = *(undefined4 *)(iVar18 + -0x7e40);
                  uVar10 = *(undefined4 *)(iVar18 + -0x7e3c);
                  uVar21 = *(undefined4 *)(iVar18 + -0x7e34);
                  uVar11 = *(undefined4 *)(iVar18 + -0x7e38);
                  *(undefined4 *)((int)__dest + 0x1b4) = *(undefined4 *)(iVar18 + -0x7e44);
                  *(undefined4 *)((int)__dest + 0x1c0) = uVar17;
                  *(undefined4 *)((int)__dest + 0x1b0) = uVar10;
                  *(undefined4 *)((int)__dest + 0x1b8) = uVar11;
                  *(undefined4 *)((int)__dest + 0x1bc) = uVar21;
                  if (((*(uint *)((int)__dest + 0x20) & 0x8000000) != 0) ||
                     (*(int *)((int)__dest + 0x17c) != 0)) goto LAB_005f2c48;
                  iVar23 = (int)__dest + 0x330;
                  iVar19 = FUN_005fc508(iVar23,2);
                  if (iVar19 == 0) {
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                    uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x528);
                    if (*(int *)(pcVar32 + 0x1ac) == 0) {
                      *(undefined4 *)(pcVar32 + 0x474) = 0;
                      iVar19 = FUN_005fbfd4(pcVar32 + 0x1b0,0,0x4000);
                      if (iVar19 != 0) {
                        iVar19 = FUN_005fc620(pcVar32 + 0x2f4,*(undefined4 *)(iVar18 + -0x7e30),
                                              0x8000,0,0,*(undefined4 *)(iVar18 + -0x7e94));
                        if (iVar19 != 0) {
                          *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
                          *(undefined4 *)(pcVar32 + 0x1ac) = 1;
                          FUN_005fccc8(pcVar32 + 0x2f4,0x10);
                          goto LAB_005f3830;
                        }
                        FUN_005fc098(pcVar32 + 0x1b0);
                      }
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      FUN_005fc490(iVar23);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    }
                    else {
                      *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
LAB_005f3830:
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      iVar19 = *piVar44;
                      if (iVar19 != 0) {
                        uVar17 = *(undefined4 *)(iVar18 + -0x7f08);
                        pcVar3 = (code *)**(undefined4 **)(iVar19 + 0x5c);
                        puVar12[5] = uVar16;
                        (*pcVar3)(iVar19,iVar23,pcVar32 + 0x638,uVar17);
                        uVar16 = puVar12[5];
                      }
                    }
                  }
                  if ((*(uint *)((int)__dest + 0x20) & 0x8000000) == 0) {
                    FUN_005ec3c8();
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                    uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                    for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                        pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                      if (__dest == pvVar20) goto LAB_005f3118;
                    }
                    *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                    *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3118:
                    FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                    *(undefined4 *)((int)__dest + 0x164) = 1;
                  }
LAB_005f2c48:
                  iVar18 = FUN_005fc508((int)__dest + 0x2b0,2);
                  if (iVar18 == 0) {
                    trapWord(0x1f,lVar49,lVar49);
                  }
                  iVar18 = *piVar44;
                  if (iVar18 != 0) {
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ef4);
                    pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                    puVar12[5] = uVar16;
                    (*pcVar3)(iVar18,(int)__dest + 0x2b0,pcVar32 + 0x63c,uVar17);
                    uVar16 = puVar12[5];
                  }
                  if (*(int *)((int)__dest + 0x17c) == 0) {
                    if ((param_3 & 0x200000) == 0) {
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                      puVar12[5] = uVar16;
                      iVar18 = (*pcVar3)((int)__dest + 400);
                      uVar43 = puVar12[5];
                      if (iVar18 != 0) {
                        *(void **)(pcVar32 + 0x610) = __dest;
                        do {
                          pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                          puVar12[5] = uVar43;
                          iVar18 = (*pcVar3)((int)__dest + 400);
                          uVar43 = puVar12[5];
                        } while (iVar18 != 0);
                      }
                    }
                    if (*(int *)(pcVar32 + 0x1ac) != 0) {
                      FUN_005fc190(pcVar32 + 0x1b0,1);
                    }
                  }
                  *(undefined4 *)((int)__dest + 0x4d8) = 0xf0000000;
                  FUN_005eda28(__dest,1);
                  if (((*(int *)((int)__dest + 0x124) != 0) && (*(int *)(pcVar32 + 0x1f0) != 0)) &&
                     (*(int *)(*(int *)((int)__dest + 0x154) + 0x4c) < 1)) {
                    FUN_005fc190(pcVar32 + 0x500,1);
                  }
                  uVar17 = FUN_005fbef8(pcVar32 + 0x640,1);
                  *(undefined4 *)((int)__dest + 0x160) = uVar17;
                  return __dest;
                }
                *(uint *)((int)puVar12 + 0xb4) = uVar4;
                *(uint *)((int)puVar12 + 0xa4) = *(int *)((int)__dest + 0x168) + 7U & 0xfffffff8;
                *(uint *)(puVar12 + 0x15) = *(int *)((int)__dest + 0x16c) + 7U & 0xfffffff8;
                *(uint *)((int)puVar12 + 0xac) =
                     (*(int *)((int)__dest + 0x168) + 1U >> 1) + 7 & 0xfffffff8;
                iVar18 = *(int *)((int)__dest + 0x16c);
                *(undefined4 *)(puVar12 + 0x1a) = 1;
                *(undefined4 *)(puVar12 + 0x17) = 1;
                *(undefined4 *)((int)puVar12 + 0xc4) = 1;
                *(uint *)(puVar12 + 0x16) = (iVar18 + 1U >> 1) + 7 & 0xfffffff8;
                uVar26 = *(uint *)((int)__dest + 0x20);
                *(uint *)((int)puVar12 + 0xe4) = uVar4;
                *(uint *)((int)puVar12 + 0xbc) = uVar4;
                *(uint *)((int)puVar12 + 0xdc) = uVar26 >> 0x14 & 1;
                *(uint *)(puVar12 + 0x19) = uVar4;
                *(uint *)((int)puVar12 + 0xd4) = uVar4;
                *(uint *)(puVar12 + 0x1c) = uVar4;
                *(uint *)(puVar12 + 0x18) = uVar4;
                *(uint *)((int)puVar12 + 0xcc) = uVar4;
                *(uint *)(puVar12 + 0x1b) = uVar4;
                if (*(int *)((int)__dest + 8) == 1) {
                  *(undefined4 *)(puVar12 + 0x14) = 1;
                }
                else {
                  *(undefined4 *)(puVar12 + 0x14) = 2;
                  puVar12[0x1d] = puVar12[0x17];
                  puVar12[0x1e] = puVar12[0x18];
                  puVar12[0x1f] = puVar12[0x19];
                  puVar12[0x20] = puVar12[0x1a];
                  puVar12[0x21] = puVar12[0x1b];
                  puVar12[0x22] = puVar12[0x1c];
                }
                bVar33 = false;
                lVar30 = uVar43 - 0x7d8;
                uVar27 = uVar43 - 0x7b4;
                lVar34 = uVar43 - 0x7c0;
                uVar25 = 0;
                do {
                  uVar50 = uVar25;
                  piVar44 = (int *)lVar34;
                  puVar12[0xfb] = uVar27 & 0xffffffff;
                  piVar45 = (int *)lVar30;
                  lVar30 = lVar30 + 0x30;
                  uVar27 = uVar27 + 0x30;
                  lVar34 = lVar34 + 0x30;
                  uVar4 = *(int *)((int)puVar12 + 0xac) + 0xfU & 0xfffffff0;
                  if (*piVar45 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xbc & 0xfffffffc,
                                 *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    piVar45[2] = *(int *)((int)puVar12 + 0xa4);
                  }
                  if (piVar45[3] != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 200 & 0xfffffff8,uVar4 * *(int *)(puVar12 + 0x16));
                    bVar33 = true;
                    piVar45[5] = uVar4;
                  }
                  if (*piVar44 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xd4 & 0xfffffffc,uVar4 * *(int *)(puVar12 + 0x16))
                    ;
                    bVar33 = true;
                    piVar44[2] = uVar4;
                  }
                  uVar25 = uVar50 + 1;
                  uVar28 = uVar42;
                  if (*(int *)puVar12[0xfb] != 0) {
                    uVar28 = FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 +
                                                 (uVar50 & 0xfffffff) * -0x10 + lVar49 + 0xe0 &
                                                 0xfffffff0,
                                          *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    *(undefined4 *)((int)puVar12[0xfb] + 8) = *(undefined4 *)((int)puVar12 + 0xa4);
                  }
                } while ((int)uVar25 < *(int *)(puVar12 + 0x14));
                if ((int)uVar25 < 2) {
                  uVar27 = 2 - uVar25 & 0xffffffff;
                  lVar30 = (uVar25 & 0x3ffffff) * 0x40 + (uVar25 & 0xfffffff) * -0x10 + lVar49 +
                           0xbc;
                  if (2 < (int)uVar50 + 2) {
                    uVar27 = 1;
                  }
                  do {
                    puVar36 = (undefined4 *)lVar30;
                    *puVar36 = 0;
                    puVar36[3] = 0;
                    puVar36[6] = 0;
                    uVar27 = uVar27 - 1;
                    lVar30 = lVar30 + 0x30;
                  } while (uVar27 != 0);
                }
                if (!bVar33) goto LAB_005f2548;
                iVar18 = *(int *)((int)__dest + 0x468);
                iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                *(int *)((int)__dest + 0x468) = iVar19 + iVar18 + 0x78;
                pvVar20 = (void *)FUN_005fd790(uVar42 & 0xffffffff,0x78);
                *(void **)((int)__dest + 0x4e4) = pvVar20;
                if (pvVar20 != (void *)0x0) {
                  *(void **)((int)__dest + 0xd0) = pvVar20;
                  pvVar20 = memcpy(pvVar20,puVar12 + 0x14,0x78);
                  uVar28 = (ulonglong)(int)pvVar20;
                  goto LAB_005f2548;
                }
              }
LAB_005f277c:
              FUN_005f516c(__dest);
            }
            pcVar31 = *(char **)((int)uVar16 + -0x7e68);
            lVar49 = 0xfe;
            *pcVar32 = 0x4f;
            do {
              cVar2 = *pcVar31;
              pcVar31 = pcVar31 + 1;
              pcVar37 = pcVar37 + 1;
              if (cVar2 == '\0') {
                if (uVar41 != 0) {
                  return (void *)0x0;
                }
                goto LAB_005f2240;
              }
              *pcVar37 = *pcVar31;
              lVar49 = lVar49 + -1;
            } while (lVar49 != 0);
            bVar1 = uVar41 == 0;
            goto LAB_005f21c4;
          }
        }
      }
      pcVar31 = *(char **)(iVar19 + -0x7e6c);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
  }
  else {
    pcVar31 = *(char **)(iVar19 + -0x7e74);
    lVar49 = 0xfe;
    *pcVar32 = 0x4e;
    do {
      cVar2 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar37 = pcVar37 + 1;
      if (cVar2 == '\0') goto joined_r0x005f19e4;
      *pcVar37 = *pcVar31;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
  }
LAB_005f21c4:
  *pcVar37 = '\0';
  if (!bVar1) {
    return (void *)0x0;
  }
LAB_005f2240:
  uVar17 = *(undefined4 *)((int)uVar16 + -0x7eec);
  uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
  FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x70f);
  pcVar3 = (code *)**(undefined4 **)((int)puVar12 + 0x47c);
  puVar12[5] = uVar16;
  (*pcVar3)(uVar43 - 0x428);
  FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x715);
  return (void *)0x0;
joined_r0x005f19e4:
  if (!bVar1) {
    return (void *)0x0;
  }
  goto LAB_005f2240;
}


// 0x05f3980 (0x4 bytes)
/* WARNING: Type propagation algorithm not settling */

void * thunk_FUN_005f1788(int param_1,ulonglong *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  void *__dest;
  void *pvVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  char *pcVar31;
  longlong lVar30;
  char *pcVar32;
  bool bVar33;
  uint uVar35;
  longlong lVar34;
  undefined4 *puVar36;
  char *pcVar37;
  char *pcVar38;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong uVar39;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  uint uVar40;
  ulonglong unaff_r19;
  uint uVar41;
  ulonglong unaff_r20;
  ulonglong uVar42;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar43;
  ulonglong unaff_r26;
  int *piVar44;
  ulonglong unaff_r27;
  int *piVar45;
  int iVar46;
  ulonglong unaff_r28;
  uint uVar47;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte bVar48;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  longlong lVar49;
  ulonglong uVar50;
  
  uVar43 = ZEXT48(&stack0x00000000);
  uVar16 = ZEXT48(&TOC_BASE);
  lVar49 = uVar43 - 0x890;
  puVar12 = (ulonglong *)lVar49;
  *puVar12 = uVar43;
  puVar12[0x107] = unaff_r21;
  uVar42 = uVar43 - 0x6f8;
  puVar12[0x10b] = unaff_r25;
  puVar12[0x10f] = unaff_r29;
  puVar12[0x110] = unaff_r30;
  puVar12[0x102] = unaff_r16;
  puVar12[0x105] = unaff_r19;
  puVar12[0x108] = unaff_r22;
  puVar12[0x100] = unaff_r14;
  puVar12[0x101] = unaff_r15;
  puVar12[0x103] = unaff_r17;
  puVar12[0x104] = unaff_r18;
  puVar12[0x106] = unaff_r20;
  puVar12[0x109] = unaff_r23;
  puVar12[0x10a] = unaff_r24;
  puVar12[0x10c] = unaff_r26;
  puVar12[0x10d] = unaff_r27;
  puVar12[0x10e] = unaff_r28;
  puVar12[0x111] = unaff_r31;
  uVar40 = 1;
  uVar39 = uVar43 - 0x820;
  *(uint *)(puVar12 + 0x113) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar12[0x114] = in_LR;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  FUN_005fd6d0(uVar42,0x20);
  if ((param_3 & 0x4000) != 0) {
    uVar40 = *(uint *)(param_2 + 3);
    uVar39 = (ulonglong)*(uint *)((int)param_2 + 0x1c);
  }
  uVar41 = (uint)param_3 & 0x4000000;
  memset(uVar43 - 0x5b8,0,0x4f0);
  uVar17 = FUN_005f5090();
  pcVar32 = PTR_DAT_0071a40c;
  bVar1 = (param_3 & 0x4000000) == 0;
  *(undefined4 *)((int)puVar12 + 0x774) = uVar17;
  *pcVar32 = 0;
  if (bVar1) {
    if (((param_3 & 0x2000000) == 0) ||
       (puVar36 = *(undefined4 **)(param_2 + 4), *(undefined4 **)(param_2 + 4) == (undefined4 *)0x0)
       ) {
      puVar36 = (undefined4 *)PTR_PTR_0071a4d0;
    }
    uVar16 = uVar43 - 0x428 & 0xffffffff;
    memset(uVar16,0,0x120);
    puVar14 = PTR_PTR_0071a4dc;
    puVar13 = PTR_PTR_0071a4d8;
    *(undefined **)((int)puVar12 + 0x49c) = PTR_PTR_0071a4d4;
    *(undefined **)((int)puVar12 + 0x4a4) = puVar13;
    *(undefined **)(puVar12 + 0x94) = puVar14;
    FUN_005ec3c8();
    if ((param_3 & 0x20) != 0) {
      puVar12[0x73] = *param_2;
    }
    puVar14 = PTR_s_Bink_global_IO_mutex_0071a43c;
    puVar13 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    FUN_005eb0f8(pcVar32 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x6e7);
    pcVar3 = (code *)*puVar36;
    puVar12[5] = ZEXT48(&TOC_BASE);
    iVar18 = (*pcVar3)(uVar16,param_1,param_3 & 0xffffffff);
    uVar16 = puVar12[5];
    if (iVar18 == 0) {
      FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6f5);
      if (*pcVar32 != '\0') {
        return (void *)0x0;
      }
      pcVar37 = *(char **)((int)uVar16 + -0x7e5c);
      lVar49 = 0xfe;
      *pcVar32 = 0x45;
      do {
        cVar2 = *pcVar37;
        pcVar37 = pcVar37 + 1;
        pcVar32 = pcVar32 + 1;
        if (cVar2 == '\0') {
          return (void *)0x0;
        }
        *pcVar32 = *pcVar37;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      *pcVar32 = '\0';
      return (void *)0x0;
    }
    FUN_005eb2e0(pcVar32 + 0x3f4,puVar14,puVar13,0x6fe);
    pcVar3 = (code *)**(undefined4 **)(puVar12 + 0x8d);
    puVar12[5] = uVar16;
    (*pcVar3)(uVar43 - 0x428,0,uVar43 - 0x81c,0x2c);
    uVar16 = puVar12[5];
  }
  iVar18 = *(int *)((int)puVar12 + 0x74);
  iVar19 = (int)uVar16;
  pcVar37 = pcVar32;
  if (((((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) || (iVar18 == 0x684b4942)) ||
      (iVar18 == 0x694b4942)) && (*(int *)(puVar12 + 0x95) == 0)) {
    uVar4 = *(uint *)((int)puVar12 + 0x7c);
    if (uVar4 == 0) {
      pcVar31 = *(char **)(iVar19 + -0x7e70);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
    else {
      uVar26 = *(uint *)((int)puVar12 + 0x84);
      if ((uVar4 <= uVar26) && (uVar26 < 0xf4241)) {
        uVar47 = *(uint *)(puVar12 + 0xf);
        if ((((*(uint *)(puVar12 + 0x10) <= uVar47) &&
             ((uVar35 = *(uint *)((int)puVar12 + 0x9c), uVar35 < 0x101 &&
              (uVar26 * (uVar35 * 4 + 4) <= uVar47)))) &&
            (uVar29 = *(uint *)(puVar12 + 0x11), uVar29 < 0x8000)) &&
           (uVar5 = *(uint *)((int)puVar12 + 0x8c), uVar5 < 0x8000)) {
          uVar6 = *(uint *)(puVar12 + 0x12);
          if ((uVar6 != 0) && (uVar7 = *(uint *)((int)puVar12 + 0x94), uVar7 != 0)) {
            uVar8 = *(uint *)(puVar12 + 0x13);
            uVar28 = ((param_3 << 0x20) >> 0x3f) << 0x1f | param_3 & 0xfffffff |
                     (ulonglong)uVar8 & 0x20000;
            *(uint *)(puVar12 + 0x79) = (uVar29 + 0xf >> 4) + 0xf & 0xfffffff0;
            *(uint *)((int)puVar12 + 0x444) = uVar5;
            *(uint *)(puVar12 + 0x5b) = uVar29;
            *(uint *)((int)puVar12 + 0x2dc) = uVar5;
            *(uint *)(puVar12 + 0x88) = uVar29;
            *(int *)((int)puVar12 + 0x7b4) = iVar18;
            *(uint *)((int)puVar12 + 0x2fc) = uVar8;
            *(int *)(puVar12 + 0x5f) = (int)uVar28;
            if ((uVar8 & 0x100000) == 0) {
              uVar28 = (param_3 & 0xfffff | (ulonglong)uVar8 & 0x20000) << 0xb |
                       (uVar28 << 0x20) >> 0x35;
              *(uint *)(puVar12 + 0x5f) = (uint)(uVar28 << 0x15) | (uint)uVar28 >> 0xb;
            }
            iVar19 = (int)(param_3 & 0x70000000);
            if (iVar19 == 0x70000000) goto LAB_005f1d5c;
            if (iVar19 == 0) {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | (ulonglong)uVar8 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            else {
              uVar28 = (ulonglong)*(uint *)(puVar12 + 0x5f) | param_3 & 0x70000000;
              *(int *)(puVar12 + 0x5f) = (int)uVar28;
            }
            iVar19 = (int)(uVar28 & 0x70000000);
            if (iVar19 == 0x30000000) {
              iVar19 = *(int *)((int)puVar12 + 0x2dc);
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            else if ((uVar28 & 0x70000000) < 0x30000001) {
              if ((iVar19 == 0x10000000) || (iVar19 == 0x20000000)) {
                iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
                *(int *)((int)puVar12 + 0x2dc) = iVar19;
              }
              else {
LAB_005f1d5c:
                iVar19 = *(int *)((int)puVar12 + 0x2dc);
              }
            }
            else {
              if ((iVar19 != 0x40000000) && (iVar19 != 0x50000000)) goto LAB_005f1d5c;
              iVar19 = (int)(((ulonglong)*(uint *)((int)puVar12 + 0x2dc) & 0x7fffffff) << 1);
              *(int *)((int)puVar12 + 0x2dc) = iVar19;
              *(int *)(puVar12 + 0x5b) = *(int *)(puVar12 + 0x5b) << 1;
            }
            if ((iVar18 == 0x664b4942) || (iVar18 == 0x674b4942)) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x18000;
            }
            else if (iVar18 == 0x684b4942) {
              *(uint *)(puVar12 + 0x5f) = *(uint *)(puVar12 + 0x5f) | 0x8000;
            }
            *(uint *)(puVar12 + 0x5c) = uVar4;
            *(uint *)((int)puVar12 + 0x3d4) = uVar26;
            if (((param_3 & 0x1000) == 0) || (*(int *)(param_2 + 1) == -1)) {
              *(uint *)((int)puVar12 + 0x2ec) = uVar6;
              *(uint *)(puVar12 + 0x5e) = uVar7;
            }
            else {
              uVar17 = *(undefined4 *)((int)param_2 + 0xc);
              *(int *)((int)puVar12 + 0x2ec) = *(int *)(param_2 + 1);
              *(undefined4 *)(puVar12 + 0x5e) = uVar17;
            }
            *(uint *)(puVar12 + 0x60) = uVar47;
            *(uint *)(puVar12 + 0x62) = uVar35;
            *(uint *)(puVar12 + 0x7a) = *(uint *)(puVar12 + 0x10);
            *(uint *)((int)puVar12 + 0x3cc) = *(int *)(puVar12 + 0x79) * (iVar19 + 0xfU >> 4);
            *(uint *)(puVar12 + 0xef) = uVar6;
            *(uint *)((int)puVar12 + 0x77c) = uVar7;
            iVar18 = (int)(((ulonglong)(uVar7 >> 1) + (ulonglong)uVar6 & 0xffffffff) /
                          (ulonglong)uVar7);
            *(int *)(puVar12 + 0xe5) = iVar18;
            if (iVar18 == 0) {
              *(undefined4 *)(puVar12 + 0xe5) = 1;
            }
            uVar28 = uVar42 & 0xffffffff;
            bVar48 = (uVar40 == 0) << 1;
            FUN_005fd700(uVar28,uVar43 - 0x184,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x180,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x17c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x178,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x174,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x170,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            FUN_005fd700(uVar28,uVar43 - 0x16c,
                         ((ulonglong)*(uint *)(puVar12 + 0xe5) & 0x3fffffff) << 2);
            if ((bool)(bVar48 >> 1 & 1)) {
              iVar18 = 0x180;
            }
            else {
              iVar18 = uVar40 * 0x200 + (uVar40 & 0x1ffffff) * -0x80;
            }
            uVar28 = uVar42 & 0xffffffff;
            FUN_005fd700(uVar28,uVar43 - 0x464,iVar18);
            FUN_005fd700(uVar28,uVar43 - 0x4cc,((ulonglong)uVar40 & 0x3fffffff) << 2);
            FUN_005f8758(uVar43 - 0x488,*(int *)(puVar12 + 0x5b) + 0xfU & 0xfffffff0);
            if (bVar1) {
              FUN_005fd700(uVar28,uVar43 - 0x448,
                           (*(int *)(puVar12 + 0x62) * 3 + *(int *)((int)puVar12 + 0x3d4)) * 4 +
                           0x104);
            }
            iVar18 = *(int *)(puVar12 + 0xe8);
            iVar19 = FUN_005fd778(uVar28);
            *(int *)(puVar12 + 0xe8) = iVar19 + iVar18 + 0x4f0;
            __dest = (void *)FUN_005fd790(uVar28,0x4f0);
            if (__dest != (void *)0x0) {
              memcpy(__dest,(void *)(uVar43 - 0x5b8),0x4f0);
              *(void **)((int)__dest + 0x1ac) = __dest;
              **(undefined4 **)((int)__dest + 0x438) = 0;
              **(undefined4 **)((int)__dest + 0x43c) = 0;
              **(undefined4 **)((int)__dest + 0x440) = 0;
              **(undefined4 **)((int)__dest + 0x444) = 0;
              **(undefined4 **)((int)__dest + 0x448) = 0;
              **(undefined4 **)((int)__dest + 0x44c) = 0;
              pcVar31 = pcVar32;
              if (bVar1) {
                iVar18 = *(int *)(puVar12 + 0x62);
                iVar19 = *(int *)((int)puVar12 + 0x3d4);
                iVar23 = (*(int *)((int)__dest + 0x170) + 0x100U & 0xffffff80) - 0x54;
                *(int *)((int)__dest + 0x170) = iVar23;
                pcVar3 = (code *)**(undefined4 **)((int)__dest + 400);
                puVar12[5] = uVar16;
                (*pcVar3)((int)__dest + 400,0xffffffffffffffff,iVar23,(iVar18 * 3 + iVar19) * 4 + 4)
                ;
                uVar16 = puVar12[5];
                iVar19 = *(int *)(puVar12 + 0x62) * 4;
                iVar23 = *(int *)((int)__dest + 0x170) + iVar19;
                iVar18 = iVar23 + iVar19;
                *(int *)((int)__dest + 0x174) = iVar23;
                *(int *)((int)__dest + 0x178) = iVar18;
                *(int *)((int)__dest + 0x158) = iVar18 + iVar19;
                if (*(int *)((int)__dest + 0x1d0) == 0) goto LAB_005f2004;
                pcVar38 = *(char **)((int)uVar16 + -0x7e60);
                lVar49 = 0xfe;
                *pcVar32 = 0x45;
                do {
                  cVar2 = *pcVar38;
                  pcVar38 = pcVar38 + 1;
                  pcVar31 = pcVar31 + 1;
                  if (cVar2 == '\0') goto LAB_005f277c;
                  *pcVar31 = *pcVar38;
                  lVar49 = lVar49 + -1;
                } while (lVar49 != 0);
LAB_005f2774:
                *pcVar31 = '\0';
              }
              else {
                uVar4 = *(uint *)((int)__dest + 0x38);
                *(int *)((int)__dest + 0x170) = param_1 + 0x2c;
                *(uint *)((int)__dest + 0x174) = param_1 + (uVar4 & 0x3fffffff) * 4 + 0x2c;
                *(uint *)((int)__dest + 0x178) = param_1 + uVar4 * 8 + 0x2c;
                *(uint *)((int)__dest + 0x158) =
                     param_1 + uVar4 * 0x10 + (uVar4 & 0x3fffffff) * -4 + 0x2c;
LAB_005f2004:
                uVar4 = *(uint *)((int)__dest + 8);
                uVar28 = (ulonglong)uVar4;
                uVar26 = *(uint *)((int)__dest + 0x450);
                puVar9 = *(uint **)((int)__dest + 0x158);
                uVar27 = ZEXT48(puVar9);
                uVar25 = uVar28 - uVar26;
                if ((int)uVar25 < 0) {
                  uVar25 = 0;
LAB_005f22b4:
                  uVar47 = 1;
                  iVar18 = 0;
LAB_005f20d0:
                  uVar29 = (uint)((((ulonglong)puVar9[uVar4] - (ulonglong)*puVar9) *
                                  (ulonglong)uVar26) / (ulonglong)uVar4);
LAB_005f20f8:
                  if ((int)uVar25 < (int)uVar4) {
                    lVar34 = uVar27 + (uVar25 & 0x3fffffff) * 4;
                    uVar25 = uVar28 - uVar25 & 0xffffffff;
                    lVar30 = lVar34 + 4;
                    uVar4 = *(uint *)lVar34;
                    uVar47 = uVar47 & uVar4;
                    if (uVar4 < *(uint *)lVar30) {
                      do {
                        lVar34 = lVar30 + 4;
                        puVar9 = (uint *)lVar30;
                        uVar25 = uVar25 - 1;
                        if (uVar25 == 0) goto LAB_005f2164;
                        uVar47 = *puVar9 & uVar47;
                        lVar30 = lVar34;
                      } while (*puVar9 < *(uint *)lVar34);
                    }
                    goto LAB_005f22c4;
                  }
LAB_005f2164:
                  *(uint *)((int)__dest + 0x4d4) = uVar47;
                  *(int *)((int)__dest + 0xcc) = iVar18;
                }
                else {
                  if ((int)uVar25 < 1) goto LAB_005f22b4;
                  lVar30 = uVar27 + ((ulonglong)uVar26 & 0x3fffffff) * 4;
                  uVar35 = *puVar9;
                  if (uVar35 < *(uint *)(uVar27 + 4)) {
                    uVar50 = uVar25 & 0xffffffff;
                    uVar47 = uVar35 & 1;
                    uVar35 = *(int *)lVar30 - uVar35;
                    uVar29 = 0;
                    iVar18 = 0;
                    iVar19 = 0;
                    lVar34 = uVar27 + 4;
                    do {
                      lVar30 = lVar30 + 4;
                      lVar15 = lVar34 + 4;
                      if (uVar29 < uVar35) {
                        iVar18 = iVar19;
                        uVar29 = uVar35;
                      }
                      iVar19 = iVar19 + 1;
                      uVar50 = uVar50 - 1;
                      if (uVar50 == 0) {
                        if (uVar29 != 0) goto LAB_005f20f8;
                        goto LAB_005f20d0;
                      }
                      uVar5 = *(uint *)lVar34;
                      uVar47 = uVar5 & uVar47;
                      uVar35 = *(int *)lVar30 - uVar5;
                      lVar34 = lVar15;
                    } while (uVar5 < *(uint *)lVar15);
                  }
LAB_005f22c4:
                  uVar29 = 0xffffffff;
                }
                *(uint *)((int)__dest + 200) = uVar29;
                if (uVar29 == 0xffffffff) {
                  pcVar38 = *(char **)((int)uVar16 + -0x7e64);
                  lVar49 = 0xfe;
                  *pcVar32 = 0x54;
                  do {
                    cVar2 = *pcVar38;
                    pcVar38 = pcVar38 + 1;
                    pcVar31 = pcVar31 + 1;
                    if (cVar2 == '\0') goto LAB_005f277c;
                    *pcVar31 = *pcVar38;
                    lVar49 = lVar49 + -1;
                  } while (lVar49 != 0);
                  goto LAB_005f2774;
                }
                uVar4 = (uint)param_3 & 0x400;
                if ((param_3 & 0x400) != 0) {
LAB_005f2548:
                  if ((((param_3 & 0x1000000) == 0) ||
                      (iVar18 = *(int *)(param_2 + 2), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = *(int *)((int)__dest + 200);
                  }
                  *(int *)((int)__dest + 0x458) = iVar18;
                  if ((((param_3 & 0x400000) == 0) ||
                      (iVar18 = *(int *)((int)param_2 + 0x14), iVar18 == -1)) || (iVar18 == 0)) {
                    iVar18 = 0;
                  }
                  *(int *)((int)__dest + 0x180) = iVar18;
                  if (bVar1) {
                    iVar19 = (int)__dest + 400;
                    uVar17 = *(undefined4 *)((int)__dest + 0x458);
                    pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x198);
                    puVar12[5] = uVar16;
                    uVar28 = (*pcVar3)(iVar19,uVar17);
                    uVar16 = puVar12[5];
                    uVar41 = *(uint *)((int)__dest + 0x28);
                    *(int *)((int)__dest + 0x458) = (int)uVar28;
                    if ((uVar28 + 0x20000 & 0xffffffff) < (ulonglong)uVar41) {
                      if ((((ulonglong)uVar41 / 10) * 9 & 0xffffffff) <= (uVar28 & 0xffffffff)) {
                        *(uint *)((int)__dest + 0x458) = uVar41 + 0x10;
                      }
                    }
                    else {
                      param_3 = param_3 | 0x2000;
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8002000;
                    }
                    if ((param_3 & 0x2000) == 0) {
                      uVar28 = uVar42 & 0xffffffff;
                      FUN_005fd700(uVar28,(int)__dest + 0x4e0,*(int *)((int)__dest + 0xf8) + 0x500);
                      iVar23 = *(int *)((int)__dest + 0x458);
                      iVar22 = *(int *)((int)__dest + 0x468);
                      iVar24 = FUN_005fd778(uVar28);
                      *(int *)((int)__dest + 0x468) = iVar24 + iVar23 + iVar22;
                      iVar23 = FUN_005fd790(uVar28,iVar23);
                      *(int *)((int)__dest + 0x430) = iVar23;
                      if (iVar23 == 0) goto LAB_005f3700;
                      iVar22 = *(int *)((int)__dest + 0x28);
                      uVar17 = *(undefined4 *)((int)__dest + 0x458);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      uVar28 = (*pcVar3)(iVar19,iVar23,uVar17,iVar22 + 8,iVar18);
                      uVar16 = puVar12[5];
                    }
                    else {
                      iVar23 = *(int *)((int)__dest + 0x468);
                      iVar24 = *(int *)((int)__dest + 0x28) -
                               (**(uint **)((int)__dest + 0x158) & 0xfffffffe);
                      iVar46 = iVar24 + 0x408;
                      iVar22 = FUN_005fd778(uVar42 & 0xffffffff);
                      *(int *)((int)__dest + 0x468) = iVar22 + iVar46 + iVar23;
                      iVar23 = FUN_005fd790(uVar42 & 0xffffffff,iVar46);
                      *(int *)((int)__dest + 0x17c) = iVar23;
                      if (iVar23 == 0) {
LAB_005f3700:
                        uVar41 = (uint)param_3 & 0x4000000;
                        if (*(int *)((int)__dest + 0xd0) != 0) {
                          FUN_005f516c(*(int *)((int)__dest + 0xd0));
                        }
                        goto LAB_005f277c;
                      }
                      iVar23 = *(int *)((int)__dest + 0x28);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x19c);
                      puVar12[5] = uVar16;
                      (*pcVar3)(iVar19,0,0,iVar23 + 8,iVar18);
                      uVar17 = *(undefined4 *)((int)__dest + 0x17c);
                      uVar41 = **(uint **)((int)__dest + 0x158);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x194);
                      puVar12[5] = puVar12[5];
                      (*pcVar3)(iVar19,0,uVar41 & 0xfffffffe,uVar17,iVar24 + 8);
                      uVar43 = puVar12[5];
                      iVar18 = (int)uVar43;
                      uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                      uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                      FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x83b);
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a4);
                      puVar12[5] = uVar43;
                      (*pcVar3)(iVar19);
                      uVar16 = puVar12[5];
                      uVar28 = FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x841);
                      *(undefined4 *)((int)__dest + 0x1e4) = 0;
                    }
                  }
                  else {
                    uVar41 = **(uint **)((int)__dest + 0x158);
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    *(uint *)((int)__dest + 0x17c) = (uVar41 & 0xfffffffe) + param_1;
                  }
                  *(undefined4 *)((int)__dest + 0xc) = 0xffffffff;
                  if (*(uint *)((int)__dest + 0x14) == 0) {
                    *(undefined4 *)((int)__dest + 0x47c) = 2000;
                  }
                  else {
                    *(int *)((int)__dest + 0x47c) =
                         (int)(((ulonglong)*(uint *)((int)__dest + 0x18) * 2000) /
                              (ulonglong)*(uint *)((int)__dest + 0x14));
                  }
                  *(undefined4 *)((int)__dest + 0x114) = 1;
                  iVar18 = FUN_005f5090(uVar28);
                  *(int *)((int)__dest + 0x49c) = iVar18 - *(int *)((int)__dest + 0x49c);
                  *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x3c) = 0x10000;
                  *(undefined4 *)((int)__dest + 0x124) = 0;
                  if ((*(int *)((int)__dest + 0x38) == 0) || ((bool)(bVar48 >> 1 & 1))) {
LAB_005f2a30:
                    iVar18 = 0;
                  }
                  else {
                    uVar41 = 0;
                    uVar43 = 0;
                    do {
                      if (0 < *(int *)((int)__dest + 0x38)) {
                        iVar19 = 0;
                        iVar23 = 0;
                        iVar18 = 4;
                        if (**(int **)((int)__dest + 0x178) != *(int *)uVar39) {
                          do {
                            iVar23 = iVar18;
                            iVar19 = iVar19 + 1;
                            if (*(int *)((int)__dest + 0x38) <= iVar19) goto LAB_005f2a18;
                            iVar18 = iVar23 + 4;
                          } while (*(int *)(*(int *)((int)__dest + 0x178) + iVar23) !=
                                   *(int *)uVar39);
                        }
                        uVar26 = 0;
                        iVar18 = *(int *)((int)__dest + 0x124) * 4;
                        *(int *)((int)__dest + 0x124) = *(int *)((int)__dest + 0x124) + 1;
                        *(int *)(*(int *)((int)__dest + 0xec) + iVar18) = iVar19;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x174));
                        if (-1 < (int)uVar4) {
                          uVar26 = uVar4 >> 0x1c & 1;
                        }
                        lVar30 = FUN_005f533c(uVar4 & 0xffff,(uVar4 >> 0x1d & 1) + 1,uVar26);
                        *(int *)((int)puVar12 + iVar18 + 0x118) = (int)lVar30;
                        uVar4 = *(uint *)(iVar23 + *(int *)((int)__dest + 0x170));
                        uVar43 = uVar43 + (((((ulonglong)uVar4 & 0x3fffffff) * 4 + (ulonglong)uVar4
                                            << 0x20) >> 0x22) + 0xff & 0xffffff00) + lVar30 + 0x10;
                      }
LAB_005f2a18:
                      uVar41 = uVar41 + 1;
                      uVar39 = uVar39 + 4;
                    } while (uVar40 != uVar41);
                    if ((int)uVar43 == 0) goto LAB_005f2a30;
                    iVar18 = *(int *)((int)__dest + 0x468);
                    iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                    *(int *)((int)__dest + 0x468) = (int)uVar43 + iVar18 + iVar19;
                    iVar18 = FUN_005fd790(uVar42 & 0xffffffff,uVar43 & 0xffffffff);
                    *(int *)((int)__dest + 0x15c) = iVar18;
                    if (iVar18 == 0) {
                      *(undefined4 *)((int)__dest + 0x124) = 0;
                    }
                  }
                  iVar19 = *(int *)((int)uVar16 + -0x7f18);
                  uVar43 = (ulonglong)*(uint *)((int)uVar16 + -0x7e2c);
                  uVar39 = 0;
                  iVar23 = 0;
                  puVar12[0xfd] = uVar43;
                  *(undefined4 *)(iVar19 + 0xc) = 1;
                  *(undefined4 *)(pcVar32 + 0x114) = 0;
                  while( true ) {
                    iVar22 = (int)uVar16;
                    if ((ulonglong)*(uint *)((int)__dest + 0x124) <= (uVar39 & 0xffffffff)) break;
                    iVar24 = *(int *)((int)__dest + 0x154);
                    iVar46 = (int)((uVar39 & 0xffffffff) << 2);
                    *(int *)(puVar12 + 0xfc) = iVar46;
                    *(undefined4 *)(iVar24 + iVar23 + 0xc) = 0;
                    iVar24 = *(int *)(*(int *)((int)__dest + 0xec) + iVar46) * 4;
                    uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) + iVar24);
                    if ((((int)uVar40 < 0) || ((uVar40 & 0x10000000) != 0)) &&
                       (*(int *)(pcVar32 + 0x5e0) != 0)) {
                      uVar42 = (ulonglong)uVar40 & 0xffff;
                      if (uVar42 < 0x3e801) {
                        lVar30 = ((ulonglong)(uVar40 >> 0x1d) & 1) + 1;
                        uVar40 = *(uint *)(*(int *)((int)__dest + 0x170) + iVar24);
                        uVar28 = ((((ulonglong)uVar40 & 0x3fffffff) * 4 + (ulonglong)uVar40 << 0x20)
                                 >> 0x22) + 0xff & 0xffffff00;
                        uVar25 = uVar42;
                        if ((*(int *)((int)puVar12 + 0x2ec) != 0) && (*(int *)(puVar12 + 0x5e) != 0)
                           ) {
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x2ec);
                          puVar12[0xfe] = (longlong)*(int *)((int)puVar12 + 0x77c);
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0x5e);
                          puVar12[0xfe] = (longlong)(int)uVar42;
                          puVar12[0xfe] = (longlong)*(int *)(puVar12 + 0xef);
                          uVar25 = (ulonglong)*(uint *)(puVar12 + 0xfa);
                          if (0x3e800 < (ulonglong)*(uint *)(puVar12 + 0xfa)) {
                            uVar25 = 0x3e800;
                          }
                        }
                        if (uVar28 <= (ulonglong)
                                      ((longlong)(int)lVar30 * (longlong)(int)(uVar42 << 5) << 0x20)
                                      >> 0x23) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                          uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                          FUN_005eb0f8(uVar43,uVar17,uVar10,0x8c4);
                          iVar22 = *(int *)((int)__dest + 0x154);
                          uVar21 = *(undefined4 *)((int)__dest + 0x20);
                          pcVar3 = (code *)**(undefined4 **)(pcVar32 + 0x5e0);
                          puVar12[5] = uVar16;
                          iVar22 = (*pcVar3)(iVar23 + iVar22,uVar25,0x10,(int)lVar30,uVar21,__dest);
                          uVar16 = puVar12[5];
                          FUN_005eb2e0(uVar43,uVar17,uVar10,0x8cc);
                          if (iVar22 != 0) {
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x1c) = (int)uVar42;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar23 + iVar22 + 0x30) == 0) {
                              *(undefined4 *)(iVar23 + iVar22 + 0x30) = 0xffffffff;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            *(int *)(iVar23 + iVar22 + 8) = (int)uVar28 + 0x10;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = iVar18;
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x54) = 0;
                            uVar40 = 0x2ee - *(int *)(iVar22 + 0x38);
                            iVar24 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)(iVar22 + 8);
                            *(int *)(iVar24 + 0x10) = *(int *)(iVar24 + 0xc) + *(int *)(iVar24 + 8);
                            puVar36 = (undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154));
                            *puVar36 = puVar36[3];
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            *(undefined4 *)(iVar22 + 0x18) = *(undefined4 *)(iVar22 + 0xc);
                            *(uint *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x48) =
                                 (uint)((uVar25 * (longlong)(int)(uVar40 & (int)~uVar40 >> 0x1f) *
                                        lVar30 * 2) / 1000) & 0xfffffffc;
                            iVar22 = *(int *)((int)__dest + 0x154);
                            iVar24 = iVar23 + iVar22;
                            if (*(int *)(iVar24 + 8) - *(int *)(iVar24 + 0x48) < 0x10) {
                              *(int *)(iVar24 + 0x48) = *(int *)(iVar24 + 8) + -0x10;
                              iVar22 = *(int *)((int)__dest + 0x154);
                            }
                            uVar41 = 0;
                            uVar40 = *(uint *)(*(int *)((int)__dest + 0x174) +
                                              *(int *)(*(int *)(puVar12 + 0xfc) +
                                                      *(int *)((int)__dest + 0xec)) * 4);
                            if (-1 < (int)uVar40) {
                              uVar41 = uVar40 >> 0x1c & 1;
                            }
                            uVar21 = FUN_005f5cd0(iVar18,uVar40 & 0xffff,lVar30,uVar41);
                            *(undefined4 *)(iVar23 + iVar22 + 0x14) = uVar21;
                            FUN_005eb0f8(puVar12[0xfd],uVar17,uVar10,0x8f5);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            if (*(int *)(iVar22 + 0x14) == 0) {
                              pcVar3 = (code *)**(undefined4 **)(iVar22 + 0x178);
                              puVar12[5] = uVar16;
                              (*pcVar3)();
                              uVar16 = puVar12[5];
                              *(undefined4 *)(iVar23 + *(int *)((int)__dest + 0x154) + 0xc) = 0;
                            }
                            FUN_005eb2e0(puVar12[0xfd],uVar17,uVar10,0x900);
                            iVar22 = iVar23 + *(int *)((int)__dest + 0x154);
                            iVar18 = iVar18 + *(int *)((int)puVar12 +
                                                      *(int *)(puVar12 + 0xfc) + 0x118);
                            uVar17 = FUN_005f5384(*(undefined4 *)(iVar22 + 0x14));
                            *(undefined4 *)(iVar22 + 4) = uVar17;
                            *(int *)(iVar23 + *(int *)((int)__dest + 0x154) + 0x40) =
                                 *(int *)((int)__dest + 8) -
                                 (int)((((ulonglong)*(uint *)((int)__dest + 0x4a0) & 0x7fffffff) * 2
                                        + (ulonglong)*(uint *)((int)__dest + 0x4a0) & 0xffffffff) /
                                      (((ulonglong)*(uint *)((int)__dest + 0x4a4) & 0x3fffffff) << 2
                                      ));
                          }
                        }
                      }
                    }
                    iVar22 = *(int *)((int)__dest + 0x154);
                    if (*(int *)(iVar23 + iVar22 + 0x3c) == 0) {
                      *(undefined4 *)(iVar23 + iVar22 + 0x3c) = 0x10000;
                      iVar22 = *(int *)((int)__dest + 0x154);
                    }
                    if (*(int *)(iVar23 + iVar22 + 0xc) == 0) {
                      lVar30 = (ulonglong)*(uint *)((int)__dest + 0x124) - 1;
                      iVar22 = *(int *)(puVar12 + 0xfc) + *(int *)((int)__dest + 0xec);
                      *(int *)((int)__dest + 0x124) = (int)lVar30;
                      FUN_005c6094(iVar22,iVar22 + 4,(lVar30 - uVar39 & 0x3fffffff) << 2);
                    }
                    else {
                      uVar39 = uVar39 + 1;
                      iVar23 = iVar23 + 0x180;
                    }
                  }
                  if (*(uint *)((int)__dest + 0x124) == 0) {
LAB_005f2c00:
                    piVar44 = *(int **)(iVar22 + -0x7f14);
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar22 + -0x7ee8);
                    uVar10 = *(undefined4 *)(iVar22 + -0x7f04);
                    puVar13 = pcVar32 + 0x47c;
                    *(undefined4 *)((int)__dest + 0x110) = 1;
                    FUN_005eb0f8(puVar13,uVar17,uVar10,0x924);
                    *(int *)(pcVar32 + 0x5dc) =
                         *(int *)((int)__dest + 0x124) + *(int *)(pcVar32 + 0x5dc);
                    FUN_005eb2e0(puVar13,uVar17,uVar10,0x92a);
                    iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                    if (iVar18 < 1) {
                      iVar23 = (int)__dest + 0x3b0;
                      iVar18 = FUN_005fc508(iVar23,1);
                      if (iVar18 == 0) {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar21 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,iVar23,pcVar32 + 0x630,uVar21);
                          uVar16 = puVar12[5];
                        }
                        if (*(int *)(pcVar32 + 0x5ec) == 0) {
                          *(undefined4 *)(iVar19 + 0x10) = 0xd;
                        }
                        FUN_005eb0f8(puVar13,uVar17,uVar10,0x22c);
                        iVar18 = (int)uVar16;
                        if (*(int *)(pcVar32 + 0x1f0) == 0) {
                          *(undefined4 *)(pcVar32 + 0x4fc) = 0;
                          iVar22 = FUN_005fbfd4(pcVar32 + 0x500,0,0x4000);
                          if (iVar22 != 0) {
                            puVar13 = pcVar32 + 500;
                            iVar22 = FUN_005fc620(puVar13,*(undefined4 *)(iVar18 + -0x7e48),0x8000,0
                                                  ,0,*(undefined4 *)(iVar18 + -0x7edc));
                            if (iVar22 != 0) {
                              *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
                              *(undefined4 *)(pcVar32 + 0x1f0) = 1;
                              FUN_005fccc8(puVar13,0x10);
                              FUN_005fccc8(puVar13,0x10);
                              goto LAB_005f2fac;
                            }
                            FUN_005fc098(pcVar32 + 0x500);
                          }
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005fc490(iVar23);
                          *(undefined4 *)(*(int *)((int)__dest + 0x154) + 0x4c) = 1;
                        }
                        else {
                          *(int *)(pcVar32 + 0x540) = *(int *)(pcVar32 + 0x540) + 1;
LAB_005f2fac:
                          FUN_005eb2e0(pcVar32 + 0x47c,uVar17,uVar10,0x251);
                          FUN_005ec3c8();
                          uVar17 = *(undefined4 *)(iVar18 + -0x7ee4);
                          FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                          for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                              pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                            if (__dest == pvVar20) goto LAB_005f3008;
                          }
                          *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                          *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3008:
                          FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                          *(undefined4 *)((int)__dest + 0x164) = 1;
                        }
                        iVar18 = *(int *)(*(int *)((int)__dest + 0x154) + 0x4c);
                        if ((iVar18 < 0) && (uVar40 = -iVar18, uVar40 < *(uint *)(iVar19 + 0x10))) {
                          *(uint *)(iVar19 + 0x10) = uVar40;
                        }
                      }
                    }
                    else {
                      if (iVar18 != 2) goto LAB_005f2c00;
                      iVar18 = FUN_005fc508((int)__dest + 0x3b0,1);
                      if (iVar18 == 0) {
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)(iVar22 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2ec8;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2ec8:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                      else {
                        piVar44 = *(int **)(iVar22 + -0x7f14);
                        iVar18 = *piVar44;
                        if (iVar18 != 0) {
                          uVar17 = *(undefined4 *)(iVar22 + -0x7ef0);
                          pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                          puVar12[5] = uVar16;
                          (*pcVar3)(iVar18,(int)__dest + 0x3b0,pcVar32 + 0x634,uVar17);
                          uVar16 = puVar12[5];
                        }
                        FUN_005ec3c8();
                        uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                        FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                        for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                            pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                          if (__dest == pvVar20) goto LAB_005f2e60;
                        }
                        *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                        *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f2e60:
                        FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                        *(undefined4 *)((int)__dest + 0x164) = 1;
                      }
                    }
                  }
                  iVar18 = (int)uVar16;
                  uVar17 = *(undefined4 *)(iVar18 + -0x7e40);
                  uVar10 = *(undefined4 *)(iVar18 + -0x7e3c);
                  uVar21 = *(undefined4 *)(iVar18 + -0x7e34);
                  uVar11 = *(undefined4 *)(iVar18 + -0x7e38);
                  *(undefined4 *)((int)__dest + 0x1b4) = *(undefined4 *)(iVar18 + -0x7e44);
                  *(undefined4 *)((int)__dest + 0x1c0) = uVar17;
                  *(undefined4 *)((int)__dest + 0x1b0) = uVar10;
                  *(undefined4 *)((int)__dest + 0x1b8) = uVar11;
                  *(undefined4 *)((int)__dest + 0x1bc) = uVar21;
                  if (((*(uint *)((int)__dest + 0x20) & 0x8000000) != 0) ||
                     (*(int *)((int)__dest + 0x17c) != 0)) goto LAB_005f2c48;
                  iVar23 = (int)__dest + 0x330;
                  iVar19 = FUN_005fc508(iVar23,2);
                  if (iVar19 == 0) {
                    *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                  }
                  else {
                    uVar17 = *(undefined4 *)(iVar18 + -0x7eec);
                    uVar10 = *(undefined4 *)(iVar18 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x528);
                    if (*(int *)(pcVar32 + 0x1ac) == 0) {
                      *(undefined4 *)(pcVar32 + 0x474) = 0;
                      iVar19 = FUN_005fbfd4(pcVar32 + 0x1b0,0,0x4000);
                      if (iVar19 != 0) {
                        iVar19 = FUN_005fc620(pcVar32 + 0x2f4,*(undefined4 *)(iVar18 + -0x7e30),
                                              0x8000,0,0,*(undefined4 *)(iVar18 + -0x7e94));
                        if (iVar19 != 0) {
                          *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
                          *(undefined4 *)(pcVar32 + 0x1ac) = 1;
                          FUN_005fccc8(pcVar32 + 0x2f4,0x10);
                          goto LAB_005f3830;
                        }
                        FUN_005fc098(pcVar32 + 0x1b0);
                      }
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      FUN_005fc490(iVar23);
                      *(uint *)((int)__dest + 0x20) = *(uint *)((int)__dest + 0x20) | 0x8000000;
                    }
                    else {
                      *(int *)(pcVar32 + 0x478) = *(int *)(pcVar32 + 0x478) + 1;
LAB_005f3830:
                      FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x54c);
                      iVar19 = *piVar44;
                      if (iVar19 != 0) {
                        uVar17 = *(undefined4 *)(iVar18 + -0x7f08);
                        pcVar3 = (code *)**(undefined4 **)(iVar19 + 0x5c);
                        puVar12[5] = uVar16;
                        (*pcVar3)(iVar19,iVar23,pcVar32 + 0x638,uVar17);
                        uVar16 = puVar12[5];
                      }
                    }
                  }
                  if ((*(uint *)((int)__dest + 0x20) & 0x8000000) == 0) {
                    FUN_005ec3c8();
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ee4);
                    uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
                    FUN_005eb0f8(pcVar32 + 0x54c,uVar17,uVar10,0x104);
                    for (pvVar20 = *(void **)(pcVar32 + 0x5ec); pvVar20 != (void *)0x0;
                        pvVar20 = *(void **)((int)pvVar20 + 0xe4)) {
                      if (__dest == pvVar20) goto LAB_005f3118;
                    }
                    *(undefined4 *)((int)__dest + 0xe4) = *(undefined4 *)(pcVar32 + 0x5ec);
                    *(void **)(pcVar32 + 0x5ec) = __dest;
LAB_005f3118:
                    FUN_005eb2e0(pcVar32 + 0x54c,uVar17,uVar10,0x115);
                    *(undefined4 *)((int)__dest + 0x164) = 1;
                  }
LAB_005f2c48:
                  iVar18 = FUN_005fc508((int)__dest + 0x2b0,2);
                  if (iVar18 == 0) {
                    trapWord(0x1f,lVar49,lVar49);
                  }
                  iVar18 = *piVar44;
                  if (iVar18 != 0) {
                    uVar17 = *(undefined4 *)((int)uVar16 + -0x7ef4);
                    pcVar3 = (code *)**(undefined4 **)(iVar18 + 0x5c);
                    puVar12[5] = uVar16;
                    (*pcVar3)(iVar18,(int)__dest + 0x2b0,pcVar32 + 0x63c,uVar17);
                    uVar16 = puVar12[5];
                  }
                  if (*(int *)((int)__dest + 0x17c) == 0) {
                    if ((param_3 & 0x200000) == 0) {
                      pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                      puVar12[5] = uVar16;
                      iVar18 = (*pcVar3)((int)__dest + 400);
                      uVar43 = puVar12[5];
                      if (iVar18 != 0) {
                        *(void **)(pcVar32 + 0x610) = __dest;
                        do {
                          pcVar3 = (code *)**(undefined4 **)((int)__dest + 0x1a0);
                          puVar12[5] = uVar43;
                          iVar18 = (*pcVar3)((int)__dest + 400);
                          uVar43 = puVar12[5];
                        } while (iVar18 != 0);
                      }
                    }
                    if (*(int *)(pcVar32 + 0x1ac) != 0) {
                      FUN_005fc190(pcVar32 + 0x1b0,1);
                    }
                  }
                  *(undefined4 *)((int)__dest + 0x4d8) = 0xf0000000;
                  FUN_005eda28(__dest,1);
                  if (((*(int *)((int)__dest + 0x124) != 0) && (*(int *)(pcVar32 + 0x1f0) != 0)) &&
                     (*(int *)(*(int *)((int)__dest + 0x154) + 0x4c) < 1)) {
                    FUN_005fc190(pcVar32 + 0x500,1);
                  }
                  uVar17 = FUN_005fbef8(pcVar32 + 0x640,1);
                  *(undefined4 *)((int)__dest + 0x160) = uVar17;
                  return __dest;
                }
                *(uint *)((int)puVar12 + 0xb4) = uVar4;
                *(uint *)((int)puVar12 + 0xa4) = *(int *)((int)__dest + 0x168) + 7U & 0xfffffff8;
                *(uint *)(puVar12 + 0x15) = *(int *)((int)__dest + 0x16c) + 7U & 0xfffffff8;
                *(uint *)((int)puVar12 + 0xac) =
                     (*(int *)((int)__dest + 0x168) + 1U >> 1) + 7 & 0xfffffff8;
                iVar18 = *(int *)((int)__dest + 0x16c);
                *(undefined4 *)(puVar12 + 0x1a) = 1;
                *(undefined4 *)(puVar12 + 0x17) = 1;
                *(undefined4 *)((int)puVar12 + 0xc4) = 1;
                *(uint *)(puVar12 + 0x16) = (iVar18 + 1U >> 1) + 7 & 0xfffffff8;
                uVar26 = *(uint *)((int)__dest + 0x20);
                *(uint *)((int)puVar12 + 0xe4) = uVar4;
                *(uint *)((int)puVar12 + 0xbc) = uVar4;
                *(uint *)((int)puVar12 + 0xdc) = uVar26 >> 0x14 & 1;
                *(uint *)(puVar12 + 0x19) = uVar4;
                *(uint *)((int)puVar12 + 0xd4) = uVar4;
                *(uint *)(puVar12 + 0x1c) = uVar4;
                *(uint *)(puVar12 + 0x18) = uVar4;
                *(uint *)((int)puVar12 + 0xcc) = uVar4;
                *(uint *)(puVar12 + 0x1b) = uVar4;
                if (*(int *)((int)__dest + 8) == 1) {
                  *(undefined4 *)(puVar12 + 0x14) = 1;
                }
                else {
                  *(undefined4 *)(puVar12 + 0x14) = 2;
                  puVar12[0x1d] = puVar12[0x17];
                  puVar12[0x1e] = puVar12[0x18];
                  puVar12[0x1f] = puVar12[0x19];
                  puVar12[0x20] = puVar12[0x1a];
                  puVar12[0x21] = puVar12[0x1b];
                  puVar12[0x22] = puVar12[0x1c];
                }
                bVar33 = false;
                lVar30 = uVar43 - 0x7d8;
                uVar27 = uVar43 - 0x7b4;
                lVar34 = uVar43 - 0x7c0;
                uVar25 = 0;
                do {
                  uVar50 = uVar25;
                  piVar44 = (int *)lVar34;
                  puVar12[0xfb] = uVar27 & 0xffffffff;
                  piVar45 = (int *)lVar30;
                  lVar30 = lVar30 + 0x30;
                  uVar27 = uVar27 + 0x30;
                  lVar34 = lVar34 + 0x30;
                  uVar4 = *(int *)((int)puVar12 + 0xac) + 0xfU & 0xfffffff0;
                  if (*piVar45 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xbc & 0xfffffffc,
                                 *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    piVar45[2] = *(int *)((int)puVar12 + 0xa4);
                  }
                  if (piVar45[3] != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 200 & 0xfffffff8,uVar4 * *(int *)(puVar12 + 0x16));
                    bVar33 = true;
                    piVar45[5] = uVar4;
                  }
                  if (*piVar44 != 0) {
                    FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 + (uVar50 & 0xfffffff) * -0x10 +
                                        lVar49 + 0xd4 & 0xfffffffc,uVar4 * *(int *)(puVar12 + 0x16))
                    ;
                    bVar33 = true;
                    piVar44[2] = uVar4;
                  }
                  uVar25 = uVar50 + 1;
                  uVar28 = uVar42;
                  if (*(int *)puVar12[0xfb] != 0) {
                    uVar28 = FUN_005fd700(uVar42,(uVar50 & 0x3ffffff) * 0x40 +
                                                 (uVar50 & 0xfffffff) * -0x10 + lVar49 + 0xe0 &
                                                 0xfffffff0,
                                          *(int *)((int)puVar12 + 0xa4) * *(int *)(puVar12 + 0x15));
                    bVar33 = true;
                    *(undefined4 *)((int)puVar12[0xfb] + 8) = *(undefined4 *)((int)puVar12 + 0xa4);
                  }
                } while ((int)uVar25 < *(int *)(puVar12 + 0x14));
                if ((int)uVar25 < 2) {
                  uVar27 = 2 - uVar25 & 0xffffffff;
                  lVar30 = (uVar25 & 0x3ffffff) * 0x40 + (uVar25 & 0xfffffff) * -0x10 + lVar49 +
                           0xbc;
                  if (2 < (int)uVar50 + 2) {
                    uVar27 = 1;
                  }
                  do {
                    puVar36 = (undefined4 *)lVar30;
                    *puVar36 = 0;
                    puVar36[3] = 0;
                    puVar36[6] = 0;
                    uVar27 = uVar27 - 1;
                    lVar30 = lVar30 + 0x30;
                  } while (uVar27 != 0);
                }
                if (!bVar33) goto LAB_005f2548;
                iVar18 = *(int *)((int)__dest + 0x468);
                iVar19 = FUN_005fd778(uVar42 & 0xffffffff);
                *(int *)((int)__dest + 0x468) = iVar19 + iVar18 + 0x78;
                pvVar20 = (void *)FUN_005fd790(uVar42 & 0xffffffff,0x78);
                *(void **)((int)__dest + 0x4e4) = pvVar20;
                if (pvVar20 != (void *)0x0) {
                  *(void **)((int)__dest + 0xd0) = pvVar20;
                  pvVar20 = memcpy(pvVar20,puVar12 + 0x14,0x78);
                  uVar28 = (ulonglong)(int)pvVar20;
                  goto LAB_005f2548;
                }
              }
LAB_005f277c:
              FUN_005f516c(__dest);
            }
            pcVar31 = *(char **)((int)uVar16 + -0x7e68);
            lVar49 = 0xfe;
            *pcVar32 = 0x4f;
            do {
              cVar2 = *pcVar31;
              pcVar31 = pcVar31 + 1;
              pcVar37 = pcVar37 + 1;
              if (cVar2 == '\0') {
                if (uVar41 != 0) {
                  return (void *)0x0;
                }
                goto LAB_005f2240;
              }
              *pcVar37 = *pcVar31;
              lVar49 = lVar49 + -1;
            } while (lVar49 != 0);
            bVar1 = uVar41 == 0;
            goto LAB_005f21c4;
          }
        }
      }
      pcVar31 = *(char **)(iVar19 + -0x7e6c);
      lVar49 = 0xfe;
      *pcVar32 = 0x54;
      do {
        cVar2 = *pcVar31;
        pcVar31 = pcVar31 + 1;
        pcVar37 = pcVar37 + 1;
        if (cVar2 == '\0') goto joined_r0x005f19e4;
        *pcVar37 = *pcVar31;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
    }
  }
  else {
    pcVar31 = *(char **)(iVar19 + -0x7e74);
    lVar49 = 0xfe;
    *pcVar32 = 0x4e;
    do {
      cVar2 = *pcVar31;
      pcVar31 = pcVar31 + 1;
      pcVar37 = pcVar37 + 1;
      if (cVar2 == '\0') goto joined_r0x005f19e4;
      *pcVar37 = *pcVar31;
      lVar49 = lVar49 + -1;
    } while (lVar49 != 0);
  }
LAB_005f21c4:
  *pcVar37 = '\0';
  if (!bVar1) {
    return (void *)0x0;
  }
LAB_005f2240:
  uVar17 = *(undefined4 *)((int)uVar16 + -0x7eec);
  uVar10 = *(undefined4 *)((int)uVar16 + -0x7f04);
  FUN_005eb0f8(pcVar32 + 0x3f4,uVar17,uVar10,0x70f);
  pcVar3 = (code *)**(undefined4 **)((int)puVar12 + 0x47c);
  puVar12[5] = uVar16;
  (*pcVar3)(uVar43 - 0x428);
  FUN_005eb2e0(pcVar32 + 0x3f4,uVar17,uVar10,0x715);
  return (void *)0x0;
joined_r0x005f19e4:
  if (!bVar1) {
    return (void *)0x0;
  }
  goto LAB_005f2240;
}


// 0x05f3984 (0xb8 bytes)
undefined4 FUN_005f3984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  GPiece<56> local_70;
  
  puVar2 = PTR_DAT_0071a410;
  puVar1 = PTR_DAT_0071a40c;
  *(undefined4 *)(PTR_DAT_0071a410 + 8) = 0xffffffff;
  *(undefined4 *)puVar2 = 0xffffffff;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x110) = 0;
  *(undefined8 *)(puVar1 + 0x108) = 0;
  uVar3 = FUN_005f1788(param_1,local_70,param_2);
  return uVar3;
}


// 0x05f3a3c (0x38 bytes)
uint FUN_005f3a3c(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 + 0x1ffffU & 0xfffe0000) + 0x1000;
  if (0x40fff < uVar1) {
    return uVar1;
  }
  return 0x41000;
}


// 0x05f3a74 (0xf8 bytes)
void FUN_005f3a74(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
  }
  uVar1 = param_2 + 0xfffU & 0xfffff000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(uint *)(param_1 + 0xac) = uVar1;
  *(uint *)(param_1 + 0x90) = uVar1;
  uVar2 = param_3 - (uVar1 - param_2) & 0xfffe0000;
  *(uint *)(param_1 + 0x94) = uVar1 + uVar2;
  *(uint *)(param_1 + 0x60) = uVar2;
  *(uint *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = param_4;
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  return;
}


// 0x05f3b70 (0x14c bytes)
undefined4 FUN_005f3b70(undefined4 *param_1,undefined4 param_2,ulonglong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)(param_1 + 0x20);
  if ((param_3 & 0x800000) == 0) {
    iVar8 = FUN_005cf5b8(param_2,0);
    param_1[0x22] = iVar8;
    if (iVar8 == -1) {
      return 0;
    }
    if ((param_3 & 0x20) == 0) goto LAB_005f3bf0;
    lVar7 = *(longlong *)(param_1 + -0x34);
    *plVar9 = lVar7;
  }
  else {
    param_1[0x22] = param_2;
    param_1[0x26] = 1;
    if ((param_3 & 0x20) == 0) {
      lVar7 = FUN_005cf4cc(param_2,0,1);
      *plVar9 = lVar7;
      goto LAB_005f3bf0;
    }
    lVar7 = *(longlong *)(param_1 + -0x34);
    *plVar9 = lVar7;
  }
  if (lVar7 != 0) {
    FUN_005cf4cc(param_1[0x22],lVar7,0);
  }
LAB_005f3bf0:
  puVar6 = PTR_PTR_0071a514;
  puVar5 = PTR_PTR_0071a510;
  puVar4 = PTR_PTR_0071a50c;
  puVar3 = PTR_PTR_0071a508;
  puVar2 = PTR_PTR_0071a504;
  puVar1 = PTR_PTR_0071a500;
  param_1[6] = PTR_PTR_0071a518;
  *param_1 = puVar1;
  param_1[1] = puVar2;
  param_1[2] = puVar3;
  param_1[3] = puVar4;
  param_1[4] = puVar5;
  param_1[5] = puVar6;
  return 1;
}


// 0x05f3cc0 (0xb8 bytes)
void FUN_005f3cc0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    FUN_005cf554(*(undefined4 *)(param_1 + 0x88));
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  return;
}


// 0x05f3d78 (0x658 bytes)
// strings: 00661fb8: 'Loop Seek Period' | 00661fd0: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkfile.c' | 00662010: 'Bink IO' | 00662018: 'seek to file start' | 00662008: '%s %s' | 00662030: 'doing background read'

int FUN_005f3d78(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<96> auStack_c0;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x70) == 0)) {
    if ((*(undefined4 **)(param_1 + 0x24) == (undefined4 *)0x0) ||
       (iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x24))(param_1), puVar3 = PTR_DAT_0071a51c,
       iVar4 == 0)) {
      puVar2 = *(undefined4 **)(param_1 + 0x2c);
      if (puVar2 == (undefined4 *)0x0) {
        return -1;
      }
      iVar4 = -1;
    }
    else {
      uVar7 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0xa4);
      if (((uVar7 == 0) && (*(int *)(param_1 + 0xb0) == 0)) &&
         ((*(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0x80) != 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
        *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) =
             *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0xffffff7f;
        *(undefined4 *)(param_1 + 0x44) = 1;
        iVar4 = *(int *)puVar3;
        if (iVar4 != 0) {
          uVar9 = ZEXT48(PTR_DAT_0071a520);
          (*(code *)**(undefined4 **)(iVar4 + 0x34))(iVar4,uVar9,PTR_s_Loop_Seek_Period_0071a524);
          iVar4 = *(int *)puVar3;
          if (iVar4 != 0) {
            (*(code *)**(undefined4 **)(iVar4 + 0x50))
                      (iVar4,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x19e,uVar9 + 4
                      );
          }
        }
        FUN_005cf4cc(*(undefined4 *)(param_1 + 0x88),
                     (((ulonglong)**(uint **)(*(int *)(param_1 + 0x1c) + 0x158) & 0xfffffffe) - 0x20
                     & 0xffffffff) + *(longlong *)(param_1 + 0x80),0);
        FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),auStack_c0,0x20);
        iVar4 = *(int *)puVar3;
        if (iVar4 != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 0x54))
                    (iVar4,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x1a5);
        }
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      if ((*(uint *)(param_1 + 0xa8) < 0x20000) || (uVar7 == 0)) {
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
      }
      else {
        uVar8 = uVar7;
        if (0x1ffff < uVar7) {
          uVar8 = 0x20000;
        }
        iVar5 = 0;
        if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
          iVar5 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
        }
        uVar10 = *(uint *)(param_1 + 0xa4) & 0x1ffff;
        if ((uVar8 < uVar10) || (uVar8 == uVar7)) {
          uVar10 = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if (uVar10 != 0) {
            uVar7 = uVar10;
            if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
              *(uint *)(param_1 + 0xa0) = uVar10 + *(int *)(param_1 + 0xa0);
            }
            else {
              (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa0,uVar10);
            }
          }
        }
        if (*(int *)(param_1 + 0xb0) != 0) {
          *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) =
               *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0xffffff7f;
          *(undefined4 *)(param_1 + 0xb0) = 0;
        }
        puVar3 = PTR_DAT_0071a51c;
        iVar4 = *(int *)PTR_DAT_0071a51c;
        if (iVar4 != 0) {
          (*(code *)**(undefined4 **)(iVar4 + 0x50))
                    (iVar4,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x1cb,
                     ZEXT48(PTR_DAT_0071a520) + 8);
        }
        *(undefined4 *)(param_1 + 0x44) = 1;
        iVar4 = FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),*(int *)(param_1 + 0xac) + uVar7,
                             uVar8 - uVar10);
        *(undefined4 *)(param_1 + 0x44) = 0;
        if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(param_1 + 0x30))(param_1,iVar4,iVar5);
        }
        if (uVar8 - uVar10 != iVar4) {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x48) = iVar4 + *(int *)(param_1 + 0x48);
          *(int *)(param_1 + 0xa4) = iVar4 + *(int *)(param_1 + 0xa4);
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 0x20000;
          if (*(uint *)(param_1 + 0x94) <= *(uint *)(param_1 + 0xac)) {
            *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x90);
          }
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) - iVar4;
          }
          else {
            (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa8,-iVar4);
          }
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
            *(int *)(param_1 + 0x6c) = iVar4 + *(int *)(param_1 + 0x6c);
          }
          else {
            (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0x6c,iVar4);
          }
          if (*(uint *)(param_1 + 100) < *(uint *)(param_1 + 0x6c)) {
            *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x6c);
          }
          iVar6 = 0;
          if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
            iVar6 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
          }
          iVar6 = iVar6 - iVar5;
          *(int *)(param_1 + 0x50) = iVar6 + *(int *)(param_1 + 0x50);
          if ((iVar1 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
            *(int *)(param_1 + 0x58) = iVar6 + *(int *)(param_1 + 0x58);
          }
          else {
            *(int *)(param_1 + 0x5c) = iVar6 + *(int *)(param_1 + 0x5c);
          }
        }
        iVar1 = *(int *)puVar3;
        if (iVar1 != 0) {
          (*(code *)**(undefined4 **)(iVar1 + 0x54))
                    (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,499);
        }
      }
      puVar2 = *(undefined4 **)(param_1 + 0x28);
      if (puVar2 == (undefined4 *)0x0) {
        return iVar4;
      }
    }
    (*(code *)*puVar2)(param_1);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


// 0x05f43d0 (0x11c bytes)
undefined4 FUN_005f43d0(int param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      if (*(int *)(param_1 + 0x70) == 1) {
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      if ((int)param_2 < 0) {
        FUN_005f3d78(param_1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if ((int)param_2 < 0) {
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
      }
      if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
        return *(undefined4 *)(param_1 + 0x70);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x70);
}


// 0x05f44f0 (0x244 bytes)
// strings: 00662010: 'Bink IO' | 00662008: '%s %s' | 00662048: 'read header' | 00661fd0: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkfile.c'

int FUN_005f44f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
  }
  if ((param_2 != -1) && (*(int *)(param_1 + 0xa4) != param_2)) {
    FUN_005cf4cc(*(undefined4 *)(param_1 + 0x88),(longlong)param_2 + *(longlong *)(param_1 + 0x80),0
                );
    *(int *)(param_1 + 0xa4) = param_2;
  }
  puVar2 = PTR_DAT_0071a51c;
  iVar1 = *(int *)PTR_DAT_0071a51c;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x50))
              (iVar1,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x5e,
               ZEXT48(PTR_DAT_0071a520) + 0xc);
  }
  iVar3 = FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),param_3,param_4);
  iVar1 = *(int *)puVar2;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x54))
              (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x67);
  }
  if (param_4 != iVar3) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  *(int *)(param_1 + 0xa4) = iVar3 + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0xa4);
  uVar4 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0xa4);
  if (*(uint *)(param_1 + 0x60) <= uVar4) {
    uVar4 = *(uint *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x68) = uVar4;
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x38))(param_3,iVar3);
  }
  return iVar3;
}


// 0x05f4738 (0x954 bytes)
// strings: 00661fd0: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkfile.c' | 00662010: 'Bink IO' | 00662060: 'read frame' | 00662008: '%s %s' | 00662070: 'seek to new position' | 006620a0: 'blocking read' | 00662088: 'wait on background' | 00662058: 'Loop' (raw)

int FUN_005f4738(int param_1,uint param_2,uint param_3,void *param_4,uint param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  void *__dest;
  size_t __n;
  uint __n_00;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (*(int *)(param_1 + 0x40) != 0) {
    return 0;
  }
  iVar5 = 0;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    iVar5 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
  }
  puVar4 = PTR_DAT_0071a540;
  puVar3 = PTR_DAT_0071a520;
  puVar2 = PTR_DAT_0071a51c;
  iVar9 = *(int *)PTR_DAT_0071a51c;
  if (iVar9 != 0) {
    if (param_2 < *(uint *)PTR_DAT_0071a540) {
      (*(code *)**(undefined4 **)(iVar9 + 0x34))
                (iVar9,ZEXT48(PTR_DAT_0071a520) + 0x10,PTR_DAT_0071a544);
      iVar9 = *(int *)puVar2;
      *(uint *)puVar4 = param_2;
      if (iVar9 == 0) goto LAB_005f4864;
    }
    else {
      *(uint *)PTR_DAT_0071a540 = param_2;
    }
    (*(code *)**(undefined4 **)(iVar9 + 0x50))
              (iVar9,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x97,
               ZEXT48(puVar3) + 0x14);
  }
LAB_005f4864:
  if ((param_3 == 0xffffffff) || (*(uint *)(param_1 + 0x8c) == param_3)) {
    bVar1 = false;
  }
  else {
    iVar9 = *(int *)puVar2;
    if (iVar9 != 0) {
      (*(code *)**(undefined4 **)(iVar9 + 0x50))
                (iVar9,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0xa2,
                 ZEXT48(PTR_DAT_0071a520) + 0x18);
    }
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
    }
    if ((*(uint *)(param_1 + 0x8c) < param_3) && (param_3 <= *(uint *)(param_1 + 0xa4))) {
      iVar9 = param_3 - *(uint *)(param_1 + 0x8c);
      *(uint *)(param_1 + 0x8c) = param_3;
      *(int *)(param_1 + 0xa8) = iVar9 + *(int *)(param_1 + 0xa8);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - iVar9;
      *(int *)(param_1 + 0xa0) = iVar9 + *(int *)(param_1 + 0xa0);
      if (*(uint *)(param_1 + 0x60) <= *(uint *)(param_1 + 0xa0)) {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x60);
      }
    }
    else {
      FUN_005cf4cc(*(undefined4 *)(param_1 + 0x88),
                   (longlong)(int)param_3 + *(longlong *)(param_1 + 0x80),0);
      *(uint *)(param_1 + 0xa4) = param_3;
      *(uint *)(param_1 + 0x8c) = param_3;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x90);
    }
    iVar9 = *(int *)puVar2;
    bVar1 = true;
    if (iVar9 != 0) {
      (*(code *)**(undefined4 **)(iVar9 + 0x54))
                (iVar9,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0xc3);
    }
  }
  puVar3 = PTR_DAT_0071a558;
  iVar9 = 0;
  __dest = param_4;
  do {
    uVar7 = *(uint *)(param_1 + 0x6c);
    pvVar10 = __dest;
    if (uVar7 != 0) {
      __n_00 = param_5;
      if (uVar7 < param_5) {
        __n_00 = uVar7;
      }
      param_5 = param_5 - __n_00;
      iVar9 = iVar9 + __n_00;
      *(uint *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + __n_00;
      __n = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0xa0);
      if (__n <= __n_00) {
        pvVar10 = (void *)((int)__dest + __n);
        __n_00 = __n_00 - __n;
        memcpy(__dest,(void *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0xa0)),__n);
        *(undefined4 *)(param_1 + 0xa0) = 0;
        if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
          *(size_t *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - __n;
LAB_005f4ea8:
          *(size_t *)(param_1 + 0xa8) = __n + *(int *)(param_1 + 0xa8);
        }
        else {
          (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0x6c,-__n);
          if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) goto LAB_005f4ea8;
          (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa8,__n);
        }
        __dest = pvVar10;
        if (__n_00 == 0) goto LAB_005f4d2c;
      }
      pvVar10 = (void *)((int)__dest + __n_00);
      memcpy(__dest,(void *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0xa0)),__n_00);
      if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
        *(uint *)(param_1 + 0xa0) = __n_00 + *(int *)(param_1 + 0xa0);
      }
      else {
        (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa0,__n_00);
      }
      if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) - __n_00;
      }
      else {
        (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0x6c,-__n_00);
        if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(param_1 + 0x3c))(param_1 + 0xa8,__n_00);
          goto LAB_005f4d2c;
        }
      }
      *(uint *)(param_1 + 0xa8) = __n_00 + *(int *)(param_1 + 0xa8);
    }
LAB_005f4d2c:
    if (param_5 == 0) {
      iVar8 = 0;
      iVar6 = *(int *)(param_1 + 0x54);
      if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
        iVar8 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
      }
      bVar1 = !bVar1;
      *(int *)(param_1 + 0x54) = iVar6 + (iVar8 - iVar5);
      goto LAB_005f4b84;
    }
    bVar1 = !bVar1;
    if (!bVar1) goto LAB_005f49b4;
    iVar6 = *(int *)puVar2;
    if (iVar6 != 0) {
      (*(code *)**(undefined4 **)(iVar6 + 0x50))
                (iVar6,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0xff,puVar3);
    }
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + 0x20))(param_1);
    }
    iVar6 = *(int *)puVar2;
    if (iVar6 != 0) {
      (*(code *)**(undefined4 **)(iVar6 + 0x54))
                (iVar6,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x105);
    }
    bVar1 = true;
    __dest = pvVar10;
  } while (*(int *)(param_1 + 0x6c) != 0);
  bVar1 = false;
LAB_005f49b4:
  iVar6 = *(int *)puVar2;
  if (iVar6 != 0) {
    (*(code *)**(undefined4 **)(iVar6 + 0x50))
              (iVar6,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x10e,
               ZEXT48(PTR_DAT_0071a520) + 0x20);
  }
  iVar6 = 0;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    iVar6 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) =
         *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) & 0xffffff7f;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  uVar7 = FUN_005cfc44(*(undefined4 *)(param_1 + 0x88),pvVar10,param_5);
  if (uVar7 < param_5) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x30))(param_1,uVar7,iVar6);
  }
  iVar9 = iVar9 + uVar7;
  iVar8 = 0;
  *(uint *)(param_1 + 0xa4) = uVar7 + *(int *)(param_1 + 0xa4);
  *(uint *)(param_1 + 0x8c) = uVar7 + *(int *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x48) = uVar7 + *(int *)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    iVar8 = (*(code *)**(undefined4 **)(param_1 + 0x34))();
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar8 - iVar6);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar8 - iVar5);
  iVar5 = *(int *)puVar2;
  if (iVar5 != 0) {
    (*(code *)**(undefined4 **)(iVar5 + 0x54))
              (iVar5,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x129);
  }
LAB_005f4b84:
  uVar7 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x8c);
  if (*(uint *)(param_1 + 0x60) <= uVar7) {
    uVar7 = *(uint *)(param_1 + 0x60);
  }
  *(uint *)(param_1 + 0x68) = uVar7;
  if (*(uint *)(param_1 + 0x68) < *(int *)(param_1 + 0x6c) + 0x20000U) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
  }
  if ((!bVar1) && (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)(param_1 + 0x28))(param_1);
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x38))(param_4,iVar9);
  }
  iVar5 = *(int *)puVar2;
  if (iVar5 != 0) {
    (*(code *)**(undefined4 **)(iVar5 + 0x54))
              (iVar5,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a528,0x140);
  }
  return iVar9;
}


// 0x05f5090 (0xcc bytes)
ulonglong FUN_005f5090(void)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  puVar1 = PTR_DAT_0071a55c;
  if (*(longlong *)PTR_DAT_0071a55c == 0) {
    uVar3 = sys_time_get_system_time();
    *(undefined8 *)puVar1 = uVar3;
  }
  lVar2 = sys_time_get_system_time();
  lVar4 = *(longlong *)(puVar1 + 8);
  if (0xc000000000000000 < (ulonglong)(lVar2 - lVar4)) {
    *(longlong *)(puVar1 + 8) = lVar4;
    return (lVar4 - *(longlong *)puVar1) / 1000 & 0xffffffff;
  }
  *(longlong *)(puVar1 + 8) = lVar2;
  return (lVar2 - *(longlong *)puVar1) / 1000 & 0xffffffff;
}


// 0x05f515c (0x10 bytes)
void FUN_005f515c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071a560;
  *(undefined4 *)(PTR_DAT_0071a560 + 4) = param_2;
  *(undefined4 *)puVar1 = param_1;
  return;
}


// 0x05f516c (0x98 bytes)
void FUN_005f516c(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + -2) == '\x03') {
      (*(code *)**(undefined4 **)(param_1 + -0xc))(param_1 - (uint)*(byte *)(param_1 + -1));
      return;
    }
    FUN_005d580c(param_1 - (uint)*(byte *)(param_1 + -1));
  }
  return;
}


// 0x05f5204 (0x138 bytes)
int FUN_005f5204(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = PTR_DAT_0071a560;
  if (param_1 - 1U < 0xfffffffe) {
    if ((*(undefined4 **)PTR_DAT_0071a560 == (undefined4 *)0x0) ||
       (uVar2 = (*(code *)**(undefined4 **)PTR_DAT_0071a560)(param_1 + 0x40), uVar2 == 0)) {
      uVar2 = FUN_005d5838(param_1 + 0x40);
      if (uVar2 != 0) {
        uVar4 = 0x40 - (uVar2 & 0x1f);
        iVar3 = uVar2 + (uVar4 & 0xff);
        *(char *)(iVar3 + -1) = (char)uVar4;
        *(undefined1 *)(iVar3 + -2) = 0;
        return iVar3;
      }
    }
    else if (uVar2 != 0xffffffff) {
      uVar4 = 0x40 - (uVar2 & 0x1f);
      iVar3 = (uVar4 & 0xff) + uVar2;
      *(char *)(iVar3 + -1) = (char)uVar4;
      *(undefined1 *)(iVar3 + -2) = 3;
      *(undefined4 *)(iVar3 + -0xc) = *(undefined4 *)(puVar1 + 4);
      return iVar3;
    }
  }
  return 0;
}


// 0x05f533c (0x48 bytes)
longlong FUN_005f533c(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x800;
  if ((param_1 < 0xac44) && (iVar1 = 0x400, param_1 < 0x5622)) {
    return ((ulonglong)((longlong)(param_2 << 1) << 0x29) >> 0x24) + 0xd0;
  }
  return ((ulonglong)((longlong)iVar1 * (longlong)(param_2 << 1) << 0x20) >> 0x24) + 0xd0;
}


// 0x05f5384 (0x8 bytes)
undefined4 FUN_005f5384(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// 0x05f538c (0x8 bytes)
undefined4 FUN_005f538c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// 0x05f5398 (0x934 bytes)
void FUN_005f5398(undefined4 *param_1,undefined4 param_2,ulonglong param_3,undefined4 param_4,
                 ulonglong param_5,uint *param_6,undefined4 param_7,ulonglong param_8)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  longlong lVar19;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar20;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong uVar21;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong unaff_r28;
  ulonglong uVar26;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint *puVar27;
  uint *puVar28;
  ulonglong unaff_r31;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong in_LR;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar47;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  float afStack_1a0 [104];
  GPiece<16> auVar42;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  
  uVar33 = ZEXT48(&stack0x00000000);
  lVar2 = uVar33 - 0x210;
  puVar7 = (ulonglong *)lVar2;
  *puVar7 = uVar33;
  puVar7[0x3f] = in_f29;
  puVar7[0x2d] = unaff_r14;
  puVar7[0x2e] = unaff_r15;
  puVar7[0x30] = unaff_r17;
  puVar7[0x32] = unaff_r19;
  puVar7[0x35] = unaff_r22;
  puVar7[0x37] = unaff_r24;
  puVar7[0x40] = in_f30;
  puVar7[0x41] = in_f31;
  puVar7[0x2f] = unaff_r16;
  puVar7[0x31] = unaff_r18;
  puVar7[0x33] = unaff_r20;
  puVar7[0x34] = unaff_r21;
  puVar7[0x36] = unaff_r23;
  puVar7[0x38] = unaff_r25;
  puVar7[0x39] = unaff_r26;
  puVar7[0x3a] = unaff_r27;
  puVar7[0x3b] = unaff_r28;
  puVar7[0x3c] = unaff_r29;
  puVar7[0x3d] = unaff_r30;
  puVar7[0x3e] = unaff_r31;
  puVar7[0x44] = in_LR;
  puVar7[0x24] = param_3;
  puVar7[0x26] = param_5;
  puVar7[0x28] = param_8;
  *(undefined4 *)(puVar7 + 0x23) = param_2;
  iVar20 = param_1[8];
  *(undefined4 *)(puVar7 + 0x27) = param_7;
  *(undefined4 *)(puVar7 + 0x25) = param_4;
  *(undefined4 **)((int)puVar7 + 0x114) = param_1;
  *(int *)((int)puVar7 + 0x11c) = (int)param_3;
  *(int *)((int)puVar7 + 300) = (int)param_5;
  *(int *)((int)puVar7 + 0x13c) = (int)param_8;
  uVar3 = param_1[2];
  uVar22 = (ulonglong)uVar3;
  dVar35 = (double)(float)param_1[3];
  iVar4 = param_1[7];
  uVar30 = param_1[0xb];
  *(undefined4 *)(puVar7 + 0x21) = param_1[10];
  *(undefined4 *)((int)puVar7 + 0x10c) = param_1[1];
  uVar18 = param_1[9];
  uVar31 = param_1[5];
  *(undefined4 *)(puVar7 + 0x22) = 0;
  if (iVar20 == 0) {
    *(undefined4 *)(puVar7 + 0x22) = param_1[6];
  }
  *(uint *)(puVar7 + 0x29) = uVar30 & 1;
  *(undefined4 *)((int)puVar7 + 0x104) = *param_1;
  if ((uVar30 & 1) == 0) {
    puVar27 = *(uint **)(puVar7 + 0x25);
    uVar23 = 0;
    uVar29 = 0;
  }
  else {
    puVar6 = *(uint **)(puVar7 + 0x25);
    uVar30 = 0;
    if (param_6 <= puVar6) goto LAB_005f5a90;
    puVar27 = puVar6 + 1;
    uVar29 = 0x1e;
    uVar23 = (ulonglong)(*puVar6 >> 2);
  }
  if (iVar4 != 0) {
    uVar21 = (ulonglong)*(uint *)(puVar7 + 0x27);
    lVar19 = ((ulonglong)uVar3 & 0x3fffffff) * 4;
    iVar20 = 0;
    puVar10 = PTR_DAT_0071a568;
    uVar24 = uVar29;
    do {
      PTR_DAT_0071a568 = puVar10;
      if (uVar24 < 0x1d) {
        if (puVar27 < param_6) {
          uVar30 = (uint)uVar29;
          uVar29 = uVar29 + 3;
          uVar23 = uVar23 | *puVar27 << (uVar30 & 0x3f);
          uVar24 = (ulonglong)(*puVar27 >> (0x1d - uVar30 & 0x3f));
          puVar27 = puVar27 + 1;
          goto LAB_005f54e0;
        }
LAB_005f561c:
        memset(uVar21 & 0xffffffff,0,lVar19);
      }
      else {
        uVar29 = uVar29 - 0x1d;
        uVar24 = (uVar23 << 0x20) >> 0x3d;
LAB_005f54e0:
        puVar7[0x2a] = (uVar23 & 0x1fffffff) >> 5 & 0x7fffff;
        fVar8 = (float)(longlong)puVar7[0x2a] *
                *(float *)(puVar10 + ((uint)((uVar23 & 0x1fffffff) << 2) & 0x7c));
        if ((uVar23 & 0x10000000) != 0) {
          fVar8 = -fVar8;
        }
        *(float *)uVar21 = fVar8;
        if ((uVar29 & 0xffffffff) < 0x1d) {
          uVar23 = uVar24;
          if (param_6 <= puVar27) goto LAB_005f561c;
          uVar30 = (uint)uVar29;
          uVar29 = uVar29 + 3;
          uVar24 = uVar24 | *puVar27 << (uVar30 & 0x3f);
          uVar23 = (ulonglong)(*puVar27 >> (0x1d - uVar30 & 0x3f));
          puVar27 = puVar27 + 1;
        }
        else {
          uVar29 = uVar29 - 0x1d;
          uVar23 = (uVar24 << 0x20) >> 0x3d;
        }
        puVar7[0x2a] = (uVar24 & 0x1fffffff) >> 5 & 0x7fffff;
        fVar8 = (float)(longlong)puVar7[0x2a] *
                *(float *)(puVar10 + ((uint)((uVar24 & 0x1fffffff) << 2) & 0x7c));
        if ((uVar24 & 0x10000000) != 0) {
          fVar8 = -fVar8;
        }
        ((float *)uVar21)[1] = fVar8;
        if (uVar18 != 0) {
          uVar24 = (ulonglong)uVar18;
          iVar12 = 0;
          do {
            uVar30 = (uint)uVar29;
            if ((uVar29 & 0xffffffff) < 8) {
              if (param_6 <= puVar27) goto LAB_005f561c;
              uVar5 = *puVar27;
              puVar27 = puVar27 + 1;
              uVar29 = uVar29 + 0x18;
              uVar23 = uVar5 << (uVar30 & 0x3f) | uVar23;
              uVar11 = (ulonglong)(uVar5 >> (8 - uVar30 & 0x3f));
            }
            else {
              uVar11 = (uVar23 << 0x20) >> 0x28;
              uVar29 = uVar29 - 8;
            }
            uVar23 = uVar23 & 0xff;
            pfVar14 = afStack_1a0 + iVar12;
            iVar12 = iVar12 + 1;
            if (0x5f < uVar23) {
              uVar23 = 0x5f;
            }
            *pfVar14 = *(float *)(puVar10 + (int)(uVar23 << 2) + 0x60);
            uVar24 = uVar24 - 1;
            uVar23 = uVar11;
          } while (uVar24 != 0);
        }
        uVar24 = 0;
        dVar36 = (double)DAT_0071a574;
        lVar1 = (ulonglong)*(uint *)((int)puVar7 + 0x114) + 0x34;
        puVar6 = (uint *)lVar1;
        dVar37 = dVar36;
        if ((*puVar6 & 0x7fffffff) == 0) {
          lVar15 = 0;
          do {
            uVar24 = uVar24 + 1;
            iVar12 = (int)lVar15;
            lVar15 = (uVar24 & 0x3fffffff) << 2;
            dVar37 = (double)*(float *)((int)afStack_1a0 + iVar12);
            dVar36 = -dVar37;
          } while ((*(uint *)((int)lVar15 + (int)puVar6) & 0x7fffffff) == 0);
        }
        if (2 < uVar22) {
          uVar26 = uVar21 + 8;
          puVar7[0x2b] = uVar33 - 0x1a0;
          uVar11 = 2;
          do {
            while( true ) {
              if ((int)uVar29 == 0) {
                if (param_6 <= puVar27) goto LAB_005f561c;
                uVar29 = 0x1f;
                uVar23 = (ulonglong)*puVar27;
                puVar27 = puVar27 + 1;
              }
              else {
                uVar29 = uVar29 - 1;
              }
              uVar25 = (uVar23 << 0x20) >> 0x21;
              uVar13 = uVar11 + 8;
              if ((uVar23 & 1) != 0) {
                uVar30 = (uint)uVar23 >> 1;
                if ((uVar29 & 0xffffffff) < 4) {
                  uVar23 = uVar25;
                  if (param_6 <= puVar27) goto LAB_005f561c;
                  uVar5 = (uint)uVar29;
                  uVar29 = uVar29 + 0x1c;
                  uVar30 = uVar30 | *puVar27 << (uVar5 & 0x3f);
                  uVar25 = (ulonglong)(*puVar27 >> (4 - uVar5 & 0x3f));
                  puVar27 = puVar27 + 1;
                }
                else {
                  uVar29 = uVar29 - 4;
                  uVar25 = (uVar23 << 0x20) >> 0x25;
                }
                uVar13 = (ulonglong)(byte)puVar10[(uVar30 & 0xf) + 0x1e0] * 8 + uVar11;
              }
              uVar23 = uVar25;
              if ((uVar29 & 0xffffffff) < 4) {
                if (param_6 <= puVar27) goto LAB_005f561c;
                uVar30 = (uint)uVar29;
                uVar29 = uVar29 + 0x1c;
                uVar32 = (ulonglong)(*puVar27 >> (4 - uVar30 & 0x3f));
                uVar25 = uVar23 | *puVar27 << (uVar30 & 0x3f);
                puVar27 = puVar27 + 1;
              }
              else {
                uVar29 = uVar29 - 4;
                uVar32 = (uVar23 << 0x20) >> 0x24;
                uVar25 = uVar23;
              }
              uVar23 = uVar32;
              uVar25 = uVar25 & 0xf;
              if (uVar22 < (uVar13 & 0xffffffff)) {
                uVar13 = uVar22;
              }
              iVar12 = (int)uVar25;
              if (iVar12 == 0) break;
              uVar32 = uVar13 - uVar11 & 0xffffffff;
              uVar30 = 0xffffffff >> (0x20U - iVar12 & 0x3f);
              if ((uVar11 & 0xffffffff) < (uVar13 & 0xffffffff)) {
                do {
                  while( true ) {
                    iVar9 = (int)((uVar24 & 0xffffffff) << 2);
                    if (*(int *)(iVar9 + (int)puVar6) << 1 == (int)uVar11) {
                      uVar24 = uVar24 + 1;
                      dVar37 = (double)*(float *)((int)puVar7 + iVar9 + 0x70);
                      dVar36 = -dVar37;
                    }
                    uVar17 = (uint)uVar29;
                    pfVar14 = (float *)uVar26;
                    uVar5 = (uint)uVar23;
                    if ((uVar29 & 0xffffffff) < uVar25) break;
                    uVar17 = uVar30 & uVar5;
                    uVar29 = uVar29 - uVar25;
                    uVar23 = (ulonglong)(uVar5 >> iVar12);
                    puVar28 = puVar27;
                    if (uVar17 != 0) goto LAB_005f57f0;
LAB_005f5878:
                    uVar11 = uVar11 + 1;
                    uVar26 = uVar26 + 4;
                    *pfVar14 = 0.0;
                    uVar32 = uVar32 - 1;
                    if (uVar32 == 0) goto LAB_005f588c;
                  }
                  if (param_6 <= puVar27) goto LAB_005f561c;
                  puVar28 = puVar27 + 1;
                  uVar29 = (uVar29 - uVar25) + 0x20;
                  uVar23 = (ulonglong)(*puVar27 >> (iVar12 - uVar17 & 0x3f));
                  uVar17 = uVar30 & (*puVar27 << (uVar17 & 0x3f) | uVar5);
                  puVar27 = puVar28;
                  if (uVar17 == 0) goto LAB_005f5878;
LAB_005f57f0:
                  if ((int)uVar29 == 0) {
                    uVar29 = 0x1f;
                    puVar27 = puVar28 + 1;
                    uVar23 = (ulonglong)*puVar28;
                  }
                  else {
                    uVar29 = uVar29 - 1;
                    puVar27 = puVar28;
                  }
                  dVar34 = dVar36;
                  if ((uVar23 & 1) == 0) {
                    dVar34 = dVar37;
                  }
                  puVar7[0x2a] = (longlong)(int)uVar17;
                  uVar23 = (uVar23 << 0x20) >> 0x21;
                  uVar26 = uVar26 + 4;
                  uVar11 = uVar11 + 1;
                  *pfVar14 = (float)(dVar34 * (double)(longlong)puVar7[0x2a]);
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
LAB_005f588c:
              if (uVar22 <= (uVar11 & 0xffffffff)) goto LAB_005f5894;
            }
            uVar25 = uVar26 & 0xffffffff;
            lVar15 = (uVar13 - uVar11 & 0x3fffffff) * 4;
            uVar26 = uVar26 + lVar15;
            memset(uVar25,0,lVar15);
            lVar15 = (uVar24 & 0x3fffffff) * 4;
            lVar16 = lVar1 + lVar15;
            if (((ulonglong)*(uint *)lVar16 & 0x7fffffff) << 1 < (uVar13 & 0xffffffff)) {
              lVar15 = lVar15 + puVar7[0x2b];
              do {
                lVar16 = lVar16 + 4;
                pfVar14 = (float *)lVar15;
                uVar24 = uVar24 + 1;
                lVar15 = lVar15 + 4;
                dVar37 = (double)*pfVar14;
                dVar36 = -dVar37;
              } while (((ulonglong)*(uint *)lVar16 & 0x7fffffff) << 1 < (uVar13 & 0xffffffff));
            }
            uVar11 = uVar13;
          } while ((uVar13 & 0xffffffff) < uVar22);
        }
LAB_005f5894:
        if (*(int *)(puVar7 + 0x29) != 0) {
          FUN_006019d8(uVar3,uVar21 & 0xffffffff,*(undefined4 *)(puVar7 + 0x21),
                       *(undefined4 *)((int)puVar7 + 0x10c));
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar4 == iVar20) goto LAB_005f59c4;
      uVar24 = uVar29 & 0xffffffff;
      uVar21 = uVar21 + lVar19;
      puVar10 = PTR_DAT_0071a568;
    } while( true );
  }
  lVar19 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
LAB_005f59cc:
  *(float *)(puVar7 + 0x1e) = (float)dVar35;
  uVar33 = (ulonglong)(uVar3 >> 2);
  auVar38 = loadVectorElementWordIndexed(lVar2,0xf0);
  auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  if (uVar3 >> 2 != 0) {
    uVar22 = (ulonglong)*(uint *)(puVar7 + 0x27);
    lVar19 = lVar19 + uVar22;
    auVar51 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a56c & 0xfffffff0);
    uVar30 = *(uint *)(puVar7 + 0x23);
    do {
      uVar18 = (uint)uVar22;
      uVar5 = (uint)lVar19;
      lVar19 = lVar19 + 0x10;
      uVar22 = uVar22 + 0x10;
      auVar39 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(uVar18 & 0xfffffff0),auVar38,(GPiece<16>)0x0
                          );
      auVar43 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(uVar5 & 0xfffffff0),auVar38,(GPiece<16>)0x0)
      ;
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorPackSignedWordSignedSaturate(auVar39,auVar43);
      auVar39 = vectorPermute(auVar39,auVar39,auVar51);
      *(undefined1 (*) [16])(uVar30 & 0xfffffff0) = auVar39;
      uVar33 = uVar33 - 1;
      uVar30 = uVar30 + 0x10;
    } while (uVar33 != 0);
  }
LAB_005f5a4c:
  iVar20 = *(int *)(puVar7 + 0x22);
  iVar12 = *(int *)((int)puVar7 + 0x104);
joined_r0x005f5c8c:
  if (iVar20 != 0) {
    *(int *)(puVar7 + 0x1c) = iVar20;
    auVar38 = loadVectorElementWordIndexed(lVar2,0xe0);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    if (uVar31 != 0) {
      iVar20 = *(int *)(puVar7 + 0x23);
      auVar51 = vectorSplatImmediateSignedHalfWord(8);
      auVar39 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a570 & 0xfffffff0);
      uVar30 = 0;
      do {
        uVar18 = uVar30 + 0x10;
        auVar53 = *(undefined1 (*) [16])(uVar30 + iVar12 & 0xfffffff0);
        auVar43 = *(undefined1 (*) [16])(uVar30 + iVar20 & 0xfffffff0);
        auVar52 = vectorUnpackLowSignedHalfWord(auVar53);
        auVar54.piece<0,2>() = auVar43.piece<0,2>() - auVar53.piece<0,2>();
        auVar54.piece<4,12>() = auVar43.piece<4,12>();
        auVar54.piece<2,2>() = auVar43.piece<2,2>() - auVar53.piece<2,2>();
        auVar40.piece<0,4>() = auVar54.piece<0,4>();
        auVar40.piece<6,10>() = auVar43.piece<6,10>();
        auVar40.piece<4,2>() = auVar43.piece<4,2>() - auVar53.piece<4,2>();
        auVar56.piece<0,6>() = auVar40.piece<0,6>();
        auVar56.piece<8,8>() = auVar43.piece<8,8>();
        auVar56.piece<6,2>() = auVar43.piece<6,2>() - auVar53.piece<6,2>();
        auVar55.piece<0,8>() = auVar56.piece<0,8>();
        auVar55.piece<8,2>() = auVar43.piece<8,2>() - auVar53.piece<8,2>();
        auVar55.piece<10,2>() = auVar43.piece<10,2>() - auVar53.piece<10,2>();
        auVar55.piece<14,2>() = auVar43.piece<14,2>();
        auVar55.piece<12,2>() = auVar43.piece<12,2>() - auVar53.piece<12,2>();
        auVar43.piece<0,14>() = auVar55.piece<0,14>();
        auVar43.piece<14,2>() = auVar55.piece<14,2>() - auVar53.piece<14,2>();
        auVar54 = vectorUnpackHighSignedHalfWord(auVar53);
        auVar55 = vectorMultiplyOddSignedHalfWord(auVar43,auVar39);
        auVar43 = vectorMultiplyEvenSignedHalfWord(auVar43,auVar39);
        auVar47.piece<0,2>() = auVar39.piece<0,2>() + auVar51.piece<0,2>();
        auVar47.piece<4,12>() = auVar39.piece<4,12>();
        auVar47.piece<2,2>() = auVar39.piece<2,2>() + auVar51.piece<2,2>();
        auVar48.piece<0,4>() = auVar47.piece<0,4>();
        auVar48.piece<6,10>() = auVar39.piece<6,10>();
        auVar48.piece<4,2>() = auVar39.piece<4,2>() + auVar51.piece<4,2>();
        auVar49.piece<0,6>() = auVar48.piece<0,6>();
        auVar49.piece<8,8>() = auVar39.piece<8,8>();
        auVar49.piece<6,2>() = auVar39.piece<6,2>() + auVar51.piece<6,2>();
        auVar50.piece<0,8>() = auVar49.piece<0,8>();
        auVar50.piece<8,2>() = auVar39.piece<8,2>() + auVar51.piece<8,2>();
        auVar50.piece<10,2>() = auVar39.piece<10,2>() + auVar51.piece<10,2>();
        auVar50.piece<14,2>() = auVar39.piece<14,2>();
        auVar50.piece<12,2>() = auVar39.piece<12,2>() + auVar51.piece<12,2>();
        auVar39.piece<0,14>() = auVar50.piece<0,14>();
        auVar39.piece<14,2>() = auVar50.piece<14,2>() + auVar51.piece<14,2>();
        auVar56 = vectorShiftRightAlgebraicWord(auVar55,auVar38);
        auVar43 = vectorShiftRightAlgebraicWord(auVar43,auVar38);
        auVar55 = vectorMergeHighWord(auVar43,auVar56);
        auVar43 = vectorMergeLowWord(auVar43,auVar56);
        auVar44.piece<0,4>() = auVar55.piece<0,4>() + auVar54.piece<0,4>();
        auVar44.piece<8,8>() = auVar55.piece<8,8>();
        auVar44.piece<4,4>() = auVar55.piece<4,4>() + auVar54.piece<4,4>();
        auVar45.piece<0,8>() = auVar44.piece<0,8>();
        auVar45.piece<12,4>() = auVar55.piece<12,4>();
        auVar45.piece<8,4>() = auVar55.piece<8,4>() + auVar54.piece<8,4>();
        auVar46.piece<0,12>() = auVar45.piece<0,12>();
        auVar46.piece<12,4>() = auVar45.piece<12,4>() + auVar54.piece<12,4>();
        auVar41.piece<0,4>() = auVar43.piece<0,4>() + auVar52.piece<0,4>();
        auVar41.piece<8,8>() = auVar43.piece<8,8>();
        auVar41.piece<4,4>() = auVar43.piece<4,4>() + auVar52.piece<4,4>();
        auVar42.piece<0,8>() = auVar41.piece<0,8>();
        auVar42.piece<12,4>() = auVar43.piece<12,4>();
        auVar42.piece<8,4>() = auVar43.piece<8,4>() + auVar52.piece<8,4>();
        auVar53.piece<0,12>() = auVar42.piece<0,12>();
        auVar53.piece<12,4>() = auVar42.piece<12,4>() + auVar52.piece<12,4>();
        auVar43 = vectorPackSignedWordSignedSaturate(auVar46,auVar53);
        *(undefined1 (*) [16])(uVar30 + iVar20 & 0xfffffff0) = auVar43;
        uVar30 = uVar18;
      } while (uVar18 < uVar31);
    }
  }
  FUN_005c6094(iVar12,(iVar4 * uVar3 * 2 - uVar31) + *(int *)(puVar7 + 0x23),uVar31);
  uVar31 = param_1[5];
  uVar30 = (int)puVar27 - *(int *)(puVar7 + 0x25) & 0x1fffffff;
LAB_005f5a90:
  iVar20 = *(int *)((int)puVar7 + 0x13c);
  param_1[8] = 0;
  uVar31 = param_1[4] - uVar31;
  if (iVar20 != 0) {
    iVar20 = *(int *)puVar7[0x28];
    if (iVar20 != 0) {
      uVar3 = iVar20 << (param_1[7] & 0x3f);
      if (uVar3 < uVar31) {
        uVar31 = uVar31 - (uVar3 & 0xfffffff0);
        FUN_005c6094(*(int *)(puVar7 + 0x23),*(int *)(puVar7 + 0x23) + (uVar3 & 0x7ffffff0) * 2,
                     uVar31);
        *(undefined4 *)puVar7[0x28] = 0;
      }
      else {
        uVar3 = uVar31 >> (param_1[7] & 0x3f);
        uVar31 = 0;
        *(int *)puVar7[0x28] = iVar20 - uVar3;
      }
    }
  }
  if (*(int *)((int)puVar7 + 0x11c) != 0) {
    *(uint *)puVar7[0x24] = uVar31;
  }
  if (*(int *)((int)puVar7 + 300) != 0) {
    *(int *)puVar7[0x26] = *(int *)(puVar7 + 0x25) + uVar30;
  }
  return;
LAB_005f59c4:
  if (iVar4 != 1) goto LAB_005f59cc;
  *(float *)(puVar7 + 0x20) = (float)dVar35;
  uVar33 = (ulonglong)(uVar3 >> 3);
  auVar38 = loadVectorElementWordIndexed(lVar2,0x100);
  auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  if (uVar3 >> 3 == 0) goto LAB_005f5a4c;
  uVar30 = *(uint *)(puVar7 + 0x27);
  uVar18 = *(uint *)(puVar7 + 0x23);
  do {
    auVar39 = vectorMultiplyAddFloatingPoint
                        (*(undefined1 (*) [16])(uVar30 + 0x10 & 0xfffffff0),auVar38,
                         (GPiece<16>)0x0);
    auVar51 = vectorMultiplyAddFloatingPoint
                        (*(undefined1 (*) [16])(uVar30 & 0xfffffff0),auVar38,(GPiece<16>)0x0);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
    auVar51 = vectorPackSignedWordSignedSaturate(auVar51,auVar39);
    *(undefined1 (*) [16])(uVar18 & 0xfffffff0) = auVar51;
    uVar33 = uVar33 - 1;
    uVar30 = uVar30 + 0x20;
    uVar18 = uVar18 + 0x10;
  } while (uVar33 != 0);
  iVar20 = *(int *)(puVar7 + 0x22);
  iVar12 = *(int *)((int)puVar7 + 0x104);
  goto joined_r0x005f5c8c;
}


// 0x05f5cd0 (0x29c bytes)
int * FUN_005f5cd0(int *param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  
  puVar4 = PTR_DAT_0071a568;
  uVar12 = 0x800;
  if (((param_2 & 0xffffffff) < 0xac44) && (uVar12 = 0x400, (param_2 & 0xffffffff) < 0x5622)) {
    uVar12 = 0x200;
  }
  uVar8 = (longlong)(int)uVar12 * (longlong)param_3;
  uVar3 = uVar8 & 0x7fffffff;
  if ((param_4 & 1) == 0) {
    param_2 = (longlong)(int)param_2 * (longlong)param_3;
    param_3 = 1;
    uVar12 = uVar8;
  }
  uVar1 = (uint)uVar12 >> 1;
  uVar8 = (param_2 + 1 << 0x20) >> 0x21;
  uVar13 = 0;
  lVar14 = 0x19;
  puVar10 = (uint *)(PTR_DAT_0071a568 + 0x1f0);
  do {
    if (uVar8 <= *puVar10) break;
    uVar13 = uVar13 + 1;
    lVar14 = lVar14 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar14 != 0);
  memset(param_1,0,0xa8);
  puVar5 = PTR_DAT_0071a578;
  uVar2 = (uint)(uVar3 << 1);
  *param_1 = (int)(param_1 + 0x2c);
  uVar9 = uVar2 >> 5;
  param_1[10] = 0x800;
  param_1[1] = (int)puVar5;
  param_1[0xc] = (uVar2 >> 4) + 0xb0;
  param_1[0xb] = param_4;
  param_1[7] = param_3;
  param_1[5] = uVar2 >> 4;
  param_1[6] = 0;
  param_1[9] = (int)uVar13;
  param_1[2] = (uint)uVar12;
  param_1[4] = uVar2;
  if (uVar9 == 0x40) {
    param_1[6] = 6;
  }
  else if ((uVar3 << 0x21) >> 0x25 < 0x41) {
    if (uVar9 == 0x20) {
      param_1[6] = 5;
    }
  }
  else if (uVar9 == 0x80) {
    param_1[6] = 7;
  }
  else if (uVar9 == 0x100) {
    param_1[6] = 8;
  }
  dVar15 = (double)(uVar12 & 0xffffffff);
  if ((double)DAT_0071a574 < dVar15) {
    dVar16 = 1.0 / SQRT(dVar15);
    dVar16 = -(dVar15 * dVar16 * dVar16 - DAT_0071a580) * dVar16 * DAT_0071a588;
    dVar16 = -(dVar15 * dVar16 * dVar16 - DAT_0071a580) * dVar16 * DAT_0071a588;
    dVar15 = (double)(float)(dVar16 * DAT_0071a588 *
                            dVar15 * -(dVar15 * dVar16 * dVar16 - DAT_0071a580));
  }
  param_1[3] = (int)(float)((double)DAT_0071a590 / dVar15);
  if ((int)uVar13 != 0) {
    uVar12 = uVar13 & 0xffffffff;
    piVar7 = (int *)(puVar4 + 0x1f0);
    piVar11 = param_1 + 0xd;
    do {
      iVar6 = (int)(((longlong)(int)uVar1 * (longlong)*piVar7 & 0xffffffffU) / uVar8);
      *piVar11 = iVar6;
      if (iVar6 == 0) {
        *piVar11 = 1;
      }
      uVar12 = uVar12 - 1;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar12 != 0);
  }
  param_1[8] = 1;
  *(uint *)((int)param_1 + (int)((uVar13 & 0xffffffff) << 2) + 0x34) = uVar1;
  return param_1;
}


// 0x05f5f70 (0x2e8 bytes)
void FUN_005f5f70(int *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar17;
  ulonglong uVar16;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar7 = (ulonglong)param_2[2];
  uVar4 = param_1[10];
  uVar8 = (ulonglong)uVar4;
  puVar11 = (uint *)param_2[1];
  uVar6 = *param_2;
  if (uVar7 < uVar8) {
    uVar5 = (ulonglong)uVar6 | (ulonglong)*puVar11 << (uVar7 & 0x7f);
    lVar13 = (uVar7 + 0x20) - uVar8;
    uVar15 = (uint)lVar13;
    uVar7 = uVar5 >> (uVar8 & 0x7f);
    uVar17 = (uint)uVar7;
    uVar5 = 0xffffffff >> (0x20 - uVar4 & 0x3f) & uVar5;
    uVar6 = (uint)uVar5;
    puVar11 = puVar11 + 1;
  }
  else {
    lVar13 = uVar7 - uVar8;
    uVar15 = (uint)lVar13;
    uVar17 = uVar6 >> (uVar8 & 0x7f);
    uVar7 = (ulonglong)uVar17;
    uVar6 = 0xffffffffU >> (0x20 - uVar4 & 0x3f) & uVar6;
    uVar5 = (ulonglong)uVar6;
  }
  if (uVar6 != 0) {
    uVar17 = (uint)uVar7;
    uVar15 = (uint)lVar13;
    if (uVar5 <= (uint)param_1[0xb]) {
      pcVar9 = (char *)param_1[0xc];
      *param_1 = (int)pcVar9;
      param_1[1] = (int)(pcVar9 + (int)uVar5);
      if (uVar15 == 0) {
        uVar8 = 0x1f;
        puVar12 = puVar11 + 1;
        uVar7 = (ulonglong)*puVar11;
      }
      else {
        uVar8 = lVar13 - 1;
        puVar12 = puVar11;
      }
      iVar14 = (int)uVar8;
      uVar16 = (uVar7 << 0x20) >> 0x21;
      puVar11 = puVar12;
      if ((uVar7 & 1) == 0) {
        uVar4 = param_1[8];
        iVar14 = param_1[9];
        uVar6 = 0xffffffff >> (0x20 - uVar4 & 0x3f);
        while( true ) {
          uVar15 = (uint)uVar8;
          uVar17 = (uint)uVar16;
          if ((uVar8 & 0xffffffff) < (ulonglong)uVar4) {
            if (param_3 <= puVar11) goto LAB_005f6000;
            uVar2 = *puVar11;
            bVar1 = *(byte *)(iVar14 + ((uVar17 | uVar2 << (uVar15 & 0x3f)) & uVar6));
            bVar3 = bVar1 >> 4;
            uVar7 = (ulonglong)bVar3;
            cVar10 = *(char *)((int)param_1 + (bVar1 & 0xf) + 0x10);
            if ((uVar8 & 0xffffffff) < uVar7) {
              puVar11 = puVar11 + 1;
              uVar16 = (ulonglong)(uVar2 >> (bVar3 - uVar15 & 0x3f));
              uVar8 = (uVar8 - uVar7) + 0x20;
            }
            else {
              uVar8 = uVar8 - uVar7;
              uVar16 = (ulonglong)(uVar17 >> (uint)bVar3);
            }
          }
          else {
            bVar1 = *(byte *)(iVar14 + (uVar17 & uVar6));
            bVar3 = bVar1 >> 4;
            uVar8 = uVar8 - bVar3;
            uVar16 = (ulonglong)(uVar17 >> bVar3);
            cVar10 = *(char *)((int)param_1 + (bVar1 & 0xf) + 0x10);
          }
          if (cVar10 != '\0') {
            if ((int)uVar8 == 0) {
              uVar8 = 0x1f;
              puVar12 = puVar11 + 1;
              uVar16 = (ulonglong)*puVar11;
            }
            else {
              uVar8 = uVar8 - 1;
              puVar12 = puVar11;
            }
            uVar7 = uVar16 & 1;
            uVar16 = (uVar16 << 0x20) >> 0x21;
            puVar11 = puVar12;
            if (uVar7 != 0) {
              cVar10 = -cVar10;
            }
          }
          uVar17 = (uint)uVar16;
          uVar15 = (uint)uVar8;
          *pcVar9 = cVar10;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) break;
          pcVar9 = pcVar9 + 1;
        }
      }
      else {
        if ((uVar8 & 0xffffffff) < 4) {
          puVar11 = puVar12 + 1;
          iVar14 = iVar14 + 0x20;
          uVar16 = uVar16 | (ulonglong)*puVar12 << (uVar8 & 0x7f);
        }
        uVar4 = (uint)uVar16 & 0xf;
        uVar15 = iVar14 - 4;
        uVar7 = uVar16 >> 4;
        uVar17 = (uint)uVar7;
        if ((uVar16 & 0xf) != 0) {
          if (uVar15 == 0) {
            uVar15 = 0x1f;
            uVar7 = (ulonglong)*puVar11;
            puVar11 = puVar11 + 1;
          }
          else {
            uVar15 = iVar14 - 5;
          }
          uVar17 = (uint)uVar7 >> 1;
          if ((uVar7 & 1) != 0) {
            uVar4 = -uVar4;
            uVar17 = (uint)uVar7 >> 1;
          }
        }
        memset(pcVar9,uVar4,uVar5);
      }
      goto LAB_005f6010;
    }
  }
LAB_005f6000:
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6010:
  param_2[2] = uVar15;
  param_2[1] = (uint)puVar11;
  *param_2 = uVar17;
  return;
}


// 0x05f6258 (0x3c4 bytes)
void FUN_005f6258(int *param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar8 = (ulonglong)param_2[2];
  uVar1 = param_1[10];
  uVar9 = (ulonglong)uVar1;
  puVar13 = (uint *)param_2[1];
  uVar14 = *param_2;
  if (uVar8 < uVar9) {
    uVar10 = (ulonglong)uVar14 | (ulonglong)*puVar13 << (uVar8 & 0x7f);
    lVar16 = (uVar8 + 0x20) - uVar9;
    uVar17 = (uint)lVar16;
    uVar8 = uVar10 >> (uVar9 & 0x7f);
    uVar15 = (uint)uVar8;
    uVar10 = 0xffffffff >> (0x20 - uVar1 & 0x3f) & uVar10;
    uVar14 = (uint)uVar10;
    puVar13 = puVar13 + 1;
  }
  else {
    lVar16 = uVar8 - uVar9;
    uVar17 = (uint)lVar16;
    uVar15 = uVar14 >> (uVar9 & 0x7f);
    uVar8 = (ulonglong)uVar15;
    uVar14 = 0xffffffffU >> (0x20 - uVar1 & 0x3f) & uVar14;
    uVar10 = (ulonglong)uVar14;
  }
  if (uVar14 != 0) {
    uVar15 = (uint)uVar8;
    uVar17 = (uint)lVar16;
    if ((int)uVar10 <= param_1[0xb]) {
      pbVar7 = (byte *)param_1[0xc];
      uVar1 = param_1[8];
      iVar2 = param_1[9];
      *param_1 = (int)pbVar7;
      param_1[1] = (int)(pbVar7 + (int)uVar10);
      uVar14 = *(uint *)(param_3 + 0x180);
      if (uVar17 == 0) {
        uVar9 = 0x1f;
        uVar8 = (ulonglong)*puVar13;
        puVar13 = puVar13 + 1;
      }
      else {
        uVar9 = lVar16 - 1;
      }
      if ((uVar8 & 1) != 0) {
        uVar10 = -uVar10 - 0x14;
      }
      uVar8 = (uVar8 << 0x20) >> 0x21;
      uVar3 = 0xffffffff >> (0x20 - uVar1 & 0x3f);
      uVar18 = uVar10 & 0xffffffff;
      if ((int)uVar10 + -1 < 0) {
        uVar18 = 1;
      }
      do {
        uVar17 = (uint)uVar9;
        iVar4 = uVar14 * 4;
        uVar6 = *(uint *)(param_3 + iVar4 + 0x100);
        uVar15 = (uint)uVar8;
        if ((uVar9 & 0xffffffff) < (ulonglong)uVar6) {
          if (param_4 <= puVar13) break;
          bVar12 = *(byte *)(((uVar15 | *puVar13 << (uVar17 & 0x3f)) &
                             0xffffffffU >> (0x20 - uVar6 & 0x3f)) +
                            *(int *)(param_3 + iVar4 + 0x140));
          uVar8 = ((ulonglong)bVar12 << 0x20) >> 0x24;
          uVar6 = (uint)(bVar12 >> 4);
          uVar11 = uVar9 - uVar8;
          uVar14 = (uint)*(byte *)(param_3 + uVar14 * 0x10 + (bVar12 & 0xf));
          if (uVar8 <= (uVar9 & 0xffffffff)) goto LAB_005f6450;
          uVar11 = uVar11 + 0x20;
          uVar15 = *puVar13 >> (uVar6 - uVar17 & 0x3f);
          puVar13 = puVar13 + 1;
          if ((ulonglong)uVar1 <= (uVar11 & 0xffffffff)) goto LAB_005f6458;
LAB_005f6538:
          bVar12 = *(byte *)(iVar2 + ((uVar15 | *puVar13 << ((uint)uVar11 & 0x3f)) & uVar3));
          bVar5 = bVar12 >> 4;
          uVar8 = (ulonglong)(uVar15 >> (uint)bVar5);
          uVar9 = uVar11 - bVar5;
          bVar12 = *(byte *)((int)param_1 + (bVar12 & 0xf) + 0x10);
          if ((uVar11 & 0xffffffff) < (ulonglong)bVar5) {
            uVar9 = uVar9 + 0x20;
            uVar8 = (ulonglong)(*puVar13 >> ((uint)bVar5 - (uint)uVar11 & 0x3f));
            puVar13 = puVar13 + 1;
          }
        }
        else {
          bVar12 = *(byte *)((uVar15 & 0xffffffffU >> (0x20 - uVar6 & 0x3f)) +
                            *(int *)(param_3 + iVar4 + 0x140));
          uVar11 = uVar9 - (((ulonglong)bVar12 << 0x20) >> 0x24);
          uVar6 = (uint)(bVar12 >> 4);
          uVar14 = (uint)*(byte *)(param_3 + uVar14 * 0x10 + (bVar12 & 0xf));
LAB_005f6450:
          uVar15 = uVar15 >> uVar6;
          if ((uVar11 & 0xffffffff) < (ulonglong)uVar1) goto LAB_005f6538;
LAB_005f6458:
          bVar12 = *(byte *)(iVar2 + (uVar15 & uVar3));
          bVar5 = bVar12 >> 4;
          uVar9 = uVar11 - bVar5;
          uVar8 = (ulonglong)(uVar15 >> bVar5);
          bVar12 = *(byte *)((int)param_1 + (bVar12 & 0xf) + 0x10);
        }
        uVar15 = (uint)uVar8;
        uVar17 = (uint)uVar9;
        uVar10 = uVar10 - 1;
        *pbVar7 = (char)uVar14 << 4 | bVar12;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_005f65e0;
        pbVar7 = pbVar7 + 1;
      } while( true );
    }
  }
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6340:
  param_2[2] = uVar17;
  param_2[1] = (uint)puVar13;
  *param_2 = uVar15;
  return;
LAB_005f65e0:
  if ((int)uVar10 < -0x16) {
    memset((undefined1 *)param_1[0xc],*(undefined1 *)param_1[0xc],-uVar10 - 0x15 & 0xffffffff)
    ;
    *(uint *)(param_3 + 0x180) = uVar14;
  }
  else {
    *(uint *)(param_3 + 0x180) = uVar14;
  }
  goto LAB_005f6340;
}


// 0x05f6620 (0x3e4 bytes)
void FUN_005f6620(int *param_1,uint *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar9 = (ulonglong)param_2[2];
  uVar2 = param_1[10];
  uVar10 = (ulonglong)uVar2;
  puVar14 = (uint *)param_2[1];
  uVar15 = *param_2;
  if (uVar9 < uVar10) {
    uVar11 = (ulonglong)uVar15 | (ulonglong)*puVar14 << (uVar9 & 0x7f);
    lVar17 = (uVar9 + 0x20) - uVar10;
    uVar18 = (uint)lVar17;
    uVar9 = uVar11 >> (uVar10 & 0x7f);
    uVar16 = (uint)uVar9;
    uVar11 = 0xffffffff >> (0x20 - uVar2 & 0x3f) & uVar11;
    uVar15 = (uint)uVar11;
    puVar14 = puVar14 + 1;
  }
  else {
    lVar17 = uVar9 - uVar10;
    uVar18 = (uint)lVar17;
    uVar16 = uVar15 >> (uVar10 & 0x7f);
    uVar9 = (ulonglong)uVar16;
    uVar15 = 0xffffffffU >> (0x20 - uVar2 & 0x3f) & uVar15;
    uVar11 = (ulonglong)uVar15;
  }
  if (uVar15 != 0) {
    uVar16 = (uint)uVar9;
    uVar18 = (uint)lVar17;
    if ((int)uVar11 <= param_1[0xb]) {
      pcVar8 = (char *)param_1[0xc];
      uVar2 = param_1[8];
      iVar3 = param_1[9];
      *param_1 = (int)pcVar8;
      param_1[1] = (int)(pcVar8 + (int)uVar11);
      uVar15 = *(uint *)(param_3 + 0x180);
      if (uVar18 == 0) {
        uVar10 = 0x1f;
        uVar9 = (ulonglong)*puVar14;
        puVar14 = puVar14 + 1;
      }
      else {
        uVar10 = lVar17 - 1;
      }
      if ((uVar9 & 1) != 0) {
        uVar11 = -uVar11 - 0x14;
      }
      uVar9 = (uVar9 << 0x20) >> 0x21;
      uVar4 = 0xffffffff >> (0x20 - uVar2 & 0x3f);
      uVar19 = uVar11 & 0xffffffff;
      if ((int)uVar11 + -1 < 0) {
        uVar19 = 1;
      }
      do {
        uVar18 = (uint)uVar10;
        iVar5 = uVar15 * 4;
        uVar7 = *(uint *)(param_3 + iVar5 + 0x100);
        uVar16 = (uint)uVar9;
        if ((uVar10 & 0xffffffff) < (ulonglong)uVar7) {
          if (param_4 <= puVar14) break;
          bVar1 = *(byte *)(((uVar16 | *puVar14 << (uVar18 & 0x3f)) &
                            0xffffffffU >> (0x20 - uVar7 & 0x3f)) +
                           *(int *)(param_3 + iVar5 + 0x140));
          uVar9 = ((ulonglong)bVar1 << 0x20) >> 0x24;
          uVar7 = (uint)(bVar1 >> 4);
          uVar12 = uVar10 - uVar9;
          uVar15 = (uint)*(byte *)(param_3 + uVar15 * 0x10 + (bVar1 & 0xf));
          if (uVar9 <= (uVar10 & 0xffffffff)) goto LAB_005f6818;
          uVar12 = uVar12 + 0x20;
          uVar16 = *puVar14 >> (uVar7 - uVar18 & 0x3f);
          puVar14 = puVar14 + 1;
          if ((ulonglong)uVar2 <= (uVar12 & 0xffffffff)) goto LAB_005f6820;
LAB_005f6920:
          bVar1 = *(byte *)(iVar3 + ((uVar16 | *puVar14 << ((uint)uVar12 & 0x3f)) & uVar4));
          bVar6 = bVar1 >> 4;
          uVar9 = (ulonglong)(uVar16 >> (uint)bVar6);
          uVar10 = uVar12 - bVar6;
          uVar13 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
          if ((uVar12 & 0xffffffff) < (ulonglong)bVar6) {
            uVar10 = uVar10 + 0x20;
            uVar9 = (ulonglong)(*puVar14 >> ((uint)bVar6 - (uint)uVar12 & 0x3f));
            puVar14 = puVar14 + 1;
          }
        }
        else {
          bVar1 = *(byte *)((uVar16 & 0xffffffffU >> (0x20 - uVar7 & 0x3f)) +
                           *(int *)(param_3 + iVar5 + 0x140));
          uVar12 = uVar10 - (((ulonglong)bVar1 << 0x20) >> 0x24);
          uVar7 = (uint)(bVar1 >> 4);
          uVar15 = (uint)*(byte *)(param_3 + uVar15 * 0x10 + (bVar1 & 0xf));
LAB_005f6818:
          uVar16 = uVar16 >> uVar7;
          if ((uVar12 & 0xffffffff) < (ulonglong)uVar2) goto LAB_005f6920;
LAB_005f6820:
          bVar1 = *(byte *)(iVar3 + (uVar16 & uVar4));
          bVar6 = bVar1 >> 4;
          uVar10 = uVar12 - bVar6;
          uVar9 = (ulonglong)(uVar16 >> bVar6);
          uVar13 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
        }
        uVar16 = (uint)uVar9;
        uVar18 = (uint)uVar10;
        uVar13 = uVar13 | (ulonglong)uVar15 << 4;
        bVar6 = (byte)uVar13;
        bVar1 = -(bVar6 & 0x7f);
        if ((uVar13 & 0x80) == 0) {
          bVar1 = bVar6 & 0x7f;
        }
        uVar11 = uVar11 - 1;
        *pcVar8 = bVar1 + 0x80;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) goto LAB_005f69c8;
        pcVar8 = pcVar8 + 1;
      } while( true );
    }
  }
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6708:
  param_2[2] = uVar18;
  param_2[1] = (uint)puVar14;
  *param_2 = uVar16;
  return;
LAB_005f69c8:
  if ((int)uVar11 < -0x16) {
    memset((undefined1 *)param_1[0xc],*(undefined1 *)param_1[0xc],-uVar11 - 0x15 & 0xffffffff)
    ;
    *(uint *)(param_3 + 0x180) = uVar15;
  }
  else {
    *(uint *)(param_3 + 0x180) = uVar15;
  }
  goto LAB_005f6708;
}


// 0x05f6a08 (0x384 bytes)
void FUN_005f6a08(uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar14;
  ulonglong uVar13;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar10 = (ulonglong)param_2[2];
  uVar2 = param_1[10];
  uVar11 = (ulonglong)uVar2;
  puVar15 = (uint *)param_2[1];
  uVar9 = *param_2;
  if (uVar10 < uVar11) {
    uVar8 = (ulonglong)uVar9 | (ulonglong)*puVar15 << (uVar10 & 0x7f);
    lVar19 = (uVar10 + 0x20) - uVar11;
    uVar22 = (uint)lVar19;
    uVar10 = uVar8 >> (uVar11 & 0x7f);
    uVar18 = (uint)uVar10;
    uVar8 = 0xffffffff >> (0x20 - uVar2 & 0x3f) & uVar8;
    uVar9 = (uint)uVar8;
    puVar15 = puVar15 + 1;
  }
  else {
    lVar19 = uVar10 - uVar11;
    uVar22 = (uint)lVar19;
    uVar18 = uVar9 >> (uVar11 & 0x7f);
    uVar10 = (ulonglong)uVar18;
    uVar9 = 0xffffffffU >> (0x20 - uVar2 & 0x3f) & uVar9;
    uVar8 = (ulonglong)uVar9;
  }
  if (uVar9 != 0) {
    uVar18 = (uint)uVar10;
    uVar22 = (uint)lVar19;
    if (uVar8 <= param_1[0xb]) {
      uVar2 = param_1[0xc];
      uVar11 = (ulonglong)uVar2;
      *param_1 = uVar2;
      param_1[1] = uVar2 + (int)uVar8;
      puVar6 = PTR_DAT_0071a598;
      if (uVar22 == 0) {
        uVar20 = 0x1f;
        puVar16 = puVar15 + 1;
        uVar10 = (ulonglong)*puVar15;
      }
      else {
        uVar20 = lVar19 - 1;
        puVar16 = puVar15;
      }
      iVar21 = (int)uVar20;
      uVar17 = (uVar10 << 0x20) >> 0x21;
      uVar18 = (uint)uVar10 >> 1;
      puVar15 = puVar16;
      if ((uVar10 & 1) == 0) {
        uVar2 = param_1[8];
        uVar9 = param_1[9];
        uVar3 = 0xffffffff >> (0x20 - uVar2 & 0x3f);
        uVar10 = 0;
        if ((uVar20 & 0xffffffff) < (ulonglong)uVar2) goto LAB_005f6c34;
        do {
          bVar1 = *(byte *)(uVar9 + ((uint)uVar17 & uVar3));
          bVar5 = bVar1 >> 4;
          uVar20 = uVar20 - bVar5;
          uVar17 = (ulonglong)((uint)uVar17 >> bVar5);
          uVar12 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
          puVar15 = puVar16;
LAB_005f6ba4:
          uVar18 = (uint)uVar17;
          uVar22 = (uint)uVar20;
          if (uVar12 < 0xc) {
            puVar4 = (undefined1 *)uVar11;
            uVar8 = uVar8 - 1;
            iVar21 = (int)uVar8;
            uVar11 = uVar11 + 1;
            *puVar4 = (char)uVar12;
            uVar10 = uVar12;
          }
          else {
            uVar12 = (ulonglong)(byte)puVar6[(int)uVar12 + -0xc];
            if ((uVar8 & 0xffffffff) < uVar12) goto LAB_005f6ad0;
            uVar7 = uVar10 << 8 | uVar10;
            uVar8 = uVar8 - uVar12;
            uVar14 = (uint)uVar7 | (uint)(uVar7 << 0x10);
            uVar7 = uVar11;
            uVar13 = uVar12;
            if ((uVar11 & 3) == 0) {
              do {
                uVar11 = uVar7 + 4;
                *(uint *)uVar7 = uVar14;
                if ((uVar12 - 4 & 0xff) == 0) break;
                uVar12 = uVar12 - 8;
                puVar16 = (uint *)uVar11;
                uVar11 = uVar7 + 8;
                *puVar16 = uVar14;
                uVar7 = uVar11;
              } while ((uVar12 & 0xff) != 0);
            }
            else {
              do {
                uVar13 = uVar13 - 1;
                *(undefined1 *)uVar7 = (char)uVar10;
                uVar7 = uVar7 + 1;
              } while ((uVar13 & 0xff) != 0);
              uVar11 = (uVar12 - 1 & 0xff) + uVar11 + 1;
            }
            iVar21 = (int)uVar8;
          }
          if (iVar21 == 0) goto LAB_005f6ad0;
          puVar16 = puVar15;
        } while ((ulonglong)uVar2 <= (uVar20 & 0xffffffff));
LAB_005f6c34:
        uVar22 = (uint)uVar20;
        if (param_3 <= puVar15) goto LAB_005f6ac0;
        uVar14 = *puVar15;
        bVar1 = *(byte *)(uVar9 + ((uVar18 | uVar14 << (uVar22 & 0x3f)) & uVar3));
        bVar5 = bVar1 >> 4;
        uVar7 = (ulonglong)bVar5;
        uVar12 = (ulonglong)*(byte *)((int)param_1 + (bVar1 & 0xf) + 0x10);
        if ((uVar20 & 0xffffffff) < uVar7) {
          puVar15 = puVar15 + 1;
          uVar17 = (ulonglong)(uVar14 >> (bVar5 - uVar22 & 0x3f));
          uVar20 = (uVar20 - uVar7) + 0x20;
        }
        else {
          uVar20 = uVar20 - uVar7;
          uVar17 = (ulonglong)(uVar18 >> (uint)bVar5);
        }
        goto LAB_005f6ba4;
      }
      if ((uVar20 & 0xffffffff) < 4) {
        puVar15 = puVar16 + 1;
        iVar21 = iVar21 + 0x20;
        uVar17 = uVar17 | (ulonglong)*puVar16 << (uVar20 & 0x7f);
      }
      uVar22 = iVar21 - 4;
      uVar18 = (uint)(uVar17 >> 4);
      memset(uVar2,uVar17 & 0xf,uVar8);
      goto LAB_005f6ad0;
    }
  }
LAB_005f6ac0:
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
LAB_005f6ad0:
  param_2[2] = uVar22;
  param_2[1] = (uint)puVar15;
  *param_2 = uVar18;
  return;
}


// 0x05f6d90 (0x3ac bytes)
void FUN_005f6d90(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar17;
  ulonglong uVar16;
  int iVar18;
  ulonglong uVar19;
  
  if (*param_1 != param_1[1]) {
    return;
  }
  uVar6 = (ulonglong)param_2[2];
  uVar1 = param_1[10];
  uVar8 = (ulonglong)uVar1;
  puVar13 = (uint *)param_2[1];
  uVar11 = *param_2;
  if (uVar6 < uVar8) {
    uVar9 = (ulonglong)uVar11 | (ulonglong)*puVar13 << (uVar6 & 0x7f);
    uVar6 = (uVar6 + 0x20) - uVar8;
    uVar17 = (uint)uVar6;
    uVar8 = uVar9 >> (uVar8 & 0x7f);
    uVar15 = (uint)uVar8;
    uVar9 = 0xffffffff >> (0x20 - uVar1 & 0x3f) & uVar9;
    uVar11 = (uint)uVar9;
    puVar13 = puVar13 + 1;
  }
  else {
    uVar6 = uVar6 - uVar8;
    uVar17 = (uint)uVar6;
    uVar15 = uVar11 >> (uVar8 & 0x7f);
    uVar8 = (ulonglong)uVar15;
    uVar11 = 0xffffffffU >> (0x20 - uVar1 & 0x3f) & uVar11;
    uVar9 = (ulonglong)uVar11;
  }
  if (uVar11 != 0) {
    uVar15 = (uint)uVar8;
    uVar17 = (uint)uVar6;
    if (uVar9 <= (uint)param_1[0xb] >> 1) {
      puVar2 = (undefined2 *)param_1[0xc];
      puVar14 = puVar13;
      if (param_1[3] == 0) {
        uVar4 = (ulonglong)(uint)param_1[2];
        uVar8 = uVar8 & 0xffffffff;
        if ((uVar6 & 0xffffffff) < uVar4) {
          puVar14 = puVar13 + 1;
          uVar16 = uVar6 & 0x7f;
          uVar6 = uVar6 + 0x20;
          uVar8 = uVar8 | (ulonglong)*puVar13 << uVar16;
        }
        uVar16 = uVar6 - uVar4;
        uVar4 = uVar8 >> (uVar4 & 0x7f);
        uVar8 = 0xffffffff >> (0x20U - param_1[2] & 0x3f) & uVar8;
      }
      else {
        uVar1 = param_1[2];
        uVar8 = uVar8 & 0xffffffff;
        uVar4 = (ulonglong)uVar1 - 1;
        if ((uVar6 & 0xffffffff) < (uVar4 & 0xffffffff)) {
          puVar14 = puVar13 + 1;
          uVar16 = uVar6 & 0x7f;
          uVar6 = uVar6 + 0x20;
          uVar8 = uVar8 | (ulonglong)*puVar13 << uVar16;
        }
        uVar6 = uVar6 - uVar1;
        uVar4 = uVar8 >> (uVar4 & 0x7f);
        uVar8 = 0xffffffff >> (0x21 - uVar1 & 0x3f) & uVar8;
        uVar16 = uVar6 + 1;
        if ((int)uVar8 != 0) {
          if ((int)(uVar6 + 1) == 0) {
            uVar6 = 0x1f;
            uVar4 = (ulonglong)*puVar14;
            puVar14 = puVar14 + 1;
          }
          uVar7 = uVar4 & 1;
          uVar4 = (uVar4 << 0x20) >> 0x21;
          uVar16 = uVar6;
          if (uVar7 != 0) {
            uVar8 = -uVar8;
          }
        }
      }
      uVar15 = (uint)uVar4;
      uVar17 = (uint)uVar16;
      uVar6 = uVar9 - 1;
      *puVar2 = (short)uVar8;
      *param_1 = param_1[0xc];
      param_1[1] = param_1[0xc] + (int)(uVar9 << 1);
      if ((int)uVar6 == 0) goto LAB_005f6e68;
      uVar9 = ZEXT48(puVar2) + 2;
      puVar13 = puVar14;
      if (3 < (uVar16 & 0xffffffff)) goto LAB_005f7084;
LAB_005f6f78:
      uVar15 = (uint)uVar4;
      uVar17 = (uint)uVar16;
      if (puVar13 < param_3) {
        puVar14 = puVar13 + 1;
        uVar16 = uVar16 + 0x1c;
        uVar7 = (ulonglong)(*puVar13 << (uVar17 & 0x3f)) | uVar4 & 0xffffffff;
        uVar4 = (ulonglong)(*puVar13 >> (4 - uVar17 & 0x3f));
        do {
          uVar7 = uVar7 & 0xf;
          uVar12 = uVar6;
          if (8 < (uVar6 & 0xffffffff)) {
            uVar12 = 8;
          }
          if ((int)uVar7 == 0) {
            FUN_00604088(uVar9 & 0xffffffff,uVar8 & 0xffff,uVar12 & 0xffffffff);
LAB_005f7064:
            uVar9 = (uVar12 & 0x7fffffff) * 2 + uVar9;
          }
          else if ((int)uVar12 != 0) {
            uVar19 = uVar12 & 0xffffffff;
            uVar10 = uVar9;
            do {
              uVar4 = uVar4 & 0xffffffff;
              if ((uVar16 & 0xffffffff) < uVar7) {
                uVar1 = *puVar14;
                puVar14 = puVar14 + 1;
                uVar5 = uVar16 & 0x7f;
                uVar16 = uVar16 + 0x20;
                uVar4 = uVar4 | (ulonglong)uVar1 << uVar5;
              }
              uVar5 = 0xffffffff >> (0x20U - (int)uVar7 & 0x3f) & uVar4;
              uVar16 = uVar16 - uVar7;
              uVar4 = uVar4 >> uVar7;
              iVar18 = (int)uVar16;
              if ((int)uVar5 != 0) {
                uVar16 = uVar16 - 1;
                puVar13 = puVar14;
                if (iVar18 == 0) {
                  puVar13 = puVar14 + 1;
                  uVar4 = (ulonglong)*puVar14;
                  uVar16 = 0x1f;
                }
                uVar3 = uVar4 & 1;
                uVar4 = (uVar4 << 0x20) >> 0x21;
                puVar14 = puVar13;
                if (uVar3 != 0) {
                  uVar5 = -uVar5;
                }
              }
              puVar2 = (undefined2 *)uVar10;
              uVar8 = uVar8 + uVar5;
              uVar10 = uVar10 + 2;
              *puVar2 = (short)uVar8;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            goto LAB_005f7064;
          }
          uVar15 = (uint)uVar4;
          uVar17 = (uint)uVar16;
          uVar6 = uVar6 - uVar12;
          if ((int)uVar6 == 0) goto LAB_005f6e68;
          puVar13 = puVar14;
          if ((uVar16 & 0xffffffff) < 4) goto LAB_005f6f78;
LAB_005f7084:
          uVar7 = uVar4 & 0xffffffff;
          uVar16 = uVar16 - 4;
          uVar4 = (uVar4 << 0x20) >> 0x24;
        } while( true );
      }
    }
  }
  param_1[1] = param_1[0xc];
  *param_1 = param_1[0xc] + 4;
  puVar14 = puVar13;
LAB_005f6e68:
  param_2[2] = uVar17;
  param_2[1] = (uint)puVar14;
  *param_2 = uVar15;
  return;
}


// 0x05f7140 (0x1618 bytes)
void FUN_005f7140(uint *param_1,undefined4 *param_2,uint *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  char cVar24;
  ulonglong uVar23;
  ulonglong uVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint uVar30;
  GPiece<4> auStack_90;
  GPiece<4> auStack_8c;
  GPiece<4> auStack_88;
  GPiece<4> auStack_84;
  GPiece<16> local_80;
  
  uVar25 = (ulonglong)param_1[2];
  puVar28 = (uint *)param_1[1];
  uVar11 = (ulonglong)*param_1;
  puVar27 = puVar28;
  if (uVar25 < 4) {
    puVar27 = puVar28 + 1;
    uVar23 = uVar25 & 0x7f;
    uVar25 = uVar25 + 0x20;
    uVar11 = uVar11 | (ulonglong)*puVar28 << uVar23;
  }
  uVar23 = uVar11 & 0xf;
  uVar11 = uVar11 >> 4;
  uVar26 = (uint)uVar11;
  uVar10 = (int)uVar25 - 4;
  bVar1 = PTR_DAT_0071a598[(int)uVar23 + 0x430];
  *param_2 = PTR_DAT_0071a598 + *(int *)(PTR_DAT_0071a598 + (int)(uVar23 << 2) + 0x20) + 0x60;
  *param_3 = (uint)bVar1;
  if ((int)uVar23 == 0) {
    param_4[0xf] = 0xf;
    param_4[1] = 1;
    param_4[2] = 2;
    param_4[3] = 3;
    param_4[4] = 4;
    param_4[5] = 5;
    param_4[6] = 6;
    param_4[7] = 7;
    param_4[8] = 8;
    param_4[9] = 9;
    param_4[10] = 10;
    param_4[0xb] = 0xb;
    param_4[0xc] = 0xc;
    *param_4 = (char)uVar23;
    param_4[0xd] = 0xd;
    param_4[0xe] = 0xe;
    goto LAB_005f7270;
  }
  uVar25 = uVar25 - 5;
  if (uVar10 == 0) {
    uVar25 = 0x1f;
    puVar28 = puVar27 + 1;
    uVar23 = (ulonglong)(*puVar27 >> 1);
    if ((*puVar27 & 1) == 0) goto LAB_005f7390;
  }
  else {
    uVar23 = (uVar11 << 0x20) >> 0x21;
    puVar28 = puVar27;
    if ((uVar11 & 1) == 0) {
LAB_005f7390:
      puVar27 = puVar28;
      if ((uVar25 & 0xffffffff) < 2) {
        puVar27 = puVar28 + 1;
        uVar11 = uVar25 & 0x7f;
        uVar25 = uVar25 + 0x20;
        uVar23 = uVar23 | (ulonglong)*puVar28 << uVar11;
      }
      uVar10 = (uint)uVar23 & 3;
      uVar11 = uVar23 >> 2;
      iVar13 = (int)uVar25;
      if ((uVar23 & 3) == 0) {
        iVar19 = iVar13 + -3;
        puVar28 = puVar27;
        if (iVar13 == 2) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((int)(uVar11 & 1) == 0) {
          *param_4 = (char)(uVar11 & 1);
          param_4[1] = 1;
        }
        else {
          *param_4 = 1;
          param_4[1] = 0;
        }
        iVar13 = iVar19 + -1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          iVar13 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          param_4[2] = 2;
          param_4[3] = 3;
        }
        else {
          param_4[2] = 3;
          param_4[3] = 2;
        }
        iVar19 = iVar13 + -1;
        puVar28 = puVar27;
        if (iVar13 == 0) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          param_4[4] = 4;
          param_4[5] = 5;
        }
        else {
          param_4[4] = 5;
          param_4[5] = 4;
        }
        iVar13 = iVar19 + -1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          iVar13 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          param_4[6] = 6;
          param_4[7] = 7;
        }
        else {
          param_4[6] = 7;
          param_4[7] = 6;
        }
        iVar19 = iVar13 + -1;
        puVar28 = puVar27;
        if (iVar13 == 0) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          param_4[8] = 8;
          param_4[9] = 9;
        }
        else {
          param_4[8] = 9;
          param_4[9] = 8;
        }
        iVar13 = iVar19 + -1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          iVar13 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          param_4[10] = 10;
          param_4[0xb] = 0xb;
        }
        else {
          param_4[10] = 0xb;
          param_4[0xb] = 10;
        }
        iVar19 = iVar13 + -1;
        puVar28 = puVar27;
        if (iVar13 == 0) {
          iVar19 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          param_4[0xc] = 0xc;
          param_4[0xd] = 0xd;
        }
        else {
          param_4[0xc] = 0xd;
          param_4[0xd] = 0xc;
        }
        uVar10 = iVar19 - 1;
        puVar27 = puVar28;
        if (iVar19 == 0) {
          uVar10 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar26 = (uint)uVar25 >> 1;
        if ((uVar25 & 1) == 0) {
          param_4[0xe] = 0xe;
          param_4[0xf] = 0xf;
        }
        else {
          param_4[0xe] = 0xf;
          param_4[0xf] = 0xe;
        }
      }
      else {
        lVar17 = uVar25 - 3;
        puVar28 = puVar27;
        if (iVar13 == 2) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((int)(uVar11 & 1) == 0) {
          local_80[0] = (char)(uVar11 & 1);
          local_80[1] = 1;
        }
        else {
          local_80[0] = 1;
          local_80[1] = 0;
        }
        lVar18 = lVar17 + -1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          lVar18 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[2] = 2;
          local_80[3] = 3;
        }
        else {
          local_80[2] = 3;
          local_80[3] = 2;
        }
        lVar17 = lVar18 + -1;
        puVar28 = puVar27;
        if ((int)lVar18 == 0) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          local_80[4] = 4;
          local_80[5] = 5;
        }
        else {
          local_80[4] = 5;
          local_80[5] = 4;
        }
        lVar18 = lVar17 + -1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          lVar18 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[6] = 6;
          local_80[7] = 7;
        }
        else {
          local_80[6] = 7;
          local_80[7] = 6;
        }
        lVar17 = lVar18 + -1;
        puVar28 = puVar27;
        if ((int)lVar18 == 0) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          local_80[8] = 8;
          local_80[9] = 9;
        }
        else {
          local_80[8] = 9;
          local_80[9] = 8;
        }
        lVar18 = lVar17 + -1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          lVar18 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar11 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[10] = 10;
          local_80[0xb] = 0xb;
        }
        else {
          local_80[10] = 0xb;
          local_80[0xb] = 10;
        }
        lVar17 = lVar18 + -1;
        puVar28 = puVar27;
        if ((int)lVar18 == 0) {
          lVar17 = 0x1f;
          puVar28 = puVar27 + 1;
          uVar11 = (ulonglong)*puVar27;
        }
        uVar25 = (uVar11 << 0x20) >> 0x21;
        if ((uVar11 & 1) == 0) {
          local_80[0xc] = 0xc;
          local_80[0xd] = 0xd;
        }
        else {
          local_80[0xc] = 0xd;
          local_80[0xd] = 0xc;
        }
        uVar11 = lVar17 - 1;
        puVar27 = puVar28;
        if ((int)lVar17 == 0) {
          uVar11 = 0x1f;
          puVar27 = puVar28 + 1;
          uVar25 = (ulonglong)*puVar28;
        }
        uVar23 = (uVar25 << 0x20) >> 0x21;
        if ((uVar25 & 1) == 0) {
          local_80[0xe] = 0xe;
          local_80[0xf] = 0xf;
        }
        else {
          local_80[0xe] = 0xf;
          local_80[0xf] = 0xe;
        }
        uVar26 = (uint)uVar25 >> 1;
        uVar3 = (uint)uVar11;
        if (uVar10 == 1) {
          if ((uVar11 & 0xffffffff) < 3) {
            uVar23 = *puVar27 << (uVar3 & 0x3f) | uVar23;
          }
          uVar23 = uVar23 & 7;
          puVar7 = local_80;
          puVar4 = local_80 + 2;
          uVar8 = 2;
          uVar10 = 2;
          uVar25 = 0;
          puVar21 = param_4;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar23 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar21 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *puVar21 = uVar2;
            }
            puVar21 = puVar21 + 1;
            uVar23 = (uVar23 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar10 != 0) {
                uVar23 = (ulonglong)uVar10;
                do {
                  *puVar21 = *puVar4;
                  puVar21 = puVar21 + 1;
                  uVar23 = uVar23 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar23 != 0);
              }
              goto LAB_005f81dc;
            }
          } while (uVar10 != 0);
          uVar23 = (ulonglong)uVar8;
          do {
            *puVar21 = *puVar7;
            puVar21 = puVar21 + 1;
            uVar23 = uVar23 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar23 != 0);
LAB_005f81dc:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar23 = uVar11 - uVar25;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar23 = uVar23 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar25 - uVar3 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          if ((uVar23 & 0xffffffff) < 3) {
            uVar10 = uVar26 | *puVar28 << ((uint)uVar23 & 0x3f);
            uVar11 = CONCAT44(uVar10,uVar10);
          }
          uVar11 = uVar11 & 7;
          puVar21 = param_4 + 4;
          puVar7 = local_80 + 4;
          puVar4 = local_80 + 6;
          uVar3 = 2;
          uVar10 = 2;
          uVar25 = 0;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar3 = uVar3 - 1;
              puVar7 = puVar7 + 1;
              *puVar21 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *puVar21 = uVar2;
            }
            puVar21 = puVar21 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar3 == 0) {
              if (uVar10 != 0) {
                uVar11 = (ulonglong)uVar10;
                do {
                  *puVar21 = *puVar4;
                  puVar21 = puVar21 + 1;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f82b8;
            }
          } while (uVar10 != 0);
          uVar11 = (ulonglong)uVar3;
          do {
            *puVar21 = *puVar7;
            puVar21 = puVar21 + 1;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar11 != 0);
LAB_005f82b8:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar11 = uVar23 - uVar25;
          puVar27 = puVar28;
          if ((uVar23 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar11 = uVar11 + 0x20;
            puVar27 = puVar28 + 1;
            uVar26 = *puVar28 >> ((uint)uVar25 - (uint)uVar23 & 0x3f);
          }
          uVar25 = CONCAT44(uVar26,uVar26);
          if ((uVar11 & 0xffffffff) < 3) {
            uVar10 = uVar26 | *puVar27 << ((uint)uVar11 & 0x3f);
            uVar25 = CONCAT44(uVar10,uVar10);
          }
          uVar25 = uVar25 & 7;
          puVar21 = param_4 + 8;
          puVar7 = local_80 + 8;
          puVar4 = local_80 + 10;
          uVar3 = 2;
          uVar10 = 2;
          uVar23 = 0;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar25 & 1) == 0) {
              uVar2 = *puVar7;
              uVar3 = uVar3 - 1;
              puVar7 = puVar7 + 1;
              *puVar21 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *puVar21 = uVar2;
            }
            puVar21 = puVar21 + 1;
            uVar25 = (uVar25 << 0x20) >> 0x21;
            if (uVar3 == 0) {
              if (uVar10 != 0) {
                uVar25 = (ulonglong)uVar10;
                do {
                  *puVar21 = *puVar4;
                  puVar21 = puVar21 + 1;
                  uVar25 = uVar25 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar25 != 0);
              }
              goto LAB_005f8394;
            }
          } while (uVar10 != 0);
          uVar25 = (ulonglong)uVar3;
          do {
            *puVar21 = *puVar7;
            puVar21 = puVar21 + 1;
            uVar25 = uVar25 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar25 != 0);
LAB_005f8394:
          uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
          uVar25 = uVar11 - uVar23;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar25 = uVar25 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar23 - (uint)uVar11 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          uVar3 = (uint)uVar25;
          if ((uVar25 & 0xffffffff) < 3) {
            uVar10 = uVar26 | *puVar28 << (uVar3 & 0x3f);
            uVar11 = CONCAT44(uVar10,uVar10);
          }
          uVar11 = uVar11 & 7;
          param_4 = param_4 + 0xc;
          puVar7 = local_80 + 0xc;
          puVar4 = local_80 + 0xe;
          uVar8 = 2;
          uVar10 = 2;
          uVar23 = 0;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *param_4 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar10 = uVar10 - 1;
              *param_4 = uVar2;
            }
            param_4 = param_4 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar10 != 0) {
                uVar11 = (ulonglong)uVar10;
                do {
                  *param_4 = *puVar4;
                  param_4 = param_4 + 1;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f8470;
            }
          } while (uVar10 != 0);
          uVar11 = (ulonglong)uVar8;
          do {
            *param_4 = *puVar7;
            param_4 = param_4 + 1;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar11 != 0);
LAB_005f8470:
          uVar8 = (uint)uVar23;
          uVar26 = uVar26 >> (uVar8 & 0x3f);
          uVar10 = uVar3 - uVar8;
          puVar27 = puVar28;
          if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar10 = uVar10 + 0x20;
            puVar27 = puVar28 + 1;
            uVar26 = *puVar28 >> (uVar8 - uVar3 & 0x3f);
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 3) {
            uVar23 = *puVar27 << (uVar3 & 0x3f) | uVar23;
          }
          uVar23 = uVar23 & 7;
          puVar14 = auStack_90;
          puVar21 = local_80;
          puVar4 = local_80 + 2;
          uVar30 = 2;
          uVar8 = 2;
          uVar25 = 0;
          puVar7 = puVar21;
          puVar9 = puVar14;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar23 & 1) == 0) {
              uVar2 = *puVar7;
              uVar30 = uVar30 - 1;
              puVar7 = puVar7 + 1;
              *puVar9 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar8 = uVar8 - 1;
              *puVar9 = uVar2;
            }
            puVar9 = puVar9 + 1;
            uVar23 = (uVar23 << 0x20) >> 0x21;
            if (uVar30 == 0) {
              if (uVar8 != 0) {
                uVar23 = (ulonglong)uVar8;
                do {
                  *puVar9 = *puVar4;
                  uVar23 = uVar23 - 1;
                  puVar4 = puVar4 + 1;
                  puVar9 = puVar9 + 1;
                } while (uVar23 != 0);
              }
              goto LAB_005f79fc;
            }
          } while (uVar8 != 0);
          uVar23 = (ulonglong)uVar30;
          do {
            *puVar9 = *puVar7;
            uVar23 = uVar23 - 1;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar23 != 0);
LAB_005f79fc:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar23 = uVar11 - uVar25;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar23 = uVar23 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar25 - uVar3 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          if ((uVar23 & 0xffffffff) < 3) {
            uVar3 = uVar26 | *puVar28 << ((uint)uVar23 & 0x3f);
            uVar11 = CONCAT44(uVar3,uVar3);
          }
          uVar11 = uVar11 & 7;
          puVar5 = auStack_8c;
          puVar7 = local_80 + 4;
          puVar4 = local_80 + 6;
          uVar8 = 2;
          uVar3 = 2;
          uVar25 = 0;
          puVar9 = puVar5;
          do {
            uVar25 = uVar25 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar9 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar3 = uVar3 - 1;
              *puVar9 = uVar2;
            }
            puVar9 = puVar9 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar3 != 0) {
                uVar11 = (ulonglong)uVar3;
                do {
                  *puVar9 = *puVar4;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                  puVar9 = puVar9 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f7abc;
            }
          } while (uVar3 != 0);
          uVar11 = (ulonglong)uVar8;
          do {
            *puVar9 = *puVar7;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar11 != 0);
LAB_005f7abc:
          uVar26 = uVar26 >> ((uint)uVar25 & 0x3f);
          uVar11 = uVar23 - uVar25;
          puVar27 = puVar28;
          if ((uVar23 & 0xffffffff) < (uVar25 & 0xffffffff)) {
            uVar11 = uVar11 + 0x20;
            puVar27 = puVar28 + 1;
            uVar26 = *puVar28 >> ((uint)uVar25 - (uint)uVar23 & 0x3f);
          }
          uVar25 = CONCAT44(uVar26,uVar26);
          if ((uVar11 & 0xffffffff) < 3) {
            uVar3 = uVar26 | *puVar27 << ((uint)uVar11 & 0x3f);
            uVar25 = CONCAT44(uVar3,uVar3);
          }
          uVar25 = uVar25 & 7;
          puVar15 = auStack_88;
          puVar9 = local_80 + 8;
          puVar4 = local_80 + 10;
          uVar8 = 2;
          uVar3 = 2;
          uVar23 = 0;
          puVar7 = puVar9;
          puVar20 = puVar15;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar25 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar20 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar3 = uVar3 - 1;
              *puVar20 = uVar2;
            }
            puVar20 = puVar20 + 1;
            uVar25 = (uVar25 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar3 != 0) {
                uVar25 = (ulonglong)uVar3;
                do {
                  *puVar20 = *puVar4;
                  uVar25 = uVar25 - 1;
                  puVar4 = puVar4 + 1;
                  puVar20 = puVar20 + 1;
                } while (uVar25 != 0);
              }
              goto LAB_005f7b7c;
            }
          } while (uVar3 != 0);
          uVar25 = (ulonglong)uVar8;
          do {
            *puVar20 = *puVar7;
            uVar25 = uVar25 - 1;
            puVar7 = puVar7 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar25 != 0);
LAB_005f7b7c:
          uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
          uVar25 = uVar11 - uVar23;
          puVar28 = puVar27;
          if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar25 = uVar25 + 0x20;
            puVar28 = puVar27 + 1;
            uVar26 = *puVar27 >> ((uint)uVar23 - (uint)uVar11 & 0x3f);
          }
          uVar11 = CONCAT44(uVar26,uVar26);
          if ((uVar25 & 0xffffffff) < 3) {
            uVar3 = uVar26 | *puVar28 << ((uint)uVar25 & 0x3f);
            uVar11 = CONCAT44(uVar3,uVar3);
          }
          uVar11 = uVar11 & 7;
          puVar6 = auStack_84;
          puVar7 = local_80 + 0xc;
          puVar4 = local_80 + 0xe;
          uVar8 = 2;
          uVar3 = 2;
          uVar23 = 0;
          puVar20 = puVar6;
          do {
            uVar23 = uVar23 + 1;
            if ((uVar11 & 1) == 0) {
              uVar2 = *puVar7;
              uVar8 = uVar8 - 1;
              puVar7 = puVar7 + 1;
              *puVar20 = uVar2;
            }
            else {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              uVar3 = uVar3 - 1;
              *puVar20 = uVar2;
            }
            puVar20 = puVar20 + 1;
            uVar11 = (uVar11 << 0x20) >> 0x21;
            if (uVar8 == 0) {
              if (uVar3 != 0) {
                uVar11 = (ulonglong)uVar3;
                do {
                  *puVar20 = *puVar4;
                  uVar11 = uVar11 - 1;
                  puVar4 = puVar4 + 1;
                  puVar20 = puVar20 + 1;
                } while (uVar11 != 0);
              }
              goto LAB_005f7c3c;
            }
          } while (uVar3 != 0);
          uVar11 = (ulonglong)uVar8;
          do {
            *puVar20 = *puVar7;
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar11 != 0);
LAB_005f7c3c:
          uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
          uVar11 = uVar25 - uVar23;
          puVar29 = puVar28;
          if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar11 = uVar11 + 0x20;
            puVar29 = puVar28 + 1;
            uVar26 = *puVar28 >> ((uint)uVar23 - (uint)uVar25 & 0x3f);
          }
          uVar3 = (uint)uVar11;
          if (uVar10 == 2) {
            uVar25 = CONCAT44(uVar26,uVar26);
            if ((uVar11 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar29 << (uVar3 & 0x3f);
              uVar25 = CONCAT44(uVar10,uVar10);
            }
            uVar25 = uVar25 & 0x7f;
            uVar10 = 4;
            uVar8 = 4;
            uVar23 = 0;
            puVar4 = param_4;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar25 & 1) == 0) {
                uVar2 = *puVar14;
                uVar10 = uVar10 - 1;
                puVar14 = puVar14 + 1;
                *puVar4 = uVar2;
              }
              else {
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar8 = uVar8 - 1;
                *puVar4 = uVar2;
              }
              puVar4 = puVar4 + 1;
              uVar25 = (uVar25 << 0x20) >> 0x21;
              if (uVar10 == 0) {
                if (uVar8 != 0) {
                  uVar25 = (ulonglong)uVar8;
                  do {
                    *puVar4 = *puVar5;
                    puVar4 = puVar4 + 1;
                    uVar25 = uVar25 - 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_005f8548;
              }
            } while (uVar8 != 0);
            uVar25 = (ulonglong)uVar10;
            do {
              *puVar4 = *puVar14;
              puVar4 = puVar4 + 1;
              uVar25 = uVar25 - 1;
              puVar14 = puVar14 + 1;
            } while (uVar25 != 0);
LAB_005f8548:
            uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
            uVar25 = uVar11 - uVar23;
            puVar27 = puVar29;
            if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar25 = uVar25 + 0x20;
              puVar27 = puVar29 + 1;
              uVar26 = *puVar29 >> ((uint)uVar23 - uVar3 & 0x3f);
            }
            uVar11 = CONCAT44(uVar26,uVar26);
            uVar3 = (uint)uVar25;
            if ((uVar25 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar27 << (uVar3 & 0x3f);
              uVar11 = CONCAT44(uVar10,uVar10);
            }
            uVar11 = uVar11 & 0x7f;
            param_4 = param_4 + 8;
            uVar10 = 4;
            uVar8 = 4;
            uVar23 = 0;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar11 & 1) == 0) {
                uVar2 = *puVar15;
                uVar10 = uVar10 - 1;
                puVar15 = puVar15 + 1;
                *param_4 = uVar2;
              }
              else {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                uVar8 = uVar8 - 1;
                *param_4 = uVar2;
              }
              param_4 = param_4 + 1;
              uVar11 = (uVar11 << 0x20) >> 0x21;
              if (uVar10 == 0) {
                if (uVar8 != 0) {
                  uVar11 = (ulonglong)uVar8;
                  do {
                    *param_4 = *puVar6;
                    param_4 = param_4 + 1;
                    uVar11 = uVar11 - 1;
                    puVar6 = puVar6 + 1;
                  } while (uVar11 != 0);
                }
                goto LAB_005f8624;
              }
            } while (uVar8 != 0);
            uVar11 = (ulonglong)uVar10;
            do {
              *param_4 = *puVar15;
              param_4 = param_4 + 1;
              uVar11 = uVar11 - 1;
              puVar15 = puVar15 + 1;
            } while (uVar11 != 0);
LAB_005f8624:
            uVar8 = (uint)uVar23;
            uVar26 = uVar26 >> (uVar8 & 0x3f);
            uVar10 = uVar3 - uVar8;
            if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar10 = uVar10 + 0x20;
              uVar26 = *puVar27 >> (uVar8 - uVar3 & 0x3f);
              puVar27 = puVar27 + 1;
            }
          }
          else {
            uVar25 = CONCAT44(uVar26,uVar26);
            if ((uVar11 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar29 << (uVar3 & 0x3f);
              uVar25 = CONCAT44(uVar10,uVar10);
            }
            uVar25 = uVar25 & 0x7f;
            uVar8 = 4;
            uVar10 = 4;
            uVar23 = 0;
            puVar4 = puVar21;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar25 & 1) == 0) {
                uVar2 = *puVar14;
                uVar8 = uVar8 - 1;
                puVar14 = puVar14 + 1;
                *puVar4 = uVar2;
              }
              else {
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar10 = uVar10 - 1;
                *puVar4 = uVar2;
              }
              puVar4 = puVar4 + 1;
              uVar25 = (uVar25 << 0x20) >> 0x21;
              if (uVar8 == 0) {
                if (uVar10 != 0) {
                  uVar25 = (ulonglong)uVar10;
                  do {
                    *puVar4 = *puVar5;
                    uVar25 = uVar25 - 1;
                    puVar5 = puVar5 + 1;
                    puVar4 = puVar4 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_005f7de4;
              }
            } while (uVar10 != 0);
            uVar25 = (ulonglong)uVar8;
            do {
              *puVar4 = *puVar14;
              uVar25 = uVar25 - 1;
              puVar4 = puVar4 + 1;
              puVar14 = puVar14 + 1;
            } while (uVar25 != 0);
LAB_005f7de4:
            uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
            uVar25 = uVar11 - uVar23;
            puVar28 = puVar29;
            if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar25 = uVar25 + 0x20;
              puVar28 = puVar29 + 1;
              uVar26 = *puVar29 >> ((uint)uVar23 - uVar3 & 0x3f);
            }
            uVar11 = CONCAT44(uVar26,uVar26);
            if ((uVar25 & 0xffffffff) < 7) {
              uVar10 = uVar26 | *puVar28 << ((uint)uVar25 & 0x3f);
              uVar11 = CONCAT44(uVar10,uVar10);
            }
            uVar11 = uVar11 & 0x7f;
            uVar3 = 4;
            uVar10 = 4;
            uVar23 = 0;
            puVar4 = puVar9;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar11 & 1) == 0) {
                uVar2 = *puVar15;
                uVar3 = uVar3 - 1;
                puVar15 = puVar15 + 1;
                *puVar4 = uVar2;
              }
              else {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                uVar10 = uVar10 - 1;
                *puVar4 = uVar2;
              }
              puVar4 = puVar4 + 1;
              uVar11 = (uVar11 << 0x20) >> 0x21;
              if (uVar3 == 0) {
                if (uVar10 != 0) {
                  uVar11 = (ulonglong)uVar10;
                  do {
                    *puVar4 = *puVar6;
                    uVar11 = uVar11 - 1;
                    puVar6 = puVar6 + 1;
                    puVar4 = puVar4 + 1;
                  } while (uVar11 != 0);
                }
                goto LAB_005f7ecc;
              }
            } while (uVar10 != 0);
            uVar11 = (ulonglong)uVar3;
            do {
              *puVar4 = *puVar15;
              uVar11 = uVar11 - 1;
              puVar4 = puVar4 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar11 != 0);
LAB_005f7ecc:
            uVar26 = uVar26 >> ((uint)uVar23 & 0x3f);
            uVar11 = uVar25 - uVar23;
            puVar27 = puVar28;
            if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar11 = uVar11 + 0x20;
              puVar27 = puVar28 + 1;
              uVar26 = *puVar28 >> ((uint)uVar23 - (uint)uVar25 & 0x3f);
            }
            uVar25 = CONCAT44(uVar26,uVar26);
            uVar3 = (uint)uVar11;
            if ((uVar11 & 0xffffffff) < 0xf) {
              uVar10 = uVar26 | *puVar27 << (uVar3 & 0x3f);
              uVar25 = CONCAT44(uVar10,uVar10);
            }
            uVar25 = uVar25 & 0x7fff;
            uVar10 = 8;
            uVar8 = 8;
            uVar23 = 0;
            do {
              uVar23 = uVar23 + 1;
              if ((uVar25 & 1) == 0) {
                uVar2 = *puVar21;
                uVar10 = uVar10 - 1;
                puVar21 = puVar21 + 1;
                *param_4 = uVar2;
              }
              else {
                uVar2 = *puVar9;
                puVar9 = puVar9 + 1;
                uVar8 = uVar8 - 1;
                *param_4 = uVar2;
              }
              param_4 = param_4 + 1;
              uVar25 = (uVar25 << 0x20) >> 0x21;
              if (uVar10 == 0) {
                if (uVar8 != 0) {
                  uVar25 = (ulonglong)uVar8;
                  do {
                    *param_4 = *puVar9;
                    param_4 = param_4 + 1;
                    uVar25 = uVar25 - 1;
                    puVar9 = puVar9 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_005f7fa8;
              }
            } while (uVar8 != 0);
            uVar25 = (ulonglong)uVar10;
            do {
              *param_4 = *puVar21;
              param_4 = param_4 + 1;
              uVar25 = uVar25 - 1;
              puVar21 = puVar21 + 1;
            } while (uVar25 != 0);
LAB_005f7fa8:
            uVar8 = (uint)uVar23;
            uVar26 = uVar26 >> (uVar8 & 0x3f);
            uVar10 = uVar3 - uVar8;
            if ((uVar11 & 0xffffffff) < (uVar23 & 0xffffffff)) {
              uVar10 = uVar10 + 0x20;
              uVar26 = *puVar27 >> (uVar8 - uVar3 & 0x3f);
              puVar27 = puVar27 + 1;
            }
          }
        }
      }
      goto LAB_005f7270;
    }
  }
  puVar27 = puVar28;
  if ((uVar25 & 0xffffffff) < 3) {
    puVar27 = puVar28 + 1;
    uVar11 = uVar25 & 0x7f;
    uVar25 = uVar25 + 0x20;
    uVar23 = uVar23 | (ulonglong)*puVar28 << uVar11;
  }
  uVar25 = uVar25 - 3;
  uVar11 = uVar23 & 7;
  uVar16 = 0xffff;
  uVar23 = uVar23 >> 3;
  uVar12 = 0;
  do {
    iVar13 = (int)uVar12;
    uVar12 = uVar12 + 1;
    uVar22 = uVar23 & 0xffffffff;
    if ((uVar25 & 0xffffffff) < 4) {
      uVar26 = *puVar27;
      puVar27 = puVar27 + 1;
      uVar23 = uVar25 & 0x7f;
      uVar25 = uVar25 + 0x20;
      uVar22 = uVar22 | (ulonglong)uVar26 << uVar23;
    }
    uVar25 = uVar25 - 4;
    uVar10 = (uint)uVar25;
    uVar23 = uVar22 >> 4;
    uVar26 = (uint)uVar23;
    param_4[iVar13] = (char)(uVar22 & 0xf);
    uVar16 = uVar16 & ~(ulonglong)(uint)(1 << (int)(uVar22 & 0xf));
  } while ((uVar12 & 0xffffffff) <= uVar11);
  cVar24 = '\0';
  do {
    uVar3 = (uint)uVar16;
    if ((uVar16 & 1) != 0) {
      uVar11 = uVar11 + 1;
      param_4[(int)uVar11] = cVar24;
      if ((int)uVar11 == 0xf) break;
    }
    cVar24 = cVar24 + '\x01';
    uVar16 = (uVar16 << 0x20) >> 0x21;
  } while (uVar3 >> 1 != 0);
LAB_005f7270:
  param_1[2] = uVar10;
  param_1[1] = (uint)puVar27;
  *param_1 = uVar26;
  return;
}


// 0x05f8758 (0x78 bytes)
void FUN_005f8758(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((ulonglong)param_2 << 0x20) >> 0x23;
  uVar4 = (uint)((uVar1 & 0x7fffff) << 9);
  uVar2 = (param_2 >> 3) + 0x20f & 0xfffffff0;
  uVar3 = (int)((uVar1 & 0xfffffff) << 1) + 0x40fU & 0xfffffff0;
  param_1[1] = (param_2 >> 4) + 0x20f & 0xfffffff0;
  param_1[8] = (uVar4 - (int)(uVar1 << 7) >> 3) + 0x240;
  param_1[2] = (uVar4 >> 3) + 0x240;
  param_1[3] = ((int)((uVar1 & 0x3ffffff) << 3) + 0x20fU & 0xfffffff0) + 8;
  param_1[5] = uVar2;
  param_1[7] = uVar3;
  *param_1 = uVar2;
  param_1[4] = uVar2;
  param_1[6] = uVar3;
  return;
}


// 0x05f87d0 (0xa50 bytes)
uint * FUN_005f87d0(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
                   uint *param_7)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar9;
  undefined1 *puVar10;
  ulonglong uVar8;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  uint uVar18;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  undefined4 *in_stack_0000008c;
  uint in_stack_00000094;
  undefined4 *in_stack_0000009c;
  uint local_540;
  uint *local_53c;
  uint local_538;
  undefined1 *local_530;
  undefined1 *local_52c;
  GPiece<16> auStack_520;
  uint local_510;
  int local_50c;
  uint local_508;
  uint local_504;
  undefined1 *local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  int local_4d4;
  uint local_4d0;
  undefined4 local_4cc;
  byte *local_4c8;
  byte *local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int local_4a0;
  uint local_49c;
  undefined4 local_498;
  int local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  int local_46c;
  uint local_468;
  int local_464;
  int local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  int local_438;
  uint local_434;
  int local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_404;
  uint local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  int local_3d0;
  int local_3cc;
  undefined4 local_3c8;
  byte *local_3c4;
  byte *local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  byte abStack_3b4 [16];
  uint local_3a4;
  int local_3a0;
  uint local_39c;
  uint local_398;
  byte *local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  int local_368;
  uint local_364;
  undefined4 local_360;
  undefined4 local_110;
  int local_100;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  longlong local_98;
  
  uVar7 = ZEXT48(&stack0x00000000);
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  local_540 = 0;
  local_538 = 0;
  local_d4 = param_5 * 8 - param_3;
  local_cc = param_2 + (param_4 - 8) * param_5 + param_3 + -8;
  puVar2 = PTR_PTR_0071a5a4;
  if ((in_stack_00000094 & 0x8000) != 0) {
    puVar2 = PTR_PTR_0071a5a0;
  }
  local_a0 = uVar7 - 0x540;
  uVar6 = param_3 >> 3;
  uVar3 = (uint)(((ulonglong)uVar6 & 0x3ffffff) << 6);
  local_498 = *in_stack_0000008c;
  local_3fc = in_stack_0000008c[1];
  uVar4 = (uint)(((ulonglong)uVar6 & 0xfffffff) << 4);
  uVar18 = uVar3 - uVar4;
  local_3c8 = in_stack_0000008c[2];
  local_49c = uVar6 + 0x20f & 0xfffffff0;
  local_394 = (byte *)in_stack_0000008c[3];
  local_400 = (param_3 >> 4) + 0x20f & 0xfffffff0;
  local_398 = (uVar3 >> 3) + 0x20f & 0xfffffff0;
  local_3cc = (uVar6 & 0x7fffff) * 0x40 + 0x200;
  local_39c = 0x20 - (int)LZCOUNT(uVar6 * 8 + 0x1ff);
  local_4d4 = 0x20 - (int)LZCOUNT(uVar6 + 0x1ff);
  local_404 = 0x20 - (int)LZCOUNT((param_3 >> 4) + 0x1ff);
  local_3d0 = 0x20 - (int)LZCOUNT(uVar3 + 0x1ff);
  local_420 = 0;
  local_3bc = 8;
  local_4c8 = (byte *)0x0;
  local_4c4 = (byte *)0x0;
  local_4bc = 0;
  local_42c = 0;
  local_428 = 0;
  local_3f8 = 0;
  local_3f4 = 0;
  local_3f0 = 8;
  local_4c0 = 4;
  local_424 = 4;
  local_3ec = 0;
  local_3c4 = (byte *)0x0;
  local_3c0 = (byte *)0x0;
  local_3b8 = 0;
  local_430 = in_stack_0000008c[4];
  uVar8 = local_a0 & 0xffffffff;
  local_500 = (undefined1 *)in_stack_0000008c[8];
  local_4d0 = (uVar4 >> 3) + 0x40f & 0xfffffff0;
  local_464 = in_stack_0000008c[5];
  local_360 = in_stack_0000008c[6];
  local_4cc = in_stack_0000008c[7];
  local_504 = (uVar18 & 0x1ffffff0) + 0x200;
  local_508 = 0x20 - (int)LZCOUNT(uVar18 + 0x1ff);
  local_4f0 = 0x400;
  local_48c = 5;
  local_488 = 0x10;
  local_460 = 0;
  local_45c = 0;
  local_458 = 5;
  local_454 = 0x10;
  local_494 = 0;
  local_490 = 0;
  local_390 = 0;
  local_38c = 0;
  local_4f4 = 0xb;
  local_388 = 0xb;
  local_384 = 0;
  local_4fc = 0;
  local_4f8 = 0;
  local_530 = (undefined1 *)0x0;
  local_52c = (undefined1 *)0x0;
  local_4a0 = local_4d4;
  local_46c = local_4d4;
  local_468 = local_49c;
  local_438 = local_4d4;
  local_434 = local_49c;
  local_368 = local_4d4;
  local_364 = local_4d0;
  local_100 = param_2;
  local_c4 = param_1;
  local_c0 = param_3;
  local_bc = param_4;
  local_b8 = param_5;
  FUN_005f7140(uVar8,uVar7 - 0x4a4,uVar7 - 0x4a8,uVar7 - 0x4b8);
  local_98 = uVar7 - 0x290;
  uVar14 = 0;
  uVar17 = uVar7 - 0x150;
  FUN_005f7140(uVar8,uVar7 - 0x408,uVar7 - 0x40c,uVar7 - 0x41c);
  do {
    uVar12 = uVar14 & 0xfffffff;
    uVar11 = uVar17 - 0x40;
    uVar15 = uVar17 & 0xffffffff;
    uVar14 = uVar14 + 1;
    uVar17 = uVar17 + 4;
    FUN_005f7140(uVar8,uVar15,uVar11 & 0xffffffff,uVar12 * 0x10 + local_98 & 0xfffffff0);
  } while (uVar14 != 0x10);
  local_dc = 0;
  FUN_005f7140(uVar8,uVar7 - 0x3d4,uVar7 - 0x3d8,uVar7 - 1000);
  local_110 = 0;
  FUN_005f7140(uVar8,uVar7 - 0x3a0,uVar7 - 0x3a4,uVar7 - 0x3b4);
  FUN_005f7140(uVar8,uVar7 - 0x43c,uVar7 - 0x440,uVar7 - 0x450);
  FUN_005f7140(uVar8,uVar7 - 0x470,uVar7 - 0x474,uVar7 - 0x484);
  FUN_005f7140(uVar8,uVar7 - 0x50c,uVar7 - 0x510,uVar7 - 0x520);
  local_53c = param_6;
  if (local_bc != 0) {
    local_b0 = ZEXT48(puVar2);
    local_d8 = in_stack_00000074;
    local_dc = 0;
    local_d0 = 0;
    do {
      uVar8 = local_a0 & 0xffffffff;
      FUN_005f6a08(uVar7 - 0x4c8,uVar8,param_7);
      FUN_005f6a08(uVar7 - 0x42c,uVar8,param_7);
      (*(code *)*(undefined4 *)local_b0)(uVar7 - 0x3f8,uVar8,uVar7 - 0x290,param_7);
      if (local_3c4 == local_3c0) {
        uVar8 = (ulonglong)local_538;
        uVar14 = (ulonglong)local_39c;
        uVar17 = (ulonglong)local_540;
        puVar9 = local_53c;
        if (uVar8 < uVar14) {
          puVar9 = local_53c + 1;
          uVar15 = uVar8 & 0x7f;
          uVar8 = uVar8 + 0x20;
          uVar17 = uVar17 | (ulonglong)*local_53c << uVar15;
        }
        uVar15 = uVar17 >> (uVar14 & 0x7f);
        local_540 = (uint)uVar15;
        uVar8 = uVar8 - uVar14;
        local_538 = (uint)uVar8;
        uVar17 = 0xffffffff >> (0x20 - local_39c & 0x3f) & uVar17;
        if (((int)uVar17 != 0) && (uVar17 <= local_398)) {
          local_3c0 = local_394 + (int)uVar17;
          uVar18 = 0xffffffff >> (0x20 - local_3a4 & 0x3f);
          local_3c4 = local_394;
          pbVar5 = local_394;
          do {
            local_538 = (uint)uVar8;
            local_540 = (uint)uVar15;
            if ((uVar8 & 0xffffffff) < (ulonglong)local_3a4) {
              if (param_7 <= puVar9) break;
              bVar16 = *(byte *)(local_3a0 + ((local_540 | *puVar9 << (local_538 & 0x3f)) & uVar18))
              ;
              uVar15 = ((ulonglong)bVar16 << 0x20) >> 0x24;
              uVar6 = (uint)(bVar16 >> 4);
              uVar14 = uVar8 - uVar15;
              bVar16 = abStack_3b4[bVar16 & 0xf];
              if (uVar15 <= (uVar8 & 0xffffffff)) goto LAB_005f9c94;
              uVar14 = uVar14 + 0x20;
              local_540 = *puVar9 >> (uVar6 - local_538 & 0x3f);
              puVar9 = puVar9 + 1;
              if ((ulonglong)local_3a4 <= (uVar14 & 0xffffffff)) goto LAB_005f9c9c;
LAB_005f9d50:
              bVar1 = *(byte *)(local_3a0 +
                               ((local_540 | *puVar9 << ((uint)uVar14 & 0x3f)) & uVar18));
              uVar11 = ((ulonglong)bVar1 << 0x20) >> 0x24;
              uVar15 = (ulonglong)(local_540 >> (uint)(bVar1 >> 4));
              uVar8 = uVar14 - uVar11;
              uVar12 = (ulonglong)abStack_3b4[bVar1 & 0xf];
              if ((uVar14 & 0xffffffff) < uVar11) {
                uVar8 = uVar8 + 0x20;
                uVar15 = (ulonglong)(*puVar9 >> ((uint)(bVar1 >> 4) - (uint)uVar14 & 0x3f));
                puVar9 = puVar9 + 1;
              }
            }
            else {
              bVar16 = *(byte *)(local_3a0 + (local_540 & uVar18));
              uVar14 = uVar8 - (((ulonglong)bVar16 << 0x20) >> 0x24);
              uVar6 = (uint)(bVar16 >> 4);
              bVar16 = abStack_3b4[bVar16 & 0xf];
LAB_005f9c94:
              local_540 = local_540 >> uVar6;
              if ((uVar14 & 0xffffffff) < (ulonglong)local_3a4) goto LAB_005f9d50;
LAB_005f9c9c:
              bVar1 = *(byte *)(local_3a0 + (local_540 & uVar18));
              uVar8 = uVar14 - (((ulonglong)bVar1 << 0x20) >> 0x24);
              uVar15 = (ulonglong)(local_540 >> (uint)(bVar1 >> 4));
              uVar12 = (ulonglong)abStack_3b4[bVar1 & 0xf];
            }
            local_540 = (uint)uVar15;
            local_538 = (uint)uVar8;
            *pbVar5 = (byte)(uVar12 << 4) | bVar16;
            uVar17 = uVar17 - 1;
            local_53c = puVar9;
            if (uVar17 == 0) goto LAB_005f8c18;
            pbVar5 = pbVar5 + 1;
          } while( true );
        }
        local_3c4 = local_394 + 4;
        local_3c0 = local_394;
        local_53c = puVar9;
      }
LAB_005f8c18:
      uVar8 = local_a0 & 0xffffffff;
      FUN_005f5f70(uVar7 - 0x460,uVar8,param_7);
      FUN_005f5f70(uVar7 - 0x494,uVar8,param_7);
      local_460 = local_430 + (local_494 - local_464);
      FUN_005f6d90(uVar7 - 0x390,uVar8,param_7);
      FUN_005f6d90(uVar7 - 0x4fc,uVar8,param_7);
      if (local_530 == local_52c) {
        uVar14 = (ulonglong)local_538;
        uVar17 = (ulonglong)local_508;
        uVar8 = (ulonglong)local_540;
        puVar9 = local_53c;
        if (uVar14 < uVar17) {
          puVar9 = local_53c + 1;
          uVar15 = uVar14 & 0x7f;
          uVar14 = uVar14 + 0x20;
          uVar8 = uVar8 | (ulonglong)*local_53c << uVar15;
        }
        local_538 = (uint)(uVar14 - uVar17);
        uVar15 = uVar8 >> (uVar17 & 0x7f);
        local_540 = (uint)uVar15;
        uVar8 = 0xffffffff >> (0x20 - local_508 & 0x3f) & uVar8;
        if (((int)uVar8 == 0) || (local_504 < uVar8)) {
LAB_005f9bb8:
          local_530 = local_500 + 4;
          local_52c = local_500;
          local_53c = puVar9;
        }
        else {
          local_52c = local_500 + (int)uVar8;
          local_530 = local_500;
          if (local_538 == 0) {
            uVar14 = 0x1f;
            puVar13 = puVar9 + 1;
            uVar15 = (ulonglong)*puVar9;
          }
          else {
            uVar14 = (uVar14 - uVar17) - 1;
            puVar13 = puVar9;
          }
          uVar17 = (uVar15 << 0x20) >> 0x21;
          local_540 = (uint)uVar15 >> 1;
          if ((uVar15 & 1) == 0) {
            uVar18 = 0xffffffff >> (0x20 - local_510 & 0x3f);
            puVar10 = local_500;
            puVar9 = puVar13;
            while( true ) {
              if ((uVar14 & 0xffffffff) < (ulonglong)local_510) {
                local_538 = (uint)uVar14;
                if (param_7 <= puVar9) goto LAB_005f9bb8;
                uVar6 = *puVar9;
                bVar16 = *(byte *)(local_50c + ((local_540 | uVar6 << (local_538 & 0x3f)) & uVar18))
                ;
                uVar17 = ((ulonglong)bVar16 << 0x20) >> 0x24;
                *puVar10 = auStack_520[bVar16 & 0xf];
                if ((uVar14 & 0xffffffff) < uVar17) {
                  puVar9 = puVar9 + 1;
                  local_540 = uVar6 >> ((bVar16 >> 4) - local_538 & 0x3f);
                  uVar14 = (uVar14 - uVar17) + 0x20;
                  local_538 = (uint)uVar14;
                }
                else {
                  uVar14 = uVar14 - uVar17;
                  local_538 = (uint)uVar14;
                  local_540 = local_540 >> (uint)(bVar16 >> 4);
                }
              }
              else {
                bVar16 = *(byte *)(local_50c + ((uint)uVar17 & uVar18));
                uVar14 = uVar14 - (((ulonglong)bVar16 << 0x20) >> 0x24);
                local_538 = (uint)uVar14;
                local_540 = (uint)uVar17 >> (uint)(bVar16 >> 4);
                *puVar10 = auStack_520[bVar16 & 0xf];
              }
              local_53c = puVar9;
              if (uVar8 == 1) break;
              uVar17 = (ulonglong)local_540;
              puVar10 = puVar10 + 1;
              uVar8 = uVar8 - 1;
            }
          }
          else if ((uVar14 & 0xffffffff) < 4) {
            local_53c = puVar13 + 1;
            uVar17 = uVar17 | (ulonglong)*puVar13 << (uVar14 & 0x7f);
            local_538 = (int)uVar14 + 0x1c;
            local_540 = (uint)(uVar17 >> 4);
            memset(local_500,uVar17 & 0xf,uVar8);
          }
          else {
            local_538 = (int)uVar14 - 4;
            local_540 = (uint)uVar15 >> 5;
            memset(local_500,uVar17 & 0xf,uVar8);
            local_53c = puVar13;
          }
        }
      }
      local_c8 = local_d0 & 8;
      uVar18 = local_c0;
      do {
        if ((local_53c < param_7) && (local_4c8 < local_4c4)) {
          pbVar5 = local_4c8 + 1;
          bVar16 = *local_4c8;
          local_4c8 = pbVar5;
          if (bVar16 < 10) {
                    /* WARNING: Could not recover jumptable at 0x005f8cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar9 = (uint *)(*(code *)(PTR_DAT_0071a5a8 +
                                       *(int *)(PTR_DAT_0071a5a8 + (uint)bVar16 * 4)))();
            return puVar9;
          }
        }
        uVar18 = uVar18 - 8;
      } while (uVar18 != 0);
      if ((in_stack_0000007c != 0) && ((in_stack_00000084 != 1 || (local_c8 != 0)))) {
        local_d8 = local_d8 + in_stack_0000007c;
      }
      if (local_bc <= local_d0 + 8) break;
      local_d0 = local_d0 + 8;
    } while( true );
  }
  uVar8 = (ulonglong)local_c4 & 0xffffff80;
  uVar7 = uVar8;
  while (uVar7 < ((longlong)(int)local_bc * (longlong)param_5 + (ulonglong)local_c4 + 0x7f &
                 0xffffff80)) {
    dataCacheBlockStore(uVar8);
    uVar8 = uVar8 + 0x80;
    uVar7 = uVar8 & 0xffffffff;
  }
  *in_stack_0000009c = local_dc;
  return local_53c;
}


// 0x05fb780 (0x604 bytes)
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_005fb780(int param_1,ulonglong param_2,ulonglong param_3,int *param_4,int param_5,
                      int param_6,int *param_7,ulonglong param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int *piVar22;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint in_stack_00000074;
  ulonglong local_170 [14];
  ulonglong auStack_100 [6];
  ulonglong local_d0;
  int local_c4;
  ulonglong *local_c0;
  ulonglong *local_bc;
  ulonglong *local_b8;
  ulonglong *local_b4;
  ulonglong *local_b0;
  ulonglong *local_ac;
  ulonglong *local_a8;
  ulonglong *local_a4;
  longlong local_a0;
  
  uVar15 = ZEXT48(&stack0x00000000);
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar1 = (int)param_2 == 0;
  piVar22 = (int *)(param_6 + 4);
  iVar18 = param_7[1];
  iVar2 = param_7[2];
  iVar19 = param_7[3];
  iVar3 = param_7[4];
  iVar4 = param_7[5];
  local_c4 = -(*param_7 + 0x2dU & 0xfffffff0);
  puVar12 = (ulonglong *)((int)local_170 + local_c4);
  *puVar12 = uVar15;
  iVar5 = param_7[6];
  local_c4 = (int)&local_d0 + local_c4;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar18 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  iVar18 = param_7[7];
  local_c0 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar2 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  iVar2 = param_7[8];
  local_bc = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar19 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_b8 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar3 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_b4 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar4 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_b0 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar5 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_ac = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar18 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_a8 = puVar12 + 0x14;
  puVar12 = (ulonglong *)((int)puVar12 - (iVar2 + 0x2dU & 0xfffffff0));
  *puVar12 = uVar15;
  local_a4 = puVar12 + 0x14;
  if (bVar1) {
    param_2 = uVar15 - 200;
    param_3 = 0;
  }
  bVar1 = !bVar1;
  uVar6 = *(uint *)(param_1 + 0x14);
  uVar21 = (ulonglong)uVar6 ^ 1;
  if (*(int *)(param_1 + ((int)(uVar21 << 6) - (int)(uVar21 << 4)) + 0x1c) == 0) {
    uVar21 = (ulonglong)uVar6;
  }
  uVar20 = 0xffffffffffffffff;
  local_170[0] = uVar15;
  piVar17 = param_4;
  if ((in_stack_00000074 & 0x100000) != 0) {
    if ((param_8 & 0x100000) == 0) {
      iVar18 = *param_4;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 4);
      uVar8 = *(undefined4 *)(param_1 + 8);
      iVar18 = param_1 + uVar6 * 0x30 + 0x30;
      uVar9 = *(undefined4 *)(param_1 + ((int)(uVar21 << 6) - (int)(uVar21 << 4)) + 0x40);
      uVar10 = *(undefined4 *)(iVar18 + 0x14);
      uVar11 = *(undefined4 *)(iVar18 + 0x10);
      puVar12[0xe] = param_2 & 0xffffffff;
      puVar12[0x11] = uVar15 - 0xc4;
      puVar12[0x13] = uVar15 - 0xd0;
      puVar12[0xf] = param_3 & 0xffffffff;
      puVar12[0x10] = (ulonglong)bVar1;
      puVar12[0x12] = param_8 & 0xffffffff;
      FUN_005f87d0(uVar9,uVar11,uVar7,uVar8,uVar10,param_4 + 1,piVar22,param_5);
      iVar18 = *param_4;
      uVar20 = (ulonglong)local_d0.piece<0,4>();
    }
    piVar17 = (int *)((int)param_4 + iVar18);
    if (piVar17 < param_4) goto LAB_005fba28;
  }
  if (piVar17 < piVar22) {
    bVar13 = (param_8 & 0x8000) == 0;
    if (bVar13) {
      piVar17 = piVar17 + 1;
    }
    piVar16 = piVar17;
    if ((param_8 & 0x200) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 4);
      uVar8 = *(undefined4 *)(param_1 + 8);
      iVar18 = param_1 + uVar6 * 0x30 + 0x10;
      uVar9 = *(undefined4 *)(param_1 + ((int)(uVar21 << 6) - (int)(uVar21 << 4)) + 0x1c);
      uVar10 = *(undefined4 *)(iVar18 + 0x10);
      uVar11 = *(undefined4 *)(iVar18 + 0xc);
      puVar12[0xe] = param_2 & 0xffffffff;
      puVar12[0x11] = uVar15 - 0xc4;
      puVar12[0xf] = param_3 & 0xffffffff;
      puVar12[0x13] = uVar15 - 0xd0;
      puVar12[0x10] = (ulonglong)bVar1;
      puVar12[0x12] = param_8 & 0xffffffff;
      piVar16 = (int *)FUN_005f87d0(uVar9,uVar11,uVar7,uVar8,uVar10,piVar17,piVar22,param_5);
      if ((ulonglong)local_d0.piece<0,4>() < (uVar20 & 0xffffffff)) {
        uVar20 = (ulonglong)local_d0.piece<0,4>();
      }
    }
    if (bVar13) {
      piVar16 = (int *)((int)piVar17 + piVar17[-1] + -4);
    }
    if ((((param_8 & 0x20000) == 0) && (param_4 <= piVar16)) && (piVar16 < piVar22)) {
      iVar18 = uVar6 * 0x40 + (uVar6 & 0xfffffff) * -0x10;
      iVar2 = (int)(uVar21 << 6) - (int)(uVar21 << 4);
      iVar19 = param_1 + iVar18 + 0x10;
      local_a0 = (longlong)param_5;
      uVar7 = *(undefined4 *)(iVar19 + 0x1c);
      uVar8 = *(undefined4 *)(iVar19 + 0x18);
      uVar9 = *(undefined4 *)(param_1 + 0xc);
      uVar10 = *(undefined4 *)(param_1 + iVar2 + 0x28);
      uVar21 = uVar15 - 0xc4 & 0xffffffff;
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      uVar15 = uVar15 - 0xd0 & 0xffffffff;
      puVar12[0xe] = param_2 & 0xffffffff;
      puVar12[0xf] = param_3 & 0xffffffff;
      puVar12[0x10] = (ulonglong)bVar1 << 1;
      puVar12[0x11] = uVar21;
      puVar12[0x12] = param_8 & 0xffffffff;
      puVar12[0x13] = uVar15;
      piVar17 = (int *)FUN_005f87d0(uVar10,uVar8,uVar9,uVar11,uVar7,piVar16,piVar22,local_a0);
      uVar14 = ((ulonglong)local_d0.piece<0,4>() & 0x3fffffff) << 2;
      local_d0.piece<0,4>() = (uint)uVar14;
      if (uVar14 < (uVar20 & 0xffffffff)) {
        uVar20 = uVar14;
      }
      if ((param_4 <= piVar17) && (piVar17 < piVar22)) {
        uVar7 = *(undefined4 *)(param_1 + 0xc);
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        iVar18 = param_1 + iVar18 + 0x20;
        uVar9 = *(undefined4 *)(iVar18 + 0x18);
        uVar10 = *(undefined4 *)(iVar18 + 0x14);
        uVar11 = *(undefined4 *)(param_1 + iVar2 + 0x34);
        puVar12[0xe] = param_2 & 0xffffffff;
        puVar12[0xf] = param_3 & 0xffffffff;
        puVar12[0x10] = (ulonglong)bVar1 << 1;
        puVar12[0x11] = uVar21;
        puVar12[0x12] = param_8 & 0xffffffff;
        puVar12[0x13] = uVar15;
        FUN_005f87d0(uVar11,uVar10,uVar7,uVar8,uVar9,piVar17,piVar22,local_a0);
        uVar15 = ((ulonglong)local_d0.piece<0,4>() & 0x3fffffff) << 2;
        if (uVar15 < (uVar20 & 0xffffffff)) {
          uVar20 = uVar15;
        }
      }
    }
  }
LAB_005fba28:
  uVar15 = (ulonglong)((longlong)*(int *)(param_1 + 4) * (longlong)*(int *)(param_1 + 8) << 0x20) >>
           0x26;
  return ((uVar15 - uVar20) * 100 & 0xffffffff) / uVar15;
}


// 0x05fbd88 (0x8 bytes)
void FUN_005fbd88(void)

{
  sync(0);
  return;
}


// 0x05fbd90 (0x10 bytes)
undefined4 FUN_005fbd90(undefined4 *param_1)

{
  sync(1);
  return *param_1;
}


// 0x05fbda0 (0xc bytes)
undefined8 FUN_005fbda0(undefined8 *param_1)

{
  sync(1);
  return *param_1;
}


// 0x05fbdac (0xc bytes)
void FUN_005fbdac(undefined4 *param_1,undefined4 param_2)

{
  sync(1);
  *param_1 = param_2;
  return;
}


// 0x05fbdb8 (0xc bytes)
void FUN_005fbdb8(undefined8 *param_1,undefined8 param_2)

{
  sync(1);
  *param_1 = param_2;
  return;
}


// 0x05fbdc8 (0x58 bytes)
undefined4 FUN_005fbdc8(ulonglong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    iVar1 = *(int *)param_1;
    if (*param_2 != iVar1) {
      *param_2 = iVar1;
      sync(1);
      return 0;
    }
    if (in_RESERVE != '\0') {
      iVar1 = storeWordConditionalIndexed(param_3,0,param_1 & 0xffffffff);
      *(int *)param_1 = iVar1;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  sync(1);
  return 1;
}


// 0x05fbe20 (0x58 bytes)
undefined4 FUN_005fbe20(ulonglong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  sync(0);
  lVar1 = *(longlong *)param_1;
  if (*param_2 == lVar1) {
    lVar1 = storeDoubleWordConditionalIndexed(param_3,0,param_1 & 0xffffffff);
    *(longlong *)param_1 = lVar1;
    sync(1);
    return 1;
  }
  *param_2 = lVar1;
  sync(1);
  return 0;
}


// 0x05fbe78 (0x2c bytes)
undefined4 FUN_005fbe78(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    uVar1 = *(undefined4 *)param_1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(param_2,0,param_1);
      *(undefined4 *)param_1 = uVar2;
      in_cr0 = 2;
    }
  } while ((in_cr0 & 2) == 0);
  sync(1);
  return uVar1;
}


// 0x05fbea8 (0x2c bytes)
undefined8 FUN_005fbea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  sync(0);
  uVar2 = *(undefined8 *)param_1;
  uVar1 = storeDoubleWordConditionalIndexed(param_2,0,param_1);
  *(undefined8 *)param_1 = uVar1;
  sync(1);
  return uVar2;
}


// 0x05fbed8 (0x20 bytes)
longlong FUN_005fbed8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  sync(0);
  lVar2 = *(longlong *)param_1;
  lVar1 = storeDoubleWordConditionalIndexed(lVar2 + param_2,0,param_1);
  *(longlong *)param_1 = lVar1;
  instructionSynchronize();
  return lVar2;
}


// 0x05fbef8 (0x20 bytes)
uint FUN_005fbef8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    uVar1 = *(uint *)param_1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar1 + param_2,0,param_1);
      *(uint *)param_1 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  instructionSynchronize();
  return uVar1;
}


// 0x05fbf18 (0x24 bytes)
void FUN_005fbf18(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  sync(0);
  if (*(longlong *)param_1 == param_3) {
    lVar1 = storeDoubleWordConditionalIndexed(param_2,0,param_1);
    *(longlong *)param_1 = lVar1;
    instructionSynchronize();
    return;
  }
  return;
}


// 0x05fbf3c (0x28 bytes)
int FUN_005fbf3c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char in_RESERVE;
  
  sync(0);
  do {
    iVar1 = *(int *)param_1;
    if (iVar1 != param_3) {
      return iVar1;
    }
    if (in_RESERVE != '\0') {
      iVar2 = storeWordConditionalIndexed(param_2,0,param_1);
      *(int *)param_1 = iVar2;
    }
  } while (in_RESERVE == '\0' && iVar1 != param_3);
  instructionSynchronize();
  return iVar1;
}


// 0x05fbf64 (0xc bytes)
undefined4 FUN_005fbf64(void)

{
  return *(undefined4 *)PTR_DAT_0071a5b0;
}


// 0x05fbf70 (0x4 bytes)
void FUN_005fbf70(void)

{
  return;
}


// 0x05fbf74 (0x38 bytes)
void FUN_005fbf74(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_00989680;
  if (param_1 != -1) {
    puVar1 = (undefined *)(param_1 * 1000);
  }
  syscall_sys_timer_usleep(puVar1);
  return;
}


// 0x05fbfac (0x1c bytes)
void FUN_005fbfac(void)

{
  syscall_sys_ppu_thread_yield();
  return;
}


// 0x05fbfc8 (0xc bytes)
void FUN_005fbfc8(void)

{
  return;
}


// 0x05fbfd4 (0xc4 bytes)
// strings: 006620d0: 'RADGAME'

bool FUN_005fbfd4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<40> local_30;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  *(uint *)(param_1 + 0x3c) = param_1 + 0xfU & 0xfffffff0;
  iVar1 = 0x20000000;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  iVar1 = syscall_sys_semaphore_create
                    (*(undefined4 *)(param_1 + 0x3c),local_30,param_2,iVar1);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0x231d;
  }
  return iVar1 == 0;
}


// 0x05fc098 (0x60 bytes)
int FUN_005fc098(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(int **)(param_1 + 0x3c))[1] == 0x231d)) {
    iVar1 = **(int **)(param_1 + 0x3c);
    syscall();
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0;
    return iVar1;
  }
  return param_1;
}


// 0x05fc0f8 (0x98 bytes)
uint FUN_005fc0f8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 0x3c);
    if (puVar1[1] == 0x231d) {
      if (param_2 == 0) {
        uVar2 = *puVar1;
        syscall();
      }
      else {
        uVar2 = *puVar1;
        syscall();
      }
      return (((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) - 1 >> 0x1f;
    }
  }
  return 0;
}


// 0x05fc190 (0x48 bytes)
undefined4 * FUN_005fc190(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && (param_1 = (undefined4 *)param_1[0xf], param_1[1] == 0x231d)
     ) {
    syscall();
    return (undefined4 *)*param_1;
  }
  return param_1;
}


// 0x05fc1d8 (0x34 bytes)
void FUN_005fc1d8(int param_1)

{
  if (param_1 != 0) {
    sys_lwmutex_lock(*(undefined4 *)(param_1 + 0x7c),0);
  }
  return;
}


// 0x05fc20c (0xb0 bytes)
uint FUN_005fc20c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    if (param_2 != -1) {
      if (param_2 == 0) {
        uVar1 = sys_lwmutex_trylock(*(undefined4 *)(param_1 + 0x7c),0);
        return (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
      }
      iVar2 = param_2 * 1000;
    }
    uVar1 = sys_lwmutex_lock(*(undefined4 *)(param_1 + 0x7c),iVar2);
    uVar1 = (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
  }
  return uVar1;
}


// 0x05fc2bc (0x30 bytes)
void FUN_005fc2bc(int param_1)

{
  if (param_1 != 0) {
    sys_lwmutex_unlock(*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}


// 0x05fc2ec (0x1a4 bytes)
undefined4 FUN_005fc2ec(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  uint uStack_3c;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (*(uint *)(iVar1 + 0x5c) != 0) {
    if (param_3 == (uint *)0x0) {
      return 1;
    }
    *param_3 = *(uint *)(iVar1 + 0x5c);
    return 1;
  }
  if (param_2 != -1) {
    if (param_2 == 0) {
      iVar2 = sys_lwmutex_trylock(iVar1 + 8);
      if (iVar2 == 0) {
        sys_lwmutex_unlock(iVar1 + 8);
        goto LAB_005fc3fc;
      }
    }
    iVar2 = sys_lwmutex_lock(iVar1 + 8,param_2 * 1000);
    if (iVar2 != 0) {
      return 0;
    }
    sys_lwmutex_unlock(iVar1 + 8);
  }
LAB_005fc3fc:
  syscall();
  *(uint *)(iVar1 + 0x5c) = uStack_3c | 0x80000000;
  if (param_3 == (uint *)0x0) {
    return 1;
  }
  *param_3 = uStack_3c;
  return 1;
}


// 0x05fc490 (0x78 bytes)
void FUN_005fc490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar3 = FUN_005fbf3c(iVar1 + 0x18,0,iVar2);
    if ((iVar2 == iVar3) && (iVar2 == 1)) {
      sys_lwmutex_destroy(iVar1);
    }
  }
  return;
}


// 0x05fc508 (0xa0 bytes)
// strings: 006620d0: 'RADGAME'

bool FUN_005fc508(int param_1)

{
  uint uVar1;
  int iVar2;
  GPiece<24> local_20;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  iVar2 = sys_lwmutex_create(uVar1,local_20);
  if (iVar2 == 0) {
    FUN_005fbd88();
    *(undefined4 *)(uVar1 + 0x18) = 1;
  }
  return iVar2 == 0;
}


// 0x05fc5a8 (0x34 bytes)
undefined8 FUN_005fc5a8(void)

{
  GPiece<16> local_10;
  
  sys_ppu_thread_get_id(local_10);
  return 0;
}


// 0x05fc5dc (0x1c bytes)
void FUN_005fc5dc(void)

{
  syscall_sys_ppu_thread_set_priority();
  return;
}


// 0x05fc5f8 (0x28 bytes)
undefined4 FUN_005fc5f8(undefined8 param_1)

{
  undefined4 local_10 [4];
  
  syscall_sys_ppu_thread_get_priority(param_1,local_10);
  return local_10[0];
}


// 0x05fc620 (0x378 bytes)
// strings: 006620d8: 'RGT_TCM'

undefined4
FUN_005fc620(int param_1,undefined4 param_2,int param_3,undefined4 param_4,ulonglong param_5,
            undefined4 param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  longlong lVar12;
  uint uStack00000008;
  int iStack_d4;
  GPiece<8> local_88;
  GPiece<24> local_80;
  
  puVar3 = PTR_DAT_0071a5b0;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar8 = ZEXT48(PTR_DAT_0071a5b0);
  plVar1 = (longlong *)(param_1 + 0xfU & 0xfffffff0);
  *(longlong **)(param_1 + 0xfc) = plVar1;
  lVar4 = FUN_005fbed8(uVar8 + 8 & 0xffffffff,1);
  if (lVar4 == 0) {
    FUN_005fbd88();
    FUN_005d0b80(PTR_DAT_0071a5b8,0);
  }
  else {
    lVar12 = 0x12d;
    do {
      if (*(int *)PTR_DAT_0071a5b8 != 0x12345677) goto LAB_005fc6e4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    do {
      syscall();
    } while (*(int *)PTR_DAT_0071a5b8 == 0x12345677);
  }
LAB_005fc6e4:
  uVar9 = 0;
  lVar12 = 0;
  do {
    while( true ) {
      uVar7 = *(uint *)(puVar3 + (int)lVar12 + 0x10);
      uVar5 = (uint)(0x1f - LZCOUNT(~uVar7));
      if (uVar5 != 0xffffffff) break;
      uVar9 = uVar9 + 1;
      lVar12 = ((ulonglong)uVar9 & 0x3fffffff) << 2;
      if (1 < (int)uVar9) {
        return 0;
      }
    }
    uVar5 = FUN_005fbf3c(lVar12 + uVar8 + 0x10 & 0xffffffff,uVar7 | 1 << (uVar5 & 0x3f),uVar7);
  } while (uVar7 != uVar5);
  bVar2 = (param_5 & 3) != 0;
  uVar10 = (0x1f - LZCOUNT(~uVar7)) + ((ulonglong)uVar9 & 0x7ffffff) * 0x20;
  iVar11 = (int)uVar10;
  if (bVar2) {
    iVar6 = sys_lwmutex_create(plVar1 + 1,local_80);
    if (iVar6 != 0) goto LAB_005fc800;
    if ((param_5 & 1) != 0) {
      sys_lwmutex_lock(plVar1 + 1,0);
    }
  }
  if (param_3 == 0) {
    param_3 = 0x8000;
  }
  *(undefined4 *)((int)plVar1 + 0x5c) = 0;
  *plVar1 = lVar4;
  *(undefined4 *)(plVar1 + 4) = param_2;
  *(undefined4 *)((int)plVar1 + 0x24) = param_4;
  *(int *)((int)plVar1 + 100) = iVar11;
  *(undefined4 *)(plVar1 + 5) = param_6;
  *(int *)(plVar1 + 0xb) = (int)param_5;
  *(undefined4 *)(plVar1 + 0xc) = 1;
  sys_ppu_thread_get_id(local_88);
  syscall();
  iVar6 = sys_ppu_thread_create
                    (plVar1 + 10,*(undefined4 *)(iStack_d4 + -0x7d68),param_1,0x3e9,param_3,
                     (param_5 ^ 4) >> 2 & 1,param_6);
  if (iVar6 == 0) {
    return 1;
  }
  *(undefined4 *)((int)plVar1 + 0x5c) = 1;
  *(undefined4 *)(plVar1 + 0xc) = 0;
  if (bVar2) {
    if ((param_5 & 1) != 0) {
      sys_lwmutex_unlock(plVar1 + 1);
    }
    sys_lwmutex_destroy(plVar1 + 1);
  }
LAB_005fc800:
  lVar4 = ((ulonglong)(uint)(iVar11 >> 5) & 0x3fffffff) * 4;
  uVar10 = uVar10 & 0x1f;
  do {
    uVar9 = *(uint *)(puVar3 + (int)lVar4 + 0x10);
    uVar7 = FUN_005fbf3c(lVar4 + uVar8 + 0x10 & 0xffffffff,
                         (ulonglong)uVar9 &
                         (-0x100000002 << uVar10 | 0xfffffffefffffffeU >> 0x40 - uVar10) &
                         0xffffffff,uVar9);
  } while (uVar9 != uVar7);
  return 0;
}


// 0x05fc998 (0x48 bytes)
undefined4 * FUN_005fc998(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) && (param_1 = (undefined4 *)param_1[0xf], param_1[1] == 0x231d)
     ) {
    syscall();
    return (undefined4 *)*param_1;
  }
  return param_1;
}


// 0x05fc9e0 (0x60 bytes)
int FUN_005fc9e0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(int **)(param_1 + 0x3c))[1] == 0x231d)) {
    iVar1 = **(int **)(param_1 + 0x3c);
    syscall();
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0;
    return iVar1;
  }
  return param_1;
}


// 0x05fca40 (0x60 bytes)
undefined8 FUN_005fca40(int param_1)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  return *(undefined8 *)(*(int *)(param_1 + 0xfc) + 0x50);
}


// 0x05fcaa0 (0xb4 bytes)
// strings: 006620d0: 'RADGAME'

bool FUN_005fcaa0(int param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<40> local_30;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  *(uint *)(param_1 + 0x3c) = param_1 + 0xfU & 0xfffffff0;
  iVar1 = syscall_sys_semaphore_create
                    (*(undefined4 *)(param_1 + 0x3c),local_30,0,0x20000000);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4) = 0x231d;
  }
  return iVar1 == 0;
}


// 0x05fcb58 (0x5c bytes)
void FUN_005fcb58(int param_1)

{
  if (param_1 != 0) {
    do {
      if ((*(int **)(param_1 + 0x3c))[1] != 0x231d) {
        return;
      }
      syscall();
    } while (**(int **)(param_1 + 0x3c) == 0);
  }
  return;
}


// 0x05fcbb8 (0x98 bytes)
uint FUN_005fcbb8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 0x3c);
    if (puVar1[1] == 0x231d) {
      if (param_2 == 0) {
        uVar2 = *puVar1;
        syscall();
      }
      else {
        uVar2 = *puVar1;
        syscall();
      }
      return (((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) - 1 >> 0x1f;
    }
  }
  return 0;
}


// 0x05fcc50 (0x78 bytes)
undefined4 FUN_005fcc50(int param_1,undefined8 *param_2)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  *param_2 = *(undefined8 *)(*(int *)(param_1 + 0xfc) + 0x50);
  return 1;
}


// 0x05fccc8 (0xac bytes)
void FUN_005fccc8(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) ||
      ((*(int *)PTR_DAT_0071a5b8 != 0x12345677 &&
       (iVar1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), iVar1 != 0)))) && (param_2 + 2U < 0x17)) {
                    /* WARNING: Could not recover jumptable at 0x005fcd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071a5c4 + *(int *)(PTR_DAT_0071a5c4 + (param_2 + 2U) * 4)))();
    return;
  }
  return;
}


// 0x05fcf70 (0x94 bytes)
void FUN_005fcf70(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) ||
     ((*(int *)PTR_DAT_0071a5b8 != 0x12345677 &&
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 != 0)))) {
    iVar1 = *(int *)(param_1 + 0xfc);
    if ((*(uint *)(iVar1 + 0x58) & 1) != 0) {
      *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xfffffffe;
      sys_lwmutex_unlock(iVar1 + 8);
      return;
    }
  }
  return;
}


// 0x05fd004 (0x4c bytes)
undefined4 FUN_005fd004(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)PTR_DAT_0071a5b8 != 0x12345677) {
    uVar1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
  }
  return uVar1;
}


// 0x05fd050 (0x6c bytes)
undefined4 FUN_005fd050(int param_1)

{
  if (param_1 == 0) {
    if (*(int *)PTR_DAT_0071a5b8 == 0x12345677) {
      return 0;
    }
    param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xfc) + 0x28);
}


// 0x05fd0bc (0x60 bytes)
undefined8 FUN_005fd0bc(int param_1)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  return **(undefined8 **)(param_1 + 0xfc);
}


// 0x05fd120 (0xcc bytes)
undefined4 FUN_005fd120(int param_1,ulonglong param_2,undefined4 *param_3)

{
  if (7 < (int)param_2) {
    return 0;
  }
  if (param_1 == 0) {
    if (*(int *)PTR_DAT_0071a5b8 == 0x12345677) {
      return 0;
    }
    param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
    if (param_1 == 0) {
      return 0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xfc) + (int)((param_2 & 0xffffffff) << 2) + 0x2c)
    ;
  }
  return 1;
}


// 0x05fd1f0 (0xb0 bytes)
undefined4 FUN_005fd1f0(int param_1,int param_2,undefined4 param_3)

{
  if (7 < param_2) {
    return 0;
  }
  if (param_1 == 0) {
    if (*(int *)PTR_DAT_0071a5b8 == 0x12345677) {
      return 0;
    }
    param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8);
    if (param_1 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0xfc) + param_2 * 4 + 0x2c) = param_3;
  return 1;
}


// 0x05fd2a0 (0x64 bytes)
undefined4 FUN_005fd2a0(int param_1)

{
  if ((param_1 == 0) &&
     ((*(int *)PTR_DAT_0071a5b8 == 0x12345677 ||
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 == 0)))) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xfc) + 100);
}


// 0x05fd308 (0x1c4 bytes)
ulonglong FUN_005fd308(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  uVar3 = FUN_005fbf18(param_1 + 0x50,0xffffffffffffffff,uVar6);
  puVar1 = PTR_DAT_0071a5b0;
  if (((uVar6 & 0xffffffff) == uVar3) && (uVar6 != 0xffffffffffffffff)) {
    FUN_005fbef8(PTR_DAT_0071a5b0,0xffffffffffffffff);
    do {
      uVar4 = *(uint *)(param_1 + 100) >> 3 & 0x1ffffffc;
      uVar5 = *(uint *)(puVar1 + uVar4 + 0x10);
      uVar4 = FUN_005fbf3c(puVar1 + uVar4 + 0x10,uVar5 & ~(1 << (*(uint *)(param_1 + 100) & 0x1f)),
                           uVar5);
      puVar2 = PTR_DAT_0071a5b8;
    } while (uVar5 != uVar4);
    uVar5 = *(uint *)PTR_DAT_0071a5b8;
    uVar3 = (ulonglong)uVar5;
    if (((uVar5 != 0x12345677) && (uVar3 = FUN_005d0854(uVar5), (int)uVar3 != 0)) &&
       (param_1 == *(int *)((int)uVar3 + 0xfc))) {
      uVar3 = FUN_005d0a3c(*(undefined4 *)puVar2,0);
    }
    uVar5 = *(uint *)(param_1 + 0x58);
    if (((uVar5 & 4) == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      uVar3 = *(ulonglong *)(param_1 + 0x50);
      syscall();
      uVar5 = *(uint *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    if (((uVar5 & 2) != 0) || ((uVar5 & 1) != 0)) {
      uVar3 = sys_lwmutex_destroy(param_1 + 8);
      return uVar3;
    }
  }
  return uVar3;
}


// 0x05fd4d0 (0x9c bytes)
void FUN_005fd4d0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) ||
     ((*(int *)PTR_DAT_0071a5b8 != 0x12345677 &&
      (param_1 = FUN_005d0854(*(int *)PTR_DAT_0071a5b8), param_1 != 0)))) {
    iVar1 = *(int *)(param_1 + 0xfc);
    FUN_005fbf3c(iVar1 + 0x60,3,1);
    if (*(int *)(iVar1 + 0x60) == 0) {
      FUN_005fd308(iVar1);
      return;
    }
  }
  return;
}


// 0x05fd570 (0x160 bytes)
void FUN_005fd570(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_0071a5b8;
  iVar1 = *(int *)(param_1 + 0xfc);
  FUN_005d0a3c(*(undefined4 *)PTR_DAT_0071a5b8,param_1);
  if (((*(uint *)(iVar1 + 0x58) & 2) == 0) && ((*(uint *)(iVar1 + 0x58) & 1) == 0)) {
    uVar4 = (*(code *)**(undefined4 **)(iVar1 + 0x20))(*(undefined4 *)(iVar1 + 0x24));
  }
  else {
    sys_lwmutex_lock(iVar1 + 8,0);
    uVar4 = (*(code *)**(undefined4 **)(iVar1 + 0x20))(*(undefined4 *)(iVar1 + 0x24));
    sys_lwmutex_unlock(iVar1 + 8);
  }
  do {
    uVar2 = *(uint *)(iVar1 + 0x60);
    uVar5 = FUN_005fbf3c(iVar1 + 0x60,uVar2 & 0xfffffffe,uVar2);
  } while (uVar2 != uVar5);
  if (uVar2 == 3) {
    syscall();
    FUN_005fd308(iVar1);
  }
  FUN_005d0a3c(*(undefined4 *)puVar3,0);
  sys_ppu_thread_exit(uVar4);
  return;
}


// 0x05fd6d0 (0x30 bytes)
void FUN_005fd6d0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x10;
  param_1[6] = param_2;
  param_1[5] = 0;
  param_1[1] = (int)piVar1;
  param_1[3] = (int)(piVar1 + param_2);
  *param_1 = (int)piVar1;
  param_1[2] = (int)(piVar1 + param_2);
  param_1[4] = 0;
  return;
}


// 0x05fd700 (0x78 bytes)
void FUN_005fd700(int param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14)) {
    trapWord(0x1f,ZEXT48(&stack0x00000000),ZEXT48(&stack0x00000000));
  }
  iVar1 = ((uint)(param_3 + 0x1fU) & 0xffffffe0) +
          ((uint)(((((ulonglong)(*(uint *)(param_1 + 0x10) >> 5) & 0x1f) -
                   ((param_3 + 0x1fU & 0x3e0) >> 5)) + 0x21 & 0xffffffff) << 5) & 0x3e0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + iVar1;
  *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0xc)) = iVar1;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 4)) = param_2;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  return;
}


// 0x05fd778 (0x18 bytes)
undefined4 FUN_005fd778(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


// 0x05fd790 (0xfc bytes)
int FUN_005fd790(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 != 0) {
    uVar1 = param_2 + 0x1fU & 0xffffffe0;
    iVar3 = FUN_005f5204(uVar1 + *(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
      iVar4 = iVar3 + uVar1;
      uVar5 = 0;
      do {
        iVar2 = (int)((uVar5 & 0xffffffff) << 2);
        uVar6 = uVar5 + 1;
        uVar5 = uVar5 + 1;
        **(int **)(iVar2 + *(int *)(param_1 + 4)) = iVar4;
        iVar4 = iVar4 + *(int *)(iVar2 + *(int *)(param_1 + 0xc));
      } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    return iVar3;
  }
  iVar3 = FUN_005f5204(param_2 + 0x1fU & 0xffffffe0);
  return iVar3;
}


// 0x05fd890 (0xc8 bytes)
// strings: 006620e0: 'Mismatched Bink/Telemetry versions.'

void FUN_005fd890(uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071a5c8;
  puVar2 = (undefined4 *)(param_1 ^ 0x87692345);
  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_0071a5c8 = 0;
    return;
  }
  *(undefined4 **)PTR_DAT_0071a5c8 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = (**(code **)*puVar2)(puVar2,1,0,0xd,0);
    if (iVar3 != 0) {
      FUN_005ea300(PTR_s_Mismatched_Bink_Telemetry_versio_0071a5cc);
      *(undefined4 *)puVar1 = 0;
      return;
    }
  }
  return;
}


// 0x05fd958 (0x9c bytes)
// strings: 006620e0: 'Mismatched Bink/Telemetry versions.'

void FUN_005fd958(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071a5c8;
  *(undefined4 **)PTR_DAT_0071a5c8 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*param_1)(param_1,1,0,0xd,0);
    if (iVar2 != 0) {
      FUN_005ea300(PTR_s_Mismatched_Bink_Telemetry_versio_0071a5cc);
      *(undefined4 *)puVar1 = 0;
      return;
    }
  }
  return;
}


// 0x05fd9f8 (0x490 bytes)
void FUN_005fd9f8(int param_1,longlong param_2,int param_3)

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
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar27;
  longlong lVar26;
  int iVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  float *pfVar38;
  longlong lVar39;
  longlong lVar40;
  
  uVar12 = param_1 >> 3;
  lVar29 = ((ulonglong)uVar12 & 0x7fffffff) * 2;
  uVar35 = lVar29 + ((ulonglong)uVar12 & 0x3fffffff) * 4;
  lVar36 = param_2 + ((ulonglong)uVar12 & 0xfffffff) * 0x10;
  lVar37 = param_2 + ((ulonglong)uVar12 & 0x1fffffff) * 8;
  lVar39 = param_2 + (uVar35 & 0x3fffffff) * 4;
  pfVar38 = (float *)lVar36;
  pfVar22 = (float *)lVar37;
  pfVar21 = (float *)lVar39;
  fVar1 = pfVar38[1];
  fVar2 = pfVar21[1];
  pfVar27 = (float *)param_2;
  fVar5 = *pfVar27 - *pfVar38;
  fVar3 = pfVar22[1];
  fVar7 = *pfVar22 - *pfVar21;
  fVar11 = pfVar27[1];
  fVar8 = fVar3 - fVar2;
  fVar4 = fVar11 - fVar1;
  fVar6 = *pfVar27 + *pfVar38;
  fVar11 = fVar11 + fVar1;
  fVar1 = *pfVar22 + *pfVar21;
  fVar3 = fVar3 + fVar2;
  *pfVar27 = fVar6 + fVar1;
  pfVar27[1] = fVar11 + fVar3;
  *pfVar22 = fVar6 - fVar1;
  pfVar22[1] = fVar11 - fVar3;
  *pfVar38 = fVar5 - fVar8;
  pfVar38[1] = fVar4 + fVar7;
  *pfVar21 = fVar5 + fVar8;
  pfVar21[1] = fVar4 - fVar7;
  fVar1 = *(float *)(param_3 + 4);
  if (2 < (int)uVar12) {
    lVar40 = param_2 + 8;
    lVar34 = param_2 + (lVar29 + uVar35 & 0x3fffffff) * 4;
    param_2 = param_2 + 0xc;
    iVar30 = 2;
    iVar31 = 0;
    pfVar38 = (float *)(param_3 + 0x10);
    lVar26 = lVar36;
    lVar32 = lVar39;
    lVar33 = lVar37;
    do {
      iVar18 = (int)lVar36;
      fVar2 = *(float *)lVar40;
      iVar17 = (int)lVar37;
      fVar3 = *(float *)param_2;
      iVar19 = (int)lVar39;
      iVar28 = iVar31 + param_3;
      fVar6 = fVar2 - *(float *)(iVar18 + 8);
      fVar7 = fVar3 - *(float *)(iVar18 + 0xc);
      fVar3 = fVar3 + *(float *)(iVar18 + 0xc);
      fVar2 = fVar2 + *(float *)(iVar18 + 8);
      fVar9 = *(float *)(iVar17 + 8) - *(float *)(iVar19 + 8);
      fVar14 = *(float *)(iVar17 + 0xc) - *(float *)(iVar19 + 0xc);
      fVar10 = *(float *)(iVar17 + 8) + *(float *)(iVar19 + 8);
      fVar11 = *(float *)(iVar28 + 0x14);
      fVar15 = *(float *)(iVar17 + 0xc) + *(float *)(iVar19 + 0xc);
      fVar4 = *pfVar38;
      fVar16 = -*(float *)(iVar28 + 0x1c);
      fVar5 = *(float *)(iVar28 + 0x18);
      pfVar23 = (float *)((int)lVar33 + -4);
      pfVar21 = (float *)((int)lVar32 + -4);
      pfVar25 = (float *)((int)lVar26 + -4);
      pfVar22 = (float *)((int)lVar34 + -4);
      fVar13 = fVar7 - fVar9;
      lVar33 = lVar33 + -8;
      fVar8 = fVar6 + fVar14;
      lVar32 = lVar32 + -8;
      fVar6 = fVar6 - fVar14;
      lVar34 = lVar34 + -8;
      fVar7 = fVar7 + fVar9;
      pfVar24 = (float *)(lVar26 + -8);
      iVar30 = iVar30 + 2;
      pfVar38 = pfVar38 + 4;
      iVar31 = iVar31 + 0x10;
      lVar36 = lVar36 + 8;
      *(float *)lVar40 = fVar2 + fVar10;
      lVar37 = lVar37 + 8;
      *(float *)param_2 = fVar3 + fVar15;
      lVar40 = lVar40 + 8;
      *(float *)(iVar17 + 0xc) = fVar3 - fVar15;
      param_2 = param_2 + 8;
      *(float *)(iVar17 + 8) = fVar2 - fVar10;
      lVar39 = lVar39 + 8;
      *(float *)(iVar18 + 0xc) = fVar4 * fVar7 + fVar11 * fVar6;
      *(float *)(iVar18 + 8) = fVar4 * fVar6 - fVar11 * fVar7;
      *(float *)(iVar19 + 0xc) = fVar5 * fVar13 - fVar16 * fVar8;
      *(float *)(iVar19 + 8) = fVar5 * fVar8 + fVar16 * fVar13;
      fVar2 = *(float *)lVar33;
      fVar3 = *(float *)lVar32;
      fVar6 = *pfVar21;
      fVar13 = fVar2 - fVar3;
      fVar7 = *(float *)lVar34;
      fVar2 = fVar2 + fVar3;
      fVar3 = *pfVar22;
      fVar8 = *pfVar23;
      fVar9 = *pfVar24;
      fVar14 = fVar8 - fVar6;
      fVar10 = *pfVar25;
      fVar15 = fVar9 - fVar7;
      fVar20 = fVar10 - fVar3;
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar3;
      fVar8 = fVar8 + fVar6;
      fVar6 = fVar14 - fVar15;
      fVar3 = fVar13 + fVar20;
      fVar14 = fVar14 + fVar15;
      fVar13 = fVar13 - fVar20;
      *(float *)lVar33 = fVar2 + fVar9;
      *pfVar23 = fVar8 + fVar10;
      *pfVar24 = fVar2 - fVar9;
      *pfVar25 = fVar8 - fVar10;
      *(float *)lVar32 = fVar11 * fVar13 - fVar4 * fVar14;
      *pfVar21 = fVar11 * fVar14 + fVar4 * fVar13;
      *(float *)lVar34 = fVar16 * fVar3 + fVar5 * fVar6;
      *pfVar22 = fVar16 * fVar6 - fVar5 * fVar3;
      lVar26 = lVar26 + -8;
    } while (iVar30 < (int)uVar12);
  }
  uVar35 = lVar29 + (int)uVar12 + lVar29;
  pfVar38 = pfVar27 + uVar12;
  pfVar22 = (float *)((int)pfVar27 + (int)((lVar29 + uVar35 & 0xffffffff) << 2));
  pfVar21 = (float *)((int)pfVar27 + (int)((uVar35 & 0xffffffff) << 2));
  pfVar27 = (float *)((int)pfVar27 + (int)(((int)uVar12 + lVar29 & 0xffffffffU) << 2));
  fVar2 = pfVar38[1];
  fVar3 = pfVar21[1];
  fVar11 = pfVar27[1];
  fVar4 = pfVar22[1];
  fVar5 = fVar2 - fVar3;
  fVar6 = fVar11 - fVar4;
  fVar11 = fVar11 + fVar4;
  fVar4 = *pfVar38 - *pfVar21;
  fVar7 = *pfVar38 + *pfVar21;
  fVar9 = *pfVar27 - *pfVar22;
  fVar2 = fVar2 + fVar3;
  fVar10 = *pfVar27 + *pfVar22;
  fVar8 = fVar4 + fVar6;
  fVar4 = fVar4 - fVar6;
  fVar3 = fVar5 - fVar9;
  fVar5 = fVar5 + fVar9;
  *pfVar38 = fVar7 + fVar10;
  pfVar38[1] = fVar2 + fVar11;
  *pfVar27 = fVar7 - fVar10;
  pfVar27[1] = fVar2 - fVar11;
  *pfVar21 = fVar1 * (fVar4 - fVar5);
  pfVar21[1] = fVar1 * (fVar4 + fVar5);
  *pfVar22 = -fVar1 * (fVar8 + fVar3);
  pfVar22[1] = fVar1 * (fVar8 - fVar3);
  return;
}


// 0x05fde88 (0x5d8 bytes)
void FUN_005fde88(int param_1,float *param_2,int param_3)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float *pfVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  
  param_1 = param_1 >> 3;
  pfVar30 = param_2 + param_1 * 6;
  pfVar37 = param_2 + param_1 * 2;
  fVar1 = pfVar30[1];
  fVar2 = pfVar37[1];
  pfVar39 = param_2 + param_1 * 4;
  fVar6 = fVar2 - *pfVar30;
  fVar5 = *pfVar37 + fVar1;
  fVar2 = fVar2 + *pfVar30;
  fVar1 = *pfVar37 - fVar1;
  fVar3 = *(float *)(param_3 + 4);
  fVar10 = param_2[1];
  fVar8 = fVar10 - *pfVar39;
  fVar10 = fVar10 + *pfVar39;
  fVar4 = pfVar39[1];
  fVar9 = *param_2 + fVar4;
  fVar4 = *param_2 - fVar4;
  fVar7 = fVar3 * (fVar5 + fVar6);
  fVar5 = fVar3 * (fVar5 - fVar6);
  fVar6 = fVar3 * (fVar1 + fVar2);
  fVar3 = fVar3 * (fVar1 - fVar2);
  *param_2 = fVar4 + fVar3;
  param_2[1] = fVar10 + fVar6;
  *pfVar37 = fVar4 - fVar3;
  pfVar37[1] = fVar10 - fVar6;
  *pfVar39 = fVar9 - fVar7;
  pfVar39[1] = fVar8 + fVar5;
  *pfVar30 = fVar9 + fVar7;
  pfVar30[1] = fVar8 - fVar5;
  if (2 < param_1) {
    pfVar32 = param_2 + 2;
    pfVar33 = param_2 + 3;
    iVar26 = 2;
    iVar27 = 0;
    pfVar31 = (float *)(param_3 + 0x10);
    pfVar34 = param_2 + param_1 * 8;
    pfVar28 = pfVar39;
    pfVar25 = (float *)(param_3 + param_1 * 0x10);
    pfVar29 = pfVar37;
    pfVar38 = pfVar30;
    do {
      iVar20 = param_3 + iVar27;
      fVar6 = *pfVar32 + pfVar28[3];
      fVar8 = *pfVar33 - pfVar28[2];
      fVar7 = *pfVar32 - pfVar28[3];
      fVar13 = pfVar29[2] + pfVar30[3];
      fVar11 = -*(float *)(iVar20 + 0x1c);
      fVar9 = *pfVar33 + pfVar28[2];
      fVar18 = pfVar29[3] - pfVar30[2];
      fVar19 = pfVar29[3] + pfVar30[2];
      fVar14 = pfVar29[2] - pfVar30[3];
      fVar1 = *(float *)(iVar20 + 0x14);
      fVar2 = *(float *)(iVar20 + 0x18);
      pfVar21 = pfVar37 + -1;
      pfVar36 = pfVar38 + -2;
      fVar3 = pfVar25[-2];
      fVar4 = pfVar25[-4];
      fVar16 = -pfVar25[-1];
      pfVar22 = pfVar39 + -1;
      fVar10 = *pfVar31;
      pfVar35 = pfVar34 + -2;
      pfVar39 = pfVar39 + -2;
      fVar15 = fVar10 * fVar9 + fVar1 * fVar7;
      pfVar37 = pfVar37 + -2;
      fVar12 = fVar2 * fVar8 - fVar11 * fVar6;
      fVar5 = pfVar25[-3];
      fVar17 = fVar16 * fVar18 - fVar3 * fVar13;
      fVar7 = fVar10 * fVar7 - fVar1 * fVar9;
      fVar9 = fVar5 * fVar19 + fVar4 * fVar14;
      fVar14 = fVar5 * fVar14 - fVar4 * fVar19;
      fVar6 = fVar2 * fVar6 + fVar11 * fVar8;
      fVar8 = fVar16 * fVar13 + fVar3 * fVar18;
      iVar26 = iVar26 + 2;
      pfVar31 = pfVar31 + 4;
      iVar27 = iVar27 + 0x10;
      *pfVar32 = fVar7 + fVar14;
      pfVar32 = pfVar32 + 2;
      *pfVar33 = fVar15 + fVar9;
      pfVar33 = pfVar33 + 2;
      pfVar29[3] = fVar15 - fVar9;
      pfVar29[2] = fVar7 - fVar14;
      pfVar28[2] = fVar6 + fVar8;
      pfVar28[3] = fVar12 + fVar17;
      pfVar30[3] = fVar12 - fVar17;
      pfVar30[2] = fVar6 - fVar8;
      fVar6 = pfVar38[-1];
      fVar7 = pfVar34[-1];
      fVar8 = *pfVar21;
      fVar13 = *pfVar37 + fVar6;
      fVar14 = fVar8 - *pfVar36;
      fVar9 = *pfVar22;
      fVar6 = *pfVar37 - fVar6;
      fVar17 = fVar9 - *pfVar35;
      fVar15 = *pfVar39 + fVar7;
      fVar8 = fVar8 + *pfVar36;
      fVar7 = *pfVar39 - fVar7;
      fVar9 = fVar9 + *pfVar35;
      fVar12 = fVar3 * fVar14 - fVar16 * fVar13;
      fVar13 = fVar3 * fVar13 + fVar16 * fVar14;
      fVar14 = fVar4 * fVar8 + fVar5 * fVar6;
      fVar3 = fVar11 * fVar17 - fVar2 * fVar15;
      fVar5 = fVar4 * fVar6 - fVar5 * fVar8;
      fVar4 = fVar1 * fVar9 + fVar10 * fVar7;
      fVar2 = fVar11 * fVar15 + fVar2 * fVar17;
      fVar1 = fVar1 * fVar7 - fVar10 * fVar9;
      *pfVar37 = fVar5 + fVar1;
      *pfVar21 = fVar14 + fVar4;
      *pfVar39 = fVar5 - fVar1;
      *pfVar22 = fVar14 - fVar4;
      *pfVar36 = fVar13 + fVar2;
      pfVar38[-1] = fVar12 + fVar3;
      *pfVar35 = fVar13 - fVar2;
      pfVar34[-1] = fVar12 - fVar3;
      pfVar34 = pfVar35;
      pfVar28 = pfVar28 + 2;
      pfVar25 = pfVar25 + -4;
      pfVar29 = pfVar29 + 2;
      pfVar30 = pfVar30 + 2;
      pfVar38 = pfVar36;
    } while (iVar26 < param_1);
  }
  uVar23 = (ulonglong)(uint)(param_1 * 2);
  uVar24 = uVar23 + (longlong)param_1 + uVar23;
  pfVar37 = param_2 + param_1;
  pfVar34 = (float *)((int)param_2 + (int)((uVar23 + uVar24 & 0xffffffff) << 2));
  pfVar39 = (float *)((int)param_2 + (int)((uVar24 & 0xffffffff) << 2));
  param_2 = (float *)((int)param_2 + (int)(((longlong)param_1 + uVar23 & 0xffffffff) << 2));
  fVar1 = pfVar39[1];
  fVar2 = pfVar37[1];
  fVar3 = pfVar34[1];
  fVar7 = fVar2 - *pfVar39;
  fVar4 = param_2[1];
  fVar2 = fVar2 + *pfVar39;
  pfVar30 = (float *)(param_3 + param_1 * 8);
  fVar14 = fVar4 - *pfVar34;
  fVar6 = *pfVar37 + fVar1;
  fVar8 = *param_2 + fVar3;
  fVar3 = *param_2 - fVar3;
  fVar4 = fVar4 + *pfVar34;
  fVar1 = *pfVar37 - fVar1;
  fVar10 = pfVar30[1];
  fVar5 = *pfVar30;
  fVar12 = fVar5 * fVar1 - fVar10 * fVar2;
  fVar9 = fVar10 * fVar7 + fVar5 * fVar6;
  fVar11 = fVar5 * fVar14 + fVar10 * fVar8;
  fVar13 = fVar10 * fVar4 + fVar5 * fVar3;
  fVar4 = fVar10 * fVar3 - fVar5 * fVar4;
  fVar3 = fVar5 * fVar2 + fVar10 * fVar1;
  fVar1 = fVar10 * fVar6 - fVar5 * fVar7;
  fVar2 = fVar5 * fVar8 - fVar10 * fVar14;
  *pfVar37 = fVar12 + fVar4;
  pfVar37[1] = fVar3 + fVar13;
  *param_2 = fVar12 - fVar4;
  param_2[1] = fVar3 - fVar13;
  *pfVar39 = fVar1 - fVar2;
  pfVar39[1] = fVar9 - fVar11;
  *pfVar34 = fVar1 + fVar2;
  pfVar34[1] = fVar9 + fVar11;
  return;
}


// 0x05fe460 (0x990 bytes)
void FUN_005fe460(float *param_1,int param_2)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = param_1[0x1f];
  fVar3 = param_1[2];
  fVar4 = param_1[0x12];
  fVar5 = param_1[3];
  fVar6 = param_1[0x13];
  fVar7 = param_1[0x1a];
  fVar8 = param_1[10];
  fVar9 = param_1[4];
  fVar10 = param_1[0x1b];
  fVar11 = param_1[0xb];
  fVar12 = param_1[0x14];
  fVar28 = fVar11 - fVar10;
  fVar13 = param_1[5];
  fVar11 = fVar11 + fVar10;
  fVar10 = param_1[0x15];
  fVar14 = param_1[0xc];
  fVar15 = param_1[0x1c];
  fVar30 = fVar5 - fVar6;
  fVar32 = fVar14 - fVar15;
  fVar16 = param_1[0xd];
  fVar17 = param_1[0x1d];
  fVar18 = param_1[6];
  fVar19 = param_1[7];
  fVar20 = param_1[0x16];
  fVar21 = param_1[0x17];
  fVar22 = param_1[0xe];
  fVar23 = param_1[0x1e];
  fVar24 = param_1[0xf];
  fVar35 = fVar22 - fVar23;
  fVar22 = fVar22 + fVar23;
  fVar34 = fVar19 - fVar21;
  fVar27 = fVar3 - fVar4;
  fVar23 = fVar8 - fVar7;
  fVar37 = fVar9 - fVar12;
  fVar38 = fVar13 - fVar10;
  fVar29 = fVar16 - fVar17;
  fVar33 = fVar18 - fVar20;
  fVar3 = fVar3 + fVar4;
  fVar4 = fVar24 - fVar2;
  fVar25 = fVar1 * *(float *)(param_2 + 8);
  fVar31 = fVar30 - fVar23;
  fVar30 = fVar30 + fVar23;
  fVar19 = fVar19 + fVar21;
  fVar26 = *(float *)(param_2 + 8) + fVar25;
  fVar5 = fVar5 + fVar6;
  fVar18 = fVar18 + fVar20;
  fVar8 = fVar8 + fVar7;
  fVar40 = fVar38 - fVar32;
  fVar36 = fVar27 + fVar28;
  fVar39 = fVar37 + fVar29;
  fVar37 = fVar37 - fVar29;
  fVar24 = fVar24 + fVar2;
  fVar41 = fVar33 + fVar4;
  fVar29 = fVar5 - fVar11;
  fVar33 = fVar33 - fVar4;
  fVar42 = fVar3 - fVar8;
  fVar27 = fVar27 - fVar28;
  fVar38 = fVar38 + fVar32;
  fVar28 = fVar34 - fVar35;
  fVar34 = fVar34 + fVar35;
  fVar32 = fVar18 - fVar22;
  fVar35 = fVar19 - fVar24;
  fVar2 = param_1[0x10];
  fVar4 = param_1[0x11];
  fVar6 = param_1[1];
  fVar7 = param_1[0x19];
  fVar20 = param_1[8];
  fVar21 = param_1[9];
  fVar44 = *param_1 - fVar2;
  fVar47 = fVar21 - fVar7;
  fVar23 = param_1[0x18];
  fVar46 = fVar20 - fVar23;
  fVar45 = fVar6 - fVar4;
  fVar43 = fVar42 + fVar35;
  fVar20 = fVar20 + fVar23;
  fVar21 = fVar21 + fVar7;
  fVar42 = fVar42 - fVar35;
  fVar35 = fVar29 - fVar32;
  fVar2 = *param_1 + fVar2;
  fVar6 = fVar6 + fVar4;
  fVar9 = fVar9 + fVar12;
  fVar13 = fVar13 + fVar10;
  fVar14 = fVar14 + fVar15;
  fVar16 = fVar16 + fVar17;
  fVar29 = fVar29 + fVar32;
  fVar15 = fVar26 * fVar30 + fVar25 * fVar27;
  fVar32 = fVar44 + fVar47;
  fVar23 = fVar25 * fVar31 + fVar26 * fVar36;
  fVar49 = fVar2 - fVar20;
  fVar2 = fVar2 + fVar20;
  fVar51 = fVar9 - fVar14;
  fVar12 = fVar26 * fVar28 + fVar25 * fVar41;
  fVar48 = fVar45 - fVar46;
  fVar52 = fVar13 - fVar16;
  fVar20 = fVar25 * fVar34 + fVar26 * fVar33;
  fVar50 = fVar6 - fVar21;
  fVar6 = fVar6 + fVar21;
  fVar10 = fVar26 * fVar27 - fVar25 * fVar30;
  fVar21 = fVar1 * (fVar37 - fVar38);
  fVar7 = fVar1 * (fVar40 - fVar39);
  fVar17 = fVar25 * fVar36 - fVar26 * fVar31;
  fVar27 = fVar1 * (fVar39 + fVar40);
  fVar4 = fVar25 * fVar33 - fVar26 * fVar34;
  fVar31 = fVar48 + fVar7;
  fVar48 = fVar48 - fVar7;
  fVar30 = fVar1 * (fVar37 + fVar38);
  fVar7 = fVar26 * fVar41 - fVar25 * fVar28;
  fVar44 = fVar44 - fVar47;
  fVar5 = fVar5 + fVar11;
  fVar3 = fVar3 + fVar8;
  fVar45 = fVar45 + fVar46;
  fVar13 = fVar13 + fVar16;
  fVar18 = fVar18 + fVar22;
  fVar9 = fVar9 + fVar14;
  fVar19 = fVar19 + fVar24;
  fVar24 = fVar17 + fVar7;
  fVar26 = fVar23 + fVar12;
  fVar8 = fVar15 - fVar20;
  fVar25 = fVar45 - fVar30;
  fVar11 = fVar32 + fVar27;
  fVar22 = fVar44 - fVar21;
  fVar44 = fVar44 + fVar21;
  fVar16 = fVar10 - fVar4;
  fVar10 = fVar10 + fVar4;
  fVar28 = fVar1 * (fVar43 + fVar35);
  fVar4 = fVar2 - fVar9;
  fVar2 = fVar2 + fVar9;
  fVar21 = fVar49 + fVar52;
  fVar14 = fVar6 - fVar13;
  fVar6 = fVar6 + fVar13;
  fVar9 = fVar50 - fVar51;
  fVar15 = fVar15 + fVar20;
  fVar33 = fVar5 - fVar19;
  fVar20 = fVar3 - fVar18;
  fVar17 = fVar17 - fVar7;
  fVar32 = fVar32 - fVar27;
  fVar7 = fVar1 * (fVar42 + fVar29);
  fVar13 = fVar1 * (fVar43 - fVar35);
  fVar1 = fVar1 * (fVar42 - fVar29);
  fVar45 = fVar45 + fVar30;
  fVar49 = fVar49 - fVar52;
  fVar5 = fVar5 + fVar19;
  fVar23 = fVar23 - fVar12;
  fVar3 = fVar3 + fVar18;
  fVar50 = fVar50 + fVar51;
  param_1[0x18] = fVar32 + fVar17;
  param_1[0x19] = fVar48 + fVar23;
  param_1[0x1a] = fVar32 - fVar17;
  param_1[0x1b] = fVar48 - fVar23;
  param_1[0x1c] = fVar11 - fVar26;
  param_1[0x1d] = fVar31 + fVar24;
  param_1[0x1e] = fVar11 + fVar26;
  param_1[0x1f] = fVar31 - fVar24;
  param_1[0x10] = fVar44 + fVar10;
  param_1[0x11] = fVar45 + fVar15;
  param_1[0x12] = fVar44 - fVar10;
  param_1[0x13] = fVar45 - fVar15;
  param_1[0x14] = fVar22 - fVar8;
  param_1[0x15] = fVar25 + fVar16;
  param_1[0x16] = fVar22 + fVar8;
  param_1[0x17] = fVar25 - fVar16;
  param_1[8] = fVar1 + fVar49;
  param_1[9] = fVar7 + fVar50;
  param_1[10] = fVar49 - fVar1;
  param_1[0xb] = fVar50 - fVar7;
  param_1[0xc] = fVar21 - fVar28;
  param_1[0xd] = fVar13 + fVar9;
  param_1[0xe] = fVar28 + fVar21;
  param_1[0xf] = fVar9 - fVar13;
  *param_1 = fVar2 + fVar3;
  param_1[1] = fVar6 + fVar5;
  param_1[2] = fVar2 - fVar3;
  param_1[3] = fVar6 - fVar5;
  param_1[4] = fVar4 - fVar33;
  param_1[5] = fVar14 + fVar20;
  param_1[6] = fVar4 + fVar33;
  param_1[7] = fVar14 - fVar20;
  return;
}


// 0x05fedf0 (0xb48 bytes)
void FUN_005fedf0(float *param_1,int param_2)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar1 = param_1[0x1e];
  fVar2 = param_1[0x13];
  fVar3 = param_1[3];
  fVar4 = param_1[2];
  fVar5 = param_1[0x12];
  fVar23 = fVar4 + fVar2;
  fVar6 = param_1[0x1b];
  fVar4 = fVar4 - fVar2;
  fVar2 = param_1[10];
  fVar26 = fVar3 - fVar5;
  fVar25 = fVar2 + fVar6;
  fVar7 = param_1[0xb];
  fVar8 = param_1[0x1a];
  fVar9 = param_1[7];
  fVar10 = param_1[6];
  fVar11 = param_1[0x17];
  fVar12 = param_1[0xf];
  fVar13 = param_1[0x1f];
  fVar14 = param_1[0x16];
  fVar15 = param_1[0xe];
  fVar29 = fVar15 + fVar13;
  fVar28 = fVar10 + fVar11;
  fVar15 = fVar15 - fVar13;
  fVar10 = fVar10 - fVar11;
  fVar27 = fVar7 - fVar8;
  fVar30 = fVar9 - fVar14;
  fVar22 = fVar12 - fVar1;
  fVar12 = fVar12 + fVar1;
  fVar7 = fVar7 + fVar8;
  fVar2 = fVar2 - fVar6;
  fVar3 = fVar3 + fVar5;
  fVar9 = fVar9 + fVar14;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar24 = fVar1 * fVar30 - *(float *)(param_2 + 0x10) * fVar28;
  fVar5 = param_1[0x19];
  fVar6 = param_1[0x18];
  fVar8 = param_1[0x15];
  fVar11 = param_1[0x14];
  fVar13 = param_1[0x1d];
  fVar14 = param_1[0x1c];
  fVar16 = param_1[8];
  fVar17 = param_1[9];
  fVar18 = param_1[4];
  fVar19 = param_1[5];
  fVar20 = param_1[0xc];
  fVar21 = param_1[0xd];
  fVar33 = fVar16 + fVar5;
  fVar16 = fVar16 - fVar5;
  fVar31 = *(float *)(param_2 + 0x1c) * fVar22 + *(float *)(param_2 + 0x18) * fVar29;
  fVar38 = *(float *)(param_2 + 0x10) * fVar3 + fVar1 * fVar4;
  fVar34 = fVar17 - fVar6;
  fVar17 = fVar17 + fVar6;
  fVar32 = *(float *)(param_2 + 0x1c) * fVar7 + *(float *)(param_2 + 0x18) * fVar2;
  fVar39 = *(float *)(param_2 + 0x18) * fVar26 + *(float *)(param_2 + 0x1c) * fVar23;
  fVar35 = fVar18 + fVar8;
  fVar18 = fVar18 - fVar8;
  fVar40 = *(float *)(param_2 + 0x10) * fVar27 - fVar1 * fVar25;
  fVar36 = fVar20 + fVar13;
  fVar37 = fVar21 - fVar14;
  fVar20 = fVar20 - fVar13;
  fVar21 = fVar21 + fVar14;
  fVar14 = fVar19 - fVar11;
  fVar19 = fVar19 + fVar11;
  fVar41 = *(float *)(param_2 + 0x18) * fVar9 + *(float *)(param_2 + 0x1c) * fVar10;
  fVar8 = *(float *)(param_2 + 0x10) * fVar4 - fVar1 * fVar3;
  fVar13 = fVar1 * fVar12 + *(float *)(param_2 + 0x10) * fVar15;
  fVar42 = *(float *)(param_2 + 0x1c) * fVar2 - *(float *)(param_2 + 0x18) * fVar7;
  fVar26 = *(float *)(param_2 + 0x18) * fVar23 - *(float *)(param_2 + 0x1c) * fVar26;
  fVar2 = *(float *)(param_2 + 0x20);
  fVar25 = *(float *)(param_2 + 0x10) * fVar25 + fVar1 * fVar27;
  fVar11 = fVar1 * fVar15 - *(float *)(param_2 + 0x10) * fVar12;
  fVar9 = *(float *)(param_2 + 0x18) * fVar10 - *(float *)(param_2 + 0x1c) * fVar9;
  fVar29 = *(float *)(param_2 + 0x1c) * fVar29 - *(float *)(param_2 + 0x18) * fVar22;
  fVar43 = fVar26 + fVar25;
  fVar7 = fVar1 * fVar28 + *(float *)(param_2 + 0x10) * fVar30;
  fVar23 = fVar8 - fVar42;
  fVar27 = fVar38 - fVar32;
  fVar44 = fVar9 - fVar11;
  fVar1 = *(float *)(param_2 + 0x24);
  fVar30 = fVar39 + fVar40;
  fVar45 = fVar41 - fVar13;
  fVar46 = fVar24 - fVar31;
  fVar28 = fVar7 - fVar29;
  fVar22 = fVar1 * fVar20 - fVar2 * fVar21;
  fVar10 = fVar2 * fVar18 - fVar1 * fVar19;
  fVar3 = *(float *)(param_2 + 4);
  fVar47 = fVar3 * (fVar33 - fVar34);
  fVar48 = fVar3 * (fVar16 - fVar17);
  fVar15 = fVar2 * fVar19 + fVar1 * fVar18;
  fVar12 = fVar2 * fVar37 + fVar1 * fVar36;
  fVar19 = fVar1 * fVar21 + fVar2 * fVar20;
  fVar20 = fVar23 + fVar45;
  fVar4 = param_1[0x11];
  fVar49 = *param_1 + fVar4;
  fVar18 = fVar1 * fVar14 + fVar2 * fVar35;
  fVar5 = param_1[0x10];
  fVar6 = param_1[1];
  fVar21 = fVar6 - fVar5;
  fVar6 = fVar6 + fVar5;
  fVar50 = fVar27 - fVar44;
  fVar51 = fVar43 - fVar46;
  fVar16 = fVar3 * (fVar16 + fVar17);
  fVar52 = fVar30 + fVar28;
  fVar5 = fVar1 * fVar35 - fVar2 * fVar14;
  fVar1 = fVar2 * fVar36 - fVar1 * fVar37;
  fVar23 = fVar23 - fVar45;
  fVar27 = fVar27 + fVar44;
  fVar30 = fVar30 - fVar28;
  fVar14 = fVar10 - fVar22;
  fVar28 = fVar15 - fVar19;
  fVar2 = fVar3 * (fVar33 + fVar34);
  fVar15 = fVar15 + fVar19;
  fVar10 = fVar10 + fVar22;
  fVar4 = *param_1 - fVar4;
  fVar43 = fVar43 + fVar46;
  fVar17 = fVar21 - fVar47;
  fVar36 = fVar18 + fVar12;
  fVar21 = fVar21 + fVar47;
  fVar19 = fVar4 - fVar48;
  fVar4 = fVar4 + fVar48;
  fVar22 = fVar49 + fVar2;
  fVar34 = fVar5 + fVar1;
  fVar5 = fVar5 - fVar1;
  fVar35 = fVar4 + fVar10;
  fVar33 = fVar6 - fVar16;
  fVar1 = fVar3 * (fVar23 - fVar27);
  fVar6 = fVar6 + fVar16;
  fVar8 = fVar8 + fVar42;
  fVar38 = fVar38 + fVar32;
  fVar49 = fVar49 - fVar2;
  fVar39 = fVar39 - fVar40;
  fVar26 = fVar26 - fVar25;
  fVar9 = fVar9 + fVar11;
  fVar16 = fVar49 - fVar5;
  fVar49 = fVar49 + fVar5;
  fVar18 = fVar18 - fVar12;
  fVar41 = fVar41 + fVar13;
  fVar7 = fVar7 + fVar29;
  fVar4 = fVar4 - fVar10;
  fVar13 = fVar21 - fVar18;
  fVar21 = fVar21 + fVar18;
  fVar24 = fVar24 + fVar31;
  fVar25 = fVar8 - fVar9;
  fVar12 = fVar6 - fVar15;
  fVar6 = fVar6 + fVar15;
  fVar29 = fVar38 - fVar41;
  fVar15 = fVar19 + fVar28;
  fVar8 = fVar8 + fVar9;
  fVar19 = fVar19 - fVar28;
  fVar32 = fVar22 - fVar36;
  fVar28 = fVar26 - fVar7;
  fVar18 = fVar33 - fVar14;
  fVar31 = fVar39 + fVar24;
  fVar26 = fVar26 + fVar7;
  fVar22 = fVar22 + fVar36;
  fVar36 = fVar17 - fVar34;
  fVar2 = fVar3 * (fVar23 + fVar27);
  fVar5 = fVar3 * (fVar51 + fVar52);
  fVar7 = fVar3 * (fVar20 - fVar50);
  fVar9 = fVar3 * (fVar20 + fVar50);
  fVar10 = fVar3 * (fVar43 - fVar30);
  fVar11 = fVar3 * (fVar43 + fVar30);
  fVar3 = fVar3 * (fVar51 - fVar52);
  fVar38 = fVar38 + fVar41;
  fVar39 = fVar39 - fVar24;
  fVar33 = fVar33 + fVar14;
  fVar17 = fVar17 + fVar34;
  *param_1 = fVar35 + fVar8;
  param_1[1] = fVar6 + fVar38;
  param_1[2] = fVar35 - fVar8;
  param_1[3] = fVar6 - fVar38;
  param_1[4] = fVar4 - fVar29;
  param_1[5] = fVar12 + fVar25;
  param_1[6] = fVar4 + fVar29;
  param_1[7] = fVar12 - fVar25;
  param_1[8] = fVar19 + fVar1;
  param_1[9] = fVar33 + fVar2;
  param_1[10] = fVar19 - fVar1;
  param_1[0xb] = fVar33 - fVar2;
  param_1[0xc] = fVar15 - fVar9;
  param_1[0xd] = fVar18 + fVar7;
  param_1[0xe] = fVar15 + fVar9;
  param_1[0xf] = fVar18 - fVar7;
  param_1[0x10] = fVar49 + fVar28;
  param_1[0x11] = fVar21 + fVar39;
  param_1[0x12] = fVar49 - fVar28;
  param_1[0x13] = fVar21 - fVar39;
  param_1[0x14] = fVar16 - fVar31;
  param_1[0x15] = fVar13 + fVar26;
  param_1[0x16] = fVar16 + fVar31;
  param_1[0x17] = fVar13 - fVar26;
  param_1[0x18] = fVar32 + fVar10;
  param_1[0x19] = fVar17 + fVar11;
  param_1[0x1a] = fVar32 - fVar10;
  param_1[0x1b] = fVar17 - fVar11;
  param_1[0x1c] = fVar22 - fVar5;
  param_1[0x1d] = fVar36 + fVar3;
  param_1[0x1e] = fVar22 + fVar5;
  param_1[0x1f] = fVar36 - fVar3;
  return;
}


// 0x05ff938 (0x23c bytes)
void FUN_005ff938(float *param_1,int param_2)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = param_1[0xf];
  fVar3 = param_1[10];
  fVar4 = param_1[0xe];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar14 = fVar5 - fVar3;
  fVar7 = param_1[0xb];
  fVar5 = fVar5 + fVar3;
  fVar3 = param_1[6];
  fVar16 = fVar6 - fVar7;
  fVar8 = param_1[7];
  fVar15 = fVar3 - fVar4;
  fVar13 = fVar8 - fVar2;
  fVar9 = param_1[9];
  fVar8 = fVar8 + fVar2;
  fVar2 = param_1[0xd];
  fVar6 = fVar6 + fVar7;
  fVar7 = param_1[8];
  fVar3 = fVar3 + fVar4;
  fVar4 = param_1[0xc];
  fVar19 = *param_1 - fVar7;
  fVar10 = param_1[1];
  fVar7 = *param_1 + fVar7;
  fVar11 = param_1[4];
  fVar12 = param_1[5];
  fVar21 = fVar11 - fVar4;
  fVar18 = fVar16 - fVar15;
  fVar17 = fVar14 + fVar13;
  fVar16 = fVar16 + fVar15;
  fVar14 = fVar14 - fVar13;
  fVar20 = fVar12 - fVar2;
  fVar13 = fVar10 - fVar9;
  fVar11 = fVar11 + fVar4;
  fVar12 = fVar12 + fVar2;
  fVar10 = fVar10 + fVar9;
  fVar9 = fVar5 - fVar3;
  fVar5 = fVar5 + fVar3;
  fVar24 = fVar13 - fVar21;
  fVar23 = fVar7 - fVar11;
  fVar22 = fVar19 + fVar20;
  fVar25 = fVar10 - fVar12;
  fVar15 = fVar6 - fVar8;
  fVar7 = fVar7 + fVar11;
  fVar2 = fVar1 * (fVar17 + fVar18);
  fVar10 = fVar10 + fVar12;
  fVar3 = fVar1 * (fVar14 + fVar16);
  fVar4 = fVar1 * (fVar14 - fVar16);
  fVar19 = fVar19 - fVar20;
  fVar1 = fVar1 * (fVar17 - fVar18);
  fVar13 = fVar13 + fVar21;
  fVar6 = fVar6 + fVar8;
  param_1[8] = fVar19 + fVar4;
  param_1[9] = fVar13 + fVar3;
  param_1[10] = fVar19 - fVar4;
  param_1[0xb] = fVar13 - fVar3;
  param_1[0xc] = fVar22 - fVar2;
  param_1[0xd] = fVar24 + fVar1;
  param_1[0xe] = fVar22 + fVar2;
  param_1[0xf] = fVar24 - fVar1;
  *param_1 = fVar7 + fVar5;
  param_1[1] = fVar10 + fVar6;
  param_1[2] = fVar7 - fVar5;
  param_1[3] = fVar10 - fVar6;
  param_1[4] = fVar23 - fVar15;
  param_1[5] = fVar25 + fVar9;
  param_1[6] = fVar23 + fVar15;
  param_1[7] = fVar25 - fVar9;
  return;
}


// 0x05ffb74 (0x29c bytes)
void FUN_005ffb74(float *param_1,int param_2)

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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xf];
  fVar4 = param_1[0xd];
  fVar5 = param_1[0xc];
  fVar6 = param_1[0xb];
  fVar7 = param_1[10];
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar16 = fVar8 + fVar4;
  fVar10 = param_1[2];
  fVar17 = fVar9 - fVar5;
  fVar11 = param_1[3];
  fVar18 = fVar10 + fVar6;
  fVar12 = param_1[6];
  fVar19 = fVar11 - fVar7;
  fVar13 = param_1[7];
  fVar15 = fVar12 + fVar3;
  fVar14 = fVar13 - fVar2;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar9 = fVar9 + fVar5;
  fVar12 = fVar12 - fVar3;
  fVar5 = param_1[9];
  fVar8 = fVar8 - fVar4;
  fVar10 = fVar10 - fVar6;
  fVar11 = fVar11 + fVar7;
  fVar3 = *(float *)(param_2 + 0x10);
  fVar13 = fVar13 + fVar2;
  fVar4 = param_1[1];
  fVar6 = param_1[8];
  fVar2 = *(float *)(param_2 + 4);
  fVar21 = fVar3 * fVar14 + fVar1 * fVar15;
  fVar24 = *param_1 + fVar5;
  fVar25 = fVar4 - fVar6;
  fVar23 = fVar1 * fVar13 + fVar3 * fVar12;
  fVar26 = fVar2 * (fVar16 + fVar17);
  fVar20 = fVar3 * fVar11 + fVar1 * fVar10;
  fVar22 = fVar1 * fVar19 + fVar3 * fVar18;
  fVar11 = fVar3 * fVar10 - fVar1 * fVar11;
  fVar27 = fVar2 * (fVar8 + fVar9);
  fVar10 = fVar3 * fVar15 - fVar1 * fVar14;
  fVar8 = fVar2 * (fVar8 - fVar9);
  fVar7 = fVar1 * fVar18 - fVar3 * fVar19;
  fVar2 = fVar2 * (fVar16 - fVar17);
  fVar1 = fVar1 * fVar12 - fVar3 * fVar13;
  fVar5 = *param_1 - fVar5;
  fVar4 = fVar4 + fVar6;
  fVar12 = fVar20 - fVar23;
  fVar3 = fVar22 + fVar21;
  fVar6 = fVar24 + fVar26;
  fVar20 = fVar20 + fVar23;
  fVar24 = fVar24 - fVar26;
  fVar22 = fVar22 - fVar21;
  fVar15 = fVar7 + fVar10;
  fVar13 = fVar11 - fVar1;
  fVar9 = fVar25 - fVar2;
  fVar16 = fVar5 - fVar8;
  fVar14 = fVar4 - fVar27;
  fVar5 = fVar5 + fVar8;
  fVar4 = fVar4 + fVar27;
  fVar11 = fVar11 + fVar1;
  fVar25 = fVar25 + fVar2;
  fVar7 = fVar7 - fVar10;
  *param_1 = fVar5 + fVar11;
  param_1[1] = fVar4 + fVar20;
  param_1[2] = fVar5 - fVar11;
  param_1[3] = fVar4 - fVar20;
  param_1[4] = fVar16 - fVar12;
  param_1[5] = fVar14 + fVar13;
  param_1[6] = fVar16 + fVar12;
  param_1[7] = fVar14 - fVar13;
  param_1[8] = fVar24 + fVar7;
  param_1[9] = fVar25 + fVar22;
  param_1[10] = fVar24 - fVar7;
  param_1[0xb] = fVar25 - fVar22;
  param_1[0xc] = fVar6 - fVar3;
  param_1[0xd] = fVar9 + fVar15;
  param_1[0xe] = fVar6 + fVar3;
  param_1[0xf] = fVar9 - fVar15;
  return;
}


// 0x05ffe10 (0xf0 bytes)
void FUN_005ffe10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0x80) {
    iVar1 = param_3 * 4 + param_4 + -0x40;
    FUN_005ff938(param_2,iVar1);
    FUN_005ffb74(param_2 + 0x40,iVar1);
    FUN_005ff938(param_2 + 0x80,iVar1);
    FUN_005ffb74(param_2 + 0xc0,iVar1);
    return;
  }
  param_4 = param_4 + param_3 * 4;
  iVar1 = param_4 + -0x20;
  param_4 = param_4 + -0x80;
  FUN_005fe460(param_2,iVar1);
  FUN_005fedf0(param_2 + 0x80,param_4);
  FUN_005fe460(param_2 + 0x100,iVar1);
  FUN_005fedf0(param_2 + 0x180,param_4);
  return;
}


// 0x05fff00 (0xec bytes)
void FUN_005fff00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != 0x80) {
    iVar1 = param_3 * 4 + param_4 + -0x40;
    FUN_005ff938(param_2,iVar1);
    FUN_005ffb74(param_2 + 0x40,iVar1);
    FUN_005ff938(param_2 + 0x80,iVar1);
    FUN_005ff938(param_2 + 0xc0,iVar1);
    return;
  }
  param_4 = param_4 + param_3 * 4;
  iVar1 = param_4 + -0x20;
  FUN_005fe460(param_2,iVar1);
  FUN_005fedf0(param_2 + 0x80,param_4 + -0x80);
  FUN_005fe460(param_2 + 0x100,iVar1);
  FUN_005fe460(param_2 + 0x180,iVar1);
  return;
}


// 0x05ffff0 (0x330 bytes)
void FUN_005ffff0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar2;
  
  iVar1 = param_1 >> 2;
  while( true ) {
    iVar2 = iVar1 >> 1;
    if (iVar1 < 0x81) break;
    if (iVar1 < param_1) {
      iVar4 = param_4 + (param_3 - iVar2) * 4;
      iVar3 = iVar1;
      do {
        iVar8 = iVar3 - iVar1;
        iVar5 = iVar3 * 4;
        if (iVar8 < param_1) {
          iVar7 = param_2 + (iVar3 + iVar8) * 4;
          iVar9 = param_2 + iVar8 * 4;
          iVar10 = param_2 + (iVar8 + iVar3 * 2) * 4;
          iVar8 = iVar5 + iVar8;
          iVar6 = iVar3 * 0x10;
          do {
            iVar8 = iVar8 + iVar5;
            FUN_005fd9f8(iVar1,iVar9,iVar4);
            iVar9 = iVar9 + iVar6;
            FUN_005fde88(iVar1,iVar7,param_4 + (param_3 - iVar1) * 4);
            iVar7 = iVar7 + iVar6;
            FUN_005fd9f8(iVar1,iVar10,iVar4);
            iVar10 = iVar10 + iVar6;
          } while (iVar8 + iVar3 * -4 < param_1);
        }
        iVar3 = iVar5;
      } while (iVar5 < param_1);
    }
    FUN_005fd9f8(iVar1,param_2 + (param_1 - iVar1) * 4,param_4 + (param_3 - iVar2) * 4);
    iVar1 = iVar1 >> 2;
  }
  if (iVar1 < param_1) {
    iVar4 = param_4 + (param_3 - iVar2) * 4;
    iVar3 = iVar1;
    do {
      iVar8 = iVar3 - iVar1;
      iVar5 = iVar3 * 4;
      if (iVar8 < param_1) {
        iVar7 = param_2 + (iVar8 + iVar3) * 4;
        iVar6 = param_2 + iVar8 * 4;
        iVar9 = iVar8 + iVar5;
        iVar10 = iVar3 * 0x10;
        iVar8 = param_2 + (iVar8 + iVar3 * 2) * 4;
        do {
          FUN_005fd9f8(iVar1,iVar6,iVar4);
          FUN_005fff00(iVar1,iVar6,param_3,param_4);
          iVar9 = iVar9 + iVar5;
          FUN_005fde88(iVar1,iVar7,param_4 + (param_3 - iVar1) * 4);
          iVar6 = iVar6 + iVar10;
          FUN_005ffe10(iVar1,iVar7,param_3,param_4);
          iVar7 = iVar7 + iVar10;
          FUN_005fd9f8(iVar1,iVar8,iVar4);
          FUN_005fff00(iVar1,iVar8,param_3,param_4);
          iVar8 = iVar8 + iVar10;
        } while (iVar9 + iVar3 * -4 < param_1);
      }
      iVar3 = iVar5;
    } while (iVar5 < param_1);
  }
  param_2 = (param_1 - iVar1) * 4 + param_2;
  FUN_005fd9f8(iVar1,param_2,(param_3 - iVar2) * 4 + param_4);
  FUN_005fff00(iVar1,param_2,param_3,param_4);
  return;
}


// 0x0600320 (0x134 bytes)
void FUN_00600320(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  while( true ) {
    uVar1 = (int)param_1 >> 2;
    FUN_005fd9f8(param_1,param_2,(param_3 + (uVar1 & 0x7fffffff) * -2) * 4 + param_4);
    if ((int)param_1 < 0x201) break;
    FUN_00600320(uVar1,param_2,param_3,param_4);
    FUN_00600458(uVar1,param_2 + (uVar1 & 0x3fffffff) * 4,param_3,param_4);
    FUN_00600320(uVar1,param_2 + uVar1 * 8,param_3,param_4);
    param_2 = param_2 + uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4;
    param_1 = uVar1;
  }
  FUN_005ffff0(param_1,param_2,param_3,param_4);
  return;
}


// 0x0600458 (0x404 bytes)
void FUN_00600458(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  while( true ) {
    uVar1 = (int)param_1 >> 2;
    FUN_005fde88(param_1,param_2,(param_3 - param_1) * 4 + param_4);
    if ((int)param_1 < 0x201) break;
    FUN_00600320(uVar1,param_2,param_3,param_4);
    FUN_00600458(uVar1,param_2 + (uVar1 & 0x3fffffff) * 4,param_3,param_4);
    FUN_00600320(uVar1,param_2 + uVar1 * 8,param_3,param_4);
    param_2 = param_2 + uVar1 * 0x10 + (uVar1 & 0x3fffffff) * -4;
    param_1 = uVar1;
  }
  iVar2 = (int)param_1 >> 1;
  for (; 0x80 < (int)uVar1; uVar1 = (int)uVar1 >> 2) {
    iVar3 = (param_3 - ((int)uVar1 >> 1)) * 4 + param_4;
    iVar8 = (param_3 - uVar1) * 4 + param_4;
    uVar7 = uVar1;
    while (uVar6 = uVar7, (int)uVar6 < iVar2) {
      iVar4 = uVar6 - uVar1;
      iVar5 = uVar6 * 2;
      if (iVar4 < iVar2) {
        iVar9 = param_2 + iVar4 * 4;
        iVar10 = param_2 + (iVar2 + iVar4) * 4;
        iVar4 = iVar5 + iVar4;
        do {
          iVar4 = iVar4 + iVar5;
          FUN_005fd9f8(uVar1,iVar9,iVar3);
          iVar9 = iVar9 + uVar6 * 8;
          FUN_005fd9f8(uVar1,iVar10,iVar3);
          iVar10 = iVar10 + uVar6 * 8;
        } while ((int)(iVar4 + uVar6 * -2) < iVar2);
      }
      iVar5 = iVar5 - uVar1;
      uVar7 = uVar6 * 4;
      if (iVar5 < iVar2) {
        iVar9 = param_2 + iVar5 * 4;
        iVar4 = param_2 + (iVar2 + iVar5) * 4;
        iVar5 = uVar7 + iVar5;
        do {
          iVar5 = iVar5 + uVar7;
          FUN_005fde88(uVar1,iVar9,iVar8);
          iVar9 = iVar9 + uVar6 * 0x10;
          FUN_005fde88(uVar1,iVar4,iVar8);
          iVar4 = iVar4 + uVar6 * 0x10;
        } while ((int)(iVar5 + uVar6 * -4) < iVar2);
      }
    }
  }
  if ((int)uVar1 < iVar2) {
    iVar8 = (param_3 - uVar1) * 4 + param_4;
    iVar3 = param_4 + (param_3 - ((int)uVar1 >> 1)) * 4;
    uVar7 = uVar1;
    do {
      iVar4 = uVar7 - uVar1;
      iVar5 = uVar7 * 2;
      if (iVar4 < iVar2) {
        iVar9 = param_2 + iVar4 * 4;
        iVar10 = iVar4 + iVar5;
        iVar4 = param_2 + (iVar2 + iVar4) * 4;
        do {
          FUN_005fd9f8(uVar1,iVar9,iVar3);
          iVar10 = iVar10 + iVar5;
          FUN_005fff00(uVar1,iVar9,param_3,param_4);
          iVar9 = iVar9 + uVar7 * 8;
          FUN_005fd9f8(uVar1,iVar4,iVar3);
          FUN_005fff00(uVar1,iVar4,param_3,param_4);
          iVar4 = iVar4 + uVar7 * 8;
        } while ((int)(iVar10 + uVar7 * -2) < iVar2);
      }
      iVar5 = iVar5 - uVar1;
      uVar6 = uVar7 * 4;
      if (iVar5 < iVar2) {
        iVar9 = param_2 + iVar5 * 4;
        iVar10 = iVar5 + uVar6;
        iVar4 = param_2 + (iVar2 + iVar5) * 4;
        do {
          FUN_005fde88(uVar1,iVar9,iVar8);
          iVar10 = iVar10 + uVar6;
          FUN_005ffe10(uVar1,iVar9,param_3,param_4);
          iVar9 = iVar9 + uVar7 * 0x10;
          FUN_005fde88(uVar1,iVar4,iVar8);
          FUN_005ffe10(uVar1,iVar4,param_3,param_4);
          iVar4 = iVar4 + uVar7 * 0x10;
        } while ((int)(iVar10 + uVar7 * -4) < iVar2);
      }
      uVar7 = uVar6;
    } while ((int)uVar6 < iVar2);
  }
  return;
}


// 0x0600860 (0x1174 bytes)
void FUN_00600860(int param_1,ulonglong param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
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
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfVar34;
  int *piVar35;
  float *pfVar36;
  float *pfVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float *pfVar42;
  undefined4 *puVar43;
  int iVar44;
  float *pfVar45;
  undefined4 *puVar46;
  longlong lVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  int iVar51;
  ulonglong uVar50;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  int iVar59;
  ulonglong uVar60;
  int iVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  uint local_270 [64];
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  uint local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  uint local_13c;
  int local_138;
  uint local_134;
  int local_130;
  
  pfVar45 = (float *)param_2;
  local_138 = param_1;
  local_134 = param_3;
  local_130 = param_4;
  if (param_1 < 0x21) {
    if (param_1 < 9) {
      if (param_1 == 8) {
        fVar3 = pfVar45[7];
        fVar4 = pfVar45[4];
        fVar5 = pfVar45[5];
        fVar9 = *pfVar45 - fVar4;
        fVar6 = pfVar45[1];
        fVar4 = *pfVar45 + fVar4;
        fVar7 = pfVar45[2];
        fVar11 = fVar6 - fVar5;
        fVar8 = pfVar45[6];
        fVar6 = fVar6 + fVar5;
        fVar5 = pfVar45[3];
        fVar12 = fVar7 - fVar8;
        fVar10 = fVar5 - fVar3;
        fVar7 = fVar7 + fVar8;
        fVar5 = fVar5 + fVar3;
        *pfVar45 = fVar4 + fVar7;
        pfVar45[1] = fVar6 + fVar5;
        pfVar45[4] = fVar4 - fVar7;
        pfVar45[5] = fVar6 - fVar5;
        pfVar45[2] = fVar9 - fVar10;
        pfVar45[3] = fVar11 + fVar12;
        pfVar45[6] = fVar9 + fVar10;
        pfVar45[7] = fVar11 - fVar12;
      }
      else if (param_1 == 4) {
        fVar3 = *pfVar45;
        fVar4 = pfVar45[2];
        pfVar34 = pfVar45 + 3;
        pfVar36 = pfVar45 + 1;
        fVar5 = *pfVar36;
        *pfVar45 = fVar3 + fVar4;
        *pfVar36 = *pfVar36 + *pfVar34;
        pfVar45[2] = fVar3 - fVar4;
        *pfVar34 = fVar5 - *pfVar34;
      }
    }
    else if (param_1 == 0x20) {
      FUN_005fe460(param_2 & 0xffffffff,param_4 + param_3 * 4 + -0x20);
      fVar3 = pfVar45[0xe];
      fVar4 = pfVar45[0xf];
      fVar5 = pfVar45[0x16];
      fVar6 = pfVar45[0x17];
      fVar7 = pfVar45[2];
      fVar8 = pfVar45[3];
      fVar9 = pfVar45[6];
      fVar10 = pfVar45[7];
      fVar11 = pfVar45[10];
      fVar12 = pfVar45[0xb];
      fVar13 = pfVar45[4];
      fVar14 = pfVar45[5];
      pfVar45[2] = pfVar45[0x10];
      pfVar45[3] = pfVar45[0x11];
      pfVar45[4] = pfVar45[8];
      pfVar45[5] = pfVar45[9];
      pfVar45[6] = pfVar45[0x18];
      pfVar45[7] = pfVar45[0x19];
      pfVar45[8] = fVar13;
      pfVar45[9] = fVar14;
      pfVar45[10] = pfVar45[0x14];
      pfVar45[0xb] = pfVar45[0x15];
      pfVar45[0xe] = pfVar45[0x1c];
      pfVar45[0xf] = pfVar45[0x1d];
      pfVar45[0x10] = fVar7;
      pfVar45[0x11] = fVar8;
      pfVar45[0x14] = fVar11;
      pfVar45[0x15] = fVar12;
      pfVar45[0x16] = pfVar45[0x1a];
      pfVar45[0x17] = pfVar45[0x1b];
      pfVar45[0x18] = fVar9;
      pfVar45[0x19] = fVar10;
      pfVar45[0x1a] = fVar5;
      pfVar45[0x1b] = fVar6;
      pfVar45[0x1c] = fVar3;
      pfVar45[0x1d] = fVar4;
    }
    else {
      FUN_005ff938(param_2 & 0xffffffff,param_4);
      fVar3 = pfVar45[2];
      fVar4 = pfVar45[3];
      fVar5 = pfVar45[6];
      fVar6 = pfVar45[7];
      pfVar45[2] = pfVar45[8];
      pfVar45[3] = pfVar45[9];
      pfVar45[6] = pfVar45[0xc];
      pfVar45[7] = pfVar45[0xd];
      pfVar45[8] = fVar3;
      pfVar45[9] = fVar4;
      pfVar45[0xc] = fVar5;
      pfVar45[0xd] = fVar6;
    }
  }
  else {
    local_160 = param_1 >> 3;
    lVar52 = ((ulonglong)local_160 & 0x7fffffff) * 2;
    uVar60 = lVar52 + ((ulonglong)local_160 & 0x3fffffff) * 4;
    lVar64 = param_2 + ((ulonglong)local_160 & 0xfffffff) * 0x10;
    lVar63 = param_2 + ((ulonglong)local_160 & 0x1fffffff) * 8;
    lVar62 = param_2 + (uVar60 & 0x3fffffff) * 4;
    local_15c = (int)lVar52;
    pfVar36 = (float *)lVar63;
    pfVar34 = (float *)lVar64;
    pfVar37 = (float *)lVar62;
    fVar3 = pfVar34[1];
    fVar4 = pfVar36[1];
    local_168 = local_160 - 2;
    fVar5 = pfVar37[1];
    uVar21 = param_1 >> 2;
    fVar8 = fVar4 - fVar5;
    fVar6 = *pfVar45 - *pfVar34;
    fVar4 = fVar4 + fVar5;
    fVar5 = pfVar45[1];
    fVar9 = *pfVar36 - *pfVar37;
    fVar7 = fVar5 - fVar3;
    fVar5 = fVar5 + fVar3;
    fVar10 = *pfVar36 + *pfVar37;
    fVar3 = *pfVar45 + *pfVar34;
    local_14c = 1.0;
    local_16c = param_4 + (int)(((ulonglong)param_3 - (longlong)(int)uVar21 & 0xffffffff) << 2);
    local_144 = 1.0;
    local_148 = 0.0;
    local_140 = 0.0;
    *pfVar45 = fVar3 + fVar10;
    pfVar45[1] = fVar5 + fVar4;
    *pfVar36 = fVar3 - fVar10;
    pfVar36[1] = fVar5 - fVar4;
    *pfVar34 = fVar6 - fVar8;
    pfVar34[1] = fVar7 + fVar9;
    *pfVar37 = fVar6 + fVar8;
    pfVar37[1] = fVar7 - fVar9;
    local_150 = *(float *)(local_16c + 0xc);
    local_158 = *(float *)(local_16c + 4);
    local_154 = *(float *)(local_16c + 8);
    if (2 < local_168) {
      lVar58 = param_2 + (lVar52 + uVar60 & 0x3fffffff) * 4;
      lVar65 = param_2 + 8;
      lVar55 = param_2 + 0xc;
      lVar56 = param_2 + 0x10;
      lVar57 = param_2 + 0x14;
      local_164 = 2;
      local_170 = 0;
      lVar52 = lVar62;
      lVar47 = lVar64;
      lVar53 = lVar63;
      fVar3 = DAT_0071a5d4;
      local_140 = DAT_0071a5d4;
      fVar4 = DAT_0071a5d0;
      fVar5 = DAT_0071a5d0;
      do {
        iVar44 = (int)lVar62;
        iVar61 = (int)lVar64;
        fVar6 = *(float *)lVar65;
        iVar51 = local_16c + local_170;
        fVar7 = *(float *)lVar55;
        iVar59 = (int)lVar53;
        iVar40 = (int)lVar63;
        iVar38 = (int)lVar52;
        iVar41 = (int)lVar47;
        local_148 = *(float *)(iVar51 + 0x14);
        iVar39 = (int)lVar58;
        fVar22 = local_140 - *(float *)(iVar51 + 0x1c);
        local_140 = -*(float *)(iVar51 + 0x1c);
        fVar12 = *(float *)(iVar59 + 0x10) - *(float *)(iVar44 + 0x10);
        fVar13 = *(float *)(iVar59 + 0x14) - *(float *)(iVar44 + 0x14);
        fVar10 = fVar6 - *(float *)(iVar61 + 8);
        fVar11 = fVar7 - *(float *)(iVar61 + 0xc);
        fVar6 = fVar6 + *(float *)(iVar61 + 8);
        fVar8 = *(float *)lVar56;
        fVar7 = fVar7 + *(float *)(iVar61 + 0xc);
        fVar9 = *(float *)lVar57;
        fVar17 = fVar8 - *(float *)(iVar61 + 0x10);
        fVar15 = fVar9 - *(float *)(iVar61 + 0x14);
        fVar8 = fVar8 + *(float *)(iVar61 + 0x10);
        fVar9 = fVar9 + *(float *)(iVar61 + 0x14);
        fVar26 = *(float *)(iVar59 + 8) - *(float *)(iVar44 + 8);
        fVar28 = *(float *)(iVar59 + 0xc) - *(float *)(iVar44 + 0xc);
        local_14c = *(float *)(iVar51 + 0x10);
        local_144 = *(float *)(iVar51 + 0x18);
        fVar27 = *(float *)(iVar59 + 8) + *(float *)(iVar44 + 8);
        fVar29 = *(float *)(iVar59 + 0xc) + *(float *)(iVar44 + 0xc);
        fVar23 = local_154 * (fVar3 + local_148);
        fVar14 = fVar15 - fVar12;
        fVar22 = local_150 * fVar22;
        fVar16 = fVar17 + fVar13;
        fVar25 = fVar11 - fVar26;
        fVar24 = fVar10 + fVar28;
        fVar10 = fVar10 - fVar28;
        fVar11 = fVar11 + fVar26;
        fVar17 = fVar17 - fVar13;
        fVar15 = fVar15 + fVar12;
        fVar3 = *(float *)(iVar59 + 0x10) + *(float *)(iVar44 + 0x10);
        fVar26 = local_154 * (fVar4 + local_14c);
        fVar4 = *(float *)(iVar59 + 0x14) + *(float *)(iVar44 + 0x14);
        lVar63 = lVar63 + -0x10;
        lVar52 = lVar52 + -0x10;
        fVar28 = local_150 * (fVar5 + local_144);
        lVar58 = lVar58 + -0x10;
        pfVar34 = (float *)(lVar47 + -0x10);
        lVar62 = lVar62 + 0x10;
        *(float *)lVar65 = fVar6 + fVar27;
        lVar65 = lVar65 + 0x10;
        *(float *)lVar55 = fVar7 + fVar29;
        lVar55 = lVar55 + 0x10;
        *(float *)lVar56 = fVar8 + fVar3;
        lVar56 = lVar56 + 0x10;
        *(float *)lVar57 = fVar9 + fVar4;
        lVar57 = lVar57 + 0x10;
        *(float *)(iVar59 + 0x14) = fVar9 - fVar4;
        *(float *)(iVar59 + 8) = fVar6 - fVar27;
        *(float *)(iVar59 + 0x10) = fVar8 - fVar3;
        *(float *)(iVar59 + 0xc) = fVar7 - fVar29;
        *(float *)(iVar61 + 0x14) = local_14c * fVar15 + local_148 * fVar17;
        *(float *)(iVar61 + 8) = fVar26 * fVar10 - fVar23 * fVar11;
        *(float *)(iVar61 + 0xc) = fVar26 * fVar11 + fVar23 * fVar10;
        *(float *)(iVar61 + 0x10) = local_14c * fVar17 - local_148 * fVar15;
        *(float *)(iVar44 + 8) = fVar28 * fVar24 + fVar22 * fVar25;
        *(float *)(iVar44 + 0xc) = fVar28 * fVar25 - fVar22 * fVar24;
        *(float *)(iVar44 + 0x14) = local_144 * fVar14 - local_140 * fVar16;
        *(float *)(iVar44 + 0x10) = local_144 * fVar16 + local_140 * fVar14;
        fVar3 = *(float *)(iVar38 + -8);
        fVar4 = *(float *)(iVar38 + -4);
        fVar5 = *(float *)lVar63;
        fVar6 = *(float *)lVar52;
        fVar7 = *(float *)(iVar38 + -0xc);
        fVar27 = fVar5 - fVar6;
        fVar8 = *(float *)(iVar39 + -8);
        fVar5 = fVar5 + fVar6;
        fVar6 = *(float *)(iVar39 + -4);
        fVar9 = *(float *)lVar58;
        fVar10 = *(float *)(iVar39 + -0xc);
        fVar11 = *(float *)(iVar40 + -8);
        fVar12 = *(float *)(iVar40 + -4);
        fVar24 = fVar11 - fVar3;
        fVar13 = *(float *)(iVar40 + -0xc);
        fVar25 = fVar12 - fVar4;
        fVar14 = *(float *)(iVar41 + -8);
        fVar29 = fVar13 - fVar7;
        fVar15 = *(float *)(iVar41 + -4);
        fVar30 = fVar14 - fVar8;
        fVar16 = *pfVar34;
        fVar31 = fVar15 - fVar6;
        fVar17 = *(float *)(iVar41 + -0xc);
        fVar32 = fVar16 - fVar9;
        fVar33 = fVar17 - fVar10;
        fVar12 = fVar12 + fVar4;
        fVar13 = fVar13 + fVar7;
        fVar14 = fVar14 + fVar8;
        local_164 = local_164 + 4;
        fVar15 = fVar15 + fVar6;
        fVar11 = fVar11 + fVar3;
        fVar16 = fVar16 + fVar9;
        fVar6 = fVar25 - fVar30;
        fVar4 = fVar24 + fVar31;
        fVar7 = fVar29 - fVar32;
        fVar3 = fVar27 + fVar33;
        fVar24 = fVar24 - fVar31;
        fVar25 = fVar25 + fVar30;
        fVar27 = fVar27 - fVar33;
        fVar29 = fVar29 + fVar32;
        fVar17 = fVar17 + fVar10;
        local_170 = local_170 + 0x10;
        lVar64 = lVar64 + 0x10;
        lVar53 = lVar53 + 0x10;
        *(float *)(iVar40 + -8) = fVar11 + fVar14;
        *(float *)(iVar40 + -4) = fVar12 + fVar15;
        *(float *)lVar63 = fVar5 + fVar16;
        *(float *)(iVar40 + -0xc) = fVar13 + fVar17;
        *(float *)(iVar41 + -8) = fVar11 - fVar14;
        *(float *)(iVar41 + -4) = fVar12 - fVar15;
        *pfVar34 = fVar5 - fVar16;
        *(float *)(iVar41 + -0xc) = fVar13 - fVar17;
        *(float *)(iVar38 + -8) = fVar23 * fVar24 - fVar26 * fVar25;
        *(float *)(iVar38 + -4) = fVar23 * fVar25 + fVar26 * fVar24;
        *(float *)lVar52 = local_148 * fVar27 - local_14c * fVar29;
        *(float *)(iVar38 + -0xc) = local_148 * fVar29 + local_14c * fVar27;
        *(float *)(iVar39 + -8) = fVar22 * fVar4 + fVar28 * fVar6;
        *(float *)(iVar39 + -4) = fVar22 * fVar6 - fVar28 * fVar4;
        *(float *)lVar58 = local_140 * fVar3 + local_144 * fVar7;
        *(float *)(iVar39 + -0xc) = local_140 * fVar7 - local_144 * fVar3;
        lVar47 = lVar47 + -0x10;
        fVar3 = local_148;
        fVar4 = local_14c;
        fVar5 = local_144;
      } while (local_164 < local_168);
    }
    iVar59 = local_15c + local_160 + local_15c;
    pfVar34 = pfVar45 + local_160;
    pfVar36 = pfVar45 + iVar59;
    pfVar37 = pfVar45 + local_160 + local_15c;
    pfVar42 = pfVar45 + local_15c + iVar59;
    fVar11 = local_154 * (local_148 + local_158);
    fVar13 = local_150 * (local_140 - local_158);
    fVar12 = local_154 * (local_14c + local_158);
    fVar14 = local_150 * (local_144 - local_158);
    fVar3 = pfVar34[-2];
    fVar4 = pfVar36[-2];
    fVar5 = pfVar37[-2];
    fVar6 = pfVar37[-1];
    fVar10 = fVar3 - fVar4;
    fVar7 = pfVar34[-1];
    fVar3 = fVar3 + fVar4;
    fVar4 = pfVar36[-1];
    fVar8 = pfVar42[-2];
    fVar17 = fVar7 - fVar4;
    fVar9 = pfVar42[-1];
    fVar15 = fVar5 - fVar8;
    fVar16 = fVar6 - fVar9;
    fVar5 = fVar5 + fVar8;
    fVar6 = fVar6 + fVar9;
    fVar7 = fVar7 + fVar4;
    fVar8 = fVar17 - fVar15;
    fVar4 = fVar10 + fVar16;
    fVar10 = fVar10 - fVar16;
    fVar17 = fVar17 + fVar15;
    pfVar34[-2] = fVar3 + fVar5;
    pfVar34[-1] = fVar7 + fVar6;
    pfVar37[-2] = fVar3 - fVar5;
    pfVar37[-1] = fVar7 - fVar6;
    pfVar36[-2] = fVar12 * fVar10 - fVar11 * fVar17;
    pfVar36[-1] = fVar12 * fVar17 + fVar11 * fVar10;
    pfVar42[-2] = fVar14 * fVar4 + fVar13 * fVar8;
    pfVar42[-1] = fVar14 * fVar8 - fVar13 * fVar4;
    fVar3 = pfVar36[1];
    fVar4 = pfVar42[1];
    fVar5 = pfVar34[1];
    fVar7 = *pfVar34 - *pfVar36;
    fVar8 = fVar5 - fVar3;
    fVar6 = pfVar37[1];
    fVar9 = *pfVar37 - *pfVar42;
    fVar15 = fVar6 - fVar4;
    fVar10 = *pfVar37 + *pfVar42;
    fVar6 = fVar6 + fVar4;
    fVar5 = fVar5 + fVar3;
    fVar3 = *pfVar34 + *pfVar36;
    fVar16 = fVar8 - fVar9;
    fVar4 = fVar7 + fVar15;
    fVar8 = fVar8 + fVar9;
    fVar7 = fVar7 - fVar15;
    *pfVar34 = fVar3 + fVar10;
    pfVar34[1] = fVar5 + fVar6;
    *pfVar37 = fVar3 - fVar10;
    pfVar37[1] = fVar5 - fVar6;
    *pfVar36 = local_158 * (fVar7 - fVar8);
    pfVar36[1] = local_158 * (fVar7 + fVar8);
    *pfVar42 = -local_158 * (fVar4 + fVar16);
    pfVar42[1] = local_158 * (fVar4 - fVar16);
    fVar3 = pfVar36[3];
    fVar4 = pfVar42[2];
    fVar5 = pfVar42[3];
    fVar6 = pfVar34[2];
    fVar7 = pfVar36[2];
    fVar8 = pfVar34[3];
    fVar22 = fVar6 - fVar7;
    fVar9 = pfVar37[2];
    fVar15 = fVar8 - fVar3;
    fVar10 = pfVar37[3];
    fVar16 = fVar9 - fVar4;
    fVar17 = fVar10 - fVar5;
    fVar9 = fVar9 + fVar4;
    fVar10 = fVar10 + fVar5;
    fVar8 = fVar8 + fVar3;
    fVar6 = fVar6 + fVar7;
    fVar4 = fVar15 - fVar16;
    fVar3 = fVar22 + fVar17;
    fVar15 = fVar15 + fVar16;
    fVar22 = fVar22 - fVar17;
    pfVar34[2] = fVar6 + fVar9;
    pfVar34[3] = fVar8 + fVar10;
    pfVar37[2] = fVar6 - fVar9;
    pfVar37[3] = fVar8 - fVar10;
    pfVar36[2] = fVar11 * fVar22 - fVar12 * fVar15;
    pfVar36[3] = fVar11 * fVar15 + fVar12 * fVar22;
    pfVar42[2] = fVar13 * fVar3 + fVar14 * fVar4;
    pfVar42[3] = fVar13 * fVar4 - fVar14 * fVar3;
    local_13c = uVar21;
    if (param_1 < 0x201) {
      if ((int)uVar21 < 0x21) {
        FUN_005fff00(param_1,param_2 & 0xffffffff,param_3,param_4);
      }
      else {
        FUN_005ffff0(param_1,param_2 & 0xffffffff,param_3,param_4);
      }
    }
    else {
      FUN_00600320(uVar21,param_2 & 0xffffffff,param_3,param_4);
      FUN_00600458(uVar21,param_2 + ((ulonglong)uVar21 & 0x3fffffff) * 4 & 0xffffffff,param_3,
                   param_4);
      FUN_00600320(uVar21,param_2 + ((ulonglong)local_13c & 0x1fffffff) * 8 & 0xffffffff,param_3,
                   param_4);
      FUN_00600320(uVar21,param_2 + ((ulonglong)local_13c & 0xfffffff) * 0x10 +
                                    ((ulonglong)uVar21 & 0x3fffffff) * -4 & 0xffffffff,param_3,
                   param_4);
    }
    uVar60 = 1;
    lVar52 = ZEXT48(&stack0x00000000) - 0x270;
    local_138 = local_138 >> 1;
    while( true ) {
      lVar62 = (uVar60 & 0x3fffffff) * 4 + lVar52;
      lVar64 = lVar52;
      uVar66 = uVar60;
      if ((int)uVar60 < 1) {
        uVar66 = 1;
      }
      do {
        piVar35 = (int *)lVar62;
        lVar62 = lVar62 + 4;
        *piVar35 = local_138 + *(int *)lVar64;
        uVar66 = uVar66 - 1;
        lVar64 = lVar64 + 4;
      } while (uVar66 != 0);
      uVar66 = uVar60 & 0x7fffffff;
      uVar60 = uVar66 << 1;
      iVar59 = (int)(uVar66 << 4);
      bVar2 = 0 < (int)uVar60;
      bVar1 = local_138 == iVar59;
      if (local_138 <= iVar59) break;
      while (local_138 = local_138 >> 1, !bVar2) {
        uVar66 = uVar60 & 0x7fffffff;
        uVar60 = uVar66 << 1;
        iVar59 = (int)(uVar66 << 4);
        bVar2 = 0 < (int)uVar60;
        bVar1 = local_138 == iVar59;
        if (local_138 <= iVar59) goto LAB_006012a4;
      }
    }
LAB_006012a4:
    lVar64 = (uVar60 & 0x7fffffff) * 2;
    iVar59 = (int)uVar60;
    if (bVar1) {
      lVar62 = (uVar60 & 0x3fffffff) * 4;
      uVar66 = 0;
      if (bVar2) {
        do {
          lVar47 = (uVar66 & 0x7fffffff) << 1;
          lVar63 = (uVar66 & 0x3fffffff) * 4 + lVar52;
          while( true ) {
            uVar66 = uVar66 + 1;
            uVar67 = lVar64 + lVar47 + (ulonglong)*(uint *)lVar63;
            puVar48 = (undefined4 *)((int)pfVar45 + (int)((uVar67 & 0xffffffff) << 2));
            puVar43 = (undefined4 *)((int)pfVar45 + (int)((lVar64 + uVar67 & 0xffffffff) << 2));
            uVar18 = puVar48[1];
            uVar19 = puVar43[1];
            uVar20 = *puVar48;
            *puVar48 = *puVar43;
            puVar48[1] = uVar19;
            *puVar43 = uVar20;
            puVar43[1] = uVar18;
            if (iVar59 <= (int)uVar66) {
              return;
            }
            if ((int)uVar66 < 1) break;
            uVar21 = ((uint *)lVar63)[1];
            lVar47 = lVar47 + 2;
            iVar61 = 0;
            uVar54 = lVar64 + (ulonglong)uVar21;
            uVar50 = lVar64 + uVar54;
            uVar67 = uVar66 & 0xffffffff;
            lVar57 = param_2 + ((ulonglong)uVar21 & 0x3fffffff) * 4;
            lVar53 = param_2 + (uVar54 & 0x3fffffff) * 4;
            lVar55 = param_2 + (uVar50 & 0x3fffffff) * 4;
            lVar56 = param_2 + (lVar64 + uVar50 & 0x3fffffff) * 4;
            do {
              iVar44 = iVar61 * 4;
              puVar46 = (undefined4 *)lVar57;
              uVar18 = *puVar46;
              uVar19 = puVar46[1];
              iVar61 = iVar61 + 1;
              lVar57 = lVar57 + 8;
              uVar50 = lVar47 + (ulonglong)*(uint *)(iVar44 + (int)lVar52);
              uVar54 = lVar62 + uVar50;
              puVar48 = (undefined4 *)((int)pfVar45 + (int)((uVar50 & 0xffffffff) << 2));
              uVar50 = uVar54 + (uVar60 & 0x7fffffff) * -2;
              puVar43 = (undefined4 *)((int)pfVar45 + (int)((uVar54 & 0xffffffff) << 2));
              uVar20 = *puVar48;
              puVar49 = (undefined4 *)((int)pfVar45 + (int)((uVar50 & 0xffffffff) << 2));
              puVar46[1] = puVar48[1];
              *puVar46 = uVar20;
              *puVar48 = uVar18;
              puVar46 = (undefined4 *)((int)pfVar45 + (int)((lVar62 + uVar50 & 0xffffffff) << 2));
              puVar48[1] = uVar19;
              puVar48 = (undefined4 *)lVar53;
              uVar18 = *puVar48;
              uVar19 = *puVar43;
              uVar20 = puVar48[1];
              puVar48[1] = puVar43[1];
              *puVar48 = uVar19;
              *puVar43 = uVar18;
              puVar43[1] = uVar20;
              uVar18 = puVar49[1];
              puVar48 = (undefined4 *)lVar55;
              uVar19 = *puVar48;
              uVar20 = puVar48[1];
              *puVar48 = *puVar49;
              puVar48[1] = uVar18;
              *puVar49 = uVar19;
              puVar49[1] = uVar20;
              uVar18 = puVar46[1];
              puVar48 = (undefined4 *)lVar56;
              uVar19 = *puVar48;
              uVar20 = puVar48[1];
              *puVar48 = *puVar46;
              puVar48[1] = uVar18;
              *puVar46 = uVar19;
              puVar46[1] = uVar20;
              uVar67 = uVar67 - 1;
              lVar53 = lVar53 + 8;
              lVar55 = lVar55 + 8;
              lVar56 = lVar56 + 8;
            } while (uVar67 != 0);
            lVar63 = lVar63 + 4;
          }
        } while( true );
      }
    }
    else {
      uVar66 = 1;
      if (1 < iVar59) {
        do {
          uVar67 = uVar66 & 0xffffffff;
          uVar21 = *(uint *)((int)local_270 + (int)((uVar66 & 0xffffffff) << 2));
          lVar63 = param_2 + ((ulonglong)uVar21 & 0x3fffffff) * 4;
          lVar47 = param_2 + (lVar64 + (ulonglong)uVar21 & 0x3fffffff) * 4;
          lVar62 = lVar52;
          if ((int)uVar66 < 1) {
            uVar67 = 1;
          }
          do {
            puVar49 = (undefined4 *)lVar63;
            uVar18 = *puVar49;
            uVar50 = (uVar66 & 0x7fffffff) * 2 + (ulonglong)*(uint *)lVar62;
            uVar19 = puVar49[1];
            puVar48 = (undefined4 *)((int)pfVar45 + (int)((uVar50 & 0xffffffff) << 2));
            puVar43 = (undefined4 *)((int)pfVar45 + (int)((lVar64 + uVar50 & 0xffffffff) << 2));
            uVar20 = puVar48[1];
            *puVar49 = *puVar48;
            puVar49[1] = uVar20;
            *puVar48 = uVar18;
            puVar48[1] = uVar19;
            uVar18 = puVar43[1];
            puVar48 = (undefined4 *)lVar47;
            uVar19 = *puVar48;
            uVar20 = puVar48[1];
            *puVar48 = *puVar43;
            puVar48[1] = uVar18;
            *puVar43 = uVar19;
            puVar43[1] = uVar20;
            uVar67 = uVar67 - 1;
            lVar62 = lVar62 + 4;
            lVar63 = lVar63 + 8;
            lVar47 = lVar47 + 8;
          } while (uVar67 != 0);
          uVar67 = uVar60 - uVar66 & 0xffffffff;
          if ((iVar59 < (int)uVar66 + 1) || (iVar59 == -0x80000000)) {
            uVar67 = 1;
          }
          do {
            uVar66 = uVar66 + 1;
            uVar67 = uVar67 - 1;
            if (uVar67 == 0) {
              return;
            }
          } while ((int)uVar66 < 1);
        } while( true );
      }
    }
  }
  return;
}


// 0x06019d8 (0x300 bytes)
void FUN_006019d8(int param_1,float *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  iVar15 = param_1 >> 1;
  uVar4 = (int)param_3 >> 2;
  lVar17 = ((ulonglong)uVar4 & 0x3fffffff) * 4 + param_4;
  uVar1 = (int)param_3 / param_1;
  if (1 < iVar15) {
    uVar9 = (ulonglong)uVar1 & 0x3fffffff;
    pfVar16 = param_2 + param_1;
    uVar18 = (longlong)iVar15 - 1U & 0xffffffff;
    lVar12 = lVar17 + (param_3 - (longlong)(int)uVar1 & 0x3fffffff) * 4;
    pfVar14 = param_2 + 1;
    lVar10 = lVar17;
    do {
      pfVar16 = pfVar16 + -1;
      lVar10 = lVar10 + uVar9 * 4;
      fVar2 = *pfVar14;
      pfVar7 = (float *)lVar12;
      lVar12 = lVar12 + uVar9 * -4;
      fVar5 = *(float *)lVar10 + *pfVar7;
      fVar3 = *pfVar16;
      fVar6 = *(float *)lVar10 - *pfVar7;
      *pfVar14 = fVar6 * fVar2 + fVar5 * fVar3;
      pfVar14 = pfVar14 + 1;
      *pfVar16 = fVar5 * fVar2 - fVar6 * fVar3;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  param_2[iVar15] = param_2[iVar15] * *(float *)lVar17;
  if (param_1 < 5) {
    if (param_1 == 4) {
      FUN_00600860(4,param_2,uVar4,param_4 & 0xffffffff);
      fVar2 = *param_2 - param_2[1];
      *param_2 = param_2[1] + *param_2;
    }
    else {
      fVar2 = *param_2 - param_2[1];
      *param_2 = *param_2 + param_2[1];
      if (param_1 < 3) goto LAB_00601b54;
    }
  }
  else {
    pfVar16 = param_2 + 2;
    FUN_00600860(param_1,param_2,uVar4,param_4 & 0xffffffff);
    fVar2 = DAT_0071a5d8;
    pfVar14 = param_2 + 3;
    uVar1 = (int)((param_3 & 0xffffffff) << 1) / iVar15;
    if (2 < iVar15) {
      uVar18 = (ulonglong)uVar1 & 0x3fffffff;
      lVar10 = lVar17 + (param_3 - (longlong)(int)uVar1 & 0x3fffffff) * 4;
      iVar11 = 2;
      pfVar7 = param_2 + param_1;
      do {
        lVar17 = lVar17 + uVar18 * 4;
        pfVar13 = pfVar7 + -2;
        pfVar7 = pfVar7 + -1;
        pfVar8 = (float *)lVar10;
        iVar11 = iVar11 + 2;
        lVar10 = lVar10 + uVar18 * -4;
        fVar5 = *pfVar16 - *pfVar13;
        fVar3 = fVar2 - *pfVar8;
        fVar6 = fVar3 * fVar5 - *(float *)lVar17 * (*pfVar14 + *pfVar7);
        fVar3 = fVar3 * (*pfVar14 + *pfVar7) + *(float *)lVar17 * fVar5;
        *pfVar16 = *pfVar16 - fVar6;
        pfVar16 = pfVar16 + 2;
        *pfVar14 = *pfVar14 - fVar3;
        pfVar14 = pfVar14 + 2;
        *pfVar13 = fVar6 + *pfVar13;
        *pfVar7 = *pfVar7 - fVar3;
        pfVar7 = pfVar13;
      } while (iVar11 < iVar15);
    }
    fVar2 = *param_2 - param_2[1];
    *param_2 = param_2[1] + *param_2;
  }
  pfVar16 = param_2 + 3;
  pfVar14 = param_2 + 2;
  iVar15 = 2;
  do {
    iVar15 = iVar15 + 2;
    pfVar14[-1] = *pfVar14 - *pfVar16;
    fVar3 = *pfVar16;
    pfVar16 = pfVar16 + 2;
    *pfVar14 = *pfVar14 + fVar3;
    pfVar14 = pfVar14 + 2;
  } while (iVar15 < param_1);
LAB_00601b54:
  param_2[param_1 + -1] = fVar2;
  return;
}


// 0x0601cd8 (0x3a4 bytes)
void FUN_00601cd8(undefined1 *param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  int aiStack_150 [64];
  
  lVar16 = 8;
  piVar14 = aiStack_150;
  do {
    while( true ) {
      if (((param_3[0x18] != 0 || param_3[0x20] != 0) || param_3[0x30] != 0) ||
          (((param_3[8] != 0 || param_3[0x10] != 0) || param_3[0x28] != 0) || param_3[0x38] != 0))
      break;
      sVar1 = *param_3;
      iVar9 = *param_4;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      iVar9 = sVar1 * iVar9 >> 0xb;
      piVar14[0x38] = iVar9;
      *piVar14 = iVar9;
      piVar14[8] = iVar9;
      piVar14[0x10] = iVar9;
      piVar14[0x18] = iVar9;
      piVar14[0x20] = iVar9;
      piVar14[0x28] = iVar9;
      piVar14[0x30] = iVar9;
      lVar16 = lVar16 + -1;
      piVar14 = piVar14 + 1;
      if (lVar16 == 0) goto LAB_00601db0;
    }
    iVar9 = (int)param_3[0x28] * param_4[0x28] >> 0xb;
    iVar6 = (int)param_3[0x30] * param_4[0x30] >> 0xb;
    iVar2 = (int)param_3[0x20] * param_4[0x20] >> 0xb;
    iVar3 = (int)param_3[0x38] * param_4[0x38] >> 0xb;
    iVar4 = (int)param_3[8] * param_4[8] >> 0xb;
    piVar15 = param_4 + 0x10;
    iVar5 = (int)param_3[0x18] * param_4[0x18] >> 0xb;
    iVar8 = iVar9 - iVar5;
    iVar5 = iVar5 + iVar9;
    iVar9 = *param_4;
    param_4 = param_4 + 1;
    sVar1 = *param_3;
    iVar7 = (int)param_3[0x10] * *piVar15 >> 0xb;
    param_3 = param_3 + 1;
    iVar10 = iVar7 + iVar6;
    iVar9 = sVar1 * iVar9 >> 0xb;
    iVar6 = ((iVar7 - iVar6) * 0xb50 >> 0xb) - iVar10;
    iVar7 = iVar9 - iVar2;
    iVar9 = iVar9 + iVar2;
    iVar13 = iVar7 - iVar6;
    iVar7 = iVar7 + iVar6;
    iVar11 = iVar4 - iVar3;
    iVar4 = iVar4 + iVar3;
    iVar3 = iVar5 + iVar4;
    iVar12 = iVar9 - iVar10;
    iVar9 = iVar9 + iVar10;
    iVar6 = (iVar8 + iVar11) * 0xec8 >> 0xb;
    iVar2 = (iVar6 + (iVar8 * -0x14e8 >> 0xb)) - iVar3;
    iVar4 = ((iVar4 - iVar5) * 0xb50 >> 0xb) - iVar2;
    piVar14[0x38] = iVar9 - iVar3;
    iVar6 = ((iVar11 * 0x8a9 >> 0xb) - iVar6) + iVar4;
    *piVar14 = iVar9 + iVar3;
    piVar14[0x18] = iVar12 - iVar6;
    piVar14[8] = iVar7 + iVar2;
    piVar14[0x30] = iVar7 - iVar2;
    piVar14[0x10] = iVar13 + iVar4;
    piVar14[0x28] = iVar13 - iVar4;
    piVar14[0x20] = iVar12 + iVar6;
    lVar16 = lVar16 + -1;
    piVar14 = piVar14 + 1;
  } while (lVar16 != 0);
LAB_00601db0:
  piVar14 = aiStack_150;
  do {
    piVar15 = piVar14 + 8;
    iVar12 = piVar14[5] - piVar14[3];
    iVar8 = piVar14[1] - piVar14[7];
    iVar10 = piVar14[1] + piVar14[7];
    iVar2 = piVar14[5] + piVar14[3];
    iVar9 = (iVar12 + iVar8) * 0xec8 >> 0xb;
    iVar3 = iVar2 + iVar10;
    iVar13 = piVar14[2] + piVar14[6];
    iVar7 = *piVar14 - piVar14[4];
    iVar6 = ((piVar14[2] - piVar14[6]) * 0xb50 >> 0xb) - iVar13;
    iVar11 = *piVar14 + piVar14[4];
    iVar4 = iVar7 - iVar6;
    iVar5 = iVar11 - iVar13;
    iVar7 = iVar7 + iVar6;
    iVar11 = iVar11 + iVar13;
    param_1[7] = (char)((uint)((iVar11 - iVar3) + 0x7f) >> 8);
    *param_1 = (char)((uint)(iVar3 + iVar11 + 0x7f) >> 8);
    iVar3 = (iVar9 + (iVar12 * -0x14e8 >> 0xb)) - iVar3;
    iVar6 = ((iVar10 - iVar2) * 0xb50 >> 0xb) - iVar3;
    iVar9 = ((iVar8 * 0x8a9 >> 0xb) - iVar9) + iVar6;
    param_1[1] = (char)((uint)(iVar3 + iVar7 + 0x7f) >> 8);
    param_1[3] = (char)((uint)((iVar5 - iVar9) + 0x7f) >> 8);
    param_1[6] = (char)((uint)((iVar7 - iVar3) + 0x7f) >> 8);
    param_1[2] = (char)((uint)(iVar6 + iVar4 + 0x7f) >> 8);
    param_1[5] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8);
    param_1[4] = (char)((uint)(iVar9 + iVar5 + 0x7f) >> 8);
    param_1 = param_1 + param_2;
    piVar14 = piVar15;
  } while ((int *)&stack0xffffffb0 != piVar15);
  return;
}


// 0x0602080 (0x14 bytes)
void FUN_00602080(void)

{
  FUN_00601cd8();
  return;
}


// 0x0602094 (0x18 bytes)
void FUN_00602094(void)

{
  FUN_00601cd8();
  return;
}


// 0x06020b0 (0x3f4 bytes)
void FUN_006020b0(uint *param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  int iVar33;
  int *piVar34;
  longlong lVar35;
  uint auStack_160 [64];
  uint auStack_60 [2];
  
  lVar35 = 8;
  piVar34 = (int *)(PTR_PTR_0071a5dc + param_4 * 0x100 + 0x1000);
  puVar28 = auStack_160;
  do {
    while( true ) {
      if (((param_3[0x18] != 0 || param_3[0x20] != 0) || param_3[0x30] != 0) ||
          (((param_3[8] != 0 || param_3[0x10] != 0) || param_3[0x28] != 0) || param_3[0x38] != 0))
      break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      uVar10 = (int)sVar1 * *piVar34 >> 0xb;
      puVar28[0x38] = uVar10;
      *puVar28 = uVar10;
      puVar28[8] = uVar10;
      puVar28[0x10] = uVar10;
      puVar28[0x18] = uVar10;
      puVar28[0x20] = uVar10;
      puVar28[0x28] = uVar10;
      puVar28[0x30] = uVar10;
      lVar35 = lVar35 + -1;
      piVar34 = piVar34 + 1;
      puVar28 = puVar28 + 1;
      if (lVar35 == 0) goto LAB_0060219c;
    }
    iVar31 = (int)param_3[0x28] * piVar34[0x28] >> 0xb;
    iVar21 = (int)param_3[0x30] * piVar34[0x30] >> 0xb;
    iVar6 = (int)param_3[0x38] * piVar34[0x38] >> 0xb;
    iVar25 = (int)param_3[0x18] * piVar34[0x18] >> 0xb;
    iVar2 = iVar31 - iVar25;
    iVar25 = iVar25 + iVar31;
    iVar31 = (int)param_3[8] * piVar34[8] >> 0xb;
    iVar8 = (int)param_3[0x20] * piVar34[0x20] >> 0xb;
    sVar1 = *param_3;
    iVar14 = (int)param_3[0x10] * piVar34[0x10] >> 0xb;
    param_3 = param_3 + 1;
    iVar16 = iVar14 + iVar21;
    iVar3 = (int)sVar1 * *piVar34 >> 0xb;
    iVar21 = ((iVar14 - iVar21) * 0xb50 >> 0xb) - iVar16;
    iVar14 = iVar3 - iVar8;
    iVar3 = iVar3 + iVar8;
    iVar33 = iVar14 - iVar21;
    iVar14 = iVar14 + iVar21;
    iVar22 = iVar31 - iVar6;
    iVar31 = iVar31 + iVar6;
    iVar8 = iVar25 + iVar31;
    iVar29 = iVar3 - iVar16;
    iVar3 = iVar3 + iVar16;
    iVar21 = (iVar2 + iVar22) * 0xec8 >> 0xb;
    iVar6 = (iVar21 + (iVar2 * -0x14e8 >> 0xb)) - iVar8;
    iVar25 = ((iVar31 - iVar25) * 0xb50 >> 0xb) - iVar6;
    puVar28[0x38] = iVar3 - iVar8;
    iVar31 = ((iVar22 * 0x8a9 >> 0xb) - iVar21) + iVar25;
    *puVar28 = iVar3 + iVar8;
    puVar28[0x18] = iVar29 - iVar31;
    puVar28[8] = iVar14 + iVar6;
    puVar28[0x30] = iVar14 - iVar6;
    puVar28[0x10] = iVar33 + iVar25;
    puVar28[0x28] = iVar33 - iVar25;
    puVar28[0x20] = iVar29 + iVar31;
    lVar35 = lVar35 + -1;
    piVar34 = piVar34 + 1;
    puVar28 = puVar28 + 1;
  } while (lVar35 != 0);
LAB_0060219c:
  puVar28 = (uint *)((int)param_1 + param_2);
  puVar26 = auStack_160;
  do {
    puVar27 = puVar26 + 8;
    iVar31 = puVar26[5] - puVar26[3];
    iVar21 = puVar26[1] - puVar26[7];
    lVar4 = (ulonglong)puVar26[5] + (ulonglong)puVar26[3];
    lVar17 = (ulonglong)puVar26[1] + (ulonglong)puVar26[7];
    lVar30 = (longlong)((iVar31 + iVar21) * 0xec8 >> 0xb);
    lVar5 = lVar4 + lVar17;
    lVar32 = (ulonglong)puVar26[2] + (ulonglong)puVar26[6];
    lVar15 = (ulonglong)*puVar26 - (ulonglong)puVar26[4];
    lVar35 = ((int)((puVar26[2] - puVar26[6]) * 0xb50) >> 0xb) - lVar32;
    lVar18 = (ulonglong)*puVar26 + (ulonglong)puVar26[4];
    lVar11 = lVar15 - lVar35;
    lVar7 = lVar18 - lVar32;
    lVar15 = lVar15 + lVar35;
    lVar18 = lVar18 + lVar32;
    lVar32 = (lVar30 + (iVar31 * -0x14e8 >> 0xb)) - lVar5;
    lVar4 = (((int)lVar17 - (int)lVar4) * 0xb50 >> 0xb) - lVar32;
    lVar35 = ((iVar21 * 0x8a9 >> 0xb) - lVar30) + lVar4;
    uVar19 = (lVar5 + lVar18 + 0x7f & 0xff00U) << 8 |
             (ulonglong)(lVar32 + lVar15 + 0x7f) >> 8 & 0xff;
    uVar9 = (lVar18 - lVar5) + 0x7fU >> 8 & 0xff | ((lVar15 - lVar32) + 0x7fU & 0xff00) << 8;
    uVar12 = (lVar11 - lVar4) + 0x7fU >> 8 & 0xff | (lVar35 + lVar7 + 0x7f & 0xff00U) << 8;
    uVar23 = (lVar4 + lVar11 + 0x7f & 0xff00U) << 8 | (lVar7 - lVar35) + 0x7fU >> 8 & 0xff;
    uVar20 = (uint)uVar19 | (uint)(uVar19 << 8);
    uVar10 = (uint)uVar9 | (uint)(uVar9 << 8);
    uVar13 = (uint)uVar12 | (uint)(uVar12 << 8);
    uVar24 = (uint)uVar23 | (uint)(uVar23 << 8);
    param_1[3] = uVar10;
    *param_1 = uVar20;
    param_1[1] = uVar24;
    param_1[2] = uVar13;
    puVar28[3] = uVar10;
    *puVar28 = uVar20;
    puVar28[1] = uVar24;
    puVar28[2] = uVar13;
    param_1 = (uint *)((int)param_1 + param_2 * 2);
    puVar28 = (uint *)((int)puVar28 + param_2 * 2);
    puVar26 = puVar27;
  } while (auStack_60 != puVar27);
  return;
}


// 0x06024a8 (0x410 bytes)
void FUN_006024a8(char *param_1,int param_2,short *param_3,int param_4,char *param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  int aiStack_160 [64];
  
  lVar17 = 8;
  piVar15 = (int *)(PTR_PTR_0071a5dc + param_4 * 0x100);
  piVar16 = aiStack_160;
  do {
    while( true ) {
      if (((param_3[0x18] != 0 || param_3[0x20] != 0) || param_3[0x30] != 0) ||
          (((param_3[8] != 0 || param_3[0x10] != 0) || param_3[0x28] != 0) || param_3[0x38] != 0))
      break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      iVar6 = (int)sVar1 * *piVar15 >> 0xb;
      piVar16[0x38] = iVar6;
      *piVar16 = iVar6;
      piVar16[8] = iVar6;
      piVar16[0x10] = iVar6;
      piVar16[0x18] = iVar6;
      piVar16[0x20] = iVar6;
      piVar16[0x28] = iVar6;
      piVar16[0x30] = iVar6;
      lVar17 = lVar17 + -1;
      piVar15 = piVar15 + 1;
      piVar16 = piVar16 + 1;
      if (lVar17 == 0) goto LAB_0060259c;
    }
    iVar6 = (int)param_3[0x28] * piVar15[0x28] >> 0xb;
    iVar11 = (int)param_3[0x30] * piVar15[0x30] >> 0xb;
    iVar9 = (int)param_3[0x38] * piVar15[0x38] >> 0xb;
    iVar13 = (int)param_3[0x18] * piVar15[0x18] >> 0xb;
    iVar4 = iVar6 - iVar13;
    iVar13 = iVar13 + iVar6;
    iVar6 = (int)param_3[8] * piVar15[8] >> 0xb;
    iVar3 = (int)param_3[0x20] * piVar15[0x20] >> 0xb;
    sVar1 = *param_3;
    iVar2 = (int)param_3[0x10] * piVar15[0x10] >> 0xb;
    param_3 = param_3 + 1;
    iVar5 = iVar2 + iVar11;
    iVar8 = (int)sVar1 * *piVar15 >> 0xb;
    iVar11 = ((iVar2 - iVar11) * 0xb50 >> 0xb) - iVar5;
    iVar2 = iVar8 - iVar3;
    iVar8 = iVar8 + iVar3;
    iVar12 = iVar2 - iVar11;
    iVar2 = iVar2 + iVar11;
    iVar7 = iVar6 - iVar9;
    iVar6 = iVar6 + iVar9;
    iVar3 = iVar13 + iVar6;
    iVar10 = iVar8 - iVar5;
    iVar8 = iVar8 + iVar5;
    iVar11 = (iVar4 + iVar7) * 0xec8 >> 0xb;
    iVar9 = (iVar11 + (iVar4 * -0x14e8 >> 0xb)) - iVar3;
    iVar13 = ((iVar6 - iVar13) * 0xb50 >> 0xb) - iVar9;
    piVar16[0x38] = iVar8 - iVar3;
    iVar6 = ((iVar7 * 0x8a9 >> 0xb) - iVar11) + iVar13;
    *piVar16 = iVar8 + iVar3;
    piVar16[0x18] = iVar10 - iVar6;
    piVar16[8] = iVar2 + iVar9;
    piVar16[0x30] = iVar2 - iVar9;
    piVar16[0x10] = iVar12 + iVar13;
    piVar16[0x28] = iVar12 - iVar13;
    piVar16[0x20] = iVar10 + iVar6;
    lVar17 = lVar17 + -1;
    piVar15 = piVar15 + 1;
    piVar16 = piVar16 + 1;
  } while (lVar17 != 0);
LAB_0060259c:
  piVar15 = aiStack_160;
  do {
    piVar16 = piVar15 + 8;
    iVar12 = piVar15[5] - piVar15[3];
    iVar6 = piVar15[6];
    iVar5 = piVar15[1] - piVar15[7];
    iVar11 = piVar15[2];
    iVar9 = *piVar15;
    iVar8 = piVar15[5] + piVar15[3];
    iVar13 = piVar15[4];
    iVar7 = piVar15[1] + piVar15[7];
    iVar4 = iVar9 + iVar13;
    iVar14 = iVar11 + iVar6;
    iVar2 = iVar8 + iVar7;
    iVar10 = iVar4 + iVar14;
    iVar3 = (iVar12 + iVar5) * 0xec8 >> 0xb;
    *param_1 = (char)((uint)(iVar2 + iVar10 + 0x7f) >> 8) + *param_5;
    iVar12 = (iVar3 + (iVar12 * -0x14e8 >> 0xb)) - iVar2;
    iVar8 = ((iVar7 - iVar8) * 0xb50 >> 0xb) - iVar12;
    iVar7 = ((iVar11 - iVar6) * 0xb50 >> 0xb) - iVar14;
    iVar9 = iVar9 - iVar13;
    iVar4 = iVar4 - iVar14;
    param_1[7] = (char)((uint)((iVar10 - iVar2) + 0x7f) >> 8) + param_5[7];
    iVar11 = iVar9 + iVar7;
    iVar6 = ((iVar5 * 0x8a9 >> 0xb) - iVar3) + iVar8;
    iVar9 = iVar9 - iVar7;
    param_1[1] = (char)((uint)(iVar12 + iVar11 + 0x7f) >> 8) + param_5[1];
    param_1[6] = (char)((uint)((iVar11 - iVar12) + 0x7f) >> 8) + param_5[6];
    param_1[2] = (char)((uint)(iVar8 + iVar9 + 0x7f) >> 8) + param_5[2];
    param_1[5] = (char)((uint)((iVar9 - iVar8) + 0x7f) >> 8) + param_5[5];
    param_1[3] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8) + param_5[3];
    param_1[4] = (char)((uint)(iVar6 + iVar4 + 0x7f) >> 8) + param_5[4];
    param_5 = param_5 + param_6;
    param_1 = param_1 + param_2;
    piVar15 = piVar16;
  } while ((int *)&stack0xffffffa0 != piVar16);
  return;
}


// 0x06028b8 (0x60c bytes)
void FUN_006028b8(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  int iVar7;
  char cVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar15;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar16;
  char cVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  uint *puVar25;
  uint *puVar26;
  byte local_150 [132];
  byte local_cc [76];
  uint uVar6;
  
  uVar11 = (ulonglong)param_2[2];
  puVar26 = (uint *)param_2[1];
  uVar9 = (ulonglong)*param_2;
  puVar25 = puVar26;
  if (uVar11 < 3) {
    puVar25 = puVar26 + 1;
    uVar13 = uVar11 & 0x7f;
    uVar11 = uVar11 + 0x20;
    uVar9 = uVar9 | (ulonglong)*puVar26 << uVar13;
  }
  uVar3 = (uint)uVar9 & 7;
  local_cc[0] = 0x10;
  local_cc[1] = 0x60;
  local_cc[2] = 0xb0;
  local_cc[3] = 2;
  lVar5 = uVar11 - 3;
  uVar6 = (uint)lVar5;
  uVar9 = uVar9 >> 3;
  uVar15 = (uint)uVar9;
  if (uVar3 != 0xffffffff) {
    iVar23 = 0;
    iVar19 = 1 << uVar3;
    pbVar18 = local_cc;
    pbVar20 = local_cc + 4;
    iVar21 = 0;
    uVar16 = 0;
    do {
      iVar10 = 0;
      cVar2 = (char)iVar19;
      iVar22 = iVar21;
      if (0 < iVar21) {
        do {
          iVar7 = (int)lVar5;
          lVar5 = lVar5 + -1;
          uVar11 = uVar9;
          if (iVar7 == 0) {
            uVar11 = (ulonglong)*puVar25;
            lVar5 = 0x1f;
            puVar25 = puVar25 + 1;
          }
          uVar6 = (uint)lVar5;
          pbVar24 = local_150 + iVar10;
          bVar1 = param_3 == iVar23;
          iVar10 = iVar10 + 1;
          uVar9 = (uVar11 << 0x20) >> 0x21;
          uVar15 = (uint)uVar11 >> 1;
          if ((uVar11 & 1) != 0) {
            iVar23 = iVar23 + 1;
            cVar17 = *(char *)(param_1 + (uint)*pbVar24);
            cVar8 = -cVar2;
            if (-1 < cVar17) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (uint)*pbVar24) = cVar17 + cVar8;
            if (bVar1) goto LAB_00602af0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (pbVar18 < pbVar20) {
        cVar17 = -cVar2;
        pbVar24 = pbVar18;
LAB_00602a28:
        bVar12 = *pbVar24;
        uVar11 = (ulonglong)bVar12;
        iVar22 = iVar21;
        if (bVar12 == 0) {
LAB_00602a78:
          pbVar24 = pbVar24 + 1;
          iVar21 = iVar22;
        }
        else {
          if ((int)lVar5 == 0) {
            lVar5 = 0x1f;
            uVar9 = (ulonglong)*puVar25;
            puVar25 = puVar25 + 1;
          }
          else {
            lVar5 = lVar5 + -1;
          }
          uVar13 = uVar9 & 1;
          uVar9 = (uVar9 << 0x20) >> 0x21;
          if (uVar13 == 0) goto LAB_00602a78;
          bVar4 = bVar12 & 3;
          if (bVar4 == 1) {
            cVar8 = (char)(((uVar11 << 0x20) >> 0x22) << 2);
            *pbVar24 = cVar8 + 2;
            *pbVar20 = cVar8 + 0x12;
            pbVar20[1] = cVar8 + 0x22;
            pbVar20[2] = cVar8 + 0x32;
            pbVar20 = pbVar20 + 3;
            goto LAB_00602a7c;
          }
          if ((bVar12 & 3) == 0) {
            uVar11 = (uVar11 << 0x20) >> 0x22;
            *pbVar24 = (char)(uVar11 << 2) + 0x11;
          }
          else {
            if (bVar4 != 2) {
              if (bVar4 != 3) goto LAB_00602a78;
              if ((int)lVar5 == 0) {
                lVar5 = 0x1f;
                uVar9 = (ulonglong)*puVar25;
                puVar25 = puVar25 + 1;
              }
              else {
                lVar5 = lVar5 + -1;
              }
              uVar6 = (uint)lVar5;
              uVar15 = (uint)uVar9 >> 1;
              cVar8 = cVar17;
              if ((uVar9 & 1) == 0) {
                cVar8 = cVar2;
              }
              *(char *)((uint)(bVar12 >> 2) + param_1) = cVar8;
              if (param_3 == iVar23) break;
              iVar23 = iVar23 + 1;
              iVar22 = iVar21 + 1;
              local_150[iVar21] = (byte)((uVar11 << 0x20) >> 0x22);
              *pbVar24 = 0;
              uVar9 = (uVar9 << 0x20) >> 0x21;
              goto LAB_00602a78;
            }
            uVar11 = (uVar11 << 0x20) >> 0x22;
            *pbVar24 = 0;
            pbVar24 = pbVar24 + 1;
          }
          if ((int)lVar5 == 0) {
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar9 = (ulonglong)*puVar25;
          }
          else {
            lVar5 = lVar5 + -1;
            puVar26 = puVar25;
          }
          uVar13 = (uVar9 << 0x20) >> 0x21;
          bVar12 = (byte)uVar11;
          puVar25 = puVar26;
          if ((uVar9 & 1) == 0) {
            if ((int)lVar5 == 0) {
              lVar5 = 0x1f;
              puVar25 = puVar26 + 1;
              uVar13 = (ulonglong)*puVar26;
            }
            else {
              lVar5 = lVar5 + -1;
            }
            uVar6 = (uint)lVar5;
            uVar9 = (uVar13 << 0x20) >> 0x21;
            uVar15 = (uint)uVar13 >> 1;
            cVar8 = cVar17;
            if ((uVar13 & 1) == 0) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (int)uVar11) = cVar8;
            if (param_3 == iVar23) break;
            iVar23 = iVar23 + 1;
            iVar22 = iVar21 + 1;
            local_150[iVar21] = bVar12;
            if (uVar6 == 0) goto LAB_00602cd8;
LAB_00602ba8:
            lVar5 = lVar5 + -1;
            uVar13 = (uVar9 << 0x20) >> 0x21;
            uVar14 = uVar13;
            puVar26 = puVar25;
            if ((uVar9 & 1) != 0) goto LAB_00602bbc;
LAB_00602cf8:
            if ((int)lVar5 == 0) {
              lVar5 = 0x1f;
              puVar25 = puVar26 + 1;
              uVar13 = (ulonglong)*puVar26;
            }
            else {
              lVar5 = lVar5 + -1;
              puVar25 = puVar26;
            }
            uVar6 = (uint)lVar5;
            uVar14 = (uVar13 << 0x20) >> 0x21;
            uVar15 = (uint)uVar13 >> 1;
            cVar8 = cVar17;
            if ((uVar13 & 1) == 0) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (int)(uVar11 + 1)) = cVar8;
            if (iVar23 == param_3) break;
            iVar23 = iVar23 + 1;
            iVar21 = iVar22 + 1;
            local_150[iVar22] = (byte)(uVar11 + 1);
            if (uVar6 == 0) goto LAB_00602d50;
LAB_00602bdc:
            lVar5 = lVar5 + -1;
            uVar9 = (uVar14 << 0x20) >> 0x21;
            uVar13 = uVar9;
            puVar26 = puVar25;
            if ((uVar14 & 1) != 0) goto LAB_00602bf0;
LAB_00602d70:
            if ((int)lVar5 == 0) {
              lVar5 = 0x1f;
              puVar25 = puVar26 + 1;
              uVar9 = (ulonglong)*puVar26;
            }
            else {
              lVar5 = lVar5 + -1;
              puVar25 = puVar26;
            }
            uVar6 = (uint)lVar5;
            uVar13 = (uVar9 << 0x20) >> 0x21;
            uVar15 = (uint)uVar9 >> 1;
            cVar8 = cVar17;
            if ((uVar9 & 1) == 0) {
              cVar8 = cVar2;
            }
            *(char *)(param_1 + (int)(uVar11 + 2)) = cVar8;
            if (iVar23 == param_3) break;
            iVar23 = iVar23 + 1;
            iVar22 = iVar21 + 1;
            local_150[iVar21] = (byte)(uVar11 + 2);
            if (uVar6 == 0) goto LAB_00602dc8;
LAB_00602c10:
            lVar5 = lVar5 + -1;
            uVar14 = (uVar13 << 0x20) >> 0x21;
            uVar9 = uVar14;
            puVar26 = puVar25;
            if ((uVar13 & 1) == 0) {
LAB_00602de8:
              if ((int)lVar5 == 0) {
                lVar5 = 0x1f;
                puVar25 = puVar26 + 1;
                uVar14 = (ulonglong)*puVar26;
              }
              else {
                lVar5 = lVar5 + -1;
                puVar25 = puVar26;
              }
              uVar6 = (uint)lVar5;
              uVar9 = (uVar14 << 0x20) >> 0x21;
              uVar15 = (uint)uVar14 >> 1;
              cVar8 = cVar17;
              if ((uVar14 & 1) == 0) {
                cVar8 = cVar2;
              }
              *(char *)(param_1 + (int)(uVar11 + 3)) = cVar8;
              if (iVar23 != param_3) {
                iVar23 = iVar23 + 1;
                iVar21 = iVar22 + 1;
                local_150[iVar22] = (byte)(uVar11 + 3);
                goto LAB_00602a7c;
              }
              break;
            }
          }
          else {
            pbVar18 = pbVar18 + -1;
            *pbVar18 = (char)(uVar11 << 2) + 3;
            uVar9 = uVar13;
            if ((int)lVar5 != 0) goto LAB_00602ba8;
LAB_00602cd8:
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar13 = (ulonglong)(*puVar25 >> 1);
            uVar14 = uVar13;
            if ((*puVar25 & 1) == 0) goto LAB_00602cf8;
LAB_00602bbc:
            pbVar18 = pbVar18 + -1;
            *pbVar18 = (bVar12 + 1) * '\x04' + 3;
            iVar21 = iVar22;
            puVar25 = puVar26;
            if ((int)lVar5 != 0) goto LAB_00602bdc;
LAB_00602d50:
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar9 = (ulonglong)(*puVar25 >> 1);
            uVar13 = uVar9;
            if ((*puVar25 & 1) == 0) goto LAB_00602d70;
LAB_00602bf0:
            pbVar18 = pbVar18 + -1;
            *pbVar18 = (bVar12 + 2) * '\x04' + 3;
            iVar22 = iVar21;
            puVar25 = puVar26;
            if ((int)lVar5 != 0) goto LAB_00602c10;
LAB_00602dc8:
            lVar5 = 0x1f;
            puVar26 = puVar25 + 1;
            uVar14 = (ulonglong)(*puVar25 >> 1);
            uVar9 = uVar14;
            if ((*puVar25 & 1) == 0) goto LAB_00602de8;
          }
          pbVar18 = pbVar18 + -1;
          *pbVar18 = (bVar12 + 3) * '\x04' + 3;
          iVar21 = iVar22;
          puVar25 = puVar26;
        }
LAB_00602a7c:
        if (pbVar20 <= pbVar24) goto LAB_00602a84;
        goto LAB_00602a28;
      }
LAB_00602a84:
      uVar15 = (uint)uVar9;
      uVar6 = (uint)lVar5;
      if (uVar3 == uVar16) break;
      iVar19 = iVar19 >> 1;
      uVar16 = uVar16 + 1;
    } while( true );
  }
LAB_00602af0:
  param_2[2] = uVar6;
  param_2[1] = (uint)puVar25;
  *param_2 = uVar15;
  return;
}


// 0x0602ec8 (0x534 bytes)
void FUN_00602ec8(char *param_1,int param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                 int param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 local_b0;
  char local_ac;
  char local_ab;
  char local_aa;
  char local_a9;
  char local_a8;
  char local_a7;
  char local_a6;
  char local_a5;
  char local_a4;
  char local_a3;
  char local_a2;
  char local_a1;
  char local_a0;
  char local_9f;
  char local_9e;
  char local_9d;
  char local_9c;
  char local_9b;
  char local_9a;
  char local_99;
  char local_98;
  char local_97;
  char local_96;
  char local_95;
  char local_94;
  char local_93;
  char local_92;
  char local_91;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  char local_8c;
  char local_8b;
  char local_8a;
  char local_89;
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_84;
  char local_83;
  char local_82;
  char local_81;
  char local_80;
  char local_7f;
  char local_7e;
  char local_7d;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_79;
  char local_78;
  char local_77;
  char local_76;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  
  cVar3 = (char)local_b0;
  cVar2 = local_b0.piece<2,1>();
  cVar1 = local_b0.piece<1,1>();
  local_b0 = 0;
  FUN_006028b8(&local_b0,param_3,param_4);
  pcVar10 = param_5 + param_6;
  pcVar4 = param_1 + param_2;
  *param_1 = local_b0.piece<0,1>() + *param_5;
  pcVar11 = pcVar10 + param_6;
  param_1[1] = cVar1 + param_5[1];
  param_1[2] = local_ac + param_5[2];
  param_1[3] = local_ab + param_5[3];
  param_1[4] = local_a8 + param_5[4];
  pcVar5 = pcVar4 + param_2;
  param_1[5] = local_a7 + param_5[5];
  param_1[6] = local_a4 + param_5[6];
  pcVar6 = pcVar5 + param_2;
  param_1[7] = local_a3 + param_5[7];
  pcVar12 = pcVar11 + param_6;
  *pcVar4 = cVar2 + *pcVar10;
  pcVar13 = pcVar12 + param_6;
  pcVar7 = pcVar6 + param_2;
  pcVar4[1] = cVar3 + pcVar10[1];
  pcVar14 = pcVar13 + param_6;
  pcVar4[2] = local_aa + pcVar10[2];
  pcVar15 = pcVar14 + param_6;
  pcVar8 = pcVar7 + param_2;
  pcVar4[3] = local_a9 + pcVar10[3];
  pcVar17 = pcVar15 + param_6;
  pcVar9 = pcVar8 + param_2;
  pcVar16 = pcVar9 + param_2;
  pcVar4[4] = local_a6 + pcVar10[4];
  pcVar4[5] = local_a5 + pcVar10[5];
  pcVar4[6] = local_a2 + pcVar10[6];
  pcVar4[7] = local_a1 + pcVar10[7];
  *pcVar5 = local_98 + *pcVar11;
  pcVar5[1] = local_97 + pcVar11[1];
  pcVar5[2] = local_84 + pcVar11[2];
  pcVar5[3] = local_83 + pcVar11[3];
  pcVar5[4] = local_a0 + pcVar11[4];
  pcVar5[5] = local_9f + pcVar11[5];
  pcVar5[6] = local_9c + pcVar11[6];
  pcVar5[7] = local_9b + pcVar11[7];
  *pcVar6 = local_96 + *pcVar12;
  pcVar6[1] = local_95 + pcVar12[1];
  pcVar6[2] = local_82 + pcVar12[2];
  pcVar6[3] = local_81 + pcVar12[3];
  pcVar6[4] = local_9e + pcVar12[4];
  pcVar6[5] = local_9d + pcVar12[5];
  pcVar6[6] = local_9a + pcVar12[6];
  pcVar6[7] = local_99 + pcVar12[7];
  *pcVar7 = local_94 + *pcVar13;
  pcVar7[1] = local_93 + pcVar13[1];
  pcVar7[2] = local_90 + pcVar13[2];
  pcVar7[3] = local_8f + pcVar13[3];
  pcVar7[4] = local_80 + pcVar13[4];
  pcVar7[5] = local_7f + pcVar13[5];
  pcVar7[6] = local_7c + pcVar13[6];
  pcVar7[7] = local_7b + pcVar13[7];
  *pcVar8 = local_92 + *pcVar14;
  pcVar8[1] = local_91 + pcVar14[1];
  pcVar8[2] = local_8e + pcVar14[2];
  pcVar8[3] = local_8d + pcVar14[3];
  pcVar8[4] = local_7e + pcVar14[4];
  pcVar8[5] = local_7d + pcVar14[5];
  pcVar8[6] = local_7a + pcVar14[6];
  pcVar8[7] = local_79 + pcVar14[7];
  *pcVar9 = local_8c + *pcVar15;
  pcVar9[1] = local_8b + pcVar15[1];
  pcVar9[2] = local_88 + pcVar15[2];
  pcVar9[3] = local_87 + pcVar15[3];
  pcVar9[4] = local_78 + pcVar15[4];
  pcVar9[5] = local_77 + pcVar15[5];
  pcVar9[6] = local_74 + pcVar15[6];
  pcVar9[7] = local_73 + pcVar15[7];
  *pcVar16 = local_8a + *pcVar17;
  pcVar16[1] = local_89 + pcVar17[1];
  pcVar16[2] = local_86 + pcVar17[2];
  pcVar16[3] = local_85 + pcVar17[3];
  pcVar16[4] = local_76 + pcVar17[4];
  pcVar16[5] = local_75 + pcVar17[5];
  pcVar16[6] = local_72 + pcVar17[6];
  pcVar16[7] = local_71 + pcVar17[7];
  return;
}


// 0x06033fc (0x198 bytes)
void FUN_006033fc(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  
  uVar1 = local_a0.piece<2,2>();
  local_a0 = 0;
  FUN_006028b8(&local_a0);
  *param_1 = local_a0.piece<0,2>();
  param_1[1] = local_9c;
  param_1[2] = local_98;
  param_1[3] = local_94;
  param_1[4] = uVar1;
  param_1[5] = local_9a;
  param_1[6] = local_96;
  param_1[7] = local_92;
  param_1[8] = local_88;
  param_1[9] = local_74;
  param_1[10] = local_90;
  param_1[0xb] = local_8c;
  param_1[0xc] = local_86;
  param_1[0xd] = local_72;
  param_1[0xe] = local_8e;
  param_1[0xf] = local_8a;
  param_1[0x10] = local_84;
  param_1[0x1f] = local_62;
  param_1[0x11] = local_80;
  param_1[0x12] = local_70;
  param_1[0x13] = local_6c;
  param_1[0x14] = local_82;
  param_1[0x15] = local_7e;
  param_1[0x16] = local_6e;
  param_1[0x17] = local_6a;
  param_1[0x18] = local_7c;
  param_1[0x19] = local_78;
  param_1[0x1a] = local_68;
  param_1[0x1b] = local_64;
  param_1[0x1c] = local_7a;
  param_1[0x1d] = local_76;
  param_1[0x1e] = local_66;
  return;
}


// 0x0603598 (0xab4 bytes)
void FUN_00603598(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  byte bVar8;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar15;
  longlong lVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  byte *pbVar24;
  uint uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  ushort auStack_1a0 [98];
  byte local_dc [6];
  byte abStack_d6 [78];
  
  uVar10 = (ulonglong)param_2[2];
  puVar23 = (uint *)param_2[1];
  uVar13 = (ulonglong)*param_2;
  puVar22 = puVar23;
  if (uVar10 < 4) {
    puVar22 = puVar23 + 1;
    uVar17 = uVar10 & 0x7f;
    uVar10 = uVar10 + 0x20;
    uVar13 = uVar13 | (ulonglong)*puVar23 << uVar17;
  }
  uVar17 = uVar13 & 0xf;
  uVar10 = uVar10 - 4;
  uVar25 = (uint)uVar10;
  uVar13 = uVar13 >> 4;
  uVar19 = (uint)uVar13;
  if (1 < uVar17) {
    iVar18 = 1 << ((int)uVar17 - 1U & 0x3f);
    lVar20 = uVar17 + 1;
    pbVar27 = local_dc;
    pbVar28 = abStack_d6;
    uVar11 = 0x1f - uVar17;
    do {
      uVar19 = (uint)(uVar17 - 1);
      uVar25 = 1 << (uVar19 & 0x3f);
      uVar5 = (short)uVar25 - 1;
      pbVar24 = pbVar27;
      if (pbVar27 < pbVar28) {
        puVar23 = puVar22;
        pbVar29 = pbVar28;
        do {
          bVar1 = *pbVar27;
          uVar16 = (ulonglong)bVar1;
          puVar22 = puVar23;
          pbVar28 = pbVar29;
          if (bVar1 == 0) {
LAB_00603730:
            pbVar27 = pbVar27 + 1;
          }
          else {
            if ((int)uVar10 == 0) {
              uVar10 = 0x1f;
              puVar22 = puVar23 + 1;
              uVar26 = (ulonglong)*puVar23;
            }
            else {
              uVar10 = uVar10 - 1;
              uVar26 = uVar13;
            }
            uVar13 = (uVar26 << 0x20) >> 0x21;
            if ((uVar26 & 1) == 0) goto LAB_00603730;
            bVar8 = bVar1 & 3;
            if (bVar8 == 1) {
              pbVar28 = pbVar29 + 3;
              cVar3 = (char)(((uVar16 << 0x20) >> 0x22) << 2);
              *pbVar27 = cVar3 + 2;
              *pbVar29 = cVar3 + 0x12;
              pbVar29[1] = cVar3 + 0x22;
              pbVar29[2] = cVar3 + 0x32;
            }
            else {
              uVar6 = (ushort)iVar18;
              if ((bVar1 & 3) == 0) {
                uVar16 = (uVar16 << 0x20) >> 0x22;
                *pbVar27 = (char)(uVar16 << 2) + 0x11;
              }
              else {
                if (bVar8 != 2) {
                  if (bVar8 == 3) {
                    if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                      uVar16 = uVar10 & 0x7f;
                      uVar10 = uVar10 + 0x20;
                      uVar13 = uVar13 | (ulonglong)*puVar22 << uVar16;
                      puVar22 = puVar22 + 1;
                    }
                    uVar16 = 0xffffffff >> ((uint)(uVar11 + 1) & 0x3f) & uVar13;
                    uVar6 = uVar5 & (ushort)uVar16 | uVar6;
                    uVar15 = -uVar6;
                    if ((uVar25 & (uint)uVar16) == 0) {
                      uVar15 = uVar6;
                    }
                    uVar13 = uVar13 >> (uVar17 & 0x7f);
                    uVar10 = uVar10 - uVar17;
                    *(ushort *)((int)auStack_1a0 + (bVar1 >> 1 & 0x7e)) = uVar15;
                    *pbVar27 = 0;
                  }
                  goto LAB_00603730;
                }
                uVar16 = (uVar16 << 0x20) >> 0x22;
                *pbVar27 = 0;
                pbVar27 = pbVar27 + 1;
              }
              uVar21 = (uint)lVar20;
              iVar4 = (int)uVar17;
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar9 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) goto LAB_00603afc;
                uVar10 = 0x1f;
LAB_0060381c:
                pbVar24 = pbVar24 + -1;
                *pbVar24 = (char)(uVar16 << 2) + 3;
                uVar13 = uVar9;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar9 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) != 0) goto LAB_0060381c;
                uVar12 = (uint)uVar26;
                if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                  uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                  uVar12 = uVar12 >> 2 | *puVar22 << ((uint)uVar10 & 0x3f);
                  uVar10 = (uVar10 - uVar17) + 0x20;
                  puVar22 = puVar22 + 1;
                }
                else {
                  uVar13 = (ulonglong)((uVar12 >> 1) >> (uVar21 & 0x3f));
                  uVar10 = uVar10 - uVar17;
                  uVar12 = uVar12 >> 2;
                }
LAB_00603afc:
                uVar7 = uVar5 & (ushort)uVar12 | uVar6;
                uVar15 = -uVar7;
                if ((uVar25 & uVar12) == 0) {
                  uVar15 = uVar7;
                }
                *(ushort *)((int)auStack_1a0 + (int)(uVar16 << 1)) = uVar15;
              }
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar26 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) goto LAB_00603a88;
                uVar10 = 0x1f;
LAB_00603868:
                pbVar24 = pbVar24 + -1;
                *pbVar24 = (char)(uVar16 + 1) * '\x04' + 3;
                uVar13 = uVar26;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar26 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) != 0) goto LAB_00603868;
                uVar12 = (uint)uVar13;
                if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                  uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                  uVar12 = uVar12 >> 1 | *puVar22 << ((uint)uVar10 & 0x3f);
                  uVar10 = (uVar10 - uVar17) + 0x20;
                  puVar22 = puVar22 + 1;
                }
                else {
                  uVar13 = (ulonglong)(uVar12 >> (uVar21 & 0x3f));
                  uVar10 = uVar10 - uVar17;
                  uVar12 = uVar12 >> 1;
                }
LAB_00603a88:
                uVar7 = uVar5 & (ushort)uVar12 | uVar6;
                uVar15 = -uVar7;
                if ((uVar25 & uVar12) == 0) {
                  uVar15 = uVar7;
                }
                auStack_1a0[(int)(uVar16 + 1)] = uVar15;
              }
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar26 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) goto LAB_00603a14;
                uVar10 = 0x1f;
LAB_006038b4:
                pbVar24 = pbVar24 + -1;
                *pbVar24 = (char)(uVar16 + 2) * '\x04' + 3;
                uVar13 = uVar26;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar26 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) != 0) goto LAB_006038b4;
                uVar12 = (uint)uVar13;
                if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                  uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                  uVar12 = uVar12 >> 1 | *puVar22 << ((uint)uVar10 & 0x3f);
                  uVar10 = (uVar10 - uVar17) + 0x20;
                  puVar22 = puVar22 + 1;
                }
                else {
                  uVar13 = (ulonglong)(uVar12 >> (uVar21 & 0x3f));
                  uVar10 = uVar10 - uVar17;
                  uVar12 = uVar12 >> 1;
                }
LAB_00603a14:
                uVar7 = uVar5 & (ushort)uVar12 | uVar6;
                uVar15 = -uVar7;
                if ((uVar25 & uVar12) == 0) {
                  uVar15 = uVar7;
                }
                auStack_1a0[(int)(uVar16 + 2)] = uVar15;
              }
              if ((int)uVar10 == 0) {
                puVar23 = puVar22 + 1;
                uVar2 = *puVar22;
                uVar12 = uVar2 >> 1;
                uVar26 = (ulonglong)uVar12;
                uVar13 = (ulonglong)(uVar2 >> (uVar21 & 0x3f));
                uVar10 = uVar11;
                puVar22 = puVar23;
                if ((uVar2 & 1) == 0) {
LAB_006039a0:
                  uVar6 = uVar5 & (ushort)uVar12 | uVar6;
                  uVar15 = -uVar6;
                  if ((uVar25 & uVar12) == 0) {
                    uVar15 = uVar6;
                  }
                  auStack_1a0[(int)(uVar16 + 3)] = uVar15;
                  goto LAB_00603734;
                }
                uVar10 = 0x1f;
              }
              else {
                uVar10 = uVar10 - 1;
                uVar26 = (uVar13 << 0x20) >> 0x21;
                if ((uVar13 & 1) == 0) {
                  uVar12 = (uint)uVar13;
                  if ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                    uVar13 = (ulonglong)(*puVar22 >> (iVar4 - (uint)uVar10 & 0x3f));
                    uVar12 = uVar12 >> 1 | *puVar22 << ((uint)uVar10 & 0x3f);
                    uVar10 = (uVar10 - uVar17) + 0x20;
                    puVar22 = puVar22 + 1;
                  }
                  else {
                    uVar13 = (ulonglong)(uVar12 >> (uVar21 & 0x3f));
                    uVar10 = uVar10 - uVar17;
                    uVar12 = uVar12 >> 1;
                  }
                  goto LAB_006039a0;
                }
              }
              pbVar24 = pbVar24 + -1;
              *pbVar24 = (char)(uVar16 + 3) * '\x04' + 3;
              uVar13 = uVar26;
            }
          }
LAB_00603734:
          puVar23 = puVar22;
          pbVar29 = pbVar28;
        } while (pbVar27 < pbVar28);
      }
      pbVar27 = pbVar24;
      lVar20 = lVar20 + -1;
      if (uVar19 == 1) goto LAB_00603b90;
      iVar18 = iVar18 >> 1;
      uVar11 = uVar11 + 1;
      uVar17 = uVar17 - 1;
    } while( true );
  }
  if ((int)uVar17 != 0) {
    pbVar28 = abStack_d6;
    pbVar27 = local_dc;
LAB_00603b90:
    uVar19 = (uint)uVar13;
    uVar25 = (uint)uVar10;
    pbVar24 = pbVar27;
    if (pbVar27 < pbVar28) {
      do {
        bVar1 = *pbVar24;
        uVar17 = (ulonglong)bVar1;
        pbVar29 = pbVar28;
        if (bVar1 == 0) {
LAB_00603bf4:
          pbVar24 = pbVar24 + 1;
        }
        else {
          if ((int)uVar10 == 0) {
            uVar10 = 0x1f;
            uVar13 = (ulonglong)*puVar22;
            puVar22 = puVar22 + 1;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar11 = uVar13 & 1;
          uVar13 = (uVar13 << 0x20) >> 0x21;
          if (uVar11 == 0) goto LAB_00603bf4;
          bVar8 = bVar1 & 3;
          if (bVar8 == 1) {
            pbVar29 = pbVar28 + 3;
            cVar3 = (char)(((uVar17 << 0x20) >> 0x22) << 2);
            *pbVar24 = cVar3 + 2;
            *pbVar28 = cVar3 + 0x12;
            pbVar28[1] = cVar3 + 0x22;
            pbVar28[2] = cVar3 + 0x32;
          }
          else {
            if ((bVar1 & 3) == 0) {
              uVar17 = (uVar17 << 0x20) >> 0x22;
              *pbVar24 = (char)(uVar17 << 2) + 0x11;
            }
            else {
              if (bVar8 != 2) {
                if (bVar8 == 3) {
                  if ((int)uVar10 == 0) {
                    uVar10 = 0x1f;
                    uVar13 = (ulonglong)*puVar22;
                    puVar22 = puVar22 + 1;
                  }
                  else {
                    uVar10 = uVar10 - 1;
                  }
                  uVar5 = (ushort)uVar13;
                  uVar13 = (uVar13 << 0x20) >> 0x21;
                  *(ushort *)((int)auStack_1a0 + (bVar1 >> 1 & 0x7e)) = -(uVar5 & 1) | 1;
                  *pbVar24 = 0;
                }
                goto LAB_00603bf4;
              }
              uVar17 = (uVar17 << 0x20) >> 0x22;
              *pbVar24 = 0;
              pbVar24 = pbVar24 + 1;
            }
            lVar20 = uVar10 - 1;
            if ((int)uVar10 == 0) {
              lVar20 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar10 = (ulonglong)(*puVar22 >> 1);
              if ((*puVar22 & 1) != 0) goto LAB_00603d98;
LAB_00603ec0:
              if ((int)lVar20 == 0) {
                lVar20 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar10 = (ulonglong)*puVar23;
              }
              else {
                lVar20 = lVar20 + -1;
                puVar22 = puVar23;
              }
              uVar5 = (ushort)uVar10;
              uVar10 = (uVar10 << 0x20) >> 0x21;
              *(ushort *)((int)auStack_1a0 + (int)(uVar17 << 1)) = -(uVar5 & 1) | 1;
            }
            else {
              uVar10 = (uVar13 << 0x20) >> 0x21;
              puVar23 = puVar22;
              if ((uVar13 & 1) == 0) goto LAB_00603ec0;
LAB_00603d98:
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 << 2) + 3;
              puVar22 = puVar23;
            }
            lVar14 = lVar20 + -1;
            puVar23 = puVar22;
            if ((int)lVar20 == 0) {
              lVar14 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar10 = (ulonglong)*puVar22;
            }
            uVar13 = (uVar10 << 0x20) >> 0x21;
            puVar22 = puVar23;
            if ((uVar10 & 1) == 0) {
              if ((int)lVar14 == 0) {
                lVar14 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar13 = (ulonglong)*puVar23;
              }
              else {
                lVar14 = lVar14 + -1;
              }
              uVar5 = (ushort)uVar13;
              uVar13 = (uVar13 << 0x20) >> 0x21;
              auStack_1a0[(int)(uVar17 + 1)] = -(uVar5 & 1) | 1;
            }
            else {
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 + 1) * '\x04' + 3;
            }
            lVar20 = lVar14 + -1;
            puVar23 = puVar22;
            if ((int)lVar14 == 0) {
              lVar20 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar13 = (ulonglong)*puVar22;
            }
            uVar11 = (uVar13 << 0x20) >> 0x21;
            puVar22 = puVar23;
            if ((uVar13 & 1) == 0) {
              if ((int)lVar20 == 0) {
                lVar20 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar11 = (ulonglong)*puVar23;
              }
              else {
                lVar20 = lVar20 + -1;
              }
              uVar5 = (ushort)uVar11;
              uVar11 = (uVar11 << 0x20) >> 0x21;
              auStack_1a0[(int)(uVar17 + 2)] = -(uVar5 & 1) | 1;
            }
            else {
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 + 2) * '\x04' + 3;
            }
            uVar10 = lVar20 - 1;
            puVar23 = puVar22;
            if ((int)lVar20 == 0) {
              uVar10 = 0x1f;
              puVar23 = puVar22 + 1;
              uVar11 = (ulonglong)*puVar22;
            }
            uVar13 = (uVar11 << 0x20) >> 0x21;
            puVar22 = puVar23;
            if ((uVar11 & 1) == 0) {
              if ((int)uVar10 == 0) {
                uVar10 = 0x1f;
                puVar22 = puVar23 + 1;
                uVar13 = (ulonglong)*puVar23;
              }
              else {
                uVar10 = uVar10 - 1;
              }
              uVar5 = (ushort)uVar13;
              uVar13 = (uVar13 << 0x20) >> 0x21;
              auStack_1a0[(int)(uVar17 + 3)] = -(uVar5 & 1) | 1;
            }
            else {
              pbVar27 = pbVar27 + -1;
              *pbVar27 = (char)(uVar17 + 3) * '\x04' + 3;
            }
          }
        }
        uVar19 = (uint)uVar13;
        uVar25 = (uint)uVar10;
        pbVar28 = pbVar29;
      } while (pbVar24 < pbVar29);
    }
  }
  param_2[2] = uVar25;
  param_2[1] = (uint)puVar22;
  *param_2 = uVar19;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


// 0x0604050 (0x34 bytes)
char * FUN_00604050(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    *param_1 = cVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    cVar1 = *param_2;
  }
  *param_1 = '\0';
  return param_1;
}


// 0x0604088 (0x70 bytes)
void FUN_00604088(uint *param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (((uint)param_1 & 2) != 0) {
    *(short *)param_1 = (short)param_2;
    param_3 = param_3 - 1;
    param_1 = (uint *)((int)param_1 + 2);
  }
  uVar1 = param_3 >> 1;
  puVar2 = param_1;
  uVar3 = uVar1;
  if (uVar1 != 0) {
    do {
      *puVar2 = (uint)((param_2 & 0xffffffff) << 0x10) | (uint)param_2;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    param_1 = param_1 + uVar1;
  }
  if ((param_3 & 1) != 0) {
    *(short *)param_1 = (short)param_2;
    return;
  }
  return;
}


// 0x06040f8 (0x24 bytes)
void FUN_006040f8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + param_3;
  if (puVar1 <= param_1) {
    return;
  }
  do {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return;
}


// 0x0604120 (0x30 bytes)
int FUN_00604120(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    sVar1 = *param_1;
  }
  return iVar2;
}


// 0x0604150 (0x5c bytes)
undefined4 FUN_00604150(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = uVar2;
  if (uVar2 == uVar1) {
    do {
      if (uVar3 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      uVar1 = *param_1;
      param_2 = param_2 + 1;
      uVar2 = *param_2;
      uVar3 = uVar1;
    } while (uVar1 == uVar2);
  }
  uVar4 = 0xffffffff;
  if ((uVar2 <= uVar1) && (uVar4 = 1, uVar1 <= uVar2)) {
    return 0;
  }
  return uVar4;
}


// 0x06041ac (0x94 bytes)
undefined4 FUN_006041ac(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    uVar1 = *param_2;
    uVar2 = *param_1;
    if (uVar1 == uVar2) {
      uVar5 = (ulonglong)param_3;
      uVar4 = 0;
      do {
        if (uVar2 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return 0;
        }
        iVar3 = (int)((uVar4 & 0xffffffff) << 1);
        uVar1 = *(ushort *)(iVar3 + (int)param_2);
        uVar2 = *(ushort *)(iVar3 + (int)param_1);
      } while (uVar2 == uVar1);
    }
    if (uVar2 < uVar1) {
      return 0xffffffff;
    }
    if (uVar1 < uVar2) {
      return 1;
    }
  }
  return 0;
}


// 0x0604240 (0x10 bytes)
void FUN_00604240(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006663e8;
  return;
}


// 0x0604250 (0x10 bytes)
void FUN_00604250(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006663e8;
  return;
}


// 0x0604260 (0x40 bytes)
void FUN_00604260(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006663e8;
    FUN_005e387c();
  }
  return;
}


// 0x06042a0 (0x40 bytes)
void FUN_006042a0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006663e8;
    FUN_005e387c();
  }
  return;
}


// 0x06042e0 (0x2c bytes)
void FUN_006042e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}


// 0x060430c (0x4 bytes)
void FUN_0060430c(void)

{
  return;
}


// 0x0604310 (0x4 bytes)
void FUN_00604310(void)

{
  return;
}


// 0x0604314 (0x10 bytes)
void FUN_00604314(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00666410;
  return;
}


// 0x0604324 (0x40 bytes)
void FUN_00604324(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00666410;
    FUN_005e387c();
  }
  return;
}


// 0x0604364 (0x8 bytes)
undefined8 FUN_00604364(void)

{
  return 0;
}


// 0x060436c (0xe0 bytes)
void FUN_0060436c(uint param_1,uint param_2,uint param_3)

{
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  
  auVar2 = *(undefined1 (*) [16])(param_3 & 0xfffffff0);
  auVar10 = ZEXT416(0);
  auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar2 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar4 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar12 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar11);
  auVar10 = auVar2 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11);
  auVar2 = auVar2 & (GPiece<16>)0xffffffff;
  auVar14 = *(undefined1 (*) [16])(param_3 + 0x10 & 0xfffffff0);
  auVar18 = *(undefined1 (*) [16])(param_3 + 0x20 & 0xfffffff0);
  auVar6 = auVar14 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar3 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar20 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar21 = *(undefined1 (*) [16])(param_3 + 0x30 & 0xfffffff0);
  auVar5 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11);
  auVar6 = auVar18 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar13 = auVar14 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar8 = vectorMultiplyAddFloatingPoint
                     (auVar1,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar7);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar20,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar9);
  auVar14 = auVar14 & (GPiece<16>)0xffffffff;
  auVar10 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar4,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar11);
  auVar2 = auVar21 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar4,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar11);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar11);
  auVar6 = auVar18 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar18 = auVar18 & (GPiece<16>)0xffffffff;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar11);
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar12,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar11);
  auVar10 = auVar21 & (GPiece<16>)0xffffffff;
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar20,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar17)
  ;
  auVar2 = auVar21 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar3 = vectorAddFloatingPoint(auVar8,auVar7);
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar1,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar15);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar1,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,auVar16);
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar19
                      );
  auVar6 = vectorMultiplyAddFloatingPoint
                     (auVar1,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar5);
  auVar10 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar4)
  ;
  auVar5 = vectorAddFloatingPoint(auVar7,auVar9);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar3;
  auVar2 = vectorAddFloatingPoint(auVar14,auVar13);
  auVar10 = vectorAddFloatingPoint(auVar6,auVar10);
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar5;
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar10;
  return;
}


// 0x060444c (0x128 bytes)
void FUN_0060444c(void)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  RenderingStep *pRVar3;
  RsxCmd *pRVar4;
  RsxCmd *pRVar5;
  RsxCmd *pRVar6;
  longlong lVar7;
  RsxCmd local_20 [8];
  
  pRVar3 = ForwardPass;
  pRVar4 = local_20;
  lVar7 = 4;
  *ForwardPass->command = NV4097_SET_OBJECT_x8|NV4097_SET_TRANSFORM_CONSTANT_LOAD_x1;
  pRVar3->command[1] = 8;
  pRVar6 = pRVar3->command + 2;
  pRVar3->command = pRVar6;
  pRVar5 = pRVar4;
  do {
    *pRVar6 = *pRVar5;
    pRVar6 = pRVar3->command;
    pRVar3->command = pRVar6 + 1;
    pRVar1 = pRVar5 + 1;
    pRVar5 = pRVar5 + 2;
    pRVar6[1] = *pRVar1;
    pRVar6 = pRVar3->command + 1;
    pRVar3->command = pRVar6;
    pRVar2 = DepthPass;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 4;
  *DepthPass->command = NV4097_SET_OBJECT_x8|NV4097_SET_TRANSFORM_CONSTANT_LOAD_x1;
  pRVar2->command[1] = 8;
  pRVar5 = pRVar2->command + 2;
  pRVar2->command = pRVar5;
  do {
    *pRVar5 = *pRVar4;
    pRVar5 = pRVar2->command;
    pRVar2->command = pRVar5 + 1;
    pRVar6 = pRVar4 + 1;
    pRVar4 = pRVar4 + 2;
    pRVar5[1] = *pRVar6;
    pRVar5 = pRVar2->command + 1;
    pRVar2->command = pRVar5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}


