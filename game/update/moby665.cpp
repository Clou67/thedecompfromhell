// game/update/moby665.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x408ef8-0x409170
#include "game/update/moby665.h"
#include "game/camera.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0408ef8 (0x14 bytes)
void M665_00408ef8(void)

{
  DAT_00854db0 = 0x10000;
  return;
}


// 0x0408f10 (0x260 bytes)
/* Moby 665 */

ulonglong UpdateMoby_665(MobyInstance *moby)

{
  f32 fVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = (ulonglong)(int)moby;
  piVar2 = (int *)moby->pVar;
  if (moby->state == 0) {
    uVar5 = 0xffffffffffffffff;
    fVar1 = (moby->pos).x;
    piVar2[5] = -1;
    piVar2[1] = (int)fVar1;
    fVar1 = (moby->pos).y;
    piVar2[6] = 0;
    piVar2[2] = (int)fVar1;
    moby->state = '\x01';
  }
  else if ((moby->state < 2) && (iVar6 = *piVar2, iVar6 != -1)) {
    uVar5 = (ulonglong)(uint)piVar2[3];
    if ((piVar2[3] != 0) && (uVar5 = (ulonglong)(uint)piVar2[4], piVar2[4] != 0)) {
      uVar5 = (ulonglong)g_MobyInstance[iVar6].oClass;
      if (g_MobyInstance[iVar6].oClass == BOLT_CRANK) {
        pfVar3 = (float *)g_MobyInstance[iVar6].pVar;
        (moby->pos).x = ((float)piVar2[3] - (float)piVar2[1]) * *pfVar3 + (float)piVar2[1];
        (moby->pos).y = ((float)piVar2[4] - (float)piVar2[2]) * *pfVar3 + (float)piVar2[2];
        fVar4 = *pfVar3;
        if (fVar4 == (float)piVar2[6]) {
          iVar6 = IsMobyPlayingSound(moby,piVar2[5]);
          uVar5 = (ulonglong)iVar6;
          if (iVar6 != 0) {
            iVar6 = piVar2[5];
            if (((iVar6 != -1) && (g_SoundChannels[iVar6].pMoby == moby)) &&
               (g_SoundChannels[iVar6].state != '\0')) {
              sound_Kill(iVar6);
            }
            uVar5 = 0xffffffffffffffff;
            piVar2[5] = -1;
          }
        }
        else if ((fVar4 == 1.0) || (fVar4 == 0.0)) {
          iVar6 = IsMobyPlayingSound(moby,piVar2[5]);
          if (iVar6 != 0) {
            iVar6 = piVar2[5];
            if (((iVar6 != -1) && (g_SoundChannels[iVar6].pMoby == moby)) &&
               (g_SoundChannels[iVar6].state != '\0')) {
              sound_Kill(iVar6);
            }
            piVar2[5] = -1;
          }
          iVar6 = PlayMobySound(1,0,moby);
          uVar5 = (ulonglong)iVar6;
        }
        else {
          iVar6 = IsMobyPlayingSound(moby,piVar2[5]);
          uVar5 = (ulonglong)iVar6;
          if (iVar6 == 0) {
            iVar6 = PlayMobySound(0,4,moby);
            uVar5 = (ulonglong)iVar6;
            piVar2[5] = iVar6;
          }
        }
        piVar2[6] = (int)*pfVar3;
      }
    }
  }
  return uVar5;
}


