// game/update/moby384.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3593d4-0x359a98
#include "game/update/moby384.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "idol/fastfunc.h"

// 0x03593d4 (0x14 bytes)
void M384_003593d4(void)

{
  DAT_008407a0 = 0x10000;
  return;
}


// 0x0359408 (0x690 bytes)
// strings: 008407f8: '@@@@' (raw)

/* Moby 384 */

void UpdateMoby_384(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar13;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong in_f30;
  ulonglong in_f31;
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
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x110;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar10;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  puVar6[0x1f] = unaff_r31;
  bVar3 = moby->state;
  puVar6[0x1e] = unaff_r30;
  pfVar4 = (float *)moby->pVar;
  uVar13 = ZEXT48(pfVar4);
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  if (bVar3 == 0) {
    moby->state = '\x01';
    moby->setByGroup = '\x02';
    dVar14 = (double)MB_randRot();
    *pfVar4 = (float)dVar14;
    pfVar4[2] = 5.0;
  }
  else if (bVar3 < 2) {
    auVar29 = loadVectorLeftIndexed(in_LR,0x3593e8);
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    if ((moby->setByGroup & 8U) == 0) {
      if ((moby->setByGroup & 4U) != 0) {
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        moby->setByGroup = '\x02';
        auVar20 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar17 = loadVectorLeftIndexed(0x7d4,0x840000);
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorAddFloatingPoint(auVar17,auVar29);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar18,auVar29,auVar20);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,4,uVar13);
        *(undefined4 *)((uint)(pfVar4 + 1) & 0xfffffffc) = uVar5;
      }
    }
    else {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      moby->setByGroup = '\x01';
      auVar20 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0x7d4,0x840000);
      auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
      auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar29 = vectorAddFloatingPoint(auVar17,auVar29);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar18,auVar29,auVar20);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,4,uVar13);
      *(undefined4 *)((uint)(pfVar4 + 1) & 0xfffffffc) = uVar5;
    }
    dVar14 = (double)FastWrapRot
                               (*pfVar4,DAT_008407d0 * 0.017453292 * g_FrameTime);
    *pfVar4 = (float)dVar14;
  }
  dVar14 = 0.0;
  if (SceneScreenFade == 0.0) {
    iVar12 = FastDecTimerS32(uVar13 + 4);
    if (iVar12 == 0) {
      if ((moby->setByGroup & 1U) == 0) {
        dVar15 = (double)FastIntToDouble(pfVar4[1]);
        dVar16 = (double)FastIntToDouble(DAT_008407d4);
        fVar2 = (float)(dVar15 / dVar16);
      }
      else {
        dVar15 = (double)FastIntToDouble(pfVar4[1]);
        dVar16 = (double)FastIntToDouble(DAT_008407d4);
        fVar2 = 1.0 - (float)(dVar15 / dVar16);
      }
      dVar16 = (double)fVar2;
      dVar15 = (double)MB_randRangeFloat((float)dVar14,1.0);
      if (dVar15 < dVar16) {
        MB_randSphere(dVar14,(double)DAT_008407d8,uVar10 - 0x90);
        MB_randSphere(dVar14,(double)DAT_008407d8,uVar10 - 0x80);
        MB_randSphere(dVar14,(double)DAT_008407d8,uVar10 - 0x70);
        auVar19 = loadVectorLeftIndexed(0x80,lVar1);
        auVar20 = loadVectorLeftIndexed(0x90,lVar1);
        auVar21 = loadVectorLeftIndexed(0x88,lVar1);
        auVar22 = loadVectorLeftIndexed(0x98,lVar1);
        auVar25 = loadVectorLeftIndexed(0x84,lVar1);
        auVar23 = vectorSubtractFloatingPoint(auVar19,auVar20);
        auVar26 = loadVectorLeftIndexed(0x94,lVar1);
        auVar24 = vectorSubtractFloatingPoint(auVar21,auVar22);
        auVar28 = vectorSubtractFloatingPoint(auVar25,auVar26);
        auVar27 = loadVectorLeftIndexed(0x804,0x840000);
        auVar29 = loadVectorLeftIndexed(0x800,0x840000);
        auVar30 = vectorSubtractFloatingPoint(auVar27,auVar29);
        auVar17 = loadVectorLeftIndexed(0xa0,lVar1);
        auVar29 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar18 = vectorSubtractFloatingPoint(auVar20,auVar17);
        auVar17 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar20 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xb0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x16) = uVar5;
        auVar30 = vectorAddFloatingPoint(auVar24,auVar30);
        auVar29 = loadVectorLeftIndexed(0xa4,lVar1);
        uVar5 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0xb4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xb4) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xb8,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x17) = uVar5;
        auVar26 = vectorSubtractFloatingPoint(auVar26,auVar29);
        auVar29 = loadVectorLeftIndexed(0xa8,lVar1);
        auVar22 = vectorSubtractFloatingPoint(auVar22,auVar29);
        *(undefined4 *)((int)puVar6 + 0xbc) = *(undefined4 *)((int)puVar6 + 0x8c);
        auVar29 = loadVectorLeftIndexed(0x7f0,0x840000);
        auVar17 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = vectorConvertFromSignedFixedPointWord(auVar29,0);
        auVar20 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = ZEXT416(0xffffffff);
        auVar24 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0xb8,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x17) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xc0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x18) = uVar5;
        auVar17 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xc4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xc4) = uVar5;
        auVar32 = vectorReciprocalEstimateFloatingPoint(auVar31);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,200,lVar1);
        *(undefined4 *)(puVar6 + 0x19) = uVar5;
        *(undefined4 *)((int)puVar6 + 0xcc) = *(undefined4 *)((int)puVar6 + 0x9c);
        auVar20 = loadVectorLeftIndexed(0x10,0x3593e8);
        auVar17 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar24 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = ZEXT416(0xffffffff);
        auVar36 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = ZEXT416(0xffffffff);
        auVar35 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = ZEXT416(0xffffffff);
        auVar38 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar31,auVar24);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar17);
        auVar17 = loadVectorLeftIndexed(0x808,0x840000);
        auVar29 = ZEXT416(0xffffffff);
        auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar20 = vectorSubtractFloatingPoint(auVar17,auVar27);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar17 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar31,auVar24);
        auVar22 = vectorAddFloatingPoint(auVar22,auVar20);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar27,auVar34);
        auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar37 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = ZEXT416(0xffffffff);
        auVar20 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        auVar35 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar31,auVar24);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar33);
        auVar31 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar29 = loadVectorLeftIndexed(0x10,lVar11);
        auVar32 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar29 = vectorAddFloatingPoint(auVar19,auVar29);
        auVar19 = loadVectorLeftIndexed(0x14,lVar11);
        auVar20 = loadVectorLeftIndexed(0x18,lVar11);
        auVar19 = vectorAddFloatingPoint(auVar25,auVar19);
        auVar25 = vectorAddFloatingPoint(auVar21,auVar20);
        bVar3 = moby->setByGroup;
        auVar20 = vectorMultiplyAddFloatingPoint(auVar27,auVar24,auVar17);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar17 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar19 = vectorMultiplyAddFloatingPoint(auVar23,auVar20,auVar34);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar20,auVar36);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar20,auVar35);
        auVar21 = vectorMultiplyAddFloatingPoint(auVar18,auVar20,auVar37);
        auVar24 = vectorMultiplyAddFloatingPoint(auVar26,auVar20,auVar31);
        auVar23 = vectorMultiplyAddFloatingPoint(auVar22,auVar20,auVar32);
        auVar20 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar18 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar19 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0xb0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x16) = uVar5;
        auVar18 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0xb4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xb4) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0xb8,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x17) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xc0,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x18) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0xc4,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0xc4) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,200,lVar1);
        *(undefined4 *)(puVar6 + 0x19) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x80,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x10) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x84,lVar1)
        ;
        *(undefined4 *)((int)puVar6 + 0x84) = uVar5;
        uVar5 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x11) = uVar5;
        if ((bVar3 & 1) == 0) {
          auVar29 = loadVectorLeftIndexed(0x800,0x840000);
        }
        else {
          auVar29 = loadVectorLeftIndexed(0x14,0x3593e8);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = loadVectorLeftIndexed(0x808,0x840000);
          auVar17 = (auVar20 ^ auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = (auVar20 ^ auVar23) >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xb8,
                             lVar1);
          *(undefined4 *)(puVar6 + 0x17) = uVar5;
          uVar5 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,200,lVar1
                            );
          *(undefined4 *)(puVar6 + 0x19) = uVar5;
        }
        fVar7 = DAT_008407e8;
        fVar2 = DAT_008407e4;
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = vectorAddFloatingPoint
                            (auVar25,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
        auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x88,lVar1)
        ;
        *(undefined4 *)(puVar6 + 0x11) = uVar5;
        dVar14 = (double)MB_randRangeFloat(fVar2,fVar7);
        fVar2 = DAT_008407e4;
        *(float *)((int)puVar6 + 0xbc) = (float)dVar14;
        dVar14 = (double)MB_randRangeFloat(fVar2,DAT_008407e8);
        *(float *)((int)puVar6 + 0xcc) = (float)dVar14;
        puVar6[0x1a] = (longlong)DAT_008407f0;
        uVar9 = DAT_008407f8;
        uVar8 = DAT_008407f4;
        uVar5 = DAT_008407ec;
        fVar2 = animationSpeed;
        puVar6[0xe] = (longlong)DAT_008407fc;
        puVar6[0x1a] = (longlong)(int)(fVar2 * ((float)(longlong)puVar6[0x1a] + 0.5));
        SpawnPart_2
                  (uVar10 - 0x90,uVar10 - 0x60,uVar10 - 0x50,uVar9,uVar9,uVar5,
                   *(undefined4 *)((int)puVar6 + 0xd4),uVar8);
      }
    }
    if (((moby->setByGroup & 1U) == 0) || (pfVar4[1] != 0.0)) {
      if ((moby->setByGroup & 2U) != 0) {
        Delt(3.0,DAT_0084080c * g_FrameTime,pfVar4 + 2);
      }
    }
    else {
      Delt(-1.0,DAT_0084080c * g_FrameTime,pfVar4 + 2);
    }
  }
  RegisterFuncForMoby(&PTR_M386_00359ad0_0070c680,moby);
  return;
}


