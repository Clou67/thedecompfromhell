// game/update/moby1.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x18095c-0x180984
#include "game/update/moby1.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x018095c (0x14 bytes)
void SECTION_HEADER_MOBY1(void)

{
  DAT_0073b5fc = 0x10000;
  return;
}


// 0x0180970 (0x14 bytes)
/* Moby 1 */

void UpdateMoby_1(MobyInstance *moby)

{
                    /* WARNING: Load size is inaccurate */
  *(int *)moby->pVar = *moby->pVar + 1;
  return;
}


