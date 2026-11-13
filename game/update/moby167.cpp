// game/update/moby167.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2aa928-0x2aaf9c
#include "game/update/moby167.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1667.h"
#include "idol/fastfunc.h"

// 0x02aa928 (0x6c bytes)
void M1671_002aa928(undefined4 param_1)

{
  undefined4 *puVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = CreateMoby(0xa7);
  if (pMVar2 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar2->pVar;
    pMVar2->drawDistance = 0x7e;
    *puVar1 = 0;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    pMVar2->updateDistance = -1;
    pMVar2->enabled = '\0';
    pMVar2->state = '\0';
  }
  return;
}


// 0x02aa9c0 (0x5dc bytes)
/* Moby 167 */

void UpdateMoby_167(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  
  bVar6 = false;
  bVar5 = false;
  pvVar3 = moby->pVar;
  uVar8 = ZEXT48(pvVar3);
  uVar1 = moby->state;
  iVar7 = FLOAT_ORDER(g_heroAnimFrame);
  if ((DAT_0096ae88 == 3) && ((uVar1 == '\x01' || (uVar1 == '\x03')))) {
    bVar5 = bVar6;
    if (((g_heroState == THRUSTER_PACK_HIGH_JUMP) ||
        ((((g_heroState == DOUBLE_JUMP || (g_heroState == UNK_C)) || (g_heroState == FLIP_JUMP)) ||
         (((g_heroState == EDGE_JUMP && (g_heroMobyPtr->updateId == g_heroMobyPtr->animationId)) &&
          ((0x40bfffff < iVar7 && (iVar7 < 0x41800001)))))))) && (DAT_0096a0fe == 0)) {
      bVar5 = true;
    }
    if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
      if (g_heroStateTimer < (int)(animationSpeed * 44.5)) {
        bVar5 = true;
      }
    }
    if (g_heroState == THRUSTER_PACK_BONK_JUMP) {
      if ((g_heroStateTimer < (int)(animationSpeed * 15.5)) ||
         (((int)(animationSpeed * 33.5) < g_heroStateTimer && (g_framesNotGrounded != 0)))) {
        bVar5 = true;
      }
    }
    if ((g_heroState == FALLING) || (g_heroState == THRUSTER_PACK_HOVER)) {
      bVar5 = true;
    }
  }
  if (uVar1 == '\x04') {
    iVar7 = FastDecTimerS32(uVar8);
    if (iVar7 == 0) {
      *(float *)((int)pvVar3 + 0x20) =
           *(float *)((int)pvVar3 + 0x20) - *(float *)((int)pvVar3 + 0x30);
      *(float *)((int)pvVar3 + 0x24) =
           *(float *)((int)pvVar3 + 0x24) - *(float *)((int)pvVar3 + 0x34);
      *(float *)((int)pvVar3 + 0x28) =
           *(float *)((int)pvVar3 + 0x28) - *(float *)((int)pvVar3 + 0x38);
      *(float *)((int)pvVar3 + 0x2c) =
           *(float *)((int)pvVar3 + 0x2c) - *(float *)((int)pvVar3 + 0x3c);
      *(undefined4 *)((int)pvVar3 + 8) = DAT_0096ae60;
      RegisterPostDraw(&PTR_M1671_002a94c8_0070ad18,moby);
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x03') {
    *(undefined4 *)((int)pvVar3 + 8) = DAT_0096ae60;
    RegisterPostDraw(&PTR_M1671_002a94c8_0070ad18,moby);
    if (bVar5) {
      *(undefined4 *)((int)pvVar3 + 0x20) = 0x3c4ccccd;
      M167_002a9f18(moby);
    }
    else {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      moby->state = '\x04';
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(0x28,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10
                          );
      auVar9 = ZEXT416(0xffffffff);
      auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar9 = ZEXT416(0xffffffff);
      auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar16 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar15 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar8);
      *(undefined4 *)((uint)pvVar3 & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x18,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar9 = vectorReciprocalEstimateFloatingPoint(auVar15);
      auVar10 = loadVectorLeftIndexed(0x14,0x2aa994);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar15,auVar12);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar14,auVar11);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar15,auVar12);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar13);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar15,auVar12);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar16);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar14);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x30,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x30U & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x1c,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13
                          );
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x34,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x20,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11)
      ;
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x38,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x38U & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x24,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13)
      ;
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x3c,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x3cU & 0xfffffffc) = uVar4;
    }
  }
  else if (uVar1 == '\x02') {
    *(float *)((int)pvVar3 + 0x20) = *(float *)((int)pvVar3 + 0x20) + *(float *)((int)pvVar3 + 0x30)
    ;
    *(float *)((int)pvVar3 + 0x24) = *(float *)((int)pvVar3 + 0x24) + *(float *)((int)pvVar3 + 0x34)
    ;
    *(float *)((int)pvVar3 + 0x28) = *(float *)((int)pvVar3 + 0x28) + *(float *)((int)pvVar3 + 0x38)
    ;
    *(float *)((int)pvVar3 + 0x2c) = *(float *)((int)pvVar3 + 0x2c) + *(float *)((int)pvVar3 + 0x3c)
    ;
    *(undefined4 *)((int)pvVar3 + 8) = DAT_0096ae60;
    RegisterPostDraw(&PTR_M1671_002a94c8_0070ad18,moby);
    iVar7 = FastDecTimerS32(uVar8);
    if (iVar7 != 0) {
      moby->state = '\x03';
      *(undefined4 *)((int)pvVar3 + 0xc) = 0;
      *(undefined4 *)((int)pvVar3 + 0x28) = 0x3d4ccccd;
      *(undefined4 *)((int)pvVar3 + 0x20) = 0x3c4ccccd;
      *(undefined4 *)((int)pvVar3 + 0x24) = 0x3e4ccccd;
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0x3ccccccd;
    }
  }
  else if (uVar1 == '\x01') {
    iVar7 = Hero_HandGadgetID(3);
    if (iVar7 == 3) {
      if (bVar5) {
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        moby->state = '\x02';
        auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = loadVectorLeftIndexed(0x10,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                             auVar10);
        auVar9 = ZEXT416(0xffffffff);
        auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar9 = ZEXT416(0xffffffff);
        auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar16 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar9 = ZEXT416(0xffffffff);
        auVar17 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar9 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar8);
        *(undefined4 *)((uint)pvVar3 & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x18,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar9 = vectorReciprocalEstimateFloatingPoint(auVar13);
        auVar10 = loadVectorLeftIndexed(0x14,0x2aa994);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar13,auVar12);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar15,auVar11);
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar13,auVar12);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar14);
        auVar14 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar13,auVar12);
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar16);
        auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar15);
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar13 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x30,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x30U & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x1c,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar14);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x34,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x20,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar11);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x38,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x38U & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x24,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar13);
        auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x3c,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x3cU & 0xfffffffc) = uVar4;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0;
        *(undefined4 *)((int)pvVar3 + 0x24) = 0;
        *(undefined4 *)((int)pvVar3 + 0x28) = 0;
        *(undefined4 *)((int)pvVar3 + 0x2c) = 0;
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    moby->updateDistance = -1;
    fVar2 = (moby->pos).z;
    moby->modeBits = moby->modeBits | DISABLED;
    (moby->pos).z = fVar2 + 0.5;
  }
  return;
}


