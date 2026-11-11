// game/update/moby809.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x46c32c-0x46c608
#include "game/update/moby809.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby760.h"
#include "game/update/moby761.h"
#include "idol/fastfunc.h"

// 0x046c32c (0x14 bytes)
void M809_0046c32c(void)

{
  DAT_0087767c = 0x10000;
  return;
}


// 0x046c358 (0x234 bytes)
/* Moby 809 */

void UpdateMoby_809(MobyInstance *moby)

{
  undefined4 *puVar1;
  double dVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar9;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x30);
  puVar1[3] = in_vr31_32_3;
  puVar1[2] = in_vr31_32_2;
  puVar1[1] = in_vr31_32_1;
  *puVar1 = in_vr31_32_0;
  if (moby->state == 0) {
    DAT_010d99c8 = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
    auVar3 = loadVectorLeftIndexed(0x76a0,0x870000);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x30,0x46c340);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar9 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = vectorAddFloatingPoint(auVar4,auVar9);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar6,auVar3,auVar5);
    auVar4 = loadVectorLeftIndexed(0x76a4,0x870000);
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar4,0);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010d99b0 = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99b0,0x10e0000);
    auVar4 = vectorAddFloatingPoint(auVar4,auVar9);
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar3);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010d99b4 = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99b4,0x10e0000);
    dVar2 = (double)FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)DAT_008776a4 + 0.5)));
    DAT_010d99b8 = (float)(1.0 / dVar2);
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = ZEXT416(0xffffffff);
    auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = ZEXT416(0xffffffff);
    auVar6 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar6 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar7 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(0x76a8,0x870000);
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = vectorAddFloatingPoint(auVar3,auVar9);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar8,auVar3,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010d99bc = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99bc,0x10e0000);
    auVar3 = loadVectorLeftIndexed(8,0x46c340);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorReciprocalEstimateFloatingPoint(auVar8);
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar8,auVar3);
    auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar9,auVar5);
    auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar8,auVar3);
    auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar5,auVar6);
    auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar8,auVar3);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar4,auVar3,auVar7);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010d99c0 = storeVectorElementWordIndexed
                             (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,
                              0xffffffffffff99c0,0x10e0000);
  }
  else if ((moby->state < 2) &&
          (DAT_010d99c4 = -(DAT_0071f408 * DAT_008776ac - DAT_010d99c4), DAT_010d99c4 <= -8.0)) {
    DAT_010d99c4 = DAT_010d99c4 + 8.0;
  }
  return;
}


// 0x046c58c (0x18 bytes)
int FUN_0046c58c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_010d99c8;
  DAT_010d99c8 = DAT_010d99c8 + param_1;
  return iVar1;
}


// 0x046c5a8 (0x60 bytes)
void M809_0046c5a8(MobyInstance *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1->pVar;
  if (*(short *)((int)pvVar1 + 0x12) != -1) {
    DeletePointLight();
    *(undefined2 *)((int)pvVar1 + 0x12) = 0xffff;
  }
  DeleteMoby(param_1);
  return;
}


