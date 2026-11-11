// game/update/moby979.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4c76b8-0x4c8074
#include "game/update/moby979.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x04c76b8 (0x9a8 bytes)
// inlined: FastAtan2 @0x4c7878, FastAtan2 @0x4c7ccc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 979 */

void UpdateMoby_979(MobyInstance *moby)

{
  longlong lVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar14;
  puVar9[0x2a] = in_LR;
  puVar9[0x22] = unaff_r26;
  uVar2 = moby->state;
  puVar9[0x26] = unaff_r30;
  pvVar6 = moby->pVar;
  puVar9[0x1f] = unaff_r23;
  puVar9[0x27] = unaff_r31;
  puVar9[0x25] = unaff_r29;
  puVar9[0x24] = unaff_r28;
  puVar9[0x23] = unaff_r27;
  puVar9[0x21] = unaff_r25;
  puVar9[0x20] = unaff_r24;
  if (uVar2 == '\0') {
    fVar3 = (moby->pos).z;
    moby->state = '\x01';
    (moby->pos).z = fVar3 + 0.1;
  }
  if ((*(int *)((int)pvVar6 + 0x10) != -1) &&
     (g_MobyInstance[*(int *)((int)pvVar6 + 0x10)].state == '\x02')) {
    *(MobyInstance **)(puVar9 + 0x18) = moby;
    *(undefined **)((int)puVar9 + 0xc4) = &DAT_00810001;
    *(undefined4 *)((int)puVar9 + 0xcc) = 0x3f800000;
    *(undefined **)(puVar9 + 0x1a) = &DAT_00810001;
    *(undefined1 *)(puVar9 + 0x19) = 2;
    MVar5 = moby->oClass;
    *(undefined1 *)((int)puVar9 + 0xc9) = 1;
    *(MOBY_OCLASSES *)((int)puVar9 + 0xca) = MVar5;
    *(undefined1 *)((int)pvVar6 + 7) = 0xb4;
    MB_UpdateLightsTransition(lVar15,pvVar6);
    pMVar13 = g_heroMobyPtr;
    if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      fVar3 = (g_heroMobyPtr->pos).x - (moby->pos).x;
      fVar4 = (g_heroMobyPtr->pos).y - (moby->pos).y;
      fVar11 = ABS(fVar3);
      fVar12 = ABS(fVar4);
      *(float *)((int)puVar9 + 0xec) = fVar3;
      *(float *)(puVar9 + 0x1e) = fVar4;
      *(float *)((int)puVar9 + 0xf4) = fVar11 - fVar12;
      uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar9 + 0xec));
      if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
        fVar3 = fVar12;
      }
      auVar26 = loadVectorLeftIndexed(uVar20 << 2,0x735900);
      auVar27 = loadVectorLeftIndexed(4,uVar20 << 2 | 0x735900);
      fVar4 = ABS(*(float *)(puVar9 + 0x1e));
      if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
        fVar4 = fVar11;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 0x130;
        lVar24 = 2;
        lVar18 = uVar14 - 0xb0;
        lVar21 = uVar14 - 0xa0;
        fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar9 + 0x12) = fVar3;
        *(float *)((int)puVar9 + 0x94) = fVar3;
        *(float *)(puVar9 + 0x13) = fVar3;
        *(float *)((int)puVar9 + 0x9c) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4;
        *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar3;
        *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x80) * fVar3 * fVar3;
          iVar16 = (int)lVar18;
          lVar17 = lVar17 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        pfVar19 = (float *)&DAT_007358e0;
        lVar18 = uVar14 - 0xb0;
        lVar21 = 4;
        lVar17 = lVar1;
        do {
          fVar3 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        auVar29 = ZEXT416(0);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        lVar18 = 4;
        lVar17 = uVar14 - 0xb0;
        do {
          auVar25 = loadVectorLeftIndexed(in_LR,lVar17);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          lVar21 = lVar17 + 4;
          auVar28 = loadVectorRightIndexed(0x10,lVar17);
          lVar17 = lVar17 + 8;
          auVar30 = loadVectorLeftIndexed(in_LR,lVar21);
          auVar31 = loadVectorRightIndexed(0x10,lVar21);
          auVar29 = vectorAddFloatingPoint
                              (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                               auVar25 | auVar28);
          auVar29 = vectorAddFloatingPoint(auVar29,auVar30 | auVar31);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        auVar25 = loadVectorLeftIndexed(8,0x4c7640);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = vectorAddFloatingPoint
                            (auVar29,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar27);
      }
      else {
        auVar26 = ZEXT416(0);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      }
      auVar27 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = ZEXT416(0xffffffff);
      auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = loadVectorLeftIndexed(0xc,0x4c7640);
      auVar29 = loadVectorLeftIndexed(0x10,0x4c7640);
      auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
      auVar29 = loadVectorLeftIndexed(0x14,0x4c7640);
      auVar28 = vectorAddFloatingPoint
                          (auVar26,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      auVar27 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar33 = vectorSubtractFloatingPoint(auVar30,auVar26);
      auVar29 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar36 = vectorSubtractFloatingPoint(auVar32,auVar26);
      auVar27 = ZEXT416(0xffffffff);
      auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = ZEXT416(0xffffffff);
      auVar42 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar27 = vectorSubtractFloatingPoint(auVar30,auVar28);
      auVar35 = vectorSubtractFloatingPoint(auVar32,auVar28);
      auVar30 = vectorSubtractFloatingPoint(auVar30,auVar31);
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar31);
      auVar25 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar28);
      auVar25 = vectorConditionalSelect(auVar27,auVar28,auVar25);
      auVar27 = ZEXT416(0xffffffff);
      auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar31);
      auVar31 = vectorConditionalSelect(auVar30,auVar31,auVar27);
      auVar27 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar35);
      auVar38 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar30 = vectorConditionalSelect(auVar35,auVar25,auVar27);
      auVar27 = ZEXT416(0xffffffff);
      auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar26);
      auVar27 = vectorConditionalSelect(auVar33,auVar26,auVar27);
      auVar26 = ZEXT416(0xffffffff);
      auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar33 = loadVectorLeftIndexed(0x18,0x4c7640);
      auVar26 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar36);
      auVar40 = loadVectorLeftIndexed(0x1c,0x4c7640);
      auVar35 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar30,auVar30,auVar28);
      auVar28 = vectorConditionalSelect(auVar36,auVar27,auVar26);
      auVar26 = ZEXT416(0xffffffff);
      auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = vectorCompareGreaterThanFloatingPoint(auVar31,auVar32);
      auVar31 = vectorConditionalSelect(auVar32,auVar31,auVar26);
      auVar25 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar26 = ZEXT416(0xffffffff);
      auVar33 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = loadVectorLeftIndexed(0x20,0x4c7640);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar25);
      auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar34,auVar30,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar26 = ZEXT416(0xffffffff);
      auVar39 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar33 = vectorMultiplyAddFloatingPoint(auVar31,auVar31,auVar33);
      auVar43 = loadVectorLeftIndexed(0x24,0x4c7640);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar37,auVar35);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar30);
      auVar37 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar26 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar29);
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar37 = vectorMultiplyAddFloatingPoint(auVar32,auVar28,auVar37);
      auVar40 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar38);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar30);
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar31 = vectorMultiplyAddFloatingPoint(auVar27,auVar36,auVar31);
      auVar35 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar28);
      auVar26 = ZEXT416(0xffffffff);
      auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar37,auVar35);
      auVar26 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar38,auVar40);
      auVar36 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar40 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar38,auVar25,auVar30);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar27,auVar41);
      auVar26 = ZEXT416(0xffffffff);
      auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = ZEXT416(0xffffffff);
      auVar41 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar40);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar29);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar34,auVar37,auVar28);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar33,auVar30,auVar36);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar39,auVar31);
      auVar31 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar38,auVar26);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar25,auVar27);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar33,auVar35,auVar31);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar35,auVar25,auVar28);
      auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = *(undefined1 (*) [16])(puVar9 + 0x16);
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb0,lVar1);
      *(undefined4 *)(puVar9 + 0x16) = uVar8;
      auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar37,auVar27);
      auVar29 = vectorPermute(auVar29,auVar28,_DAT_004c7670);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar31,auVar37,auVar25);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb4,lVar1);
      *(undefined4 *)((int)puVar9 + 0xb4) = uVar8;
      *(undefined4 *)(puVar9 + 0x17) = 0x3f800000;
      *(undefined4 *)((int)puVar9 + 0xbc) = 0x45afdf66;
      auVar26 = _DAT_004c76a0;
      auVar27 = vectorPermute(auVar27,_DAT_004c7680,_DAT_004c7690);
      *(undefined4 *)((int)puVar9 + 0x5c) = *(undefined4 *)((int)puVar9 + 0xcc);
      *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar9 + 0x19);
      *(undefined4 *)((int)puVar9 + 0x54) = *(undefined4 *)((int)puVar9 + 0xc4);
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar9 + 0x18);
      *(undefined4 *)((int)puVar9 + 0x6c) = *(undefined4 *)((int)puVar9 + 0xdc);
      *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x1b);
      *(undefined4 *)((int)puVar9 + 100) = *(undefined4 *)((int)puVar9 + 0xd4);
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x1a);
      auVar26 = vectorPermute(auVar27,auVar29,auVar26);
      *(undefined1 (*) [16])(puVar9 + 8) = auVar26;
      CollDamageMobyDirect
                (pMVar13,0x45afdf66,puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],puVar9[0xc],
                 puVar9[0xd]);
    }
    iVar16 = CollMobySphere(0x4008000000000000,lVar15 + 0x10);
    iVar23 = 0;
    if (0 < iVar16) {
      iVar22 = 0;
      do {
        iVar7 = *(int *)((int)&DAT_00a14a00 + iVar22);
        if ((*(short *)(iVar7 + 0xa6) == 0x359) &&
           (*(MobyInstance **)(*(int *)(iVar7 + 0x78) + 0x19c) == moby)) {
          fVar3 = *(float *)(iVar7 + 0x10) - (moby->pos).x;
          fVar4 = *(float *)(iVar7 + 0x14) - (moby->pos).y;
          fVar11 = ABS(fVar3);
          fVar12 = ABS(fVar4);
          *(float *)(puVar9 + 0x1c) = fVar3;
          *(float *)((int)puVar9 + 0xe4) = fVar4;
          *(float *)(puVar9 + 0x1d) = fVar11 - fVar12;
          uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar9 + 0x1c));
          if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
            fVar3 = fVar12;
          }
          auVar26 = loadVectorLeftIndexed(uVar20 << 2,0x735900);
          auVar27 = loadVectorLeftIndexed(4,uVar20 << 2 | 0x735900);
          fVar4 = ABS(*(float *)((int)puVar9 + 0xe4));
          if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
            fVar4 = fVar11;
          }
          if (0.0 < fVar3) {
            lVar17 = uVar14 - 0x130;
            lVar24 = 2;
            lVar18 = uVar14 - 0xd0;
            lVar21 = uVar14 - 0xc0;
            fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar9 + 0xe) = fVar3;
            *(float *)((int)puVar9 + 0x74) = fVar3;
            *(float *)(puVar9 + 0xf) = fVar3;
            *(float *)((int)puVar9 + 0x7c) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0x74) = *(float *)((int)puVar9 + 0x74) * fVar4;
            *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) * fVar3;
            *(float *)((int)puVar9 + 0x7c) = *(float *)((int)puVar9 + 0x7c) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar17 + 0x70) = *(float *)((int)lVar17 + 0x60) * fVar3 * fVar3;
              iVar10 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            pfVar19 = (float *)&DAT_007358e0;
            lVar18 = uVar14 - 0xd0;
            lVar21 = 4;
            lVar17 = lVar1;
            do {
              fVar3 = *pfVar19;
              fVar4 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar17 + 0x70) = *(float *)((int)lVar17 + 0x70) * fVar3;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
              lVar18 = lVar18 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            auVar29 = ZEXT416(0);
            auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
            lVar18 = 4;
            lVar17 = uVar14 - 0xd0;
            do {
              auVar25 = loadVectorLeftIndexed(in_LR,lVar17);
              lVar21 = lVar17 + 4;
              auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar28 = loadVectorRightIndexed(0x10,lVar17);
              lVar17 = lVar17 + 8;
              auVar30 = loadVectorLeftIndexed(in_LR,lVar21);
              auVar31 = loadVectorRightIndexed(0x10,lVar21);
              auVar29 = vectorAddFloatingPoint
                                  (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                                   auVar25 | auVar28);
              auVar29 = vectorAddFloatingPoint(auVar29,auVar30 | auVar31);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            auVar25 = loadVectorLeftIndexed(8,0x4c7640);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar29 = vectorAddFloatingPoint
                                (auVar29,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                         auVar25 << 0x60);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar27);
          }
          else {
            auVar26 = ZEXT416(0);
            auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          }
          auVar27 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = ZEXT416(0xffffffff);
          auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = ZEXT416(0xffffffff);
          auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = loadVectorLeftIndexed(0xc,0x4c7640);
          auVar29 = loadVectorLeftIndexed(0x10,0x4c7640);
          auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar28 = vectorAddFloatingPoint
                              (auVar26,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60
                              );
          auVar33 = vectorSubtractFloatingPoint(auVar29,auVar26);
          auVar35 = vectorSubtractFloatingPoint(auVar29,auVar31);
          auVar27 = loadVectorLeftIndexed(0x14,0x4c7640);
          auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
          auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar40 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar25 = vectorSubtractFloatingPoint(auVar32,auVar26);
          auVar30 = vectorSubtractFloatingPoint(auVar29,auVar28);
          auVar34 = vectorSubtractFloatingPoint(auVar32,auVar28);
          auVar29 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar26);
          auVar32 = vectorSubtractFloatingPoint(auVar32,auVar31);
          auVar29 = vectorConditionalSelect(auVar33,auVar26,auVar29);
          auVar26 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar31);
          auVar31 = vectorConditionalSelect(auVar35,auVar31,auVar26);
          auVar26 = ZEXT416(0xffffffff);
          auVar33 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar35 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar25);
          auVar26 = ZEXT416(0xffffffff);
          auVar37 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar25 = vectorConditionalSelect(auVar25,auVar29,auVar35);
          auVar26 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar28);
          auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar29 = vectorConditionalSelect(auVar30,auVar28,auVar26);
          auVar26 = ZEXT416(0xffffffff);
          auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar28 = vectorCompareGreaterThanFloatingPoint(auVar31,auVar32);
          auVar26 = ZEXT416(0xffffffff);
          auVar35 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar33 = vectorMultiplyAddFloatingPoint(auVar25,auVar25,auVar33);
          auVar26 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar34);
          auVar31 = vectorConditionalSelect(auVar32,auVar31,auVar28);
          auVar36 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar28 = vectorConditionalSelect(auVar34,auVar29,auVar26);
          auVar26 = ZEXT416(0xffffffff);
          auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = ZEXT416(0xffffffff);
          auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = ZEXT416(0xffffffff);
          auVar30 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = loadVectorLeftIndexed(0x18,0x4c7640);
          auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar32 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar29);
          auVar29 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar32 = vectorMultiplyAddFloatingPoint(auVar31,auVar31,auVar32);
          auVar41 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar39 = loadVectorLeftIndexed(0x1c,0x4c7640);
          auVar37 = vectorMultiplyAddFloatingPoint(auVar33,auVar25,auVar29);
          auVar35 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = loadVectorLeftIndexed(0x20,0x4c7640);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar34);
          auVar42 = loadVectorLeftIndexed(0x24,0x4c7640);
          auVar40 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar40);
          auVar25 = vectorMultiplyAddFloatingPoint(auVar37,auVar38,auVar25);
          auVar36 = vectorMultiplyAddFloatingPoint(auVar30,auVar26,auVar36);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar26,auVar38,auVar28);
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar25 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar25);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar36,auVar35);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar36,auVar39,auVar28);
          auVar36 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar27);
          auVar26 = ZEXT416(0xffffffff);
          auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar34);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar35,auVar29,auVar28);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar36,auVar37);
          auVar26 = ZEXT416(0xffffffff);
          auVar34 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar37 = vectorMultiplyAddFloatingPoint(auVar33,auVar40,auVar41);
          auVar31 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar31);
          auVar26 = ZEXT416(0xffffffff);
          auVar36 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar26 = ZEXT416(0xffffffff);
          auVar38 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = vectorShiftLeftIntegerWord(auVar38,auVar38);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar27,auVar28);
          auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar34);
          auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar26);
          auVar31 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar31);
          auVar26 = vectorMultiplyAddFloatingPoint(auVar37,auVar29,auVar25);
          auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar36);
          auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar31);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar33,auVar27,auVar26);
          auVar26 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar25 = *(undefined1 (*) [16])(puVar9 + 0x16);
          uVar8 = storeVectorElementWordIndexed
                            (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb0,
                             lVar1);
          *(undefined4 *)(puVar9 + 0x16) = uVar8;
          auVar25 = vectorPermute(auVar28,auVar25,_DAT_004c7670);
          auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar27,auVar30);
          auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xb4,
                             lVar1);
          *(undefined4 *)((int)puVar9 + 0xb4) = uVar8;
          *(undefined4 *)(puVar9 + 0x17) = 0x3f800000;
          *(undefined4 *)((int)puVar9 + 0xbc) = 0x45afdf66;
          auVar26 = vectorPermute(auVar27,_DAT_004c7680,_DAT_004c7690);
          auVar26 = vectorPermute(auVar26,auVar25,_DAT_004c76a0);
          *(undefined4 *)((int)puVar9 + 0x5c) = *(undefined4 *)((int)puVar9 + 0xcc);
          *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar9 + 0x19);
          *(undefined4 *)((int)puVar9 + 0x54) = *(undefined4 *)((int)puVar9 + 0xc4);
          *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar9 + 0x18);
          *(undefined4 *)((int)puVar9 + 0x6c) = *(undefined4 *)((int)puVar9 + 0xdc);
          *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x1b);
          *(undefined4 *)((int)puVar9 + 100) = *(undefined4 *)((int)puVar9 + 0xd4);
          *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x1a);
          *(undefined1 (*) [16])(puVar9 + 8) = auVar26;
          CollDamageMobyDirect
                    (iVar7,0x50,puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],puVar9[0xc],puVar9[0xd]);
        }
        iVar23 = iVar23 + 1;
        iVar22 = iVar22 + 4;
      } while (iVar23 < iVar16);
    }
  }
  MB_ColorDyingMoby(lVar15,pvVar6);
  return;
}


// 0x04c8060 (0x14 bytes)
void M979_004c8060(void)

{
  DAT_008f4e7c = 0x10000;
  return;
}


