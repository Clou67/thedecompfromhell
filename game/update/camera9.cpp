// game/update/camera9.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x4d5e0-0x4efe4
#include "game/update/camera9.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x004d5e0 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e8b4 = 0x10000;
  return;
}


// 0x004d608 (0x138 bytes)
void Cam9_TrackHeroPos(int param_1)

{
  int iVar1;
  float *speed;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  speed = (float *)(iVar1 + 0x30);
  dVar2 = 0.029999999329447746;
  dVar4 = 0.0;
  dVar3 = 0.20000000298023224;
  if (g_heroStateType == 4) {
    fVar5 = Cam_InterpValues(*(float *)(iVar1 + 0x20),g_heroPosition.x,0.03,0.2,0.0,speed);
    *(float *)(iVar1 + 0x20) = fVar5;
    fVar5 = Cam_InterpValues(*(float *)(iVar1 + 0x24),g_heroPosition.y,(float)dVar2,(float)dVar3,
                             (float)dVar4,speed);
    *(float *)(iVar1 + 0x24) = fVar5;
  }
  else {
    fVar5 = Cam_InterpValues(*(float *)(iVar1 + 0x20),g_heroPosition.x,0.03,0.2,0.0,speed);
    *(float *)(iVar1 + 0x20) = fVar5;
    fVar5 = Cam_InterpValues(*(float *)(iVar1 + 0x24),g_heroPosition.y,(float)dVar2,(float)dVar3,
                             (float)dVar4,speed);
    *(float *)(iVar1 + 0x24) = fVar5;
    fVar5 = Cam_InterpValues(*(float *)(iVar1 + 0x28),g_heroPosition.z,(float)dVar2,(float)dVar3,
                             (float)dVar4,speed);
    *(float *)(iVar1 + 0x28) = fVar5;
  }
  return;
}


// 0x004d748 (0x90 bytes)
void Cam9_InitTarget(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  
  pMVar6 = g_MobyInstance;
  iVar3 = *(int *)(param_1 + 0x70);
  puVar5 = (undefined4 *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5));
  if (*(int *)(iVar3 + 0x70) == 0) {
    *(undefined4 *)(iVar3 + 0x80) = *puVar5;
    *(undefined4 *)(iVar3 + 0x84) = puVar5[1];
    fVar1 = (f32)puVar5[2];
    fVar2 = 0.0;
  }
  else {
    iVar4 = *(int *)(puVar5[7] + 0x24);
    *(f32 *)(iVar3 + 0x80) = g_MobyInstance[iVar4].pos.x;
    *(f32 *)(iVar3 + 0x84) = pMVar6[iVar4].pos.y;
    fVar1 = pMVar6[iVar4].pos.z;
    fVar2 = pMVar6[iVar4].pos.w;
  }
  *(f32 *)(iVar3 + 0x88) = fVar1;
  *(f32 *)(iVar3 + 0x8c) = fVar2;
  return;
}


