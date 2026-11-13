// game/update/moby744.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4440e0-0x4442e8
#include "game/update/moby744.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x04440e0 (0x208 bytes)
/* Moby 744 */

void UpdateMoby_744(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_40;
  
  bVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  local_40.x = (moby->pos).x;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *pfVar4 = local_40.x;
      pfVar4[1] = (moby->pos).y;
      pfVar4[2] = (moby->pos).z;
      pfVar4[3] = (moby->pos).w;
      moby->state = '\x01';
    }
    else {
      fVar5 = pfVar4[4];
      if (-1 < (int)fVar5) {
        if (((g_MobyInstance[(int)fVar5].oClass == TRESSPASSER_PAD) ||
            (g_MobyInstance[(int)fVar5].oClass == 0x23f)) &&
           (g_MobyInstance[(int)fVar5].state == '\x04')) {
          moby->state = '\x02';
        }
      }
    }
  }
  else if (bVar1 < 3) {
    fVar5 = (moby->transform).v1.y;
    fVar2 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    dVar11 = 0.0;
    local_40.w = pfVar4[3];
    fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
    fVar7 = -2.0 / fVar6;
    dVar10 = dVar11;
    if (0.0 - fVar6 < 0.0) {
      dVar10 = (double)(fVar3 * fVar7);
    }
    dVar9 = dVar11;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(fVar5 * fVar7);
    }
    dVar8 = dVar11;
    if (0.0 - fVar6 < 0.0) {
      dVar8 = (double)(fVar2 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar10 = (double)(fVar3 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(fVar5 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar8 = (double)(fVar2 * fVar7);
    }
    local_40.z = (float)((double)pfVar4[2] + dVar10) - (moby->pos).z;
    local_40.y = (float)((double)pfVar4[1] + dVar9) - (moby->pos).y;
    local_40.x = (float)((double)*pfVar4 + dVar8) - local_40.x;
    ClampVec3Magnitude((double)(g_FrameTime * 2.0),&local_40);
    (moby->pos).x = (moby->pos).x + local_40.x;
    (moby->pos).y = (moby->pos).y + local_40.y;
    (moby->pos).z = (moby->pos).z + local_40.z;
    if ((double)SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y) ==
        dVar11) {
      moby->state = '\x03';
    }
  }
  return;
}


