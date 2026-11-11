// game/update/moby1476.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x28a988-0x28a9e0
#include "game/update/moby1476.h"
#include "game/freeze.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x028a988 (0x14 bytes)
void M1476_0028a988(void)

{
  DAT_007aaf5c = 0x10000;
  return;
}


// 0x028a9a0 (0x40 bytes)
/* Moby 1476 */

void UpdateMoby_1476(MobyInstance *moby)

{
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}


