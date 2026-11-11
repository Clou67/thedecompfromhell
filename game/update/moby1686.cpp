// game/update/moby1686.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2acde4-0x2acf90
#include "game/update/moby1686.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02acde4 (0x14 bytes)
void M1686_002acde4(void)

{
  DAT_007b727c = 0x10000;
  return;
}


// 0x02ace00 (0x190 bytes)
/* Moby 1686 */

void UpdateMoby_1686(MobyInstance *moby)

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
    MB_SpawnDebrisMoby(0,lVar2,0x698,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar6,lVar2,0x699,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar6,lVar2,0x69a,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    DeleteMoby(moby);
  }
  return;
}


