// game/update/moby1562.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x29a1b0-0x29a264
#include "game/update/moby1562.h"
#include "game/freeze.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x029a1b0 (0x14 bytes)
void M1562_0029a1b0(void)

{
  DAT_007ab8ec = 0x10000;
  return;
}


// 0x029a1c4 (0xa0 bytes)
/* Moby 1562 */

void UpdateMoby_1562(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((g_SceneId == 0) || (g_SceneId == 2)) {
      lVar1 = 0;
      if ((g_SceneId == 0) || (g_SceneId == 2)) {
        lVar1 = 2;
      }
      MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
    }
  }
  return;
}


