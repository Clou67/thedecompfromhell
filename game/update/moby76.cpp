// game/update/moby76.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x44f060-0x44f348
#include "game/update/moby76.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1231.h"
#include "game/update/moby771.h"
#include "idol/fastfunc.h"

// 0x044f060 (0x2e8 bytes)
/* Moby 76 */

void UpdateMoby_76(MobyInstance *moby)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  lVar6 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar2 = (undefined4 *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->state = '\x01';
    }
    else {
      iVar7 = FUN_00214100(*puVar2);
      if ((iVar7 != 0) && (moby->state = '\x02', moby->animationId != '\x01')) {
        MB_SetAnimation(lVar6,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 < 3) {
    if (((moby->animationId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x02')) {
      MB_SetAnimation(lVar6,2,0,(int)(animationSpeed * 10.5));
    }
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if (((SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 16.0) && ((int)puVar2[3] <= (int)puVar2[4])) &&
       ((iVar7 = FastDecTimerS32(ZEXT48(puVar2) + 8), iVar7 != 0 &&
        (iVar7 = FUN_00454348(puVar2[1],lVar6 + 0x10), iVar7 != 0)))) {
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      puVar2[3] = puVar2[3] + 1;
      auVar8 = loadVectorLeftIndexed(8,0x44f050);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,8,ZEXT48(puVar2))
      ;
      *(undefined4 *)((uint)(puVar2 + 2) & 0xfffffffc) = uVar3;
    }
    iVar7 = FUN_00214100(*puVar2);
    if (iVar7 == 0) {
      puVar2[3] = 0;
      moby->state = '\x03';
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar6,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (((bVar1 < 4) && (moby->animationId == '\x03')) &&
          (((moby->field43_0x70 & 2U) != 0 && (moby->state = '\x01', moby->animationId != '\0')))) {
    MB_SetAnimation(lVar6,0,0,(int)(animationSpeed * 10.5));
  }
  return;
}