// 0x004d7e8 (0x3d8 bytes)
// inlined: FastRSqrt @0x4d900, FastRSqrt @0x4d98c
void Cam9_CalcDesiredPos(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  GPiece<16> local_70;
  GPiece<16> local_60;
  
  iVar14 = *(int *)(param_1 + 0x70);
  fVar5 = *(float *)(iVar14 + 0x24) - *(float *)(iVar14 + 0x84);
  fVar11 = *(float *)(iVar14 + 0x20) - *(float *)(iVar14 + 0x80);
  fVar1 = SQRT((float)GameCamera.field17_0x1b4.piece<20,4>() * (float)GameCamera.field17_0x1b4.piece<20,4>() +
               (float)GameCamera.field17_0x1b4.piece<12,4>() * (float)GameCamera.field17_0x1b4.piece<12,4>() +
               (float)GameCamera.field17_0x1b4.piece<16,4>() * (float)GameCamera.field17_0x1b4.piece<16,4>());
  fVar13 = 0.0;
  fVar6 = *(float *)(iVar14 + 0x28) - *(float *)(iVar14 + 0x88);
  fVar8 = (fVar6 * (float)GameCamera.field17_0x1b4.piece<20,4>() +
          fVar11 * (float)GameCamera.field17_0x1b4.piece<12,4>() +
          fVar5 * (float)GameCamera.field17_0x1b4.piece<16,4>()) / fVar1;
  fVar7 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar7 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar8;
  }
  fVar9 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar8;
  }
  fVar10 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar8;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar7 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar8;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar8;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar8;
  }
  fVar5 = fVar5 - fVar7;
  fVar11 = fVar11 - fVar9;
  fVar6 = fVar6 - fVar10;
  fVar10 = fVar6 * fVar6 + fVar11 * fVar11 + fVar5 * fVar5;
  fVar8 = fVar13;
  fVar9 = fVar13;
  fVar7 = fVar13;
  if (SQRT(fVar10) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar10);
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar8 = fVar11 * fVar9;
    fVar7 = fVar5 * fVar9;
    fVar9 = fVar6 * fVar9;
  }
  fVar2 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar8 -
          (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar9;
  fVar3 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar9 -
          (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar7;
  fVar12 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar7 -
           (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar8;
  fVar10 = fVar12 * fVar12 + fVar3 * fVar3 + fVar2 * fVar2;
  fVar6 = fVar13;
  fVar11 = fVar13;
  fVar5 = fVar13;
  if (SQRT(fVar10) != 0.0) {
    fVar11 = 1.0 / SQRT(fVar10);
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar6 = fVar3 * fVar11;
    fVar5 = fVar2 * fVar11;
    fVar11 = fVar12 * fVar11;
  }
  fVar2 = *(float *)(iVar14 + 0x44) / fVar1;
  fVar10 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar2;
  }
  fVar12 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar12 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar2;
  }
  if (0.0 - fVar1 < 0.0) {
    fVar13 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar2;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar2;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar12 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar2;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar13 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar2;
  }
  fVar1 = *(float *)(iVar14 + 0x2c);
  fVar2 = *(float *)(iVar14 + 0x50);
  fVar3 = *(float *)(iVar14 + 0x58);
  fVar4 = *(float *)(iVar14 + 0x54);
  fVar10 = fVar6 * fVar4 +
           (fVar7 * fVar11 - fVar9 * fVar5) * fVar3 +
           fVar8 * fVar2 + *(float *)(iVar14 + 0x20) + fVar10;
  fVar12 = fVar5 * fVar4 +
           (fVar9 * fVar6 - fVar8 * fVar11) * fVar3 +
           fVar7 * fVar2 + *(float *)(iVar14 + 0x24) + fVar12;
  fVar5 = fVar11 * fVar4 +
          (fVar8 * fVar5 - fVar7 * fVar6) * fVar3 +
          fVar9 * fVar2 + *(float *)(iVar14 + 0x28) + fVar13;
  if (param_3 == 0) {
    *param_2 = fVar10;
    param_2[1] = fVar12;
    param_2[2] = fVar5;
    param_2[3] = fVar1;
  }
  else {
    iVar14 = CollLine(local_70,local_60,CAMERA_COLL_FLAGS,0,0);
    if (iVar14 == 0) {
      *param_2 = fVar10;
      param_2[1] = fVar12;
      param_2[2] = fVar5;
      param_2[3] = fVar1;
      iVar14 = CollSphere(0x3fe0000000000000,param_2,0x950000,CAMERA_COLL_SPHERE_FLAGS,0);
      if (iVar14 != 0) {
        *param_2 = g_CollOutput.push.x;
        param_2[1] = g_CollOutput.push.y;
        param_2[2] = g_CollOutput.push.z;
        param_2[3] = g_CollOutput.push.w;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x7e) = 3;
      *param_2 = fVar10;
      param_2[1] = fVar12;
      param_2[2] = fVar5;
      param_2[3] = fVar1;
    }
  }
  return;
}


