// game/update/moby1284.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x23892c-0x23d338
#include "game/update/moby1284.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update.h"
#include "game/update/moby113.h"
#include "game/update/moby352.h"
#include "game/update/moby388.h"
#include "game/update/moby819.h"
#include "game/update/moby829.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x023892c (0x80 bytes)
void FUN_0023892c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (param_2 < 0) {
    if (-2 < param_2) {
      HandleHeroDeath();
    }
  }
  else if (param_2 < 1) {
    *(undefined2 *)(iVar1 + 0x36) = 4;
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  else if (param_2 < 2) {
    *(undefined2 *)(iVar1 + 0x36) = 3;
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}


// 0x02389ac (0x14 bytes)
void M1284_002389ac(void)

{
  DAT_0078dc40 = 0x10000;
  return;
}


// 0x02389c8 (0x474 bytes)
void M1284_002389c8(int param_1,int param_2)

{
  MobyInstance *moby;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  uVar9 = 0;
  uVar8 = param_1 + 0xc0;
  dVar14 = 2.0;
  dVar13 = 1021.0;
  do {
    iVar10 = *(int *)((int)((uVar9 & 0xffffffff) << 2) + param_2 + 0x80);
    if (iVar10 != 0) {
      GetBonePosition(param_1,uVar9,iVar10 + 0x10);
      uVar1 = (int)*(uint *)(iVar10 + 0x10) >> 0x1f;
      uVar2 = (int)*(uint *)(iVar10 + 0x14) >> 0x1f;
      uVar3 = (int)*(uint *)(iVar10 + 0x18) >> 0x1f;
      dVar12 = (double)*(float *)(iVar10 + 0x10);
      if ((int)((uVar1 >> 1 ^ *(uint *)(iVar10 + 0x10)) - uVar1) < 0x40000000) {
        *(undefined4 *)(iVar10 + 0x10) = 0x40000000;
        dVar12 = dVar14;
      }
      if (dVar13 < dVar12) {
        *(undefined4 *)(iVar10 + 0x10) = 0x447f4000;
      }
      dVar12 = (double)*(float *)(iVar10 + 0x14);
      if ((int)((uVar2 >> 1 ^ *(uint *)(iVar10 + 0x14)) - uVar2) < 0x40000000) {
        *(undefined4 *)(iVar10 + 0x14) = 0x40000000;
        dVar12 = dVar14;
      }
      if (dVar13 < dVar12) {
        *(undefined4 *)(iVar10 + 0x14) = 0x447f4000;
      }
      dVar12 = (double)*(float *)(iVar10 + 0x18);
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar10 + 0x18)) - uVar3) < 0x40000000) {
        *(undefined4 *)(iVar10 + 0x18) = 0x40000000;
        dVar12 = dVar14;
      }
      if (dVar13 < dVar12) {
        *(undefined4 *)(iVar10 + 0x18) = 0x447f4000;
      }
      *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      puVar4 = (undefined4 *)(uVar8 & 0xfffffff0);
      uVar17 = puVar4[2];
      uVar16 = puVar4[1];
      uVar15 = *puVar4;
      puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
      uVar21 = puVar5[3];
      uVar20 = puVar5[2];
      uVar19 = puVar5[1];
      uVar18 = *puVar5;
      puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
      uVar25 = puVar5[3];
      uVar24 = puVar5[2];
      uVar23 = puVar5[1];
      uVar22 = *puVar5;
      puVar5 = (undefined4 *)(iVar10 + 0xc0U & 0xfffffff0);
      puVar5[3] = puVar4[3];
      puVar5[2] = uVar17;
      puVar5[1] = uVar16;
      *puVar5 = uVar15;
      puVar4 = (undefined4 *)(iVar10 + 0xd0U & 0xfffffff0);
      puVar4[3] = uVar21;
      puVar4[2] = uVar20;
      puVar4[1] = uVar19;
      *puVar4 = uVar18;
      puVar4 = (undefined4 *)(iVar10 + 0xe0U & 0xfffffff0);
      puVar4[3] = uVar25;
      puVar4[2] = uVar24;
      puVar4[1] = uVar23;
      *puVar4 = uVar22;
    }
    iVar10 = (int)uVar9 + 1;
    uVar9 = (ulonglong)iVar10;
  } while (iVar10 < 7);
  iVar11 = 0;
  puVar7 = &DAT_0078dcb0;
  iVar10 = param_2;
  do {
    if (*(int *)(puVar7 + (uint)*(byte *)(param_1 + 0xbc) * 8) == -1) {
      moby = *(MobyInstance **)(iVar10 + 0xf8);
      if ((moby != (MobyInstance *)0x0) && (moby->state != 0xfd && moby->state != 0xfe)) {
        DeleteMoby(moby);
        *(undefined4 *)(iVar10 + 0xf8) = 0;
      }
    }
    else {
      iVar6 = *(int *)(iVar10 + 0xf8);
      uVar15 = *(undefined4 *)
                (&DAT_0078dc94 + *(int *)(puVar7 + (uint)*(byte *)(param_1 + 0xbc) * 8) * 4);
      if (((iVar6 == 0) || (*(char *)(iVar6 + 0x20) == -2)) || (*(char *)(iVar6 + 0x20) == -3)) {
        iVar6 = FUN_0024ec68(param_1,uVar15,0x71);
        *(int *)(iVar10 + 0xf8) = iVar6;
      }
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2) {
          GetBonePosition(param_1,uVar15,iVar6 + 0x10);
          uVar1 = (int)*(uint *)(iVar6 + 0x10) >> 0x1f;
          uVar2 = (int)*(uint *)(iVar6 + 0x14) >> 0x1f;
          uVar3 = (int)*(uint *)(iVar6 + 0x18) >> 0x1f;
          dVar12 = (double)*(float *)(iVar6 + 0x10);
          if ((int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x10)) - uVar1) < 0x40000000) {
            *(undefined4 *)(iVar6 + 0x10) = 0x40000000;
            dVar12 = dVar14;
          }
          if (dVar13 < dVar12) {
            *(undefined4 *)(iVar6 + 0x10) = 0x447f4000;
          }
          dVar12 = (double)*(float *)(iVar6 + 0x14);
          if ((int)((uVar2 >> 1 ^ *(uint *)(iVar6 + 0x14)) - uVar2) < 0x40000000) {
            *(undefined4 *)(iVar6 + 0x14) = 0x40000000;
            dVar12 = dVar14;
          }
          if (dVar13 < dVar12) {
            *(undefined4 *)(iVar6 + 0x14) = 0x447f4000;
          }
          dVar12 = (double)*(float *)(iVar6 + 0x18);
          if ((int)((uVar3 >> 1 ^ *(uint *)(iVar6 + 0x18)) - uVar3) < 0x40000000) {
            *(undefined4 *)(iVar6 + 0x18) = 0x40000000;
            dVar12 = dVar14;
          }
          if (dVar13 < dVar12) {
            *(undefined4 *)(iVar6 + 0x18) = 0x447f4000;
          }
          *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_1 + 0x40);
          *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(param_1 + 0x44);
          *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(param_1 + 0x48);
          *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
          puVar4 = (undefined4 *)(uVar8 & 0xfffffff0);
          uVar17 = puVar4[2];
          uVar16 = puVar4[1];
          uVar15 = *puVar4;
          puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
          uVar21 = puVar5[3];
          uVar20 = puVar5[2];
          uVar19 = puVar5[1];
          uVar18 = *puVar5;
          puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
          uVar25 = puVar5[3];
          uVar24 = puVar5[2];
          uVar23 = puVar5[1];
          uVar22 = *puVar5;
          puVar5 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
          puVar5[3] = puVar4[3];
          puVar5[2] = uVar17;
          puVar5[1] = uVar16;
          *puVar5 = uVar15;
          puVar4 = (undefined4 *)(iVar6 + 0xd0U & 0xfffffff0);
          puVar4[3] = uVar21;
          puVar4[2] = uVar20;
          puVar4[1] = uVar19;
          *puVar4 = uVar18;
          puVar4 = (undefined4 *)(iVar6 + 0xe0U & 0xfffffff0);
          puVar4[3] = uVar25;
          puVar4[2] = uVar24;
          puVar4[1] = uVar23;
          *puVar4 = uVar22;
        }
      }
    }
    iVar11 = iVar11 + 1;
    puVar7 = puVar7 + 4;
    iVar10 = iVar10 + 4;
  } while (iVar11 < 2);
  iVar10 = *(int *)(param_2 + 0x108);
  if (iVar10 != 0) {
    *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar10 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar10 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    puVar4 = (undefined4 *)(uVar8 & 0xfffffff0);
    uVar17 = puVar4[2];
    uVar16 = puVar4[1];
    uVar15 = *puVar4;
    puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar21 = puVar5[3];
    uVar20 = puVar5[2];
    uVar19 = puVar5[1];
    uVar18 = *puVar5;
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar25 = puVar5[3];
    uVar24 = puVar5[2];
    uVar23 = puVar5[1];
    uVar22 = *puVar5;
    puVar5 = (undefined4 *)(iVar10 + 0xc0U & 0xfffffff0);
    puVar5[3] = puVar4[3];
    puVar5[2] = uVar17;
    puVar5[1] = uVar16;
    *puVar5 = uVar15;
    puVar4 = (undefined4 *)(iVar10 + 0xd0U & 0xfffffff0);
    puVar4[3] = uVar21;
    puVar4[2] = uVar20;
    puVar4[1] = uVar19;
    *puVar4 = uVar18;
    puVar4 = (undefined4 *)(iVar10 + 0xe0U & 0xfffffff0);
    puVar4[3] = uVar25;
    puVar4[2] = uVar24;
    puVar4[1] = uVar23;
    *puVar4 = uVar22;
  }
  return;
}


