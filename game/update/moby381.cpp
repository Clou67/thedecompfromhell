// game/update/moby381.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x359358-0x3593d4
#include "game/update/moby381.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x0359358 (0x78 bytes)
MobyInstance * M381_00359358(void)

{
  uint uVar1;
  MobyInstance *pMVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(0x17d);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar2 = g_heroMobyPtr;
    pMVar3->drawDistance = 0x7f;
    uVar1 = pMVar2->light;
    pMVar3->color = pMVar2->color;
    pMVar3->light = uVar1;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x03593d0 (0x4 bytes)
/* Moby 381 */

MobyInstance * UpdateMoby_381(MobyInstance *moby)

{
  return moby;
}


