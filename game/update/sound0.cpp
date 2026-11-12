// game/update/sound0.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x17f7d0-0x17f9f8
#include "game/update/sound0.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x017f7d0 (0x228 bytes)
void UpdateSound_0(void *param_1)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  piVar2 = *(int **)((int)param_1 + 8);
  if (-1 < *piVar2) {
    fVar3 = GameCamera.posY - *(float *)((int)param_1 + 0x44);
    fVar4 = GameCamera.posX - *(float *)((int)param_1 + 0x40);
    fVar5 = GameCamera.posZ - *(float *)((int)param_1 + 0x48);
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if (*(float *)((int)param_1 + 0xc) <= fVar3) {
      if (*(float *)((int)param_1 + 0xc) + 1.0 < fVar3) {
        iVar6 = piVar2[4];
        if (((iVar6 != -1) && (g_SoundChannels[iVar6].pSoundInstance == param_1)) &&
           (g_SoundChannels[iVar6].state != '\0')) {
          sound_Kill(iVar6);
        }
        piVar2[4] = -1;
      }
    }
    else {
      bVar1 = *(byte *)(g_pSoundDefs + *piVar2 * 0x20 + 0x18);
      if (((g_SoundChannels[piVar2[4]].pSoundInstance != param_1) ||
          (g_SoundChannels[piVar2[4]].state == '\0')) &&
         (iVar6 = FastDecTimerS32(piVar2 + 3), iVar6 != 0)) {
        iVar6 = sound_AmbientPlay
                          (*piVar2,((uint)(ZERO_MASK((uint)bVar1)) & 0xfffffffc) +
                                   4,param_1,0x400);
        piVar2[4] = iVar6;
        if (0 < piVar2[2]) {
          iVar6 = MB_randInt(piVar2[2] - piVar2[1]);
          piVar2[3] = (int)((float)(longlong)
                                   (animationSpeed * ((float)(longlong)(piVar2[1] + iVar6) + 0.5)) *
                           60.0);
        }
      }
    }
  }
  return;
}


