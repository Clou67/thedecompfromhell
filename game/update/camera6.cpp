// game/update/camera6.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x48a00-0x499fc
#include "game/update/camera6.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0048a00 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e714 = 0x10000;
  return;
}


// 0x0048a20 (0xd4 bytes)
void ____Cam6_ClampAndBuildMtx(Vec4 *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  Vec4 aVStack_60 [4];
  
  fVar2 = param_1[7].x;
  Camera_ClampAngles(param_1 + 3,param_1 + 5,(int)fVar2 + 0xb0);
  dVar3 = (double)FastWrapRot(param_1[5].x,*(float *)((int)fVar2 + 200));
  param_1[5].x = (float)dVar3;
  fVar2 = param_1[5].y;
  fVar1 = param_1[5].w;
  param_1[4].x = 0.0;
  dVar3 = (double)FastWrapRot(fVar2,fVar1);
  param_1[4].y = (float)dVar3;
  dVar3 = (double)FastWrapRot(3.1415927,param_1[5].x);
  fVar2 = param_1[6].x;
  param_1[4].z = (float)dVar3;
  dVar3 = (double)FastWrapRot((float)dVar3,fVar2);
  param_1[4].z = (float)dVar3;
  param_1[4].w = 0.0;
  FastEulerToMtx1(aVStack_60,param_1 + 4);
  FastApplyTransform(param_1,aVStack_60);
  return;
}


// 0x0048b00 (0x174 bytes)
void Cam6_SetTarget(double param_1,Vec4 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pol;
  double dVar3;
  Vec4 aVStack_70 [4];
  
  pol = (float *)param_2[7].x;
  pol[0x2c] = *param_4;
  pol[0x2d] = param_4[1];
  pol[0x2e] = param_4[2];
  pol[0x2f] = param_4[3];
  pol[0x20] = *param_4;
  pol[0x21] = param_4[1];
  pol[0x22] = param_4[2];
  fVar1 = param_4[3];
  pol[0x32] = (float)param_1;
  pol[0x23] = fVar1;
  Cam_CopyRotWrapped((float)param_1,pol + 5,param_3);
  Cam_CopyRotWrapped(0.0,&param_2[5].x,param_3);
  Camera_ClearPolar(pol);
  fVar1 = param_2[7].x;
  pol[0x26] = 0.0;
  pol[0x25] = 0.0;
  pol[0x24] = 0.0;
  Camera_ClampAngles(param_2 + 3,param_2 + 5,(int)fVar1 + 0xb0);
  dVar3 = (double)FastWrapRot(param_2[5].x,*(float *)((int)fVar1 + 200));
  param_2[5].x = (float)dVar3;
  fVar1 = param_2[5].y;
  fVar2 = param_2[5].w;
  param_2[4].x = 0.0;
  dVar3 = (double)FastWrapRot(fVar1,fVar2);
  param_2[4].y = (float)dVar3;
  dVar3 = (double)FastWrapRot(3.1415927,param_2[5].x);
  fVar1 = param_2[6].x;
  param_2[4].z = (float)dVar3;
  dVar3 = (double)FastWrapRot((float)dVar3,fVar1);
  param_2[4].z = (float)dVar3;
  param_2[4].w = 0.0;
  FastEulerToMtx1(aVStack_70,param_2 + 4);
  FastApplyTransform(param_2,aVStack_70);
  return;
}


// 0x0048c78 (0x178 bytes)
void Cam6_ResetParams(Vec4 *param_1)

