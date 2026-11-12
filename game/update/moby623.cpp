// game/update/moby623.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x3e30b0-0x3e70b0
#include "game/update/moby623.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby617.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x03e30b0 (0x29c bytes)
// inlined: FastRSqrt @0x3e3198
double M623_003e30b0
                 (double param_1,longlong param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar18 = (double)*param_4;
  dVar17 = (double)param_4[1];
  iVar9 = 0;
  piVar5 = *(int **)((int)Splines + (int)(param_2 << 2));
  bVar8 = false;
  dVar19 = 512.0;
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  if (0 < *piVar5 + -1) {
    iVar10 = 0;
    dVar12 = 0.0;
    do {
      if ((*(int *)((int)piVar5 + iVar10 + 0x1c) != 0) ||
         (*(int *)((int)piVar5 + iVar10 + 0x2c) != 0)) {
        dVar14 = (double)*(float *)((int)piVar5 + iVar10 + 0x14);
        dVar16 = (double)*(float *)((int)piVar5 + iVar10 + 0x10);
        fVar1 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x24) - dVar14);
        fVar2 = (float)((double)*(float *)((int)piVar5 + iVar10 + 0x20) - dVar16);
        dVar15 = (double)(float)(dVar18 - dVar16);
        dVar13 = (double)(float)(dVar17 - dVar14);
        fVar7 = fVar2 * fVar2 + fVar1 * fVar1;
        dVar11 = dVar12;
        dVar21 = dVar12;
        if (SQRT(fVar7) != 0.0) {
          fVar6 = 1.0 / SQRT(fVar7);
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
          dVar21 = (double)(fVar6 * fVar2);
          dVar11 = (double)(fVar6 * fVar1);
        }
        dVar20 = ABS((double)(float)(dVar13 * dVar21 - (double)(float)(dVar15 * dVar11)));
        if (dVar20 - dVar19 < 0.0) {
          dVar19 = dVar20;
        }
        if (dVar20 <= param_1) {
          fVar1 = (float)(dVar15 * dVar21 + (double)(float)(dVar13 * dVar11));
          if ((SQRT(fVar7) < fVar1) || (fVar1 < 0.0)) {
            dVar11 = (double)SQRT((float)(dVar15 * dVar15 + (double)(float)(dVar13 * dVar13)));
            if (dVar11 < param_1) {
              bVar8 = true;
              dVar18 = (double)(float)(dVar13 * (double)(float)(param_1 / dVar11));
              dVar21 = (double)(float)(dVar15 * (double)(float)(param_1 / dVar11));
              dVar17 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar17 = dVar18;
              }
              dVar13 = dVar12;
              if (0.0 - dVar11 < 0.0) {
                dVar13 = dVar21;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar17 = dVar18;
              }
              if (dVar11 - 0.0 < 0.0) {
                dVar13 = dVar21;
              }
              dVar17 = (double)(float)(dVar17 + dVar14);
              dVar18 = (double)(float)(dVar13 + dVar16);
            }
          }
          else {
            fVar2 = SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar11 * dVar11)));
            bVar8 = true;
            dVar18 = (double)(float)((double)(fVar1 / fVar2) * dVar11);
            dVar11 = (double)(float)((double)(fVar1 / fVar2) * dVar21);
            dVar17 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar17 = dVar18;
            }
            dVar21 = dVar12;
            if (0.0 - fVar2 < 0.0) {
              dVar21 = dVar11;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar17 = dVar18;
            }
            if (fVar2 - 0.0 < 0.0) {
              dVar21 = dVar11;
            }
            fVar1 = (float)(dVar13 - dVar17);
            fVar2 = (float)(dVar15 - dVar21);
            dVar15 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            dVar11 = (double)((float)(param_1 / dVar15) * fVar1);
            dVar13 = (double)((float)(param_1 / dVar15) * fVar2);
            dVar18 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar18 = dVar11;
            }
            dVar20 = dVar12;
            if (0.0 - dVar15 < 0.0) {
              dVar20 = dVar13;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar18 = dVar11;
            }
            if (dVar15 - 0.0 < 0.0) {
              dVar20 = dVar13;
            }
            dVar17 = (double)(float)((double)(float)(dVar17 + dVar18) + dVar14);
            dVar18 = (double)(float)((double)(float)(dVar21 + dVar20) + dVar16);
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar9 < *piVar5 + -1);
    if (bVar8) {
      *param_5 = (float)dVar18;
      param_5[1] = (float)dVar17;
      param_5[2] = fVar3;
      param_5[3] = fVar4;
    }
  }
  return dVar19;
}


// 0x03e3378 (0x3ec bytes)
// inlined: FastAtan2 @0x3e3484
ulonglong M623_003e3378(double param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x110;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar12;
  puVar8[0x24] = in_LR;
  puVar8[0x1c] = in_f26;
  puVar8[0x1d] = in_f27;
  puVar8[0x1e] = in_f28;
  puVar8[0x1f] = in_f29;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  fVar4 = *param_3 - *(float *)(param_2 + 0x10);
  fVar1 = param_3[1] - *(float *)(param_2 + 0x14);
  puVar8[0x1a] = unaff_r30;
  puVar8[0x1b] = unaff_r31;
  fVar2 = ABS(fVar4);
  fVar5 = ABS(fVar1);
  *(float *)(puVar8 + 0x12) = fVar4;
  puVar8[0x19] = unaff_r29;
  *(float *)((int)puVar8 + 0x94) = fVar1;
  iVar7 = *(int *)(param_2 + 0x78);
  *(float *)(puVar8 + 0x13) = fVar2 - fVar5;
  dVar29 = 0.0;
  fVar4 = *(float *)(iVar7 + 0x294);
  uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x12));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar3 = ABS(*(float *)((int)puVar8 + 0x94));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  puVar8[0x18] = unaff_r28;
  dVar27 = dVar29;
  if (0.0 < fVar1) {
    lVar18 = uVar12 - 0x100;
    lVar17 = uVar12 - 0x74;
    lVar15 = uVar12 - 100;
    lVar20 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x15) = fVar1;
    *(float *)(puVar8 + 0x14) = fVar1;
    *(float *)((int)puVar8 + 0xa4) = fVar1;
    *(float *)((int)puVar8 + 0x9c) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar2;
    *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar1;
    *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar18 + 0x9c) = *(float *)((int)lVar18 + 0x8c) * fVar1 * fVar1;
      iVar9 = (int)lVar17;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar12 - 0x74;
    pfVar19 = (float *)&DAT_007358e0;
    lVar20 = 4;
    lVar15 = lVar18;
    lVar17 = lVar13;
    do {
      fVar1 = *pfVar19;
      fVar2 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x9c) = *(float *)((int)lVar17 + 0x9c) * fVar1;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar15 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar18;
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar9 + 0x9c)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar5);
  }
  dVar21 = (double)FastWrapRot((float)dVar27,fVar4 * 1.5);
  fVar4 = (float)(dVar21 + 1.570796251296997);
  dVar23 = (double)*(float *)(param_2 + 0x14);
  fVar1 = (float)((double)param_3[1] - dVar23);
  dVar24 = (double)*(float *)(param_2 + 0x10);
  fVar5 = (float)((double)*param_3 - dVar24);
  fVar6 = *(float *)(param_2 + 0x18);
  dVar26 = (double)fVar6;
  fVar2 = (float)((double)param_3[2] - dVar26);
  dVar27 = (double)(float)(3.141592502593994 - dVar21);
  if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
    dVar27 = dVar21;
  }
  fVar3 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar3 = fVar4;
  }
  dVar25 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1);
  dVar22 = (double)(float)(-3.141592502593994 - dVar21);
  if ((double)(float)(-3.141592502593994 - dVar21) - dVar27 < 0.0) {
    dVar22 = dVar27;
  }
  fVar1 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  dVar21 = (double)(float)(dVar22 * dVar22);
  fVar11 = fVar1 * fVar1;
  dVar28 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar22));
  fVar2 = fVar11 * fVar11 * fVar1;
  dVar27 = (double)(float)(dVar21 * dVar28);
  fVar3 = fVar11 * fVar2;
  fVar5 = (float)(dVar26 - (double)param_3[2]);
  fVar4 = (float)((double)((float)(dVar21 * dVar27) * 2.601887e-06 +
                          (float)(dVar27 * -0.0001980741071747616 +
                                 (double)(float)(dVar28 * 0.008333025500178337 +
                                                (double)(float)((double)(float)(dVar21 * dVar22) *
                                                                -0.16666656732559204 + dVar22)))) *
                  dVar25 + dVar23);
  fVar1 = (float)((double)(fVar11 * fVar3 * 2.601887e-06 +
                          fVar3 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar11 * fVar1 * -0.16666657 + fVar1) * dVar25 +
                 dVar24);
  fVar2 = (float)((double)fVar4 - (double)param_3[1]);
  fVar3 = (float)((double)fVar1 - (double)*param_3);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar4;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(undefined4 *)((int)puVar8 + 0x8c) = *(undefined4 *)((int)puVar8 + 0x7c);
  uVar14 = *(undefined4 *)(iVar7 + 0x2c0);
  dVar21 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar4 = (float)(param_1 / dVar21);
  dVar27 = dVar29;
  if (dVar29 - dVar21 < 0.0) {
    dVar27 = (double)(fVar5 * fVar4);
  }
  dVar22 = dVar29;
  if (dVar29 - dVar21 < 0.0) {
    dVar22 = (double)(fVar2 * fVar4);
  }
  dVar25 = dVar29;
  if (dVar29 - dVar21 < 0.0) {
    dVar25 = (double)(fVar3 * fVar4);
  }
  if (dVar21 - dVar29 < 0.0) {
    dVar27 = (double)(fVar5 * fVar4);
  }
  if (dVar21 - dVar29 < 0.0) {
    dVar22 = (double)(fVar2 * fVar4);
  }
  if (dVar21 - dVar29 < 0.0) {
    dVar25 = (double)(fVar3 * fVar4);
  }
  *(float *)(puVar8 + 0x11) = (float)(dVar27 + dVar26);
  *(float *)((int)puVar8 + 0x84) = (float)(dVar22 + dVar23);
  *(float *)(puVar8 + 0x10) = (float)(dVar25 + dVar24);
  uVar14 = MB_LineCrossesSpline(uVar14,uVar12 - 0xa0,uVar12 - 0x90);
  return (ulonglong)(LZCOUNT(uVar14) << 0x20) >> 0x25;
}


