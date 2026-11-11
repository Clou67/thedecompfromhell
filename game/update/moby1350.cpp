// game/update/moby1350.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x255240-0x2552c8
#include "game/update/moby1350.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0255240 (0x14 bytes)
void M1350_00255240(void)

{
  DAT_0079ba74 = 0x10000;
  return;
}


// 0x0255258 (0x70 bytes)
/* Moby 1350 */

void UpdateMoby_1350(MobyInstance *moby)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  if (*moby->pVar == -1) {
    DeleteMoby(moby);
  }
  else {
    iVar1 = *(int *)((int)moby->pVar + 4);
    if ((iVar1 != -1) &&
       (iVar1 = MB_CountActiveMobysByGroup(iVar1,0xffffffffffffffff), iVar1 == 0)) {
      MB_UnlockSkillPoint(0x13);
    }
  }
  return;
}


