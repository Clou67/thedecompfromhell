// game/update/moby172.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x2ae394-0x2b06a0
#include "game/update/moby172.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/camera6.h"
#include "game/update/moby112.h"
#include "game/update/moby121.h"
#include "game/update/moby179.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x02ae394 (0x14 bytes)
void M172_002ae394(void)

{
  DAT_007b735c = 0x10000;
  return;
}


// 0x02ae3a8 (0x128 bytes)
void M172_002ae3a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x30) = LevelFogNearDist;
  ScreenColorEffectEnabled = 1;
  *(float *)(iVar1 + 0x34) = LevelFogFarDist;
  *(float *)(iVar1 + 0x38) = LevelFogNearIntensity;
  *(float *)(iVar1 + 0x3c) = LevelFogFarIntensity;
  *(u8 *)(iVar1 + 0x40) = levelFog.r;
  *(u8 *)(iVar1 + 0x41) = levelFog.g;
  *(u8 *)(iVar1 + 0x42) = levelFog.b;
  levelFog.r = '@';
  levelFog.g = '`';
  levelFog.b = '@';
  LevelFogNearDist = 0;
  LevelFogFarDist = 131072.0;
  LevelFogNearIntensity = 255.0;
  LevelFogFarIntensity = 0.0;
  g_DebugEnables[2] = 0;
  TfragDrawDist = 147456.0;
  TieDrawDist = 144.0;
  ShrubDrawDist = 144.0;
  DAT_00a390b8 = 0x90;
  PartClipDist = Camera_AddPostUpdFunc;
  STUB_000780f4(0x40,0x60,0x40);
  return;
}


// 0x02ae4d0 (0x100 bytes)
void M172_002ae4d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  LevelFogNearDist = *(undefined4 *)(iVar1 + 0x30);
  LevelFogFarDist = *(float *)(iVar1 + 0x34);
  ScreenColorEffectEnabled = 0;
  LevelFogNearIntensity = *(float *)(iVar1 + 0x38);
  LevelFogFarIntensity = *(float *)(iVar1 + 0x3c);
  levelFog.r = *(u8 *)(iVar1 + 0x40);
  levelFog.g = *(u8 *)(iVar1 + 0x41);
  levelFog.b = *(u8 *)(iVar1 + 0x42);
  g_DebugEnables[2] = 1;
  if (param_2 != 0) {
    TfragDrawDist = 512000.0;
    DAT_00a390b8 = 500;
    TieDrawDist = 720.0;
    ShrubDrawDist = 500.0;
    PartClipDist = 0x1f4000;
  }
  STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
  return;
}


// 0x02ae5d8 (0x408 bytes)
MobyInstance * FUN_002ae5d8(double param_1,double param_2,undefined4 param_3,f32 *param_4)

{
  float fVar1;
  undefined4 *puVar2;
  void *pvVar3;
  MobyInstance *moby;
  int iVar4;
  undefined4 uVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> local_70;
  
  moby = CreateMoby(VISIBOMB_MISSILE);
  if (moby != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)moby->pVar;
    moby->drawDistance = 0xff;
    DAT_00a1bfe8 = 1;
    DAT_0096bcc0 = moby;
    moby->updateDistance = -1;
    moby->enabled = '\x01';
    moby->state = '\x01';
    (moby->rotation).z = (float)param_1;
    (moby->rotation).y = (float)param_2;
    puVar2[9] = &DAT_0096bc40;
    puVar2[10] = &DAT_0096bc80;
    *puVar2 = param_3;
    (moby->pos).x = *param_4;
    (moby->pos).y = param_4[1];
    (moby->pos).z = param_4[2];
    (moby->pos).w = param_4[3];
    puVar2[2] = 0;
    puVar2[3] = 0;
    if ((g_standingOnMoby == 0) || (iVar4 = MB_GetPlatformParent(), iVar4 == 0)) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = SQRT(DAT_00969de8 * DAT_00969de8 +
                   DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4);
    }
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    puVar2[1] = fVar1;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar6 = loadVectorLeftIndexed(4,0x2ae5d0);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x10,ZEXT48(puVar2)
                      );
    *(undefined4 *)((uint)(puVar2 + 4) & 0xfffffffc) = uVar5;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[5] = 0;
    puVar2[0x11] = 0x3ecccccd;
    pvVar3 = moby->pVar;
    ScreenColorEffectEnabled = 1;
    *(undefined4 *)((int)pvVar3 + 0x30) = LevelFogNearDist;
    *(float *)((int)pvVar3 + 0x34) = LevelFogFarDist;
    *(float *)((int)pvVar3 + 0x38) = LevelFogNearIntensity;
    *(float *)((int)pvVar3 + 0x3c) = LevelFogFarIntensity;
    *(u8 *)((int)pvVar3 + 0x40) = levelFog.r;
    *(u8 *)((int)pvVar3 + 0x41) = levelFog.g;
    *(u8 *)((int)pvVar3 + 0x42) = levelFog.b;
    levelFog.r = '@';
    levelFog.g = '`';
    levelFog.b = '@';
    LevelFogNearDist = 0;
    LevelFogFarDist = 131072.0;
    LevelFogNearIntensity = 255.0;
    LevelFogFarIntensity = 0.0;
    g_DebugEnables[2] = 0;
    TfragDrawDist = 147456.0;
    TieDrawDist = 144.0;
    ShrubDrawDist = 144.0;
    DAT_00a390b8 = 0x90;
    PartClipDist = Camera_AddPostUpdFunc;
    STUB_000780f4(0x40,0x60,0x40);
    UpdateMobyTransform(moby);
    uVar5 = Cam6_Activate(moby);
    puVar2[5] = uVar5;
    TransitionMovement(0x1d,1);
    FastMemSet(puVar2[9],0,0x40);
    FastMemSet(puVar2[10],0,0x40);
    AttachManipulator(moby,0,puVar2[9]);
    AttachManipulator(moby,1,puVar2[10]);
    uVar5 = FUN_002b9870(moby);
    puVar2[8] = uVar5;
    puVar2[0x12] = DAT_007b7384 * g_FrameTime;
    MB_CopyHeroLights(moby);
    iVar4 = PlayMobySound(0,4,moby);
    puVar2[0xb] = iVar4;
    iVar4 = CollLine(local_70,param_4,0,g_heroMobyPtr,0);
    if (iVar4 != 0) {
      moby->setByGroup = '\x01';
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
    }
    OcclMode = 1;
    MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
  }
  return moby;
}


