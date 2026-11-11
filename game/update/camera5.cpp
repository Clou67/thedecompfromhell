// game/update/camera5.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 15 functions, 0x47b84-0x48a00
#include "game/update/camera5.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0047b84 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e6a4 = 0x10000;
  return;
}


// 0x0047b98 (0x70 bytes)
void Camera_SetMobyDrivenTargetPos(float *pos)

{
  void *pvVar1;
  UpdateCam *pUVar2;
  
  pUVar2 = (UpdateCam *)GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5) {
    pUVar2 = Camera_FindCameraOfType(5);
  }
  pvVar1 = pUVar2->control;
  *(float *)((int)pvVar1 + 0x80) = *pos;
  *(float *)((int)pvVar1 + 0x84) = pos[1];
  *(float *)((int)pvVar1 + 0x88) = pos[2];
  *(float *)((int)pvVar1 + 0x8c) = pos[3];
  return;
}


// 0x0047c08 (0x70 bytes)
void Camera_SetMobyDrivenTargetRot(float *rot)

{
  void *pvVar1;
  UpdateCam *pUVar2;
  
  pUVar2 = (UpdateCam *)GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5) {
    pUVar2 = Camera_FindCameraOfType(5);
  }
  pvVar1 = pUVar2->control;
  *(float *)((int)pvVar1 + 0x90) = *rot;
  *(float *)((int)pvVar1 + 0x94) = rot[1];
  *(float *)((int)pvVar1 + 0x98) = rot[2];
  *(float *)((int)pvVar1 + 0x9c) = rot[3];
  return;
}


// 0x0047c80 (0x1bc bytes)
int Camera_GetMobyDrivenTargetStatus(void)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  uVar7 = 0;
  cVar1 = *(char *)((int)GameCamera.pCurrentUpdCam + 0x88);
  puVar2 = *(uint **)((int)GameCamera.pCurrentUpdCam + 0x70);
  if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
    if (puVar2[0x38] == 0) {
      uVar7 = 1;
    }
  }
  else if (((cVar1 != '\x01') &&
           ((((uVar3 = (int)*puVar2 >> 0x1f, (int)((uVar3 >> 1 ^ *puVar2) - uVar3) < 0x3a83126f &&
              (uVar3 = (int)puVar2[1] >> 0x1f, (int)((uVar3 >> 1 ^ puVar2[1]) - uVar3) < 0x3a83126f)
              ) && (uVar3 = (int)puVar2[2] >> 0x1f,
                   (int)((uVar3 >> 1 ^ puVar2[2]) - uVar3) < 0x3a83126f)) &&
            ((uVar3 = (int)puVar2[0xc] >> 0x1f,
             (int)((uVar3 >> 1 ^ puVar2[0xc]) - uVar3) < 0x38d1b717 &&
             (uVar3 = (int)puVar2[0xd] >> 0x1f,
             (int)((uVar3 >> 1 ^ puVar2[0xd]) - uVar3) < 0x38d1b717)))))) &&
          (uVar3 = (int)puVar2[0xe] >> 0x1f, (int)((uVar3 >> 1 ^ puVar2[0xe]) - uVar3) < 0x38d1b717)
          ) {
    fVar4 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x34) - (float)puVar2[0x21];
    fVar5 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x30) - (float)puVar2[0x20];
    fVar6 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x38) - (float)puVar2[0x22];
    fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if (0.01 <= fVar4) {
      if ((puVar2[0x48] != 0) && (0.1 < fVar4)) {
        uVar7 = 4;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  if ((puVar2[0x48] != 0) && (*(char *)((int)GameCamera.pCurrentUpdCam + 0x89) != '\0')) {
    uVar7 = uVar7 | 2;
  }
  return uVar7;
}


// 0x0047e3c (0x64 bytes)
void Camera_SetMobyDrivenPolarRadiusCurve(float a,float b)

{
  void *pvVar1;
  UpdateCam *pUVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)b;
  dVar3 = (double)a;
  pUVar2 = (UpdateCam *)GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5) {
    pUVar2 = Camera_FindCameraOfType(5);
  }
  pvVar1 = pUVar2->control;
  *(float *)((int)pvVar1 + 0x124) = (float)dVar3;
  *(float *)((int)pvVar1 + 0x128) = (float)dVar4;
  return;
}


