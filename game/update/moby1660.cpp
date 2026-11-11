// game/update/moby1660.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2a8470-0x2a86d4
#include "game/update/moby1660.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby166.h"

// 0x02a8470 (0x7c bytes)
void M1660_002a8470(void)

{
  undefined8 in_r0;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x2a8464);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_007b5a5c = 0x10000;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_00faf850 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xfffffffffffff850,0xfb0000);
  auVar1 = loadVectorLeftIndexed(4,0x2a8464);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_00faf854 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xfffffffffffff854,0xfb0000);
  return;
}


// 0x02a84f8 (0x1dc bytes)
/* Moby 1660 */

void UpdateMoby_1660(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  undefined8 uVar6;
  
  lVar3 = (longlong)(int)moby;
  iVar4 = MB_damage(lVar3,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(lVar3);
    uVar6 = 0;
    MB_SpawnDebrisMoby(0,lVar3,0x67e,lVar3 + 0x10,lVar3 + 0x40,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby
              (uVar6,lVar3,0x67e,lVar3 + 0x10,lVar3 + 0x40,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = CreateMoby(ORANGE_LIGHT_DAMAGED_067D);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->drawDistance = 0xff;
      pMVar5->enabled = '\x01';
      (pMVar5->pos).x = (moby->pos).x;
      (pMVar5->pos).y = (moby->pos).y;
      (pMVar5->pos).z = (moby->pos).z;
      (pMVar5->pos).w = (moby->pos).w;
      (pMVar5->rotation).x = (moby->rotation).x;
      (pMVar5->rotation).y = (moby->rotation).y;
      (pMVar5->rotation).z = (moby->rotation).z;
      (pMVar5->rotation).w = (moby->rotation).w;
      uVar2 = moby->light;
      pMVar5->color = moby->color;
      pMVar5->light = uVar2;
      UpdateMobyTransform(pMVar5);
    }
    DeleteMoby(moby);
  }
  return;
}


