// game/update/moby1260.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x22b814-0x22b8ec
#include "game/update/moby1260.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1242.h"
#include "game/water.h"

// 0x022b814 (0x14 bytes)
void M1260_0022b814(void)

{
  DAT_007713cc = 0x10000;
  return;
}


// 0x022b828 (0x2c bytes)
void M1260_0022b828(void)

{
  SubmitZone((OceanPlane *)&DAT_00775020);
  return;
}


// 0x022b858 (0x94 bytes)
/* Moby 1260 */

void UpdateMoby_1260(MobyInstance *moby)

{
  if (moby->state == 0) {
    OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_00775020,ZEXT48(&PTR_DAT_00770000),0x40)
    ;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterMobyDraw(&PTR_M1260_0022b828_00709980,moby);
  }
  return;
}