{
  float fVar1;
  float *pol;
  float fVar2;
  double dVar3;
  Vec4 aVStack_70 [4];
  
  *(undefined4 *)((int)param_1[7].x + 0xf0) = 0;
  pol = (float *)param_1[7].x;
  pol[0x27] = 0.0;
  pol[0x28] = 0.3;
  pol[0x29] = 0.3;
  pol[0x2a] = 0.0;
  pol[0xf] = 0.04;
  pol[0x10] = 0.04;
  pol[0x11] = 0.04;
  pol[0x12] = 0.99;
  pol[0x13] = 0.04;
  pol[10] = 0.07;
  pol[0xb] = 1.0;
  pol[0xc] = 0.07;
  pol[0xd] = 1.0;
  pol[0xe] = 0.07;
  pol[0x2b] = 0.0;
  Camera_ClearPolar(pol + 0x14);
  Camera_ClearPolar(pol);
  fVar2 = param_1[7].x;
  pol[0x26] = 0.0;
  pol[0x25] = 0.0;
  pol[0x24] = 0.0;
  Camera_ClampAngles(param_1 + 3,param_1 + 5,(int)fVar2 + 0xb0);
  dVar3 = (double)FastWrapRot(param_1[5].x,*(float *)((int)fVar2 + 200));
  param_1[5].x = (float)dVar3;
  fVar2 = param_1[5].y;
  fVar1 = param_1[5].w;
  param_1[4].x = 0.0;
  dVar3 = (double)FastWrapRot(fVar2,fVar1);
  param_1[4].y = (float)dVar3;
  dVar3 = (double)FastWrapRot(3.1415927,param_1[5].x);
  fVar2 = param_1[6].x;
  param_1[4].z = (float)dVar3;
  dVar3 = (double)FastWrapRot((float)dVar3,fVar2);
  param_1[4].z = (float)dVar3;
  param_1[4].w = 0.0;
  FastEulerToMtx1(aVStack_70,param_1 + 4);
  FastApplyTransform(param_1,aVStack_70);
  *(undefined2 *)((int)&param_1[7].w + 2) = 0;
  return;
}


// 0x0048df8 (0x238 bytes)
void Cam6_Update(Vec4 *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined8 uVar4;
  double dVar5;
  double extraout_f1;
  float fVar6;
  Vec4 aVStack_60 [4];
  
  fVar2 = param_1[7].x;
  uVar4 = FastWrapRot(*(float *)((int)fVar2 + 200),*(float *)((int)fVar2 + 0x14));
  dVar5 = (double)Cam_InterpAngles((double)param_1[5].x,uVar4,(double)*(float *)((int)fVar2 + 0x28),
                                   (double)*(float *)((int)fVar2 + 0x3c),
                                   (double)*(float *)((int)fVar2 + 0x50));
  param_1[5].x = (float)dVar5;
  pfVar3 = (float *)Cam_InterpAngles((double)param_1[5].y,(double)*(float *)((int)fVar2 + 0x18),
                                     (double)*(float *)((int)fVar2 + 0x2c),
                                     (double)*(float *)((int)fVar2 + 0x40),
                                     (double)*(float *)((int)fVar2 + 0x54));
  param_1[5].y = (float)extraout_f1;
  fVar6 = Cam_InterpValues(param_1[5].z,*(float *)((int)fVar2 + 0x1c),*(float *)((int)fVar2 + 0x30),
                           *(float *)((int)fVar2 + 0x44),*(float *)((int)fVar2 + 0x58),pfVar3);
  param_1[5].z = fVar6;
  dVar5 = (double)Cam_InterpAngles((double)param_1[5].w,(double)*(float *)((int)fVar2 + 0x20),
                                   (double)*(float *)((int)fVar2 + 0x34),
                                   (double)*(float *)((int)fVar2 + 0x48),
                                   (double)*(float *)((int)fVar2 + 0x5c));
  param_1[5].w = (float)dVar5;
  dVar5 = (double)Cam_InterpAngles((double)param_1[6].x,(double)*(float *)((int)fVar2 + 0x24),
                                   (double)*(float *)((int)fVar2 + 0x38),
                                   (double)*(float *)((int)fVar2 + 0x4c),
                                   (double)*(float *)((int)fVar2 + 0x60));
  pfVar3 = *(float **)((int)fVar2 + 0x9c);
  param_1[6].x = (float)dVar5;
  if (pfVar3 == (float *)0x0) {
    fVar6 = Cam_InterpValues(*(float *)((int)fVar2 + 0xb0),*(float *)((int)fVar2 + 0x80),
                             *(float *)((int)fVar2 + 0xa0),*(float *)((int)fVar2 + 0xa4),
                             *(float *)((int)fVar2 + 0xa8),(float *)0x0);
    *(float *)((int)fVar2 + 0xb0) = fVar6;
    fVar6 = Cam_InterpValues(*(float *)((int)fVar2 + 0xb4),*(float *)((int)fVar2 + 0x84),
                             *(float *)((int)fVar2 + 0xa0),*(float *)((int)fVar2 + 0xa4),
                             *(float *)((int)fVar2 + 0xa8),pfVar3);
    *(float *)((int)fVar2 + 0xb4) = fVar6;
    fVar6 = Cam_InterpValues(*(float *)((int)fVar2 + 0xb8),*(float *)((int)fVar2 + 0x88),
                             *(float *)((int)fVar2 + 0xa0),*(float *)((int)fVar2 + 0xa4),
                             *(float *)((int)fVar2 + 0xa8),pfVar3);
  }
  else {
    *(undefined4 *)((int)fVar2 + 0xb0) = *(undefined4 *)((int)fVar2 + 0x80);
    fVar6 = *(float *)((int)fVar2 + 0x88);
    *(undefined4 *)((int)fVar2 + 0xb4) = *(undefined4 *)((int)fVar2 + 0x84);
    *(undefined4 *)((int)fVar2 + 0xbc) = *(undefined4 *)((int)fVar2 + 0x8c);
  }
  *(float *)((int)fVar2 + 0xb8) = fVar6;
  Camera_ClampAngles(param_1 + 3,param_1 + 5,(int)fVar2 + 0xb0);
  fVar6 = param_1[5].y;
  fVar1 = param_1[5].w;
  param_1[4].x = *(float *)((int)fVar2 + 0xac);
  dVar5 = (double)FastWrapRot(fVar6,fVar1);
  param_1[4].y = (float)dVar5;
  dVar5 = (double)FastWrapRot(3.1415927,param_1[5].x);
  fVar2 = param_1[6].x;
  param_1[4].z = (float)dVar5;
  dVar5 = (double)FastWrapRot((float)dVar5,fVar2);
  param_1[4].z = (float)dVar5;
  FastEulerToMtx1(aVStack_60,param_1 + 4);
  FastApplyTransform(param_1,aVStack_60);
  return;
}


