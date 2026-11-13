// game/update/moby1561.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x29a0d8-0x29a1b0
#include "game/update/moby1561.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x029a0d8 (0xd8 bytes)
/* Moby 1561 */

void UpdateMoby_1561(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)moby->pVar;
  iVar2 = piVar1[2];
  if (iVar2 < 1) {
    if (((-1 < iVar2) &&
        (iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1), iVar2 != 0)) &&
       (g_heroStateType == 0xf)) {
      piVar1[2] = 1;
    }
  }
  else if (iVar2 < 2) {
    if (g_heroState == GRINDRAIL_DAMAGE) {
      piVar1[2] = 0;
    }
    else {
      iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[1]);
      if (iVar2 != 0) {
        MB_UnlockSkillPoint(0x19);
      }
    }
  }
  return;
}