// 0x0238e58 (0x120 bytes)
double M1284_00238e58
                 (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = 3.1415927410125732;
  dVar1 = 6.2831854820251465;
  OrganicDeltAngSpeed
            (param_1,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
             (double)(g_FrameTime * 6.2831855),param_3,param_4,param_4 + 0xb8);
  dVar1 = (double)MB_DeltAngSpeed
                            ((double)*(float *)(param_3 + 0x44),param_2,
                             (double)(float)((double)DAT_0071f418 * dVar2),
                             (double)(float)((double)DAT_0071f418 * dVar1),
                             (double)(float)((double)g_FrameTime * dVar1));
  *(float *)(param_3 + 0x44) = (float)dVar1;
  fVar3 = *(float *)(param_4 + 0xb8) * (1.5707964 - ABS(*(float *)(param_3 + 0x40))) * 0.63661975 *
          -0.5 + *(float *)(param_3 + 0x40);
  if (1.5707964 - fVar3 < 0.0) {
    fVar3 = 1.5707964;
  }
  if (fVar3 - -1.5707964 < 0.0) {
    fVar3 = -1.5707964;
  }
  *(float *)(param_3 + 0x40) = fVar3 * 0.985;
  fVar3 = MB_WrapRot(fVar3 * 0.985);
  return (double)fVar3;
}


// 0x0238f88 (0x998 bytes)
// inlined: FastAtan2 @0x2392d0, FastAtan2 @0x239470, FastAtan2 @0x239628, FastAtan2 @0x2397cc
bool M1284_00238f88(int param_1,int param_2,longlong param_3,char param_4)

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
  int iVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  short sVar18;
  longlong lVar17;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong unaff_r31;
  bool bVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x180;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x32] = in_LR;
  puVar12[0x26] = in_f22;
  puVar12[0x27] = in_f23;
  puVar12[0x28] = in_f24;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  iVar10 = (int)((longlong)*(short *)(param_2 + 0xae) << 4);
  sVar18 = *(short *)(param_2 + 0xac);
  pSVar11 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0x70)];
  dVar30 = (double)*(float *)(param_1 + 0x14);
  dVar29 = (double)*(float *)(param_1 + 0x10);
  iVar22 = (int)((longlong)sVar18 << 4);
  dVar26 = (double)*(float *)((int)&pSVar11->points[0].y + iVar10);
  dVar27 = (double)*(float *)((int)&pSVar11->points[0].x + iVar10);
  dVar32 = (double)*(float *)((int)&pSVar11->points[0].z + iVar10);
  fVar1 = (float)(dVar26 - dVar30);
  fVar2 = (float)(dVar27 - dVar29);
  fVar3 = (float)(dVar26 - (double)*(float *)((int)&pSVar11->points[0].y + iVar22));
  fVar4 = (float)(dVar27 - (double)*(float *)((int)&pSVar11->points[0].x + iVar22));
  dVar26 = (double)*(float *)(param_1 + 0x18);
  fVar5 = (float)(dVar32 - dVar26);
  fVar6 = (float)(dVar32 - (double)*(float *)((int)&pSVar11->points[0].z + iVar22));
  dVar27 = 0.0;
  puVar12[0x25] = unaff_r31;
  bVar23 = false;
  fVar2 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = *(float *)(param_2 + 0xbc);
  fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar4 = fVar3 - fVar2;
  if (fVar1 <= fVar4 || fVar4 < 0.0) {
    dVar32 = (double)(fVar2 / fVar3);
  }
  else {
    *(short *)(param_2 + 0xae) = sVar18;
    iVar10 = pSVar11->cnt;
    sVar18 = sVar18 + *(char *)(param_2 + 0x100);
    iVar22 = (int)sVar18;
    *(short *)(param_2 + 0xac) = sVar18;
    if (iVar10 <= iVar22) {
      sVar18 = 0;
      *(undefined2 *)(param_2 + 0xac) = 0;
    }
    bVar23 = sVar18 < 0;
    if (bVar23) {
      sVar18 = (short)iVar10 + -1;
      *(short *)(param_2 + 0xac) = sVar18;
    }
    bVar23 = bVar23 || iVar10 <= iVar22;
    dVar32 = dVar27;
  }
  iVar10 = (int)((longlong)sVar18 << 4);
  fVar2 = (float)((double)*(float *)((int)&pSVar11->points[0].y + iVar10) - dVar30);
  fVar3 = (float)((double)*(float *)((int)&pSVar11->points[0].x + iVar10) - dVar29);
  fVar4 = (float)((double)*(float *)((int)&pSVar11->points[0].z + iVar10) - dVar26);
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar32 - 0.05000000074505806 < 0.0) {
    dVar32 = 0.05000000074505806;
  }
  if (1.0 - dVar32 < 0.0) {
    dVar32 = 1.0;
  }
  fVar6 = (float)(1.0 - dVar32);
  fVar9 = fVar1 / fVar5;
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  dVar31 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  fVar2 = (float)(dVar25 * dVar32);
  fVar3 = (float)(dVar28 * dVar32);
  fVar4 = (float)(dVar31 * dVar32);
  fVar7 = *(float *)(param_2 + 0xc4) * fVar6 + fVar2;
  fVar9 = *(float *)(param_2 + 0xc0) * fVar6 + fVar3;
  fVar6 = *(float *)(param_2 + 200) * fVar6 + fVar4;
  *(float *)((int)puVar12 + 0x94) = fVar3;
  *(float *)(puVar12 + 0x13) = fVar2;
  *(float *)((int)puVar12 + 0x9c) = ABS(fVar3) - ABS(fVar2);
  fVar5 = SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar1 = fVar1 / fVar5;
  uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1d) & 4;
  fVar8 = ABS(*(float *)(puVar12 + 0x13));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar13 = ABS(*(float *)((int)puVar12 + 0x94));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar13 = ABS(fVar2);
  }
  dVar32 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  fVar1 = (float)(dVar29 + dVar32);
  fVar5 = (float)(dVar30 + dVar25);
  *(float *)(param_2 + 0xc0) = (float)dVar32;
  *(float *)(param_2 + 0xc4) = (float)dVar25;
  *(float *)(param_2 + 200) = (float)dVar28;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar5;
  *(float *)(param_1 + 0x18) = (float)(dVar26 + dVar28);
  fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar29 = dVar27;
  if (0.0 < fVar13) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0x80;
    lVar19 = uVar14 - 0x70;
    lVar24 = 2;
    fVar8 = (fVar8 - fVar13) / (fVar8 + fVar13);
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar12 + 0x20) = fVar8;
    *(float *)((int)puVar12 + 0x104) = fVar8;
    *(float *)(puVar12 + 0x21) = fVar8;
    *(float *)((int)puVar12 + 0x10c) = fVar8;
    fVar8 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar7;
    *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar8;
    *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar8 * fVar7;
    do {
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0xf0) * fVar8 * fVar8;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0x80;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar8 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0x100) * fVar8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0x100)) +
                        *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar9 + fVar6);
  }
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = ABS(fVar2);
  *(float *)(puVar12 + 0x11) = fVar2;
  *(float *)(puVar12 + 0x12) = fVar3 - ABS(fVar4);
  uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar2 = ABS(fVar4);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar9 = fVar3;
  }
  dVar30 = dVar27;
  if (0.0 < fVar2) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0xa0;
    lVar19 = uVar14 - 0x90;
    lVar24 = 2;
    fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x1c) = fVar2;
    *(float *)((int)puVar12 + 0xe4) = fVar2;
    *(float *)(puVar12 + 0x1d) = fVar2;
    *(float *)((int)puVar12 + 0xec) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar3;
    *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar2;
    *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xd0) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0xa0;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xe0) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar10 + 0xe0)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar4);
  }
  fVar3 = g_heroPosition.y;
  fVar2 = g_heroPosition.x;
  if (*(char *)(param_1 + 0x20) == '\x05') {
    fVar4 = g_heroPosition.y - fVar5;
    fVar9 = ABS(g_heroPosition.x - fVar1);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar12 + 0x7c) = g_heroPosition.x - fVar1;
    *(float *)(puVar12 + 0x10) = fVar4;
    *(float *)((int)puVar12 + 0x84) = fVar9 - fVar6;
    uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar12 + 0x7c));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar8 = ABS(*(float *)(puVar12 + 0x10));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar8 = fVar9;
    }
    fVar9 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar29 = dVar27;
    if (0.0 < fVar4) {
      lVar15 = uVar14 - 0x170;
      lVar17 = uVar14 - 0xc0;
      lVar19 = uVar14 - 0xb0;
      lVar24 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar8 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x18) = fVar4;
      *(float *)((int)puVar12 + 0xc4) = fVar4;
      *(float *)(puVar12 + 0x19) = fVar4;
      *(float *)((int)puVar12 + 0xcc) = fVar4;
      fVar4 = fVar8 * fVar8;
      *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar8;
      *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar4;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar4 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xb0) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xc0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xc0) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar22 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xc0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar9);
    }
    fVar4 = g_heroPosition.z - (float)(dVar26 + dVar28);
    fVar1 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar3) * (fVar5 - fVar3));
    *(float *)((int)puVar12 + 0x74) = fVar4;
    fVar4 = ABS(fVar4);
    fVar2 = ABS(fVar1);
    *(float *)(puVar12 + 0xe) = fVar1;
    *(float *)(puVar12 + 0xf) = fVar2 - fVar4;
    uVar21 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar12 + 0xe));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0x74));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    dVar30 = dVar27;
    if (0.0 < fVar1) {
      lVar24 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar12 + 0x14) = fVar1;
      *(float *)((int)puVar12 + 0xa4) = fVar1;
      *(float *)(puVar12 + 0x15) = fVar1;
      *(float *)((int)puVar12 + 0xac) = fVar1;
      lVar19 = uVar14 - 0x170;
      fVar1 = fVar2 * fVar2;
      lVar15 = uVar14 - 0xe0;
      lVar17 = uVar14 - 0xd0;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar2;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar1;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar19 + 0xa0) = *(float *)((int)lVar19 + 0x90) * fVar1 * fVar1;
        iVar10 = (int)lVar15;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xe0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xa0) = *(float *)((int)lVar15 + 0xa0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar15 = 2;
      do {
        iVar10 = (int)lVar16;
        iVar22 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xa0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar30 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar3);
    }
  }
  if (param_4 != '\0') {
    M1284_00238e58(dVar29,-dVar30);
  }
  return bVar23;
}


