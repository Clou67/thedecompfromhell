// game/update/moby852.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48e730-0x48e9c0
#include "game/update/moby852.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x048e730 (0x14 bytes)
void M852_0048e730(void)

{
  DAT_008ad3ac = 0x10000;
  return;
}


// 0x048e760 (0x260 bytes)
/* Moby 852 */

MobyInstance * UpdateMoby_852(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  int *piVar4;
  int iVar5;
  MobyInstance *pMVar6;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (bVar1 == 0) {
    piVar4[3] = (int)((moby->pos).z + 1.0);
    fVar2 = (moby->pos).z;
    moby->state = '\x01';
    (moby->pos).z = fVar2 - 8.0;
    pMVar6 = (MobyInstance *)&DAT_0048e748;
  }
  else if (bVar1 < 2) {
    bVar1 = g_MobyInstance[*piVar4].setByGroup;
    if (bVar1 == 1) {
      moby->state = '\x02';
      pMVar6 = (MobyInstance *)0x2;
    }
    else {
      pMVar6 = (MobyInstance *)(uint)bVar1;
      if (bVar1 == 2) {
        fVar3 = (f32)piVar4[3];
        (moby->rotation).y = 0.0;
        (moby->pos).z = fVar3;
        moby->state = '\x03';
        pMVar6 = (MobyInstance *)0x0;
      }
    }
  }
  else {
    pMVar6 = moby;
    if (bVar1 < 3) {
      iVar5 = FastDecTimerS32(piVar4 + 1);
      if ((iVar5 != 0) &&
         (OrganicDelt
                    ((float)piVar4[3],DAT_008ad3d0 * DAT_0071f418,DAT_008ad3d4 * DAT_0071f418,
                     DAT_008ad3d8 * g_FrameTime,&(moby->pos).z,0x8b0000,
                     (float *)(piVar4 + 4)), moby->oClass == BRIDGE_PILE)) {
        fVar2 = (moby->pos).z;
        if ((ABS(fVar2 - (float)piVar4[3]) < 3.0) &&
           (3.0 < ABS(((float)piVar4[3] - fVar2) + (float)piVar4[4]))) {
          PlayMobySound(0,0,moby);
        }
      }
      iVar5 = FastDecTimerS32(piVar4 + 2);
      if (iVar5 == 0) {
        pMVar6 = (MobyInstance *)piVar4[2];
        if (((MobyInstance *)piVar4[2] == (MobyInstance *)0x1) &&
           (pMVar6 = (MobyInstance *)(uint)moby->oClass, moby->oClass == BRIDGE_PART)) {
          pMVar6 = (MobyInstance *)PlayMobySound(0,0,moby);
        }
      }
      else {
        OrganicDeltAng
                  (0.0,DAT_008ad3dc * 0.017453292 * DAT_0071f418,
                   DAT_008ad3e0 * 0.017453292 * DAT_0071f418,
                   DAT_008ad3e4 * 0.017453292 * g_FrameTime,&(moby->rotation).y,0x720000,
                   (float *)(piVar4 + 5));
        pMVar6 = (MobyInstance *)(moby->rotation).y;
        if (pMVar6 == (MobyInstance *)0x0) {
          moby->state = '\x03';
          pMVar6 = (MobyInstance *)0x3;
        }
      }
    }
  }
  return pMVar6;
}


