// game/update/moby1401.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x26bbd0-0x26d3cc
#include <stdio.h>
#include "game/update/moby1401.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby934.h"

// 0x026bbd0 (0x14 bytes)
void M1401_0026bbd0(void)

{
  DAT_0079cc54 = 0x10000;
  return;
}


// 0x026bc10 (0x2fc bytes)
void M1401_0026bc10(void)

{
  float fVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<48> local_80;
  
  iVar5 = 0;
  iVar7 = 0;
  uVar9 = 0x3fc99999a0000000;
  uVar14 = 0x3ff0000000000000;
  uVar11 = 0x3fecccccc0000000;
  uVar12 = 0x40f86a0000000000;
  auVar17 = loadVectorLeftIndexed(0x10,0x26bbe8);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    MB_randInt(0x10);
    MB_randInt(2);
    uVar3 = SpawnPart_23(uVar9,uVar14,uVar11,uVar12,local_80);
    iVar4 = (int)uVar3;
    if (iVar4 != 0) {
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar15);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar16 = vectorSplatHalfWord(auVar15,1);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xff;
      uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar3);
      *(undefined2 *)(iVar4 + 10) = uVar2;
      *(undefined4 *)(iVar4 + 0x24) = 2;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      uVar6 = storeVectorElementByteIndexed
                        (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                         auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                         auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                         auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0x2b,
                         uVar3);
      *(undefined1 *)(iVar4 + 0x2b) = uVar6;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
  fVar1 = 80000.0;
  uVar9 = 0x3fa99999a0000000;
  dVar13 = 20000.0;
  do {
    dVar10 = (double)fVar1;
    iVar5 = SpawnPart_23(uVar9,uVar14,uVar14,dVar10,local_80);
    if (iVar5 != 0) {
      *(short *)(iVar5 + 10) = (short)uVar8;
      uVar6 = MB_randInt(0xff);
      *(undefined1 *)(iVar5 + 8) = uVar6;
      *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
      *(undefined4 *)(iVar5 + 0x24) = 2;
      *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
    }
    iVar7 = iVar7 + 1;
    fVar1 = (float)(dVar10 - dVar13);
    uVar8 = uVar8 << 1;
  } while (iVar7 < 3);
  return;
}


