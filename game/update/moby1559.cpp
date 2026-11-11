// game/update/moby1559.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x298cec-0x298e00
#include "game/update/moby1559.h"
#include "game/freeze.h"
#include "game/initsky.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0298cec (0xf4 bytes)
/* Moby 1559 */

void UpdateMoby_1559(MobyInstance *moby)

{
  int iVar1;
  longlong lVar2;
  
                    /* WARNING: Load size is inaccurate */
  if ((*moby->pVar != -1) &&
     (iVar1 = MB_CountActiveMobysByGroup(*moby->pVar,0xffffffffffffffff), iVar1 == 0)) {
    MB_UnlockSkillPoint(0x17);
  }
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((g_SceneId == 4 || g_SceneId == 3 || (g_SceneId == 5)))) {
    lVar2 = 0;
    if (((g_SceneId == 3) || (g_SceneId == 4)) || (g_SceneId == 5)) {
      lVar2 = 1;
    }
    MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar2 << 2) | 0x95cd50) + 0x178));
  }
  return;
}


// 0x0298de0 (0x14 bytes)
void M1559_00298de0(void)

{
  DAT_007ab7e4 = 0x10000;
  return;
}


// 0x0298df8 (0x8 bytes)
undefined8 M1559_00298df8(void)

{
  return 0;
}


