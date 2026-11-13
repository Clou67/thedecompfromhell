// game/update/moby1812.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2bc4b8-0x2bc748
#include "game/update/moby1812.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02bc4b8 (0x290 bytes)
/* Moby 1812 */

void UpdateMoby_1812(MobyInstance *moby)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  uVar1 = g_SpaceSceneMobys[3];
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) && (g_SceneId == 0)) {
    GetBonePosition(g_SpaceSceneMobys[3],6,local_90);
    GetBonePosition(uVar1,4,local_70);
    uVar3 = 0x40d3880000000000;
    uVar2 = 0x408f400000000000;
    MB_SpawnSparksPair(0x40d3880000000000,0x408f400000000000,local_90,local_90,local_50);
    GetBonePosition(uVar1,7,local_80);
    GetBonePosition(uVar1,5,local_60);
    MB_SpawnSparksPair(uVar3,uVar2,local_80,local_80,local_40);
  }
  return;
}


