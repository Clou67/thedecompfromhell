// game/update/moby65.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x401c48-0x401de4
#include "game/update/moby65.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0401c48 (0x19c bytes)
/* Moby 65 */

void UpdateMoby_65(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  float *speed;
  MobyInstance *pMVar3;
  double dVar4;
  float fVar5;
  
  bVar1 = moby->state;
  speed = (float *)moby->pVar;
  if (bVar1 == 0) {
    MVar2 = moby->modeBits;
    fVar5 = (moby->rotation).z;
    moby->state = '\x01';
    speed[1] = fVar5;
    if ((MVar2 & MIRROR) == NONE) {
      pMVar3 = CreateMoby(0x41);
      pMVar3->drawDistance = moby->drawDistance;
      pMVar3->updateDistance = moby->updateDistance;
      pMVar3->modeBits = moby->modeBits | MIRROR;
      (pMVar3->pos).x = (moby->pos).x;
      (pMVar3->pos).y = (moby->pos).y;
      (pMVar3->pos).z = (moby->pos).z;
      (pMVar3->pos).w = (moby->pos).w;
      (pMVar3->rotation).x = (moby->rotation).x;
      (pMVar3->rotation).y = (moby->rotation).y;
      (pMVar3->rotation).z = (moby->rotation).z;
      (pMVar3->rotation).w = (moby->rotation).w;
      speed[2] = (float)pMVar3;
      *(f32 *)((int)pMVar3->pVar + 4) = (moby->rotation).z;
    }
  }
  else if ((1 < bVar1) && (bVar1 < 3)) {
    if ((moby->modeBits & MIRROR) == NONE) {
      dVar4 = (double)FastWrapRot(speed[1],0.20769417);
    }
    else {
      dVar4 = (double)FastDiffRots((double)speed[1],0x3fca95b900000000);
    }
    fVar5 = OrganicDeltAng
                      ((float)dVar4,g_FrameTimeSq * 0.34906584,g_FrameTimeSq * 0.34906584,
                       g_FrameTime * 0.7853982,&(moby->rotation).z,0x720000,speed);
    if (fVar5 == 0.0) {
      moby->state = '\x03';
    }
  }
  return;
}