// 0x02ae9e0 (0x17c bytes)
void FUN_002ae9e0(MobyInstance *param_1,int *param_2)

{
  void *pvVar1;
  
  if (*(int *)(*param_2 + 0x78) != 0) {
    *(undefined4 *)(*(int *)(*param_2 + 0x78) + 4) = 0;
  }
  DAT_0096bcc0 = 0;
  ____Cam6_RotMath(param_2[5]);
  param_2[5] = 0;
  TransitionMovement(0,1);
  pvVar1 = param_1->pVar;
  ScreenColorEffectEnabled = 0;
  LevelFogNearDist = *(undefined4 *)((int)pvVar1 + 0x30);
  LevelFogFarDist = *(float *)((int)pvVar1 + 0x34);
  LevelFogNearIntensity = *(float *)((int)pvVar1 + 0x38);
  LevelFogFarIntensity = *(float *)((int)pvVar1 + 0x3c);
  levelFog.r = *(u8 *)((int)pvVar1 + 0x40);
  levelFog.g = *(u8 *)((int)pvVar1 + 0x41);
  levelFog.b = *(u8 *)((int)pvVar1 + 0x42);
  g_DebugEnables[2] = 1;
  TfragDrawDist = 512000.0;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  DAT_00a390b8 = 500;
  PartClipDist = 0x1f4000;
  STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
  Help_Resume();
  DeleteMoby(param_1);
  GameCamera.camUnderWater = 0;
  return;
}


// 0x02aeb68 (0x1bc bytes)
void M172_002aeb68(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  MobyInstance *pMoby;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  Vec4 VStack_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  GPiece<64> auStack_c0;
  GPiece<72> auStack_80;
  
  fVar1 = DAT_0071f408;
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x20) + 0x78);
    dVar5 = 0.10999999940395355;
    uVar3 = (int)*(uint *)(iVar2 + 0xc) >> 0x1f;
    dVar6 = 0.0;
    iVar4 = (uVar3 >> 1 ^ *(uint *)(iVar2 + 0xc)) - uVar3;
    if (iVar4 < 0x3ee66667) {
      if (iVar4 < 0x3ee66666) {
        *(float *)(iVar2 + 0xc) = DAT_0071f408 * 0.05 + *(float *)(iVar2 + 0xc);
      }
    }
    else {
      *(float *)(iVar2 + 0xc) = -(DAT_0071f408 * 0.05 - *(float *)(iVar2 + 0xc));
    }
    iVar2 = *(int *)(param_2 + 0x20);
    *(float *)(iVar2 + 0x48) = fVar1 * -1.5707964;
    FastEulerToMtx1(auStack_c0,iVar2 + 0x40);
    FastMtxCopyNoTranslate(auStack_80,param_1 + 0xc0);
    FastVecMtx4Mul(&VStack_100,auStack_80,auStack_c0);
    FastApplyTransform((Vec4 *)(*(int *)(param_2 + 0x20) + 0xc0),&VStack_100);
    pMoby = *(MobyInstance **)(param_2 + 0x20);
    (pMoby->pos).x =
         (float)((double)local_d0 * dVar6 + (double)(float)((double)local_f0 * dVar5)) +
         *(float *)(param_1 + 0x10);
    (pMoby->pos).y =
         (float)((double)local_cc * dVar6 + (double)(float)((double)local_ec * dVar5)) +
         *(float *)(param_1 + 0x14);
    fVar1 = *(float *)(param_1 + 0x18);
    (pMoby->pos).w = (float)((double)local_c4 * dVar6 + (double)(float)((double)local_e4 * dVar5));
    (pMoby->pos).z =
         (float)((double)local_c8 * dVar6 + (double)(float)((double)local_e8 * dVar5)) + fVar1;
    PostUpdateMobyLockTransform(pMoby);
  }
  return;
}


