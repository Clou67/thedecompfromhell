// game/update/moby482.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x39ecd0-0x39ed0c
#include "game/update/moby482.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x039ecd0 (0x14 bytes)
void M482_0039ecd0(void)

{
  DAT_00843110 = 0x10000;
  return;
}


// 0x039ece8 (0x24 bytes)
/* Moby 482 */

void UpdateMoby_482(MobyInstance *moby)

{
  DeleteMoby(moby);
  return;
}


