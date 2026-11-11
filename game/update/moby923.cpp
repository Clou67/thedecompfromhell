// game/update/moby923.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x4b62f8-0x4b7b74
#include <stdio.h>
#include "game/update/moby923.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby934.h"

// 0x04b62f8 (0xc bytes)
void FUN_004b62f8(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}


// 0x04b6304 (0x78 bytes)
void FUN_004b6304(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  moby = g_MobyInstance + *(int *)((int)param_1->pVar + 4);
  if ((moby != (MobyInstance *)0x0) && (moby->state < 0x80)) {
    DeleteMoby(moby);
  }
  if (param_1->state < 0x80) {
    DeleteMoby(param_1);
  }
  return;
}


// 0x04b63a8 (0x2fc bytes)
void M923_004b63a8(void)

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
  auVar17 = loadVectorLeftIndexed(0x10,0x4b6380);
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


// 0x04b66b8 (0x384 bytes)
// inlined: FastAtan2 @0x4b68ec
undefined8 M923_004b66b8(int param_1)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar17;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 in_r7;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xe0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = in_f31;
  puVar8[0x19] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar8[0x1a] = unaff_r31;
  fVar4 = DAT_008f45e8;
  fVar5 = g_FrameTime;
  cVar2 = *(char *)(param_1 + 0x20);
  bVar1 = Level == Kalebo;
  fVar3 = *(float *)(iVar6 + 0xf8);
  puVar8[0x18] = unaff_r29;
  puVar8[0x17] = unaff_r28;
  puVar8[0x16] = unaff_r27;
  if (bVar1) {
    fVar4 = 20.0;
  }
  dVar27 = 0.0;
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar5;
  }
  fVar9 = fVar5;
  if (0.0 - fVar3 < 0.0) {
    fVar9 = fVar3;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar9 = fVar3;
  }
  if (cVar2 == '\x05') {
    pSVar7 = Splines[*(int *)(iVar6 + 0xdc)];
  }
  else {
    pSVar7 = Splines[*(int *)(iVar6 + 0xd8)];
  }
  lVar14 = uVar11 - 0x70;
  uVar12 = MB_PathMoveDist
                     ((double)(fVar9 * fVar4),pSVar7,lVar14,iVar6 + 0xd0,iVar6 + 0xd4,in_r7,0);
  iVar17 = (int)lVar14;
  AccelDelt(*(float *)(puVar8 + 0xe),DAT_008f45ec,DAT_008f45f0,(float)dVar27,
                      (float *)(param_1 + 0x10),iVar17,(float *)(iVar6 + 0xe4));
  AccelDelt(*(float *)((int)puVar8 + 0x74),DAT_008f45ec,DAT_008f45f0,(float)dVar27,
                      (float *)(param_1 + 0x14),iVar17,(float *)(iVar6 + 0xe8));
  AccelDelt(*(float *)(puVar8 + 0xf),DAT_008f45ec,DAT_008f45f0,(float)dVar27,
                      (float *)(param_1 + 0x18),iVar17,(float *)(iVar6 + 0xec));
  fVar3 = *(float *)(puVar8 + 0xe) - *(float *)(param_1 + 0x10);
  fVar4 = *(float *)((int)puVar8 + 0x74) - *(float *)(param_1 + 0x14);
  dVar25 = (double)DAT_008f45ec;
  dVar26 = (double)DAT_008f45f0;
  dVar22 = ABS((double)fVar3);
  if ((0.009999999776482582 < dVar22) &&
     (dVar23 = ABS((double)fVar4), 0.009999999776482582 < dVar23)) {
    *(float *)(puVar8 + 0x10) = fVar3;
    *(float *)((int)puVar8 + 0x84) = fVar4;
    *(float *)(puVar8 + 0x11) = (float)(dVar22 - dVar23);
    uVar20 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    uVar15 = uVar20 << 2 | 0x735900;
    dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
    if ((double)*(float *)(puVar8 + 0x11) - dVar27 < 0.0) {
      dVar24 = dVar23;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
    if ((double)*(float *)(puVar8 + 0x11) - dVar27 < 0.0) {
      dVar23 = dVar22;
    }
    fVar4 = *(float *)((int)uVar15 + 4);
    dVar22 = dVar27;
    if (dVar27 < dVar24) {
      lVar14 = uVar11 - 0xd0;
      lVar16 = uVar11 - 0x54;
      lVar19 = uVar11 - 0x44;
      lVar21 = 2;
      fVar5 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
      fVar9 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x13) = fVar5;
      *(float *)(puVar8 + 0x12) = fVar5;
      *(float *)((int)puVar8 + 0x94) = fVar5;
      *(float *)((int)puVar8 + 0x8c) = fVar5;
      fVar5 = fVar9 * fVar9;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar9;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar5;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar5 * fVar9;
      do {
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x7c) * fVar5 * fVar5;
        iVar17 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar19 = uVar11 - 0x54;
      uVar15 = ZEXT48(&DAT_007358e0);
      lVar21 = 4;
      lVar14 = lVar13;
      lVar16 = lVar19;
      do {
        pfVar18 = (float *)uVar15;
        fVar5 = pfVar18[1];
        uVar15 = uVar15 + 8;
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x8c) * *pfVar18;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar14 = 2;
      do {
        iVar17 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar17 + 0x8c)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar4);
    }
    OrganicDeltAngSpeed(dVar22,dVar25,dVar26,dVar27,param_1,uVar15,iVar6 + 0xf0);
  }
  return uVar12;
}


