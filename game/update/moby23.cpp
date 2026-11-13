// game/update/moby23.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2fd8e0-0x2fda38
#include "game/update/moby23.h"
#include "game/collproc.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02fd8e0 (0x158 bytes)
// strings: 0096c165: 'None'

/* Moby 23 */

void UpdateMoby_23(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (UnlockableItems.o2Mask == '\0') {
      fVar2 = (moby->pos).z;
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | DISABLED;
      (moby->pos).z = fVar2 + 0.75;
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (((1 < bVar1) && (bVar1 < 3)) &&
          (FastWrapRot((moby->rotation).z,g_FrameTime * 4.712389),
          fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
          SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)) {
    UnlockableItems.o2Mask = '\x01';
    CHAR_ARRAY_0096c165[6] = '\x01';
    memcard_Save(0,-1);
    Help_QueueMessage(STR_THE_O2_MASK_ALLOWS_0x2AF8,0x3a);
    DeleteMoby(moby);
  }
  return;
}


