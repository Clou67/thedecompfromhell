// game/update/moby111.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x1ce3f0-0x1d058c
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby111.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1017.h"
#include "game/update/moby1109.h"
#include "game/update/moby224.h"
#include "idol/fastfunc.h"

// 0x01ce3f0 (0x120 bytes)
double M1109_001ce3f0
                 (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = 25.132741928100586;
  dVar1 = 6.2831854820251465;
  OrganicDeltAngSpeed
            (param_1,(double)(g_FrameTimeSq * 25.132742),(double)(g_FrameTimeSq * 6.2831855),
             (double)(g_FrameTime * 25.132742),param_3,param_4,param_4 + 0x88);
  dVar1 = (double)MB_DeltAngSpeed
                            ((double)*(float *)(param_3 + 0x44),param_2,
                             (double)(float)((double)g_FrameTimeSq * dVar2),
                             (double)(float)((double)g_FrameTimeSq * dVar1),
                             (double)(float)((double)g_FrameTime * dVar2));
  *(float *)(param_3 + 0x44) = (float)dVar1;
  fVar3 = *(float *)(param_3 + 0x40) +
          -(*(float *)(param_4 + 0x88) * (1.5707964 - ABS(*(float *)(param_3 + 0x40))) * 0.63661975)
  ;
  if (1.5707964 - fVar3 < 0.0) {
    fVar3 = 1.5707964;
  }
  if (fVar3 - -1.5707964 < 0.0) {
    fVar3 = -1.5707964;
  }
  *(float *)(param_3 + 0x40) = fVar3 * 0.98;
  fVar3 = MB_WrapRot(fVar3 * 0.98);
  return (double)fVar3;
}


// 0x01ce520 (0x208 bytes)
longlong M1109_001ce520
                   (double param_1,float *param_2,uint *param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar6 = 0;
  dVar10 = 99999997952.0;
  uVar2 = *param_3;
  lVar5 = param_4;
  if (0 < (int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0))) {
    dVar11 = 0.4000000059604645;
    dVar12 = 0.10000000149011612;
    do {
      iVar3 = iVar6 + (int)param_4;
      lVar4 = (longlong)(int)(iVar3 - (iVar3 / (int)uVar2) * uVar2);
      pfVar1 = (float *)((int)param_3 + (int)(lVar4 << 4) + 0x10);
      dVar9 = (double)SQRT((pfVar1[2] - param_2[2]) * (pfVar1[2] - param_2[2]) +
                           (*pfVar1 - *param_2) * (*pfVar1 - *param_2) +
                           (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]));
      dVar8 = ABS((double)(float)(dVar9 - param_1));
      dVar7 = (double)FastIntToDouble(iVar6);
      dVar8 = (double)(float)(dVar7 * dVar11 + dVar8);
      dVar7 = (double)FastIntToDouble(iVar6);
      uVar2 = *param_3;
      if (dVar8 < (double)(float)(dVar7 * dVar12 + dVar10)) {
        lVar5 = lVar4;
        dVar10 = dVar9;
      }
      iVar3 = (uVar2 + (int)param_4) - iVar6;
      lVar4 = (longlong)(int)(iVar3 - (iVar3 / (int)uVar2) * uVar2);
      pfVar1 = (float *)((int)param_3 + (int)(lVar4 << 4) + 0x10);
      dVar9 = (double)SQRT((pfVar1[2] - param_2[2]) * (pfVar1[2] - param_2[2]) +
                           (*pfVar1 - *param_2) * (*pfVar1 - *param_2) +
                           (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]));
      dVar8 = ABS((double)(float)(dVar9 - param_1));
      dVar7 = (double)FastIntToDouble(iVar6);
      uVar2 = *param_3;
      if ((double)(float)(dVar7 * dVar11 + dVar8) < dVar10) {
        lVar5 = lVar4;
        dVar10 = dVar9;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)));
  }
  return lVar5;
}