// 0x004dbd0 (0x320 bytes)
// inlined: FastRSqrt @0x4dd90, FastRSqrt @0x4de34
void Cam9_InitPos(float *param_1)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  MobyInstance *pMVar18;
  
  fVar3 = param_1[0x1c];
  Cam9_TrackHeroPos();
  pMVar18 = g_MobyInstance;
  fVar4 = param_1[0x1c];
  puVar6 = (undefined4 *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5));
  if (*(int *)((int)fVar4 + 0x70) == 0) {
    *(undefined4 *)((int)fVar4 + 0x80) = *puVar6;
    *(undefined4 *)((int)fVar4 + 0x84) = puVar6[1];
    fVar1 = (f32)puVar6[2];
    fVar2 = 0.0;
  }
  else {
    iVar5 = *(int *)(puVar6[7] + 0x24);
    *(f32 *)((int)fVar4 + 0x80) = g_MobyInstance[iVar5].pos.x;
    *(f32 *)((int)fVar4 + 0x84) = pMVar18[iVar5].pos.y;
    fVar1 = pMVar18[iVar5].pos.z;
    fVar2 = pMVar18[iVar5].pos.w;
  }
  *(f32 *)((int)fVar4 + 0x88) = fVar1;
  *(f32 *)((int)fVar4 + 0x8c) = fVar2;
  Cam9_CalcDesiredPos(param_1,param_1 + 0xc,0,1);
  uVar17 = GameCamera.field17_0x1b4.piece<20,4>();
  uVar16 = GameCamera.field17_0x1b4.piece<16,4>();
  uVar15 = GameCamera.field17_0x1b4.piece<12,4>();
  fVar7 = SQRT((float)GameCamera.field17_0x1b4.piece<20,4>() * (float)GameCamera.field17_0x1b4.piece<20,4>() +
               (float)GameCamera.field17_0x1b4.piece<12,4>() * (float)GameCamera.field17_0x1b4.piece<12,4>() +
               (float)GameCamera.field17_0x1b4.piece<16,4>() * (float)GameCamera.field17_0x1b4.piece<16,4>());
  fVar4 = 0.0;
  fVar10 = *(float *)((int)fVar3 + 0x44) / fVar7;
  fVar8 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar10;
  }
  fVar9 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar10;
  }
  fVar11 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar11 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar10;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar10;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar10;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar11 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar10;
  }
  fVar8 = (fVar8 + *(float *)((int)fVar3 + 0x24)) - param_1[0xd];
  fVar10 = (fVar9 + *(float *)((int)fVar3 + 0x20)) - param_1[0xc];
  fVar3 = (fVar11 + *(float *)((int)fVar3 + 0x28)) - param_1[0xe];
  fVar7 = fVar3 * fVar3 + fVar10 * fVar10 + fVar8 * fVar8;
  if (SQRT(fVar7) == 0.0) {
    param_1[3] = (float)GameCamera.field17_0x1b4.piece<24,4>();
    param_1[2] = fVar3;
    *param_1 = fVar10;
    param_1[1] = fVar8;
    fVar3 = fVar4;
    fVar8 = fVar4;
    fVar10 = fVar4;
  }
  else {
    fVar9 = 1.0 / SQRT(fVar7);
    param_1[3] = (float)GameCamera.field17_0x1b4.piece<24,4>();
    fVar9 = -(fVar7 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar7 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar7 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar10 = fVar10 * fVar9;
    fVar8 = fVar8 * fVar9;
    fVar3 = fVar3 * fVar9;
  }
  *param_1 = fVar10;
  param_1[1] = fVar8;
  param_1[2] = fVar3;
  fVar12 = (float)uVar17 * fVar10 - (float)uVar15 * fVar3;
  fVar7 = (float)uVar16 * fVar3 - (float)uVar17 * fVar8;
  fVar13 = (float)uVar15 * fVar8 - (float)uVar16 * fVar10;
  param_1[7] = 0.0;
  fVar14 = fVar13 * fVar13 + fVar7 * fVar7 + fVar12 * fVar12;
  fVar9 = fVar4;
  fVar11 = fVar4;
  if (SQRT(fVar14) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar14);
    fVar9 = -(fVar14 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar14 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar14 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar4 = fVar7 * fVar9;
    fVar11 = fVar12 * fVar9;
    fVar9 = fVar13 * fVar9;
  }
  param_1[4] = fVar4;
  param_1[5] = fVar11;
  param_1[6] = fVar9;
  param_1[0xb] = 0.0;
  param_1[8] = fVar8 * fVar9 - fVar3 * fVar11;
  param_1[9] = fVar3 * fVar4 - fVar10 * fVar9;
  param_1[10] = fVar10 * fVar11 - fVar8 * fVar4;
  return;
}