// 0x0239940 (0x2b8 bytes)
longlong M1284_00239940
                   (int param_1,int param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  short sVar2;
  Spline *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  uVar10 = 0;
  pSVar3 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0x70)];
  if (pSVar3 != (Spline *)0x0) {
    sVar2 = *(short *)(param_2 + 0xac);
    uVar10 = (longlong)sVar2 + 1;
    lVar12 = (longlong)sVar2 + -1;
    iVar11 = (int)(((longlong)(uVar10 - (longlong)pSVar3->cnt) >> 0x3f & uVar10) << 4);
    iVar9 = (int)lVar12;
    iVar9 = iVar9 + ((uint)(lVar12 >> 0x3f) & (pSVar3->cnt + -1) - iVar9);
    fVar1 = *(float *)((int)&pSVar3->points[0].y + iVar11) - g_heroPosition.y;
    fVar7 = *(float *)((int)&pSVar3->points[0].x + iVar11) - g_heroPosition.x;
    fVar5 = *(float *)((int)&pSVar3->points[0].z + iVar11) - g_heroPosition.z;
    fVar4 = pSVar3->points[iVar9].y - g_heroPosition.y;
    fVar8 = pSVar3->points[iVar9].x - g_heroPosition.x;
    fVar6 = pSVar3->points[iVar9].z - g_heroPosition.z;
    iVar11 = -1;
    fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar1 * fVar1);
    fVar4 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
    if ((fVar4 <= fVar1) && (iVar11 = 1, fVar1 <= fVar4)) {
      iVar11 = ((uint)(ZERO_MASK((1 - (uint)*(byte *)(param_2 + 0x100)))) & 2) - 1;
    }
    if (iVar11 == *(char *)(param_2 + 0x100)) {
      fVar4 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
      fVar6 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
      fVar5 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
      fVar1 = 1.0;
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        fVar1 = 3.0;
      }
      fVar1 = DAT_0071f408 * 0.12 *
              ((fVar1 * 30.0) / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) -
              *(float *)(param_2 + 0xbc)) + *(float *)(param_2 + 0xbc);
      *(float *)(param_2 + 0xbc) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_2 + 0xbc) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_2 + 0xbc) * (DAT_0071f408 * -0.100000024 + 1.0);
      *(float *)(param_2 + 0xbc) = fVar1;
      if (fVar1 < DAT_0071f408 * 0.15) {
        *(char *)(param_2 + 0x100) = (char)iVar11;
        *(undefined2 *)(param_2 + 0xac) = *(undefined2 *)(param_2 + 0xae);
        *(short *)(param_2 + 0xae) = sVar2;
      }
    }
    uVar10 = M1284_00238f88(param_1,param_2,param_3,param_4);
  }
  return uVar10 + (-(longlong)
                    *(int *)((int)&pSVar3->points[0].w +
                            (int)((longlong)*(short *)(param_2 + 0xac) << 4)) >> 0x3f &
                  (uVar10 | 2) - uVar10);
}


// 0x0239c18 (0x168 bytes)
void M1284_00239c18(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar4 = param_2 + (int)(param_3 << 2);
  iVar1 = *(int *)(iVar4 + 0x80);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x78);
    *(float *)(iVar2 + 0x10) = *(float *)(param_2 + 0xc0) * 0.7;
    *(float *)(iVar2 + 0x14) = *(float *)(param_2 + 0xc4) * 0.7;
    fVar3 = *(float *)(param_2 + 200) * 0.7;
    *(float *)(iVar2 + 0x18) = fVar3;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0xcc);
    *(float *)(iVar2 + 0x18) = g_FrameTime * 20.0 + fVar3;
    *(undefined1 *)(iVar1 + 0x20) = 3;
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + *(float *)(iVar2 + 0x10);
    *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x14);
    *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + *(float *)(iVar2 + 0x18);
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * -0.34906584,
                               g_FrameTime * 0.34906584);
    *(float *)(iVar2 + 0x30) = (float)dVar5;
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * -3.1415927,g_FrameTime * 3.1415927)
    ;
    *(float *)(iVar2 + 0x34) = (float)dVar5;
    dVar5 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar7),
                               (float)((double)g_FrameTime * dVar6));
    *(float *)(iVar2 + 0x38) = (float)dVar5;
    *(undefined1 *)(iVar1 + 0xa4) = 0xff;
    *(undefined4 *)(iVar4 + 0x80) = 0;
    *(undefined8 *)(iVar1 + 0x38) = 0x40404000000000;
  }
  return;
}


