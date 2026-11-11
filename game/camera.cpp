// game/camera.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 50 functions, 0x4fee8-0x55aa4
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/space.h"
#include "game/update/moby1005.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x004fee8 (0x14 bytes)
void SECTION_HEADER_CAMERA(void)

{
  DAT_0071ea2c = 0x10000;
  return;
}


// 0x004ff00 (0xc bytes)
void ____Cam_SetTweak_71ea50(double param_1)

{
  DAT_0071ea50 = (float)param_1;
  return;
}


// 0x004ff0c (0x1c bytes)
void Camera_ClearPolar(float *pol)

{
  *pol = 0.0;
  pol[1] = 0.0;
  pol[2] = 0.0;
  pol[3] = 0.0;
  pol[4] = 0.0;
  return;
}


// 0x004ff28 (0x68 bytes)
void Cam_CopyRotWrapped(float wrap,float *dst,float *src)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = (double)FastWrapRot(*src,wrap);
  fVar1 = src[1];
  *dst = (float)dVar3;
  fVar2 = src[2];
  dst[1] = fVar1;
  fVar1 = src[3];
  dst[2] = fVar2;
  fVar2 = src[4];
  dst[3] = fVar1;
  dst[4] = fVar2;
  return;
}


// 0x004ff90 (0x70 bytes)
void BackupCurrentCam(void)

{
  FastMemCopy(&BackupCam,GameCamera.pCurrentUpdCam,0xa0);
  FastMemCopy(&DAT_00953d60,&CamControlCurrent,0x280);
  BackupCam.control = &DAT_00953d60;
  return;
}


// 0x0050000 (0x64 bytes)
void Camera_AddPostUpdFunc(void *func)

{
  void **ppvVar1;
  int iVar2;
  
  if (CamPostUpdRoutineCnt < 0x10) {
    iVar2 = 0;
    if (0 < CamPostUpdRoutineCnt) {
      ppvVar1 = CamPostUpdRoutines;
      do {
        if (func == *ppvVar1) {
          return;
        }
        iVar2 = iVar2 + 1;
        ppvVar1 = ppvVar1 + 1;
      } while (iVar2 < CamPostUpdRoutineCnt);
    }
    ppvVar1 = CamPostUpdRoutines + CamPostUpdRoutineCnt;
    CamPostUpdRoutineCnt = CamPostUpdRoutineCnt + 1;
    *ppvVar1 = func;
  }
  return;
}


// 0x0050064 (0x90 bytes)
void ExecuteCamPostUpdFuncs(void)

{
  int iVar1;
  void **ppvVar2;
  
  iVar1 = 0;
  if (0 < CamPostUpdRoutineCnt) {
    ppvVar2 = CamPostUpdRoutines;
    do {
                    /* WARNING: Load size is inaccurate */
      (***ppvVar2)();
      iVar1 = iVar1 + 1;
      ppvVar2 = ppvVar2 + 1;
    } while (iVar1 < CamPostUpdRoutineCnt);
  }
  CamPostUpdRoutineCnt = 0;
  return;
}


// 0x00500f4 (0x58 bytes)
UpdateCam * Camera_FindCameraOfType(int type)

{
  short *psVar1;
  longlong lVar2;
  
  lVar2 = 0;
  psVar1 = &UpdateCams[0].type;
  do {
    if (*psVar1 == type) {
      return (UpdateCam *)((int)UpdateCams[0].mtx + (int)(lVar2 << 7) + (int)(lVar2 << 5));
    }
    lVar2 = lVar2 + 1;
    psVar1 = psVar1 + 0x50;
  } while ((int)lVar2 < 0x30);
  return (UpdateCam *)0x0;
}


// 0x005014c (0x58 bytes)
UpdateCam * Camera_FindCameraOfImportIdx(int idx)

{
  short *psVar1;
  longlong lVar2;
  
  lVar2 = 0;
  psVar1 = &UpdateCams[0].importCameraIdx;
  do {
    if (*psVar1 == idx) {
      return (UpdateCam *)((int)UpdateCams[0].mtx + (int)(lVar2 << 7) + (int)(lVar2 << 5));
    }
    lVar2 = lVar2 + 1;
    psVar1 = psVar1 + 0x50;
  } while ((int)lVar2 < 0x30);
  return (UpdateCam *)0x0;
}


// 0x00501a4 (0x3c bytes)
// strings: 00953fe0: 'None'


void Camera_FreeUpdateCam(UpdateCam *pCam)

{
  UpdateCamsUsed[(int)pCam[-0xee91].rot / 0xa0] = '\0';
  return;
}


// 0x00501e8 (0x98 bytes)
float Cam_InterpValues
                (float current,float target,float gain,float damp,float limit,float *speed)

{
  float fVar1;
  float fVar2;
  float *in_r5;
  
  fVar1 = *in_r5 + ((target - current) * gain - damp * *in_r5);
  *in_r5 = fVar1;
  if (limit != 0.0) {
    if (fVar1 <= limit) {
      fVar2 = -limit;
      if (fVar1 < fVar2) {
        *in_r5 = fVar2;
        fVar1 = fVar2;
      }
    }
    else {
      *in_r5 = limit;
      fVar1 = limit;
    }
  }
  fVar2 = ABS(target - current);
  if (fVar1 <= fVar2) {
    fVar2 = -fVar2;
    if (fVar1 < fVar2) {
      *in_r5 = fVar2;
      fVar1 = fVar2;
    }
  }
  else {
    *in_r5 = fVar2;
    fVar1 = fVar2;
  }
  return current + fVar1;
}


// 0x0050288 (0x110 bytes)
void Cam_InterpAngles
               (double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               undefined8 param_6,undefined8 param_7,float *param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FastDiffRots(param_2,param_1);
  fVar1 = (float)((double)*param_8 +
                 (double)(float)(dVar2 * param_3 - (double)(float)(param_4 * (double)*param_8)));
  dVar3 = (double)fVar1;
  *param_8 = fVar1;
  if (param_5 != 0.0) {
    if (dVar3 <= param_5) {
      param_5 = -param_5;
      if (dVar3 < param_5) {
        *param_8 = (float)param_5;
        dVar3 = param_5;
      }
    }
    else {
      *param_8 = (float)param_5;
      dVar3 = param_5;
    }
  }
  dVar2 = ABS(dVar2);
  if (dVar3 <= dVar2) {
    dVar2 = -dVar2;
    if (dVar3 < dVar2) {
      *param_8 = (float)dVar2;
      dVar3 = dVar2;
    }
  }
  else {
    *param_8 = (float)dVar2;
    dVar3 = dVar2;
  }
  FastWrapRot((float)param_1,(float)dVar3);
  return;
}


// 0x0050398 (0x20 bytes)
void Camera_DeactivateCurrent(void)

{
  void *pvVar1;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x7e) = 1;
  *(undefined1 *)((int)pvVar1 + 0x7d) = 0;
  return;
}


// 0x00503b8 (0x78 bytes)
void Camera_handleCollWithHero(UpdateCam *pCam)

{
  if (pCam->type == 0) {
    if (GameCamera.field17_0x1b4.piece<160,4>() == 0) {
      GameCamera.field17_0x1b4.piece<160,4>() = M1016_00183ea0(0x951500);
    }
  }
  else if (GameCamera.field17_0x1b4.piece<160,4>() != 0) {
    DeleteMoby((MobyInstance *)GameCamera.field17_0x1b4.piece<160,4>());
    GameCamera.field17_0x1b4[0xa0] = '\0';
    GameCamera.field17_0x1b4[0xa1] = '\0';
    GameCamera.field17_0x1b4[0xa2] = '\0';
    GameCamera.field17_0x1b4[0xa3] = '\0';
  }
  return;
}


// 0x0050430 (0x5c bytes)
void Camera_runSetupToNewCam(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)
            ((int)&g_CameraVTable[0].init +
            (int)((longlong)pCam->funcIdx << 4) + (int)((longlong)pCam->funcIdx << 2));
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)();
  }
  return;
}


// 0x005048c (0x3a0 bytes)
void Camera_switchToNewCam(UpdateCam *pNewCam)

{
  f32 fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  s16 sVar8;
  u32 uVar10;
  ulonglong uVar9;
  uint uVar11;
  char cVar12;
  
  sVar8 = GameCamera.blender.state;
  pvVar7 = GameCamera.pCurrentUpdCam;
  uVar9 = (ulonglong)(int)pNewCam;
  cVar12 = '\0';
  fVar4 = (pNewCam->activation).blendSpeed;
  sVar3 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x7e);
  uVar11 = (uint)(ushort)GameCamera.blender.state;
  fVar1 = (pNewCam->activation).blendSpeed;
  iVar5 = *(int *)(ImportCameras + (int)((longlong)pNewCam->importCameraIdx << 5) + 0x1c);
  if (iVar5 != 0) {
    cVar12 = *(char *)(iVar5 + 0x1d);
  }
  if (sVar3 == 4) {
    pNewCam->active = 1;
  }
  else if (((sVar3 == 2) || (cVar12 == '\x01')) || (cVar12 == '\x05')) {
    if (cVar12 == '\x01') {
      GameCamera.blender.reqType = '\0';
      GameCamera.blender.reqQuatInterpAdd = fVar1;
      GameCamera.blender.reqPosInterpAdd = fVar1;
      if ((int)fVar4 < 1) {
        GameCamera.blender.reqPosInterpAdd = 0.018;
        GameCamera.blender.reqQuatInterpAdd = 0.018;
      }
    }
    else if (cVar12 == '\x05') {
      GameCamera.blender.reqType = '\x02';
      uVar10 = 0x28;
      if (0 < (int)fVar4) {
        uVar10 = FastDoubleToInt();
      }
      GameCamera.blender.reqInterpFrames = uVar10;
      uVar11 = (uint)(ushort)GameCamera.blender.state;
    }
    GameCamera.blender.state = (short)(ZERO_MASK(uVar11)) + 2;
  }
  else if (((sVar3 == 3) || (sVar3 == 5)) || ((cVar12 == '\x03' || (cVar12 == '\x06')))) {
    pNewCam->pos[0] = *(float *)((int)GameCamera.pCurrentUpdCam + 0x30);
    pNewCam->pos[1] = *(float *)((int)pvVar7 + 0x34);
    pNewCam->pos[2] = *(float *)((int)pvVar7 + 0x38);
    pNewCam->pos[3] = *(float *)((int)pvVar7 + 0x3c);
                    /* WARNING: Load size is inaccurate */
    pNewCam->mtx[0] = *pvVar7;
    pNewCam->mtx[1] = *(float *)((int)pvVar7 + 4);
    pNewCam->mtx[2] = *(float *)((int)pvVar7 + 8);
    pNewCam->mtx[3] = *(float *)((int)pvVar7 + 0xc);
    pNewCam->mtx[4] = *(float *)((int)pvVar7 + 0x10);
    pNewCam->mtx[5] = *(float *)((int)pvVar7 + 0x14);
    pNewCam->mtx[6] = *(float *)((int)pvVar7 + 0x18);
    pNewCam->mtx[7] = *(float *)((int)pvVar7 + 0x1c);
    pNewCam->mtx[8] = *(float *)((int)pvVar7 + 0x20);
    pNewCam->mtx[9] = *(float *)((int)pvVar7 + 0x24);
    pNewCam->mtx[10] = *(float *)((int)pvVar7 + 0x28);
    fVar2 = *(float *)((int)pvVar7 + 0x2c);
    (pNewCam->activation).activate = '\x02';
    pNewCam->mtx[0xb] = fVar2;
    if ((*(short *)((int)pvVar7 + 0x7e) == 5) || (cVar12 == '\x06')) {
      GameCamera.blender.reqType = '\0';
      GameCamera.blender.reqPosInterpAdd = fVar1;
      if (((int)fVar4 < 1) && (GameCamera.blender.reqPosInterpAdd = 0.018, Level == Novalis)) {
        GameCamera.blender.reqPosInterpAdd = 0.01;
      }
      GameCamera.blender.state = (short)(ZERO_MASK((uint)(ushort)sVar8)) + 2;
      GameCamera.blender.reqQuatInterpAdd = GameCamera.blender.reqPosInterpAdd;
    }
  }
  else {
    pNewCam->active = 1;
  }
  *(undefined2 *)((int)pvVar7 + 0x7e) = 0;
  *(undefined1 *)((int)pvVar7 + 0x7d) = 0;
  *(undefined2 *)((int)pvVar7 + 0x8e) = 0;
  GameCamera.pLastUpdCam = pvVar7;
  FastMemCopy(&CamControlLast,&CamControlCurrent,0x280);
  *(undefined **)((int)GameCamera.pLastUpdCam + 0x70) = &CamControlLast;
  GameCamera.pCurrentUpdCam = pNewCam;
  pNewCam->control = &CamControlCurrent;
  GameCamera.camTimer = 0;
  puVar6 = *(undefined4 **)
            ((int)&g_CameraVTable[0].init +
            (int)((longlong)pNewCam->funcIdx << 4) + (int)((longlong)pNewCam->funcIdx << 2));
  if (puVar6 != (undefined4 *)0x0) {
    (*(code *)*puVar6)(uVar9);
    uVar9 = ZEXT48(GameCamera.pCurrentUpdCam);
  }
  FastMemCopy(&BackupCam,uVar9,0xa0);
  FastMemCopy(&DAT_00953d60,&CamControlCurrent,0x280);
  BackupCam.control = &DAT_00953d60;
  fVar4 = pNewCam->pos[1];
  fVar2 = pNewCam->pos[2];
  if (ControlMode == 0) {
    GameCamera.field8_0x14c = (char  [4])pNewCam->pos[3];
    GameCamera.posX = pNewCam->pos[0];
    GameCamera.posY = fVar4;
    GameCamera.posZ = fVar2;
  }
  pNewCam->lPos[0] = pNewCam->pos[0];
  pNewCam->lPos[1] = fVar4;
  pNewCam->lPos[2] = fVar2;
  return;
}


// 0x005082c (0x258 bytes)
int Camera_ActivationCheckPriority(UpdateCam *pCam,UpdateCam *pCompare)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  
  bVar1 = (pCam->activation).priority;
  if (bVar1 == 0) {
    return 0;
  }
  sVar2 = pCam->type;
  puVar3 = *(undefined4 **)
            ((int)&g_CameraVTable[0].activate +
            (int)((longlong)pCam->funcIdx << 4) + (int)((longlong)pCam->funcIdx << 2));
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = (*(code *)*puVar3)(pCam,pCompare);
    if (iVar4 == -1) {
      return 0;
    }
    bVar1 = (pCam->activation).priority;
    sVar2 = pCam->type;
    if (iVar4 == 1) {
      return 1;
    }
  }
  iVar4 = (pCam->activation).activationType;
  if (iVar4 < 4) {
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        return 0;
      }
    }
    else {
      if (2 < iVar4) {
        return 0;
      }
      if ((pCam->activation).activate == '\0') {
        return 0;
      }
    }
    if (((pCompare == (UpdateCam *)0x0) || ((pCompare->activation).deactivate != 0)) ||
       ((byte)(pCompare->activation).priority < bVar1)) {
      return 1;
    }
  }
  else if (iVar4 < 7) {
    if (((iVar4 < 5) &&
        (((pCompare == (UpdateCam *)0x0 || ((pCompare->activation).deactivate != 0)) ||
         ((byte)(pCompare->activation).priority < bVar1)))) &&
       (iVar4 = MB_IsPntInCuboid
                          (&g_heroPosition,
                           (longlong)
                           *(int *)(*(int *)(ImportCameras +
                                             (int)((longlong)pCam->importCameraIdx << 5) + 0x1c) +
                                   0xc)), iVar4 != 0)) {
      return 1;
    }
  }
  else if (((iVar4 < 8) && (sVar2 == g_HeroRequestedCamType)) &&
          (((pCompare->activation).deactivate != 0 ||
           ((byte)(pCompare->activation).priority < bVar1)))) {
    if (sVar2 != 3) {
      return 1;
    }
    iVar4 = *(int *)(*(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c) +
                    0x24);
    if ((-1 < iVar4) &&
       ((DAT_0096a240 != *(int *)(DAT_00a1a85c + iVar4 * 0x20 + 0x10) || (DAT_0096a250 != 0)))) {
      return 0;
    }
    return 1;
  }
  return 0;
}


