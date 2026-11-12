// game/update/moby1545.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2973c8-0x297704
#include "game/update/moby1545.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/inittransition.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"

// 0x02973c8 (0x33c bytes)
/* Moby 1545 */

void UpdateMoby_1545(MobyInstance *moby)

{
  undefined2 uVar1;
  undefined1 uVar3;
  undefined8 uVar2;
  undefined1 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<48> auStack_70;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    if ((((g_gameMode == GAME_MODE_SCENE) && (g_SceneId == 2)) &&
        ((int)(animationSpeed * 1560.5) <= g_SpaceSceneFrame)) ||
       ((g_gameMode == GAME_MODE_SCENE && (g_SceneId == 3)))) {
      lVar5 = -1;
      if (g_SceneId == 2) {
        lVar5 = 3;
      }
      else if (g_SceneId == 3) {
        lVar5 = 2;
      }
      MB_SpawnSparks_oClass2EE(*(undefined4 *)((int)&g_SpaceSceneMobys[0] + (int)(lVar5 << 2)));
    }
    if (((g_gameMode == GAME_MODE_SCENE) && (g_SceneId == 4)) &&
       ((g_SpaceSceneMobys[3] != 0 &&
        (((int)(animationSpeed * 150.5) <= g_SpaceSceneFrame &&
         (g_SpaceSceneFrame <= (int)(animationSpeed * 220.5))))))) {
      GetBonePosition(g_SpaceSceneMobys[3],0,auStack_70);
      uVar8 = 0x40fd4c0000000000;
      MB_SpawnSparksPair
                (0x40fd4c0000000000,0x40e86a0000000000,auStack_70,auStack_70,&DAT_00a15d30);
      uVar9 = 0x3fe8000000000000;
      uVar10 = 0x3ff0000000000000;
      iVar7 = 0;
      uVar11 = 0x3ff07ae140000000;
      auVar14 = loadVectorLeftIndexed(0x20,0x2973a0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      do {
        uVar3 = MB_randRange(0x40,0x80);
        MB_randRange(0,4);
        MB_randInt(2);
        uVar2 = SpawnPart_23(uVar9,uVar10,uVar11,uVar8,auStack_70);
        iVar6 = (int)uVar2;
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 3) = 0x44;
          uVar4 = MB_randRange(0,0xff);
          auVar12 = ZEXT416(0xffffffff);
          auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
          *(undefined1 *)(iVar6 + 8) = uVar4;
          auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
          auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
          auVar13 = vectorSplatHalfWord(auVar12,1);
          auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xff;
          uVar1 = storeVectorElementHalfWordIndexed(auVar13,10,uVar2);
          *(undefined2 *)(iVar6 + 10) = uVar1;
          *(undefined4 *)(iVar6 + 0x24) = 2;
          *(undefined1 *)(iVar6 + 0x2a) = uVar3;
          uVar3 = storeVectorElementByteIndexed
                            (auVar12 | auVar12 << 8 | auVar12 << 0x10 | auVar12 << 0x18 |
                             auVar12 << 0x20 | auVar12 << 0x28 | auVar12 << 0x30 | auVar12 << 0x38 |
                             auVar12 << 0x40 | auVar12 << 0x48 | auVar12 << 0x50 | auVar12 << 0x58 |
                             auVar12 << 0x60 | auVar12 << 0x68 | auVar12 << 0x70 | auVar12 << 0x78,
                             0x2b,uVar2);
          *(undefined1 *)(iVar6 + 0x2b) = uVar3;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
  }
  return;
}


