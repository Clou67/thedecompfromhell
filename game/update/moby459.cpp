// game/update/moby459.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x38e938-0x391c28
#include <math.h>
#include <stdio.h>
#include "game/update/moby459.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby722.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x038e938 (0x14 bytes)
void M459_0038e938(void)

{
  DAT_008421f0 = 0x10000;
  return;
}


// 0x038e978 (0x374 bytes)
void M459_0038e978
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  GPiece<16> local_100;
  GPiece<16> auStack_f0;
  undefined4 local_e0 [12];
  longlong local_b0;
  
  iVar5 = 0;
  dVar7 = 1.0;
  dVar8 = -1.0;
  dVar9 = 0.800000011920929;
  dVar10 = 1.2000000476837158;
  dVar11 = 105000.0;
  dVar12 = 157500.0;
  dVar13 = 0.5;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  do {
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    MB_randRangeFloat((float)dVar7,(float)dVar8);
    MB_randRangeFloat((float)dVar9,(float)dVar10);
    local_e0[0] = 0x4f008fff;
    local_e0[1] = 0x4f008fff;
    local_e0[2] = 0x4f007fff;
    local_e0[4] = 0x2fffffff;
    local_e0[3] = 0x4f006fff;
    local_e0[5] = 0x2fffffff;
    local_e0[6] = 0x2f005f7f;
    local_e0[7] = 0x2f004f7f;
    local_e0[8] = 0x2f003f7f;
    local_e0[9] = 0x2f00004f;
    local_e0[10] = 0x2f000000;
    local_e0[0xb] = 0x3f000000;
    GetBonePosition(param_1,1,auStack_f0);
    lVar3 = MB_randInt(6);
    uVar1 = *(undefined4 *)((int)local_e0 + (int)(lVar3 << 2));
    lVar3 = MB_randInt(6);
    uVar2 = *(undefined4 *)((int)local_e0 + (int)(lVar3 << 2) + 0x18);
    uVar6 = MB_randRangeFloat((float)dVar11,(float)dVar12);
    iVar4 = MB_randRange(5,0xf);
    local_b0 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar4 + dVar13));
    SpawnPart_22(uVar6,auStack_f0,local_100,uVar1,uVar2);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}