// 0x0239d98 (0x678 bytes)
void M1284_00239d98(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  MobyModeBit MVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short sVar11;
  int iVar10;
  short sVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  int local_c0 [2];
  longlong local_b8;
  
  if (param_1->state < 6) {
    iVar8 = (int)param_2;
    local_b8 = (longlong)(int)*(short *)(iVar8 + 0x24);
    dVar19 = (double)((float)local_b8 * 0.16666667);
    dVar17 = (double)FastIntToDouble(param_1->setByGroup);
    dVar18 = 0.0;
    iVar15 = 0;
    auVar22 = loadVectorLeftIndexed(0xc,0x239d80);
    auVar21 = loadVectorLeftIndexed(0x10,0x239d80);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    lVar13 = param_2 + 0x60;
    iVar16 = iVar8 + 0x70;
    dVar17 = (double)(float)((double)(float)(6.0 - dVar17) * dVar19);
    lVar14 = param_2;
    do {
      iVar10 = (int)lVar14;
      if (*(int *)(iVar10 + 0xf8) != 0) {
        iVar9 = MB_damage(*(int *)(iVar10 + 0xf8),0x230000,0);
        MB_HandleDamage(param_1,iVar9,param_2 + 0x20,0,local_c0,0,0,4);
        uVar4 = (int)*(uint *)(iVar8 + 0x20) >> 0x1f;
        MVar3 = param_1->modeBits;
        if (((iVar9 == 0) || (*(int *)(iVar9 + 0x20) == 0)) ||
           ((sVar11 = *(short *)(*(int *)(iVar9 + 0x20) + 0xa6), sVar11 != 0x52 && (sVar11 != 0x53))
           )) {
          if (1 < local_c0[0]) {
            fVar1 = *(float *)(iVar9 + 0x2c);
            uVar5 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
            if ((int)((uVar5 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar5) <
                (int)((uVar4 >> 1 ^ *(uint *)(iVar8 + 0x20)) - uVar4)) {
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              *(undefined1 *)(iVar8 + 0x67) = 0xfa;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              *(float *)(iVar8 + 0x20) = *(float *)(iVar8 + 0x20) - fVar1;
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar22,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = vectorSplatHalfWord(auVar21,1);
              uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,param_2);
              *(undefined2 *)(iVar8 + 0x26) = uVar6;
              MB_UpdateLightsTransition(param_1,lVar13);
              *(undefined1 *)(*(int *)(iVar10 + 0xf8) + 0xa4) = 0xff;
            }
            else {
              *(undefined4 *)(iVar8 + 0x20) = 0;
              param_1->modeBits =
                   MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                            HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
              MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
              *(undefined1 *)(iVar8 + 0x67) = 0x78;
              MB_UpdateLightsTransition(param_1,lVar13);
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              param_1->state = '\a';
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              iVar10 = *(int *)(iVar10 + 0xf8);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar23,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,
                                 param_2);
              *(undefined4 *)(iVar8 + 0xe4U & 0xfffffffc) = uVar7;
              *(undefined1 *)(iVar10 + 0xa4) = 0xff;
            }
            if (((double)*(float *)(iVar8 + 0x20) < dVar17) || (param_1->state == '\a')) {
              M1284_00239c18(param_1,param_2,
                             *(undefined4 *)(&DAT_0078dc90 + (uint)(byte)param_1->setByGroup * 4));
              if (param_1->state == '\x05') {
                param_1->state = '\x04';
              }
              iVar10 = (byte)param_1->setByGroup + 1;
              param_1->setByGroup = (char)iVar10;
              iVar10 = PathFindClosestPnt
                                 ((float)dVar18,(Vec4 *)&param_1->pos,
                                  Splines[*(int *)(*(int *)(&DAT_0078dc64 + (iVar10 * 4 & 0x3fc)) *
                                                   4 + iVar16)]);
              *(short *)(iVar8 + 0xac) = (short)iVar10;
              sVar11 = MB_randRange(3,7);
              sVar11 = *(short *)(iVar8 + 0xac) + sVar11;
              *(short *)(iVar8 + 0xac) = sVar11;
              iVar10 = (uint)(byte)param_1->setByGroup * 4;
              sVar11 = sVar11 - (short)((int)sVar11 /
                                       Splines[*(int *)(*(int *)(&DAT_0078dc64 + iVar10) * 4 +
                                                       iVar16)]->cnt) *
                                (short)Splines[*(int *)(*(int *)(&DAT_0078dc64 +
                                                                (uint)(byte)param_1->setByGroup * 4)
                                                        * 4 + iVar16)]->cnt;
              sVar12 = sVar11 + -1;
              *(short *)(iVar8 + 0xac) = sVar11;
              *(short *)(iVar8 + 0xae) = sVar12;
              if (sVar12 < 0) {
                *(short *)(iVar8 + 0xae) =
                     (short)Splines[*(int *)(*(int *)(&DAT_0078dc64 + iVar10) * 4 + iVar16)]->cnt +
                     -1;
              }
            }
          }
        }
        else {
          *(undefined1 *)(*(int *)(iVar10 + 0xf8) + 0xa4) = 0xff;
        }
      }
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 4;
    } while (iVar15 < 2);
    iVar16 = 0;
    lVar14 = param_2;
    do {
      iVar15 = (int)lVar14;
      if (*(int *)(iVar15 + 0x80) != 0) {
        iVar10 = MB_damage(*(int *)(iVar15 + 0x80),0x230000,0);
        MB_HandleDamage(param_1,iVar10,param_2 + 0x20,0,local_c0,0,0,4);
        MVar3 = param_1->modeBits;
        fVar1 = *(float *)(iVar8 + 0x20);
        if (((iVar10 == 0) || (*(int *)(iVar10 + 0x20) == 0)) ||
           ((sVar11 = *(short *)(*(int *)(iVar10 + 0x20) + 0xa6), sVar11 != 0x52 && (sVar11 != 0x53)
            ))) {
          if (1 < local_c0[0]) {
            fVar2 = *(float *)(iVar10 + 0x2c);
            if ((0 < *(int *)(iVar10 + 0x2c)) && (*(short *)(iVar10 + 0x2a) == 0x3f1)) {
              *(undefined4 *)(iVar10 + 0x2c) = 0x3e4ccccd;
              fVar2 = 0.2;
            }
            if (fVar2 < fVar1) {
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              *(undefined1 *)(iVar8 + 0x67) = 0xfa;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              *(float *)(iVar8 + 0x20) = fVar1 - fVar2;
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar22,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = vectorSplatHalfWord(auVar21,1);
              uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,param_2);
              *(undefined2 *)(iVar8 + 0x26) = uVar6;
              MB_UpdateLightsTransition(param_1,lVar13);
              *(undefined1 *)(*(int *)(iVar15 + 0x80) + 0xa4) = 0xff;
            }
            else {
              *(undefined4 *)(iVar8 + 0x20) = 0;
              param_1->modeBits =
                   MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                            HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
              MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
              *(undefined1 *)(iVar8 + 0x67) = 0x78;
              MB_UpdateLightsTransition(param_1,lVar13);
              auVar21 = ZEXT416(0xffffffff);
              auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
              auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
              param_1->state = '\a';
              auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              iVar15 = *(int *)(iVar15 + 0x80);
              auVar21 = vectorMultiplyAddFloatingPoint(auVar20,auVar23,auVar21);
              auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
              auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,
                                 param_2);
              *(undefined4 *)(iVar8 + 0xe4U & 0xfffffffc) = uVar7;
              *(undefined1 *)(iVar15 + 0xa4) = 0xff;
            }
            if (((double)*(float *)(iVar8 + 0x20) < dVar17) || (param_1->state == '\a')) {
              M1284_00239c18(param_1,param_2,
                             *(undefined4 *)(&DAT_0078dc90 + (uint)(byte)param_1->setByGroup * 4));
              if (param_1->state == '\x05') {
                param_1->state = '\x04';
              }
              param_1->setByGroup = param_1->setByGroup + '\x01';
            }
          }
        }
        else {
          *(undefined1 *)(*(int *)(iVar15 + 0x80) + 0xa4) = 0xff;
        }
      }
      iVar16 = iVar16 + 1;
      lVar14 = lVar14 + 4;
    } while (iVar16 < 8);
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x023a410 (0x120 bytes)
void M1284_0023a410(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = *(int *)(DAT_0096b2d0 + 0x78);
  dVar5 = (double)FastWrapRot(*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar3 + 0x90));
  dVar6 = (double)FastWrapRot(*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar3 + 0x94));
  fVar1 = param_3[1] - *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *param_3 - *(float *)(DAT_0096b2d0 + 0x10);
  fVar4 = param_3[2] - *(float *)(DAT_0096b2d0 + 0x18);
  MB_SphericalToVector
            ((float)((double)(SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1) /
                             (float)((double)*(float *)(iVar3 + 100) + param_1)) *
                    (double)*(float *)(iVar3 + 100)),(float)dVar5,(float)-dVar6,param_2);
  fVar1 = *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *(float *)(DAT_0096b2d0 + 0x18);
  *param_2 = *param_2 + *(float *)(DAT_0096b2d0 + 0x10);
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  return;
}


// 0x023a538 (0x7dc bytes)
// inlined: FastAtan2 @0x23a698, FastAtan2 @0x23a850, FastAtan2 @0x23aa18, FastAtan2 @0x23abd4
void M1284_0023a538
               (double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5)

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
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x29] = in_f31;
  puVar10[0x28] = unaff_r31;
  puVar10[0x27] = unaff_r30;
  puVar10[0x26] = unaff_r29;
  iVar11 = DAT_0096b2d0;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = g_heroPosition.x - fVar4;
    fVar6 = g_heroPosition.y - fVar5;
    fVar8 = ABS(fVar9);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar10 + 0x8c) = fVar9;
    *(float *)(puVar10 + 0x12) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar8 - fVar7;
    dVar26 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
    fVar9 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar9 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar13 = fVar8;
    }
    dVar24 = dVar26;
    if (0.0 < fVar9) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x80;
      lVar19 = uVar14 - 0x70;
      lVar21 = 2;
      fVar9 = (fVar13 - fVar9) / (fVar13 + fVar9);
      fVar8 = fVar9 * fVar9;
      *(float *)((int)puVar10 + 0xdc) = fVar9;
      *(float *)((int)puVar10 + 0xd4) = fVar9;
      *(float *)(puVar10 + 0x1b) = fVar9;
      *(float *)(puVar10 + 0x1a) = fVar9;
      fVar9 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar8;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar9;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar9 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xc0) * fVar9 * fVar9;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x80;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar9 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xd0) * fVar9;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0xd0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar7 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    fVar2 = ABS(fVar3 - param_2[2]);
    *(float *)((int)puVar10 + 0x84) = fVar3 - param_2[2];
    fVar3 = ABS(fVar1);
    *(float *)(puVar10 + 0x10) = fVar1;
    *(float *)(puVar10 + 0x11) = fVar3 - fVar2;
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar10 + 0x84));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar1) {
      lVar15 = uVar14 - 0x140;
      lVar19 = uVar14 - 0x90;
      lVar17 = uVar14 - 0xa0;
      lVar21 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar10 + 0xbc) = fVar1;
      *(float *)((int)puVar10 + 0xb4) = fVar1;
      *(float *)(puVar10 + 0x17) = fVar1;
      *(float *)(puVar10 + 0x16) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar3;
      *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar1;
      *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xa0) * fVar1 * fVar1;
        iVar11 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0xa0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xb0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xb0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar2);
    }
  }
  else {
    dVar26 = 0.0;
    if (param_1 <= 0.0) {
      fVar1 = *(float *)(DAT_0096b2d0 + 0x10);
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar2 = *(float *)(iVar11 + 0x14);
      *(float *)((int)puVar10 + 0x74) = fVar2;
      fVar3 = *(float *)(iVar11 + 0x18);
      *(float *)(puVar10 + 0xf) = fVar3;
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(iVar11 + 0x1c);
    }
    else {
      M1284_0023a410(param_1,uVar14 - 0xe0,param_2);
      fVar1 = *(float *)(puVar10 + 0xe);
      fVar2 = *(float *)((int)puVar10 + 0x74);
      fVar3 = *(float *)(puVar10 + 0xf);
    }
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = fVar1 - fVar4;
    fVar6 = fVar2 - fVar5;
    dVar24 = ABS((double)fVar9);
    dVar25 = ABS((double)fVar6);
    *(float *)((int)puVar10 + 0xa4) = fVar9;
    *(float *)(puVar10 + 0x15) = fVar6;
    *(float *)((int)puVar10 + 0xac) = (float)(dVar24 - dVar25);
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)((int)puVar10 + 0xa4));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar23 = dVar25;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar25 = ABS((double)*(float *)(puVar10 + 0x15));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar25 = dVar24;
    }
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x40;
      lVar19 = uVar14 - 0x30;
      lVar21 = 2;
      fVar7 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x11c) = fVar7;
      *(float *)((int)puVar10 + 0x114) = fVar7;
      *(float *)(puVar10 + 0x23) = fVar7;
      *(float *)(puVar10 + 0x22) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar8;
      *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar7;
      *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x100) * fVar7 * fVar7;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x40;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x110) * fVar7;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0x110)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar9 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = param_2[2];
    fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    *(float *)((int)puVar10 + 0x9c) = fVar3 - fVar1;
    dVar22 = ABS((double)(fVar3 - fVar1));
    dVar25 = ABS((double)fVar2);
    *(float *)(puVar10 + 0x13) = fVar2;
    *(float *)(puVar10 + 0x14) = (float)(dVar25 - dVar22);
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar10 + 0x13));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar23 = dVar22;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar10 + 0x9c));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar22 = dVar25;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x60;
      lVar19 = uVar14 - 0x50;
      lVar21 = 2;
      fVar3 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xfc) = fVar3;
      *(float *)((int)puVar10 + 0xf4) = fVar3;
      *(float *)(puVar10 + 0x1f) = fVar3;
      *(float *)(puVar10 + 0x1e) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar4;
      *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar3;
      *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xe0) * fVar3 * fVar3;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x60;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xf0) * fVar3;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xf0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (float)dVar24;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)-dVar26;
  }
  return;
}


