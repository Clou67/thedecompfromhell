// game/update/moby804.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x465968-0x465d04
#include "game/update/moby804.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0465968 (0x168 bytes)
MobyInstance * M804_00465968(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *pMVar12;
  
  pMVar12 = CreateMoby(DOOR_LEFT|BLARG_GUNNER);
  if (pMVar12 != (MobyInstance *)0x0) {
    piVar7 = (int *)pMVar12->pVar;
    *piVar7 = param_1;
    pMVar12->updateDistance = '\x7f';
    pMVar12->drawDistance = 0x7f;
    pMVar12->enabled = '\x01';
    (pMVar12->pos).w = 0.0;
    (pMVar12->pos).z = 0.0;
    (pMVar12->pos).y = 0.0;
    (pMVar12->pos).x = 0.0;
    fVar1 = (float)piVar7[1];
    fVar2 = *(float *)(param_1 + 0xdc);
    pfVar8 = *(float **)(param_1 + 0x78);
    fVar9 = -(fVar1 * *(float *)(param_1 + 0xd0));
    fVar10 = -(fVar1 * *(float *)(param_1 + 0xd4));
    fVar11 = -(fVar1 * *(float *)(param_1 + 0xd8));
    (pMVar12->pos).y = -fVar1;
    (pMVar12->pos).x = fVar9;
    (pMVar12->pos).y = fVar10;
    (pMVar12->pos).z = fVar11;
    (pMVar12->pos).w = -(fVar1 * fVar2);
    fVar3 = *(f32 *)(param_1 + 0x40);
    fVar4 = *(f32 *)(param_1 + 0x44);
    fVar5 = *(f32 *)(param_1 + 0x48);
    fVar6 = *(f32 *)(param_1 + 0x4c);
    (pMVar12->pos).x = fVar9 + *pfVar8;
    (pMVar12->pos).y = fVar10 + pfVar8[1];
    fVar1 = pfVar8[2];
    (pMVar12->rotation).x = fVar3;
    (pMVar12->rotation).y = fVar4;
    (pMVar12->rotation).z = fVar5;
    (pMVar12->rotation).w = fVar6;
    (pMVar12->pos).z = fVar11 + fVar1;
    piVar7[2] = param_2;
    piVar7[1] = 0;
    piVar7[3] = (int)pMVar12->scale;
    pMVar12->scale = pMVar12->scale * 0.1;
    SetColorOfMoby(pMVar12,0,0x40,0x80);
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// 0x0465ae8 (0x21c bytes)
/* Moby 804 */

void UpdateMoby_804(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  s8 sVar10;
  
  piVar3 = (int *)moby->pVar;
  piVar3[1] = (int)(DAT_007bd344 * 2.0 * g_FrameTime + (float)piVar3[1]);
  iVar9 = FastDecTimerS32(piVar3 + 2);
  if ((((iVar9 != 0) || (DAT_007bd344 * 1.1 <= (float)piVar3[1])) || (iVar9 = *piVar3, iVar9 == 0))
     || (((*(short *)(iVar9 + 0xa6) != 0xb9 || (*(char *)(iVar9 + 0x20) == -2)) ||
         (*(char *)(iVar9 + 0x20) == -3)))) {
    DeleteMoby(moby);
  }
  else {
    pfVar4 = *(float **)(iVar9 + 0x78);
    (moby->pos).w = 0.0;
    (moby->pos).z = 0.0;
    (moby->pos).y = 0.0;
    (moby->pos).x = 0.0;
    fVar1 = (float)piVar3[1];
    iVar9 = *piVar3;
    (moby->pos).y = -fVar1;
    fVar2 = *(float *)(iVar9 + 0xdc);
    fVar6 = -(fVar1 * *(float *)(iVar9 + 0xd0));
    fVar7 = -(fVar1 * *(float *)(iVar9 + 0xd4));
    fVar8 = -(fVar1 * *(float *)(iVar9 + 0xd8));
    (moby->pos).x = fVar6;
    (moby->pos).y = fVar7;
    (moby->pos).z = fVar8;
    (moby->pos).w = -(fVar1 * fVar2);
    iVar9 = *piVar3;
    (moby->pos).x = fVar6 + *pfVar4;
    (moby->pos).y = fVar7 + pfVar4[1];
    (moby->pos).z = fVar8 + pfVar4[2];
    (moby->rotation).x = *(f32 *)(iVar9 + 0x40);
    (moby->rotation).y = *(f32 *)(iVar9 + 0x44);
    (moby->rotation).z = *(f32 *)(iVar9 + 0x48);
    (moby->rotation).w = *(f32 *)(iVar9 + 0x4c);
    uVar5 = piVar3[1] >> 0x1f;
    fVar1 = (float)piVar3[1];
    if ((int)(FLOAT_ORDER(DAT_007bd344)) < (int)((uVar5 >> 1 ^ piVar3[1]) - uVar5)) {
      sVar10 = FastDoubleToInt((double)(-((fVar1 - DAT_007bd344) * 10.0 - 1.0) * 127.0));
      moby->alpha = sVar10;
      fVar1 = (float)piVar3[1];
    }
    moby->scale = (float)piVar3[3] * 0.1 + ((float)piVar3[3] * fVar1) / DAT_007bd344;
  }
  return;
}


