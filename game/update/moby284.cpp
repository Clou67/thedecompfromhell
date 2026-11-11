// game/update/moby284.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x32dadc-0x32dbd8
#include "game/update/moby284.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x032dadc (0xf8 bytes)
MobyInstance *
FUN_0032dadc(double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar5 = CreateMoby(0x11c);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = *(char *)(param_2 + 0x30);
    bVar1 = *(byte *)(param_2 + 0x30);
    pMVar5->enabled = '\x01';
    pMVar5->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_4;
    fStack0000004c = (f32)param_5;
    (pMVar5->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_2 + 0x40);
    (pMVar5->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_2 + 0x44);
    fVar4 = *(f32 *)(param_2 + 0x48);
    (pMVar5->rotation).x = fVar2;
    (pMVar5->rotation).y = fVar3;
    fVar2 = *(f32 *)(param_2 + 0x4c);
    (pMVar5->rotation).z = fVar4;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    (pMVar5->rotation).w = fVar2;
    fStack00000040 = (f32)((ulonglong)param_4 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    (pMVar5->pos).x = fStack00000040;
    (pMVar5->pos).z = fStack00000048;
    (pMVar5->rotation).z = (float)param_1;
    pMVar5->color = (int)((ulonglong)uVar6 >> 0x20);
    pMVar5->light = (int)uVar6;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


// 0x032dbd4 (0x4 bytes)
/* Moby 284 */

MobyInstance * UpdateMoby_284(MobyInstance *moby)

{
  return moby;
}


