// game/update/moby1811.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2bc1d8-0x2bc4a8
#include "game/update/moby1811.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02bc1d8 (0x14 bytes)
void M1811_002bc1d8(void)

{
  DAT_007b7dcc = 0x10000;
  return;
}


// 0x02bc1f8 (0x2b0 bytes)
/* Moby 1811 */

void UpdateMoby_1811(MobyInstance *moby)

{
  undefined4 uVar1;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  uVar1 = g_SpaceSceneMobys[2];
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (g_SceneId == 2)) {
    GetBonePosition(g_SpaceSceneMobys[2],2,local_90);
    GetBonePosition(uVar1,4,local_70);
    MB_SpawnSparksPair
              ((double)DAT_007b7df4,(double)DAT_007b7df8,local_90,local_90,local_50);
    GetBonePosition(uVar1,1,local_80);
    GetBonePosition(uVar1,3,local_60);
    MB_SpawnSparksPair
              ((double)DAT_007b7df4,(double)DAT_007b7df8,local_80,local_80,local_40);
  }
  return;
}