// 0x004def0 (0x134 bytes)
void InitCamera_9(UpdateCam *pCam)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float fVar7;
  
  pvVar2 = pCam->control;
  iVar3 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  *(undefined4 *)((int)pvVar2 + 0x44) = 0x3fc00000;
  fVar1 = g_heroPosition.x;
  *(undefined4 *)((int)pvVar2 + 0x48) = 0;
  *(float *)((int)pvVar2 + 0x20) = fVar1;
  *(float *)((int)pvVar2 + 0x24) = g_heroPosition.y;
  pvVar4 = pCam->control;
  *(float *)((int)pvVar2 + 0x28) = g_heroPosition.z;
  fVar1 = g_heroPosition.w;
  *(undefined4 *)((int)pvVar2 + 0x3c) = 0;
  *(float *)((int)pvVar2 + 0x2c) = fVar1;
  *(undefined4 *)((int)pvVar2 + 0x38) = 0;
  *(undefined4 *)((int)pvVar2 + 0x34) = 0;
  *(undefined4 *)((int)pvVar2 + 0x30) = 0;
  fVar1 = *(float *)(iVar3 + 0x2c);
  *(undefined4 *)((int)pvVar4 + 0x54) = 0;
  *(float *)((int)pvVar4 + 0x50) = fVar1;
  fVar7 = *(float *)(iVar3 + 0x30) - *(float *)((int)pvVar2 + 0x44);
  *(float *)((int)pvVar4 + 0x58) = fVar7;
  *(undefined4 *)((int)pvVar4 + 0x5c) = 0x3f800000;
  uVar5 = *(undefined4 *)(iVar3 + 0x20);
  *(float *)((int)pvVar4 + 0x60) = SQRT(fVar7 * fVar7 + fVar1 * fVar1);
  pvVar2 = pCam->control;
  *(undefined4 *)((int)pvVar2 + 0x70) = uVar5;
  puVar6 = (undefined4 *)pCam->control;
  *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  *(undefined4 *)((int)pvVar2 + 0x94) = 0;
  *(undefined4 *)((int)pvVar2 + 0x98) = 0;
  *(undefined4 *)((int)pvVar2 + 0x9c) = 0;
  *(undefined4 *)((int)pvVar2 + 0xa0) = 0;
  puVar6[4] = 0x3cf5c28f;
  puVar6[5] = 0x3e4ccccd;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  *(undefined2 *)(puVar6 + 0x47) = 0;
  Cam9_InitPos(pCam);
  (pCam->activation).deactivate = 0;
  return;
}


