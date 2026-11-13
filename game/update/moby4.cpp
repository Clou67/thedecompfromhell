// game/update/moby4.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3627a4-0x36280c
#include "game/update/moby4.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x03627a4 (0x68 bytes)
/* Moby 4 */

void UpdateMoby_4(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterPostDraw(&PTR_M401_00362770_0070c7c0,moby);
  }
  return;
}


