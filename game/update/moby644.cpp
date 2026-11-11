// game/update/moby644.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3fff90-0x400660
#include "game/update/moby644.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x03fff90 (0x14 bytes)
void M644_003fff90(void)

{
  DAT_00854740 = 0x10000;
  return;
}


// 0x03fffb8 (0x6a8 bytes)
/* Moby 644 */

void UpdateMoby_644(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float local_b0 [3];
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80 [3];
  undefined4 local_74;
  float local_70 [3];
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40 [3];
  undefined4 local_34;
  float local_30 [3];
  undefined4 local_24;
  
  uVar1 = moby->state;
  pfVar3 = (float *)moby->pVar;
  if (uVar1 == '\x05') {
    if ((int)pfVar3[0x1b] < 1) {
      moby->state = '\x01';
    }
    else {
      Delt(0.0,g_FrameTime * 4.0,pfVar3 + 0x1b);
      SceneScreenFade = pfVar3[0x1b];
    }
  }
  else if (uVar1 == '\x04') {
    iVar5 = FastDecTimerS32(pfVar3 + 0x1d);
    if (iVar5 != 0) {
      OrganicDelt
                (1.0,pfVar3[0x1a],pfVar3[0x1a],pfVar3[0x1c],pfVar3 + 0x18,0x3fffa8,pfVar3 + 0x19);
    }
    fVar2 = pfVar3[0x18];
    local_54 = pfVar3[7];
    local_60 = fVar2 * (pfVar3[4] - *pfVar3) + *pfVar3;
    local_5c = fVar2 * (pfVar3[5] - pfVar3[1]) + pfVar3[1];
    local_58 = fVar2 * (pfVar3[6] - pfVar3[2]) + pfVar3[2];
    dVar7 = 0.0;
    local_44 = 0;
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    dVar6 = (double)FastDiffRots((double)pfVar3[0xd],(double)pfVar3[9]);
    local_4c = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)FastWrapRot(pfVar3[9],local_4c);
    local_4c = (float)dVar6;
    dVar6 = (double)FastDiffRots((double)pfVar3[0xe],(double)pfVar3[10]);
    local_48 = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)FastWrapRot(pfVar3[10],local_48);
    local_48 = (float)dVar6;
    Camera_SetMobyDrivenTargetPos(&local_60);
    Camera_SetMobyDrivenTargetRot(&local_50);
    uVar4 = (int)pfVar3[0x18] >> 0x1f;
    iVar5 = (uVar4 >> 1 ^ (uint)pfVar3[0x18]) - uVar4;
    if ((iVar5 < 0x3f800000) &&
       (((iVar5 < 0x3e4cccce || (g_HelpState != 0)) || (g_HelpCurId != -1)))) {
      if (g_heroState == MOVEMENT_LOCKED) {
        Delt((float)dVar7,g_FrameTime * 4.0,pfVar3 + 0x1b);
        SceneScreenFade = pfVar3[0x1b];
      }
      else {
        local_24 = 0;
        local_30[1] = 0.0;
        local_30[0] = 0.0;
        local_30[2] = pfVar3[0x13];
        Hero_Warp(pfVar3 + 0x10,local_30,0x72,1);
      }
    }
    else {
      Delt(1.0,g_FrameTime * 4.0,pfVar3 + 0x1b);
      SceneScreenFade = pfVar3[0x1b];
      uVar4 = (int)pfVar3[0x1b] >> 0x1f;
      if (0x3f7fffff < (int)((uVar4 >> 1 ^ (uint)pfVar3[0x1b]) - uVar4)) {
        LetterBoxOn = 0;
        pfVar3[0x18] = 1.0;
        local_34 = 0;
        local_40[1] = 0.0;
        local_40[0] = 0.0;
        local_40[2] = pfVar3[0x13];
        Hero_Warp(pfVar3 + 0x10,local_40,0,0);
        Camera_DeactivateMobyDrivenCam(3);
        moby->state = '\x05';
      }
    }
  }
  else if (uVar1 == '\x03') {
    DAT_00a1bfe8 = 1;
    iVar5 = FastDecTimerS32(pfVar3 + 0x1d);
    if (iVar5 != 0) {
      OrganicDelt
                (1.0,pfVar3[0x1a],pfVar3[0x1a],pfVar3[0x1c],pfVar3 + 0x18,0x3fffa8,pfVar3 + 0x19);
    }
    fVar2 = pfVar3[0x18];
    local_94 = pfVar3[7];
    local_a0 = fVar2 * (pfVar3[4] - *pfVar3) + *pfVar3;
    local_9c = fVar2 * (pfVar3[5] - pfVar3[1]) + pfVar3[1];
    local_98 = fVar2 * (pfVar3[6] - pfVar3[2]) + pfVar3[2];
    dVar7 = 0.0;
    local_84 = 0;
    local_88 = 0.0;
    local_8c = 0.0;
    local_90 = 0.0;
    dVar6 = (double)FastDiffRots((double)pfVar3[0xd],(double)pfVar3[9]);
    local_8c = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)FastWrapRot(pfVar3[9],local_8c);
    local_8c = (float)dVar6;
    dVar6 = (double)FastDiffRots((double)pfVar3[0xe],(double)pfVar3[10]);
    local_88 = (float)(dVar6 * (double)pfVar3[0x18]);
    dVar6 = (double)FastWrapRot(pfVar3[10],local_88);
    local_88 = (float)dVar6;
    Camera_SetMobyDrivenTargetPos(&local_a0);
    Camera_SetMobyDrivenTargetRot(&local_90);
    Delt((float)dVar7,g_FrameTime * 4.0,pfVar3 + 0x1b);
    SceneScreenFade = pfVar3[0x1b];
    uVar4 = (int)pfVar3[0x18] >> 0x1f;
    if ((int)((uVar4 >> 1 ^ (uint)pfVar3[0x18]) - uVar4) < 0x3f800000) {
      if (g_heroState != MOVEMENT_LOCKED) {
        local_64 = 0;
        local_70[1] = 0.0;
        local_70[0] = 0.0;
        local_70[2] = pfVar3[0x13];
        Hero_Warp(pfVar3 + 0x10,local_70,0x72,1);
      }
    }
    else {
      local_74 = 0;
      local_80[1] = 0.0;
      local_80[0] = 0.0;
      LetterBoxOn = 0;
      local_80[2] = pfVar3[0x13];
      Hero_Warp(pfVar3 + 0x10,local_80,0,0);
      Camera_DeactivateMobyDrivenCam(2);
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x02') {
    DAT_00a1bfe8 = 1;
    Delt(1.0,g_FrameTime * 4.0,pfVar3 + 0x1b);
    uVar4 = (int)pfVar3[0x1b] >> 0x1f;
    iVar5 = (uVar4 >> 1 ^ (uint)pfVar3[0x1b]) - uVar4;
    if ((int)(FLOAT_ORDER(SceneScreenFade)) < iVar5) {
      SceneScreenFade = pfVar3[0x1b];
    }
    if (0x3f7fffff < iVar5) {
      local_a4 = 0;
      local_b0[1] = 0.0;
      LetterBoxOn = 1;
      local_b0[0] = 0.0;
      local_b0[2] = pfVar3[0x13];
      Hero_Warp(pfVar3 + 0x10,local_b0,0x72,1);
      SetCameraPosition(pfVar3,pfVar3 + 8,1,0,0);
      if (pfVar3[0x1e] == 1.4013e-45) {
        Help_QueueMessage(STR_POWER_SLAM_THAT_BUTTON_0x4650,0x85);
        moby->state = '\x04';
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  return;
}


