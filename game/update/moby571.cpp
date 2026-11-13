// game/update/moby571.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3bd530-0x3bd678
#include "game/update/moby571.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03bd530 (0x148 bytes)
/* Moby 571 */

void UpdateMoby_571(MobyInstance *moby)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  puVar1 = (undefined4 *)moby->pVar;
  if (moby->state == 0) {
    if (((g_CurrentWeapon == 0x1a) &&
        (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
        SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)) && (g_currentWeaponMoby->setByGroup != '\0')) {
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    dVar4 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 6.2831855);
    (moby->rotation).x = (float)dVar4;
    Delt(0.0,moby->pClass->gScale / (float)(longlong)(animationSpeed * 120.5),&moby->scale
                  );
    if (moby->scale == 0.0) {
      moby->state = '\x02';
      *puVar1 = 0x3f800000;
    }
  }
  return;
}


