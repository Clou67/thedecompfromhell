// game/update/moby743.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x443ea0-0x4440d0
#include "game/update/moby743.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0443ea0 (0x230 bytes)
/* Moby 743 */

MobyInstance * UpdateMoby_743(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  u8 *puVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Vec4 local_40;
  
  bVar1 = moby->state;
  pMVar8 = (MobyInstance *)moby->pVar;
  local_40.x = (moby->pos).x;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      (pMVar8->bSphere).x = local_40.x;
      (pMVar8->bSphere).y = (moby->pos).y;
      (pMVar8->bSphere).z = (moby->pos).z;
      (pMVar8->bSphere).rad = (moby->pos).w;
      moby->state = '\x01';
    }
    else {
      pMVar8 = (MobyInstance *)(pMVar8->pos).x;
      if (-1 < (int)pMVar8) {
        pMVar8 = g_MobyInstance + (int)pMVar8;
        if (((pMVar8->oClass == TRESSPASSER_PAD) || (pMVar8->oClass == 0x23f)) &&
           (puVar5 = &pMVar8->state, pMVar8 = (MobyInstance *)(uint)*puVar5, *puVar5 == 4)) {
          moby->state = '\x02';
          pMVar8 = (MobyInstance *)PlayMobySound(0,0,moby);
        }
      }
    }
  }
  else if (bVar1 < 3) {
    fVar2 = (moby->transform).v1.y;
    fVar3 = (moby->transform).v1.x;
    fVar4 = (moby->transform).v1.z;
    dVar12 = 0.0;
    fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    local_40.w = (pMVar8->bSphere).rad;
    fVar7 = 2.0 / fVar6;
    dVar11 = dVar12;
    if (0.0 - fVar6 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    dVar10 = dVar12;
    if (0.0 - fVar6 < 0.0) {
      dVar10 = (double)(fVar2 * fVar7);
    }
    dVar9 = dVar12;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(fVar3 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar10 = (double)(fVar2 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(fVar3 * fVar7);
    }
    local_40.z = (float)((double)(pMVar8->bSphere).z + dVar11) - (moby->pos).z;
    local_40.y = (float)((double)(pMVar8->bSphere).y + dVar10) - (moby->pos).y;
    local_40.x = (float)((double)(pMVar8->bSphere).x + dVar9) - local_40.x;
    pMVar8 = (MobyInstance *)
             ClampVec3Magnitude((double)(g_FrameTime * 2.0),&local_40);
    (moby->pos).x = (moby->pos).x + local_40.x;
    (moby->pos).y = (moby->pos).y + local_40.y;
    (moby->pos).z = (moby->pos).z + local_40.z;
    if ((double)SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y) ==
        dVar12) {
      PlayMobySound(1,0,moby);
      pMVar8 = (MobyInstance *)0x3;
      moby->state = '\x03';
    }
  }
  return pMVar8;
}


