// game/update/moby676.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x40f810-0x40f878
#include "game/update/moby676.h"
#include "game/draw.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"

// 0x040f810 (0x38 bytes)
void M676_0040f810(void)

{
  CALL_STUB_0017d488();
  WaterSheet_DrawAll(8,(WaterSheet *)&PTR_DAT_00856be0);
  return;
}


// 0x040f848 (0x30 bytes)
/* Moby 676 */

void UpdateMoby_676(MobyInstance *moby)

{
  RegisterFuncForMoby(&PTR_M676_0040f810_0070dfd8,moby);
  return;
}


