// game/update/moby1813.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2bc750-0x2bc860
#include "game/update/moby1813.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02bc750 (0x110 bytes)
/* Moby 1813 */

void UpdateMoby_1813(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
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
    MB_SpawnDebrisMoby(0,lVar2,0x717,lVar2 + 0x10,lVar2 + 0x40,0,0);
    MB_SpawnReplacementMoby(lVar2,0x718);
    DeleteMoby(moby);
  }
  return;
}


