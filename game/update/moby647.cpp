// game/update/moby647.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x400f48-0x4010d4
#include "game/update/moby647.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0400f48 (0x18c bytes)
/* Moby 647 */

void UpdateMoby_647(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar5 = (f32 *)moby->pVar;
  if (moby->state == 0) {
    *pfVar5 = (moby->pos).x;
    pfVar5[1] = (moby->pos).y;
    pfVar5[2] = (moby->pos).z;
    pfVar5[3] = (moby->pos).w;
    moby->state = '\x02';
  }
  else if (moby->state < 2) {
    (moby->pos).x = *pfVar5;
    (moby->pos).y = pfVar5[1];
    (moby->pos).z = pfVar5[2];
    (moby->pos).w = pfVar5[3];
    OrganicDelt
              (pfVar5[5],DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 8.0,
               pfVar5 + 6,0x720000,pfVar5 + 4);
    fVar1 = (moby->transform).v0.y;
    fVar2 = (moby->transform).v0.x;
    fVar3 = (moby->transform).v0.z;
    fVar4 = 0.0;
    fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar6 = pfVar5[6] / fVar9;
    fVar8 = fVar4;
    if (0.0 - fVar9 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar7 = fVar4;
    if (0.0 - fVar9 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    if (0.0 - fVar9 < 0.0) {
      fVar4 = fVar2 * fVar6;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar7 = fVar1 * fVar6;
    }
    if (fVar9 - 0.0 < 0.0) {
      fVar4 = fVar2 * fVar6;
    }
    (moby->pos).z = (moby->pos).z + fVar8;
    (moby->pos).y = (moby->pos).y + fVar7;
    (moby->pos).x = (moby->pos).x + fVar4;
    if (pfVar5[6] == pfVar5[5]) {
      moby->state = '\x02';
    }
  }
  return;
}


