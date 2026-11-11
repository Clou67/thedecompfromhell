// game/update/moby934.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4bfdf8-0x4c01f0
#include "game/update/moby934.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x04bfdf8 (0x128 bytes)
MobyInstance * FUN_004bfdf8(int param_1,f32 *param_2)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  
  pMVar3 = CreateMoby(MINE_03A5);
  if (pMVar3 != (MobyInstance *)0x0) {
    piVar2 = (int *)pMVar3->pVar;
    *piVar2 = param_1;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[1] = -0x40800000;
    dVar4 = (double)MB_randRangeFloat(0.010471975,0.02094395);
    piVar2[4] = (int)(float)dVar4;
    dVar5 = 0.006981316953897476;
    dVar4 = (double)MB_randRangeFloat(0.006981317,0.013962634);
    piVar2[5] = (int)(float)dVar4;
    dVar4 = (double)MB_randRangeFloat(0.0034906585,(float)dVar5);
    piVar2[6] = (int)(float)dVar4;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    pMVar3->updateDistance = -1;
    (pMVar3->rotation).z = fVar1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x04bff20 (0xc bytes)
void FUN_004bff20(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}


// 0x04bff2c (0x14 bytes)
void M934_004bff2c(void)

{
  DAT_008f4b24 = 0x10000;
  return;
}


// 0x04bff60 (0x290 bytes)
/* Moby 934 */

void UpdateMoby_934(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  undefined8 in_r8;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  GPiece<16> local_70;
  GPiece<48> auStack_60;
  
  lVar9 = (longlong)(int)moby;
  pfVar8 = (float *)moby->pVar;
  if (pfVar8 == (float *)0x0) {
    DeleteMoby(moby);
  }
  else if (moby->state == '\0') {
    dVar12 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 6.2831855);
    (moby->rotation).x = (float)dVar12;
    fVar1 = (moby->pos).x;
    fVar2 = *pfVar8;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = (moby->pos).w;
    fVar6 = pfVar8[1];
    fVar7 = pfVar8[2];
    uVar14 = 0x4000000000000000;
    SetCollDamIn(0x4000000000000000,auStack_60,lVar9,1);
    lVar11 = lVar9 + 0x10;
    iVar10 = CollLine(lVar11,local_70,0,lVar9,auStack_60);
    if ((((iVar10 == 0) &&
         (iVar10 = CollSphere(0x3fd3333340000000,lVar11,&DAT_004bff40,0,lVar9),
         iVar10 == 0)) && (iVar10 = FastDecTimerS32(pfVar8 + 0xe), iVar10 == 0)) ||
       ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
        (g_CollOutput.pMoby == (MobyInstance *)pfVar8[0xf])))) {
      (moby->pos).x = fVar1 + fVar2;
      (moby->pos).y = fVar3 + fVar6;
      (moby->pos).z = fVar4 + fVar7;
      (moby->pos).w = fVar5;
      if (worldUpdateTime % 3 == 0) {
        SpawnPart_61(0x40dd4c0000000000,0x3fb99999a0000000,lVar9,0);
      }
    }
    else {
      uVar13 = 0x3fe0000000000000;
      if ((g_CollOutput.pMoby)->oClass != SPIKEBALL) {
        DamageSphereAtPos
                  (0x3fe0000000000000,uVar14,0,lVar9,lVar11,&DAT_004bff40,1,0,in_r8,0,1);
      }
      MB_SpawnExplosionSparks
                (uVar13,0x402a000000000000,lVar9,lVar11,&DAT_004bff40,0xffffffffffffffff);
      PlayMobySound(0,0,moby);
      DeleteMoby(moby);
    }
  }
  return;
}


