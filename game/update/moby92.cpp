// game/update/moby92.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4b2670-0x4b2c60
#include <math.h>
#include "game/update/moby92.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby408.h"

// 0x04b2670 (0x5f0 bytes)
/* Moby 92 */

void UpdateMoby_92(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 *pfVar4;
  int iVar6;
  ulonglong uVar5;
  f32 fVar7;
  double dVar8;
  
  uVar1 = moby->state;
  pfVar4 = (f32 *)moby->pVar;
  if (uVar1 == '\x05') {
    if (g_SeenPlanets.Kalebo == 0) {
      if (g_heroType != '\x02') {
        fVar7 = pfVar4[2];
        moby->state = '\x01';
        (moby->pos).z = fVar7;
        DAT_00a20828 = 0;
      }
    }
    else {
      DAT_00a20828 = 1;
      (moby->pos).z = pfVar4[2] - DAT_008f4444;
    }
  }
  else if (uVar1 == '\x04') {
    dVar8 = (double)(DAT_008f4444 * 1.6666666 * g_FrameTime);
    if (pfVar4[8] != -NAN) {
      dVar8 = (double)(float)(dVar8 * 5.0);
    }
    fVar7 = pfVar4[7];
    uVar5 = (ulonglong)(uint)fVar7;
    if ((g_SoundChannels[(int)fVar7].pMoby != moby) ||
       (g_SoundChannels[(int)fVar7].state == '\0')) {
      fVar7 = (f32)PlayMobySound(0,4,moby);
      uVar5 = (ulonglong)(int)fVar7;
      pfVar4[7] = fVar7;
    }
    fVar2 = pfVar4[6];
    pfVar4[6] = (float)((double)fVar2 - dVar8);
    if ((float)((double)fVar2 - dVar8) < 0.0) {
      if ((((int)uVar5 != -1) &&
          (iVar6 = (int)(uVar5 << 7) - (int)(uVar5 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar6 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar6 + 4) != '\0')) {
        sound_Kill((int)uVar5);
      }
      pfVar4[7] = -NAN;
      pfVar4[6] = 0.0;
      moby->state = '\x01';
      if (pfVar4[8] != -NAN) {
        moby->state = '\x05';
        DAT_00a20828 = 0;
      }
    }
    fVar2 = -1.0;
    if (pfVar4[8] == -NAN) {
      fVar2 = 1.0;
    }
    fVar7 = pfVar4[4];
    (moby->pos).z = pfVar4[6] * fVar2 + pfVar4[2];
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)fVar7);
    if ((iVar6 != 0) ||
       (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[4]),
       iVar6 != 0)) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (pfVar4[8] != -NAN) {
      DAT_00a20828 = 1;
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[5]);
    if ((((iVar6 == 0) &&
         (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[5]),
         iVar6 == 0)) ||
        (iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[8]), iVar6 != 0))
       && (pfVar4[10] == 0.0)) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    dVar8 = (double)(DAT_008f4444 * 1.6666666 * g_FrameTime);
    if (pfVar4[8] != -NAN) {
      dVar8 = (double)(float)(dVar8 * 5.0);
    }
    fVar7 = pfVar4[7];
    uVar5 = (ulonglong)(uint)fVar7;
    if ((g_SoundChannels[(int)fVar7].pMoby != moby) ||
       (fVar2 = DAT_008f4444, g_SoundChannels[(int)fVar7].state == '\0')) {
      fVar7 = (f32)PlayMobySound(0,4,moby);
      fVar2 = DAT_008f4444;
      uVar5 = (ulonglong)(int)fVar7;
      pfVar4[7] = fVar7;
    }
    fVar3 = (float)((double)pfVar4[6] + dVar8);
    pfVar4[6] = fVar3;
    if (fVar2 < fVar3) {
      if ((((int)uVar5 != -1) &&
          (iVar6 = (int)(uVar5 << 7) - (int)(uVar5 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar6 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar6 + 4) != '\0')) {
        sound_Kill((int)uVar5);
        fVar2 = DAT_008f4444;
      }
      pfVar4[6] = fVar2;
      pfVar4[7] = -NAN;
      moby->state = '\x03';
      fVar3 = pfVar4[6];
    }
    fVar2 = -1.0;
    if (pfVar4[8] == -NAN) {
      fVar2 = 1.0;
    }
    (moby->pos).z = fVar3 * fVar2 + pfVar4[2];
  }
  else if (uVar1 == '\x01') {
    pfVar4[6] = 0.0;
    if (pfVar4[8] != -NAN) {
      DAT_00a20828 = 0;
    }
    if (pfVar4[9] == -NAN) {
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[4]);
      if ((iVar6 != 0) && ((pfVar4[8] == -NAN || (g_heroType == '\x02')))) {
        moby->state = '\x02';
      }
    }
    else if ((((g_MobyInstance + (int)pfVar4[9] == (MobyInstance *)0x0) ||
              (uVar1 = g_MobyInstance[(int)pfVar4[9]].state, uVar1 == 0xfe)) || (uVar1 == 0xfd)) &&
            (DAT_010c512c == 0)) {
      moby->state = '\x02';
      pfVar4[10] = 1.4013e-45;
    }
    fVar2 = DAT_008f4444;
    if ((g_SeenPlanets.Kalebo != 0) && (pfVar4[8] != -NAN)) {
      fVar3 = pfVar4[2];
      moby->state = '\x05';
      (moby->pos).z = fVar3 - fVar2;
    }
  }
  else if (uVar1 == '\0') {
    *pfVar4 = (moby->pos).x;
    pfVar4[1] = (moby->pos).y;
    pfVar4[2] = (moby->pos).z;
    pfVar4[3] = (moby->pos).w;
    moby->state = '\x01';
    pfVar4[10] = 0.0;
    fVar2 = (moby->pos).z;
    if (pfVar4[8] != -NAN) {
      moby->updateDistance = -1;
    }
    fVar3 = DAT_008f4444;
    if ((g_SeenPlanets.Kalebo != 0) && (pfVar4[8] != -NAN)) {
      moby->state = '\x05';
      (moby->pos).z = fVar2 - fVar3;
    }
  }
  return;
}


