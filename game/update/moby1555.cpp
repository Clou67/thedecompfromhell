// game/update/moby1555.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x298aac-0x298b80
#include "game/update/moby1555.h"
#include "game/freeze.h"
#include "game/initsky.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0298aac (0xd4 bytes)
/* Moby 1555 */

void UpdateMoby_1555(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((g_SceneId == 5 || g_SceneId == 3 ||
           ((g_SceneId == 6 || (g_SceneId == 7)))))) {
    lVar1 = 0;
    if (g_SceneId == 3) {
      lVar1 = 1;
    }
    else if ((g_SceneId == 5) || (g_SceneId == 6)) {
      lVar1 = 2;
    }
    else if (g_SceneId == 7) {
      lVar1 = 3;
    }
    MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
  }
  return;
}


