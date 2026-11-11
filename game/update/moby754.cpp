// game/update/moby754.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x44d980-0x44de4c
#include "game/update/moby754.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x044d980 (0x14 bytes)
void M754_0044d980(void)

{
  DAT_00871c34 = 0x10000;
  return;
}


// 0x044d9d0 (0x47c bytes)
/* Moby 754 */

void UpdateMoby_754(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar10;
  ulonglong in_f29;
  double dVar11;
  ulonglong in_f30;
  undefined8 uVar12;
  ulonglong in_f31;
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
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar37;
  
  lVar8 = (longlong)(int)moby;
  uVar7 = ZEXT48(&stack0x00000000);
  lVar1 = uVar7 - 0x1c0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar7;
  puVar4[0x3a] = in_LR;
  puVar4[0x35] = in_f29;
  puVar4[0x36] = in_f30;
  puVar4[0x37] = in_f31;
  lVar5 = uVar7 - 0x50;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  puVar4[0x34] = unaff_r31;
  puVar4[0x33] = unaff_r30;
  puVar4[0x32] = unaff_r29;
  puVar4[0x31] = unaff_r28;
  iVar9 = MB_damage(lVar8,0x10000,0);
  bVar2 = moby->state;
  if (bVar2 == 0) {
    moby->state = '\x01';
  }
  else if (bVar2 < 2) {
    if ((iVar9 != 0) && (0 < *(int *)(iVar9 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar2 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(lVar8);
    auVar15 = ZEXT416(0xffffffff);
    auVar17 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0xffffffff);
    auVar21 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar14 = loadVectorLeftIndexed(0x24,ZEXT48(moby->pClass));
    auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = vectorReciprocalEstimateFloatingPoint(auVar14);
    auVar15 = loadVectorLeftIndexed(lVar5,0x44d998);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0xffffffff);
    auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0xffffffff);
    auVar22 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0);
    auVar37 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar36 = loadVectorLeftIndexed(0x2c,lVar8);
    auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar16);
    iVar9 = 0;
    auVar15 = loadVectorLeftIndexed(4,0x44d998);
    dVar11 = 1.5707963705062866;
    uVar12 = 0;
    dVar13 = 0.8726646304130554;
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar31 = loadVectorLeftIndexed(0x10,0x44d998);
    auVar28 = loadVectorLeftIndexed(0x14,0x44d998);
    auVar32 = loadVectorLeftIndexed(0x18,0x44d998);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar18);
    auVar18 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar35 = loadVectorLeftIndexed(0x1c,0x44d998);
    auVar34 = loadVectorLeftIndexed(0x20,0x44d998);
    auVar33 = loadVectorLeftIndexed(0x24,0x44d998);
    auVar19 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar15 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar28 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar16);
    auVar15 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar20);
    auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar16);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar18);
    auVar15 = loadVectorLeftIndexed(0x2c,0x44d998);
    auVar14 = loadVectorLeftIndexed(0x28,0x44d998);
    auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = loadVectorLeftIndexed(0x30,0x44d998);
    auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar36,auVar19);
    auVar14 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar17,
                         auVar14);
    do {
      auVar19 = vectorConvertFromSignedFixedPointWord(auVar37,0);
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      *(undefined1 (*) [16])(puVar4 + 0x16) = auVar29;
      puVar4[0x14] = (longlong)iVar9;
      *(undefined4 *)((int)puVar4 + 0x9c) = 0;
      *(undefined4 *)(puVar4 + 0x13) = 0;
      *(undefined4 *)((int)puVar4 + 0x94) = 0;
      *(undefined4 *)(puVar4 + 0x12) = 0;
      auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar19,auVar29,auVar14);
      dVar10 = (double)FastWrapRot
                                 ((float)((double)(longlong)puVar4[0x14] * dVar11),(float)dVar13);
      auVar19 = vectorAddFloatingPoint(auVar30,auVar31);
      auVar20 = vectorSubtractFloatingPoint(auVar28,auVar30);
      auVar14 = ZEXT416(0xffffffff);
      auVar22 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar21 = vectorSubtractFloatingPoint(auVar32,auVar30);
      auVar14 = ZEXT416(0xffffffff);
      auVar23 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = ZEXT416(0xffffffff);
      auVar25 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar29 = vectorSubtractFloatingPoint(auVar28,auVar19);
      auVar36 = vectorSubtractFloatingPoint(auVar32,auVar19);
      auVar14 = vectorCompareGreaterThanFloatingPoint(auVar20,auVar30);
      auVar14 = vectorConditionalSelect(auVar20,auVar30,auVar14);
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar20 = vectorCompareGreaterThanFloatingPoint(auVar14,auVar21);
      auVar20 = vectorConditionalSelect(auVar21,auVar14,auVar20);
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar21 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar19);
      auVar19 = vectorConditionalSelect(auVar29,auVar19,auVar21);
      auVar30 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = ZEXT416(0xffffffff);
      auVar21 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar36);
      auVar19 = vectorConditionalSelect(auVar36,auVar19,auVar14);
      auVar29 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar14 = ZEXT416(0xffffffff);
      auVar36 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar21,auVar21);
      auVar21 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar22);
      auVar14 = ZEXT416(0xffffffff);
      auVar22 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar14 = ZEXT416(0xffffffff);
      auVar23 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar20,auVar20,auVar14);
      auVar27 = loadVectorLeftIndexed(0x18,lVar8);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar21,auVar19,auVar29);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar22,auVar20,auVar30);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar21,auVar14,auVar36);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar14,auVar35,auVar19);
      auVar29 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar22,auVar30,auVar24);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar20);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar21,auVar36,auVar23);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar19);
      auVar36 = loadVectorLeftIndexed(0x10,lVar8);
      auVar23 = loadVectorLeftIndexed(0x14,lVar8);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar22,auVar24,auVar25);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar24,auVar34,auVar20);
      auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar30,auVar29);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar30,auVar33,auVar14);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar18,auVar17,auVar27);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar25,auVar26);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar25,auVar33,auVar19);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar21,auVar16,auVar14);
      auVar14 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar20 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar20);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar15,auVar36);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar20,auVar15,auVar23);
      auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x80,lVar1);
      *(undefined4 *)(puVar4 + 0x10) = uVar3;
      auVar19 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x84,lVar1);
      *(undefined4 *)((int)puVar4 + 0x84) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x88,lVar1);
      *(undefined4 *)(puVar4 + 0x11) = uVar3;
      *(float *)(puVar4 + 0x13) = (float)dVar10;
      puVar4[0xe] = ZEXT48(&DAT_00a15d30);
      puVar4[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby
                (uVar12,lVar8,0x719,uVar7 - 0x140,uVar7 - 0x130,0,0,0x80,&DAT_00a15d30);
      iVar9 = iVar9 + 1;
      auVar14.piece<0,4>() = auVar37.piece<0,4>() + 1;
      auVar14.piece<8,8>() = auVar37.piece<8,8>();
      auVar14.piece<4,4>() = auVar37.piece<4,4>() + 1;
      auVar19.piece<0,8>() = auVar14.piece<0,8>();
      auVar19.piece<12,4>() = auVar37.piece<12,4>();
      auVar19.piece<8,4>() = auVar37.piece<8,4>() + 1;
      auVar37.piece<0,12>() = auVar19.piece<0,12>();
      auVar37.piece<12,4>() = auVar19.piece<12,4>() + 1;
      auVar29 = *(undefined1 (*) [16])(puVar4 + 0x16);
    } while (iVar9 < 4);
    MB_SpawnReplacementMoby(lVar8,0x718);
    DeleteMoby(moby);
  }
  return;
}


