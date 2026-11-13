// game/update/moby1018.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x188858-0x18893c
#include "game/update/moby1018.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"

// 0x0188858 (0x2c bytes)
void M1018_00188858(void)

{
  SubmitZone((OceanPlane *)&DAT_0073f7a0);
  return;
}


// 0x0188888 (0xb4 bytes)
/* Moby 1018 */

void UpdateMoby_1018(MobyInstance *moby)

{
  int iVar1;
  
  if (moby->state == 0) {
    OceanPlane_SetDefaultDepth(0x3fe5555560000000,(OceanPlane *)&DAT_0073f7a0);
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if ((moby->state < 2) &&
       (iVar1 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*moby->pVar),
       iVar1 == 0)) {
      RegisterOceanUpdate(&PTR_M1018_00188858_007083e8,moby);
    }
  }
  return;
}


