// game/update/moby1351.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2552c8-0x255368
#include "game/update/moby1351.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x02552c8 (0x14 bytes)
void M1351_002552c8(void)

{
  DAT_0079bae4 = 0x10000;
  return;
}


// 0x02552e8 (0x80 bytes)
/* Moby 1351 */

void UpdateMoby_1351(MobyInstance *moby)

{
  float fVar1;
  
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_standingOnMoby == moby)) && (g_framesNotGrounded == 0)) &&
          (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
    fVar1 = (moby->pos).z;
    moby->state = '\x02';
    (moby->pos).z = fVar1 - 0.3;
  }
  return;
}


