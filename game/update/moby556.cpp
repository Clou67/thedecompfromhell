// game/update/moby556.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x3b3364-0x3b5ce0
#include "game/update/moby556.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x03b3364 (0x14 bytes)
void M556_003b3364(void)

{
  DAT_008458ec = 0x10000;
  return;
}


// 0x03b3378 (0x38 bytes)
void M556_003b3378(int param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x2c0) + (int)(param_2 << 4);
  *param_3 = *(undefined4 *)(iVar1 + 0x10);
  param_3[1] = *(undefined4 *)(iVar1 + 0x14);
  param_3[2] = *(undefined4 *)(iVar1 + 0x18);
  param_3[3] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}


// 0x03b33c8 (0x5c4 bytes)
// inlined: FastAtan2 @0x3b34e4, FastAtan2 @0x3b385c
void M556_003b33c8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  uint uVar8;
  Spline *spline;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  short sVar16;
  int iVar15;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x110;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x24] = in_LR;
  puVar10[0x1f] = in_f29;
  puVar10[0x20] = in_f30;
  puVar10[0x21] = in_f31;
  puVar10[0x1c] = unaff_r29;
  puVar10[0x1e] = unaff_r31;
  puVar10[0x1d] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 0x10);
  uVar14 = (uint)*(ushort *)(iVar6 + 0x2f4);
  fVar3 = *(float *)(param_1 + 0x14);
  iVar15 = *(int *)(iVar6 + 0x2c0) + (int)((longlong)(short)*(ushort *)(iVar6 + 0x2f4) << 4);
  puVar10[0x1a] = unaff_r27;
  fVar2 = *(float *)(iVar15 + 0x10) - fVar2;
  fVar3 = *(float *)(iVar15 + 0x14) - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  *(float *)((int)puVar10 + 0x84) = fVar4 - fVar5;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar27 = 0.7853981852531433;
  puVar10[0x1b] = unaff_r28;
  dVar23 = dVar25;
  iVar15 = iVar6;
  if (0.0 < fVar2) {
    lVar17 = uVar13 - 0x100;
    lVar18 = uVar13 - 0x68;
    lVar21 = uVar13 - 0x58;
    lVar22 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar10 + 0x15) = fVar2;
    *(float *)((int)puVar10 + 0xac) = fVar2;
    *(float *)(puVar10 + 0x16) = fVar2;
    *(float *)((int)puVar10 + 0xb4) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar5;
    *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar2;
    *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0x98) * fVar2 * fVar2;
      iVar12 = (int)lVar18;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
      lVar21 = lVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar21 = uVar13 - 0x68;
    pfVar19 = (float *)&DAT_007358e0;
    lVar17 = lVar1;
    lVar18 = lVar21;
    do {
      fVar2 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0xa8) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar18 = 2;
    lVar17 = lVar1;
    do {
      iVar12 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar11 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
  }
  while( true ) {
    iVar15 = *(int *)(iVar15 + 0x2c0) + (int)((longlong)(short)uVar14 << 4);
    fVar2 = *(float *)(iVar15 + 0x14) - *(float *)(iVar6 + 0x264);
    fVar3 = *(float *)(iVar15 + 0x10) - *(float *)(iVar6 + 0x260);
    dVar26 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    dVar23 = (double)FastSubRots((float)dVar23,*(float *)(param_1 + 0x48));
    if (((dVar23 < 1.5707963705062866) || (4.0 < dVar26)) && (2.0 < dVar26)) break;
    pSVar7 = *(Spline **)(iVar6 + 0x2c0);
    iVar15 = *(short *)(iVar6 + 0x2f4) + 1;
    uVar14 = iVar15 - (iVar15 / pSVar7->cnt) * pSVar7->cnt;
    sVar16 = (short)uVar14;
    *(short *)(iVar6 + 0x2f4) = sVar16;
    spline = Splines[*(int *)(iVar6 + 0x290)];
    if (pSVar7 == spline) {
      uVar8 = *(uint *)((int)&pSVar7->points[0].w + (int)((longlong)sVar16 << 4));
      uVar9 = (int)uVar8 >> 0x1f;
      if (0x41200000 < (int)((uVar9 >> 1 ^ uVar8) - uVar9)) {
        iVar15 = MB_randInt(100);
        uVar14 = (uint)*(ushort *)(iVar6 + 0x2f4);
        if (0x1e < iVar15) {
          iVar15 = FastDoubleToInt
                             ((double)*(float *)(*(int *)(iVar6 + 0x2c0) +
                                                 (int)((longlong)(short)*(ushort *)(iVar6 + 0x2f4)
                                                      << 4) + 0x1c));
          uVar14 = 0;
          iVar15 = *(int *)(iVar6 + (iVar15 + -0xb) * 4 + 0x294);
          *(undefined2 *)(iVar6 + 0x2f4) = 0;
          *(Spline **)(iVar6 + 0x2c0) = Splines[iVar15];
        }
      }
    }
    else if ((int)sVar16 == pSVar7->cnt + -1) {
      *(Spline **)(iVar6 + 0x2c0) = spline;
      iVar15 = PathFindClosestPnt((float)dVar25,(Vec4 *)(iVar6 + 0x260),spline);
      *(short *)(iVar6 + 0x2f4) = (short)iVar15;
      uVar14 = MB_PathStepIndex(*(int **)(iVar6 + 0x2c0),(int)(short)iVar15,5,1);
      *(short *)(iVar6 + 0x2f4) = (short)uVar14;
    }
    iVar15 = *(int *)(param_1 + 0x78);
    iVar12 = *(int *)(iVar15 + 0x2c0) + (int)((longlong)(short)uVar14 << 4);
    fVar2 = *(float *)(iVar12 + 0x10) - *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(iVar12 + 0x14) - *(float *)(param_1 + 0x14);
    dVar23 = ABS((double)fVar2);
    dVar24 = ABS((double)fVar3);
    *(float *)(puVar10 + 0xe) = fVar2;
    *(float *)((int)puVar10 + 0x74) = fVar3;
    *(float *)(puVar10 + 0xf) = (float)(dVar23 - dVar24);
    uVar20 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar10 + 0xe));
    if ((double)*(float *)(puVar10 + 0xf) - dVar25 < 0.0) {
      dVar26 = dVar24;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar24 = ABS((double)*(float *)((int)puVar10 + 0x74));
    if ((double)*(float *)(puVar10 + 0xf) - dVar25 < 0.0) {
      dVar24 = dVar23;
    }
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    dVar23 = dVar25;
    if (dVar25 < dVar26) {
      lVar17 = uVar13 - 0x100;
      lVar21 = uVar13 - 0x78;
      lVar18 = uVar13 - 0x88;
      lVar22 = 2;
      fVar5 = (float)(dVar24 - dVar26) / (float)(dVar24 + dVar26);
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x11) = fVar5;
      *(float *)((int)puVar10 + 0x8c) = fVar5;
      *(float *)(puVar10 + 0x12) = fVar5;
      *(float *)((int)puVar10 + 0x94) = fVar5;
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar4;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar5;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar5 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar5 * fVar5;
        iVar12 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar12 + 4) * fVar5 * fVar5;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar13 - 0x88;
      pfVar19 = (float *)&DAT_007358e0;
      lVar17 = lVar1;
      lVar18 = lVar21;
      do {
        fVar5 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x88) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      lVar17 = lVar1;
      do {
        iVar12 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x88)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar23 = (double)((float)(dVar23 + dVar27) * fVar2 + fVar3);
    }
  }
  return;
}


