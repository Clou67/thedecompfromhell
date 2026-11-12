// game/update/moby1344.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x251af8-0x252124
#include "game/update/moby1344.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"
#include "game/update/moby1196.h"

// 0x0251af8 (0x14 bytes)
void M1344_00251af8(void)

{
  DAT_0079b67c = 0x10000;
  return;
}


// 0x0251b20 (0x604 bytes)
// strings: 00a1000c: 'None'

/* Moby 1344 */

char * UpdateMoby_1344(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  
  piVar2 = (int *)moby->pVar;
  iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[7]);
  DAT_00fa3840 = (iVar7 != 0);
  bVar1 = moby->state;
  pcVar8 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
    pcVar8 = (char *)0xff;
  }
  else if (bVar1 < 2) {
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if ((iVar7 != 0) &&
       ((((g_heroStateType < 2 || (g_heroStateType == 9)) && (g_Help.state == 0))
        && ((g_Help.message_id == -1 && (HelpData.piece<424,2>() == 0)))))) {
      Help_QueueMessage(STR_YOU_CAN_TIPTOE_TO_0x2710,0x35);
    }
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]);
    if ((((iVar7 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
        (g_Help.state == 0)) && (g_Help.message_id == -1)) {
      if ((g_MiscLevelFlags.PremiumNanotech != false) || (HelpData.piece<440,2>() != 0)) {
        if ((g_MiscLevelFlags.PremiumNanotech != false) &&
           ((g_MiscLevelFlags.UltraNanotech == false && (HelpData.piece<448,2>() == 0)))) {
          Help_QueueMessage(STR_THIS_DISPENSER_ALSO_CARRIES_0x2713,0x38);
        }
      }
      else {
        Help_QueueMessage(STR_THIS_IS_A_PREMIUM_0x2712,0x37);
      }
    }
    if ((((g_gameMode == GAME_MODE_NORMAL) && (CHAR_ARRAY_0096c165[0x1c] != '\0')) &&
        (g_Help.state == 0)) &&
       ((g_Help.message_id == -1 && (HelpData.piece<432,2>() == 0)))) {
      Help_QueueMessage(STR_THESE_MAGNEBOOTS_ARE_A_0x2711,0x36);
    }
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[2]);
    if (((iVar7 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
       ((UnlockableItems.devastator == '\0' &&
        (((g_Help.state == 0 && (g_Help.message_id == -1)) &&
         (HelpData.piece<736,2>() == 0)))))) {
      Help_QueueMessage(STR_THE_DEVASTATOR_MANUFACTURED_EXCLUSIVELY_0x2715,0x5c);
    }
    bVar5 = false;
    pcVar8 = MobyUpdateChainStart;
    if (MobyUpdateChainStart != (char *)0x0) {
      do {
        if ((*(short *)(pcVar8 + 0xa6) == 0x359) && (pcVar8[0x20] != '\x01')) {
          bVar5 = true;
        }
        pcVar8 = *(char **)(pcVar8 + 0x28);
      } while (pcVar8 != (char *)0x0);
      pcVar8 = (char *)0x0;
      if (bVar5) {
        iVar7 = piVar2[4];
        if (((iVar7 != -1) &&
            (fVar3 = g_heroPosition.y - g_MobyInstance[iVar7].pos.y,
            fVar4 = g_heroPosition.x - g_MobyInstance[iVar7].pos.x,
            SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 15.0)) &&
           ((iVar7 = piVar2[5], iVar7 != -1 &&
            ((fVar3 = g_heroPosition.y - g_MobyInstance[iVar7].pos.y,
             fVar4 = g_heroPosition.x - g_MobyInstance[iVar7].pos.x,
             SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 15.0 && (HelpData.piece<848,2>() == 0)))))) {
          Help_QueueMessage(STR_GADGE_BOTS_CANT_CLIMB_BUT_0x2717,0x6a);
        }
        pcVar8 = (char *)MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[6]);
        if ((pcVar8 != (char *)0x0) && (iVar7 = piVar2[8], iVar7 != -1)) {
          pcVar8 = (char *)(uint)g_MobyInstance[iVar7].oClass;
          if ((g_MobyInstance[iVar7].oClass == DOOR_03F7) &&
             (pcVar8 = (char *)(uint)g_MobyInstance[iVar7].state, g_MobyInstance[iVar7].state != 4)) {
            pcVar8 = HelpData;
            if (HelpData.piece<856,2>() == 0) {
              HelpData[0x358] = '\0';
              HelpData[0x359] = '\x01';
              iVar7 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
              if ((int)(uint)(ushort)HelpData.piece<858,2>() < iVar7 / 600) {
                sVar6 = (short)(iVar7 >> 0x1f);
                HelpData.piece<858,2>() =
                     ((short)(iVar7 / 600) + sVar6) -
                     ((short)((short)(iVar7 / 0x2580000) + sVar6) >> 0xf);
              }
              HelpData.piece<860,4>() =
                   HelpData.piece<860,4>() | 1 << (Level & 0x3f) | 0x80000000;
            }
            else {
              iVar7 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
              if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
                   (int)(iVar7 + (uint)(ushort)HelpData.piece<858,2>() * -600)) ||
                 ((uint)(ushort)HelpData.piece<858,2>() * 600 == 0)) {
                pcVar8 = (char *)Help_QueueMessage(STR_USE_THE_ENTER_COMMAND_0x2718,0x6b);
              }
              else if ((int)(uint)(ushort)HelpData.piece<858,2>() < iVar7 / 600) {
                sVar6 = (short)(iVar7 >> 0x1f);
                HelpData.piece<858,2>() =
                     ((short)(iVar7 / 600) + sVar6) -
                     ((short)((short)(iVar7 / 0x2580000) + sVar6) >> 0xf);
              }
            }
          }
        }
      }
    }
  }
  return pcVar8;
}