// 0x038ed08 (0x7b4 bytes)
// inlined: FastAtan2 @0x38f0d8, FastAtan2 @0x38f27c
ulonglong M459_0038ed08(int param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  bool bVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  longlong lVar14;
  uint uVar18;
  longlong lVar16;
  float *pfVar19;
  longlong lVar17;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar26;
  ulonglong unaff_r26;
  int iVar27;
  ulonglong unaff_r27;
  int iVar28;
  int iVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  
  uVar24 = ZEXT48(&stack0x00000000);
  lVar16 = uVar24 - 0x1a0;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar24;
  puVar10[0x36] = in_LR;
  puVar10[0x2e] = in_f26;
  puVar10[0x2f] = in_f27;
  puVar10[0x30] = in_f28;
  puVar10[0x31] = in_f29;
  puVar10[0x32] = in_f30;
  puVar10[0x33] = in_f31;
  puVar10[0x2b] = unaff_r29;
  puVar10[0x2d] = unaff_r31;
  puVar10[0x25] = unaff_r23;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x2a] = unaff_r28;
  bVar11 = false;
  puVar10[0x24] = unaff_r22;
  iVar21 = *(int *)(iVar7 + 0x38);
  puVar10[0x2c] = unaff_r30;
  puVar10[0x29] = unaff_r27;
  puVar10[0x28] = unaff_r26;
  puVar10[0x27] = unaff_r25;
  puVar10[0x26] = unaff_r24;
  if ((iVar21 == 0) && (*(short *)(iVar7 + 0x1e2) == 0)) {
    fVar1 = *(float *)(iVar7 + 0x1a0);
  }
  else {
    bVar11 = true;
    fVar1 = *(float *)(iVar7 + 0x1a0) * 2.0;
  }
  MB_getTarget((double)fVar1,param_1,param_2,uVar24 - 0x130);
  iVar27 = 0;
  iVar21 = 0;
  if (*(short *)(iVar7 + 0x1ac) == 0) {
    puVar8 = *(uint **)(iVar7 + 0x160);
    iVar15 = 0;
    iVar29 = 0;
    if (0 < (int)*puVar8) {
      iVar25 = 0;
      dVar34 = 10000.0;
      iVar22 = 0;
      iVar28 = iVar29;
      iVar20 = iVar21;
      do {
        if ((*(short *)(iVar7 + 0x1ae) == 0) ||
           (dVar32 = dVar34, iVar21 = iVar20, iVar23 = iVar22, iVar29 = iVar28,
           *(int *)((int)puVar8 + iVar25 + 0x1c) == 0x3f800000)) {
          fVar2 = *(float *)((int)puVar8 + iVar25 + 0x14) - *(float *)(param_1 + 0x14);
          fVar1 = *(float *)((int)puVar8 + iVar25 + 0x10) - *(float *)(param_1 + 0x10);
          dVar32 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
          iVar21 = iVar15;
          iVar23 = iVar15;
          iVar29 = iVar22;
          if ((dVar34 <= dVar32) &&
             (dVar32 = dVar34, iVar21 = iVar20, iVar29 = iVar28, iVar20 == iVar22)) {
            iVar27 = iVar15;
          }
        }
        iVar15 = iVar15 + 1;
        iVar25 = iVar25 + 0x10;
        dVar34 = dVar32;
        iVar22 = iVar23;
        iVar28 = iVar29;
        iVar20 = iVar21;
      } while (iVar15 < (int)*puVar8);
    }
    if (iVar21 == *puVar8 - 1) {
      iVar27 = 0;
    }
    else if (iVar21 == 0) {
      iVar29 = *puVar8 - 1;
    }
    dVar32 = 0.0;
    uVar26 = 0;
    dVar34 = dVar32;
    if (bVar11) {
      dVar34 = 10000.0;
    }
    uVar12 = 0;
    *param_2 = 0;
    dVar40 = dVar32;
    do {
      iVar15 = (int)uVar12;
      if ((iVar15 == iVar21 || iVar15 == iVar29) || (iVar15 == iVar27)) {
        if (bVar11) {
          iVar15 = (int)((uVar12 & 0xffffffff) << 4);
          fVar1 = *(float *)((int)puVar10 + 0x74) - *(float *)((int)puVar8 + iVar15 + 0x14);
          fVar2 = *(float *)(puVar10 + 0xe) - *(float *)((int)puVar8 + iVar15 + 0x10);
          fVar3 = *(float *)(puVar10 + 0xf) - *(float *)((int)puVar8 + iVar15 + 0x18);
          dVar31 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          if (((*(short *)(iVar7 + 0x1ae) == 0) ||
              (*(int *)((int)puVar8 + iVar15 + 0x1c) == 0x3f800000)) && (dVar31 < dVar34)) {
            uVar26 = uVar12;
            dVar34 = dVar31;
          }
        }
        else {
          iVar15 = (int)((uVar12 & 0xffffffff) << 4);
          fVar3 = *(float *)(param_1 + 0x10);
          fVar4 = *(float *)(param_1 + 0x14);
          dVar39 = (double)*(float *)((int)puVar8 + iVar15 + 0x10);
          dVar38 = (double)*(float *)((int)puVar8 + iVar15 + 0x14);
          fVar1 = (float)(dVar39 - (double)fVar3);
          fVar2 = (float)(dVar38 - (double)fVar4);
          dVar37 = (double)*(float *)((int)puVar8 + iVar15 + 0x18);
          iVar15 = *(int *)((int)puVar8 + iVar15 + 0x1c);
          dVar33 = ABS((double)fVar1);
          dVar35 = ABS((double)fVar2);
          *(float *)((int)puVar10 + 0xcc) = fVar1;
          *(float *)(puVar10 + 0x1a) = fVar2;
          *(float *)((int)puVar10 + 0xd4) = (float)(dVar33 - dVar35);
          uVar12 = (ulonglong)(*(uint *)((int)puVar10 + 0xcc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xd4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x1a) >> 0x1d) & 4;
          dVar31 = ABS((double)*(float *)((int)puVar10 + 0xcc));
          if ((double)*(float *)((int)puVar10 + 0xd4) - dVar32 < 0.0) {
            dVar31 = dVar35;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
          fVar1 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
          dVar35 = ABS((double)*(float *)(puVar10 + 0x1a));
          if ((double)*(float *)((int)puVar10 + 0xd4) - dVar32 < 0.0) {
            dVar35 = dVar33;
          }
          dVar33 = dVar32;
          if (dVar32 < dVar31) {
            lVar14 = uVar24 - 400;
            lVar13 = uVar24 - 0xa8;
            lVar17 = uVar24 - 0x98;
            lVar30 = 2;
            fVar5 = (float)(dVar35 - dVar31) / (float)(dVar35 + dVar31);
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar10 + 0x104) = fVar5;
            *(float *)((int)puVar10 + 0xfc) = fVar5;
            *(float *)(puVar10 + 0x20) = fVar5;
            *(float *)(puVar10 + 0x1f) = fVar5;
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar6;
            *(float *)(puVar10 + 0x20) = *(float *)(puVar10 + 0x20) * fVar5;
            *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar5 * fVar6;
            do {
              *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar5 * fVar5;
              iVar22 = (int)lVar13;
              lVar14 = lVar14 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
              lVar17 = lVar17 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar17 = uVar24 - 0xa8;
            pfVar19 = (float *)&DAT_007358e0;
            lVar14 = lVar16;
            lVar13 = lVar17;
            do {
              fVar5 = *pfVar19;
              fVar6 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar5;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
              lVar13 = lVar13 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar13 = 2;
            lVar14 = lVar16;
            dVar31 = dVar32;
            do {
              iVar22 = (int)lVar14;
              lVar14 = lVar14 + 0x10;
              iVar28 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0xf8)) +
                                *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                               *(float *)(iVar28 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar33 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar1);
          }
          fVar1 = (float)((double)*(float *)(puVar10 + 0xe) - (double)fVar3);
          fVar2 = (float)((double)*(float *)((int)puVar10 + 0x74) - (double)fVar4);
          dVar36 = ABS((double)fVar1);
          dVar35 = ABS((double)fVar2);
          *(float *)(puVar10 + 0x18) = fVar1;
          *(float *)((int)puVar10 + 0xc4) = fVar2;
          *(float *)(puVar10 + 0x19) = (float)(dVar36 - dVar35);
          uVar12 = (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x19) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xc4) >> 0x1d) & 4;
          dVar31 = ABS((double)*(float *)(puVar10 + 0x18));
          if ((double)*(float *)(puVar10 + 0x19) - dVar32 < 0.0) {
            dVar31 = dVar35;
          }
          fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
          dVar35 = ABS((double)*(float *)((int)puVar10 + 0xc4));
          if ((double)*(float *)(puVar10 + 0x19) - dVar32 < 0.0) {
            dVar35 = dVar36;
          }
          fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
          dVar36 = dVar32;
          if (dVar32 < dVar31) {
            lVar14 = uVar24 - 400;
            lVar17 = uVar24 - 0xb8;
            lVar13 = uVar24 - 200;
            lVar30 = 2;
            fVar3 = (float)(dVar35 - dVar31) / (float)(dVar35 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar10 + 0xe4) = fVar3;
            *(float *)((int)puVar10 + 0xdc) = fVar3;
            *(float *)(puVar10 + 0x1c) = fVar3;
            *(float *)(puVar10 + 0x1b) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar4;
            *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar3;
            *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar3 * fVar3;
              iVar22 = (int)lVar13;
              lVar13 = lVar13 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
              lVar17 = lVar17 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar17 = uVar24 - 200;
            pfVar19 = (float *)&DAT_007358e0;
            lVar14 = lVar16;
            lVar13 = lVar17;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar3;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
              lVar13 = lVar13 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar13 = 2;
            lVar14 = lVar16;
            dVar31 = dVar32;
            do {
              iVar22 = (int)lVar14;
              iVar28 = (int)lVar17;
              lVar14 = lVar14 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0xd8)) +
                                *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                               *(float *)(iVar28 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar36 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar2);
          }
          dVar31 = (double)FastSubRots((float)dVar33,(float)dVar36);
          fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar38);
          fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar39);
          fVar3 = (float)((double)*(float *)(param_1 + 0x18) - dVar37);
          uVar12 = (ulonglong)*param_2;
          dVar33 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          if ((*(short *)(iVar7 + 0x1ae) == 0) || (iVar15 == 0x3f800000)) {
            if (1.5707963705062866 <= dVar31) {
              if (((12.0 <= dVar33) && ((dVar33 < dVar34 || (dVar34 < 12.0)))) ||
                 ((12.0 > dVar33 && (dVar34 < dVar33)))) {
                uVar26 = uVar12;
                dVar40 = dVar31;
                dVar34 = dVar33;
              }
            }
            else if (dVar40 < dVar31) {
              uVar26 = uVar12;
              dVar40 = dVar31;
              dVar34 = dVar33;
            }
          }
        }
      }
      puVar8 = *(uint **)(iVar7 + 0x160);
      uVar9 = *puVar8;
      lVar14 = uVar12 + uVar9 + (longlong)*(char *)(iVar7 + 0x154);
      uVar12 = lVar14 - (longlong)((int)lVar14 / (int)uVar9) * (longlong)(int)uVar9;
      *param_2 = (uint)uVar12;
    } while ((uint)uVar12 != 0);
    *param_2 = (uint)uVar26;
    uVar24 = (ulonglong)(LZCOUNT((uint)uVar26 - iVar21) << 0x20) >> 0x25 ^ 1;
  }
  else {
    uVar24 = (ulonglong)*param_2;
    puVar8 = *(uint **)(iVar7 + 0x160);
    do {
      uVar9 = *puVar8;
      uVar18 = (uint)uVar24;
      if ((int)uVar18 < (int)(uVar9 - 1)) {
        lVar16 = uVar24 + uVar9 + (longlong)*(char *)(iVar7 + 0x154);
        uVar24 = lVar16 - (longlong)((int)lVar16 / (int)uVar9) * (longlong)(int)uVar9;
        uVar18 = (uint)uVar24;
        *param_2 = uVar18;
      }
    } while ((uVar18 != *puVar8 - 1) &&
            (*(int *)((int)puVar8 + (int)((uVar24 & 0xffffffff) << 4) + 0x1c) != 0x3f800000));
    uVar24 = 1;
  }
  return uVar24;
}


