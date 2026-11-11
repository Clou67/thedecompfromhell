// game/update/moby1488.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x28cba8-0x28cf0c
#include "game/update/moby1488.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x028cba8 (0x128 bytes)
/* Moby 1488 */

void UpdateMoby_1488(MobyInstance *moby)

{
  longlong lVar1;
  undefined8 in_r9;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = (longlong)(int)moby;
  if (moby->state == 0) {
    if (DAT_00fada10 != 0) {
      FastEulerToMtx(lVar1 + 0xc0,lVar1 + 0x40);
      moby->state = '\x01';
      DAT_00fada10 = 0;
    }
  }
  else if (moby->state < 2) {
    iVar2 = 0;
    uVar5 = 0;
    puVar3 = &DAT_007ab170;
    puVar4 = &DAT_00fada20;
    do {
      MB_SpawnDebrisMoby(uVar5,lVar1,0x5df,puVar3,puVar4,0,0,in_r9,&DAT_00a15d30);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (iVar2 < 4);
    moby->state = '\0';
  }
  return;
}


// 0x028cce0 (0x22c bytes)
MobyInstance *
M1488_0028cce0
          (double param_1,double param_2,int param_3,int *param_4,f32 *param_5,f32 *param_6,
          MOBY_OCLASSES param_7,undefined8 param_8,undefined8 param_9,undefined2 param_10)

{
  int *piVar1;
  undefined2 uVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  undefined8 in_LR;
  double dVar5;
  double dVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  pMVar4 = CreateMoby(param_7);
  if (pMVar4 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar4->pVar;
    *piVar1 = param_3;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    uVar3 = *(undefined8 *)(param_3 + 0x38);
    pMVar4->enabled = '\x01';
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    pMVar4->state = '\0';
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).y = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).z = (float)dVar5;
    (pMVar4->pos).x = *param_5;
    (pMVar4->pos).y = param_5[1];
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    (pMVar4->pos).z = param_5[2];
    (pMVar4->pos).w = param_5[3];
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    (pMVar4->rotation).x = *param_6;
    (pMVar4->rotation).y = param_6[1];
    (pMVar4->rotation).z = param_6[2];
    (pMVar4->rotation).w = param_6[3];
    piVar1[4] = *param_4;
    piVar1[5] = param_4[1];
    piVar1[6] = param_4[2];
    piVar1[7] = param_4[3];
    piVar1[1] = (int)(pMVar4->pos).z;
    auVar7 = loadVectorLeftIndexed(in_LR,0x28ccd0);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar7,0xe,ZEXT48(piVar1));
    *(undefined2 *)((int)piVar1 + 0xe) = uVar2;
    piVar1[8] = 0;
    dVar5 = (double)MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
    dVar6 = 0.01745329238474369;
    piVar1[9] = (int)((float)(dVar5 * 0.01745329238474369) * g_FrameTime);
    dVar5 = (double)MB_randRangeSigned((double)DAT_00fada60,(double)DAT_007ab1b0);
    piVar1[10] = (int)((float)(dVar5 * dVar6) * g_FrameTime);
    dVar5 = (double)MB_randRangeFloat((float)param_1,(float)param_2);
    pMVar4->scale = (float)((double)pMVar4->scale * dVar5);
    *(undefined2 *)(piVar1 + 3) = param_10;
    piVar1[2] = (int)(float)(dVar5 * 0.25);
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


