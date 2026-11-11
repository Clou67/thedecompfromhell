// game/update/moby324.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x342088-0x342174
#include "game/update/moby324.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x0342088 (0xe8 bytes)
MobyInstance * FUN_00342088(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar4 = CreateMoby(ROCKET_0100|SUCKCANNON_0044);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = *(char *)(param_1 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x30);
    pMVar4->enabled = '\x01';
    pMVar4->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar4->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_1 + 0x40);
    (pMVar4->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_1 + 0x44);
    (pMVar4->rotation).x = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).y = fVar3;
    fVar3 = *(f32 *)(param_1 + 0x4c);
    (pMVar4->rotation).z = fVar2;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).w = fVar3;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar4->pos).x = fStack00000040;
    (pMVar4->pos).z = fStack00000048;
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x0342170 (0x4 bytes)
/* Moby 324 */

MobyInstance * UpdateMoby_324(MobyInstance *moby)

{
  return moby;
}


