// game/update/moby1005.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x1833c0-0x183f2c
// shared update function UpdateMoby_{1005_1016}; registered for oClasses 1005, 1016
#include "game/update/moby1005.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x01833c0 (0x14 bytes)
void M1016_001833c0(void)

{
  DAT_0073b7f4 = 0x10000;
  return;
}


// 0x01833f0 (0x314 bytes)
void M1016_001833f0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  undefined8 in_r9;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<56> local_90;
  
  dVar11 = 0.5;
  dVar12 = 0.0;
  iVar6 = 0;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.5) - 0.5;
  lVar9 = uVar7 + 0x20;
  dVar13 = 255.0;
  auVar17 = loadVectorLeftIndexed(0x14,0x1833d8);
  dVar14 = 255.5;
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    pfVar8 = (float *)uVar7;
    dVar10 = (double)(*pfVar8 + pfVar8[4]);
    *pfVar8 = *pfVar8 + pfVar8[4];
    if (dVar10 < dVar13) {
      if (dVar10 <= dVar12) {
        *pfVar8 = (float)(dVar10 + dVar13);
      }
    }
    else {
      *pfVar8 = (float)(dVar10 - dVar13);
    }
    iVar4 = FastDecTimerS32(uVar7 + 0x20);
    fVar1 = pfVar8[8];
    dVar10 = (double)animationSpeed;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar4 != 0) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar16);
      fVar1 = (float)(int)(dVar10 * dVar14);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,lVar9);
      *(undefined4 *)((uint)lVar9 & 0xfffffffc) = uVar2;
    }
    dVar10 = (double)FastIntToDouble((int)(dVar10 * dVar14) - (int)fVar1);
    uVar3 = FastLerpColor
                      (ABS((double)(float)(dVar11 - (double)(float)(dVar10 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
    ;
    uVar5 = FastDoubleToInt((double)*pfVar8);
    SpawnPart_59((double)pfVar8[0xc],local_90,uVar3,uVar5,0x35,1,2,in_r9,0);
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + 4;
    uVar7 = uVar7 + 4;
  } while (iVar6 < 4);
  return;
}


// 0x0183710 (0x120 bytes)
void M1016_00183710(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> in_vs39;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x18) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x183704);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x183704);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x183704);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7.piece<0,4>() = iVar4 + auVar9.piece<0,4>();
    auVar7.piece<8,8>() = in_vs39.piece<8,8>();
    auVar7.piece<4,4>() = iVar10 + auVar9.piece<4,4>();
    auVar16.piece<0,8>() = auVar7.piece<0,8>();
    auVar16.piece<8,4>() = iVar11 + auVar9.piece<8,4>();
    auVar16.piece<12,4>() = iVar12 + auVar9.piece<12,4>();
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8.piece<0,4>();
    iVar10 = iVar10 + auVar8.piece<4,4>();
    iVar11 = iVar11 + auVar8.piece<8,4>();
    iVar12 = iVar12 + auVar8.piece<12,4>();
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x38) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40200000;
  return;
}


// shared update function, registered for oClasses 1005, 1016
// 0x0183880 (0x60c bytes)
// strings: 0096c165: 'None'

/* Moby 1005
   Moby 1016 */