// 0x0050a84 (0x5c bytes)
void Camera_Exit(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)
            ((int)&g_CameraVTable[0].exit +
            (int)((longlong)pCam->funcIdx << 4) + (int)((longlong)pCam->funcIdx << 2));
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)();
  }
  return;
}


// 0x0050ae0 (0x224 bytes)
// strings: 00953fe0: 'None'


int UpdateAllCameras(void)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  UpdateCam *pCam;
  int iVar6;
  void **ppvVar7;
  UpdateCam *pCompare;
  
  pCompare = (UpdateCam *)GameCamera.pCurrentUpdCam;
  puVar3 = *(undefined4 **)
            ((int)&g_CameraVTable[0].exit +
            (int)((longlong)*(short *)((int)GameCamera.pCurrentUpdCam + 0x8c) << 4) +
            (int)((longlong)*(short *)((int)GameCamera.pCurrentUpdCam + 0x8c) << 2));
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)*puVar3)(GameCamera.pCurrentUpdCam);
  }
  iVar6 = 0;
  bVar4 = false;
  do {
    if (UpdateCamsUsed[iVar6] != '\0') {
      pCam = UpdateCams + iVar6;
      if ((pCam != pCompare) && (iVar5 = Camera_ActivationCheckPriority(pCam,pCompare), iVar5 != 0))
      {
        bVar4 = true;
        pCompare = pCam;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x30);
  if (bVar4) {
    Camera_switchToNewCam(pCompare);
  }
  puVar3 = *(undefined4 **)
            ((int)&g_CameraVTable[0].update +
            (int)((longlong)pCompare->funcIdx << 4) + (int)((longlong)pCompare->funcIdx << 2));
  if (pCompare->type == 0) {
    if (GameCamera.field17_0x1b4.piece<160,4>() == 0) {
      GameCamera.field17_0x1b4.piece<160,4>() = M1016_00183ea0(0x951500);
    }
  }
  else if (GameCamera.field17_0x1b4.piece<160,4>() != 0) {
    DeleteMoby((MobyInstance *)GameCamera.field17_0x1b4.piece<160,4>());
    GameCamera.field17_0x1b4[0xa0] = '\0';
    GameCamera.field17_0x1b4[0xa1] = '\0';
    GameCamera.field17_0x1b4[0xa2] = '\0';
    GameCamera.field17_0x1b4[0xa3] = '\0';
  }
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)*puVar3)(pCompare);
  }
  iVar6 = 0;
  fVar1 = pCompare->pos[1];
  pCompare->lPos[0] = pCompare->pos[0];
  fVar2 = pCompare->pos[2];
  pCompare->lPos[1] = fVar1;
  pCompare->lPos[2] = fVar2;
  if (0 < CamPostUpdRoutineCnt) {
    ppvVar7 = CamPostUpdRoutines;
    do {
                    /* WARNING: Load size is inaccurate */
      (***ppvVar7)();
      iVar6 = iVar6 + 1;
      ppvVar7 = ppvVar7 + 1;
    } while (iVar6 < CamPostUpdRoutineCnt);
  }
  CamPostUpdRoutineCnt = 0;
  return -1;
}


// 0x0050d20 (0x3a8 bytes)
// inlined: FastRSqrt @0x50ee0, FastRSqrt @0x5100c
void Camera_Pos2Polar3d
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  double dVar18;
  double dVar19;
  double dVar20;
  float local_90;
  float local_8c;
  float local_88;
  
  dVar7 = (double)param_6[1];
  dVar10 = (double)*param_6;
  dVar12 = (double)param_6[2];
  dVar19 = (double)(param_2[1] - param_3[1]);
  dVar20 = (double)(*param_2 - *param_3);
  dVar18 = (double)(param_2[2] - param_3[2]);
  fVar2 = SQRT((float)(dVar12 * dVar12 +
                      (double)(float)(dVar10 * dVar10 + (double)(float)(dVar7 * dVar7))));
  dVar17 = 0.0;
  dVar15 = 9.999999747378752e-05;
  dVar16 = 1.0;
  dVar14 = (double)((float)(dVar18 * dVar12 +
                           (double)(float)(dVar20 * dVar10 + (double)(float)(dVar19 * dVar7))) /
                   fVar2);
  dVar9 = dVar17;
  if (0.0 - fVar2 < 0.0) {
    dVar9 = (double)(float)(dVar7 * dVar14);
  }
  dVar11 = dVar17;
  if (0.0 - fVar2 < 0.0) {
    dVar11 = (double)(float)(dVar10 * dVar14);
  }
  dVar13 = dVar17;
  if (0.0 - fVar2 < 0.0) {
    dVar13 = (double)(float)(dVar12 * dVar14);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar9 = (double)(float)(dVar7 * dVar14);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar11 = (double)(float)(dVar10 * dVar14);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar13 = (double)(float)(dVar12 * dVar14);
  }
  fVar2 = (float)(dVar19 - dVar9);
  fVar3 = (float)(dVar20 - dVar11);
  fVar4 = (float)(dVar18 - dVar13);
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  dVar7 = (double)SQRT(fVar5);
  dVar10 = -1.0;
  dVar12 = 1.5707963705062866;
  dVar9 = dVar15;
  if (0.0 - dVar7 < 0.0) {
    dVar9 = dVar7;
  }
  if (dVar7 - 0.0 < 0.0) {
    dVar9 = dVar7;
  }
  fVar1 = (float)((double)(param_4[2] * fVar4 + *param_4 * fVar3 + param_4[1] * fVar2) / dVar9);
  fVar6 = fVar1;
  if (fVar1 - 0.0 < 0.0) {
    fVar6 = ABS(fVar1);
  }
  dVar9 = dVar16;
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = dVar10;
  }
  dVar14 = (double)(1.0 - fVar6);
  if ((double)(1.0 - fVar6) - 0.0 < 0.0) {
    dVar14 = dVar17;
  }
  dVar8 = -(double)((fVar6 * fVar6 * fVar6 * DAT_007358cc +
                    fVar6 * fVar6 * DAT_007358c8 + fVar6 * DAT_007358c4 + DAT_007358c0) *
                    (float)SQRT(dVar14) - 1.5707964);
  dVar14 = dVar17;
  dVar11 = dVar17;
  dVar13 = dVar17;
  if (dVar7 != 0.0) {
    fVar1 = 1.0 / SQRT(fVar5);
    fVar1 = -(fVar5 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar5 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar5 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar14 = (double)(fVar3 * fVar1);
    dVar11 = (double)(fVar2 * fVar1);
    dVar13 = (double)(fVar4 * fVar1);
  }
  fVar2 = -(float)(dVar8 * dVar9 - 1.5707963705062866);
  if ((float)((double)param_5[2] * dVar13 +
             (double)(float)((double)*param_5 * dVar14 +
                            (double)(float)((double)param_5[1] * dVar11))) - 0.0 < 0.0) {
    fVar2 = (float)(dVar8 * dVar9 - 1.5707963705062866);
  }
  *param_1 = fVar2;
  MB_RotateQuatAxisAngle(fVar2,&local_90,param_4);
  dVar7 = (double)(float)(dVar18 * dVar18 +
                         (double)(float)(dVar20 * dVar20 + (double)(float)(dVar19 * dVar19)));
  dVar9 = (double)(float)SQRT(dVar7);
  fVar2 = *param_6;
  fVar3 = param_6[1];
  fVar4 = param_6[2];
  if (dVar17 - dVar9 < 0.0) {
    dVar15 = dVar9;
  }
  if (dVar9 - dVar17 < 0.0) {
    dVar15 = dVar9;
  }
  dVar14 = (double)(float)((double)(float)((double)local_88 * dVar18 +
                                          (double)(float)((double)local_90 * dVar20 +
                                                         (double)(float)((double)local_8c * dVar19))
                                          ) / dVar15);
  dVar15 = dVar14;
  if (dVar14 - dVar17 < 0.0) {
    dVar15 = ABS(dVar14);
  }
  dVar11 = (double)(float)(dVar16 - dVar15);
  if ((double)(float)(dVar16 - dVar15) - dVar17 < 0.0) {
    dVar11 = dVar17;
  }
  dVar13 = dVar16;
  if (dVar14 - dVar17 < 0.0) {
    dVar13 = dVar10;
  }
  dVar11 = -(double)(float)((double)((float)((double)(float)(dVar15 * dVar15) * dVar15) *
                                     DAT_007358cc +
                                    (float)((double)(float)(dVar15 * dVar15) * (double)DAT_007358c8
                                           + (double)(float)(dVar15 * (double)DAT_007358c4 +
                                                            (double)DAT_007358c0))) *
                            (double)(float)SQRT(dVar11) - dVar12);
  dVar15 = dVar17;
  dVar10 = dVar17;
  dVar14 = dVar17;
  if (dVar9 != dVar17) {
    dVar15 = 1.0 / SQRT(dVar7);
    dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar15) * dVar15 - dVar16) *
                             (double)(float)(dVar15 * 0.5) + dVar15);
    dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar15) * dVar15 - dVar16) *
                             (double)(float)(dVar15 * 0.5) + dVar15);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar15) * dVar15 - dVar16) *
                            (double)(float)(dVar15 * 0.5) + dVar15);
    dVar15 = (double)(float)(dVar20 * dVar9);
    dVar10 = (double)(float)(dVar19 * dVar9);
    dVar14 = (double)(float)(dVar18 * dVar9);
  }
  param_1[2] = (float)SQRT(dVar7);
  fVar5 = (float)(dVar11 * dVar13 - dVar12);
  if ((double)(float)((double)fVar4 * dVar14 +
                     (double)(float)((double)fVar2 * dVar15 +
                                    (double)(float)((double)fVar3 * dVar10))) - dVar17 < 0.0) {
    fVar5 = -(float)(dVar11 * dVar13 - dVar12);
  }
  param_1[1] = fVar5;
  return;
}


// 0x00510d8 (0x2ec bytes)
// inlined: FastRSqrt @0x5115c, FastRSqrt @0x51214, FastRSqrt @0x512d0
void Camera_InitBlenderPolarHero(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  GPiece<4> local_40;
  float local_3c;
  float local_38;
  GPiece<16> local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = (g_heroMobyPtr->transform).v0.y;
  fVar2 = (g_heroMobyPtr->transform).v0.x;
  fVar3 = (g_heroMobyPtr->transform).v0.z;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  GameCamera.blender.pad_88.piece<8,4>() = 0.0;
  if (SQRT(fVar1) == 0.0) {
    GameCamera.blender.pad_88.piece<20,4>() = (g_heroMobyPtr->transform).v0.w;
    local_38 = 0.0;
    local_3c = 0.0;
  }
  else {
    local_38 = 1.0 / SQRT(fVar1);
    local_38 = -(fVar1 * local_38 * local_38 - 1.0) * local_38 * 0.5 + local_38;
    local_38 = -(fVar1 * local_38 * local_38 - 1.0) * local_38 * 0.5 + local_38;
    local_38 = -(fVar1 * local_38 * local_38 - 1.0) * local_38 * 0.5 + local_38;
    GameCamera.blender.pad_88.piece<8,4>() = fVar2 * local_38;
    local_3c = (g_heroMobyPtr->transform).v0.y * local_38;
    local_38 = (g_heroMobyPtr->transform).v0.z * local_38;
    GameCamera.blender.pad_88.piece<20,4>() = (g_heroMobyPtr->transform).v0.w;
  }
  fVar1 = (g_heroMobyPtr->transform).v2.y;
  local_20 = (g_heroMobyPtr->transform).v2.x;
  fVar2 = (g_heroMobyPtr->transform).v2.z;
  fVar1 = fVar2 * fVar2 + local_20 * local_20 + fVar1 * fVar1;
  if (SQRT(fVar1) == 0.0) {
    GameCamera.blender.pad_88.piece<36,4>() = (g_heroMobyPtr->transform).v2.w;
    local_18 = 0.0;
    local_1c = 0.0;
    local_20 = 0.0;
  }
  else {
    local_18 = 1.0 / SQRT(fVar1);
    local_18 = -(fVar1 * local_18 * local_18 - 1.0) * local_18 * 0.5 + local_18;
    local_18 = -(fVar1 * local_18 * local_18 - 1.0) * local_18 * 0.5 + local_18;
    local_18 = -(fVar1 * local_18 * local_18 - 1.0) * local_18 * 0.5 + local_18;
    local_20 = local_20 * local_18;
    local_1c = (g_heroMobyPtr->transform).v2.y * local_18;
    local_18 = (g_heroMobyPtr->transform).v2.z * local_18;
    GameCamera.blender.pad_88.piece<36,4>() = (g_heroMobyPtr->transform).v2.w;
  }
  GameCamera.blender.pad_88.piece<12,4>() = local_3c;
  GameCamera.blender.pad_88.piece<16,4>() = local_38;
  GameCamera.blender.pad_88.piece<24,4>() = local_20;
  GameCamera.blender.pad_88.piece<28,4>() = local_1c;
  GameCamera.blender.pad_88.piece<32,4>() = local_18;
  Camera_Pos2Polar3d(0x9516a0,0x9516f0,&g_heroPosition,local_40,local_30,&local_20);
  GameCamera.blender.blendWork.x = GameCamera.blender.pendingCam1.x;
  GameCamera.blender.blendWork.y = GameCamera.blender.pendingCam1.y;
  GameCamera.blender.blendWork.z = GameCamera.blender.pendingCam1.z;
  GameCamera.blender.blendWork.w = GameCamera.blender.pendingCam1.w;
  return;
}


// 0x00513c4 (0x98 bytes)
void Camera_CopyLastQuatToPolar(void)

{
  if (GameCamera.blender.type == '\0') {
    GameCamera.blender.pendingCam0.x = GameCamera.blender.activeCam0.x;
    GameCamera.blender.pendingCam0.y = GameCamera.blender.activeCam0.y;
    GameCamera.blender.pendingCam0.z = GameCamera.blender.activeCam0.z;
    GameCamera.blender.pendingCam0.w = GameCamera.blender.activeCam0.w;
    if (GameCamera.blender.reqType == '\x02') {
      GameCamera.blender.pendingCam0.x = DAT_00969e20 + GameCamera.blender.activeCam0.x;
      GameCamera.blender.pendingCam0.y = DAT_00969e24 + GameCamera.blender.activeCam0.y;
      GameCamera.blender.pendingCam0.z = DAT_00969e28 + GameCamera.blender.activeCam0.z;
      GameCamera.blender.pendingCam0.w = DAT_00969e2c;
    }
    GameCamera.blender.pendingCam1.x = GameCamera.blender.activeCam1.x;
    GameCamera.blender.pendingCam1.y = GameCamera.blender.activeCam1.y;
    GameCamera.blender.pendingCam1.z = GameCamera.blender.activeCam1.z;
    GameCamera.blender.pendingCam1.w = GameCamera.blender.activeCam1.w;
  }
  return;
}


// 0x005145c (0x58 bytes)
void Camera_CopyLastPolarToQuat(void)

{
  if (GameCamera.blender.type != '\0') {
    GameCamera.blender.activeCam0.x = GameCamera.blender.pendingCam0.x;
    GameCamera.blender.activeCam0.y = GameCamera.blender.pendingCam0.y;
    GameCamera.blender.activeCam0.z = GameCamera.blender.pendingCam0.z;
    GameCamera.blender.activeCam0.w = GameCamera.blender.pendingCam0.w;
    GameCamera.blender.activeCam1.x = GameCamera.blender.pendingCam1.x;
    GameCamera.blender.activeCam1.y = GameCamera.blender.pendingCam1.y;
    GameCamera.blender.activeCam1.z = GameCamera.blender.pendingCam1.z;
    GameCamera.blender.activeCam1.w = GameCamera.blender.pendingCam1.w;
  }
  return;
}


