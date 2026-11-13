// game/update/moby1560.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x299fdc-0x29a0d8
#include "game/update/moby1560.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x0299fdc (0x14 bytes)
void M1560_00299fdc(void)

{
  DAT_007ab87c = 0x10000;
  return;
}


// 0x0299ff0 (0xe8 bytes)
/* Moby 1560 */

void UpdateMoby_1560(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((g_SceneId == 2 || g_SceneId == 1 ||
           (((g_SceneId == 3 || (g_SceneId == 4)) || (g_SceneId == 6)))))) {
    lVar1 = 0;
    if (g_SceneId == 1) {
      lVar1 = 4;
    }
    else if (((g_SceneId == 2) || (g_SceneId == 3)) || (g_SceneId == 4)) {
      lVar1 = 2;
    }
    else if (g_SceneId == 6) {
      lVar1 = 1;
    }
    MB_SpawnSparks_oClass2EE(*(undefined4 *)((int)&g_SpaceSceneMobys[0] + (int)(lVar1 << 2)));
  }
  return;
}


