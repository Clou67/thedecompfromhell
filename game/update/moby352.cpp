// game/update/moby352.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x354148-0x354470
#include "game/update/moby352.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0354148 (0x14 bytes)
void M352_00354148(void)

{
  DAT_00840398 = 0x10000;
  return;
}


// 0x0354160 (0xcc bytes)
MobyInstance * Spawn_Moby352(int param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  int *piVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(0x160);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    piVar3 = (int *)pMVar4->pVar;
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    fVar1 = *(f32 *)(param_1 + 0x14);
    pMVar4->drawDistance = 0x3ff;
    (pMVar4->pos).y = fVar1;
    MVar2 = pMVar4->modeBits;
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    *piVar3 = param_1;
    (pMVar4->pos).w = fVar1;
    piVar3[1] = 0;
    pMVar4->modeBits = MVar2 | DRAW_TRANSPARENT_WEIRD;
    UpdateMobyTransform(pMVar4);
    MB_CopyHeroLights(pMVar4);
    pMVar4->scale = pMVar4->pClass->gScale;
  }
  return pMVar4;
}


// 0x0354248 (0x228 bytes)
/* Moby 352 */

void UpdateMoby_352(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  int *piVar4;
  u16 *puVar5;
  int iVar6;
  s8 sVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (uVar1 == '\x04') {
    DeleteMoby(moby);
  }
  else {
    if (uVar1 == '\x03') {
      moby->scale = (moby->pClass->gScale - moby->scale) * 0.1 + moby->scale;
      fVar3 = -(DAT_0071f408 * 0.02 - (float)piVar4[1]);
      piVar4[1] = (int)fVar3;
      if (fVar3 <= 0.0) {
        piVar4[1] = 0;
        moby->state = '\x04';
        fVar3 = (float)piVar4[1];
      }
      sVar7 = FastDoubleToInt((double)(fVar3 * 60.0));
      moby->alpha = sVar7;
    }
    else if (uVar1 == '\x02') {
      iVar6 = *piVar4;
      moby->scale = (moby->pClass->gScale * 4.0 - moby->scale) * 0.1 + moby->scale;
      if (((iVar6 == 0) || (cVar2 = *(char *)(iVar6 + 0x20), cVar2 == -2)) || (cVar2 == -3)) {
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      moby->scale = (moby->pClass->gScale * 4.0 - moby->scale) * 0.1 + moby->scale;
      fVar3 = DAT_0071f408 * 0.02 + (float)piVar4[1];
      piVar4[1] = (int)fVar3;
      if (1.0 <= fVar3) {
        piVar4[1] = 0x3f800000;
        moby->state = '\x02';
        fVar3 = (float)piVar4[1];
      }
      sVar7 = FastDoubleToInt((double)(fVar3 * 60.0));
      moby->alpha = sVar7;
    }
    else if (uVar1 == '\0') {
      puVar5 = moby->pClass->collision;
      moby->state = '\x01';
      moby->collision = puVar5;
    }
    iVar6 = piVar4[2];
    uVar8 = 0xffffffffffffffc0;
    iVar9 = iVar6 + -0x40;
    piVar4[2] = iVar9;
    if (iVar9 < 0x1001) {
      if (iVar9 < 0) {
        uVar8 = 0xfc0;
        piVar4[2] = iVar6 + 0xfc0;
      }
    }
    else {
      uVar8 = 0xffffffffffffefc0;
      piVar4[2] = iVar6 + -0x1040;
    }
    MB_AddShortPairOffset(moby->pClass,0,uVar8);
  }
  return;
}


