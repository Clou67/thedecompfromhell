// game/update/moby1143.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1df4c0-0x1df5dc
#include "game/update/moby1143.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01df4c0 (0x14 bytes)
void M1143_001df4c0(void)

{
  DAT_00764c9c = 0x10000;
  return;
}


// 0x01df4e0 (0xfc bytes)
/* Moby 1143 */

void UpdateMoby_1143(MobyInstance *moby)

{
  void *manipulator;
  float fVar1;
  double dVar2;
  double dVar3;
  
  manipulator = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->field46_0x73 = ' ';
    dVar2 = (double)MB_randRot();
    *(float *)((int)manipulator + 0x40) = (float)dVar2;
    AttachManipulator(moby,1,manipulator);
  }
  else if (moby->state < 2) {
    fVar1 = DAT_00764cc0 * 0.017453292 * g_FrameTime;
    dVar3 = (double)fVar1;
    dVar2 = (double)FastWrapRot((moby->rotation).z,fVar1);
    (moby->rotation).z = (float)dVar2;
    dVar2 = (double)FastWrapRot(*(float *)((int)manipulator + 0x40),(float)(dVar3 * -2.0))
    ;
    *(float *)((int)manipulator + 0x40) = (float)dVar2;
    FastQuaternionToEuler((int)manipulator + 0x10,2);
  }
  return;
}


