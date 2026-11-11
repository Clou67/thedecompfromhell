// game/update/moby1042.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x196a88-0x196ae0
#include "game/update/moby1042.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0196a88 (0x58 bytes)
/* Moby 1042 */

void UpdateMoby_1042(MobyInstance *moby)

{
  int iVar1;
  
  iVar1 = MB_damage(moby,0x10000,0);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x2c))) {
    DeleteMoby(moby);
  }
  return;
}


