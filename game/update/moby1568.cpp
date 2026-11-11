// game/update/moby1568.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x29e008-0x29e0f4
#include "game/update/moby1568.h"
#include "game/freeze.h"
#include "game/initsky.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x029e008 (0xec bytes)
/* Moby 1568 */

void UpdateMoby_1568(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  double dVar3;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((g_gameMode == GAME_MODE_SCENE) && (g_SceneId == 3)) {
      moby->enabled = '\0';
      fVar2 = (moby->rotation).x;
      moby->modeBits = moby->modeBits | DISABLED;
      dVar3 = (double)FastWrapRot(fVar2,3.1415927);
      (moby->rotation).x = (float)dVar3;
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->enabled = '\x01';
    moby->state = '\x03';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}


