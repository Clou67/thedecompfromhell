// game/update/moby637.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3f9cc0-0x3f9d70
#include "game/update/moby637.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x03f9cc0 (0x14 bytes)
void M637_003f9cc0(void)

{
  DAT_008545dc = 0x10000;
  return;
}


// 0x03f9ce0 (0x90 bytes)
/* Moby 637 */

void UpdateMoby_637(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((g_heroType == '\0') &&
     (fVar1 = g_heroPosition.y - (moby->pos).y, fVar2 = g_heroPosition.x - (moby->pos).x,
     fVar3 = g_heroPosition.z - (moby->pos).z,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 4.0)) {
    SetHeroType(2,0x5a,moby);
  }
  return;
}


