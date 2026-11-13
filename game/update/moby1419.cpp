// game/update/moby1419.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x272cb8-0x272f1c
#include "game/update/moby1419.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/update.h"
#include "game/update/moby408.h"

// 0x0272cb8 (0x14 bytes)
void M1419_00272cb8(void)

{
  DAT_007a9e2c = 0x10000;
  return;
}


// 0x0272cd0 (0x24c bytes)
/* Moby 1419 */

void UpdateMoby_1419(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  moby->updateDistance = -0x80;
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if (g_gameMode != GAME_MODE_SCENE) {
        MB_UnlockLevel(Fleet);
        iVar3 = piVar2[1];
        if (iVar3 != -1) {
          SetSpawnPoint((Vec4 *)&Cuboids[iVar3].pos,(Vec4 *)&Cuboids[iVar3].rot);
        }
        MB_ToastMessageByIndex(0x11);
        memcard_Save(0,-1);
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x02') {
      if (g_gameMode != GAME_MODE_SCENE) {
        PlayInfobotMovie(0x11);
        moby->state = '\x01';
      }
    }
    else if (uVar1 == '\x01') {
      if (g_gameMode != GAME_MODE_SCENE) {
        mode_sceneInit(4);
        moby->state = '\x03';
        Hero_MakeVisible();
        iVar3 = piVar2[1];
        if (iVar3 != -1) {
          Hero_Warp(&Cuboids[iVar3].pos.x,&Cuboids[iVar3].rot.x,0,1);
        }
      }
    }
    else if ((((uVar1 == '\0') && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) &&
             (DAT_010c512c == 0)) &&
            ((iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2), iVar3 != 0 &&
             (g_MobyInstance[piVar2[2]].state == '\x03')))) {
      mode_sceneInit(3);
      moby->state = '\x02';
      SetLevelFlag(moby->levelFlagIdx);
      Hero_MakeInvisible();
    }
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    RegisterMobyDraw(&PTR_M1421_00272f40_0070a4b0,moby);
  }
  return;
}


