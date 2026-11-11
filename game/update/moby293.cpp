// game/update/moby293.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x331450-0x331540
#include "game/update/moby293.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"

// 0x0331450 (0x14 bytes)
void M293_00331450(void)

{
  DAT_00800934 = 0x10000;
  return;
}


// 0x0331468 (0x38 bytes)
void M293_00331468(void)

{
  IcePass(&DAT_00810240,0x2f,0x2c,0x2d);
  return;
}


// 0x03314a0 (0xa0 bytes)
/* Moby 293 */

void UpdateMoby_293(MobyInstance *moby)

{
  int iVar1;
  
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if ((moby->state < 2) &&
          ((iVar1 = *(int *)((int)moby->pVar + 0xc), iVar1 == -1 ||
           (iVar1 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)iVar1), iVar1 != 0
           )))) {
    RegisterOceanUpdate(&PTR_M293_00331468_0070c028,moby);
  }
  return;
}