// 0x00514c0 (0x630 bytes)
// inlined: FastRSqrt @0x515e4, FastRSqrt @0x516a4, FastRSqrt @0x51768
void Camera_InitBlender(UpdateCam *pLast)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> local_50;
  GPiece<16> local_40;
  GPiece<32> local_30;
  
  lVar2 = (longlong)(int)pLast;
  if (GameCamera.blender.state == 1) {
    if (GameCamera.blender.reqType == '\0') {
      GameCamera.blender.activeCam0.x = pLast->pos[0];
      GameCamera.blender.activeCam0.y = pLast->pos[1];
      GameCamera.blender.activeCam0.z = pLast->pos[2];
      GameCamera.blender.activeCam0.w = pLast->pos[3];
      MB_TransformToQuat(0x951690,lVar2);
    }
    else if (GameCamera.blender.reqType == '\x02') {
      GameCamera.blender.pendingCam0.x = pLast->pos[0];
      GameCamera.blender.pendingCam0.y = pLast->pos[1];
      GameCamera.blender.pendingCam0.z = pLast->pos[2];
      GameCamera.blender.pendingCam0.w = pLast->pos[3];
      MB_TransformToQuat(0x951700,lVar2);
      Camera_InitBlenderPolarHero();
    }
    else {
      Camera_Pos2Polar3d(0x9516a0,lVar2 + 0x30,ZEXT48(GameCamera.pCurrentUpdCam) + 0x30,local_50,
                         local_40,local_30);
      MB_TransformToQuat(0x9516e0,lVar2);
      GameCamera.blender.pendingCam1.x = GameCamera.blender.blendWork.x;
      GameCamera.blender.pendingCam1.y = GameCamera.blender.blendWork.y;
      GameCamera.blender.pendingCam1.z = GameCamera.blender.blendWork.z;
      GameCamera.blender.pendingCam1.w = GameCamera.blender.blendWork.w;
    }
  }
  else {
    bVar1 = GameCamera.blender.reqType != '\x02';
    if (bVar1) {
      if (GameCamera.blender.reqType == '\x01') {
        GameCamera.blender.blendWork.x = GameCamera.blender.pendingCam1.x;
        GameCamera.blender.blendWork.y = GameCamera.blender.pendingCam1.y;
        GameCamera.blender.blendWork.z = GameCamera.blender.pendingCam1.z;
        GameCamera.blender.blendWork.w = GameCamera.blender.pendingCam1.w;
        if (GameCamera.blender.type == '\0') {
          GameCamera.blender.pendingCam0.x = GameCamera.blender.activeCam0.x;
          GameCamera.blender.pendingCam0.y = GameCamera.blender.activeCam0.y;
          GameCamera.blender.pendingCam0.z = GameCamera.blender.activeCam0.z;
          GameCamera.blender.pendingCam0.w = GameCamera.blender.activeCam0.w;
          if (!bVar1) {
            GameCamera.blender.pendingCam0.x = DAT_00969e20 + GameCamera.blender.activeCam0.x;
            GameCamera.blender.pendingCam0.y = DAT_00969e24 + GameCamera.blender.activeCam0.y;
            GameCamera.blender.pendingCam0.z = DAT_00969e28 + GameCamera.blender.activeCam0.z;
            GameCamera.blender.pendingCam0.w = DAT_00969e2c;
          }
          GameCamera.blender.pendingCam1.x = GameCamera.blender.activeCam1.x;
          GameCamera.blender.pendingCam1.y = GameCamera.blender.activeCam1.y;
          GameCamera.blender.pendingCam1.z = GameCamera.blender.activeCam1.z;
          GameCamera.blender.pendingCam1.w = GameCamera.blender.activeCam1.w;
          GameCamera.blender.blendWork.x = GameCamera.blender.pendingCam1.x;
          GameCamera.blender.blendWork.y = GameCamera.blender.pendingCam1.y;
          GameCamera.blender.blendWork.z = GameCamera.blender.pendingCam1.z;
          GameCamera.blender.blendWork.w = GameCamera.blender.pendingCam1.w;
        }
      }
      else if ((GameCamera.blender.reqType == '\0') && (GameCamera.blender.type != '\0')) {
        GameCamera.blender.activeCam0.x = GameCamera.blender.pendingCam0.x;
        GameCamera.blender.activeCam0.y = GameCamera.blender.pendingCam0.y;
        GameCamera.blender.activeCam0.z = GameCamera.blender.pendingCam0.z;
        GameCamera.blender.activeCam0.w = GameCamera.blender.pendingCam0.w;
        GameCamera.blender.activeCam1.x = GameCamera.blender.pendingCam1.x;
        GameCamera.blender.activeCam1.y = GameCamera.blender.pendingCam1.y;
        GameCamera.blender.activeCam1.z = GameCamera.blender.pendingCam1.z;
        GameCamera.blender.activeCam1.w = GameCamera.blender.pendingCam1.w;
      }
    }
    else {
      if (GameCamera.blender.type == '\0') {
        GameCamera.blender.pendingCam0.x = GameCamera.blender.activeCam0.x;
        GameCamera.blender.pendingCam0.y = GameCamera.blender.activeCam0.y;
        GameCamera.blender.pendingCam0.z = GameCamera.blender.activeCam0.z;
        GameCamera.blender.pendingCam0.w = GameCamera.blender.activeCam0.w;
        if (!bVar1) {
          GameCamera.blender.pendingCam0.x = DAT_00969e20 + GameCamera.blender.activeCam0.x;
          GameCamera.blender.pendingCam0.y = DAT_00969e24 + GameCamera.blender.activeCam0.y;
          GameCamera.blender.pendingCam0.z = DAT_00969e28 + GameCamera.blender.activeCam0.z;
          GameCamera.blender.pendingCam0.w = DAT_00969e2c;
        }
        GameCamera.blender.pendingCam1.x = GameCamera.blender.activeCam1.x;
        GameCamera.blender.pendingCam1.y = GameCamera.blender.activeCam1.y;
        GameCamera.blender.pendingCam1.z = GameCamera.blender.activeCam1.z;
        GameCamera.blender.pendingCam1.w = GameCamera.blender.activeCam1.w;
      }
      Camera_InitBlenderPolarHero();
    }
  }
  GameCamera.blender.state = 3;
  GameCamera.blender.type = GameCamera.blender.reqType;
  if (GameCamera.blender.reqType == '\0') {
    GameCamera.blender.field_1C = 0;
    GameCamera.blender.posInterp = GameCamera.blender.reqPosInterpAdd;
    GameCamera.blender.pose0.x = GameCamera.blender.activeCam0.x;
    GameCamera.blender.pose0.y = GameCamera.blender.activeCam0.y;
    GameCamera.blender.pose0.z = GameCamera.blender.activeCam0.z;
    GameCamera.blender.pose0.w = GameCamera.blender.activeCam0.w;
    GameCamera.blender.field_10 = 0;
    GameCamera.blender.quatInterp = GameCamera.blender.reqQuatInterpAdd;
    GameCamera.blender.pose1.x = GameCamera.blender.activeCam1.x;
    GameCamera.blender.pose1.y = GameCamera.blender.activeCam1.y;
    GameCamera.blender.pose1.z = GameCamera.blender.activeCam1.z;
    GameCamera.blender.pose1.w = GameCamera.blender.activeCam1.w;
  }
  else {
    auVar6 = ZEXT416(1);
    auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar6 = ZEXT416(0xffffffff);
    auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    auVar6 = loadVectorLeftIndexed(0x2f4,0x9513c0);
    auVar7.piece<0,4>() = auVar6.piece<0,4>() + auVar5.piece<0,4>();
    auVar7.piece<4,4>() = auVar6.piece<4,4>() + auVar5.piece<4,4>();
    auVar7.piece<12,4>() = auVar5.piece<12,4>();
    auVar7.piece<8,4>() = auVar6.piece<8,4>() + auVar5.piece<8,4>();
    auVar5.piece<0,12>() = auVar7.piece<0,12>();
    auVar5.piece<12,4>() = auVar6.piece<12,4>() + auVar7.piece<12,4>();
    iVar3 = GameCamera.blender.reqInterpFrames + 1;
    auVar6.piece<0,4>() = 0;
    auVar6.piece<4,12>() = auVar5.piece<0,12>() >> 0x40;
    auVar6 = auVar6 & (GPiece<16>)0xffffffff;
    auVar5 = vectorConvertFromSignedFixedPointWord(auVar5,0);
    GameCamera.blender.reqInterpFrames =
         storeVectorElementWordIndexed
                   (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x2f4,0x9513c0);
    auVar6 = loadVectorLeftIndexed(4,0x514b4);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar6 = vectorAddFloatingPoint
                       (auVar5,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar5 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar5);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    GameCamera.blender.blendStep =
         storeVectorElementWordIndexed
                   (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x2ec,0x9513c0);
    dVar4 = (double)FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)iVar3 + 0.5)));
    GameCamera.blender.blendStepInv = (f32)(1.0 / dVar4);
  }
  return;
}


// 0x0051af8 (0x228 bytes)
undefined8 Camera_BlendCamsPosQuat(int param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  GPiece<16> auStack_80;
  Vec4 aVStack_70 [4];
  
  dVar8 = 1.0;
  if ((param_2[3] == 1.0) && (*param_2 == 1.0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    dVar4 = (double)MB_CosineInterpolate(0,0x3ff0000000000000,(double)param_2[3]);
    dVar5 = (double)(DAT_00969e20 + param_2[0xc]);
    param_2[0xc] = DAT_00969e20 + param_2[0xc];
    dVar6 = (double)(DAT_00969e24 + param_2[0xd]);
    param_2[0xd] = DAT_00969e24 + param_2[0xd];
    dVar7 = (double)(DAT_00969e28 + param_2[0xe]);
    param_2[0xe] = DAT_00969e28 + param_2[0xe];
    param_2[0xf] = DAT_00969e2c;
    bVar1 = ControlMode == 0;
    fVar2 = (float)((double)(float)((double)*(float *)(param_1 + 0x30) - dVar5) * dVar4 + dVar5);
    param_2[0x10] = fVar2;
    param_2[0x11] =
         (float)((double)(float)((double)*(float *)(param_1 + 0x34) - dVar6) * dVar4 + dVar6);
    param_2[0x12] =
         (float)((double)(float)((double)*(float *)(param_1 + 0x38) - dVar7) * dVar4 + dVar7);
    if (bVar1) {
      GameCamera.posY = param_2[0x11];
      GameCamera.posZ = param_2[0x12];
      GameCamera.field8_0x14c = *(char (*) [4])(param_2 + 0x13);
      GameCamera.posX = fVar2;
    }
    MB_TransformToQuat(auStack_80,param_1);
    MB_CosineInterpolate(uVar3,dVar8,(double)*param_2);
    FastSlerp(param_2 + 0x14,param_2 + 8,auStack_80);
    FastQuaternionToMtx4Identity(param_2 + 0x14,aVStack_70);
    if (ControlMode == 0) {
      FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_70);
    }
    fVar2 = param_2[4] * DAT_0071f408 + param_2[3];
    param_2[3] = fVar2;
    if (dVar8 < (double)fVar2) {
      param_2[3] = 1.0;
    }
    fVar2 = param_2[1] * DAT_0071f408 + *param_2;
    *param_2 = fVar2;
    if (dVar8 < (double)fVar2) {
      *param_2 = 1.0;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// 0x0051d40 (0xa78 bytes)
// inlined: FastRSqrt @0x51f4c, FastRSqrt @0x52008, FastRSqrt @0x521f4, FastRSqrt @0x52614
undefined8 Camera_BlendCamsPolQuat(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
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
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  GPiece<16> local_160;
  undefined4 local_150 [4];
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float afStack_f0 [4];
  float afStack_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  longlong local_90;
  
  if ((int)param_2[3] < 1) {
    uVar6 = 1;
  }
  else {
    local_90 = (longlong)(int)param_2[3];
    dVar16 = 1.0;
    dVar7 = (double)MB_CosineInterpolate
                              (0x3ff0000000000000,(double)(longlong)(int)param_2[5],
                               (double)((float)local_90 * param_2[4]));
    dVar7 = (double)(float)(dVar16 / dVar7);
    if (GameCamera.blender.type == '\x02') {
      local_170 = param_2[8];
      local_16c = param_2[9];
      local_168 = param_2[10];
      local_140 = g_heroPosition.x;
      local_13c = g_heroPosition.y;
      local_138 = g_heroPosition.z;
      local_134 = g_heroPosition.w;
      local_164 = param_2[0xb];
      Camera_Pos2Polar3d(&local_a0,param_1 + 0xc,&local_140,&local_170,local_160,local_150);
    }
    else {
      local_140 = param_1[0xc];
      local_13c = param_1[0xd];
      local_138 = param_1[0xe];
      local_134 = param_1[0xf];
      fVar1 = (g_heroMobyPtr->transform).v0.y;
      local_170 = (g_heroMobyPtr->transform).v0.x;
      fVar2 = (g_heroMobyPtr->transform).v0.z;
      dVar9 = (double)(fVar2 * fVar2 + local_170 * local_170 + fVar1 * fVar1);
      if ((float)SQRT(dVar9) == 0.0) {
        local_164 = (g_heroMobyPtr->transform).v0.w;
        local_168 = 0.0;
        local_16c = 0.0;
        local_170 = 0.0;
      }
      else {
        dVar8 = 1.0 / SQRT(dVar9);
        dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar8) * dVar8 - dVar16) *
                                (double)(float)(dVar8 * 0.5) + dVar8);
        dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar8) * dVar8 - dVar16) *
                                (double)(float)(dVar8 * 0.5) + dVar8);
        local_168 = (float)(-(double)(float)((double)(float)(dVar9 * dVar8) * dVar8 - dVar16) *
                            (double)(float)(dVar8 * 0.5) + dVar8);
        local_170 = local_170 * local_168;
        local_16c = (g_heroMobyPtr->transform).v0.y * local_168;
        local_168 = (g_heroMobyPtr->transform).v0.z * local_168;
        local_164 = (g_heroMobyPtr->transform).v0.w;
      }
      local_a0 = 3.1415927;
      local_98 = 0.0;
      local_9c = 0.0;
    }
    dVar8 = (double)FastDiffRots((double)local_a0,(double)*param_2);
    dVar9 = (double)FastWrapRot(*param_2,(float)(dVar7 * dVar8));
    *param_2 = (float)dVar9;
    dVar9 = (double)FastDiffRots((double)local_9c,(double)param_2[1]);
    dVar9 = (double)FastWrapRot(param_2[1],(float)(dVar7 * dVar9));
    param_2[1] = (float)dVar9;
    fVar1 = (float)(dVar7 * (double)(float)((double)local_98 - (double)param_2[2]) +
                   (double)param_2[2]);
    param_2[2] = fVar1;
    fVar2 = SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c);
    dVar15 = 0.0;
    local_124 = local_164;
    fVar1 = fVar1 / fVar2;
    dVar9 = dVar15;
    if (0.0 - fVar2 < 0.0) {
      dVar9 = (double)(local_170 * fVar1);
    }
    dVar13 = dVar15;
    if (0.0 - fVar2 < 0.0) {
      dVar13 = (double)(local_16c * fVar1);
    }
    dVar14 = dVar15;
    if (0.0 - fVar2 < 0.0) {
      dVar14 = (double)(local_168 * fVar1);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar9 = (double)(local_170 * fVar1);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar13 = (double)(local_16c * fVar1);
    }
    if (fVar2 - 0.0 < 0.0) {
      dVar14 = (double)(local_168 * fVar1);
    }
    local_130 = (float)dVar9;
    local_12c = (float)dVar13;
    local_128 = (float)dVar14;
    MB_RotateQuatAxisAngle(*param_2,&local_130,&local_130);
    MB_RotateQuatAxisAngle(param_2[1],&local_130,&local_130);
    param_2[0x17] = local_134;
    iVar5 = ControlMode;
    param_2[0x14] = local_140 + local_130;
    param_2[0x15] = local_13c + local_12c;
    param_2[0x16] = local_138 + local_128;
    if (iVar5 == 0) {
      GameCamera.posY = param_2[0x15];
      GameCamera.posZ = param_2[0x16];
      GameCamera.field8_0x14c = *(char (*) [4])(param_2 + 0x17);
      GameCamera.posX = local_140 + local_130;
    }
    FastQuaternionToMtx4(param_2 + 0x10,&local_d0);
    fVar1 = local_a8 * param_1[2] + local_b0 * *param_1 + local_ac * param_1[1];
    fVar2 = -(local_ac * fVar1 - param_1[1]);
    fVar3 = -(local_b0 * fVar1 - *param_1);
    fVar1 = -(local_a8 * fVar1 - param_1[2]);
    dVar13 = -1.0;
    dVar14 = 1.5707963705062866;
    dVar9 = dVar16;
    if ((double)(fVar1 * local_b8 + fVar3 * local_c0 + fVar2 * local_bc) - dVar15 < 0.0) {
      dVar9 = dVar13;
    }
    dVar11 = (double)((local_c8 * fVar1 + local_d0 * fVar3 + local_cc * fVar2) /
                     SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2));
    dVar10 = dVar11;
    if (dVar11 - dVar15 < 0.0) {
      dVar10 = ABS(dVar11);
    }
    dVar12 = dVar16;
    if (dVar11 - dVar15 < 0.0) {
      dVar12 = dVar13;
    }
    dVar11 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar15 < 0.0) {
      dVar11 = dVar15;
    }
    dVar11 = (double)(float)(-(double)(float)(-(double)(((float)((double)(float)(dVar10 * dVar10) *
                                                                dVar10) * DAT_007358cc +
                                                        (float)((double)(float)(dVar10 * dVar10) *
                                                                (double)DAT_007358c8 +
                                                               (double)(float)(dVar10 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar11) - 1.5707964) * dVar12 -
                                             1.5707963705062866) * dVar9);
    dVar10 = dVar11;
    if ((1.5707963705062866 < ABS(dVar8)) &&
       (((dVar15 <= dVar8 && (dVar9 < dVar15)) || ((dVar8 < dVar15 && (dVar15 <= dVar9)))))) {
      dVar10 = (double)(float)(dVar11 - 6.2831854820251465);
      if (dVar11 - dVar15 < 0.0) {
        dVar10 = (double)(float)(dVar11 + 6.2831854820251465);
      }
    }
    dVar9 = 9.999999747378752e-06;
    if (1e-05 <= ABS((float)(dVar10 * dVar7))) {
      MB_AxisAngleToQuat((float)(dVar10 * dVar7),afStack_f0,&local_b0);
      MB_QuatRotate(&local_120,&local_d0,afStack_f0);
      MB_QuatRotate(&local_110,&local_c0,afStack_f0);
    }
    else {
      local_120 = local_d0;
      local_11c = local_cc;
      local_118 = local_c8;
      local_114 = local_c4;
      local_110 = local_c0;
      local_10c = local_bc;
      local_108 = local_b8;
      local_104 = local_b4;
    }
    fVar1 = local_d0;
    fVar2 = local_cc;
    fVar3 = local_c8;
    if (dVar9 <= ABS(dVar10)) {
      MB_AxisAngleToQuat((float)dVar10,afStack_e0,&local_b0);
      MB_QuatRotate(&local_100,&local_d0,afStack_e0);
      fVar1 = local_100;
      fVar2 = local_fc;
      fVar3 = local_f8;
    }
    local_f8 = fVar3;
    local_fc = fVar2;
    local_100 = fVar1;
    dVar8 = (double)(local_f8 * param_1[2] + local_100 * *param_1 + local_fc * param_1[1]);
    dVar9 = dVar8;
    if (dVar8 - dVar15 < 0.0) {
      dVar9 = ABS(dVar8);
    }
    dVar10 = dVar16;
    if (dVar8 - dVar15 < 0.0) {
      dVar10 = dVar13;
    }
    dVar8 = (double)(float)(dVar16 - dVar9);
    if ((double)(float)(dVar16 - dVar9) - dVar15 < 0.0) {
      dVar8 = dVar15;
    }
    dVar11 = dVar16;
    if ((double)(local_f8 * param_1[10] + local_100 * param_1[8] + local_fc * param_1[9]) - dVar15 <
        0.0) {
      dVar11 = dVar13;
    }
    MB_RotateQuatAxisAngle
              ((float)((double)(float)(-(double)(float)(-(double)(float)((double)((float)((double)(
                                                  float)(dVar9 * dVar9) * dVar9) * DAT_007358cc +
                                                  (float)((double)(float)(dVar9 * dVar9) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar9 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar8) - dVar14) * dVar10 -
                                                  dVar14) * dVar11) * dVar7),&local_120,&local_120);
    dVar7 = (double)(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c);
    if ((double)(float)SQRT(dVar7) == dVar15) {
      GameCamera.orientMtx.forward.z = 0.0;
      GameCamera.orientMtx.forward.y = 0.0;
      GameCamera.orientMtx.forward.x = 0.0;
      dVar7 = dVar15;
      dVar16 = dVar15;
      dVar9 = dVar15;
    }
    else {
      dVar9 = 1.0 / SQRT(dVar7);
      dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar9) * dVar9 - dVar16) *
                              (double)(float)(dVar9 * 0.5) + dVar9);
      dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar9) * dVar9 - dVar16) *
                              (double)(float)(dVar9 * 0.5) + dVar9);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar7 * dVar9) * dVar9 - dVar16) *
                      (double)(float)(dVar9 * 0.5) + dVar9);
      GameCamera.orientMtx.forward.x = local_120 * fVar1;
      dVar9 = (double)GameCamera.orientMtx.forward.x;
      GameCamera.orientMtx.forward.y = local_11c * fVar1;
      dVar7 = (double)GameCamera.orientMtx.forward.y;
      GameCamera.orientMtx.forward.z = local_118 * fVar1;
      dVar16 = (double)GameCamera.orientMtx.forward.z;
    }
    GameCamera.orientMtx.forward.w = local_114;
    fVar2 = (float)((double)DAT_00969f78 * dVar9 -
                   (double)(float)((double)g_heroGravityDir * dVar16));
    fVar3 = (float)((double)DAT_00969f74 * dVar16 - (double)(float)((double)DAT_00969f78 * dVar7));
    fVar4 = (float)((double)g_heroGravityDir * dVar7 -
                   (double)(float)((double)DAT_00969f74 * dVar9));
    GameCamera.orientMtx.right.w = 0.0;
    GameCamera.orientMtx.up.w = 0.0;
    dVar14 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)(dVar13 / dVar14);
    dVar8 = dVar15;
    if (dVar15 - dVar14 < 0.0) {
      dVar8 = (double)(fVar3 * fVar1);
    }
    dVar13 = dVar15;
    if (dVar15 - dVar14 < 0.0) {
      dVar13 = (double)(fVar2 * fVar1);
    }
    dVar10 = dVar15;
    if (dVar15 - dVar14 < 0.0) {
      dVar10 = (double)(fVar4 * fVar1);
    }
    if (dVar14 - dVar15 < 0.0) {
      dVar8 = (double)(fVar3 * fVar1);
    }
    if (dVar14 - dVar15 < 0.0) {
      dVar13 = (double)(fVar2 * fVar1);
    }
    if (dVar14 - dVar15 < 0.0) {
      dVar10 = (double)(fVar4 * fVar1);
    }
    GameCamera.orientMtx.right.x = (float)dVar8;
    GameCamera.orientMtx.right.y = (float)dVar13;
    GameCamera.orientMtx.right.z = (float)dVar10;
    GameCamera.orientMtx.up.z = (float)(dVar9 * dVar13 - (double)(float)(dVar7 * dVar8));
    GameCamera.orientMtx.up.x = (float)(dVar7 * dVar10 - (double)(float)(dVar16 * dVar13));
    GameCamera.orientMtx.up.y = (float)(dVar16 * dVar8 - (double)(float)(dVar9 * dVar10));
    MB_TransformToQuat(param_2 + 0x18,0x951710);
    MB_TransformToQuat(param_2 + 0x10,0x951710);
    FastDecTimerS32(param_2 + 3);
    uVar6 = 0;
  }
  return uVar6;
}


