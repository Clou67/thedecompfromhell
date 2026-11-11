// game/update/moby908.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4a79c0-0x4a8d54
#include <stdio.h>
#include "game/update/moby908.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1212.h"
#include "idol/fastfunc.h"

// 0x04a79c0 (0x5e4 bytes)
// strings: 004a79a0: '?fffHCP' (raw)

void M908_004a79c0(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  char cVar7;
  int iVar5;
  undefined1 uVar8;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<56> local_f0;
  
  if ((*(char *)(param_1 + 0x20) != '\x02' && *(char *)(param_1 + 0x20) != '\0') &&
     (*(char *)(param_1 + 0x31) != '\0')) {
    iVar6 = 0;
    iVar10 = 0;
    uVar14 = 0x3fc99999a0000000;
    uVar15 = 0x3ff0000000000000;
    uVar16 = 0x3fecccccc0000000;
    uVar17 = 0x41086a0000000000;
    uVar18 = 0x4010000000000000;
    auVar22 = loadVectorLeftIndexed(0x10,0x4a7998);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    do {
      MB_randInt(0x10);
      MB_randInt(2);
      uVar3 = SpawnPart_23(uVar14,uVar15,uVar16,uVar17,local_f0);
      iVar5 = (int)uVar3;
      if (iVar5 != 0) {
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint(auVar21,auVar22,auVar20);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = vectorSplatHalfWord(auVar20,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar20,10,uVar3);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        cVar7 = FastDoubleToInt(uVar18);
        sVar1 = *(short *)(param_1 + 0x32);
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
        *(char *)(iVar5 + 9) = (char)(sVar1 >> 5) * '\x10' + cVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    iVar6 = 0;
    dVar13 = 2.5;
    dVar11 = 100000.0;
    uVar9 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
    uVar3 = 0x3fa99999a0000000;
    dVar19 = 20000.0;
    dVar12 = dVar11;
    do {
      iVar5 = SpawnPart_23(uVar3,uVar15,uVar15,dVar11,local_f0);
      if (iVar5 != 0) {
        cVar7 = FastDoubleToInt(uVar18);
        sVar1 = *(short *)(param_1 + 0x32);
        *(short *)(iVar5 + 10) = (short)uVar9;
        *(char *)(iVar5 + 9) = (char)(sVar1 >> 5) * '\x10' + cVar7;
        uVar8 = MB_randInt(0xff);
        *(undefined1 *)(iVar5 + 8) = uVar8;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      }
      iVar6 = iVar6 + 1;
      dVar11 = (double)(float)(dVar11 - dVar19);
      uVar9 = uVar9 << 1;
    } while (iVar6 < 3);
    iVar6 = 0;
    do {
      MB_randInt(0x10);
      MB_randInt(2);
      uVar4 = SpawnPart_23(uVar14,uVar15,uVar16,uVar17,local_f0);
      iVar5 = (int)uVar4;
      if (iVar5 != 0) {
        cVar7 = FastDoubleToInt(uVar18);
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        *(char *)(iVar5 + 9) = (char)(*(short *)(param_1 + 0x32) >> 5) * '\x10' + cVar7;
        auVar21 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint(auVar21,auVar22,auVar20);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar21 = vectorSplatHalfWord(auVar20,1);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar21,10,uVar4);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        uVar8 = storeVectorElementByteIndexed
                          (auVar20 | auVar20 << 8 | auVar20 << 0x10 | auVar20 << 0x18 |
                           auVar20 << 0x20 | auVar20 << 0x28 | auVar20 << 0x30 | auVar20 << 0x38 |
                           auVar20 << 0x40 | auVar20 << 0x48 | auVar20 << 0x50 | auVar20 << 0x58 |
                           auVar20 << 0x60 | auVar20 << 0x68 | auVar20 << 0x70 | auVar20 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar5 + 0x2b) = uVar8;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    uVar9 = (ulonglong)(uint)(int)((double)animationSpeed * dVar13);
    do {
      iVar6 = SpawnPart_23(uVar3,uVar15,uVar15,dVar12,local_f0);
      if (iVar6 != 0) {
        cVar7 = FastDoubleToInt(uVar18);
        sVar1 = *(short *)(param_1 + 0x32);
        *(short *)(iVar6 + 10) = (short)uVar9;
        *(char *)(iVar6 + 9) = (char)(sVar1 >> 5) * '\x10' + cVar7;
        uVar8 = MB_randInt(0xff);
        *(undefined1 *)(iVar6 + 8) = uVar8;
        *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
        *(undefined4 *)(iVar6 + 0x24) = 2;
        *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
      }
      iVar10 = iVar10 + 1;
      dVar12 = (double)(float)(dVar12 - dVar19);
      uVar9 = uVar9 << 1;
    } while (iVar10 < 3);
  }
  return;
}


// 0x04a7fc0 (0x590 bytes)
// inlined: FastAtan2 @0x4a81b0, FastAtan2 @0x4a8398
double M908_004a7fc0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar13;
  float *pfVar14;
  longlong lVar12;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar21;
  ulonglong in_f26;
  double dVar22;
  double dVar23;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  float fVar28;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0x140;
  puVar7 = (ulonglong *)lVar10;
  *puVar7 = uVar9;
  puVar7[0x2a] = in_LR;
  puVar7[0x20] = in_f24;
  puVar7[0x21] = in_f25;
  puVar7[0x22] = in_f26;
  puVar7[0x23] = in_f27;
  puVar7[0x24] = in_f28;
  puVar7[0x25] = in_f29;
  puVar7[0x26] = in_f30;
  puVar7[0x27] = in_f31;
  puVar7[0x1f] = unaff_r31;
  puVar7[0x1e] = unaff_r30;
  puVar7[0x1d] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar13 = *(int *)(iVar6 + 0x68);
  fVar28 = g_FrameTime * DAT_008f3eb8;
  lVar11 = uVar9 - 0xd0;
  puVar7[0x1c] = unaff_r28;
  puVar7[0x1b] = unaff_r27;
  MB_PathMoveDist
            ((double)fVar28,Splines[iVar13],lVar11,iVar6 + 0x60,iVar6 + 100,iVar13 * 4,1);
  dVar21 = 0.0;
  iVar13 = (int)lVar11;
  AccelDelt(*(float *)(puVar7 + 0xe),DAT_008f3ebc,DAT_008f3ec0,0.0,
                      (float *)(param_1 + 0x10),iVar13,(float *)(iVar6 + 0x70));
  AccelDelt(*(float *)((int)puVar7 + 0x74),DAT_008f3ebc,DAT_008f3ec0,(float)dVar21,
                      (float *)(param_1 + 0x14),iVar13,(float *)(iVar6 + 0x74));
  AccelDelt(*(float *)(puVar7 + 0xf),DAT_008f3ebc,DAT_008f3ec0,(float)dVar21,
                      (float *)(param_1 + 0x18),iVar13,(float *)(iVar6 + 0x78));
  fVar28 = *(float *)(puVar7 + 0xe) - *(float *)(param_1 + 0x10);
  dVar26 = (double)fVar28;
  dVar27 = (double)*(float *)(puVar7 + 0xf);
  fVar1 = *(float *)((int)puVar7 + 0x74) - *(float *)(param_1 + 0x14);
  dVar25 = (double)fVar1;
  dVar24 = (double)*(float *)(param_1 + 0x18);
  dVar18 = (double)*(float *)(param_1 + 0x48);
  dVar22 = ABS(dVar26);
  if ((0.009999999776482582 < dVar22) && (dVar19 = ABS(dVar25), 0.009999999776482582 < dVar19)) {
    *(float *)((int)puVar7 + 0x8c) = fVar28;
    *(float *)(puVar7 + 0x12) = fVar1;
    *(float *)((int)puVar7 + 0x94) = (float)(dVar22 - dVar19);
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
    dVar20 = ABS((double)*(float *)((int)puVar7 + 0x8c));
    if ((double)*(float *)((int)puVar7 + 0x94) - dVar21 < 0.0) {
      dVar20 = dVar19;
    }
    fVar28 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar19 = ABS((double)*(float *)(puVar7 + 0x12));
    if ((double)*(float *)((int)puVar7 + 0x94) - dVar21 < 0.0) {
      dVar19 = dVar22;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar23 = 0.7853981852531433;
    dVar22 = dVar21;
    if (dVar21 < dVar20) {
      lVar11 = uVar9 - 0x130;
      lVar12 = uVar9 - 0x88;
      lVar16 = uVar9 - 0x78;
      lVar17 = 2;
      fVar2 = (float)(dVar19 - dVar20) / (float)(dVar19 + dVar20);
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 0xc4) = fVar2;
      *(float *)((int)puVar7 + 0xbc) = fVar2;
      *(float *)(puVar7 + 0x18) = fVar2;
      *(float *)(puVar7 + 0x17) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar5;
      *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
      *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar2 * fVar2;
        iVar13 = (int)lVar12;
        lVar11 = lVar11 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar9 - 0x88;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar10;
      lVar12 = lVar16;
      do {
        fVar2 = *pfVar14;
        fVar5 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar2;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar12 = 2;
      lVar11 = lVar10;
      do {
        iVar13 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar13 + 0xb8)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar28 + fVar1);
    }
    dVar19 = (double)FastDiffRots(dVar18,dVar22);
    OrganicDeltAngSpeed(dVar22,(double)DAT_008f3ebc,(double)DAT_008f3ec0,dVar21,param_1);
    fVar2 = DAT_008f3ec0;
    fVar1 = DAT_008f3ebc;
    dVar22 = ABS((double)(float)(dVar27 - dVar24));
    *(float *)((int)puVar7 + 0x84) = (float)(dVar27 - dVar24);
    fVar28 = SQRT((float)(dVar26 * dVar26 + (double)(float)(dVar25 * dVar25)));
    dVar27 = ABS((double)fVar28);
    *(float *)(puVar7 + 0x10) = fVar28;
    *(float *)(puVar7 + 0x11) = (float)(dVar27 - dVar22);
    uVar15 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
    pfVar14 = (float *)((uint)(uVar15 << 2) | 0x735900);
    dVar18 = ABS((double)*(float *)(puVar7 + 0x10));
    if ((double)*(float *)(puVar7 + 0x11) - dVar21 < 0.0) {
      dVar18 = dVar22;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar28 = pfVar14[1];
    dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
    if ((double)*(float *)(puVar7 + 0x11) - dVar21 < 0.0) {
      dVar22 = dVar27;
    }
    dVar27 = dVar21;
    if (dVar21 < dVar18) {
      lVar11 = uVar9 - 0x130;
      lVar12 = uVar9 - 0xa8;
      lVar16 = uVar9 - 0x98;
      lVar17 = 2;
      fVar3 = (float)(dVar22 - dVar18) / (float)(dVar22 + dVar18);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)((int)puVar7 + 0x9c) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      *(float *)(puVar7 + 0x13) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar4;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar3;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
        iVar13 = (int)lVar12;
        lVar11 = lVar11 + 8;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar9 - 0xa8;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar10;
      lVar12 = lVar16;
      do {
        fVar3 = *pfVar14;
        fVar4 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      dVar18 = dVar21;
      do {
        iVar13 = (int)lVar10;
        lVar10 = lVar10 + 0x10;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar13 + 0x98)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar27 = (double)((float)(dVar18 + dVar23) * fVar5 + fVar28);
    }
    AccelDelt((float)-dVar27,fVar1,fVar2,(float)dVar21,(float *)(param_1 + 0x44),
                        (int)pfVar14,(float *)(iVar6 + 0x84));
    fVar28 = (float)(dVar19 / (double)DAT_008f3ec8);
    if (1.0 - (float)(dVar19 / (double)DAT_008f3ec8) < 0.0) {
      fVar28 = 1.0;
    }
    if (fVar28 - -1.0 < 0.0) {
      fVar28 = -1.0;
    }
    fVar28 = AccelDelt(DAT_008f3ec4 * fVar28,0.003,DAT_008f3ec0,(float)dVar21,
                                 (float *)(param_1 + 0x40),0x4a7fa4,(float *)(iVar6 + 0x80));
    dVar18 = (double)fVar28;
  }
  return dVar18;
}


// 0x04a8558 (0x298 bytes)
// inlined: FastAtan2 @0x4a86c4
void M908_004a8558(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  Spline *pSVar13;
  longlong lVar12;
  int iVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar15 = 0;
  pSVar8 = Splines[*(int *)(iVar6 + 0x68)];
  pSVar13 = pSVar8;
  if (0 < pSVar8->cnt + -1) {
    do {
      fVar1 = pSVar13->points[0].y - pSVar13->points[1].y;
      fVar2 = pSVar13->points[0].x - pSVar13->points[1].x;
      fVar3 = pSVar13->points[0].z - pSVar13->points[1].z;
      iVar7 = pSVar8->cnt;
      iVar15 = iVar15 + 1;
      pSVar13->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar13 = (Spline *)pSVar13->points;
    } while (iVar15 < iVar7 + -1);
  }
  *(undefined4 *)(iVar6 + 0x60) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 100) = 0;
  fVar2 = pSVar8->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar8->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar8->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar8->points[0].w;
  fVar2 = pSVar8->points[1].x - fVar2;
  fVar3 = pSVar8->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 6) = fVar2;
  *(float *)((int)puVar9 + 0x34) = fVar3;
  *(float *)(puVar9 + 7) = fVar4 - fVar5;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar9 + 6));
  if (*(float *)(puVar9 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x34));
  if (*(float *)(puVar9 + 7) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar18 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x14;
    lVar17 = uVar11 - 0x24;
    lVar20 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar9 + 9) = fVar2;
    *(float *)(puVar9 + 8) = fVar2;
    *(float *)((int)puVar9 + 0x44) = fVar2;
    *(float *)((int)puVar9 + 0x3c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar9 + 8) = *(float *)(puVar9 + 8) * fVar4;
    *(float *)((int)puVar9 + 0x44) = *(float *)((int)puVar9 + 0x44) * fVar2;
    *(float *)(puVar9 + 9) = *(float *)(puVar9 + 9) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x3c) = *(float *)((int)lVar18 + 0x2c) * fVar2 * fVar2;
      iVar15 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar11 - 0x24;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar18;
    lVar17 = lVar12;
    do {
      fVar2 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x3c) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar15 = (int)lVar12;
      iVar7 = (int)lVar18;
      lVar12 = lVar12 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar15 + 0x3c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
              *(float *)(iVar7 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  *(undefined4 *)(iVar6 + 0x74) = 0;
  *(undefined4 *)(iVar6 + 0x70) = 0;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(undefined4 *)(iVar6 + 0x80) = 0;
  return;
}


