// game/update/moby20.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2e6768-0x2e68a0
#include "game/update/moby20.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/vendor.h"

// 0x02e6768 (0x138 bytes)
/* Moby 20 */

void UpdateMoby_20(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (1 < moby->state) {
    return;
  }
  fVar2 = fVar2 - g_heroPosition.y;
  fVar1 = fVar1 - g_heroPosition.x;
  if ((4.0 <= SQRT(fVar1 * fVar1 + fVar2 * fVar2)) || (UnlockableItems.hydroPack != '\0')) {
    *(undefined4 *)moby->pVar = 0xffffffff;
  }
  else if (g_boltCount < 4000) {
    MB_ShowPersistentMessage(4,0x2ee9);
  }
  else {
    iVar3 = MB_ShowPersistentMessage(4,0x2ee8);
    if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (iVar3 != 0)) {
      g_boltCount = g_boltCount + -4000;
      MB_UnlockItem(4,1);
      moby->state = '\x02';
    }
  }
  return;
}


