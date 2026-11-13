// game/update/moby1891.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2d12b0-0x2d1380
#include "game/update/moby1891.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02d12b0 (0x14 bytes)
void M1891_002d12b0(void)

{
  DAT_007bd660 = 0x10000;
  return;
}


// 0x02d12d0 (0xb0 bytes)
/* Moby 1891 */

void UpdateMoby_1891(MobyInstance *moby)

{
  float fVar1;
  double dVar2;
  
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->drawDistance = 0x200;
    fVar1 = moby->scale;
    (moby->pos).z = 160.0;
    moby->state = '\x01';
    moby->scale = fVar1 * 4.0;
  }
  else if (moby->state < 2) {
    dVar2 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * -0.2617994);
    (moby->rotation).z = (float)dVar2;
  }
  return;
}


