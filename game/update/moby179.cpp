// game/update/moby179.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2b9870-0x2b9ae4
#include "game/update/moby179.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02b9870 (0xd0 bytes)
MobyInstance * FUN_002b9870(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  MobyInstance *pMoby;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pMoby = CreateMoby(0xb3);
  if (pMoby != (MobyInstance *)0x0) {
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    pMoby->modeBits = DRAW_TRANSPARENT_WEIRD|NO_POST_UPDATE;
    pMoby->alpha = 'P';
    *(int *)((int)pMoby->pVar + 8) = param_1;
    (pMoby->rotation).w = 0.0;
    (pMoby->rotation).z = 0.0;
    (pMoby->rotation).y = 0.0;
    (pMoby->rotation).x = 0.0;
    puVar1 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar5 = puVar1[2];
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
    puVar2 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar9 = puVar2[3];
    uVar8 = puVar2[2];
    uVar7 = puVar2[1];
    uVar6 = *puVar2;
    puVar2 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar13 = puVar2[3];
    uVar12 = puVar2[2];
    uVar11 = puVar2[1];
    uVar10 = *puVar2;
    puVar2 = (undefined4 *)((uint)&pMoby->transform & 0xfffffff0);
    puVar2[3] = puVar1[3];
    puVar2[2] = uVar5;
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    puVar1 = (undefined4 *)((uint)&(pMoby->transform).v1 & 0xfffffff0);
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    puVar1[1] = uVar7;
    *puVar1 = uVar6;
    puVar1 = (undefined4 *)((uint)&(pMoby->transform).v2 & 0xfffffff0);
    puVar1[3] = uVar13;
    puVar1[2] = uVar12;
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    PostUpdateMobyLockTransform(pMoby);
    UpdateMobyTransform(pMoby);
  }
  return pMoby;
}


// 0x02b9950 (0x194 bytes)
/* Moby 179 */

void UpdateMoby_179(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  MobyModeBit MVar4;
  undefined8 uVar3;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  pvVar1 = moby->pVar;
  iVar2 = *(int *)((int)pvVar1 + 8);
  if ((*(byte *)(iVar2 + 0x20) == 0) || ((*(byte *)(iVar2 + 0x20) & 0xf0) == 0xf0)) {
    DeleteMoby(moby);
  }
  else {
    MVar4 = moby->modeBits;
    if ((iVar2 != 0) && (((MVar4 ^ *(MobyModeBit *)(iVar2 + 0x34)) & DISABLED) != NONE)) {
      iVar2 = *(int *)((int)pvVar1 + 8);
      moby->modeBits =
           MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      MVar4 = MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                       HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
              *(MobyModeBit *)(iVar2 + 0x34) & DISABLED;
      moby->modeBits = MVar4;
    }
    if (DAT_0096ad90 < (int)(animationSpeed * 25.5)) {
      moby->modeBits = MVar4 | (UNK_40|DISABLED);
    }
    iVar2 = *(int *)((int)pvVar1 + 4);
    uVar3 = 0xffffffffffffff40;
    iVar5 = iVar2 + -0xc0;
    *(int *)((int)pvVar1 + 4) = iVar5;
    if (iVar5 < 0x1001) {
      if (iVar5 < 0) {
        uVar3 = 0xf40;
        *(int *)((int)pvVar1 + 4) = iVar2 + 0xf40;
      }
    }
    else {
      uVar3 = 0xffffffffffffef40;
      *(int *)((int)pvVar1 + 4) = iVar2 + -0x10c0;
    }
    MB_AddShortPairOffset(moby->pClass,0,uVar3);
    dVar6 = (double)MB_randRangeFloat(0.5,1.0);
    dVar7 = (double)(moby->rotation).y;
    moby->scale = (float)((double)(moby->pClass->gScale * *(float *)((int)pvVar1 + 0xc)) * dVar6);
    fVar8 = MB_WrapRot(*(float *)((int)pvVar1 + 0xc));
    dVar6 = (double)FastWrapRot((float)dVar7,fVar8);
    (moby->rotation).y = (float)dVar6;
    PostUpdateMobyLockTransform(moby);
  }
  return;
}


