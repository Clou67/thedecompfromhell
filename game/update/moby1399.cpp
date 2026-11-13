// game/update/moby1399.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x26a978-0x26ad9c
// shared update function UpdateMoby_{1399_1451_1899}; registered for oClasses 1399, 1451, 1899
#include "game/update/moby1399.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/respawn.h"
#include "game/update.h"

// shared update function, registered for oClasses 1399, 1451, 1899
// 0x026a978 (0x410 bytes)
/* Moby 1399
   Moby 1451
   Moby 1899 */

void UpdateMoby_1399(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  int iVar4;
  u16 *puVar5;
  MobyInstance *pMVar6;
  u8 uVar7;
  double dVar8;
  Vec4 local_30;
  
  pMVar6 = g_MobyInstance;
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar1 == 0) {
    iVar4 = *(int *)((int)pvVar3 + 0x60);
    if (iVar4 == -1) {
      DeleteMoby(moby);
    }
    else {
      uVar7 = '\x01';
      MVar2 = g_MobyInstance[iVar4].modeBits;
      g_MobyInstance[iVar4].collision = (ushort *)0x0;
      pMVar6[iVar4].enabled = '\0';
      pMVar6[iVar4].modeBits = MVar2 | DISABLED;
      if ((Level == Veldin2) && (g_LevelFlags[0x12][(byte)moby->levelFlagIdx] == -1)) {
        uVar7 = '\x03';
      }
      moby->state = uVar7;
      *(undefined4 *)((int)pvVar3 + 0x68) = 0xffffffff;
    }
  }
  else if (bVar1 < 2) {
    moby->state = '\x02';
  }
  else if (bVar1 < 3) {
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
        (g_gameMode != GAME_MODE_SCENE)) && (g_heroState != VISIBOMB_CONTROL)) {
      if (g_heroType == '\0') {
        MB_ShowPersistentMessage(4,0x3aa4);
      }
      else if ((g_heroType == '\x02') && (Level != Veldin2)) {
        MB_ShowPersistentMessage(4,0x3aa5);
      }
      if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_HelpMsgOwner == 4)) {
        if ((g_heroType == '\x02') && (Level == Quartu)) {
          pMVar6 = g_MobyInstance + *(int *)((int)pvVar3 + 0x60);
          pMVar6->collision = (ushort *)0x0;
          pMVar6->enabled = '\0';
          pMVar6->modeBits = pMVar6->modeBits | DISABLED;
          Hero_RevertToRatchet();
          MB_SetAnimationNoBlend(pMVar6,0,0);
          if (Level == Quartu) {
            mode_sceneInit(9);
            music_SetTransition(0,5);
          }
        }
        else if (g_heroType == '\0') {
          local_30.x = (moby->pos).x;
          local_30.y = (moby->pos).y;
          local_30.z = (moby->pos).z;
          pMVar6 = g_MobyInstance + *(int *)((int)pvVar3 + 0x60);
          local_30.w = (moby->pos).w;
          dVar8 = (double)GetGroundZ(0x3fe0000000000000,&local_30,0);
          local_30.z = (float)(dVar8 + 0.10000000149011612);
          if (Level == Quartu) {
            SetSpawnPoint(&local_30,(Vec4 *)&moby->rotation);
          }
          Hero_Warp(&local_30.x,&(moby->rotation).x,0,1);
          puVar5 = pMVar6->pClass->collision;
          pMVar6->enabled = '\x01';
          pMVar6->collision = puVar5;
          pMVar6->modeBits =
               pMVar6->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          SetHeroType(2,0x5a,pMVar6);
          if (Level == Quartu) {
            mode_sceneInit(8);
            DAT_0096b9e0 = g_heroPosition.x;
            DAT_0096b9e4 = g_heroPosition.y;
            DAT_0096b9e8 = g_heroPosition.z;
            DAT_0096b9ec = g_heroPosition.w;
            DAT_0096b9f0 = g_heroRotation.x;
            DAT_0096b9f4 = g_heroRotation.y;
            DAT_0096b9f8 = g_heroRotation.z;
            DAT_0096b9fc = g_heroRotation.w;
            music_SetTransition(2,4);
          }
          else if (Level == Veldin2) {
            mode_sceneInit(6);
            DAT_0096b9e0 = g_heroPosition.x;
            DAT_0096b9e4 = g_heroPosition.y;
            DAT_0096b9e8 = g_heroPosition.z;
            DAT_0096b9ec = g_heroPosition.w;
            DAT_0096b9f0 = g_heroRotation.x;
            DAT_0096b9f4 = g_heroRotation.y;
            DAT_0096b9f8 = g_heroRotation.z;
            DAT_0096b9fc = g_heroRotation.w;
            moby->state = '\x03';
          }
        }
      }
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x68) = 0xffffffff;
    }
  }
  return;
}


// 0x026ad88 (0x14 bytes)
void M1899_0026ad88(void)

{
  DAT_0079cbc4 = 0x10000;
  return;
}