// 0x026bf18 (0x350 bytes)
// inlined: FastAtan2 @0x26c110
undefined8 M1401_0026bf18(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *unused;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  undefined8 in_r7;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
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
  ulonglong in_f31;
  double dVar26;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar12 = uVar17 - 0xf0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar17;
  puVar8[0x20] = in_LR;
  puVar8[0x1d] = in_f31;
  puVar8[0x1c] = unaff_r31;
  puVar8[0x1a] = unaff_r29;
  puVar8[0x1b] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  cVar1 = *(char *)(param_1 + 0x20);
  fVar2 = g_FrameTime * DAT_0079cc78;
  puVar8[0x19] = unaff_r28;
  puVar8[0x18] = unaff_r27;
  puVar8[0x17] = unaff_r26;
  if (cVar1 == '\x05') {
    pSVar7 = Splines[*(int *)(iVar6 + 0xdc)];
  }
  else {
    pSVar7 = Splines[*(int *)(iVar6 + 0xd8)];
  }
  uVar11 = MB_PathMoveDist
                     ((double)fVar2,pSVar7,uVar17 - 0x80,iVar6 + 0xd0,iVar6 + 0xd4,in_r7,0);
  unused = &DAT_00270000;
  dVar26 = 0.0;
  AccelDelt(*(float *)(puVar8 + 0xe),DAT_0079cc7c,DAT_0079cc80,0.0,
                      (float *)(param_1 + 0x10),0x270000,(float *)(iVar6 + 0xe4));
  AccelDelt(*(float *)((int)puVar8 + 0x74),DAT_0079cc7c,DAT_0079cc80,(float)dVar26,
                      (float *)(param_1 + 0x14),(int)unused,(float *)(iVar6 + 0xe8));
  AccelDelt(*(float *)(puVar8 + 0xf),DAT_0079cc7c,DAT_0079cc80,(float)dVar26,
                      (float *)(param_1 + 0x18),(int)unused,(float *)(iVar6 + 0xec));
  fVar2 = *(float *)(puVar8 + 0xe) - *(float *)(param_1 + 0x10);
  dVar22 = (double)DAT_0079cc7c;
  fVar5 = *(float *)((int)puVar8 + 0x74) - *(float *)(param_1 + 0x14);
  dVar21 = (double)DAT_0079cc80;
  dVar23 = ABS((double)fVar2);
  if ((0.009999999776482582 < dVar23) &&
     (dVar25 = ABS((double)fVar5), 0.009999999776482582 < dVar25)) {
    *(float *)(puVar8 + 0x10) = fVar2;
    *(float *)((int)puVar8 + 0x84) = fVar5;
    *(float *)(puVar8 + 0x11) = (float)(dVar23 - dVar25);
    uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    uVar13 = uVar15 << 2 | 0x735900;
    dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
    if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
      dVar24 = dVar25;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar2 = *(float *)((int)uVar13 + 4);
    dVar25 = ABS((double)*(float *)((int)puVar8 + 0x84));
    if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
      dVar25 = dVar23;
    }
    dVar23 = dVar26;
    if (dVar26 < dVar24) {
      lVar18 = uVar17 - 0xe0;
      lVar16 = uVar17 - 100;
      lVar14 = uVar17 - 0x54;
      lVar20 = 2;
      fVar3 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x13) = fVar3;
      *(float *)(puVar8 + 0x12) = fVar3;
      *(float *)((int)puVar8 + 0x94) = fVar3;
      *(float *)((int)puVar8 + 0x8c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar3 * fVar3;
        iVar9 = (int)lVar16;
        lVar18 = lVar18 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar13 = uVar17 - 100;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = 4;
      uVar17 = uVar13;
      lVar14 = lVar12;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x8c) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)uVar17 + 4) = *(float *)((int)uVar17 + 4) * fVar4;
        uVar17 = uVar17 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)uVar13;
        lVar12 = lVar12 + 0x10;
        uVar13 = uVar13 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar9 + 0x8c)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed(dVar23,dVar22,dVar21,dVar26,param_1,uVar13,iVar6 + 0xf0);
  }
  return uVar11;
}


// 0x026c270 (0x13c bytes)
void M1401_0026c270(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar6 = *(int *)(iVar5 + 0xf4);
  if (iVar6 != 0) {
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar3 = *(float *)(param_1 + 200);
    fVar4 = 0.0;
    fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar9 = DAT_0079cc84 / fVar11;
    fVar7 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar7 = fVar2 * fVar9;
    }
    fVar8 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    fVar10 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    *(float *)(iVar6 + 0x10) = *(float *)(param_1 + 0x10) + fVar7;
    *(float *)(iVar6 + 0x14) = *(float *)(param_1 + 0x14) + fVar8;
    *(float *)(iVar6 + 0x18) = *(float *)(param_1 + 0x18) + fVar10;
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    fVar1 = *(float *)(param_1 + 0xe4);
    fVar2 = *(float *)(param_1 + 0xe0);
    fVar3 = *(float *)(param_1 + 0xe8);
    iVar5 = *(int *)(iVar5 + 0xf4);
    fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar9 = DAT_0079cc88 / fVar11;
    fVar7 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar7 = fVar3 * fVar9;
    }
    fVar8 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    if (0.0 - fVar11 < 0.0) {
      fVar4 = fVar2 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar7 = fVar3 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar4 = fVar2 * fVar9;
    }
    *(float *)(iVar5 + 0x18) = *(float *)(iVar5 + 0x18) + fVar7;
    *(float *)(iVar5 + 0x14) = *(float *)(iVar5 + 0x14) + fVar8;
    *(float *)(iVar5 + 0x10) = *(float *)(iVar5 + 0x10) + fVar4;
  }
  return;
}


