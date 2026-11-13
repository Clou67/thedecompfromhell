// game/update/moby1432.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x27c5a4-0x27c5e4
#include "game/update/moby1432.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x027c5a4 (0x14 bytes)
void M1432_0027c5a4(void)

{
  DAT_007aa700 = 0x10000;
  return;
}


// 0x027c5b8 (0x2c bytes)
/* Moby 1432 */

void UpdateMoby_1432(MobyInstance *moby)

{
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | (NO_UPDATE|DISABLED);
  }
  return;
}


