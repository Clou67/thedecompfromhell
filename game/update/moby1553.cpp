// game/update/moby1553.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2989a0-0x298aa4
#include "game/update/moby1553.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initsky.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02989a0 (0x104 bytes)
/* Moby 1553 */

void UpdateMoby_1553(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
           ((g_SceneId == 2 || g_SceneId == 1 ||
            ((g_SceneId == 4 || (g_SceneId == 5)))))) &&
          ((g_SceneId != 1 || ((int)(animationSpeed * 2254.5) < g_SpaceSceneFrame))))
  {
    lVar1 = 0;
    if ((g_SceneId == 1) || (g_SceneId == 4)) {
      lVar1 = 3;
    }
    else if ((g_SceneId == 2) || (g_SceneId == 5)) {
      lVar1 = 2;
    }
    MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
  }
  return;
}


