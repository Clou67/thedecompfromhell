// game/update/moby1404.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x26e290-0x26e3a4
#include "game/update/moby1404.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1118.h"

// 0x026e290 (0x114 bytes)
/* Moby 1404 */

void UpdateMoby_1404(MobyInstance *moby)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  piVar1 = (int *)moby->pVar;
  if ((worldUpdateTime != 0) && (g_gameMode == GAME_MODE_NORMAL)) {
    if ((&g_MiscLevelFlags.field92_0x5c)[piVar1[1]] == 0) {
      iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
      fVar3 = g_heroPosition.w;
      fVar2 = g_heroPosition.y;
      if (iVar4 != 0) {
        DAT_0095cd60 = g_heroPosition.x;
        (&g_MiscLevelFlags.field92_0x5c)[piVar1[1]] = 1;
        DAT_0095cd64 = fVar2;
        DAT_0095cd6c = fVar3;
        DAT_0095cd68 = g_heroGroundZ;
        DAT_0095cd70 = g_heroRotation.x;
        DAT_0095cd74 = g_heroRotation.y;
        DAT_0095cd9a = 1;
        DAT_0095cd78 = g_heroRotation.z;
        DAT_0095cd7c = g_heroRotation.w;
        mode_sceneInit(piVar1[2]);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


