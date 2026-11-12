// game/update/moby1548.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x298178-0x298448
#include "game/update/moby1548.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"

// 0x0298178 (0x2d0 bytes)
/* Moby 1548 */

void UpdateMoby_1548(MobyInstance *moby)

{
  int iVar1;
  undefined8 in_r7;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> auStack_80;
  GPiece<16> auStack_70;
  GPiece<32> local_60;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    if ((g_gameMode == GAME_MODE_SCENE) && ((g_SceneId == 4 || (g_SceneId == 10))))
    {
      MB_SpawnSparks_oClass2EE
                (*(undefined4 *)
                  (((uint)((ZERO_MASK((4 - g_SceneId)) & 2U) << 2) | 0x95cd50)
                  + 0x178));
    }
    iVar1 = g_SpaceSceneMobys[3];
    if ((((g_gameMode == GAME_MODE_SCENE) && (g_SceneId == 3)) &&
        ((int)(animationSpeed * 900.5) <= g_SpaceSceneFrame)) &&
       ((g_SpaceSceneFrame <= (int)(animationSpeed * 10000.5) && (g_SpaceSceneMobys[3] != 0)))) {
      GetBonePosition(g_SpaceSceneMobys[3],0,auStack_80);
      GetBonePosition(iVar1,1,auStack_70);
      dVar6 = 0.25;
      dVar5 = 0.5;
      dVar2 = (double)MB_randRangeFloat(0.25,0.5);
      dVar3 = 210000.0;
      dVar4 = (double)(float)(dVar2 * 210000.0);
      iVar1 = MB_randRange(dVar2,0x4109a28000000000,0x2d,0x3c);
      SpawnPart_22
                (dVar4,auStack_80,local_60,0x7f7f7f7f,&DAT_007f7f7f,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
      dVar2 = (double)MB_randRangeFloat((float)dVar6,(float)dVar5);
      dVar2 = (double)(float)(dVar2 * dVar3);
      iVar1 = MB_randRange(0x2d,0x3c);
      SpawnPart_22
                (dVar2,auStack_70,local_60,0x407f7f7f,&DAT_007f7f7f,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar1 + dVar5)));
    }
  }
  return;
}


