// game/update/moby1549.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x298448-0x2984f0
#include "game/update/moby1549.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0298448 (0xa8 bytes)
/* Moby 1549 */

void UpdateMoby_1549(MobyInstance *moby)

{
  longlong lVar1;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((g_SceneId == 0) || (g_SceneId == 1)) {
      lVar1 = 0;
      if (g_SceneId == 0) {
        lVar1 = 3;
      }
      else if (g_SceneId == 1) {
        lVar1 = 2;
      }
      MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar1 << 2) | 0x95cd50) + 0x178));
    }
  }
  return;
}


