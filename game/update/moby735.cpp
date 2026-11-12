// game/update/moby735.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x437ec0-0x4381a0
// shared update function UpdateMoby_{735_736}; registered for oClasses 735, 736
#include "game/update/moby735.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 735, 736
// 0x0437ec0 (0x2e0 bytes)
/* Moby 735
   Moby 736 */

void UpdateMoby_735(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  f32 *pfVar4;
  double dVar5;
  GPiece<16> auStack_a0;
  GPiece<16> auStack_90;
  GPiece<16> auStack_80;
  GPiece<16> auStack_70;
  GPiece<16> auStack_60;
  GPiece<24> auStack_50;
  
  pfVar4 = (f32 *)moby->pVar;
  if ((g_gameMode == GAME_MODE_SCENE) && (moby->setByGroup == '\0')) {
    moby->modeBits = moby->modeBits | DISABLED;
    moby->enabled = '\0';
  }
  else {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->enabled = '\x01';
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    *pfVar4 = (moby->rotation).x;
    pfVar4[1] = (moby->rotation).y;
    fVar2 = (moby->rotation).z;
    pfVar4[3] = 0.0;
    pfVar4[2] = fVar2;
    dVar5 = 0.01745329238474369;
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      (moby->rotation).x = pfVar4[4] * 0.017453292;
      (moby->rotation).y = pfVar4[5] * 0.017453292;
      fVar3 = pfVar4[6];
      moby->state = '\x03';
      (moby->rotation).z = fVar3 * 0.017453292;
    }
    else {
      moby->state = '\x01';
      fVar3 = pfVar4[4];
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      FastQuaternionToEuler((double)(fVar3 * 0.017453292),auStack_a0,0);
      FastQuaternionToEuler((double)(float)((double)pfVar4[5] * dVar5),auStack_90,1);
      FastQuaternionToEuler((double)(float)((double)pfVar4[6] * dVar5),auStack_80,2);
      FastQuaternionMult(auStack_70,auStack_a0,auStack_90);
      FastQuaternionMult(pfVar4 + 4,auStack_70,auStack_80);
      FastQuaternionToEuler((double)(moby->rotation).x,auStack_a0,0);
      FastQuaternionToEuler((double)(moby->rotation).y,auStack_90,1);
      FastQuaternionToEuler((double)(moby->rotation).z,auStack_80,2);
      FastQuaternionMult(auStack_60,auStack_a0,auStack_90);
      FastQuaternionMult(pfVar4,auStack_60,auStack_80);
    }
  }
  else if (bVar1 < 2) {
    if (moby->setByGroup != '\0') {
      moby->state = '\x02';
      pfVar4[8] = 0.0;
      pfVar4[9] = 0.0;
    }
  }
  else if (bVar1 < 3) {
    OrganicDeltAng
              (1.0,g_FrameTimeSq * 0.5,g_FrameTimeSq * 0.5,g_FrameTime,pfVar4 + 9,0x720000,
               pfVar4 + 8);
    FastSlerp((double)pfVar4[9],auStack_50,pfVar4,pfVar4 + 4);
    FastQuaternionToMtx4(auStack_50,(longlong)(int)moby + 0xc0);
  }
  return;
}


