// game/update/moby1551.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2985a0-0x298654
#include "game/update/moby1551.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02985a0 (0xb4 bytes)
/* Moby 1551 */

void UpdateMoby_1551(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (g_SceneId == 5)) &&
          (g_SpaceSceneFrame <= (int)(animationSpeed * 127.5))) {
    MB_SpawnSparks_oClass2EE(g_SpaceSceneMobys[2]);
  }
  return;
}


