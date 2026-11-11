// game/update/moby1873.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2cda70-0x2cdba0
#include "game/update/moby1873.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02cda70 (0x130 bytes)
/* Moby 1873 */

void UpdateMoby_1873(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x753,1,0x753,1,0xb,2);
    MB_SpawnDebris(moby,0x756,1,0x756,1,1,2);
    MB_SpawnReplacementMoby(moby,0x752);
    DeleteMoby(moby);
  }
  return;
}


