// game/update/moby1062.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1ad128-0x1ad26c
#include "game/update/moby1062.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x01ad128 (0x14 bytes)
void M1062_001ad128(void)

{
  DAT_007409fc = 0x10000;
  return;
}


// 0x01ad140 (0x12c bytes)
/* Moby 1062 */

void UpdateMoby_1062(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)moby->pVar;
  RegisterFuncForMoby(&PTR_M1066_001ad528_007088c8,moby);
  iVar2 = 0;
  piVar3 = piVar4;
  while ((*piVar3 < 0 ||
         (iVar1 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar3), iVar1 == 0
         ))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (3 < iVar2) {
LAB_001ad1e0:
      iVar2 = 0;
      while ((g_heroStateType != 0xf &&
             ((piVar4[0x10] < 0 ||
              (iVar1 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar4[0x10]),
              iVar1 == 0))))) {
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
        if (3 < iVar2) {
          return;
        }
      }
      RegisterFuncForMoby(&PTR_M1066_001ad990_007088d0,moby);
      return;
    }
  }
  RegisterFuncForMoby(&PTR_M1066_001ad26c_007088c0,moby);
  goto LAB_001ad1e0;
}


