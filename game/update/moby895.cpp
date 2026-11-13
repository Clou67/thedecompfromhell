// game/update/moby895.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4a4134-0x4a42e0
#include "game/update/moby895.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a4134 (0x14 bytes)
void M895_004a4134(void)

{
  DAT_008cc194 = 0x10000;
  return;
}


// 0x04a4158 (0x188 bytes)
/* Moby 895 */

void UpdateMoby_895(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  int *piVar3;
  double dVar4;
  
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  fVar2 = (moby->rotation).z;
  if (bVar1 == 0) {
    if (*piVar3 != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    moby->state = '\x01';
    piVar3[3] = (int)fVar2;
    if (*piVar3 == 0) {
      dVar4 = (double)FastWrapRot((moby->rotation).z,1.5707964);
    }
    else {
      dVar4 = (double)FastDiffRots((double)(moby->rotation).z,0x3ff921fb60000000);
    }
    (moby->rotation).z = (float)dVar4;
  }
  else if (1 < bVar1) {
    if (2 < bVar1) {
      return;
    }
    if (*piVar3 == 0) {
      dVar4 = (double)FastWrapRot((float)piVar3[3],0.6981317);
    }
    else {
      dVar4 = (double)FastDiffRots((double)(float)piVar3[3],0x3fe6571840000000);
    }
    OrganicDeltAng
              ((float)dVar4,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,(float *)(piVar3 + 1))
    ;
    return;
  }
  if (g_MobyInstance[piVar3[2]].setByGroup != '\0') {
    PlayMobySound(0,0,moby);
    moby->state = '\x02';
  }
  return;
}


