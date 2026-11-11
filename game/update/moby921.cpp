// game/update/moby921.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4b390c-0x4b56cc
#include <stdio.h>
#include "game/update/moby921.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/camera19.h"
#include "game/update/moby1212.h"
#include "game/update/moby923.h"
#include "idol/fastfunc.h"

// 0x04b390c (0x14 bytes)
void M921_004b390c(void)

{
  DAT_008f4504 = 0x10000;
  return;
}


// 0x04b3950 (0x6b4 bytes)
// strings: 004b3928: '?fffHCP' (raw)

void M921_004b3950(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar5;
  undefined1 uVar7;
  int iVar6;
  undefined8 uVar4;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<72> local_120;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if ((cVar1 != '\x03' && cVar1 != '\0') && (cVar1 != '\x01')) {
    iVar6 = 0;
    iVar9 = 0;
    uVar15 = 0x3fc99999a0000000;
    uVar14 = 0x3ff0000000000000;
    uVar13 = 0x3fecccccc0000000;
    uVar12 = 0x41086a0000000000;
    auVar22 = loadVectorLeftIndexed(0x10,0x4b3920);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    do {
      MB_randInt(0x10);
      MB_randInt(2);
      uVar3 = SpawnPart_23(uVar15,uVar14,uVar13,uVar12,local_120);
      iVar5 = (int)uVar3;
      if (iVar5 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar22,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar19 = vectorSplatHalfWord(auVar18,1);
        auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar19,10,uVar3);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        uVar7 = storeVectorElementByteIndexed
                          (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                           auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                           auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                           auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,
                           0x2b,uVar3);
        *(undefined1 *)(iVar5 + 0x2b) = uVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    iVar6 = 0;
    dVar17 = 2.5;
    dVar10 = 100000.0;
    uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
    uVar3 = 0x3fa99999a0000000;
    dVar11 = 20000.0;
    dVar16 = dVar10;
    do {
      iVar5 = SpawnPart_23(uVar3,uVar14,uVar14,dVar10,local_120);
      if (iVar5 != 0) {
        *(short *)(iVar5 + 10) = (short)uVar8;
        uVar7 = MB_randInt(0xff);
        *(undefined1 *)(iVar5 + 8) = uVar7;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
      }
      iVar6 = iVar6 + 1;
      dVar10 = (double)(float)(dVar10 - dVar11);
      uVar8 = uVar8 << 1;
    } while (iVar6 < 3);
    MB_randRange(0x40,0x80);
    iVar6 = MB_randInt(3);
    if (iVar6 != 0) {
      MB_randInt(4);
      MB_randInt(2);
      uVar4 = SpawnPart_23(uVar3,uVar14,uVar14,0x41124f8000000000,local_120);
      iVar6 = (int)uVar4;
      if (iVar6 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar18 = loadVectorLeftIndexed(0x28,0x4b3920);
        auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar21 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar18 = vectorMultiplyAddFloatingPoint(auVar20,auVar21,auVar19);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = vectorSplatHalfWord(auVar18,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar18,10,uVar4);
        *(undefined2 *)(iVar6 + 10) = uVar2;
        iVar5 = MB_randInt(2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar6 + 3) = 0x44;
        }
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        *(undefined1 *)(iVar6 + 0x2a) = 0x40;
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        *(undefined4 *)(iVar6 + 0x24) = 2;
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar21,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xff;
        uVar7 = storeVectorElementByteIndexed
                          (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                           auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                           auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                           auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar6 + 0x2b) = uVar7;
      }
    }
    iVar6 = 0;
    do {
      MB_randInt(0x10);
      MB_randInt(2);
      uVar4 = SpawnPart_23(uVar15,uVar14,uVar13,uVar12,local_120);
      iVar5 = (int)uVar4;
      if (iVar5 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar22,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar19 = vectorSplatHalfWord(auVar18,1);
        auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar19,10,uVar4);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        uVar7 = storeVectorElementByteIndexed
                          (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                           auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                           auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                           auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar5 + 0x2b) = uVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    uVar8 = (ulonglong)(uint)(int)((double)animationSpeed * dVar17);
    do {
      iVar6 = SpawnPart_23(uVar3,uVar14,uVar14,dVar16,local_120);
      if (iVar6 != 0) {
        *(short *)(iVar6 + 10) = (short)uVar8;
        uVar7 = MB_randInt(0xff);
        *(undefined1 *)(iVar6 + 8) = uVar7;
        *(undefined4 *)(iVar6 + 0x24) = 2;
        *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
        *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
      }
      iVar9 = iVar9 + 1;
      dVar16 = (double)(float)(dVar16 - dVar11);
      uVar8 = uVar8 << 1;
    } while (iVar9 < 3);
  }
  return;
}


// 0x04b4020 (0x644 bytes)
// inlined: FastAtan2 @0x4b42c0, FastAtan2 @0x4b44a8
undefined8 M921_004b4020(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar14;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar17;
  ulonglong uVar15;
  float *pfVar18;
  longlong lVar16;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  double dVar25;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0x140;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar10;
  puVar9[0x2a] = in_LR;
  puVar9[0x20] = in_f24;
  puVar9[0x21] = in_f25;
  puVar9[0x22] = in_f26;
  puVar9[0x23] = in_f27;
  puVar9[0x24] = in_f28;
  puVar9[0x25] = in_f29;
  puVar9[0x26] = in_f30;
  puVar9[0x27] = in_f31;
  puVar9[0x1f] = unaff_r31;
  puVar9[0x1e] = unaff_r30;
  pvVar7 = param_1->pVar;
  iVar17 = *(int *)((int)pvVar7 + 0x68);
  uVar8 = *(uint *)((int)pvVar7 + 0x8c);
  fVar1 = g_FrameTime * DAT_008f4540;
  puVar9[0x1d] = unaff_r29;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1b] = unaff_r27;
  iVar14 = MB_PathMoveDist
                     ((double)fVar1,Splines[iVar17],uVar10 - 0xd0,(int)pvVar7 + 0x60,
                      (int)pvVar7 + 100,iVar17 * 4,uVar8 >> 0x1f);
  iVar17 = *(int *)((int)pvVar7 + 0x8c);
  if ((iVar17 == 0) ||
     ((iVar14 == 0 && (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13)))) {
    dVar23 = 0.0;
    AccelDelt(*(float *)(puVar9 + 0xe),DAT_008f4544,DAT_008f4548,0.0,&(param_1->pos).x,
                        iVar17,(float *)((int)pvVar7 + 0x70));
    AccelDelt(*(float *)((int)puVar9 + 0x74),DAT_008f4544,DAT_008f4548,(float)dVar23,
                        &(param_1->pos).y,iVar17,(float *)((int)pvVar7 + 0x74));
    AccelDelt(*(float *)(puVar9 + 0xf),DAT_008f4544,DAT_008f4548,(float)dVar23,
                        &(param_1->pos).z,iVar17,(float *)((int)pvVar7 + 0x78));
    fVar2 = *(float *)(puVar9 + 0xe) - (param_1->pos).x;
    dVar28 = (double)fVar2;
    dVar29 = (double)*(float *)(puVar9 + 0xf);
    fVar6 = *(float *)((int)puVar9 + 0x74) - (param_1->pos).y;
    dVar27 = (double)fVar6;
    dVar26 = (double)(param_1->pos).z;
    fVar1 = (param_1->rotation).z;
    dVar24 = ABS(dVar28);
    if ((0.009999999776482582 < dVar24) && (dVar21 = ABS(dVar27), 0.009999999776482582 < dVar21)) {
      *(float *)((int)puVar9 + 0x8c) = fVar2;
      *(float *)(puVar9 + 0x12) = fVar6;
      *(float *)((int)puVar9 + 0x94) = (float)(dVar24 - dVar21);
      uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar9 + 0x8c));
      if ((double)*(float *)((int)puVar9 + 0x94) - dVar23 < 0.0) {
        dVar22 = dVar21;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar21 = ABS((double)*(float *)(puVar9 + 0x12));
      if ((double)*(float *)((int)puVar9 + 0x94) - dVar23 < 0.0) {
        dVar21 = dVar24;
      }
      dVar25 = 0.7853981852531433;
      dVar24 = dVar23;
      if (dVar23 < dVar22) {
        lVar12 = uVar10 - 0x130;
        lVar19 = uVar10 - 0x78;
        lVar16 = uVar10 - 0x88;
        lVar20 = 2;
        fVar3 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xc4) = fVar3;
        *(float *)((int)puVar9 + 0xbc) = fVar3;
        *(float *)(puVar9 + 0x18) = fVar3;
        *(float *)(puVar9 + 0x17) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
        *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar3;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar3 * fVar3;
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar10 - 0x88;
        pfVar18 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar16 = 2;
        lVar12 = lVar13;
        do {
          iVar17 = (int)lVar12;
          iVar14 = (int)lVar19;
          lVar12 = lVar12 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar17 + 0xb8)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar2);
      }
      dVar21 = (double)FastDiffRots((double)fVar1,dVar24);
      OrganicDeltAngSpeed(dVar24,(double)DAT_008f4544,(double)DAT_008f4548,dVar23,param_1)
      ;
      fVar6 = DAT_008f4548;
      fVar2 = DAT_008f4544;
      dVar22 = ABS((double)(float)(dVar29 - dVar26));
      *(float *)((int)puVar9 + 0x84) = (float)(dVar29 - dVar26);
      fVar1 = SQRT((float)(dVar28 * dVar28 + (double)(float)(dVar27 * dVar27)));
      dVar24 = ABS((double)fVar1);
      *(float *)(puVar9 + 0x10) = fVar1;
      *(float *)(puVar9 + 0x11) = (float)(dVar24 - dVar22);
      uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
      pfVar18 = (float *)((uint)(uVar15 << 2) | 0x735900);
      dVar29 = ABS((double)*(float *)(puVar9 + 0x10));
      if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
        dVar29 = dVar22;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar9 + 0x84));
      if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
        dVar26 = dVar24;
      }
      fVar3 = pfVar18[1];
      dVar24 = dVar23;
      if (dVar23 < dVar29) {
        lVar12 = uVar10 - 0x130;
        lVar19 = uVar10 - 0x98;
        lVar16 = uVar10 - 0xa8;
        lVar20 = 2;
        fVar4 = (float)(dVar26 - dVar29) / (float)(dVar26 + dVar29);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xa4) = fVar4;
        *(float *)((int)puVar9 + 0x9c) = fVar4;
        *(float *)(puVar9 + 0x14) = fVar4;
        *(float *)(puVar9 + 0x13) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
        *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar4 * fVar4;
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar10 - 0xa8;
        pfVar18 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar4;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar12 = 2;
        dVar29 = dVar23;
        do {
          iVar17 = (int)lVar13;
          iVar14 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar17 + 0x98)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar24 = (double)((float)(dVar29 + dVar25) * fVar1 + fVar3);
      }
      AccelDelt((float)-dVar24,fVar2,fVar6,(float)dVar23,&(param_1->rotation).y,
                          (int)pfVar18,(float *)((int)pvVar7 + 0x84));
      fVar1 = (float)(dVar21 / (double)DAT_008f4550);
      if (1.0 - (float)(dVar21 / (double)DAT_008f4550) < 0.0) {
        fVar1 = 1.0;
      }
      if (fVar1 - -1.0 < 0.0) {
        fVar1 = -1.0;
      }
      AccelDelt(DAT_008f454c * fVar1,0.003,DAT_008f4548,(float)dVar23,
                          &(param_1->rotation).x,0x8f0000,(float *)((int)pvVar7 + 0x80));
    }
    uVar11 = 0;
  }
  else {
    Cam19_Disable(*(int *)((int)pvVar7 + 0x90));
    iVar17 = *(int *)((int)pvVar7 + 0x6c);
    if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == param_1)) &&
       (g_SoundChannels[iVar17].state != '\0')) {
      sound_Kill(iVar17);
    }
    *(undefined4 *)((int)pvVar7 + 0x6c) = 0xffffffff;
    DeleteMoby(param_1);
    uVar11 = 1;
  }
  return uVar11;
}


