// game/update/moby235.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3048ac-0x304bac
#include "game/update/moby235.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03048ac (0x14 bytes)
void M235_003048ac(void)

{
  DAT_007ff3d0 = 0x10000;
  return;
}


// 0x03048c0 (0x14c bytes)
MobyInstance *
M235_003048c0
          (double param_1,double param_2,int param_3,undefined8 param_4,uint param_5,int param_6,
          undefined2 param_7)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  MobyInstance *pMVar4;
  double dVar5;
  
  pMVar4 = CreateMoby(AMMOCRATE_00E0|VENDOR);
  if (pMVar4 != (MobyInstance *)0x0) {
    piVar2 = (int *)pMVar4->pVar;
    fVar1 = pMVar4->scale;
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    *piVar2 = param_3;
    iVar3 = *(int *)(param_3 + 0x78);
    pMVar4->drawDistance = 0x7f;
    pMVar4->scale = (float)((double)fVar1 * param_2);
    (pMVar4->pos).x = *(f32 *)(iVar3 + 0xf0);
    (pMVar4->pos).y = *(f32 *)(iVar3 + 0xf4);
    (pMVar4->pos).z = *(f32 *)(iVar3 + 0xf8);
    (pMVar4->pos).w = *(f32 *)(iVar3 + 0xfc);
    (pMVar4->rotation).x = *(f32 *)(param_3 + 0x40);
    (pMVar4->rotation).y = *(f32 *)(param_3 + 0x44);
    (pMVar4->rotation).z = *(f32 *)(param_3 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_3 + 0x4c);
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    *(undefined2 *)(piVar2 + 3) = param_7;
    *(undefined2 *)((int)piVar2 + 0xe) = param_7;
    piVar2[5] = (int)(float)param_1;
    piVar2[1] = param_5;
    piVar2[2] = param_6;
    SetColorOfMoby
              (pMVar4,(ulonglong)param_5 & 0xff,(ulonglong)(uint)((int)param_5 >> 8) & 0xff,
               (ulonglong)(uint)((int)param_5 >> 0x10) & 0xff);
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x0304a20 (0x18c bytes)
/* Moby 235 */

void UpdateMoby_235(MobyInstance *moby)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  s8 sVar4;
  double dVar5;
  double dVar6;
  
  piVar1 = (int *)moby->pVar;
  iVar3 = FastDecTimerS16((int)piVar1 + 0xe);
  if (iVar3 == 0) {
    iVar3 = *piVar1;
    (moby->rotation).y = *(f32 *)(iVar3 + 0x44);
    (moby->rotation).z = *(f32 *)(iVar3 + 0x48);
    iVar3 = *(int *)(iVar3 + 0x78);
    (moby->pos).x = *(f32 *)(iVar3 + 0xf0);
    (moby->pos).y = *(f32 *)(iVar3 + 0xf4);
    (moby->pos).z = *(f32 *)(iVar3 + 0xf8);
    (moby->pos).w = *(f32 *)(iVar3 + 0xfc);
    piVar1[4] = (int)((float)piVar1[4] + (float)piVar1[5]);
    MB_AddVectorSphere(&(moby->pos).x,&(moby->pos).x);
    dVar5 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 5.2359877);
    (moby->rotation).x = (float)dVar5;
    dVar5 = (double)FastIntToDouble(*(undefined2 *)((int)piVar1 + 0xe));
    dVar6 = (double)FastIntToDouble(*(undefined2 *)(piVar1 + 3));
    dVar5 = (double)(float)(dVar5 / dVar6);
    uVar2 = FastLerpColor(dVar5,piVar1[2],piVar1[1]);
    SetColorOfMoby
              (moby,uVar2 & 0xff,(ulonglong)(uint)((int)uVar2 >> 8) & 0xff,
               (ulonglong)(uint)((int)uVar2 >> 0x10) & 0xff);
    sVar4 = FastDoubleToInt((double)(float)(dVar5 * 128.0));
    moby->alpha = sVar4;
    moby->scale = moby->scale * (DAT_0071f408 * 0.01999998 + 1.0);
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


