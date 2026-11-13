// game/update/moby460.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x392e10-0x392ee0
#include "game/update/moby460.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"

// 0x0392e10 (0x14 bytes)
void M460_00392e10(void)

{
  DAT_008422e8 = 0x10000;
  return;
}


// 0x0392e28 (0x2c bytes)
void M460_00392e28(void)

{
  SubmitZone(&OCEAN_UMBRIS);
  return;
}


// 0x0392e58 (0x88 bytes)
/* Moby 460 */

void UpdateMoby_460(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    OceanPlane_SetDepth(1.0,&OCEAN_UMBRIS,ZEXT48(&DAT_00392e54),0x80);
  }
  else if (moby->state < 2) {
    RegisterOceanUpdate(&PTR_M460_00392e28_0070cd80,moby);
  }
  return;
}