// 0x00527b8 (0x108 bytes)
void Camera_BlendCams(UpdateCam *pCurr)

{
  int iVar1;
  
  if (GameCamera.blender.type == '\0') {
    iVar1 = Camera_BlendCamsPosQuat(pCurr,0x951640);
  }
  else {
    iVar1 = Camera_BlendCamsPolQuat(pCurr,0x9516a0);
  }
  if (iVar1 != 0) {
    if (ControlMode == 0) {
      GameCamera.orientMtx.forward.x = pCurr->mtx[0];
      GameCamera.orientMtx.forward.y = pCurr->mtx[1];
      GameCamera.orientMtx.forward.z = pCurr->mtx[2];
      GameCamera.orientMtx.forward.w = pCurr->mtx[3];
      GameCamera.orientMtx.right.x = pCurr->mtx[4];
      GameCamera.orientMtx.right.y = pCurr->mtx[5];
      GameCamera.orientMtx.right.z = pCurr->mtx[6];
      GameCamera.orientMtx.right.w = pCurr->mtx[7];
      GameCamera.orientMtx.up.x = pCurr->mtx[8];
      GameCamera.orientMtx.up.y = pCurr->mtx[9];
      GameCamera.orientMtx.up.z = pCurr->mtx[10];
      GameCamera.orientMtx.up.w = pCurr->mtx[0xb];
      GameCamera.posX = pCurr->pos[0];
      GameCamera.posY = pCurr->pos[1];
      GameCamera.posZ = pCurr->pos[2];
      GameCamera.field8_0x14c = (char  [4])pCurr->pos[3];
    }
    GameCamera.blender.state = 0;
    GameCamera.blender.type = '\0';
  }
  return;
}


// 0x00528e8 (0x258 bytes)
void HandleCameraShake(void *pShk,int dir)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  if ((GameCamera.pCurrentUpdCam == (void *)0x0) ||
     (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 6)) {
    iVar3 = *(int *)((int)pShk + 8);
    if (iVar3 == 0) {
      *(undefined4 *)((int)pShk + 0xc) = 0;
    }
    else {
      iVar4 = *(int *)((int)pShk + 0xc);
      *(uint *)((int)pShk + 0xc) =
           iVar4 + ((uint)((longlong)iVar4 - (longlong)iVar3 >> 0x3f) & iVar3 - iVar4);
      FastDecTimerS32((longlong)(int)pShk + 8);
      dVar8 = (double)FastIntToDouble(*(undefined4 *)((int)pShk + 8));
      dVar9 = (double)FastIntToDouble(*(undefined4 *)((int)pShk + 0xc));
      dVar9 = (double)(float)(dVar8 / dVar9);
      dVar8 = (double)FastIntToDouble(*(undefined4 *)((int)pShk + 8));
      dVar8 = (double)FastAddRots((float)(dVar8 * 2.0));
      fVar1 = (float)(dVar8 + 1.570796251296997);
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar5 = fVar2;
      }
                    /* WARNING: Load size is inaccurate */
      fVar1 = fVar5 * fVar5;
      fVar2 = fVar1 * fVar1 * fVar5;
      fVar6 = fVar1 * fVar2;
      fVar1 = (float)((double)(float)((double)(*pShk * (fVar1 * fVar6 * 2.601887e-06 +
                                                       fVar6 * -0.0001980741 +
                                                       fVar2 * 0.0083330255 +
                                                       fVar1 * fVar5 * -0.16666657 + fVar5)) * dVar9
                                     ) * dVar9);
      *(float *)((int)pShk + 4) = fVar1;
      if (dir == 0) {
        fVar2 = 0.0;
        fVar7 = SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                     GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                     GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
        fVar5 = fVar2;
        fVar6 = fVar2;
        if (fVar7 != 0.0) {
          fVar1 = fVar1 / fVar7;
          fVar2 = GameCamera.orientMtx.up.z * fVar1;
          fVar5 = GameCamera.orientMtx.up.x * fVar1;
          fVar6 = GameCamera.orientMtx.up.y * fVar1;
        }
      }
      else {
        fVar2 = 0.0;
        fVar7 = SQRT(GameCamera.orientMtx.forward.z * GameCamera.orientMtx.forward.z +
                     GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
                     GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y);
        fVar5 = fVar2;
        fVar6 = fVar2;
        if (fVar7 != 0.0) {
          fVar1 = fVar1 / fVar7;
          fVar2 = GameCamera.orientMtx.forward.z * fVar1;
          fVar5 = GameCamera.orientMtx.forward.x * fVar1;
          fVar6 = GameCamera.orientMtx.forward.y * fVar1;
        }
      }
      GameCamera.posX = GameCamera.posX + fVar5;
      GameCamera.posY = GameCamera.posY + fVar6;
      GameCamera.posZ = GameCamera.posZ + fVar2;
    }
  }
  else {
    *(undefined4 *)((int)pShk + 8) = 0;
    *(undefined4 *)((int)pShk + 0xc) = 0;
  }
  return;
}


// 0x0052b68 (0x504 bytes)
// inlined: FastRSqrt @0x52d70, FastRSqrt @0x52ea4
void Camera_UpdateHeroInfo(void)