// 0x0049058 (0x484 bytes)
// inlined: FastAtan2 @0x49230
// strings: 00049048: '?333_q' (raw)

undefined8 ____Cam6_SetupFromMoby(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar10 = (ulonglong *)lVar13;
  *puVar10 = uVar12;
  puVar10[0x20] = in_LR;
  puVar10[0x1c] = in_f30;
  puVar10[0x1d] = in_f31;
  puVar10[0x1b] = unaff_r31;
  puVar10[0x18] = unaff_r28;
  iVar8 = *(int *)(param_1 + 0x70);
  puVar10[0x19] = unaff_r29;
  puVar10[0x17] = unaff_r27;
  puVar10[0x1a] = unaff_r30;
  if (param_2 == 0) {
    uVar14 = 1;
  }
  else {
    fVar1 = *(float *)(param_2 + 0xe0);
    fVar2 = *(float *)(param_2 + 0xe4);
    fVar3 = *(float *)(param_2 + 0xe8);
    fVar4 = *(float *)(param_2 + 0x10);
    fVar5 = *(float *)(param_2 + 0x14);
    fVar6 = *(float *)(param_2 + 0x18);
    iVar9 = *(int *)(param_2 + 0x78);
    dVar25 = 0.0;
    *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(param_2 + 0x1c);
    *(float *)(puVar10 + 0xe) = fVar1 * 0.12 + fVar4;
    *(float *)((int)puVar10 + 0x74) = fVar2 * 0.12 + fVar5;
    *(float *)(puVar10 + 0xf) = fVar3 * 0.12 + fVar6;
    iVar15 = *(int *)(iVar9 + 0x10);
    if (iVar15 == -1) {
      Cam_CopyRotWrapped(0.0,(float *)(iVar8 + 100),(float *)(param_1 + 0x50));
      *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar8 + 0x70);
      *(undefined4 *)(iVar8 + 0x6c) = 0x40c00000;
      *(undefined4 *)(iVar8 + 0x70) = 0;
      Cam6_SetTarget(dVar25,param_1,(float *)(iVar8 + 100),uVar12 - 0x80);
      iVar15 = *(int *)(iVar9 + 0x10);
    }
    if (iVar15 < 1) {
      dVar22 = (double)FastWrapRot(*(float *)(iVar8 + 0xac),*(float *)(iVar9 + 0x18));
      *(float *)(iVar8 + 0xac) = (float)dVar22;
      dVar26 = 0.9700000286102295;
      *(float *)(iVar9 + 0x18) = *(float *)(iVar9 + 0x18) * 0.97;
      fVar1 = GameCamera.posY - g_heroPosition.y;
      dVar24 = ABS((double)(GameCamera.posX - g_heroPosition.x));
      dVar23 = ABS((double)fVar1);
      *(float *)(puVar10 + 0x10) = GameCamera.posX - g_heroPosition.x;
      *(float *)((int)puVar10 + 0x84) = fVar1;
      *(float *)(puVar10 + 0x11) = (float)(dVar24 - dVar23);
      fVar1 = GameCamera.rot.radius;
      uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)(puVar10 + 0x10));
      if ((double)*(float *)(puVar10 + 0x11) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar23 = ABS((double)*(float *)((int)puVar10 + 0x84));
      if ((double)*(float *)(puVar10 + 0x11) - dVar25 < 0.0) {
        dVar23 = dVar24;
      }
      if (dVar25 < dVar22) {
        lVar19 = uVar12 - 0xe0;
        lVar16 = uVar12 - 0x54;
        lVar18 = uVar12 - 100;
        lVar21 = 2;
        fVar4 = (float)(dVar23 - dVar22) / (float)(dVar23 + dVar22);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x13) = fVar4;
        *(float *)(puVar10 + 0x12) = fVar4;
        *(float *)((int)puVar10 + 0x94) = fVar4;
        *(float *)((int)puVar10 + 0x8c) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar5;
        *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar4;
        *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x8c) = *(float *)((int)lVar19 + 0x7c) * fVar4 * fVar4;
          iVar15 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar19 = uVar12 - 100;
        lVar21 = 4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar19;
        lVar18 = lVar13;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        do {
          iVar15 = (int)lVar13;
          iVar11 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0x8c)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar2);
      }
      dVar25 = (double)FastSubRots((float)dVar25,fVar1);
      fVar1 = (g_currentWeaponMoby->pos).y - GameCamera.posY;
      fVar2 = (g_currentWeaponMoby->pos).x - GameCamera.posX;
      fVar3 = (g_heroPosition.x - GameCamera.posX) * (g_heroPosition.x - GameCamera.posX) +
              (g_heroPosition.y - GameCamera.posY) * (g_heroPosition.y - GameCamera.posY);
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
      if (SQRT(fVar3) - SQRT(fVar1) < 0.0) {
        fVar1 = fVar3;
      }
      if (0.77 <= SQRT(fVar1)) {
        *(float *)(iVar8 + 0x1c) = *(float *)(iVar8 + 0x1c) + *(float *)(iVar9 + 4);
        *(float *)(iVar9 + 4) = (float)((double)*(float *)(iVar9 + 4) * dVar26);
      }
      else {
        fVar1 = 0.7 - SQRT(fVar1);
        if (1.5707963705062866 <= dVar25) {
          *(float *)(iVar8 + 0x1c) = *(float *)(iVar8 + 0x1c) + fVar1;
        }
        else {
          *(float *)(iVar8 + 0x1c) = *(float *)(iVar8 + 0x1c) - fVar1;
          *(undefined4 *)(iVar9 + 4) = 0;
        }
      }
      uVar14 = 0;
      *(undefined4 *)(iVar8 + 0x80) = *(undefined4 *)(puVar10 + 0xe);
      *(undefined4 *)(iVar8 + 0x84) = *(undefined4 *)((int)puVar10 + 0x74);
      *(undefined4 *)(iVar8 + 0x88) = *(undefined4 *)(puVar10 + 0xf);
      *(undefined4 *)(iVar8 + 0x8c) = *(undefined4 *)((int)puVar10 + 0x7c);
    }
    else {
      fVar1 = *(float *)(param_2 + 0x40);
      uVar14 = 1;
      *(float *)(iVar8 + 0xac) = fVar1 * 0.5;
      fVar2 = *(float *)(param_2 + 0x44);
      *(float *)(iVar8 + 0x20) =
           (fVar2 - *(float *)(iVar8 + 0x20)) * 0.05 + *(float *)(iVar8 + 0x20);
      *(undefined4 *)(iVar8 + 0x80) = *(undefined4 *)(puVar10 + 0xe);
      *(undefined4 *)(iVar8 + 0x84) = *(undefined4 *)((int)puVar10 + 0x74);
      *(undefined4 *)(iVar8 + 0x88) = *(undefined4 *)(puVar10 + 0xf);
      uVar7 = *(undefined4 *)((int)puVar10 + 0x7c);
      *(float *)(iVar8 + 0xc0) = fVar1;
      *(undefined4 *)(iVar8 + 0x8c) = uVar7;
      *(float *)(iVar8 + 0xc4) = fVar2;
      *(undefined4 *)(iVar8 + 200) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(iVar8 + 0xcc) = *(undefined4 *)(param_2 + 0x4c);
    }
  }
  return uVar14;
}


