// game/update/moby1418.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x272c00-0x272cb8
#include "game/update/moby1418.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"

// 0x0272c00 (0x14 bytes)
void M1418_00272c00(void)

{
  DAT_007a22b8 = 0x10000;
  return;
}


// 0x0272c18 (0x38 bytes)
void M1418_00272c18(void)

{
  IcePass(&DAT_007a9b80,0x13,0x2e,0x2f);
  return;
}


// 0x0272c50 (0x68 bytes)
/* Moby 1418 */

void UpdateMoby_1418(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterOceanUpdate(&PTR_M1418_00272c18_0070a490,moby);
  }
  return;
}


