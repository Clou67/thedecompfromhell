// game/update/moby1397.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x26a854-0x26a96c
#include "game/update/moby1397.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x026a854 (0xb4 bytes)
MobyInstance * FUN_0026a854(int param_1)

{
  f32 fVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = CreateMoby(PLANETBUSTER_MAXIMUS_PART_0500|RED_SHIP_2);
  if (pMVar2 != (MobyInstance *)0x0) {
    (pMVar2->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar2->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar2->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar2->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar2->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar2->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    pMVar2->drawDistance = 0x40;
    (pMVar2->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x4c);
    pMVar2->updateDistance = '@';
    (pMVar2->rotation).w = fVar1;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}


// 0x026a908 (0x64 bytes)
/* Moby 1397 */

void UpdateMoby_1397(MobyInstance *moby)

{
  void *pvVar1;
  
  if (moby->state == '\0') {
    pvVar1 = moby->pVar;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined2 *)((int)pvVar1 + 0x24) = 0;
    *(undefined1 *)((int)pvVar1 + 0x28) = 4;
    *(undefined2 *)((int)pvVar1 + 0x3e) = 0;
    moby->state = '\x01';
  }
  else if (moby->state == '\x02') {
    *(undefined2 *)((int)moby->pVar + 0x3e) = 5;
    moby->state = '\x03';
  }
  return;
}


