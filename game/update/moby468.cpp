// game/update/moby468.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x398538-0x3988e8
// shared update function UpdateMoby_{468_469}; registered for oClasses 468, 469
#include "game/update/moby468.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 468, 469
// 0x0398538 (0x39c bytes)
/* Moby 468
   Moby 469 */

void UpdateMoby_468(MobyInstance *moby)

{
  f32 fVar1;
  MOBY_OCLASSES MVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<32> auStack_90;
  float local_70;
  float local_6c;
  float local_68;
  
  piVar3 = (int *)moby->pVar;
  dVar9 = 0.0;
  dVar10 = 30.0;
  fVar1 = (moby->pos).x;
                    /* WARNING: Load size is inaccurate */
  fVar4 = *g_MobyInstance[*piVar3].pVar;
                    /* WARNING: Load size is inaccurate */
  dVar8 = (double)*g_MobyInstance[*piVar3].pVar;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (moby->state == '\0') {
    moby->state = '\x01';
    piVar3[4] = (int)fVar1;
    piVar3[5] = (int)(moby->pos).y;
    piVar3[6] = (int)(moby->pos).z;
    piVar3[7] = (int)(moby->pos).w;
  }
  else if (moby->state == '\x01') {
    dVar7 = 0.01745329238474369;
    dVar6 = (double)FastDiffRots
                              ((double)((float)piVar3[1] * 0.017453292),
                               (double)((float)piVar3[2] * 0.017453292));
    dVar8 = (double)FastWrapRot
                              ((float)(dVar6 * dVar8),(float)((double)(float)piVar3[2] * dVar7));
    dVar6 = (double)FastSubRots((moby->rotation).y,(float)dVar8);
    if (dVar6 == dVar9) {
      if ((moby->oClass == (WATER_RESERVOIR|HOVERBOARD_0054)) &&
         (iVar5 = IsMobyPlayingSound(moby,piVar3[8]), iVar5 != 0)) {
        iVar5 = piVar3[8];
        if (g_SoundChannels[iVar5].vol < 0x100) {
          sound_Kill(iVar5);
          piVar3[8] = -1;
        }
        else {
          sound_SetVol(iVar5,g_SoundChannels[iVar5].vol -
                                    0x400 / (int)(animationSpeed * 60.5));
        }
      }
    }
    else {
      MVar2 = moby->oClass;
      (moby->rotation).y = (float)dVar8;
      if (MVar2 == (WATER_RESERVOIR|HOVERBOARD_0054)) {
        iVar5 = IsMobyPlayingSound(moby,piVar3[8]);
        if (iVar5 == 0) {
          iVar5 = PlayMobySound(0,4,moby);
          piVar3[8] = iVar5;
          sound_SetVol(iVar5,1);
        }
        else if (g_SoundChannels[piVar3[8]].vol < 0x400) {
          sound_SetVol(piVar3[8],
                              g_SoundChannels[piVar3[8]].vol +
                              0x400 / (int)(animationSpeed * 60.5));
        }
      }
    }
    FastEulerToMtx1(auStack_90,(longlong)(int)moby + 0x40);
    (moby->pos).x = (float)((double)local_70 * dVar10 + (double)(float)piVar3[4]);
    (moby->pos).y = (float)((double)local_6c * dVar10 + (double)(float)piVar3[5]);
    (moby->pos).z = (float)((double)local_68 * dVar10 + (double)(float)piVar3[6]);
    (moby->pos).w = (f32)piVar3[7];
    if ((fVar4 == 1.0) && (moby->oClass == (WATER_RESERVOIR|HOVERBOARD_0054))) {
      (&g_MiscLevelFlags.field48_0x30)[piVar3[3]] = 1;
      moby->state = '\x02';
      PlayMobySound(1,0,moby);
      if ((moby->oClass == (WATER_RESERVOIR|HOVERBOARD_0054)) &&
         (iVar5 = IsMobyPlayingSound(moby,piVar3[8]), iVar5 != 0)) {
        sound_Kill(piVar3[8]);
      }
    }
  }
  return;
}


// 0x03988d4 (0x14 bytes)
void M469_003988d4(void)

{
  DAT_00842da4 = 0x10000;
  return;
}


