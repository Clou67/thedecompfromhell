// game/update/moby1345.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x252124-0x252300
#include "game/update/moby1345.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0252124 (0x14 bytes)
void M1345_00252124(void)

{
  DAT_0079b6ec = 0x10000;
  return;
}


// 0x0252140 (0x1c0 bytes)
/* Moby 1345 */

void UpdateMoby_1345(MobyInstance *moby)

{
  int *piVar1;
  MobyInstance *pMVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == 0) {
    if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
      moby->state = '\x01';
    }
    else {
      DeleteMoby(moby);
    }
  }
  else if (moby->state < 2) {
    iVar4 = MB_ScaledVecWrapper(0x4048000000000000,moby);
    if (iVar4 != -1) {
      RegisterFuncForMoby(&PTR_M1346_00252318_00709f48,moby);
    }
    uVar3 = (ulonglong)(uint)piVar1[1];
    if (piVar1[1] == 0xffffffff) {
      iVar4 = PlayMobySound(0,4,moby);
      uVar3 = (ulonglong)iVar4;
      piVar1[1] = iVar4;
    }
    iVar4 = *piVar1;
    if (-1 < iVar4) {
      if ((((int)uVar3 != -1) &&
          (iVar5 = (int)(uVar3 << 7) - (int)(uVar3 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar5 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar5 + 4) != '\0')) {
        sound_Kill((int)uVar3);
        iVar4 = *piVar1;
      }
      pMVar2 = g_MobyInstance;
      piVar1[1] = -1;
      if (pMVar2[iVar4].state == '\a') {
        if (moby->levelFlagIdx != -1) {
          SetLevelFlag();
        }
        PlayMobySound(1,0,moby);
        moby->state = '\x02';
        moby->collision = (ushort *)0x0;
      }
    }
  }
  return;
}


