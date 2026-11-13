// game/update/moby1880.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2cdf60-0x2ce014
#include "game/update/moby1880.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby188.h"

// 0x02cdf60 (0xac bytes)
void M1880_002cdf60(void)

{
  undefined8 in_r0;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x2cdf50);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = ZEXT416(0xffffffff);
  auVar5 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar2);
  auVar4 = loadVectorLeftIndexed(8,0x2cdf50);
  auVar1 = ZEXT416(0xffffffff);
  auVar2 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar2 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar6 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar6 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar8 = loadVectorLeftIndexed(4,0x2cdf50);
  auVar7 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_007bd580 = 0x10000;
  auVar3 = vectorConvertFromSignedFixedPointWord(auVar3,0);
  auVar8 = vectorReciprocalEstimateFloatingPoint(auVar3);
  auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar3,auVar4);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar8,auVar9,auVar2);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar3,auVar4);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar2,auVar8,auVar5);
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar3,auVar4);
  auVar3 = vectorMultiplyAddFloatingPoint(auVar2,auVar3,auVar6);
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar7);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010a22c0 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x22c0,
                            0x10a0000);
  return;
}


// 0x02ce010 (0x4 bytes)
/* Moby 1880 */

MobyInstance * UpdateMoby_1880(MobyInstance *moby)

{
  return moby;
}


