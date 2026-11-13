// game/update/moby1557.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x298b84-0x298c3c
#include "game/update/moby1557.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0298b84 (0xb8 bytes)
/* Moby 1557 */

void UpdateMoby_1557(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((g_SceneId == 1 || (g_SceneId == 7)))) {
    MB_SpawnSparks_oClass2EE
              (*(undefined4 *)
                (((uint)((ZERO_MASK((1 - g_SceneId)) & 2U) << 2) | 0x95cd50) +
                0x178));
  }
  return;
}


