// game/update/moby607.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3d9450-0x3d94e4
#include "game/update/moby607.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x03d9450 (0x14 bytes)
void M607_003d9450(void)

{
  DAT_008537b4 = 0x10000;
  return;
}


// 0x03d9470 (0x74 bytes)
/* Moby 607 */

void UpdateMoby_607(MobyInstance *moby)

{
  if ((g_heroState == FALLING) && (moby->animationId != '\x06')) {
    MB_SetAnimation(moby,6,0,(int)(animationSpeed * 10.5));
  }
  return;
}


