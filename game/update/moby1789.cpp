// game/update/moby1789.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2b9494-0x2b9870
#include "game/update/moby1789.h"
#include "game/freeze.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02b9494 (0x14 bytes)
void M1789_002b9494(void)

{
  DAT_007b7afc = 0x10000;
  return;
}


// 0x02b94b0 (0x3c0 bytes)
/* Moby 1789 */

void UpdateMoby_1789(MobyInstance *moby)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 local_c0 [4];
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  GPiece<16> local_60;
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) &&
          ((g_SceneId == 1 || (g_SceneId == 2)))) {
    uVar2 = ZERO_MASK((1 - g_SceneId)) & 3;
    uVar1 = *(undefined4 *)
             ((int)&g_SpaceSceneMobys[0] +
             (int)((uVar2 + (ZERO_MASK((2 - g_SceneId)) & 4 - uVar2) &
                   0xffffffff) << 2));
    GetBonePosition(uVar1,0,local_c0);
    GetBonePosition(uVar1,3,local_90);
    MB_SpawnSparksPair
              ((double)DAT_007b7b24,(double)DAT_010a0844,local_c0,local_c0,local_60);
    GetBonePosition(uVar1,1,local_b0);
    GetBonePosition(uVar1,4,local_80);
    MB_SpawnSparksPair
              ((double)DAT_007b7b24,(double)DAT_010a0844,local_b0,local_b0,local_50);
    GetBonePosition(uVar1,2,local_a0);
    GetBonePosition(uVar1,5,local_70);
    MB_SpawnSparksPair
              ((double)DAT_007b7b24,(double)DAT_010a0844,local_a0,local_a0,local_40);
  }
  return;
}