{
  float fVar1;
  float fVar2;
  float *speed;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  
  GameCamera.field17_0x1b4.piece<40,4>() = GameCamera.field17_0x1b4.piece<24,4>();
  speed = (float *)&DAT_00052b40;
  dVar14 = 0.0;
  dVar11 = 0.20000000298023224;
  dVar12 = (double)DAT_00969f7c;
  dVar9 = 0.014999999664723873;
  GameCamera.field17_0x1b4.piece<24,4>() = DAT_00969f7c;
  fVar1 = SQRT(DAT_00969f78 * DAT_00969f78 +
               g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  GameCamera.field17_0x1b4.piece<36,4>() = GameCamera.field17_0x1b4.piece<20,4>();
  GameCamera.field17_0x1b4.piece<32,4>() = GameCamera.field17_0x1b4.piece<16,4>();
  GameCamera.field17_0x1b4.piece<28,4>() = GameCamera.field17_0x1b4.piece<12,4>();
  fVar15 = -1.0 / fVar1;
  dVar6 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar6 = (double)(DAT_00969f74 * fVar15);
  }
  dVar7 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar7 = (double)(g_heroGravityDir * fVar15);
  }
  dVar13 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar13 = (double)(DAT_00969f78 * fVar15);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar6 = (double)(DAT_00969f74 * fVar15);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar7 = (double)(g_heroGravityDir * fVar15);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar13 = (double)(DAT_00969f78 * fVar15);
  }
  GameCamera.field17_0x1b4.piece<20,4>() = (BADTYPE)dVar13;
  GameCamera.field17_0x1b4.piece<16,4>() = (BADTYPE)dVar6;
  GameCamera.field17_0x1b4.piece<12,4>() = (BADTYPE)dVar7;
  fVar1 = (float)((double)(float)GameCamera.field17_0x1b4.piece<4,4>() * dVar13 +
                 (double)(float)((double)GameCamera.field16_0x1b0 * dVar7 +
                                (double)(float)((double)(float)GameCamera.field17_0x1b4.piece<0,4>() *
                                               dVar6)));
  if (fVar1 - -0.98 < 0.0) {
    dVar7 = (double)(float)(dVar7 + 0.20000000298023224);
  }
  if (fVar1 - -0.98 < 0.0) {
    dVar6 = (double)(float)(dVar6 + 0.20000000298023224);
  }
  if (fVar1 - -0.98 < 0.0) {
    dVar13 = (double)(float)(dVar13 + 0.20000000298023224);
  }
  GameCamera.field16_0x1b0 =
       Cam_InterpValues(GameCamera.field16_0x1b0,(float)dVar7,0.015,0.2,0.0,(float *)&DAT_00052b40);
  GameCamera.field17_0x1b4.piece<0,4>() =
       Cam_InterpValues((float)GameCamera.field17_0x1b4.piece<0,4>(),(float)dVar6,(float)dVar9,
                        (float)dVar11,(float)dVar14,speed);
  fVar15 = Cam_InterpValues((float)GameCamera.field17_0x1b4.piece<4,4>(),(float)dVar13,(float)dVar9,
                            (float)dVar11,(float)dVar14,speed);
  fVar1 = fVar15 * fVar15 +
          GameCamera.field16_0x1b0 * GameCamera.field16_0x1b0 +
          (float)GameCamera.field17_0x1b4.piece<0,4>() * (float)GameCamera.field17_0x1b4.piece<0,4>();
  dVar9 = dVar14;
  dVar11 = dVar14;
  dVar8 = dVar14;
  if ((double)SQRT(fVar1) != dVar14) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar9 = (double)(GameCamera.field16_0x1b0 * fVar2);
    dVar11 = (double)((float)GameCamera.field17_0x1b4.piece<0,4>() * fVar2);
    dVar8 = (double)(fVar15 * fVar2);
  }
  GameCamera.field17_0x1b4.piece<80,4>() = g_heroPosition.y - (float)GameCamera.field17_0x1b4.piece<64,4>();
  dVar3 = (double)(float)GameCamera.field17_0x1b4.piece<80,4>();
  GameCamera.field17_0x1b4.piece<76,4>() = g_heroPosition.x - (float)GameCamera.field17_0x1b4.piece<60,4>();
  dVar10 = (double)(float)GameCamera.field17_0x1b4.piece<76,4>();
  GameCamera.field17_0x1b4.piece<84,4>() = g_heroPosition.z - (float)GameCamera.field17_0x1b4.piece<68,4>();
  dVar4 = (double)(float)GameCamera.field17_0x1b4.piece<84,4>();
  GameCamera.field16_0x1b0 = (float)dVar9;
  GameCamera.field17_0x1b4.piece<0,4>() = (BADTYPE)dVar11;
  GameCamera.field17_0x1b4.piece<4,4>() = (BADTYPE)dVar8;
  GameCamera.field17_0x1b4.piece<88,4>() = g_heroPosition.w;
  dVar11 = (double)SQRT((float)(dVar13 * dVar13 +
                               (double)(float)(dVar7 * dVar7 + (double)(float)(dVar6 * dVar6))));
  GameCamera.field17_0x1b4.piece<132,4>() =
       (BADTYPE)(dVar4 * dVar13 + (double)(float)(dVar10 * dVar7 + (double)(float)(dVar3 * dVar6)));
  GameCamera.field17_0x1b4.piece<120,4>() = (BADTYPE)dVar12;
  GameCamera.field17_0x1b4.piece<104,4>() = g_heroPosition.w;
  GameCamera.field17_0x1b4.piece<124,4>() =
       SQRT((float)(dVar4 * dVar4 +
                   (double)(float)(dVar10 * dVar10 + (double)(float)(dVar3 * dVar3))));
  dVar12 = (double)(float)((double)(float)GameCamera.field17_0x1b4.piece<132,4>() / dVar11);
  dVar9 = dVar14;
  if (dVar14 - dVar11 < 0.0) {
    dVar9 = (double)(float)(dVar6 * dVar12);
  }
  dVar8 = dVar14;
  if (dVar14 - dVar11 < 0.0) {
    dVar8 = (double)(float)(dVar7 * dVar12);
  }
  dVar5 = dVar14;
  if (dVar14 - dVar11 < 0.0) {
    dVar5 = (double)(float)(dVar13 * dVar12);
  }
  if (dVar11 - dVar14 < 0.0) {
    dVar9 = (double)(float)(dVar6 * dVar12);
  }
  if (dVar11 - dVar14 < 0.0) {
    dVar8 = (double)(float)(dVar7 * dVar12);
  }
  if (dVar11 - dVar14 < 0.0) {
    dVar5 = (double)(float)(dVar13 * dVar12);
  }
  GameCamera.field17_0x1b4.piece<96,4>() = (BADTYPE)(dVar3 - dVar9);
  GameCamera.field17_0x1b4.piece<92,4>() = (BADTYPE)(dVar10 - dVar8);
  GameCamera.field17_0x1b4.piece<100,4>() = (BADTYPE)(dVar4 - dVar5);
  GameCamera.field17_0x1b4.piece<108,4>() = (BADTYPE)dVar8;
  GameCamera.field17_0x1b4.piece<112,4>() = (BADTYPE)dVar9;
  GameCamera.field17_0x1b4.piece<116,4>() = (BADTYPE)dVar5;
  fVar1 = (float)GameCamera.field17_0x1b4.piece<100,4>() * (float)GameCamera.field17_0x1b4.piece<100,4>() +
          (float)GameCamera.field17_0x1b4.piece<92,4>() * (float)GameCamera.field17_0x1b4.piece<92,4>() +
          (float)GameCamera.field17_0x1b4.piece<96,4>() * (float)GameCamera.field17_0x1b4.piece<96,4>();
  GameCamera.field17_0x1b4.piece<128,4>() = SQRT(fVar1);
  if ((double)(float)GameCamera.field17_0x1b4.piece<128,4>() != dVar14) {
    fVar15 = 1.0 / SQRT(fVar1);
    fVar15 = -(fVar1 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar1 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar1 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    GameCamera.field17_0x1b4.piece<92,4>() = (float)GameCamera.field17_0x1b4.piece<92,4>() * fVar15;
    GameCamera.field17_0x1b4.piece<96,4>() = (float)GameCamera.field17_0x1b4.piece<96,4>() * fVar15;
    GameCamera.field17_0x1b4.piece<100,4>() = (float)GameCamera.field17_0x1b4.piece<100,4>() * fVar15;
  }
  GameCamera.field17_0x1b4.piece<60,4>() = g_heroPosition.x;
  GameCamera.field17_0x1b4.piece<64,4>() = g_heroPosition.y;
  GameCamera.field17_0x1b4.piece<68,4>() = g_heroPosition.z;
  GameCamera.field17_0x1b4.piece<72,4>() = g_heroPosition.w;
  if ((g_HeroRequestedCamType == 0x50) && (g_heroState != WALL_JUMP)) {
    GameCamera.field15_0x188.piece<8,4>() = g_heroPosition.x;
    GameCamera.field15_0x188.piece<12,4>() = g_heroPosition.y;
  }
  else {
    GameCamera.field15_0x188.piece<8,4>() = g_heroPosition.x;
    GameCamera.field15_0x188.piece<12,4>() = g_heroPosition.y;
    GameCamera.field15_0x188.piece<16,4>() =
         Cam_InterpValues((float)GameCamera.field15_0x188.piece<16,4>(),g_heroPosition.z,0.0075,0.175,
                          (float)dVar14,(float *)&DAT_00052b40);
    GameCamera.field15_0x188.piece<20,4>() = g_heroPosition.z;
  }
  GameCamera.field17_0x1b4[0x88] = GameCamera.field17_0x1b4[0x8c];
  GameCamera.field17_0x1b4[0x89] = GameCamera.field17_0x1b4[0x8d];
  GameCamera.field17_0x1b4[0x8a] = GameCamera.field17_0x1b4[0x8e];
  GameCamera.field17_0x1b4[0x8b] = GameCamera.field17_0x1b4[0x8f];
  GameCamera.field17_0x1b4[0x8c] = GameCamera.field17_0x1b4[0x90];
  GameCamera.field17_0x1b4[0x8d] = GameCamera.field17_0x1b4[0x91];
  GameCamera.field17_0x1b4[0x8e] = GameCamera.field17_0x1b4[0x92];
  GameCamera.field17_0x1b4[0x8f] = GameCamera.field17_0x1b4[0x93];
  GameCamera.field17_0x1b4[0x90] = GameCamera.field17_0x1b4[0x94];
  GameCamera.field17_0x1b4[0x91] = GameCamera.field17_0x1b4[0x95];
  GameCamera.field17_0x1b4[0x92] = GameCamera.field17_0x1b4[0x96];
  GameCamera.field17_0x1b4[0x93] = GameCamera.field17_0x1b4[0x97];
  GameCamera.field17_0x1b4[0x94] = GameCamera.field17_0x1b4[0x98];
  GameCamera.field17_0x1b4[0x95] = GameCamera.field17_0x1b4[0x99];
  GameCamera.field17_0x1b4[0x96] = GameCamera.field17_0x1b4[0x9a];
  GameCamera.field17_0x1b4[0x97] = GameCamera.field17_0x1b4[0x9b];
  GameCamera.field17_0x1b4.piece<152,4>() = g_heroRotation.z;
  if ((g_standingOnMoby == 0) ||
     (*(short *)(g_standingOnMoby + 0xa6) == 0x336 || *(short *)(g_standingOnMoby + 0xa6) == 0x4ba))
  {
    GameCamera.field19_0x25c[0x10] = '\0';
    GameCamera.field19_0x25c[0x11] = '\0';
    GameCamera.field19_0x25c[0x12] = '\0';
    GameCamera.field19_0x25c[0x13] = '\0';
    GameCamera.field19_0x25c[8] = '\0';
    GameCamera.field19_0x25c[9] = '\0';
    GameCamera.field19_0x25c[10] = '\0';
    GameCamera.field19_0x25c[0xb] = '\0';
    GameCamera.field19_0x25c.piece<12,4>() = g_heroPosition.z;
  }
  else if (g_standingOnMoby == GameCamera.field19_0x25c.piece<8,4>()) {
    fVar1 = *(float *)(GameCamera.field19_0x25c.piece<8,4>() + 0x18);
    GameCamera.field19_0x25c.piece<16,4>() = fVar1 - (float)GameCamera.field19_0x25c.piece<12,4>();
    GameCamera.field19_0x25c.piece<12,4>() = fVar1;
    if (ABS((float)GameCamera.field19_0x25c.piece<16,4>()) < 0.001) {
      GameCamera.field19_0x25c[0x10] = '\0';
      GameCamera.field19_0x25c[0x11] = '\0';
      GameCamera.field19_0x25c[0x12] = '\0';
      GameCamera.field19_0x25c[0x13] = '\0';
    }
  }
  else {
    GameCamera.field19_0x25c[8] = g_standingOnMoby.piece<0,1>();
    GameCamera.field19_0x25c[9] = g_standingOnMoby.piece<1,1>();
    GameCamera.field19_0x25c[10] = g_standingOnMoby.piece<2,1>();
    GameCamera.field19_0x25c[0xb] = (undefined1)g_standingOnMoby;
    GameCamera.field19_0x25c[0x10] = '\0';
    GameCamera.field19_0x25c[0x11] = '\0';
    GameCamera.field19_0x25c[0x12] = '\0';
    GameCamera.field19_0x25c[0x13] = '\0';
    GameCamera.field19_0x25c.piece<12,4>() = *(undefined4 *)(g_standingOnMoby + 0x18);
  }
  return;
}


// 0x0053078 (0x178 bytes)
void Camera_UpdateUnderWater(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  GPiece<16> local_50;
  GPiece<24> local_40;
  
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 6) || (g_gameMode != GAME_MODE_NORMAL))
  {
    GameCamera.camUnderWater = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = CollLine(local_50,local_40,0x12,0,0);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = CollHotspot();
      if (iVar1 == 0) {
        fVar3 = CollWaterHeight(&g_CollOutput.ip.x,(float *)0x0);
        GameCamera.camUnderWater = (uint)(GameCamera.posZ < fVar3 + 0.04);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  return;
}


// 0x00531f0 (0x144 bytes)
void Camera_SetCollFlags(void)

{
  CAMERA_COLL_BUMP_FLAGS = 0x14;
  if (((g_heroStateType == 0x11) || (g_heroStateType == 0x12)) ||
     (g_heroState == WATER_WALKING)) {
    CAMERA_COLL_BUMP_FLAGS = 0x34;
  }
  if (g_heroStateType != 0x11) {
    if ((int)(FLOAT_ORDER(g_heroWaterZ)) <
        (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
             ((int)GameCamera.posZ >> 0x1f))) {
      CAMERA_COLL_BUMP_FLAGS = 0x14;
    }
  }
  CAMERA_COLL_SPHERE_FLAGS = CAMERA_COLL_BUMP_FLAGS | 0x80;
  if (DAT_0096afc5 == '\0') {
    if (DAT_0096afcb == '\0') {
      if (DAT_0096afc6 == '\0') {
        if (DAT_0096afcc == '\0') {
          if (DAT_0096afc4 == '\0') {
            CAMERA_COLL_FLAGS = GameCamera.field17_0x1b4.piece<156,4>() | 0xb4;
          }
          else {
            GameCamera.field17_0x1b4[0x9c] = '\0';
            GameCamera.field17_0x1b4[0x9d] = '\0';
            GameCamera.field17_0x1b4[0x9e] = '\0';
            GameCamera.field17_0x1b4[0x9f] = '\0';
            CAMERA_COLL_FLAGS = 0xb4;
          }
        }
        else {
          GameCamera.field17_0x1b4[0x9c] = '\0';
          GameCamera.field17_0x1b4[0x9d] = '\0';
          GameCamera.field17_0x1b4[0x9e] = '\r';
          GameCamera.field17_0x1b4[0x9f] = '\0';
          CAMERA_COLL_FLAGS = 0xdb4;
        }
      }
      else {
        GameCamera.field17_0x1b4[0x9c] = '\0';
        GameCamera.field17_0x1b4[0x9d] = '\0';
        GameCamera.field17_0x1b4[0x9e] = '\x03';
        GameCamera.field17_0x1b4[0x9f] = '\0';
        CAMERA_COLL_FLAGS = 0x3b4;
      }
    }
    else {
      GameCamera.field17_0x1b4[0x9c] = '\0';
      GameCamera.field17_0x1b4[0x9d] = '\0';
      GameCamera.field17_0x1b4[0x9e] = '\v';
      GameCamera.field17_0x1b4[0x9f] = '\0';
      CAMERA_COLL_FLAGS = 0xbb4;
    }
  }
  else {
    GameCamera.field17_0x1b4[0x9c] = '\0';
    GameCamera.field17_0x1b4[0x9d] = '\0';
    GameCamera.field17_0x1b4[0x9e] = '\x01';
    GameCamera.field17_0x1b4[0x9f] = '\0';
    CAMERA_COLL_FLAGS = 0x1b4;
  }
  return;
}


// 0x0053338 (0x50 bytes)
void Camera_HandleScreenFade(void)

{
  if ((GameCamera.screenFade != 0.0) &&
     (SceneScreenFade = SceneScreenFade - GameCamera.screenFade,
     SceneScreenFade <= 0.0)) {
    SceneScreenFade = 0.0;
    GameCamera.screenFade = 0.0;
  }
  return;
}


// 0x0053398 (0x1a8 bytes)
void Camera_UpdateFog(float *pos)

{
  ABGR AVar1;
  ABGR AVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  int local_20;
  float local_1c;
  
  iVar3 = GetBlenderAtPnt((Vec4 *)pos,&local_1c,&local_20);
  if (iVar3 != 0) {
    if ((g_Blenders[local_20].flags & 2) != 0) {
      dVar5 = 255.0;
      iVar3 = FastDoubleToInt((double)(local_1c * 255.0));
      AVar1 = g_Blenders[local_20].fogColor2;
      AVar2 = g_Blenders[local_20].fogColor1;
      iVar4 = 0xff - iVar3;
      levelFog.r = (u8)(((uint)AVar1 & 0xff) * iVar3 + ((uint)AVar2 & 0xff) * iVar4 >> 8);
      levelFog.g = (u8)(((int)AVar1 >> 8 & 0xffU) * iVar3 + ((int)AVar2 >> 8 & 0xffU) * iVar4 >> 8);
      levelFog.b = (u8)(((int)AVar1 >> 0x10 & 0xffU) * iVar3 + ((int)AVar2 >> 0x10 & 0xffU) * iVar4
                       >> 8);
      LevelFogNearDist =
           (g_Blenders[local_20].fogNearDist2 * local_1c +
           g_Blenders[local_20].fogNearDist1 * (1.0 - local_1c)) * 1024.0;
      LevelFogFarDist =
           (g_Blenders[local_20].fogFarDist2 * local_1c +
           g_Blenders[local_20].fogFarDist1 * (1.0 - local_1c)) * 1024.0;
      LevelFogNearIntensity =
           -(float)((double)(g_Blenders[local_20].fogNearIntensity2 * local_1c +
                            g_Blenders[local_20].fogNearIntensity1 * (1.0 - local_1c)) * dVar5 -
                   dVar5);
      LevelFogFarIntensity =
           -(float)((double)(g_Blenders[local_20].fogFarIntensity2 * local_1c +
                            g_Blenders[local_20].fogFarIntensity1 * (1.0 - local_1c)) * dVar5 -
                   dVar5);
    }
  }
  return;
}


// 0x0053550 (0x38c bytes)
// strings: 0096c074: 'None'

void UpdateCamera(void)

{
  void *pCurr;
  int iVar1;
  int iVar2;
  float fVar3;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<64> auStack_60;
  
  if (g_gameMode == GAME_MODE_VENDOR) {
    if (g_lastVendorWasPda != 0) {
      return;
    }
    GameCamera.blender.state = 0;
    GameCamera.blender.type = '\0';
  }
  GameCamera.camTimer = GameCamera.camTimer + 1;
  if ((GameCamera.screenFade != 0.0) &&
     (SceneScreenFade = SceneScreenFade - GameCamera.screenFade,
     SceneScreenFade <= 0.0)) {
    SceneScreenFade = 0.0;
    GameCamera.screenFade = 0.0;
  }
  Camera_SetCollFlags();
  Camera_UpdateHeroInfo();
  UpdateAllCameras();
  pCurr = GameCamera.pCurrentUpdCam;
  if ((GameCamera.blender.state == 1) || (GameCamera.blender.state == 2)) {
    Camera_InitBlender((UpdateCam *)GameCamera.pLastUpdCam);
  }
  if (GameCamera.blender.state == 3) {
    Camera_BlendCams((UpdateCam *)pCurr);
  }
  else if (ControlMode == 0) {
    GameCamera.posX = *(float *)((int)pCurr + 0x30);
    GameCamera.posY = *(float *)((int)pCurr + 0x34);
    GameCamera.posZ = *(float *)((int)pCurr + 0x38);
    GameCamera.field8_0x14c = *(char (*) [4])((int)pCurr + 0x3c);
                    /* WARNING: Load size is inaccurate */
    GameCamera.orientMtx.forward.x = *pCurr;
    GameCamera.orientMtx.forward.y = *(float *)((int)pCurr + 4);
    GameCamera.orientMtx.forward.z = *(float *)((int)pCurr + 8);
    GameCamera.orientMtx.forward.w = *(float *)((int)pCurr + 0xc);
    GameCamera.orientMtx.right.x = *(float *)((int)pCurr + 0x10);
    GameCamera.orientMtx.right.y = *(float *)((int)pCurr + 0x14);
    GameCamera.orientMtx.right.z = *(float *)((int)pCurr + 0x18);
    GameCamera.orientMtx.right.w = *(float *)((int)pCurr + 0x1c);
    GameCamera.orientMtx.up.x = *(float *)((int)pCurr + 0x20);
    GameCamera.orientMtx.up.y = *(float *)((int)pCurr + 0x24);
    GameCamera.orientMtx.up.z = *(float *)((int)pCurr + 0x28);
    GameCamera.orientMtx.up.w = *(float *)((int)pCurr + 0x2c);
  }
  if (ControlMode == 0) {
    FastMtxCopyNoTranslate(auStack_60,0x951710);
    MB_MtxToEuler((int)auStack_60,(MobyInstance *)&GameCamera.rot);
  }
  HandleCameraShake(&GameCamera.offset0,0);
  HandleCameraShake(&GameCamera.offset1,1);
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 6) || (g_gameMode != GAME_MODE_NORMAL))
  {
    GameCamera.camUnderWater = 0;
  }
  else {
    iVar2 = 0;
    while( true ) {
      if ((5 < iVar2) || (iVar1 = CollLine(local_80,local_70,0x12,0,0), iVar1 == 0))
      goto LAB_0005385c;
      iVar1 = CollHotspot();
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
    }
    fVar3 = CollWaterHeight(&g_CollOutput.ip.x,(float *)0x0);
    GameCamera.camUnderWater = (u32)(GameCamera.posZ < fVar3 + 0.04);
  }