// 0x03e37b0 (0x8e0 bytes)
// inlined: FastAtan2 @0x3e3998, FastAtan2 @0x3e3b94, FastAtan2 @0x3e3d8c
void M623_003e37b0(double param_1,MobyInstance *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  longlong lVar15;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x160;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar13;
  puVar8[0x2e] = in_LR;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x27] = unaff_r31;
  puVar8[0x26] = unaff_r30;
  pvVar6 = param_2->pVar;
  if (((((int)param_2 >> 8 ^ worldUpdateTime) & 3) == 0) &&
     (iVar16 = MB_SplineFindRouteNode
                         (DAT_00853dbc * 0.4,(int)pvVar6 + 0x2c0,1,
                          (longlong)*(int *)((int)pvVar6 + 0x2c4),ZEXT48(&DAT_00850000),
                          &param_2->pos,param_3,(int)pvVar6 + 0x280), iVar16 == 0)) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  fVar1 = *(float *)((int)pvVar6 + 0x280);
  *(float *)(puVar8 + 0x12) = fVar1;
  fVar2 = *(float *)((int)pvVar6 + 0x284);
  fVar3 = (param_2->pos).y;
  fVar4 = (param_2->pos).x;
  *(float *)((int)puVar8 + 0x94) = fVar2;
  *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)((int)pvVar6 + 0x288);
  *(undefined4 *)((int)puVar8 + 0x9c) = *(undefined4 *)((int)pvVar6 + 0x28c);
  dVar26 = 0.7853981852531433;
  dVar27 = (double)SQRT((fVar4 - fVar1) * (fVar4 - fVar1) + (fVar3 - fVar2) * (fVar3 - fVar2));
  if ((5.0 < dVar27) && (dVar25 = 0.0, param_1 != 0.0)) {
    iVar16 = M623_003e3378((double)(DAT_00853dbc * 0.4),param_2,uVar13 - 0xd0);
    fVar4 = (param_2->pos).x;
    fVar3 = (param_2->pos).y;
    fVar1 = *(float *)(puVar8 + 0x12);
    fVar2 = *(float *)((int)puVar8 + 0x94);
    if (iVar16 != 0) {
      dVar22 = ABS((double)(fVar1 - fVar4));
      dVar23 = ABS((double)(fVar2 - fVar3));
      *(float *)(puVar8 + 0x17) = fVar1 - fVar4;
      *(float *)((int)puVar8 + 0xbc) = fVar2 - fVar3;
      *(float *)(puVar8 + 0x18) = (float)(dVar22 - dVar23);
      uVar19 = (ulonglong)(*(uint *)(puVar8 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0xbc) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar8 + 0x17));
      if ((double)*(float *)(puVar8 + 0x18) - dVar25 < 0.0) {
        dVar24 = dVar23;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar8 + 0xbc));
      if ((double)*(float *)(puVar8 + 0x18) - dVar25 < 0.0) {
        dVar23 = dVar22;
      }
      fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      if (dVar25 < dVar24) {
        lVar14 = uVar13 - 0x150;
        lVar17 = uVar13 - 0x5c;
        lVar20 = uVar13 - 0x4c;
        lVar21 = 2;
        fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar8 + 0x22) = fVar3;
        *(float *)(puVar8 + 0x21) = fVar3;
        *(float *)((int)puVar8 + 0x10c) = fVar3;
        *(float *)((int)puVar8 + 0x104) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar4;
        *(float *)((int)puVar8 + 0x10c) = *(float *)((int)puVar8 + 0x10c) * fVar3;
        *(float *)(puVar8 + 0x22) = *(float *)(puVar8 + 0x22) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0xf4) * fVar3 * fVar3;
          iVar16 = (int)lVar17;
          lVar14 = lVar14 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar20 = lVar20 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar20 = uVar13 - 0x5c;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar17 = lVar20;
        do {
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0x104) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar17 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar9 = (int)lVar20;
          lVar14 = lVar14 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0x104)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar1 + fVar2);
      }
      dVar25 = (double)FastWrapRot((float)dVar25,(float)param_1);
      OrganicDeltAng
                ((float)dVar25,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 g_FrameTime * 25.132742,&(param_2->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x290));
      goto LAB_003e3cc8;
    }
  }
  fVar10 = ABS(fVar1 - fVar4);
  fVar5 = ABS(fVar2 - fVar3);
  *(float *)((int)puVar8 + 0xac) = fVar1 - fVar4;
  *(float *)(puVar8 + 0x16) = fVar2 - fVar3;
  *(float *)((int)puVar8 + 0xb4) = fVar10 - fVar5;
  dVar25 = 0.0;
  uVar19 = (ulonglong)(*(uint *)((int)puVar8 + 0xac) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0xb4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x16) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar8 + 0xac));
  if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)(puVar8 + 0x16));
  if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
    fVar4 = fVar10;
  }
  if (0.0 < fVar1) {
    lVar14 = uVar13 - 0x150;
    lVar20 = uVar13 - 0x6c;
    lVar17 = uVar13 - 0x7c;
    lVar21 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x1e) = fVar1;
    *(float *)(puVar8 + 0x1d) = fVar1;
    *(float *)((int)puVar8 + 0xec) = fVar1;
    *(float *)((int)puVar8 + 0xe4) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) * fVar4;
    *(float *)((int)puVar8 + 0xec) = *(float *)((int)puVar8 + 0xec) * fVar1;
    *(float *)(puVar8 + 0x1e) = *(float *)(puVar8 + 0x1e) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xd4) * fVar1 * fVar1;
      iVar16 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar20 = uVar13 - 0x7c;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar17 = lVar20;
    do {
      fVar1 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xe4) * fVar1;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    lVar14 = lVar15;
    do {
      iVar16 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar9 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xe4)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar25 = (double)((float)(dVar25 + dVar26) * fVar3 + fVar2);
  }
  OrganicDeltAng
            ((float)dVar25,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             g_FrameTime * 25.132742,&(param_2->rotation).z,0x3e3764,
             (float *)((int)pvVar6 + 0x290));
