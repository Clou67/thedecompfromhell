// game/update/moby714.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x431548-0x4317b4
#include "game/update/moby714.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby713.h"

// 0x0431548 (0x44 bytes)
void M714_00431548(void)

{
  DAT_00859e2c = 0x10000;
  DAT_010ccd04 = g_FrameTime * 6.0;
  DAT_010ccd08 = g_FrameTime * 3.1415927;
  return;
}


// 0x0431590 (0x224 bytes)
/* Moby 714 */

void UpdateMoby_714(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (moby->pos).y - g_heroPosition.y;
  bVar1 = moby->state;
  fVar3 = (moby->pos).x - g_heroPosition.x;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (fVar2 < DAT_00859e50) {
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,10);
        }
        moby->state = '\x01';
      }
    }
    else if (bVar1 < 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x03') {
          MB_SetAnimation(moby,3,0,10);
        }
        moby->state = '\x03';
      }
    }
    else if (DAT_00859e54 < fVar2) {
      if (moby->animationId != '\a') {
        MB_SetAnimation(moby,7,0,10);
      }
      moby->state = '\a';
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 6) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x02') {
          MB_SetAnimation(moby,2,0,10);
        }
        moby->state = '\x02';
      }
    }
    else if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x02') {
        MB_SetAnimation(moby,2,0,10);
      }
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 8) && ((moby->field43_0x70 & 2U) != 0)) {
    if (moby->animationId != '\0') {
      MB_SetAnimation(moby,0,0,10);
    }
    moby->state = '\0';
  }
  return;
}


