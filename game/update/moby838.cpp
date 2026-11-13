// game/update/moby838.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4819f0-0x481c7c
#include "game/update/moby838.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"

// 0x04819f0 (0x14 bytes)
void M838_004819f0(void)

{
  DAT_008acdf0 = 0x10000;
  return;
}


// 0x0481a10 (0x26c bytes)
/* Moby 838 */

void UpdateMoby_838(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  bVar1 = moby->state;
  piVar5 = (int *)moby->pVar;
  if (bVar1 == 0) {
    moby->enabled = '\0';
    moby->state = '\x01';
    puVar6 = (undefined4 *)piVar5[1];
    moby->modeBits = moby->modeBits | DISABLED;
    *puVar6 = 0xffffffff;
    return;
  }
  if (bVar1 < 2) {
    if (DAT_010d9d40 != worldUpdateTime) {
      DAT_010d9d40 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M841_00481ca8_0070ef38,moby);
    }
    fVar2 = (moby->pos).y;
    fVar3 = (moby->pos).x;
    fVar8 = fVar2 - GameCamera.posY;
    fVar9 = fVar3 - GameCamera.posX;
    fVar4 = (moby->pos).z;
    fVar10 = fVar4 - GameCamera.posZ;
    fVar8 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
    if (fVar8 < 64.0) {
      iVar12 = *(int *)piVar5[1];
      if (((iVar12 < 0) || (g_SoundChannels[iVar12].pMoby == (MobyInstance *)0x0)) ||
         ((g_SoundChannels[iVar12].pMoby)->oClass != ELECTRIC_GATE)) {
        iVar12 = PlayMobySound(0,4,moby);
        *(int *)piVar5[1] = iVar12;
      }
      else {
        pMVar7 = g_SoundChannels[iVar12].pMoby;
        if ((pMVar7 != moby) &&
           ((pMVar7->state != '\x01' ||
            (fVar9 = (pMVar7->pos).y - GameCamera.posY, fVar10 = (pMVar7->pos).x - GameCamera.posX,
            fVar11 = (pMVar7->pos).z - GameCamera.posZ,
            fVar8 < SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9))))) {
          g_SoundChannels[iVar12].pMoby = moby;
          iVar12 = *(int *)piVar5[1];
          g_SoundChannels[iVar12].pos[0] = fVar3;
          g_SoundChannels[iVar12].pos[1] = fVar2;
          g_SoundChannels[iVar12].pos[2] = fVar4;
          g_SoundChannels[iVar12].pos[3] = (moby->pos).w;
        }
      }
    }
    if ((-1 < *piVar5) && (g_MobyInstance[*piVar5].setByGroup != '\0')) {
      PlayMobySound(1,0,moby);
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
    }
    return;
  }
  if (2 < bVar1) {
    return;
  }
  if (moby->collision == (ushort *)0x0) {
    return;
  }
  moby->collision = (ushort *)0x0;
  return;
}