LAB_003e3cc8:
  fVar1 = *(float *)(puVar8 + 0x12) - (param_2->pos).x;
  fVar2 = *(float *)((int)puVar8 + 0x94) - (param_2->pos).y;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar8 + 0x14) = fVar1;
  *(float *)((int)puVar8 + 0xa4) = fVar2;
  fVar1 = (param_2->rotation).z;
  *(float *)(puVar8 + 0x15) = fVar4 - fVar3;
  dVar25 = 0.0;
  uVar19 = (ulonglong)(*(uint *)(puVar8 + 0x14) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x15) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0xa4) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 0x14));
  if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar8 + 0xa4));
  if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar14 = uVar13 - 0x150;
    lVar20 = uVar13 - 0x8c;
    lVar17 = uVar13 - 0x9c;
    lVar21 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x1a) = fVar2;
    *(float *)(puVar8 + 0x19) = fVar2;
    *(float *)((int)puVar8 + 0xcc) = fVar2;
    *(float *)((int)puVar8 + 0xc4) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar4;
    *(float *)((int)puVar8 + 0xcc) = *(float *)((int)puVar8 + 0xcc) * fVar2;
    *(float *)(puVar8 + 0x1a) = *(float *)(puVar8 + 0x1a) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar2 * fVar2;
      iVar16 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar20 = uVar13 - 0x9c;
    pfVar18 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar17 = lVar20;
    do {
      fVar2 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar14 = 2;
    do {
      iVar16 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar9 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 0xc4)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar25 = (double)((float)(dVar25 + dVar26) * fVar5 + fVar3);
  }
  dVar26 = (double)FastSubRots(fVar1,(float)dVar25);
  if ((1.5707963705062866 <= dVar26) || (dVar27 <= 3.0)) {
    Delt(g_FrameTime,DAT_0071f418 * 6.0,(float *)((int)pvVar6 + 0xf4U));
  }
  else {
    Delt(g_FrameTime * 6.0,DAT_0071f418 * 6.0,(float *)((int)pvVar6 + 0xf4U));
  }
  fVar1 = (param_2->rotation).z;
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar5 = fVar3;
  }
  dVar26 = 2.0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar3 = fVar1 * fVar1;
  fVar11 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar3 * fVar3 * fVar1;
  fVar12 = fVar2 * fVar11;
  fVar10 = fVar3 * fVar4;
  *(float *)((int)puVar8 + 0x74) =
       (fVar2 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) * 2.0;
  *(float *)(puVar8 + 0xe) =
       (fVar3 * fVar10 * 2.601887e-06 +
       fVar10 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) * 2.0;
  MB_UpdateNavMove
            (0x3ff0000000000000,param_2,(MobyInstance *)((int)pvVar6 + 0xd0),puVar8 + 0xe,
             puVar8 + 0x10);
  if ((*(int *)((int)pvVar6 + 0x2d4) == 0) &&
     (dVar27 = (double)M623_003e30b0((double)(DAT_00853dbc * 0.4),
                                     *(undefined4 *)((int)pvVar6 + 0x2c0),&DAT_00850000,
                                     &param_2->pos,&param_2->pos), dVar26 < dVar27)) {
    auVar28 = ZEXT416(0xffffffff);
    auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    auVar28 = loadVectorLeftIndexed(0x48,0x3e3764);
    auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar28 = vectorMultiplyAddFloatingPoint
                        (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                         auVar29);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x2d4,
                       ZEXT48(pvVar6));
    *(undefined4 *)((int)pvVar6 + 0x2d4U & 0xfffffffc) = uVar7;
  }
  return;
}


