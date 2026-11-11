// game/update/moby1655.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2a8048-0x2a8254
#include "game/update/moby1655.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02a8048 (0x20c bytes)
/* Moby 1655 */

void UpdateMoby_1655(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
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
    lVar7 = lVar3 + 0x10;
    lVar6 = lVar3 + 0x40;
    uVar8 = 0;
    MB_SpawnDebrisMoby(0,lVar3,0x679,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar8,lVar3,0x67a,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar8,lVar3,0x67b,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = CreateMoby(COMPUTER_DAMAGED);
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


