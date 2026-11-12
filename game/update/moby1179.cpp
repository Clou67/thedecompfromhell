// game/update/moby1179.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1ee690-0x1eebe4
#include "game/update/moby1179.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"

// 0x01ee690 (0x14 bytes)
void M1179_001ee690(void)

{
  DAT_00765e18 = 0x10000;
  return;
}


// 0x01ee6c0 (0x524 bytes)
// strings: 00a1000c: 'None'

/* Moby 1179 */

char * UpdateMoby_1179(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  short sVar6;
  char *pcVar7;
  
  pcVar7 = (char *)moby->pVar;
  if (moby->state == 0) {
    HelpData[0x360] = '\0';
    HelpData[0x361] = '\0';
    HelpData[0x362] = '\0';
    HelpData[0x363] = '\0';
    fVar3 = (moby->pos).z;
    *(ushort *)(pcVar7 + 0x3e) = *(ushort *)(pcVar7 + 0x3e) | 8;
    if (((Level == Pokitaru) && (moby->levelFlagIdx != -1)) &&
       ((uVar4 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar4] != '\0' ||
        ((*(uint *)((int)((longlong)((int)(short)uVar4 >> 5) << 2) + 0xa0d81c) & 1 << (uVar4 & 0x1f)
         ) != 0)))) {
      moby->state = '\x02';
      (moby->pos).z = fVar3 - 1.5;
      pcVar7 = (char *)PlayMobySound(0,0,moby);
    }
    else {
      moby->state = '\x01';
      pcVar7 = (char *)0x1;
    }
  }
  else if (moby->state < 2) {
    if ((((g_standingOnMoby == moby) && (UnlockableItems.thrusterPack != '\0')) &&
        (g_framesNotGrounded == 0)) && (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
      if (Level == Pokitaru) {
        bVar2 = moby->levelFlagIdx;
        if (bVar2 != 0xff) {
          uVar4 = moby->uid;
          (&g_CheckpointLive.objState[0])[(short)uVar4] = bVar2 + 2;
          if ((bVar2 == 0xff) ||
             (((&DAT_00a202c0)[bVar2] != -1 && (g_LevelFlags[0xb][bVar2] == -1)))) {
            (&g_Checkpoint.objState[0])[(short)uVar4] = bVar2 + 2;
          }
        }
      }
      fVar3 = (moby->pos).z;
      moby->state = '\x02';
      (moby->pos).z = fVar3 - 1.5;
      PlayMobySound(0,0,moby);
    }
    pcVar7 = (char *)(uint)(byte)moby->levelFlagIdx;
    if (((moby->levelFlagIdx != 0xff) &&
        (fVar3 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
        pcVar7 = (char *)&DAT_001ee6a8, SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 4.0)) &&
       ((g_heroStateType == (char *)0x0 ||
        (pcVar7 = g_heroStateType, g_heroStateType == (char *)0x1)))) {
      if (UnlockableItems.thrusterPack == '\0') {
        iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        pcVar7 = HelpData;
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar1 + (uint)(ushort)HelpData.piece<906,2>() * -600)) ||
           ((uint)(ushort)HelpData.piece<906,2>() * 600 == 0)) {
          pcVar7 = (char *)Help_QueueMessage(STR_WITH_THE_THRUSTER_PACK_YOU_0x2B01,0x71);
        }
        else if ((int)(uint)(ushort)HelpData.piece<906,2>() < iVar1 / 600) {
          sVar6 = (short)(iVar1 >> 0x1f);
          HelpData.piece<906,2>() =
               ((short)(iVar1 / 600) + sVar6) - ((short)((short)(iVar1 / 0x2580000) + sVar6) >> 0xf)
          ;
        }
      }
      else {
        pcVar7 = HelpData;
        if (HelpData.piece<864,2>() == 0) {
          HelpData[0x360] = '\0';
          HelpData[0x361] = '\x01';
          iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)HelpData.piece<866,2>() < iVar1 / 600) {
            sVar6 = (short)(iVar1 >> 0x1f);
            HelpData.piece<866,2>() =
                 ((short)(iVar1 / 600) + sVar6) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar6) >> 0xf);
          }
          HelpData.piece<868,4>() =
               HelpData.piece<868,4>() | 1 << (Level & 0x3f) | 0x80000000;
        }
        else {
          iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
               (int)(iVar1 + (uint)(ushort)HelpData.piece<866,2>() * -600)) ||
             ((uint)(ushort)HelpData.piece<866,2>() * 600 == 0)) {
            pcVar7 = (char *)Help_QueueMessage(STR_YOULL_NEED_TO_USE_0x2B02,0x6c);
          }
          else if ((int)(uint)(ushort)HelpData.piece<866,2>() < iVar1 / 600) {
            sVar6 = (short)(iVar1 >> 0x1f);
            HelpData.piece<866,2>() =
                 ((short)(iVar1 / 600) + sVar6) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar6) >> 0xf);
          }
        }
      }
    }
  }
  return pcVar7;
}