// 0x02aed78 (0x570 bytes)
void M172_002aed78(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [12];
  longlong local_a0;
  
  uVar15 = 0x3fd3333340000000;
  uVar17 = 0x3ff028f5c0000000;
  uVar19 = 0x3fa99999a0000000;
  uVar22 = 0x40e86a0000000000;
  SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,local_f0);
  iVar9 = 0;
  uVar24 = 0x3ff11eb860000000;
  do {
    SpawnPart_13(uVar15,uVar17,uVar24,uVar19,uVar22,local_f0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  if (param_2 != '\0') {
    fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
    fVar6 = GameCamera.posX - *(float *)(param_1 + 0x10);
    fVar7 = GameCamera.posZ - *(float *)(param_1 + 0x18);
    iVar9 = 10;
    dVar25 = 0.0;
    dVar23 = 8.0;
    dVar20 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    if (dVar20 < 8.0) {
      iVar9 = FastDoubleToInt(dVar20);
      iVar9 = iVar9 + 2;
    }
    iVar10 = 0;
    if (dVar20 - 7.0 < 0.0) {
      dVar25 = (double)(float)(7.0 - dVar20);
    }
    if (0 < iVar9) {
      dVar20 = 10.0;
      uVar15 = 0x41186a0000000000;
      dVar14 = 15.5;
      dVar16 = 20.5;
      dVar18 = 25.5;
      dVar21 = 30.5;
      do {
        dVar11 = (double)MB_randRangeFloat((float)dVar23,(float)dVar20);
        dVar12 = (double)g_FrameTime;
        local_d0[0] = 0x4f008fff;
        local_d0[1] = 0x4f008fff;
        local_d0[3] = 0x4f006fff;
        local_d0[4] = 0x2fffffff;
        local_d0[2] = 0x4f007fff;
        local_d0[5] = 0x2fffffff;
        dVar13 = (double)(float)(dVar11 * dVar12 - (double)(float)(dVar12 * dVar25));
        local_d0[6] = 0x2f005f7f;
        local_d0[7] = 0x2f004f7f;
        local_d0[8] = 0x2f003f7f;
        local_d0[9] = 0x2f00004f;
        local_d0[10] = 0x2f000000;
        local_d0[0xb] = 0x3f000000;
        lVar8 = MB_randInt(dVar11,dVar12,(double)(float)(dVar12 * dVar25),6);
        uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2));
        lVar8 = MB_randInt(6);
        uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar16);
        local_a0 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
        iVar1 = (int)((double)animationSpeed * dVar21);
        local_a0 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar18),iVar1);
        SpawnPart_11(uVar15,dVar13,param_1 + 0x10,local_e0,uVar2,uVar3);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    uVar4 = (int)g_FrameLoad >> 0x1f;
    uVar15 = 0x4008000000000000;
    uVar17 = 0x4000000000000000;
    if ((int)((uVar4 >> 1 ^ g_FrameLoad) - uVar4) < 0x3f733333) {
      local_a0 = (longlong)(int)(animationSpeed * 15.5);
      FUN_001d4d88(0x4008000000000000,param_1,param_1 + 0x10,local_e0,uVar4,
                   (int)(animationSpeed * 15.5),0x7f,0x7f,0x7f);
      local_a0 = (longlong)(int)(animationSpeed * 24.5);
      FUN_001d4d88(uVar17,param_1,param_1 + 0x10,local_e0);
    }
    iVar9 = param_1 + 0x10;
    local_a0 = (longlong)(int)(animationSpeed * 20.5);
    FUN_001d4d88(uVar15,param_1,iVar9,local_e0,0x30,(int)(animationSpeed * 20.5),0x7f,0x40,0);
    local_a0 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(uVar17,param_1,iVar9,local_e0,0x40,(int)(animationSpeed * 27.5),0x60,0x10,0);
    local_a0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88(0x3ff0000000000000,param_1,iVar9,local_e0,0x20,(int)(animationSpeed * 29.5),0x20,0,
                 0);
  }
  return;
}


// 0x02af360 (0x1340 bytes)
// inlined: FastAtan2 @0x2afae8, FastRSqrt @0x2afeb4
/* Moby 172 */