// 0x0047ea0 (0xa8 bytes)
void Camera_SetMobyDrivenMode(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  *(char *)((int)GameCamera.pCurrentUpdCam + 0x88) = (char)param_1;
  if (param_1 < 3) {
    if (param_1 < 2) {
      return;
    }
  }
  else {
    if (3 < param_1) {
      return;
    }
    *(float *)(iVar1 + 0x110) = g_heroPosition.x;
    *(float *)(iVar1 + 0x114) = g_heroPosition.y;
    *(float *)(iVar1 + 0x118) = g_heroPosition.z;
    *(float *)(iVar1 + 0x11c) = g_heroPosition.w;
    ____Camera_CalcPolarToTarget(iVar1 + 0xfc,0x951500,&g_heroPosition);
  }
  *(undefined4 *)(iVar1 + 0xe4) = param_2;
  *(undefined4 *)(iVar1 + 0xe0) = param_2;
  return;
}


// 0x0047f48 (0x2c bytes)
void Camera_SetCurrentAccel(float a,float b,float c,float d,float e,float f)

{
  int iVar1;
  
  iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  *(float *)(iVar1 + 0x50) = e;
  *(float *)(iVar1 + 0x54) = d;
  *(float *)(iVar1 + 0x58) = f;
  *(float *)(iVar1 + 0x10) = b;
  *(float *)(iVar1 + 0x14) = a;
  *(float *)(iVar1 + 0x18) = c;
  return;
}


// 0x0047f74 (0x24c bytes)
void SetCameraPosition
               (float *param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char acVar5 [4];
  UpdateCam *pNewCam;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<24> local_b0;
  
  pNewCam = Camera_FindCameraOfType(5);
  acVar5 = GameCamera.field8_0x14c;
  fVar4 = GameCamera.posZ;
  fVar3 = GameCamera.posY;
  fVar2 = GameCamera.posX;
  dVar13 = (double)*param_1;
  dVar12 = (double)param_1[1];
  dVar11 = (double)param_1[2];
  dVar10 = (double)param_1[3];
  dVar9 = (double)*param_2;
  dVar8 = (double)param_2[1];
  dVar7 = (double)param_2[2];
  dVar6 = (double)param_2[3];
  dVar14 = (double)GameCamera.rot.azimuth;
  dVar15 = (double)GameCamera.rot.elevation;
  dVar16 = (double)GameCamera.rot.radius;
  dVar17 = (double)(float)GameCamera.field10_0x15c;
  Camera_switchToNewCam(pNewCam);
  pvVar1 = pNewCam->control;
  pNewCam->pos[0] = (float)dVar13;
  pNewCam->pos[1] = (float)dVar12;
  (pNewCam->activation).priority = '\a';
  (pNewCam->activation).activate = '\x01';
  pNewCam->pos[2] = (float)dVar11;
  pNewCam->pos[3] = (float)dVar10;
  GameCamera.posX = (float)dVar13;
  GameCamera.posY = (float)dVar12;
  GameCamera.posZ = (float)dVar11;
  GameCamera.field8_0x14c = (char  [4])(float)dVar10;
  pNewCam->rot[0] = (float)dVar9;
  pNewCam->rot[1] = (float)dVar8;
  pNewCam->rot[2] = (float)dVar7;
  pNewCam->rot[3] = (float)dVar6;
  *(float *)((int)pvVar1 + 0x80) = (float)dVar13;
  *(float *)((int)pvVar1 + 0x84) = (float)dVar12;
  *(float *)((int)pvVar1 + 0x88) = (float)dVar11;
  *(float *)((int)pvVar1 + 0x8c) = (float)dVar10;
  *(float *)((int)pvVar1 + 0x90) = (float)dVar9;
  *(float *)((int)pvVar1 + 0x94) = (float)dVar8;
  *(float *)((int)pvVar1 + 0x98) = (float)dVar7;
  *(float *)((int)pvVar1 + 0x9c) = (float)dVar6;
  *(undefined4 *)((int)pvVar1 + 0x120) = param_5;
  pNewCam->subType = (char)param_3;
  if (param_3 < 3) {
    if (param_3 < 2) {
      return;
    }
  }
  else {
    if (3 < param_3) {
      return;
    }
    *(undefined4 *)((int)pvVar1 + 0x124) = 0x3f800000;
    *(undefined4 *)((int)pvVar1 + 0x128) = 0;
    pNewCam->pos[0] = fVar2;
    pNewCam->pos[1] = fVar3;
    pNewCam->pos[2] = fVar4;
    pNewCam->rot[0] = (float)dVar14;
    pNewCam->pos[3] = (float)acVar5;
    pNewCam->rot[1] = (float)dVar15;
    pNewCam->rot[2] = (float)dVar16;
    pNewCam->rot[3] = (float)dVar17;
    *(float *)((int)pvVar1 + 0x110) = g_heroPosition.x;
    *(float *)((int)pvVar1 + 0x114) = g_heroPosition.y;
    *(float *)((int)pvVar1 + 0x118) = g_heroPosition.z;
    *(float *)((int)pvVar1 + 0x11c) = g_heroPosition.w;
    ____Camera_CalcPolarToTarget((int)pvVar1 + 0xfc,local_b0,&g_heroPosition);
  }
  *(undefined4 *)((int)pvVar1 + 0xe4) = param_4;
  *(undefined4 *)((int)pvVar1 + 0xe0) = param_4;
  return;
}