LAB_0005385c:
  Camera_UpdateFog(&GameCamera.posX);
  if (Cheats[4] != '\0') {
    GameCamera.orientMtx.right.w = 0.0;
    GameCamera.orientMtx.right.x =
         GameCamera.orientMtx.forward.y * GameCamera.orientMtx.up.z -
         GameCamera.orientMtx.forward.z * GameCamera.orientMtx.up.y;
    GameCamera.orientMtx.right.z =
         GameCamera.orientMtx.forward.x * GameCamera.orientMtx.up.y -
         GameCamera.orientMtx.forward.y * GameCamera.orientMtx.up.x;
    GameCamera.orientMtx.right.y =
         GameCamera.orientMtx.forward.z * GameCamera.orientMtx.up.x -
         GameCamera.orientMtx.forward.x * GameCamera.orientMtx.up.z;
  }
  return;
}


// 0x00538dc (0x60 bytes)
int Camera_GetFuncIdx(int type)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0;
  iVar2 = 0;
  if (g_CameraVTable[0].type != -1) {
    do {
      if (*(int *)((int)&g_CameraVTable[0].type + (int)(lVar1 << 4) + (int)(lVar1 << 2)) == type) {
        return (int)lVar1;
      }
      iVar2 = (int)lVar1 + 1;
      lVar1 = (longlong)iVar2;
    } while (*(int *)((int)&g_CameraVTable[0].type + (int)(lVar1 << 4) + (int)(lVar1 << 2)) != -1);
  }
  return iVar2;
}


// 0x005393c (0x1a0 bytes)
void Camera_resetToFollow(void)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  short *psVar4;
  longlong lVar5;
  void *pvVar6;
  
  if (GameCamera.pCurrentUpdCam != (void *)0x0) {
    *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x8e) = 0;
    *(undefined1 *)((int)GameCamera.pCurrentUpdCam + 0x7d) = 0;
    *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x7e) = 0;
  }
  lVar5 = 0;
  psVar4 = &UpdateCams[0].type;
  do {
    if (*psVar4 == 0) {
      pvVar6 = (void *)((int)UpdateCams[0].mtx + (int)lVar5 * 0x80 + (int)(lVar5 << 5));
      goto LAB_000539c8;
    }
    lVar5 = lVar5 + 1;
    psVar4 = psVar4 + 0x50;
  } while ((int)lVar5 < 0x30);
  pvVar6 = (void *)0x0;
LAB_000539c8:
  GameCamera.pCurrentUpdCam = pvVar6;
  *(undefined2 *)((int)pvVar6 + 0x8e) = 1;
  GameCamera.blender.state = 0;
  *(undefined **)((int)pvVar6 + 0x70) = &CamControlCurrent;
  Camera_UpdateHeroInfo();
  puVar2 = *(undefined4 **)
            ((int)&g_CameraVTable[0].init +
            (int)((longlong)*(short *)((int)GameCamera.pCurrentUpdCam + 0x8c) << 4) +
            (int)((longlong)*(short *)((int)GameCamera.pCurrentUpdCam + 0x8c) << 2));
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*puVar2)();
  }
  FastMemCopy(&BackupCam,GameCamera.pCurrentUpdCam,0xa0);
  FastMemCopy(&DAT_00953d60,&CamControlCurrent,0x280);
  pvVar6 = GameCamera.pCurrentUpdCam;
  BackupCam.control = &DAT_00953d60;
  GameCamera.posX = *(float *)((int)GameCamera.pCurrentUpdCam + 0x30);
  pfVar3 = (float *)((int)GameCamera.pCurrentUpdCam + 0x34);
  fVar1 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x38);
  GameCamera.field8_0x14c = *(char (*) [4])((int)GameCamera.pCurrentUpdCam + 0x3c);
  GameCamera.posY = *pfVar3;
  GameCamera.posZ = fVar1;
  *(float *)((int)GameCamera.pCurrentUpdCam + 100) = GameCamera.posX;
  *(float *)((int)pvVar6 + 0x68) = *pfVar3;
  *(float *)((int)pvVar6 + 0x6c) = fVar1;
  GameCamera.field15_0x188.piece<8,4>() = g_heroPosition.x;
  GameCamera.field15_0x188.piece<12,4>() = g_heroPosition.y;
  GameCamera.field15_0x188.piece<16,4>() = g_heroPosition.z;
  return;
}


// 0x0053ae8 (0x330 bytes)
// inlined: FastRSqrt @0x53bd4
// strings: 00953fe0: 'None'


void InitCameras(void)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  CameraVTable *pCVar18;
  
  GameCamera.camUnderWater = 0;
  GameCamera.camTimer = 0;
  lVar13 = 0;
  CamPostUpdRoutineCnt = 0;
  DAT_0071ea50 = 0x3f400000;
  do {
    lVar5 = lVar13 << 7;
    UpdateCamsUsed[(int)lVar13] = '\0';
    lVar6 = lVar13 << 5;
    iVar16 = (int)lVar13 + 1;
    lVar13 = (longlong)iVar16;
    *(undefined2 *)((int)UpdateCams[0].lPos + (int)lVar5 + (int)lVar6 + 0x2a) = 0;
    iVar12 = ImportCameraCnt;
  } while (iVar16 < 0x30);
  GameCamera.pLastUpdCam = (void *)0x0;
  GameCamera.blender.state = 0;
  fVar2 = (g_heroMobyPtr->transform).v2.y;
  fVar3 = (g_heroMobyPtr->transform).v2.x;
  fVar4 = (g_heroMobyPtr->transform).v2.z;
  GameCamera.field17_0x1b4.piece<4,4>() = 0.0;
  fVar7 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  if (SQRT(fVar7) == 0.0) {
    GameCamera.field17_0x1b4.piece<8,4>() = (g_heroMobyPtr->transform).v2.w;
    GameCamera.field17_0x1b4.piece<0,4>() = GameCamera.field17_0x1b4.piece<4,4>();
    GameCamera.field16_0x1b0 = (float)GameCamera.field17_0x1b4.piece<4,4>();
  }
  else {
    fVar8 = 1.0 / SQRT(fVar7);
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    GameCamera.field17_0x1b4.piece<8,4>() = (g_heroMobyPtr->transform).v2.w;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    GameCamera.field16_0x1b0 = fVar3 * fVar8;
    GameCamera.field17_0x1b4.piece<0,4>() = fVar2 * fVar8;
    GameCamera.field17_0x1b4.piece<4,4>() = fVar4 * fVar8;
  }
  GameCamera.field17_0x1b4[0x38] = '\0';
  GameCamera.field17_0x1b4[0x39] = '\0';
  GameCamera.field17_0x1b4[0x3a] = '\0';
  GameCamera.field17_0x1b4[0x3b] = '\0';
  GameCamera.field17_0x1b4[0x34] = '\0';
  GameCamera.field17_0x1b4[0x35] = '\0';
  GameCamera.field17_0x1b4[0x36] = '\0';
  GameCamera.field17_0x1b4[0x37] = '\0';
  GameCamera.field17_0x1b4[0x30] = '\0';
  GameCamera.field17_0x1b4[0x31] = '\0';
  GameCamera.field17_0x1b4[0x32] = '\0';
  GameCamera.field17_0x1b4[0x33] = '\0';
  GameCamera.field17_0x1b4[0x2c] = '\0';
  GameCamera.field17_0x1b4[0x2d] = '\0';
  GameCamera.field17_0x1b4[0x2e] = '\0';
  GameCamera.field17_0x1b4[0x2f] = '\0';
  GameCamera.field17_0x1b4.piece<60,4>() = g_heroPosition.x;
  GameCamera.field17_0x1b4.piece<64,4>() = g_heroPosition.y;
  GameCamera.field17_0x1b4.piece<68,4>() = g_heroPosition.z;
  GameCamera.screenFade = 0.0;
  GameCamera.field17_0x1b4.piece<72,4>() = g_heroPosition.w;
  GameCamera.field17_0x1b4[0x9c] = '\0';
  GameCamera.field17_0x1b4[0x9d] = '\0';
  GameCamera.field17_0x1b4[0x9e] = '\0';
  GameCamera.field17_0x1b4[0x9f] = '\0';
  GameCamera.field19_0x25c[4] = '\0';
  GameCamera.field19_0x25c[5] = '\0';
  GameCamera.field19_0x25c[6] = '\0';
  GameCamera.field19_0x25c[7] = '\0';
  GameCamera.field17_0x1b4[0xa0] = '\0';
  GameCamera.field17_0x1b4[0xa1] = '\0';
  GameCamera.field17_0x1b4[0xa2] = '\0';
  GameCamera.field17_0x1b4[0xa3] = '\0';
  GameCamera.field19_0x25c[0] = '\0';
  GameCamera.field19_0x25c[1] = '\0';
  GameCamera.field19_0x25c[2] = '\0';
  GameCamera.field19_0x25c[3] = '\0';
  GameCamera.field17_0x1b4.piece<152,4>() = g_heroRotation.z;
  GameCamera.field17_0x1b4.piece<148,4>() = g_heroRotation.z;
  GameCamera.field17_0x1b4.piece<144,4>() = g_heroRotation.z;
  GameCamera.field17_0x1b4.piece<140,4>() = g_heroRotation.z;
  GameCamera.field17_0x1b4.piece<136,4>() = g_heroRotation.z;
  GameCamera.field19_0x25c[8] = '\0';
  GameCamera.field19_0x25c[9] = '\0';
  GameCamera.field19_0x25c[10] = '\0';
  GameCamera.field19_0x25c[0xb] = '\0';
  GameCamera.field19_0x25c[0x10] = '\0';
  GameCamera.field19_0x25c[0x11] = '\0';
  GameCamera.field19_0x25c[0x12] = '\0';
  GameCamera.field19_0x25c[0x13] = '\0';
  GameCamera.field19_0x25c.piece<12,4>() = g_heroPosition.z;
  GameCamera.field17_0x1b4.piece<12,4>() = GameCamera.field16_0x1b0;
  GameCamera.field17_0x1b4.piece<16,4>() = GameCamera.field17_0x1b4.piece<0,4>();
  GameCamera.field17_0x1b4.piece<20,4>() = GameCamera.field17_0x1b4.piece<4,4>();
  GameCamera.field17_0x1b4.piece<24,4>() = GameCamera.field17_0x1b4.piece<8,4>();
  GameCamera.field17_0x1b4.piece<28,4>() = GameCamera.field16_0x1b0;
  GameCamera.field17_0x1b4.piece<32,4>() = GameCamera.field17_0x1b4.piece<0,4>();
  GameCamera.field17_0x1b4.piece<36,4>() = GameCamera.field17_0x1b4.piece<4,4>();
  GameCamera.field17_0x1b4.piece<40,4>() = GameCamera.field17_0x1b4.piece<8,4>();
  if (0 < ImportCameraCnt) {
    uVar14 = 0;
    do {
      iVar9 = ImportCameras + (int)((uVar14 & 0xffffffff) << 5);
      iVar11 = (int)uVar14;
      iVar16 = *(int *)(iVar9 + 0x1c);
      sVar17 = 0;
      UpdateCams[iVar11].importCameraIdx = (short)uVar14;
      *(UpdateCam **)(iVar16 + 4) = UpdateCams + iVar11;
      UpdateCams[iVar11].active = 0;
      UpdateCams[iVar11].bumped = '\0';
      UpdateCams[iVar11].bumpOff = 0;
      UpdateCams[iVar11].activation.orgCam = -1;
      UpdateCams[iVar11].activation.repCam = -1;
      UpdateCams[iVar11].activation.activate = '\0';
      UpdateCams[iVar11].activation.deactivate = 0;
      UpdateCams[iVar11].activation.blendSpeed = -1.0;
      UpdateCams[iVar11].activation.priority = *(char *)(iVar16 + 0x1c);
      bVar1 = *(byte *)(iVar16 + 0x1f);
      UpdateCamsUsed[iVar11] = '\x01';
      UpdateCams[iVar11].activation.activationType = (uint)bVar1;
      sVar15 = (short)*(undefined4 *)(iVar9 + 0xc);
      UpdateCams[iVar11].type = sVar15;
      if (g_CameraVTable[0].type != -1) {
        sVar17 = 0;
        iVar16 = 0;
        pCVar18 = g_CameraVTable;
        do {
          if (pCVar18->type == (int)sVar15) break;
          pCVar18 = pCVar18 + 1;
          sVar17 = sVar17 + 1;
          piVar10 = (int *)((int)&g_CameraVTable[1].type + iVar16);
          iVar16 = iVar16 + 0x14;
        } while (*piVar10 != -1);
      }
      UpdateCams[iVar11].funcIdx = sVar17;
      uVar14 = (ulonglong)(iVar11 + 1);
    } while (iVar11 + 1 < iVar12);
  }
  Camera_resetToFollow();
  GameCamera.blender.state = 0;
  GameCamera.orientMtx.position.w = 0.0;
  GameCamera.orientMtx.position.y = 0.0;
  GameCamera.orientMtx.position.x = 0.0;
  GameCamera.field22_0x390[0] = '\0';
  GameCamera.field22_0x390[1] = '\0';
  GameCamera.field22_0x390[2] = '\0';
  GameCamera.field22_0x390[3] = '\0';
  return;
}


