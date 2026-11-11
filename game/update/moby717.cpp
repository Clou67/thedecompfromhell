// game/update/moby717.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x431a0c-0x434458
#include "game/update/moby717.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby1118.h"
#include "game/update/moby439.h"
#include "idol/fastfunc.h"

// 0x0431a0c (0x14 bytes)
void M717_00431a0c(void)

{
  DAT_00859f18 = 0x10000;
  return;
}


// 0x0431a30 (0x248 bytes)
// inlined: FastAtan2 @0x431b4c
void M717_00431a30(int param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar14;
  longlong lVar13;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong in_LR;
  longlong lVar18;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xa0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x16] = in_LR;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar14 = (int)param_2 + 1;
  iVar9 = *(int *)(iVar6 + 0x244) + (int)(param_2 << 4);
  fVar1 = *(float *)(iVar9 + 0x10);
  *param_3 = fVar1;
  fVar2 = *(float *)(iVar9 + 0x14);
  param_3[1] = fVar2;
  param_3[2] = *(float *)(iVar9 + 0x18);
  param_3[3] = *(float *)(iVar9 + 0x1c);
  piVar7 = *(int **)(iVar6 + 0x244);
  iVar14 = iVar14 - (iVar14 / *piVar7) * *piVar7;
  fVar1 = (float)piVar7[iVar14 * 4 + 4] - fVar1;
  fVar2 = (float)piVar7[iVar14 * 4 + 5] - fVar2;
  fVar3 = ABS(fVar1);
  fVar5 = ABS(fVar2);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar3 - fVar5;
  fVar1 = 0.0;
  uVar11 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
  fVar4 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar10 - 0x90;
    lVar15 = uVar10 - 0x24;
    lVar13 = uVar10 - 0x14;
    lVar18 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar8 + 0x11) = fVar2;
    *(float *)(puVar8 + 0x10) = fVar2;
    *(float *)((int)puVar8 + 0x84) = fVar2;
    *(float *)((int)puVar8 + 0x7c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar4;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar2;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar2 * fVar2;
      iVar6 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar10 - 0x24;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar13 = lVar16;
    lVar15 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar6 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar9 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar6 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
              *(float *)(iVar9 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  FastWrapRot(fVar1,1.5707964);
  return;
}


// 0x0431c90 (0x5a0 bytes)
// inlined: FastAtan2 @0x431da0, FastAtan2 @0x432100
void M717_00431c90(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  Spline *pSVar8;
  Spline *spline;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  short sVar19;
  longlong lVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x120;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar12;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x1c] = unaff_r27;
  puVar9[0x1f] = unaff_r30;
  iVar7 = *(int *)(param_1 + 0x78);
  uVar6 = *(undefined2 *)(iVar7 + 600);
  puVar9[0x1e] = unaff_r29;
  M717_00431a30(param_1,uVar6,uVar12 - 0xb0);
  fVar5 = *(float *)(puVar9 + 0xe) - *(float *)(param_1 + 0x10);
  fVar2 = *(float *)((int)puVar9 + 0x74) - *(float *)(param_1 + 0x14);
  fVar3 = ABS(fVar5);
  fVar4 = ABS(fVar2);
  *(float *)((int)puVar9 + 0x8c) = fVar5;
  *(float *)(puVar9 + 0x12) = fVar2;
  *(float *)((int)puVar9 + 0x94) = fVar3 - fVar4;
  dVar23 = 0.0;
  dVar25 = 0.7853981852531433;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)((int)puVar9 + 0x8c));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar11 = ABS(*(float *)(puVar9 + 0x12));
  if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
    fVar11 = fVar3;
  }
  dVar21 = dVar23;
  if (0.0 < fVar5) {
    lVar13 = uVar12 - 0x110;
    lVar16 = uVar12 - 0x68;
    lVar18 = uVar12 - 0x58;
    lVar20 = 2;
    fVar5 = (fVar11 - fVar5) / (fVar11 + fVar5);
    fVar3 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar5;
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5;
    *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar5 * fVar3;
    do {
      *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar5 * fVar5;
      iVar14 = (int)lVar16;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar12 - 0x68;
    pfVar17 = (float *)&DAT_007358e0;
    lVar13 = lVar1;
    lVar16 = lVar18;
    do {
      fVar5 = *pfVar17;
      fVar3 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar5;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar13 = lVar1;
    do {
      iVar14 = (int)lVar13;
      iVar10 = (int)lVar18;
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar14 + 0xb8)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar4 + fVar2);
  }
  while( true ) {
    M717_00431a30(param_1,*(undefined2 *)(iVar7 + 600),uVar12 - 0xb0);
    fVar5 = *(float *)((int)puVar9 + 0x74) - *(float *)(iVar7 + 0x204);
    fVar2 = *(float *)(puVar9 + 0xe) - *(float *)(iVar7 + 0x200);
    dVar24 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5);
    dVar21 = (double)FastSubRots((float)dVar21,*(float *)(param_1 + 0x48));
    if (((dVar21 < 1.5707963705062866) || (4.0 < dVar24)) && (2.0 < dVar24)) break;
    pSVar8 = *(Spline **)(iVar7 + 0x244);
    iVar14 = *(short *)(iVar7 + 600) + 1;
    sVar19 = (short)iVar14 - (short)(iVar14 / pSVar8->cnt) * (short)pSVar8->cnt;
    *(short *)(iVar7 + 600) = sVar19;
    spline = Splines[*(int *)(iVar7 + 0x220)];
    if (pSVar8 == spline) {
      if (0 < *(int *)((int)&pSVar8->points[0].w + (int)((longlong)sVar19 << 4))) {
        iVar14 = MB_randInt(100);
        sVar19 = *(short *)(iVar7 + 600);
        if (0 < iVar14) {
          iVar14 = FastDoubleToInt
                             ((double)*(float *)(*(int *)(iVar7 + 0x244) +
                                                 (int)((longlong)sVar19 << 4) + 0x1c));
          sVar19 = 0;
          iVar14 = *(int *)(iVar7 + (iVar14 + -1) * 4 + 0x224);
          *(undefined2 *)(iVar7 + 600) = 0;
          *(Spline **)(iVar7 + 0x244) = Splines[iVar14];
        }
      }
    }
    else if ((int)sVar19 == pSVar8->cnt + -1) {
      *(Spline **)(iVar7 + 0x244) = spline;
      iVar14 = PathFindClosestPnt((float)dVar23,(Vec4 *)(iVar7 + 0x200),spline);
      *(short *)(iVar7 + 600) = (short)iVar14;
      iVar14 = MB_PathStepIndex(*(int **)(iVar7 + 0x244),(int)(short)iVar14,5,1);
      sVar19 = (short)iVar14;
      *(short *)(iVar7 + 600) = sVar19;
    }
    M717_00431a30(param_1,sVar19,uVar12 - 0xb0);
    fVar5 = *(float *)(puVar9 + 0xe) - *(float *)(param_1 + 0x10);
    fVar2 = *(float *)((int)puVar9 + 0x74) - *(float *)(param_1 + 0x14);
    dVar21 = ABS((double)fVar5);
    dVar22 = ABS((double)fVar2);
    *(float *)(puVar9 + 0x10) = fVar5;
    *(float *)((int)puVar9 + 0x84) = fVar2;
    *(float *)(puVar9 + 0x11) = (float)(dVar21 - dVar22);
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
    dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
      dVar24 = dVar22;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar9 + 0x84));
    if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
      dVar22 = dVar21;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar21 = dVar23;
    if (dVar23 < dVar24) {
      lVar13 = uVar12 - 0x110;
      lVar18 = uVar12 - 0x78;
      lVar16 = uVar12 - 0x88;
      lVar20 = 2;
      fVar4 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x13) = fVar4;
      *(float *)((int)puVar9 + 0x9c) = fVar4;
      *(float *)(puVar9 + 0x14) = fVar4;
      *(float *)((int)puVar9 + 0xa4) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x88) * fVar4 * fVar4;
        iVar14 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar12 - 0x88;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar1;
      lVar16 = lVar18;
      do {
        fVar4 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x98) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar13 = lVar1;
      do {
        iVar14 = (int)lVar13;
        iVar10 = (int)lVar18;
        lVar13 = lVar13 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar14 + 0x98)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar21 = (double)((float)(dVar21 + dVar25) * fVar5 + fVar2);
    }
  }
  return;
}