// 0x00494e0 (0x124 bytes)
UpdateCam * Cam6_Activate(undefined8 param_1)

{
  void *pvVar1;
  UpdateCam *pNewCam;
  double dVar2;
  
  pNewCam = Camera_FindCameraOfType(6);
  GameCamera.blender.state = 0;
  Camera_switchToNewCam(pNewCam);
  ____Cam6_SetupFromMoby(pNewCam,param_1);
  pvVar1 = pNewCam->control;
  *(undefined4 *)((int)pvVar1 + 0xb0) = *(undefined4 *)((int)pvVar1 + 0x80);
  *(undefined4 *)((int)pvVar1 + 0xb4) = *(undefined4 *)((int)pvVar1 + 0x84);
  *(undefined4 *)((int)pvVar1 + 0xb8) = *(undefined4 *)((int)pvVar1 + 0x88);
  *(undefined4 *)((int)pvVar1 + 0xbc) = *(undefined4 *)((int)pvVar1 + 0x8c);
  dVar2 = 0.0;
  Cam_CopyRotWrapped(0.0,(float *)((int)pvVar1 + 0x14),(float *)&DAT_0071e738);
  Cam_CopyRotWrapped((float)dVar2,pNewCam->pol,(float *)((int)pvVar1 + 0x14));
  Cam6_ResetParams(pNewCam);
  *(undefined4 *)((int)pvVar1 + 0x9c) = 1;
  Cam_CopyRotWrapped((float)dVar2,(float *)((int)pvVar1 + 0x28),(float *)&DAT_0071e74c);
  Cam_CopyRotWrapped((float)dVar2,(float *)((int)pvVar1 + 0x3c),(float *)&DAT_0071e760);
  Camera_ClearPolar((float *)((int)pvVar1 + 0x50));
  return pNewCam;
}


