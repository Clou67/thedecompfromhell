// game/update/moby492.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3a372c-0x3a38c8
// shared update function UpdateMoby_a_lot_23; registered for oClasses 492, 724, 725, 766, 767, 1781, 1782
#include "game/update/moby492.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x03a372c (0x14 bytes)
void M1782_003a372c(void)

{
  DAT_008433a8 = 0x10000;
  return;
}


// shared update function, registered for oClasses 492, 724, 725, 766, 767, 1781, 1782
// 0x03a3750 (0x164 bytes)
/* Moby 492
   Moby 724
   Moby 725
   Moby 766
   Moby 767
   Moby 1781
   Moby 1782 */

void UpdateMoby_492(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = g_heroPosition.y - (moby->pos).y;
  fVar2 = g_heroPosition.x - (moby->pos).x;
  fVar3 = g_heroPosition.z - (moby->pos).z;
  if (((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 1.0) &&
      (g_FrameTime * 2.0 <
       SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)
      )) && (moby->animationId != '\x01')) {
    MB_SetAnimation(moby,1,0,(int)(animationSpeed * 6.5));
  }
  if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId == '\x01')) {
    MB_SetAnimation(moby,0,0,(int)(animationSpeed * 6.5));
  }
  return;
}


// 0x03a38b4 (0x14 bytes)
void M1782_003a38b4(void)

{
  DAT_00843418 = 0x10000;
  return;
}