// 0x0432258 (0x4c0 bytes)
MobyInstance * M717_00432258(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  MobyInstance *group;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  MobyInstance *local_a0;
  MobyInstance *local_9c;
  longlong local_98;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar5 = (ulonglong)uVar1;
  local_98 = (longlong)(int)(animationSpeed * 180.5);
  group = g_RaceTime;
  if ((int)(animationSpeed * 180.5) <= (int)g_RaceTime) {
    group = (MobyInstance *)FastDecTimerS32(uVar5 + 0x264);
    if ((group != (MobyInstance *)0x0) && (g_heroBoardMoby != 0)) {
      iVar2 = *(int *)(g_heroBoardMoby + 0x78);
      group = *(MobyInstance **)(iVar2 + 0x44);
      if (group != (MobyInstance *)0xffffffff) {
        MB_GetFirstMobyInGroup(&local_a0,(int)group,'\0','\0');
        group = local_a0;
        if (local_a0 != (MobyInstance *)0x0) {
          dVar7 = 0.800000011920929;
          dVar8 = 8.0;
          dVar9 = 0.5;
          dVar10 = 2.5;
          auVar20 = loadVectorLeftIndexed(0x14,0x432230);
          auVar22 = loadVectorLeftIndexed(0x18,0x432230);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_a0->oClass == HOVERBOARD_RING) {
              dVar12 = (double)((local_a0->pos).y - *(float *)(uVar1 + 0x204));
              dVar11 = (double)((local_a0->pos).x - *(float *)(uVar1 + 0x200));
              dVar13 = (double)((local_a0->pos).z -
                               (float)((double)*(float *)(uVar1 + 0x208) + dVar7));
              dVar6 = (double)(local_a0->pos).w;
              if ((double)SQRT((float)(dVar13 * dVar13 +
                                      (double)(float)(dVar11 * dVar11 +
                                                     (double)(float)(dVar12 * dVar12)))) <= dVar8) {
                FastMtx4Identity(&local_120);
                FastNormalizeRMtx4(&local_120,&local_a0->transform);
                if (((ABS((double)(float)((double)local_f0 * dVar6 +
                                         (double)(float)((double)local_100 * dVar13 +
                                                        (double)(float)((double)local_120 * dVar11 +
                                                                       (double)(float)((double)
                                                  local_110 * dVar12))))) < dVar9) &&
                    (ABS((double)(float)((double)local_ec * dVar6 +
                                        (double)(float)((double)local_fc * dVar13 +
                                                       (double)(float)((double)local_11c * dVar11 +
                                                                      (double)(float)((double)
                                                  local_10c * dVar12))))) < dVar10)) &&
                   (ABS((double)(float)((double)local_e8 * dVar6 +
                                       (double)(float)((double)local_f8 * dVar13 +
                                                      (double)(float)((double)local_118 * dVar11 +
                                                                     (double)(float)((double)
                                                  local_108 * dVar12))))) < dVar10)) {
                  auVar22 = ZEXT416(0xffffffff);
                  auVar14 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xffffffff);
                  auVar16 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
                  auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
                  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar19 = loadVectorLeftIndexed(0x25a,uVar5);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar14);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorRightIndexed(0x26a,uVar5);
                  auVar18 = vectorShiftRightWord
                                      (auVar19 | auVar17,
                                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                                      );
                  auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
                  auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
                  auVar16.piece<0,4>() = auVar18.piece<0,4>() + auVar22.piece<0,4>();
                  auVar16.piece<8,8>() = auVar22.piece<8,8>();
                  auVar16.piece<4,4>() = auVar18.piece<4,4>() + auVar22.piece<4,4>();
                  auVar17.piece<0,8>() = auVar16.piece<0,8>();
                  auVar17.piece<12,4>() = auVar22.piece<12,4>();
                  auVar17.piece<8,4>() = auVar18.piece<8,4>() + auVar22.piece<8,4>();
                  auVar14.piece<0,12>() = auVar17.piece<0,12>();
                  auVar14.piece<12,4>() = auVar18.piece<12,4>() + auVar17.piece<12,4>();
                  auVar22 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
                  auVar14 = vectorSplatHalfWord(auVar14,1);
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x25a,uVar5);
                  *(undefined2 *)(uVar1 + 0x25a) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x264,uVar5);
                  *(undefined4 *)(uVar1 + 0x264 & 0xfffffffc) = uVar4;
                }
              }
            }
            MB_GetNextMobyInGroup(&local_a0,local_a0,'\0','\0');
            group = local_a0;
          } while (local_a0 != (MobyInstance *)0x0);
        }
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 != -1) {
        group = (MobyInstance *)MB_GetFirstMobyInGroup(&local_9c,iVar2,'\0','\0');
        if (local_9c != (MobyInstance *)0x0) {
          dVar7 = 8.0;
          dVar8 = 2.799999952316284;
          dVar9 = 1.399999976158142;
          dVar10 = 0.5;
          auVar20 = loadVectorLeftIndexed(0x14,0x432230);
          auVar22 = loadVectorLeftIndexed(0x18,0x432230);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_9c->oClass == HOVERBOARD_BOOST_PAD) {
              dVar12 = (double)((local_9c->pos).y - *(float *)(uVar1 + 0x204));
              dVar11 = (double)((local_9c->pos).x - *(float *)(uVar1 + 0x200));
              dVar13 = (double)((local_9c->pos).z - *(float *)(uVar1 + 0x208));
              dVar6 = (double)(local_9c->pos).w;
              if ((double)SQRT((float)(dVar13 * dVar13 +
                                      (double)(float)(dVar11 * dVar11 +
                                                     (double)(float)(dVar12 * dVar12)))) <= dVar7) {
                FastMtx4Identity(&local_e0);
                FastNormalizeRMtx4(&local_e0,&local_9c->transform);
                if (((ABS((double)(float)((double)local_b0 * dVar6 +
                                         (double)(float)((double)local_c0 * dVar13 +
                                                        (double)(float)((double)local_e0 * dVar11 +
                                                                       (double)(float)((double)
                                                  local_d0 * dVar12))))) < dVar8) &&
                    (ABS((double)(float)((double)local_ac * dVar6 +
                                        (double)(float)((double)local_bc * dVar13 +
                                                       (double)(float)((double)local_dc * dVar11 +
                                                                      (double)(float)((double)
                                                  local_cc * dVar12))))) < dVar9)) &&
                   (ABS((double)(float)((double)local_a8 * dVar6 +
                                       (double)(float)((double)local_b8 * dVar13 +
                                                      (double)(float)((double)local_d8 * dVar11 +
                                                                     (double)(float)((double)
                                                  local_c8 * dVar12))))) < dVar10)) {
                  auVar22 = ZEXT416(0xffffffff);
                  auVar14 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = ZEXT416(0xffffffff);
                  auVar16 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
                  auVar22 = vectorShiftLeftIntegerWord(auVar14,auVar14);
                  auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
                  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorLeftIndexed(0x25a,uVar5);
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar19 = loadVectorRightIndexed(0x26a,uVar5);
                  auVar17 = vectorShiftRightWord
                                      (auVar17 | auVar19,
                                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                                      );
                  auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
                  auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
                  auVar15.piece<0,4>() = auVar17.piece<0,4>() + auVar22.piece<0,4>();
                  auVar15.piece<8,8>() = auVar22.piece<8,8>();
                  auVar15.piece<4,4>() = auVar17.piece<4,4>() + auVar22.piece<4,4>();
                  auVar18.piece<0,8>() = auVar15.piece<0,8>();
                  auVar18.piece<12,4>() = auVar22.piece<12,4>();
                  auVar18.piece<8,4>() = auVar17.piece<8,4>() + auVar22.piece<8,4>();
                  auVar19.piece<0,12>() = auVar18.piece<0,12>();
                  auVar19.piece<12,4>() = auVar17.piece<12,4>() + auVar18.piece<12,4>();
                  auVar22 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
                  auVar14 = vectorSplatHalfWord(auVar19,1);
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x25a,uVar5);
                  *(undefined2 *)(uVar1 + 0x25a) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x264,uVar5);
                  *(undefined4 *)(uVar1 + 0x264 & 0xfffffffc) = uVar4;
                }
              }
            }
            group = (MobyInstance *)MB_GetNextMobyInGroup(&local_9c,local_9c,'\0','\0');
          } while (local_9c != (MobyInstance *)0x0);
        }
      }
    }
  }
  return group;
}


