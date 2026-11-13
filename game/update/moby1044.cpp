// game/update/moby1044.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x196ae8-0x196d50
#include "game/update/moby1044.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0196ae8 (0x130 bytes)
MobyInstance *
Spawn_Moby1044
          (double param_1,double param_2,double param_3,double param_4,undefined4 param_5,
          f32 *param_6)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *manipulator;
  float fVar3;
  MobyInstance *moby;
  
  moby = CreateMoby(0x414);
  if (moby != (MobyInstance *)0x0) {
    moby->updateDistance = -1;
    moby->enabled = '\x01';
    manipulator = moby->pVar;
    (moby->pos).x = *param_6;
    fVar1 = param_6[1];
    moby->drawDistance = 0xff;
    (moby->pos).y = fVar1;
    MVar2 = moby->modeBits;
    (moby->pos).z = param_6[2];
    fVar1 = param_6[3];
    *(undefined4 *)((int)manipulator + 0x54) = param_5;
    (moby->pos).w = fVar1;
    *(float *)((int)manipulator + 0x40) = (float)param_1;
    *(float *)((int)manipulator + 0x44) = (float)param_2;
    *(float *)((int)manipulator + 0x50) = (float)param_3;
    *(float *)((int)manipulator + 0x4c) = (float)param_4;
    *(float *)((int)manipulator + 0x48) = (float)param_1;
    moby->modeBits = MVar2 | DRAW_TRANSPARENT_WEIRD;
    AttachManipulator(moby,0,manipulator);
    fVar3 = *(float *)((int)manipulator + 0x48) * 0.2;
    *(undefined4 *)((int)manipulator + 0x28) = *(undefined4 *)((int)manipulator + 0x50);
    *(float *)((int)manipulator + 0x20) = fVar3;
    *(float *)((int)manipulator + 0x24) = fVar3;
    UpdateMobyTransform(moby);
  }
  return moby;
}


// 0x0196c30 (0x120 bytes)
/* Moby 1044 */

void UpdateMoby_1044(MobyInstance *moby)

{
  void *pvVar1;
  float fVar2;
  s8 sVar3;
  double dVar4;
  
  pvVar1 = moby->pVar;
  fVar2 = *(float *)((int)pvVar1 + 0x48) + *(float *)((int)pvVar1 + 0x4c);
  *(float *)((int)pvVar1 + 0x48) = fVar2;
  dVar4 = (double)((fVar2 - *(float *)((int)pvVar1 + 0x40)) /
                  (*(float *)((int)pvVar1 + 0x44) - *(float *)((int)pvVar1 + 0x40)));
  if (0.10000000149011612 <= dVar4) {
    sVar3 = -0x80;
    if (0.8999999761581421 < dVar4) {
      sVar3 = FastDoubleToInt((double)((float)(1.0 - dVar4) * 10.0 * 127.0));
    }
  }
  else {
    sVar3 = FastDoubleToInt((double)((float)(dVar4 * 10.0) * 127.0));
  }
  moby->alpha = sVar3;
  fVar2 = *(float *)((int)pvVar1 + 0x48) * 0.2;
  *(undefined4 *)((int)pvVar1 + 0x28) = *(undefined4 *)((int)pvVar1 + 0x50);
  *(float *)((int)pvVar1 + 0x20) = fVar2;
  *(float *)((int)pvVar1 + 0x24) = fVar2;
  if (1.0 <= dVar4) {
    DeleteMoby(moby);
  }
  return;
}


