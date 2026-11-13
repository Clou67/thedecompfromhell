// game/update/moby126.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x22b6c0-0x22b814
#include "game/update/moby126.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1259.h"
#include "game/water.h"

// 0x022b6c0 (0x154 bytes)
/* Moby 126 */

void UpdateMoby_126(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (moby->state == '\0') {
    moby->state = '\x01';
    OceanPlane_SetDepth(0.6666667,(OceanPlane *)&DAT_00771340,ZEXT48(&DAT_0022b694),0x30);
    moby->updateDistance = -1;
  }
  fVar1 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  WaterFogFarIntensity = 0x43440000;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  DAT_00771348 = (fVar1 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)
                 * 0.25 + 54.0;
  RegisterMobyDraw(&PTR_M1259_0022b668_00709968,moby);
  return;
}


