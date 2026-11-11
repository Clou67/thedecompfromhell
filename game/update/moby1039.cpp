// game/update/moby1039.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x194fc8-0x1951c0
#include "game/update/moby1039.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby291.h"

// 0x0194fc8 (0x14 bytes)
void M1039_00194fc8(void)

{
  DAT_00740158 = 0x10000;
  return;
}


// 0x0194fe8 (0x1d8 bytes)
/* Moby 1039 */

void UpdateMoby_1039(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  
  piVar5 = (int *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if ((moby->state < 2) &&
          ((((g_heroState != TURRET_PLANE_UI || (DAT_0096b2d0 == 0)) ||
            (*(char *)(DAT_0096b2d0 + 0x20) == -3 || *(char *)(DAT_0096b2d0 + 0x20) == -2)) ||
           (DAT_0096b2d4 != 0x45)))) {
    iVar2 = 0;
    iVar4 = 0;
    dVar6 = 10.5;
    piVar3 = piVar5;
    do {
      if ((-1 < *piVar3) &&
         (iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3), iVar1 != 0)) {
        if (g_heroType == '\0') {
          if (g_heroState != DEATH_FALLING) {
            TransitionMovement(0x77,1);
          }
        }
        else {
          FadeToBlack((int)((double)animationSpeed * dVar6));
          HandleHeroDeath();
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x20);
    do {
      if ((-1 < piVar5[0x20]) &&
         (iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar5[0x20]), iVar2 != 0)) {
        FadeToBlack((int)((double)animationSpeed * dVar6));
        HandleHeroDeath();
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 0x20);
  }
  return;
}


