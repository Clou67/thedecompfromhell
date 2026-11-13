// game/update/moby675.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x40f5f8-0x40f80c
#include "game/update/moby675.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x040f5f8 (0x214 bytes)
/* Moby 675 */

void UpdateMoby_675(MobyInstance *moby)

{
  u8 uVar1;
  longlong lVar2;
  char cVar4;
  int iVar3;
  double dVar5;
  
  lVar2 = (longlong)(int)moby;
  uVar1 = moby->animationId;
  if (uVar1 == '\a') {
    iVar3 = FastDecTimerS8(lVar2 + 0xbc);
    if ((iVar3 != 0) && (moby->animationId != '\0')) {
      MB_SetAnimation(lVar2,0,0,(int)(animationSpeed * 5.5));
    }
  }
  else if (uVar1 == '\x03') {
    if ((moby->field43_0x70 & 2U) != 0) {
      MB_SetAnimation(lVar2,7,0,(int)(animationSpeed * 5.5));
      dVar5 = (double)MB_randRangeFloat(60.0,180.0);
      cVar4 = FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
      moby->setByGroup = cVar4;
    }
  }
  else if (uVar1 == '\x02') {
    iVar3 = FastDecTimerS8(lVar2 + 0xbc);
    if ((iVar3 != 0) && (moby->animationId != '\x03')) {
      MB_SetAnimation(lVar2,3,0,(int)(animationSpeed * 5.5));
    }
  }
  else if ((uVar1 == '\0') && ((moby->field43_0x70 & 2U) != 0)) {
    if (uVar1 != '\x02') {
      MB_SetAnimation(lVar2,2,0,(int)(animationSpeed * 5.5));
    }
    dVar5 = (double)MB_randRangeFloat(60.0,180.0);
    cVar4 = FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
    moby->setByGroup = cVar4;
  }
  return;
}


