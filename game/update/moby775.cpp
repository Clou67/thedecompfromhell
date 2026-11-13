// game/update/moby775.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4563a4-0x4565ac
#include <stdio.h>
#include "game/update/moby775.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x04563a4 (0xc0 bytes)
// strings: 00658254: "WARNING! - Moby 774 wasn't expecting a M774_ShipChallengeDone call.  Please tell Jason you saw this.\n"

undefined4 * M775_004563a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) == '\x06' || *(char *)(param_1 + 0x20) == '\x04') {
    if (param_2 == 0) {
      *(undefined2 *)(iVar1 + 2) = 5;
    }
    else {
      *(undefined2 *)(iVar1 + 2) = 6;
      MB_UnlockItem(0x1b,1);
    }
    puVar2 = &g_heroMtx;
    g_heroPosition.x = 128.6;
    g_heroPosition.z = 39.8;
    g_heroPosition.y = 316.0;
    *(undefined1 *)(iVar1 + 8) = 1;
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  else {
    puVar2 = (undefined4 *)
             printf(
                         "WARNING! - Moby 774 wasn\'t expecting a M774_ShipChallengeDone call.  Please tell Jason you saw this.\n"
                         );
  }
  return puVar2;
}


// 0x0456464 (0x14 bytes)
void M775_00456464(void)

{
  DAT_00873860 = 0x10000;
  return;
}


// 0x0456478 (0xd0 bytes)
MobyInstance * FUN_00456478(double param_1,f32 *param_2)

{
  MobyInstance *pMVar1;
  double dVar2;
  
  pMVar1 = CreateMoby(SPLASH_EFFECT);
  if (pMVar1 != (MobyInstance *)0x0) {
    MB_CopyHeroLights(pMVar1);
    SetColorOfMoby(pMVar1,0x28,0x28,0x46);
    pMVar1->updateDistance = -1;
    pMVar1->drawDistance = 0x40;
    pMVar1->scale = (float)((double)pMVar1->scale * param_1);
    (pMVar1->pos).x = *param_2;
    (pMVar1->pos).y = param_2[1];
    (pMVar1->pos).z = param_2[2];
    (pMVar1->pos).w = param_2[3];
    dVar2 = (double)MB_randRot();
    (pMVar1->rotation).z = (float)dVar2;
    UpdateMobyTransform(pMVar1);
  }
  return pMVar1;
}


// 0x0456550 (0x5c bytes)
/* Moby 775 */

void UpdateMoby_775(MobyInstance *moby)

{
  byte bVar1;
  
  bVar1 = moby->alpha - 3;
  moby->alpha = bVar1;
  moby->scale = moby->scale * 1.025;
  if (bVar1 < 4) {
    DeleteMoby(moby);
  }
  return;
}


