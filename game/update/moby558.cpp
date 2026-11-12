// game/update/moby558.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3b6460-0x3b66b4
#include "game/update/moby558.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x03b6460 (0x14 bytes)
void M558_003b6460(void)

{
  DAT_00845a58 = 0x10000;
  return;
}


// 0x03b6480 (0x234 bytes)
// strings: 00a1000c: 'None'

/* Moby 558 */

void UpdateMoby_558(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  MobyInstance *pMVar4;
  
  moby->updateDistance = -1;
  piVar1 = (int *)moby->pVar;
  if ((g_Help.state == 0) && (g_Help.curId == -1)) {
    if (((g_heroStateType < 2) || (g_heroStateType == 9)) &&
       (g_gameMode == GAME_MODE_NORMAL)) {
      if (((((piVar1[1] == -1) || (pMVar4 = g_MobyInstance + piVar1[1], pMVar4 == (MobyInstance *)0x0)
            ) || (pMVar4->oClass != FORCEFIELD_TOWER)) ||
          ((pMVar4->state == 0xfe || (pMVar4->state == 0xfd)))) &&
         ((UnlockableItems.devastator != '\0' || (UnlockableItems.visibombGun != '\0')))) {
        if (g_HelpFlags.piece<888,2>() != -1) {
          g_HelpFlags.piece<888,2>() = g_HelpFlags.piece<888,2>() + 1;
        }
        iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)g_HelpFlags.piece<890,2>() < iVar3 / 600) {
          sVar2 = (short)(iVar3 >> 0x1f);
          g_HelpFlags.piece<890,2>() =
               ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf)
          ;
        }
        g_HelpFlags.piece<892,4>() = g_HelpFlags.piece<892,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
        if ((iVar3 != 0) && ((g_HelpFlags.piece<892,4>() & 0x80000000) == 0)) {
          Help_QueueMessage(STR_THOSE_PULSING_TOWERS_CONTROL_0x32C8,0x6f);
        }
      }
    }
  }
  iVar3 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[2]);
  DAT_0096bfab = (char)((ulonglong)(LZCOUNT(iVar3) << 0x20) >> 0x25);
  return;
}