// 0x0432718 (0x110 bytes)
void M717_00432718(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Spline *path;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x78);
  path = *(Spline **)(iVar2 + 0x244);
  if (((path != Splines[*(int *)(iVar2 + 0x220)]) && (*(int *)(iVar2 + 0x24c) < 1)) &&
     (lVar5 = (longlong)*(short *)(iVar2 + 600),
     *(int *)((int)&path->points[0].w + (int)(lVar5 << 4)) == 0x3f800000)) {
    do {
      iVar4 = MB_PathStepIndex(&path->cnt,(int)lVar5,1,1);
      lVar5 = (longlong)iVar4;
      path = *(Spline **)(iVar2 + 0x244);
    } while (*(int *)((int)&path->points[0].w + (int)(lVar5 << 4)) != 0x40000000);
    iVar3 = (int)(lVar5 << 4);
    *(int *)(iVar2 + 0x27c) = iVar4;
    *(undefined4 *)(iVar2 + 0x210) = *(undefined4 *)((int)&path->points[0].x + iVar3);
    *(undefined4 *)(iVar2 + 0x214) = *(undefined4 *)((int)&path->points[0].y + iVar3);
    *(undefined4 *)(iVar2 + 0x218) = *(undefined4 *)((int)&path->points[0].z + iVar3);
    uVar1 = *(undefined4 *)((int)&path->points[0].w + iVar3);
    *(undefined4 *)(iVar2 + 0x26c) = 1;
    *(undefined4 *)(iVar2 + 0x21c) = uVar1;
  }
  return;
}


// 0x0432828 (0x28 bytes)
longlong M717_00432828(longlong param_1)

{
  return param_1 + (ZERO_MASK((5 - (int)param_1)) & 6U - param_1);
}


// 0x0432858 (0x1cc bytes)
void M717_00432858
               (undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte in_cr6;
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
  
  uVar4 = 0x70;
  auVar6.piece<0,4>() = param_3;
  auVar6.piece<4,4>() = param_3;
  auVar6.piece<8,4>() = param_3;
  auVar6.piece<12,4>() = param_3;
  MB_SetAnimation();
  uVar2 = *(uint *)(*(int *)((int)param_1 + 0x78) + 0x268);
  if (uVar2 != 0) {
    auVar7 = ZEXT416(0xffffffff);
    auVar9 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = ZEXT416(0xffffffff);
    auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar5 = loadVectorLeftIndexed(0x5c,param_1);
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = vectorReciprocalEstimateFloatingPoint(auVar5);
    auVar7 = loadVectorLeftIndexed(uVar4,0x432850);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar7 = ZEXT416(0xffffffff);
    auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = ZEXT416(0xffffffff);
    auVar14 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = ZEXT416(0xfffffff8);
    auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    param_2 = param_2 + (ZERO_MASK((5 - (int)param_2)) & 6U - param_2);
    auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar5,auVar8);
    auVar15 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar9,auVar11,auVar10);
    auVar10 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar2);
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,auVar8);
    uVar3 = *(uint *)(*(int *)(uVar2 + 0x24) + (int)param_2 * 4 + 0x48);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar6,auVar9,auVar12);
    auVar6 = ZEXT416(0xffffffff);
    auVar11 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar5,auVar8);
    auVar8 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar5 = loadVectorLeftIndexed(0x10,(ulonglong)uVar3);
    auVar7 = vectorShiftRightWord(auVar5,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar9,auVar6,auVar13);
    auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar7,0);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar6,auVar10,auVar14);
    auVar6 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    fVar1 = (float)(longlong)param_3 * (*(float *)(uVar2 + 0x5c) / *(float *)((int)param_1 + 0x5c));
    auVar7 = vectorMultiplyAddFloatingPoint(auVar15,auVar7,auVar8);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar6 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar7,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        fVar1 = 0.0;
      }
    }
    else {
      fVar1 = (float)*(byte *)(uVar3 + 0x10);
    }
    MB_SetAnimation((ulonglong)uVar2,param_2,(int)fVar1,param_4);
  }
  return;
}


