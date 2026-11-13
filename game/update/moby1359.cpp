// game/update/moby1359.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x25b2e4-0x25bca4
// shared update function UpdateMoby_a_lot_12; registered for oClasses 1359, 1360, 1361, 1362, 1363, 1364, 1367, 1369, 1372, 1373
#include <math.h>
#include "game/update/moby1359.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x025b2e4 (0x14 bytes)
void M1373_0025b2e4(void)

{
  DAT_0079bf78 = 0x10000;
  return;
}


// shared update function, registered for oClasses 1359, 1360, 1361, 1362, 1363, 1364, 1367, 1369, 1372, 1373
// 0x025b328 (0x968 bytes)
/* Moby 1359
   Moby 1360
   Moby 1361
   Moby 1362
   Moby 1363
   Moby 1364
   Moby 1367
   Moby 1369
   Moby 1372
   Moby 1373 */

void UpdateMoby_1359(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  MOBY_OCLASSES MVar3;
  f32 *pfVar4;
  f32 handle;
  int iVar5;
  f32 fVar6;
  GPiece<16> local_60;
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  GPiece<16> local_40;
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  pfVar4 = (f32 *)moby->pVar;
  if ((pfVar4[6] == -NAN) || (fVar6 = pfVar4[7], fVar6 == -NAN)) {
    DeleteMoby(moby);
  }
  else if (g_gameMode != GAME_MODE_SCENE) {
    uVar1 = moby->state;
    if (uVar1 == '\x05') {
      if ((moby->pClass->SoundDefs != (void *)0x0) &&
         (iVar5 = IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
        fVar6 = (f32)PlayMobySound(0,4,moby);
        pfVar4[8] = fVar6;
      }
      iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[6]);
      if (((iVar5 == 0) &&
          (iVar5 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[6]),
          iVar5 == 0)) &&
         ((pfVar4[4] == -NAN ||
          (iVar5 = MB_IsPntInCuboid
                             ((Vec4 *)&g_MobyInstance[(int)pfVar4[4]].pos,(longlong)(int)pfVar4[6]),
          iVar5 == 0)))) {
        if (ABS(pfVar4[5]) <= g_FrameTime * 3.0) {
          fVar2 = 0.0;
        }
        else {
          fVar2 = -1.0;
          if (moby->setByGroup != '\0') {
            fVar2 = 1.0;
          }
          fVar2 = -(g_FrameTime * 3.0 * fVar2 - pfVar4[5]);
        }
        MVar3 = moby->oClass;
        pfVar4[5] = fVar2;
        if (((MVar3 == DOOR_055D || MVar3 == DOOR_055C) || (MVar3 == DOOR_0557)) ||
           (MVar3 == DOOR_0559)) {
          FastWrapRot(1.5707964,(moby->rotation).z);
        }
        FastVecAdd(&local_30,pfVar4,local_40);
        (moby->pos).x = local_30;
        (moby->pos).y = local_2c;
        (moby->pos).z = local_28;
        (moby->pos).w = local_24;
        if (pfVar4[5] == 0.0) {
          fVar6 = pfVar4[8];
          if (((fVar6 != -NAN) && (g_SoundChannels[(int)fVar6].pMoby == moby)) &&
             (g_SoundChannels[(int)fVar6].state != '\0')) {
            sound_Kill((int)fVar6);
          }
          pfVar4[8] = -NAN;
          moby->state = '\x01';
        }
      }
      else {
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\x04') {
      handle = pfVar4[8];
      if (((handle != -NAN) && (g_SoundChannels[(int)handle].pMoby == moby)) &&
         (g_SoundChannels[(int)handle].state != '\0')) {
        sound_Kill((int)handle);
        fVar6 = pfVar4[7];
      }
      pfVar4[8] = -NAN;
      iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)fVar6);
      if (((iVar5 == 0) &&
          (iVar5 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[7]),
          iVar5 == 0)) &&
         ((pfVar4[4] == -NAN ||
          (iVar5 = MB_IsPntInCuboid
                             ((Vec4 *)&g_MobyInstance[(int)pfVar4[4]].pos,(longlong)(int)pfVar4[6]),
          iVar5 == 0)))) {
        if ((moby->pClass->SoundDefs != (void *)0x0) &&
           (iVar5 = IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
          fVar6 = (f32)PlayMobySound(0,4,moby);
          pfVar4[8] = fVar6;
        }
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->pClass->SoundDefs != (void *)0x0) &&
         (iVar5 = IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
        fVar6 = (f32)PlayMobySound(0,4,moby);
        pfVar4[8] = fVar6;
      }
      fVar2 = -1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = 1.0;
      }
      MVar3 = moby->oClass;
      pfVar4[5] = g_FrameTime * 3.0 * fVar2 + pfVar4[5];
      if (((MVar3 == DOOR_055D || MVar3 == DOOR_055C) || (MVar3 == DOOR_0557)) ||
         (MVar3 == DOOR_0559)) {
        FastWrapRot(1.5707964,(moby->rotation).z);
      }
      FastVecAdd(&local_50,pfVar4,local_60);
      (moby->pos).x = local_50;
      (moby->pos).y = local_4c;
      (moby->pos).z = local_48;
      (moby->pos).w = local_44;
      if (0x40000000 < (uint)ABS(pfVar4[5])) {
        fVar6 = pfVar4[8];
        if (((fVar6 != -NAN) && (g_SoundChannels[(int)fVar6].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar6].state != '\0')) {
          sound_Kill((int)fVar6);
        }
        pfVar4[8] = -NAN;
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x01') {
      fVar6 = pfVar4[8];
      pfVar4[5] = 0.0;
      if (((fVar6 != -NAN) && (g_SoundChannels[(int)fVar6].pMoby == moby)) &&
         (g_SoundChannels[(int)fVar6].state != '\0')) {
        sound_Kill((int)fVar6);
      }
      fVar6 = (moby->rotation).x;
      pfVar4[8] = -NAN;
      if ((((uint)ABS(fVar6) < 0x3f490fdb) || (g_onMagnerail != 0)) &&
         ((iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[6]), iVar5 != 0
          || ((pfVar4[4] != -NAN &&
              (iVar5 = MB_IsPntInCuboid
                                 ((Vec4 *)&g_MobyInstance[(int)pfVar4[4]].pos,(longlong)(int)pfVar4[6]
                                 ), iVar5 != 0)))))) {
        if ((moby->pClass->SoundDefs != (void *)0x0) &&
           (iVar5 = IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
          fVar6 = (f32)PlayMobySound(0,4,moby);
          pfVar4[8] = fVar6;
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      MVar3 = moby->oClass;
      if ((((MVar3 == DOOR_0551 || MVar3 == DOOR_0550) || (MVar3 == DOOR_0553)) ||
          (MVar3 == DOOR_0557)) || (MVar3 == DOOR_055D)) {
        moby->setByGroup = '\x01';
      }
      *pfVar4 = (moby->pos).x;
      pfVar4[1] = (moby->pos).y;
      pfVar4[2] = (moby->pos).z;
      pfVar4[3] = (moby->pos).w;
      moby->state = '\x01';
    }
  }
  return;
}


// 0x025bc90 (0x14 bytes)
void M1373_0025bc90(void)

{
  DAT_0079bfe8 = 0x10000;
  return;
}