// 0x0049618 (0x2c0 bytes)
// inlined: FastAtan2 @0x4970c
void ____Cam6_RotMath(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xc0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar11;
  puVar6[0x1a] = in_LR;
  puVar6[0x16] = unaff_r30;
  puVar6[0x15] = unaff_r29;
  puVar6[0x17] = unaff_r31;
  fVar1 = (g_heroMobyPtr->pos).x - GameCamera.posX;
  fVar3 = (g_heroMobyPtr->pos).y - GameCamera.posY;
  fVar4 = ABS(fVar1);
  fVar2 = ABS(fVar3);
  *(float *)(puVar6 + 0xe) = fVar1;
  *(float *)((int)puVar6 + 0x74) = fVar3;
  fVar10 = GameCamera.rot.radius;
  *(float *)(puVar6 + 0xf) = fVar4 - fVar2;
  fVar1 = 0.0;
  uVar13 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar6 + 0xe));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  fVar7 = ABS(*(float *)((int)puVar6 + 0x74));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar7 = fVar4;
  }
  if (0.0 < fVar3) {
    lVar16 = uVar11 - 0xb0;
    lVar14 = uVar11 - 0x34;
    lVar15 = uVar11 - 0x44;
    lVar18 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar6 + 0x11) = fVar3;
    *(float *)(puVar6 + 0x10) = fVar3;
    *(float *)((int)puVar6 + 0x84) = fVar3;
    *(float *)((int)puVar6 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
    *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
    *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar3 * fVar3;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x44;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar14 = lVar16;
    lVar15 = lVar12;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar3;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar8 = (int)lVar12;
      iVar9 = (int)lVar16;
      lVar12 = lVar12 + 0x10;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
              *(float *)(iVar9 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
  }
  dVar19 = (double)FastSubRots(fVar10,fVar1);
  if ((0.5585053563117981 <= dVar19) ||
     (8.0 <= SQRT((g_heroPosition.z - GameCamera.posZ) * (g_heroPosition.z - GameCamera.posZ) +
                  (g_heroPosition.x - GameCamera.posX) * (g_heroPosition.x - GameCamera.posX) +
                  (g_heroPosition.y - GameCamera.posY) * (g_heroPosition.y - GameCamera.posY)))) {
    *(undefined2 *)(param_1 + 0x7e) = 4;
  }
  else {
    GameCamera.blender.reqType = '\0';
    *(undefined2 *)(param_1 + 0x7e) = 2;
    GameCamera.blender.reqPosInterpAdd = 0.018;
    GameCamera.blender.reqQuatInterpAdd = 0.018;
  }
  *(undefined1 *)(param_1 + 0x7d) = 0;
  return;
}