// 0x0432a70 (0x930 bytes)
void M717_00432a70(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  short sVar8;
  longlong lVar9;
  byte in_cr6;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  float local_50;
  
  pMVar6 = (MobyInstance *)param_1;
  pvVar3 = pMVar6->pVar;
  if (*(int *)((int)pvVar3 + 0x26c) == 0) {
    pMVar6->unk58 = 1.0;
    if (((pMVar6->field43_0x70 & 2U) != 0) && (pMVar6->animationId != '\0')) {
      fVar2 = animationSpeed * 8.5;
      MB_SetAnimation(param_1,0,0,(int)fVar2);
      iVar7 = *(int *)((int)pMVar6->pVar + 0x268);
      if (iVar7 != 0) {
        auVar15 = ZEXT416(0xfffffff8);
        auVar17 = ZEXT416(0);
        uVar4 = *(uint *)(*(int *)(iVar7 + 0x24) + 0x48);
        auVar14 = loadVectorLeftIndexed(0x10,(ulonglong)uVar4);
        auVar15 = vectorShiftRightWord
                            (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        auVar15 = vectorConvertFromUnsignedFixedPointWord(auVar15,0);
        fVar1 = 0.0;
        auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
        vectorCompareGreaterThanFloatingPoint
                  (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                   auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          fVar1 = (float)*(byte *)(uVar4 + 0x10);
        }
        MB_SetAnimation(iVar7,0,(int)fVar1,(int)fVar2);
      }
    }
  }
  else {
    if (pMVar6->animationId != '\x05') {
      if (*(int *)((int)pvVar3 + 0x26c) <= (int)(animationSpeed * 3.5)) {
        fVar2 = animationSpeed * 5.5;
        MB_SetAnimation(param_1,5,1,(int)fVar2);
        uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
        if (uVar4 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar17 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(0x5c,param_1);
          auVar14 = vectorReciprocalEstimateFloatingPoint(auVar17);
          auVar15 = loadVectorLeftIndexed(8,0x432a24);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar16 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar15 = ZEXT416(0xffffffff);
          auVar21 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar22 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar15,auVar18);
          auVar19 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
          auVar18 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          auVar15 = ZEXT416(0xfffffff8);
          uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + 0x60);
          auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar24 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
          fVar1 = *(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar21,auVar20);
          auVar15 = vectorShiftRightWord
                              (auVar24,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                              );
          auVar15 = vectorConvertFromUnsignedFixedPointWord(auVar15,0);
          auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar18);
          auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar22);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar15 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              fVar1 = 0.0;
            }
          }
          else {
            fVar1 = (float)*(byte *)(uVar5 + 0x10);
          }
          MB_SetAnimation((ulonglong)uVar4,6,(int)fVar1,(int)fVar2);
        }
        *(undefined2 *)((int)pvVar3 + 0x272) = 0xffff;
      }
    }
    dVar10 = (double)(DAT_0071f418 * 21.0 * -0.5);
    iVar7 = MB_SolveQuad
                      (dVar10,(double)(float)((double)*(float *)((int)pvVar3 + 0x24c) - dVar10),
                       (double)(*(float *)((int)pvVar3 + 0x208) - *(float *)((int)pvVar3 + 0x218)));
    dVar13 = 30.0;
    dVar10 = dVar13;
    if (0 < iVar7) {
      if (0 < (int)local_50) {
        iVar7 = FastDoubleToInt((double)local_50);
        dVar10 = (double)(longlong)iVar7;
      }
    }
    dVar12 = 7.5;
    if ((((int)(animationSpeed * 7.5) < *(int *)((int)pvVar3 + 0x26c)) &&
        (*(int *)((int)pvVar3 + 0x26c) < (int)(animationSpeed * 11.5))) &&
       (pMVar6->animationId == '\x05')) {
      if ((double)(longlong)(animationSpeed * 27.5) < dVar10) {
        sVar8 = MB_randRange(0,3);
        sVar8 = sVar8 + 1;
        dVar11 = (double)animationSpeed;
        *(short *)((int)pvVar3 + 0x272) = sVar8;
        dVar11 = dVar11 * dVar12;
        lVar9 = (longlong)sVar8;
        MB_SetAnimation(param_1,lVar9,1,(int)dVar11);
        uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
        if (uVar4 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar17 = loadVectorLeftIndexed(0x5c,param_1);
          auVar18 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar14 = vectorReciprocalEstimateFloatingPoint(auVar17);
          auVar15 = loadVectorLeftIndexed(8,0x432a24);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar16 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar20 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar22 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          lVar9 = lVar9 + (ZERO_MASK((5 - sVar8)) & 6U - lVar9);
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar15,auVar18);
          auVar18 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
          auVar15 = ZEXT416(0xfffffff8);
          auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + (int)lVar9 * 4 + 0x48);
          fVar2 = *(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar21,auVar19);
          auVar19 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
          auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar17,auVar16);
          auVar15 = vectorShiftRightWord
                              (auVar19,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                              );
          auVar15 = vectorConvertFromUnsignedFixedPointWord(auVar15,0);
          auVar17 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar20);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar22);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar15 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              fVar2 = 0.0;
            }
          }
          else {
            fVar2 = (float)*(byte *)(uVar5 + 0x10);
          }
          MB_SetAnimation((ulonglong)uVar4,lVar9,(int)fVar2,(int)dVar11);
        }
      }
    }
    if ((*(short *)((int)pvVar3 + 0x272) != -1) && (pMVar6->updateId == pMVar6->animationId)) {
      dVar11 = (double)BlendAnimFrame(pMVar6);
      if ((7.0 < dVar11) && ((dVar11 < 20.0 && (dVar10 != 0.0)))) {
        fVar2 = (float)(dVar13 / dVar10);
        if (1.7 - (float)(dVar13 / dVar10) < 0.0) {
          fVar2 = 1.7;
        }
        if (fVar2 - 0.3 < 0.0) {
          fVar2 = 0.3;
        }
        pMVar6->unk58 = fVar2;
      }
    }
    if (*(short *)((int)pvVar3 + 0x272) != -1) {
      dVar13 = (double)animationSpeed;
      if ((double)(longlong)(dVar13 * 9.5) <= dVar10) {
        if ((pMVar6->field43_0x70 & 2U) != 0) {
          MB_SetAnimation(param_1,5,2,(int)(dVar13 * dVar12));
          uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
          if (uVar4 != 0) {
            auVar15 = ZEXT416(0xffffffff);
            auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            auVar14 = loadVectorLeftIndexed(0x5c,param_1);
            auVar19 = vectorShiftLeftIntegerWord(auVar15,auVar15);
            auVar16 = vectorReciprocalEstimateFloatingPoint(auVar14);
            auVar15 = loadVectorLeftIndexed(8,0x432a24);
            auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar18 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            auVar15 = ZEXT416(0xffffffff);
            auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            auVar21 = vectorShiftLeftIntegerWord(auVar15,auVar15);
            auVar15 = ZEXT416(0xfffffff8);
            auVar17 = ZEXT416(0xffffffff);
            auVar24 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
            auVar22 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
            uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + 0x60);
            auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar19);
            auVar17 = ZEXT416(0xffffffff);
            auVar19 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar17 = ZEXT416(0xffffffff);
            auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
            auVar20 = vectorShiftLeftIntegerWord(auVar17,auVar17);
            auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
            auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar21);
            auVar21 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
            auVar16 = vectorShiftLeftIntegerWord(auVar24,auVar24);
            auVar21 = vectorShiftRightWord
                                (auVar21,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 |
                                         auVar15 << 0x60);
            auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar18);
            fVar2 = (*(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed) * 2.0;
            auVar15 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar19);
            auVar14 = vectorConvertFromUnsignedFixedPointWord(auVar21,0);
            auVar17 = vectorMultiplyAddFloatingPoint(auVar15,auVar22,auVar20);
            auVar15 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar16);
            auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            vectorCompareGreaterThanFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar15 = ZEXT416(0);
              vectorCompareGreaterThanOrEqualToFloatingPoint
                        (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
              if ((bool)(in_cr6 >> 1 & 1)) {
                fVar2 = 0.0;
              }
            }
            else {
              fVar2 = (float)*(byte *)(uVar5 + 0x10);
            }
            MB_SetAnimation((ulonglong)uVar4,6,(int)fVar2,(int)(dVar13 * dVar12));
          }
          *(undefined2 *)((int)pvVar3 + 0x272) = 0xffff;
        }
      }
      else {
        MB_SetAnimation(param_1,5,3,(int)(dVar13 * dVar12));
        uVar4 = *(uint *)((int)pMVar6->pVar + 0x268);
        if (uVar4 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar17 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar16 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar14 = loadVectorLeftIndexed(0x5c,param_1);
          auVar17 = vectorReciprocalEstimateFloatingPoint(auVar14);
          auVar15 = loadVectorLeftIndexed(8,0x432a24);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar18 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar15 = ZEXT416(0xffffffff);
          auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar20 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar15 = ZEXT416(0xffffffff);
          auVar23 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar22 = vectorShiftLeftIntegerWord(auVar19,auVar19);
          auVar15 = ZEXT416(0xfffffff8);
          auVar24 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar18);
          auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar16);
          auVar19 = loadVectorLeftIndexed(0x5c,(ulonglong)uVar4);
          auVar17 = loadVectorLeftIndexed(0x3c,0x432a24);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = *(uint *)(*(int *)(uVar4 + 0x24) + 0x60);
          auVar20 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
          auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar20,auVar21);
          auVar21 = loadVectorLeftIndexed(0x10,(ulonglong)uVar5);
          auVar20 = vectorShiftLeftIntegerWord(auVar23,auVar23);
          auVar21 = vectorShiftRightWord
                              (auVar21,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                              );
          auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar14,auVar18);
          auVar18 = vectorConvertFromUnsignedFixedPointWord(auVar21,0);
          fVar2 = (*(float *)(uVar4 + 0x5c) / pMVar6->frameSpeed) * 3.0;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar15,auVar22);
          auVar15 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar19,auVar24);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar14,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar20);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          vectorCompareGreaterThanFloatingPoint
                    (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar15 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              fVar2 = 0.0;
            }
          }
          else {
            fVar2 = (float)*(byte *)(uVar5 + 0x10);
          }
          MB_SetAnimation((ulonglong)uVar4,6,(int)fVar2,(int)(dVar13 * dVar12),0x10);
        }
        *(undefined2 *)((int)pvVar3 + 0x272) = 0xffff;
      }
    }
    if ((pMVar6->updateId == pMVar6->animationId && pMVar6->animationId == '\x05') &&
       (dVar10 != 0.0)) {
      dVar13 = (double)BlendAnimFrame(pMVar6);
      pMVar6->unk58 = (float)(25.0 - dVar13) / (float)(dVar10 * 0.5);
    }
  }
  if (*(int *)((int)pvVar3 + 0x268) != 0) {
    *(float *)(*(int *)((int)pvVar3 + 0x268) + 0x58) = pMVar6->unk58;
  }
  return;
}


