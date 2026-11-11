// game/update/moby361.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x354e58-0x354f08
#include "game/update/moby361.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0354e58 (0xb0 bytes)
/* Moby 361 */

void UpdateMoby_361(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
                    /* WARNING: Load size is inaccurate */
    if (*moby->pVar == -1) {
      DeleteMoby(moby);
    }
  }
  else if (((moby->state < 2) &&
           (0x43420000 <
            (int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                 ((int)g_heroPosition.z >> 0x1f)))) && (g_heroState != TURRET_PLANE_UI)) {
                    /* WARNING: Load size is inaccurate */
    DAT_0096bfba = (undefined2)*moby->pVar;
  }
  return;
}


