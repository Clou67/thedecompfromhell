// game/update/moby533.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3ac638-0x3ac660
#include "game/update/moby533.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x03ac638 (0x28 bytes)
/* Moby 533 */

void UpdateMoby_533(MobyInstance *moby)

{
  if (g_SpaceshipPtr != moby) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (NO_UPDATE|DISABLED);
  }
  return;
}