// 0x004e058 (0x7c0 bytes)
// inlined: FastAtan2 @0x4e310, FastAtan2 @0x4e484, FastRSqrt @0x4e69c, FastRSqrt @0x4e70c
void Cam9_UpdateRot(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  float *outQuat;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  float *pfVar24;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  float fVar35;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x160;
  puVar12 = (ulonglong *)lVar20;
  *puVar12 = uVar18;
  puVar12[0x2e] = in_LR;
  puVar12[0x27] = in_f27;
  puVar12[0x28] = in_f28;
  puVar12[0x29] = in_f29;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x20] = unaff_r25;
  puVar12[0x24] = unaff_r29;
  puVar12[0x21] = unaff_r26;
  fVar7 = param_1[0x1c];
  puVar12[0x23] = unaff_r28;
  puVar12[0x1f] = unaff_r24;
  puVar12[0x25] = unaff_r30;
  puVar12[0x22] = unaff_r27;
  dVar32 = 0.0;
  puVar12[0x26] = unaff_r31;
  fVar6 = g_Pad.sticks.x;
  fVar35 = DAT_0071e8d8;
  outQuat = (float *)((int)fVar7 + 0x50);
  fVar2 = *(float *)((int)fVar7 + 0x94);
  puVar12[0x1e] = unaff_r23;
  fVar35 = Cam_InterpValues(fVar2,fVar6,fVar35,DAT_0071e8dc,0.0,param_1);
  *(float *)((int)fVar7 + 0x94) = fVar35;
  fVar2 = DAT_0071e8e0;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  dVar31 = 1.0;
  *(undefined4 *)(puVar12 + 0xf) = 0x3f800000;
  *(undefined4 *)((int)puVar12 + 0x7c) = 0;
  MB_RotateQuatAxisAngle(fVar35 * fVar2,outQuat,outQuat);
  fVar2 = g_Pad.sticks.y;
  fVar35 = Cam_InterpValues(*(float *)((int)fVar7 + 0x9c),g_Pad.sticks.y,DAT_0071e8d8,DAT_0071e8dc,
                            (float)dVar32,&g_Pad.sticks.x);
  *(float *)((int)fVar7 + 0x9c) = fVar35;
  dVar33 = (double)(fVar35 * DAT_0071e8e0);
  dVar26 = (double)FastWrapRot(*(float *)((int)fVar7 + 0xa4),fVar35 * DAT_0071e8e0);
  dVar27 = ABS(dVar26);
  dVar30 = 0.7853981852531433;
  dVar34 = dVar32;
  if (dVar27 <= 0.7853981852531433) {
    if (0.5235987901687622 < dVar27) {
      fVar35 = (float)(dVar33 * (double)(ABS((float)(0.7853981852531433 - dVar27)) * 3.8197186));
      dVar33 = (double)fVar35;
      dVar26 = (double)FastWrapRot(*(float *)((int)fVar7 + 0xa4),fVar35);
    }
    *(float *)((int)fVar7 + 0xa4) = (float)dVar26;
    dVar34 = dVar33;
  }
  fVar35 = *(float *)((int)fVar7 + 0x58);
  fVar3 = *(float *)((int)fVar7 + 0x54);
  fVar4 = *(float *)((int)fVar7 + 0x50);
  *(undefined4 *)((int)puVar12 + 0x8c) = 0;
  *(float *)(puVar12 + 0x10) =
       *(float *)((int)puVar12 + 0x74) * fVar35 - *(float *)(puVar12 + 0xf) * fVar3;
  *(float *)(puVar12 + 0x11) =
       *(float *)(puVar12 + 0xe) * fVar3 - *(float *)((int)puVar12 + 0x74) * fVar4;
  *(float *)((int)puVar12 + 0x84) =
       *(float *)(puVar12 + 0xf) * fVar4 - *(float *)(puVar12 + 0xe) * fVar35;
  MB_RotateQuatAxisAngle((float)dVar34,outQuat,outQuat);
  dVar34 = 0.009999999776482582;
  if (((uint)ABS(fVar6) < 0x3c23d70a) && ((uint)ABS(fVar2) < 0x3c23d70a)) {
    uVar8 = *(uint *)((int)fVar7 + 0x50);
    uVar9 = *(uint *)((int)fVar7 + 0x54);
    dVar33 = ABS((double)*(float *)((int)fVar7 + 0x50));
    dVar26 = ABS((double)*(float *)((int)fVar7 + 0x54));
    uVar10 = *(uint *)((int)BackupCam.control + 0x50);
    uVar11 = *(uint *)((int)BackupCam.control + 0x54);
    fVar2 = *(float *)((int)BackupCam.control + 0x50);
    fVar35 = *(float *)((int)BackupCam.control + 0x54);
    dVar29 = (double)*(float *)((int)BackupCam.control + 0x58);
    *(float *)((int)puVar12 + 0xa4) = (float)(dVar33 - dVar26);
    uVar23 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(uVar9 >> 0x1d) & 4;
    dVar27 = dVar33;
    if ((double)*(float *)((int)puVar12 + 0xa4) - dVar32 < 0.0) {
      dVar27 = dVar26;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    if ((double)*(float *)((int)puVar12 + 0xa4) - dVar32 < 0.0) {
      dVar26 = dVar33;
    }
    fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar33 = dVar32;
    if (dVar32 < dVar27) {
      lVar19 = uVar18 - 0x150;
      lVar22 = uVar18 - 0x88;
      lVar21 = uVar18 - 0x98;
      lVar25 = 2;
      fVar4 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0xd4) = fVar4;
      *(float *)((int)puVar12 + 0xcc) = fVar4;
      *(float *)(puVar12 + 0x1a) = fVar4;
      *(float *)(puVar12 + 0x19) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar5;
      *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar4;
      *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 0xb8) * fVar4 * fVar4;
        iVar13 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar18 - 0x98;
      pfVar24 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar21 = lVar22;
      do {
        fVar4 = *pfVar24;
        fVar5 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 200) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar21 = 2;
      lVar19 = lVar20;
      dVar26 = dVar32;
      do {
        iVar13 = (int)lVar19;
        iVar14 = (int)lVar22;
        lVar19 = lVar19 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 200)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar33 = (double)((float)(dVar26 + dVar30) * fVar6 + fVar3);
    }
    dVar28 = ABS((double)fVar2);
    dVar26 = ABS((double)fVar35);
    *(float *)(puVar12 + 0x14) = (float)(dVar28 - dVar26);
    uVar23 = (ulonglong)(uVar10 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
    dVar27 = dVar28;
    if ((double)*(float *)(puVar12 + 0x14) - dVar32 < 0.0) {
      dVar27 = dVar26;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    if ((double)*(float *)(puVar12 + 0x14) - dVar32 < 0.0) {
      dVar26 = dVar28;
    }
    fVar35 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar28 = dVar32;
    if (dVar32 < dVar27) {
      lVar19 = uVar18 - 0x150;
      lVar21 = uVar18 - 0xb8;
      lVar22 = uVar18 - 0xa8;
      lVar25 = 2;
      fVar6 = (float)(dVar26 - dVar27) / (float)(dVar26 + dVar27);
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0xb4) = fVar6;
      *(float *)((int)puVar12 + 0xac) = fVar6;
      *(float *)(puVar12 + 0x16) = fVar6;
      *(float *)(puVar12 + 0x15) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar3;
      *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar6;
      *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0x98) * fVar6 * fVar6;
        iVar13 = (int)lVar21;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar18 - 0xb8;
      pfVar24 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar21 = lVar22;
      do {
        fVar6 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0xa8) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      dVar26 = dVar32;
      do {
        iVar13 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar14 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0xa8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar28 = (double)((float)(dVar26 + dVar30) * fVar2 + fVar35);
    }
    dVar26 = (double)FastDiffRots(dVar28,dVar33);
    if ((dVar26 <= dVar34) && (dVar34 = dVar26, dVar26 < -0.009999999776482582)) {
      dVar34 = -0.009999999776482582;
    }
    *(undefined4 *)(puVar12 + 0x12) = 0;
    *(undefined4 *)((int)puVar12 + 0x94) = 0;
    *(undefined4 *)(puVar12 + 0x13) = 0x3f800000;
    *(undefined4 *)((int)puVar12 + 0x9c) = 0;
    MB_RotateQuatAxisAngle((float)dVar34,outQuat,outQuat);
    uVar17 = GameCamera.field17_0x1b4.piece<20,4>();
    uVar16 = GameCamera.field17_0x1b4.piece<16,4>();
    uVar15 = GameCamera.field17_0x1b4.piece<12,4>();
    fVar35 = *(float *)((int)fVar7 + 0x54);
    fVar6 = *(float *)((int)fVar7 + 0x50);
    fVar2 = (float)((double)(float)(dVar29 - (double)*(float *)((int)fVar7 + 0x58)) *
                    0.10000000149011612 + (double)*(float *)((int)fVar7 + 0x58));
    dVar26 = (double)SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar35 * fVar35);
    dVar34 = 9.999999747378752e-05;
    if (dVar32 - dVar26 < 0.0) {
      dVar34 = dVar26;
    }
    if (dVar26 - dVar32 < 0.0) {
      dVar34 = dVar26;
    }
    fVar3 = (float)((double)(float)((double)(float)((double)*(float *)((int)fVar7 + 0x60) - dVar34)
                                    * 0.10000000149011612 + dVar34) / dVar34);
    fVar35 = fVar35 * fVar3;
    fVar6 = fVar6 * fVar3;
    fVar2 = fVar2 * fVar3;
    fVar3 = fVar35 * (float)GameCamera.field17_0x1b4.piece<16,4>();
    *(float *)((int)fVar7 + 0x50) = fVar6;
    *(float *)((int)fVar7 + 0x54) = fVar35;
    *(float *)((int)fVar7 + 0x58) = fVar2;
    fVar3 = fVar2 * (float)uVar17 + fVar6 * (float)uVar15 + fVar3;
    fVar4 = -((float)uVar16 * fVar3 - fVar35);
    fVar5 = -((float)uVar15 * fVar3 - fVar6);
    fVar3 = -((float)uVar17 * fVar3 - fVar2);
    dVar30 = (double)(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
    dVar34 = dVar32;
    dVar26 = dVar32;
    dVar27 = dVar32;
    if ((double)(float)SQRT(dVar30) != dVar32) {
      dVar34 = 1.0 / SQRT(dVar30);
      dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar34) * dVar34 - dVar31)
                               * (double)(float)(dVar34 * 0.5) + dVar34);
      dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar30 * dVar34) * dVar34 - dVar31)
                               * (double)(float)(dVar34 * 0.5) + dVar34);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar30 * dVar34) * dVar34 - dVar31) *
                      (double)(float)(dVar34 * 0.5) + dVar34);
      dVar34 = (double)(fVar5 * fVar1);
      dVar26 = (double)(fVar4 * fVar1);
      dVar27 = (double)(fVar3 * fVar1);
    }
    dVar28 = (double)(fVar2 * fVar2 + fVar6 * fVar6 + fVar35 * fVar35);
    dVar30 = dVar32;
    dVar33 = dVar32;
    dVar29 = dVar32;
    if ((double)(float)SQRT(dVar28) != dVar32) {
      dVar30 = 1.0 / SQRT(dVar28);
      dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar30) * dVar30 - dVar31)
                               * (double)(float)(dVar30 * 0.5) + dVar30);
      dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar30) * dVar30 - dVar31)
                               * (double)(float)(dVar30 * 0.5) + dVar30);
      fVar3 = (float)(-(double)(float)((double)(float)(dVar28 * dVar30) * dVar30 - dVar31) *
                      (double)(float)(dVar30 * 0.5) + dVar30);
      dVar30 = (double)(fVar6 * fVar3);
      dVar33 = (double)(fVar35 * fVar3);
      dVar29 = (double)(fVar2 * fVar3);
    }
    dVar26 = (double)(float)(dVar27 * dVar29 +
                            (double)(float)(dVar34 * dVar30 + (double)(float)(dVar26 * dVar33)));
    dVar34 = dVar26;
    if (dVar26 - dVar32 < 0.0) {
      dVar34 = ABS(dVar26);
    }
    dVar27 = (double)(float)(dVar31 - dVar34);
    if ((double)(float)(dVar31 - dVar34) - dVar32 < 0.0) {
      dVar27 = dVar32;
    }
    if (dVar26 - dVar32 < 0.0) {
      dVar31 = -1.0;
    }
    *(float *)((int)fVar7 + 0xa4) =
         (float)(-(double)(((float)((double)(float)(dVar34 * dVar34) * dVar34) * DAT_007358cc +
                           (float)((double)(float)(dVar34 * dVar34) * (double)DAT_007358c8 +
                                  (double)(float)(dVar34 * (double)DAT_007358c4 +
                                                 (double)DAT_007358c0))) * (float)SQRT(dVar27) -
                          1.5707964) * dVar31 - 1.5707963705062866);
  }
  return;
}


