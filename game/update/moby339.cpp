// game/update/moby339.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x34a228-0x34a598
#include "game/update/moby339.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x034a228 (0x14 bytes)
void M339_0034a228(void)

{
  DAT_0083ff6c = 0x10000;
  return;
}


// 0x034a250 (0x348 bytes)
/* WARNING: Removing unreachable block (ram,0x0034a584) */
/* Moby 339 */

void UpdateMoby_339(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar7;
  int iVar6;
  ulonglong uVar5;
  
  lVar4 = (longlong)(int)moby;
  fVar2 = (moby->pos).y - g_heroPosition.y;
  bVar1 = moby->state;
  fVar3 = (moby->pos).x - g_heroPosition.x;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (bVar1 == 0) {
    if (moby->animationId != '\0') {
      MB_SetAnimation(lVar4,0,0,0);
    }
    moby->state = '\x01';
    cVar7 = MB_randInt((int)(animationSpeed * 180.5));
    moby->setByGroup = cVar7;
    return;
  }
  if (bVar1 < 2) {
    if (((moby->updateId == '\0') && (fVar2 < 9.0)) && ((byte)moby->setByGroup < 2)) {
      moby->setByGroup = '\x02';
    }
    if ((fVar2 < 12.0) && (moby->updateId == moby->animationId && moby->animationId != '\0')) {
      moby->setByGroup = '\0';
    }
    iVar6 = FastDecTimerS8(lVar4 + 0xbc);
    if (iVar6 != 0) {
      bVar1 = moby->updateId;
      if (bVar1 == 0) {
        uVar5 = MB_randInt(0x100);
        if ((uVar5 & 1) == 0) {
          if (moby->animationId != '\x05') {
            MB_SetAnimation(lVar4,5,0,0);
          }
        }
        else if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar4,3,0,0);
        }
      }
      else if (bVar1 < 2) {
        if (moby->animationId != '\x04') {
          MB_SetAnimation(lVar4,4,0,0);
        }
      }
      else if ((bVar1 < 3) && (moby->animationId != '\x06')) {
        MB_SetAnimation(lVar4,6,0,0);
      }
      moby->state = '\x02';
      return;
    }
    return;
  }
  if (2 < bVar1) {
    return;
  }
  if ((moby->field43_0x70 & 2U) == 0) {
    return;
  }
  bVar1 = moby->updateId;
  if (bVar1 < 4) {
    if ((2 < bVar1) && (moby->animationId != '\x01')) {
      MB_SetAnimation(lVar4,1,0,0);
    }
  }
  else {
    if (bVar1 < 6) {
      if (4 < bVar1) {
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar4,2,0,0);
        }
        goto LAB_0034a548;
      }
    }
    else if (6 < bVar1) goto LAB_0034a548;
    if (moby->animationId != '\0') {
      MB_SetAnimation(lVar4,0,0,0);
    }
  }
LAB_0034a548:
  moby->state = '\x01';
  cVar7 = MB_randInt((int)(animationSpeed * 180.5));
  moby->setByGroup = cVar7;
  return;
}