// 0x04b6a40 (0x13c bytes)
void M923_004b6a40(int param_1)

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
    fVar9 = DAT_008f45f4 / fVar11;
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
    fVar9 = DAT_008f45f8 / fVar11;
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


// 0x04b6b88 (0x314 bytes)
// inlined: FastAtan2 @0x4b6cf4
void M923_004b6b88(int param_1)

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


// 0x04b6ec0 (0xcb4 bytes)
// inlined: FastAtan2 @0x4b70fc, FastAtan2 @0x4b74e0, FastAtan2 @0x4b7994
// strings: 00658b38: 'MineBot (moby923) with no flyPath. UID: %d - RAR\n' | 00658b70: 'MineBot (moby923) with a flyPath that has no points. UID: %d - RAR\n' | 00658bb8: 'MineBot (moby923) with no exitPath. UID: %d - RAR\n' | 00658bf0: 'MineBot (moby923) with a exitPath that has no points. UID: %d - RAR\n' | 00658c38: 'MineBot (moby923) with no activation cuboid. UID: %d - RAR\n'

/* Moby 923 */

void UpdateMoby_923(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  u16 *puVar8;
  void *pvVar9;
  f32 fVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar19;
  u8 uVar22;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar23;
  Vec4 *unused;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  float fVar31;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x150;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar14;
  puVar12[0x2c] = in_LR;
  puVar12[0x27] = in_f29;
  puVar12[0x28] = in_f30;
  puVar12[0x29] = in_f31;
  puVar12[0x26] = unaff_r31;
  bVar1 = moby->field43_0x70;
  puVar12[0x23] = unaff_r28;
  pvVar7 = moby->pVar;
  puVar12[0x25] = unaff_r30;
  puVar12[0x24] = unaff_r29;
  puVar12[0x22] = unaff_r27;
  puVar12[0x21] = unaff_r26;
  if (((bVar1 & 2) != 0) && (moby->updateId == moby->animationId && moby->updateId == '\x01')) {
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(lVar15,4,0,*(undefined4 *)((int)puVar12 + 0xfc));
  }
  if (((DAT_00969f1c == moby) && (moby->animationId != '\x01')) && (moby->updateId != '\x01')) {
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(lVar15,1,0,*(undefined4 *)((int)puVar12 + 0xfc));
  }
  iVar19 = MB_damage(lVar15,0x210000,0);
  uVar22 = moby->state;
  if ((iVar19 != 0) && (uVar22 != '\x06')) {
    *(undefined4 *)((int)pvVar7 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
    fVar31 = g_FrameTime;
    *(float *)((int)pvVar7 + 0x88) = g_FrameTime * 24.0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 1;
    *(float *)((int)pvVar7 + 0x8c) = fVar31 * 12.0;
    fVar31 = (moby->pos).x - g_heroPosition.x;
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar31);
    fVar5 = ABS(fVar2);
    *(float *)(puVar12 + 0x11) = fVar31;
    *(float *)((int)puVar12 + 0x8c) = fVar2;
    *(float *)(puVar12 + 0x12) = fVar3 - fVar5;
    dVar28 = 0.0;
    uVar24 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
    uVar16 = uVar24 << 2;
    fVar31 = ABS(*(float *)(puVar12 + 0x11));
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar31 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)uVar16);
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar12 + 0x8c));
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar31) {
      lVar17 = uVar14 - 0x140;
      lVar25 = uVar14 - 0x6c;
      lVar23 = uVar14 - 0x7c;
      lVar27 = 2;
      fVar31 = (fVar4 - fVar31) / (fVar4 + fVar31);
      fVar3 = fVar31 * fVar31;
      *(float *)(puVar12 + 0x1c) = fVar31;
      *(float *)(puVar12 + 0x1b) = fVar31;
      *(float *)((int)puVar12 + 0xdc) = fVar31;
      *(float *)((int)puVar12 + 0xd4) = fVar31;
      fVar31 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar3;
      *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar31;
      *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar31 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar31 * fVar31;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar31 * fVar31;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar14 - 0x7c;
      uVar16 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        pfVar26 = (float *)uVar16;
        fVar31 = pfVar26[1];
        uVar16 = uVar16 + 8;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * *pfVar26;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar31;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xd4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
    }
    MB_StartKick(dVar28,lVar15,(int)pvVar7 + 0x70,uVar16,1,1,0);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
    MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
    uVar22 = '\x06';
    moby->state = '\x06';
  }
  moby->damage = -1;
  if (uVar22 == '\x06') {
    uVar21 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar21 & 3) != 0) {
      MB_SpawnExplosionSparks
                (0x3ff0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_004b6e9c,
                 0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    fVar10 = (moby->pos).z;
    uVar21 = (int)fVar10 >> 0x1f;
    if ((int)((uVar21 >> 1 ^ (uint)fVar10) - uVar21) < 0x40a00000) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar22 == '\x05') {
    iVar19 = M923_004b66b8(lVar15);
    if (iVar19 == 0) {
      M923_004b63a8(lVar15);
    }
    else {
      MVar6 = moby->modeBits;
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pvVar7 + 0xd0) = 0;
      iVar19 = *(int *)((int)pvVar7 + 0xd8);
      moby->modeBits = MVar6 | (UNK_40|DISABLED);
      fVar31 = 0.0;
      *(undefined4 *)((int)pvVar7 + 0xf0) = 0;
      *(undefined4 *)((int)pvVar7 + 0xd4) = 0;
      *(undefined4 *)((int)pvVar7 + 0xec) = 0;
      *(undefined4 *)((int)pvVar7 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar7 + 0xe4) = 0;
      pSVar11 = Splines[iVar19];
      fVar2 = pSVar11->points[0].x;
      (moby->pos).x = fVar2;
      fVar5 = pSVar11->points[0].y;
      (moby->pos).y = fVar5;
      (moby->pos).z = pSVar11->points[0].z;
      (moby->pos).w = pSVar11->points[0].w;
      fVar2 = pSVar11->points[1].x - fVar2;
      fVar5 = pSVar11->points[1].y - fVar5;
      fVar3 = ABS(fVar2);
      fVar4 = ABS(fVar5);
      *(float *)(puVar12 + 0xe) = fVar2;
      *(float *)((int)puVar12 + 0x74) = fVar5;
      *(float *)(puVar12 + 0xf) = fVar3 - fVar4;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar12 + 0xe));
      if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = ABS(*(float *)((int)puVar12 + 0x74));
      if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar17 = uVar14 - 0x140;
        lVar23 = uVar14 - 0xbc;
        lVar25 = uVar14 - 0xac;
        lVar27 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar12 + 0x14) = fVar2;
        *(float *)(puVar12 + 0x13) = fVar2;
        *(float *)((int)puVar12 + 0x9c) = fVar2;
        *(float *)((int)puVar12 + 0x94) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar4;
        *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
        *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar14 - 0xbc;
        pfVar26 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar25;
        do {
          fVar2 = *pfVar26;
          fVar4 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar31 = fVar31 + *(float *)(iVar19 + 0x94) + *(float *)(iVar13 + 4) +
                   *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar31 = (fVar31 + 0.7853982) * fVar5 + fVar3;
      }
      (moby->rotation).z = fVar31;
    }
  }
  else if (uVar22 == '\x04') {
    if (*(int *)((int)pvVar7 + 0xfc) == 0) {
      M923_004b6a40(lVar15);
    }
    iVar19 = M923_004b66b8(lVar15);
    if (iVar19 != 0) {
      moby->state = '\x03';
      MB_SetAnimation(lVar15,3,0,5);
    }
    M923_004b63a8(lVar15);
  }
  else if (uVar22 == '\x03') {
    pvVar9 = moby->pVar;
    pSVar11 = Splines[*(int *)((int)pvVar9 + 0xd8)];
    if (*(int *)((int)pvVar9 + 0xfc) == 0) {
      M923_004b6a40(lVar15);
    }
    dVar30 = 0.0;
    unused = pSVar11->points + pSVar11->cnt + -1;
    dVar29 = (double)unused->y;
    dVar28 = (double)unused->z;
    AccelDelt(unused->x,DAT_008f45ec,DAT_008f45f0,0.0,&(moby->pos).x,(int)unused,
                        (float *)((int)pvVar9 + 0xe4));
    AccelDelt((float)dVar29,DAT_008f45ec,DAT_008f45f0,(float)dVar30,&(moby->pos).y,
                        (int)unused,(float *)((int)pvVar9 + 0xe8));
    fVar31 = AccelDelt((float)dVar28,DAT_008f45ec,DAT_008f45f0,(float)dVar30,
                                 &(moby->pos).z,(int)unused,(float *)((int)pvVar9 + 0xec));
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
      if (*(int *)((int)pvVar9 + 0xfc) == 1) {
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar9 + 0xf0) = 0;
        MB_SetAnimationNoBlend(lVar15,4,0);
      }
      else {
        if (*(int *)((int)pvVar9 + 0xf4) != 0) {
          FUN_004bff20((double)fVar31);
          *(undefined4 *)((int)pvVar9 + 0xf4) = 0;
        }
        moby->state = '\x05';
        MB_SetAnimation(lVar15,0,0,0x14);
        *(undefined4 *)((int)pvVar9 + 0xd0) = 0;
        *(undefined4 *)((int)pvVar9 + 0xd4) = 0;
      }
    }
    M923_004b63a8(lVar15);
  }
  else if (uVar22 == '\x02') {
    iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0xe0));
    if (iVar19 != 0) {
      if (*(int *)((int)pvVar7 + 0xfc) == 1) {
        MB_SetAnimationNoBlend(lVar15,0,0);
      }
      else {
        uVar20 = FUN_004bfdf8(lVar15,lVar15 + 0x10);
        *(undefined4 *)((int)pvVar7 + 0xf4) = uVar20;
        M923_004b6a40(lVar15);
        MB_SetAnimationNoBlend(lVar15,2,0);
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar8 = moby->pClass->collision;
      moby->state = '\x04';
      moby->collision = puVar8;
    }
  }
  else if (uVar22 == '\x01') {
    fVar31 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar31);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar12 + 0x7c) = fVar31;
    *(float *)(puVar12 + 0x10) = fVar2;
    *(float *)((int)puVar12 + 0x84) = fVar3 - fVar5;
    dVar28 = 0.0;
    uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
    fVar31 = ABS(*(float *)((int)puVar12 + 0x7c));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar31 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar12 + 0x10));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar31) {
      lVar17 = uVar14 - 0x140;
      lVar25 = uVar14 - 0x8c;
      lVar23 = uVar14 - 0x9c;
      lVar27 = 2;
      fVar31 = (fVar4 - fVar31) / (fVar4 + fVar31);
      fVar3 = fVar31 * fVar31;
      *(float *)(puVar12 + 0x18) = fVar31;
      *(float *)(puVar12 + 0x17) = fVar31;
      *(float *)((int)puVar12 + 0xbc) = fVar31;
      *(float *)((int)puVar12 + 0xb4) = fVar31;
      fVar31 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar3;
      *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar31;
      *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar31 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar31 * fVar31;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar31 * fVar31;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar14 - 0x9c;
      pfVar26 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        fVar31 = *pfVar26;
        fVar3 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar31;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar13 = (int)lVar25;
        lVar18 = lVar18 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar28,0x3f747ae140000000,0x3fc99999a0000000,lVar15,&DAT_004b6e9c,(int)pvVar7 + 0xf0)
    ;
    M923_004b63a8(lVar15);
  }
  else if (uVar22 == '\0') {
    if (*(int *)((int)pvVar7 + 0xfc) == 2) {
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar7 + 0xf0) = 0;
      MB_SetAnimationNoBlend(lVar15,4,0);
    }
    else {
      if (*(int *)((int)pvVar7 + 0xd8) == -1) {
        printf("MineBot (moby923) with no flyPath. UID: %d - RAR\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar7 + 0xd8)]->cnt == 0) {
        printf("MineBot (moby923) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar7 + 0xfc) != 1) {
        if (*(int *)((int)pvVar7 + 0xdc) == -1) {
          printf("MineBot (moby923) with no exitPath. UID: %d - RAR\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar7 + 0xdc)]->cnt == 0) {
          printf("MineBot (moby923) with a exitPath that has no points. UID: %d - RAR\n",
                       moby->uid);
          DeleteMoby(moby);
          return;
        }
      }
      if (*(int *)((int)pvVar7 + 0xe0) == -1) {
        printf("MineBot (moby923) with no activation cuboid. UID: %d - RAR\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      M923_004b6b88(lVar15);
      moby->state = '\x02';
      moby->updateDistance = -0x80;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    *(undefined4 *)((int)pvVar7 + 0xf4) = 0;
  }
  MB_ColorDyingMoby(lVar15,(int)pvVar7 + 0x60);
  return;
}