// 0x00481d0 (0x250 bytes)
void Camera_DeactivateMobyDrivenCam(int exitFlags)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *p1;
  void *pvVar9;
  Vec4 local_a0 [2];
  float local_80;
  float local_7c;
  float local_78;
  
  p1 = GameCamera.pCurrentUpdCam;
  Camera_DeactivateCurrent();
  if (exitFlags == 0) {
    FastEulerToMtx1(local_a0,&g_heroRotation);
    FastApplyTransform((Vec4 *)p1,local_a0);
    pvVar9 = GameCamera.pCurrentUpdCam;
    fVar1 = 0.0;
    fVar3 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
    fVar8 = SQRT(local_a0[0].z * local_a0[0].z +
                 local_a0[0].x * local_a0[0].x + local_a0[0].y * local_a0[0].y);
    fVar2 = 1.2 / fVar3;
    fVar7 = -1.0 / fVar8;
    fVar6 = fVar1;
    if (0.0 - fVar3 < 0.0) {
      fVar6 = local_80 * fVar2;
    }
    fVar5 = fVar1;
    if (0.0 - fVar3 < 0.0) {
      fVar5 = local_7c * fVar2;
    }
    fVar4 = fVar1;
    if (0.0 - fVar3 < 0.0) {
      fVar4 = local_78 * fVar2;
    }
    if (fVar3 - 0.0 < 0.0) {
      fVar6 = local_80 * fVar2;
    }
    if (fVar3 - 0.0 < 0.0) {
      fVar5 = local_7c * fVar2;
    }
    if (fVar3 - 0.0 < 0.0) {
      fVar4 = local_78 * fVar2;
    }
    fVar6 = g_heroPosition.x + fVar6;
    fVar2 = fVar1;
    if (0.0 - fVar8 < 0.0) {
      fVar2 = local_a0[0].z * fVar7;
    }
    fVar3 = fVar1;
    if (0.0 - fVar8 < 0.0) {
      fVar3 = local_a0[0].y * fVar7;
    }
    *(float *)((int)p1 + 0x30) = fVar6;
    if (0.0 - fVar8 < 0.0) {
      fVar1 = local_a0[0].x * fVar7;
    }
    fVar5 = g_heroPosition.y + fVar5;
    if (fVar8 - 0.0 < 0.0) {
      fVar2 = local_a0[0].z * fVar7;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar3 = local_a0[0].y * fVar7;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar1 = local_a0[0].x * fVar7;
    }
    *(float *)((int)p1 + 0x34) = fVar5;
    fVar4 = g_heroPosition.z + fVar4;
    *(float *)((int)p1 + 0x38) = fVar4;
    fVar7 = g_heroPosition.w;
    *(float *)((int)p1 + 0x30) = fVar6 + fVar1;
    *(float *)((int)p1 + 0x3c) = fVar7;
    *(float *)((int)p1 + 0x34) = fVar5 + fVar3;
    *(float *)((int)p1 + 0x38) = fVar4 + fVar2;
    *(undefined2 *)((int)pvVar9 + 0x8a) = 1;
  }
  else if (exitFlags == 2) {
    GameCamera.blender.reqType = '\0';
    *(undefined2 *)((int)p1 + 0x7e) = 2;
    GameCamera.blender.reqPosInterpAdd = 0.018;
    GameCamera.blender.reqQuatInterpAdd = 0.018;
  }
  else if (exitFlags == 1) {
    *(undefined2 *)((int)p1 + 0x7e) = 3;
  }
  else if (exitFlags == 4) {
    GameCamera.blender.reqType = '\0';
    *(undefined2 *)((int)p1 + 0x7e) = 5;
    GameCamera.blender.reqPosInterpAdd = 0.018;
    GameCamera.blender.reqQuatInterpAdd = 0.018;
  }
  return;
}


