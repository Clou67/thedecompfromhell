// game/update/moby529.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3aba28-0x3aba80
#include "game/update/moby529.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1546.h"

// 0x03aba28 (0x14 bytes)
void M529_003aba28(void)

{
  DAT_00843774 = 0x10000;
  return;
}


// 0x03aba40 (0x40 bytes)
/* Moby 529 */

void UpdateMoby_529(MobyInstance *moby)

{
  moby->updateDistance = '\b';
  moby->oClass = PURPLE_SHIP_0215;
  RegisterFuncForMoby(&PTR_Space_DrawShipEffects_00707cd8,moby);
  return;
}