// 0x004e828 (0x2f8 bytes)
// inlined: FastRSqrt @0x4e9bc, FastRSqrt @0x4ea60
void Cam9_UpdatePos(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float *speed;
  float fVar12;
  float fVar13;
  float local_60;
  float local_5c;
  float local_58;
  
  fVar1 = param_1[0x1c];
  speed = (float *)Cam9_CalcDesiredPos(param_1,&local_60,1,0);
  fVar12 = Cam_InterpValues(param_1[0xc],local_60,*(float *)((int)fVar1 + 0x10),
                            *(float *)((int)fVar1 + 0x14),*(float *)((int)fVar1 + 0x18),speed);
  param_1[0xc] = fVar12;
  fVar12 = Cam_InterpValues(param_1[0xd],local_5c,*(float *)((int)fVar1 + 0x10),
                            *(float *)((int)fVar1 + 0x14),*(float *)((int)fVar1 + 0x18),speed);
  param_1[0xd] = fVar12;
  fVar13 = Cam_InterpValues(param_1[0xe],local_58,*(float *)((int)fVar1 + 0x10),
                            *(float *)((int)fVar1 + 0x14),*(float *)((int)fVar1 + 0x18),speed);
  param_1[0xe] = fVar13;
  uVar11 = GameCamera.field17_0x1b4.piece<20,4>();
  uVar10 = GameCamera.field17_0x1b4.piece<16,4>();
  uVar9 = GameCamera.field17_0x1b4.piece<12,4>();
  fVar12 = 0.0;
  fVar3 = SQRT((float)GameCamera.field17_0x1b4.piece<20,4>() * (float)GameCamera.field17_0x1b4.piece<20,4>() +
               (float)GameCamera.field17_0x1b4.piece<12,4>() * (float)GameCamera.field17_0x1b4.piece<12,4>() +
               (float)GameCamera.field17_0x1b4.piece<16,4>() * (float)GameCamera.field17_0x1b4.piece<16,4>());
  fVar4 = *(float *)((int)fVar1 + 0x44) / fVar3;
  fVar2 = fVar12;
  if (0.0 - fVar3 < 0.0) {
    fVar2 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar4;
  }
  fVar5 = fVar12;
  if (0.0 - fVar3 < 0.0) {
    fVar5 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar4;
  }
  fVar6 = fVar12;
  if (0.0 - fVar3 < 0.0) {
    fVar6 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar4;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar2 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar4;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar5 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar4;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar6 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar4;
  }
  fVar2 = (fVar2 + *(float *)((int)fVar1 + 0x24)) - param_1[0xd];
  fVar4 = (fVar5 + *(float *)((int)fVar1 + 0x20)) - param_1[0xc];
  fVar13 = (fVar6 + *(float *)((int)fVar1 + 0x28)) - fVar13;
  fVar1 = fVar13 * fVar13 + fVar4 * fVar4 + fVar2 * fVar2;
  if (SQRT(fVar1) == 0.0) {
    param_1[3] = (float)GameCamera.field17_0x1b4.piece<24,4>();
    param_1[2] = fVar13;
    *param_1 = fVar4;
    param_1[1] = fVar2;
    fVar13 = fVar12;
    fVar2 = fVar12;
    fVar4 = fVar12;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar1);
    param_1[3] = (float)GameCamera.field17_0x1b4.piece<24,4>();
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar4 = fVar4 * fVar3;
    fVar2 = fVar2 * fVar3;
    fVar13 = fVar13 * fVar3;
  }
  *param_1 = fVar4;
  param_1[1] = fVar2;
  param_1[2] = fVar13;
  fVar6 = (float)uVar11 * fVar4 - (float)uVar9 * fVar13;
  fVar1 = (float)uVar10 * fVar13 - (float)uVar11 * fVar2;
  fVar7 = (float)uVar9 * fVar2 - (float)uVar10 * fVar4;
  param_1[7] = 0.0;
  fVar8 = fVar7 * fVar7 + fVar1 * fVar1 + fVar6 * fVar6;
  fVar3 = fVar12;
  fVar5 = fVar12;
  if (SQRT(fVar8) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar8);
    fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar12 = fVar1 * fVar3;
    fVar5 = fVar6 * fVar3;
    fVar3 = fVar7 * fVar3;
  }
  param_1[4] = fVar12;
  param_1[5] = fVar5;
  param_1[6] = fVar3;
  param_1[0xb] = 0.0;
  param_1[8] = fVar2 * fVar3 - fVar13 * fVar5;
  param_1[9] = fVar13 * fVar12 - fVar4 * fVar3;
  param_1[10] = fVar4 * fVar5 - fVar2 * fVar12;
  return;
}