// 0x03b39b0 (0x4c0 bytes)
MobyInstance * M556_003b39b0(int param_1)

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
    group = (MobyInstance *)FastDecTimerS32(uVar5 + 0x2dc);
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
          auVar20 = loadVectorLeftIndexed(0x14,0x3b398c);
          auVar22 = loadVectorLeftIndexed(0x18,0x3b398c);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_a0->oClass == HOVERBOARD_RING) {
              dVar12 = (double)((local_a0->pos).y - *(float *)(uVar1 + 0x264));
              dVar11 = (double)((local_a0->pos).x - *(float *)(uVar1 + 0x260));
              dVar13 = (double)((local_a0->pos).z -
                               (float)((double)*(float *)(uVar1 + 0x268) + dVar7));
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
                  auVar19 = loadVectorLeftIndexed(0x2f6,uVar5);
                  auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar14);
                  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar20,auVar16);
                  auVar17 = loadVectorRightIndexed(0x306,uVar5);
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
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x2f6,uVar5);
                  *(undefined2 *)(uVar1 + 0x2f6) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x2dc,uVar5);
                  *(undefined4 *)(uVar1 + 0x2dc & 0xfffffffc) = uVar4;
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
          auVar20 = loadVectorLeftIndexed(0x14,0x3b398c);
          auVar22 = loadVectorLeftIndexed(0x18,0x3b398c);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          do {
            if (local_9c->oClass == HOVERBOARD_BOOST_PAD) {
              dVar12 = (double)((local_9c->pos).y - *(float *)(uVar1 + 0x264));
              dVar11 = (double)((local_9c->pos).x - *(float *)(uVar1 + 0x260));
              dVar13 = (double)((local_9c->pos).z - *(float *)(uVar1 + 0x268));
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
                  auVar17 = loadVectorLeftIndexed(0x2f6,uVar5);
                  auVar22 = ZEXT416(0xfffffff0);
                  auVar19 = loadVectorRightIndexed(0x306,uVar5);
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
                  uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x2f6,uVar5);
                  *(undefined2 *)(uVar1 + 0x2f6) = uVar3;
                  uVar4 = storeVectorElementWordIndexed
                                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                     0x2dc,uVar5);
                  *(undefined4 *)(uVar1 + 0x2dc & 0xfffffffc) = uVar4;
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


// 0x03b3e70 (0xf4 bytes)
void M556_003b3e70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *path;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar2 + 0x2c8) < 1) {
    path = *(int **)(iVar2 + 0x2c0);
    lVar4 = (longlong)*(short *)(iVar2 + 0x2f4);
    if (*(int *)((int)path + (int)(lVar4 << 4) + 0x1c) == 0x3f800000) {
      do {
        iVar3 = MB_PathStepIndex(path,(int)lVar4,1,1);
        lVar4 = (longlong)iVar3;
        path = *(int **)(iVar2 + 0x2c0);
      } while (*(int *)((int)path + (int)(lVar4 << 4) + 0x1c) != 0x40000000);
      *(short *)(iVar2 + 0x2f0) = (short)iVar3;
      iVar3 = (int)((longlong)(short)iVar3 << 4);
      *(undefined4 *)(iVar2 + 0x270) = *(undefined4 *)((int)path + iVar3 + 0x10);
      *(undefined4 *)(iVar2 + 0x274) = *(undefined4 *)((int)path + iVar3 + 0x14);
      *(undefined4 *)(iVar2 + 0x278) = *(undefined4 *)((int)path + iVar3 + 0x18);
      uVar1 = *(undefined4 *)((int)path + iVar3 + 0x1c);
      *(undefined4 *)(iVar2 + 0x2e4) = 1;
      *(undefined4 *)(iVar2 + 0x27c) = uVar1;
    }
  }
  return;
}


// 0x03b3f64 (0x24 bytes)
void M556_003b3f64(void)

{
  MB_SetAnimation();
  return;
}


