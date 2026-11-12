// game/update/moby1348.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x254024-0x254604
#include "game/update/moby1348.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"

// 0x0254024 (0x14 bytes)
void M1348_00254024(void)

{
  DAT_0079b91c = 0x10000;
  return;
}


// 0x0254048 (0x5bc bytes)
// strings: 00a1000c: 'None'

/* Moby 1348 */

void UpdateMoby_1348(MobyInstance *moby)

{
  int iVar1;
  u8 uVar2;
  int *piVar3;
  MobyInstance *pMVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  piVar3 = (int *)moby->pVar;
  if ((HelpData.piece<336,2>() == 0) &&
     (iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[9]), iVar6 != 0)) {
    Help_QueueMessage(STR_JUMP_THEN_PRESS_AND_0x1773,0x2a);
  }
  if (HelpData.piece<328,2>() == 0) {
    iVar6 = 0;
    piVar7 = piVar3;
    do {
      if ((*piVar7 != -1) && (g_MobyInstance[*piVar7].state != '\x01')) {
        Help_QueueMessage(STR_YOU_HAVE_JUST_ACTIVATED_0x1772,0x29);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 6);
  }
  if ((HelpData.piece<368,2>() == 0) || (HelpData.piece<376,2>() == 0)) {
    if ((g_MobyInstance + piVar3[10] == (MobyInstance *)0x0) ||
       ((uVar2 = g_MobyInstance[piVar3[10]].state, uVar2 == 0xfe || (uVar2 == 0xfd)))) {
      if (UnlockableItems.taunter == '\0') {
        Help_QueueMessage(STR_NEED_A_LITTLE_HELP_0x1778,0x2f);
        if (HelpData.piece<368,2>() != -1) {
          HelpData.piece<368,2>() = HelpData.piece<368,2>() + 1;
        }
        iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)HelpData.piece<370,2>() < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          HelpData.piece<370,2>() =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        HelpData.piece<372,4>() = HelpData.piece<372,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        Help_QueueMessage(STR_NEED_A_LITTLE_HELP_0x1777,0x2e);
        if (HelpData.piece<376,2>() != -1) {
          HelpData.piece<376,2>() = HelpData.piece<376,2>() + 1;
        }
        iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)HelpData.piece<378,2>() < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          HelpData.piece<378,2>() =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        HelpData.piece<380,4>() = HelpData.piece<380,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
  }
  iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[8]);
  if ((iVar6 != 0) &&
     (iVar6 = MB_CountActiveMobysByGroup(piVar3[6],0xffffffffffffffff), iVar6 == 0)) {
    iVar6 = 0;
    dVar10 = 0.5;
    dVar9 = 18.5;
    dVar8 = 60.0;
    piVar7 = piVar3;
    do {
      pMVar4 = g_MobyInstance + *piVar7;
      if (*piVar7 == -1) {
LAB_00254554:
        if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) || (pMVar4->state == 0xfd))
        goto LAB_00254570;
      }
      else {
        if (pMVar4 != (MobyInstance *)0x0) {
          uVar2 = pMVar4->state;
          if ((uVar2 != 0xfd && uVar2 != 0xfe) && (uVar2 != '\x01')) {
            if (HelpData.piece<320,2>() == 0) {
              if (HelpData.piece<320,2>() != -1) {
                HelpData[0x140] = '\0';
                HelpData[0x141] = '\x01';
              }
              iVar1 = (int)(animationSpeed *
                           (float)((double)(longlong)g_GameFrameCount + dVar10));
              if ((int)(uint)(ushort)HelpData.piece<322,2>() < iVar1 / 600) {
                sVar5 = (short)(iVar1 >> 0x1f);
                HelpData.piece<322,2>() =
                     ((short)(iVar1 / 600) + sVar5) -
                     ((short)((short)(iVar1 / 0x2580000) + sVar5) >> 0xf);
              }
              HelpData.piece<324,4>() =
                   HelpData.piece<324,4>() | 1 << (Level & 0x3f) | 0x80000000;
            }
            else {
              iVar1 = (int)((double)animationSpeed *
                           (double)(float)((double)(longlong)g_GameFrameCount + dVar10));
              if (((int)((double)(longlong)((double)animationSpeed * dVar9) * dVar8) <
                   (int)(iVar1 + (uint)(ushort)HelpData.piece<322,2>() * -600)) ||
                 ((uint)(ushort)HelpData.piece<322,2>() * 600 == 0)) {
                Help_QueueMessage(STR_USE_THE_ENTER_COMMAND_0x1771,0x28);
              }
              else if ((int)(uint)(ushort)HelpData.piece<322,2>() < iVar1 / 600) {
                sVar5 = (short)(iVar1 >> 0x1f);
                HelpData.piece<322,2>() =
                     ((short)(iVar1 / 600) + sVar5) -
                     ((short)((short)(iVar1 / 0x2580000) + sVar5) >> 0xf);
              }
            }
          }
          goto LAB_00254554;
        }
LAB_00254570:
        HelpData[0x140] = -1;
        HelpData[0x141] = -1;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 6);
  }
  if (g_MiscLevelFlags.field37_0x25 == 0) {
    if ((piVar3[0xb] != -1) && (g_MobyInstance[piVar3[0xb]].setByGroup != '\0')) {
      g_MiscLevelFlags.field37_0x25 = 1;
    }
  }
  return;
}


