// game/update/moby1434.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x27c5f8-0x27c750
// shared update function UpdateMoby_{1434_1435}; registered for oClasses 1434, 1435
#include "game/update/moby1434.h"
#include "game/freeze.h"
#include "game/initsky.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1422.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 1434, 1435
// 0x027c5f8 (0x158 bytes)
/* Moby 1434
   Moby 1435 */

void UpdateMoby_1434(MobyInstance *moby)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (1 < bVar1) {
    if (2 < bVar1) {
      return;
    }
    if ((g_deplanetizerUp != 0) && ((moby->rotation).x == 0.0)) {
      dVar3 = (double)(101.6 - (moby->pos).z);
      dVar2 = (double)FastWrapRot((moby->rotation).x,3.1415927);
      (moby->rotation).x = (float)dVar2;
      (moby->pos).z = (float)(dVar3 * 2.0 + (double)(moby->pos).z);
    }
    if (g_gameMode == GAME_MODE_SCENE) {
      return;
    }
    moby->enabled = '\x01';
    moby->state = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    return;
  }
  if (((g_gameMode == GAME_MODE_SCENE) && (g_SceneId == 3)) ||
     ((worldUpdateTime < 5 && ((g_deplanetizerUp != 0 && ((moby->rotation).x == 0.0)))))) {
    moby->enabled = '\0';
    moby->state = '\x02';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