void UpdateMoby_1005(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  lVar6 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  uVar1 = moby->state;
  lVar7 = (ZERO_MASK((0x3ed - (uint)moby->oClass)) & 4U) + 0x16;
  if (uVar1 == '\x05') {
    Delt(0.0,g_FrameTime * 4.0,&SceneScreenFade);
    if (SceneScreenFade == 0.0) {
      memcard_Save(0,-1);
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x04') {
    dVar13 = 1.0;
    dVar11 = 91.19999694824219;
    dVar10 = 270.2099914550781;
    dVar9 = 64.8499984741211;
    OrganicDelt
              (1.0,DAT_0071f418 * 0.15,DAT_0071f418 * 0.15,g_FrameTime * 0.15,
               (float *)((int)pvVar2 + 0x40),0x720000,(float *)((int)pvVar2 + 0x44));
    dVar8 = (double)*(float *)((int)pvVar2 + 0x40);
    dVar12 = 0.0;
    local_60 = (float)(dVar8 * 15.780006408691406 + dVar11);
    local_54 = 0;
    local_5c = (float)(dVar8 * 3.25 + dVar10);
    local_58 = (float)(dVar8 * -2.1999969482421875 + dVar9);
    dVar9 = 0.550000011920929;
    dVar8 = (double)FastDiffRots(0x3fe70a3d80000000,0x3fe19999a0000000);
    dVar8 = (double)FastWrapRot
                              ((float)(dVar8 * (double)*(float *)((int)pvVar2 + 0x40)),(float)dVar9)
    ;
    local_48 = (float)dVar8;
    dVar9 = 0.33000001311302185;
    dVar8 = (double)FastDiffRots(0x3fdb851ec0000000,0x3fd51eb860000000);
    dVar8 = (double)FastWrapRot
                              ((float)(dVar8 * (double)*(float *)((int)pvVar2 + 0x40)),(float)dVar9)
    ;
    local_4c = (float)dVar8;
    dVar9 = 0.07000000029802322;
    dVar8 = (double)FastDiffRots(0x3fb1eb8520000000,0x3fb1eb8520000000);
    dVar8 = (double)FastWrapRot
                              ((float)(dVar8 * (double)*(float *)((int)pvVar2 + 0x40)),(float)dVar9)
    ;
    local_50 = (float)dVar8;
    if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
       (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) {
      SetCameraPosition(&local_60,&local_50,1,0,0);
    }
    Camera_SetMobyDrivenTargetPos(&local_60);
    Camera_SetMobyDrivenTargetRot(&local_50);
    if (((g_Help.state == 0) && (g_Help.message_id == -1)) &&
       (uVar3 = (int)*(uint *)((int)pvVar2 + 0x40) >> 0x1f,
       0x3e4ccccd < (int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x40)) - uVar3))) {
      Delt((float)dVar13,g_FrameTime * 4.0,&SceneScreenFade);
    }
    else {
      Delt((float)dVar12,g_FrameTime * 4.0,&SceneScreenFade);
    }
    if (SceneScreenFade == 1.0) {
      Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,0);
      Camera_DeactivateMobyDrivenCam(0);
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    if (g_gameMode != GAME_MODE_SCENE) {
      if (g_heroType == '\0') {
        MB_UnlockItem(lVar7,1);
      }
      else if ((int)lVar7 == 0x16) {
        MB_UnlockItem(lVar7,0);
        g_toastMsgTimer = 0;
      }
      else {
        MB_UnlockItem(lVar7,0);
      }
      if (moby->oClass == TRESSPASSER) {
        MB_ToastMessage(0x7df,0xffffffffffffffff);
        Help_Kill();
        Help_QueueMessage(STR_USING_THE_LATEST_IN_0x07D9,0x13);
        SceneScreenFade = 1.0;
        moby->state = '\x04';
        Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
      }
      else {
        memcard_Save(0,-1);
        DeleteMoby(moby);
      }
    }
  }
  else if (uVar1 == '\x01') {
    dVar8 = (double)FastWrapRot
                              ((moby->rotation).z,
                               3.1415927 / (float)(longlong)(animationSpeed * 60.5));
    (moby->rotation).z = (float)dVar8;
    M1016_001833f0(lVar6);
    if (((worldUpdateTime == (worldUpdateTime / 10) * 10) &&
        (fVar4 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
        SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.0)) && (ABS((moby->pos).z - g_heroPosition.z) < 2.0)
       ) {
      moby->state = '\x03';
      moby->enabled = '\0';
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | DISABLED;
      if (moby->oClass == TRESSPASSER) {
        mode_sceneInit(4);
      }
      else {
        mode_sceneInit(2);
      }
    }
  }
  else if (uVar1 == '\0') {
    M1016_00183710(lVar6);
    if (CHAR_ARRAY_0096c165[(int)lVar7] == '\0') {
      GetGroundZ(0x3fe0000000000000,lVar6 + 0x10,0);
      (moby->rotation).x = 1.5707964;
      (moby->rotation).y = 3.1415927;
      fVar4 = g_CollOutput.ip.z + 0.2;
      moby->state = '\x01';
      (moby->pos).z = fVar4;
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x0183e8c (0x14 bytes)
void M1016_00183e8c(void)

{
  DAT_0073b864 = 0x10000;
  return;
}


// 0x0183ea0 (0x8c bytes)
MobyInstance * M1016_00183ea0(f32 *param_1)

{
  f32 fVar1;
  MobyModeBit MVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(CAMERA_OBJECT);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    MVar2 = pMVar3->modeBits;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    fVar1 = param_1[2];
    pMVar3->modeBits = MVar2 | (UNK_40|DISABLED);
    (pMVar3->pos).z = fVar1;
    (pMVar3->pos).w = param_1[3];
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