// 0x038f550 (0x26c4 bytes)
// strings: 006568c4: 'Moby class %d maya instance %d needs a rocketPath!\nMoby deleted\n'

/* Moby 459 */

void UpdateMoby_459(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  MobyInstance *pMVar5;
  f32 fVar6;
  Spline *pSVar7;
  bool bVar8;
  longlong lVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 uVar16;
  undefined8 uVar10;
  undefined4 uVar14;
  u8 uVar17;
  uint uVar15;
  int *piVar18;
  int *piVar19;
  longlong lVar20;
  short sVar22;
  longlong lVar21;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  GPiece<16> auStack_1a0;
  GPiece<16> local_190;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  GPiece<16> auStack_160;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  GPiece<16> local_130;
  GPiece<16> auStack_120;
  GPiece<16> local_110;
  float local_100;
  float local_fc;
  float local_f8;
  float afStack_f0 [4];
  GPiece<16> local_e0;
  float local_d0;
  float local_cc;
  float local_c8;
  GPiece<4> auStack_80;
  int local_7c;
  float local_78;
  float local_74;
  
  lVar9 = (longlong)(int)moby;
  iVar11 = 0;
  pvVar4 = moby->pVar;
  uVar23 = ZEXT48(pvVar4);
  local_7c = *(int *)((int)pvVar4 + 0x150);
  dVar24 = (double)BlendAnimFrame(moby);
  bVar8 = false;
  if ((*(int *)((int)pvVar4 + 0x38) != 0) || (*(short *)((int)pvVar4 + 0x1e2) != 0)) {
    bVar8 = true;
  }
  DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar4 + 0x200));
  lVar20 = lVar9 + 0x10;
  FUN_005e7e98(&local_1b0,lVar20);
  if (0 < *(int *)((int)pvVar4 + 0x1c8)) {
    *(int *)((int)pvVar4 + 0x1c8) = *(int *)((int)pvVar4 + 0x1c8) + -1;
  }
  if (moby->state != '\0') {
    iVar11 = M459_0038ed08(lVar9,&local_7c);
  }
  if (bVar8) {
    fVar2 = *(float *)((int)pvVar4 + 0x1a0) * 2.0;
  }
  else {
    fVar2 = *(float *)((int)pvVar4 + 0x1a0);
  }
  MB_getTarget((double)fVar2,lVar9);
  iVar12 = MB_damage(lVar9,0x210000,0);
  iVar13 = MB_HandleDamage(moby,iVar12,uVar23 + 0x20,0,auStack_80,&local_78,0,4);
  FastDecTimerS16(uVar23 + 0x26);
  if ((iVar12 != 0) && (*(short *)((int)pvVar4 + 0x26) == 0)) {
    pMVar5 = *(MobyInstance **)(iVar12 + 0x20);
    if (pMVar5 == (MobyInstance *)0x0) {
      dVar25 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else if (pMVar5 == g_currentWeaponMoby) {
      dVar25 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else {
      dVar25 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar5->pos).x),
                                    (double)((moby->pos).y - (pMVar5->pos).y));
    }
    local_74 = (float)dVar25;
    uVar16 = idol::GetAnimDuration(600);
    *(undefined2 *)((int)pvVar4 + 0x1e2) = uVar16;
    local_78 = *(float *)((int)pvVar4 + 0x20) - local_78;
    *(float *)((int)pvVar4 + 0x20) = local_78;
    if (local_78 <= 0.0) {
LAB_0038f7d0:
      *(undefined4 *)((int)pvVar4 + 0x98) = 0x3e99999a;
      fVar2 = DAT_0071f418;
      *(float *)((int)pvVar4 + 0x80) = DAT_0071f418 * 40.0;
      *(float *)((int)pvVar4 + 0x84) = fVar2 * 10.0;
      *(float *)((int)pvVar4 + 0x88) = SQRT(fVar2 * 10.0 * 2.0 * 10.0);
      fVar2 = g_FrameTime;
      *(undefined1 *)((int)pvVar4 + 0xad) = 0;
      *(undefined4 *)((int)pvVar4 + 0x94) = 1;
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0x41200000;
      *(float *)((int)pvVar4 + 0x8c) = fVar2 * 15.0;
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),&local_74,
                 uVar23 + 0x88,uVar23 + 0x8c);
      dVar25 = (double)local_74;
      idol::GetAnimDuration(2);
      MB_StartKick(dVar25,lVar9,uVar23 + 0x70);
      *(undefined1 *)((int)pvVar4 + 0x67) = 0xb4;
      moby->state = '\x0e';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      MB_UpdateLightsTransition(lVar9,uVar23 + 0x60);
      uVar16 = idol::GetAnimDuration(0x3c);
      *(undefined2 *)((int)pvVar4 + 0x26) = uVar16;
    }
    else if (iVar13 < 4) {
      if (0 < iVar13) {
        if (iVar13 < 3) goto LAB_0038f7d0;
LAB_0038f8fc:
        *(undefined4 *)((int)pvVar4 + 0x90) = 0x200;
        *(undefined4 *)((int)pvVar4 + 0x98) = 0x3f000000;
        *(undefined1 *)((int)pvVar4 + 0x67) = 0x78;
        *(undefined4 *)((int)pvVar4 + 0x80) = 0x3c03126f;
        *(float *)((int)pvVar4 + 0x88) = SQRT(*(float *)((int)pvVar4 + 0x84) * 2.0 * 1.5);
        fVar2 = g_FrameTime;
        *(undefined1 *)((int)pvVar4 + 0xad) = 0;
        *(undefined4 *)((int)pvVar4 + 0x94) = 1;
        *(undefined4 *)((int)pvVar4 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar4 + 0xc4) = 0x41200000;
        *(float *)((int)pvVar4 + 0x8c) = fVar2 * 8.5;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),&local_74,
                   uVar23 + 0x88,uVar23 + 0x8c);
        MB_StartKick((double)local_74,lVar9,uVar23 + 0x70);
        if (moby->animationId != '\v') {
          uVar10 = idol::GetAnimDuration(6);
          MB_SetAnimation(lVar9,0xb,0,uVar10);
        }
        moby->state = '\f';
        MB_UpdateLightsTransition(lVar9,uVar23 + 0x60);
      }
    }
    else if (iVar13 < 7) {
      if (5 < iVar13) goto LAB_0038f8fc;
      *(undefined4 *)((int)pvVar4 + 0x90) = 0x200;
      *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
      *(undefined4 *)((int)pvVar4 + 0x80) = 0x3c03126f;
      *(float *)((int)pvVar4 + 0x88) = SQRT(*(float *)((int)pvVar4 + 0x84) * 2.0 * 1.5);
      fVar2 = g_FrameTime;
      *(undefined1 *)((int)pvVar4 + 0xad) = 0;
      *(undefined4 *)((int)pvVar4 + 0x94) = 1;
      *(undefined4 *)((int)pvVar4 + 0xc0) = 0x40e00000;
      *(undefined4 *)((int)pvVar4 + 0xc4) = 0x41580000;
      *(float *)((int)pvVar4 + 0x8c) = fVar2 * 5.0;
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),&local_74,
                 uVar23 + 0x88,uVar23 + 0x8c);
      MB_StartKick((double)local_74,lVar9,uVar23 + 0x70);
      moby->state = '\f';
      MB_UpdateLightsTransition(lVar9,uVar23 + 0x60);
    }
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar4 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(600);
    *(undefined2 *)((int)pvVar4 + 0x1e2) = uVar16;
  }
  *(undefined4 *)((int)pvVar4 + 0x38) = 0;
  FastDecTimerS16(uVar23 + 0x1e2);
  bVar1 = moby->state;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      uVar10 = FUN_005e8338((double)(local_d0 - fVar2),(double)(local_cc - fVar3));
      OrganicDeltAngSpeed
                (uVar10,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9,&DAT_0038f4bc
                 ,uVar23 + 0x194);
      if (moby->animationId == '\0') {
        iVar11 = FastDecTimerS32(uVar23 + 400);
        if ((iVar11 != 0) && (moby->animationId != '\x05')) {
          uVar10 = idol::GetAnimDuration(0xf);
          MB_SetAnimation(lVar9,5,0,uVar10);
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        moby->unk58 = 1.0;
        if ((((!bVar8) &&
             ((dVar25 = (double)FUN_005e8588(lVar20,&local_d0), 8.0 <= dVar25 ||
              (6.0 <= ABS((moby->pos).z - local_c8))))) || (iVar11 == 0)) ||
           (dVar25 = (double)FUN_005e8548(lVar20,*(int *)((int)pvVar4 + 0x160) + local_7c * 0x10 +
                                                 0x10), dVar25 <= 0.25)) {
          dVar25 = (double)FUN_005e8588(lVar20,&local_d0);
          dVar31 = (double)(moby->rotation).z;
          if (bVar8) {
            fVar2 = *(float *)((int)pvVar4 + 0x1a0) * 2.0;
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x1a0);
          }
          if ((((dVar25 < (double)fVar2) && (ABS((moby->pos).z - local_c8) < 2.0)) &&
              (moby->enabled != '\0')) &&
             (((!bVar8 || (iVar11 == 0)) && (*(int *)((int)pvVar4 + 400) == 0)))) {
            dVar25 = (double)FUN_005e8338((double)(local_d0 - (moby->pos).x),
                                          (double)(local_cc - (moby->pos).y));
            dVar25 = (double)FastSubRots((float)dVar31,(float)dVar25);
            if (dVar25 < 0.0872664600610733) {
              GetBonePosition(lVar9,0,auStack_120);
              iVar11 = CollLine(local_110,auStack_120,0,lVar9,0);
              if (iVar11 == 0) {
                *(undefined4 *)((int)pvVar4 + 0x198) = 0x40800000;
                *(undefined2 *)((int)pvVar4 + 0x1a4) = 0;
                moby->state = '\x06';
                if (moby->animationId != '\x04') {
                  uVar10 = idol::GetAnimDuration(6);
                  MB_SetAnimation(lVar9,4,0,uVar10);
                }
                *(undefined4 *)((int)pvVar4 + 400) = 0;
              }
              else {
                uVar14 = idol::GetAnimDuration(0x3c);
                *(undefined4 *)((int)pvVar4 + 400) = uVar14;
                if (moby->animationId != '\0') {
                  uVar10 = idol::GetAnimDuration(5);
                  MB_SetAnimation(lVar9,0,0,uVar10);
                }
                moby->state = '\x01';
              }
              goto LAB_00391968;
            }
          }
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar9,0,0,uVar10);
          }
          moby->state = '\x01';
        }
        else {
          *(int *)((int)pvVar4 + 0x150) = local_7c;
          if (moby->animationId != '\b') {
            uVar10 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar9,8,0,uVar10);
          }
          fVar2 = DAT_00842220;
          moby->state = '\t';
          moby->unk58 = fVar2;
        }
      }
      goto LAB_00391968;
    }
    if (bVar1 == 6) {
      uVar15 = (int)*(uint *)((int)pvVar4 + 0x1cc) >> 0x1f;
      if ((int)((uVar15 >> 1 ^ *(uint *)((int)pvVar4 + 0x1cc)) - uVar15) < 0x41600000 &&
          14.0 <= dVar24) {
        dVar31 = (double)(moby->rotation).z;
        GetBonePosition(lVar9,0,&local_150);
        FUN_005e7e98(uVar23 + 0x180,&local_150);
        dVar25 = (double)FUN_005e8338((double)(local_d0 - local_150),(double)(local_cc - local_14c))
        ;
        dVar25 = (double)FastSubRots((float)dVar25,(float)dVar31);
        if (dVar25 < 0.0872664600610733) {
          dVar31 = (double)FUN_005e8338((double)(local_d0 - local_150),
                                        (double)(local_cc - local_14c));
        }
        dVar29 = (double)*(float *)((int)pvVar4 + 0x180);
        dVar25 = (double)cosf((float)dVar31);
        dVar30 = (double)*(float *)((int)pvVar4 + 0x184);
        *(float *)((int)pvVar4 + 0x180) =
             (float)(dVar25 * (double)*(float *)((int)pvVar4 + 0x198) + dVar29);
        dVar25 = (double)FUN_005e8128(dVar31);
        *(float *)((int)pvVar4 + 0x184) =
             (float)(dVar25 * (double)*(float *)((int)pvVar4 + 0x198) + dVar30);
        FUN_005e81f0(&local_140,uVar23 + 0x180,&local_150);
        FUN_005e7f98((double)(DAT_00842214 * g_FrameTime),&local_140,&local_140);
        iVar11 = CollLine(local_130,&local_150,0,lVar9,0);
        if (iVar11 != 0) {
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar9,0,0,uVar10);
          }
          moby->state = '\x01';
          goto LAB_00391968;
        }
        uVar26 = FUN_005e8338((double)local_140,(double)local_13c);
        uVar10 = FUN_005e7ebc(&local_140);
        uVar27 = FUN_005e8338(uVar10,(double)local_138);
        uVar10 = FastDoubleToInt((double)(animationSpeed * 10.0));
        FUN_00434898(uVar26,uVar27,lVar9,uVar10,CONCAT44(local_150,local_14c),
                     CONCAT44(local_148,local_144),CONCAT44(local_140,local_13c),
                     CONCAT44(local_138,local_134));
        *(short *)((int)pvVar4 + 0x1a4) = *(short *)((int)pvVar4 + 0x1a4) + 1;
      }
      dVar25 = 2.0;
      if (dVar24 < 2.0) {
        if (*(short *)((int)pvVar4 + 0x1a4) < 4) {
          dVar31 = (double)FUN_005e8588(lVar20,&local_d0);
          if (bVar8) {
            fVar2 = (float)((double)*(float *)((int)pvVar4 + 0x1a0) * dVar25);
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x1a0);
          }
          if ((dVar31 <= (double)fVar2) && (ABS((moby->pos).z - local_c8) <= 6.0))
          goto LAB_00391968;
        }
        if (moby->animationId != '\x05') {
          uVar10 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar9,5,5,uVar10);
        }
        moby->unk58 = 0.5;
        moby->state = '\a';
      }
      goto LAB_00391968;
    }
    if (bVar1 == 3) {
      piVar18 = *(int **)((int)pvVar4 + 0x130);
      if (piVar18 == (int *)0x0) {
        iVar11 = *(int *)((int)pvVar4 + 0x1e4);
        if (iVar11 == -1) {
          FUN_005e7e70(auStack_180);
          GetGroundZ(0x3fe0000000000000,lVar20,0);
          FUN_005e7f54(lVar20,lVar20,auStack_180);
          dVar25 = (double)FUN_005e8030(auStack_180);
          if (dVar25 < (double)g_FrameTime) {
            if (moby->animationId != '\0') {
              uVar10 = idol::GetAnimDuration(5);
              MB_SetAnimation(lVar9,0,0,uVar10);
            }
            moby->state = '\x01';
          }
        }
        else {
          uVar10 = FUN_005e8338((double)(Cuboids[iVar11].pos.x - fVar2),
                                (double)(Cuboids[iVar11].pos.y - fVar3));
          OrganicDeltAngSpeed
                    (uVar10,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9);
          lVar21 = uVar23 + 0x1d0;
          dVar25 = (double)FUN_005e8030(lVar21);
          dVar29 = (double)*(float *)((int)pvVar4 + 0x1d8);
          FUN_005e7f98((double)(float)(dVar25 * 0.949999988079071),lVar21,lVar21);
          FUN_005e81f0(auStack_160,&Cuboids[*(int *)((int)pvVar4 + 0x1e4)].pos,lVar20);
          FUN_005e7f98((double)(float)(dVar25 * 0.05000000074505806),auStack_160,auStack_160);
          FUN_005e7f54(lVar21,lVar21,auStack_160);
          dVar31 = 10.0;
          if (dVar25 <= (double)(g_FrameTime * 10.0)) {
            if (dVar25 < (double)(g_FrameTime * 5.0)) {
              FUN_005e7f98((double)(DAT_0071f418 * 5.0),auStack_160,lVar21);
              FUN_005e7f54(lVar21,lVar21,auStack_160);
            }
          }
          else {
            FUN_005e7f98((double)(DAT_0071f418 * -10.0),auStack_160,lVar21);
            FUN_005e7f54(lVar21,lVar21,auStack_160);
          }
          iVar11 = FastDecTimerS16(uVar23 + 0x1ec);
          if (iVar11 == 0) {
            *(float *)((int)pvVar4 + 0x1d8) = (float)dVar29;
          }
          FUN_005e7f54(lVar20,lVar20,lVar21);
          dVar25 = (double)FUN_005e8548(lVar20,&Cuboids[*(int *)((int)pvVar4 + 0x1e4)].pos);
          if (dVar25 < (double)(float)((double)g_FrameTime * dVar31)) {
            if (moby->animationId != '\0') {
              uVar10 = idol::GetAnimDuration(5);
              MB_SetAnimation(lVar9,0,0,uVar10);
            }
            moby->state = '\x01';
          }
        }
      }
      else {
        iVar11 = *piVar18;
        iVar12 = *(int *)((int)pvVar4 + 0x120) + iVar11 + (int)*(char *)((int)pvVar4 + 0x124);
        iVar12 = iVar12 - (iVar12 / iVar11) * iVar11;
        uVar10 = FUN_005e8338((double)((float)piVar18[iVar12 * 4 + 4] - fVar2),
                              (double)((float)piVar18[iVar12 * 4 + 5] - fVar3));
        OrganicDeltAngSpeed
                  (uVar10,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9,
                   &DAT_0038f4bc,uVar23 + 0x194);
        FUN_005e7e98(auStack_170,*(int *)((int)pvVar4 + 0x130) + iVar12 * 0x10 + 0x10);
        if (*(int *)((int)pvVar4 + 0x120) == **(int **)((int)pvVar4 + 0x130) + -1) {
          if (moby->animationId != '\0') {
            uVar10 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar9,0,0,uVar10);
          }
          moby->state = '\x01';
        }
        else {
          FUN_005e81f0(auStack_180,auStack_170,lVar20);
          FUN_005e7f98((double)(g_FrameTime * 5.0),auStack_180,auStack_180);
          FUN_005e7f54(lVar20,lVar20,auStack_180);
          dVar25 = (double)FUN_005e8548(auStack_170,lVar20);
          if (dVar25 < 0.5) {
            *(int *)((int)pvVar4 + 0x120) = iVar12;
          }
        }
      }
      M459_0038e978(lVar9);
      goto LAB_00391968;
    }
    if (bVar1 == 2) {
      dVar25 = (double)FUN_005e8588(lVar20,&local_d0);
      if (((dVar25 < (double)*(float *)((int)pvVar4 + 0x1a8)) ||
          (iVar11 = MB_IsPntInCuboid
                              (&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x1c0)), iVar11 != 0
          )) || (*(int *)((int)pvVar4 + 0x1e8) != 0)) {
        if (*(int *)((int)pvVar4 + 0x1c4) != -1) {
          TransitionMovement(0x1f,0);
          SetCameraPosition
                    (&Cuboids[*(int *)((int)pvVar4 + 0x1c4)].pos,
                     &Cuboids[*(int *)((int)pvVar4 + 0x1c4)].rot,0,0,0);
          LetterBoxOn = 1;
          uVar14 = idol::GetAnimDuration(0x168);
          *(undefined4 *)((int)pvVar4 + 0x1c8) = uVar14;
        }
        moby->collision = moby->pClass->collision;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (moby->animationId != '\b') {
          uVar10 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar9,8,0,uVar10);
        }
        moby->state = '\x03';
      }
      goto LAB_00391968;
    }
    if (bVar1 != 1) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar4 + 0x164) == -1) {
          printf("Moby class %d maya instance %d needs a rocketPath!\nMoby deleted\n",
                       moby->oClass,moby->uid);
          DeleteMoby(moby);
          return;
        }
        *(undefined4 *)((int)pvVar4 + 0x150) = 0;
        pSVar7 = Splines[*(int *)((int)pvVar4 + 0x164)];
        *(Spline **)((int)pvVar4 + 0x160) = pSVar7;
        if (*(int *)((int)pvVar4 + 0x134) < 0) {
          FUN_005e7e98(lVar20,ZEXT48(pSVar7) + 0x10);
          if (*(int *)((int)pvVar4 + 0x1b4) == 0) {
            *(undefined4 *)((int)pvVar4 + 0x130) = 0;
            (moby->pos).z = (moby->pos).z + 20.0;
          }
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x120) = 0;
          pSVar7 = Splines[*(int *)((int)pvVar4 + 0x134)];
          *(Spline **)((int)pvVar4 + 0x130) = pSVar7;
          FUN_005e7e98(lVar20,ZEXT48(pSVar7) + 0x10);
        }
        piVar18 = *(int **)((int)pvVar4 + 0x160);
        iVar12 = 0;
        *(undefined2 *)((int)pvVar4 + 0x1ae) = 0;
        iVar11 = *piVar18;
        piVar19 = piVar18;
        if (0 < iVar11) {
          do {
            if (piVar19[7] == 0x3f800000) {
              *(undefined2 *)((int)pvVar4 + 0x1ae) = 1;
              iVar11 = *piVar18;
            }
            iVar12 = iVar12 + 1;
            piVar19 = piVar19 + 4;
          } while (iVar12 < iVar11);
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(undefined1 *)((int)pvVar4 + 0x29) = 0;
        uVar15 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar15;
        *(undefined1 *)((int)pvVar4 + 0x58) = 8;
        *(undefined1 *)((int)pvVar4 + 0x5a) = 8;
        MB_InitDefaultParams((float *)((int)pvVar4 + 0xd0));
        *(undefined4 *)((int)pvVar4 + 0x10c) = 0x3cf5c28f;
        *(undefined4 *)((int)pvVar4 + 0x110) = 0x3e99999a;
        *(undefined4 *)((int)pvVar4 + 0x114) = 0x3e800000;
        *(float *)((int)pvVar4 + 0xec) = DAT_0071f418 * 5.0;
        *(float *)((int)pvVar4 + 0xf4) = DAT_00842218 * g_FrameTime;
        *(undefined4 *)((int)pvVar4 + 0xdc) = 0x40000000;
        *(undefined4 *)((int)pvVar4 + 0xd8) = 0x40000000;
        *(undefined4 *)((int)pvVar4 + 0x20) = 0x40000000;
        uVar16 = FastDoubleToInt(0x4000000000000000);
        *(undefined2 *)((int)pvVar4 + 0x24) = uVar16;
        *(undefined1 *)((int)pvVar4 + 0x29) = 0;
        *(undefined1 *)((int)pvVar4 + 0x28) = 1;
        FUN_005e7e70(uVar23 + 0x40);
        *(undefined4 *)((int)pvVar4 + 0x1c8) = 0xffffffff;
        if (moby->animationId != '\0') {
          uVar10 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar9,0,0,uVar10);
        }
        *(short *)((int)pvVar4 + 0x1e0) = moby->drawDistance;
        dVar31 = 0.5;
        dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar20,0);
        if (dVar31 < (double)(float)((double)(moby->pos).z - dVar25)) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        }
        moby->state = '\x02';
      }
      goto LAB_00391968;
    }
    uVar10 = FUN_005e8338((double)(local_d0 - fVar2),(double)(local_cc - fVar3));
    OrganicDeltAngSpeed
              (uVar10,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9,&DAT_0038f4bc,
               uVar23 + 0x194);
    FastDecTimerS32(uVar23 + 400);
    dVar25 = (double)FUN_005e8588(lVar20,&local_d0);
    dVar31 = (double)(moby->rotation).z;
    if (bVar8) {
      fVar2 = *(float *)((int)pvVar4 + 0x1a0) * 2.0;
    }
    else {
      fVar2 = *(float *)((int)pvVar4 + 0x1a0);
    }
    if (((((double)fVar2 <= dVar25) || (2.0 <= ABS((moby->pos).z - local_c8))) ||
        ((moby->enabled == '\0' || ((bVar8 && (iVar11 != 0)))))) ||
       (*(int *)((int)pvVar4 + 400) != 0)) {
LAB_0038fff4:
      if (((bVar8) ||
          ((dVar25 = (double)FUN_005e8588(lVar20,&local_d0), dVar25 < 4.0 &&
           (ABS((moby->pos).z - local_c8) < 6.0)))) && (iVar11 != 0)) {
        dVar25 = (double)FUN_005e8548(lVar20,*(int *)((int)pvVar4 + 0x160) + local_7c * 0x10 + 0x10)
        ;
        if ((0.25 < dVar25) &&
           ((*(short *)((int)pvVar4 + 0x1ac) == 0 ||
            (*(int *)((int)pvVar4 + 0x150) < **(int **)((int)pvVar4 + 0x160) + -1)))) {
          if (moby->animationId != '\b') {
            uVar10 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar9,8,0,uVar10);
          }
          *(int *)((int)pvVar4 + 0x150) = local_7c;
          fVar2 = DAT_00842220;
          moby->state = '\t';
          moby->unk58 = fVar2;
        }
      }
    }
    else {
      dVar25 = (double)FUN_005e8338((double)(local_d0 - (moby->pos).x),
                                    (double)(local_cc - (moby->pos).y));
      dVar25 = (double)FastSubRots((float)dVar31,(float)dVar25);
      if (0.0872664600610733 <= dVar25) goto LAB_0038fff4;
      GetBonePosition(lVar9,0,auStack_1a0);
      iVar11 = CollLine(local_190,auStack_1a0,0,lVar9,0);
      if (iVar11 == 0) {
        *(undefined4 *)((int)pvVar4 + 0x198) = 0x40800000;
        *(undefined2 *)((int)pvVar4 + 0x1a4) = 0;
        moby->state = '\x06';
        if (moby->animationId != '\x04') {
          uVar10 = idol::GetAnimDuration(6);
          MB_SetAnimation(lVar9,4,0,uVar10);
        }
        *(undefined4 *)((int)pvVar4 + 400) = 0;
      }
      else {
        uVar14 = idol::GetAnimDuration(0x3c);
        *(undefined4 *)((int)pvVar4 + 400) = uVar14;
      }
    }
    if ((*(int *)((int)pvVar4 + 0x1c8) == 0) && (*(int *)((int)pvVar4 + 0x1c4) != -1)) {
      Camera_DeactivateMobyDrivenCam(0);
      TransitionMovement(0,1);
      LetterBoxOn = 0;
      *(undefined4 *)((int)pvVar4 + 0x1c4) = 0xffffffff;
    }
    goto LAB_00391968;
  }
  if (bVar1 == 0xe) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x70));
    if ((uVar15 & 6) != 0) {
      uVar10 = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,4,1,5,2,4);
      lVar21 = lVar9 + 0x40;
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6c8,lVar20,lVar21,0,0);
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6c9,lVar20,lVar21,0,0);
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6ca,lVar20,lVar21,0,0);
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6ea,lVar20,lVar21,0,0);
      MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    fVar6 = (moby->pos).x;
    uVar15 = (int)fVar6 >> 0x1f;
    iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15;
    if ((((iVar11 < 0x40000000) || (0x447f4000 < iVar11)) ||
        (fVar6 = (moby->pos).y, uVar15 = (int)fVar6 >> 0x1f,
        iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, 0x447f4000 < iVar11 || iVar11 < 0x40000000))
       || ((fVar6 = (moby->pos).z, uVar15 = (int)fVar6 >> 0x1f,
           iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, iVar11 < 0x40000000 ||
           (0x447f4000 < iVar11)))) {
      uVar10 = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,1,4,5,2,4);
      lVar21 = lVar9 + 0x40;
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6c8,lVar20,lVar21,0,0);
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6c9,lVar20,lVar21,0,0);
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6ca,lVar20,lVar21,0,0);
      MB_SpawnDebrisMoby(uVar10,lVar9,0x6ea,lVar20,lVar21,0,0);
      MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    goto LAB_00391968;
  }
  if (bVar1 == 0xc) {
    uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x70));
    if ((uVar15 & 0x40) != 0) {
      dVar25 = (double)FUN_005e8548(lVar20,*(int *)((int)pvVar4 + 0x160) + local_7c * 0x10 + 0x10);
      if (0.25 < dVar25) {
        if (moby->animationId != '\b') {
          uVar10 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar9,8,0,uVar10);
        }
        fVar2 = DAT_00842220;
        *(int *)((int)pvVar4 + 0x150) = local_7c;
        moby->unk58 = fVar2;
        moby->state = '\t';
        return;
      }
      if (moby->animationId != '\0') {
        uVar10 = idol::GetAnimDuration(6);
        MB_SetAnimation(lVar9,0,0,uVar10);
      }
      moby->state = '\x01';
    }
    fVar6 = (moby->pos).x;
    uVar15 = (int)fVar6 >> 0x1f;
    iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15;
    if (((iVar11 < 0x40000000) || (0x447f4000 < iVar11)) ||
       ((fVar6 = (moby->pos).y, uVar15 = (int)fVar6 >> 0x1f,
        iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, 0x447f4000 < iVar11 || iVar11 < 0x40000000 ||
        ((fVar6 = (moby->pos).z, uVar15 = (int)fVar6 >> 0x1f,
         iVar11 = (uVar15 >> 1 ^ (uint)fVar6) - uVar15, iVar11 < 0x40000000 || (0x447f4000 < iVar11)
         ))))) {
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,4,1,5,2,4);
      MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    goto LAB_00391968;
  }
  if (bVar1 != 0xb) {
    if (bVar1 == 10) {
      if (*(short *)((int)pvVar4 + 0x1ae) == 0) {
        sVar22 = (short)*(undefined4 *)((int)pvVar4 + 0x150);
        piVar18 = *(int **)((int)pvVar4 + 0x160);
        *(short *)((int)pvVar4 + 0x1a6) = sVar22;
      }
      else {
        piVar18 = *(int **)((int)pvVar4 + 0x160);
        iVar12 = 0;
        iVar11 = 0;
        dVar25 = 99999997952.0;
        if (0 < *piVar18) {
          iVar13 = 0;
          iVar11 = 0;
          do {
            dVar31 = (double)FUN_005e8548((int)piVar18 + iVar13 + 0x10,lVar20);
            piVar18 = *(int **)((int)pvVar4 + 0x160);
            if (dVar31 < dVar25) {
              dVar25 = dVar31;
              iVar11 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar13 = iVar13 + 0x10;
          } while (iVar12 < *piVar18);
        }
        iVar12 = *(int *)((int)pvVar4 + 0x150);
        sVar22 = (short)iVar12 +
                 ((ushort)((longlong)iVar11 - (longlong)iVar12 >> 0x3f) &
                 ((short)iVar11 + 1) - (short)iVar12);
        sVar22 = sVar22 + ((ushort)((longlong)iVar12 - (longlong)iVar11 >> 0x3f) &
                          ((short)iVar11 + -1) - sVar22);
        *(short *)((int)pvVar4 + 0x1a6) = sVar22;
      }
      FUN_005e7e98(&local_100,piVar18 + sVar22 * 4 + 4);
      uVar10 = FUN_005e8338((double)(local_100 - (moby->pos).x),(double)(local_fc - (moby->pos).y));
      dVar30 = 6.2831854820251465;
      dVar29 = 3.1415927410125732;
      OrganicDeltAngSpeed
                (uVar10,(double)(DAT_0071f418 * 6.2831855),(double)(DAT_0071f418 * 3.1415927),
                 (double)(g_FrameTime * 6.2831855),lVar9,&DAT_00720000,uVar23 + 0x194);
      dVar31 = (double)(moby->rotation).z;
      dVar25 = (double)FUN_005e8338((double)(local_100 - (moby->pos).x),
                                    (double)(local_fc - (moby->pos).y));
      dVar25 = (double)FastSubRots((float)dVar31,(float)dVar25);
      if (dVar25 < 0.7853981852531433) {
        dVar25 = (double)*(float *)((int)pvVar4 + 0x1b8);
        if (dVar25 < (double)(float)((double)DAT_00842218 * (double)g_FrameTime)) {
          fVar2 = (float)((double)DAT_00842218 * (double)DAT_0071f418 + dVar25);
          dVar25 = (double)fVar2;
          *(float *)((int)pvVar4 + 0x1b8) = fVar2;
        }
        dVar28 = (double)(moby->rotation).z;
        uVar10 = FUN_005e8588(lVar20,&local_100);
        dVar31 = (double)FUN_005e8338(uVar10,(double)((local_f8 + 0.8) - (moby->pos).z));
        MB_SphericalToVector((float)dVar25,(float)dVar28,(float)dVar31,afStack_f0);
        FUN_005e7f54(lVar20,lVar20,afStack_f0);
        dVar25 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,
                                    (double)((*(float *)((int)pvVar4 + 0x1b8) /
                                             (DAT_00842218 * g_FrameTime)) * 0.5235988),
                                    (double)(float)((double)DAT_0071f418 * dVar30),
                                    (double)(float)((double)DAT_0071f418 * dVar29),
                                    (double)(g_FrameTime * 4.712389),&DAT_0038f4bc,
                                    &DAT_00720000,uVar23 + 0x1bc);
        (moby->rotation).y = (float)dVar25;
      }
      FUN_005e7e98(&local_100,
                   *(int *)((int)pvVar4 + 0x160) + *(int *)((int)pvVar4 + 0x150) * 0x10 + 0x10);
      dVar25 = (double)FUN_005e8548(lVar20,&local_100);
      if (dVar25 < 0.25) {
        moby->state = '\v';
      }
      M459_0038e978(lVar9);
    }
    else if (bVar1 == 9) {
      moby->unk58 = 1.0;
      *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
      *(undefined4 *)((int)pvVar4 + 0x1bc) = 0;
      moby->state = '\n';
      M459_0038e978
                (lVar9,10,CONCAT44(local_1b0,local_1ac),CONCAT44(local_1a8,local_1a4));
    }
    goto LAB_00391968;
  }
  dVar25 = 0.0;
  if ((*(int *)((int)pvVar4 + 0x1b8) < 1) || (*(short *)((int)pvVar4 + 0x1ee) != 0)) {
    uVar10 = FUN_005e8338((double)(local_d0 - fVar2),(double)(local_cc - fVar3));
    OrganicDeltAngSpeed
              (uVar10,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar9);
    *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
    dVar25 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,
                                (double)((float)(dVar25 / (double)(DAT_00842218 *
                                                                  g_FrameTime)) *
                                        0.5235988),(double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(g_FrameTime * 6.2831855),&DAT_00720000,
                                &DAT_00720000,uVar23 + 0x1bc);
  }
  else {
    *(float *)((int)pvVar4 + 0x1b8) =
         -(DAT_00842218 * 3.0 * DAT_0071f418 - *(float *)((int)pvVar4 + 0x1b8));
    cosf((moby->rotation).z);
    FUN_005e8128((double)(moby->rotation).z);
    FUN_005e7f54(lVar20,lVar20,local_e0);
    dVar25 = (double)MB_DeltAngSpeed
                               ((double)(moby->rotation).y,
                                (double)((*(float *)((int)pvVar4 + 0x1b8) /
                                         (DAT_00842218 * g_FrameTime)) * 0.5235988),
                                (double)(DAT_0071f418 * 6.2831855),
                                (double)(DAT_0071f418 * 3.1415927),
                                (double)(g_FrameTime * 6.2831855));
  }
  uVar17 = moby->animationId;
  (moby->rotation).y = (float)dVar25;
  if ((uVar17 == '\n') || (0 < *(int *)((int)pvVar4 + 0x1b8))) {
LAB_0039136c:
    if ((moby->updateId == '\n') && ((moby->field43_0x70 & 2U) != 0)) {
      if (uVar17 != '\0') {
        uVar10 = idol::GetAnimDuration(6);
        MB_SetAnimation(lVar9,0,0,uVar10);
      }
      moby->state = '\x01';
    }
  }
  else {
    dVar31 = (double)(moby->rotation).z;
    dVar25 = (double)FUN_005e8338((double)(local_d0 - (moby->pos).x),
                                  (double)(local_cc - (moby->pos).y));
    dVar25 = (double)FastSubRots((float)dVar31,(float)dVar25);
    uVar17 = moby->animationId;
    if (0.03490658476948738 <= dVar25) goto LAB_0039136c;
    *(undefined4 *)((int)pvVar4 + 0x1b8) = 0;
    if (moby->animationId != '\n') {
      uVar10 = idol::GetAnimDuration(3);
      MB_SetAnimation(lVar9,10,0,uVar10);
    }
  }
  M459_0038e978(lVar9);
