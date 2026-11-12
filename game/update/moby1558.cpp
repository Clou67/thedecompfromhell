// game/update/moby1558.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x298c3c-0x298cec
#include "game/update/moby1558.h"
#include "game/freeze.h"
#include "game/inittransition.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x0298c3c (0xb0 bytes)
/* Moby 1558 */

void UpdateMoby_1558(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (g_SceneId == 2)) {
    MB_SpawnSparks_oClass2EE(g_SpaceSceneMobys[2]);
  }
  return;
}