// 0x026c3b8 (0x314 bytes)
// inlined: FastAtan2 @0x26c524
void M1401_0026c3b8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  longlong lVar12;
  Spline *pSVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar13 = 0;
  pSVar7 = Splines[*(int *)(iVar6 + 0xd8)];
  pSVar15 = pSVar7;
  if (0 < pSVar7->cnt + -1) {
    do {
      fVar1 = pSVar15->points[0].y - pSVar15->points[1].y;
      fVar2 = pSVar15->points[0].x - pSVar15->points[1].x;
      fVar3 = pSVar15->points[0].z - pSVar15->points[1].z;
      iVar13 = iVar13 + 1;
      pSVar15->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar15 = (Spline *)pSVar15->points;
    } while (iVar13 < pSVar7->cnt + -1);
  }
  *(undefined4 *)(iVar6 + 0xd0) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 0xd4) = 0;
  fVar2 = pSVar7->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar7->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar7->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar7->points[0].w;
  fVar2 = pSVar7->points[1].x - fVar2;
  fVar3 = pSVar7->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar8 + 6) = fVar2;
  *(float *)((int)puVar8 + 0x34) = fVar3;
  *(float *)(puVar8 + 7) = fVar4 - fVar5;
  uVar16 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar9 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar18 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x14;
    lVar17 = uVar11 - 0x24;
    lVar20 = 2;
    fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar8 + 9) = fVar2;
    *(float *)(puVar8 + 8) = fVar2;
    *(float *)((int)puVar8 + 0x44) = fVar2;
    *(float *)((int)puVar8 + 0x3c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar4;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar2;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x3c) = *(float *)((int)lVar18 + 0x2c) * fVar2 * fVar2;
      iVar13 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
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
      iVar13 = (int)lVar12;
      iVar10 = (int)lVar18;
      lVar12 = lVar12 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar13 + 0x3c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xf0) = 0;
  if (*(int *)(iVar6 + 0xfc) != 1) {
    iVar13 = 0;
    pSVar7 = Splines[*(int *)(iVar6 + 0xdc)];
    pSVar15 = pSVar7;
    if (0 < pSVar7->cnt + -1) {
      do {
        fVar1 = pSVar15->points[0].y - pSVar15->points[1].y;
        fVar2 = pSVar15->points[0].x - pSVar15->points[1].x;
        fVar3 = pSVar15->points[0].z - pSVar15->points[1].z;
        iVar13 = iVar13 + 1;
        pSVar15->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        pSVar15 = (Spline *)pSVar15->points;
      } while (iVar13 < pSVar7->cnt + -1);
    }
  }
  return;
}


// 0x026c6f0 (0xcdc bytes)
// inlined: FastAtan2 @0x26c950, FastAtan2 @0x26cd38, FastAtan2 @0x26d1ec
// strings: 00655628: 'MineBot (moby1401) with no flyPath. UID: %d - RAR\n' | 00655660: 'MineBot (moby1401) with a flyPath that has no points. UID: %d - RAR\n' | 006556a8: 'MineBot (moby1401) with no exitPath. UID: %d - RAR\n' | 006556e0: 'MineBot (moby1401) with a exitPath that has no points. UID: %d - RAR\n' | 00655728: 'MineBot (moby1401) with no activation cuboid. UID: %d - RAR\n'

/* Moby 1401 */