// 0x01ce738 (0x63c bytes)
// inlined: FastAtan2 @0x1cea94, FastAtan2 @0x1cec40
bool M1109_001ce738(int param_1,int param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  short sVar17;
  longlong lVar16;
  float *pfVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong unaff_r31;
  bool bVar21;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x100;
  puVar11 = (ulonglong *)lVar14;
  *puVar11 = uVar12;
  puVar11[0x22] = in_LR;
  puVar11[0x1a] = in_f26;
  puVar11[0x1b] = in_f27;
  puVar11[0x1c] = in_f28;
  puVar11[0x1d] = in_f29;
  puVar11[0x1e] = in_f30;
  puVar11[0x1f] = in_f31;
  sVar17 = *(short *)(param_2 + 0xb4);
  dVar25 = (double)*(float *)(param_1 + 0x14);
  iVar9 = (int)((longlong)*(short *)(param_2 + 0xb6) << 4);
  pSVar10 = Splines[*(int *)(param_2 + 0xa0)];
  dVar24 = (double)*(float *)(param_1 + 0x10);
  iVar20 = (int)((longlong)sVar17 << 4);
  dVar23 = (double)*(float *)((int)&pSVar10->points[0].y + iVar9);
  dVar26 = (double)*(float *)((int)&pSVar10->points[0].x + iVar9);
  dVar30 = (double)*(float *)((int)&pSVar10->points[0].z + iVar9);
  fVar1 = (float)(dVar23 - dVar25);
  fVar2 = (float)(dVar26 - dVar24);
  fVar3 = (float)(dVar23 - (double)*(float *)((int)&pSVar10->points[0].y + iVar20));
  fVar4 = (float)(dVar26 - (double)*(float *)((int)&pSVar10->points[0].x + iVar20));
  dVar23 = (double)*(float *)(param_1 + 0x18);
  fVar5 = (float)(dVar30 - dVar23);
  fVar6 = (float)(dVar30 - (double)*(float *)((int)&pSVar10->points[0].z + iVar20));
  puVar11[0x19] = unaff_r31;
  bVar21 = false;
  dVar26 = 0.0;
  fVar1 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar2 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar3 = fVar2 - fVar1;
  if (((0.0 <= fVar3) && (fVar4 = *(float *)(param_2 + 0xcc), fVar3 < fVar4)) ||
     (fVar4 = *(float *)(param_2 + 0xcc), fVar2 < fVar4)) {
    *(short *)(param_2 + 0xb6) = sVar17;
    iVar9 = pSVar10->cnt;
    sVar17 = sVar17 + *(char *)(param_2 + 0xd0);
    iVar20 = (int)sVar17;
    *(short *)(param_2 + 0xb4) = sVar17;
    if (iVar9 <= iVar20) {
      sVar17 = 0;
      *(undefined2 *)(param_2 + 0xb4) = 0;
    }
    bVar21 = sVar17 < 0;
    if (bVar21) {
      sVar17 = (short)iVar9 + -1;
      *(short *)(param_2 + 0xb4) = sVar17;
    }
    bVar21 = bVar21 || iVar9 <= iVar20;
    dVar30 = dVar26;
  }
  else {
    dVar30 = (double)(fVar1 / fVar2);
  }
  iVar9 = (int)((longlong)sVar17 << 4);
  fVar1 = (float)((double)*(float *)((int)&pSVar10->points[0].y + iVar9) - dVar25);
  fVar2 = (float)((double)*(float *)((int)&pSVar10->points[0].x + iVar9) - dVar24);
  fVar3 = (float)((double)*(float *)((int)&pSVar10->points[0].z + iVar9) - dVar23);
  if (dVar30 - 0.05000000074505806 < 0.0) {
    dVar30 = 0.05000000074505806;
  }
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (1.0 - dVar30 < 0.0) {
    dVar30 = 1.0;
  }
  fVar6 = (float)(1.0 - dVar30);
  fVar7 = fVar4 / fVar5;
  dVar28 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  dVar29 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  dVar27 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar27 = (double)(fVar3 * fVar7);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar27 = (double)(fVar3 * fVar7);
  }
  fVar1 = *(float *)(param_2 + 0x74) * fVar6 + (float)(dVar28 * dVar30);
  fVar3 = *(float *)(param_2 + 0x70) * fVar6 + (float)(dVar29 * dVar30);
  fVar2 = *(float *)(param_2 + 0x78) * fVar6 + (float)(dVar27 * dVar30);
  fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar4 = fVar4 / fVar5;
  dVar30 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar30 = (double)(fVar3 * fVar4);
  }
  dVar28 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar1 * fVar4);
  }
  dVar29 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar29 = (double)(fVar2 * fVar4);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar30 = (double)(fVar3 * fVar4);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar4);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar29 = (double)(fVar2 * fVar4);
  }
  fVar1 = (float)(dVar24 + dVar30);
  fVar2 = (float)(dVar25 + dVar28);
  *(float *)(param_2 + 0x70) = (float)dVar30;
  *(float *)(param_2 + 0x74) = (float)dVar28;
  *(float *)(param_2 + 0x78) = (float)dVar29;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar2;
  *(float *)(param_1 + 0x18) = (float)(dVar23 + dVar29);
  fVar4 = g_heroPosition.y;
  fVar3 = g_heroPosition.x;
  if (param_3 != '\0') {
    fVar5 = g_heroPosition.y - fVar2;
    fVar7 = ABS(g_heroPosition.x - fVar1);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar11 + 0x7c) = g_heroPosition.x - fVar1;
    *(float *)(puVar11 + 0x10) = fVar5;
    *(float *)((int)puVar11 + 0x84) = fVar7 - fVar6;
    uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)((int)puVar11 + 0x7c));
    if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar8 = ABS(*(float *)(puVar11 + 0x10));
    if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
      fVar8 = fVar7;
    }
    fVar7 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (0.0 < fVar5) {
      lVar13 = uVar12 - 0xf0;
      lVar16 = uVar12 - 0x48;
      lVar15 = uVar12 - 0x58;
      lVar22 = 2;
      fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
      fVar8 = fVar5 * fVar5;
      *(float *)((int)puVar11 + 0xb4) = fVar5;
      *(float *)((int)puVar11 + 0xac) = fVar5;
      *(float *)(puVar11 + 0x16) = fVar5;
      *(float *)(puVar11 + 0x15) = fVar5;
      fVar5 = fVar8 * fVar8;
      *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar8;
      *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar5;
      *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar5 * fVar8;
      do {
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar5 * fVar5;
        iVar9 = (int)lVar15;
        lVar15 = lVar15 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar16 = uVar12 - 0x58;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar5 = *pfVar18;
        fVar8 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar5;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar8;
        lVar15 = lVar15 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar15 = 2;
      lVar13 = lVar14;
      do {
        iVar9 = (int)lVar13;
        iVar20 = (int)lVar16;
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0xa8)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar7);
    }
    fVar5 = g_heroPosition.z - (float)(dVar23 + dVar29);
    fVar1 = SQRT((fVar1 - fVar3) * (fVar1 - fVar3) + (fVar2 - fVar4) * (fVar2 - fVar4));
    *(float *)((int)puVar11 + 0x74) = fVar5;
    fVar5 = ABS(fVar5);
    fVar2 = ABS(fVar1);
    *(float *)(puVar11 + 0xe) = fVar1;
    *(float *)(puVar11 + 0xf) = fVar2 - fVar5;
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar11 + 0xe));
    if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar4 = ABS(*(float *)((int)puVar11 + 0x74));
    if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar1) {
      lVar13 = uVar12 - 0xf0;
      lVar15 = uVar12 - 0x78;
      lVar16 = uVar12 - 0x68;
      lVar22 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)((int)puVar11 + 0x94) = fVar1;
      *(float *)((int)puVar11 + 0x8c) = fVar1;
      *(float *)(puVar11 + 0x12) = fVar1;
      *(float *)(puVar11 + 0x11) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar4;
      *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar1;
      *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar1 * fVar1;
        iVar9 = (int)lVar15;
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar16 = uVar12 - 0x78;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar1 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar1;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
        lVar15 = lVar15 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar20 = (int)lVar16;
        lVar14 = lVar14 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0x88)) +
                          *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc)
                         );
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar2);
    }
    M1109_001ce3f0(dVar24,-dVar26);
  }
  return bVar21;
}


