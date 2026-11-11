// game/update/moby105.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1a2398-0x1a2500
#include "game/update/moby105.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"

// 0x01a2398 (0x168 bytes)
/* Moby 105 */

void UpdateMoby_105(MobyInstance *moby)

{
  u8 uVar1;
  u8 uVar2;
  
  uVar2 = moby->state;
  if (uVar2 == '\0') {
    uVar2 = '\x01';
    moby->state = '\x01';
LAB_001a23cc:
    if ((((g_Pad.downButtons & DAT_0096ad80) != 0) && (g_heroState == UNK_17)) &&
       (g_heroMobyPtr->updateId == '\0')) {
      if (moby->animationId != '\x03') {
        MB_SetAnimation(moby,3,0,3);
      }
      moby->state = '\x02';
      goto LAB_001a2444;
    }
  }
  else if (uVar2 == '\x01') goto LAB_001a23cc;
  if (uVar2 != '\x02') {
    return;
  }
LAB_001a2444:
  uVar2 = moby->updateId;
  uVar1 = moby->animationId;
  if ((uVar2 == uVar1) && ((moby->field43_0x70 & 2U) != 0)) {
    if (uVar2 == '\x03') {
      if (uVar1 != '\x04') {
        MB_SetAnimation(moby,4,0,5);
      }
    }
    else if (uVar2 == '\x04') {
      if (uVar1 != '\x05') {
        MB_SetAnimation(moby,5,0,5);
      }
    }
    else if (uVar2 == '\x05') {
      if (uVar1 != '\x01') {
        MB_SetAnimation(moby,1,0,5);
      }
      moby->state = '\x01';
    }
  }
  return;
}