// 0x0048420 (0x18 bytes)
void DeactivateMobyDrivenCamAccel(void)

{
  *(undefined1 *)((int)GameCamera.pCurrentUpdCam + 0x88) = 1;
  return;
}


// 0x0048438 (0xc8 bytes)
void InitCamera_5(UpdateCam *pCam)

{
  undefined4 *puVar1;
  Vec4 aVStack_60 [4];
  
  puVar1 = (undefined4 *)pCam->control;
  puVar1[0x30] = 4;
  puVar1[0x14] = 0x3d4ccccd;
  puVar1[0x15] = 0x3e99999a;
  puVar1[0x16] = 0x3f800000;
  *(undefined2 *)(puVar1 + 0x17) = 1;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[4] = 0x3e99999a;
  puVar1[5] = 0x3e99999a;
  puVar1[6] = 0x3f800000;
  *(undefined2 *)(puVar1 + 7) = 1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  FastEulerToMtx1(aVStack_60,(longlong)(int)pCam + 0x40);
  FastApplyTransform((Vec4 *)pCam,aVStack_60);
  (pCam->activation).deactivate = 0;
  return;
}


// 0x0048510 (0x47c bytes)
void UpdateMobyDrivenCam(UpdateCam *pCam)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar5;
  longlong lVar4;
  float *speed;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  Vec4 aVStack_80 [5];
  
  lVar3 = (longlong)(int)pCam;
  pvVar2 = pCam->control;
  cVar1 = pCam->subType;
  if (cVar1 == '\x01') {
    pCam->pos[0] = *(float *)((int)pvVar2 + 0x80);
    pCam->pos[1] = *(float *)((int)pvVar2 + 0x84);
    pCam->pos[2] = *(float *)((int)pvVar2 + 0x88);
    pCam->pos[3] = *(float *)((int)pvVar2 + 0x8c);
    pCam->rot[0] = *(float *)((int)pvVar2 + 0x90);
    pCam->rot[1] = *(float *)((int)pvVar2 + 0x94);
    pCam->rot[2] = *(float *)((int)pvVar2 + 0x98);
    pCam->rot[3] = *(float *)((int)pvVar2 + 0x9c);
  }
  else if (cVar1 == '\x02') {
    FastDecTimerS32((int)pvVar2 + 0xe0);
    dVar6 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar2 + 0xe4));
    dVar6 = (double)(float)((double)(longlong)
                                    (*(int *)((int)pvVar2 + 0xe4) - *(int *)((int)pvVar2 + 0xe0)) /
                           dVar6);
    MB_CosineInterpolateUnitVec(dVar6,lVar3 + 0x30,lVar3 + 0x30,(int)pvVar2 + 0x80);
    MB_CosineInterpolateAngVec(dVar6,lVar3 + 0x40,lVar3 + 0x40,(int)pvVar2 + 0x90);
  }
  else if (cVar1 == '\x03') {
    iVar5 = FastDecTimerS32((int)pvVar2 + 0xe0);
    if (iVar5 == 0) {
      dVar6 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar2 + 0xe4));
      lVar4 = (longlong)(*(int *)((int)pvVar2 + 0xe4) - *(int *)((int)pvVar2 + 0xe0));
      dVar8 = (double)(float)((double)lVar4 / dVar6);
      ____Camera_CalcPolarToTarget
                (dVar6,(double)lVar4,(int)pvVar2 + 0xe8,(int)pvVar2 + 0x80,&g_heroPosition);
      dVar6 = (double)FastDiffRots
                                ((double)*(float *)((int)pvVar2 + 0xe8),
                                 (double)*(float *)((int)pvVar2 + 0xfc));
      dVar7 = (double)FastDiffRots
                                ((double)*(float *)((int)pvVar2 + 0x98),
                                 (double)GameCamera.rot.radius);
      if (((0.3490658402442932 < dVar6) && (dVar7 < -0.3490658402442932)) ||
         ((dVar6 < -0.3490658402442932 && (0.3490658402442932 < dVar7)))) {
        dVar6 = (double)(*(float *)((int)pvVar2 + 0xe8) - *(float *)((int)pvVar2 + 0xfc));
        if (((dVar6 < 0.0) && (0.0 < dVar7)) || ((0.0 < dVar6 && (dVar7 < 0.0)))) {
          dVar6 = -dVar6;
        }
        dVar6 = (double)MB_CosineInterpolate(0,dVar6,dVar8);
        dVar6 = (double)(float)((double)*(float *)((int)pvVar2 + 0xfc) + dVar6);
      }
      else {
        dVar6 = (double)MB_lerpRotCosine
                                  ((double)*(float *)((int)pvVar2 + 0xfc),
                                   (double)*(float *)((int)pvVar2 + 0xe8),dVar8);
      }
      *(float *)((int)pvVar2 + 0xfc) = (float)dVar6;
      dVar6 = (double)MB_catmullRom
                                ((double)*(float *)((int)pvVar2 + 0x124),0,0x3ff0000000000000,
                                 (double)*(float *)((int)pvVar2 + 0x128),dVar8);
      *(float *)((int)pvVar2 + 0x104) =
           (float)((double)(float)((double)*(float *)((int)pvVar2 + 0xf0) -
                                  (double)*(float *)((int)pvVar2 + 0x104)) * dVar6 +
                  (double)*(float *)((int)pvVar2 + 0x104));
      dVar6 = (double)MB_lerpRotCosine
                                ((double)*(float *)((int)pvVar2 + 0x100),
                                 (double)*(float *)((int)pvVar2 + 0xec),dVar8);
      iVar5 = (int)pvVar2 + 0x110;
      *(float *)((int)pvVar2 + 0x100) = (float)dVar6;
      MB_CosineInterpolateUnitVec(dVar8,iVar5,iVar5,&g_heroPosition);
      Camera_ClampAngles(lVar3 + 0x30,(int)pvVar2 + 0xfc,iVar5);
      MB_CosineInterpolateAngVec(dVar8,lVar3 + 0x40,lVar3 + 0x40,(int)pvVar2 + 0x90);
    }
    else {
      pCam->pos[0] = *(float *)((int)pvVar2 + 0x80);
      pCam->pos[1] = *(float *)((int)pvVar2 + 0x84);
      pCam->pos[2] = *(float *)((int)pvVar2 + 0x88);
      pCam->pos[3] = *(float *)((int)pvVar2 + 0x8c);
      pCam->rot[0] = *(float *)((int)pvVar2 + 0x90);
      pCam->rot[1] = *(float *)((int)pvVar2 + 0x94);
      pCam->rot[2] = *(float *)((int)pvVar2 + 0x98);
      pCam->rot[3] = *(float *)((int)pvVar2 + 0x9c);
    }
  }
  else {
    speed = (float *)(uint)*(ushort *)((int)pvVar2 + 0x1c);
    if (*(ushort *)((int)pvVar2 + 0x1c) == 1) {
      fVar9 = Cam_InterpValues(pCam->pos[0],*(float *)((int)pvVar2 + 0x80),
                               *(float *)((int)pvVar2 + 0x10),*(float *)((int)pvVar2 + 0x14),
                               *(float *)((int)pvVar2 + 0x18),(float *)0x1);
      pCam->pos[0] = fVar9;
      fVar9 = Cam_InterpValues(pCam->pos[1],*(float *)((int)pvVar2 + 0x84),
                               *(float *)((int)pvVar2 + 0x10),*(float *)((int)pvVar2 + 0x14),
                               *(float *)((int)pvVar2 + 0x18),speed);
      pCam->pos[1] = fVar9;
      fVar9 = Cam_InterpValues(pCam->pos[2],*(float *)((int)pvVar2 + 0x88),
                               *(float *)((int)pvVar2 + 0x10),*(float *)((int)pvVar2 + 0x14),
                               *(float *)((int)pvVar2 + 0x18),speed);
      pCam->pos[2] = fVar9;
    }
    if (*(short *)((int)pvVar2 + 0x5c) == 1) {
      dVar6 = (double)Cam_InterpAngles((double)pCam->rot[0],(double)*(float *)((int)pvVar2 + 0x90),
                                       (double)*(float *)((int)pvVar2 + 0x50),
                                       (double)*(float *)((int)pvVar2 + 0x54),
                                       (double)*(float *)((int)pvVar2 + 0x58));
      pCam->rot[0] = (float)dVar6;
      dVar6 = (double)Cam_InterpAngles((double)pCam->rot[1],(double)*(float *)((int)pvVar2 + 0x94),
                                       (double)*(float *)((int)pvVar2 + 0x50),
                                       (double)*(float *)((int)pvVar2 + 0x54),
                                       (double)*(float *)((int)pvVar2 + 0x58));
      pCam->rot[1] = (float)dVar6;
      dVar6 = (double)Cam_InterpAngles((double)pCam->rot[2],(double)*(float *)((int)pvVar2 + 0x98),
                                       (double)*(float *)((int)pvVar2 + 0x50),
                                       (double)*(float *)((int)pvVar2 + 0x54),
                                       (double)*(float *)((int)pvVar2 + 0x58));
      pCam->rot[2] = (float)dVar6;
    }
  }
  FastEulerToMtx1(aVStack_80,lVar3 + 0x40);
  FastApplyTransform((Vec4 *)pCam,aVStack_80);
  return;
}


// 0x004898c (0x8 bytes)
int ActivateCamera_5(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}


// 0x0048998 (0x64 bytes)
void UpdateCamera_5(UpdateCam *pCam)

{
  void *pvVar1;
  
  pvVar1 = pCam->control;
  UpdateMobyDrivenCam(pCam);
  if (*(int *)((int)pvVar1 + 0x120) != 0) {
    pCam->bumped = '\0';
    Camera_CollSphereBump(0x3fe0000000000000,(longlong)(int)pCam + 0x30);
  }
  return;
}


// 0x00489fc (0x4 bytes)
void STUB_000489fc(...)

{
  return;
}