// 0x023ad28 (0x15c bytes)
void M1284_0023ad28(int param_1,int param_2)

{
  byte bVar1;
  GPiece<16> auStack_40;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<24> local_28;
  
  bVar1 = *(byte *)(param_2 + 0xe8);
  *(byte *)(param_2 + 0xe8) = bVar1 ^ 1;
  GetBonePosition(param_1,(ZERO_MASK((bVar1 & 1))) + 8,auStack_40);
  if (*(char *)(param_1 + 0x20) == '\x05') {
    M1284_0023a538(0xbff0000000000000,auStack_40,&DAT_0023ad14,local_2c,local_28);
  }
  else {
    M1284_0023a538((double)(g_FrameTime * 15.0),auStack_40,&DAT_00720000,local_2c,local_28
                  );
  }
  M819_00471930((double)(g_FrameTime * 20.0 + *(float *)(param_2 + 0xbc)),
                (double)(g_FrameTime * 15.0),param_1,auStack_40,DAT_0096b2d0,local_30,
                &DAT_0023ad14,(int)(animationSpeed * 300.5));
  return;
}


// 0x023aea0 (0x374 bytes)
void M1284_0023aea0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  undefined4 local_90 [4];
  GPiece<16> local_80;
  undefined4 local_70 [6];
  
  GetBonePosition(param_1,9,local_90);
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    MB_randSphere
              ((double)(g_FrameTime * 20.0),(double)(g_FrameTime * 40.0),
               local_80);
  }
  else {
    M1284_0023a410((double)(g_FrameTime * 20.0),local_70,local_90);
    dVar2 = -50.0;
    dVar1 = 50.0;
    MB_randRangeFloat(g_FrameTime * -50.0,g_FrameTime * 50.0);
    MB_randRangeFloat
              ((float)((double)g_FrameTime * dVar2),
               (float)((double)g_FrameTime * dVar1));
    MB_randRangeFloat
              ((float)((double)g_FrameTime * 5.0),
               (float)((double)g_FrameTime * dVar1));
  }
  M829_0047df40(param_1,local_90,local_80);
  return;
}


// 0x023b238 (0x4bc bytes)
void M1284_0023b238(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<152> local_140;
  
  iVar1 = *(int *)(param_1 + 0x78);
  GetEffectTex(DAT_0078dd10);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_00f15590,DAT_0078dd00,DAT_00f15594,DAT_0078dd04,DAT_0078dd08);
  dVar8 = 0.0;
  fVar2 = *(float *)(iVar1 + 0xd4) - *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(iVar1 + 0xd0) - *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(iVar1 + 0xd8) - *(float *)(param_1 + 0x18);
  fVar6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar5 = 200.0 / fVar6;
  if (200.0 - fVar6 < 0.0) {
    fVar2 = fVar2 * fVar5;
  }
  if (200.0 - fVar6 < 0.0) {
    fVar4 = fVar4 * fVar5;
  }
  if (200.0 - fVar6 < 0.0) {
    fVar3 = fVar3 * fVar5;
  }
  dVar7 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  dVar12 = (double)(float)(dVar7 * 0.004999999888241291);
  if ((double)(float)(dVar7 * 0.004999999888241291) - 1.0 < 0.0) {
    dVar12 = 1.0;
  }
  if (0.0 < dVar7) {
    dVar9 = 10.0;
    dVar11 = 6.400000095367432;
    dVar10 = (double)(float)(dVar7 - 10.0);
    do {
      if ((dVar9 < dVar7) && (dVar10 < dVar8)) {
        FastDoubleToInt((double)(float)((double)(float)(dVar7 - dVar8) * dVar11));
      }
      FastDrawQuad(local_140,0,1,EffectTexHeaders,9);
      dVar8 = (double)(float)(dVar8 + dVar12);
    } while (dVar8 < dVar7);
  }
  return;
}


// 0x023b710 (0x6c8 bytes)
void M1284_0023b710(int param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  byte bVar11;
  int iVar10;
  undefined1 uVar12;
  undefined8 in_LR;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  cVar1 = *(char *)(param_1 + 0xbc);
  iVar10 = (int)param_2;
  if (cVar1 == '\x06') {
LAB_0023bbf0:
    iVar9 = FastDecTimerS32(param_2 + 0xe4);
    if (iVar9 != 0) {
      if (*(char *)(param_1 + 0xbc) == '\x02') {
        iVar9 = FastDecTimerU8(param_2 + 0xe9);
        if (iVar9 == 0) {
          if (*(char *)(iVar10 + 0xea) == '\0') {
            M1284_0023ad28(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
          else {
            M1284_0023aea0(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(0x14,0x23b6f4);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
        }
        else {
          bVar11 = *(byte *)(iVar10 + 0xea) ^ 1;
          *(byte *)(iVar10 + 0xea) = bVar11;
          if (bVar11 == 0) {
            uVar12 = MB_randRange(4,6);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 4;
          }
          else {
            uVar12 = MB_randRange(0x14,0x32);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 3;
          }
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x20) = 3;
        M1284_0023aea0(param_1,param_2);
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x14,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                           param_2);
        *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
      }
    }
  }
  else {
    if (cVar1 != '\x05') {
      if (cVar1 == '\x04') {
        *(undefined1 *)(param_1 + 0x20) = 3;
        if (*(char *)(iVar10 + 0x102) != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0xbc) = 5;
        return;
      }
      if (cVar1 != '\x03') {
        if (cVar1 != '\x02') {
          if (cVar1 != '\x01') {
            return;
          }
          if (*(char *)(param_1 + 0x20) != '\x04') {
            iVar10 = FastDecTimerS32(param_2 + 0xe4);
            if (iVar10 == 0) {
              return;
            }
            *(undefined1 *)(param_1 + 0x20) = 4;
            return;
          }
          iVar9 = FastDecTimerS32(param_2 + 0xe4);
          if (iVar9 == 0) {
            return;
          }
          M1284_0023ad28(param_1,param_2);
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          bVar11 = *(char *)(iVar10 + 0xe9) + 1;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          *(byte *)(iVar10 + 0xe9) = bVar11;
          if (bVar11 < 0xb) {
            return;
          }
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          *(undefined1 *)(iVar10 + 0xe9) = 0;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          *(undefined1 *)(param_1 + 0x20) = 3;
          auVar13 = loadVectorLeftIndexed(4,0x23b6f4);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          return;
        }
        goto LAB_0023bbf0;
      }
    }
    FastDecTimerS32(param_2 + 0xec);
    FastDecTimerS32(param_2 + 0xe4);
    if (*(char *)(param_1 + 0x20) == '\x05') {
      iVar9 = *(int *)(iVar10 + 0xe4);
      if (*(int *)(iVar10 + 0xec) == 0) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x10,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xec,
                           param_2);
        *(undefined4 *)(iVar10 + 0xecU & 0xfffffffc) = uVar5;
        auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar14,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar15);
        iVar9 = (int)(animationSpeed * 60.5);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                           param_2);
        *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        *(undefined1 *)(param_1 + 0x20) = 4;
      }
      if (*(char *)(iVar10 + 0xeb) == '\x01' && iVar9 == 0) {
        M1284_0023ad28(param_1,param_2);
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                           param_2);
        *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar6 = fVar2 - g_heroPosition.y;
      fVar7 = fVar3 - g_heroPosition.x;
      fVar4 = *(float *)(param_1 + 0x18);
      fVar8 = fVar4 - g_heroPosition.z;
      fVar6 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      if (((*(int *)(iVar10 + 0xec) == 0) && (fVar6 < 200.0)) && (60.0 < fVar6)) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x10,0x23b6f4);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xec,
                           param_2);
        *(undefined4 *)(iVar10 + 0xecU & 0xfffffffc) = uVar5;
        *(float *)(iVar10 + 0xd0) = fVar3;
        *(float *)(iVar10 + 0xd4) = fVar2;
        *(float *)(iVar10 + 0xd8) = fVar4;
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined1 *)(iVar10 + 0xeb) = 0;
        *(undefined4 *)(iVar10 + 0xdc) = uVar5;
        *(undefined1 *)(param_1 + 0x20) = 5;
        return;
      }
      if (*(char *)(param_1 + 0xbc) == '\x03') {
        *(undefined1 *)(param_1 + 0x20) = 4;
        if (*(int *)(iVar10 + 0xe4) == 0) {
          M1284_0023ad28(param_1,param_2);
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        }
      }
      else if (*(int *)(iVar10 + 0xe4) == 0) {
        iVar9 = FastDecTimerU8(param_2 + 0xe9);
        if (iVar9 == 0) {
          if (*(char *)(iVar10 + 0xea) == '\0') {
            M1284_0023ad28(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
          else {
            M1284_0023aea0(param_1,param_2);
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(0x14,0x23b6f4);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorMultiplyAddFloatingPoint
                                (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                               param_2);
            *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
          }
        }
        else {
          bVar11 = *(byte *)(iVar10 + 0xea) ^ 1;
          *(byte *)(iVar10 + 0xea) = bVar11;
          if (bVar11 == 0) {
            uVar12 = MB_randRange(4,6);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 4;
          }
          else {
            uVar12 = MB_randRange(0x14,0x32);
            *(undefined1 *)(iVar10 + 0xe9) = uVar12;
            *(undefined1 *)(param_1 + 0x20) = 3;
          }
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(in_LR,0x23b6f4);
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar13 = vectorMultiplyAddFloatingPoint
                              (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                               ,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xe4,
                             param_2);
          *(undefined4 *)(iVar10 + 0xe4U & 0xfffffffc) = uVar5;
        }
      }
    }
  }
  return;
}


