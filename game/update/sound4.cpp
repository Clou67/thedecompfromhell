// game/update/sound4.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x180408-0x1806e8
#include "game/update/sound4.h"
#include "game/camera.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0180408 (0x2e0 bytes)
void UpdateSound_4(void *param_1)

{
  int *piVar1;
  uint handle;
  float fVar2;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_a0;
  float local_9c;
  float local_98;
  char local_94 [4];
  float local_90 [8];
  longlong local_70;
  
  local_90[0] = 4.0;
  dVar11 = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  piVar1 = *(int **)((int)param_1 + 8);
  dVar13 = 1.0;
  local_90[3] = 1.0;
  local_90[4] = 0.0;
  local_90[5] = 0.0;
  local_90[6] = 1.0;
  dVar8 = 6.2831854820251465;
  dVar9 = 0.05000000074505806;
  dVar10 = 0.3141592741012573;
  dVar7 = dVar11;
  dVar12 = dVar11;
  do {
    MB_RotateQuatAxisAngle((float)dVar11,&local_a0,local_90);
    local_a0 = GameCamera.posX + local_a0;
    local_98 = GameCamera.posZ + local_98;
    local_9c = GameCamera.posY + local_9c;
    local_94[0] = GameCamera.field8_0x14c[0];
    local_94[1] = GameCamera.field8_0x14c[1];
    local_94[2] = GameCamera.field8_0x14c[2];
    local_94[3] = GameCamera.field8_0x14c[3];
    dVar5 = (double)MB_SampleByteGrid
                              (CONCAT44(local_a0,local_9c),
                               CONCAT44(local_98,GameCamera.field8_0x14c));
    dVar11 = (double)(float)(dVar11 + dVar10);
    dVar6 = (double)GameCamera.posZ;
    if (dVar5 - dVar6 < 0.0) {
      dVar7 = (double)(float)(dVar7 + dVar9);
    }
  } while (dVar11 < dVar8);
  dVar11 = (double)DAT_00e5af00;
  if (dVar7 <= dVar11) {
    dVar7 = -(double)(float)((double)DAT_0071f424 * 0.75 - dVar11);
  }
  else {
    dVar7 = (double)(float)((double)DAT_0071f424 * 0.20000000298023224 + dVar11);
  }
  DAT_00e5af00 = (float)dVar7;
  if (dVar7 <= dVar13) {
    if (dVar7 < dVar12) {
      DAT_00e5af00 = 0.0;
      dVar7 = dVar12;
    }
  }
  else {
    DAT_00e5af00 = 1.0;
    dVar7 = dVar13;
  }
  handle = piVar1[2];
  uVar3 = (ulonglong)handle;
  if ((g_SoundChannels[handle].pSoundInstance == param_1) &&
     (g_SoundChannels[handle].state != '\0')) {
    iVar4 = (int)(((float)((double)(float)piVar1[1] + dVar7) /
                  (float)((double)(float)piVar1[1] + dVar13)) * 1024.0);
    local_70 = (longlong)iVar4;
    sound_SetVol(handle,iVar4);
    uVar3 = (ulonglong)(uint)piVar1[2];
    dVar6 = (double)GameCamera.posZ;
  }
  iVar4 = (int)(uVar3 << 7) - (int)(uVar3 << 4);
  *(float *)((int)g_SoundChannels + iVar4 + 0x20) = GameCamera.posX;
  fVar2 = GameCamera.posY;
  *(float *)((int)g_SoundChannels + iVar4 + 0x28) = (float)dVar6;
  *(float *)((int)g_SoundChannels + iVar4 + 0x24) = fVar2;
  *(char (*) [4])((int)g_SoundChannels + iVar4 + 0x2c) = GameCamera.field8_0x14c;
  if ((g_SoundChannels[piVar1[2]].pSoundInstance != param_1) ||
     (g_SoundChannels[piVar1[2]].state == '\0')) {
    iVar4 = sound_AmbientPlay(*piVar1,0x15,param_1,0x400);
    piVar1[2] = iVar4;
  }
  return;
}


