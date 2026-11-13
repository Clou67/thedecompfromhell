// game/update/moby380.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x359274-0x359358
#include "game/update/moby380.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x0359274 (0x14 bytes)
void M380_00359274(void)

{
  DAT_00840730 = 0x10000;
  return;
}


// 0x0359288 (0xcc bytes)
MobyInstance * M380_00359288(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(0x17c);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x0359354 (0x4 bytes)
/* Moby 380 */

MobyInstance * UpdateMoby_380(MobyInstance *moby)

{
  return moby;
}


