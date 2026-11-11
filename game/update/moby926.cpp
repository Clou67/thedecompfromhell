// game/update/moby926.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4b9780-0x4b98ac
#include "game/update/moby926.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/mUnk.h"

// 0x04b9780 (0x14 bytes)
void M926_004b9780(void)

{
  DAT_008f4744 = 0x10000;
  return;
}


// 0x04b9798 (0x114 bytes)
// strings: 0096c165: 'None'

/* Moby 926 */

void UpdateMoby_926(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = moby->pVar;
  bVar1 = moby->state;
  iVar3 = (int)pvVar2 + 0x20;
  if (bVar1 == 0) {
    if (UnlockableItems.mapOMatic == '\x01') {
      DeleteMoby(moby);
    }
    else {
      moby->state = '\x01';
      FUN_004d3720(moby,iVar3);
    }
  }
  else if (bVar1 < 2) {
    iVar3 = FUN_004d3870(moby,iVar3);
    if (iVar3 != 0) {
      moby->state = '\x02';
    }
    if (*(short *)((int)pvVar2 + 0x56) == 1) {
      UnlockableItems.mapOMatic = '\x01';
      CHAR_ARRAY_0096c165[0x21] = '\x01';
      DeleteMoby(moby);
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
  }
  return;
}


