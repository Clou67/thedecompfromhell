// game/update/moby1304.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2437c0-0x2437fc
#include "game/update/moby1304.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x02437c0 (0x14 bytes)
void M1304_002437c0(void)

{
  DAT_0078e1c4 = 0x10000;
  return;
}


// 0x02437d8 (0x24 bytes)
/* Moby 1304 */

void UpdateMoby_1304(MobyInstance *moby)

{
  DeleteMoby(moby);
  return;
}


