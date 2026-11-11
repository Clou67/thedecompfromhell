// game/update/moby431.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3725f8-0x372898
#include "game/update/moby431.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03725f8 (0x2a0 bytes)
/* Moby 431 */

void UpdateMoby_431(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  ushort uVar5;
  void *pvVar6;
  MobyClass *pMVar7;
  MobyInstance *moby_00;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  ulonglong uVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  
  pvVar6 = moby->pVar;
  uVar13 = ZEXT48(pvVar6);
  iVar11 = MB_damage(moby,0x210000,0);
  bVar1 = moby->state;
  if (iVar11 == 0) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0x54,uVar13);
        auVar16 = loadVectorRightIndexed(100,uVar13);
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar14 | auVar16,auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x50,uVar13
                          );
        *(undefined4 *)((int)pvVar6 + 0x50U & 0xfffffffc) = uVar8;
        moby->state = '\x01';
        return;
      }
      iVar11 = FastDecTimerS32(uVar13 + 0x50);
      if (iVar11 == 0) {
        return;
      }
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = loadVectorLeftIndexed(0x54,uVar13);
      auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar16 = loadVectorRightIndexed(100,uVar13);
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar15 | auVar16,auVar14);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x50,uVar13);
      *(undefined4 *)((int)pvVar6 + 0x50U & 0xfffffffc) = uVar8;
      bVar1 = moby->group;
      puVar12 = (ushort *)(&g_MobyGroups)[bVar1];
      if (puVar12 == (ushort *)0x0) {
        return;
      }
      uVar5 = *puVar12;
      do {
        moby_00 = g_MobyInstance + (uVar5 & 0x7fff);
        if (0x7f < moby_00->state) {
          pvVar6 = moby_00->pVar;
          uVar13 = ZEXT48(pvVar6);
          InitMobyInstance(moby_00,0xfc);
          moby_00->pVar = pvVar6;
          moby_00->group = bVar1;
          auVar14 = ZEXT416(0xfffffff0);
          uVar9 = g_heroMobyPtr->color;
          uVar10 = g_heroMobyPtr->light;
          moby_00->updateDistance = '@';
          moby_00->color = uVar9;
          moby_00->light = uVar10;
          moby_00->drawDistance = 0x40;
          fVar2 = (moby->pos).z;
          fVar3 = (moby->pos).y;
          fVar4 = (moby->pos).w;
          pMVar7 = moby_00->pClass;
          (moby_00->pos).x = (moby->pos).x;
          (moby_00->pos).y = fVar3;
          (moby_00->pos).w = fVar4;
          (moby_00->pos).z = fVar2 + 5.0;
          moby_00->collision = pMVar7->collision;
          auVar15 = loadVectorLeftIndexed(0x24,uVar13);
          auVar16 = loadVectorRightIndexed(0x34,uVar13);
          auVar14 = vectorShiftRightAlgebraicWord
                              (auVar15 | auVar16,
                               auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
          auVar14 = vectorConvertFromSignedFixedPointWord(auVar14,0);
          auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x20,
                             uVar13);
          *(undefined4 *)((int)pvVar6 + 0x20U & 0xfffffffc) = uVar8;
          fVar3 = (moby->rotation).z;
          moby_00->state = '\x03';
          (moby_00->rotation).z = fVar3;
          moby_00->modeBits = CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED;
          uVar13 = MB_randInt(0xff);
          if ((uVar13 & 1) != 0) {
            moby_00->modeBits = moby_00->modeBits | MIRROR;
          }
          UpdateMobyTransform(moby_00);
          return;
        }
        uVar5 = puVar12[1];
        puVar12 = puVar12 + 1;
      } while (-2 < (short)uVar5);
      return;
    }
    if (bVar1 != 99) {
      return;
    }
  }
  else {
    moby->state = 'c';
  }
  DeleteMoby(moby);
  return;
}


