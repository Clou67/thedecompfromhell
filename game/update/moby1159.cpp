// game/update/moby1159.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1e40d8-0x1e43d8
#include "game/update/moby1159.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "game/update/moby1158.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x01e40d8 (0x30 bytes)
void M1159_001e40d8(void)

{
  WaterTile_DrawAll(&DAT_00ef2940,0x14);
  return;
}


// 0x01e4108 (0x14 bytes)
void M1159_001e4108(void)

{
  DAT_00764f80 = 0x10000;
  return;
}


// 0x01e4130 (0x2a8 bytes)
/* Moby 1159 */

void UpdateMoby_1159(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *val;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  MobyInstance *pMVar12;
  double dVar13;
  
  bVar1 = moby->state;
  val = (float *)moby->pVar;
  if (bVar1 == 0) {
    (moby->pos).z = val[3] * 1.9 + (moby->pos).z;
    pMVar12 = CreateMoby(0x487);
    pMVar12->drawDistance = 0x40;
    pMVar12->enabled = '\x01';
    uVar11 = moby->light;
    pMVar12->color = moby->color;
    pMVar12->light = uVar11;
    pMVar12->modeBits = moby->modeBits;
    (pMVar12->pos).x = (moby->pos).x;
    (pMVar12->pos).y = (moby->pos).y;
    (pMVar12->pos).z = (moby->pos).z;
    (pMVar12->pos).w = (moby->pos).w;
    fVar2 = (moby->rotation).x;
    (pMVar12->rotation).x = fVar2;
    (pMVar12->rotation).y = (moby->rotation).y;
    (pMVar12->rotation).z = (moby->rotation).z;
    (pMVar12->rotation).w = (moby->rotation).w;
    dVar13 = (double)FastWrapRot(fVar2,3.1415927);
    (pMVar12->rotation).x = (float)dVar13;
    UpdateMobyTransform(pMVar12);
    pvVar6 = pMVar12->pVar;
    *(float *)((int)pvVar6 + 8) = val[2];
    *(float *)((int)pvVar6 + 0x10) = val[4];
    *(float *)((int)pvVar6 + 0x14) = val[5];
    fVar2 = moby->pClass->gScale;
    moby->scale = fVar2 * val[3];
    fVar3 = val[3];
    pMVar12->state = '\x01';
    pMVar12->scale = fVar2 * fVar3;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    fVar2 = val[2];
    if (((g_MobyInstance[(int)fVar2].oClass == TRESSPASSER_PAD) &&
        (g_MobyInstance[(int)fVar2].state == '\x04')) ||
       ((g_MobyInstance[(int)fVar2].oClass == BUTTON_033E &&
        (g_MobyInstance[(int)fVar2].setByGroup != '\0')))) {
      moby->state = '\x02';
      (&g_MiscLevelFlags.field87_0x57)[(int)val[5]] = 1;
      PlayMobySound(0,0,moby);
    }
  }
  else if (bVar1 < 3) {
    OrganicDelt
              (val[4],g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 2.0,val,0x720000,val + 1);
    fVar2 = (moby->transform).v1.y;
    fVar3 = (moby->transform).v1.x;
    fVar4 = (moby->transform).v1.z;
    fVar5 = 0.0;
    fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar7 = -val[1] / fVar10;
    fVar9 = fVar5;
    if (0.0 - fVar10 < 0.0) {
      fVar9 = fVar4 * fVar7;
    }
    fVar8 = fVar5;
    if (0.0 - fVar10 < 0.0) {
      fVar8 = fVar2 * fVar7;
    }
    if (0.0 - fVar10 < 0.0) {
      fVar5 = fVar3 * fVar7;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar9 = fVar4 * fVar7;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar8 = fVar2 * fVar7;
    }
    if (fVar10 - 0.0 < 0.0) {
      fVar5 = fVar3 * fVar7;
    }
    (moby->pos).z = (moby->pos).z + fVar9;
    (moby->pos).y = (moby->pos).y + fVar8;
    (moby->pos).x = (moby->pos).x + fVar5;
  }
  return;
}


