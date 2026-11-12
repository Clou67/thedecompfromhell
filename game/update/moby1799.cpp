// game/update/moby1799.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2b9ae4-0x2b9ce8
#include "game/update/moby1799.h"
#include "game/freeze.h"
#include "game/inittransition.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02b9ae4 (0x14 bytes)
void M1799_002b9ae4(void)

{
  DAT_007b7b74 = 0x10000;
  return;
}


// 0x02b9b00 (0x1e8 bytes)
/* Moby 1799 */

void UpdateMoby_1799(MobyInstance *moby)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  GPiece<16> local_20;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          (((uint)g_SceneId < 2 || ((g_SceneId == 2 || (g_SceneId == 3))))))
  {
    lVar2 = 0;
    if ((g_SceneId == 0) || ((g_SceneId == 2 || (g_SceneId == 3)))) {
      lVar2 = 3;
    }
    uVar1 = *(undefined4 *)
             ((int)&g_SpaceSceneMobys[0] +
             (int)((lVar2 + (ZERO_MASK((1 - g_SceneId)) & 4U - lVar2) &
                   0xffffffff) << 2));
    GetBonePosition(uVar1,8,local_40);
    GetBonePosition(uVar1,9,local_30);
    MB_SpawnSparksPair
              ((double)DAT_007b7b9c,(double)DAT_010a0848,local_40,local_40,local_20);
  }
  return;
}