// 0x00498d8 (0x8 bytes)
int ActivateCamera_6(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}


// 0x00498e8 (0xf0 bytes)
void InitCamera_6(UpdateCam *pCam)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = g_heroPosition.x;
  pvVar1 = pCam->control;
  *(float *)((int)pvVar1 + 0xb0) = g_heroPosition.x;
  *(float *)((int)pvVar1 + 0xb4) = g_heroPosition.y;
  fVar3 = g_heroPosition.z;
  *(float *)((int)pvVar1 + 0xbc) = g_heroPosition.w;
  *(float *)((int)pvVar1 + 0xb8) = fVar3 + 2.0;
  *(float *)((int)pvVar1 + 0xc0) = g_heroRotation.x;
  *(float *)((int)pvVar1 + 0xc4) = g_heroRotation.y;
  *(float *)((int)pvVar1 + 200) = g_heroRotation.z;
  fVar3 = g_heroRotation.w;
  *(float *)((int)pvVar1 + 0x80) = fVar2;
  *(float *)((int)pvVar1 + 0xcc) = fVar3;
  *(undefined4 *)((int)pvVar1 + 0x84) = *(undefined4 *)((int)pvVar1 + 0xb4);
  *(undefined4 *)((int)pvVar1 + 0x8c) = *(undefined4 *)((int)pvVar1 + 0xbc);
  *(undefined4 *)((int)pvVar1 + 0x88) = *(undefined4 *)((int)pvVar1 + 0xb8);
  Camera_ClearPolar((float *)((int)pvVar1 + 0x14));
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0x40947ae1;
  Cam_CopyRotWrapped(0.0,pCam->pol,(float *)((int)pvVar1 + 0x14));
  Cam6_ResetParams(pCam);
  return;
}


// 0x00499d8 (0x20 bytes)
void UpdateCamera_6(UpdateCam *pCam)

{
  Cam6_Update(pCam);
  return;
}


// 0x00499f8 (0x4 bytes)
void STUB_000499f8(...)

{
  return;
}