// 0x01ced74 (0x100 bytes)
void M1109_001ced74(double param_1,float *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_0096b2d0 == 0) {
    *param_2 = g_heroPosition.x;
    param_2[1] = g_heroPosition.y;
    param_2[2] = g_heroPosition.z;
    param_2[3] = g_heroPosition.w;
  }
  else {
    iVar1 = *(int *)(DAT_0096b2d0 + 0x78);
    dVar2 = (double)FastWrapRot(*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar1 + 0x90));
    dVar3 = (double)FastWrapRot(*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar1 + 0x94));
    MB_SphericalToVector
              ((float)(param_1 * (double)*(float *)(iVar1 + 100)),(float)dVar2,(float)-dVar3,param_2
              );
    iVar1 = DAT_0096b2d0;
    *param_2 = *param_2 + *(float *)(DAT_0096b2d0 + 0x10);
    param_2[1] = param_2[1] + *(float *)(iVar1 + 0x14);
    param_2[2] = param_2[2] + *(float *)(iVar1 + 0x18);
  }
  return;
}


// 0x01ceea0 (0x5d0 bytes)
undefined8 M111_001ceea0(int param_1,int param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  Spline *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  longlong lVar12;
  int iVar14;
  undefined8 uVar13;
  MobyInstance *pMVar15;
  longlong lVar16;
  char cVar17;
  longlong lVar18;
  int iVar19;
  double dVar20;
  float local_50;
  float local_4c;
  float local_48;
  
  pSVar7 = Splines[*(int *)(param_2 + 0xa0)];
  if (pSVar7 == (Spline *)0x0) {
    return 0;
  }
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    if ((*(int *)(param_2 + 0xbc) == -1) ||
       ((pMVar15 = g_MobyInstance + *(int *)(param_2 + 0xbc), pMVar15 == (MobyInstance *)0x0 ||
        (pMVar15->state == 0xfd || pMVar15->state == 0xfe)))) {
      local_50 = g_heroPosition.x;
      local_4c = g_heroPosition.y;
      local_48 = g_heroPosition.z;
    }
    else {
      local_50 = (pMVar15->pos).x;
      local_4c = (pMVar15->pos).y;
      local_48 = (pMVar15->pos).z;
    }
  }
  else if (((*(int *)(param_2 + 0xbc) == -1) ||
           (pMVar15 = g_MobyInstance + *(int *)(param_2 + 0xbc), pMVar15 == (MobyInstance *)0x0)) ||
          (pMVar15->state == 0xfd || pMVar15->state == 0xfe)) {
    M1109_001ced74(0x4061800000000000,&local_50);
  }
  else {
    fVar2 = (*(float *)(DAT_0096b2d0 + 0x14) - (pMVar15->pos).y) * 0.5;
    fVar1 = (*(float *)(DAT_0096b2d0 + 0x10) - (pMVar15->pos).x) * 0.5;
    fVar3 = (*(float *)(DAT_0096b2d0 + 0x18) - (pMVar15->pos).z) * 0.5;
    fVar8 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    if (100.0 < fVar8) {
      fVar8 = 100.0 / fVar8;
      fVar1 = fVar1 * fVar8;
      fVar2 = fVar2 * fVar8;
      fVar3 = fVar3 * fVar8;
    }
    local_50 = fVar1 + (pMVar15->pos).x;
    local_4c = fVar2 + (pMVar15->pos).y;
    local_48 = fVar3 + (pMVar15->pos).z;
  }
  lVar12 = M1109_001ce520(0,&local_50,pSVar7,*(undefined2 *)(param_2 + 0xb4));
  uVar6 = pSVar7->cnt;
  lVar16 = lVar12 + 5;
  lVar18 = lVar16 - (ulonglong)uVar6;
  lVar18 = lVar18 + ((longlong)(int)lVar16 - (longlong)(int)uVar6 >> 0x3f & lVar16 - lVar18);
  iVar19 = (int)lVar18;
  lVar12 = lVar12 + -5 + ((longlong)(int)(lVar12 + -5) >> 0x3f & (ulonglong)uVar6);
  iVar14 = (int)lVar12;
  fVar1 = pSVar7->points[iVar19].y - g_heroPosition.y;
  fVar3 = pSVar7->points[iVar19].x - g_heroPosition.x;
  fVar9 = pSVar7->points[iVar19].z - g_heroPosition.z;
  fVar2 = pSVar7->points[iVar14].y - g_heroPosition.y;
  fVar8 = pSVar7->points[iVar14].x - g_heroPosition.x;
  fVar10 = pSVar7->points[iVar14].z - g_heroPosition.z;
  sVar4 = *(short *)(param_2 + 0xb4);
  fVar1 = SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar2 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar2 * fVar2);
  cVar17 = *(char *)(param_2 + 0xd0);
  if (fVar1 <= fVar2) {
    if (fVar2 <= fVar1) {
      if (cVar17 == '\x01') {
        lVar16 = 1;
        lVar12 = lVar18;
      }
      else {
        lVar16 = -1;
      }
    }
    else {
      lVar16 = -1;
    }
  }
  else {
    lVar16 = 1;
    lVar12 = lVar18;
  }
  iVar19 = 0;
  while( true ) {
    iVar14 = (int)(lVar12 << 4);
    fVar1 = *(float *)((int)&pSVar7->points[0].y + iVar14);
    fVar2 = *(float *)((int)&pSVar7->points[0].x + iVar14);
    fVar9 = local_4c - fVar1;
    fVar3 = *(float *)((int)&pSVar7->points[0].z + iVar14);
    fVar8 = local_50 - fVar2;
    fVar10 = local_48 - fVar3;
    if ((int)uVar6 <= iVar19 || 30.0 <= SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9))
    break;
    iVar19 = iVar19 + 1;
    lVar12 = (lVar16 + lVar12) -
             (longlong)((int)(lVar16 + lVar12) / (int)uVar6) * (longlong)(int)uVar6;
  }
  fVar1 = *(float *)(param_1 + 0x14) - fVar1;
  fVar2 = *(float *)(param_1 + 0x10) - fVar2;
  iVar19 = (int)lVar12;
  fVar3 = *(float *)(param_1 + 0x18) - fVar3;
  lVar12 = ((longlong)(sVar4 - iVar19) - (longlong)(int)((uVar6 - (int)sVar4) + iVar19) >> 0x3f &
           0xfffffffffffffffeU) + 1;
  lVar12 = lVar12 + ((longlong)sVar4 - (longlong)iVar19 >> 0x3f &
                    (((longlong)(iVar19 - sVar4) - (longlong)(int)((uVar6 - iVar19) + (int)sVar4) >>
                      0x3f & 2U) - 1) - lVar12);
  iVar19 = (int)lVar12;
  dVar20 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (iVar19 != cVar17) {
    iVar14 = FastDecTimerS16(param_2 + 0xd2);
    cVar17 = *(char *)(param_2 + 0xd0);
    if (iVar14 != 0) {
      *(undefined2 *)(param_2 + 0xd2) = 10;
      bVar11 = false;
      fVar1 = *(float *)(param_2 + 0xcc) * (DAT_0071f408 * -0.04000002 + 1.0);
      *(float *)(param_2 + 0xcc) = fVar1;
      if ((fVar1 < DAT_0071f408 * 0.1) || (*(char *)(param_1 + 0x31) == '\0')) {
        bVar11 = true;
      }
      fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
      fVar2 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
      if (bVar11 || SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 40.0) {
        uVar5 = *(undefined2 *)(param_2 + 0xb4);
        *(char *)(param_2 + 0xd0) = (char)lVar12;
        *(undefined2 *)(param_2 + 0xb4) = *(undefined2 *)(param_2 + 0xb6);
        *(undefined2 *)(param_2 + 0xb6) = uVar5;
      }
      goto LAB_001cf42c;
    }
  }
  if (iVar19 == cVar17) {
    fVar1 = (float)((double)(DAT_0071f408 * 0.07) *
                    (double)(float)(dVar20 * 0.01666666753590107 -
                                   (double)*(float *)(param_2 + 0xcc)) +
                   (double)*(float *)(param_2 + 0xcc));
    *(float *)(param_2 + 0xcc) = fVar1;
    if (g_FrameTime * 100.0 < fVar1) {
      *(float *)(param_2 + 0xcc) = g_FrameTime * 100.0;
    }
  }
