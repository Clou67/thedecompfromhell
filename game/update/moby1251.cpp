// game/update/moby1251.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2285dc-0x229424
#include "game/update/moby1251.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x02285dc (0x14 bytes)
void M1251_002285dc(void)

{
  DAT_0076d434 = 0x10000;
  return;
}


// 0x02285f0 (0x6c bytes)
ulonglong M1251_002285f0(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x20) == '\x04') {
    LetterBoxOn = 0;
    SceneScreenFade = 0.0;
    Camera_DeactivateMobyDrivenCam(3);
  }
  uVar1 = (ulonglong)g_heroStateType;
  if (g_heroStateType == 0x13) {
    iVar2 = TransitionMovement(0,1);
    uVar1 = (ulonglong)iVar2;
  }
  return uVar1;
}


// 0x022865c (0x70 bytes)
undefined8 M1251_0022865c(void)

{
  undefined8 uVar1;
  
  if ((DAT_0096bd90 == '\0') &&
     ((g_MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 2U) != 0)) {
    uVar1 = 1;
  }
  else if ((DAT_0096bd90 == '\0') ||
          ((g_MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 1U) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x02286e8 (0x1b4 bytes)
void M1251_002286e8(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  Vec4 VStack_50;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  longlong local_30;
  
  iVar3 = *(int *)(param_1 + 0x78);
  iVar4 = FastDecTimerS32(iVar3 + 4);
  if (iVar4 != 0) {
    GetBonePosition(param_1,0,&VStack_50);
    dVar6 = (double)MB_randRangeFloat(g_FrameTime,g_FrameTime * 3.0);
    local_3c = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xd0);
    local_38 = *(float *)(param_1 + 0xd8);
    local_40 = 0.0;
    dVar7 = (double)SQRT(local_38 * local_38 + fVar2 * fVar2 + local_3c * local_3c);
    if (dVar7 == 0.0) {
      local_34 = *(undefined4 *)(param_1 + 0xdc);
      local_3c = local_40;
      local_38 = local_40;
    }
    else {
      fVar1 = (float)(-dVar6 / dVar7);
      local_34 = *(undefined4 *)(param_1 + 0xdc);
      local_40 = fVar2 * fVar1;
      local_38 = local_38 * fVar1;
      local_3c = local_3c * fVar1;
    }
    local_40 = DAT_00969de0 * 0.8 + local_40;
    local_3c = DAT_00969de4 * 0.8 + local_3c;
    dVar6 = (double)MB_randRangeFloat
                              (g_FrameTime * -0.5,g_FrameTime * 2.0);
    local_38 = (float)((double)DAT_00969de8 + dVar6) + local_38;
    uVar5 = MB_randRange(0x5a,0x78);
    SpawnPart_35(&VStack_50,&local_40,2,uVar5);
    local_30 = (longlong)(int)(animationSpeed * 15.5);
    uVar5 = MB_randRange((int)(animationSpeed * 5.5),(int)(animationSpeed * 15.5));
    *(undefined4 *)(iVar3 + 4) = uVar5;
  }
  return;
}


// 0x02288c8 (0xb5c bytes)
/* WARNING: Removing unreachable block (ram,0x00228c34) */
/* Moby 1251 */

void UpdateMoby_1251(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  MobyInstance *pMVar7;
  int iVar8;
  undefined4 uVar9;
  u8 uVar10;
  double dVar11;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  longlong local_40;
  
  puVar3 = (undefined4 *)moby->pVar;
  if (DAT_0096ad94 == 3) {
    if (moby->state == '\x04') {
      LetterBoxOn = 0;
      SceneScreenFade = 0.0;
      Camera_DeactivateMobyDrivenCam(3);
    }
    if (g_heroStateType == 0x13) {
      TransitionMovement(0,1);
    }
  }
  else {
    if (((DAT_0096bd90 != '\0') && (g_gameMode == GAME_MODE_NORMAL)) &&
       (g_heroState != HYDRODISPLACER_WAITING && g_heroState != HYDRODISPLACER_CONNECTING)) {
      M1251_002286e8(moby);
    }
    pMVar7 = g_MobyInstance;
    if (DAT_0096bd90 != '\0') {
      DAT_0096b670 = 1;
      DAT_0096b67c = 0x40133333;
      DAT_0096b674 = DAT_0071f40c * 0.02;
      DAT_0096b678 = DAT_0071f40c * 0.3;
      if (g_heroState != HYDRODISPLACER_WAITING && g_heroState != HYDRODISPLACER_CONNECTING) {
        DAT_0096b720 = 2;
        DAT_0096b7d0 = 3;
        DAT_0096b714 = (1024.0 / moby->scale) * -0.2;
        DAT_0096b724 = DAT_0096b674;
        DAT_0096b728 = DAT_0096b678;
        DAT_0096b7c4 = DAT_0096b714;
        DAT_0096b7d4 = DAT_0096b674;
        DAT_0096b7d8 = DAT_0096b678;
      }
    }
    uVar10 = moby->state;
    if (uVar10 == '\x05') {
      uVar10 = '\x05';
      if ((g_standingOnMoby != 0) && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)) {
        iVar8 = FastDecTimerS32(puVar3);
        if (iVar8 == 0) {
          return;
        }
        uVar10 = moby->state;
      }
      if (uVar10 == '\x04') {
        LetterBoxOn = 0;
        SceneScreenFade = 0.0;
        Camera_DeactivateMobyDrivenCam(3);
      }
      if (g_heroStateType == 0x13) {
        TransitionMovement(0,1);
      }
      moby->state = '\x02';
    }
    else if (uVar10 == '\x04') {
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x155)) {
        LetterBoxOn = 0;
        SceneScreenFade = 0.0;
        Camera_DeactivateMobyDrivenCam(3);
        if (g_heroStateType == 0x13) {
          TransitionMovement(0,1);
        }
      }
      else {
        bVar1 = moby->setByGroup;
        if (bVar1 == 0) {
          Delt(1.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&SceneScreenFade);
          pMVar7 = g_MobyInstance;
          if (0x3f7fffff <
              (int)(FLOAT_ORDER(SceneScreenFade))) {
            iVar8 = **(int **)(g_standingOnMoby + 0x78);
            moby->setByGroup = '\x01';
            Camera_SetMobyDrivenTargetPos(&Cuboids[puVar3[2]].pos.x);
            Camera_SetMobyDrivenTargetRot(&Cuboids[puVar3[2]].rot.x);
            LetterBoxOn = 1;
            if (DAT_0096bd90 == '\0') {
              pMVar7[iVar8].setByGroup = '\b';
              DAT_0096bd90 = '\x01';
            }
            else {
              pMVar7[iVar8].setByGroup = '\x04';
              DAT_0096bd90 = '\0';
            }
          }
        }
        else if (bVar1 < 2) {
          uVar5 = puVar3[4];
          if ((uVar5 == 0) && (0 < (int)SceneScreenFade)) {
            Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&SceneScreenFade
                          );
          }
          else if ((int)(FLOAT_ORDER(uVar5)) <
                   0x3f800000) {
            OrganicDelt
                      (1.0,DAT_0071f418 * 0.666,DAT_0071f418 * 0.666,g_FrameTime * 0.5,
                       (float *)(puVar3 + 4),0x22889c,(float *)(puVar3 + 5));
            iVar8 = puVar3[2];
            iVar6 = puVar3[3];
            local_60 = Cuboids[iVar8].pos.x;
            fVar2 = (float)puVar3[4];
            local_54 = Cuboids[iVar6].pos.w;
            local_60 = fVar2 * (Cuboids[iVar6].pos.x - local_60) + local_60;
            local_5c = fVar2 * (Cuboids[iVar6].pos.y - Cuboids[iVar8].pos.y) + Cuboids[iVar8].pos.y;
            local_58 = fVar2 * (Cuboids[iVar6].pos.z - Cuboids[iVar8].pos.z) + Cuboids[iVar8].pos.z;
            local_44 = 0;
            local_48 = 0.0;
            local_4c = 0.0;
            local_50 = 0.0;
            dVar11 = (double)FastDiffRots
                                       ((double)Cuboids[iVar6].rot.y,(double)Cuboids[iVar8].rot.y);
            local_4c = (float)(dVar11 * (double)(float)puVar3[4]);
            dVar11 = (double)FastWrapRot(Cuboids[puVar3[2]].rot.y,local_4c);
            local_4c = (float)dVar11;
            dVar11 = (double)FastDiffRots
                                       ((double)Cuboids[puVar3[3]].rot.z,
                                        (double)Cuboids[puVar3[2]].rot.z);
            local_48 = (float)(dVar11 * (double)(float)puVar3[4]);
            dVar11 = (double)FastWrapRot(Cuboids[puVar3[2]].rot.z,local_48);
            local_48 = (float)dVar11;
            Camera_SetMobyDrivenTargetPos(&local_60);
            Camera_SetMobyDrivenTargetRot(&local_50);
          }
          else if ((int)(FLOAT_ORDER(SceneScreenFade)) <
                   0x3f800000) {
            Delt(1.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&SceneScreenFade
                          );
          }
          else {
            moby->setByGroup = '\x02';
            LetterBoxOn = 0;
            Camera_DeactivateMobyDrivenCam(3);
          }
        }
        else if (bVar1 < 3) {
          if ((int)SceneScreenFade < 1) {
            moby->state = '\x02';
            TransitionMovement(0x3a,0);
            if (DAT_0096bd90 == '\0') {
              Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x85,0);
            }
            else {
              Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x48,0);
            }
          }
          else {
            Delt(0.0,1.0 / (float)(longlong)(animationSpeed * 15.5),&SceneScreenFade
                          );
          }
        }
      }
    }
    else if (uVar10 == '\x03') {
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x155)) {
        if (g_heroStateType == 0x13) {
          TransitionMovement(0,1);
        }
      }
      else if ((DAT_0096a778 & 2) != 0) {
        piVar4 = *(int **)(g_standingOnMoby + 0x78);
        iVar8 = *piVar4;
        TransitionMovement(0x39,0);
        if (DAT_0096bd90 == '\0') {
          Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x47,0);
        }
        else {
          Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x84,0);
        }
        if (DAT_0096bd90 == '\0') {
          PlayMobySound(0x14,0,g_heroMobyPtr);
        }
        else {
          PlayMobySound(0x15,0,g_heroMobyPtr);
        }
        if ((piVar4[1] == -1) || (piVar4[2] == -1)) {
          moby->state = '\x05';
          uVar9 = FastDoubleToInt((double)(DAT_0076d458 * animationSpeed));
          *puVar3 = uVar9;
          if (DAT_0096bd90 == '\0') {
            pMVar7[iVar8].setByGroup = '\b';
            DAT_0096bd90 = '\x01';
          }
          else {
            pMVar7[iVar8].setByGroup = '\x04';
            DAT_0096bd90 = '\0';
          }
        }
        else {
          moby->state = '\x04';
          moby->setByGroup = '\0';
          puVar3[4] = 0;
          SetCameraPosition(0x951500,0x951510,1,0,0);
          if (DAT_0096bd90 == '\0') {
            puVar3[3] = piVar4[1];
            puVar3[2] = piVar4[2];
          }
          else {
            puVar3[2] = piVar4[1];
            puVar3[3] = piVar4[2];
          }
        }
      }
    }
    else if (uVar10 == '\x02') {
      local_40 = (longlong)(int)(animationSpeed * 8.5);
      iVar8 = PadRingBitsOn(DAT_0096ad80,(int)(animationSpeed * 8.5),(int *)0x0);
      if ((((iVar8 != 0) && ((g_Pad.downButtons & DAT_0096ad80) != 0)) && (g_standingOnMoby != 0)) &&
         ((g_framesNotGrounded == 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x155)))) {
        if ((((DAT_0096bd90 == '\0') &&
             ((g_MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 2U) != 0)) ||
            ((DAT_0096bd90 != '\0' &&
             ((g_MobyInstance[**(int **)(g_standingOnMoby + 0x78)].setByGroup & 1U) != 0)))) &&
           ((g_heroStateType == 0 || (g_heroStateType == 1)))) {
          moby->state = '\x03';
          TransitionMovement(0x38,0);
          if (DAT_0096bd90 == '\0') {
            Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x46,0);
          }
          else {
            Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x83,0);
          }
        }
      }
    }
    else if (uVar10 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
      }
    }
    else if (uVar10 == '\0') {
      PlayMobySound(0,0,moby);
      moby->state = '\x01';
    }
  }
  return;
}


