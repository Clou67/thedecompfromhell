// game/update/moby1584.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2a0bc0-0x2a0dec
#include "game/update/moby1584.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x02a0bc0 (0x1cc bytes)
/* Moby 1584 */

void UpdateMoby_1584(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  MobyInstance *pMVar3;
  Vec4 local_20;
  
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    local_20.x = (moby->pos).x - *(float *)((int)pvVar1 + 0x60);
    local_20.y = (moby->pos).y - *(float *)((int)pvVar1 + 100);
    local_20.z = (moby->pos).z - *(float *)((int)pvVar1 + 0x68);
    local_20.w = (moby->pos).w;
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar1 + 0x20),&local_20,ZEXT48(pvVar1) + 0x70,
               (longlong)(int)moby + 0x40);
  }
  if (((moby->setByGroup != '\0') && (*(int *)((int)pvVar1 + 0x80) != 0)) &&
     (*(int *)((int)pvVar1 + 0x84) == 0)) {
    pMVar3 = CreateMoby(0x764);
    *(MobyInstance **)((int)pvVar1 + 0x84) = pMVar3;
    if (pMVar3 != (MobyInstance *)0x0) {
      pMVar3->drawDistance = moby->drawDistance;
      *(undefined1 *)(*(int *)((int)pvVar1 + 0x84) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar1 + 0x84) + 0x38) = *(undefined8 *)&moby->color;
      *(float *)(*(int *)((int)pvVar1 + 0x84) + 0x2c) =
           *(float *)(*(int *)((int)pvVar1 + 0x84) + 0x2c) * (moby->scale / moby->pClass->gScale);
    }
  }
  *(f32 *)((int)pvVar1 + 0x60) = (moby->pos).x;
  *(f32 *)((int)pvVar1 + 100) = (moby->pos).y;
  *(f32 *)((int)pvVar1 + 0x68) = (moby->pos).z;
  *(f32 *)((int)pvVar1 + 0x6c) = (moby->pos).w;
  *(f32 *)((int)pvVar1 + 0x70) = (moby->rotation).x;
  iVar2 = *(int *)((int)pvVar1 + 0x84);
  *(f32 *)((int)pvVar1 + 0x74) = (moby->rotation).y;
  *(f32 *)((int)pvVar1 + 0x78) = (moby->rotation).z;
  *(f32 *)((int)pvVar1 + 0x7c) = (moby->rotation).w;
  if (iVar2 != 0) {
    *(f32 *)(iVar2 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar2 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar2 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar2 + 0x1c) = (moby->pos).w;
    iVar2 = *(int *)((int)pvVar1 + 0x84);
    *(f32 *)(iVar2 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar2 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar2 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar2 + 0x4c) = (moby->rotation).w;
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar1 + 0x84));
  }
  return;
}


// 0x02a0d8c (0x60 bytes)
void M1584_002a0d8c(longlong param_1,char param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].oClass == (DEPLANETIZER_GUN_0620|BOLT_CIRCLENUT)) {
        g_MobyInstance[*puVar2 & 0x7fff].setByGroup = param_2;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