void UpdateMoby_1401_MineBot(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  u16 *puVar9;
  void *pvVar10;
  f32 fVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar19;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  Vec4 *unused;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  float fVar30;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x150;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar15;
  puVar13[0x2c] = in_LR;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x26] = unaff_r31;
  bVar1 = moby->field43_0x70;
  puVar13[0x23] = unaff_r28;
  pvVar8 = moby->pVar;
  puVar13[0x25] = unaff_r30;
  puVar13[0x24] = unaff_r29;
  puVar13[0x22] = unaff_r27;
  puVar13[0x21] = unaff_r26;
  if (((bVar1 & 2) != 0) && (moby->updateId == moby->animationId && moby->updateId == '\x01')) {
    puVar13[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(lVar16,4,0,*(undefined4 *)((int)puVar13 + 0xfc));
  }
  if (((DAT_00969f1c == moby) && (moby->animationId != '\x01')) && (moby->updateId != '\x01')) {
    puVar13[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(lVar16,1,0,*(undefined4 *)((int)puVar13 + 0xfc));
  }
  iVar19 = MB_damage(lVar16,0x210000,0);
  if ((iVar19 == 0) && (*(int *)((int)pvVar8 + 0xf4) != 0)) {
    iVar19 = MB_damage(*(int *)((int)pvVar8 + 0xf4),0x210000,0);
  }
  if ((iVar19 != 0) && (moby->state != '\x06')) {
    *(undefined4 *)((int)pvVar8 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar8 + 0x84) = 0x3a03126f;
    fVar30 = g_FrameTime;
    *(float *)((int)pvVar8 + 0x88) = g_FrameTime * 24.0;
    *(undefined1 *)((int)pvVar8 + 0xad) = 0;
    *(undefined4 *)((int)pvVar8 + 0x94) = 1;
    pfVar24 = (float *)&g_atanQuadrantTable;
    *(float *)((int)pvVar8 + 0x8c) = fVar30 * 12.0;
    fVar30 = (moby->pos).x - g_heroPosition.x;
    fVar5 = (moby->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar30);
    fVar6 = ABS(fVar5);
    *(float *)(puVar13 + 0x11) = fVar30;
    *(float *)((int)puVar13 + 0x8c) = fVar5;
    *(float *)(puVar13 + 0x12) = fVar3 - fVar6;
    dVar27 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar30 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar30 = fVar6;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar6 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    if (0.0 < fVar30) {
      lVar17 = uVar15 - 0x140;
      lVar23 = uVar15 - 0x7c;
      lVar25 = uVar15 - 0x6c;
      lVar26 = 2;
      fVar30 = (fVar6 - fVar30) / (fVar6 + fVar30);
      fVar6 = fVar30 * fVar30;
      *(float *)(puVar13 + 0x1c) = fVar30;
      *(float *)(puVar13 + 0x1b) = fVar30;
      *(float *)((int)puVar13 + 0xdc) = fVar30;
      *(float *)((int)puVar13 + 0xd4) = fVar30;
      fVar30 = fVar6 * fVar6;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar6;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar30;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar30 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar30 * fVar30;
        iVar19 = (int)lVar23;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar30 * fVar30;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar15 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        fVar30 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar30;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar14 = (int)lVar25;
        lVar17 = lVar17 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar19 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
    }
    MB_StartKick(dVar27,lVar16,(int)pvVar8 + 0x70,pfVar24,1,1,0);
    *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
    MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
    moby->state = '\x06';
  }
  uVar2 = moby->state;
  moby->damage = -1;
  if (uVar2 == '\x06') {
    uVar21 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar21 & 3) != 0) {
      MB_SpawnExplosionSparks
                (0x3ff0000000000000,0x402a000000000000,lVar16,lVar16 + 0x10,&DAT_0026c6cc,
                 0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    fVar11 = (moby->pos).z;
    uVar21 = (int)fVar11 >> 0x1f;
    if ((int)((uVar21 >> 1 ^ (uint)fVar11) - uVar21) < 0x40a00000) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar2 == '\x05') {
    iVar19 = M1401_0026bf18(lVar16);
    if (iVar19 == 0) {
      M1401_0026bc10(lVar16);
    }
    else {
      MVar7 = moby->modeBits;
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pvVar8 + 0xd0) = 0;
      iVar19 = *(int *)((int)pvVar8 + 0xd8);
      moby->modeBits = MVar7 | (UNK_40|DISABLED);
      fVar30 = 0.0;
      *(undefined4 *)((int)pvVar8 + 0xf0) = 0;
      *(undefined4 *)((int)pvVar8 + 0xd4) = 0;
      *(undefined4 *)((int)pvVar8 + 0xec) = 0;
      *(undefined4 *)((int)pvVar8 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar8 + 0xe4) = 0;
      pSVar12 = Splines[iVar19];
      fVar5 = pSVar12->points[0].x;
      (moby->pos).x = fVar5;
      fVar6 = pSVar12->points[0].y;
      (moby->pos).y = fVar6;
      (moby->pos).z = pSVar12->points[0].z;
      (moby->pos).w = pSVar12->points[0].w;
      fVar5 = pSVar12->points[1].x - fVar5;
      fVar6 = pSVar12->points[1].y - fVar6;
      fVar3 = ABS(fVar5);
      fVar4 = ABS(fVar6);
      *(float *)(puVar13 + 0xe) = fVar5;
      *(float *)((int)puVar13 + 0x74) = fVar6;
      *(float *)(puVar13 + 0xf) = fVar3 - fVar4;
      uVar22 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar13 + 0xe));
      if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = ABS(*(float *)((int)puVar13 + 0x74));
      if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar5) {
        lVar17 = uVar15 - 0x140;
        lVar23 = uVar15 - 0xbc;
        lVar25 = uVar15 - 0xac;
        lVar26 = 2;
        fVar5 = (fVar4 - fVar5) / (fVar4 + fVar5);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x14) = fVar5;
        *(float *)(puVar13 + 0x13) = fVar5;
        *(float *)((int)puVar13 + 0x9c) = fVar5;
        *(float *)((int)puVar13 + 0x94) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
        *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar5;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar25 = uVar15 - 0xbc;
        pfVar24 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar25;
        do {
          fVar5 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar14 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar30 = fVar30 + *(float *)(iVar19 + 0x94) + *(float *)(iVar14 + 4) +
                   *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar30 = (fVar30 + 0.7853982) * fVar6 + fVar3;
      }
      (moby->rotation).z = fVar30;
    }
  }
  else if (uVar2 == '\x04') {
    if (*(int *)((int)pvVar8 + 0xfc) == 0) {
      M1401_0026c270(lVar16);
    }
    iVar19 = M1401_0026bf18(lVar16);
    if (iVar19 != 0) {
      moby->state = '\x03';
      MB_SetAnimation(lVar16,3,0,5);
    }
    M1401_0026bc10(lVar16);
  }
  else if (uVar2 == '\x03') {
    pvVar10 = moby->pVar;
    pSVar12 = Splines[*(int *)((int)pvVar10 + 0xd8)];
    if (*(int *)((int)pvVar10 + 0xfc) == 0) {
      M1401_0026c270(lVar16);
    }
    dVar29 = 0.0;
    unused = pSVar12->points + pSVar12->cnt + -1;
    dVar28 = (double)unused->y;
    dVar27 = (double)unused->z;
    AccelDelt(unused->x,DAT_0079cc7c,DAT_0079cc80,0.0,&(moby->pos).x,(int)unused,
                        (float *)((int)pvVar10 + 0xe4));
    AccelDelt((float)dVar28,DAT_0079cc7c,DAT_0079cc80,(float)dVar29,&(moby->pos).y,
                        (int)unused,(float *)((int)pvVar10 + 0xe8));
    fVar30 = AccelDelt((float)dVar27,DAT_0079cc7c,DAT_0079cc80,(float)dVar29,
                                 &(moby->pos).z,(int)unused,(float *)((int)pvVar10 + 0xec));
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
      if (*(int *)((int)pvVar10 + 0xfc) == 1) {
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar10 + 0xf0) = 0;
        MB_SetAnimationNoBlend(lVar16,4,0);
      }
      else {
        if (*(int *)((int)pvVar10 + 0xf4) != 0) {
          FUN_004bff20((double)fVar30);
          *(undefined4 *)((int)pvVar10 + 0xf4) = 0;
        }
        moby->state = '\x05';
        MB_SetAnimation(lVar16,0,0,0x14);
        *(undefined4 *)((int)pvVar10 + 0xd0) = 0;
        *(undefined4 *)((int)pvVar10 + 0xd4) = 0;
      }
    }
    M1401_0026bc10(lVar16);
  }
  else if (uVar2 == '\x02') {
    iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xe0));
    if (iVar19 != 0) {
      if (*(int *)((int)pvVar8 + 0xfc) == 1) {
        MB_SetAnimationNoBlend(lVar16,0,0);
      }
      else {
        uVar20 = FUN_004bfdf8(lVar16,lVar16 + 0x10);
        *(undefined4 *)((int)pvVar8 + 0xf4) = uVar20;
        M1401_0026c270(lVar16);
        MB_SetAnimationNoBlend(lVar16,2,0);
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar9 = moby->pClass->collision;
      moby->state = '\x04';
      moby->collision = puVar9;
    }
  }
  else if (uVar2 == '\x01') {
    fVar30 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar30);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar13 + 0x7c) = fVar30;
    *(float *)(puVar13 + 0x10) = fVar5;
    *(float *)((int)puVar13 + 0x84) = fVar3 - fVar6;
    dVar27 = 0.0;
    uVar22 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar30 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar30 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar30) {
      lVar17 = uVar15 - 0x140;
      lVar25 = uVar15 - 0x8c;
      lVar23 = uVar15 - 0x9c;
      lVar26 = 2;
      fVar30 = (fVar4 - fVar30) / (fVar4 + fVar30);
      fVar3 = fVar30 * fVar30;
      *(float *)(puVar13 + 0x18) = fVar30;
      *(float *)(puVar13 + 0x17) = fVar30;
      *(float *)((int)puVar13 + 0xbc) = fVar30;
      *(float *)((int)puVar13 + 0xb4) = fVar30;
      fVar30 = fVar3 * fVar3;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar3;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar30;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar30 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar30 * fVar30;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar30 * fVar30;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar15 - 0x9c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        fVar30 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar30;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar14 = (int)lVar25;
        lVar18 = lVar18 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar19 + 0xb4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar27,0x3f747ae140000000,0x3fc99999a0000000,lVar16,&DAT_0026c6cc,(int)pvVar8 + 0xf0)
    ;
    M1401_0026bc10(lVar16);
  }
  else if (uVar2 == '\0') {
    if (*(int *)((int)pvVar8 + 0xfc) == 2) {
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar8 + 0xf0) = 0;
      MB_SetAnimationNoBlend(lVar16,4,0);
    }
    else {
      if (*(int *)((int)pvVar8 + 0xd8) == -1) {
        printf("MineBot (moby1401) with no flyPath. UID: %d - RAR\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar8 + 0xd8)]->cnt == 0) {
        printf("MineBot (moby1401) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar8 + 0xfc) != 1) {
        if (*(int *)((int)pvVar8 + 0xdc) == -1) {
          printf("MineBot (moby1401) with no exitPath. UID: %d - RAR\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar8 + 0xdc)]->cnt == 0) {
          printf("MineBot (moby1401) with a exitPath that has no points. UID: %d - RAR\n",
                       moby->uid);
          DeleteMoby(moby);
          return;
        }
      }
      if (*(int *)((int)pvVar8 + 0xe0) == -1) {
        printf("MineBot (moby1401) with no activation cuboid. UID: %d - RAR\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      M1401_0026c3b8(lVar16);
      moby->state = '\x02';
      moby->updateDistance = -0x80;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
  }
  MB_ColorDyingMoby(lVar16,(int)pvVar8 + 0x60);
  return;
}