// 0x03b3fd0 (0x698 bytes)
// inlined: FastAtan2 @0x3b412c
void M556_003b3fd0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  longlong lVar10;
  longlong lVar11;
  short sVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1b] = in_f27;
  puVar7[0x1c] = in_f28;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  puVar7[0x19] = unaff_r30;
  puVar7[0x1a] = unaff_r31;
  pvVar5 = param_1->pVar;
  dVar24 = 0.0;
  iVar12 = *(int *)((int)pvVar5 + 0x2e4);
  puVar7[0x18] = unaff_r29;
  dVar19 = dVar24;
  if (iVar12 == 0) {
    iVar12 = MB_PathStepIndex
                       (*(int **)((int)pvVar5 + 0x2c0),(int)*(short *)((int)pvVar5 + 0x2f4),1,1);
    iVar12 = *(int *)((int)pvVar5 + 0x2c0) + (int)((longlong)iVar12 << 4);
    iVar8 = *(int *)((int)pvVar5 + 0x2c0) + (int)((longlong)*(short *)((int)pvVar5 + 0x2f4) << 4);
    fVar4 = *(float *)(iVar8 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar1 = *(float *)(iVar8 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar2 = *(float *)(iVar12 + 0x18) - *(float *)(iVar8 + 0x18);
    fVar4 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
    *(float *)((int)puVar7 + 0x7c) = fVar2;
    dVar22 = ABS((double)fVar2);
    dVar21 = ABS((double)fVar4);
    *(float *)(puVar7 + 0xf) = fVar4;
    *(float *)(puVar7 + 0x10) = (float)(dVar21 - dVar22);
    uVar14 = (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar7 + 0xf));
    if ((double)*(float *)(puVar7 + 0x10) - dVar19 < 0.0) {
      dVar23 = dVar22;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar7 + 0x7c));
    if ((double)*(float *)(puVar7 + 0x10) - dVar19 < 0.0) {
      dVar22 = dVar21;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (dVar19 < dVar23) {
      lVar10 = uVar9 - 0xf0;
      lVar15 = uVar9 - 0x7c;
      lVar17 = uVar9 - 0x6c;
      lVar18 = 2;
      fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x12) = fVar2;
      *(float *)(puVar7 + 0x11) = fVar2;
      *(float *)((int)puVar7 + 0x8c) = fVar2;
      *(float *)((int)puVar7 + 0x84) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3;
      *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar2;
      *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar10 + 0x84) = *(float *)((int)lVar10 + 0x74) * fVar2 * fVar2;
        iVar12 = (int)lVar15;
        lVar10 = lVar10 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar17 = uVar9 - 0x7c;
      pfVar16 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar10 = lVar11;
      lVar15 = lVar17;
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar10 + 0x84) = *(float *)((int)lVar10 + 0x84) * fVar2;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar10 = 2;
      do {
        iVar12 = (int)lVar11;
        iVar8 = (int)lVar17;
        lVar11 = lVar11 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar12 + 0x84)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar4 + fVar1);
    }
  }
  dVar23 = 0.30000001192092896;
  AccelDeltAng
            (dVar19,(double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),
             (double)(g_FrameTime * 3.1415927),&(param_1->rotation).y,&DAT_003b3f88,
             (int)pvVar5 + 0x2f8);
  fVar4 = animationSpeed;
  iVar12 = *(int *)((int)pvVar5 + 0x2e4);
  if (iVar12 == 0) {
    param_1->unk58 = 1.0;
    if (((param_1->field43_0x70 & 2U) != 0) && (param_1->animationId != '\0')) {
      puVar7[0x15] = (longlong)(int)(animationSpeed * 8.5);
      MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar7 + 0xac));
    }
  }
  else {
    if ((param_1->animationId != '\x05') &&
       (puVar7[0x15] = (longlong)(int)(animationSpeed * 3.5), iVar12 < *(int *)((int)puVar7 + 0xac))
       ) {
      puVar7[0x15] = (longlong)(int)(fVar4 * 5.5);
      MB_SetAnimation(param_1,5,4,*(undefined4 *)((int)puVar7 + 0xac));
      *(undefined2 *)((int)pvVar5 + 0x2fe) = 0xffff;
    }
    dVar19 = (double)(g_FrameTimeSq * 21.0 * -0.5);
    iVar12 = MB_SolveQuad
                       (dVar19,(double)(float)((double)*(float *)((int)pvVar5 + 0x2c8) - dVar19),
                        (double)(*(float *)((int)pvVar5 + 0x268) - *(float *)((int)pvVar5 + 0x278)))
    ;
    dVar21 = 30.0;
    dVar19 = dVar21;
    if ((0 < iVar12) &&
       (uVar6 = (int)*(uint *)(puVar7 + 0xe) >> 0x1f,
       0 < (int)((uVar6 >> 1 ^ *(uint *)(puVar7 + 0xe)) - uVar6))) {
      iVar12 = FastDoubleToInt((double)*(float *)(puVar7 + 0xe));
      puVar7[0x15] = (longlong)iVar12;
      dVar19 = (double)(longlong)puVar7[0x15];
    }
    fVar4 = animationSpeed;
    dVar22 = 7.5;
    iVar12 = *(int *)((int)pvVar5 + 0x2e4);
    puVar7[0x15] = (longlong)(int)(animationSpeed * 7.5);
    if ((((*(int *)((int)puVar7 + 0xac) < iVar12) &&
         (puVar7[0x15] = (longlong)(int)(fVar4 * 11.5), iVar12 < *(int *)((int)puVar7 + 0xac))) &&
        (param_1->animationId == '\x05')) && ((double)(longlong)(fVar4 * 27.5) < dVar19)) {
      sVar13 = MB_randRange(0,3);
      dVar20 = (double)animationSpeed;
      *(short *)((int)pvVar5 + 0x2fe) = sVar13 + 1;
      puVar7[0x15] = (longlong)(int)(dVar20 * dVar22);
      MB_SetAnimation(param_1,sVar13 + 1,3,*(undefined4 *)((int)puVar7 + 0xac));
    }
    if (((*(short *)((int)pvVar5 + 0x2fe) != -1) && (param_1->updateId == param_1->animationId)) &&
       ((dVar20 = (double)BlendAnimFrame(param_1), 7.0 < dVar20 &&
        (dVar20 < 20.0 && dVar19 != dVar24)))) {
      dVar20 = (double)(float)(dVar21 / dVar19);
      if (1.7000000476837158 - (double)(float)(dVar21 / dVar19) < 0.0) {
        dVar20 = 1.7000000476837158;
      }
      if (dVar20 - dVar23 < 0.0) {
        dVar20 = dVar23;
      }
      param_1->unk58 = (float)dVar20;
    }
    if (*(short *)((int)pvVar5 + 0x2fe) != -1) {
      dVar23 = (double)animationSpeed * 5.5;
      if ((double)(longlong)dVar23 <= dVar19) {
        if ((param_1->field43_0x70 & 2U) != 0) {
          puVar7[0x15] = (longlong)(int)((double)animationSpeed * dVar22);
          MB_SetAnimation(param_1,5,0x1c,*(undefined4 *)((int)puVar7 + 0xac));
          *(undefined2 *)((int)pvVar5 + 0x2fe) = 0xffff;
        }
      }
      else {
        puVar7[0x15] = (longlong)(int)dVar23;
        MB_SetAnimation(param_1,5,0x33,*(undefined4 *)((int)puVar7 + 0xac));
        *(undefined2 *)((int)pvVar5 + 0x2fe) = 0xffff;
      }
    }
    if ((param_1->updateId == param_1->animationId) &&
       (param_1->animationId == '\x05' && dVar19 != dVar24)) {
      dVar24 = (double)BlendAnimFrame(param_1);
      param_1->unk58 = (float)((double)(float)(50.0 - dVar24) / dVar19);
    }
  }
  return;
}


// 0x03b4740 (0x15a0 bytes)
// inlined: FastAtan2 @0x3b4938, FastAtan2 @0x3b4d88, FastAtan2 @0x3b5364
/* Moby 556 */