void UpdateMoby_172(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar16;
  longlong lVar15;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f26;
  ulonglong in_f27;
  undefined8 uVar30;
  ulonglong in_f28;
  double dVar31;
  undefined8 uVar32;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar33;
  undefined8 uVar34;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  float fVar45;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar22 = uVar13 - 0x1c0;
  puVar12 = (ulonglong *)lVar22;
  *puVar12 = uVar13;
  puVar12[0x3a] = in_LR;
  puVar12[0x32] = in_f26;
  puVar12[0x33] = in_f27;
  puVar12[0x34] = in_f28;
  puVar12[0x35] = in_f29;
  puVar12[0x36] = in_f30;
  puVar12[0x37] = in_f31;
  puVar12[0x30] = unaff_r30;
  puVar12[0x2e] = unaff_r28;
  puVar12[0x31] = unaff_r31;
  puVar12[0x2d] = unaff_r27;
  dVar35 = 0.0;
  *(undefined4 *)(puVar12 + 0x1a) = 0;
  *(undefined4 *)((int)puVar12 + 0xd4) = 0;
  *(undefined4 *)(puVar12 + 0x1b) = 0;
  *(undefined4 *)((int)puVar12 + 0xdc) = 0;
  puVar12[0x2f] = unaff_r29;
  piVar9 = (int *)moby->pVar;
  uVar23 = ZEXT48(piVar9);
  fVar2 = g_FrameTime * 8.0;
  OcclMode = 1;
  LevelFogMode = 1;
  puVar12[0x2c] = unaff_r26;
  *(float *)(puVar12 + 0x1b) = fVar2;
  Help_Suspend();
  DAT_00a1bfe8 = 1;
  MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
  iVar17 = piVar9[4] + -1;
  piVar9[4] = iVar17;
  fVar2 = g_FrameTime;
  puVar12[0x29] = (longlong)(int)(animationSpeed * 100.5);
  fVar1 = DAT_007b7384;
  if ((((((((-*(int *)((int)puVar12 + 0x14c) < iVar17) &&
           (g_heroState != DYING_GROUNDED && g_heroState != TAKING_DAMAGE)) &&
          (g_heroState != MOVEMENT_LOCKED)) &&
         ((g_heroStateType != 4 && g_heroStateType != 2 && (g_heroStateType != 3))
         )) && (g_heroStateType < 0xd)) &&
       (((g_heroStateType != 7 && (g_heroStateType != 10)) &&
        ((g_heroStateType != 0x10 &&
         (((g_heroStateType != 5 && (g_heroState != MOVEMENT_LOCKED)) &&
          (g_heroState != ANIM_TARGET_WALK)))))))) &&
      ((g_heroState != TURRET_PLANE_UI && (g_framesGroundedCnt != 0)))) &&
     ((g_standingOnMoby == 0 ||
      ((*(short *)(g_standingOnMoby + 0xa6) != 0x13e &&
       (*(short *)(g_standingOnMoby + 0xa6) != 0x46f)))))) {
    if (iVar17 < 0) {
      if (piVar9[5] != 0) {
        ____Cam6_SetupFromMoby(piVar9[5],lVar14);
      }
      pvVar10 = moby->pVar;
      ScreenColorEffectEnabled = 0;
      LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
      LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
      LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
      LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
      levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
      levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
      levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
      g_DebugEnables[2] = 1;
      STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
      M172_002aeb68(lVar14,uVar23);
    }
    else {
      fVar45 = DAT_007b7384;
      if ((g_Pad.downButtons & CROSS) != 0) {
        fVar45 = DAT_007b7388;
      }
      fVar45 = (fVar45 * fVar2 - (float)piVar9[0x12]) * DAT_007b738c + (float)piVar9[0x12];
      piVar9[0x12] = (int)fVar45;
      fVar3 = (fVar45 - (float)piVar9[1]) * DAT_007b7390 + (float)piVar9[1];
      piVar9[1] = (int)fVar3;
      fVar5 = DAT_007b7388;
      if (DAT_007b7388 * fVar2 < fVar3) {
        piVar9[1] = (int)(DAT_007b7388 * fVar2);
      }
      iVar17 = piVar9[0xb];
      iVar16 = FastDoubleToInt
                         ((double)((fVar45 - (fVar1 * fVar2) / (fVar5 * fVar2 - fVar1 * fVar2)) *
                                  DAT_007b7380));
      sound_SetPitch(iVar17,iVar16);
      fVar2 = animationSpeed;
      iVar17 = piVar9[4];
      if (0 < iVar17) {
        puVar12[0x29] = (longlong)(int)(animationSpeed * 3000.5);
        puVar12[0x29] = (longlong)(int)(fVar2 * 5.5);
        fVar2 = DAT_0071f408;
        if (iVar17 < *(int *)((int)puVar12 + 0x14c) - *(int *)((int)puVar12 + 0x14c)) {
          fVar3 = DAT_0071f408 * 0.1;
          fVar1 = DAT_0096ba04 - (float)piVar9[7];
          fVar45 = fVar3 * (g_heroPadStick - (float)piVar9[6]) + (float)piVar9[6];
          piVar9[6] = (int)fVar45;
          piVar9[7] = (int)(fVar3 * fVar1 + (float)piVar9[7]);
          fVar1 = (moby->rotation).x;
          (moby->rotation).x = fVar2 * 0.06 * (fVar45 - fVar1) + fVar1;
          dVar33 = 0.012271846644580364;
          dVar26 = (double)FastDiffRots
                                     ((double)(moby->rotation).y,
                                      (double)(DAT_0071f408 * 0.012271847 * (float)piVar9[7]));
          (moby->rotation).y = (float)dVar26;
          if (dVar26 < 1.5707963705062866) {
            if (dVar26 <= -1.5707963705062866) {
              (moby->rotation).y = -1.5697963;
            }
          }
          else {
            (moby->rotation).y = 1.5697963;
          }
          dVar26 = (double)FastDiffRots
                                     ((double)(moby->rotation).z,
                                      (double)((float)((double)DAT_0071f408 * dVar33) *
                                              (float)piVar9[6]));
          (moby->rotation).z = (float)dVar26;
          MB_RegisterLameShadow(0.2,moby);
        }
      }
      MB_SphericalToVector
                ((float)piVar9[1],(moby->rotation).z,-(moby->rotation).y,(float *)(puVar12 + 0x1c));
      fVar2 = (moby->pos).x;
      fVar1 = (moby->pos).y;
      fVar45 = (moby->pos).z;
      fVar3 = *(float *)((int)puVar12 + 0xe4);
      *(float *)(puVar12 + 0x18) = fVar2;
      fVar5 = fVar45 + *(float *)(puVar12 + 0x1d);
      *(float *)((int)puVar12 + 0xc4) = fVar1;
      fVar4 = (moby->pos).w;
      *(float *)(puVar12 + 0x19) = fVar45;
      *(f32 *)((int)puVar12 + 0xcc) = fVar4;
      (moby->pos).x = fVar2 + *(float *)(puVar12 + 0x1c);
      (moby->pos).y = fVar1 + fVar3;
      (moby->pos).z = fVar5;
      fVar2 = animationSpeed;
      dVar33 = 3000.5;
      iVar17 = piVar9[4];
      puVar12[0x29] = (longlong)(int)(animationSpeed * 3000.5);
      dVar26 = 60.5;
      puVar12[0x29] = (longlong)(int)(fVar2 * 60.5);
      if (*(int *)((int)puVar12 + 0x14c) - *(int *)((int)puVar12 + 0x14c) < iVar17) {
        dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar14 + 0x10,0);
        fVar5 = (moby->pos).z;
        if ((fVar5 < (float)(dVar27 + (double)(float)piVar9[0x11])) &&
           ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
            (((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0 &&
             ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)))))) {
          fVar45 = Delt((float)(dVar27 + (double)(float)piVar9[0x11]),
                                  g_FrameTime * 6.0,&(moby->pos).z);
          uVar24 = piVar9[1];
          fVar2 = (float)piVar9[1];
          *(float *)(puVar12 + 0x24) = fVar45;
          dVar29 = ABS((double)fVar2);
          *(float *)((int)puVar12 + 0x124) = (float)(dVar29 - ABS((double)fVar45));
          fVar1 = g_FrameTime;
          fVar5 = (moby->pos).z;
          fVar2 = (moby->rotation).y;
          uVar20 = (ulonglong)(uVar24 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1d) & 4;
          dVar27 = dVar29;
          if ((double)*(float *)((int)puVar12 + 0x124) - dVar35 < 0.0) {
            dVar27 = ABS((double)fVar45);
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
          fVar45 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar28 = ABS((double)*(float *)(puVar12 + 0x24));
          if ((double)*(float *)((int)puVar12 + 0x124) - dVar35 < 0.0) {
            dVar28 = dVar29;
          }
          dVar29 = dVar35;
          if (dVar35 < dVar27) {
            lVar15 = uVar13 - 0x1b0;
            lVar18 = uVar13 - 0x98;
            lVar21 = uVar13 - 0x88;
            lVar25 = 2;
            fVar6 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar12 + 0x134) = fVar6;
            *(float *)((int)puVar12 + 300) = fVar6;
            *(float *)(puVar12 + 0x26) = fVar6;
            *(float *)(puVar12 + 0x25) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar7;
            *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar6;
            *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x118) * fVar6 * fVar6;
              iVar17 = (int)lVar18;
              lVar15 = lVar15 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
              lVar21 = lVar21 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar25 = 4;
            lVar21 = uVar13 - 0x98;
            pfVar19 = (float *)&DAT_007358e0;
            lVar15 = lVar22;
            lVar18 = lVar21;
            do {
              fVar6 = *pfVar19;
              fVar7 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x128) * fVar6;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
              lVar18 = lVar18 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar15 = 2;
            dVar27 = dVar35;
            do {
              iVar17 = (int)lVar22;
              lVar22 = lVar22 + 0x10;
              iVar16 = (int)lVar21;
              lVar21 = lVar21 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0x128)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar45);
          }
          if ((double)(fVar1 * 1.5707964) - dVar29 < 0.0) {
            dVar29 = (double)(fVar1 * 1.5707964);
          }
          (moby->rotation).y = (float)((double)fVar2 - dVar29);
        }
      }
      fVar4 = (moby->pos).x;
      uVar24 = (int)fVar4 >> 0x1f;
      iVar17 = (uVar24 >> 1 ^ (uint)fVar4) - uVar24;
      if ((((iVar17 < 0x40900000) || (0x447ea000 < iVar17)) ||
          (fVar4 = (moby->pos).y, uVar24 = (int)fVar4 >> 0x1f,
          iVar17 = (uVar24 >> 1 ^ (uint)fVar4) - uVar24, iVar17 < 0x40900000)) ||
         (((0x447ea000 < iVar17 || (fVar5 < 4.5)) || (1018.5 < fVar5)))) {
        if (*(int *)(*piVar9 + 0x78) != 0) {
          *(undefined4 *)(*(int *)(*piVar9 + 0x78) + 4) = 0;
        }
        DAT_0096bcc0 = 0;
        ____Cam6_RotMath(piVar9[5]);
        piVar9[5] = 0;
        TransitionMovement(0,1);
        pvVar10 = moby->pVar;
        ScreenColorEffectEnabled = 0;
        LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
        LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
        LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
        LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
        levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
        levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
        levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
        g_DebugEnables[2] = 1;
        TfragDrawDist = 512000.0;
        TieDrawDist = 720.0;
        ShrubDrawDist = 500.0;
        DAT_00a390b8 = 500;
        PartClipDist = 0x1f4000;
        STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
        Help_Resume();
        DeleteMoby(moby);
        GameCamera.camUnderWater = 0;
      }
      else {
        M172_002aeb68(lVar14,uVar23);
        dVar29 = 0.3333333432674408;
        dVar31 = 0.5;
        dVar27 = 1.100000023841858;
        FastQuaternionToEuler
                  ((double)((((float)piVar9[6] - (moby->rotation).x) * 1.1 +
                            (float)piVar9[7] * 0.5 + ABS((float)piVar9[6] * 0.33333334)) * -0.7),
                   (ulonglong)(uint)piVar9[9] + 0x10,1);
        FastQuaternionToEuler
                  ((double)((float)((double)(float)((double)(float)piVar9[6] -
                                                   (double)(moby->rotation).x) * dVar27 -
                                   (double)(float)((double)(float)piVar9[7] * dVar31 +
                                                  ABS((double)(float)((double)(float)piVar9[6] *
                                                                     dVar29)))) * 0.7),
                   (ulonglong)(uint)piVar9[10] + 0x10,1);
        fVar2 = *(float *)((int)puVar12 + 0xe4);
        fVar1 = *(float *)(puVar12 + 0x1c);
        *(MobyInstance **)(puVar12 + 0x20) = moby;
        *(undefined **)((int)puVar12 + 0x104) = &DAT_00830000;
        dVar28 = (double)(fVar1 * fVar1 + fVar2 * fVar2);
        uVar30 = 0x4018000000000000;
        *(undefined4 *)((int)puVar12 + 0x10c) = 0x40c00000;
        *(undefined4 *)(puVar12 + 0x22) = 1;
        MVar8 = moby->oClass;
        dVar27 = dVar35;
        dVar29 = dVar35;
        if ((double)(float)SQRT(dVar28) != dVar35) {
          dVar27 = 1.0 / SQRT(dVar28);
          dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar27) * dVar27 - 1.0)
                                   * (double)(float)(dVar31 * dVar27) + dVar27);
          dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar27) * dVar27 - 1.0)
                                   * (double)(float)(dVar31 * dVar27) + dVar27);
          fVar45 = (float)(-(double)(float)((double)(float)(dVar28 * dVar27) * dVar27 - 1.0) *
                           (double)(float)(dVar31 * dVar27) + dVar27);
          dVar29 = (double)(fVar1 * fVar45);
          dVar27 = (double)(fVar2 * fVar45);
        }
        dVar28 = (double)animationSpeed;
        *(float *)(puVar12 + 0x1e) = (float)dVar29;
        *(float *)((int)puVar12 + 0xf4) = (float)dVar27;
        uVar32 = 0x3ff0000000000000;
        *(undefined1 *)(puVar12 + 0x21) = 3;
        *(undefined1 *)((int)puVar12 + 0x109) = 2;
        iVar17 = piVar9[4];
        *(undefined4 *)(puVar12 + 0x1f) = 0x3f800000;
        *(undefined4 *)((int)puVar12 + 0xfc) = 0x45afdf66;
        *(MOBY_OCLASSES *)((int)puVar12 + 0x10a) = MVar8;
        uVar20 = ZEXT48(g_heroMobyPtr);
        lVar22 = lVar14 + 0x10;
        puVar12[0x29] = (longlong)(int)(dVar28 * dVar33);
        iVar17 = CollLine(uVar13 - 0x100,lVar22,0,
                                    lVar14 + ((longlong)(*(int *)((int)puVar12 + 0x14c) + -0x28) -
                                              (longlong)iVar17 >> 0x3f & uVar20 - lVar14),
                                    uVar13 - 0xd0);
        if (iVar17 == 0) {
          uVar24 = 0;
          if (piVar9[4] == 0) {
            if (*(int *)(*piVar9 + 0x78) != 0) {
              *(undefined4 *)(*(int *)(*piVar9 + 0x78) + 4) = 0;
            }
            DAT_0096bcc0 = 0;
            ____Cam6_RotMath(piVar9[5]);
            piVar9[5] = 0;
            TransitionMovement(0,1);
            pvVar10 = moby->pVar;
            ScreenColorEffectEnabled = 0;
            LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
            LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
            LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
            LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
            levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
            levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
            levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
            g_DebugEnables[2] = 1;
            TfragDrawDist = 512000.0;
            TieDrawDist = 720.0;
            ShrubDrawDist = 500.0;
            DAT_00a390b8 = 500;
            PartClipDist = 0x1f4000;
            STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2
                               );
            Help_Resume();
            DeleteMoby(moby);
            GameCamera.camUnderWater = 0;
            return;
          }
        }
        else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
          uVar24 = 0;
          if (0 < g_CollOutput.poly) {
            moby->setByGroup = '\x01';
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            (moby->pos).z = g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            FastVecNormalize(uVar13 - 0xf0,uVar13 - 0xe0,0xa10980);
            fVar1 = *(float *)((int)puVar12 + 0xd4);
            fVar45 = *(float *)(puVar12 + 0x1a);
            fVar3 = *(float *)(puVar12 + 0x1b);
            iVar17 = piVar9[0xb];
            dVar29 = (double)SQRT(fVar3 * fVar3 + fVar45 * fVar45 + fVar1 * fVar1);
            fVar2 = (float)((double)(g_FrameTime * 2.0) / dVar29);
            dVar27 = dVar35;
            if (dVar35 - dVar29 < 0.0) {
              dVar27 = (double)(fVar45 * fVar2);
            }
            dVar28 = dVar35;
            if (dVar35 - dVar29 < 0.0) {
              dVar28 = (double)(fVar1 * fVar2);
            }
            dVar31 = dVar35;
            if (dVar35 - dVar29 < 0.0) {
              dVar31 = (double)(fVar3 * fVar2);
            }
            if (dVar29 - dVar35 < 0.0) {
              dVar27 = (double)(fVar45 * fVar2);
            }
            if (dVar29 - dVar35 < 0.0) {
              dVar28 = (double)(fVar1 * fVar2);
            }
            if (dVar29 - dVar35 < 0.0) {
              dVar31 = (double)(fVar3 * fVar2);
            }
            *(float *)(puVar12 + 0x1a) = (float)dVar27;
            *(float *)((int)puVar12 + 0xd4) = (float)dVar28;
            *(float *)(puVar12 + 0x1b) = (float)dVar31;
            if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == moby)) &&
               (g_SoundChannels[iVar17].state != '\0')) {
              sound_Kill(iVar17);
            }
            uVar24 = 0;
            piVar9[0xb] = -1;
          }
        }
        else {
          iVar17 = (int)g_heroMobyPtr - (int)g_CollOutput.pMoby;
          moby->setByGroup = '\x02';
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          uVar24 = (uint)(ZERO_MASK(iVar17)) & 1;
          (moby->pos).w = g_CollOutput.ip.w;
          FastVecNormalize(uVar13 - 0xf0,uVar13 - 0xe0,0xa10980);
          fVar1 = *(float *)((int)puVar12 + 0xd4);
          fVar45 = *(float *)(puVar12 + 0x1a);
          fVar3 = *(float *)(puVar12 + 0x1b);
          iVar17 = piVar9[0xb];
          dVar29 = (double)SQRT(fVar3 * fVar3 + fVar45 * fVar45 + fVar1 * fVar1);
          fVar2 = (float)((double)(g_FrameTime * 2.0) / dVar29);
          dVar27 = dVar35;
          if (dVar35 - dVar29 < 0.0) {
            dVar27 = (double)(fVar45 * fVar2);
          }
          dVar28 = dVar35;
          if (dVar35 - dVar29 < 0.0) {
            dVar28 = (double)(fVar1 * fVar2);
          }
          dVar31 = dVar35;
          if (dVar35 - dVar29 < 0.0) {
            dVar31 = (double)(fVar3 * fVar2);
          }
          if (dVar29 - dVar35 < 0.0) {
            dVar27 = (double)(fVar45 * fVar2);
          }
          if (dVar29 - dVar35 < 0.0) {
            dVar28 = (double)(fVar1 * fVar2);
          }
          if (dVar29 - dVar35 < 0.0) {
            dVar31 = (double)(fVar3 * fVar2);
          }
          *(float *)(puVar12 + 0x1a) = (float)dVar27;
          *(float *)((int)puVar12 + 0xd4) = (float)dVar28;
          *(float *)(puVar12 + 0x1b) = (float)dVar31;
          if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == moby)) &&
             (g_SoundChannels[iVar17].state != '\0')) {
            sound_Kill(iVar17);
          }
          piVar9[0xb] = -1;
        }
        dVar27 = (double)animationSpeed;
        iVar17 = piVar9[4];
        puVar12[0x29] = (longlong)(int)(dVar27 * dVar33);
        puVar12[0x29] = (longlong)(int)(dVar27 * dVar26);
        if ((iVar17 < *(int *)((int)puVar12 + 0x14c) - *(int *)((int)puVar12 + 0x14c)) &&
           ((g_Pad.buttonsPressedThisFrame & CIRCLE) != 0)) {
          moby->setByGroup = '\x01';
          iVar17 = piVar9[0xb];
          if ((iVar17 != -1) &&
             ((g_SoundChannels[iVar17].pMoby == moby &&
              (g_SoundChannels[iVar17].state != '\0')))) {
            sound_Kill(iVar17);
          }
          piVar9[0xb] = -1;
        }
        if (moby->setByGroup != '\0') {
          if (uVar24 == 0) {
            uVar34 = 0x4010000000000000;
            puVar12[0x12] = 1;
            puVar12[0x14] = 1;
            puVar12[0x15] = 1;
            puVar12[0x16] = 0xffffffffffffffff;
            puVar12[0x17] = 0;
            MB_genericExplosion
                      (dVar35,dVar35,0x4010000000000000,0x4000000000000000,dVar35,uVar32,
                       0x4034000000000000,lVar14,uVar13 - 0xf0,0,0,0xffffffffffffffff,10,3,0x10);
            uVar34 = CollMobySphere(uVar34,lVar22);
            fVar4 = (moby->pos).z;
            *(f32 *)(puVar12 + 8) = (moby->pos).x;
            *(f32 *)(puVar12 + 9) = fVar4;
            fVar4 = (moby->pos).w;
            *(f32 *)((int)puVar12 + 0x44) = (moby->pos).y;
            *(f32 *)((int)puVar12 + 0x4c) = fVar4;
            puVar12[0xf] = 3;
            puVar12[0x10] = 2;
            MB_DamageMobyList
                      (uVar30,uVar32,uVar32,lVar14,3,puVar12[8],puVar12[9],&DAT_00a14a00,uVar34,0,
                       &DAT_00830000);
          }
          fVar2 = DAT_0071f408;
          auVar39 = ZEXT416(0xffffffff);
          auVar36 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          moby->modeBits = moby->modeBits | DISABLED;
          auVar39 = ZEXT416(0xffffffff);
          auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
          iVar17 = 0;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          piVar9[1] = (int)(fVar2 * 0.02);
          auVar41 = loadVectorLeftIndexed(0x10,uVar23);
          auVar42 = loadVectorRightIndexed(0x20,uVar23);
          piVar9[6] = (int)((float)piVar9[6] * 0.01);
          auVar39 = loadVectorLeftIndexed(0xc,0x2af2e8);
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar36 = loadVectorLeftIndexed(0x6c,0x2af2e8);
          auVar44 = loadVectorLeftIndexed(8,0x2af2e8);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar37);
          auVar39 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar38);
          dVar29 = (double)(moby->pos).x;
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          dVar27 = (double)(moby->pos).y;
          auVar39 = ZEXT416(0);
          auVar36 = ZEXT416(0xffffffff);
          dVar26 = (double)(moby->pos).w;
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar37 = vectorSubtractUnsignedWordModulo(auVar37,auVar38);
          auVar38 = vectorSubtractUnsignedWordModulo
                              (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40
                              );
          auVar39 = vectorCompareGreaterThanSignedWord(auVar41 | auVar42,auVar37);
          auVar39 = vectorConditionalSelect
                              (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar38
                               ,auVar39);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x10,
                              uVar23);
          *(undefined4 *)((uint)(piVar9 + 4) & 0xfffffffc) = uVar11;
          dVar33 = (double)(moby->pos).z;
          dVar35 = 1.5;
          do {
            (moby->pos).x = (float)dVar29;
            (moby->pos).y = (float)dVar27;
            (moby->pos).z = (float)dVar33;
            (moby->pos).w = (float)dVar26;
            MB_RandomizeVector((float)dVar35,(float *)lVar22);
            M172_002aed78(lVar14,1);
            (moby->pos).x = (float)dVar29;
            iVar17 = iVar17 + 1;
            (moby->pos).y = (float)dVar27;
            (moby->pos).z = (float)dVar33;
            (moby->pos).w = (float)dVar26;
          } while (iVar17 < 5);
          *(undefined4 *)(puVar12 + 0x1c) = 0;
          moby->setByGroup = '\0';
        }
        if (piVar9[5] != 0) {
          ____Cam6_SetupFromMoby(piVar9[5],lVar14);
        }
      }
    }
  }
  else {
    if (*(int *)(*piVar9 + 0x78) != 0) {
      *(undefined4 *)(*(int *)(*piVar9 + 0x78) + 4) = 0;
    }
    DAT_0096bcc0 = 0;
    ____Cam6_RotMath(piVar9[5]);
    piVar9[5] = 0;
    TransitionMovement(0,1);
    pvVar10 = moby->pVar;
    ScreenColorEffectEnabled = 0;
    LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
    LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
    LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
    LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
    levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
    levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
    levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
    g_DebugEnables[2] = 1;
    TfragDrawDist = 512000.0;
    TieDrawDist = 720.0;
    ShrubDrawDist = 500.0;
    DAT_00a390b8 = 500;
    PartClipDist = 0x1f4000;
    STUB_000780f4(g_ViewContext.occlColor0,g_ViewContext.occlColor1,g_ViewContext.occlColor2);
    Help_Resume();
    DeleteMoby(moby);
    GameCamera.camUnderWater = 0;
  }
  return;
}