// 0x03e4098 (0xcc bytes)
MobyInstance * M623_003e4098(int param_1,longlong param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  
  fVar1 = 120.0;
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar6 == (ushort *)0x0) {
    pMVar8 = (MobyInstance *)0x0;
  }
  else {
    pMVar8 = (MobyInstance *)0x0;
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if ((((pMVar7->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (pMVar7->state < 0x7f)) &&
         (fVar3 = (pMVar7->pos).y - *(float *)(param_1 + 0x14),
         fVar4 = (pMVar7->pos).x - *(float *)(param_1 + 0x10),
         fVar5 = (pMVar7->pos).z - *(float *)(param_1 + 0x18),
         fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3), fVar3 < fVar1)) {
        fVar1 = fVar3;
        pMVar8 = pMVar7;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return pMVar8;
}


// 0x03e41c8 (0xfa8 bytes)
// inlined: FastAtan2 @0x3e4588, FastAtan2 @0x3e4820, FastAtan2 @0x3e4d7c, FastAtan2 @0x3e4f30
void M623_003e41c8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  float fVar9;
  MobyInstance *pMVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  float *pfVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar17;
  longlong lVar18;
  float *pfVar24;
  longlong lVar23;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1a0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x36] = in_LR;
  puVar12[0x30] = in_f28;
  puVar12[0x31] = in_f29;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x2f] = unaff_r31;
  puVar12[0x2d] = unaff_r29;
  puVar12[0x2e] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar27 = ZEXT48(pvVar8);
  puVar12[0x2c] = unaff_r28;
  puVar12[0x2b] = unaff_r27;
  puVar12[0x2a] = unaff_r26;
  FastDecTimerS32(uVar27 + 0x2d4);
  dVar35 = 0.0;
  *(undefined4 *)((int)puVar12 + 0x94) = 0;
  pfVar19 = (float *)MB_damage(param_1,0x330000,0);
  if (pfVar19 != (float *)0x0) {
    fVar1 = (param_1->pos).x;
    fVar2 = (param_1->pos).y;
    *(float *)(puVar12 + 0xe) = fVar1;
    fVar3 = (param_1->pos).w;
    *(float *)((int)puVar12 + 0x74) = fVar2;
    *(f32 *)((int)puVar12 + 0x7c) = fVar3;
    fVar13 = (param_1->pos).z + 0.5;
    *(float *)(puVar12 + 0xf) = fVar13;
    fVar6 = DAT_00969db4;
    fVar5 = g_heroCGPos;
    fVar9 = pfVar19[8];
    if (fVar9 == 0.0) {
      fVar5 = *pfVar19;
      *(float *)(puVar12 + 0x10) = fVar5;
      fVar6 = pfVar19[1];
      *(float *)((int)puVar12 + 0x84) = fVar6;
      fVar4 = pfVar19[2];
      *(float *)(puVar12 + 0x11) = fVar4;
      *(float *)((int)puVar12 + 0x8c) = pfVar19[3];
    }
    else if (*(short *)((int)fVar9 + 0xa6) == 0x47) {
      *(float *)(puVar12 + 0x10) = g_heroCGPos;
      fVar4 = DAT_00969db8;
      *(float *)((int)puVar12 + 0x84) = fVar6;
      uVar21 = DAT_00969dbc;
      *(float *)(puVar12 + 0x11) = fVar4;
      *(undefined4 *)((int)puVar12 + 0x8c) = uVar21;
    }
    else if (((*(int *)((int)fVar9 + 0x24) == 0) ||
             (*(short *)(*(int *)((int)fVar9 + 0x24) + 0x46) != 5)) &&
            (*(short *)((int)fVar9 + 0xa6) != 0xba)) {
      fVar5 = *(float *)((int)fVar9 + 0x10);
      *(float *)(puVar12 + 0x10) = fVar5;
      fVar6 = *(float *)((int)fVar9 + 0x14);
      *(float *)((int)puVar12 + 0x84) = fVar6;
      fVar4 = *(float *)((int)fVar9 + 0x18);
      *(float *)(puVar12 + 0x11) = fVar4;
      *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)((int)fVar9 + 0x1c);
    }
    else {
      *(float *)(puVar12 + 0x10) = fVar1;
      *(float *)((int)puVar12 + 0x84) = fVar2;
      *(float *)(puVar12 + 0x11) = fVar13;
      *(f32 *)((int)puVar12 + 0x8c) = fVar3;
      fVar5 = fVar1;
      fVar6 = fVar2;
      fVar4 = fVar13;
    }
    if ((SQRT((fVar13 - fVar4) * (fVar13 - fVar4) +
              (fVar1 - fVar5) * (fVar1 - fVar5) + (fVar2 - fVar6) * (fVar2 - fVar6)) < 24.0) &&
       (iVar20 = CollLine(uVar16 - 0x130,uVar16 - 0x120,2,param_1,0), iVar20 != 0)) {
      pfVar19 = (float *)0x0;
    }
  }
  iVar20 = MB_HandleDamage
                     (param_1,pfVar19,uVar27 + 0x20,0,puVar12 + 0x12,(int)puVar12 + 0x94,0,4);
  if ((*(int *)(puVar12 + 0x12) != 1) && (param_1->state != '\x0e')) {
    fVar1 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar12 + 0x94);
    *(float *)((int)pvVar8 + 0x20) = fVar1;
    if ((double)fVar1 <= dVar35) {
      iVar20 = 1;
    }
    uVar21 = FastDoubleToInt((double)(DAT_00853dbc * 409.6));
    *(undefined4 *)((int)pvVar8 + 0x90) = uVar21;
    fVar1 = DAT_00853dbc * 0.4;
    *(undefined4 *)((int)pvVar8 + 0x94) = 9;
    *(float *)((int)pvVar8 + 0x98) = fVar1;
    fVar2 = DAT_00853df0;
    fVar1 = DAT_0071f418;
    *(undefined1 *)((int)pvVar8 + 0xad) = 0;
    *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar1;
    fVar1 = g_FrameTime;
    if (iVar20 < 3) {
      if ((-1 < iVar20) && (0 < iVar20)) {
        fVar1 = DAT_00853df4 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar8 + 0x80) = fVar1;
        fVar1 = g_FrameTime;
        *(float *)((int)pvVar8 + 0x88) = DAT_00853db4 * g_FrameTime;
        fVar2 = DAT_00853db8;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40b00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)((int)pfVar19[8] + 0x10);
        fVar2 = (param_1->pos).y - *(float *)((int)pfVar19[8] + 0x14);
        dVar31 = ABS((double)fVar1);
        dVar32 = ABS((double)fVar2);
        *(float *)(puVar12 + 0x17) = fVar1;
        *(float *)((int)puVar12 + 0xbc) = fVar2;
        *(float *)(puVar12 + 0x18) = (float)(dVar31 - dVar32);
        uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar12 + 0x17));
        if ((double)*(float *)(puVar12 + 0x18) - dVar35 < 0.0) {
          dVar29 = dVar32;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar32 = ABS((double)*(float *)((int)puVar12 + 0xbc));
        if ((double)*(float *)(puVar12 + 0x18) - dVar35 < 0.0) {
          dVar32 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar31 = dVar35;
        if (dVar35 < dVar29) {
          lVar17 = uVar16 - 400;
          lVar26 = uVar16 - 0x80;
          lVar23 = uVar16 - 0x90;
          lVar28 = 2;
          fVar5 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x11c) = fVar5;
          *(float *)((int)puVar12 + 0x114) = fVar5;
          *(float *)(puVar12 + 0x23) = fVar5;
          *(float *)(puVar12 + 0x22) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar6;
          *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar5;
          *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x110) = *(float *)((int)lVar17 + 0x100) * fVar5 * fVar5;
            iVar20 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar16 - 0x90;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar23 = lVar26;
          do {
            fVar5 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x110) = *(float *)((int)lVar17 + 0x110) * fVar5;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar17 = lVar18;
          dVar29 = dVar35;
          do {
            iVar20 = (int)lVar17;
            iVar14 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x110)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar31 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)((int)puVar12 + 0x9c) = (float)dVar31;
        fVar1 = pfVar19[6];
        *(float *)(puVar12 + 6) = pfVar19[4];
        *(float *)(puVar12 + 7) = fVar1;
        fVar1 = pfVar19[7];
        *(float *)((int)puVar12 + 0x34) = pfVar19[5];
        *(float *)((int)puVar12 + 0x3c) = fVar1;
        MB_VecAtan2Angles
                  (puVar12[6],puVar12[7],uVar16 - 0x104,uVar27 + 0x88,uVar27 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar12 + 0x9c),param_1,uVar27 + 0x70);
        param_1->state = '\x0e';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
        if (((pfVar19[8] == 0.0) || (iVar20 = *(int *)((int)pfVar19[8] + 0x24), iVar20 == 0)) ||
           (*(short *)(iVar20 + 0x46) != 5)) {
          MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        }
        else {
          MB_SpawnBoltsFromCrate(param_1,0x800,0xffffffffffffffff);
        }
      }
    }
    else if (iVar20 < 0xb) {
      if (iVar20 < 9) {
        *(float *)((int)pvVar8 + 0x88) = DAT_00853dac * g_FrameTime;
        fVar2 = DAT_00853db0;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar8 + 0x8c) = fVar2 * fVar1;
        fVar1 = (param_1->pos).x - *(float *)((int)pfVar19[8] + 0x10);
        fVar2 = (param_1->pos).y - *(float *)((int)pfVar19[8] + 0x14);
        dVar31 = ABS((double)fVar1);
        dVar32 = ABS((double)fVar2);
        *(float *)((int)puVar12 + 0xc4) = fVar1;
        *(float *)(puVar12 + 0x19) = fVar2;
        *(float *)((int)puVar12 + 0xcc) = (float)(dVar31 - dVar32);
        uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)((int)puVar12 + 0xc4));
        if ((double)*(float *)((int)puVar12 + 0xcc) - dVar35 < 0.0) {
          dVar29 = dVar32;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar32 = ABS((double)*(float *)(puVar12 + 0x19));
        if ((double)*(float *)((int)puVar12 + 0xcc) - dVar35 < 0.0) {
          dVar32 = dVar31;
        }
        fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar31 = dVar35;
        if (dVar35 < dVar29) {
          lVar17 = uVar16 - 400;
          lVar26 = uVar16 - 0x60;
          lVar23 = uVar16 - 0x70;
          lVar28 = 2;
          fVar5 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 0x13c) = fVar5;
          *(float *)((int)puVar12 + 0x134) = fVar5;
          *(float *)(puVar12 + 0x27) = fVar5;
          *(float *)(puVar12 + 0x26) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar6;
          *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar5;
          *(float *)((int)puVar12 + 0x13c) = *(float *)((int)puVar12 + 0x13c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x130) = *(float *)((int)lVar17 + 0x120) * fVar5 * fVar5;
            iVar20 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar16 - 0x70;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar23 = lVar26;
          do {
            fVar5 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x130) = *(float *)((int)lVar17 + 0x130) * fVar5;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar17 = lVar18;
          dVar29 = dVar35;
          do {
            iVar20 = (int)lVar17;
            iVar14 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x130)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar31 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)(puVar12 + 0x13) = (float)dVar31;
        fVar1 = pfVar19[6];
        *(float *)(puVar12 + 6) = pfVar19[4];
        *(float *)(puVar12 + 7) = fVar1;
        fVar1 = pfVar19[7];
        *(float *)((int)puVar12 + 0x34) = pfVar19[5];
        *(float *)((int)puVar12 + 0x3c) = fVar1;
        MB_VecAtan2Angles
                  (puVar12[6],puVar12[7],uVar16 - 0x108,uVar27 + 0x88,uVar27 + 0x8c);
        MB_StartKick((double)*(float *)(puVar12 + 0x13),param_1,uVar27 + 0x70);
        param_1->state = '\v';
        *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar27 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar27 + 0x60);
  if (*(int *)((int)pvVar8 + 0x38) != 0) {
    dVar29 = (double)MB_randRangeFloat(180.0,240.0);
    uVar21 = FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x2b0) = uVar21;
    *(undefined4 *)((int)pvVar8 + 0x38) = 0;
  }
  FastDecTimerS32(uVar27 + 0x2b0);
  if (*(int *)((int)pvVar8 + 0x2b0) == 0) {
    fVar1 = *(float *)((int)pvVar8 + 0x29c);
  }
  else {
    fVar1 = *(float *)((int)pvVar8 + 0x29c) + 20.0;
  }
  *(float *)((int)pvVar8 + 0x2a0) = fVar1;
  pSVar11 = Splines[*(int *)((int)pvVar8 + 0x2cc)];
  iVar20 = MB_getTargetInArea
                     (param_1,uVar27 + 0x120,pSVar11,0,0,pSVar11->points,pSVar11->cnt);
  if ((iVar20 != 2) &&
     ((fVar1 = *(float *)((int)pvVar8 + 0x274) - *(float *)((int)pvVar8 + 0x124),
      fVar2 = *(float *)((int)pvVar8 + 0x270) - *(float *)((int)pvVar8 + 0x120),
      *(float *)((int)pvVar8 + 0x2a0) < SQRT(fVar2 * fVar2 + fVar1 * fVar1) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0x128)))))) {
    *(undefined4 *)((int)pvVar8 + 0x164) = 2;
  }
  if (((-1 < *(int *)((int)pvVar8 + 0x2c8)) &&
      (iVar20 = M623_003e4098(param_1,*(int *)((int)pvVar8 + 0x2c8)), iVar20 != 0)) &&
     ((*(int *)((int)pvVar8 + 0x164) == 2 ||
      (fVar1 = (param_1->pos).y, fVar2 = (param_1->pos).x, fVar5 = fVar1 - *(float *)(iVar20 + 0x14)
      , fVar1 = fVar1 - *(float *)(*(int *)((int)pvVar8 + 0x160) + 0x14),
      fVar6 = fVar2 - *(float *)(iVar20 + 0x10),
      fVar2 = fVar2 - *(float *)(*(int *)((int)pvVar8 + 0x160) + 0x10),
      SQRT(fVar6 * fVar6 + fVar5 * fVar5) < SQRT(fVar2 * fVar2 + fVar1 * fVar1))))) {
    *(int *)((int)pvVar8 + 0x160) = iVar20;
    *(undefined4 *)((int)pvVar8 + 0x164) = 1;
  }
  if (*(int *)((int)pvVar8 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar8 + 0x160) = g_heroMobyPtr;
  }
  dVar31 = (double)FastWrapRot
                             (*(float *)((int)pvVar8 + 0x2d8),g_FrameTime * 9.424778);
  uVar15 = DAT_00853da8;
  uVar21 = DAT_00853da4;
  dVar29 = (double)(float)(3.141592502593994 - dVar31);
  if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
    dVar29 = dVar31;
  }
  dVar32 = (double)(float)(-3.141592502593994 - dVar31);
  if ((double)(float)(-3.141592502593994 - dVar31) - dVar29 < 0.0) {
    dVar32 = dVar29;
  }
  dVar29 = (double)(float)(dVar32 * dVar32);
  dVar34 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar32));
  dVar33 = (double)(float)(dVar29 * dVar34);
  *(float *)((int)pvVar8 + 0x2d8) = (float)dVar31;
  uVar22 = FastLerpColor
                     ((double)(((float)(dVar29 * dVar33) * 2.601887e-06 +
                                (float)(dVar33 * -0.0001980741071747616 +
                                       (double)(float)(dVar34 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar29 * 
                                                  dVar32) * -0.16666656732559204 + dVar32))) + 1.0)
                              * 0.5),uVar21,uVar15);
  param_1->glowRgba = uVar22;
  fVar1 = (param_1->rotation).z;
  if (((3 < param_1->state) && (param_1->state < 10)) &&
     (pMVar10 = *(MobyInstance **)((int)pvVar8 + 0x160), pMVar10 == g_heroMobyPtr)) {
    fVar5 = (pMVar10->pos).x - (param_1->pos).x;
    dVar33 = (double)fVar5;
    fVar2 = (pMVar10->pos).z;
    fVar6 = (pMVar10->pos).y - (param_1->pos).y;
    dVar32 = (double)fVar6;
    *(float *)((int)puVar12 + 0xac) = fVar5;
    *(float *)(puVar12 + 0x16) = fVar6;
    dVar31 = (double)(fVar2 - (param_1->pos).z);
    *(float *)((int)puVar12 + 0xb4) = (float)(ABS(dVar33) - ABS(dVar32));
    uVar25 = (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1d) & 4;
    dVar29 = ABS((double)*(float *)((int)puVar12 + 0xac));
    if ((double)*(float *)((int)puVar12 + 0xb4) - dVar35 < 0.0) {
      dVar29 = ABS(dVar32);
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    dVar34 = ABS((double)*(float *)(puVar12 + 0x16));
    if ((double)*(float *)((int)puVar12 + 0xb4) - dVar35 < 0.0) {
      dVar34 = ABS(dVar33);
    }
    fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    dVar30 = dVar35;
    if (dVar35 < dVar29) {
      lVar17 = uVar16 - 400;
      lVar26 = uVar16 - 0xa0;
      lVar23 = uVar16 - 0xb0;
      lVar28 = 2;
      fVar6 = (float)(dVar34 - dVar29) / (float)(dVar34 + dVar29);
      fVar9 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xfc) = fVar6;
      *(float *)((int)puVar12 + 0xf4) = fVar6;
      *(float *)(puVar12 + 0x1f) = fVar6;
      *(float *)(puVar12 + 0x1e) = fVar6;
      fVar6 = fVar9 * fVar9;
      *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar9;
      *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar6;
      *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar6 * fVar9;
      do {
        *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xe0) * fVar6 * fVar6;
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar26 = uVar16 - 0xb0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        fVar6 = *pfVar19;
        fVar9 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0xf0) = *(float *)((int)lVar17 + 0xf0) * fVar6;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar9;
        lVar23 = lVar23 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      dVar29 = dVar35;
      do {
        iVar20 = (int)lVar17;
        iVar14 = (int)lVar26;
        lVar17 = lVar17 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xf0)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar30 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar5);
    }
    dVar34 = (double)FastDiffRots(dVar30,(double)fVar1);
    *(float *)((int)puVar12 + 0xa4) = (float)dVar31;
    fVar1 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar32 * dVar32)));
    dVar32 = ABS((double)fVar1);
    *(float *)(puVar12 + 0x14) = fVar1;
    *(float *)(puVar12 + 0x15) = (float)(dVar32 - ABS(dVar31));
    uVar25 = (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1d) & 4;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    MVar7 = param_1->modeBits;
    dVar29 = ABS((double)*(float *)(puVar12 + 0x14));
    if ((double)*(float *)(puVar12 + 0x15) - dVar35 < 0.0) {
      dVar29 = ABS(dVar31);
    }
    dVar31 = ABS((double)*(float *)((int)puVar12 + 0xa4));
    if ((double)*(float *)(puVar12 + 0x15) - dVar35 < 0.0) {
      dVar31 = dVar32;
    }
    fVar2 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    if (dVar35 < dVar29) {
      lVar17 = uVar16 - 400;
      lVar23 = uVar16 - 0xd0;
      lVar26 = uVar16 - 0xc0;
      lVar28 = 2;
      fVar5 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar12 + 0xdc) = fVar5;
      *(float *)((int)puVar12 + 0xd4) = fVar5;
      *(float *)(puVar12 + 0x1b) = fVar5;
      *(float *)(puVar12 + 0x1a) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar6;
      *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar5;
      *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xc0) * fVar5 * fVar5;
        iVar20 = (int)lVar23;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar26 = uVar16 - 0xd0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar26;
      do {
        fVar5 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0xd0) = *(float *)((int)lVar17 + 0xd0) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
        lVar23 = lVar23 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar17 = 2;
      do {
        iVar20 = (int)lVar18;
        iVar14 = (int)lVar26;
        lVar18 = lVar18 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0xd0)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar35 = -dVar35;
    if ((MVar7 & MIRROR) != NONE) {
      dVar34 = -dVar34;
    }
    dVar29 = 1.5707963705062866;
    if ((dVar34 <= 1.5707963705062866) && (dVar29 = dVar34, dVar34 < -1.5707963705062866)) {
      dVar29 = -1.5707963705062866;
    }
    dVar31 = 0.5235987901687622;
    if ((dVar35 <= 0.5235987901687622) && (dVar31 = dVar35, dVar35 < -0.5235987901687622)) {
      dVar31 = -0.5235987901687622;
    }
    *(float *)((int)pvVar8 + 0x1d8) = (float)(dVar29 * 0.699999988079071);
    *(float *)((int)pvVar8 + 0x1d4) = (float)dVar31;
    *(float *)((int)pvVar8 + 600) = (float)(dVar29 * 0.30000001192092896);
  }
  dVar29 = 0.03999999910593033;
  dVar35 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),param_1,uVar27 + 0x170,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar29),
             (double)(float)((double)DAT_0071f40c * dVar35),param_1,uVar27 + 0x1f0,2);
  return;
}


