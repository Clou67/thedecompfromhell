// game/update/moby1118.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1d4010-0x1d4cb0
#include "game/update/moby1118.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby1109.h"
#include "idol/fastfunc.h"

// 0x01d4010 (0x14 bytes)
void M1118_001d4010(void)

{
  DAT_007644cc = 0x10000;
  return;
}


// 0x01d4048 (0x284 bytes)
void M1118_001d4048(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> local_d0;
  undefined4 local_c0 [12];
  longlong local_90;
  
  if (0 < DAT_00764504) {
    iVar6 = 0;
    dVar9 = 8.0;
    dVar10 = 10.0;
    dVar11 = 400000.0;
    dVar12 = 15.5;
    dVar13 = 20.5;
    dVar14 = 25.5;
    dVar15 = 30.5;
    do {
      dVar7 = (double)MB_randRangeFloat((float)dVar9,(float)dVar10);
      local_c0[0] = 0x4f008fff;
      local_c0[1] = 0x4f008fff;
      local_c0[2] = 0x4f007fff;
      dVar8 = (double)(float)(dVar7 * (double)g_FrameTime);
      local_c0[3] = 0x4f006fff;
      local_c0[4] = 0x2fffffff;
      local_c0[5] = 0x2fffffff;
      local_c0[6] = 0x2f005f7f;
      local_c0[7] = 0x2f004f7f;
      local_c0[8] = 0x2f003f7f;
      local_c0[9] = 0x2f00004f;
      local_c0[10] = 0x2f000000;
      local_c0[0xb] = 0x3f000000;
      lVar5 = MB_randInt(dVar7,(double)g_FrameTime,6);
      uVar3 = *(undefined4 *)((int)local_c0 + (int)(lVar5 << 2));
      lVar5 = MB_randInt(6);
      dVar7 = (double)(float)((double)DAT_00764500 * dVar11);
      uVar4 = *(undefined4 *)((int)local_c0 + (int)(lVar5 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar12);
      iVar2 = (int)((double)animationSpeed * dVar13);
      local_90 = (longlong)iVar2;
      MB_randRange(local_90,iVar1,(double)DAT_00764500,iVar1,iVar2);
      iVar1 = (int)((double)animationSpeed * dVar15);
      local_90 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
      SpawnPart_11
                (dVar7,(double)(float)((double)DAT_00764500 * dVar8),param_2,local_d0,uVar3,uVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_00764504);
  }
  return;
}


// 0x01d4308 (0x9a8 bytes)
/* Moby 1118 */

MiscLevelFlags * UpdateMoby_1118(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  Cuboid *pCVar8;
  Cuboid *pCVar9;
  MiscLevelFlags *pMVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  float local_d0 [4];
  float local_c0 [4];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [3];
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  longlong local_60;
  
  bVar1 = moby->state;
  pMVar10 = (MiscLevelFlags *)(uint)bVar1;
  piVar2 = (int *)moby->pVar;
  uVar12 = ZEXT48(piVar2);
  if (bVar1 == 6) {
    OrganicDelt
              (2.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 2.0,(float *)(piVar2 + 0xb),
               0x720000,(float *)(piVar2 + 0xc));
    iVar11 = piVar2[1];
    local_70 = Cuboids[iVar11].pos.x;
    local_64 = Cuboids[iVar11].pos.w;
    local_68 = Cuboids[iVar11].pos.z + 1.0;
    local_6c = Cuboids[iVar11].pos.y - 2.5;
    local_74 = 0;
    local_80[0] = 0.0;
    local_80[2] = g_heroRotation.z;
    local_80[1] = -0.2617994;
    Camera_SetMobyDrivenTargetPos(&local_70);
    Camera_SetMobyDrivenTargetRot(local_80);
    uVar4 = piVar2[0xb] >> 0x1f;
    pMVar10 = (MiscLevelFlags *)((uVar4 >> 1 ^ piVar2[0xb]) - uVar4);
    if (0x3fffffff < (int)pMVar10) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      moby->state = '\a';
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0x38,0x1d42cc);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      pCVar8 = Cuboids + piVar2[1];
      pCVar9 = Cuboids + piVar2[1];
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x44,uVar12);
      *(undefined4 *)((uint)(piVar2 + 0x11) & 0xfffffffc) = uVar5;
      Hero_Warp(&(pCVar8->pos).x,&(pCVar9->rot).x,0,0);
      Camera_DeactivateMobyDrivenCam(3);
      pMVar10 = (MiscLevelFlags *)FUN_001ce0f0(g_MobyInstance + piVar2[0xd]);
    }
  }
  else if (bVar1 == 5) {
    dVar13 = 10.5;
    local_60 = (longlong)(int)(animationSpeed * 10.5);
    if (piVar2[0x10] < (int)(animationSpeed * 10.5)) {
      iVar11 = piVar2[0x10] + 1;
      piVar2[0x10] = iVar11;
      dVar16 = (double)FastIntToDouble(iVar11);
      SceneScreenFade =
           1.0 - (float)(dVar16 / (double)(longlong)((double)animationSpeed * dVar13));
    }
    dVar16 = (double)(float)piVar2[0xb];
    OrganicDelt
              (2.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime * 0.5,(float *)(piVar2 + 0xb),
               0x720000,(float *)(piVar2 + 0xc));
    iVar11 = *piVar2;
    local_b0 = Cuboids[iVar11].pos.x;
    local_ac = Cuboids[iVar11].pos.y;
    local_a4 = Cuboids[iVar11].pos.w;
    local_a8 = (float)piVar2[0xb] * 18.0 + Cuboids[iVar11].pos.z;
    Camera_SetMobyDrivenTargetPos(&local_b0);
    Camera_SetMobyDrivenTargetRot(&Cuboids[*piVar2].rot.x);
    iVar11 = 0;
    dVar16 = (double)((float)(dVar16 * 100.0) * 0.017453292);
    dVar15 = (double)((float)piVar2[0xb] * 100.0 * 0.017453292);
    do {
      iVar3 = *(int *)((int)uVar12 + 8);
      dVar14 = (double)Cuboids[iVar3].rot.z;
      if (dVar14 < dVar15 && dVar16 < dVar14) {
        M1118_001d4048(moby,&Cuboids[iVar3].pos);
        sound_LevelPlay(0,0,moby);
      }
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 4;
    } while (iVar11 < 9);
    uVar4 = piVar2[0xb] >> 0x1f;
    pMVar10 = (MiscLevelFlags *)0x3f89999a;
    if (0x3f899999 < (int)((uVar4 >> 1 ^ piVar2[0xb]) - uVar4)) {
      Hero_Warp(&Cuboids[piVar2[1]].pos.x,&Cuboids[piVar2[1]].rot.x,0x72,0);
      local_60 = (longlong)(int)((double)animationSpeed * dVar13);
      FadeToBlack((int)((double)animationSpeed * dVar13));
      moby->state = '\x06';
      Camera_DeactivateMobyDrivenCam(3);
      iVar11 = piVar2[1];
      local_90 = Cuboids[iVar11].pos.x;
      local_84 = Cuboids[iVar11].pos.w;
      local_88 = Cuboids[iVar11].pos.z + 1.0;
      local_8c = Cuboids[iVar11].pos.y - 2.5;
      local_94 = 0;
      local_a0 = 0;
      local_98 = g_heroRotation.z;
      local_9c = 0xbe860a92;
      local_60 = (longlong)(int)(animationSpeed * 300.5);
      SetCameraPosition(&local_90,&local_a0,2,(int)(animationSpeed * 300.5),0);
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      GameCamera.offset0.amp = 0.3;
      auVar17 = loadVectorLeftIndexed(0x34,0x1d42cc);
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x168,0x9513c0);
      pMVar10 = (MiscLevelFlags *)sound_LevelPlay(0,0,moby);
    }
  }
  else if (bVar1 == 4) {
    iVar11 = FastDecTimerS32(uVar12 + 0x40);
    if (iVar11 != 0) {
      moby->state = '\x05';
      piVar2[0xb] = 0;
      piVar2[0xc] = 0;
      local_60 = (longlong)(int)(animationSpeed * 15.5);
      FadeToBlack((int)(animationSpeed * 15.5));
      local_60 = (longlong)(int)(animationSpeed * 300.5);
      SetCameraPosition(local_d0,local_c0,2,(int)(animationSpeed * 300.5),0);
      Camera_SetCurrentAccel
                (DAT_007644f0,DAT_007644f4,DAT_00ef26c0,DAT_007644f8,DAT_007644fc,DAT_00ef26c4);
      Camera_SetMobyDrivenTargetPos(local_d0);
      Camera_SetMobyDrivenTargetRot(local_c0);
      LetterBoxOn = 1;
    }
    dVar13 = 10.5;
    pMVar10 = (MiscLevelFlags *)(int)(animationSpeed * 10.5);
    local_60 = (longlong)(int)pMVar10;
    if (piVar2[0x10] < (int)pMVar10) {
      dVar16 = (double)FastIntToDouble(piVar2[0x10]);
      pMVar10 = (MiscLevelFlags *)&DAT_001d42cc;
      SceneScreenFade =
           1.0 - (float)(dVar16 / (double)(longlong)((double)animationSpeed * dVar13));
    }
  }
  else if (bVar1 == 3) {
    fVar6 = g_heroPosition.y - (moby->pos).y;
    fVar7 = g_heroPosition.x - (moby->pos).x;
    pMVar10 = (MiscLevelFlags *)&DAT_001d42cc;
    if (((SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 3.7) &&
        (pMVar10 = (MiscLevelFlags *)MB_ShowPersistentMessage(4,0x1783),
        (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) && (pMVar10 != (MiscLevelFlags *)0x0)) {
      PlayMobySound(2,0,moby);
      MB_ClearHelpMessage((MobyInstance *)0x4);
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      moby->state = '\x04';
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0xc,0x1d42cc);
      pMVar10 = (MiscLevelFlags *)0x40;
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x40,uVar12);
      *(undefined4 *)((uint)(piVar2 + 0x10) & 0xfffffffc) = uVar5;
    }
  }
  else if (bVar1 == 2) {
    OrganicDelt
              (1.0,g_FrameTimeSq,g_FrameTimeSq,g_FrameTime,(float *)(piVar2 + 0xb),0x720000,
               (float *)(piVar2 + 0xc));
    dVar16 = (double)((float)piVar2[0xc] * 0.7853982);
    dVar13 = (double)FastWrapRot((moby->rotation).x,(float)piVar2[0xc] * 0.7853982);
    iVar11 = piVar2[0xe];
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)FastDiffRots((double)g_MobyInstance[iVar11].rotation.x,dVar16);
    g_MobyInstance[piVar2[0xe]].rotation.x = (float)dVar13;
    dVar13 = (double)FastDiffRots((double)g_MobyInstance[piVar2[0xf]].rotation.x,dVar16);
    g_MobyInstance[piVar2[0xf]].rotation.x = (float)dVar13;
    UpdateMobyTransform(g_MobyInstance + piVar2[0xe]);
    UpdateMobyTransform(g_MobyInstance + piVar2[0xf]);
    uVar4 = piVar2[0xb] >> 0x1f;
    pMVar10 = (MiscLevelFlags *)((uVar4 >> 1 ^ piVar2[0xb]) - uVar4);
    if (0x3f7fffff < (int)pMVar10) {
      moby->state = '\x03';
      PlayMobySound(1,0,moby);
      pMVar10 = &g_MiscLevelFlags;
      g_MiscLevelFlags.field34_0x22 = 1;
    }
  }
  else if (bVar1 == 0) {
    moby->updateDistance = -1;
    dVar13 = (double)FastDiffRots((double)(moby->rotation).x,0x3fe921fb60000000);
    pMVar10 = (MiscLevelFlags *)0x1;
    (moby->rotation).x = (float)dVar13;
    moby->state = '\x01';
    piVar2[0x12] = -1;
  }
  return pMVar10;
}


