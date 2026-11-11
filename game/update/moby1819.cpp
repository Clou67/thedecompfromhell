// game/update/moby1819.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2c0b34-0x2c0c40
#include "game/update/moby1819.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x02c0b34 (0x14 bytes)
void M1819_002c0b34(void)

{
  DAT_007b7ed8 = 0x10000;
  return;
}


// 0x02c0b48 (0xf8 bytes)
/* Moby 1819 */

void UpdateMoby_1819(MobyInstance *moby)

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
    MB_SpawnDebris(moby,0x71d,1,0x71d,1,5,2);
    MB_SpawnReplacementMoby(moby,0x71c);
    DeleteMoby(moby);
  }
  return;
}


