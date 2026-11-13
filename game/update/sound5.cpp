// game/update/sound5.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1806e8-0x1807e0
#include "game/update/sound5.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x01806e8 (0xf8 bytes)
void UpdateSound_5(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)param_1 + 8);
  iVar3 = piVar1[1];
  bVar2 = false;
  g_SoundChannels[iVar3].pos[0] = GameCamera.posX;
  g_SoundChannels[iVar3].pos[1] = GameCamera.posY;
  g_SoundChannels[iVar3].pos[2] = GameCamera.posZ;
  g_SoundChannels[iVar3].pos[3] = (float)GameCamera.field8_0x14c;
  iVar3 = piVar1[1];
  if ((g_SoundChannels[iVar3].pSoundInstance == param_1) &&
     (g_SoundChannels[iVar3].state != '\0')) {
    bVar2 = true;
  }
  if (GameCamera.camUnderWater == 0) {
    if (bVar2) {
      sound_Kill(iVar3);
      piVar1[1] = -1;
    }
  }
  else if (!bVar2) {
    iVar3 = sound_AmbientPlay(*piVar1,0x15,param_1,0x400);
    piVar1[1] = iVar3;
  }
  return;
}