// 0x04b4670 (0x298 bytes)
// inlined: FastAtan2 @0x4b47dc
void M921_004b4670(int param_1)

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


// 0x04b4930 (0xd9c bytes)
// inlined: FastAtan2 @0x4b4e94, FastAtan2 @0x4b5060, FastAtan2 @0x4b551c
// strings: 00658aac: 'Enemy Fighter (moby921) with no flyPath. UID: %d - RAR\n' | 00658ae4: 'Enemy Fighter (moby921) with a flyPath that has no points. UID: %d - RAR\n'

/* Moby 921 */

void UpdateMoby_921(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  MobyModeBit MVar13;
  void *pvVar14;
  MobyClass *pMVar15;
  uint uVar16;
  Spline *pSVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  int iVar20;
  MobyInstance *pMVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar26;
  longlong lVar24;
  longlong lVar25;
  int iVar27;
  float *pfVar29;
  longlong lVar28;
  longlong lVar30;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar31;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  lVar23 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar25 = uVar22 - 0x150;
  puVar19 = (ulonglong *)lVar25;
  *puVar19 = uVar22;
  puVar19[0x2c] = in_LR;
  puVar19[0x28] = in_f30;
  puVar19[0x29] = in_f31;
  puVar19[0x27] = unaff_r31;
  uVar1 = moby->state;
  puVar19[0x26] = unaff_r30;
  pvVar14 = moby->pVar;
  uVar32 = ZEXT48(pvVar14);
  puVar19[0x25] = unaff_r29;
  puVar19[0x24] = unaff_r28;
  puVar19[0x23] = unaff_r27;
  puVar19[0x22] = unaff_r26;
  if ((uVar1 == '\0') &&
     ((uVar12 = moby->uid, (&DAT_00a545c4)[(short)uVar12] != '\0' ||
      ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar12 >> 5) << 2)) &
       1 << (uVar12 & 0x1f)) != 0)))) {
    FUN_004b6304(g_MobyInstance + *(int *)((int)pvVar14 + 0x8c));
    DeleteMoby(moby);
    return;
  }
  iVar26 = MB_damage(lVar23,0x800000,0);
  moby->damage = -1;
  if (((iVar26 != 0) && (*(int *)((int)pvVar14 + 0x8c) == -1)) && (moby->state != '\x03')) {
    if ((Level == Oltanis) &&
       (ShipsKilledCounts.Oltanis = ShipsKilledCounts.Oltanis + 1, 2 < ShipsKilledCounts.Oltanis)) {
      MB_UnlockSkillPoint(0x18);
    }
    moby->state = '\x03';
    MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar23,lVar23 + 0x10,&DAT_004b4908,
               0xffffffffffffffff);
    iVar26 = *(int *)((int)pvVar14 + 0x6c);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (((iVar26 != -1) && (g_SoundChannels[iVar26].pMoby == moby)) &&
       (g_SoundChannels[iVar26].state != '\0')) {
      sound_Kill(iVar26);
    }
    *(undefined4 *)((int)pvVar14 + 0x6c) = 0xffffffff;
  }
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (*(int *)((int)pvVar14 + 0x68) == -1) {
        printf("Enemy Fighter (moby921) with no flyPath. UID: %d - RAR\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar14 + 0x68)]->cnt == 0) {
        printf("Enemy Fighter (moby921) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (((*(int *)((int)pvVar14 + 0x98) < 0) || (*(int *)((int)pvVar14 + 0x9c) < 0)) ||
         (*(int *)((int)pvVar14 + 0xa0) < 0)) {
        DeleteMoby(moby);
        return;
      }
      M921_004b4670(lVar23);
      if (*(int *)((int)pvVar14 + 0x8c) == 0) {
        moby->state = '\x02';
        moby->updateDistance = -0x80;
      }
      else {
        moby->state = '\x01';
        moby->updateDistance = -1;
        pMVar21 = g_MobyInstance;
        iVar26 = *(int *)((int)pvVar14 + 0x8c);
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        pMVar21[iVar26].modeBits = pMVar21[iVar26].modeBits | (UNK_40|DISABLED);
        *(undefined4 *)((int)pvVar14 + 0x94) = 0;
      }
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      *(undefined4 *)((int)pvVar14 + 0x6c) = 0xffffffff;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = loadVectorLeftIndexed(0x4554,0x8f0000);
      moby->drawDistance = 0x80;
      auVar39 = vectorConvertFromSignedFixedPointWord(auVar40,0);
      auVar40 = loadVectorLeftIndexed(8,0x4b4908);
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = vectorAddFloatingPoint
                          (auVar39,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60);
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar41);
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x7c,uVar32)
      ;
      *(undefined4 *)((int)pvVar14 + 0x7cU & 0xfffffffc) = uVar18;
    }
    else if ((((g_LevelFlags[Level][*(int *)((int)pvVar14 + 0x98)] == -1) &&
              (g_LevelFlags[Level][*(int *)((int)pvVar14 + 0x9c)] == -1)) &&
             ((g_LevelFlags[Level][*(int *)((int)pvVar14 + 0xa0)] == -1 &&
              ((DAT_00969fec == 0 && (g_standingOnMoby == 0)))))) &&
            (iVar26 = MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar14 + 0xa4)),
            pMVar21 = g_MobyInstance, iVar26 != 0)) {
      iVar26 = *(int *)((int)pvVar14 + 0x8c);
      pMVar31 = g_MobyInstance + *(int *)((int)g_MobyInstance[iVar26].pVar + 4);
      fVar3 = (pMVar31->pos).x;
      *(float *)(puVar19 + 0xe) = fVar3;
      fVar4 = (pMVar31->pos).y;
      *(float *)((int)puVar19 + 0x74) = fVar4;
      fVar5 = (pMVar31->pos).z;
      *(float *)(puVar19 + 0xf) = fVar5;
      *(f32 *)((int)puVar19 + 0x7c) = (pMVar31->pos).w;
      fVar5 = fVar5 + 4.0;
      *(float *)(puVar19 + 0xf) = fVar5;
      fVar6 = GameCamera.rot.elevation;
      fVar4 = GameCamera.posY - fVar4;
      fVar3 = GameCamera.posX - fVar3;
      fVar5 = fVar5 - GameCamera.posZ;
      fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      *(float *)((int)puVar19 + 0x9c) = fVar5;
      fVar5 = ABS(fVar5);
      fVar4 = ABS(fVar3);
      *(float *)(puVar19 + 0x13) = fVar3;
      *(float *)(puVar19 + 0x14) = fVar4 - fVar5;
      dVar38 = 0.0;
      uVar32 = (ulonglong)(*(uint *)(puVar19 + 0x13) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar19 + 0x9c) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar19 + 0x13));
      if (*(float *)(puVar19 + 0x14) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar7 = ABS(*(float *)((int)puVar19 + 0x9c));
      if (*(float *)(puVar19 + 0x14) - 0.0 < 0.0) {
        fVar7 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar35 = dVar38;
      if (0.0 < fVar3) {
        lVar24 = uVar22 - 0x140;
        lVar30 = uVar22 - 0x5c;
        lVar28 = uVar22 - 0x6c;
        lVar33 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar7 = fVar3 * fVar3;
        *(float *)(puVar19 + 0x1e) = fVar3;
        *(float *)(puVar19 + 0x1d) = fVar3;
        *(float *)((int)puVar19 + 0xec) = fVar3;
        *(float *)((int)puVar19 + 0xe4) = fVar3;
        fVar3 = fVar7 * fVar7;
        *(float *)(puVar19 + 0x1d) = *(float *)(puVar19 + 0x1d) * fVar7;
        *(float *)((int)puVar19 + 0xec) = *(float *)((int)puVar19 + 0xec) * fVar3;
        *(float *)(puVar19 + 0x1e) = *(float *)(puVar19 + 0x1e) * fVar3 * fVar7;
        do {
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xd4) * fVar3 * fVar3;
          iVar27 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar30 = uVar22 - 0x6c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar28 = lVar30;
        do {
          fVar3 = *pfVar29;
          fVar7 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xe4) * fVar3;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar28 = 2;
        lVar24 = lVar25;
        do {
          iVar27 = (int)lVar24;
          iVar20 = (int)lVar30;
          lVar24 = lVar24 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar27 + 0xe4)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar34 = (double)FastSubRots(fVar6,(float)-dVar35);
      fVar3 = (pMVar31->pos).x - GameCamera.posX;
      fVar4 = (pMVar31->pos).y - GameCamera.posY;
      dVar36 = ABS((double)fVar3);
      dVar37 = ABS((double)fVar4);
      *(float *)((int)puVar19 + 0x8c) = fVar3;
      *(float *)(puVar19 + 0x12) = fVar4;
      *(float *)((int)puVar19 + 0x94) = (float)(dVar36 - dVar37);
      fVar3 = GameCamera.rot.radius;
      uVar32 = (ulonglong)(*(uint *)((int)puVar19 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar19 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar19 + 0x12) >> 0x1d) & 4;
      dVar35 = ABS((double)*(float *)((int)puVar19 + 0x8c));
      if ((double)*(float *)((int)puVar19 + 0x94) - dVar38 < 0.0) {
        dVar35 = dVar37;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar37 = ABS((double)*(float *)(puVar19 + 0x12));
      if ((double)*(float *)((int)puVar19 + 0x94) - dVar38 < 0.0) {
        dVar37 = dVar36;
      }
      if (dVar38 < dVar35) {
        lVar24 = uVar22 - 0x140;
        lVar28 = uVar22 - 0x8c;
        lVar30 = uVar22 - 0x7c;
        lVar33 = 2;
        fVar6 = (float)(dVar37 - dVar35) / (float)(dVar37 + dVar35);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar19 + 0x1a) = fVar6;
        *(float *)(puVar19 + 0x19) = fVar6;
        *(float *)((int)puVar19 + 0xcc) = fVar6;
        *(float *)((int)puVar19 + 0xc4) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar19 + 0x19) = *(float *)(puVar19 + 0x19) * fVar7;
        *(float *)((int)puVar19 + 0xcc) = *(float *)((int)puVar19 + 0xcc) * fVar6;
        *(float *)(puVar19 + 0x1a) = *(float *)(puVar19 + 0x1a) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar24 + 0xc4) = *(float *)((int)lVar24 + 0xb4) * fVar6 * fVar6;
          iVar27 = (int)lVar28;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar30 = uVar22 - 0x8c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar28 = lVar30;
        do {
          fVar6 = *pfVar29;
          fVar7 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar24 + 0xc4) = *(float *)((int)lVar24 + 0xc4) * fVar6;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar24 = 2;
        do {
          iVar27 = (int)lVar25;
          iVar20 = (int)lVar30;
          lVar25 = lVar25 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar27 + 0xc4)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar38 = (double)FastSubRots(fVar3,(float)dVar38);
      if (((dVar38 < 0.48869219422340393) && (dVar34 < 0.3490658402442932)) &&
         (iVar27 = CollLine(0x951500,uVar22 - 0xe0,0x12,pMVar31,0), iVar27 == 0)) {
        uVar12 = moby->uid;
        iVar20 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
        iVar27 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
        MVar13 = moby->modeBits;
        uVar16 = *(uint *)(&DAT_00a54dd0 + iVar27);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar20) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar20) | 1 << (uVar12 & 0x1f);
        pMVar15 = moby->pClass;
        moby->modeBits =
             MVar13 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                       HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        *(uint *)(&DAT_00a54dd0 + iVar27) = uVar16 | 1 << (uVar12 & 0x1f);
        moby->collision = pMVar15->collision;
        pMVar21[iVar26].modeBits =
             pMVar21[iVar26].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->state = '\x02';
        Cam19_Enable(*(int *)((int)pvVar14 + 0x90));
        pMVar31->drawDistance = 0xff;
        pMVar31->updateDistance = -1;
      }
    }
  }
  else if (bVar2 < 3) {
    iVar26 = M921_004b4020(lVar23);
    if (iVar26 != 0) {
      return;
    }
    iVar26 = *(int *)((int)pvVar14 + 0x8c);
    if ((iVar26 != 0) && (*(int *)((int)pvVar14 + 0x94) < 2)) {
      if ((*(int *)((int)pvVar14 + 0x94) == 0) && (0x37 < *(int *)((int)pvVar14 + 0x60))) {
        *(undefined4 *)((int)pvVar14 + 0x94) = 1;
      }
      pMVar21 = g_MobyInstance;
      fVar3 = (moby->transform).v2.x;
      fVar4 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.z;
      fVar6 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.y;
      fVar8 = (moby->transform).v0.z;
      fVar9 = (moby->pos).x;
      fVar10 = (moby->pos).y;
      fVar11 = (moby->pos).z;
      g_MobyInstance[iVar26].pos.w = (moby->pos).w;
      pMVar21[iVar26].pos.x = fVar9 + fVar6 * 0.21 + fVar3 * -1.24;
      pMVar21[iVar26].pos.y = fVar10 + fVar7 * 0.21 + fVar4 * -1.24;
      pMVar21[iVar26].pos.z = fVar11 + fVar8 * 0.21 + fVar5 * -1.24;
      pMVar21[iVar26].rotation.x = (moby->rotation).x;
      pMVar21[iVar26].rotation.y = (moby->rotation).y;
      pMVar21[iVar26].rotation.z = (moby->rotation).z;
      pMVar21[iVar26].rotation.w = (moby->rotation).w;
      if (*(int *)((int)pvVar14 + 0x94) == 1) {
        FUN_004b62f8(g_MobyInstance + *(int *)((int)pvVar14 + 0x8c));
        *(undefined4 *)((int)pvVar14 + 0x94) = 2;
      }
    }
  }
  else if ((bVar2 < 4) && (iVar26 = FastDecTimerS32(uVar32 + 0x7c), iVar26 != 0)) {
    iVar26 = *(int *)((int)pvVar14 + 0x68);
    auVar40 = ZEXT416(0xffffffff);
    auVar41 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x4554,0x8f0000);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    auVar39 = vectorConvertFromSignedFixedPointWord(auVar40,0);
    auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    pSVar17 = Splines[iVar26];
    moby->collision = moby->pClass->collision;
    auVar40 = loadVectorLeftIndexed(8,0x4b4908);
    auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = vectorAddFloatingPoint
                        (auVar39,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60);
    auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar41);
    auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
    auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar18 = storeVectorElementWordIndexed
                       (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x7c,uVar32);
    *(undefined4 *)((int)pvVar14 + 0x7cU & 0xfffffffc) = uVar18;
    moby->state = '\x02';
    *(undefined4 *)((int)pvVar14 + 0x60) = 0;
    fVar3 = 0.0;
    *(undefined4 *)((int)pvVar14 + 100) = 0;
    fVar4 = pSVar17->points[0].x;
    (moby->pos).x = fVar4;
    fVar5 = pSVar17->points[0].y;
    (moby->pos).y = fVar5;
    (moby->pos).z = pSVar17->points[0].z;
    (moby->pos).w = pSVar17->points[0].w;
    fVar4 = pSVar17->points[1].x - fVar4;
    fVar5 = pSVar17->points[1].y - fVar5;
    fVar6 = ABS(fVar4);
    fVar7 = ABS(fVar5);
    *(float *)(puVar19 + 0x10) = fVar4;
    *(float *)((int)puVar19 + 0x84) = fVar5;
    *(float *)(puVar19 + 0x11) = fVar6 - fVar7;
    uVar32 = (ulonglong)(*(uint *)(puVar19 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x84) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar19 + 0x10));
    if (*(float *)(puVar19 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar7 = ABS(*(float *)((int)puVar19 + 0x84));
    if (*(float *)(puVar19 + 0x11) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar24 = uVar22 - 0x140;
      lVar28 = uVar22 - 0xac;
      lVar30 = uVar22 - 0x9c;
      lVar33 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)(puVar19 + 0x16) = fVar4;
      *(float *)(puVar19 + 0x15) = fVar4;
      *(float *)((int)puVar19 + 0xac) = fVar4;
      *(float *)((int)puVar19 + 0xa4) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar19 + 0x15) = *(float *)(puVar19 + 0x15) * fVar7;
      *(float *)((int)puVar19 + 0xac) = *(float *)((int)puVar19 + 0xac) * fVar4;
      *(float *)(puVar19 + 0x16) = *(float *)(puVar19 + 0x16) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar24 + 0xa4) = *(float *)((int)lVar24 + 0x94) * fVar4 * fVar4;
        iVar26 = (int)lVar28;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)(iVar26 + 4) * fVar4 * fVar4;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar30 = uVar22 - 0xac;
      pfVar29 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar28 = lVar30;
      do {
        fVar4 = *pfVar29;
        fVar7 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar24 + 0xa4) = *(float *)((int)lVar24 + 0xa4) * fVar4;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar24 = 2;
      do {
        iVar26 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar27 = (int)lVar30;
        lVar30 = lVar30 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar26 + 0xa4) + *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8)
                + *(float *)(iVar27 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar5 + fVar6;
    }
    (moby->rotation).z = fVar3;
    *(undefined4 *)((int)pvVar14 + 0x78) = 0;
    *(undefined4 *)((int)pvVar14 + 0x74) = 0;
    *(undefined4 *)((int)pvVar14 + 0x70) = 0;
    *(undefined4 *)((int)pvVar14 + 0x88) = 0;
    *(undefined4 *)((int)pvVar14 + 0x84) = 0;
    *(undefined4 *)((int)pvVar14 + 0x80) = 0;
  }
  M921_004b3950(lVar23);
  uVar1 = moby->state;
  if (((uVar1 != '\0') && (uVar1 != '\x03')) &&
     ((uVar1 != '\x01' &&
      (iVar26 = IsMobyPlayingSound(moby,*(int *)((int)pvVar14 + 0x6c)), iVar26 == 0)))) {
    iVar26 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar14 + 0x6c) = iVar26;
  }
  return;
}


