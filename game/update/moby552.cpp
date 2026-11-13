// game/update/moby552.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3b1bf0-0x3b1fd0
#include "game/update/moby552.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x03b1bf0 (0x78 bytes)
undefined8 M552_003b1bf0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar2 != (ushort *)0x0) {
    do {
      if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == WALL_BUTTON) &&
         (g_MobyInstance[*puVar2 & 0x7fff].setByGroup != '\0')) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}


// 0x03b1c70 (0x9c bytes)
MobyInstance * M552_003b1c70(MobyInstance *param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar2 = g_MobyInstance + (*puVar3 & 0x7fff);
      if (((pMVar2->oClass == 0x228) && (param_1 != pMVar2)) &&
         (ABS((pMVar2->pos).z - (param_1->pos).z) < 0.1)) {
        return pMVar2;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return (MobyInstance *)0x0;
}


// 0x03b1d10 (0x114 bytes)
void M552_003b1d10(MobyInstance *param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  MobyInstance *pMVar6;
  
  puVar3 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
  pMVar4 = g_MobyInstance;
  if (puVar3 != (ushort *)0x0) {
    do {
      pMVar6 = pMVar4 + (*puVar3 & 0x7fff);
      if (pMVar6->oClass == 0x228) {
        if (param_1 != pMVar6) {
          pMVar6->modeBits = pMVar6->modeBits | NO_UPDATE;
          pMVar4 = g_MobyInstance;
        }
        puVar5 = (ushort *)(&g_MobyGroups)[(byte)pMVar6->group];
        if (puVar5 == (ushort *)0x0) {
          pMVar2 = (MobyInstance *)0x0;
        }
        else {
          do {
            pMVar2 = pMVar4 + (*puVar5 & 0x7fff);
            if ((pMVar2->oClass == 0x228 && pMVar6 != pMVar2) &&
               (ABS((pMVar2->pos).z - (pMVar6->pos).z) < 0.1)) goto LAB_003b1e00;
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
          } while (-1 < (short)uVar1);
          pMVar2 = (MobyInstance *)0x0;
        }
LAB_003b1e00:
        *(MobyInstance **)pMVar6->pVar = pMVar2;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x03b1e24 (0x1ac bytes)
/* Moby 552 */

void UpdateMoby_552(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  
  piVar2 = (int *)moby->pVar;
  if ((moby->modeBits & NO_UPDATE) == NONE) {
    if (moby->state == 0) {
      if (*piVar2 == 0) {
        M552_003b1d10(moby);
        moby->state = '\x01';
      }
    }
    else if (moby->state < 2) {
      puVar4 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      if (puVar4 != (ushort *)0x0) {
        do {
          if ((g_MobyInstance[*puVar4 & 0x7fff].oClass == WALL_BUTTON) &&
             (g_MobyInstance[*puVar4 & 0x7fff].setByGroup != '\0')) {
            if (piVar2[2] == 0) {
              return;
            }
            iVar3 = piVar2[3];
            piVar2[2] = 0;
            if (((iVar3 != -1) && (g_SoundChannels[iVar3].pMoby == moby)) &&
               (g_SoundChannels[iVar3].state != '\0')) {
              sound_Kill(iVar3);
            }
            piVar2[3] = -1;
            return;
          }
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
        } while (-1 < (short)uVar1);
      }
      piVar2[2] = 1;
      RegisterMobyDraw(&PTR_M554_003b21f0_0070d190,moby);
      iVar3 = IsMobyPlayingSound(moby,piVar2[3]);
      if (iVar3 == 0) {
        iVar3 = PlayMobySound(0,4,moby);
        piVar2[3] = iVar3;
      }
    }
  }
  return;
}


