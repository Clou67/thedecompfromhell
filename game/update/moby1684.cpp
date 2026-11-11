// game/update/moby1684.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2acc60-0x2acde4
#include "game/update/moby1684.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"

// 0x02acc60 (0x14 bytes)
void M1684_002acc60(void)

{
  DAT_007b720c = 0x10000;
  return;
}


// 0x02acc80 (0x164 bytes)
/* Moby 1684 */

void UpdateMoby_1684(MobyInstance *moby)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  double dVar4;
  
  moby->updateDistance = -1;
  piVar3 = (int *)moby->pVar;
  if (g_heroState != TURRET_PLANE_UI) {
    uVar2 = 0;
    moby->setByGroup = '\0';
    dVar4 = 0.0;
    do {
      iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3);
      if (iVar1 != 0) {
        moby->setByGroup = moby->setByGroup | (byte)(1 << (uVar2 & 0x3f));
        iVar1 = *piVar3;
        if ((double)(Cuboids[iVar1].imatrix.v2.x * (g_heroPosition.z - Cuboids[iVar1].pos.z) +
                    Cuboids[iVar1].imatrix.v0.x * (g_heroPosition.x - Cuboids[iVar1].pos.x) +
                    Cuboids[iVar1].imatrix.v1.x * (g_heroPosition.y - Cuboids[iVar1].pos.y)) <=
            dVar4) {
          moby->state = '\0';
          if (DAT_0096bda0 == 6) {
            DAT_0096bda0 = 0;
          }
        }
        else {
          moby->state = '\x01';
          if (DAT_0096bda0 != 6) {
            DAT_0096bda0 = 6;
          }
        }
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < 0x20);
  }
  return;
}


