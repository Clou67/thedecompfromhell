// game/update/moby1033.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1920dc-0x192330
#include <stdio.h>
#include "game/update/moby1033.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01920dc (0x14 bytes)
void M1033_001920dc(void)

{
  DAT_0073fe34 = 0x10000;
  return;
}


// 0x0192100 (0x230 bytes)
// strings: 006542e4: 'Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n'

/* Moby 1033 */

void UpdateMoby_1033(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  pvVar2 = moby->pVar;
  uVar7 = ZEXT48(pvVar2);
  if (pvVar2 == (void *)0x0) {
    printf("Moby Class %d Instance %d has no pVars!  May be in the art file.\n\tMobyDeleted\n"
                 ,moby->oClass,moby->uid);
    DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 == '\x04') {
      iVar6 = FastDecTimerS32(uVar7 + 0xb0);
      if (iVar6 != 0) {
        PlayMobySound(0,0,moby);
        moby->state = '\x01';
      }
    }
    else if (uVar1 == '\x03') {
      fVar4 = (moby->pos).z - 1.5 / (animationSpeed * 45.0);
      (moby->pos).z = fVar4;
      if (fVar4 <= *(float *)((int)pvVar2 + 0xa8)) {
        (moby->pos).z = *(float *)((int)pvVar2 + 0xa8);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        moby->state = '\x04';
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(8,0x1920f0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xb0,uVar7);
        *(undefined4 *)((int)pvVar2 + 0xb0U & 0xfffffffc) = uVar3;
      }
    }
    else if (uVar1 == '\x02') {
      iVar6 = FastDecTimerS32(uVar7 + 0xb0);
      if (iVar6 != 0) {
        PlayMobySound(0,0,moby);
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      fVar5 = (moby->pos).z + 1.5 / (animationSpeed * 45.0);
      (moby->pos).z = fVar5;
      fVar4 = *(float *)((int)pvVar2 + 0xa8) + 1.5;
      if (fVar4 <= fVar5) {
        (moby->pos).z = fVar4;
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        moby->state = '\x02';
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(8,0x1920f0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xb0,uVar7);
        *(undefined4 *)((int)pvVar2 + 0xb0U & 0xfffffffc) = uVar3;
      }
    }
    else if (uVar1 == '\0') {
      *(undefined4 *)((int)pvVar2 + 0x20) = 0;
      *(undefined2 *)((int)pvVar2 + 0x24) = 0;
      *(undefined1 *)((int)pvVar2 + 0x28) = 4;
      *(undefined2 *)((int)pvVar2 + 0x3e) = 5;
      *(f32 *)((int)pvVar2 + 0xa0) = (moby->pos).x;
      *(f32 *)((int)pvVar2 + 0xa4) = (moby->pos).y;
      *(f32 *)((int)pvVar2 + 0xa8) = (moby->pos).z;
      *(f32 *)((int)pvVar2 + 0xac) = (moby->pos).w;
      moby->state = '\x01';
    }
  }
  return;
}


