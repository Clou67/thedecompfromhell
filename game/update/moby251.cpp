// game/update/moby251.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x316b98-0x316db0
#include "game/update/moby251.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x0316b98 (0xbc bytes)
undefined8 M251_CheckPlasmabotHatchAvailability(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  undefined8 in_LR;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  uVar4 = 0;
  pMVar3 = g_MobyInstance + param_1;
  pvVar1 = pMVar3->pVar;
  if (pMVar3->state == '\0') {
    pMVar3->state = '\x05';
    MB_SetAnimationNoBlend(pMVar3,1,0);
  }
  else if (pMVar3->state == '\x06') {
    uVar4 = 1;
  }
  auVar5 = ZEXT416(0xffffffff);
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar5 = loadVectorLeftIndexed(in_LR,0x316b90);
  auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
  auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,8,ZEXT48(pvVar1));
  *(undefined4 *)((int)pvVar1 + 8U & 0xfffffffc) = uVar2;
  return uVar4;
}


// 0x0316c54 (0x14 bytes)
void M251_00316c54(void)

{
  DAT_007ffbd8 = 0x10000;
  return;
}


// 0x0316c68 (0xf8 bytes)
MobyInstance *
M251_00316c68
          (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  undefined4 *puVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar5 = CreateMoby(0xfb);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = *(char *)(param_1 + 0x30);
    puVar4 = (undefined4 *)pMVar5->pVar;
    bVar1 = *(byte *)(param_1 + 0x30);
    pMVar5->enabled = '\x01';
    pMVar5->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar5->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_1 + 0x40);
    (pMVar5->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_1 + 0x44);
    (pMVar5->rotation).x = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x48);
    (pMVar5->rotation).y = fVar3;
    fVar3 = *(f32 *)(param_1 + 0x4c);
    (pMVar5->rotation).z = fVar2;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    (pMVar5->rotation).w = fVar3;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar5->pos).x = fStack00000040;
    (pMVar5->pos).z = fStack00000048;
    pMVar5->color = (int)((ulonglong)uVar6 >> 0x20);
    pMVar5->light = (int)uVar6;
    UpdateMobyTransform(pMVar5);
    puVar4[1] = param_1;
    *puVar4 = 0xffffffff;
  }
  return pMVar5;
}


// 0x0316d60 (0x50 bytes)
/* Moby 251 */

void UpdateMoby_251(MobyInstance *moby)

{
  char cVar1;
  int iVar2;
  
  if ((moby->pVar != (void *)0x0) &&
     (((iVar2 = *(int *)((int)moby->pVar + 4), iVar2 == 0 ||
       (cVar1 = *(char *)(iVar2 + 0x20), cVar1 == -2)) || (cVar1 == -3)))) {
    DeleteMoby(moby);
  }
  return;
}