// 0x03e5228 (0x1e88 bytes)
/* Moby 623 */

void UpdateMoby_623(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  MobyInstance *victim;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined1 uVar22;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar14;
  short sVar21;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar20;
  MobyModeBit MVar23;
  MobyClass *unused;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  float fVar36;
  GPiece<16> auStack_150;
  float local_140;
  float local_13c;
  undefined4 local_138;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  undefined4 local_118;
  GPiece<16> auStack_110;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  f32 local_90;
  f32 local_8c;
  float local_88;
  f32 local_84;
  GPiece<16> auStack_80;
  longlong local_70;
  
  lVar13 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar25 = ZEXT48(pvVar6);
  MB_SetScaleCheat(0x4004000000000000,uVar25 + 0x170);
  if ((g_gameMode == GAME_MODE_SCENE) && ((moby->modeBits & DISABLED) == NONE)) {
    MVar23 = moby->modeBits;
    *(undefined4 *)((int)pvVar6 + 0x2dc) = 1;
    moby->modeBits = MVar23 | (UNK_40|DISABLED);
  }
  else if ((*(int *)((int)pvVar6 + 0x2dc) != 0) && (g_gameMode == GAME_MODE_NORMAL)) {
    MVar23 = moby->modeBits;
    *(undefined4 *)((int)pvVar6 + 0x2dc) = 0;
    moby->modeBits =
         MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                   DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                   HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
  }
  if ((moby->enabled != '\0') &&
     (fVar36 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar4 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar36 * fVar36) < 28.0)) {
    MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x16';
  }
  M623_003e41c8(lVar13);
  unused = moby->pClass;
  victim = *(MobyInstance **)((int)pvVar6 + 0x160);
  bVar1 = moby->state;
  moby->scale = unused->gScale * DAT_00853dbc;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      fVar36 = OrganicDeltAng
                         ((float)dVar27,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar6 + 0x290));
      dVar27 = (double)fVar36;
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId == '\x02')) {
        local_70 = (longlong)(int)(animationSpeed * 5.5);
        dVar27 = (double)MB_SetAnimation(lVar13,7,0,(int)(animationSpeed * 5.5));
      }
      iVar19 = FastDecTimerS16(dVar27,uVar25 + 0x2d0);
      if (iVar19 != 0) {
        moby->state = '\b';
        *(undefined2 *)((int)pvVar6 + 0x2d0) = 0;
        if (moby->animationId != '\x03') {
          local_70 = (longlong)(int)(animationSpeed * 1.5);
          MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 1.5));
        }
        dVar31 = (double)FastWrapRot((moby->rotation).z,0.0);
        fVar36 = (float)(dVar31 + 1.570796251296997);
        dVar27 = (double)(float)(3.141592502593994 - dVar31);
        if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
          dVar27 = dVar31;
        }
        fVar3 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar3 = fVar36;
        }
        dVar30 = (double)(float)(-3.141592502593994 - dVar31);
        if ((double)(float)(-3.141592502593994 - dVar31) - dVar27 < 0.0) {
          dVar30 = dVar27;
        }
        fVar4 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar3 < 0.0) {
          fVar4 = fVar3;
        }
        dVar31 = (double)(float)(dVar30 * dVar30);
        fVar5 = fVar4 * fVar4;
        dVar29 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
        fVar36 = fVar5 * fVar5 * fVar4;
        dVar27 = (double)(float)(dVar31 * dVar29);
        fVar3 = fVar5 * fVar36;
        local_e8 = 0;
        local_e4 = DAT_00853de4;
        local_d8 = 0.0;
        local_d4 = DAT_00853de8;
        local_ec = DAT_00853ddc * g_FrameTime *
                   ((float)(dVar31 * dVar27) * 2.601887e-06 +
                   (float)(dVar27 * -0.0001980741071747616 +
                          (double)(float)(dVar29 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar31 * dVar30) *
                                                         -0.16666656732559204 + dVar30))));
        local_f0 = DAT_00853ddc * g_FrameTime *
                   (fVar5 * fVar3 * 2.601887e-06 +
                   fVar3 * -0.0001980741 +
                   fVar36 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
        GetBonePosition(lVar13,0,&local_d0);
        dVar27 = -0.06499999761581421;
        iVar19 = 0;
        dVar31 = 0.06499999761581421;
        dVar30 = 2.0;
        dVar29 = 1.2000000476837158;
        do {
          local_c0 = local_d0;
          local_bc = local_cc;
          local_b8 = local_c8;
          local_b4 = local_c4;
          dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_c0 = (float)((double)local_c0 + dVar28);
          dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_bc = (float)((double)local_bc + dVar28);
          dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_b8 = (float)((double)local_b8 + dVar28);
          dVar28 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime)
          ;
          local_e0 = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime)
          ;
          local_dc = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat
                                     (-(DAT_00853de0 * g_FrameTime),
                                      DAT_00853de0 * g_FrameTime);
          uVar12 = DAT_00853dc4;
          uVar18 = DAT_00853dc0;
          local_d8 = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat
                                     (DAT_00853dd0,(float)((double)DAT_00853dd0 * dVar30));
          uVar15 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)MB_randRangeFloat
                                     (DAT_00853dd4,(float)((double)DAT_00853dd4 * dVar29));
          uVar16 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)MB_randRangeFloat
                                     (DAT_00853dd8,(float)((double)DAT_00853dd8 * dVar29));
          uVar17 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          SpawnPart_2(&local_c0,&local_f0,&local_e0,uVar18,uVar12,uVar15,uVar16,uVar17);
          iVar19 = iVar19 + 1;
        } while (iVar19 < 0x1e);
        iVar19 = 0;
        local_e4 = DAT_00853de4 * 0.1;
        local_d4 = DAT_00853de8 * 0.1;
        do {
          local_b0 = local_d0;
          local_ac = local_cc;
          local_a8 = local_c8;
          local_a4 = local_c4;
          dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_b0 = (float)((double)local_b0 + dVar28);
          dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_ac = (float)((double)local_ac + dVar28);
          dVar28 = (double)MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_a8 = (float)((double)local_a8 + dVar28);
          dVar28 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime)
          ;
          local_e0 = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat(-g_FrameTime,g_FrameTime)
          ;
          local_dc = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat
                                     (-(DAT_00853de0 * g_FrameTime),
                                      DAT_00853de0 * g_FrameTime);
          uVar12 = DAT_00853dcc;
          uVar18 = DAT_00853dc8;
          local_d8 = (float)dVar28;
          dVar28 = (double)MB_randRangeFloat
                                     (DAT_00853dd0,(float)((double)DAT_00853dd0 * dVar30));
          uVar15 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)MB_randRangeFloat
                                     (DAT_00853dd4,(float)((double)DAT_00853dd4 * dVar29));
          uVar16 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          dVar28 = (double)MB_randRangeFloat
                                     (DAT_00853dd8,(float)((double)DAT_00853dd8 * dVar29));
          uVar17 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
          SpawnPart_2(&local_b0,&local_f0,&local_e0,uVar18,uVar12,uVar15,uVar16,uVar17);
          iVar19 = iVar19 + 1;
        } while (iVar19 < 0x1e);
      }
    }
    else if (bVar1 == 6) {
      Delt(g_FrameTime * 6.0,DAT_0071f418 * 6.0,(float *)((int)pvVar6 + 0xf4));
      dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,(int)unused,
                 (float *)((int)pvVar6 + 0x290));
      dVar31 = (double)(moby->rotation).z;
      dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      dVar27 = (double)FastSubRots((float)dVar31,(float)dVar27);
      if (dVar27 < 1.5707963705062866) {
        fVar36 = (moby->rotation).z;
        fVar3 = fVar36 + 1.5707963;
        fVar4 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar4 = fVar36;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar4 < 0.0) {
          fVar8 = fVar4;
        }
        fVar36 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar36 = fVar5;
        }
        fVar3 = fVar8 * fVar8;
        fVar4 = fVar36 * fVar36;
        fVar10 = fVar3 * fVar3 * fVar8;
        local_118 = 0;
        fVar5 = fVar4 * fVar4 * fVar36;
        fVar11 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar5;
        local_11c = (fVar3 * fVar11 * 2.601887e-06 +
                    fVar11 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8) * 2.0;
        local_120 = (fVar4 * fVar9 * 2.601887e-06 +
                    fVar9 * -0.0001980741 +
                    fVar5 * 0.0083330255 + fVar4 * fVar36 * -0.16666657 + fVar36) * 2.0;
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_120,
                   auStack_110);
        MB_PushOutOfSplineWalls
                  ((double)(DAT_00853dbc * 0.4),*(undefined4 *)((int)pvVar6 + 0x2c0),&DAT_00850000,
                   lVar13 + 0x10,lVar13 + 0x10);
      }
      iVar19 = MB_SplineIntersect
                         (*(undefined4 *)((int)pvVar6 + 0x2c0),lVar13 + 0x10,&victim->pos,&local_100
                         );
      fVar36 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      if ((iVar19 == 0) ||
         (local_fc = fVar3 - local_fc, local_100 = fVar36 - local_100,
         local_f8 = (moby->pos).z - local_f8,
         1.5 <= SQRT(local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc))) {
        if (*(int *)((int)pvVar6 + 0x2b0) == 0) {
          moby->state = '\n';
        }
        else {
          fVar3 = fVar3 - (victim->pos).y;
          fVar36 = fVar36 - (victim->pos).x;
          if (SQRT(fVar36 * fVar36 + fVar3 * fVar3) < 3.0) {
            auVar33 = ZEXT416(0xffffffff);
            auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
            moby->state = '\a';
            fVar36 = animationSpeed;
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
            auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
            auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
            auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar33 = vectorAddFloatingPoint
                                (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
            auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
            auVar33 = vectorSplatHalfWord(auVar33,1);
            uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
            *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
            if (moby->animationId != '\x02') {
              local_70 = (longlong)(int)(fVar36 * 10.5);
              MB_SetAnimation(lVar13,2,0,(int)(fVar36 * 10.5));
            }
          }
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          local_70 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else if (bVar1 == 5) {
      if (*(int *)((int)pvVar6 + 0x2b0) == 0) {
        *(undefined4 *)((int)pvVar6 + 0xf4) = 0;
        moby->state = '\n';
        if (moby->animationId != '\x01') {
          local_70 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        fVar36 = (moby->pos).y - (victim->pos).y;
        fVar3 = (moby->pos).x - (victim->pos).x;
        if (SQRT(fVar3 * fVar3 + fVar36 * fVar36) < 3.0) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          moby->state = '\a';
          fVar36 = animationSpeed;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
          auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorAddFloatingPoint
                              (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
          if (moby->animationId != '\x02') {
            local_70 = (longlong)(int)(fVar36 * 10.5);
            MB_SetAnimation(lVar13,2,0,(int)(fVar36 * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 4) {
      fVar36 = (moby->pos).y - (victim->pos).y;
      fVar3 = (moby->pos).x - (victim->pos).x;
      dVar27 = (double)SQRT(fVar3 * fVar3 + fVar36 * fVar36);
      M623_003e37b0((double)*(float *)((int)pvVar6 + 0x294),lVar13,&victim->pos)
      ;
      if (dVar27 < 3.0) {
        dVar31 = (double)(moby->rotation).z;
        dVar27 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                      (double)((victim->pos).y - (moby->pos).y));
        dVar27 = (double)FastSubRots((float)dVar31,(float)dVar27);
        if (dVar27 < 0.7853981852531433) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          moby->state = '\a';
          fVar36 = animationSpeed;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
          auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorAddFloatingPoint
                              (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
          if (moby->animationId != '\x02') {
            local_70 = (longlong)(int)(fVar36 * 10.5);
            MB_SetAnimation(lVar13,2,0,(int)(fVar36 * 10.5));
          }
        }
      }
      if (*(int *)((int)pvVar6 + 0x164) == 2) {
        moby->state = '\n';
      }
    }
    else if (bVar1 == 2) {
      dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x280) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar6 + 0x284) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x290));
      dVar31 = (double)(moby->rotation).z;
      dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x280) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar6 + 0x284) - (moby->pos).y));
      dVar27 = (double)FastSubRots((float)dVar31,(float)dVar27);
      if (dVar27 < 1.5707963705062866) {
        fVar36 = (moby->rotation).z;
        fVar3 = fVar36 + 1.5707963;
        fVar4 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar4 = fVar36;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar4 < 0.0) {
          fVar8 = fVar4;
        }
        fVar36 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar36 = fVar5;
        }
        fVar3 = fVar8 * fVar8;
        fVar4 = fVar36 * fVar36;
        fVar10 = fVar3 * fVar3 * fVar8;
        local_138 = 0;
        fVar5 = fVar4 * fVar4 * fVar36;
        fVar11 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar5;
        local_13c = (fVar3 * fVar11 * 2.601887e-06 +
                    fVar11 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8) * 2.0;
        local_140 = (fVar4 * fVar9 * 2.601887e-06 +
                    fVar9 * -0.0001980741 +
                    fVar5 * 0.0083330255 + fVar4 * fVar36 * -0.16666657 + fVar36) * 2.0;
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_140,
                   auStack_130);
        MB_PushOutOfSplineWalls
                  ((double)(DAT_00853dbc * 0.4),*(undefined4 *)((int)pvVar6 + 0x2c0),&DAT_00850000,
                   lVar13 + 0x10,lVar13 + 0x10);
      }
      fVar36 = (moby->pos).y - *(float *)((int)pvVar6 + 0x284);
      fVar3 = (moby->pos).x - *(float *)((int)pvVar6 + 0x280);
      sVar21 = *(short *)((int)pvVar6 + 0x2d2) + 1;
      *(short *)((int)pvVar6 + 0x2d2) = sVar21;
      if ((((SQRT(fVar3 * fVar3 + fVar36 * fVar36) < 1.0) &&
           ((int)(animationSpeed * 60.5) < (int)sVar21)) ||
          ((int)(animationSpeed * 180.5) < (int)sVar21)) &&
         (moby->state = moby->setByGroup, moby->animationId != '\0')) {
        local_70 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 == 1) {
      if ((*(int *)((int)pvVar6 + 0x164) != 2) && (iVar19 = MB_randInt(9), iVar19 == 0)) {
        iVar19 = MB_SplineFindRouteNode
                           (DAT_00853dbc * 0.4,(int)pvVar6 + 0x2c0,1,
                            (longlong)*(int *)((int)pvVar6 + 0x2c4),ZEXT48(&DAT_00850000),&moby->pos
                            ,&victim->pos,auStack_150);
        if (iVar19 == 0) {
          *(undefined4 *)((int)pvVar6 + 0x164) = 2;
        }
        else {
          uVar14 = MB_randInt(0x100);
          fVar36 = *(float *)((int)pvVar6 + 0x298);
          if ((uVar14 & 1) != 0) {
            fVar36 = -fVar36;
            *(float *)((int)pvVar6 + 0x298) = fVar36;
          }
          *(float *)((int)pvVar6 + 0x294) = fVar36 * 0.017453292;
          dVar27 = (double)MB_randRangeFloat(30.0,90.0);
          *(int *)((int)pvVar6 + 0x2ac) = (int)(animationSpeed * ((float)(longlong)dVar27 + 0.5));
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      if ((*(int *)((int)pvVar6 + 0x164) == 2) && (*(int *)((int)pvVar6 + 0x2b0) != 0)) {
        moby->state = '\x06';
        if (moby->animationId != '\x01') {
          local_70 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        if ((moby->enabled == '\0') || (uVar14 = MB_randInt(0xff), (uVar14 & 1) == 0)) {
          if (moby->animationId != '\0') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          MB_randSphere(0,0x4010000000000000,uVar25 + 0x280);
          *(undefined4 *)((int)pvVar6 + 0x288) = *(undefined4 *)((int)pvVar6 + 0x278);
          *(undefined2 *)((int)pvVar6 + 0x2d2) = 0;
          *(float *)((int)pvVar6 + 0x280) =
               *(float *)((int)pvVar6 + 0x280) + *(float *)((int)pvVar6 + 0x270);
          *(float *)((int)pvVar6 + 0x284) =
               *(float *)((int)pvVar6 + 0x284) + *(float *)((int)pvVar6 + 0x274);
          moby->setByGroup = moby->state;
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      MVar23 = moby->modeBits;
      *(f32 *)((int)pvVar6 + 0x270) = (moby->pos).x;
      *(f32 *)((int)pvVar6 + 0x274) = (moby->pos).y;
      fVar2 = (moby->pos).z;
      moby->modeBits = MVar23 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar6 + 0x278) = fVar2;
      fVar2 = (moby->pos).w;
      *(undefined4 *)((int)pvVar6 + 0x20) = 0x40000000;
      *(f32 *)((int)pvVar6 + 0x27c) = fVar2;
      *(undefined2 *)((int)pvVar6 + 0x24) = 2;
      *(undefined1 *)((int)pvVar6 + 0x28) = 1;
      *(undefined4 *)((int)pvVar6 + 0x30) = 0x3f800000;
      *(undefined1 *)((int)pvVar6 + 0x29) = 0;
      *(undefined4 *)((int)pvVar6 + 0x2b0) = 0;
      uVar22 = FastDoubleToInt(0x402c000000000000);
      *(undefined1 *)((int)pvVar6 + 0x58) = uVar22;
      uVar22 = FastDoubleToInt(0x4026666660000000);
      *(undefined1 *)((int)pvVar6 + 0x5a) = uVar22;
      MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
      *(undefined4 *)((int)pvVar6 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar6 + 0xd8) = 0x40000000;
      uVar18 = FastDoubleToInt((double)(DAT_00853dbc * 409.6));
      *(undefined4 *)((int)pvVar6 + 0xd0) = uVar18;
      *(float *)((int)pvVar6 + 0xf4) = g_FrameTime * 6.0;
      dVar27 = (double)MB_randRot();
      *(float *)((int)pvVar6 + 0x2d8) = (float)dVar27;
      iVar19 = MB_randInt(2);
      fVar36 = (moby->pos).z;
      if (iVar19 == 0) {
        MVar23 = moby->modeBits &
                 (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      else {
        MVar23 = moby->modeBits | MIRROR;
      }
      iVar19 = *(int *)((int)pvVar6 + 0x2b4);
      moby->modeBits = MVar23;
      if (iVar19 == 0) {
        if ((*(int *)((int)pvVar6 + 0x2b8) == -1) && (*(int *)((int)pvVar6 + 700) == -1)) {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar13,0,0,0);
          }
        }
        else {
          moby->state = '\x0f';
          moby->modeBits =
               MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                         DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                         HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar13,0,0,0);
          }
        }
      }
      else {
        moby->modeBits =
             MVar23 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                       DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW
                       |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        moby->state = '\f';
        moby->drawDistance = 0;
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        (moby->pos).z = fVar36 - 20.0;
      }
      MB_SplineMarkCrossings(uVar25 + 0x2c0,1,*(undefined4 *)((int)pvVar6 + 0x2c4));
    }
  }
  else if (bVar1 == 0xf) {
    if (((*(int *)((int)pvVar6 + 0x2b8) == -1) ||
        (g_MobyInstance[*(int *)((int)pvVar6 + 0x2b8)].setByGroup == '\0')) &&
       ((*(int *)((int)pvVar6 + 700) == -1 ||
        (iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 700)),
        iVar19 == 0)))) {
      if ((moby->field43_0x70 & 2U) != 0) {
        uVar14 = MB_randInt(0xff);
        if ((uVar14 & 1) == 0) {
          if (moby->animationId != '\0') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          MB_randSphere(0,0x4010000000000000,uVar25 + 0x280);
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          *(undefined4 *)((int)pvVar6 + 0x288) = *(undefined4 *)((int)pvVar6 + 0x278);
          *(float *)((int)pvVar6 + 0x280) =
               *(float *)((int)pvVar6 + 0x280) + *(float *)((int)pvVar6 + 0x270);
          *(float *)((int)pvVar6 + 0x284) =
               *(float *)((int)pvVar6 + 0x284) + *(float *)((int)pvVar6 + 0x274);
          auVar33 = loadVectorLeftIndexed(0x7c,0x3e5174);
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar32);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d2,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d2) = uVar7;
          moby->setByGroup = moby->state;
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            local_70 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else {
      moby->drawDistance = 0x40;
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    }
  }
  else if (bVar1 == 0xe) {
    uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar20 & 0x60) != 0) {
      lVar26 = lVar13 + 0x10;
      MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar13,lVar26);
      uVar15 = 0;
      lVar24 = lVar13 + 0x40;
      MB_SpawnDebrisMoby(0,lVar13,0x6da,lVar26,lVar24,0,0);
      MB_SpawnDebrisMoby(uVar15,lVar13,0x6db,lVar26,lVar24,0,0);
      MB_SpawnDebrisMoby(uVar15,lVar13,0x6dc,lVar26,lVar24,0,0);
      DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0xd) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0')) {
      local_70 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 0xb) {
    uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar20 & 0x60) == 0) {
      fVar2 = (moby->pos).z;
      uVar20 = (int)fVar2 >> 0x1f;
      if ((int)((uVar20 >> 1 ^ (uint)fVar2) - uVar20) < 0x40000000) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      iVar19 = MB_SplineFindRouteNode
                         (DAT_00853dbc * 0.4,(int)pvVar6 + 0x2c0,1,
                          (longlong)(int)*(uint *)((int)pvVar6 + 0x2c4),
                          (ulonglong)*(uint *)((int)pvVar6 + 0x2c4),(int)(lVar13 + 0x10),
                          (int)pvVar6 + 0x270,auStack_80);
      if (iVar19 == 0) {
        MB_SpawnExplosionSparks
                  (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_003e5174,
                   0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_70 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 10) {
    M623_003e37b0(0,lVar13,uVar25 + 0x270);
    fVar36 = (moby->pos).y - *(float *)((int)pvVar6 + 0x274);
    fVar3 = (moby->pos).x - *(float *)((int)pvVar6 + 0x270);
    if (1.0 <= SQRT(fVar3 * fVar3 + fVar36 * fVar36)) {
      if (*(int *)((int)pvVar6 + 0x164) == 2) {
        if (*(int *)((int)pvVar6 + 0x2b0) != 0) {
          moby->state = '\x06';
        }
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x01') {
          local_70 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        local_70 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else if (bVar1 == 9) {
    if ((moby->field43_0x70 & 2U) != 0) {
      fVar36 = (moby->pos).y;
      fVar3 = (victim->pos).y;
      fVar4 = (moby->pos).x;
      fVar8 = fVar36 - fVar3;
      fVar5 = (victim->pos).x;
      fVar9 = fVar4 - fVar5;
      if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) < 3.0) {
        dVar31 = (double)(moby->rotation).z;
        dVar27 = (double)FUN_005e8338((double)(fVar5 - fVar4),(double)(fVar3 - fVar36));
        dVar27 = (double)FastSubRots((float)dVar31,(float)dVar27);
        if (dVar27 < 0.2617993950843811) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          moby->state = '\a';
          fVar36 = animationSpeed;
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x3dec,0x850000);
          auVar32 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x3e5174);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorAddFloatingPoint
                              (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar7 = storeVectorElementHalfWordIndexed(auVar33,0x2d0,uVar25);
          *(undefined2 *)((int)pvVar6 + 0x2d0) = uVar7;
          if (moby->animationId != '\a') {
            local_70 = (longlong)(int)(fVar36 * 5.5);
            MB_SetAnimation(lVar13,7,0,(int)(fVar36 * 5.5));
          }
          goto LAB_003e7060;
        }
      }
      *(undefined4 *)((int)pvVar6 + 0xf4) = 0;
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_70 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 8) {
    dVar27 = (double)FastWrapRot((moby->rotation).z,0.0);
    dVar31 = (double)BlendAnimFrame(moby);
    if (dVar31 < 1.5) {
      dVar31 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                    (double)((victim->pos).y - (moby->pos).y));
      dVar27 = (double)FastSubRots((float)dVar27,(float)dVar31);
      if (((dVar27 < 0.2617993950843811) &&
          (fVar36 = (moby->pos).y - (victim->pos).y, fVar3 = (moby->pos).x - (victim->pos).x,
          SQRT(fVar3 * fVar3 + fVar36 * fVar36) < 3.0)) &&
         (ABS((victim->pos).z - (moby->pos).z) < 2.0)) {
        fVar36 = (moby->rotation).z;
        fVar3 = fVar36 + 1.5707963;
        fVar4 = 3.1415925 - fVar36;
        if (fVar36 - (3.1415925 - fVar36) < 0.0) {
          fVar4 = fVar36;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar8 = -3.1415925 - fVar36;
        if ((-3.1415925 - fVar36) - fVar4 < 0.0) {
          fVar8 = fVar4;
        }
        local_98 = 0;
        local_94 = 0x45afdf66;
        fVar36 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar36 = fVar5;
        }
        fVar3 = fVar8 * fVar8;
        fVar4 = fVar36 * fVar36;
        fVar10 = fVar3 * fVar3 * fVar8;
        fVar5 = fVar4 * fVar4 * fVar36;
        fVar11 = fVar3 * fVar10;
        fVar9 = fVar4 * fVar5;
        local_9c = fVar3 * fVar11 * 2.601887e-06 +
                   fVar11 * -0.0001980741 +
                   fVar10 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8;
        local_a0 = fVar4 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar4 * fVar36 * -0.16666657 + fVar36;
        local_90 = (victim->pos).x;
        local_8c = (victim->pos).y;
        local_84 = (victim->pos).w;
        local_88 = (victim->pos).z + 0.75;
        CollDamageMobyDirect
                  (1.0,victim,moby,(int)(ZERO_MASK((6 - DAT_0096ae38))) + 0x10001,
                   0x3e5174,&local_90,&local_a0);
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\t', moby->animationId != '\x04')) {
      local_70 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
    }
  }
LAB_003e7060:
  DAT_010cbba8 = *DAT_009271f8;
  return;
}