// 0x004eb28 (0x34 bytes)
void ____Cam9_CollSphereBump(longlong param_1)

{
  Camera_CollSphereBump(0x3fe0000000000000,param_1 + 0x30);
  return;
}


// 0x004eb78 (0x2a4 bytes)
// inlined: FastRSqrt @0x4ec9c, FastRSqrt @0x4ed0c
int ActivateCamera_9(UpdateCam *pCam,UpdateCam *pCurr)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  MobyInstance *pMVar4;
  int iVar5;
  GPiece<16> local_40;
  GPiece<24> local_30;
  
  pMVar4 = g_MobyInstance;
  bVar1 = (pCam->activation).priority;
  iVar5 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  bVar2 = (pCurr->activation).priority;
  iVar3 = *(int *)(iVar5 + 0x24);
  pCam->subType = '\0';
  if ((((bVar1 <= bVar2) || (0x7f < pMVar4[iVar3].state)) ||
      (5.0 <= ABS(g_heroPosition.z - pMVar4[iVar3].pos.z))) ||
     ((iVar5 = PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar5 + 0x14)]->points,
                          Splines[*(int *)(iVar5 + 0x14)]->cnt), iVar5 == 0 ||
      (iVar5 = CollLine(local_40,local_30,CAMERA_COLL_FLAGS,0,0), iVar5 != 0)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
    (pCam->activation).blendSpeed = 60.0;
  }
  return iVar5;
}


