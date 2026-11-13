// game/update/moby1921.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2dbdac-0x2dbe74
#include "game/update/moby1921.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x02dbdac (0x14 bytes)
void M1921_002dbdac(void)

{
  DAT_007f3e0c = 0x10000;
  return;
}


// 0x02dbdc0 (0xb0 bytes)
MobyInstance * FUN_002dbdc0(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  f32 fVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = CreateMoby(0x781);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar2 = *(f32 *)(param_1 + 0x14);
    fVar3 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).x = fVar1;
    (pMVar4->pos).y = fVar2;
    fVar1 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar3;
    (pMVar4->pos).w = fVar1;
    (pMVar4->pos).z = 59.0;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x02dbe70 (0x4 bytes)
/* Moby 1921 */

MobyInstance * UpdateMoby_1921(MobyInstance *moby)

{
  return moby;
}