LAB_001cf42c:
  uVar13 = M1109_001ce738(param_1,param_2,param_3);
  return uVar13;
}


// 0x01cf4f0 (0x109c bytes)
// strings: 00654690: 'no path for moby 111 #%d: killing\n'

/* Moby 111 */

void UpdateMoby_111(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  u8 uVar3;
  char cVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  MobyClass *pMVar10;
  u16 *puVar11;
  void *pvVar12;
  Spline *pSVar13;
  Spline *pSVar14;
  uint uVar15;
  undefined4 uVar16;
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
  bool bVar28;
  float fVar29;
  int iVar30;
  MobyInstance *pMVar31;
  int iVar32;
  short sVar33;
  byte bVar34;
  Spline *spline;
  int iVar35;
  ulonglong uVar36;
  undefined8 in_LR;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  Vec4 local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  char local_c4 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  f32 local_b4;
  longlong local_b0;
  
  iVar30 = DAT_0096b2d0;
  iVar35 = 0;
  pvVar9 = moby->pVar;
  uVar36 = ZEXT48(pvVar9);
  uVar3 = moby->state;
  bVar28 = false;
  iVar32 = *(int *)((int)pvVar9 + 0xa0);
  spline = (Spline *)0x0;
  if (iVar32 != -1) {
    spline = Splines[iVar32];
  }
  if (uVar3 == '\x04') {
    if ((((*(int *)((int)pvVar9 + 0xbc) != -1) &&
         (pMVar31 = g_MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 != (MobyInstance *)0x0)) &&
        (pMVar31->state != 0xfd && pMVar31->state != 0xfe)) && (pMVar31->setByGroup != '\x04')) {
      auVar47 = ZEXT416(0xfffffff0);
      auVar48 = loadVectorLeftIndexed(0x24,uVar36);
      auVar49 = loadVectorRightIndexed(0x34,uVar36);
      auVar47 = vectorShiftRightAlgebraicWord
                          (auVar48 | auVar49,
                           auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      auVar47 = vectorConvertFromSignedFixedPointWord(auVar47,0);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x20,uVar36)
      ;
      *(undefined4 *)((int)pvVar9 + 0x20U & 0xfffffffc) = uVar16;
      moby->state = '\0';
    }
  }
  else if (uVar3 == '\x03') {
    iVar32 = *(int *)((int)pvVar9 + 0xd4);
    if (iVar32 != -1) {
      if (((iVar32 != -1) && (g_SoundChannels[iVar32].pMoby == moby)) &&
         (g_SoundChannels[iVar32].state != '\0')) {
        sound_Kill(iVar32);
      }
      *(undefined4 *)((int)pvVar9 + 0xd4) = 0xffffffff;
    }
    local_d0 = GameCamera.posX - (moby->pos).x;
    local_cc = GameCamera.posY - (moby->pos).y;
    local_c8 = GameCamera.posZ - (moby->pos).z;
    local_c4[0] = ((u8 *)&GameCamera.posW)[0];
    local_c4[1] = ((u8 *)&GameCamera.posW)[1];
    local_c4[2] = ((u8 *)&GameCamera.posW)[2];
    local_c4[3] = ((u8 *)&GameCamera.posW)[3];
    dVar45 = 0.0;
    dVar43 = 4.0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
               0x4034000000000000,moby,&local_d0,0,1,0xffffffffffffffff,5,3,10);
    local_b4 = (moby->pos).w;
    dVar44 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
    fVar5 = (float)(dVar43 / dVar44);
    dVar43 = dVar45;
    if (dVar45 - dVar44 < 0.0) {
      dVar43 = (double)(local_d0 * fVar5);
    }
    dVar46 = dVar45;
    if (dVar45 - dVar44 < 0.0) {
      dVar46 = (double)(local_cc * fVar5);
    }
    dVar41 = dVar45;
    if (dVar45 - dVar44 < 0.0) {
      dVar41 = (double)(local_c8 * fVar5);
    }
    if (dVar44 - dVar45 < 0.0) {
      dVar43 = (double)(local_d0 * fVar5);
    }
    if (dVar44 - dVar45 < 0.0) {
      dVar46 = (double)(local_cc * fVar5);
    }
    if (dVar44 - dVar45 < 0.0) {
      dVar41 = (double)(local_c8 * fVar5);
    }
    local_c0 = (float)((double)(moby->pos).x - dVar43);
    local_bc = (float)((double)(moby->pos).y - dVar46);
    local_b8 = (float)((double)(moby->pos).z - dVar41);
    local_d0 = *(float *)((int)pvVar9 + 0x70) * 0.5;
    local_cc = *(float *)((int)pvVar9 + 0x74) * 0.5;
    local_c8 = *(float *)((int)pvVar9 + 0x78) * 0.5;
    local_c4 = *(char (*) [4])((int)pvVar9 + 0x7c);
    iVar32 = rand();
    iVar32 = iVar32 % 10;
    if (iVar32 < 1) {
      if (-1 < iVar32) {
        FUN_002f9610(&local_c0,0xe0);
      }
    }
    else if (iVar32 < 7) {
      FUN_002f9610(&local_c0,0xe4);
    }
    if (((*(int *)((int)pvVar9 + 0xbc) != -1) &&
        (pMVar31 = g_MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 != (MobyInstance *)0x0)) &&
       ((pMVar31->state != 0xfd && pMVar31->state != 0xfe &&
        ((pMVar31 != (MobyInstance *)0x0 &&
         (cVar4 = *(char *)((int)pMVar31->pVar + 0x10e), cVar4 != '\0')))))) {
      *(char *)((int)pMVar31->pVar + 0x10e) = cVar4 + -1;
    }
    moby->collision = (ushort *)0x0;
    moby->state = '\x04';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  else {
    if (uVar3 == '\x02') {
      M111_001ce130(moby,uVar36,uVar36 + 0x20);
      dVar46 = (double)g_heroPosition.x;
      dVar45 = (double)g_heroPosition.y;
      dVar44 = (double)g_heroPosition.z;
      dVar43 = (double)g_heroPosition.w;
      if ((iVar30 != 0) && (*(char *)(iVar30 + 0x20) != -3 && *(char *)(iVar30 + 0x20) != -2)) {
        bVar28 = false;
        dVar45 = (double)*(float *)(DAT_0096b2d0 + 0x14);
        dVar46 = (double)*(float *)(DAT_0096b2d0 + 0x10);
        fVar5 = (float)((double)(moby->pos).y - dVar45);
        dVar44 = (double)*(float *)(DAT_0096b2d0 + 0x18);
        fVar1 = (float)((double)(moby->pos).x - dVar46);
        fVar2 = (float)((double)(moby->pos).z - dVar44);
        iVar35 = *(int *)(iVar30 + 0x78);
        dVar43 = (double)*(float *)(DAT_0096b2d0 + 0x1c);
        if ((g_heroState == TURRET_PLANE_UI) &&
           (((*(short *)(iVar30 + 0xa6) == 0x45 || (*(short *)(iVar30 + 0xa6) == 0x4da)) &&
            (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar5 * fVar5) < 110.0)))) {
          bVar28 = true;
        }
      }
      if (moby->enabled == '\0') {
        *(int *)((int)pvVar9 + 0xa8) = *(int *)((int)pvVar9 + 0xa8) + 1;
      }
      else if (bVar28) {
        *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
      }
      if ((*(int *)((int)pvVar9 + 0xbc) != -1) &&
         (pMVar31 = g_MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 != (MobyInstance *)0x0)) {
        uVar3 = pMVar31->state;
        if ((((uVar3 != 0xfd && uVar3 != 0xfe) &&
             ((pvVar12 = pMVar31->pVar, pMVar31 != (MobyInstance *)0x0 && (uVar3 != 0xfe)))) &&
            (uVar3 != 0xfd)) && (uVar3 != '\x01')) {
          iVar32 = *(int *)((int)pvVar9 + 0xd4);
          if (((iVar32 == -1) || (g_SoundChannels[iVar32].pMoby != moby)) ||
             (g_SoundChannels[iVar32].state == '\0')) {
            *(undefined4 *)((int)pvVar9 + 0xd4) = 0xffffffff;
            iVar32 = PlayMobySound(1,4,moby);
            *(int *)((int)pvVar9 + 0xd4) = iVar32;
          }
          M111_001ceea0(moby,uVar36,1);
          bVar34 = moby->setByGroup;
          if (bVar34 == 0) {
            if ((((iVar35 != 0) && (*(char *)(iVar30 + 0x20) == '\x04')) &&
                (bVar28 && moby->enabled != '\0')) && (*(byte *)((int)pvVar12 + 0x10f) < 3)) {
              auVar47 = ZEXT416(0xffffffff);
              auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
              auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
              auVar47 = loadVectorLeftIndexed(0x10,0x1cf470);
              auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar47 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                           auVar47 << 0x60,auVar48);
              auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
              auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar16 = storeVectorElementWordIndexed
                                 (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0xb8
                                  ,uVar36);
              *(undefined4 *)((int)pvVar9 + 0xb8U & 0xfffffffc) = uVar16;
              *(undefined4 *)((int)pvVar9 + 0xa8) = 0;
              *(undefined4 *)((int)pvVar9 + 0xac) = 0x3f800000;
              moby->setByGroup = '\x01';
            }
          }
          else if (bVar34 < 2) {
            bVar34 = *(char *)((int)pvVar12 + 0x10f) + 1;
            *(byte *)((int)pvVar12 + 0x10f) = bVar34;
            if (bVar34 < 4) {
              cVar4 = moby->enabled;
              if (cVar4 == '\0') {
                *(int *)((int)pvVar9 + 0xa8) = *(int *)((int)pvVar9 + 0xa8) + 1;
                cVar4 = moby->enabled;
              }
              if ((!bVar28 || cVar4 == '\0') ||
                 (local_b0 = (longlong)(int)(animationSpeed * 20.5),
                 (int)(animationSpeed * 20.5) <= *(int *)((int)pvVar9 + 0xa8))) {
                auVar47 = ZEXT416(0xffffffff);
                auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
                auVar47 = loadVectorLeftIndexed(0x14,0x1cf470);
                auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar47 = vectorMultiplyAddFloatingPoint
                                    (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                             auVar47 << 0x60,auVar48);
                auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
                auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar16 = storeVectorElementWordIndexed
                                   (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                                    0xb8,uVar36);
                *(undefined4 *)((int)pvVar9 + 0xb8U & 0xfffffffc) = uVar16;
                moby->setByGroup = '\x02';
              }
              iVar32 = FastDecTimerS32(uVar36 + 0xb8);
              if (iVar32 != 0) {
                auVar47 = ZEXT416(0xffffffff);
                auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
                auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
                auVar47 = loadVectorLeftIndexed(0x18,0x1cf470);
                auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar47 = vectorMultiplyAddFloatingPoint
                                    (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                             auVar47 << 0x60,auVar48);
                auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
                auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar16 = storeVectorElementWordIndexed
                                   (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                                    0xb8,uVar36);
                *(undefined4 *)((int)pvVar9 + 0xb8U & 0xfffffffc) = uVar16;
                moby->setByGroup = '\x02';
              }
              iVar32 = FastDecTimerS32(uVar36 + 0xa4);
              if (((iVar32 != 0) &&
                  ((int)(FLOAT_ORDER(g_FrameLoad)) < 0x3f666666)) &&
                 ((int)(FLOAT_ORDER(g_PerfLoad)) < 0x3f666666)) {
                fVar5 = animationSpeed * 6.5;
                local_b0 = (longlong)(int)fVar5;
                iVar32 = FastDoubleToInt((double)((g_PerfLoad + g_FrameLoad) * 1.3));
                *(int *)((int)pvVar9 + 0xa4) = (int)fVar5 + iVar32;
                if (iVar35 != 0) {
                  fVar5 = *(float *)(iVar35 + 0x10);
                  fVar7 = *(float *)(iVar35 + 0x18) * fVar5;
                  fVar1 = *(float *)((int)pvVar9 + 0xb0);
                  fVar2 = *(float *)(iVar35 + 0x14);
                  fVar17 = fVar2 * *(float *)(iVar35 + 0x18);
                  fVar23 = fVar1 + 1.5707963;
                  fVar19 = -fVar17;
                  fVar21 = 3.1415925 - fVar1;
                  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
                    fVar21 = fVar1;
                  }
                  fVar18 = fVar5 * fVar5 - -(fVar2 * fVar2);
                  fVar20 = -3.1415925 - fVar1;
                  if ((-3.1415925 - fVar1) - fVar21 < 0.0) {
                    fVar20 = fVar21;
                  }
                  fVar1 = 3.1415925 - fVar23;
                  if (fVar23 - (3.1415925 - fVar23) < 0.0) {
                    fVar1 = fVar23;
                  }
                  fVar21 = fVar20 * fVar20;
                  uVar42 = 0x4014000000000000;
                  fVar27 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + --(fVar7 * fVar7));
                  dVar41 = 0.0;
                  local_e4 = (float)dVar43;
                  fVar29 = *(float *)((int)pvVar9 + 0xac) * 5.0;
                  fVar22 = fVar21 * fVar21 * fVar20;
                  fVar19 = -3.1415925 - fVar23;
                  if ((-3.1415925 - fVar23) - fVar1 < 0.0) {
                    fVar19 = fVar1;
                  }
                  fVar26 = SQRT(fVar5 * fVar5 + --(fVar2 * fVar2));
                  fVar23 = fVar21 * fVar22;
                  fVar1 = fVar19 * fVar19;
                  fVar24 = fVar1 * fVar1 * fVar19;
                  fVar25 = fVar1 * fVar24;
                  fVar21 = (fVar29 * (fVar21 * fVar23 * 2.601887e-06 +
                                     fVar23 * -0.0001980741 +
                                     fVar22 * 0.0083330255 + fVar21 * fVar20 * -0.16666657 + fVar20)
                           ) / fVar27;
                  fVar1 = (fVar29 * (fVar1 * fVar25 * 2.601887e-06 +
                                    fVar25 * -0.0001980741 +
                                    fVar24 * 0.0083330255 + fVar1 * fVar19 * -0.16666657 + fVar19))
                          / fVar26;
                  dVar37 = -(double)(fVar17 * fVar21);
                  dVar43 = dVar41;
                  if (0.0 - fVar27 < 0.0) {
                    dVar43 = (double)(fVar18 * fVar21);
                  }
                  dVar38 = dVar41;
                  if (0.0 - fVar27 < 0.0) {
                    dVar38 = dVar37;
                  }
                  dVar40 = dVar41;
                  if (0.0 - fVar27 < 0.0) {
                    dVar40 = -(double)(fVar7 * fVar21);
                  }
                  if (fVar27 - 0.0 < 0.0) {
                    dVar43 = (double)(fVar18 * fVar21);
                  }
                  if (fVar27 - 0.0 < 0.0) {
                    dVar38 = dVar37;
                  }
                  if (fVar27 - 0.0 < 0.0) {
                    dVar40 = -(double)(fVar7 * fVar21);
                  }
                  local_e8 = (float)(dVar44 + dVar43);
                  dVar44 = (double)(fVar5 * fVar1);
                  dVar37 = -(double)(fVar2 * fVar1);
                  dVar43 = dVar41;
                  if (0.0 - fVar26 < 0.0) {
                    dVar43 = dVar44;
                  }
                  dVar39 = dVar41;
                  if (0.0 - fVar26 < 0.0) {
                    dVar39 = dVar37;
                  }
                  if (fVar26 - 0.0 < 0.0) {
                    dVar43 = dVar44;
                  }
                  if (fVar26 - 0.0 < 0.0) {
                    dVar39 = dVar37;
                  }
                  local_ec = (float)((double)(float)(dVar45 + dVar38) + dVar43);
                  local_f0 = (float)((double)(float)(dVar46 + dVar40) + dVar39);
                  MB_RandomizeVector(0.6,&local_f0);
                  dVar45 = (double)(moby->pos).y;
                  dVar46 = (double)(moby->pos).x;
                  fVar1 = *(float *)(iVar35 + 0x14);
                  fVar2 = *(float *)(iVar35 + 0x10);
                  fVar7 = *(float *)(iVar35 + 0x18);
                  dVar37 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1);
                  dVar44 = (double)(moby->pos).z;
                  fVar5 = (float)((double)(*(float *)(iVar35 + 100) *
                                          (SQRT((float)(dVar46 - (double)g_heroPosition.x) *
                                                (float)(dVar46 - (double)g_heroPosition.x) +
                                                (float)(dVar45 - (double)g_heroPosition.y) *
                                                (float)(dVar45 - (double)g_heroPosition.y)) /
                                          (g_FrameTime * 50.0 + *(float *)(iVar35 + 100)))
                                          ) / dVar37);
                  local_d4 = local_e4;
                  dVar43 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar43 = (double)(fVar1 * fVar5);
                  }
                  dVar38 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar38 = (double)(fVar2 * fVar5);
                  }
                  dVar40 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar40 = (double)(fVar7 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar43 = (double)(fVar1 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar38 = (double)(fVar2 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar40 = (double)(fVar7 * fVar5);
                  }
                  local_ec = (float)((double)(float)((double)local_ec + dVar43) - dVar45);
                  local_f0 = (float)((double)(float)((double)local_f0 + dVar38) - dVar46);
                  local_e8 = (float)((double)(float)((double)local_e8 + dVar40) - dVar44);
                  dVar37 = (double)SQRT(local_e8 * local_e8 +
                                        local_f0 * local_f0 + local_ec * local_ec);
                  fVar5 = (float)(2.5999999046325684 / dVar37);
                  dVar43 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar43 = (double)(local_e8 * fVar5);
                  }
                  dVar38 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar38 = (double)(local_ec * fVar5);
                  }
                  dVar40 = dVar41;
                  if (dVar41 - dVar37 < 0.0) {
                    dVar40 = (double)(local_f0 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar43 = (double)(local_e8 * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar38 = (double)(local_ec * fVar5);
                  }
                  if (dVar37 - dVar41 < 0.0) {
                    dVar40 = (double)(local_f0 * fVar5);
                  }
                  local_d8 = (float)(dVar43 + dVar44);
                  local_dc = (float)(dVar38 + dVar45);
                  local_e0 = (float)(dVar40 + dVar46);
                  FUN_00187e00(0x405e400000000000,(double)(g_FrameTime * 50.0),uVar42,moby
                               ,&local_f0,&local_e0);
                  PlayMobySound(0,0,moby);
                }
                dVar45 = (double)*(float *)((int)pvVar9 + 0xac);
                dVar43 = (double)MB_randRangeFloat(0.92,0.94);
                uVar15 = (int)*(uint *)((int)pvVar9 + 0xb0) >> 0x1f;
                dVar44 = (double)*(float *)((int)pvVar9 + 0xb0);
                *(float *)((int)pvVar9 + 0xac) =
                     (float)(dVar45 * (double)((float)(dVar43 - 1.0) * DAT_0071f408 + 1.0));
                dVar43 = 0.01745329238474369;
                if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar9 + 0xb0)) - uVar15) < 0x3fc90fdc) {
                  dVar45 = (double)MB_randRangeFloat(20.0,40.0);
                  fVar5 = (float)((double)(float)(dVar45 * dVar43) * (double)g_FrameTime +
                                 dVar44);
                }
                else {
                  dVar45 = (double)MB_randRangeFloat(20.0,40.0);
                  fVar5 = -(float)((double)(float)(dVar45 * dVar43) * (double)g_FrameTime
                                  - dVar44);
                }
                *(float *)((int)pvVar9 + 0xb0) = fVar5;
              }
            }
          }
          else if ((bVar34 < 3) && (iVar32 = FastDecTimerS32(uVar36 + 0xb8), iVar32 != 0))
          {
            moby->setByGroup = '\0';
          }
          goto LAB_001d0450;
        }
      }
      moby->collision = (ushort *)0x0;
      moby->state = '\x04';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      return;
    }
    if (uVar3 == '\x01') {
      if (((*(int *)((int)pvVar9 + 0xbc) == -1) ||
          (pMVar31 = g_MobyInstance + *(int *)((int)pvVar9 + 0xbc), pMVar31 == (MobyInstance *)0x0))
         || ((pMVar31->state == 0xfd || pMVar31->state == 0xfe || (pMVar31->setByGroup == '\x04'))))
      {
        local_100.z = 0.0;
        fVar5 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        local_100.y = local_100.z;
        local_100.x = local_100.z;
        if (fVar5 != 0.0) {
          fVar5 = 40.0 / fVar5;
          local_100.z = GameCamera.orientMtx.forward.z * fVar5;
          local_100.y = GameCamera.orientMtx.forward.y * fVar5;
          local_100.x = GameCamera.orientMtx.forward.x * fVar5;
        }
        local_100.x = GameCamera.posX - local_100.x;
        local_100.y = GameCamera.posY - local_100.y;
        local_100.z = GameCamera.posZ - local_100.z;
        local_100.w = (float)GameCamera.posW;
        iVar32 = PathFindClosestPnt(0.0,&local_100,spline);
        sVar33 = (short)iVar32;
        *(short *)((int)pvVar9 + 0xb4) = sVar33;
        *(short *)((int)pvVar9 + 0xb6) = sVar33;
        iVar32 = (int)((longlong)sVar33 << 4);
        fVar6 = *(f32 *)((int)&spline->points[0].x + iVar32);
        *(f32 *)((int)pvVar9 + 0x90) = fVar6;
        *(undefined4 *)((int)pvVar9 + 0x94) = *(undefined4 *)((int)&spline->points[0].y + iVar32);
        *(undefined4 *)((int)pvVar9 + 0x98) = *(undefined4 *)((int)&spline->points[0].z + iVar32);
        *(undefined4 *)((int)pvVar9 + 0x9c) = *(undefined4 *)((int)&spline->points[0].w + iVar32);
        (moby->pos).x = fVar6;
        pMVar10 = moby->pClass;
        MVar8 = moby->modeBits;
        (moby->pos).y = *(f32 *)((int)pvVar9 + 0x94);
        (moby->pos).z = *(f32 *)((int)pvVar9 + 0x98);
        (moby->pos).w = *(f32 *)((int)pvVar9 + 0x9c);
        puVar11 = pMVar10->collision;
        moby->enabled = '\x01';
        moby->collision = puVar11;
        moby->modeBits =
             MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
        moby->state = '\x02';
      }
    }
    else if (uVar3 == '\0') {
      if ((moby->drawDistance == 0) && (moby->updateDistance == '\0')) {
        DeleteMoby(moby);
        return;
      }
      if (spline == (Spline *)0x0) {
        printf("no path for moby 111 #%d: killing\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      iVar35 = *(int *)((int)pvVar9 + 0xa0);
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      pSVar13 = Splines[iVar32];
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      (moby->pos).x = pSVar13->points[0].x;
      (moby->pos).y = pSVar13->points[0].y;
      pSVar14 = Splines[iVar35];
      (moby->pos).z = pSVar13->points[0].z;
      fVar5 = pSVar13->points[0].w;
      *(undefined2 *)((int)pvVar9 + 0xb4) = 1;
      (moby->pos).w = fVar5;
      *(short *)((int)pvVar9 + 0xb6) = (short)pSVar14->cnt + -1;
      fVar6 = spline->points[1].x;
      *(f32 *)((int)pvVar9 + 0x90) = fVar6;
      *(float *)((int)pvVar9 + 0x94) = spline->points[1].y;
      *(float *)((int)pvVar9 + 0x98) = spline->points[1].z;
      *(float *)((int)pvVar9 + 0x9c) = spline->points[1].w;
      (moby->pos).x = fVar6;
      (moby->pos).y = *(f32 *)((int)pvVar9 + 0x94);
      (moby->pos).z = *(f32 *)((int)pvVar9 + 0x98);
      (moby->pos).w = *(f32 *)((int)pvVar9 + 0x9c);
      auVar47 = loadVectorLeftIndexed(in_LR,0x1cf470);
      auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
      MVar8 = moby->modeBits;
      auVar47 = vectorMultiplyAddFloatingPoint
                          (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,
                           auVar48);
      auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
      auVar47 = ZEXT416(auVar47.piece<0,4>() + 5) & (GPiece<16>)0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0xa8,uVar36)
      ;
      *(undefined4 *)((int)pvVar9 + 0xa8U & 0xfffffffc) = uVar16;
      moby->state = '\x01';
      moby->setByGroup = '\0';
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits =
           MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      *(undefined1 *)((int)pvVar9 + 0xd0) = 1;
    }
  }
LAB_001d0450:
  fVar6 = (moby->pos).x;
  uVar15 = (int)fVar6 >> 0x1f;
  fVar5 = 20.0;
  fVar1 = (moby->pos).x;
  if ((int)((uVar15 >> 1 ^ (uint)fVar6) - uVar15) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar1 = fVar5;
  }
  if (1003.0 < fVar1) {
    (moby->pos).x = 1003.0;
  }
  fVar6 = (moby->pos).y;
  uVar15 = (int)fVar6 >> 0x1f;
  fVar1 = (moby->pos).y;
  if ((int)((uVar15 >> 1 ^ (uint)fVar6) - uVar15) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar1 = fVar5;
  }
  if (1003.0 < fVar1) {
    (moby->pos).y = 1003.0;
  }
  fVar6 = (moby->pos).z;
  uVar15 = (int)fVar6 >> 0x1f;
  fVar1 = (moby->pos).z;
  if ((int)((uVar15 >> 1 ^ (uint)fVar6) - uVar15) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar1 = fVar5;
  }
  if (1003.0 < fVar1) {
    (moby->pos).z = 1003.0;
  }
  return;
}


