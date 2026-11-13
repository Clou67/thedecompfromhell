// game/update/moby834.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x481324-0x48151c
#include "game/update/moby834.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/moby1118.h"
#include "idol/mUnk.h"

// 0x0481324 (0x14 bytes)
void M834_00481324(void)

{
  DAT_008acd08 = 0x10000;
  return;
}


// 0x0481350 (0x1cc bytes)
/* Moby 834 */

void UpdateMoby_834(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  
  pvVar3 = moby->pVar;
  bVar1 = moby->state;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (bVar1 == 0) {
    g_hasClank = 1;
    FUN_004d3720(moby,(int)pvVar3 + 0x20);
    uVar2 = 0x437f0000;
    if (g_MiscLevelFlags.veldinClankCsTrigger != 0) {
      uVar2 = 0x40400000;
      *(undefined2 *)((int)pvVar3 + 0x56) = 1;
      *(undefined2 *)((int)pvVar3 + 0x24) = 0;
    }
    *(undefined4 *)((int)pvVar3 + 0x2c) = uVar2;
    g_MiscLevelFlags.veldinClankCsTrigger = 1;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if (*(short *)((int)pvVar3 + 0x56) != 0) {
      iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x60));
      uVar2 = 0x40400000;
      if (iVar4 != 0) {
        uVar2 = 0x41800000;
      }
      *(undefined4 *)((int)pvVar3 + 0x2c) = uVar2;
    }
    iVar4 = FUN_004d3870(moby,(int)pvVar3 + 0x20);
    if (iVar4 != 0) {
      moby->state = '\x02';
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0x40400000;
    }
    if ((3 < *(short *)((int)pvVar3 + 0x24)) && (g_gameMode != GAME_MODE_SPACE)) {
      ChangeLevel(Novalis);
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
  }
  return;
}


