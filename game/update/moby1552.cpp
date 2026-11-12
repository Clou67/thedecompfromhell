// game/update/moby1552.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x298678-0x298998
#include "game/update/moby1552.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initsky.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"

// 0x0298678 (0x320 bytes)
/* Moby 1552 */

void UpdateMoby_1552(MobyInstance *moby)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar6;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  GPiece<40> auStack_a0;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (g_gameMode == GAME_MODE_SCENE)) {
    if ((g_SceneId == 3) || (g_SceneId == 4)) {
      lVar2 = 0;
      if ((g_SceneId == 3) || (g_SceneId == 4)) {
        lVar2 = 2;
      }
      MB_SpawnSparks_oClass2EE(*(undefined4 *)(((uint)(lVar2 << 2) | 0x95cd50) + 0x178));
    }
    if (g_SceneId == 2) {
      uVar3 = ZERO_MASK(((int)(animationSpeed * 2698.5) - g_SpaceSceneFrame)) &
              7;
      if (g_SpaceSceneFrame == (int)(animationSpeed * 2766.5)) {
        uVar3 = 6;
      }
      else if ((int)uVar3 == 0) {
        return;
      }
      iVar8 = 0;
      uVar1 = *(undefined4 *)((int)&g_SpaceSceneMobys[0] + (int)(uVar3 << 2));
      dVar10 = 20000.0;
      dVar11 = 200000.0;
      uVar12 = 0x3fe3333340000000;
      uVar13 = 0x3ff0000000000000;
      uVar14 = 0x3ff028f5c0000000;
      dVar15 = 0.5;
      do {
        GetBonePosition(uVar1,iVar8,auStack_a0);
        iVar7 = 0;
        do {
          uVar9 = MB_randRangeFloat((float)dVar10,(float)dVar11);
          uVar6 = MB_randRange(0x20,0x80);
          MB_randRange(0,4);
          MB_randInt(2);
          iVar4 = SpawnPart_23(uVar12,uVar13,uVar14,uVar9,auStack_a0);
          if (iVar4 != 0) {
            iVar5 = MB_randRange(0x3c,0x5a);
            iVar5 = (int)(animationSpeed * (float)((double)(longlong)iVar5 + dVar15));
            *(undefined4 *)(iVar4 + 0x24) = 2;
            *(short *)(iVar4 + 10) = (short)iVar5;
            *(undefined1 *)(iVar4 + 0x2a) = uVar6;
            *(char *)(iVar4 + 0x2b) = (char)iVar5;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
    }
  }
  return;
}