// 0x004ee20 (0xdc bytes)
void UpdateCamera_9(UpdateCam *pCam)

{
  f32 fVar1;
  f32 fVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  
  STUB_0002bcf8(pCam,ZEXT48(pCam->control) + 0xb0);
  Cam9_UpdateRot(pCam);
  Cam9_TrackHeroPos(pCam);
  pMVar6 = g_MobyInstance;
  pvVar3 = pCam->control;
  puVar5 = (undefined4 *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5));
  if (*(int *)((int)pvVar3 + 0x70) == 0) {
    *(undefined4 *)((int)pvVar3 + 0x80) = *puVar5;
    *(undefined4 *)((int)pvVar3 + 0x84) = puVar5[1];
    fVar1 = (f32)puVar5[2];
    fVar2 = 0.0;
  }
  else {
    iVar4 = *(int *)(puVar5[7] + 0x24);
    *(f32 *)((int)pvVar3 + 0x80) = g_MobyInstance[iVar4].pos.x;
    *(f32 *)((int)pvVar3 + 0x84) = pMVar6[iVar4].pos.y;
    fVar1 = pMVar6[iVar4].pos.z;
    fVar2 = pMVar6[iVar4].pos.w;
  }
  *(f32 *)((int)pvVar3 + 0x88) = fVar1;
  *(f32 *)((int)pvVar3 + 0x8c) = fVar2;
  Cam9_UpdatePos(pCam);
  return;
}


// 0x004ef00 (0xe4 bytes)
void ExitCamera_9(UpdateCam *pCam)

{
  int iVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  pMVar2 = g_MobyInstance;
  iVar3 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar1 = *(int *)(iVar3 + 0x24);
  iVar3 = PointInsideComplexPoly
                    (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar3 + 0x14)]->points,
                     Splines[*(int *)(iVar3 + 0x14)]->cnt);
  if (((iVar3 == 0) || (5.0 < ABS(g_heroPosition.z - pMVar2[iVar1].pos.z))) ||
     (0x7f < pMVar2[iVar1].state)) {
    (pCam->activation).deactivate = 3;
  }
  return;
}


