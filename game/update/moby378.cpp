// game/update/moby378.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3580e8-0x358494
#include "game/update/moby378.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby379.h"
#include "idol/fastfunc.h"

// 0x03580e8 (0x14 bytes)
void M378_003580e8(void)

{
  DAT_008406c0 = 0x10000;
  return;
}


// 0x0358108 (0x114 bytes)
MobyInstance * M378_00358108(int param_1)

{
  int *piVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = CreateMoby(0x17a);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pMVar2->setByGroup = '\0';
    (pMVar2->pos).x = *(f32 *)(param_1 + 0x10);
    piVar1 = (int *)pMVar2->pVar;
    (pMVar2->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar2->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar2->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar2->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar2->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar2->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar2->rotation).w = *(f32 *)(param_1 + 0x4c);
    *piVar1 = param_1;
    UpdateMobyTransform(pMVar2);
    MB_CopyHeroLights(pMVar2);
    if (pMVar2->animationId != '\0') {
      MB_SetAnimation(pMVar2,0,0,(int)(animationSpeed * 0.5));
    }
  }
  return pMVar2;
}


// 0x0358220 (0x1e0 bytes)
/* Moby 378 */

void UpdateMoby_378(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  Vec4 aVStack_70 [5];
  
  if ((moby != (MobyInstance *)0x0) && (pvVar2 = moby->pVar, pvVar2 != (void *)0x0)) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar3 = *(int *)((int)pvVar2 + 4);
        if (iVar3 == 0) {
          iVar3 = M378_00358494(moby);
          *(int *)((int)pvVar2 + 4) = iVar3;
        }
        if (iVar3 != 0) {
          if (moby->animationId != '\0') {
            MB_SetAnimation(moby,0,0,(int)(animationSpeed * 0.5));
          }
          moby->state = '\x01';
        }
      }
      else if (((moby->field43_0x70 & 2U) != 0) &&
              (moby->state = '\x02', moby->animationId != '\x01')) {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 0.5));
      }
    }
    else if (((2 < bVar1) && (bVar1 < 4)) && ((moby->field43_0x70 & 2U) != 0)) {
      if (*(MobyInstance **)((int)pvVar2 + 4) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar2 + 4));
      }
      DeleteMoby(moby);
      return;
    }
    if (*(uint *)((int)pvVar2 + 4) != 0) {
      GetBonePosition(moby,0,(ulonglong)*(uint *)((int)pvVar2 + 4) + 0x10);
      GetBoneTransformations(moby,0,aVStack_70);
      FastApplyTransform((Vec4 *)(*(int *)((int)pvVar2 + 4) + 0xc0),aVStack_70);
    }
  }
  return;
}


// 0x0358400 (0x94 bytes)
void M379_00358400(double param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = -param_1;
  dVar1 = (double)MB_randRangeFloat((float)dVar2,(float)param_1);
  *param_2 = (float)((double)*param_2 + dVar1);
  dVar1 = (double)MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[1] = (float)((double)param_2[1] + dVar1);
  dVar1 = (double)MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[2] = (float)((double)param_2[2] + dVar1);
  return;
}


