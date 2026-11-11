// game/update/moby67.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x40b6b0-0x40bd38
#include <math.h>
#include "game/update/moby67.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x040b6b0 (0x688 bytes)
/* Moby 67 */

void UpdateMoby_67(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  ushort uVar3;
  f32 *pfVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar10;
  ulonglong uVar9;
  f32 fVar11;
  GPiece<16> local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  uVar1 = moby->state;
  pfVar4 = (f32 *)moby->pVar;
  if (uVar1 == '\x04') {
    fVar11 = pfVar4[8];
    uVar9 = (ulonglong)(uint)fVar11;
    if ((g_SoundChannels[(int)fVar11].pMoby != moby) ||
       (g_SoundChannels[(int)fVar11].state == '\0')) {
      fVar11 = (f32)PlayMobySound(0,4,moby);
      uVar9 = (ulonglong)(int)fVar11;
      pfVar4[8] = fVar11;
    }
    fVar2 = -(pfVar4[9] * 1.6666666 * g_FrameTime - pfVar4[6]);
    pfVar4[6] = fVar2;
    if (fVar2 < 0.0) {
      if ((((int)uVar9 != -1) &&
          (iVar10 = (int)(uVar9 << 7) - (int)(uVar9 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar10 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar10 + 4) != '\0')) {
        sound_Kill((int)uVar9);
      }
      pfVar4[6] = 0.0;
      pfVar4[8] = -NAN;
      moby->state = '\x01';
    }
    FastVecAdd(&local_30,pfVar4,local_50);
    (moby->pos).x = local_30;
    (moby->pos).y = local_2c;
    (moby->pos).z = local_28;
    (moby->pos).w = local_24;
    iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[4]);
    if ((iVar10 != 0) ||
       (iVar10 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[4]),
       iVar10 != 0)) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[5]);
    if ((iVar10 == 0) &&
       (iVar10 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[5]),
       iVar10 == 0)) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    fVar11 = pfVar4[8];
    uVar9 = (ulonglong)(uint)fVar11;
    if ((g_SoundChannels[(int)fVar11].pMoby != moby) ||
       (g_SoundChannels[(int)fVar11].state == '\0')) {
      fVar11 = (f32)PlayMobySound(0,4,moby);
      uVar9 = (ulonglong)(int)fVar11;
      pfVar4[8] = fVar11;
    }
    fVar2 = pfVar4[9];
    fVar6 = fVar2 * 1.6666666 * g_FrameTime + pfVar4[6];
    pfVar4[6] = fVar6;
    if (fVar2 < fVar6) {
      if ((((int)uVar9 != -1) &&
          (iVar10 = (int)(uVar9 << 7) - (int)(uVar9 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar10 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar10 + 4) != '\0')) {
        sound_Kill((int)uVar9);
        fVar2 = pfVar4[9];
      }
      pfVar4[8] = -NAN;
      pfVar4[6] = fVar2;
      if ((pfVar4[7] == -NAN) && (pfVar4[10] == 0.0)) {
        moby->state = '\x03';
      }
      else {
        uVar3 = moby->uid;
        iVar8 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        iVar10 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar5 = *(uint *)(&DAT_00a54dd0 + iVar10);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) | 1 << (uVar3 & 0x1f);
        *(uint *)(&DAT_00a54dd0 + iVar10) = uVar5 | 1 << (uVar3 & 0x1f);
        moby->state = '\x05';
      }
    }
    FastVecAdd(&local_40,pfVar4,local_50);
    (moby->pos).x = local_40;
    (moby->pos).y = local_3c;
    (moby->pos).z = local_38;
    (moby->pos).w = local_34;
  }
  else if (uVar1 == '\x01') {
    bVar7 = false;
    fVar11 = pfVar4[7];
    pfVar4[6] = 0.0;
    if (fVar11 != -NAN) {
      if ((g_MobyInstance[(int)fVar11].oClass == UNDERWATER_RING) &&
         (g_MobyInstance[(int)fVar11].state == '\x04')) {
        bVar7 = true;
      }
      else if ((g_MobyInstance[(int)fVar11].oClass == CODEBOT_SLOT) &&
              (g_MobyInstance[(int)fVar11].state == '\x04')) {
        bVar7 = true;
      }
    }
    if ((pfVar4[10] != 0.0) &&
       ((uVar3 = moby->uid, (&DAT_00a545c4)[(short)uVar3] != '\0' ||
        ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
         & 1 << (uVar3 & 0x1f)) != 0)))) {
      bVar7 = true;
    }
    iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[4]);
    if (iVar10 != 0 || bVar7) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    *pfVar4 = (moby->pos).x;
    pfVar4[1] = (moby->pos).y;
    pfVar4[2] = (moby->pos).z;
    pfVar4[3] = (moby->pos).w;
    moby->state = '\x01';
  }
  return;
}


