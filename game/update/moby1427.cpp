// game/update/moby1427.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0xeb288-0xeb4fc
#include "game/update/moby1427.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x00eb288 (0x14 bytes)
void SECTION_HEADER_MOBY1427(void)

{
  DAT_00728e70 = 0x10000;
  return;
}


// 0x00eb2a8 (0x104 bytes)
MobyInstance *
Spawn_Moby1427_GCShockwave
          (double param_1,double param_2,double param_3,undefined8 param_4,f32 *param_5,
          float param_6)

{
  float fVar1;
  float *pfVar2;
  MobyClass *pMVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(0x593);
  if (pMVar4 != (MobyInstance *)0x0) {
    (pMVar4->pos).x = *param_5;
    (pMVar4->pos).y = param_5[1];
    (pMVar4->pos).z = param_5[2];
    (pMVar4->pos).w = param_5[3];
    SetColorOfMoby(pMVar4,0x80,0x80,0x70);
    pfVar2 = (float *)pMVar4->pVar;
    *pfVar2 = (float)param_2;
    pMVar3 = pMVar4->pClass;
    pfVar2[1] = param_6;
    pfVar2[2] = param_6;
    fVar1 = pMVar3->gScale;
    pMVar4->drawDistance = 0xff;
    pMVar4->scale = (float)(param_1 * 2.0) * fVar1;
    pfVar2[3] = (float)param_3;
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
  }
  return pMVar4;
}


// 0x00eb3c0 (0x13c bytes)
/* Moby 1427 */

void UpdateMoby_1427_GC_Shockwave(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  int iVar4;
  undefined8 in_r7;
  undefined8 in_r8;
  double dVar5;
  
  fVar1 = moby->pClass->gScale;
  pfVar2 = (float *)moby->pVar;
  dVar5 = (double)((moby->scale / fVar1) * 0.5 + *pfVar2);
  moby->scale = (float)(dVar5 * 2.0) * fVar1;
  if ((int)pfVar2[2] < (int)(animationSpeed * 40.5)) {
    moby->alpha = (s8)(((int)pfVar2[2] * 0x7f) / (int)(animationSpeed * 40.5));
  }
  pMVar3 = g_heroMobyPtr;
  iVar4 = FastDoubleToInt((double)pfVar2[3]);
  DamageSphereAtPos
            (dVar5,(double)(longlong)iVar4,0x3ff0000000000000,pMVar3,(longlong)(int)moby + 0x10,0,
             0x30000,in_r7,in_r8,0,1);
  iVar4 = FastDecTimerS32(pfVar2 + 2);
  if (iVar4 != 0) {
    DeleteMoby(moby);
  }
  return;
}