// 0x04a8808 (0x54c bytes)
// inlined: FastAtan2 @0x4a8bc4
// strings: 0065891c: 'Enemy Fighter (moby908) with no flyPath. UID: %d - RAR\n' | 00658954: 'Enemy Fighter (moby908) with a flyPath that has no points. UID: %d - RAR\n'

/* Moby 908 */

void UpdateMoby_908(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  Spline *pSVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  longlong lVar14;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xb0;
  puVar10 = (ulonglong *)lVar14;
  *puVar10 = uVar12;
  puVar10[0x18] = in_LR;
  puVar10[0x15] = unaff_r31;
  puVar10[0x14] = unaff_r30;
  pvVar7 = moby->pVar;
  uVar20 = ZEXT48(pvVar7);
  iVar15 = MB_damage(lVar13,0x800000,0);
  moby->damage = -1;
  if ((iVar15 != 0) && (moby->state != '\x02')) {
    if ((Level == Oltanis) &&
       (ShipsKilledCounts.Oltanis = ShipsKilledCounts.Oltanis + 1, 2 < ShipsKilledCounts.Oltanis)) {
      MB_UnlockSkillPoint(0x18);
    }
    moby->state = '\x02';
    MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_004a87f0,
               0xffffffffffffffff);
    iVar15 = *(int *)((int)pvVar7 + 0x6c);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (((iVar15 != -1) && (g_SoundChannels[iVar15].pMoby == moby)) &&
       (g_SoundChannels[iVar15].state != '\0')) {
      sound_Kill(iVar15);
    }
    *(undefined4 *)((int)pvVar7 + 0x6c) = 0xffffffff;
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar7 + 0x68) == -1) {
      printf("Enemy Fighter (moby908) with no flyPath. UID: %d - RAR\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    if (Splines[*(int *)((int)pvVar7 + 0x68)]->cnt == 0) {
      printf("Enemy Fighter (moby908) with a flyPath that has no points. UID: %d - RAR\n",
                   moby->uid);
      DeleteMoby(moby);
      return;
    }
    M908_004a8558(lVar13);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    moby->state = '\x01';
    moby->updateDistance = -1;
    *(undefined4 *)((int)pvVar7 + 0x6c) = 0xffffffff;
    moby->drawDistance = 0xff;
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0x3ecc,0x8f0000);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar23 = loadVectorLeftIndexed(8,0x4a87f0);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorAddFloatingPoint
                        (auVar22,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar25,auVar23,auVar24);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c,uVar20);
    *(undefined4 *)((int)pvVar7 + 0x7cU & 0xfffffffc) = uVar9;
  }
  else if (bVar1 < 2) {
    M908_004a7fc0(lVar13);
  }
  else if ((bVar1 < 3) && (iVar15 = FastDecTimerS32(uVar20 + 0x7c), iVar15 != 0)) {
    iVar15 = *(int *)((int)pvVar7 + 0x68);
    auVar23 = ZEXT416(0xffffffff);
    auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = loadVectorLeftIndexed(0x3ecc,0x8f0000);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    pSVar8 = Splines[iVar15];
    moby->collision = moby->pClass->collision;
    auVar23 = loadVectorLeftIndexed(8,0x4a87f0);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = vectorAddFloatingPoint
                        (auVar22,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar22,auVar23,auVar24);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c,uVar20);
    *(undefined4 *)((int)pvVar7 + 0x7cU & 0xfffffffc) = uVar9;
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar7 + 0x60) = 0;
    fVar2 = 0.0;
    *(undefined4 *)((int)pvVar7 + 100) = 0;
    fVar3 = pSVar8->points[0].x;
    (moby->pos).x = fVar3;
    fVar4 = pSVar8->points[0].y;
    (moby->pos).y = fVar4;
    (moby->pos).z = pSVar8->points[0].z;
    (moby->pos).w = pSVar8->points[0].w;
    fVar3 = pSVar8->points[1].x - fVar3;
    fVar4 = pSVar8->points[1].y - fVar4;
    fVar5 = ABS(fVar3);
    fVar6 = ABS(fVar4);
    *(float *)(puVar10 + 0xe) = fVar3;
    *(float *)((int)puVar10 + 0x74) = fVar4;
    *(float *)(puVar10 + 0xf) = fVar5 - fVar6;
    uVar20 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar10 + 0xe));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar6 = ABS(*(float *)((int)puVar10 + 0x74));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar18 = uVar12 - 0xa0;
      lVar17 = uVar12 - 0x34;
      lVar16 = uVar12 - 0x24;
      lVar21 = 2;
      fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar10 + 0x11) = fVar3;
      *(float *)(puVar10 + 0x10) = fVar3;
      *(float *)((int)puVar10 + 0x84) = fVar3;
      *(float *)((int)puVar10 + 0x7c) = fVar3;
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar6;
      *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar3;
      *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar3 * fVar6;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar18 = lVar18 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x34;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar3 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar15 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar5;
    }
    (moby->rotation).z = fVar2;
    *(undefined4 *)((int)pvVar7 + 0x78) = 0;
    *(undefined4 *)((int)pvVar7 + 0x74) = 0;
    *(undefined4 *)((int)pvVar7 + 0x70) = 0;
    *(undefined4 *)((int)pvVar7 + 0x88) = 0;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0;
    *(undefined4 *)((int)pvVar7 + 0x80) = 0;
  }
  M908_004a79c0(lVar13);
  if (((moby->state != '\0') && (moby->state != '\x02')) &&
     (iVar15 = IsMobyPlayingSound(moby,*(int *)((int)pvVar7 + 0x6c)), iVar15 == 0)) {
    iVar15 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar7 + 0x6c) = iVar15;
  }
  return;
}


