// game/update/moby732.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x437430-0x437778
#include "game/update/moby732.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0437430 (0x348 bytes)
/* Moby 732 */

void UpdateMoby_732(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  longlong lVar3;
  char cVar6;
  int iVar5;
  ulonglong uVar4;
  double dVar7;
  
  lVar3 = (longlong)(int)moby;
  uVar1 = moby->animationId;
  piVar2 = (int *)moby->pVar;
  moby->unk58 = DAT_0085a1f0;
  if (uVar1 != '\x05' && uVar1 != '\a') {
    if (uVar1 == '\x04') {
      iVar5 = FastDecTimerS8(lVar3 + 0xbc);
      if (iVar5 == 0) {
        return;
      }
      if (moby->animationId != '\x05') {
        MB_SetAnimation(lVar3,5,0,(int)(animationSpeed * 10.5));
      }
      moby->setByGroup = '\x02';
      iVar5 = PlayMobySound(0,4,moby);
      *piVar2 = iVar5;
      return;
    }
    if (uVar1 != '\x03') {
      if (uVar1 == '\x02') {
        iVar5 = FastDecTimerS8(lVar3 + 0xbc);
        if (iVar5 == 0) {
          return;
        }
        uVar4 = MB_randInt(0xff);
        if ((uVar4 & 1) == 0) {
          if (moby->animationId != '\a') {
            MB_SetAnimation(lVar3,7,0,(int)(animationSpeed * 10.5));
          }
          moby->setByGroup = '\0';
        }
        else {
          if (moby->animationId != '\x03') {
            MB_SetAnimation(lVar3,3,0,(int)(animationSpeed * 10.5));
          }
          moby->setByGroup = '\x04';
        }
        iVar5 = PlayMobySound(0,4,moby);
        *piVar2 = iVar5;
        return;
      }
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return;
        }
        iVar5 = FastDecTimerS8(lVar3 + 0xbc);
        if (iVar5 == 0) {
          return;
        }
        if (moby->animationId != '\x01') {
          MB_SetAnimation(lVar3,1,0,(int)(animationSpeed * 10.5));
        }
        moby->setByGroup = '\x02';
        iVar5 = PlayMobySound(0,4,moby);
        *piVar2 = iVar5;
        return;
      }
    }
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    moby->animationBlend = 0.0;
    if (uVar1 != moby->setByGroup) {
      MB_SetAnimation(lVar3,moby->setByGroup,0,0);
    }
    iVar5 = *piVar2;
    if (((iVar5 != -1) && (g_SoundChannels[iVar5].pMoby == moby)) &&
       (g_SoundChannels[iVar5].state != '\0')) {
      sound_Kill(iVar5);
    }
    *piVar2 = -1;
    PlayMobySound(1,0,moby);
    dVar7 = (double)MB_randRangeFloat(180.0,240.0);
    cVar6 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
    moby->setByGroup = cVar6;
  }
  return;
}


