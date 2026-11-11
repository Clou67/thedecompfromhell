// game/update/moby1353.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x255850-0x255f04
#include "game/update/moby1353.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"

// 0x0255850 (0x14 bytes)
void M1353_00255850(void)

{
  DAT_0079bbc4 = 0x10000;
  return;
}


// 0x0255868 (0x69c bytes)
/* Moby 1353 */

void UpdateMoby_1353_GemlikManager(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  MobyInstance *pMVar4;
  Cuboid *pCVar5;
  int iVar6;
  
  bVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      moby->state = '\a';
    }
    else if (bVar1 == 5) {
      if (g_gameMode != GAME_MODE_SCENE) {
        iVar6 = piVar2[5];
        if (iVar6 != -1) {
          g_MobyInstance[iVar6].modeBits =
               g_MobyInstance[iVar6].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        pCVar5 = Cuboids;
        pMVar4 = g_MobyInstance;
        iVar6 = piVar2[2];
        if ((iVar6 != -1) && (iVar3 = piVar2[4], iVar3 != -1)) {
          g_MobyInstance[iVar3].pos.x = Cuboids[iVar6].pos.x;
          pMVar4[iVar3].pos.y = pCVar5[iVar6].pos.y;
          pMVar4[iVar3].pos.z = pCVar5[iVar6].pos.z;
          pMVar4[iVar3].pos.w = pCVar5[iVar6].pos.w;
          Hero_Warp(&Cuboids[piVar2[2]].pos.x,&Cuboids[piVar2[2]].rot.x,0,1);
          g_heroInvisible = 1;
          *(undefined4 *)((int)pMVar4[iVar3].pVar + 0x7c) = 0x3f7d70a4;
          SceneScreenFade = 0.99;
          pMVar4[iVar3].state = '\x02';
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 == 4) {
      if (g_MiscLevelFlags.GemlikRelated2 == 0) {
        if (*piVar2 == -1) {
          moby->state = '\a';
        }
        else {
          iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
          if (iVar6 != 0) {
            g_MiscLevelFlags.GemlikRelated2 = 1;
            iVar6 = piVar2[5];
            if (iVar6 != -1) {
              g_MobyInstance[iVar6].modeBits = g_MobyInstance[iVar6].modeBits | (UNK_40|DISABLED);
            }
            moby->state = '\x05';
            mode_sceneInit(1);
          }
        }
      }
      else {
        moby->state = '\x06';
      }
      if ((moby->state != '\x04') && (piVar2[3] != -1)) {
        DeleteMoby(g_MobyInstance + piVar2[3]);
      }
    }
    else if (bVar1 == 3) {
      moby->state = '\x04';
    }
    else if (bVar1 == 2) {
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 1) {
      if (g_MiscLevelFlags.GemlikRelated1 == 0) {
        g_MiscLevelFlags.GemlikRelated1 = 1;
        moby->state = '\x02';
        mode_sceneInit(0);
      }
      else {
        moby->state = '\x03';
      }
    }
    else if ((bVar1 == 0) && (g_gameMode == GAME_MODE_NORMAL)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 0xe) {
    moby->modeBits = moby->modeBits | NO_UPDATE;
  }
  else if (bVar1 == 0xd) {
    if (piVar2[4] == -1) {
      DeleteMoby(moby);
    }
    else if ((&DAT_00a202c0)[(byte)g_MobyInstance[piVar2[4]].levelFlagIdx] == -1) {
      if (piVar2[8] != -1) {
        DeleteMoby(g_MobyInstance + piVar2[8]);
      }
      moby->state = '\x0e';
    }
  }
  else if (bVar1 == 0xc) {
    moby->state = '\r';
  }
  else if (bVar1 == 0xb) {
    if (piVar2[4] == -1) {
      moby->state = '\f';
    }
    else {
      pMVar4 = g_MobyInstance + piVar2[4];
      if ((((pMVar4 == (MobyInstance *)0x0) || (pMVar4->oClass != FIGHTER_JET_0045)) ||
          (pMVar4->state == 0xfe)) || (pMVar4->state == 0xfd)) {
        memcard_Save(0,-1);
        moby->state = '\f';
      }
    }
  }
  else if (bVar1 == 10) {
    if (g_gameMode != GAME_MODE_SCENE) {
      iVar6 = piVar2[4];
      if (iVar6 != -1) {
        g_MobyInstance[iVar6].modeBits =
             g_MobyInstance[iVar6].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|DISABLED);
      }
      MB_UnlockLevel(Oltanis);
      iVar6 = piVar2[8];
      if (iVar6 != -1) {
        g_MobyInstance[iVar6].modeBits =
             g_MobyInstance[iVar6].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        SetupSpaceShipVars();
        g_heroSpawnPosition.z = 316.72;
        g_heroSpawnRot.z = 2.77;
        g_heroSpawnPosition.x = 464.66;
        g_heroSpawnPosition.y = 580.68;
      }
      LetterBoxOn = 0;
      moby->state = '\v';
    }
  }
  else if (bVar1 == 9) {
    if (g_gameMode != GAME_MODE_SCENE) {
      mode_sceneInit(3);
      moby->state = '\n';
    }
  }
  else if (bVar1 == 8) {
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\t';
      PlayInfobotMovie(0xe);
    }
  }
  else if (bVar1 == 7) {
    if (g_MiscLevelFlags.GemlikRelated3 == 0) {
      if (piVar2[5] == -1) {
        moby->state = '\r';
      }
      else {
        pMVar4 = g_MobyInstance + piVar2[5];
        if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->oClass != QWARKS_STARFIGHTER_PART_0184)) ||
           ((pMVar4->state == 0xfe || (pMVar4->state == 0xfd)))) {
          iVar6 = piVar2[4];
          if (iVar6 != -1) {
            g_MobyInstance[iVar6].modeBits = g_MobyInstance[iVar6].modeBits | NO_UPDATE;
          }
          Hero_Warp(&Cuboids[piVar2[2]].pos.x,&Cuboids[piVar2[2]].rot.x,0x72,1);
          g_MiscLevelFlags.GemlikRelated3 = 1;
          MB_UnlockTrophy(ALL_QWARKD_UP);
          iVar6 = piVar2[8];
          if (iVar6 != -1) {
            g_MobyInstance[iVar6].modeBits = g_MobyInstance[iVar6].modeBits | (UNK_40|DISABLED);
          }
          music_SetTransition(0,5);
          moby->state = '\b';
          mode_sceneInit(2);
        }
      }
    }
    else {
      moby->state = '\f';
    }
  }
  return;
}