LAB_00391968:
  MB_ColorDyingMoby(lVar9,uVar23 + 0x60);
  *(float *)((int)pvVar4 + 0x1cc) = (float)dVar24;
  uVar17 = moby->state;
  if ((((uVar17 == '\x01') || (uVar17 == '\x05')) || (uVar17 == '\x06')) ||
     ((uVar17 == '\a' || (uVar17 == '\v')))) {
    fVar2 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar4 + 0xe8);
    *(float *)((int)pvVar4 + 0xe8) = fVar2;
    dVar25 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar2 - 2.0);
    dVar24 = (double)GetGroundZ(0x3fe0000000000000,lVar20,0);
    fVar2 = (float)((double)(moby->pos).z - dVar25);
    (moby->pos).z = fVar2;
    if ((double)fVar2 < dVar24) {
      (moby->pos).z = (float)dVar24;
      *(undefined4 *)((int)pvVar4 + 0xe8) = 0;
    }
  }
  else {
    dVar24 = (double)GetGroundZ(0x3fe0000000000000,lVar20,0);
  }
  MB_SetZBounds(dVar24,lVar9);
  iVar11 = CollHotspot();
  if ((iVar11 == 0) && ((moby->pos).z < (float)(dVar24 + 1.0))) {
    uVar10 = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar9,uVar23 + 0x40,lVar20,4,1,5,2,4);
    lVar21 = lVar9 + 0x40;
    MB_SpawnDebrisMoby(uVar10,lVar9,0x6c8,lVar20,lVar21,0,0);
    MB_SpawnDebrisMoby(uVar10,lVar9,0x6c9,lVar20,lVar21,0,0);
    MB_SpawnDebrisMoby(uVar10,lVar9,0x6ca,lVar20,lVar21,0,0);
    MB_SpawnDebrisMoby(uVar10,lVar9,0x6ea,lVar20,lVar21,0,0);
    MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


// 0x0391c14 (0x14 bytes)
void M459_00391c14(void)

{
  DAT_00842270 = 0x10000;
  return;
}


