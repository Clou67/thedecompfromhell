// game/update/moby817.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x46f590-0x46f740
#include "game/update/moby817.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x046f590 (0x14 bytes)
void M817_0046f590(void)

{
  DAT_00877834 = 0x10000;
  return;
}


// 0x046f5b0 (0x190 bytes)
/* Moby 817 */

void UpdateMoby_817(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined8 in_r9;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = (longlong)(int)moby;
  iVar3 = MB_damage(lVar2,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(lVar2);
    lVar5 = lVar2 + 0x10;
    lVar4 = lVar2 + 0x40;
    uVar6 = 0;
    MB_SpawnDebrisMoby(0,lVar2,0x727,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar6,lVar2,0x728,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar6,lVar2,0x729,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    DeleteMoby(moby);
  }
  return;
}


