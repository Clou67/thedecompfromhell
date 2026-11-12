// game/update/moby636.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3f9bc0-0x3f9cc0
#include "game/update/moby636.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x03f9bc0 (0x100 bytes)
/* Moby 636 */

void UpdateMoby_636(MobyInstance *moby)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if ((moby != (MobyInstance *)0x0) && (pfVar1 = (float *)moby->pVar, pfVar1 != (float *)0x0)) {
    pfVar1[2] = -(g_FrameTimeSq * 9.8 - pfVar1[2]);
    fVar4 = DAT_0071f408 * -0.100000024 + 1.0;
    fVar3 = *pfVar1 * fVar4;
    pfVar1[1] = pfVar1[1] * fVar4;
    *pfVar1 = fVar3;
    (moby->pos).x = (moby->pos).x + fVar3;
    (moby->pos).y = (moby->pos).y + pfVar1[1];
    fVar3 = (moby->pos).z + pfVar1[2];
    (moby->pos).z = fVar3;
    uVar2 = (int)pfVar1[2] >> 0x1f;
    if (((int)((uVar2 >> 1 ^ (uint)pfVar1[2]) - uVar2) < -0x3dcccccd) &&
       (fVar3 < g_heroPosition.z - 0.5)) {
      DeleteMoby(moby);
    }
  }
  return;
}


