// game/update/moby716.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4317b4-0x431a0c
#include "game/update/moby716.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04317b4 (0xcc bytes)
void M716_004317b4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 1) {
      if ((-1 < param_2) && (*(char *)(param_1 + 0x20) == '\x02')) {
        if (*(char *)(param_1 + 0x53) != '\x05') {
          MB_SetAnimation(param_1,5,0,10);
        }
        *(undefined1 *)(param_1 + 0x20) = 5;
      }
    }
    else if (((param_2 < 3) && (1 < param_2)) && (*(char *)(param_1 + 0x20) == '\x02')) {
      if (*(char *)(param_1 + 0x53) != '\x06') {
        MB_SetAnimation(param_1,6,0,10);
      }
      *(undefined1 *)(param_1 + 0x20) = 6;
    }
  }
  return;
}


// 0x0431880 (0x14 bytes)
void M716_00431880(void)

{
  DAT_00859ea4 = 0x10000;
  return;
}


// 0x04318a8 (0x164 bytes)
/* Moby 716 */

void UpdateMoby_716(MobyInstance *moby)

{
  void *pvVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  pvVar1 = moby->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (moby->state == 0) {
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (iVar6 = FastDecTimerS32(uVar7 + 8), iVar6 != 0)) &&
          (fVar3 = g_heroPosition.y - (moby->pos).y, fVar4 = g_heroPosition.x - (moby->pos).x,
          fVar5 = g_heroPosition.z - (moby->pos).z,
          SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_00859ec8)) {
    auVar8 = loadVectorLeftIndexed(in_LR,uVar7);
    auVar10 = ZEXT416(0xffffffff);
    auVar11 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar9 = loadVectorRightIndexed(0x10,uVar7);
    auVar10 = loadVectorLeftIndexed(in_LR,0x431898);
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar8 | auVar9,0);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorAddFloatingPoint
                        (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
    auVar11 = loadVectorLeftIndexed(0x864,0x969ce0);
    auVar9 = loadVectorLeftIndexed(4,0x431898);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar12);
    auVar10 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8.piece<0,4>() = auVar11.piece<0,4>() + auVar10.piece<0,4>();
    auVar8.piece<8,8>() = auVar10.piece<8,8>();
    auVar8.piece<4,4>() = auVar11.piece<4,4>() + auVar10.piece<4,4>();
    auVar9.piece<0,8>() = auVar8.piece<0,8>();
    auVar9.piece<12,4>() = auVar10.piece<12,4>();
    auVar9.piece<8,4>() = auVar11.piece<8,4>() + auVar10.piece<8,4>();
    auVar10.piece<0,12>() = auVar9.piece<0,12>();
    auVar10.piece<12,4>() = auVar11.piece<12,4>() + auVar9.piece<12,4>();
    auVar8 = vectorCompareGreaterThanSignedWord(auVar10,auVar12);
    auVar10 = vectorConditionalSelect(auVar10,auVar12,auVar8);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_0096a544 = storeVectorElementWordIndexed
                             (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x864,
                              0x969ce0);
    auVar10 = loadVectorLeftIndexed(8,0x431898);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar14);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,uVar7);
    *(undefined4 *)((int)pvVar1 + 8U & 0xfffffffc) = uVar2;
  }
  return;
}