// 0x0433450 (0x1008 bytes)
// inlined: FastAtan2 @0x433698, FastAtan2 @0x433c80
/* Moby 717 */

void UpdateMoby_717(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar19;
  short sVar21;
  int iVar20;
  bool bVar22;
  undefined8 uVar18;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  int *path;
  ulonglong unaff_r25;
  undefined4 *puVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f20;
  double dVar34;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double in_f29;
  ulonglong in_f30;
  double dVar41;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  double dVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  float fVar53;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x1b0;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x38] = in_LR;
  puVar13[0x2a] = in_f20;
  puVar13[0x2b] = in_f21;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = (ulonglong)in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x29] = unaff_r31;
  cVar1 = moby->enabled;
  puVar13[0x28] = unaff_r30;
  pvVar8 = moby->pVar;
  uVar29 = ZEXT48(pvVar8);
  puVar13[0x27] = unaff_r29;
  puVar13[0x26] = unaff_r28;
  puVar13[0x25] = unaff_r27;
  puVar13[0x24] = unaff_r26;
  puVar13[0x23] = unaff_r25;
  if ((cVar1 != '\0') &&
     (fVar53 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar53 * fVar53) < 29.0)) {
    MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x17';
  }
  bVar2 = moby->state;
  if (bVar2 == 0) {
    moby->updateDistance = '\x18';
    iVar20 = *(int *)((int)pvVar8 + 0x234);
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    pSVar9 = Splines[iVar20];
    *(Spline **)((int)pvVar8 + 0x244) = pSVar9;
    M717_00431a30(lVar16,0,uVar15 - 0x130);
    fVar3 = *(f32 *)(puVar13 + 0x11);
    (moby->pos).y = *(f32 *)((int)puVar13 + 0x84);
    (moby->pos).z = fVar3;
    fVar3 = *(f32 *)(puVar13 + 0x10);
    (moby->pos).w = *(f32 *)((int)puVar13 + 0x8c);
    (moby->pos).x = fVar3;
    *(f32 *)((int)pvVar8 + 0x200) = fVar3;
    *(f32 *)((int)pvVar8 + 0x204) = (moby->pos).y;
    *(f32 *)((int)pvVar8 + 0x208) = (moby->pos).z;
    *(f32 *)((int)pvVar8 + 0x20c) = (moby->pos).w;
    fVar6 = 0.0;
    (moby->rotation).x = 0.0;
    (moby->rotation).y = 0.0;
    fVar53 = pSVar9->points[1].x - pSVar9->points[0].x;
    fVar4 = pSVar9->points[1].y - pSVar9->points[0].y;
    fVar5 = ABS(fVar53);
    fVar7 = ABS(fVar4);
    *(float *)((int)puVar13 + 0xbc) = fVar53;
    *(float *)(puVar13 + 0x18) = fVar4;
    *(float *)((int)puVar13 + 0xc4) = fVar5 - fVar7;
    uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xbc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x18) >> 0x1d) & 4;
    fVar53 = ABS(*(float *)((int)puVar13 + 0xbc));
    if (*(float *)((int)puVar13 + 0xc4) - 0.0 < 0.0) {
      fVar53 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    fVar14 = ABS(*(float *)(puVar13 + 0x18));
    if (*(float *)((int)puVar13 + 0xc4) - 0.0 < 0.0) {
      fVar14 = fVar5;
    }
    if (0.0 < fVar53) {
      lVar16 = uVar15 - 0x1a0;
      lVar26 = uVar15 - 0xb8;
      lVar23 = uVar15 - 200;
      lVar30 = 2;
      fVar53 = (fVar14 - fVar53) / (fVar14 + fVar53);
      fVar5 = fVar53 * fVar53;
      *(float *)((int)puVar13 + 0xf4) = fVar53;
      *(float *)((int)puVar13 + 0xec) = fVar53;
      *(float *)(puVar13 + 0x1e) = fVar53;
      *(float *)(puVar13 + 0x1d) = fVar53;
      fVar53 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar5;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar53;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar53 * fVar5;
      do {
        *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xd8) * fVar53 * fVar53;
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar53 * fVar53;
        lVar26 = lVar26 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar26 = uVar15 - 200;
      pfVar24 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar23 = lVar26;
      do {
        fVar53 = *pfVar24;
        fVar5 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xe8) * fVar53;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
        lVar23 = lVar23 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar16 = 2;
      do {
        iVar20 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar28 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar20 + 0xe8) + *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8)
                + *(float *)(iVar28 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar6 = (fVar6 + 0.7853982) * fVar7 + fVar4;
    }
    (moby->rotation).z = fVar6;
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar47 = loadVectorLeftIndexed(0x250,uVar29);
    auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar48 = loadVectorRightIndexed(0x260,uVar29);
    auVar50 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
    auVar51 = loadVectorLeftIndexed(0x10,0x4333a0);
    auVar45 = ZEXT416(0xffffffff);
    auVar49 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar45 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar47 = vectorConvertFromSignedFixedPointWord(auVar47 | auVar48,0);
    auVar48 = vectorShiftLeftIntegerWord(auVar49,auVar49);
    auVar46 = vectorMultiplyAddFloatingPoint
                        (auVar50,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar46);
    auVar45 = loadVectorLeftIndexed(0xc,0x4333a0);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar47 = vectorMultiplyAddFloatingPoint(auVar46,auVar47,auVar48);
    auVar46 = vectorMultiplyAddFloatingPoint
                        (auVar50,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x238,uVar29);
    *(undefined4 *)((int)pvVar8 + 0x238U & 0xfffffffc) = uVar12;
    auVar45 = loadVectorLeftIndexed(0x14,0x4333a0);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar47 = vectorMultiplyAddFloatingPoint
                        (auVar50,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar47);
    auVar45 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x23c,uVar29);
    *(undefined4 *)((int)pvVar8 + 0x23cU & 0xfffffffc) = uVar12;
    if (g_MiscLevelFlags.Zoomerator == false) {
      auVar45 = ZEXT416(4);
      auVar48 = ZEXT416(0xffffffff);
      auVar52 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
      auVar48 = loadVectorLeftIndexed(0x548,0xa10000);
      auVar48 = vectorSubtractUnsignedWordModulo
                          (auVar48,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
      auVar45 = ZEXT416(0);
      auVar50 = vectorConvertFromSignedFixedPointWord(auVar48,0);
      auVar48 = loadVectorLeftIndexed(0x18,0x4333a0);
      auVar49 = loadVectorLeftIndexed(0x1c,0x4333a0);
      auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar49 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar51 = loadVectorLeftIndexed(0x20,0x4333a0);
      auVar45 = vectorCompareGreaterThanFloatingPoint
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar50);
      auVar50 = vectorLogicalAndWithComplement(auVar50,auVar45);
      auVar45 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar51 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar48 = vectorNegativeMultiplySubtractFloatingPoint
                          (auVar50,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                           auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60);
      auVar49 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar50 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar45 = vectorCompareGreaterThanFloatingPoint(auVar51,auVar48);
      auVar48 = vectorConditionalSelect(auVar48,auVar51,auVar45);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar48,auVar49);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar47,auVar48,auVar50);
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x238,uVar29
                         );
      *(undefined4 *)((int)pvVar8 + 0x238U & 0xfffffffc) = uVar12;
      uVar12 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x23c,uVar29
                         );
      *(undefined4 *)((int)pvVar8 + 0x23cU & 0xfffffffc) = uVar12;
    }
    dVar32 = (double)MB_randRot();
    *(float *)((int)pvVar8 + 0x274) = (float)dVar32;
    moby->state = '\x01';
  }
  else if (bVar2 < 2) {
    if (g_heroStateType == 0x16) {
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      moby->updateDistance = -1;
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      *(undefined2 *)((int)pvVar8 + 600) = 0;
      auVar45 = loadVectorLeftIndexed(0x24,0x4333a0);
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorMultiplyAddFloatingPoint
                          (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                           auVar46);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar45,0x25a,uVar29);
      *(undefined2 *)((int)pvVar8 + 0x25a) = uVar11;
      *(undefined4 *)((int)pvVar8 + 0x24c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x248) = 0;
      *(undefined4 *)((int)pvVar8 + 0x26c) = 0;
      *(undefined4 *)((int)pvVar8 + 0x264) = 0;
      *(undefined4 *)((int)pvVar8 + 0x240) = 0;
      if (*(int *)((int)pvVar8 + 0x268) == 0) {
        iVar20 = FUN_0037afa8(lVar16);
        *(int *)((int)pvVar8 + 0x268) = iVar20;
        if (iVar20 != 0) {
          *(undefined4 *)(*(int *)(iVar20 + 0x78) + 0x50) = 1;
        }
      }
      uVar10 = *(uint *)((int)pvVar8 + 0x250);
      if (uVar10 + (((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) * -2 == 1) {
        iVar20 = *(int *)((int)pvVar8 + 0x268);
        moby->modeBits = moby->modeBits | MIRROR;
        if (iVar20 != 0) {
          *(ushort *)(iVar20 + 0x34) = *(ushort *)(iVar20 + 0x34) | 0x8000;
        }
      }
      moby->state = '\x02';
    }
  }
  else if (bVar2 < 3) {
    if (g_heroStateType == 0x16) {
      M717_00431c90(lVar16);
      M717_00432258(lVar16);
      dVar32 = (double)M717_00432718(lVar16);
      if (*(int *)((int)pvVar8 + 0x26c) != 0) {
        iVar20 = *(int *)((int)pvVar8 + 0x26c) + 1;
        *(int *)((int)pvVar8 + 0x26c) = iVar20;
        dVar32 = (double)(longlong)(int)(animationSpeed * 17.5);
        puVar13[0x21] = (ulonglong)dVar32;
        if (iVar20 < *(int *)((int)puVar13 + 0x10c)) {
          dVar43 = 0.0;
          sVar21 = *(short *)((int)pvVar8 + 600);
          iVar20 = *(int *)((int)pvVar8 + 0x27c);
          lVar23 = (longlong)sVar21;
          path = *(int **)((int)pvVar8 + 0x244);
          dVar32 = dVar43;
          if (sVar21 < iVar20) {
            do {
              iVar19 = MB_PathStepIndex(path,(int)lVar23,1,1);
              path = *(int **)((int)pvVar8 + 0x244);
              iVar20 = (int)(lVar23 << 4);
              iVar28 = (int)((longlong)iVar19 << 4);
              fVar53 = *(float *)((int)path + iVar20 + 0x14) - *(float *)((int)path + iVar28 + 0x14)
              ;
              fVar4 = *(float *)((int)path + iVar20 + 0x10) - *(float *)((int)path + iVar28 + 0x10);
              iVar20 = *(int *)((int)pvVar8 + 0x27c);
              dVar32 = (double)(float)(dVar32 + (double)SQRT(fVar4 * fVar4 + fVar53 * fVar53));
              lVar23 = (longlong)iVar19;
            } while (iVar19 < iVar20);
            sVar21 = *(short *)((int)pvVar8 + 600);
          }
          fVar7 = DAT_0071f418;
          fVar53 = (float)(dVar32 / (double)*(float *)((int)pvVar8 + 0x240));
          fVar4 = (float)path[iVar20 * 4 + 6];
          fVar6 = *(float *)((int)path + (int)((longlong)sVar21 << 4) + 0x18);
          fVar5 = DAT_0071f418 * 21.0;
          uVar10 = (int)*(uint *)((int)pvVar8 + 0x24c) >> 0x1f;
          if ((int)((uVar10 >> 1 ^ *(uint *)((int)pvVar8 + 0x24c)) - uVar10) < 0) {
            *(float *)((int)pvVar8 + 0x24c) = (float)dVar43;
          }
          fVar53 = Delt(fVar5 * fVar53 * 0.5 + (fVar4 - fVar6) / fVar53,fVar7 * 110.0,
                                  (float *)((int)pvVar8 + 0x24c));
          dVar32 = (double)fVar53;
        }
      }
      M717_00432a70(dVar32,lVar16);
      M717_00431a30(lVar16,*(undefined2 *)((int)pvVar8 + 600),uVar15 - 0x140);
      fVar53 = *(float *)(puVar13 + 0xe) - (moby->pos).x;
      fVar4 = *(float *)((int)puVar13 + 0x74) - (moby->pos).y;
      fVar5 = ABS(fVar53);
      fVar6 = ABS(fVar4);
      *(float *)(puVar13 + 0x16) = fVar53;
      *(float *)((int)puVar13 + 0xb4) = fVar4;
      *(float *)(puVar13 + 0x17) = fVar5 - fVar6;
      dVar32 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
      fVar53 = ABS(*(float *)(puVar13 + 0x16));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar53 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      dVar43 = dVar32;
      if (0.0 < fVar53) {
        lVar23 = uVar15 - 0x1a0;
        lVar26 = uVar15 - 0xe8;
        lVar30 = uVar15 - 0xd8;
        lVar31 = 2;
        fVar53 = (fVar7 - fVar53) / (fVar7 + fVar53);
        fVar5 = fVar53 * fVar53;
        *(float *)((int)puVar13 + 0xd4) = fVar53;
        *(float *)((int)puVar13 + 0xcc) = fVar53;
        *(float *)(puVar13 + 0x1a) = fVar53;
        *(float *)(puVar13 + 0x19) = fVar53;
        fVar53 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar5;
        *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar53;
        *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar53 * fVar5;
        do {
          *(float *)((int)lVar23 + 200) = *(float *)((int)lVar23 + 0xb8) * fVar53 * fVar53;
          iVar20 = (int)lVar26;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar53 * fVar53;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar15 - 0xe8;
        pfVar24 = (float *)&DAT_007358e0;
        lVar23 = lVar17;
        lVar26 = lVar30;
        do {
          fVar53 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar23 + 200) = *(float *)((int)lVar23 + 200) * fVar53;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar23 = 2;
        do {
          iVar20 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar28 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar20 + 200)) +
                            *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                           *(float *)(iVar28 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar43 = (double)((float)(dVar43 + 0.7853981852531433) * fVar6 + fVar4);
      }
      dVar40 = 0.30000001192092896;
      AccelDeltAng
                (dVar43,(double)(DAT_0071f40c * 0.035),(double)(DAT_0071f40c * 0.3),
                 (double)(g_FrameTime * 6.981317),lVar16 + 0x48,&DAT_00720000,
                 uVar29 + 0x248);
      fVar53 = *(float *)(puVar13 + 0xf);
      fVar4 = *(float *)((int)pvVar8 + 0x208);
      if (*(float *)((int)pvVar8 + 0x208) < fVar53 - 5.0) {
        *(float *)((int)pvVar8 + 0x208) = fVar53;
        fVar4 = fVar53;
      }
      fVar53 = (moby->rotation).z;
      dVar39 = 3.141592502593994;
      fVar5 = fVar53 + 1.5707963;
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar43 = 2.601886990305502e-06;
      fVar6 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar6 = fVar5;
      }
      fVar7 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar6 = 3.1415925 - fVar53;
      if (fVar53 - (3.1415925 - fVar53) < 0.0) {
        fVar6 = fVar53;
      }
      fVar5 = fVar7 * fVar7;
      fVar14 = -3.1415925 - fVar53;
      if ((-3.1415925 - fVar53) - fVar6 < 0.0) {
        fVar14 = fVar6;
      }
      fVar53 = fVar5 * fVar5 * fVar7;
      fVar6 = fVar5 * fVar53;
      dVar44 = (double)((fVar5 * fVar6 * 2.601887e-06 +
                        fVar6 * -0.0001980741 +
                        fVar53 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) *
                       *(float *)((int)pvVar8 + 0x240));
      fVar6 = fVar14 * fVar14;
      *(float *)((int)pvVar8 + 0x208) = fVar4;
      *(float *)((int)pvVar8 + 0x200) = (float)((double)*(float *)((int)pvVar8 + 0x200) + dVar44);
      fVar53 = fVar6 * fVar6 * fVar14;
      fVar4 = fVar6 * fVar53;
      dVar41 = (double)((fVar6 * fVar4 * 2.601887e-06 +
                        fVar4 * -0.0001980741 +
                        fVar53 * 0.0083330255 + fVar6 * fVar14 * -0.16666657 + fVar14) *
                       *(float *)((int)pvVar8 + 0x240));
      *(float *)((int)pvVar8 + 0x204) = (float)((double)*(float *)((int)pvVar8 + 0x204) + dVar41);
      *(undefined4 *)(puVar13 + 0x13) = 0;
      *(float *)((int)puVar13 + 0x9c) = (float)in_f29;
      *(float *)(puVar13 + 0x12) = (float)(dVar44 * 4.0);
      *(float *)((int)puVar13 + 0x94) = (float)(dVar41 * 4.0);
      *(float *)(puVar13 + 0x12) = (float)(dVar44 * 4.0) + *(float *)((int)pvVar8 + 0x200);
      *(float *)((int)puVar13 + 0x94) = (float)(dVar41 * 4.0) + *(float *)((int)pvVar8 + 0x204);
      *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)((int)pvVar8 + 0x208);
      dVar34 = 1.0;
      lVar17 = lVar16;
      iVar20 = CollMobySphere(0x3ff0000000000000,uVar15 - 0x120,&DAT_004333a0,0,lVar16,0);
      if (iVar20 != 0) {
        *(float *)((int)puVar13 + 0xac) = (float)in_f29;
        *(undefined4 *)(puVar13 + 0x15) = 0;
        *(float *)(puVar13 + 0x14) = (float)(dVar44 * 7.0);
        *(float *)((int)puVar13 + 0xa4) = (float)(dVar41 * 7.0);
        if (0 < iVar20) {
          puVar27 = &DAT_00a14a00;
          iVar28 = 0;
          do {
            bVar22 = MB_isCrate(*puVar27);
            if (bVar22) {
              CollDamageMobyDirect
                        ((float)dVar34,(MobyInstance *)*puVar27,moby,0x30000,(int)lVar17,
                         (float *)((int)pvVar8 + 0x200),(float *)(puVar13 + 0x14));
            }
            iVar28 = iVar28 + 1;
            puVar27 = puVar27 + 1;
          } while (iVar28 < iVar20);
        }
      }
      dVar42 = 0.5;
      dVar41 = (double)GetGroundZ(0x3fe0000000000000,uVar29 + 0x200,0);
      dVar34 = (double)*(float *)((int)pvVar8 + 0x208);
      dVar44 = (double)(float)(dVar34 - dVar41);
      if ((dVar32 < dVar44) || (0 < *(int *)((int)pvVar8 + 0x24c))) {
        dVar33 = -(double)(DAT_0071f418 * 21.0 - *(float *)((int)pvVar8 + 0x24c));
        *(float *)((int)pvVar8 + 0x24c) = (float)dVar33;
      }
      else {
        dVar33 = (double)*(float *)((int)pvVar8 + 0x24c);
        if (ABS(dVar44) < dVar42) {
          *(undefined4 *)((int)pvVar8 + 0x24c) = 0;
          *(undefined4 *)((int)pvVar8 + 0x26c) = 0;
          dVar34 = dVar41;
          dVar33 = dVar32;
        }
      }
      *(float *)((int)pvVar8 + 0x208) = (float)(dVar34 + dVar33);
      iVar19 = FastDecTimerS16(uVar29 + 0x25a);
      iVar28 = DAT_0096a5a0;
      iVar20 = g_RaceTime;
      fVar53 = g_FrameTime;
      if (iVar19 == 0) {
        Delt(*(float *)((int)pvVar8 + 0x23c),DAT_0071f418 * 20.0,
                       (float *)((int)pvVar8 + 0x240));
      }
      else {
        fVar4 = *(float *)((int)pvVar8 + 0x238);
        if (dVar41 - (double)*(float *)((int)pvVar8 + 0x208) < 0.0) {
          fVar4 = g_FrameTime * 19.0;
        }
        puVar13[0x21] = (longlong)(int)(animationSpeed * 700.5);
        if (iVar20 < *(int *)((int)puVar13 + 0x10c)) {
          fVar4 = fVar53 * 3.0 + fVar4;
        }
        fVar6 = fVar53 + fVar4;
        if ((short)(&DAT_0096a4a0)[*(int *)((int)pvVar8 + 0x250)] < iVar28) {
          fVar6 = -(fVar53 * 1.5 - fVar4);
        }
        if (*(float *)((int)pvVar8 + 0x240) <= fVar6) {
          Delt(fVar6,DAT_0071f418 * 15.0,(float *)((int)pvVar8 + 0x240));
        }
        else {
          Delt(fVar6,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x240));
        }
      }
      if ((dVar44 < 0.20000000298023224) && (*(int *)((int)pvVar8 + 0x24c) < 0)) {
        *(float *)((int)pvVar8 + 0x208) = (float)dVar41;
        *(undefined4 *)((int)pvVar8 + 0x26c) = 0;
      }
      MB_SetScaleCheat(0x4008000000000000,uVar29 + 0x180);
      fVar53 = *(float *)((int)pvVar8 + 0x248);
      fVar4 = g_FrameTime * 2.6179938;
      dVar32 = (double)DAT_0071f40c;
      if ((fVar53 <= fVar4) && (fVar4 = fVar53, fVar53 < g_FrameTime * -2.6179938)) {
        fVar4 = g_FrameTime * -2.6179938;
      }
      if ((moby->modeBits & MIRROR) != NONE) {
        fVar4 = -fVar4;
      }
      *(float *)((int)pvVar8 + 0x1e8) = fVar4 * 30.0;
      *(float *)((int)pvVar8 + 0x68) = fVar4 * 20.0;
      *(float *)((int)pvVar8 + 0x168) = fVar4 * 50.0;
      *(float *)((int)pvVar8 + 0xe4) = fVar4 * 40.0;
      dVar34 = 0.019999999552965164;
      MB_UpdateManipulatorRot
                ((double)(float)(dVar32 * 0.019999999552965164),(double)(float)(dVar32 * dVar40),
                 lVar16,uVar29 + 0x180,3);
      MB_UpdateManipulatorRot
                ((double)(float)((double)DAT_0071f40c * dVar34),
                 (double)(float)((double)DAT_0071f40c * dVar40),lVar16,uVar29,0);
      MB_UpdateManipulatorRot
                ((double)(float)((double)DAT_0071f40c * dVar34),
                 (double)(float)((double)DAT_0071f40c * dVar40),lVar16,uVar29 + 0x100,1);
      MB_UpdateManipulatorRot
                ((double)(float)((double)DAT_0071f40c * 0.014999999664723873),
                 (double)(float)((double)DAT_0071f40c * dVar40),lVar16,uVar29 + 0x80,2);
      (moby->pos).x = *(f32 *)((int)pvVar8 + 0x200);
      (moby->pos).y = *(f32 *)((int)pvVar8 + 0x204);
      fVar53 = *(float *)((int)pvVar8 + 0x208);
      (moby->pos).z = fVar53;
      (moby->pos).w = *(f32 *)((int)pvVar8 + 0x20c);
      (moby->pos).z = fVar53 + 0.25;
      dVar40 = (double)FastWrapRot
                                 (*(float *)((int)pvVar8 + 0x274),g_FrameTime * 6.108652);
      *(float *)((int)pvVar8 + 0x274) = (float)dVar40;
      dVar32 = (double)(float)(dVar39 - dVar40);
      if (dVar40 - (double)(float)(dVar39 - dVar40) < 0.0) {
        dVar32 = dVar40;
      }
      dVar39 = (double)(float)(dVar38 - dVar40);
      if ((double)(float)(dVar38 - dVar40) - dVar32 < 0.0) {
        dVar39 = dVar32;
      }
      uVar18 = *(undefined8 *)&moby->color;
      iVar20 = *(int *)((int)pvVar8 + 0x268);
      dVar32 = (double)(float)(dVar39 * dVar39);
      dVar38 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar39));
      dVar40 = (double)(float)(dVar32 * dVar38);
      (moby->pos).z =
           (float)((double)(float)(dVar32 * dVar40) * dVar43 +
                  (double)(float)(dVar40 * dVar35 +
                                 (double)(float)(dVar38 * dVar36 +
                                                (double)(float)((double)(float)(dVar32 * dVar39) *
                                                                dVar37 + dVar39)))) * 0.08 +
           (moby->pos).z;
      if (iVar20 != 0) {
        *(undefined8 *)(iVar20 + 0x38) = uVar18;
        iVar20 = *(int *)((int)pvVar8 + 0x268);
        *(f32 *)(iVar20 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar20 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar20 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar20 + 0x1c) = (moby->pos).w;
        iVar20 = *(int *)((int)pvVar8 + 0x268);
        *(f32 *)(iVar20 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar20 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar20 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar20 + 0x4c) = (moby->rotation).w;
        if (*(short *)((int)pvVar8 + 0x25a) != 0) {
          *(undefined1 *)(*(int *)((int)pvVar8 + 0x268) + 0xbc) = 1;
        }
      }
    }
    else {
      moby->state = '\0';
    }
  }
  return;
}


