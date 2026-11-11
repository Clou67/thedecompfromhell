// game/update/moby1834.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2c1abc-0x2c1bb4
#include "game/update/moby1834.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02c1abc (0xf8 bytes)
/* Moby 1834 */

void UpdateMoby_1834(MobyInstance *moby)

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
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x72c,1,0x72c,1,1,2);
    MB_SpawnReplacementMoby(moby,0x72b);
    DeleteMoby(moby);
  }
  return;
}