// 0x0053e38 (0x1a4 bytes)
void Camera_ClampAngles(float *param_1,float *param_2,float *param_3)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = fVar2 + 1.5707963;
  fVar4 = fVar1 + 1.5707963;
  fVar14 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar14 = fVar2;
  }
  fVar6 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar6 = fVar3;
  }
  fVar7 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar7 = fVar4;
  }
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar15 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar14 < 0.0) {
    fVar15 = fVar14;
  }
  fVar2 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
    fVar2 = fVar6;
  }
  fVar3 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
    fVar3 = fVar7;
  }
  fVar14 = fVar15 * fVar15;
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar4 = fVar5;
  }
  fVar1 = param_2[2];
  fVar13 = fVar2 * fVar2;
  fVar7 = fVar3 * fVar3;
  fVar6 = fVar4 * fVar4;
  param_1[3] = 0.0;
  fVar16 = fVar14 * fVar14 * fVar15;
  fVar12 = fVar13 * fVar13 * fVar2;
  fVar5 = fVar7 * fVar7 * fVar3;
  fVar17 = fVar14 * fVar16;
  fVar11 = fVar13 * fVar12;
  fVar8 = fVar7 * fVar5;
  fVar9 = fVar6 * fVar6 * fVar4;
  fVar10 = fVar6 * fVar9;
  fVar7 = fVar1 * (fVar7 * fVar8 * 2.601887e-06 +
                  fVar8 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3
                  );
  fVar5 = fVar7 * (fVar13 * fVar11 * 2.601887e-06 +
                  fVar11 * -0.0001980741 +
                  fVar12 * 0.0083330255 + fVar13 * fVar2 * -0.16666657 + fVar2);
  fVar7 = fVar7 * (fVar14 * fVar17 * 2.601887e-06 +
                  fVar17 * -0.0001980741 +
                  fVar16 * 0.0083330255 + fVar14 * fVar15 * -0.16666657 + fVar15);
  fVar1 = fVar1 * (fVar6 * fVar10 * 2.601887e-06 +
                  fVar10 * -0.0001980741 +
                  fVar9 * 0.0083330255 + fVar6 * fVar4 * -0.16666657 + fVar4);
  *param_1 = fVar5;
  param_1[1] = fVar7;
  fVar2 = *param_3;
  fVar3 = param_3[1];
  param_1[2] = fVar1;
  fVar4 = param_3[2];
  *param_1 = fVar5 + fVar2;
  param_1[1] = fVar7 + fVar3;
  param_1[2] = fVar1 + fVar4;
  return;
}


// 0x0053fe8 (0x3d4 bytes)
// inlined: FastAtan2 @0x540ec, FastAtan2 @0x54284
undefined8 ____Camera_CalcPolarToTarget(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xf0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x20] = in_LR;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar7 = param_2[1] - param_3[1];
  fVar5 = *param_2 - *param_3;
  fVar1 = param_2[2];
  puVar8[0x1a] = unaff_r31;
  dVar24 = (double)(fVar1 - param_3[2]);
  fVar2 = *param_1;
  dVar23 = (double)(fVar5 * fVar5 + fVar7 * fVar7);
  *(float *)(puVar8 + 0x10) = fVar1 - param_3[2];
  dVar20 = ABS((double)(float)SQRT(dVar23));
  *(float *)((int)puVar8 + 0x7c) = (float)SQRT(dVar23);
  *(float *)((int)puVar8 + 0x84) = (float)(dVar20 - ABS(dVar24));
  dVar19 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
  dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
  if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
    dVar22 = ABS(dVar24);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar21 = ABS((double)*(float *)(puVar8 + 0x10));
  if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
    dVar21 = dVar20;
  }
  dVar20 = dVar19;
  if (0.0 < dVar22) {
    lVar12 = uVar11 - 0xe0;
    lVar14 = uVar11 - 0x48;
    lVar16 = uVar11 - 0x38;
    lVar18 = 2;
    fVar3 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0xb4) = fVar3;
    *(float *)((int)puVar8 + 0xac) = fVar3;
    *(float *)(puVar8 + 0x16) = fVar3;
    *(float *)(puVar8 + 0x15) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar4;
    *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar3;
    *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar3 * fVar3;
      iVar9 = (int)lVar14;
      lVar12 = lVar12 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x48;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar14 = lVar16;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar3;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    lVar12 = lVar13;
    dVar22 = dVar19;
    do {
      iVar9 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0xa8)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar20 = (double)((float)(dVar22 + 0.7853981852531433) * fVar6 + fVar1);
  }
  *(float *)(puVar8 + 0xe) = fVar5;
  *(float *)((int)puVar8 + 0x74) = fVar7;
  param_1[1] = (float)dVar20;
  *(float *)(puVar8 + 0xf) = ABS(fVar5) - ABS(fVar7);
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar1 = ABS(fVar7);
  }
  fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar6 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar6 = ABS(fVar5);
  }
  fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar12 = uVar11 - 0xe0;
    lVar14 = uVar11 - 0x68;
    lVar16 = uVar11 - 0x58;
    lVar18 = 2;
    fVar1 = (fVar6 - fVar1) / (fVar6 + fVar1);
    fVar6 = fVar1 * fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)((int)puVar8 + 0x8c) = fVar1;
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)(puVar8 + 0x11) = fVar1;
    fVar1 = fVar6 * fVar6;
    *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar6;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar1;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar1 * fVar6;
    do {
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar1 * fVar1;
      iVar9 = (int)lVar14;
      lVar12 = lVar12 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x68;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar14 = lVar16;
    do {
      fVar1 = *pfVar17;
      fVar6 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar1;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar16;
      lVar13 = lVar13 + 0x10;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x88)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar7 + fVar5);
  }
  FastDiffRots(dVar19,(double)fVar2);
  *param_1 = (float)dVar19;
  param_1[2] = SQRT((float)(dVar24 * dVar24 + dVar23));
  return 0;
}


// 0x00543c8 (0x270 bytes)
void Camera_CollSphereBump(double param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar6 = (double)*(float *)((int)GameCamera.pCurrentUpdCam + 100);
  dVar8 = (double)*(float *)((int)GameCamera.pCurrentUpdCam + 0x68);
  dVar10 = (double)*(float *)((int)GameCamera.pCurrentUpdCam + 0x6c);
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x8a) == 0) {
    dVar9 = (double)(float)((double)param_2[1] - dVar8);
    dVar7 = (double)(float)((double)*param_2 - dVar6);
    dVar11 = (double)(float)((double)param_2[2] - dVar10);
    iVar1 = FastDoubleToInt
                      ((double)(SQRT((float)(dVar11 * dVar11 +
                                            (double)(float)(dVar7 * dVar7 +
                                                           (double)(float)(dVar9 * dVar9)))) /
                               (float)(param_1 * 0.8999999761581421)));
    iVar1 = iVar1 + 1;
    dVar5 = (double)FastIntToDouble(iVar1);
    *param_2 = (float)dVar6;
    param_2[1] = (float)dVar8;
    param_2[2] = (float)dVar10;
    param_2[3] = 0.0;
    dVar10 = (double)(float)(1.0 / dVar5);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        iVar4 = 0;
        *param_2 = (float)(dVar10 * dVar7 + (double)*param_2);
        param_2[1] = (float)(dVar10 * dVar9 + (double)param_2[1]);
        param_2[2] = (float)(dVar10 * dVar11 + (double)param_2[2]);
        do {
          iVar2 = CollSphere
                            (param_1,param_2,0x950000,CAMERA_COLL_SPHERE_FLAGS,g_heroMobyPtr);
          if (iVar2 == 0) break;
          *param_2 = g_CollOutput.push.x;
          param_2[1] = g_CollOutput.push.y;
          param_2[2] = g_CollOutput.push.z;
          param_2[3] = g_CollOutput.push.w;
          if (*(char *)((int)GameCamera.pCurrentUpdCam + 0x89) == '\0') {
            *(undefined1 *)((int)GameCamera.pCurrentUpdCam + 0x89) = 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 6);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    if (ControlMode == 0) {
      GameCamera.posX = *param_2;
      GameCamera.posY = param_2[1];
      GameCamera.posZ = param_2[2];
      GameCamera.field8_0x14c = *(char (*) [4])(param_2 + 3);
    }
  }
  else {
    if (ControlMode == 0) {
      GameCamera.posX = *param_2;
      GameCamera.posY = param_2[1];
      GameCamera.posZ = param_2[2];
      GameCamera.field8_0x14c = *(char (*) [4])(param_2 + 3);
    }
    *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x8a) = 0;
  }
  return;
}


// 0x0054670 (0x34c bytes)
void Camera_CreateReticule(MobyInstance *pMoby)

{
  int iVar3;
  int iVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 *puVar8;
  short *psVar9;
  float *pfVar10;
  float *pfVar11;
  undefined2 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  if (DAT_00951784 != 1) {
    iVar7 = 1;
    DAT_00951784 = 1;
    dVar17 = -1.100000023841858;
    puVar8 = &DAT_009517d4;
    dVar18 = -0.8999999761581421;
    psVar9 = &DAT_009517b2;
    dVar19 = -1.25;
    pfVar10 = (float *)&DAT_00951814;
    dVar20 = 2.5;
    pfVar11 = (float *)&DAT_00951854;
    dVar21 = 1.0;
    puVar12 = &DAT_00951792;
    dVar22 = 1.570796251296997;
    dVar23 = 3.141592502593994;
    dVar24 = -3.141592502593994;
    dVar25 = -0.16666656732559204;
    dVar26 = 0.008333025500178337;
    dVar27 = -0.0001980741071747616;
    dVar28 = 2.601886990305502e-06;
    dVar29 = 0.25;
    dVar30 = 0.75;
    Reticule = pMoby;
    do {
      iVar3 = MB_randInt(0x3f);
      iVar3 = iVar3 + 1;
      iVar4 = MB_randInt(6);
      if (iVar4 < 2) {
        if (iVar4 < 0) {
LAB_00054830:
          *puVar8 = &DAT_00808080;
        }
        else if (iVar4 < 1) {
          *puVar8 = &DAT_00808080 + iVar3 * -0xffff;
        }
        else {
          *puVar8 = &DAT_00808080 + iVar3 * 0x101;
        }
      }
      else if (iVar4 < 3) {
        uVar1 = MB_randInt(iVar3);
        *puVar8 = &DAT_00808080 + (int)((uVar1 & 0xffffffff) << 8) + iVar3;
      }
      else {
        if (3 < iVar4) goto LAB_00054830;
        uVar1 = MB_randInt(iVar3);
        uVar2 = MB_randInt(iVar3);
        *puVar8 = &DAT_00808080 +
                  (int)((uVar1 & 0xffffffff) << 0x10) + (int)((uVar2 & 0xffffffff) << 8) + iVar3;
      }
      sVar5 = MB_randInt(5);
      *psVar9 = sVar5 + 1;
      if (iVar7 < 4) {
        dVar13 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
      }
      else {
        dVar13 = (double)MB_randRangeFloat((float)dVar19,(float)dVar20);
      }
      *pfVar10 = (float)dVar13;
      dVar13 = (double)FastAddRots((float)(dVar13 + dVar21));
      dVar14 = (double)(float)(dVar13 + dVar22);
      dVar13 = (double)(float)(dVar23 - dVar14);
      if (dVar14 - (double)(float)(dVar23 - dVar14) < 0.0) {
        dVar13 = dVar14;
      }
      dVar15 = (double)(float)(dVar24 - dVar14);
      if ((double)(float)(dVar24 - dVar14) - dVar13 < 0.0) {
        dVar15 = dVar13;
      }
      dVar13 = (double)(float)(dVar15 * dVar15);
      dVar14 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar15));
      dVar16 = (double)(float)(dVar13 * dVar14);
      dVar14 = ABS((double)(float)((double)(float)(dVar13 * dVar16) * dVar28 +
                                  (double)(float)(dVar16 * dVar27 +
                                                 (double)(float)(dVar14 * dVar26 +
                                                                (double)(float)((double)(float)(
                                                  dVar13 * dVar15) * dVar25 + dVar15)))));
      dVar13 = (double)MB_randRangeFloat((float)dVar29,(float)dVar30);
      uVar6 = 0x37;
      *pfVar11 = (float)((double)(float)(dVar14 * dVar14) * dVar13 + dVar29);
      if (3 < iVar7) {
        uVar6 = MB_randInt(0x37);
      }
      iVar7 = iVar7 + 1;
      *puVar12 = uVar6;
      puVar8 = puVar8 + 1;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
      psVar9 = psVar9 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar7 < 0x10);
    DAT_009517b0 = 0;
    DAT_00951810 = 0xbf800000;
    DAT_00951850 = 0x3f800000;
    DAT_009517d0 = &DAT_00808080;
    DAT_00951790 = 0x7f;
  }
  return;
}


// 0x00549bc (0x24 bytes)
void Camera_DestroyReticule(MobyInstance *pMoby)

{
  if (Reticule == pMoby) {
    DAT_00951784 = 0;
  }
  return;
}


// 0x00549e0 (0x14 bytes)
void Camera_ClearReticule(void)

{
  DAT_00951784 = 0;
  return;
}


// 0x0054a10 (0x3fc bytes)
void Camera_DrawReticule(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float local_f0;
  float local_ec;
  
  puVar9 = &Reticule;
  if ((DAT_00951784 == 1) && ((*(byte *)(Reticule + 0x20) & 0x80) == 0)) {
    dVar24 = 0.0;
    if (0 < DAT_00951788) {
      fVar1 = GameCamera.posY - *(float *)(Reticule + 0x14);
      fVar2 = GameCamera.posX - *(float *)(Reticule + 0x10);
      fVar3 = GameCamera.posZ - *(float *)(Reticule + 0x18);
      dVar21 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      dVar12 = (double)FastIntToDouble(g_ScreenHalfWidth);
      dVar13 = (double)FastIntToDouble(g_ScreenHalfHeight);
      ScreenPosFromWorldSpace(&local_f0,Reticule + 0x10);
      dVar14 = (double)FastIntToDouble(SCREEN_PROJECTION_MAP_X);
      dVar17 = 0.0625;
      dVar15 = (double)FastIntToDouble(SCREEN_PROJECTION_MAP_Y);
      iVar8 = 0;
      dVar26 = 1.0;
      dVar25 = 5.0;
      dVar27 = 5.5;
      pfVar10 = (float *)&DAT_00951810;
      dVar15 = (double)(float)(dVar13 - (double)(float)((double)(float)((double)local_ec - dVar15) *
                                                       dVar17));
      dVar14 = (double)(float)(dVar12 - (double)((float)((double)local_f0 - dVar14) * 0.0625));
      dVar28 = ABS(dVar15);
      dVar17 = ABS(dVar14);
      dVar29 = (double)((float)(1.0 / dVar12) * -5.0);
      dVar30 = (double)((float)(1.0 / dVar13) * -5.0);
      puVar11 = puVar9;
      do {
        GetEffectTex((longlong)*(short *)(puVar9 + 0xc) + 6);
        dVar19 = (double)(float)(dVar21 - dVar25);
        dVar22 = (double)(float)((double)*pfVar10 * dVar14 + dVar12);
        dVar23 = (double)(float)((double)*pfVar10 * dVar15 + dVar13);
        lVar7 = (ZERO_MASK(iVar8) & 0x20U) + 0x20;
        dVar20 = dVar26;
        if ((dVar19 <= dVar26) && (dVar20 = dVar19, dVar19 < dVar24)) {
          dVar20 = dVar24;
        }
        dVar18 = (double)(float)(dVar17 * dVar29 + dVar27);
        dVar19 = dVar26;
        if ((dVar18 <= dVar26) && (dVar19 = dVar18, dVar18 < dVar24)) {
          dVar19 = dVar24;
        }
        dVar16 = (double)(float)(dVar28 * dVar30 + dVar27);
        dVar18 = dVar26;
        if ((dVar16 <= dVar26) && (dVar18 = dVar16, dVar16 < dVar24)) {
          dVar18 = dVar24;
        }
        FastDoubleToInt
                  ((double)((float)((double)(float)(dVar19 * dVar18) * dVar20) *
                           (float)(longlong)(int)*(short *)(puVar9 + 4)));
        uVar4 = FastDoubleToInt
                          ((double)((float)(longlong)(int)lVar7 * (float)puVar11[0x34]));
        dVar20 = (double)(longlong)((int)uVar4 >> 1);
        uVar5 = FastDoubleToInt((double)(float)(dVar22 - dVar20));
        uVar6 = FastDoubleToInt((double)(float)(dVar23 - dVar20));
        Sprite_DrawShapeWrapper(uVar5,uVar6,uVar4,uVar4,0,0,lVar7,lVar7);
        iVar8 = iVar8 + 1;
        puVar9 = (undefined4 *)((int)puVar9 + 2);
        pfVar10 = pfVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar8 < 0x10);
      DAT_00951788 = 0;
    }
  }
  else {
    DAT_00951784 = 0;
  }
  return;
}


