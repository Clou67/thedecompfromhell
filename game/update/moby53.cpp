// game/update/moby53.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3aba98-0x3abc80
#include "game/update/moby53.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03aba98 (0x1e8 bytes)
/* Moby 53 */

void UpdateMoby_53(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar4 = (float *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    pfVar4[1] = *pfVar4 * 0.017453292 * g_FrameTime;
  }
  else if (moby->state < 2) {
    dVar6 = (double)FastWrapRot((moby->rotation).x,pfVar4[1] * DAT_00843798);
    (moby->rotation).x = (float)dVar6;
  }
  if ((DAT_00969f1c == moby) || (DAT_00969f20 == moby)) {
    fVar1 = (moby->transform).v0.y;
    fVar2 = (moby->transform).v0.x;
    fVar3 = (moby->transform).v0.z;
    local_20 = 0.0;
    local_18 = local_20;
    local_1c = local_20;
    if ((g_heroPosition.z - (moby->pos).z) * fVar3 +
        (g_heroPosition.x - (moby->pos).x) * fVar2 + (g_heroPosition.y - (moby->pos).y) * fVar1 <=
        0.0) {
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar5 == 0.0) {
        local_14 = (moby->transform).v0.w;
      }
      else {
        fVar5 = -2.0 / fVar5;
        local_20 = fVar2 * fVar5;
        local_14 = (moby->transform).v0.w;
        local_18 = fVar3 * fVar5;
        local_1c = fVar1 * fVar5;
      }
    }
    else {
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar5 == 0.0) {
        local_14 = (moby->transform).v0.w;
      }
      else {
        local_18 = 2.0 / fVar5;
        local_20 = fVar2 * local_18;
        local_1c = fVar1 * local_18;
        local_14 = (moby->transform).v0.w;
        local_18 = fVar3 * local_18;
      }
    }
    CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x3aba80,&(moby->pos).x,&local_20);
  }
  return;
}


