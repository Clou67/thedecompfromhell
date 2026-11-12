// game/update/moby1550.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2984f4-0x298594
#include "game/update/moby1550.h"
#include "game/freeze.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x02984f4 (0xa0 bytes)
/* Moby 1550 */

void UpdateMoby_1550(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((g_SceneId == 10) || (g_SceneId == 0xb)) {
      lVar1 = 0;
      if ((g_SceneId == 10) || (g_SceneId == 0xb)) {
        lVar1 = 3;
      }
      MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
    }
  }
  return;
}


