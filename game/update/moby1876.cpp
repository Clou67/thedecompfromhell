// game/update/moby1876.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2cdbb0-0x2cdcf8
#include "game/update/moby1876.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02cdbb0 (0x148 bytes)
/* Moby 1876 */

void UpdateMoby_1876(MobyInstance *moby)

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
    MB_SpawnBoltsFromCrate(lVar2,0,0xffffffffffffffff);
    MB_DistributeBoltsNearHero(lVar2);
    MB_SpawnDebrisMoby(0,lVar2,0x753,lVar2 + 0x10,lVar2 + 0x40,0,0);
    MB_SpawnDebris(lVar2,0x756,1,0x756,1,1,2);
    MB_SpawnReplacementMoby(lVar2,0x755);
    DeleteMoby(moby);
  }
  return;
}