// 0x023be70 (0x14c8 bytes)
/* Moby 1284 */

void UpdateMoby_1284(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  f32 fVar9;
  Spline *pSVar10;
  ulonglong uVar11;
  uint uVar12;
  Vec4 *pVVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  short sVar27;
  int iVar28;
  int iVar29;
  short sVar30;
  void *pvVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  GPiece<32> local_90;
  
  pvVar8 = moby->pVar;
  dVar37 = 16.0;
  uVar23 = FastDoubleToInt((double)(*(float *)((int)pvVar8 + 0x20) * 16.0));
  *(uint *)((int)pvVar8 + 0xf4) = uVar23 & 0xfff0;
  dVar39 = 0.5;
  iVar24 = FastDoubleToInt
                     ((double)(float)((double)(float)((double)(longlong)
                                                              (int)*(short *)((int)pvVar8 + 0x24) -
                                                     0.5) * dVar37));
  uVar12 = (int)*(uint *)((int)pvVar8 + 0x20) >> 0x1f;
  if (iVar24 <= (int)(uVar23 & 0xfff0)) {
    *(uint *)((int)pvVar8 + 0xf4) = *(uint *)((int)pvVar8 + 0xf4) | 0xf;
  }
  iVar24 = 0;
  if (0x3f000000 < (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar8 + 0x20)) - uVar12)) {
    iVar25 = FastDoubleToInt((double)*(float *)((int)pvVar8 + 0x20));
    iVar28 = (int)*(short *)((int)pvVar8 + 0x24);
    iVar24 = iVar28 >> 0x1f;
    iVar29 = (int)*(short *)((int)pvVar8 + 0x24);
    iVar24 = ((iVar25 - (iVar25 / ((iVar28 / 6 + iVar24) - (iVar28 / 6 + iVar24 >> 0x1f))) *
                        ((iVar28 / 6 + iVar24) - (iVar28 / 6 + iVar24 >> 0x1f))) * 0x10) /
             ((iVar29 / 6 + (iVar29 >> 0x1f)) - (iVar29 / 6 + (iVar29 >> 0x1f) >> 0x1f));
    iVar24 = *(int *)((int)pvVar8 + 0xf4) + (iVar24 + (iVar24 >> 0x1f & -iVar24) & 0xfU);
  }
  *(int *)((int)pvVar8 + 0xf4) = iVar24;
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      uVar32 = 0;
      moby->scale = moby->scale * 15.0;
      do {
        uVar26 = FUN_0024ec68(moby,uVar32,(int)uVar32 + 0x534);
        uVar11 = uVar32 & 0xffffffff;
        iVar24 = (int)uVar32 + 1;
        uVar32 = (ulonglong)iVar24;
        *(undefined4 *)((int)pvVar8 + (int)(uVar11 << 2) + 0x80) = uVar26;
      } while (iVar24 < 7);
      iVar24 = 0;
      *(MobyInstance **)((int)pvVar8 + 0x9c) = moby;
      pvVar31 = pvVar8;
      do {
        pSVar10 = Splines[*(int *)((int)pvVar31 + 0x70)];
        pVVar13 = pSVar10->points + pSVar10->cnt + -1;
        fVar3 = pSVar10->points[0].y - pVVar13->y;
        fVar2 = pSVar10->points[0].x - pVVar13->x;
        fVar4 = pSVar10->points[0].z - pVVar13->z;
        if ((double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) < dVar39) {
          pSVar10->cnt = pSVar10->cnt + -1;
        }
        iVar24 = iVar24 + 1;
        pvVar31 = (void *)((int)pvVar31 + 4);
      } while (iVar24 < 4);
      fVar3 = g_FrameTime * 42.0 * 0.1;
      *(float *)((int)pvVar8 + 0xbc) = fVar3;
      fVar2 = (moby->rotation).z + 1.5707963;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar2 = fVar5 * fVar5;
      fVar4 = fVar2 * fVar2 * fVar5;
      fVar6 = fVar2 * fVar4;
      *(float *)((int)pvVar8 + 0xc0) =
           (fVar2 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
           fVar3;
      fVar2 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar8 + 200) = 0;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x70)];
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar2 = fVar5 * fVar5;
      fVar4 = fVar2 * fVar2 * fVar5;
      fVar6 = fVar2 * fVar4;
      *(float *)((int)pvVar8 + 0xc4) =
           (fVar2 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
           fVar3;
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      fVar3 = pSVar10->points[0].w;
      *(undefined2 *)((int)pvVar8 + 0xac) = 1;
      (moby->pos).w = fVar3;
      *(undefined2 *)((int)pvVar8 + 0xae) = 0;
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      *(undefined1 *)((int)pvVar8 + 0xea) = 0;
      *(undefined1 *)((int)pvVar8 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar8 + 0xf0) = 0xffffffff;
      *(undefined1 *)((int)pvVar8 + 0x100) = 1;
      moby->state = '\x01';
      *(undefined1 *)((int)pvVar8 + 0x102) = 8;
      *(undefined4 *)((int)pvVar8 + 0x108) = 0;
    }
    else if (bVar1 < 2) {
      if (g_heroState == TURRET_PLANE_UI) {
        moby->state = '\x02';
      }
    }
    else if (bVar1 < 3) {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      if (*(int *)((int)pvVar8 + 0xf0) == -1) {
        iVar24 = RegisterHUDCallback
                           (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                            &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868
                            ,(int *)((int)pvVar8 + 0xf4),
                            (int)((longlong)*(short *)((int)pvVar8 + 0x24) << 4) + 0xf);
        *(int *)((int)pvVar8 + 0xf0) = iVar24;
      }
      *(float *)((int)pvVar8 + 0xbc) =
           (g_FrameTime * 42.0 - *(float *)((int)pvVar8 + 0xbc)) * 0.1 +
           *(float *)((int)pvVar8 + 0xbc);
      iVar24 = M1284_00238f88(moby,pvVar8,0,1);
      if (iVar24 != 0) {
        moby->setByGroup = '\x01';
        *(undefined4 *)((int)pvVar8 + 0x104) = DAT_0078dc68;
        moby->state = '\x04';
        iVar24 = PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0x104) * 4 + 0x70)
                                   ]);
        *(short *)((int)pvVar8 + 0xac) = (short)iVar24;
        sVar27 = MB_randRange(3,7);
        sVar27 = *(short *)((int)pvVar8 + 0xac) + sVar27;
        iVar24 = *(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0x104) * 4 + 0x70);
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        sVar27 = sVar27 - (short)((int)sVar27 / Splines[iVar24]->cnt) * (short)Splines[iVar24]->cnt;
        sVar30 = sVar27 + -1;
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        *(short *)((int)pvVar8 + 0xae) = sVar30;
        if (sVar30 < 0) {
          *(short *)((int)pvVar8 + 0xae) =
               (short)Splines[*(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0x104) * 4 + 0x70)]->cnt
               + -1;
        }
      }
    }
    else {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      M1284_0023b710(moby,pvVar8);
      uVar32 = M1284_00239940
                         (moby,pvVar8,*(undefined4 *)((int)pvVar8 + 0x104),1);
      if (((uVar32 & 2) != 0) &&
         (*(int *)((int)pvVar8 + 0x104) !=
          *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4))) {
        *(undefined4 *)((int)pvVar8 + 0x104) =
             *(undefined4 *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4);
        iVar24 = PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar8 +
                                            *(int *)(&DAT_0078dc64 +
                                                    (uint)(byte)moby->setByGroup * 4) * 4 + 0x70)]);
        *(short *)((int)pvVar8 + 0xac) = (short)iVar24;
        sVar27 = MB_randRange(3,7);
        sVar27 = *(short *)((int)pvVar8 + 0xac) + sVar27;
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        sVar27 = sVar27 - (short)((int)sVar27 /
                                 Splines[*(int *)((int)pvVar8 +
                                                 *(int *)(&DAT_0078dc64 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0x70)]->cnt) *
                          (short)Splines[*(int *)((int)pvVar8 +
                                                 *(int *)(&DAT_0078dc64 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0x70)]->cnt;
        sVar30 = sVar27 + -1;
        *(short *)((int)pvVar8 + 0xac) = sVar27;
        *(short *)((int)pvVar8 + 0xae) = sVar30;
        if (sVar30 < 0) {
          *(short *)((int)pvVar8 + 0xae) =
               (short)Splines[*(int *)((int)pvVar8 +
                                      *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4) * 4
                                      + 0x70)]->cnt + -1;
        }
      }
      if (moby->setByGroup == '\x04') {
        MB_ColorDyingMoby(moby,(int)pvVar8 + 0x60);
      }
      else {
        M1284_00239d98(moby,pvVar8);
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 6) {
      M1284_0023b710(moby,pvVar8);
      fVar3 = *(float *)((int)pvVar8 + 0xd4) - g_heroPosition.y;
      fVar2 = *(float *)((int)pvVar8 + 0xd0) - g_heroPosition.x;
      fVar4 = *(float *)((int)pvVar8 + 0xd8) - g_heroPosition.z;
      if (*(char *)((int)pvVar8 + 0xeb) == '\0') {
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
        }
        fVar5 = g_FrameTime;
        *(float *)((int)pvVar8 + 0xbc) =
             (g_FrameTime * 30.0 - *(float *)((int)pvVar8 + 0xbc)) * 0.1 +
             *(float *)((int)pvVar8 + 0xbc);
        if (SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) <= fVar5 * 40.0) {
          *(undefined4 *)((int)pvVar8 + 0xe4) = 0;
          *(undefined1 *)((int)pvVar8 + 0xeb) = 1;
        }
        else {
          fVar7 = g_heroPosition.y - *(float *)((int)pvVar8 + 0xd4);
          fVar6 = g_heroPosition.x - *(float *)((int)pvVar8 + 0xd0);
          fVar14 = g_heroPosition.z - *(float *)((int)pvVar8 + 0xd8);
          fVar4 = 0.0;
          fVar3 = SQRT(fVar14 * fVar14 + fVar6 * fVar6 + fVar7 * fVar7);
          fVar2 = (fVar5 * 40.0) / fVar3;
          fVar5 = fVar4;
          if (0.0 - fVar3 < 0.0) {
            fVar5 = fVar14 * fVar2;
          }
          fVar15 = fVar4;
          if (0.0 - fVar3 < 0.0) {
            fVar15 = fVar7 * fVar2;
          }
          if (0.0 - fVar3 < 0.0) {
            fVar4 = fVar6 * fVar2;
          }
          if (fVar3 - 0.0 < 0.0) {
            fVar5 = fVar14 * fVar2;
          }
          if (fVar3 - 0.0 < 0.0) {
            fVar15 = fVar7 * fVar2;
          }
          if (fVar3 - 0.0 < 0.0) {
            fVar4 = fVar6 * fVar2;
          }
          *(float *)((int)pvVar8 + 0xd8) = *(float *)((int)pvVar8 + 0xd8) + fVar5;
          *(float *)((int)pvVar8 + 0xd4) = *(float *)((int)pvVar8 + 0xd4) + fVar15;
          *(float *)((int)pvVar8 + 0xd0) = *(float *)((int)pvVar8 + 0xd0) + fVar4;
        }
        uVar32 = M1284_00238f88
                           (moby,pvVar8,*(undefined4 *)((int)pvVar8 + 0x104),1);
        if (((uVar32 & 2) != 0) &&
           (*(int *)((int)pvVar8 + 0x104) !=
            *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4))) {
          *(undefined4 *)((int)pvVar8 + 0x104) =
               *(undefined4 *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4);
          iVar24 = PathFindClosestPnt
                             (0.0,(Vec4 *)&moby->pos,
                              Splines[*(int *)((int)pvVar8 +
                                              *(int *)(&DAT_0078dc64 +
                                                      (uint)(byte)moby->setByGroup * 4) * 4 + 0x70)]
                             );
          *(short *)((int)pvVar8 + 0xac) = (short)iVar24;
          sVar27 = MB_randRange(3,7);
          sVar27 = *(short *)((int)pvVar8 + 0xac) + sVar27;
          *(short *)((int)pvVar8 + 0xac) = sVar27;
          sVar27 = sVar27 - (short)((int)sVar27 /
                                   Splines[*(int *)((int)pvVar8 +
                                                   *(int *)(&DAT_0078dc64 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0x70)]->cnt) *
                            (short)Splines[*(int *)((int)pvVar8 +
                                                   *(int *)(&DAT_0078dc64 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0x70)]->cnt;
          sVar30 = sVar27 + -1;
          *(short *)((int)pvVar8 + 0xac) = sVar27;
          *(short *)((int)pvVar8 + 0xae) = sVar30;
          if (sVar30 < 0) {
            *(short *)((int)pvVar8 + 0xae) =
                 (short)Splines[*(int *)((int)pvVar8 +
                                        *(int *)(&DAT_0078dc64 + (uint)(byte)moby->setByGroup * 4) *
                                        4 + 0x70)]->cnt + -1;
          }
        }
        iVar24 = CollLine(local_90,(int)pvVar8 + 0xd0,0,moby,0);
        if ((iVar24 != 0) &&
           ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
            ((g_CollOutput.pMoby)->oClass == ASTEROID_00D4)))) {
          *(undefined4 *)((int)pvVar8 + 0xec) = 0;
        }
      }
      else {
        uVar33 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar2 = (moby->pos).x - g_heroPosition.x;
        dVar37 = (double)FUN_005e8338((double)SQRT(fVar2 * fVar2 + fVar3 * fVar3),
                                      (double)(g_heroPosition.z - (moby->pos).z));
        dVar36 = 3.1415927410125732;
        dVar39 = 6.2831854820251465;
        dVar37 = -dVar37;
        OrganicDeltAngSpeed
                  (uVar33,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
                   (double)(g_FrameTime * 6.2831855),moby);
        dVar37 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar37,
                                    (double)(float)((double)DAT_0071f418 * dVar36),
                                    (double)(float)((double)DAT_0071f418 * dVar39),
                                    (double)(float)((double)g_FrameTime * dVar39));
        (moby->rotation).y = (float)dVar37;
        fVar3 = (moby->rotation).x;
        fVar3 = *(float *)((int)pvVar8 + 0xb8) * (1.5707964 - ABS(fVar3)) * 0.63661975 * -0.5 +
                fVar3;
        if (1.5707964 - fVar3 < 0.0) {
          fVar3 = 1.5707964;
        }
        if (fVar3 - -1.5707964 < 0.0) {
          fVar3 = -1.5707964;
        }
        (moby->rotation).x = fVar3 * 0.985;
        MB_WrapRot(fVar3 * 0.985);
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 1;
        }
        fVar3 = *(float *)((int)pvVar8 + 0xd0);
        fVar2 = *(float *)((int)pvVar8 + 0xd4);
        fVar4 = *(float *)((int)pvVar8 + 0xd8);
        *(float *)((int)pvVar8 + 0xbc) = *(float *)((int)pvVar8 + 0xbc) * 0.8;
        fVar5 = (moby->pos).y;
        fVar6 = (moby->pos).x;
        fVar20 = fVar2 - fVar5;
        fVar15 = fVar3 - fVar6;
        fVar7 = (moby->pos).z;
        fVar21 = fVar4 - fVar7;
        fVar14 = SQRT(fVar21 * fVar21 + fVar15 * fVar15 + fVar20 * fVar20);
        fVar17 = 0.0;
        fVar22 = 30.0 / fVar14;
        fVar18 = fVar17;
        if (0.0 - fVar14 < 0.0) {
          fVar18 = fVar20 * fVar22;
        }
        fVar16 = fVar17;
        if (0.0 - fVar14 < 0.0) {
          fVar16 = fVar15 * fVar22;
        }
        fVar19 = fVar17;
        if (0.0 - fVar14 < 0.0) {
          fVar19 = fVar21 * fVar22;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar18 = fVar20 * fVar22;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar16 = fVar15 * fVar22;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar19 = fVar21 * fVar22;
        }
        fVar18 = fVar18 + fVar5;
        fVar16 = fVar16 + fVar6;
        fVar19 = fVar19 + fVar7;
        fVar5 = fVar18 - g_heroPosition.y;
        fVar7 = fVar16 - g_heroPosition.x;
        fVar6 = fVar19 - g_heroPosition.z;
        fVar16 = fVar16 - fVar3;
        fVar18 = fVar18 - fVar2;
        fVar19 = fVar19 - fVar4;
        fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
        if (fVar5 != 30.0) {
          fVar6 = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18);
          if (g_FrameTime * 15.0 - fVar5 < 0.0) {
            fVar5 = g_FrameTime * 15.0;
          }
          fVar5 = fVar5 / fVar6;
          fVar7 = fVar17;
          if (0.0 - fVar6 < 0.0) {
            fVar7 = fVar19 * fVar5;
          }
          fVar14 = fVar17;
          if (0.0 - fVar6 < 0.0) {
            fVar14 = fVar18 * fVar5;
          }
          if (0.0 - fVar6 < 0.0) {
            fVar17 = fVar16 * fVar5;
          }
          if (fVar6 - 0.0 < 0.0) {
            fVar7 = fVar19 * fVar5;
          }
          if (fVar6 - 0.0 < 0.0) {
            fVar14 = fVar18 * fVar5;
          }
          if (fVar6 - 0.0 < 0.0) {
            fVar17 = fVar16 * fVar5;
          }
          fVar3 = fVar3 + fVar17;
          *(float *)((int)pvVar8 + 0xd8) = fVar4 + fVar7;
          *(float *)((int)pvVar8 + 0xd4) = fVar2 + fVar14;
          *(float *)((int)pvVar8 + 0xd0) = fVar3;
        }
        iVar24 = DAT_0096b2d0;
        if (DAT_0096b2d0 != 0) {
          *(float *)(DAT_0096b2d0 + 0x10) = fVar3;
          fVar2 = *(float *)((int)pvVar8 + 0xd4);
          *(float *)(iVar24 + 0x14) = fVar2;
          iVar25 = *(int *)(iVar24 + 0x78);
          *(undefined4 *)(iVar24 + 0x18) = *(undefined4 *)((int)pvVar8 + 0xd8);
          *(undefined4 *)(iVar24 + 0x1c) = *(undefined4 *)((int)pvVar8 + 0xdc);
          uVar33 = FUN_005e8338((double)((moby->pos).x - fVar3),(double)((moby->pos).y - fVar2));
          dVar37 = (double)FastDiffRots(uVar33,(double)*(float *)(iVar25 + 0x38));
          fVar3 = *(float *)(DAT_0096b2d0 + 0x14) - (moby->pos).y;
          fVar2 = *(float *)(DAT_0096b2d0 + 0x10) - (moby->pos).x;
          dVar38 = ABS(dVar37);
          dVar39 = (double)FUN_005e8338((double)SQRT(fVar2 * fVar2 + fVar3 * fVar3),
                                        (double)((moby->pos).z - *(float *)(DAT_0096b2d0 + 0x18)));
          dVar39 = (double)FastDiffRots(-dVar39,(double)*(float *)(iVar25 + 0x34));
          dVar34 = 0.8726646304130554;
          dVar36 = 5.729578018188477;
          dVar35 = ABS(dVar39);
          if (0.8726646304130554 < dVar38) {
            dVar37 = (double)FastWrapRot
                                       (*(float *)(iVar25 + 0x38),
                                        (float)((double)((float)(dVar38 - 0.8726646304130554) *
                                                        5.729578) * dVar37));
            *(float *)(iVar25 + 0x38) = (float)dVar37;
          }
          if (dVar34 < dVar35) {
            dVar37 = (double)FastWrapRot
                                       (*(float *)(iVar25 + 0x34),
                                        (float)((double)(float)((double)(float)(dVar35 - dVar34) *
                                                               dVar36) * dVar39));
            *(float *)(iVar25 + 0x34) = (float)dVar37;
          }
        }
      }
      if (moby->setByGroup == '\x04') {
        MB_ColorDyingMoby(moby,(int)pvVar8 + 0x60);
      }
      else {
        M1284_00239d98(moby,pvVar8);
      }
      RegisterFuncForMoby(&PTR_M1284_0023b238_00709c10,moby);
    }
    else if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
  }
  else if (bVar1 < 8) {
    if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
    M1284_00238f88(moby,pvVar8,*(undefined4 *)((int)pvVar8 + 0x104),0);
    dVar39 = 3.1415927410125732;
    dVar37 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 3.1415927);
    (moby->rotation).x = (float)dVar37;
    iVar24 = FastDecTimerS32((int)pvVar8 + 0xe4);
    if (iVar24 != 0) {
      iVar24 = *(int *)((int)pvVar8 + 0x98);
      if (iVar24 != 0) {
        iVar25 = *(int *)(iVar24 + 0x78);
        *(float *)(iVar25 + 0x10) = *(float *)((int)pvVar8 + 0xc0) * 0.7;
        *(float *)(iVar25 + 0x14) = *(float *)((int)pvVar8 + 0xc4) * 0.7;
        fVar3 = *(float *)((int)pvVar8 + 200) * 0.7;
        *(float *)(iVar25 + 0x18) = fVar3;
        *(undefined4 *)(iVar25 + 0x1c) = *(undefined4 *)((int)pvVar8 + 0xcc);
        *(float *)(iVar25 + 0x18) = g_FrameTime * 20.0 + fVar3;
        *(undefined1 *)(iVar24 + 0x20) = 3;
        *(float *)(iVar24 + 0x10) = *(float *)(iVar24 + 0x10) + *(float *)(iVar25 + 0x10);
        *(float *)(iVar24 + 0x14) = *(float *)(iVar24 + 0x14) + *(float *)(iVar25 + 0x14);
        *(float *)(iVar24 + 0x18) = *(float *)(iVar24 + 0x18) + *(float *)(iVar25 + 0x18);
        dVar37 = (double)MB_randRangeFloat
                                   (g_FrameTime * -0.34906584,
                                    g_FrameTime * 0.34906584);
        *(float *)(iVar25 + 0x30) = (float)dVar37;
        dVar36 = -3.1415927410125732;
        dVar37 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * -3.1415927410125732),
                                    (float)((double)g_FrameTime * dVar39));
        *(float *)(iVar25 + 0x34) = (float)dVar37;
        dVar37 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar36),
                                    (float)((double)g_FrameTime * dVar39));
        *(float *)(iVar25 + 0x38) = (float)dVar37;
        *(undefined1 *)(iVar24 + 0xa4) = 0xff;
        *(undefined8 *)(iVar24 + 0x38) = 0x40404000000000;
        *(undefined4 *)((int)pvVar8 + 0x98) = 0;
      }
      moby->state = '\b';
    }
  }
  else if (bVar1 < 9) {
    if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
    fVar3 = *(float *)((int)pvVar8 + 0xc0) * 1.025;
    *(float *)((int)pvVar8 + 0xc0) = fVar3;
    *(float *)((int)pvVar8 + 0xc4) = *(float *)((int)pvVar8 + 0xc4) * 1.025;
    *(float *)((int)pvVar8 + 200) = *(float *)((int)pvVar8 + 200) * 1.025 + DAT_0071f418 * 15.0;
    (moby->pos).x = (moby->pos).x + fVar3;
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0xc4);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 200);
    uVar33 = FUN_005e8338((double)*(float *)((int)pvVar8 + 0xc0),
                          (double)*(float *)((int)pvVar8 + 0xc4));
    dVar37 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar8 + 0xc0) *
                                               *(float *)((int)pvVar8 + 0xc0) +
                                               *(float *)((int)pvVar8 + 0xc4) *
                                               *(float *)((int)pvVar8 + 0xc4)),
                                  (double)*(float *)((int)pvVar8 + 200));
    dVar36 = 3.1415927410125732;
    dVar39 = 6.2831854820251465;
    dVar37 = -dVar37;
    OrganicDeltAngSpeed
              (uVar33,(double)(DAT_0071f418 * 3.1415927),(double)(DAT_0071f418 * 6.2831855),
               (double)(g_FrameTime * 6.2831855),moby);
    dVar37 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,dVar37,
                                (double)(float)((double)DAT_0071f418 * dVar36),
                                (double)(float)((double)DAT_0071f418 * dVar39),
                                (double)(float)((double)g_FrameTime * dVar39));
    (moby->rotation).y = (float)dVar37;
    fVar3 = (moby->rotation).x;
    fVar3 = *(float *)((int)pvVar8 + 0xb8) * (1.5707964 - ABS(fVar3)) * 0.63661975 * -0.5 + fVar3;
    if (1.5707964 - fVar3 < 0.0) {
      fVar3 = 1.5707964;
    }
    if (fVar3 - -1.5707964 < 0.0) {
      fVar3 = -1.5707964;
    }
    (moby->rotation).x = fVar3 * 0.985;
    MB_WrapRot(fVar3 * 0.985);
    fVar9 = (moby->pos).x;
    uVar12 = (int)fVar9 >> 0x1f;
    iVar24 = (uVar12 >> 1 ^ (uint)fVar9) - uVar12;
    if ((((iVar24 < 0x40000000) || (0x447f4000 < iVar24)) ||
        (fVar9 = (moby->pos).y, uVar12 = (int)fVar9 >> 0x1f,
        iVar24 = (uVar12 >> 1 ^ (uint)fVar9) - uVar12, 0x447f4000 < iVar24 || iVar24 < 0x40000000))
       || ((fVar9 = (moby->pos).z, uVar12 = (int)fVar9 >> 0x1f,
           iVar24 = (uVar12 >> 1 ^ (uint)fVar9) - uVar12, iVar24 < 0x40000000 ||
           (0x447f4000 < iVar24)))) {
      if (*(int *)((int)pvVar8 + 0xf0) != -1) {
        Hud_SetEntryValueById(*(int *)((int)pvVar8 + 0xf0),0);
        *(undefined4 *)((int)pvVar8 + 0xf0) = 0xffffffff;
      }
      DeleteMoby(moby);
      return;
    }
  }
  fVar9 = (moby->pos).x;
  uVar12 = (int)fVar9 >> 0x1f;
  fVar2 = 12.0;
  fVar3 = (moby->pos).x;
  if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41400000) {
    (moby->pos).x = 12.0;
    fVar3 = fVar2;
  }
  if (1011.0 < fVar3) {
    (moby->pos).x = 1011.0;
  }
  fVar9 = (moby->pos).y;
  uVar12 = (int)fVar9 >> 0x1f;
  fVar3 = (moby->pos).y;
  if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41400000) {
    (moby->pos).y = 12.0;
    fVar3 = fVar2;
  }
  if (1011.0 < fVar3) {
    (moby->pos).y = 1011.0;
  }
  fVar9 = (moby->pos).z;
  uVar12 = (int)fVar9 >> 0x1f;
  fVar3 = (moby->pos).z;
  if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41400000) {
    (moby->pos).z = 12.0;
    fVar3 = fVar2;
  }
  if (1011.0 < fVar3) {
    (moby->pos).z = 1011.0;
  }
  if (moby->setByGroup == '\x04') {
    iVar24 = *(int *)((int)pvVar8 + 0x108);
    if (iVar24 == 0) {
      uVar26 = Spawn_Moby352(moby);
      *(undefined4 *)((int)pvVar8 + 0x108) = uVar26;
    }
    else if (2 < *(byte *)(iVar24 + 0x20)) {
      *(undefined1 *)(iVar24 + 0x20) = 1;
    }
  }
  else {
    iVar24 = *(int *)((int)pvVar8 + 0x108);
    if (iVar24 != 0) {
      if (*(short *)(iVar24 + 0xa6) == 0x160) {
        bVar1 = *(byte *)(iVar24 + 0x20);
        if ((bVar1 != 0xfe) && (bVar1 != 0xfd)) {
          if (bVar1 < 3) {
            *(undefined1 *)(iVar24 + 0x20) = 3;
          }
          goto LAB_0023d2e0;
        }
      }
      *(undefined4 *)((int)pvVar8 + 0x108) = 0;
    }
  }
LAB_0023d2e0:
  M1284_002389c8(moby,pvVar8);
  *(undefined1 *)((int)pvVar8 + 0x103) = 0;
  return;
}


