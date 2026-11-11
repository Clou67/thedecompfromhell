// game/update/moby254.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x31cf88-0x31cfd0
#include "game/update/moby254.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x031cf88 (0x14 bytes)
void M254_0031cf88(void)

{
  DAT_007ffe68 = 0x10000;
  return;
}


// 0x031cfa0 (0x30 bytes)
/* Moby 254 */

void UpdateMoby_254(MobyInstance *moby)

{
  if (DAT_010bb484 != 0) {
                    /* WARNING: Load size is inaccurate */
    DAT_00969ed6 = 2;
    DAT_0096bfba = (undefined2)*moby->pVar;
  }
  return;
}


