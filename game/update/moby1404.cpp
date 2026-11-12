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
        g_SceneHeroWarpPos.x = g_heroPosition.x;
        (&g_MiscLevelFlags.field92_0x5c)[piVar1[1]] = 1;
        g_SceneHeroWarpPos.y = fVar2;
        g_SceneHeroWarpPos.w = fVar3;
        g_SceneHeroWarpPos.z = g_heroGroundZ;
        g_SceneHeroWarpRot.x = g_heroRotation.x;
        g_SceneHeroWarpRot.y = g_heroRotation.y;
        g_SceneHeroWarpPending = 1;
        g_SceneHeroWarpRot.z = g_heroRotation.z;
        g_SceneHeroWarpRot.w = g_heroRotation.w;
        mode_sceneInit(piVar1[2]);
      }
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