void UpdateMoby_556(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  uint uVar10;
  u16 *puVar11;
  void *pvVar12;
  Spline *pSVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  bool bVar25;
  longlong lVar26;
  float *pfVar27;
  short sVar28;
  int *path;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong unaff_r24;
  undefined4 *puVar31;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar32;
  ulonglong unaff_r29;
  int iVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar40;
  ulonglong in_f24;
  double dVar41;
  ulonglong in_f25;
  double dVar42;
  ulonglong in_f26;
  double dVar43;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar44;
  double in_f29;
  double dVar45;
  ulonglong in_f30;
  double dVar46;
  double dVar47;
  ulonglong in_f31;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  float fVar60;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x260;
  puVar16 = (ulonglong *)lVar21;
  *puVar16 = uVar19;
  puVar16[0x4e] = in_LR;
  puVar16[0x40] = in_f20;
  puVar16[0x41] = in_f21;
  puVar16[0x42] = in_f22;
  puVar16[0x43] = in_f23;
  puVar16[0x44] = in_f24;
  puVar16[0x45] = in_f25;
  puVar16[0x46] = in_f26;
  puVar16[0x47] = in_f27;
  puVar16[0x48] = in_f28;
  puVar16[0x49] = (ulonglong)in_f29;
  puVar16[0x4a] = in_f30;
  puVar16[0x4b] = in_f31;
  puVar16[0x3f] = unaff_r31;
  puVar16[0x3c] = unaff_r28;
  puVar16[0x3b] = unaff_r27;
  pvVar9 = moby->pVar;
  uVar32 = ZEXT48(pvVar9);
  uVar48 = 0x4004000000000000;
  puVar16[0x3e] = unaff_r30;
  puVar16[0x3d] = unaff_r29;
  puVar16[0x3a] = unaff_r26;
  puVar16[0x39] = unaff_r25;
  puVar16[0x38] = unaff_r24;
  MB_SetScaleCheat(0x4004000000000000,uVar32 + 0x1e0);
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = '\x18';
      pSVar13 = Splines[*(int *)((int)pvVar9 + 0x2b0)];
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      *(Spline **)((int)pvVar9 + 0x2c0) = pSVar13;
      iVar22 = *(int *)((int)moby->pVar + 0x2c0);
      fVar2 = *(f32 *)(iVar22 + 0x10);
      fVar3 = *(f32 *)(iVar22 + 0x18);
      fVar4 = *(f32 *)(iVar22 + 0x1c);
      (moby->pos).y = *(f32 *)(iVar22 + 0x14);
      (moby->pos).z = fVar3;
      (moby->pos).w = fVar4;
      (moby->pos).x = fVar2;
      *(f32 *)((int)pvVar9 + 0x260) = fVar2;
      *(f32 *)((int)pvVar9 + 0x264) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x268) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x26c) = (moby->pos).w;
      fVar7 = 0.0;
      (moby->rotation).x = 0.0;
      (moby->rotation).y = 0.0;
      fVar60 = pSVar13->points[1].x - pSVar13->points[0].x;
      fVar5 = pSVar13->points[1].y - pSVar13->points[0].y;
      fVar6 = ABS(fVar60);
      fVar8 = ABS(fVar5);
      *(float *)(puVar16 + 0x27) = fVar60;
      *(float *)((int)puVar16 + 0x13c) = fVar5;
      *(float *)(puVar16 + 0x28) = fVar6 - fVar8;
      uVar29 = (ulonglong)(*(uint *)(puVar16 + 0x27) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar16 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar16 + 0x13c) >> 0x1d) & 4;
      fVar60 = ABS(*(float *)(puVar16 + 0x27));
      if (*(float *)(puVar16 + 0x28) - 0.0 < 0.0) {
        fVar60 = fVar8;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)((int)puVar16 + 0x13c));
      if (*(float *)(puVar16 + 0x28) - 0.0 < 0.0) {
        fVar17 = fVar6;
      }
      if (0.0 < fVar60) {
        lVar20 = uVar19 - 0x250;
        lVar30 = uVar19 - 0xcc;
        lVar26 = uVar19 - 0xdc;
        lVar34 = 2;
        fVar60 = (fVar17 - fVar60) / (fVar17 + fVar60);
        fVar6 = fVar60 * fVar60;
        *(float *)(puVar16 + 0x32) = fVar60;
        *(float *)(puVar16 + 0x31) = fVar60;
        *(float *)((int)puVar16 + 0x18c) = fVar60;
        *(float *)((int)puVar16 + 0x184) = fVar60;
        fVar60 = fVar6 * fVar6;
        *(float *)(puVar16 + 0x31) = *(float *)(puVar16 + 0x31) * fVar6;
        *(float *)((int)puVar16 + 0x18c) = *(float *)((int)puVar16 + 0x18c) * fVar60;
        *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar60 * fVar6;
        do {
          *(float *)((int)lVar20 + 0x184) = *(float *)((int)lVar20 + 0x174) * fVar60 * fVar60;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar60 * fVar60;
          lVar30 = lVar30 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar34 = 4;
        lVar30 = uVar19 - 0xdc;
        pfVar27 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar26 = lVar30;
        do {
          fVar60 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar20 + 0x184) = *(float *)((int)lVar20 + 0x184) * fVar60;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        lVar20 = 2;
        do {
          iVar22 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar33 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar22 + 0x184) + *(float *)(iVar33 + 4) +
                  *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar7 = (fVar7 + 0.7853982) * fVar8 + fVar5;
      }
      (moby->rotation).z = fVar7;
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      *(undefined1 *)((int)pvVar9 + 0x2b) = 1;
      auVar52 = loadVectorLeftIndexed(0x2cc,uVar32);
      auVar53 = loadVectorRightIndexed(0x2dc,uVar32);
      auVar56 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      auVar57 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
      auVar51 = ZEXT416(0xffffffff);
      auVar54 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar51 = loadVectorLeftIndexed(0x10,0x3b4668);
      auVar52 = vectorConvertFromSignedFixedPointWord(auVar52 | auVar53,0);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar53 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar56 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar56);
      auVar51 = loadVectorLeftIndexed(0xc,0x3b4668);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar56 = vectorMultiplyAddFloatingPoint(auVar56,auVar52,auVar53);
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar56);
      auVar51 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x2b4,uVar32
                         );
      *(undefined4 *)((int)pvVar9 + 0x2b4U & 0xfffffffc) = uVar15;
      auVar51 = loadVectorLeftIndexed(0x14,0x3b4668);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar56 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar56);
      auVar51 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x2b8,uVar32
                         );
      *(undefined4 *)((int)pvVar9 + 0x2b8U & 0xfffffffc) = uVar15;
      if (UnlockableItems.hologuise == '\0') {
        auVar51 = ZEXT416(5);
        auVar53 = ZEXT416(0xffffffff);
        auVar59 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar53 = loadVectorLeftIndexed(0x54c,0xa10000);
        auVar53 = vectorSubtractUnsignedWordModulo
                            (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60);
        auVar51 = ZEXT416(0);
        auVar55 = vectorConvertFromSignedFixedPointWord(auVar53,0);
        auVar53 = loadVectorLeftIndexed(0x18,0x3b4668);
        auVar54 = loadVectorLeftIndexed(0x1c,0x3b4668);
        auVar53 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar54 = auVar54 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar57 = loadVectorLeftIndexed(0x20,0x3b4668);
        auVar57 = auVar57 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar58 = auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60;
        auVar51 = vectorCompareGreaterThanFloatingPoint
                            (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,auVar55);
        auVar51 = vectorLogicalAndWithComplement(auVar55,auVar51);
        auVar57 = vectorShiftLeftIntegerWord(auVar59,auVar59);
        auVar53 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar51,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60);
        auVar51 = ZEXT416(0xffffffff);
        auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = vectorCompareGreaterThanFloatingPoint(auVar58,auVar53);
        auVar53 = vectorConditionalSelect(auVar53,auVar58,auVar51);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar52,auVar53,auVar57);
        auVar52 = vectorMultiplyAddFloatingPoint(auVar56,auVar53,auVar54);
        auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x2b4,
                            uVar32);
        *(undefined4 *)((int)pvVar9 + 0x2b4U & 0xfffffffc) = uVar15;
        uVar15 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x2b8,
                            uVar32);
        *(undefined4 *)((int)pvVar9 + 0x2b8U & 0xfffffffc) = uVar15;
      }
      dVar36 = (double)MB_randRot();
      *(float *)((int)pvVar9 + 0x2e8) = (float)dVar36;
      *(undefined1 *)((int)pvVar9 + 0x29) = 0;
      moby->state = '\x01';
    }
    else if (g_heroStateType == 0x16) {
      auVar51 = ZEXT416(0xffffffff);
      auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      moby->updateDistance = -1;
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      moby->collision = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      *(undefined2 *)((int)pvVar9 + 0x2f4) = 0;
      auVar51 = loadVectorLeftIndexed(0x24,0x3b4668);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      uVar10 = *(uint *)((int)pvVar9 + 0x2cc);
      auVar51 = vectorMultiplyAddFloatingPoint
                          (auVar56,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar52);
      auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
      auVar51 = vectorSplatHalfWord(auVar51,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar51,0x2f6,uVar32);
      *(undefined2 *)((int)pvVar9 + 0x2f6) = uVar14;
      *(undefined4 *)((int)pvVar9 + 0x2c8) = 0;
      *(undefined4 *)((int)pvVar9 + 0x2c4) = 0;
      *(undefined4 *)((int)pvVar9 + 0x2e4) = 0;
      *(undefined4 *)((int)pvVar9 + 0x2dc) = 0;
      *(undefined4 *)((int)pvVar9 + 700) = 0;
      if (uVar10 + (((int)uVar10 >> 1) + (uint)((int)uVar10 < 0 && (uVar10 & 1) != 0)) * -2 == 1) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      moby->damage = -1;
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if (g_heroStateType == 0x16) {
      iVar22 = MB_damage(lVar20,0x30000,0);
      if (iVar22 == 0) {
        moby->damage = -1;
        M556_003b33c8(lVar20);
        dVar36 = (double)M556_003b39b0(lVar20);
        pvVar12 = moby->pVar;
        dVar44 = 0.0;
        if (*(int *)((int)pvVar12 + 0x2c8) < 1) {
          path = *(int **)((int)pvVar12 + 0x2c0);
          lVar26 = (longlong)*(short *)((int)pvVar12 + 0x2f4);
          if (*(int *)((int)path + (int)(lVar26 << 4) + 0x1c) == 0x3f800000) {
            do {
              iVar22 = MB_PathStepIndex(path,(int)lVar26,1,1);
              lVar26 = (longlong)iVar22;
              path = *(int **)((int)pvVar12 + 0x2c0);
            } while (*(int *)((int)path + (int)(lVar26 << 4) + 0x1c) != 0x40000000);
            *(short *)((int)pvVar12 + 0x2f0) = (short)iVar22;
            iVar22 = (int)((longlong)(short)iVar22 << 4);
            *(undefined4 *)((int)pvVar12 + 0x270) = *(undefined4 *)((int)path + iVar22 + 0x10);
            *(undefined4 *)((int)pvVar12 + 0x274) = *(undefined4 *)((int)path + iVar22 + 0x14);
            *(undefined4 *)((int)pvVar12 + 0x278) = *(undefined4 *)((int)path + iVar22 + 0x18);
            fVar60 = *(float *)((int)path + iVar22 + 0x1c);
            dVar36 = (double)fVar60;
            *(undefined4 *)((int)pvVar12 + 0x2e4) = 1;
            *(float *)((int)pvVar12 + 0x27c) = fVar60;
          }
        }
        if (*(int *)((int)pvVar9 + 0x2e4) != 0) {
          iVar22 = *(int *)((int)pvVar9 + 0x2e4) + 1;
          *(int *)((int)pvVar9 + 0x2e4) = iVar22;
          dVar36 = (double)(longlong)(int)(animationSpeed * 17.5);
          puVar16[0x35] = (ulonglong)dVar36;
          if (iVar22 < *(int *)((int)puVar16 + 0x1ac)) {
            sVar28 = *(short *)((int)pvVar9 + 0x2f4);
            sVar24 = *(short *)((int)pvVar9 + 0x2f0);
            lVar26 = (longlong)sVar28;
            dVar36 = dVar44;
            if (sVar28 < sVar24) {
              do {
                iVar23 = MB_PathStepIndex(*(int **)((int)pvVar9 + 0x2c0),(int)lVar26,1,1);
                iVar22 = *(int *)((int)pvVar9 + 0x2c0) + (int)(lVar26 << 4);
                iVar33 = *(int *)((int)pvVar9 + 0x2c0) + (int)((longlong)iVar23 << 4);
                fVar60 = *(float *)(iVar22 + 0x14) - *(float *)(iVar33 + 0x14);
                fVar5 = *(float *)(iVar22 + 0x10) - *(float *)(iVar33 + 0x10);
                sVar24 = *(short *)((int)pvVar9 + 0x2f0);
                dVar36 = (double)(float)(dVar36 + (double)SQRT(fVar5 * fVar5 + fVar60 * fVar60));
                lVar26 = (longlong)iVar23;
              } while (iVar23 < sVar24);
              sVar28 = *(short *)((int)pvVar9 + 0x2f4);
            }
            fVar8 = g_FrameTimeSq;
            fVar60 = (float)(dVar36 / (double)*(float *)((int)pvVar9 + 700));
            fVar5 = *(float *)(*(int *)((int)pvVar9 + 0x2c0) + (int)((longlong)sVar28 << 4) + 0x18);
            fVar7 = *(float *)(*(int *)((int)pvVar9 + 0x2c0) + (int)((longlong)sVar24 << 4) + 0x18);
            fVar6 = g_FrameTimeSq * 21.0;
            if (*(int *)((int)pvVar9 + 0x2c8) < 0) {
              *(undefined4 *)((int)pvVar9 + 0x2c8) = 0;
            }
            fVar60 = Delt(fVar6 * fVar60 * 0.5 + (fVar7 - fVar5) / fVar60,fVar8 * 110.0,
                                    (float *)((int)pvVar9 + 0x2c8));
            dVar36 = (double)fVar60;
          }
        }
        M556_003b3fd0(dVar36,lVar20);
        iVar22 = *(int *)((int)moby->pVar + 0x2c0) +
                 (int)((longlong)*(short *)((int)pvVar9 + 0x2f4) << 4);
        fVar60 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
        fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
        dVar49 = (double)*(float *)(iVar22 + 0x18);
        dVar39 = ABS((double)fVar60);
        dVar38 = ABS((double)fVar5);
        *(float *)(puVar16 + 0x24) = fVar60;
        *(float *)((int)puVar16 + 0x124) = fVar5;
        *(float *)(puVar16 + 0x25) = (float)(dVar39 - dVar38);
        uVar29 = (ulonglong)(*(uint *)(puVar16 + 0x24) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar16 + 0x25) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar16 + 0x124) >> 0x1d) & 4;
        dVar36 = ABS((double)*(float *)(puVar16 + 0x24));
        if ((double)*(float *)(puVar16 + 0x25) - dVar44 < 0.0) {
          dVar36 = dVar38;
        }
        fVar60 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
        dVar38 = ABS((double)*(float *)((int)puVar16 + 0x124));
        if ((double)*(float *)(puVar16 + 0x25) - dVar44 < 0.0) {
          dVar38 = dVar39;
        }
        fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
        dVar39 = dVar44;
        if (dVar44 < dVar36) {
          lVar26 = uVar19 - 0x250;
          lVar34 = uVar19 - 0x10c;
          lVar30 = uVar19 - 0x11c;
          lVar35 = 2;
          fVar7 = (float)(dVar38 - dVar36) / (float)(dVar38 + dVar36);
          fVar6 = fVar7 * fVar7;
          *(float *)(puVar16 + 0x2a) = fVar7;
          *(float *)(puVar16 + 0x29) = fVar7;
          *(float *)((int)puVar16 + 0x14c) = fVar7;
          *(float *)((int)puVar16 + 0x144) = fVar7;
          fVar7 = fVar6 * fVar6;
          *(float *)(puVar16 + 0x29) = *(float *)(puVar16 + 0x29) * fVar6;
          *(float *)((int)puVar16 + 0x14c) = *(float *)((int)puVar16 + 0x14c) * fVar7;
          *(float *)(puVar16 + 0x2a) = *(float *)(puVar16 + 0x2a) * fVar7 * fVar6;
          do {
            *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x134) * fVar7 * fVar7;
            iVar22 = (int)lVar30;
            lVar30 = lVar30 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
            lVar34 = lVar34 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar35 = 4;
          lVar34 = uVar19 - 0x11c;
          pfVar27 = (float *)&DAT_007358e0;
          lVar26 = lVar21;
          lVar30 = lVar34;
          do {
            fVar7 = *pfVar27;
            fVar6 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x144) * fVar7;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar6;
            lVar30 = lVar30 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar26 = 2;
          dVar36 = dVar44;
          do {
            iVar22 = (int)lVar21;
            iVar33 = (int)lVar34;
            lVar21 = lVar21 + 0x10;
            lVar34 = lVar34 + 0x10;
            dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar22 + 0x144)) +
                              *(float *)(iVar33 + 4) + *(float *)(iVar33 + 8) +
                             *(float *)(iVar33 + 0xc));
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          dVar39 = (double)((float)(dVar36 + 0.7853981852531433) * fVar60 + fVar5);
        }
        dVar38 = 0.30000001192092896;
        AccelDeltAng
                  (dVar39,(double)(DAT_0071f40c * 0.035),(double)(DAT_0071f40c * 0.3),
                   (double)(g_FrameTime * 6.981317),lVar20 + 0x48,&DAT_00720000,
                   uVar32 + 0x2c4);
        dVar36 = (double)*(float *)((int)pvVar9 + 0x268);
        if ((double)*(float *)((int)pvVar9 + 0x268) < (double)(float)(dVar49 - 5.0)) {
          *(float *)((int)pvVar9 + 0x268) = (float)dVar49;
          dVar36 = dVar49;
        }
        fVar60 = (moby->rotation).z;
        dVar43 = 3.141592502593994;
        fVar7 = fVar60 + 1.5707963;
        dVar42 = -3.141592502593994;
        dVar41 = -0.16666656732559204;
        dVar40 = 0.008333025500178337;
        dVar49 = -0.0001980741071747616;
        dVar39 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar7;
        if (fVar7 - (3.1415925 - fVar7) < 0.0) {
          fVar5 = fVar7;
        }
        fVar6 = -3.1415925 - fVar7;
        if ((-3.1415925 - fVar7) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar5 = 3.1415925 - fVar60;
        if (fVar60 - (3.1415925 - fVar60) < 0.0) {
          fVar5 = fVar60;
        }
        fVar7 = fVar6 * fVar6;
        fVar8 = -3.1415925 - fVar60;
        if ((-3.1415925 - fVar60) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        fVar60 = fVar7 * fVar7 * fVar6;
        fVar5 = fVar7 * fVar60;
        dVar50 = (double)((fVar7 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar60 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) *
                         *(float *)((int)pvVar9 + 700));
        fVar7 = fVar8 * fVar8;
        *(float *)((int)pvVar9 + 0x268) = (float)dVar36;
        *(float *)((int)pvVar9 + 0x260) = (float)((double)*(float *)((int)pvVar9 + 0x260) + dVar50);
        fVar60 = fVar7 * fVar7 * fVar8;
        fVar5 = fVar7 * fVar60;
        dVar46 = (double)((fVar7 * fVar5 * 2.601887e-06 +
                          fVar5 * -0.0001980741 +
                          fVar60 * 0.0083330255 + fVar7 * fVar8 * -0.16666657 + fVar8) *
                         *(float *)((int)pvVar9 + 700));
        *(float *)((int)pvVar9 + 0x264) = (float)((double)*(float *)((int)pvVar9 + 0x264) + dVar46);
        dVar36 = 3.0;
        *(undefined4 *)(puVar16 + 0x1d) = 0;
        *(float *)((int)puVar16 + 0xec) = (float)in_f29;
        *(float *)(puVar16 + 0x1c) = (float)(dVar50 * 3.0);
        *(float *)((int)puVar16 + 0xe4) = (float)(dVar46 * 3.0);
        *(float *)(puVar16 + 0x1c) = (float)(dVar50 * 3.0) + *(float *)((int)pvVar9 + 0x260);
        *(float *)((int)puVar16 + 0xe4) = (float)(dVar46 * 3.0) + *(float *)((int)pvVar9 + 0x264);
        *(float *)(puVar16 + 0x1d) = *(float *)((int)pvVar9 + 0x268) + 0.7;
        lVar21 = lVar20;
        iVar22 = CollMobySphere(uVar19 - 0x180,&DAT_003b4668,0,lVar20,0);
        if (iVar22 != 0) {
          *(float *)((int)puVar16 + 0xfc) = (float)in_f29;
          *(undefined4 *)(puVar16 + 0x1f) = 0;
          *(float *)(puVar16 + 0x1e) = (float)(dVar50 * 7.0);
          *(float *)((int)puVar16 + 0xf4) = (float)(dVar46 * 7.0);
          if (0 < iVar22) {
            puVar31 = &g_CollMobyHits;
            iVar33 = 0;
            dVar46 = 1.0;
            do {
              bVar25 = MB_isCrate(*puVar31);
              if (bVar25) {
                CollDamageMobyDirect
                          ((float)dVar46,(MobyInstance *)*puVar31,moby,0x30000,(int)lVar21,
                           (float *)((int)pvVar9 + 0x260),(float *)(puVar16 + 0x1e));
              }
              iVar33 = iVar33 + 1;
              puVar31 = puVar31 + 1;
            } while (iVar33 < iVar22);
          }
        }
        dVar47 = 0.5;
        dVar50 = (double)GetGroundZ(0x3fe0000000000000,uVar32 + 0x260,0);
        dVar46 = (double)*(float *)((int)pvVar9 + 0x268);
        dVar45 = (double)(float)(dVar46 - dVar50);
        if ((dVar44 < dVar45) || (0 < *(int *)((int)pvVar9 + 0x2c8))) {
          dVar37 = -(double)(g_FrameTimeSq * 21.0 - *(float *)((int)pvVar9 + 0x2c8));
          *(float *)((int)pvVar9 + 0x2c8) = (float)dVar37;
        }
        else {
          dVar37 = (double)*(float *)((int)pvVar9 + 0x2c8);
          if (ABS(dVar45) < dVar47) {
            *(undefined4 *)((int)pvVar9 + 0x2c8) = 0;
            *(undefined4 *)((int)pvVar9 + 0x2e4) = 0;
            dVar46 = dVar50;
            dVar37 = dVar44;
          }
        }
        *(float *)((int)pvVar9 + 0x268) = (float)(dVar46 + dVar37);
        iVar23 = FastDecTimerS16(uVar32 + 0x2f6);
        iVar33 = g_RacePlace;
        iVar22 = g_RaceTime;
        if (iVar23 == 0) {
          Delt(*(float *)((int)pvVar9 + 0x2b8),g_FrameTimeSq * 20.0,
                         (float *)((int)pvVar9 + 700));
        }
        else {
          dVar44 = (double)g_FrameTime;
          fVar60 = *(float *)((int)pvVar9 + 0x2b4);
          if (dVar50 - (double)*(float *)((int)pvVar9 + 0x268) < 0.0) {
            fVar60 = (float)(dVar44 * 19.0);
          }
          dVar46 = (double)fVar60;
          puVar16[0x35] = (longlong)(int)(animationSpeed * 700.5);
          if (iVar22 < *(int *)((int)puVar16 + 0x1ac)) {
            dVar46 = (double)(float)(dVar44 * dVar36 + dVar46);
          }
          dVar36 = dVar44 + dVar46;
          if ((short)(&DAT_0096a4a0)[*(int *)((int)pvVar9 + 0x2cc)] < iVar33) {
            dVar36 = dVar46 - dVar44;
          }
          fVar60 = (float)dVar36;
          if (*(float *)((int)pvVar9 + 700) <= fVar60) {
            Delt(fVar60,g_FrameTimeSq * 15.0,(float *)((int)pvVar9 + 700));
          }
          else {
            Delt(fVar60,g_FrameTimeSq * 7.0,(float *)((int)pvVar9 + 700));
          }
        }
        if ((dVar45 < 0.20000000298023224) && (*(int *)((int)pvVar9 + 0x2c8) < 0)) {
          *(float *)((int)pvVar9 + 0x268) = (float)dVar50;
          *(undefined4 *)((int)pvVar9 + 0x2e4) = 0;
        }
        fVar60 = *(float *)((int)pvVar9 + 0x2c4);
        fVar5 = g_FrameTime * 2.6179938;
        if ((fVar60 <= fVar5) && (fVar5 = fVar60, fVar60 < g_FrameTime * -2.6179938)) {
          fVar5 = g_FrameTime * -2.6179938;
        }
        if ((moby->modeBits & MIRROR) != NONE) {
          fVar5 = -fVar5;
        }
        *(float *)((int)pvVar9 + 0x248) = fVar5 * 30.0;
        *(float *)((int)pvVar9 + 200) = fVar5 * 20.0;
        *(float *)((int)pvVar9 + 0x1c8) = fVar5 * 50.0;
        *(float *)((int)pvVar9 + 0x144) = fVar5 * 40.0;
        dVar36 = 0.019999999552965164;
        MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * 0.019999999552965164),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0x1e0,3);
        MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar36),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0x60,0);
        MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar36),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0x160,1);
        MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * 0.014999999664723873),
                   (double)(float)((double)DAT_0071f40c * dVar38),lVar20,uVar32 + 0xe0,2);
        (moby->pos).x = *(f32 *)((int)pvVar9 + 0x260);
        (moby->pos).y = *(f32 *)((int)pvVar9 + 0x264);
        fVar60 = *(float *)((int)pvVar9 + 0x268);
        (moby->pos).z = fVar60;
        (moby->pos).w = *(f32 *)((int)pvVar9 + 0x26c);
        (moby->pos).z = fVar60 + 0.25;
        dVar44 = (double)FastWrapRot
                                   (*(float *)((int)pvVar9 + 0x2e8),g_FrameTime * 6.108652
                                   );
        *(float *)((int)pvVar9 + 0x2e8) = (float)dVar44;
        dVar36 = (double)(float)(dVar43 - dVar44);
        if (dVar44 - (double)(float)(dVar43 - dVar44) < 0.0) {
          dVar36 = dVar44;
        }
        dVar38 = (double)(float)(dVar42 - dVar44);
        if ((double)(float)(dVar42 - dVar44) - dVar36 < 0.0) {
          dVar38 = dVar36;
        }
        fVar60 = (moby->pos).x;
        fVar5 = (moby->pos).y;
        dVar43 = (double)(moby->pos).w;
        uVar10 = worldUpdateTime & 1;
        dVar36 = (double)(float)(dVar38 * dVar38);
        dVar42 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar38));
        dVar44 = (double)(float)(dVar36 * dVar42);
        fVar6 = (float)((double)(float)(dVar36 * dVar44) * dVar39 +
                       (double)(float)(dVar44 * dVar49 +
                                      (double)(float)(dVar42 * dVar40 +
                                                     (double)(float)((double)(float)(dVar36 * dVar38
                                                                                    ) * dVar41 +
                                                                    dVar38)))) * 0.08 +
                (moby->pos).z;
        (moby->pos).z = fVar6;
        fVar7 = *(float *)((int)pvVar9 + 0x280);
        *(float *)((int)pvVar9 + 0x280) = fVar60;
        dVar36 = (double)(fVar60 - fVar7);
        dVar38 = (double)(fVar5 - *(float *)((int)pvVar9 + 0x284));
        dVar44 = (double)(fVar6 - *(float *)((int)pvVar9 + 0x288));
        *(f32 *)((int)pvVar9 + 0x284) = (moby->pos).y;
        *(f32 *)((int)pvVar9 + 0x288) = (moby->pos).z;
        *(f32 *)((int)pvVar9 + 0x28c) = (moby->pos).w;
        GetBonePosition(lVar20,uVar10 + 4,uVar19 - 0x1a0);
        MB_randRot();
        *(float *)(puVar16 + 0x20) = (float)dVar36;
        *(float *)((int)puVar16 + 0x104) = (float)dVar38;
        *(float *)(puVar16 + 0x21) = (float)dVar44;
        *(undefined4 *)((int)puVar16 + 0x10c) = 0x47ea6000;
        uVar18 = DAT_00845914;
        uVar15 = DAT_00845910;
        fVar60 = animationSpeed;
        if (*(short *)((int)pvVar9 + 0x2f6) == 0) {
          puVar16[0x35] = (longlong)(int)(animationSpeed * 10.5);
          puVar16[0x35] = (longlong)(int)(fVar60 * 13.5);
          uVar48 = MB_randRange
                             (*(undefined4 *)((int)puVar16 + 0x1ac),
                              *(undefined4 *)((int)puVar16 + 0x1ac));
          SpawnPart_4(uVar19 - 0x1a0,uVar19 - 0x160,uVar15,uVar18,uVar48,0xf,0xf,1);
        }
        else {
          *(float *)((int)puVar16 + 0x11c) = (float)dVar43;
          fVar60 = animationSpeed;
          *(float *)(puVar16 + 0x22) = (float)(dVar36 * 0.9200000166893005);
          *(float *)((int)puVar16 + 0x114) = (float)(dVar38 * 0.9200000166893005);
          *(float *)(puVar16 + 0x23) = (float)(dVar44 * 0.9200000166893005);
          uVar15 = DAT_00845914;
          puVar16[0x35] = (longlong)(int)(fVar60 * 15.5);
          puVar16[0x35] = (longlong)(int)(fVar60 * 18.5);
          uVar48 = MB_randRange
                             (*(undefined4 *)((int)puVar16 + 0x1ac),
                              *(undefined4 *)((int)puVar16 + 0x1ac));
          SpawnPart_4(uVar19 - 0x1a0,uVar19 - 0x150,0x5032f0d2,uVar15,uVar48,0x1e,0x14,1);
          uVar18 = DAT_00845914;
          uVar15 = DAT_00845910;
          dVar36 = (double)animationSpeed;
          uVar48 = 0x40cd4c0000000000;
          puVar16[0x35] = (longlong)(int)(dVar36 * 8.5);
          puVar16[0x35] = (longlong)(int)(dVar36 * 17.5);
          MB_randRange
                    ((longlong)(int)(dVar36 * 17.5),dVar36,0x40cd4c0000000000,
                     *(undefined4 *)((int)puVar16 + 0x1ac),*(undefined4 *)((int)puVar16 + 0x1ac));
          SpawnPart_21(uVar48,uVar19 - 0x1a0,uVar19 - 0x160,uVar15,uVar18);
        }
      }
      else {
        fVar2 = (moby->pos).y;
        *(f32 *)(puVar16 + 0x1a) = (moby->pos).x;
        fVar3 = (moby->pos).w;
        *(f32 *)((int)puVar16 + 0xd4) = fVar2;
        *(f32 *)((int)puVar16 + 0xdc) = fVar3;
        fVar60 = (moby->pos).z;
        puVar16[0x14] = 0;
        puVar16[0x12] = 0xffffffffffffffff;
        puVar16[0x15] = 9;
        puVar16[0x16] = 0xffffffffffffffff;
        *(float *)(puVar16 + 0x1b) = fVar60 + 0.5;
        puVar16[0x17] = 0;
        MB_genericExplosion
                  (0,0,uVar48,0x3ff8000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,lVar20,&DAT_00a15d30,uVar19 - 400,&DAT_003b4668,9,5,0xf,0x19);
        MB_SpawnDebris(lVar20,0x655,1,0x656,2,2,0);
        MB_SpawnDebris(lVar20,0x6fa,1,0x6fb,1,1,0);
        *(undefined2 *)((int)pvVar9 + 0x2f2) = 0;
        g_RaceScore = g_RaceScore + 0xfa;
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        moby->state = '\x03';
      }
    }
    else {
      moby->state = '\0';
    }
  }
  else if (bVar1 < 4) {
    if (g_heroStateType == 0x16) {
      sVar28 = *(short *)((int)pvVar9 + 0x2f2) + 1;
      *(short *)((int)pvVar9 + 0x2f2) = sVar28;
      puVar16[0x35] = (longlong)(int)(animationSpeed * 240.5);
      if (*(int *)((int)puVar16 + 0x1ac) < (int)sVar28) {
        fVar60 = (moby->pos).x - GameCamera.posX;
        fVar5 = (moby->pos).y - GameCamera.posY;
        fVar7 = ABS(fVar60);
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar16 + 300) = fVar60;
        *(float *)(puVar16 + 0x26) = fVar5;
        *(float *)((int)puVar16 + 0x134) = fVar7 - fVar6;
        fVar60 = 0.0;
        uVar32 = (ulonglong)(*(uint *)((int)puVar16 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar16 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar16 + 0x26) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar16 + 300));
        if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
        fVar6 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)(puVar16 + 0x26));
        if (*(float *)((int)puVar16 + 0x134) - 0.0 < 0.0) {
          fVar17 = fVar7;
        }
        if (0.0 < fVar5) {
          lVar20 = uVar19 - 0x250;
          lVar30 = uVar19 - 0xec;
          lVar26 = uVar19 - 0xfc;
          lVar34 = 2;
          fVar5 = (fVar17 - fVar5) / (fVar17 + fVar5);
          fVar7 = fVar5 * fVar5;
          *(float *)(puVar16 + 0x2e) = fVar5;
          *(float *)(puVar16 + 0x2d) = fVar5;
          *(float *)((int)puVar16 + 0x16c) = fVar5;
          *(float *)((int)puVar16 + 0x164) = fVar5;
          fVar5 = fVar7 * fVar7;
          *(float *)(puVar16 + 0x2d) = *(float *)(puVar16 + 0x2d) * fVar7;
          *(float *)((int)puVar16 + 0x16c) = *(float *)((int)puVar16 + 0x16c) * fVar5;
          *(float *)(puVar16 + 0x2e) = *(float *)(puVar16 + 0x2e) * fVar5 * fVar7;
          do {
            *(float *)((int)lVar20 + 0x164) = *(float *)((int)lVar20 + 0x154) * fVar5 * fVar5;
            iVar22 = (int)lVar26;
            lVar26 = lVar26 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar30 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar30 = lVar30 + 8;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar34 = 4;
          lVar30 = uVar19 - 0xfc;
          pfVar27 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar26 = lVar30;
          do {
            fVar5 = *pfVar27;
            fVar7 = pfVar27[1];
            pfVar27 = pfVar27 + 2;
            *(float *)((int)lVar20 + 0x164) = *(float *)((int)lVar20 + 0x164) * fVar5;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
            lVar26 = lVar26 + 8;
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          lVar20 = 2;
          do {
            iVar22 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar33 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            fVar60 = fVar60 + *(float *)(iVar22 + 0x164) + *(float *)(iVar33 + 4) +
                     *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar60 = (fVar60 + 0.7853982) * fVar8 + fVar6;
        }
        dVar36 = (double)FastSubRots(fVar60,GameCamera.rot.radius);
        if (1.5707963705062866 < dVar36) {
          puVar11 = moby->pClass->collision;
          moby->damage = -1;
          moby->collision = puVar11;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->state = '\x02';
        }
      }
    }
    else {
      moby->state = '\0';
    }
  }
  return;
}


