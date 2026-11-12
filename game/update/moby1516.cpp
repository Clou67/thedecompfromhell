// game/update/moby1516.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x29125c-0x291940
#include "game/update/moby1516.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x029125c (0xb0 bytes)
MobyInstance * FUN_0029125c(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  short sVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = CreateMoby(LAMP_DESTROYED);
  if (pMVar4 != (MobyInstance *)0x0) {
    sVar3 = *(short *)(param_1 + 0x32);
    pMVar4->updateDistance = *(char *)(param_1 + 0x30);
    pMVar4->drawDistance = sVar3;
    fVar1 = *(f32 *)(param_1 + 0x40);
    pMVar4->enabled = '\x01';
    fVar2 = *(f32 *)(param_1 + 0x44);
    (pMVar4->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).y = fVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = fVar2;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x0291320 (0x22c bytes)
MobyInstance *
FUN_00291320(double param_1,double param_2,int param_3,int *param_4,f32 *param_5,f32 *param_6,
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
    auVar7 = loadVectorLeftIndexed(in_LR,0x291310);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar7,0xe,ZEXT48(piVar1));
    *(undefined2 *)((int)piVar1 + 0xe) = uVar2;
    piVar1[8] = 0;
    dVar5 = (double)MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
    dVar6 = 0.01745329238474369;
    piVar1[9] = (int)((float)(dVar5 * 0.01745329238474369) * g_FrameTime);
    dVar5 = (double)MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
    piVar1[10] = (int)((float)(dVar5 * dVar6) * g_FrameTime);
    dVar5 = (double)MB_randRangeFloat((float)param_1,(float)param_2);
    pMVar4->scale = (float)((double)pMVar4->scale * dVar5);
    *(undefined2 *)(piVar1 + 3) = param_10;
    piVar1[2] = (int)(float)(dVar5 * 0.25);
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x0291568 (0x2bc bytes)
// strings: 00291560: '?fff`'

/* Moby 1516 */

void UpdateMoby_1516(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  short sVar3;
  void *pvVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  pvVar4 = moby->pVar;
  *(float *)((int)pvVar4 + 0x18) = -(DAT_0071f418 * 20.0 - *(float *)((int)pvVar4 + 0x18));
  fVar2 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar4 + 0x10);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar4 + 0x14);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar4 + 0x18);
  dVar6 = (double)FastWrapRot(fVar2,*(float *)((int)pvVar4 + 0x20));
  (moby->rotation).x = (float)dVar6;
  dVar6 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar4 + 0x24));
  (moby->rotation).y = (float)dVar6;
  dVar6 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar4 + 0x28));
  bVar1 = moby->state;
  (moby->rotation).z = (float)dVar6;
  if (bVar1 == 0) {
    if (*(float *)((int)pvVar4 + 4) - 3.0 <= (moby->pos).z) {
      iVar5 = FastDecTimerS16((int)pvVar4 + 0xe);
      if ((((iVar5 != 0) && (*(short *)((int)pvVar4 + 0xc) != 0)) &&
          (iVar5 = CollSphere
                             ((double)*(float *)((int)pvVar4 + 8),(longlong)(int)moby + 0x10),
          iVar5 != 0)) &&
         (*(float *)((int)pvVar4 + 0x18) * g_CollOutput.normal.z +
          *(float *)((int)pvVar4 + 0x10) * g_CollOutput.normal.x +
          *(float *)((int)pvVar4 + 0x14) * g_CollOutput.normal.y < 0.0)) {
        (moby->pos).x = g_CollOutput.push.x;
        sVar3 = *(short *)((int)pvVar4 + 0xc);
        (moby->pos).y = g_CollOutput.push.y;
        (moby->pos).z = g_CollOutput.push.z;
        fVar2 = g_CollOutput.push.w;
        *(short *)((int)pvVar4 + 0xc) = sVar3 + -1;
        (moby->pos).w = fVar2;
        FastVecReflect((int)pvVar4 + 0x10,(int)pvVar4 + 0x10,0xa10980);
        *(undefined4 *)((int)pvVar4 + 0x20) = 0;
        *(float *)((int)pvVar4 + 0x10) = *(float *)((int)pvVar4 + 0x10) * 0.75;
        *(float *)((int)pvVar4 + 0x14) = *(float *)((int)pvVar4 + 0x14) * 0.75;
        *(float *)((int)pvVar4 + 0x18) = *(float *)((int)pvVar4 + 0x18) * 0.75;
        dVar6 = (double)MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
        dVar7 = 0.01745329238474369;
        *(float *)((int)pvVar4 + 0x24) =
             (float)(dVar6 * 0.01745329238474369) * g_FrameTime;
        dVar6 = (double)MB_randRangeSigned((double)DAT_00fadb60,(double)DAT_007ab444);
        *(float *)((int)pvVar4 + 0x28) = (float)(dVar6 * dVar7) * g_FrameTime;
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    moby->scale = moby->scale * (float)0x3f666666;
    if ((byte)moby->alpha < 4) {
      DeleteMoby(moby);
    }
    else {
      moby->alpha = moby->alpha - 4;
    }
  }
  return;
}


// 0x0291828 (0x118 bytes)
MobyInstance * M1516_00291828(int param_1,int param_2)

{
  f32 fVar1;
  f32 fVar2;
  int *piVar3;
  void *pvVar4;
  MobyInstance *pMVar5;
  undefined4 uVar6;
  double dVar7;
  
  pMVar5 = CreateMoby(0x98);
  if (pMVar5 != (MobyInstance *)0x0) {
    piVar3 = (int *)pMVar5->pVar;
    *piVar3 = param_1;
    pMVar5->updateDistance = ' ';
    pMVar5->drawDistance = 0x40;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\x01';
    piVar3[8] = param_2;
    piVar3[0xb] = 1;
    fVar1 = *(f32 *)(param_1 + 0x14);
    (pMVar5->pos).x = *(f32 *)(param_1 + 0x10);
    fVar2 = *(f32 *)(param_1 + 0x18);
    (pMVar5->pos).y = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x1c);
    (pMVar5->pos).z = fVar2;
    pvVar4 = pMVar5->pVar;
    (pMVar5->pos).w = fVar1;
    (pMVar5->rotation).x = 0.0;
    (pMVar5->rotation).y = 0.5235988;
    (pMVar5->rotation).z = 0.0;
    dVar7 = (double)MB_randRangeFloat(DAT_007ab460,DAT_007ab464);
    *(float *)((int)pvVar4 + 0xc) = (float)dVar7;
    *(undefined4 *)((int)pvVar4 + 0x28) = 0;
    *(f32 *)((int)pvVar4 + 8) = (pMVar5->pos).z;
    MB_CopyHeroLights(pMVar5);
    uVar6 = SpawnPart_39(pMVar5);
    *(undefined4 *)((int)pvVar4 + 0x24) = uVar6;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