// 0x0054e38 (0x438 bytes)
void DrawCrosshairSprite
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
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
  
  GetEffectTex(*(undefined4 *)(param_5 + 0x18));
  dVar15 = (double)*(float *)(param_5 + 0x1c);
  iVar5 = *(int *)(param_5 + 0x2c);
  dVar13 = (double)*(float *)(param_5 + 0x10);
  if (iVar5 < 1) {
    if ((-1 < iVar5) && (iVar5 = 0, 0 < *(short *)(param_5 + 0x26))) {
      dVar13 = 40.0;
      dVar14 = 0.0;
      do {
        dVar6 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar13);
        Sprite_DrawRotated((float)param_1,(float)param_2,dVar6,dVar6,dVar15,dVar14,dVar14);
        dVar15 = (double)FastWrapRot((float)dVar15,*(float *)(param_5 + 0x28));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)(param_5 + 0x26));
    }
  }
  else if (iVar5 < 2) {
    fVar1 = (float)(dVar15 + 1.570796251296997);
    dVar14 = (double)(float)(3.141592502593994 - dVar15);
    if (dVar15 - (double)(float)(3.141592502593994 - dVar15) < 0.0) {
      dVar14 = dVar15;
    }
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    dVar6 = (double)(float)(-3.141592502593994 - dVar15);
    if ((double)(float)(-3.141592502593994 - dVar15) - dVar14 < 0.0) {
      dVar6 = dVar14;
    }
    dVar14 = (double)(float)(dVar6 * dVar6);
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    dVar12 = 40.0;
    dVar10 = 0.0;
    fVar4 = fVar3 * fVar3;
    dVar8 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar6));
    dVar7 = (double)(float)(dVar14 * dVar8);
    fVar2 = fVar4 * fVar4 * fVar3;
    fVar1 = fVar4 * fVar2;
    dVar11 = (double)(((float)(dVar14 * dVar7) * 2.601887e-06 +
                      (float)(dVar7 * -0.0001980741071747616 +
                             (double)(float)(dVar8 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar14 * dVar6) *
                                                            -0.16666656732559204 + dVar6)))) * 40.0)
    ;
    dVar9 = (double)((fVar4 * fVar1 * 2.601887e-06 +
                     fVar1 * -0.0001980741 +
                     fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * 40.0);
    dVar7 = -(double)(float)(dVar11 * dVar13);
    Sprite_DrawRotated
              ((float)param_1,(float)param_2,(double)(float)(dVar13 * 40.0),
               (double)(float)(dVar13 * 40.0),dVar15,0.0,0.0);
    fVar1 = (float)(dVar9 * dVar13 + param_1);
    dVar6 = (double)fVar1;
    dVar8 = (double)(float)(dVar7 + param_2);
    dVar14 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar12);
    Sprite_DrawRotated(fVar1,(float)(dVar7 + param_2),dVar14,dVar14,dVar15,dVar10,dVar10);
    dVar14 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar12);
    Sprite_DrawRotated
              (-(float)(dVar11 * dVar13 - param_1),-(float)(dVar9 * dVar13 - param_2),dVar14,dVar14,
               dVar15,dVar10,dVar10);
    dVar14 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar12);
    Sprite_DrawRotated
              (-(float)(dVar11 * dVar13 - dVar6),-(float)(dVar9 * dVar13 - dVar8),dVar14,dVar14,
               dVar15,dVar10,dVar10);
  }
  else if (iVar5 < 3) {
    if (*(int *)(g_viewMtxPtr + 0x4a0) == 1) {
      param_1 = (double)(float)(param_1 - (double)*(float *)(g_viewMtxPtr + 0x1a84));
    }
    Sprite_DrawRotated
              ((float)param_1,(float)param_2,(double)(float)(dVar13 * 40.0),
               (double)(float)(dVar13 * 40.0),dVar15,0.5,0.5);
  }
  return;
}


// 0x0055270 (0x14 bytes)
void ClearTargetCrosshair(void)

{
  g_Crosshair = 0;
  return;
}


// 0x0055284 (0xec bytes)
void DrawTargetCrosshair(float size,MobyInstance *pTarget,uint color,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_r6;
  int in_r7;
  int in_r9;
  double in_f2;
  double in_f3;
  
  iVar3 = g_Crosshair;
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  if (2 < g_Crosshair) {
    return;
  }
  iVar2 = g_Crosshair * 0x30;
  (&DAT_009518e0)[g_Crosshair * 0xc] = pTarget;
  *(uint *)(iVar2 + 0x9518d4) = color;
  *(float *)(iVar2 + 0x9518d0) = size;
  *(int *)(iVar2 + 0x9518d8) = in_r7;
  *(float *)(iVar2 + 0x9518dc) = (float)in_f2;
  if (in_r6 == (undefined4 *)0x0) {
    (&DAT_009518e4)[iVar3 * 0x18] = 0;
  }
  else {
    *(undefined4 *)(&DAT_009518c0 + iVar2) = *in_r6;
    *(undefined4 *)(iVar2 + 0x9518c4) = in_r6[1];
    *(undefined4 *)(iVar2 + 0x9518c8) = in_r6[2];
    uVar1 = in_r6[3];
    (&DAT_009518e4)[iVar3 * 0x18] = 1;
    *(undefined4 *)(iVar2 + 0x9518cc) = uVar1;
  }
  if (in_r9 == -1) {
    if (in_r7 < 0x1f) {
      if (in_r7 != 0xd) goto LAB_00055360;
    }
    else if (0x27 < in_r7) goto LAB_00055360;
    *(undefined4 *)(iVar2 + 0x9518ec) = 2;
    *(undefined4 *)(iVar2 + 0x9518e8) = 0x3fc90fdb;
    *(undefined2 *)(iVar2 + 0x9518e6) = 0;
  }
  else {
    *(int *)(iVar2 + 0x9518ec) = in_r9;
    *(float *)(iVar2 + 0x9518e8) = (float)in_f3;
    *(undefined2 *)(iVar2 + 0x9518e6) = 4;
  }
LAB_00055360:
  g_Crosshair = g_Crosshair + 1;
  return;
}


// 0x0055378 (0x1ac bytes)
void TargetCrosshairDraw(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_50;
  float local_4c;
  
  if (g_heroState == MOVEMENT_LOCKED) {
    g_Crosshair = 0;
  }
  puVar4 = &DAT_009518c0;
  if (g_Crosshair != 0) {
    dVar5 = (double)FastIntToDouble(g_ScreenHalfWidth);
    dVar6 = (double)FastIntToDouble(g_ScreenHalfHeight);
    iVar3 = 0;
    if (0 < g_Crosshair) {
      dVar9 = 0.0625;
      iVar2 = g_Crosshair;
      do {
        dVar7 = dVar5;
        dVar8 = dVar6;
        if ((*(int *)(puVar4 + 0x20) != 0) &&
           (cVar1 = *(char *)(*(int *)(puVar4 + 0x20) + 0x20), cVar1 != -3 && cVar1 != -2)) {
          if (*(short *)(puVar4 + 0x24) == 0) {
            local_50 = (float)dVar5;
          }
          else {
            ScreenPosFromWorldSpace(&local_50,puVar4);
            dVar7 = (double)FastIntToDouble(SCREEN_PROJECTION_MAP_X);
            local_50 = (float)((double)(float)((double)local_50 - dVar7) * dVar9);
            dVar7 = dVar5;
            dVar8 = dVar6;
            dVar6 = (double)FastIntToDouble(SCREEN_PROJECTION_MAP_Y);
            dVar5 = (double)local_50;
            dVar6 = (double)(float)((double)(float)((double)local_4c - dVar6) * dVar9);
          }
          local_4c = (float)dVar6;
          DrawCrosshairSprite(dVar5,dVar6);
          iVar2 = g_Crosshair;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 0x30;
        dVar5 = dVar7;
        dVar6 = dVar8;
      } while (iVar3 < iVar2);
    }
    g_Crosshair = 0;
  }
  return;
}


// 0x0055530 (0x3c4 bytes)
bool camera_IsPntInCollPrim(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Sphere *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  bool bVar11;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  
  iVar10 = *(int *)(param_4 + 0x10);
  fStack00000034 = (float)param_2;
  fStack00000030 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_3 >> 0x20);
  if (iVar10 == 7) {
    iVar10 = DAT_00a51bc0 + *(int *)(param_4 + 0x14) * 0x90;
    fVar1 = *(float *)(iVar10 + 0x34);
    fVar2 = *(float *)(iVar10 + 0x30);
    fVar5 = fStack00000034 - fVar1;
    fVar6 = fStack00000030 - fVar2;
    fVar3 = *(float *)(iVar10 + 0x38);
    fVar7 = fStack00000038 - fVar3;
    fVar9 = *(float *)(iVar10 + 100) * fVar7 +
            *(float *)(iVar10 + 0x44) * fVar6 + *(float *)(iVar10 + 0x54) * fVar5;
    fVar8 = *(float *)(iVar10 + 0x60) * fVar7 +
            *(float *)(iVar10 + 0x40) * fVar6 + *(float *)(iVar10 + 0x50) * fVar5;
    fVar5 = *(float *)(iVar10 + 0x68) * fVar7 +
            *(float *)(iVar10 + 0x48) * fVar6 + *(float *)(iVar10 + 0x58) * fVar5;
    if (((1.0 <= SQRT(fVar8 * fVar8 + fVar9 * fVar9)) || (fVar5 < -1.0)) || (1.0 < fVar5)) {
      fVar5 = fStack00000034 - (*(float *)(iVar10 + 0x24) + fVar1);
      fVar6 = fStack00000030 - (*(float *)(iVar10 + 0x20) + fVar2);
      fVar7 = fStack00000038 - (*(float *)(iVar10 + 0x28) + fVar3);
      if (*(float *)(iVar10 + 0x80) <= SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5)) {
        fStack00000034 = fStack00000034 - (*(float *)(iVar10 + 0x24) * -1.0 + fVar1);
        fStack00000038 = fStack00000038 - (*(float *)(iVar10 + 0x28) * -1.0 + fVar3);
        fStack00000030 = fStack00000030 - (*(float *)(iVar10 + 0x20) * -1.0 + fVar2);
        if (*(float *)(iVar10 + 0x80) <=
            SQRT(fStack00000038 * fStack00000038 +
                 fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
      else {
        bVar11 = true;
      }
    }
    else {
      bVar11 = true;
    }
  }
  else if (iVar10 == 6) {
    iVar10 = *(int *)(param_4 + 0x14);
    fStack00000034 = fStack00000034 - Cylinders[iVar10].pos.y;
    fStack00000030 = fStack00000030 - Cylinders[iVar10].pos.x;
    fStack00000038 = fStack00000038 - Cylinders[iVar10].pos.z;
    bVar11 = false;
    fVar3 = Cylinders[iVar10].imatrix.v2.y * fStack00000038 +
            Cylinders[iVar10].imatrix.v0.y * fStack00000030 +
            Cylinders[iVar10].imatrix.v1.y * fStack00000034;
    fVar2 = Cylinders[iVar10].imatrix.v2.x * fStack00000038 +
            Cylinders[iVar10].imatrix.v0.x * fStack00000030 +
            Cylinders[iVar10].imatrix.v1.x * fStack00000034;
    fVar1 = Cylinders[iVar10].imatrix.v2.z * fStack00000038 +
            Cylinders[iVar10].imatrix.v0.z * fStack00000030 +
            Cylinders[iVar10].imatrix.v1.z * fStack00000034;
    if (((SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 1.0) && (-1.0 <= fVar1)) && (fVar1 <= 1.0)) {
      bVar11 = true;
    }
  }
  else if (iVar10 == 5) {
    pSVar4 = Spheres + *(int *)(param_4 + 0x14);
    fVar1 = (pSVar4->matrix).v0.y;
    fVar2 = (pSVar4->matrix).v0.x;
    fStack00000034 = fStack00000034 - (pSVar4->pos).y;
    fVar3 = (pSVar4->matrix).v0.z;
    fStack00000030 = fStack00000030 - (pSVar4->pos).x;
    fStack00000038 = fStack00000038 - (pSVar4->pos).z;
    bVar11 = SQRT(fStack00000038 * fStack00000038 +
                  fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034) <
             (float)((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) + param_1);
  }
  else if (iVar10 == 3) {
    iVar10 = *(int *)(param_4 + 0x14);
    bVar11 = false;
    fStack00000034 = fStack00000034 - Cuboids[iVar10].pos.y;
    fStack00000030 = fStack00000030 - Cuboids[iVar10].pos.x;
    fStack00000038 = fStack00000038 - Cuboids[iVar10].pos.z;
    fVar3 = Cuboids[iVar10].imatrix.v2.x * fStack00000038 +
            Cuboids[iVar10].imatrix.v0.x * fStack00000030 +
            Cuboids[iVar10].imatrix.v1.x * fStack00000034;
    fVar2 = Cuboids[iVar10].imatrix.v2.y * fStack00000038 +
            Cuboids[iVar10].imatrix.v0.y * fStack00000030 +
            Cuboids[iVar10].imatrix.v1.y * fStack00000034;
    fVar1 = Cuboids[iVar10].imatrix.v2.z * fStack00000038 +
            Cuboids[iVar10].imatrix.v0.z * fStack00000030 +
            Cuboids[iVar10].imatrix.v1.z * fStack00000034;
    if (-1.0 <= fVar3) {
      if (((fVar3 <= 1.0) && (-1.0 <= fVar2)) &&
         ((fVar2 <= 1.0 && ((-1.0 <= fVar1 && (fVar1 <= 1.0)))))) {
        bVar11 = true;
      }
    }
  }
  else {
    bVar11 = false;
  }
  return bVar11;
}


// 0x00558f8 (0x1ac bytes)
// strings: 00055994: 'xc6d_q`' (raw)

int * CamCollGrid_FindPrimAtPnt(double param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  
  dVar9 = 0.0625;
  fStack00000030 = (float)((ulonglong)param_2 >> 0x20);
  dVar7 = (double)fStack00000030;
  _fStack00000030 = param_2;
  uVar1 = FastDoubleToInt((double)(float)(dVar7 * 0.0625));
  dVar8 = (double)fStack00000034;
  uVar2 = FastDoubleToInt((double)(float)(dVar8 * dVar9));
  if ((((-1 < (int)(uVar1 | uVar2)) && ((int)uVar1 < 0x41)) && ((int)uVar2 < 0x41)) &&
     (iVar5 = *(int *)(CamCollGrid + (uVar2 * 0x40 + uVar1) * 4), iVar5 != 0)) {
    piVar4 = (int *)(iVar5 + CamCollGrid);
    iVar5 = 0;
    if (0 < *piVar4) {
      fStack0000003c = (float)param_3;
      dVar9 = (double)fStack0000003c;
      fStack00000038 = (float)((ulonglong)param_3 >> 0x20);
      dVar10 = (double)fStack00000038;
      piVar6 = piVar4;
      do {
        if ((SQRT((float)((double)(float)piVar6[4] - dVar7) *
                  (float)((double)(float)piVar6[4] - dVar7) +
                  (float)((double)(float)piVar6[5] - dVar8) *
                  (float)((double)(float)piVar6[5] - dVar8)) <
             (float)((double)(float)piVar6[7] + param_1)) &&
           (iVar3 = IsPntInCollPrim(param_1,CONCAT44((float)dVar7,(float)dVar8),
                                    CONCAT44((float)dVar10,(float)dVar9),piVar6 + 4), iVar3 != 0)) {
          return piVar6 + 4;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 0xc;
      } while (iVar5 < *piVar4);
    }
  }
  return (int *)0x0;
}


