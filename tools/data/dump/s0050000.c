//==== 00050000  ns=camera  size=0x64
// sig: void Camera_AddPostUpdFunc(void * func)
// callers(1): 0004aff0 camera::CamZoomOfs_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_AddPostUpdFunc(void *func)

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



//==== 00050064  ns=camera  size=0x90
// sig: void ExecuteCamPostUpdFuncs(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::ExecuteCamPostUpdFuncs(void)

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



//==== 000500f4  ns=camera  size=0x58
// sig: UpdateCam * Camera_FindCameraOfType(int type)
// callers(5): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047e3c camera::camera5::Camera_SetMobyDrivenPolarRadiusCurve; 00047f74 camera::SetCameraPosition; 000494e0 camera::camera6::Cam6_Activate
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UpdateCam * camera::Camera_FindCameraOfType(int type)

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



//==== 0005014c  ns=camera  size=0x58
// sig: UpdateCam * Camera_FindCameraOfImportIdx(int idx)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UpdateCam * camera::Camera_FindCameraOfImportIdx(int idx)

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



//==== 000501a4  ns=camera  size=0x3c
// sig: void Camera_FreeUpdateCam(UpdateCam * pCam)
// callers(0): 
// callees(0): 
// strings: 00953fe0: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_FreeUpdateCam(UpdateCam *pCam)

{
  UpdateCamsUsed[(int)pCam[-0xee91].rot / 0xa0] = '\0';
  return;
}



//==== 000501e8  ns=camera  size=0x98
// sig: float Cam_InterpValues(float current, float target, float gain, float damp, float limit, float * speed)
// callers(31): 0002dfbc camera0::InterpPitchTarget; 0002e1c8 camera0::HandleSpecialPitchTarget; 0002e3a0 camera0::UpdateCamTarget_0; 0002eda8 camera0::UpdateCameraOffset_0; 00033068 camera0::UpdateUserCam_0; 000337a0 camera0::UpdateCamRotation_0; 000343f8 camera0::UpdateCamPosition_0; 00035d68 camera::camera10::Cam10_00035d68; 00036a40 camera::camera10::Cam10_00036a40; 00036e18 camera::camera10::Cam10_00036e18; 00037d68 camera::camera11::Cam11_00037d68; 00038cb8 camera::camera12::Cam12_00038cb8; 000393e8 camera::camera13::???_Cam13_InterpPosToHero; 000395c0 camera::camera13::Cam13_000395c0; 0003a298 camera::camera13::???_Cam13_InterpPosToTarget; 0003a5e0 camera::camera13::UpdateCamera_13; 0003aeb8 camera::camera14::???_Cam14_RotateByStick; 0003b310 camera::camera14::Cam14_0003b310; 0003b588 camera::camera14::Cam14_0003b588; 0003bef0 camera::camera15::Cam15_0003bef0; 00042b48 camera::camera21::UpdateCamera_21; 00045728 camera::camera3::UpdateCamera_3; 00046c58 camera::camera4::UpdateCamera_4; 00048510 camera::camera5::UpdateMobyDrivenCam; 00048df8 camera::camera6::Cam6_Update
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float camera::Cam_InterpValues
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



//==== 00050288  ns=camera  size=0x110
// sig: undefined Cam_InterpAngles(void)
// callers(16): 000337a0 camera0::UpdateCamRotation_0; 000343f8 camera0::UpdateCamPosition_0; 00034e68 camera::camera1::Cam1_UpdateCam; 00037d68 camera::camera11::Cam11_00037d68; 000392c8 camera::camera13::Cam13_000392c8; 0003bef0 camera::camera15::Cam15_0003bef0; 00042b48 camera::camera21::UpdateCamera_21; 00045728 camera::camera3::UpdateCamera_3; 00048510 camera::camera5::UpdateMobyDrivenCam; 00048df8 camera::camera6::Cam6_Update; 00049ff0 camera::camera7::Cam7_UpdatePos; 0004ab98 camera::camera7::Cam7_UpdateRot; 0004bf90 camera::camera8::Cam8_UpdateRot; 00199888 mobyupdate_helpers::M1045_00199888; 001c3a18 mobyupdate_helpers::M1106_001c3a18; 00486bf8 mobyupdate_helpers::M849_00486bf8
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void camera::Cam_InterpAngles
               (double param_1,undefined8 param_2,double param_3,double param_4,double param_5,
               undefined8 param_6,undefined8 param_7,float *param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)fastfunc::FastDiffRots(param_2,param_1);
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
  fastfunc::FastWrapRot((float)param_1,(float)dVar3);
  return;
}



//==== 00050398  ns=camera  size=0x20
// sig: void Camera_DeactivateCurrent(void)
// callers(1): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_DeactivateCurrent(void)

{
  void *pvVar1;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x7e) = 1;
  *(undefined1 *)((int)pvVar1 + 0x7d) = 0;
  return;
}



//==== 000503b8  ns=camera  size=0x78
// sig: void Camera_handleCollWithHero(UpdateCam * pCam)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 00183ea0 mobyupdate_helpers::M1016_00183ea0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_handleCollWithHero(UpdateCam *pCam)

{
  if (pCam->type == 0) {
    if (GameCamera.field17_0x1b4._160_4_ == 0) {
      GameCamera.field17_0x1b4._160_4_ = mobyupdate_helpers::M1016_00183ea0(0x951500);
    }
  }
  else if (GameCamera.field17_0x1b4._160_4_ != 0) {
    mobyfunc::DeleteMoby((MobyInstance *)GameCamera.field17_0x1b4._160_4_);
    GameCamera.field17_0x1b4[0xa0] = '\0';
    GameCamera.field17_0x1b4[0xa1] = '\0';
    GameCamera.field17_0x1b4[0xa2] = '\0';
    GameCamera.field17_0x1b4[0xa3] = '\0';
  }
  return;
}



//==== 00050430  ns=camera  size=0x5c
// sig: void Camera_runSetupToNewCam(UpdateCam * pCam)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_runSetupToNewCam(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)
            ((int)&CameraVTable[0].init +
            (int)((longlong)pCam->funcIdx << 4) + (int)((longlong)pCam->funcIdx << 2));
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)();
  }
  return;
}



//==== 0005048c  ns=camera  size=0x3a0
// sig: void Camera_switchToNewCam(UpdateCam * pNewCam)
// callers(3): 00047f74 camera::SetCameraPosition; 000494e0 camera::camera6::Cam6_Activate; 00050ae0 camera::UpdateAllCameras
// callees(2): 005002cc fastfunc::FastMemCopy; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_switchToNewCam(UpdateCam *pNewCam)

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
        uVar10 = fastfunc::FastDoubleToInt();
      }
      GameCamera.blender.reqInterpFrames = uVar10;
      uVar11 = (uint)(ushort)GameCamera.blender.state;
    }
    GameCamera.blender.state = (short)((LZCOUNT(-uVar11) << 0x3a) >> 0x3f) + 2;
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
      GameCamera.blender.state = (short)((LZCOUNT(-(uint)(ushort)sVar8) << 0x3a) >> 0x3f) + 2;
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
  fastfunc::FastMemCopy(&CamControlLast,&CamControlCurrent,0x280);
  *(undefined **)((int)GameCamera.pLastUpdCam + 0x70) = &CamControlLast;
  GameCamera.pCurrentUpdCam = pNewCam;
  pNewCam->control = &CamControlCurrent;
  GameCamera.camTimer = 0;
  puVar6 = *(undefined4 **)
            ((int)&CameraVTable[0].init +
            (int)((longlong)pNewCam->funcIdx << 4) + (int)((longlong)pNewCam->funcIdx << 2));
  if (puVar6 != (undefined4 *)0x0) {
    (*(code *)*puVar6)(uVar9);
    uVar9 = ZEXT48(GameCamera.pCurrentUpdCam);
  }
  fastfunc::FastMemCopy(&BackupCam,uVar9,0xa0);
  fastfunc::FastMemCopy(&DAT_00953d60,&CamControlCurrent,0x280);
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



//==== 0005082c  ns=camera  size=0x258
// sig: int Camera_ActivationCheckPriority(UpdateCam * pCam, UpdateCam * pCompare)
// callers(1): 00050ae0 camera::UpdateAllCameras
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::Camera_ActivationCheckPriority(UpdateCam *pCam,UpdateCam *pCompare)

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
            ((int)&CameraVTable[0].activate +
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
       (iVar4 = mobyutil::MB_IsPntInCuboid
                          (&g_heroPosition,
                           (longlong)
                           *(int *)(*(int *)(ImportCameras +
                                             (int)((longlong)pCam->importCameraIdx << 5) + 0x1c) +
                                   0xc)), iVar4 != 0)) {
      return 1;
    }
  }
  else if (((iVar4 < 8) && (sVar2 == hero::g_HeroRequestedCamType)) &&
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



//==== 00050a84  ns=camera  size=0x5c
// sig: void Camera_Exit(UpdateCam * pCam)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_Exit(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)
            ((int)&CameraVTable[0].exit +
            (int)((longlong)pCam->funcIdx << 4) + (int)((longlong)pCam->funcIdx << 2));
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)();
  }
  return;
}



//==== 00050ae0  ns=camera  size=0x224
// sig: int UpdateAllCameras(void)
// callers(2): 00053550 camera::UpdateCamera; 000613a0 debug::DebugCamera
// callees(4): 0005048c camera::Camera_switchToNewCam; 0005082c camera::Camera_ActivationCheckPriority; 000efb38 mobyfunc::DeleteMoby; 00183ea0 mobyupdate_helpers::M1016_00183ea0
// strings: 00953fe0: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::UpdateAllCameras(void)

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
            ((int)&CameraVTable[0].exit +
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
            ((int)&CameraVTable[0].update +
            (int)((longlong)pCompare->funcIdx << 4) + (int)((longlong)pCompare->funcIdx << 2));
  if (pCompare->type == 0) {
    if (GameCamera.field17_0x1b4._160_4_ == 0) {
      GameCamera.field17_0x1b4._160_4_ = mobyupdate_helpers::M1016_00183ea0(0x951500);
    }
  }
  else if (GameCamera.field17_0x1b4._160_4_ != 0) {
    mobyfunc::DeleteMoby((MobyInstance *)GameCamera.field17_0x1b4._160_4_);
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



//==== 00050d20  ns=camera  size=0x3a8
// sig: undefined Camera_Pos2Polar3d(void)
// callers(3): 000510d8 camera::Camera_InitBlenderPolarHero; 000514c0 camera::Camera_InitBlender; 00051d40 camera::Camera_BlendCamsPolQuat
// callees(1): 001113e0 mobyutil::MB_RotateQuatAxisAngle

void camera::Camera_Pos2Polar3d
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
  mobyutil::MB_RotateQuatAxisAngle(fVar2,&local_90,param_4);
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



//==== 000510d8  ns=camera  size=0x2ec
// sig: undefined Camera_InitBlenderPolarHero(void)
// callers(1): 000514c0 camera::Camera_InitBlender
// callees(1): 00050d20 camera::Camera_Pos2Polar3d

void camera::Camera_InitBlenderPolarHero(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_40 [4];
  float local_3c;
  float local_38;
  undefined1 local_30 [16];
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = (g_heroMobyPtr->transform).v0.y;
  fVar2 = (g_heroMobyPtr->transform).v0.x;
  fVar3 = (g_heroMobyPtr->transform).v0.z;
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  GameCamera.blender.pad_88._8_4_ = 0.0;
  if (SQRT(fVar1) == 0.0) {
    GameCamera.blender.pad_88._20_4_ = (g_heroMobyPtr->transform).v0.w;
    local_38 = 0.0;
    local_3c = 0.0;
  }
  else {
    local_38 = 1.0 / SQRT(fVar1);
    local_38 = -(fVar1 * local_38 * local_38 - 1.0) * local_38 * 0.5 + local_38;
    local_38 = -(fVar1 * local_38 * local_38 - 1.0) * local_38 * 0.5 + local_38;
    local_38 = -(fVar1 * local_38 * local_38 - 1.0) * local_38 * 0.5 + local_38;
    GameCamera.blender.pad_88._8_4_ = fVar2 * local_38;
    local_3c = (g_heroMobyPtr->transform).v0.y * local_38;
    local_38 = (g_heroMobyPtr->transform).v0.z * local_38;
    GameCamera.blender.pad_88._20_4_ = (g_heroMobyPtr->transform).v0.w;
  }
  fVar1 = (g_heroMobyPtr->transform).v2.y;
  local_20 = (g_heroMobyPtr->transform).v2.x;
  fVar2 = (g_heroMobyPtr->transform).v2.z;
  fVar1 = fVar2 * fVar2 + local_20 * local_20 + fVar1 * fVar1;
  if (SQRT(fVar1) == 0.0) {
    GameCamera.blender.pad_88._36_4_ = (g_heroMobyPtr->transform).v2.w;
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
    GameCamera.blender.pad_88._36_4_ = (g_heroMobyPtr->transform).v2.w;
  }
  GameCamera.blender.pad_88._12_4_ = local_3c;
  GameCamera.blender.pad_88._16_4_ = local_38;
  GameCamera.blender.pad_88._24_4_ = local_20;
  GameCamera.blender.pad_88._28_4_ = local_1c;
  GameCamera.blender.pad_88._32_4_ = local_18;
  Camera_Pos2Polar3d(0x9516a0,0x9516f0,&g_heroPosition,local_40,local_30,&local_20);
  GameCamera.blender.blendWork.x = GameCamera.blender.pendingCam1.x;
  GameCamera.blender.blendWork.y = GameCamera.blender.pendingCam1.y;
  GameCamera.blender.blendWork.z = GameCamera.blender.pendingCam1.z;
  GameCamera.blender.blendWork.w = GameCamera.blender.pendingCam1.w;
  return;
}



//==== 000513c4  ns=camera  size=0x98
// sig: void Camera_CopyLastQuatToPolar(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_CopyLastQuatToPolar(void)

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



//==== 0005145c  ns=camera  size=0x58
// sig: void Camera_CopyLastPolarToQuat(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_CopyLastPolarToQuat(void)

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



//==== 000514c0  ns=camera  size=0x630
// sig: void Camera_InitBlender(UpdateCam * pLast)
// callers(1): 00053550 camera::UpdateCamera
// callees(4): 00050d20 camera::Camera_Pos2Polar3d; 000510d8 camera::Camera_InitBlenderPolarHero; 0010bf98 mobyutil::MB_TransformToQuat; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_InitBlender(UpdateCam *pLast)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [32];
  
  lVar2 = (longlong)(int)pLast;
  if (GameCamera.blender.state == 1) {
    if (GameCamera.blender.reqType == '\0') {
      GameCamera.blender.activeCam0.x = pLast->pos[0];
      GameCamera.blender.activeCam0.y = pLast->pos[1];
      GameCamera.blender.activeCam0.z = pLast->pos[2];
      GameCamera.blender.activeCam0.w = pLast->pos[3];
      mobyutil::MB_TransformToQuat(0x951690,lVar2);
    }
    else if (GameCamera.blender.reqType == '\x02') {
      GameCamera.blender.pendingCam0.x = pLast->pos[0];
      GameCamera.blender.pendingCam0.y = pLast->pos[1];
      GameCamera.blender.pendingCam0.z = pLast->pos[2];
      GameCamera.blender.pendingCam0.w = pLast->pos[3];
      mobyutil::MB_TransformToQuat(0x951700,lVar2);
      Camera_InitBlenderPolarHero();
    }
    else {
      Camera_Pos2Polar3d(0x9516a0,lVar2 + 0x30,ZEXT48(GameCamera.pCurrentUpdCam) + 0x30,local_50,
                         local_40,local_30);
      mobyutil::MB_TransformToQuat(0x9516e0,lVar2);
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
    auVar7._0_4_ = auVar6._0_4_ + auVar5._0_4_;
    auVar7._4_4_ = auVar6._4_4_ + auVar5._4_4_;
    auVar7._12_4_ = auVar5._12_4_;
    auVar7._8_4_ = auVar6._8_4_ + auVar5._8_4_;
    auVar5._0_12_ = auVar7._0_12_;
    auVar5._12_4_ = auVar6._12_4_ + auVar7._12_4_;
    iVar3 = GameCamera.blender.reqInterpFrames + 1;
    auVar6._0_4_ = 0;
    auVar6._4_12_ = auVar5._0_12_ >> 0x40;
    auVar6 = auVar6 & (undefined1  [16])0xffffffff;
    auVar5 = vectorConvertFromSignedFixedPointWord(auVar5,0);
    GameCamera.blender.reqInterpFrames =
         storeVectorElementWordIndexed
                   (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x2f4,0x9513c0);
    auVar6 = loadVectorLeftIndexed(4,0x514b4);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = vectorAddFloatingPoint
                       (auVar5,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar5 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar5);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.blender.blendStep =
         storeVectorElementWordIndexed
                   (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x2ec,0x9513c0);
    dVar4 = (double)fastfunc::FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)iVar3 + 0.5)));
    GameCamera.blender.blendStepInv = (f32)(1.0 / dVar4);
  }
  return;
}



//==== 00051af8  ns=camera  size=0x228
// sig: undefined Camera_BlendCamsPosQuat(void)
// callers(1): 000527b8 camera::Camera_BlendCams
// callees(5): 000fecf0 mobyutil::MB_CosineInterpolate; 0010bf98 mobyutil::MB_TransformToQuat; 00500fa8 fastfunc::FastApplyTransform; 00501848 fastfunc::FastSlerp; 00501e18 fastfunc::FastQuaternionToMtx4Identity

undefined8 camera::Camera_BlendCamsPosQuat(int param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_80 [16];
  Vec4 aVStack_70 [4];
  
  dVar8 = 1.0;
  if ((param_2[3] == 1.0) && (*param_2 == 1.0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    dVar4 = (double)mobyutil::MB_CosineInterpolate(0,0x3ff0000000000000,(double)param_2[3]);
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
    mobyutil::MB_TransformToQuat(auStack_80,param_1);
    mobyutil::MB_CosineInterpolate(uVar3,dVar8,(double)*param_2);
    fastfunc::FastSlerp(param_2 + 0x14,param_2 + 8,auStack_80);
    fastfunc::FastQuaternionToMtx4Identity(param_2 + 0x14,aVStack_70);
    if (ControlMode == 0) {
      fastfunc::FastApplyTransform((Vec4 *)&GameCamera.orientMtx,aVStack_70);
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



//==== 00051d40  ns=camera  size=0xa78
// sig: undefined Camera_BlendCamsPolQuat(void)
// callers(1): 000527b8 camera::Camera_BlendCams
// callees(10): 00050d20 camera::Camera_Pos2Polar3d; 000fecf0 mobyutil::MB_CosineInterpolate; 0010bf98 mobyutil::MB_TransformToQuat; 0010c038 mobyutil::MB_AxisAngleToQuat; 00111324 mobyutil::MB_QuatRotate; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 004fff60 fastfunc::FastDecTimerS32; 00501ab0 fastfunc::FastQuaternionToMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

undefined8 camera::Camera_BlendCamsPolQuat(float *param_1,float *param_2)

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
  undefined1 local_160 [16];
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
    dVar7 = (double)mobyutil::MB_CosineInterpolate
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
    dVar8 = (double)fastfunc::FastDiffRots((double)local_a0,(double)*param_2);
    dVar9 = (double)fastfunc::FastWrapRot(*param_2,(float)(dVar7 * dVar8));
    *param_2 = (float)dVar9;
    dVar9 = (double)fastfunc::FastDiffRots((double)local_9c,(double)param_2[1]);
    dVar9 = (double)fastfunc::FastWrapRot(param_2[1],(float)(dVar7 * dVar9));
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
    mobyutil::MB_RotateQuatAxisAngle(*param_2,&local_130,&local_130);
    mobyutil::MB_RotateQuatAxisAngle(param_2[1],&local_130,&local_130);
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
    fastfunc::FastQuaternionToMtx4(param_2 + 0x10,&local_d0);
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
      mobyutil::MB_AxisAngleToQuat((float)(dVar10 * dVar7),afStack_f0,&local_b0);
      mobyutil::MB_QuatRotate(&local_120,&local_d0,afStack_f0);
      mobyutil::MB_QuatRotate(&local_110,&local_c0,afStack_f0);
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
      mobyutil::MB_AxisAngleToQuat((float)dVar10,afStack_e0,&local_b0);
      mobyutil::MB_QuatRotate(&local_100,&local_d0,afStack_e0);
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
    mobyutil::MB_RotateQuatAxisAngle
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
                   (double)(float)((double)hero::g_heroGravityDir * dVar16));
    fVar3 = (float)((double)DAT_00969f74 * dVar16 - (double)(float)((double)DAT_00969f78 * dVar7));
    fVar4 = (float)((double)hero::g_heroGravityDir * dVar7 -
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
    mobyutil::MB_TransformToQuat(param_2 + 0x18,0x951710);
    mobyutil::MB_TransformToQuat(param_2 + 0x10,0x951710);
    fastfunc::FastDecTimerS32(param_2 + 3);
    uVar6 = 0;
  }
  return uVar6;
}



//==== 000527b8  ns=camera  size=0x108
// sig: void Camera_BlendCams(UpdateCam * pCurr)
// callers(1): 00053550 camera::UpdateCamera
// callees(2): 00051af8 camera::Camera_BlendCamsPosQuat; 00051d40 camera::Camera_BlendCamsPolQuat

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_BlendCams(UpdateCam *pCurr)

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



//==== 000528e8  ns=camera  size=0x258
// sig: void HandleCameraShake(void * pShk, int dir)
// callers(1): 00053550 camera::UpdateCamera
// callees(3): 004fff60 fastfunc::FastDecTimerS32; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::HandleCameraShake(void *pShk,int dir)

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
      fastfunc::FastDecTimerS32((longlong)(int)pShk + 8);
      dVar8 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pShk + 8));
      dVar9 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pShk + 0xc));
      dVar9 = (double)(float)(dVar8 / dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pShk + 8));
      dVar8 = (double)fastfunc::FastAddRots((float)(dVar8 * 2.0));
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



//==== 00052b68  ns=camera  size=0x504
// sig: undefined Camera_UpdateHeroInfo(void)
// callers(2): 00053550 camera::UpdateCamera; 0005393c camera::Camera_resetToFollow
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::Camera_UpdateHeroInfo(void)

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
  
  GameCamera.field17_0x1b4._40_4_ = GameCamera.field17_0x1b4._24_4_;
  speed = (float *)&DAT_00052b40;
  dVar14 = 0.0;
  dVar11 = 0.20000000298023224;
  dVar12 = (double)DAT_00969f7c;
  dVar9 = 0.014999999664723873;
  GameCamera.field17_0x1b4._24_4_ = DAT_00969f7c;
  fVar1 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  GameCamera.field17_0x1b4._36_4_ = GameCamera.field17_0x1b4._20_4_;
  GameCamera.field17_0x1b4._32_4_ = GameCamera.field17_0x1b4._16_4_;
  GameCamera.field17_0x1b4._28_4_ = GameCamera.field17_0x1b4._12_4_;
  fVar15 = -1.0 / fVar1;
  dVar6 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar6 = (double)(DAT_00969f74 * fVar15);
  }
  dVar7 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar7 = (double)(hero::g_heroGravityDir * fVar15);
  }
  dVar13 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar13 = (double)(DAT_00969f78 * fVar15);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar6 = (double)(DAT_00969f74 * fVar15);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar7 = (double)(hero::g_heroGravityDir * fVar15);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar13 = (double)(DAT_00969f78 * fVar15);
  }
  GameCamera.field17_0x1b4._20_4_ = (BADTYPE)dVar13;
  GameCamera.field17_0x1b4._16_4_ = (BADTYPE)dVar6;
  GameCamera.field17_0x1b4._12_4_ = (BADTYPE)dVar7;
  fVar1 = (float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar13 +
                 (double)(float)((double)GameCamera.field16_0x1b0 * dVar7 +
                                (double)(float)((double)(float)GameCamera.field17_0x1b4._0_4_ *
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
  GameCamera.field17_0x1b4._0_4_ =
       Cam_InterpValues((float)GameCamera.field17_0x1b4._0_4_,(float)dVar6,(float)dVar9,
                        (float)dVar11,(float)dVar14,speed);
  fVar15 = Cam_InterpValues((float)GameCamera.field17_0x1b4._4_4_,(float)dVar13,(float)dVar9,
                            (float)dVar11,(float)dVar14,speed);
  fVar1 = fVar15 * fVar15 +
          GameCamera.field16_0x1b0 * GameCamera.field16_0x1b0 +
          (float)GameCamera.field17_0x1b4._0_4_ * (float)GameCamera.field17_0x1b4._0_4_;
  dVar9 = dVar14;
  dVar11 = dVar14;
  dVar8 = dVar14;
  if ((double)SQRT(fVar1) != dVar14) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar9 = (double)(GameCamera.field16_0x1b0 * fVar2);
    dVar11 = (double)((float)GameCamera.field17_0x1b4._0_4_ * fVar2);
    dVar8 = (double)(fVar15 * fVar2);
  }
  GameCamera.field17_0x1b4._80_4_ = g_heroPosition.y - (float)GameCamera.field17_0x1b4._64_4_;
  dVar3 = (double)(float)GameCamera.field17_0x1b4._80_4_;
  GameCamera.field17_0x1b4._76_4_ = g_heroPosition.x - (float)GameCamera.field17_0x1b4._60_4_;
  dVar10 = (double)(float)GameCamera.field17_0x1b4._76_4_;
  GameCamera.field17_0x1b4._84_4_ = g_heroPosition.z - (float)GameCamera.field17_0x1b4._68_4_;
  dVar4 = (double)(float)GameCamera.field17_0x1b4._84_4_;
  GameCamera.field16_0x1b0 = (float)dVar9;
  GameCamera.field17_0x1b4._0_4_ = (BADTYPE)dVar11;
  GameCamera.field17_0x1b4._4_4_ = (BADTYPE)dVar8;
  GameCamera.field17_0x1b4._88_4_ = g_heroPosition.w;
  dVar11 = (double)SQRT((float)(dVar13 * dVar13 +
                               (double)(float)(dVar7 * dVar7 + (double)(float)(dVar6 * dVar6))));
  GameCamera.field17_0x1b4._132_4_ =
       (BADTYPE)(dVar4 * dVar13 + (double)(float)(dVar10 * dVar7 + (double)(float)(dVar3 * dVar6)));
  GameCamera.field17_0x1b4._120_4_ = (BADTYPE)dVar12;
  GameCamera.field17_0x1b4._104_4_ = g_heroPosition.w;
  GameCamera.field17_0x1b4._124_4_ =
       SQRT((float)(dVar4 * dVar4 +
                   (double)(float)(dVar10 * dVar10 + (double)(float)(dVar3 * dVar3))));
  dVar12 = (double)(float)((double)(float)GameCamera.field17_0x1b4._132_4_ / dVar11);
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
  GameCamera.field17_0x1b4._96_4_ = (BADTYPE)(dVar3 - dVar9);
  GameCamera.field17_0x1b4._92_4_ = (BADTYPE)(dVar10 - dVar8);
  GameCamera.field17_0x1b4._100_4_ = (BADTYPE)(dVar4 - dVar5);
  GameCamera.field17_0x1b4._108_4_ = (BADTYPE)dVar8;
  GameCamera.field17_0x1b4._112_4_ = (BADTYPE)dVar9;
  GameCamera.field17_0x1b4._116_4_ = (BADTYPE)dVar5;
  fVar1 = (float)GameCamera.field17_0x1b4._100_4_ * (float)GameCamera.field17_0x1b4._100_4_ +
          (float)GameCamera.field17_0x1b4._92_4_ * (float)GameCamera.field17_0x1b4._92_4_ +
          (float)GameCamera.field17_0x1b4._96_4_ * (float)GameCamera.field17_0x1b4._96_4_;
  GameCamera.field17_0x1b4._128_4_ = SQRT(fVar1);
  if ((double)(float)GameCamera.field17_0x1b4._128_4_ != dVar14) {
    fVar15 = 1.0 / SQRT(fVar1);
    fVar15 = -(fVar1 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar1 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar1 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    GameCamera.field17_0x1b4._92_4_ = (float)GameCamera.field17_0x1b4._92_4_ * fVar15;
    GameCamera.field17_0x1b4._96_4_ = (float)GameCamera.field17_0x1b4._96_4_ * fVar15;
    GameCamera.field17_0x1b4._100_4_ = (float)GameCamera.field17_0x1b4._100_4_ * fVar15;
  }
  GameCamera.field17_0x1b4._60_4_ = g_heroPosition.x;
  GameCamera.field17_0x1b4._64_4_ = g_heroPosition.y;
  GameCamera.field17_0x1b4._68_4_ = g_heroPosition.z;
  GameCamera.field17_0x1b4._72_4_ = g_heroPosition.w;
  if ((hero::g_HeroRequestedCamType == 0x50) && (g_heroState != WALL_JUMP)) {
    GameCamera.field15_0x188._8_4_ = g_heroPosition.x;
    GameCamera.field15_0x188._12_4_ = g_heroPosition.y;
  }
  else {
    GameCamera.field15_0x188._8_4_ = g_heroPosition.x;
    GameCamera.field15_0x188._12_4_ = g_heroPosition.y;
    GameCamera.field15_0x188._16_4_ =
         Cam_InterpValues((float)GameCamera.field15_0x188._16_4_,g_heroPosition.z,0.0075,0.175,
                          (float)dVar14,(float *)&DAT_00052b40);
    GameCamera.field15_0x188._20_4_ = g_heroPosition.z;
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
  GameCamera.field17_0x1b4._152_4_ = g_heroRotation.z;
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
    GameCamera.field19_0x25c._12_4_ = g_heroPosition.z;
  }
  else if (g_standingOnMoby == GameCamera.field19_0x25c._8_4_) {
    fVar1 = *(float *)(GameCamera.field19_0x25c._8_4_ + 0x18);
    GameCamera.field19_0x25c._16_4_ = fVar1 - (float)GameCamera.field19_0x25c._12_4_;
    GameCamera.field19_0x25c._12_4_ = fVar1;
    if (ABS((float)GameCamera.field19_0x25c._16_4_) < 0.001) {
      GameCamera.field19_0x25c[0x10] = '\0';
      GameCamera.field19_0x25c[0x11] = '\0';
      GameCamera.field19_0x25c[0x12] = '\0';
      GameCamera.field19_0x25c[0x13] = '\0';
    }
  }
  else {
    GameCamera.field19_0x25c[8] = g_standingOnMoby._0_1_;
    GameCamera.field19_0x25c[9] = g_standingOnMoby._1_1_;
    GameCamera.field19_0x25c[10] = g_standingOnMoby._2_1_;
    GameCamera.field19_0x25c[0xb] = (undefined1)g_standingOnMoby;
    GameCamera.field19_0x25c[0x10] = '\0';
    GameCamera.field19_0x25c[0x11] = '\0';
    GameCamera.field19_0x25c[0x12] = '\0';
    GameCamera.field19_0x25c[0x13] = '\0';
    GameCamera.field19_0x25c._12_4_ = *(undefined4 *)(g_standingOnMoby + 0x18);
  }
  return;
}



//==== 00053078  ns=camera  size=0x178
// sig: void Camera_UpdateUnderWater(void)
// callers(0): 
// callees(3): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 00105f40 mobyutil::CollWaterHeight

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_UpdateUnderWater(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 6) || (g_gameMode != GAME_MODE_NORMAL))
  {
    GameCamera.camUnderWater = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = collproc::CollLine(local_50,local_40,0x12,0,0);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = collproc::CollHotspot();
      if (iVar1 == 0) {
        fVar3 = mobyutil::CollWaterHeight(&CollOutput.ip.x,(float *)0x0);
        GameCamera.camUnderWater = (uint)(GameCamera.posZ < fVar3 + 0.04);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  return;
}



//==== 000531f0  ns=camera  size=0x144
// sig: void Camera_SetCollFlags(void)
// callers(1): 00053550 camera::UpdateCamera
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_SetCollFlags(void)

{
  CAMERA_COLL_BUMP_FLAGS = 0x14;
  if (((hero::g_heroStateType == 0x11) || (hero::g_heroStateType == 0x12)) ||
     (g_heroState == WATER_WALKING)) {
    CAMERA_COLL_BUMP_FLAGS = 0x34;
  }
  if (hero::g_heroStateType != 0x11) {
    if ((int)(((uint)((int)hero::g_heroWaterZ >> 0x1f) >> 1 ^ hero::g_heroWaterZ) -
             ((int)hero::g_heroWaterZ >> 0x1f)) <
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
            CAMERA_COLL_FLAGS = GameCamera.field17_0x1b4._156_4_ | 0xb4;
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



//==== 00053338  ns=camera  size=0x50
// sig: void Camera_HandleScreenFade(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_HandleScreenFade(void)

{
  if ((GameCamera.screenFade != 0.0) &&
     (boot::SceneScreenFade = boot::SceneScreenFade - GameCamera.screenFade,
     boot::SceneScreenFade <= 0.0)) {
    boot::SceneScreenFade = 0.0;
    GameCamera.screenFade = 0.0;
  }
  return;
}



//==== 00053398  ns=camera  size=0x1a8
// sig: void Camera_UpdateFog(float * pos)
// callers(1): 00053550 camera::UpdateCamera
// callees(2): 000fa1e0 mobyfunc::GetBlenderAtPnt; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_UpdateFog(float *pos)

{
  ABGR AVar1;
  ABGR AVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  int local_20;
  float local_1c;
  
  iVar3 = mobyfunc::GetBlenderAtPnt((Vec4 *)pos,&local_1c,&local_20);
  if (iVar3 != 0) {
    if ((g_Blenders[local_20].flags & 2) != 0) {
      dVar5 = 255.0;
      iVar3 = fastfunc::FastDoubleToInt((double)(local_1c * 255.0));
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



//==== 00053550  ns=camera  size=0x38c
// sig: undefined UpdateCamera(void)
// callers(3): 000dcf58 loaders::NAVG_LoadFile; 00161788 space::UpdateSpace; 00166fb0 update::UpdateGameplay
// callees(12): 00050ae0 camera::UpdateAllCameras; 000514c0 camera::Camera_InitBlender; 000527b8 camera::Camera_BlendCams; 000528e8 camera::HandleCameraShake; 00052b68 camera::Camera_UpdateHeroInfo; 000531f0 camera::Camera_SetCollFlags; 00053398 camera::Camera_UpdateFog; 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 00105f40 mobyutil::CollWaterHeight; 0010c1e8 mobyutil::MB_MtxToEuler; 00500f6c fastfunc::FastMtxCopyNoTranslate
// strings: 0096c074: 'None'

void camera::UpdateCamera(void)

{
  void *pCurr;
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 auStack_60 [64];
  
  if (g_gameMode == GAME_MODE_VENDOR) {
    if (g_lastVendorWasPda != 0) {
      return;
    }
    GameCamera.blender.state = 0;
    GameCamera.blender.type = '\0';
  }
  GameCamera.camTimer = GameCamera.camTimer + 1;
  if ((GameCamera.screenFade != 0.0) &&
     (boot::SceneScreenFade = boot::SceneScreenFade - GameCamera.screenFade,
     boot::SceneScreenFade <= 0.0)) {
    boot::SceneScreenFade = 0.0;
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
    fastfunc::FastMtxCopyNoTranslate(auStack_60,0x951710);
    mobyutil::MB_MtxToEuler((int)auStack_60,(MobyInstance *)&GameCamera.rot);
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
      if ((5 < iVar2) || (iVar1 = collproc::CollLine(local_80,local_70,0x12,0,0), iVar1 == 0))
      goto LAB_0005385c;
      iVar1 = collproc::CollHotspot();
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
    }
    fVar3 = mobyutil::CollWaterHeight(&CollOutput.ip.x,(float *)0x0);
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



//==== 000538dc  ns=camera  size=0x60
// sig: int Camera_GetFuncIdx(int type)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::Camera_GetFuncIdx(int type)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0;
  iVar2 = 0;
  if (CameraVTable[0].type != -1) {
    do {
      if (*(int *)((int)&CameraVTable[0].type + (int)(lVar1 << 4) + (int)(lVar1 << 2)) == type) {
        return (int)lVar1;
      }
      iVar2 = (int)lVar1 + 1;
      lVar1 = (longlong)iVar2;
    } while (*(int *)((int)&CameraVTable[0].type + (int)(lVar1 << 4) + (int)(lVar1 << 2)) != -1);
  }
  return iVar2;
}



//==== 0005393c  ns=camera  size=0x1a0
// sig: void Camera_resetToFollow(void)
// callers(5): 00032100 camera0::UpdateCamCollisions_0; 000473f0 camera::camera4::ActivateCamera_4; 00053ae8 camera::InitCameras; 000a0c38 hero::Hero_Warp; 001521d0 respawn::RestoreCheckpoint
// callees(2): 00052b68 camera::Camera_UpdateHeroInfo; 005002cc fastfunc::FastMemCopy

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_resetToFollow(void)

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
            ((int)&CameraVTable[0].init +
            (int)((longlong)*(short *)((int)GameCamera.pCurrentUpdCam + 0x8c) << 4) +
            (int)((longlong)*(short *)((int)GameCamera.pCurrentUpdCam + 0x8c) << 2));
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*puVar2)();
  }
  fastfunc::FastMemCopy(&BackupCam,GameCamera.pCurrentUpdCam,0xa0);
  fastfunc::FastMemCopy(&DAT_00953d60,&CamControlCurrent,0x280);
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
  GameCamera.field15_0x188._8_4_ = g_heroPosition.x;
  GameCamera.field15_0x188._12_4_ = g_heroPosition.y;
  GameCamera.field15_0x188._16_4_ = g_heroPosition.z;
  return;
}



//==== 00053ae8  ns=camera  size=0x330
// sig: void InitCameras(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(1): 0005393c camera::Camera_resetToFollow
// strings: 00953fe0: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::InitCameras(void)

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
  GameCamera.field17_0x1b4._4_4_ = 0.0;
  fVar7 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  if (SQRT(fVar7) == 0.0) {
    GameCamera.field17_0x1b4._8_4_ = (g_heroMobyPtr->transform).v2.w;
    GameCamera.field17_0x1b4._0_4_ = GameCamera.field17_0x1b4._4_4_;
    GameCamera.field16_0x1b0 = (float)GameCamera.field17_0x1b4._4_4_;
  }
  else {
    fVar8 = 1.0 / SQRT(fVar7);
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    GameCamera.field17_0x1b4._8_4_ = (g_heroMobyPtr->transform).v2.w;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    GameCamera.field16_0x1b0 = fVar3 * fVar8;
    GameCamera.field17_0x1b4._0_4_ = fVar2 * fVar8;
    GameCamera.field17_0x1b4._4_4_ = fVar4 * fVar8;
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
  GameCamera.field17_0x1b4._60_4_ = g_heroPosition.x;
  GameCamera.field17_0x1b4._64_4_ = g_heroPosition.y;
  GameCamera.field17_0x1b4._68_4_ = g_heroPosition.z;
  GameCamera.screenFade = 0.0;
  GameCamera.field17_0x1b4._72_4_ = g_heroPosition.w;
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
  GameCamera.field17_0x1b4._152_4_ = g_heroRotation.z;
  GameCamera.field17_0x1b4._148_4_ = g_heroRotation.z;
  GameCamera.field17_0x1b4._144_4_ = g_heroRotation.z;
  GameCamera.field17_0x1b4._140_4_ = g_heroRotation.z;
  GameCamera.field17_0x1b4._136_4_ = g_heroRotation.z;
  GameCamera.field19_0x25c[8] = '\0';
  GameCamera.field19_0x25c[9] = '\0';
  GameCamera.field19_0x25c[10] = '\0';
  GameCamera.field19_0x25c[0xb] = '\0';
  GameCamera.field19_0x25c[0x10] = '\0';
  GameCamera.field19_0x25c[0x11] = '\0';
  GameCamera.field19_0x25c[0x12] = '\0';
  GameCamera.field19_0x25c[0x13] = '\0';
  GameCamera.field19_0x25c._12_4_ = g_heroPosition.z;
  GameCamera.field17_0x1b4._12_4_ = GameCamera.field16_0x1b0;
  GameCamera.field17_0x1b4._16_4_ = GameCamera.field17_0x1b4._0_4_;
  GameCamera.field17_0x1b4._20_4_ = GameCamera.field17_0x1b4._4_4_;
  GameCamera.field17_0x1b4._24_4_ = GameCamera.field17_0x1b4._8_4_;
  GameCamera.field17_0x1b4._28_4_ = GameCamera.field16_0x1b0;
  GameCamera.field17_0x1b4._32_4_ = GameCamera.field17_0x1b4._0_4_;
  GameCamera.field17_0x1b4._36_4_ = GameCamera.field17_0x1b4._4_4_;
  GameCamera.field17_0x1b4._40_4_ = GameCamera.field17_0x1b4._8_4_;
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
      if (CameraVTable[0].type != -1) {
        sVar17 = 0;
        iVar16 = 0;
        pCVar18 = CameraVTable;
        do {
          if (pCVar18->type == (int)sVar15) break;
          pCVar18 = pCVar18 + 1;
          sVar17 = sVar17 + 1;
          piVar10 = (int *)((int)&CameraVTable[1].type + iVar16);
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



//==== 00053e38  ns=camera  size=0x1a4
// sig: undefined Camera_ClampAngles(void)
// callers(7): 000424f0 camera::camera21::InitCamera_21; 00042b48 camera::camera21::UpdateCamera_21; 00048510 camera::camera5::UpdateMobyDrivenCam; 00048a20 camera::camera6::???_Cam6_ClampAndBuildMtx; 00048b00 camera::camera6::Cam6_SetTarget; 00048c78 camera::camera6::Cam6_ResetParams; 00048df8 camera::camera6::Cam6_Update
// callees(0): 

void camera::Camera_ClampAngles(float *param_1,float *param_2,float *param_3)

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



//==== 00053fe8  ns=camera  size=0x3d4
// sig: undefined ???_Camera_CalcPolarToTarget(void)
// callers(3): 00047ea0 camera::camera5::Camera_SetMobyDrivenMode; 00047f74 camera::SetCameraPosition; 00048510 camera::camera5::UpdateMobyDrivenCam
// callees(1): 005025e0 fastfunc::FastDiffRots

undefined8 camera::____Camera_CalcPolarToTarget(float *param_1,float *param_2,float *param_3)

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
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
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
  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
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
  fastfunc::FastDiffRots(dVar19,(double)fVar2);
  *param_1 = (float)dVar19;
  param_1[2] = SQRT((float)(dVar24 * dVar24 + dVar23));
  return 0;
}



//==== 000543c8  ns=camera  size=0x270
// sig: undefined Camera_CollSphereBump(void)
// callers(5): 00038560 camera::camera11::UpdateCamera_11; 0003a5e0 camera::camera13::UpdateCamera_13; 00048998 camera::camera5::UpdateCamera_5; 0004b358 camera::camera7::UpdateCamera_7; 0004eb28 camera::camera9::???_Cam9_CollSphereBump
// callees(3): 00059e20 collproc::CollSphere; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void camera::Camera_CollSphereBump(double param_1,float *param_2)

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
    iVar1 = fastfunc::FastDoubleToInt
                      ((double)(SQRT((float)(dVar11 * dVar11 +
                                            (double)(float)(dVar7 * dVar7 +
                                                           (double)(float)(dVar9 * dVar9)))) /
                               (float)(param_1 * 0.8999999761581421)));
    iVar1 = iVar1 + 1;
    dVar5 = (double)fastfunc::FastIntToDouble(iVar1);
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
          iVar2 = collproc::CollSphere
                            (param_1,param_2,0x950000,CAMERA_COLL_SPHERE_FLAGS,g_heroMobyPtr);
          if (iVar2 == 0) break;
          *param_2 = CollOutput.push.x;
          param_2[1] = CollOutput.push.y;
          param_2[2] = CollOutput.push.z;
          param_2[3] = CollOutput.push.w;
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



//==== 00054670  ns=camera  size=0x34c
// sig: void Camera_CreateReticule(MobyInstance * pMoby)
// callers(1): 00316620 mobyupdate_unsorted::UpdateMoby_25
// callees(3): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00502648 fastfunc::FastAddRots

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_CreateReticule(MobyInstance *pMoby)

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
      iVar3 = mobyutil::MB_randInt(0x3f);
      iVar3 = iVar3 + 1;
      iVar4 = mobyutil::MB_randInt(6);
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
        uVar1 = mobyutil::MB_randInt(iVar3);
        *puVar8 = &DAT_00808080 + (int)((uVar1 & 0xffffffff) << 8) + iVar3;
      }
      else {
        if (3 < iVar4) goto LAB_00054830;
        uVar1 = mobyutil::MB_randInt(iVar3);
        uVar2 = mobyutil::MB_randInt(iVar3);
        *puVar8 = &DAT_00808080 +
                  (int)((uVar1 & 0xffffffff) << 0x10) + (int)((uVar2 & 0xffffffff) << 8) + iVar3;
      }
      sVar5 = mobyutil::MB_randInt(5);
      *psVar9 = sVar5 + 1;
      if (iVar7 < 4) {
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      }
      else {
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar19,(float)dVar20);
      }
      *pfVar10 = (float)dVar13;
      dVar13 = (double)fastfunc::FastAddRots((float)(dVar13 + dVar21));
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
      dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar30);
      uVar6 = 0x37;
      *pfVar11 = (float)((double)(float)(dVar14 * dVar14) * dVar13 + dVar29);
      if (3 < iVar7) {
        uVar6 = mobyutil::MB_randInt(0x37);
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



//==== 000549bc  ns=camera  size=0x24
// sig: void Camera_DestroyReticule(MobyInstance * pMoby)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_DestroyReticule(MobyInstance *pMoby)

{
  if (Reticule == pMoby) {
    DAT_00951784 = 0;
  }
  return;
}



//==== 000549e0  ns=camera  size=0x14
// sig: void Camera_ClearReticule(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_ClearReticule(void)

{
  DAT_00951784 = 0;
  return;
}



//==== 00054a10  ns=camera  size=0x3fc
// sig: void Camera_DrawReticule(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(5): 00065490 draw::ScreenPosFromWorldSpace; 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_DrawReticule(void)

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
      dVar12 = (double)fastfunc::FastIntToDouble(draw::g_ScreenHalfWidth);
      dVar13 = (double)fastfunc::FastIntToDouble(draw::g_ScreenHalfHeight);
      draw::ScreenPosFromWorldSpace(&local_f0,Reticule + 0x10);
      dVar14 = (double)fastfunc::FastIntToDouble(SCREEN_PROJECTION_MAP_X);
      dVar17 = 0.0625;
      dVar15 = (double)fastfunc::FastIntToDouble(SCREEN_PROJECTION_MAP_Y);
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
        draw::GetEffectTex((longlong)*(short *)(puVar9 + 0xc) + 6);
        dVar19 = (double)(float)(dVar21 - dVar25);
        dVar22 = (double)(float)((double)*pfVar10 * dVar14 + dVar12);
        dVar23 = (double)(float)((double)*pfVar10 * dVar15 + dVar13);
        lVar7 = ((LZCOUNT(-iVar8) << 0x3a) >> 0x3f & 0x20U) + 0x20;
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
        fastfunc::FastDoubleToInt
                  ((double)((float)((double)(float)(dVar19 * dVar18) * dVar20) *
                           (float)(longlong)(int)*(short *)(puVar9 + 4)));
        uVar4 = fastfunc::FastDoubleToInt
                          ((double)((float)(longlong)(int)lVar7 * (float)puVar11[0x34]));
        dVar20 = (double)(longlong)((int)uVar4 >> 1);
        uVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar22 - dVar20));
        uVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar23 - dVar20));
        draw::Sprite_DrawShapeWrapper(uVar5,uVar6,uVar4,uVar4,0,0,lVar7,lVar7);
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



//==== 00054e38  ns=camera  size=0x438
// sig: undefined DrawCrosshairSprite(void)
// callers(1): 00055378 camera::TargetCrosshairDraw
// callees(3): 000685c4 draw::GetEffectTex; 0006e740 draw::Sprite_DrawRotated; 00502578 fastfunc::FastWrapRot

void camera::DrawCrosshairSprite
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
  
  draw::GetEffectTex(*(undefined4 *)(param_5 + 0x18));
  dVar15 = (double)*(float *)(param_5 + 0x1c);
  iVar5 = *(int *)(param_5 + 0x2c);
  dVar13 = (double)*(float *)(param_5 + 0x10);
  if (iVar5 < 1) {
    if ((-1 < iVar5) && (iVar5 = 0, 0 < *(short *)(param_5 + 0x26))) {
      dVar13 = 40.0;
      dVar14 = 0.0;
      do {
        dVar6 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar13);
        draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar6,dVar6,dVar15,dVar14,dVar14);
        dVar15 = (double)fastfunc::FastWrapRot((float)dVar15,*(float *)(param_5 + 0x28));
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
    draw::Sprite_DrawRotated
              ((float)param_1,(float)param_2,(double)(float)(dVar13 * 40.0),
               (double)(float)(dVar13 * 40.0),dVar15,0.0,0.0);
    fVar1 = (float)(dVar9 * dVar13 + param_1);
    dVar6 = (double)fVar1;
    dVar8 = (double)(float)(dVar7 + param_2);
    dVar14 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar12);
    draw::Sprite_DrawRotated(fVar1,(float)(dVar7 + param_2),dVar14,dVar14,dVar15,dVar10,dVar10);
    dVar14 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar12);
    draw::Sprite_DrawRotated
              (-(float)(dVar11 * dVar13 - param_1),-(float)(dVar9 * dVar13 - param_2),dVar14,dVar14,
               dVar15,dVar10,dVar10);
    dVar14 = (double)(float)((double)*(float *)(param_5 + 0x10) * dVar12);
    draw::Sprite_DrawRotated
              (-(float)(dVar11 * dVar13 - dVar6),-(float)(dVar9 * dVar13 - dVar8),dVar14,dVar14,
               dVar15,dVar10,dVar10);
  }
  else if (iVar5 < 3) {
    if (*(int *)(g_viewMtxPtr + 0x4a0) == 1) {
      param_1 = (double)(float)(param_1 - (double)*(float *)(g_viewMtxPtr + 0x1a84));
    }
    draw::Sprite_DrawRotated
              ((float)param_1,(float)param_2,(double)(float)(dVar13 * 40.0),
               (double)(float)(dVar13 * 40.0),dVar15,0.5,0.5);
  }
  return;
}



//==== 00055270  ns=camera  size=0x14
// sig: void ClearTargetCrosshair(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::ClearTargetCrosshair(void)

{
  g_Crosshair = 0;
  return;
}



//==== 00055284  ns=camera  size=0xec
// sig: void DrawTargetCrosshair(float size, MobyInstance * pTarget, uint color, uint param_4)
// callers(10): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002ebd98 mobyupdate_unsorted::UpdateMoby_208; 0036b008 mobyupdate_helpers::M426_0036b008; 0036b630 mobyupdate_helpers::M426_0036b630; 003892e8 mobyupdate_unsorted::UpdateMoby_454; 0042c150 mobyupdate_unsorted::UpdateMoby_71; 00488eb0 mobyupdate_unsorted::UpdateMoby_849
// callees(0): 

void camera::DrawTargetCrosshair(float size,MobyInstance *pTarget,uint color,uint param_4)

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



//==== 00055378  ns=camera  size=0x1ac
// sig: undefined TargetCrosshairDraw(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(3): 00054e38 camera::DrawCrosshairSprite; 00065490 draw::ScreenPosFromWorldSpace; 00502730 fastfunc::FastIntToDouble

void camera::TargetCrosshairDraw(void)

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
    dVar5 = (double)fastfunc::FastIntToDouble(draw::g_ScreenHalfWidth);
    dVar6 = (double)fastfunc::FastIntToDouble(draw::g_ScreenHalfHeight);
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
            draw::ScreenPosFromWorldSpace(&local_50,puVar4);
            dVar7 = (double)fastfunc::FastIntToDouble(SCREEN_PROJECTION_MAP_X);
            local_50 = (float)((double)(float)((double)local_50 - dVar7) * dVar9);
            dVar7 = dVar5;
            dVar8 = dVar6;
            dVar6 = (double)fastfunc::FastIntToDouble(SCREEN_PROJECTION_MAP_Y);
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



//==== 00055530  ns=camera  size=0x3c4
// sig: undefined IsPntInCollPrim(void)
// callers(1): 000558f8 camera::CamCollGrid_FindPrimAtPnt
// callees(0): 

bool camera::IsPntInCollPrim(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

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



//==== 000558f8  ns=camera  size=0x1ac
// sig: undefined CamCollGrid_FindPrimAtPnt(void)
// callers(5): 0002bb10 camera0::CollPrimSphere; 0002bc88 camera0::IsPntInCollPrim; 00031b78 camera0::UpdateSegmentColl_0; 00032100 camera0::UpdateCamCollisions_0; 000473f0 camera::camera4::ActivateCamera_4
// callees(2): 00055530 camera::IsPntInCollPrim; 00502758 fastfunc::FastDoubleToInt
// strings: 00055994: 'xc6d?`' (raw)

int * camera::CamCollGrid_FindPrimAtPnt(double param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * 0.0625));
  dVar8 = (double)fStack00000034;
  uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar8 * dVar9));
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



//==== 00055aa4  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_COLL(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_COLL(void)

{
  DAT_0071eaa4 = 0x10000;
  return;
}



//==== 00055ab8  ns=stub  size=0x8
// sig: undefined STUB_00055ab8_RET_0(void)
// callers(4): 00291970 mobyupdate_unsorted::UpdateMoby_152; 002fa6f0 mobyupdate_unsorted::UpdateMoby_227; 0030d0a0 mobyupdate_unsorted::UpdateMoby_241; 00355370 mobyupdate_unsorted::UpdateMoby_372
// callees(0): 

undefined8 stub::STUB_00055ab8_RET_0(void)

{
  return 0;
}



//==== 00055ac0  ns=stub  size=0x8
// sig: undefined STUB_00055ac0_RET_0(void)
// callers(8): 002fa6f0 mobyupdate_unsorted::UpdateMoby_227; 0030c010 mobyupdate_unsorted::UpdateMoby_240; 00316de0 mobyupdate_helpers::M252_00316de0; 00366f00 mobyupdate_unsorted::UpdateMoby_413; 00373720 mobyupdate_unsorted::UpdateMoby_435; 0039ef28 mobyupdate_unsorted::UpdateMoby_487; 003efce0 mobyupdate_unsorted::UpdateMoby_630; 0043a188 mobyupdate_unsorted::UpdateMoby_739
// callees(0): 

undefined8 stub::STUB_00055ac0_RET_0(void)

{
  return 0;
}



//==== 00055ac8  ns=stub  size=0x8
// sig: undefined STUB_00055ac8_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00055ac8_RET_0(void)

{
  return 0;
}



//==== 00055ad0  ns=collproc  size=0x160
// sig: undefined Coll_ComputeVertOutcodes(void)
// callers(0): 
// callees(0): 

void collproc::Coll_ComputeVertOutcodes
               (undefined4 *param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fStack00000050;
  float fStack00000054;
  float fStack00000060;
  float fStack00000064;
  
  iVar4 = 0;
  if (0 < param_4) {
    iVar5 = 0;
    pfVar6 = param_3;
    do {
      fVar1 = *pfVar6;
      fStack00000060 = (float)((ulonglong)param_7 >> 0x20);
      pfVar2 = pfVar6 + 1;
      pfVar3 = pfVar6 + 2;
      fStack00000064 = (float)param_7;
      fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
      fStack00000054 = (float)param_5;
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 3;
      *(uint *)(param_2 + iVar5) =
           (uint)(fStack00000060 < fVar1) << 1 | (uint)(fVar1 < fStack00000050) |
           (uint)(fStack00000064 < *pfVar2) << 9 | (uint)(*pfVar2 < fStack00000054) << 8 |
           (uint)((float)((ulonglong)param_8 >> 0x20) < *pfVar3) << 0x11 |
           (uint)(*pfVar3 < (float)((ulonglong)param_6 >> 0x20)) << 0x10;
      iVar5 = iVar5 + 4;
    } while (iVar4 < param_4);
  }
  *param_1 = param_3;
  return;
}



//==== 00055c30  ns=collproc  size=0x134
// sig: undefined Coll_AddDamage(void)
// callers(2): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere
// callees(0): 

void collproc::Coll_AddDamage(MobyInstance *param_1,float *param_2,int param_3)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  CollDamageOut *pCVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = param_1->damage;
  if (((-1 < (char)bVar1) && (param_1 == CollDamage[bVar1].pVictimMoby)) &&
     (param_2[7] <= CollDamage[bVar1].damageHp)) {
    return;
  }
  uVar6 = CollOutput.damageNext + 1;
  uVar3 = CollOutput.damageNext & 0xff;
  param_1->damage = (s8)CollOutput.damageNext;
  CollOutput.damageNext =
       uVar6 + (((int)uVar6 >> 6) + (uint)((int)uVar6 < 0 && (uVar6 & 0x3f) != 0)) * -0x40;
  CollDamage[uVar3].impact.x = *param_2;
  CollDamage[uVar3].impact.y = param_2[1];
  CollDamage[uVar3].impact.z = param_2[2];
  CollDamage[uVar3].impact.w = param_2[3];
  CollDamage[uVar3].ip_.x = CollOutput.ip.x;
  CollDamage[uVar3].ip_.y = CollOutput.ip.y;
  CollDamage[uVar3].ip_.z = CollOutput.ip.z;
  fVar2 = CollOutput.ip.w;
  pCVar4 = CollDamage + uVar3;
  pCVar4->padding[0] = '\0';
  pCVar4->padding[1] = '\0';
  pCVar4->padding[2] = '\0';
  pCVar4->padding[3] = '\0';
  CollDamage[uVar3].ip_.w = fVar2;
  CollDamage[uVar3].pDamager = (MobyInstance *)param_2[4];
  CollDamage[uVar3].damageFlags = (uint)param_2[5];
  CollDamage[uVar3].damageClass = *(char *)(param_2 + 6);
  iVar5 = -0x20;
  CollDamage[uVar3].damageStrength = *(char *)((int)param_2 + 0x19);
  CollDamage[uVar3].damageIndex = *(u16 *)((int)param_2 + 0x1a);
  CollDamage[uVar3].damageHp = param_2[7];
  fVar2 = param_2[8];
  CollDamage[uVar3].pVictimMoby = param_1;
  CollDamage[uVar3].unk30_flags_ = (u32)fVar2;
  if (param_3 < 0) {
    iVar5 = (int)CollOutput.padding + (int)(param_1->collision + -2);
  }
  *(int *)CollDamage[uVar3].padding = iVar5 >> 5;
  return;
}



//==== 00055d70  ns=collproc  size=0x2ac
// sig: undefined CollLineVsSphere(void)
// callers(1): 00057820 collproc::CollLine
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void collproc::CollLineVsSphere
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,int *param_7,int param_8)

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
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000050;
  float fStack00000054;
  int in_stack_00000074;
  
  fVar2 = (float)((ulonglong)param_4 >> 0x20);
  fVar6 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000034 = (float)param_1;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000044 = (float)param_3;
  fVar3 = fStack00000030 - fStack00000040;
  fVar4 = fStack00000034 - fStack00000044;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000054 = (float)param_5;
  fVar7 = fStack00000038 - fVar2;
  fVar8 = fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054 + fVar6 * fVar6;
  fVar9 = fVar3 * fStack00000050 + fVar4 * fStack00000054 + fVar7 * fVar6;
  fVar1 = 0.0;
  fStack0000003c = (float)param_2;
  fVar5 = fVar9 / fVar8;
  if (fVar9 / fVar8 < 0.0) {
    fVar5 = fVar1;
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  fVar10 = (fStack00000040 + fStack00000050 * fVar5) - fStack00000030;
  fVar11 = (fStack00000044 + fStack00000054 * fVar5) - fStack00000034;
  fVar5 = (fVar2 + fVar6 * fVar5) - fStack00000038;
  if ((fVar10 * fVar10 + fVar11 * fVar11 + fVar5 * fVar5) - fStack0000003c * fStack0000003c < 0.0) {
    fVar9 = fVar9 + fVar9;
    fVar3 = fVar9 * fVar9 -
            fVar8 * 4.0 *
            ((fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7) - fStack0000003c * fStack0000003c);
    if (fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    fVar3 = -((-fVar9 + SQRT(fVar3)) / (fVar8 + fVar8));
    if (fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    fStack00000040 = fStack00000040 + fStack00000050 * fVar3;
    fStack00000044 = fStack00000044 + fStack00000054 * fVar3;
    fVar2 = fVar2 + fVar6 * fVar3;
    if (0.0 < (float)param_7[2] - fVar3) {
      param_7[1] = in_stack_00000074;
      *param_7 = -param_8;
      param_7[2] = (int)fVar3;
      param_7[3] = (int)fStack00000040;
      param_7[4] = (int)fStack00000044;
      param_7[5] = (int)fVar2;
      param_7[6] = (int)(fStack00000040 - fStack00000030);
      param_7[7] = (int)(fStack00000044 - fStack00000034);
      param_7[8] = (int)(fVar2 - fStack00000038);
    }
  }
  return;
}



//==== 00056020  ns=collproc  size=0x4b0
// sig: undefined CollLineVsTri(void)
// callers(2): 00056c20 collproc::CollLineVsEnv; 00057820 collproc::CollLine
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] Ray vs one CollTri. Skips tri if all vert outcodes agree, if (type&0x80) and flag
   0x80 (camera), or if flag 0x20 and material == (flags>>8)&0x1f. Flag 0x10 = double sided. Writes
   CollHit (poly = type+0x1000). */

void collproc::CollLineVsTri
               (byte *param_1,int param_2,int param_3,int *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
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
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  float in_stack_00000080;
  float in_stack_00000084;
  float in_stack_00000088;
  float in_stack_00000090;
  float in_stack_00000094;
  float in_stack_00000098;
  int in_stack_000000a4;
  
  bVar1 = param_1[3];
  if ((((*(uint *)(param_3 + (uint)*param_1 * 4) & *(uint *)(param_3 + (uint)param_1[1] * 4) &
        *(uint *)(param_3 + (uint)param_1[2] * 4)) == 0) && ((bVar1 & 0x80 & param_8) == 0)) &&
     ((param_8 & 0x20) == 0 || ((param_8 >> 8 ^ (uint)bVar1) & 0x1f) != 0)) {
    pfVar19 = (float *)(param_2 + (uint)*param_1 * 0xc);
    pfVar20 = (float *)(param_2 + (uint)param_1[1] * 0xc);
    pfVar18 = (float *)(param_2 + (uint)param_1[2] * 0xc);
    fVar2 = *pfVar19;
    fVar3 = pfVar19[1];
    fVar4 = pfVar19[2];
    fVar5 = *pfVar20 - fVar2;
    fVar7 = pfVar20[1] - fVar3;
    fVar9 = pfVar20[2] - fVar4;
    fVar6 = *pfVar18 - fVar2;
    fVar8 = pfVar18[1] - fVar3;
    fVar10 = pfVar18[2] - fVar4;
    fVar13 = fVar8 * fVar9 - fVar10 * fVar7;
    fVar12 = fVar10 * fVar5 - fVar6 * fVar9;
    fVar14 = fVar6 * fVar7 - fVar8 * fVar5;
    fVar11 = in_stack_00000070 * fVar13 + in_stack_00000074 * fVar12 + in_stack_00000078 * fVar14;
    fVar16 = (fVar2 - in_stack_00000080) * fVar13 + (fVar3 - in_stack_00000084) * fVar12 +
             (fVar4 - in_stack_00000088) * fVar14;
    fVar17 = (fVar2 - in_stack_00000090) * fVar13 + (fVar3 - in_stack_00000094) * fVar12 +
             (fVar4 - in_stack_00000098) * fVar14;
    fVar15 = fVar16 / fVar11;
    if (((fVar11 != 0.0) && (((param_8 & 0x10) != 0 || ((fVar16 < 0.0 && (0.0 < fVar17)))))) &&
       ((uint)(0.0 < fVar16) - (uint)(fVar16 < 0.0) != (uint)(0.0 < fVar17) - (uint)(fVar17 < 0.0)))
    {
      fStack0000005c = (float)param_6;
      fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
      fStack0000005c = fVar3 + fStack0000005c;
      fStack00000058 = fVar2 + fStack00000058;
      fVar11 = fVar4 + (float)((ulonglong)param_7 >> 0x20);
      fVar16 = (in_stack_00000080 - fVar2) + in_stack_00000070 * fVar15;
      fVar2 = (in_stack_00000084 - fVar3) + in_stack_00000074 * fVar15;
      fVar3 = (in_stack_00000088 - fVar4) + in_stack_00000078 * fVar15;
      if (((0.0 <= (fVar8 * fVar3 - fVar10 * fVar2) * fVar13 +
                   (fVar10 * fVar16 - fVar6 * fVar3) * fVar12 +
                   (fVar6 * fVar2 - fVar8 * fVar16) * fVar14 &&
            0.0 <= (fVar2 * fVar9 - fVar3 * fVar7) * fVar13 +
                   (fVar3 * fVar5 - fVar16 * fVar9) * fVar12 +
                   (fVar16 * fVar7 - fVar2 * fVar5) * fVar14) &&
          (0.0 <= ((fVar2 - fVar7) * (fVar10 - fVar9) - (fVar3 - fVar9) * (fVar8 - fVar7)) * fVar13
                  + ((fVar3 - fVar9) * (fVar6 - fVar5) - (fVar16 - fVar5) * (fVar10 - fVar9)) *
                    fVar12 +
                  ((fVar16 - fVar5) * (fVar8 - fVar7) - (fVar2 - fVar7) * (fVar6 - fVar5)) * fVar14)
          ) && (0.0 < (float)param_4[2] - fVar15)) {
        *param_4 = bVar1 + 0x1000;
        param_4[1] = in_stack_000000a4;
        param_4[2] = (int)fVar15;
        param_4[3] = (int)(fVar16 + fStack00000058);
        param_4[4] = (int)(fVar2 + fStack0000005c);
        param_4[5] = (int)(fVar3 + fVar11);
        param_4[6] = (int)fVar13;
        param_4[7] = (int)fVar12;
        param_4[8] = (int)fVar14;
        param_4[9] = (int)fStack00000058;
        param_4[10] = (int)fStack0000005c;
        param_4[0xb] = (int)fVar11;
        param_4[0xc] = (int)(fVar5 + fStack00000058);
        param_4[0xd] = (int)(fVar7 + fStack0000005c);
        param_4[0xe] = (int)(fVar9 + fVar11);
        param_4[0xf] = (int)(fVar6 + fStack00000058);
        param_4[0x10] = (int)(fVar8 + fStack0000005c);
        param_4[0x11] = (int)(fVar10 + fVar11);
      }
    }
  }
  return;
}



//==== 000564d0  ns=collproc  size=0x560
// sig: undefined CollMoby_TransformVerts(void)
// callers(4): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005c710 collproc::CollPill; 0005e598 collproc::CollMobySphere
// callees(1): 005c5ad0 libc::memcpy

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] Transforms moby->collision verts to world space + per-vert AABB outcodes; returns tri
   list/count via out params. Meshes >150 verts use g_CollMobyVertCache (8 slots). */

ulonglong collproc::CollMoby_TransformVerts
                    (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  void *pvVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000058;
  float fStack0000005c;
  float fStack00000060;
  float fStack00000064;
  float fStack00000068;
  float fStack0000006c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  float *in_stack_00000084;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int *in_stack_0000009c;
  
  iVar4 = *(int *)(param_1 + 0x94);
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  iVar12 = iVar4 + *(int *)(iVar4 + 4);
  iVar4 = *(int *)(iVar4 + 0xc) >> 4;
  *in_stack_00000094 = iVar12 + 0x10 + iVar4 * 0x10;
  *in_stack_0000009c = *(int *)(*(int *)(param_1 + 0x94) + 8) >> 2;
  fStack0000005c = (float)param_6;
  fStack00000064 = (float)param_7;
  fStack0000006c = (float)param_8;
  fStack0000004c = (float)param_4;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fStack0000003c = (float)param_2;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000060 = (float)((ulonglong)param_7 >> 0x20);
  fStack00000068 = (float)((ulonglong)param_8 >> 0x20);
  iVar14 = -1;
  if (0x96 < iVar4) {
    iVar16 = 0;
    do {
      iVar14 = iVar16;
      if (g_CollMobyVertCache[iVar16].oClass == 0) {
        g_CollMobyVertCache[iVar16].oClass = (int)*(short *)(param_1 + 0xa6);
        break;
      }
      if (g_CollMobyVertCache[iVar16].oClass == (int)*(short *)(param_1 + 0xa6)) {
        bVar9 = false;
        bVar8 = false;
        if (((fStack00000058 != g_CollMobyVertCache[iVar16].mtx[0]) ||
            (fStack0000005c != g_CollMobyVertCache[iVar16].mtx[1])) ||
           (fStack00000060 != g_CollMobyVertCache[iVar16].mtx[2])) {
          bVar8 = true;
        }
        if (bVar8) {
LAB_000566b8:
          bVar9 = true;
        }
        else {
          bVar8 = false;
          if (((fStack00000064 != g_CollMobyVertCache[iVar16].mtx[3]) ||
              (fStack00000068 != g_CollMobyVertCache[iVar16].mtx[4])) ||
             (fStack0000006c != g_CollMobyVertCache[iVar16].mtx[5])) {
            bVar8 = true;
          }
          if (bVar8) goto LAB_000566b8;
          bVar8 = false;
          if (((in_stack_00000070 != g_CollMobyVertCache[iVar16].mtx[6]) ||
              (in_stack_00000074 != g_CollMobyVertCache[iVar16].mtx[7])) ||
             (in_stack_00000078 != g_CollMobyVertCache[iVar16].mtx[8])) {
            bVar8 = true;
          }
          if (bVar8) goto LAB_000566b8;
        }
        if (!bVar9) {
          uVar10 = 0;
          if (iVar4 < 1) {
            return 0;
          }
          do {
            pfVar15 = in_stack_00000084 + (int)uVar10 * 3;
            pfVar13 = (float *)((int)uVar10 * 0xc + 0x9540e8 + iVar16 * 0xc28);
            fVar1 = *pfVar13;
            fVar2 = pfVar13[1];
            fVar3 = pfVar13[2];
            *pfVar15 = fVar1;
            pfVar15[1] = fVar2;
            pfVar15[2] = fVar3;
            uVar5 = uVar10 & 0xffffffff;
            uVar10 = uVar10 + 1;
            *(uint *)(in_stack_0000008c + (int)(uVar5 << 2)) =
                 (uint)(fStack00000048 < fVar1) << 1 | (uint)(fVar1 < fStack00000038) |
                 (uint)(fStack0000004c < fVar2) << 9 | (uint)(fVar2 < fStack0000003c) << 8 |
                 (uint)(fStack00000050 < fVar3) << 0x11 | (uint)(fVar3 < fStack00000040) << 0x10;
          } while ((int)uVar10 < iVar4);
          return uVar10;
        }
        break;
      }
      iVar16 = iVar16 + 1;
      iVar14 = -1;
    } while (iVar16 < 8);
  }
  uVar10 = 0;
  if (0 < iVar4) {
    iVar17 = 0;
    iVar16 = 0;
    pfVar13 = in_stack_00000084;
    do {
      fVar3 = *(float *)(iVar12 + 0x10 + iVar17);
      fVar1 = *(float *)(iVar12 + 0x14 + iVar17);
      fVar2 = *(float *)(iVar12 + 0x18 + iVar17);
      fVar6 = fStack00000058 * fVar3 + fStack00000064 * fVar1 + in_stack_00000070 * fVar2;
      fVar7 = fStack0000005c * fVar3 + fStack00000068 * fVar1 + in_stack_00000074 * fVar2;
      fVar1 = fStack00000060 * fVar3 + fStack0000006c * fVar1 + in_stack_00000078 * fVar2;
      *pfVar13 = fVar6;
      pfVar13[1] = fVar7;
      pfVar13[2] = fVar1;
      uVar10 = uVar10 + 1;
      iVar17 = iVar17 + 0x10;
      pfVar13 = pfVar13 + 3;
      *(uint *)(in_stack_0000008c + iVar16) =
           (uint)(fVar7 < fStack0000003c) << 8 | (uint)(fStack00000048 < fVar6) << 1 |
           (uint)(fVar6 < fStack00000038) |
           (uint)(fStack0000004c < fVar7) << 9 |
           (uint)(fStack00000050 < fVar1) << 0x11 | (uint)(fVar1 < fStack00000040) << 0x10;
      iVar16 = iVar16 + 4;
    } while ((int)uVar10 < iVar4);
  }
  if (iVar14 != -1) {
    g_CollMobyVertCache[iVar14].mtx[0] = fStack00000058;
    g_CollMobyVertCache[iVar14].mtx[1] = fStack0000005c;
    g_CollMobyVertCache[iVar14].mtx[2] = fStack00000060;
    g_CollMobyVertCache[iVar14].mtx[3] = fStack00000064;
    g_CollMobyVertCache[iVar14].mtx[4] = fStack00000068;
    g_CollMobyVertCache[iVar14].mtx[5] = fStack0000006c;
    g_CollMobyVertCache[iVar14].mtx[6] = in_stack_00000070;
    g_CollMobyVertCache[iVar14].mtx[7] = in_stack_00000074;
    g_CollMobyVertCache[iVar14].mtx[8] = in_stack_00000078;
    _fStack00000038 = param_2;
    _fStack00000048 = param_4;
    _fStack00000058 = param_6;
    _fStack00000060 = param_7;
    _fStack00000068 = param_8;
    pvVar11 = libc::memcpy(g_CollMobyVertCache[iVar14].verts,in_stack_00000084,iVar4 * 0xc);
    uVar10 = (ulonglong)(int)pvVar11;
  }
  return uVar10;
}



//==== 00056a30  ns=collproc  size=0xf4
// sig: undefined CollMoby_GetJointCache(void)
// callers(1): 00057820 collproc::CollLine
// callees(1): 000f595c mobyfunc::Moby_BuildJointMatrices

ulonglong collproc::CollMoby_GetJointCache(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    if (*(int *)(&MobyClassRef + (int)((uVar3 & 0xffffffff) << 3)) == *(int *)(param_1 + 0xa8)) {
      return ZEXT48(&g_CollMobyJointCache) + uVar3 * 0x7fc & 0xffffffff;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 8);
  iVar1 = CollOutput.padding[2] * 8;
  uVar4 = CollOutput.padding[2] + 1;
  iVar2 = CollOutput.padding[2] * 0x7fc;
  CollOutput.padding[2] =
       uVar4 + (((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0)) * -8;
  *(int *)(&MobyClassRef + iVar1) = *(int *)(param_1 + 0xa8);
  *(int *)(iVar1 + 0xa109c4) = CollOutput.collCount;
  mobyfunc::Moby_BuildJointMatrices(param_1,param_2,ZEXT48(&g_CollMobyJointCache + iVar2));
  return ZEXT48(&g_CollMobyJointCache + iVar2);
}



//==== 00056b24  ns=collproc  size=0xf0
// sig: CollCell * CollGrid_GetCell(int x, int y, int z)
// callers(3): 00056c20 collproc::CollLineVsEnv; 00059e20 collproc::CollSphere; 0005c710 collproc::CollPill
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CollCell * collproc::CollGrid_GetCell(int x,int y,int z)

{
  int iVar1;
  short *psVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = z - *CollOutput.grid;
  if ((-1 < iVar1) && (iVar1 < *(short *)((int)CollOutput.grid + 2))) {
    psVar2 = (short *)((int)CollOutput.grid + *(int *)((int)CollOutput.grid + iVar1 * 4 + 4));
    iVar1 = y - *psVar2;
    if ((-1 < iVar1) && (iVar1 < psVar2[1])) {
      psVar2 = (short *)((int)CollOutput.grid + *(int *)(psVar2 + iVar1 * 2 + 2));
      iVar1 = x - *psVar2;
      if (((-1 < iVar1) && (iVar1 < psVar2[1])) && (*(int *)(psVar2 + iVar1 * 2 + 2) != 0)) {
        return (CollCell *)((int)CollOutput.grid + *(int *)(psVar2 + iVar1 * 2 + 2));
      }
    }
  }
  return (CollCell *)0x0;
}



//==== 00056c20  ns=collproc  size=0xbe4
// sig: undefined CollLineVsEnv(void)
// callers(1): 00057820 collproc::CollLine
// callees(2): 00056020 collproc::CollLineVsTri; 00056b24 collproc::CollGrid_GetCell

/* [collision] Walks the cell list built by CollLine, looks up each env cell (CollGrid_GetCell) and
   tests its tris; cell center = (idx<<12)|0x800 i.e. (4*idx+2)*1024. */

void collproc::CollLineVsEnv
               (double param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  CollCell *pCVar27;
  longlong lVar26;
  CollCell *pCVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  uint uVar31;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  CollCell *pCVar32;
  ulonglong unaff_r27;
  CollCell *pCVar33;
  ulonglong unaff_r28;
  int iVar34;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar35;
  ulonglong uVar36;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uStack00000040;
  undefined4 uStack00000048;
  undefined8 uStack00000050;
  undefined4 uStack00000058;
  undefined8 uStack00000060;
  undefined4 uStack00000068;
  int in_stack_00000074;
  uint in_stack_0000007c;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar30 = uVar25 - 0x5a0;
  puVar12 = (ulonglong *)lVar30;
  *puVar12 = uVar25;
  puVar12[0xb6] = in_LR;
  puVar12[0xb2] = in_f30;
  puVar12[0xb3] = in_f31;
  puVar12[0xb0] = unaff_r30;
  puVar12[0xa4] = unaff_r18;
  puVar12[0xa0] = unaff_r14;
  uStack00000048 = (undefined4)((ulonglong)param_5 >> 0x20);
  puVar12[0xb1] = unaff_r31;
  puVar12[0xad] = unaff_r27;
  uStack00000058 = (undefined4)((ulonglong)param_7 >> 0x20);
  puVar12[0xaf] = unaff_r29;
  puVar12[0xab] = unaff_r25;
  puVar12[0xaa] = unaff_r24;
  puVar12[0xae] = unaff_r28;
  puVar12[0xa3] = unaff_r17;
  uStack00000068 = (undefined4)((ulonglong)param_9 >> 0x20);
  puVar12[0xa9] = unaff_r23;
  iVar34 = (int)(((ulonglong)in_stack_0000007c & 0x1fffffff) << 3);
  puVar12[0xa8] = unaff_r22;
  puVar12[0xac] = unaff_r26;
  bVar1 = *(byte *)(in_stack_00000074 + 4 + iVar34);
  puVar12[0xa7] = unaff_r21;
  puVar12[0xa2] = unaff_r16;
  bVar2 = *(byte *)(in_stack_00000074 + 5 + iVar34);
  puVar12[0xa1] = unaff_r15;
  bVar3 = *(byte *)(in_stack_00000074 + 6 + iVar34);
  puVar12[0xa6] = unaff_r20;
  puVar12[0xa5] = unaff_r19;
  uStack00000040 = param_4;
  uStack00000050 = param_6;
  uStack00000060 = param_8;
  pCVar27 = CollGrid_GetCell((uint)bVar1,(uint)bVar2,(uint)bVar3);
  if (pCVar27 != (CollCell *)0x0) {
    bVar4 = pCVar27->vertCount;
    uVar31 = (uint)bVar4;
    if (bVar4 != 0) {
      dVar35 = (double)*(float *)(in_stack_00000074 + 8 + iVar34);
      if ((in_stack_0000007c == 0) && (param_1 == 1.0)) {
        param_1 = 0.0;
        dVar35 = 1.0;
      }
      puVar12[0x9e] = (longlong)(int)((uint)bVar1 << 0xc | 0x800);
      uVar36 = puVar12[0x9e];
      puVar12[0x9e] = (longlong)(int)((uint)bVar2 << 0xc | 0x800);
      fVar13 = (float)(longlong)uVar36;
      *(float *)(puVar12 + 0x9c) = fVar13;
      *(float *)((int)puVar12 + 0x4e4) = fVar13;
      *(float *)(puVar12 + 0x9d) = fVar13;
      *(float *)((int)puVar12 + 0x4ec) = fVar13;
      uVar36 = puVar12[0x9e];
      puVar12[0x9e] = (longlong)(int)((uint)bVar3 << 0xc | 0x800);
      fVar16 = (float)(longlong)uVar36;
      auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar16;
      *(float *)((int)puVar12 + 0x4e4) = fVar16;
      *(float *)(puVar12 + 0x9d) = fVar16;
      *(float *)((int)puVar12 + 0x4ec) = fVar16;
      fVar19 = (float)(longlong)puVar12[0x9e];
      auVar10 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar19;
      *(float *)((int)puVar12 + 0x4e4) = fVar19;
      *(float *)(puVar12 + 0x9d) = fVar19;
      *(float *)((int)puVar12 + 0x4ec) = fVar19;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar5 = *(float *)(puVar12 + 0xbc);
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar6 = *(float *)(puVar12 + 0xbd);
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar14 = (fVar5 + (float)((double)*(float *)(puVar12 + 0xc0) * dVar35)) - fVar13;
      fVar15 = (*(float *)(puVar12 + 0xbc) + (float)((double)*(float *)(puVar12 + 0xc0) * param_1))
               - fVar13;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar17 = (uStack00000040._4_4_ + (float)((double)uStack00000060._4_4_ * param_1)) - fVar16;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar20 = (*(float *)(puVar12 + 0xbd) + (float)((double)*(float *)(puVar12 + 0xc1) * param_1))
               - fVar19;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar18 = (*(float *)((int)puVar12 + 0x5e4) +
               (float)((double)*(float *)((int)puVar12 + 0x604) * dVar35)) - fVar16;
      fVar21 = (fVar6 + (float)((double)*(float *)(puVar12 + 0xc1) * dVar35)) - fVar19;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar25 - 0x4f0)
      ;
      *(undefined4 *)(uVar25 - 0x4f0) = uVar8;
      auVar9 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar25 - 0x4ec)
      ;
      *(undefined4 *)(uVar25 - 0x4ec) = uVar8;
      auVar9 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar25 - 0x4e8)
      ;
      *(undefined4 *)(uVar25 - 0x4e8) = uVar8;
      fVar24 = fVar14;
      if (fVar15 < fVar14) {
        fVar24 = fVar15;
      }
      fVar23 = fVar18;
      if (fVar17 < fVar18) {
        fVar23 = fVar17;
      }
      fVar22 = fVar21;
      if (fVar20 < fVar21) {
        fVar22 = fVar20;
      }
      if (fVar14 < fVar15) {
        fVar14 = fVar15;
      }
      if (fVar18 < fVar17) {
        fVar18 = fVar17;
      }
      if (fVar21 < fVar20) {
        fVar21 = fVar20;
      }
      fVar5 = fVar5 - fVar13;
      fVar15 = *(float *)((int)puVar12 + 0x5e4) - fVar16;
      lVar26 = uVar25 - 0x4e4;
      *(float *)(puVar12 + 0x9c) = fVar5;
      *(float *)((int)puVar12 + 0x4e4) = fVar5;
      *(float *)(puVar12 + 0x9d) = fVar5;
      *(float *)((int)puVar12 + 0x4ec) = fVar5;
      auVar9 = auRam00000000;
      fVar6 = fVar6 - fVar19;
      *(float *)(puVar12 + 0x9c) = fVar15;
      *(float *)((int)puVar12 + 0x4e4) = fVar15;
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      *(float *)(puVar12 + 0x9d) = fVar15;
      *(float *)((int)puVar12 + 0x4ec) = fVar15;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar6;
      *(float *)((int)puVar12 + 0x4e4) = fVar6;
      *(float *)(puVar12 + 0x9d) = fVar6;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      *(float *)((int)puVar12 + 0x4ec) = fVar6;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      fVar13 = *(float *)(puVar12 + 0xbe) - fVar13;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,lVar26);
      *(undefined4 *)lVar26 = uVar8;
      auVar9 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,4,lVar26);
      storeVectorElementWordIndexed
                (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,lVar26);
      *(float *)(puVar12 + 0x9c) = fVar13;
      *(float *)((int)puVar12 + 0x4e4) = fVar13;
      *(float *)(puVar12 + 0x9d) = fVar13;
      *(float *)((int)puVar12 + 0x4ec) = fVar13;
      fVar16 = uStack00000050._4_4_ - fVar16;
      fVar19 = *(float *)(puVar12 + 0xbf) - fVar19;
      auVar9 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar16;
      *(float *)((int)puVar12 + 0x4e4) = fVar16;
      *(float *)(puVar12 + 0x9d) = fVar16;
      *(float *)((int)puVar12 + 0x4ec) = fVar16;
      auVar10 = auRam00000000;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar19;
      *(float *)((int)puVar12 + 0x4e4) = fVar19;
      *(float *)(puVar12 + 0x9d) = fVar19;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      *(float *)((int)puVar12 + 0x4ec) = fVar19;
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      lVar26 = uVar25 - 0x4d8;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      uVar36 = 0;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      iVar34 = 0;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      pCVar33 = pCVar27 + 1;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar11 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,lVar26);
      *(undefined4 *)lVar26 = uVar8;
      auVar9 = (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar10 = (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar9 = (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,4,lVar26);
      storeVectorElementWordIndexed
                (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,lVar26);
      pCVar28 = pCVar33;
      if (bVar4 != 0) {
        do {
          iVar34 = iVar34 + 1;
          *(uint *)((int)lVar30 + 0xd4) =
               (uint)(fVar14 + 5.0 < (float)*pCVar28) << 1 | (uint)((float)*pCVar28 < fVar24 - 5.0)
               | (uint)(fVar18 + 5.0 < (float)pCVar28[1]) << 9 |
                 (uint)((float)pCVar28[1] < fVar23 - 5.0) << 8 |
               (uint)(fVar21 + 5.0 < (float)pCVar28[2]) << 0x11 |
               (uint)((float)pCVar28[2] < fVar22 - 5.0) << 0x10;
          lVar30 = lVar30 + 4;
          pCVar28 = pCVar28 + 3;
        } while (iVar34 < (int)(uint)bVar4);
      }
      sVar7 = pCVar27->faceCount;
      iVar34 = 0;
      pCVar32 = pCVar33 + uVar31 * 3;
      pCVar28 = pCVar32;
      if (0 < sVar7) {
        do {
          *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)(puVar12 + 0x16);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar12 + 0x17);
          uVar29 = ZEXT48(CollOutput.grid);
          *(undefined4 *)((int)puVar12 + 0x5c) = *(undefined4 *)((int)puVar12 + 0xb4);
          *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar12 + 0xc0);
          *(undefined4 *)((int)puVar12 + 0x74) = *(undefined4 *)((int)puVar12 + 0x604);
          *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)(puVar12 + 0xc1);
          *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)((int)puVar12 + 0xbc);
          *(undefined4 *)((int)puVar12 + 0x84) = *(undefined4 *)(puVar12 + 0x18);
          *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)((int)puVar12 + 0xc4);
          *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar12 + 0x19);
          *(undefined4 *)((int)puVar12 + 0x94) = *(undefined4 *)((int)puVar12 + 0xcc);
          *(undefined4 *)(puVar12 + 0x13) = *(undefined4 *)(puVar12 + 0x1a);
          puVar12[0x14] = uVar29;
          CollLineVsTri(pCVar28,pCVar33,uVar25 - 0x4cc,param_2,uVar31,puVar12[0xb],puVar12[0xc],
                        param_3);
          iVar34 = iVar34 + 1;
          pCVar28 = pCVar28 + 1;
        } while (iVar34 < sVar7);
      }
      bVar1 = pCVar27->quadCount;
      if ((bVar1 != 0) && (bVar1 != 0)) {
        do {
          *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)(puVar12 + 0x16);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar12 + 0x17);
          *(undefined4 *)(puVar12 + 0x9b) =
               *(undefined4 *)((int)&pCVar32->faceCount + (int)((uVar36 & 0xffffffff) << 2));
          *(undefined1 *)((int)puVar12 + 0x4d9) = *(undefined1 *)((int)puVar12 + 0x4da);
          uVar29 = ZEXT48(CollOutput.grid);
          *(undefined1 *)((int)puVar12 + 0x4da) =
               *(undefined1 *)((int)&pCVar32->faceCount + (int)uVar36 + (int)((longlong)sVar7 << 2))
          ;
          *(undefined4 *)((int)puVar12 + 0x5c) = *(undefined4 *)((int)puVar12 + 0xb4);
          *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar12 + 0xc0);
          *(undefined4 *)((int)puVar12 + 0x74) = *(undefined4 *)((int)puVar12 + 0x604);
          *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)(puVar12 + 0xc1);
          *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)((int)puVar12 + 0xbc);
          *(undefined4 *)((int)puVar12 + 0x84) = *(undefined4 *)(puVar12 + 0x18);
          *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)((int)puVar12 + 0xc4);
          *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar12 + 0x19);
          *(undefined4 *)((int)puVar12 + 0x94) = *(undefined4 *)((int)puVar12 + 0xcc);
          *(undefined4 *)(puVar12 + 0x13) = *(undefined4 *)(puVar12 + 0x1a);
          puVar12[0x14] = uVar29;
          CollLineVsTri(uVar25 - 200,pCVar33,uVar25 - 0x4cc,param_2,uVar31,puVar12[0xb],puVar12[0xc]
                        ,param_3);
          iVar34 = (int)uVar36 + 1;
          uVar36 = (ulonglong)iVar34;
        } while (iVar34 < (int)(uint)bVar1);
      }
    }
  }
  return;
}



//==== 00057820  ns=collproc  size=0x1e2c
// sig: undefined CollLine(void)
// callers(270): 0001b540 mobyupdate_unsorted::UpdateMoby_184; 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 00020a80 mobyupdate_unsorted::UpdateMoby_458; 0002bd08 camera0::GetHeroGroundPos; 0002c058 camera0::Cam_LOStoHero; 0002e3a0 camera0::UpdateCamTarget_0; 0002ffe8 camera0::SetCam0DefaultPosRot; 00032100 camera0::UpdateCamCollisions_0; 00035560 camera::camera10::Cam10_00035560; 00035cac camera::camera10::???_Cam10_CheckLineBlocked; 00035d68 camera::camera10::Cam10_00035d68; 00036e18 camera::camera10::Cam10_00036e18; 000378a8 camera::camera11::Cam11_000378a8; 00037d68 camera::camera11::Cam11_00037d68; 000386e8 camera::camera12::Cam12_000386e8; 00049ff0 camera::camera7::Cam7_UpdatePos; 0004d7e8 camera::camera9::Cam9_CalcDesiredPos; 0004eb78 camera::camera9::ActivateCamera_9; 00053078 camera::Camera_UpdateUnderWater; 00053550 camera::UpdateCamera; 0007e5e8 hero::Hero_GetGroundInfo; 00081048 hero::Hero_UpdateShadow; 000824b0 hero::Hero_CheckLedgeGrab; 00088208 hero::Hero_CheckWall; 0008a2b8 hero::Hero_ApplyMotion
// callees(12): 00055c30 collproc::Coll_AddDamage; 00055d70 collproc::CollLineVsSphere; 00056020 collproc::CollLineVsTri; 000564d0 collproc::CollMoby_TransformVerts; 00056a30 collproc::CollMoby_GetJointCache; 00056c20 collproc::CollLineVsEnv; 004ff98c FUN_004ff98c; 005dd48c FUN_005dd48c; 005e7a78 FUN_005e7a78; 005e7ad8 FUN_005e7ad8; 005e7b50 FUN_005e7b50; 005e7bf8 FUN_005e7bf8
// strings: 00651abc: 'CollLine: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.'

/* WARNING: Removing unreachable block (ram,0x00059570) */
/* WARNING: Removing unreachable block (ram,0x00059584) */
/* WARNING: Removing unreachable block (ram,0x0005959c) */
/* WARNING: Removing unreachable block (ram,0x00059594) */
/* WARNING: Removing unreachable block (ram,0x0005957c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] CollLine(p0, p1, COLL_FLAGS flags, MobyInstance *skip, ...). Requires both points in
   [0,1024] world. Works in x1024 space: DDA over 4-unit env cells (byte cell indices) ->
   CollLineVsEnv; then moby broadphase via g_MobyGrid (16-unit cells), skipping 'skip', mobys
   without collision, and mobys already tested this query (collQueryStamp).
   COLL_DAMAGEABLE_ONLY|COLL_NO_ENV => only CAN_BE_DAMAGED mobys. Result -> CollOutput (ip/v0..v2
   scaled back by 1/1024). */

undefined8
collproc::CollLine(float *param_1,float *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
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
  uint uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char cVar23;
  ulonglong uVar24;
  int iVar26;
  float fVar27;
  ulonglong uVar25;
  ushort uVar31;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float fVar33;
  ulonglong uVar32;
  int iVar34;
  float fVar37;
  ulonglong uVar35;
  longlong lVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  bool bVar41;
  longlong lVar42;
  longlong lVar43;
  int iVar44;
  int iVar45;
  MobyInstance *pMVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  ushort *puVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  float fStack_292c;
  float fStack_2924;
  float fStack_291c;
  float fStack_2914;
  undefined4 uStack_2904;
  int local_28c0;
  int local_28bc;
  float local_27e0;
  float local_27dc;
  float local_27d8;
  float local_27d4;
  float local_27d0;
  float local_27cc;
  float local_27a4;
  float local_27a0;
  float local_279c;
  float local_2708;
  float local_2704;
  float local_2700;
  float local_26fc;
  float local_26f8;
  float local_26f4;
  float local_26b4;
  float local_26b0;
  float local_26ac;
  float local_26a8;
  float local_26a4;
  float local_26a0;
  undefined4 local_260c;
  float local_2608;
  undefined4 local_2604;
  undefined4 local_2600;
  undefined4 local_25fc;
  undefined4 local_25f8;
  int local_25e8;
  float local_25e0;
  float local_25dc;
  float local_25d8;
  float local_25d4;
  undefined4 local_25d0;
  undefined4 local_25cc;
  undefined4 local_25c8;
  float local_25c4;
  float local_25c0;
  float local_25bc;
  float local_25b8;
  float local_25b4;
  float local_25b0;
  float local_25ac;
  float local_25a8;
  float local_25a4;
  float local_21a0;
  byte local_219c;
  byte bStack_219b;
  float local_2198;
  char local_1a0;
  char local_19f;
  char local_19e;
  undefined4 local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  float *local_160;
  ulonglong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  float local_130;
  
  uVar24 = ZEXT48(&stack0x00000000);
  local_150 = param_4;
  iVar26 = FUN_005dd48c(uVar24 - 0x28a4);
  local_148 = param_5;
  if ((((iVar26 == 2) || (iVar26 = FUN_005dd48c(uVar24 - 0x28a8), iVar26 == 2)) ||
      (iVar26 = FUN_005dd48c(uVar24 - 0x28ac), iVar26 == 2)) ||
     (((iVar26 = FUN_005dd48c(uVar24 - 0x28b0), iVar26 == 2 ||
       (iVar26 = FUN_005dd48c(uVar24 - 0x28b4), iVar26 == 2)) ||
      (iVar26 = FUN_005dd48c(uVar24 - 0x28b8), iVar26 == 2)))) {
    FUN_004ff98c(
                "CollLine: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever."
                );
    return 0;
  }
  fVar2 = *param_2;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar38 = fVar2;
  if (fVar3 < fVar2) {
    fVar38 = fVar3;
  }
  fVar20 = fVar6;
  if (fVar4 < fVar6) {
    fVar20 = fVar4;
  }
  fVar21 = fVar7;
  if (fVar5 < fVar7) {
    fVar21 = fVar5;
  }
  fVar22 = fVar2;
  if (fVar2 < fVar3) {
    fVar22 = fVar3;
  }
  fVar8 = fVar6;
  if (fVar6 < fVar4) {
    fVar8 = fVar4;
  }
  fVar9 = fVar7;
  if (fVar7 < fVar5) {
    fVar9 = fVar5;
  }
  fVar3 = fVar3 * 1024.0;
  fVar4 = fVar4 * 1024.0;
  fVar5 = fVar5 * 1024.0;
  fVar2 = fVar2 * 1024.0;
  fVar6 = fVar6 * 1024.0;
  local_180 = 1024.0;
  fVar7 = fVar7 * 1024.0;
  if (-1 < CollOutput.collCount) {
    CollOutput.collCount = CollOutput.collCount + 1;
    dVar54 = 0.0;
    local_158 = ZEXT48(&CollOutput);
    if (((0.0 <= fVar38) && (0.0 <= fVar21 && 0.0 <= fVar20)) &&
       ((fVar22 - 1024.0 <= 0.0 && ((fVar8 - 1024.0 <= 0.0 && (fVar9 - 1024.0 <= 0.0)))))) {
      local_140 = (longlong)(int)fVar7;
      fVar20 = fVar2 - fVar3;
      fVar21 = fVar6 - fVar4;
      fVar22 = fVar7 - fVar5;
      local_190 = (float)((int)fVar5 >> 0xc);
      auVar16 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar17 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      pfVar28 = (float *)(uVar24 - 0x21a0);
      fVar38 = (float)((int)fVar7 >> 0xc);
      bVar41 = false;
      if (((int)fVar3 >> 0xc != (int)fVar2 >> 0xc) ||
         (local_190 != fVar38 || (int)fVar4 >> 0xc != (int)fVar6 >> 0xc)) {
        bVar41 = true;
      }
      local_18c = local_190;
      local_188 = local_190;
      local_184 = local_190;
      pfVar29 = pfVar28;
      if (bVar41) {
        iVar44 = 0;
        lVar42 = uVar24 - 0x1a0;
        lVar43 = uVar24 - 0x19a0;
        iVar26 = 0;
        fVar48 = (float)((int)fVar2 >> 0xc);
        fVar39 = (float)((int)fVar6 >> 0xc);
        fVar40 = fVar3;
        fVar8 = fVar5;
        fVar9 = fVar4;
        fVar18 = (float)((int)fVar3 >> 0xc);
        fVar27 = local_190;
        fVar37 = (float)((int)fVar4 >> 0xc);
        fVar47 = fVar20;
        fVar10 = fVar22;
        fVar11 = fVar21;
        do {
          fVar19 = fVar10;
          fVar10 = fVar47;
          fVar33 = fVar37;
          fVar37 = fVar27;
          fVar27 = fVar18;
          fVar18 = fVar8;
          fVar8 = fVar40;
          fVar40 = fVar38;
          fVar38 = fVar48;
          lVar36 = lVar43;
          if ((int)fVar38 - (int)fVar27 < 0) {
            iVar45 = -1;
            fVar48 = (float)((int)fVar27 + 1);
            fVar47 = (float)((int)fVar38 + 1);
          }
          else {
            iVar45 = 1;
            fVar48 = fVar27;
            fVar47 = fVar38;
          }
          while (fVar48 != fVar47) {
            local_140 = (longlong)(((int)fVar48 + iVar45) * 0x1000);
            dVar53 = (double)((1.0 / fVar10) * ((float)local_140 - fVar8));
            if (1.0 <= dVar53) {
              dVar53 = 1.0;
            }
            if (dVar53 <= 0.0) {
              dVar53 = dVar54;
            }
            local_190 = (float)dVar53;
            local_18c = (float)dVar53;
            local_188 = (float)dVar53;
            local_184 = (float)dVar53;
            auVar16._0_4_ = local_190;
            auVar16._4_4_ = local_18c;
            auVar16._8_4_ = local_188;
            auVar16._12_4_ = local_184;
            iVar26 = iVar26 + 1;
            uVar14 = storeVectorElementWordIndexed(auVar16,0,lVar36);
            *(undefined4 *)lVar36 = uVar14;
            lVar36 = lVar36 + 4;
            fVar48 = (float)((int)fVar48 + iVar45);
          }
          *(undefined4 *)lVar36 = 0x46a00000;
          iVar44 = iVar44 + 1;
          lVar43 = lVar43 + 0x400;
          *(undefined1 *)lVar42 = (char)iVar45;
          lVar42 = lVar42 + 1;
          fVar48 = fVar39;
          fVar39 = fVar40;
          fVar40 = fVar9;
          fVar9 = fVar18;
          fVar18 = fVar33;
          fVar47 = fVar11;
          fVar11 = fVar19;
        } while (iVar44 < 3);
        uVar25 = uVar24 - 0x19a0;
        local_198._2_2_ = CONCAT11(SUB41(fVar27,0),(undefined1)local_198);
        local_198 = (float)CONCAT22(CONCAT11(SUB41(fVar33,0),SUB41(fVar37,0)),local_198._2_2_);
        uVar32 = uVar24 - 0x15a0;
        *pfVar28 = 0.0;
        uVar35 = uVar24 - 0x11a0;
        pfVar28[1] = local_198;
        lVar42 = uVar24 - 0x21a0;
        fVar38 = local_198;
        for (; local_198 = fVar38, -1 < iVar26; iVar26 = iVar26 + -1) {
          fVar8 = *(float *)uVar25;
          fVar9 = *(float *)uVar32;
          fVar10 = *(float *)uVar35;
          pfVar29 = (float *)(lVar42 + 8);
          iVar44 = (int)lVar42;
          local_198._3_1_ = SUB41(fVar38,0);
          local_198._2_1_ = (char)((uint)fVar38 >> 8);
          local_198._0_1_ = (char)((uint)fVar38 >> 0x18);
          cVar23 = local_198._0_1_;
          local_198._0_2_ = (undefined2)((uint)fVar38 >> 0x10);
          if (fVar8 <= fVar9) {
            if (fVar8 <= fVar10) {
              uVar25 = uVar25 + 4 & 0xffffffff;
              local_198._1_3_ = SUB43(fVar38,0);
              local_198 = (float)CONCAT13(cVar23 + local_1a0,local_198._1_3_);
              *pfVar29 = fVar8;
              *(float *)(iVar44 + 0xc) = local_198;
            }
            else {
              uVar35 = uVar35 + 4 & 0xffffffff;
              local_198._2_2_ = CONCAT11(local_198._2_1_ + local_19e,(undefined1)local_198);
              *pfVar29 = fVar10;
              *(float *)(iVar44 + 0xc) = local_198;
            }
          }
          else if (fVar9 <= fVar10) {
            local_198._1_1_ = (char)((uint)fVar38 >> 0x10);
            uVar32 = uVar32 + 4 & 0xffffffff;
            local_198._2_2_ = SUB42(fVar38,0);
            local_198._1_3_ = CONCAT12(local_198._1_1_ + local_19f,local_198._2_2_);
            local_198 = (float)CONCAT13(cVar23,local_198._1_3_);
            *pfVar29 = fVar9;
            *(float *)(iVar44 + 0xc) = local_198;
          }
          else {
            uVar35 = uVar35 + 4 & 0xffffffff;
            local_198._2_2_ = CONCAT11(local_198._2_1_ + local_19e,(undefined1)local_198);
            *pfVar29 = fVar10;
            *(float *)(iVar44 + 0xc) = local_198;
          }
          lVar42 = lVar42 + 8;
          fVar38 = local_198;
        }
      }
      else {
        local_140 = (longlong)(int)fVar7;
        if (((int)fVar3 == (int)fVar2 && (int)fVar4 == (int)fVar6) && (int)fVar5 == (int)fVar7) {
          return 0;
        }
        auVar16 = (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60) >> 0x60 &
                  (undefined1  [16])0xff;
        auVar17 = (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60) >> 0x60 &
                  (undefined1  [16])0xff;
        auVar15 = auRam00000000 >> 0x60 & (undefined1  [16])0xff;
        uVar13 = storeVectorElementByteIndexed
                           (auVar16 | auVar16 << 8 | auVar16 << 0x10 | auVar16 << 0x18 |
                            auVar16 << 0x20 | auVar16 << 0x28 | auVar16 << 0x30 | auVar16 << 0x38 |
                            auVar16 << 0x40 | auVar16 << 0x48 | auVar16 << 0x50 | auVar16 << 0x58 |
                            auVar16 << 0x60 | auVar16 << 0x68 | auVar16 << 0x70 | auVar16 << 0x78,0,
                            uVar24 - 0x219c);
        *(undefined1 *)(uVar24 - 0x219c) = uVar13;
        uVar13 = storeVectorElementByteIndexed
                           (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                            auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                            auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                            auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,0,
                            uVar24 - 0x219b);
        *(undefined1 *)(uVar24 - 0x219b) = uVar13;
        uVar13 = storeVectorElementByteIndexed
                           (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                            auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                            auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                            auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0,
                            uVar24 - 0x219a);
        *(undefined1 *)(uVar24 - 0x219a) = uVar13;
      }
      dVar53 = 1.0;
      *pfVar29 = 1.0;
      lVar42 = uVar24 - 0x25e8;
      FUN_005e7a78(lVar42);
      if ((param_3 & 1) == 0) {
        uVar35 = 0;
        while ((dVar69 = (double)*(float *)((int)&local_21a0 + (int)((uVar35 & 0xffffffff) << 3)),
               dVar69 <= (double)local_25e0 &&
               (CollLineVsEnv(dVar69,lVar42,param_3,CONCAT44(fVar3,fVar4),
                              CONCAT44(fVar5,fStack_2924),CONCAT44(fVar2,fVar6),
                              CONCAT44(fVar7,fStack_2914),CONCAT44(fVar20,fVar21),
                              CONCAT44(fVar22,uStack_2904)), fStack_292c = fVar4,
               fStack_291c = fVar6, dVar69 != dVar53))) {
          uVar35 = (ulonglong)((int)uVar35 + 1);
        }
      }
      local_160 = (float *)&local_219c;
      uVar35 = ((ulonglong)local_219c << 0x20) >> 0x22 | ((ulonglong)bStack_219b & 0xfc) << 0xe;
      *pfVar28 = (float)uVar35;
      if (((double)local_21a0 != dVar53) && ((double)local_2198 != dVar53)) {
        lVar36 = uVar24 - 0x2968;
        lVar43 = lVar36;
        do {
          uVar32 = ((ulonglong)*(byte *)((int)lVar36 + 0x7d4) << 0x20) >> 0x22 |
                   ((ulonglong)*(byte *)((int)lVar36 + 0x7d5) & 0x3fffc) << 0xe;
          if ((int)uVar32 == (int)uVar35) {
            local_160 = (float *)((int)local_160 + -4);
            uVar32 = uVar35;
          }
          else {
            *local_160 = (float)(int)uVar32;
          }
          local_160 = (float *)((int)local_160 + 4);
          lVar36 = lVar36 + 8;
          iVar26 = (int)lVar43;
          uVar35 = uVar32;
          lVar43 = lVar43 + 8;
        } while ((double)*(float *)(iVar26 + 0x7d8) != dVar53);
      }
      *local_160 = -NAN;
      fVar8 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
      fVar38 = *pfVar28;
      local_160 = pfVar28;
      while (-1 < (int)fVar38) {
        iVar26 = (int)*local_160 >> 0x10;
        uVar12 = (uint)*local_160 & 0xffff;
        iVar44 = 0;
        local_170 = ZEXT48(g_MobyGrid + iVar26 * 0x40 + uVar12);
        local_168 = ZEXT48(&g_MobyGridLists) +
                    (longlong)g_MobyGrid[iVar26 * 0x40 + uVar12].listStart * 0x20 & 0xffffffff;
        if (g_MobyGrid[iVar26 * 0x40 + uVar12].count != '\0') {
          dVar69 = (double)local_180;
          local_178 = 0;
          do {
            pMVar46 = MobyInstance + *(short *)((int)local_168 + (int)local_178);
            if (((pMVar46 != (MobyInstance *)local_150) && (pMVar46->collision != (ushort *)0x0)) &&
               (iVar26 = *(int *)((int)local_158 + 0x10), pMVar46->collQueryStamp != iVar26)) {
              fVar38 = (pMVar46->bSphere).x;
              fVar9 = (pMVar46->bSphere).y;
              fVar10 = (pMVar46->bSphere).z;
              fVar11 = (pMVar46->bSphere).rad;
              if ((param_3 & 9) == 0 || (pMVar46->modeBits & CAN_BE_DAMAGED) != NONE) {
                dVar51 = (double)((fVar38 - fVar3) * (fVar20 / fVar8) +
                                  (fVar9 - fVar4) * (fVar21 / fVar8) +
                                 (fVar10 - fVar5) * (fVar22 / fVar8));
                if (dVar51 < dVar54) {
                  dVar51 = dVar54;
                }
                if ((double)local_25e0 < dVar51) {
                  dVar51 = (double)local_25e0;
                }
                fVar38 = (fVar3 + (float)((double)fVar20 * dVar51)) - fVar38;
                fVar9 = (fVar4 + (float)((double)fVar21 * dVar51)) - fVar9;
                fVar10 = (fVar5 + (float)((double)fVar22 * dVar51)) - fVar10;
                if (fVar38 * fVar38 + fVar9 * fVar9 + fVar10 * fVar10 < fVar11 * fVar11) {
                  uVar12 = *(uint *)(pMVar46->collision + 2);
                  iVar45 = ((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0);
                  if ((param_3 & 4) == 0) {
                    uVar31 = pMVar46->collision[1];
                  }
                  else {
                    uVar31 = *pMVar46->collision;
                  }
                  pMVar46->collQueryStamp = iVar26;
                  iVar26 = 0;
                  uVar12 = *(uint *)(pMVar46->collision + 6);
                  if (uVar31 != 0) {
                    if (uVar12 == ((param_3 & 2) == 0)) goto LAB_00059428;
                    iVar26 = CollMoby_GetJointCache(pMVar46,uVar31);
                  }
                  fVar38 = (float)((double)(pMVar46->pos).x * dVar69);
                  fVar9 = (float)((double)(pMVar46->pos).y * dVar69);
                  fVar10 = (float)((double)(pMVar46->pos).z * dVar69);
                  if (uVar12 != 0) {
                    fVar40 = fVar5 - fVar10;
                    fVar39 = fVar4 - fVar9;
                    fVar11 = fVar3 - fVar38;
                    fVar48 = fVar2 - fVar38;
                    fStack_2924 = fVar6 - fVar9;
                    fVar18 = fVar7 - fVar10;
                    fVar27 = fVar48;
                    if (fVar11 < fVar48) {
                      fVar27 = fVar11;
                    }
                    fVar37 = fStack_2924;
                    if (fVar39 < fStack_2924) {
                      fVar37 = fVar39;
                    }
                    fVar47 = fVar18;
                    if (fVar40 < fVar18) {
                      fVar47 = fVar40;
                    }
                    if (fVar48 < fVar11) {
                      fVar48 = fVar11;
                    }
                    if (fStack_2924 < fVar39) {
                      fStack_2924 = fVar39;
                    }
                    if (fVar18 < fVar40) {
                      fVar18 = fVar40;
                    }
                    iVar34 = 0x100;
                    lVar43 = uVar24 - 0xda0;
                    do {
                      iVar34 = iVar34 + -1;
                      pfVar28 = (float *)lVar43;
                      *pfVar28 = (float)dVar54;
                      pfVar28[1] = (float)dVar54;
                      pfVar28[2] = (float)dVar54;
                      lVar43 = lVar43 + 0xc;
                    } while (iVar34 != 0);
                    FUN_005e7ad8((double)pMVar46->scale,uVar24 - 0x260c,uVar24 - 0x2654);
                    fStack_2914 = local_2608;
                    CollMoby_TransformVerts
                              (pMVar46,CONCAT44(fVar27,fVar37),CONCAT44(fVar47,fStack_292c),
                               CONCAT44(fVar48,fStack_2924),CONCAT44(fVar18,fStack_291c),
                               CONCAT44(local_260c,local_2608),CONCAT44(local_2604,local_2600),
                               CONCAT44(local_25fc,local_25f8));
                    iVar34 = 0;
                    if (0 < local_28bc) {
                      iVar49 = 0;
                      do {
                        CollLineVsTri(local_28c0 + iVar49,uVar24 - 0xda0,uVar24 - 0x25a0,lVar42,
                                      uVar12,CONCAT44(fVar38,fVar9),CONCAT44(fVar10,local_2600),
                                      param_3 & 0xffffffff);
                        iVar34 = iVar34 + 1;
                        iVar49 = iVar49 + 4;
                        fStack_2914 = fVar9;
                      } while (iVar34 < local_28bc);
                    }
                  }
                  if ((param_3 & 2) == 0) {
                    puVar50 = pMVar46->collision + 8;
                    iVar34 = 0;
                    pfVar28 = pMVar46->collisionMesh;
                    if (0 < iVar45) {
                      do {
                        uVar12 = (uint)pfVar28 & 1;
                        pfVar28 = (float *)((int)pfVar28 >> 1);
                        bVar1 = *(byte *)puVar50;
                        if ((uVar12 == 0) &&
                           (((int)(short)puVar50[1] & ((param_3 & 4) == 0) + 1) != 0)) {
                          if (bVar1 < 2) {
                            if (bVar1 == 0) {
LAB_00058e48:
                              pfVar29 = (float *)(iVar26 + (int)((longlong)(short)puVar50[2] << 4));
                              fVar11 = pMVar46->scale;
                              pfVar30 = (float *)(iVar26 + (int)((longlong)(short)puVar50[3] << 4));
                              dVar70 = (double)(*pfVar30 * local_180 * fVar11);
                              dVar51 = (double)(pfVar30[1] * local_180 * fVar11);
                              dVar69 = (double)(pfVar30[2] * local_180 * fVar11);
                              dVar55 = (double)(*(float *)(puVar50 + 6) * fVar11);
                              FUN_005e7b50(uVar24 - 0x2708,uVar24 - 0x2630,
                                           CONCAT44(*pfVar29 * local_180 * fVar11,
                                                    pfVar29[1] * local_180 * fVar11),
                                           CONCAT44(pfVar29[2] * local_180 * fVar11,fStack_2924));
                              dVar71 = (double)local_2708;
                              fStack_292c = (float)dVar51;
                              dVar68 = (double)local_2704;
                              dVar66 = (double)local_2700;
                              FUN_005e7b50(uVar24 - 0x26fc,uVar24 - 0x2630,
                                           CONCAT44((float)dVar70,fStack_292c),
                                           CONCAT44((float)dVar69,fStack_2924));
                              fVar11 = (float)((double)local_26fc - dVar71);
                              fVar48 = (float)((double)local_26f8 - dVar68);
                              fVar39 = (float)((double)local_26f4 - dVar66);
                              dVar70 = (double)(float)(dVar55 * dVar55);
                              dVar69 = (double)(float)(dVar71 + (double)fVar38);
                              dVar51 = (double)(float)(dVar68 + (double)fVar9);
                              dVar67 = (double)(float)(dVar66 + (double)fVar10);
                              fVar40 = fVar48 * fVar22 - fVar39 * fVar21;
                              fVar18 = fVar39 * fVar21 - fVar48 * fVar22;
                              fVar27 = fVar39 * fVar20 - fVar11 * fVar22;
                              fVar37 = fVar11 * fVar22 - fVar39 * fVar20;
                              fVar47 = fVar11 * fVar21 - fVar48 * fVar20;
                              fVar19 = fVar48 * fVar20 - fVar11 * fVar21;
                              if (((dVar54 <= (double)(float)((double)(fVar40 * fVar40) - dVar53))
                                  || (dVar54 <= (double)(float)((double)(fVar27 * fVar27) - dVar53))
                                  ) || (dVar54 <= (double)(float)((double)(fVar47 * fVar47) - dVar53
                                                                 ))) {
                                local_130 = (float)dVar55;
                                dVar52 = (double)fVar3;
                                dVar57 = (double)fVar4;
                                dVar72 = (double)fVar5;
                                fVar33 = (float)((double)(float)((double)(fVar40 * fVar40) +
                                                                (double)(fVar27 * fVar27)) +
                                                (double)(fVar47 * fVar47));
                                fVar40 = ((fVar21 * fVar47 - fVar22 * fVar27) *
                                          (float)(dVar52 - dVar69) +
                                          (fVar22 * fVar40 - fVar20 * fVar47) *
                                          (float)(dVar57 - dVar51) +
                                         (fVar20 * fVar27 - fVar21 * fVar40) *
                                         (float)(dVar72 - dVar67)) / fVar33;
                                fVar33 = ((fVar48 * fVar19 - fVar39 * fVar37) *
                                          (float)(dVar69 - dVar52) +
                                          (fVar39 * fVar18 - fVar11 * fVar19) *
                                          (float)(dVar51 - dVar57) +
                                         (fVar11 * fVar37 - fVar48 * fVar18) *
                                         (float)(dVar67 - dVar72)) / fVar33;
                                dVar56 = (double)(float)(dVar67 + (double)(fVar39 * fVar40));
                                dVar67 = (double)(float)(dVar69 + (double)(fVar11 * fVar40));
                                dVar69 = (double)(float)(dVar51 + (double)(fVar48 * fVar40));
                                dVar51 = (double)(float)(dVar52 + (double)(fVar20 * fVar33));
                                dVar58 = (double)(float)(dVar57 + (double)(fVar21 * fVar33));
                                dVar59 = (double)(float)(dVar72 + (double)(fVar22 * fVar33));
                                FUN_005e7bf8(uVar24 - 0x26b4,CONCAT44(fVar11,fVar48),
                                             CONCAT44(fVar39,fStack_292c));
                                dVar63 = (double)fVar20;
                                dVar65 = (double)fVar22;
                                dVar64 = (double)fVar21;
                                dVar60 = (double)local_26b4;
                                dVar61 = (double)local_26b0;
                                dVar62 = (double)local_26ac;
                                FUN_005e7bf8(uVar24 - 0x26a8,CONCAT44(fVar20,fVar21),
                                             CONCAT44(fVar22,fStack_292c));
                                dVar55 = (double)local_130;
                                dVar69 = (double)(float)((double)((float)(dVar51 - dVar67) *
                                                                  (float)(dVar51 - dVar67) +
                                                                  (float)(dVar58 - dVar69) *
                                                                  (float)(dVar58 - dVar69) +
                                                                 (float)(dVar59 - dVar56) *
                                                                 (float)(dVar59 - dVar56)) - dVar70)
                                ;
                                if (dVar54 <= dVar69) goto LAB_00059414;
                                fVar40 = (float)(dVar60 * (double)local_26a8) +
                                         (float)(dVar61 * (double)local_26a4) +
                                         (float)(dVar62 * (double)local_26a0);
                                dVar70 = (double)(float)(dVar69 - (double)(float)(dVar53 - (double)(
                                                  fVar40 * fVar40)));
                                dVar69 = dVar54;
                                if (dVar54 < dVar70) {
                                  dVar69 = dVar70;
                                }
                                dVar69 = (double)(float)SQRT(dVar69);
                                dVar70 = (double)(float)(dVar51 - (double)(float)((double)local_26a8
                                                                                 * dVar69));
                                dVar51 = (double)(float)(dVar58 - (double)(float)((double)local_26a4
                                                                                 * dVar69));
                                dVar69 = (double)(float)(dVar59 - (double)(float)((double)local_26a0
                                                                                 * dVar69));
                                if ((double)((float)((double)(float)(dVar70 - dVar52) * dVar63) +
                                             (float)((double)(float)(dVar51 - dVar57) * dVar64) +
                                            (float)((double)(float)(dVar69 - dVar72) * dVar65)) <
                                    dVar54) {
                                  dVar70 = (double)fVar3;
                                  dVar51 = (double)fVar4;
                                  dVar69 = (double)fVar5;
                                }
                              }
                              else {
                                dVar70 = (double)fVar3;
                                dVar51 = (double)fVar4;
                                dVar69 = (double)fVar5;
                              }
                              dVar67 = (double)(float)(dVar71 + (double)fVar38);
                              dVar68 = (double)(float)(dVar68 + (double)fVar9);
                              dVar66 = (double)(float)(dVar66 + (double)fVar10);
                              dVar57 = (double)fVar11;
                              dVar71 = (double)fVar48;
                              dVar52 = (double)fVar39;
                              dVar51 = (double)(((float)((double)(float)(dVar70 - dVar67) * dVar57)
                                                 + (float)((double)(float)(dVar51 - dVar68) * dVar71
                                                          ) +
                                                (float)((double)(float)(dVar69 - dVar66) * dVar52))
                                               / ((float)(dVar57 * dVar57) +
                                                  (float)(dVar71 * dVar71) +
                                                 (float)(dVar52 * dVar52)));
                              dVar69 = dVar54;
                              if (dVar54 < dVar51) {
                                dVar69 = dVar51;
                              }
                              if (dVar53 <= dVar69) {
                                dVar69 = dVar53;
                              }
                              CollLineVsSphere(CONCAT44((float)(dVar67 + (double)(float)(dVar57 * 
                                                  dVar69)),(float)(dVar68 + (double)(float)(dVar71 *
                                                                                           dVar69)))
                                               ,CONCAT44((float)(dVar66 + (double)(float)(dVar52 * 
                                                  dVar69)),(float)dVar55),CONCAT44(fVar3,fVar4),
                                               CONCAT44(fVar5,fStack_2924),CONCAT44(fVar20,fVar21),
                                               CONCAT44(fVar22,fStack_2914),lVar42,puVar50);
                              fStack_292c = fVar4;
                              fStack_291c = fVar21;
                            }
                            else {
                              fVar11 = pMVar46->scale;
                              dVar69 = (double)(*(float *)(puVar50 + 0xe) * fVar11);
                              FUN_005e7b50(uVar24 - 0x27e0,uVar24 - 0x2630,
                                           CONCAT44(*(float *)(puVar50 + 8) * fVar11,
                                                    *(float *)(puVar50 + 10) * fVar11),
                                           CONCAT44(*(float *)(puVar50 + 0xc) * fVar11,fStack_2924))
                              ;
                              CollLineVsSphere(CONCAT44(local_27e0 + fVar38,local_27dc + fVar9),
                                               CONCAT44(local_27d8 + fVar10,(float)dVar69),
                                               CONCAT44(fVar3,fVar4),CONCAT44(fVar5,fStack_2924),
                                               CONCAT44(fVar20,fVar21),CONCAT44(fVar22,fStack_2914),
                                               lVar42,puVar50);
                              fStack_292c = fVar4;
                              fStack_291c = fVar21;
                            }
                          }
                          else if (bVar1 < 3) {
                            pfVar29 = (float *)(iVar26 + *(int *)(puVar50 + 2) * 0x10);
                            fVar11 = pMVar46->scale;
                            dVar51 = (double)(*(float *)(puVar50 + 6) * fVar11);
                            FUN_005e7b50(uVar24 - 0x27d4,uVar24 - 0x2630,
                                         CONCAT44(((float)((double)*pfVar29 * dVar69) +
                                                  *(float *)(puVar50 + 8)) * fVar11,
                                                  ((float)((double)pfVar29[1] * dVar69) +
                                                  *(float *)(puVar50 + 10)) * fVar11),
                                         CONCAT44(((float)((double)pfVar29[2] * dVar69) +
                                                  *(float *)(puVar50 + 0xc)) * fVar11,fStack_2924));
                            CollLineVsSphere(CONCAT44(local_27d4 + fVar38,local_27d0 + fVar9),
                                             CONCAT44(local_27cc + fVar10,(float)dVar51),
                                             CONCAT44(fVar3,fVar4),CONCAT44(fVar5,fStack_2924),
                                             CONCAT44(fVar20,fVar21),CONCAT44(fVar22,fStack_2914),
                                             lVar42,puVar50);
                            fStack_292c = fVar4;
                            fStack_291c = fVar21;
                          }
                          else {
                            if (3 < bVar1) goto LAB_00058e48;
                            fVar48 = pMVar46->scale;
                            fVar39 = *(float *)(puVar50 + 10);
                            dVar67 = (double)(*(float *)(puVar50 + 0xe) * fVar48);
                            dVar68 = (double)(*(float *)(puVar50 + 2) * fVar48);
                            FUN_005e7b50(uVar24 - 0x27a4,uVar24 - 0x2630,
                                         CONCAT44(*(float *)(puVar50 + 8) * fVar48,fVar39 * fVar48),
                                         CONCAT44(*(float *)(puVar50 + 0xc) * fVar48,fStack_2924));
                            fVar40 = local_27a4 + fVar38;
                            fVar18 = local_27a0 + fVar9;
                            dVar69 = (double)(local_279c + fVar10);
                            dVar51 = (double)(fVar40 - fVar3);
                            dVar55 = (double)(fVar18 - fVar4);
                            dVar66 = (double)fVar20;
                            dVar70 = (double)fVar21;
                            fVar11 = (float)((double)((float)(dVar66 * dVar66) +
                                                     (float)(dVar70 * dVar70)) + dVar54);
                            if (fVar11 <= 0.015625) {
                              fVar11 = 0.015625;
                            }
                            fVar27 = (float)(dVar54 * dVar54);
                            fVar37 = (float)(dVar51 * dVar66) + (float)(dVar55 * dVar70) + fVar27;
                            dVar71 = (double)(fVar37 / fVar11);
                            if (dVar71 <= dVar54) {
                              dVar71 = dVar54;
                            }
                            if (dVar53 <= dVar71) {
                              dVar71 = dVar53;
                            }
                            fVar47 = (fVar3 + (float)(dVar66 * dVar71)) - fVar40;
                            fVar19 = (fVar4 + (float)(dVar70 * dVar71)) - fVar18;
                            fStack_292c = fVar39 * fVar48;
                            if ((double)((fVar47 * fVar47 + fVar19 * fVar19 + fVar27) -
                                        (float)(dVar67 * dVar67)) <= dVar54) {
                              fVar37 = fVar37 * 2.0;
                              dVar55 = (double)(fVar37 * fVar37 -
                                               fVar11 * 4.0 *
                                               (((float)(dVar51 * dVar51) + (float)(dVar55 * dVar55)
                                                + fVar27) - (float)(dVar67 * dVar67)));
                              dVar51 = dVar54;
                              if (dVar54 < dVar55) {
                                dVar51 = dVar55;
                              }
                              dVar51 = -(double)(((float)SQRT(dVar51) - fVar37) / (fVar11 * 2.0));
                              if (dVar51 < dVar54) {
                                dVar51 = dVar54;
                              }
                              if (dVar53 < dVar51) {
                                dVar51 = dVar53;
                              }
                              dVar55 = (double)(fVar5 + (float)((double)fVar22 * dVar51));
                              dVar51 = dVar55;
                              if (dVar55 < dVar69) {
                                dVar51 = dVar69;
                              }
                              dVar70 = (double)(float)(dVar68 + dVar69);
                              if ((dVar51 < (double)(float)(dVar68 + dVar69)) &&
                                 (dVar70 = dVar55, dVar55 < dVar69)) {
                                dVar70 = dVar69;
                              }
                              CollLineVsSphere(CONCAT44(fVar40,fVar18),
                                               CONCAT44((float)dVar70,(float)dVar67),
                                               CONCAT44(fVar3,fVar4),CONCAT44(fVar5,fStack_2924),
                                               CONCAT44(fVar20,fVar21),CONCAT44(fVar22,fStack_2914),
                                               lVar42,puVar50);
                              fStack_292c = fVar4;
                              fStack_291c = fVar21;
                            }
                          }
                        }
LAB_00059414:
                        iVar34 = iVar34 + 1;
                        dVar69 = (double)local_180;
                        puVar50 = puVar50 + 0x10;
                      } while (iVar34 < iVar45);
                    }
                  }
                }
              }
            }
LAB_00059428:
            iVar44 = iVar44 + 1;
            local_178 = local_178 + 2;
          } while (iVar44 < (int)(uint)*(byte *)((int)local_170 + 2));
        }
        local_160 = local_160 + 1;
        fVar38 = *local_160;
      }
      if (local_25e8 != 0) {
        iVar26 = (int)local_158;
        *(float *)(iVar26 + 0x20) = local_25dc * 0.0009765625;
        *(float *)(iVar26 + 0x24) = local_25d8 * 0.0009765625;
        *(float *)(iVar26 + 0x28) = local_25d4 * 0.0009765625;
        *(undefined4 *)(iVar26 + 0x40) = local_25d0;
        *(undefined4 *)(iVar26 + 0x44) = local_25cc;
        *(undefined4 *)(iVar26 + 0x48) = local_25c8;
        *(float *)(iVar26 + 0x50) = local_25c4 * 0.0009765625;
        *(float *)(iVar26 + 0x54) = local_25c0 * 0.0009765625;
        *(float *)(iVar26 + 0x58) = local_25bc * 0.0009765625;
        *(float *)(iVar26 + 0x60) = local_25b8 * 0.0009765625;
        *(float *)(iVar26 + 100) = local_25b4 * 0.0009765625;
        *(float *)(iVar26 + 0x68) = local_25b0 * 0.0009765625;
        *(float *)(iVar26 + 0x70) = local_25ac * 0.0009765625;
        *(float *)(iVar26 + 0x74) = local_25a8 * 0.0009765625;
        *(float *)(iVar26 + 0x78) = local_25a4 * 0.0009765625;
        *(undefined4 *)(iVar26 + 0x18) = 0;
        *(int *)(iVar26 + 0x1c) = local_25e8;
        return 1;
      }
    }
  }
  return 0;
}



//==== 00059658  ns=collproc  size=0x19c
// sig: undefined CollSphereVsSphere(void)
// callers(2): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void collproc::CollSphereVsSphere
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int *param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fStack00000030;
  float fStack00000034;
  float fStack00000040;
  float fStack00000044;
  int in_stack_00000074;
  
  fVar4 = (float)((ulonglong)param_4 >> 0x20);
  fVar5 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000030 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000034 = (float)param_3;
  fStack00000040 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000044 = (float)param_5;
  fVar6 = (fStack00000040 - fStack00000030) * (fStack00000040 - fStack00000030) +
          (fStack00000044 - fStack00000034) * (fStack00000044 - fStack00000034) +
          (fVar5 - fVar4) * (fVar5 - fVar4);
  if (fVar6 <= (float)(param_1 + param_2) * (float)(param_1 + param_2)) {
    fVar3 = 0.0;
    fVar2 = fVar3;
    fVar1 = fVar3;
    if (fVar6 != 0.0) {
      dVar7 = (double)(SQRT(fVar6) * 0.9995);
      if (dVar7 <= param_2) {
        param_2 = dVar7;
      }
      fVar6 = 1.0 / SQRT(fVar6);
      fVar1 = (float)(param_2 * (double)((fStack00000030 - fStack00000040) * fVar6));
      fVar2 = (float)(param_2 * (double)((fStack00000034 - fStack00000044) * fVar6));
      fVar3 = (float)(param_2 * (double)((fVar4 - fVar5) * fVar6));
    }
    fStack00000030 = (fStack00000040 + fVar1) - fStack00000030;
    fStack00000034 = (fStack00000044 + fVar2) - fStack00000034;
    fVar4 = (fVar5 + fVar3) - fVar4;
    fVar4 = fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034 + fVar4 * fVar4;
    if (fVar4 <= (float)param_9[2]) {
      param_9[2] = (int)fVar4;
      param_9[1] = in_stack_00000074;
      param_9[3] = (int)(fStack00000040 + fVar1);
      param_9[4] = (int)(fStack00000044 + fVar2);
      param_9[5] = (int)(fVar5 + fVar3);
      *param_9 = -param_10;
      param_9[6] = (int)fVar1;
      param_9[7] = (int)fVar2;
      param_9[8] = (int)fVar3;
    }
  }
  return;
}



//==== 00059800  ns=collproc  size=0x604
// sig: undefined CollSphereVsTri(void)
// callers(2): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void collproc::CollSphereVsTri
               (byte *param_1,int param_2,int param_3,int *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
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
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  int in_stack_00000084;
  float local_118;
  float local_114;
  float local_110;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  
  pfVar19 = (float *)(param_2 + (uint)*param_1 * 0xc);
  pfVar18 = (float *)(param_2 + (uint)param_1[1] * 0xc);
  fVar2 = *pfVar19;
  fVar3 = pfVar19[1];
  pfVar17 = (float *)(param_2 + (uint)param_1[2] * 0xc);
  fVar4 = pfVar19[2];
  bVar1 = param_1[3];
  if ((*(uint *)(param_3 + (uint)*param_1 * 4) & *(uint *)(param_3 + (uint)param_1[1] * 4) &
      *(uint *)(param_3 + (uint)param_1[2] * 4)) != 0) {
    return;
  }
  if ((bVar1 & 0x80 & param_8) != 0) {
    return;
  }
  if ((param_8 & 0x20) != 0 && ((param_8 >> 8 ^ (uint)bVar1) & 0x1f) == 0) {
    return;
  }
  fVar11 = *pfVar18 - fVar2;
  fVar13 = pfVar18[1] - fVar3;
  fVar15 = pfVar18[2] - fVar4;
  fVar12 = *pfVar17 - fVar2;
  fVar14 = pfVar17[1] - fVar3;
  fVar16 = pfVar17[2] - fVar4;
  in_stack_00000070 = in_stack_00000070 - fVar2;
  in_stack_00000078 = in_stack_00000078 - fVar4;
  in_stack_00000074 = in_stack_00000074 - fVar3;
  fVar6 = fVar14 * fVar15 - fVar16 * fVar13;
  fVar5 = fVar16 * fVar11 - fVar12 * fVar15;
  fVar7 = fVar12 * fVar13 - fVar14 * fVar11;
  fVar8 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
  fVar9 = in_stack_00000070 * fVar6 + in_stack_00000074 * fVar5 + in_stack_00000078 * fVar7;
  fVar10 = fVar9 / fVar8;
  if (fVar8 == 0.0) {
    return;
  }
  if (((param_8 & 0x10) == 0) && (fVar9 < 0.0)) {
    return;
  }
  local_118 = in_stack_00000070 + -fVar6 * fVar10;
  local_110 = in_stack_00000078 + -fVar7 * fVar10;
  local_114 = in_stack_00000074 + -fVar5 * fVar10;
  fVar8 = fVar6 * fVar10 * fVar6 * fVar10 + fVar5 * fVar10 * fVar5 * fVar10 +
          fVar7 * fVar10 * fVar7 * fVar10;
  if ((float)param_4[2] < fVar8) {
    return;
  }
  if (0.0 <= (local_114 * fVar15 - local_110 * fVar13) * fVar6 +
             (local_110 * fVar11 - local_118 * fVar15) * fVar5 +
             (local_118 * fVar13 - local_114 * fVar11) * fVar7) {
    if ((fVar14 * local_110 - fVar16 * local_114) * fVar6 +
        (fVar16 * local_118 - fVar12 * local_110) * fVar5 +
        (fVar12 * local_114 - fVar14 * local_118) * fVar7 < 0.0) {
      local_f4 = 0.0;
      local_f0 = 0.0;
      local_ec = 0.0;
      local_100 = fVar12;
      local_fc = fVar14;
      local_f8 = fVar16;
    }
    else {
      local_100 = fVar11;
      local_fc = fVar13;
      local_f8 = fVar15;
      local_f4 = fVar12;
      local_f0 = fVar14;
      local_ec = fVar16;
      if (0.0 <= ((local_114 - fVar13) * (fVar16 - fVar15) -
                 (local_110 - fVar15) * (fVar14 - fVar13)) * fVar6 +
                 ((local_110 - fVar15) * (fVar12 - fVar11) -
                 (local_118 - fVar11) * (fVar16 - fVar15)) * fVar5 +
                 ((local_118 - fVar11) * (fVar14 - fVar13) -
                 (local_114 - fVar13) * (fVar12 - fVar11)) * fVar7) goto LAB_00059cc0;
    }
  }
  else {
    local_100 = 0.0;
    local_fc = 0.0;
    local_f8 = 0.0;
    local_f4 = fVar11;
    local_f0 = fVar13;
    local_ec = fVar15;
  }
  local_f4 = local_f4 - local_100;
  local_f0 = local_f0 - local_fc;
  local_ec = local_ec - local_f8;
  fVar8 = ((local_118 - local_100) * local_f4 + (local_114 - local_fc) * local_f0 +
          (local_110 - local_f8) * local_ec) /
          (local_f4 * local_f4 + local_f0 * local_f0 + local_ec * local_ec);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  local_118 = local_100 + local_f4 * fVar8;
  local_114 = local_fc + local_f0 * fVar8;
  local_110 = local_f8 + local_ec * fVar8;
  fVar8 = (local_118 - in_stack_00000070) * (local_118 - in_stack_00000070) +
          (local_114 - in_stack_00000074) * (local_114 - in_stack_00000074) +
          (local_110 - in_stack_00000078) * (local_110 - in_stack_00000078);
  if ((float)param_4[2] < fVar8) {
    return;
  }
LAB_00059cc0:
  fStack0000005c = (float)param_6;
  fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
  fVar2 = fVar2 + fStack00000058;
  fVar3 = fVar3 + fStack0000005c;
  *param_4 = bVar1 + 0x1000;
  fVar4 = fVar4 + (float)((ulonglong)param_7 >> 0x20);
  param_4[1] = in_stack_00000084;
  param_4[2] = (int)(fVar8 * 0.9995);
  param_4[3] = (int)(local_118 + fVar2);
  param_4[4] = (int)(local_114 + fVar3);
  param_4[5] = (int)(local_110 + fVar4);
  param_4[6] = (int)fVar6;
  param_4[7] = (int)fVar5;
  param_4[8] = (int)fVar7;
  param_4[9] = (int)fVar2;
  param_4[10] = (int)fVar3;
  param_4[0xb] = (int)fVar4;
  param_4[0xc] = (int)(fVar11 + fVar2);
  param_4[0xd] = (int)(fVar13 + fVar3);
  param_4[0xe] = (int)(fVar15 + fVar4);
  param_4[0xf] = (int)(fVar12 + fVar2);
  param_4[0x10] = (int)(fVar14 + fVar3);
  param_4[0x11] = (int)(fVar16 + fVar4);
  return;
}



//==== 00059e20  ns=collproc  size=0x1df0
// sig: undefined CollSphere(void)
// callers(102): 0001f7a8 mobyupdate_unsorted::UpdateMoby_409; 0002d638 camera0::HandleSpecialTargetUpVec; 0002ffe8 camera0::SetCam0DefaultPosRot; 00031128 camera0::UpdateBumpColl_0; 00031590 camera0::UpdateSegmentPush_0; 00031b78 camera0::UpdateSegmentColl_0; 00036e18 camera::camera10::Cam10_00036e18; 00046c58 camera::camera4::UpdateCamera_4; 00049ff0 camera::camera7::Cam7_UpdatePos; 0004c828 camera::camera8::Cam8_UpdateCam; 0004d7e8 camera::camera9::Cam9_CalcDesiredPos; 000543c8 camera::Camera_CollSphereBump; 00083ac8 hero::Hero_HandleGroundType; 000888c8 hero::Hero_ResolveCollision; 0008af28 hero::???_Hero_UpdateGroundProbe; 000ffcd0 mobyutil::CollMovingSphere; 001005a8 mobyutil::MB_PushOutOfWalls; 001009b0 mobyutil::MB_MoveAndCollide; 0010b030 mobyutil::MB_UpdateKick; 0010dc70 mobyutil::MB_CheckCollPill; 00120cc8 partupd::SpawnPart_3; 00120f48 partupd::UpdatePart_3; 001292f0 partupd::UpdatePart_30; 001a2090 mobyupdate_unsorted::UpdateMoby_1049; 001a9218 mobyupdate_helpers::M1059_001a9218
// callees(7): 000564d0 collproc::CollMoby_TransformVerts; 00056b24 collproc::CollGrid_GetCell; 00059658 collproc::CollSphereVsSphere; 00059800 collproc::CollSphereVsTri; 000f595c mobyfunc::Moby_BuildJointMatrices; 004ff98c FUN_004ff98c; 005dd48c FUN_005dd48c
// strings: 00651b1c: 'CollSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.'

/* [collision] CollSphere(…, float *pos, …, COLL_FLAGS flags, MobyInstance *skip); radius in f1.
   Same env(x1024)+moby path and flag semantics as CollLine. */

undefined8
collproc::CollSphere
          (ulonglong param_1,float *param_2,undefined8 param_3,uint param_4,ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  int iVar24;
  longlong lVar23;
  undefined4 *puVar25;
  CollCell *pCVar26;
  ushort uVar29;
  float *pfVar28;
  short *psVar30;
  float *pfVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  int iVar34;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar35;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  undefined *puVar36;
  ulonglong unaff_r23;
  ulonglong uVar37;
  int iVar38;
  ulonglong unaff_r24;
  MobyInstance *pMVar39;
  ulonglong unaff_r25;
  ulonglong uVar40;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar41;
  ulonglong unaff_r28;
  uint uVar42;
  ulonglong unaff_r29;
  float *pfVar43;
  ulonglong unaff_r30;
  ushort *puVar44;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f14;
  double dVar54;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar55;
  ulonglong in_f22;
  double dVar56;
  ulonglong in_f23;
  double dVar57;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar58;
  ulonglong in_f26;
  double dVar59;
  ulonglong in_f27;
  double dVar60;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar27;
  
  uVar22 = ZEXT48(&stack0x00000000);
  puVar16 = (ulonglong *)(uVar22 - 0x28d0);
  *puVar16 = uVar22;
  puVar16[0x51c] = in_LR;
  puVar16[0x508] = in_f14;
  puVar16[0x509] = in_f15;
  puVar16[0x50a] = in_f16;
  puVar16[0x50b] = in_f17;
  puVar16[0x50c] = in_f18;
  puVar16[0x50d] = in_f19;
  puVar16[0x50e] = in_f20;
  puVar16[0x50f] = in_f21;
  puVar16[0x510] = in_f22;
  puVar16[0x511] = in_f23;
  puVar16[0x512] = in_f24;
  puVar16[0x513] = in_f25;
  puVar16[0x514] = in_f26;
  puVar16[0x515] = in_f27;
  puVar16[0x516] = in_f28;
  puVar16[0x517] = in_f29;
  puVar16[0x518] = in_f30;
  puVar16[0x519] = in_f31;
  puVar16[0x507] = unaff_r31;
  puVar16[0x505] = unaff_r29;
  puVar16[0x4f6] = unaff_r14;
  puVar16[0x4e2] = param_1;
  puVar16[0x4e8] = param_5;
  puVar16[0x4fa] = unaff_r18;
  fVar7 = *param_2;
  puVar16[0x506] = unaff_r30;
  puVar16[0x504] = unaff_r28;
  puVar16[0x503] = unaff_r27;
  puVar16[0x502] = unaff_r26;
  puVar16[0x501] = unaff_r25;
  puVar16[0x500] = unaff_r24;
  puVar16[0x4ff] = unaff_r23;
  puVar16[0x4fe] = unaff_r22;
  puVar16[0x4fd] = unaff_r21;
  puVar16[0x4fc] = unaff_r20;
  puVar16[0x4fb] = unaff_r19;
  puVar16[0x4f9] = unaff_r17;
  puVar16[0x4f8] = unaff_r16;
  puVar16[0x4f7] = unaff_r15;
  *(float *)(puVar16 + 0x17) = fVar7;
  iVar24 = FUN_005dd48c(uVar22 - 0x2818);
  if (iVar24 != 2) {
    *(float *)((int)puVar16 + 0xb4) = param_2[1];
    iVar24 = FUN_005dd48c(uVar22 - 0x281c);
    if (iVar24 != 2) {
      *(float *)(puVar16 + 0x16) = param_2[2];
      iVar24 = FUN_005dd48c(uVar22 - 0x2820);
      if (iVar24 != 2) {
        dVar51 = (double)puVar16[0x4e2];
        dVar52 = (double)param_2[1];
        dVar53 = (double)param_2[2];
        dVar59 = (double)*param_2 + dVar51;
        fVar7 = (float)(dVar52 + dVar51);
        fVar1 = (float)(dVar53 + dVar51);
        dVar60 = (double)*param_2 - dVar51;
        fVar3 = (float)(dVar52 - dVar51);
        fVar4 = (float)(dVar53 - dVar51);
        *(float *)(puVar16 + 0x18) = fVar7;
        *(float *)((int)puVar16 + 0xc4) = fVar1;
        *(float *)((int)puVar16 + 0xcc) = fVar3;
        *(float *)(puVar16 + 0x1a) = fVar4;
        dVar54 = 1024.0;
        fVar2 = (float)(dVar51 * 1024.0);
        *(float *)(puVar16 + 0x1b) = (float)(dVar52 * 1024.0);
        *(float *)((int)puVar16 + 0xdc) = (float)(dVar53 * 1024.0);
        dVar58 = 0.0;
        if (((((0.0 <= (float)dVar60) && (0.0 <= fVar3)) && (0.0 <= fVar4)) &&
            (((float)dVar59 <= 1024.0 && (fVar7 <= 1024.0)))) &&
           ((fVar1 <= 1024.0 && (-1 < CollOutput.collCount)))) {
          CollOutput.collCount = CollOutput.collCount + 1;
          puVar16[0x4ef] = (longlong)(int)dVar60;
          puVar16[0x4ef] = (longlong)(int)(dVar52 - dVar51);
          iVar24 = *(int *)((int)puVar16 + 0x277c);
          puVar16[0x4ef] = (longlong)(int)(dVar53 - dVar51);
          puVar16[0x4ef] = (longlong)(int)dVar59;
          puVar16[0x4ef] = (longlong)(int)(dVar52 + dVar51);
          iVar34 = *(int *)((int)puVar16 + 0x277c);
          puVar16[0x4ef] = (longlong)(int)(dVar53 + dVar51);
          if (0.0 < fVar2) {
            iVar38 = *(int *)((int)puVar16 + 0x277c) >> 2;
            *(int *)(puVar16 + 0x4e0) = iVar38;
            *(int *)((int)puVar16 + 0x2704) = iVar38;
            *(int *)(puVar16 + 0x4e1) = iVar38;
            iVar35 = iVar24 >> 2;
            *(int *)((int)puVar16 + 0x270c) = iVar38;
            iVar41 = *(int *)((int)puVar16 + 0x277c) >> 2;
            *(float *)((int)puVar16 + 0xe4) = fVar3 * 1024.0;
            *(float *)(puVar16 + 0x1d) = fVar4 * 1024.0;
            *(float *)(puVar16 + 0x1e) = fVar7 * 1024.0;
            *(float *)((int)puVar16 + 0xf4) = fVar1 * 1024.0;
            auVar14 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            *(int *)(puVar16 + 0x4e0) = iVar35;
            *(int *)((int)puVar16 + 0x2704) = iVar35;
            *(int *)(puVar16 + 0x4e1) = iVar35;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(int *)((int)puVar16 + 0x270c) = iVar35;
            auVar15 = auRam00000000;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(int *)(puVar16 + 0x4e0) = iVar41;
            *(int *)((int)puVar16 + 0x2704) = iVar41;
            *(int *)(puVar16 + 0x4e1) = iVar41;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(int *)((int)puVar16 + 0x270c) = iVar41;
            auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar63 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            lVar23 = uVar22 - 0x27cc;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            iVar27 = *(int *)((int)puVar16 + 0x277c) >> 2;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            iVar11 = iVar34 >> 2;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            iVar12 = *(int *)((int)puVar16 + 0x277c) >> 2;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar13 = storeVectorElementWordIndexed
                               (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                lVar23);
            *(undefined4 *)lVar23 = uVar13;
            auVar14 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            storeVectorElementWordIndexed
                      (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,4,lVar23);
            storeVectorElementWordIndexed
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,lVar23);
            *(int *)(puVar16 + 0x4e0) = iVar27;
            *(int *)((int)puVar16 + 0x2704) = iVar27;
            *(int *)(puVar16 + 0x4e1) = iVar27;
            *(int *)((int)puVar16 + 0x270c) = iVar27;
            auVar14 = auRam00000000;
            *(int *)(puVar16 + 0x4e0) = iVar11;
            auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
            *(int *)((int)puVar16 + 0x2704) = iVar11;
            *(int *)(puVar16 + 0x4e1) = iVar11;
            *(int *)((int)puVar16 + 0x270c) = iVar11;
            auVar15 = auRam00000000;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(int *)(puVar16 + 0x4e0) = iVar12;
            *(int *)((int)puVar16 + 0x2704) = iVar12;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(int *)(puVar16 + 0x4e1) = iVar12;
            *(int *)((int)puVar16 + 0x270c) = iVar12;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar63 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            lVar23 = uVar22 - 0x27c0;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(float *)((int)puVar16 + 0x271c) = fVar2;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            *(undefined4 *)(puVar16 + 0x4e3) = 0;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            puVar16[0x4ed] = (longlong)iVar38;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            puVar16[0x4e7] = (longlong)iVar27;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            uVar13 = storeVectorElementWordIndexed
                               (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                lVar23);
            *(undefined4 *)lVar23 = uVar13;
            auVar14 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                      (undefined1  [16])0xffffffff;
            storeVectorElementWordIndexed
                      (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,4,lVar23);
            storeVectorElementWordIndexed
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,lVar23);
            *(undefined4 *)(puVar16 + 0x56) = 0;
            *(undefined4 *)((int)puVar16 + 0x2b4) = 0;
            *(undefined4 *)(puVar16 + 0x57) = 0;
            *(undefined4 *)((int)puVar16 + 700) = 0;
            *(undefined4 *)(puVar16 + 0x58) = 0;
            *(undefined4 *)((int)puVar16 + 0x2c4) = 0;
            *(undefined4 *)(puVar16 + 0x59) = 0;
            *(undefined4 *)((int)puVar16 + 0x2cc) = 0;
            *(undefined4 *)(puVar16 + 0x5a) = 0;
            *(undefined4 *)((int)puVar16 + 0x2d4) = 0;
            *(undefined4 *)(puVar16 + 0x5b) = 0;
            *(undefined4 *)((int)puVar16 + 0x2dc) = 0;
            *(undefined4 *)(puVar16 + 0x5c) = 0;
            *(undefined4 *)((int)puVar16 + 0x2e4) = 0;
            *(undefined4 *)(puVar16 + 0x5d) = 0;
            *(undefined4 *)((int)puVar16 + 0x2a4) = 0;
            *(undefined4 *)(puVar16 + 0x55) = 0;
            *(undefined4 *)(puVar16 + 0x4e4) = 0x3f800000;
            *(float *)((int)puVar16 + 0x2ac) = fVar2 * fVar2 * 0.9995;
            if ((param_4 & 1) == 0) {
              iVar27 = iVar35 << 0xc;
              iVar38 = (int)((puVar16[0x4ed] & 0xffffffff) << 0xc);
              iVar19 = iVar41 << 0xc;
              *(int *)(puVar16 + 0x4e0) = iVar38;
              *(int *)((int)puVar16 + 0x2704) = iVar38;
              *(int *)(puVar16 + 0x4e1) = iVar38;
              *(int *)((int)puVar16 + 0x270c) = iVar38;
              auVar14 = auRam00000000;
              *(int *)(puVar16 + 0x4e0) = iVar27;
              auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
              *(int *)((int)puVar16 + 0x2704) = iVar27;
              *(int *)(puVar16 + 0x4e1) = iVar27;
              *(int *)((int)puVar16 + 0x270c) = iVar27;
              auVar15 = auRam00000000;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              *(int *)(puVar16 + 0x4e0) = iVar19;
              *(int *)((int)puVar16 + 0x2704) = iVar19;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              *(int *)(puVar16 + 0x4e1) = iVar19;
              *(int *)((int)puVar16 + 0x270c) = iVar19;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar63 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              lVar23 = uVar22 - 0x27a8;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              uVar13 = storeVectorElementWordIndexed
                                 (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                  lVar23);
              *(undefined4 *)lVar23 = uVar13;
              auVar14 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,4,lVar23);
              storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,lVar23);
              puVar16[0x4ef] = (longlong)iVar38;
              uVar45 = puVar16[0x4ef];
              puVar16[0x4ef] = (longlong)iVar27;
              fVar7 = (float)(longlong)uVar45;
              lVar23 = uVar22 - 0x11e4;
              *(float *)(puVar16 + 0x4e0) = fVar7;
              *(float *)((int)puVar16 + 0x2704) = fVar7;
              *(float *)(puVar16 + 0x4e1) = fVar7;
              *(float *)((int)puVar16 + 0x270c) = fVar7;
              uVar45 = puVar16[0x4ef];
              puVar16[0x4ef] = (longlong)iVar19;
              fVar7 = (float)(longlong)uVar45;
              auVar14 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              *(float *)(puVar16 + 0x4e0) = fVar7;
              *(float *)((int)puVar16 + 0x2704) = fVar7;
              *(float *)(puVar16 + 0x4e1) = fVar7;
              *(float *)((int)puVar16 + 0x270c) = fVar7;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              fVar7 = (float)(longlong)puVar16[0x4ef];
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              *(float *)(puVar16 + 0x4e0) = fVar7;
              *(float *)((int)puVar16 + 0x2704) = fVar7;
              *(float *)(puVar16 + 0x4e1) = fVar7;
              *(float *)((int)puVar16 + 0x270c) = fVar7;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              iVar38 = 0x100;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar62 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
              auVar14 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar15 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar63 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
              auVar14 = (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              auVar14 = (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60) >> 0x60 &
                        (undefined1  [16])0xffffffff;
              storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,
                         uVar22 - 0x27b4);
              do {
                puVar25 = (undefined4 *)lVar23;
                *puVar25 = 0;
                iVar38 = iVar38 + -1;
                puVar25[1] = 0;
                puVar25[2] = 0;
                puVar25[3] = 0;
                lVar23 = lVar23 + 0x10;
              } while (iVar38 != 0);
              uVar45 = uVar22 - 0x11e4;
              while( true ) {
                auVar14 = auVar63 >> 0x60 & (undefined1  [16])0xffffffff;
                uVar37 = puVar16[0x4e7];
                uVar13 = storeVectorElementWordIndexed
                                   (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                    uVar22 - 0x27b0);
                *(undefined4 *)(uVar22 - 0x27b0) = uVar13;
                iVar38 = iVar35;
                while( true ) {
                  auVar14 = auVar62 >> 0x60 & (undefined1  [16])0xffffffff;
                  uVar40 = puVar16[0x4ed];
                  uVar13 = storeVectorElementWordIndexed
                                     (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                                      0,uVar22 - 0x27b4);
                  *(undefined4 *)(uVar22 - 0x27b4) = uVar13;
                  while( true ) {
                    dVar61 = (double)*(float *)((int)puVar16 + 0x11c);
                    dVar53 = (double)*(float *)(puVar16 + 0x24);
                    dVar52 = (double)*(float *)((int)puVar16 + 0x124);
                    dVar51 = (double)(float)(dVar61 + 2048.0);
                    dVar60 = (double)(float)(dVar53 + 2048.0);
                    dVar59 = (double)(float)(dVar52 + 2048.0);
                    *(float *)(puVar16 + 0x27) = (float)(dVar53 + 2048.0);
                    *(float *)((int)puVar16 + 0x13c) = (float)(dVar52 + 2048.0);
                    iVar27 = (int)uVar40;
                    pCVar26 = CollGrid_GetCell(iVar27,iVar38,iVar41);
                    *(CollCell **)(puVar16 + 0x14) = pCVar26;
                    if (pCVar26 != (CollCell *)0x0) {
                      fVar7 = *(float *)(puVar16 + 0x14);
                      pfVar43 = (float *)uVar45;
                      *pfVar43 = (float)dVar51;
                      pfVar43[1] = (float)dVar60;
                      pfVar43[2] = (float)dVar59;
                      pfVar43[3] = fVar7;
                      uVar45 = uVar45 + 0x10 & 0xffffffff;
                    }
                    if ((int)uVar37 == iVar27) break;
                    uVar40 = (ulonglong)(iVar27 + 1);
                    *(float *)(puVar16 + 0x24) = (float)(dVar53 + dVar58);
                    *(float *)((int)puVar16 + 0x124) = (float)(dVar52 + dVar58);
                    *(float *)((int)puVar16 + 0x11c) = (float)(dVar61 + 4096.0);
                  }
                  if (iVar11 == iVar38) break;
                  iVar38 = iVar38 + 1;
                  *(float *)((int)puVar16 + 0x124) = (float)(dVar52 + dVar58);
                  *(float *)(puVar16 + 0x24) = (float)(dVar53 + 4096.0);
                }
                if (iVar12 == iVar41) break;
                iVar41 = iVar41 + 1;
                *(float *)((int)puVar16 + 0x124) = (float)(dVar52 + 4096.0);
              }
              *(float *)((int)uVar45 + 0xc) = (float)dVar58;
              lVar23 = uVar22 - 0x11e4;
              *(float *)(puVar16 + 0x4e3) = (float)dVar58;
              while( true ) {
                pfVar43 = (float *)lVar23;
                psVar30 = (short *)pfVar43[3];
                *(float *)((int)puVar16 + 0xa4) = pfVar43[3];
                if (psVar30 == (short *)0x0) break;
                bVar5 = *(byte *)(psVar30 + 1);
                uVar42 = (uint)bVar5;
                if (bVar5 != 0) {
                  fVar7 = *pfVar43;
                  fVar1 = pfVar43[1];
                  fVar2 = pfVar43[2];
                  *(float *)((int)puVar16 + 0x144) = fVar1;
                  *(float *)(puVar16 + 0x29) = fVar2;
                  iVar38 = 0;
                  pfVar28 = (float *)(psVar30 + 2);
                  *(float *)(puVar16 + 0x2a) = *(float *)(puVar16 + 0x1b) - fVar1;
                  *(float *)((int)puVar16 + 0x154) = *(float *)((int)puVar16 + 0xdc) - fVar2;
                  fVar3 = *(float *)(puVar16 + 0x1c);
                  fVar4 = *(float *)(puVar16 + 0x1d);
                  fVar17 = *(float *)((int)puVar16 + 0xe4) - fVar1;
                  *(float *)((int)puVar16 + 0x15c) = fVar17;
                  *(float *)(puVar16 + 0x2c) = fVar4 - fVar2;
                  fVar8 = *(float *)((int)puVar16 + 0xec);
                  fVar9 = *(float *)(puVar16 + 0x1e);
                  fVar18 = *(float *)((int)puVar16 + 0xf4) - fVar2;
                  *(float *)(puVar16 + 0x2d) = fVar9 - fVar1;
                  *(float *)((int)puVar16 + 0x16c) = fVar18;
                  lVar33 = uVar22 - 0x28d0;
                  pfVar43 = pfVar28;
                  if (bVar5 != 0) {
                    do {
                      iVar38 = iVar38 + 1;
                      *(uint *)((int)lVar33 + 0x2ec) =
                           (uint)(fVar8 - fVar7 < *pfVar43) << 1 | (uint)(*pfVar43 < fVar3 - fVar7)
                           | (uint)(fVar9 - fVar1 < pfVar43[1]) << 9 |
                             (uint)(pfVar43[1] < fVar17) << 8 |
                           (uint)(fVar18 < pfVar43[2]) << 0x11 |
                           (uint)(pfVar43[2] < fVar4 - fVar2) << 0x10;
                      lVar33 = lVar33 + 4;
                      pfVar43 = pfVar43 + 3;
                    } while (iVar38 < (int)(uint)bVar5);
                  }
                  sVar10 = *psVar30;
                  iVar38 = 0;
                  pfVar31 = pfVar28 + uVar42 * 3;
                  pfVar43 = pfVar31;
                  if (0 < sVar10) {
                    do {
                      *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x28);
                      *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar16 + 0x29);
                      uVar45 = ZEXT48(CollOutput.grid);
                      *(undefined4 *)((int)puVar16 + 0x5c) = *(undefined4 *)((int)puVar16 + 0x144);
                      *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)((int)puVar16 + 0x14c);
                      *(undefined4 *)((int)puVar16 + 0x74) = *(undefined4 *)(puVar16 + 0x2a);
                      *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)((int)puVar16 + 0x154);
                      puVar16[0x10] = uVar45;
                      CollSphereVsTri(pfVar43,pfVar28,uVar22 - 0x25e4,uVar22 - 0x262c,uVar42,
                                      puVar16[0xb],puVar16[0xc],param_4);
                      iVar38 = iVar38 + 1;
                      pfVar43 = pfVar43 + 1;
                    } while (iVar38 < sVar10);
                  }
                  bVar5 = *(byte *)((int)psVar30 + 3);
                  if (bVar5 != 0) {
                    uVar45 = 0;
                    if (bVar5 != 0) {
                      do {
                        *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x28);
                        *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar16 + 0x29);
                        *(undefined4 *)(puVar16 + 0x4de) =
                             *(undefined4 *)((int)pfVar31 + (int)((uVar45 & 0xffffffff) << 2));
                        *(undefined1 *)((int)puVar16 + 0x26f1) =
                             *(undefined1 *)((int)puVar16 + 0x26f2);
                        uVar37 = ZEXT48(CollOutput.grid);
                        *(undefined1 *)((int)puVar16 + 0x26f2) =
                             *(undefined1 *)
                              ((int)pfVar31 + (int)uVar45 + (int)((longlong)sVar10 << 2));
                        *(undefined4 *)((int)puVar16 + 0x5c) = *(undefined4 *)((int)puVar16 + 0x144)
                        ;
                        *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)((int)puVar16 + 0x14c);
                        *(undefined4 *)((int)puVar16 + 0x74) = *(undefined4 *)(puVar16 + 0x2a);
                        *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)((int)puVar16 + 0x154);
                        puVar16[0x10] = uVar37;
                        CollSphereVsTri(uVar22 - 0x1e0,pfVar28,uVar22 - 0x25e4,uVar22 - 0x262c,
                                        uVar42,puVar16[0xb],puVar16[0xc],param_4);
                        iVar38 = (int)uVar45 + 1;
                        uVar45 = (ulonglong)iVar38;
                      } while (iVar38 < (int)(uint)bVar5);
                    }
                  }
                }
                lVar23 = lVar23 + 0x10;
              }
            }
            iVar24 = iVar24 >> 4;
            uVar45 = (longlong)(iVar34 >> 4) + 1;
            *(undefined4 *)(puVar16 + 0x55) = 0;
            puVar16[0x4eb] = (longlong)iVar24;
            puVar16[0x4ee] = uVar45;
            puVar16[0x4e7] = (longlong)((int)puVar16[0x4e7] >> 2);
            puVar16[0x4ed] = (longlong)((int)puVar16[0x4ed] >> 2);
            if (iVar24 < (int)uVar45) {
              do {
                puVar16[0x4e9] = puVar16[0x4ed];
                puVar16[0x4ec] = puVar16[0x4e7] + 1;
                if ((int)puVar16[0x4ed] < (int)(puVar16[0x4e7] + 1)) {
                  puVar16[0x4ea] = puVar16[0x4e9] << 2;
                  do {
                    iVar24 = 0;
                    uVar45 = ZEXT48(g_MobyGrid) +
                             puVar16[0x4ea] + (puVar16[0x4eb] & 0xffffff) * 0x100;
                    psVar30 = (short *)uVar45;
                    sVar10 = *psVar30;
                    puVar16[0x4e5] = uVar45 & 0xffffffff;
                    cVar6 = *(char *)(psVar30 + 1);
                    puVar16[0x4e6] = ZEXT48(&g_MobyGridLists) + (longlong)sVar10 * 0x20 & 0xffffffff
                    ;
                    if (cVar6 != '\0') {
                      iVar34 = 0;
                      dVar59 = (double)*(float *)((int)puVar16 + 0x271c);
                      do {
                        iVar38 = CollOutput.collCount;
                        pMVar39 = MobyInstance + *(short *)((int)puVar16[0x4e6] + iVar34);
                        uVar45 = ZEXT48(pMVar39);
                        if (((pMVar39 != (MobyInstance *)puVar16[0x4e8]) &&
                            (puVar44 = pMVar39->collision, puVar44 != (ushort *)0x0)) &&
                           (pMVar39->collQueryStamp != CollOutput.collCount)) {
                          fVar1 = (pMVar39->bSphere).x - *(float *)((int)puVar16 + 0xd4);
                          fVar2 = (pMVar39->bSphere).y - *(float *)(puVar16 + 0x1b);
                          fVar3 = (pMVar39->bSphere).z - *(float *)((int)puVar16 + 0xdc);
                          fVar7 = (float)(dVar59 + (double)(pMVar39->bSphere).rad);
                          *(float *)((int)puVar16 + 0x174) = fVar2;
                          *(float *)(puVar16 + 0x2f) = fVar3;
                          if (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 <= fVar7 * fVar7) {
                            uVar42 = *(uint *)(puVar44 + 2);
                            iVar35 = ((int)uVar42 >> 5) +
                                     (uint)((int)uVar42 < 0 && (uVar42 & 0x1f) != 0);
                            if ((param_4 & 4) == 0) {
                              uVar29 = puVar44[1];
                            }
                            else {
                              uVar29 = *puVar44;
                            }
                            pMVar39->collQueryStamp = iVar38;
                            puVar36 = (undefined *)0x0;
                            uVar42 = *(uint *)(pMVar39->collision + 6);
                            if (uVar29 != 0) {
                              if (uVar42 == ((param_4 & 2) == 0)) goto LAB_0005b94c;
                              uVar37 = 0;
                              do {
                                if (*(int *)(&MobyClassRef + (int)((uVar37 & 0xffffffff) << 3)) ==
                                    pMVar39->field71_0xa8) {
                                  puVar36 = &g_CollMobyJointCache + (int)uVar37 * 0x7fc;
                                  goto LAB_0005b058;
                                }
                                uVar37 = uVar37 + 1;
                              } while ((int)uVar37 < 8);
                              iVar38 = CollOutput.padding[2] * 8;
                              uVar32 = CollOutput.padding[2] + 1;
                              iVar41 = CollOutput.padding[2] * 0x7fc;
                              CollOutput.padding[2] =
                                   uVar32 + (((int)uVar32 >> 3) +
                                            (uint)((int)uVar32 < 0 && (uVar32 & 7) != 0)) * -8;
                              puVar36 = &g_CollMobyJointCache + iVar41;
                              *(int *)(&MobyClassRef + iVar38) = pMVar39->field71_0xa8;
                              *(int *)(iVar38 + 0xa109c4) = CollOutput.collCount;
                              mobyfunc::Moby_BuildJointMatrices(uVar45,uVar29,puVar36);
                            }
LAB_0005b058:
                            fVar7 = (float)((double)(pMVar39->pos).y * dVar54);
                            dVar60 = (double)(pMVar39->transform).v0.x;
                            fVar1 = (float)((double)(pMVar39->pos).z * dVar54);
                            dVar51 = (double)(pMVar39->transform).v0.y;
                            dVar52 = (double)(pMVar39->transform).v0.z;
                            dVar53 = (double)(pMVar39->transform).v1.x;
                            dVar58 = (double)(pMVar39->transform).v1.y;
                            dVar61 = (double)(pMVar39->transform).v1.z;
                            dVar55 = (double)(pMVar39->transform).v2.x;
                            dVar56 = (double)(pMVar39->transform).v2.y;
                            dVar57 = (double)(pMVar39->transform).v2.z;
                            *(float *)(puVar16 + 0x30) = fVar7;
                            *(float *)((int)puVar16 + 0x184) = fVar1;
                            if (uVar42 != 0) {
                              fVar7 = *(float *)(puVar16 + 0x1b) - fVar7;
                              dVar46 = (double)fVar7;
                              uVar40 = uVar22 - 0x1de4;
                              fVar1 = *(float *)((int)puVar16 + 0xdc) - fVar1;
                              dVar47 = (double)fVar1;
                              uVar13 = *(undefined4 *)(puVar16 + 0x4e3);
                              iVar38 = 0x100;
                              *(float *)((int)puVar16 + 0x18c) = fVar7;
                              *(float *)(puVar16 + 0x32) = fVar1;
                              *(float *)(puVar16 + 0x33) = (float)(dVar46 - dVar59);
                              *(float *)((int)puVar16 + 0x19c) = (float)(dVar47 - dVar59);
                              *(float *)((int)puVar16 + 0x1a4) = (float)(dVar46 + dVar59);
                              *(float *)(puVar16 + 0x35) = (float)(dVar47 + dVar59);
                              uVar37 = uVar40;
                              do {
                                iVar38 = iVar38 + -1;
                                puVar25 = (undefined4 *)uVar37;
                                *puVar25 = uVar13;
                                puVar25[1] = uVar13;
                                puVar25[2] = uVar13;
                                uVar37 = uVar37 + 0xc;
                              } while (iVar38 != 0);
                              dVar46 = (double)pMVar39->scale;
                              *(float *)(puVar16 + 0x48) = (float)(dVar51 * dVar46);
                              *(float *)((int)puVar16 + 0x244) = (float)(dVar52 * dVar46);
                              *(float *)((int)puVar16 + 0x24c) = (float)(dVar58 * dVar46);
                              *(float *)(puVar16 + 0x4a) = (float)(dVar61 * dVar46);
                              *(float *)(puVar16 + 0x4b) = (float)(dVar56 * dVar46);
                              *(float *)((int)puVar16 + 0x25c) = (float)(dVar57 * dVar46);
                              *(float *)((int)puVar16 + 0x284) = (float)(dVar51 * dVar46);
                              *(float *)(puVar16 + 0x51) = (float)(dVar52 * dVar46);
                              *(float *)(puVar16 + 0x52) = (float)(dVar58 * dVar46);
                              *(float *)((int)puVar16 + 0x294) = (float)(dVar61 * dVar46);
                              *(float *)((int)puVar16 + 0x29c) = (float)(dVar56 * dVar46);
                              *(float *)(puVar16 + 0x54) = (float)(dVar57 * dVar46);
                              *(undefined4 *)(puVar16 + 7) = *(undefined4 *)((int)puVar16 + 0x194);
                              *(undefined4 *)(puVar16 + 8) = *(undefined4 *)((int)puVar16 + 0x19c);
                              *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar16 + 0x34);
                              *(undefined4 *)(puVar16 + 10) = *(undefined4 *)(puVar16 + 0x35);
                              *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x50);
                              *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar16 + 0x51);
                              *(undefined4 *)(puVar16 + 0xd) = *(undefined4 *)(puVar16 + 0x52);
                              *(undefined4 *)((int)puVar16 + 0x3c) = *(undefined4 *)(puVar16 + 0x33)
                              ;
                              *(undefined4 *)((int)puVar16 + 0x4c) =
                                   *(undefined4 *)((int)puVar16 + 0x1a4);
                              *(undefined4 *)((int)puVar16 + 0x5c) =
                                   *(undefined4 *)((int)puVar16 + 0x284);
                              *(undefined4 *)((int)puVar16 + 100) =
                                   *(undefined4 *)((int)puVar16 + 0x28c);
                              *(undefined4 *)((int)puVar16 + 0x6c) =
                                   *(undefined4 *)((int)puVar16 + 0x294);
                              *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)(puVar16 + 0x53);
                              *(undefined4 *)((int)puVar16 + 0x74) =
                                   *(undefined4 *)((int)puVar16 + 0x29c);
                              *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)(puVar16 + 0x54);
                              puVar16[0x10] = uVar40;
                              puVar16[0x11] = uVar22 - 0x21e4;
                              puVar16[0x12] = uVar22 - 0x2828;
                              puVar16[0x13] = uVar22 - 0x2824;
                              CollMoby_TransformVerts
                                        (uVar45,puVar16[7],puVar16[8],puVar16[9],puVar16[10],
                                         puVar16[0xb],puVar16[0xc],puVar16[0xd]);
                              iVar38 = 0;
                              if (0 < *(int *)((int)puVar16 + 0xac)) {
                                iVar41 = 0;
                                do {
                                  *(undefined4 *)(puVar16 + 0xb) =
                                       *(undefined4 *)((int)puVar16 + 0x17c);
                                  *(undefined4 *)(puVar16 + 0xc) =
                                       *(undefined4 *)((int)puVar16 + 0x184);
                                  *(undefined4 *)((int)puVar16 + 0x5c) =
                                       *(undefined4 *)(puVar16 + 0x30);
                                  *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)(puVar16 + 0x31);
                                  *(undefined4 *)((int)puVar16 + 0x74) =
                                       *(undefined4 *)((int)puVar16 + 0x18c);
                                  *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)(puVar16 + 0x32);
                                  puVar16[0x10] = uVar45;
                                  CollSphereVsTri(*(int *)(puVar16 + 0x15) + iVar41,uVar40,
                                                  uVar22 - 0x21e4,uVar22 - 0x262c,uVar42,
                                                  puVar16[0xb],puVar16[0xc],param_4);
                                  iVar38 = iVar38 + 1;
                                  iVar41 = iVar41 + 4;
                                } while (iVar38 < *(int *)((int)puVar16 + 0xac));
                              }
                            }
                            if ((param_4 & 2) == 0) {
                              puVar44 = pMVar39->collision + 8;
                              iVar38 = 0;
                              pfVar43 = pMVar39->collisionMesh;
                              if (0 < iVar35) {
                                do {
                                  uVar42 = (uint)pfVar43 & 1;
                                  pfVar43 = (float *)((int)pfVar43 >> 1);
                                  bVar5 = *(byte *)puVar44;
                                  if ((uVar42 == 0) &&
                                     (((int)(short)puVar44[1] & ((param_4 & 4) == 0) + 1) != 0)) {
                                    if (bVar5 < 2) {
                                      if (bVar5 == 0) {
LAB_0005b6f4:
                                        fVar7 = pMVar39->scale;
                                        pfVar28 = (float *)(puVar36 +
                                                           (int)((longlong)(short)puVar44[2] << 4));
                                        pfVar31 = (float *)(puVar36 +
                                                           (int)((longlong)(short)puVar44[3] << 4));
                                        dVar59 = (double)((float)((double)*pfVar28 * dVar54) * fVar7
                                                         );
                                        dVar46 = (double)((float)((double)pfVar28[1] * dVar54) *
                                                         fVar7);
                                        dVar47 = (double)((float)((double)*pfVar31 * dVar54) * fVar7
                                                         );
                                        dVar48 = (double)((float)((double)pfVar31[1] * dVar54) *
                                                         fVar7);
                                        dVar49 = (double)((float)((double)pfVar28[2] * dVar54) *
                                                         fVar7);
                                        dVar50 = (double)((float)((double)pfVar31[2] * dVar54) *
                                                         fVar7);
                                        fVar1 = *(float *)(puVar44 + 6);
                                        fVar3 = (float)(dVar51 * dVar59) + (float)(dVar58 * dVar46)
                                                + (float)(dVar56 * dVar49);
                                        fVar4 = (float)(dVar52 * dVar59) + (float)(dVar61 * dVar46)
                                                + (float)(dVar57 * dVar49);
                                        fVar2 = (float)(dVar51 * dVar47) + (float)(dVar58 * dVar48)
                                                + (float)(dVar56 * dVar50);
                                        *(float *)((int)puVar16 + 0x21c) = fVar3;
                                        fVar9 = (float)(dVar52 * dVar47) + (float)(dVar61 * dVar48)
                                                + (float)(dVar57 * dVar50);
                                        *(float *)(puVar16 + 0x44) = fVar4;
                                        *(float *)(puVar16 + 0x45) = fVar2;
                                        *(float *)((int)puVar16 + 0x22c) = fVar9;
                                        fVar8 = (float)(dVar60 * dVar59) + (float)(dVar53 * dVar46)
                                                + (float)(dVar55 * dVar49) +
                                                *(float *)((int)puVar16 + 0x17c);
                                        fVar3 = fVar3 + *(float *)(puVar16 + 0x30);
                                        fVar4 = fVar4 + *(float *)((int)puVar16 + 0x184);
                                        fVar17 = ((float)(dVar60 * dVar47) +
                                                  (float)(dVar53 * dVar48) +
                                                  (float)(dVar55 * dVar50) +
                                                 *(float *)((int)puVar16 + 0x17c)) - fVar8;
                                        fVar18 = (fVar2 + *(float *)(puVar16 + 0x30)) - fVar3;
                                        fVar20 = (fVar9 + *(float *)((int)puVar16 + 0x184)) - fVar4;
                                        *(float *)(puVar16 + 0x3f) = fVar18;
                                        *(float *)((int)puVar16 + 0x1fc) = fVar20;
                                        fVar9 = *(float *)(puVar16 + 0x1b) - fVar3;
                                        fVar21 = *(float *)((int)puVar16 + 0xdc) - fVar4;
                                        fVar2 = ((*(float *)((int)puVar16 + 0xd4) - fVar8) * fVar17
                                                 + fVar9 * fVar18 + fVar21 * fVar20) /
                                                (fVar17 * fVar17 + fVar18 * fVar18 + fVar20 * fVar20
                                                );
                                        *(float *)((int)puVar16 + 0x204) = fVar9;
                                        *(float *)(puVar16 + 0x41) = fVar21;
                                        if (fVar2 <= *(float *)(puVar16 + 0x4e3)) {
                                          fVar2 = *(float *)(puVar16 + 0x4e3);
                                        }
                                        if (*(float *)(puVar16 + 0x4e4) <= fVar2) {
                                          fVar2 = *(float *)(puVar16 + 0x4e4);
                                        }
                                        *(float *)(puVar16 + 6) = *(float *)((int)puVar16 + 0xd4);
                                        *(float *)(puVar16 + 7) = *(float *)((int)puVar16 + 0xdc);
                                        fVar4 = fVar4 + fVar20 * fVar2;
                                        fVar3 = fVar3 + fVar18 * fVar2;
                                        *(float *)((int)puVar16 + 0x234) = fVar18 * fVar2;
                                        *(float *)(puVar16 + 0x47) = fVar20 * fVar2;
                                        *(float *)(puVar16 + 8) = fVar8 + fVar17 * fVar2;
                                        *(float *)(puVar16 + 9) = fVar4;
                                        *(float *)(puVar16 + 0x42) = fVar3;
                                        *(float *)((int)puVar16 + 0x214) = fVar4;
                                        *(float *)((int)puVar16 + 0x34) = *(float *)(puVar16 + 0x1b)
                                        ;
                                        *(float *)((int)puVar16 + 0x44) = fVar3;
                                        puVar16[0xe] = uVar45;
                                        CollSphereVsSphere((double)*(float *)((int)puVar16 + 0x271c)
                                                           ,(double)(fVar1 * fVar7),puVar16[6],
                                                           puVar16[7],puVar16[8],puVar16[9]);
                                      }
                                      else {
                                        fVar7 = *(float *)(puVar44 + 8);
                                        fVar1 = *(float *)(puVar44 + 10);
                                        fVar2 = *(float *)(puVar44 + 0xc);
                                        fVar3 = *(float *)(puVar44 + 0xe);
                                        *(float *)((int)puVar16 + 0x264) = fVar1;
                                        *(float *)(puVar16 + 0x4d) = fVar2;
                                        *(float *)((int)puVar16 + 0x26c) = fVar3;
                                        *(float *)(puVar16 + 0x36) = fVar1;
                                        *(float *)((int)puVar16 + 0x1b4) = fVar2;
                                        fVar4 = pMVar39->scale;
                                        dVar46 = (double)(fVar7 * fVar4);
                                        dVar47 = (double)(fVar1 * fVar4);
                                        dVar48 = (double)(fVar2 * fVar4);
                                        fVar1 = (float)(dVar51 * dVar46) + (float)(dVar58 * dVar47)
                                                + (float)(dVar56 * dVar48);
                                        fVar7 = (float)(dVar52 * dVar46) + (float)(dVar61 * dVar47)
                                                + (float)(dVar57 * dVar48);
                                        *(float *)((int)puVar16 + 0x1bc) = fVar1;
                                        *(float *)(puVar16 + 0x38) = fVar7;
                                        *(undefined4 *)(puVar16 + 6) =
                                             *(undefined4 *)((int)puVar16 + 0xd4);
                                        *(undefined4 *)(puVar16 + 7) =
                                             *(undefined4 *)((int)puVar16 + 0xdc);
                                        *(undefined4 *)((int)puVar16 + 0x34) =
                                             *(undefined4 *)(puVar16 + 0x1b);
                                        *(float *)(puVar16 + 8) =
                                             (float)(dVar60 * dVar46) + (float)(dVar53 * dVar47) +
                                             (float)(dVar55 * dVar48) +
                                             *(float *)((int)puVar16 + 0x17c);
                                        *(float *)(puVar16 + 9) =
                                             fVar7 + *(float *)((int)puVar16 + 0x184);
                                        puVar16[0xe] = uVar45;
                                        *(float *)((int)puVar16 + 0x44) =
                                             fVar1 + *(float *)(puVar16 + 0x30);
                                        CollSphereVsSphere(dVar59,(double)(fVar3 * fVar4),puVar16[6]
                                                           ,puVar16[7],puVar16[8],puVar16[9]);
                                      }
                                    }
                                    else if (bVar5 < 3) {
                                      fVar7 = *(float *)(puVar44 + 6);
                                      fVar1 = *(float *)(puVar44 + 8);
                                      pfVar28 = (float *)(puVar36 + *(int *)(puVar44 + 2) * 0x10);
                                      fVar2 = *(float *)(puVar44 + 10);
                                      fVar3 = *(float *)(puVar44 + 0xc);
                                      *(float *)(puVar16 + 0x39) = fVar2;
                                      *(float *)((int)puVar16 + 0x1cc) = fVar3;
                                      fVar4 = pMVar39->scale;
                                      dVar46 = (double)(((float)((double)*pfVar28 * dVar54) + fVar1)
                                                       * fVar4);
                                      dVar47 = (double)(((float)((double)pfVar28[1] * dVar54) +
                                                        fVar2) * fVar4);
                                      dVar48 = (double)(((float)((double)pfVar28[2] * dVar54) +
                                                        fVar3) * fVar4);
                                      fVar2 = (float)(dVar51 * dVar46) + (float)(dVar58 * dVar47) +
                                              (float)(dVar56 * dVar48);
                                      fVar1 = (float)(dVar52 * dVar46) + (float)(dVar61 * dVar47) +
                                              (float)(dVar57 * dVar48);
                                      *(float *)((int)puVar16 + 0x1d4) = fVar2;
                                      *(float *)(puVar16 + 0x3b) = fVar1;
                                      *(undefined4 *)(puVar16 + 6) =
                                           *(undefined4 *)((int)puVar16 + 0xd4);
                                      *(undefined4 *)(puVar16 + 7) =
                                           *(undefined4 *)((int)puVar16 + 0xdc);
                                      *(undefined4 *)((int)puVar16 + 0x34) =
                                           *(undefined4 *)(puVar16 + 0x1b);
                                      *(float *)(puVar16 + 8) =
                                           (float)(dVar60 * dVar46) + (float)(dVar53 * dVar47) +
                                           (float)(dVar55 * dVar48) +
                                           *(float *)((int)puVar16 + 0x17c);
                                      *(float *)(puVar16 + 9) =
                                           fVar1 + *(float *)((int)puVar16 + 0x184);
                                      puVar16[0xe] = uVar45;
                                      *(float *)((int)puVar16 + 0x44) =
                                           fVar2 + *(float *)(puVar16 + 0x30);
                                      CollSphereVsSphere(dVar59,(double)(fVar7 * fVar4),puVar16[6],
                                                         puVar16[7],puVar16[8],puVar16[9]);
                                    }
                                    else {
                                      if (3 < bVar5) goto LAB_0005b6f4;
                                      fVar7 = *(float *)(puVar44 + 2);
                                      fVar1 = *(float *)(puVar44 + 8);
                                      fVar2 = *(float *)(puVar44 + 10);
                                      fVar3 = *(float *)(puVar44 + 0xc);
                                      fVar4 = *(float *)(puVar44 + 0xe);
                                      *(float *)((int)puVar16 + 0x274) = fVar2;
                                      *(float *)(puVar16 + 0x4f) = fVar3;
                                      *(float *)((int)puVar16 + 0x27c) = fVar4;
                                      *(float *)(puVar16 + 0x3c) = fVar2;
                                      *(float *)((int)puVar16 + 0x1e4) = fVar3;
                                      fVar8 = pMVar39->scale;
                                      dVar46 = (double)(fVar1 * fVar8);
                                      dVar47 = (double)(fVar2 * fVar8);
                                      dVar48 = (double)(fVar3 * fVar8);
                                      fVar3 = (float)(dVar51 * dVar46) + (float)(dVar58 * dVar47) +
                                              (float)(dVar56 * dVar48);
                                      fVar1 = (float)(dVar52 * dVar46) + (float)(dVar61 * dVar47) +
                                              (float)(dVar57 * dVar48);
                                      *(float *)((int)puVar16 + 0x1ec) = fVar3;
                                      *(float *)(puVar16 + 0x3e) = fVar1;
                                      fVar1 = fVar1 + *(float *)((int)puVar16 + 0x184);
                                      fVar2 = fVar1;
                                      if (fVar1 < *(float *)((int)puVar16 + 0xdc)) {
                                        fVar2 = *(float *)((int)puVar16 + 0xdc);
                                      }
                                      fVar1 = fVar1 + fVar7 * fVar8;
                                      if (fVar1 < fVar2) {
                                        fVar2 = fVar1;
                                      }
                                      *(undefined4 *)(puVar16 + 6) =
                                           *(undefined4 *)((int)puVar16 + 0xd4);
                                      *(undefined4 *)(puVar16 + 7) =
                                           *(undefined4 *)((int)puVar16 + 0xdc);
                                      *(float *)(puVar16 + 8) =
                                           (float)(dVar60 * dVar46) + (float)(dVar53 * dVar47) +
                                           (float)(dVar55 * dVar48) +
                                           *(float *)((int)puVar16 + 0x17c);
                                      *(float *)(puVar16 + 9) = fVar2;
                                      *(float *)((int)puVar16 + 0x44) =
                                           fVar3 + *(float *)(puVar16 + 0x30);
                                      *(undefined4 *)((int)puVar16 + 0x34) =
                                           *(undefined4 *)(puVar16 + 0x1b);
                                      puVar16[0xe] = uVar45;
                                      CollSphereVsSphere(dVar59,(double)(fVar4 * fVar8),puVar16[6],
                                                         puVar16[7],puVar16[8],puVar16[9]);
                                    }
                                    dVar59 = (double)*(float *)((int)puVar16 + 0x271c);
                                  }
                                  iVar38 = iVar38 + 1;
                                  puVar44 = puVar44 + 0x10;
                                } while (iVar38 < iVar35);
                              }
                            }
                          }
                        }
LAB_0005b94c:
                        iVar24 = iVar24 + 1;
                        iVar34 = iVar34 + 2;
                      } while (iVar24 < (int)(uint)*(byte *)((int)puVar16[0x4e5] + 2));
                    }
                    uVar45 = puVar16[0x4e9];
                    puVar16[0x4ea] = puVar16[0x4ea] + 4;
                    puVar16[0x4e9] = uVar45 + 1;
                  } while ((int)(uVar45 + 1) < (int)puVar16[0x4ec]);
                }
                uVar45 = puVar16[0x4eb];
                puVar16[0x4eb] = uVar45 + 1;
              } while ((int)(uVar45 + 1) < (int)puVar16[0x4ee]);
            }
            iVar24 = *(int *)((int)puVar16 + 0x2a4);
            if (iVar24 != 0) {
              fVar7 = *(float *)(puVar16 + 0x56);
              fVar1 = *(float *)((int)puVar16 + 0x2b4);
              fVar2 = *(float *)(puVar16 + 0x57);
              CollOutput.ip.z = fVar2 * 0.0009765625;
              CollOutput.ip.x = fVar7 * 0.0009765625;
              CollOutput.v0.x = *(float *)(puVar16 + 0x59) * 0.0009765625;
              CollOutput.v0.z = *(float *)(puVar16 + 0x5a) * 0.0009765625;
              CollOutput.ip.y = fVar1 * 0.0009765625;
              CollOutput.v0.y = *(float *)((int)puVar16 + 0x2cc) * 0.0009765625;
              CollOutput.v1.x = *(float *)((int)puVar16 + 0x2d4) * 0.0009765625;
              CollOutput.v2.y = *(float *)((int)puVar16 + 0x2e4) * 0.0009765625;
              CollOutput.v1.y = *(float *)(puVar16 + 0x5b) * 0.0009765625;
              CollOutput.v1.z = *(float *)((int)puVar16 + 0x2dc) * 0.0009765625;
              CollOutput.v2.x = *(float *)(puVar16 + 0x5c) * 0.0009765625;
              *(float *)(puVar16 + 0x56) = CollOutput.ip.x;
              CollOutput.v2.z = *(float *)(puVar16 + 0x5d) * 0.0009765625;
              *(float *)(puVar16 + 0x57) = CollOutput.ip.z;
              *(float *)((int)puVar16 + 0x2b4) = CollOutput.ip.y;
              CollOutput.normal.x = *(float *)((int)puVar16 + 700);
              dVar59 = (double)CollOutput.normal.x;
              CollOutput.normal.y = *(float *)(puVar16 + 0x58);
              dVar60 = (double)CollOutput.normal.y;
              CollOutput.normal.z = *(float *)((int)puVar16 + 0x2c4);
              dVar51 = (double)CollOutput.normal.z;
              CollOutput.pMoby = *(MobyInstance **)(puVar16 + 0x55);
              CollOutput.poly = iVar24;
              if ((double)*(float *)((int)puVar16 + 0x2ac) == (double)*(float *)(puVar16 + 0x4e3)) {
                dVar52 = (double)SQRT((float)(dVar59 * dVar59) + (float)(dVar60 * dVar60) +
                                      (float)(dVar51 * dVar51));
                if (dVar52 != (double)*(float *)(puVar16 + 0x4e3)) {
                  dVar59 = (double)(float)(dVar59 / dVar52);
                  dVar60 = (double)(float)(dVar60 / dVar52);
                  dVar51 = (double)(float)(dVar51 / dVar52);
                }
                dVar52 = (double)puVar16[0x4e2];
                *(float *)(puVar16 + 0x1f) = (float)(dVar52 * dVar59);
                *(float *)((int)puVar16 + 0xfc) = (float)(dVar52 * dVar60);
                *(float *)(puVar16 + 0x20) = (float)(dVar52 * dVar51);
              }
              else {
                fVar3 = *(float *)((int)puVar16 + 0x271c) /
                        (float)SQRT((double)*(float *)((int)puVar16 + 0x2ac));
                *(float *)(puVar16 + 0x1f) =
                     (*(float *)((int)puVar16 + 0xd4) - fVar7) * fVar3 * 0.0009765625;
                *(float *)((int)puVar16 + 0xfc) =
                     (*(float *)(puVar16 + 0x1b) - fVar1) * fVar3 * 0.0009765625;
                *(float *)(puVar16 + 0x20) =
                     (*(float *)((int)puVar16 + 0xdc) - fVar2) * fVar3 * 0.0009765625;
              }
              CollOutput.push.x = *(float *)(puVar16 + 0x1f) + *(float *)(puVar16 + 0x56);
              CollOutput.push.y = *(float *)((int)puVar16 + 0xfc) + *(float *)((int)puVar16 + 0x2b4)
              ;
              CollOutput.push.z = *(float *)(puVar16 + 0x20) + *(float *)(puVar16 + 0x57);
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  FUN_004ff98c(
              "CollSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever."
              );
  return 0;
}



//==== 0005bc20  ns=collproc  size=0x19c
// sig: undefined CollPillVsSphere(void)
// callers(1): 0005c710 collproc::CollPill
// callees(0): 

void collproc::CollPillVsSphere
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               int *param_10,int param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fStack00000030;
  float fStack00000034;
  float fStack00000040;
  float fStack00000044;
  int in_stack_00000074;
  
  fVar1 = (float)((ulonglong)param_5 >> 0x20);
  fVar5 = (float)((ulonglong)param_7 >> 0x20);
  dVar6 = (double)(fVar5 - fVar1);
  fStack00000034 = (float)param_4;
  fStack00000030 = (float)((ulonglong)param_4 >> 0x20);
  if (dVar6 < param_3) {
    param_3 = dVar6;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fStack00000040 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000044 = (float)param_6;
  fStack00000030 = fStack00000030 + 0.0;
  fStack00000034 = fStack00000034 + 0.0;
  fVar1 = (float)(param_3 + (double)fVar1);
  fVar4 = (fStack00000040 - fStack00000030) * (fStack00000040 - fStack00000030) +
          (fStack00000044 - fStack00000034) * (fStack00000044 - fStack00000034) +
          (fVar5 - fVar1) * (fVar5 - fVar1);
  if (fVar4 <= (float)(param_1 + param_2) * (float)(param_1 + param_2)) {
    fVar4 = SQRT(fVar4);
    dVar6 = (double)(fVar4 * 0.9995);
    if (dVar6 <= param_2) {
      param_2 = dVar6;
    }
    fVar4 = 1.0 / fVar4;
    fVar2 = (float)((double)((fStack00000030 - fStack00000040) * fVar4) * param_2);
    fVar3 = (float)((double)((fStack00000034 - fStack00000044) * fVar4) * param_2);
    fVar4 = (float)((double)((fVar1 - fVar5) * fVar4) * param_2);
    fStack00000040 = fStack00000040 + fVar2;
    fStack00000044 = fStack00000044 + fVar3;
    fVar5 = fVar5 + fVar4;
    fStack00000030 = fStack00000040 - fStack00000030;
    fStack00000034 = fStack00000044 - fStack00000034;
    fVar1 = fVar5 - fVar1;
    fVar1 = fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034 + fVar1 * fVar1;
    if (fVar1 <= (float)param_10[2]) {
      param_10[2] = (int)fVar1;
      param_10[1] = in_stack_00000074;
      param_10[3] = (int)fStack00000040;
      param_10[4] = (int)fStack00000044;
      param_10[5] = (int)fVar5;
      *param_10 = -param_11;
      param_10[6] = (int)fVar2;
      param_10[7] = (int)fVar3;
      param_10[8] = (int)fVar4;
    }
  }
  return;
}



//==== 0005bdbc  ns=collproc  size=0x2c
// sig: void CollMobyVertCache_Reset(void)
// callers(1): 000e0e60 main::startLevel
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void collproc::CollMobyVertCache_Reset(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 8;
  iVar2 = 0;
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar2 + -4) = 0;
    iVar2 = iVar2 + 0xc28;
  } while (iVar1 != 0);
  return;
}



//==== 0005bdf8  ns=collproc  size=0x8f4
// sig: undefined CollPillVsTri(void)
// callers(1): 0005c710 collproc::CollPill
// callees(0): 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void collproc::CollPillVsTri
               (double param_1,byte *param_2,int param_3,int param_4,int *param_5,undefined8 param_6
               ,undefined8 param_7,undefined8 param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  byte bVar3;
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
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  int in_stack_0000008c;
  float local_f8;
  float local_f4;
  float local_f0;
  
  pfVar19 = (float *)(param_3 + (uint)*param_2 * 0xc);
  pfVar18 = (float *)(param_3 + (uint)param_2[1] * 0xc);
  fVar4 = *pfVar19;
  fVar5 = pfVar19[1];
  pfVar17 = (float *)(param_3 + (uint)param_2[2] * 0xc);
  fVar6 = pfVar19[2];
  bVar3 = param_2[3];
  if ((*(uint *)(param_4 + (uint)*param_2 * 4) & *(uint *)(param_4 + (uint)param_2[1] * 4) &
      *(uint *)(param_4 + (uint)param_2[2] * 4)) != 0) {
    return;
  }
  if ((bVar3 & 0x80 & param_9) != 0) {
    return;
  }
  if ((param_9 & 0x20) != 0 && ((param_9 >> 8 ^ (uint)bVar3) & 0x1f) == 0) {
    return;
  }
  fVar7 = *pfVar18 - fVar4;
  dVar31 = (double)fVar7;
  fVar9 = pfVar18[1] - fVar5;
  dVar30 = (double)fVar9;
  fVar11 = pfVar18[2] - fVar6;
  dVar23 = (double)fVar11;
  fVar10 = pfVar17[1] - fVar5;
  dVar32 = (double)fVar10;
  fVar12 = pfVar17[2] - fVar6;
  dVar25 = (double)fVar12;
  fVar8 = *pfVar17 - fVar4;
  dVar33 = (double)fVar8;
  dVar20 = (double)(in_stack_00000070 - fVar4);
  dVar34 = (double)(in_stack_00000074 - fVar5);
  dVar29 = (double)(in_stack_00000078 - fVar6);
  dVar38 = (double)(float)(dVar29 + param_1);
  dVar35 = 0.0;
  fVar13 = (float)(dVar32 * dVar23) - (float)(dVar25 * dVar30);
  dVar22 = (double)fVar13;
  fVar14 = (float)(dVar25 * dVar31) - (float)(dVar33 * dVar23);
  dVar21 = (double)fVar14;
  fVar15 = (float)(dVar33 * dVar30) - (float)(dVar32 * dVar31);
  dVar27 = (double)fVar15;
  fVar1 = (float)(dVar20 * dVar22) + (float)(dVar34 * dVar21) + (float)(dVar29 * dVar27);
  fVar2 = (float)((double)(float)(dVar20 + 0.0) * dVar22) +
          (float)((double)(float)(dVar34 + 0.0) * dVar21) + (float)(dVar38 * dVar27);
  if ((param_9 & 0x10) == 0) {
    if (fVar1 < 0.0) {
      return;
    }
    if (fVar2 < 0.0) {
      return;
    }
  }
  if (9.999999747378752e-05 <= ABS(dVar27)) {
    if ((float)(param_1 * dVar27) == 0.0) {
      return;
    }
    if (((0.0 <= (float)(dVar29 - dVar25)) && (0.0 <= (float)(dVar29 - dVar23))) && (0.0 <= dVar29))
    {
      fVar2 = (float)(dVar22 * dVar22) + (float)(dVar21 * dVar21) + (float)(dVar27 * dVar27);
      dVar35 = (double)(fVar1 / fVar2);
      if (fVar2 == 0.0) {
        return;
      }
      dVar25 = (double)(float)(dVar21 * dVar35);
      dVar22 = (double)(float)(dVar22 * dVar35);
      dVar21 = (double)(float)(dVar27 * dVar35);
      goto LAB_0005c380;
    }
    if (((dVar38 < 0.0) && ((float)(dVar38 - dVar23) < 0.0)) && ((float)(dVar38 - dVar25) < 0.0)) {
      fVar1 = (float)(dVar22 * dVar22) + (float)(dVar21 * dVar21) + (float)(dVar27 * dVar27);
      dVar29 = (double)(fVar2 / fVar1);
      if (fVar1 == 0.0) {
        return;
      }
      dVar25 = (double)(float)(dVar21 * dVar29);
      dVar22 = (double)(float)(dVar22 * dVar29);
      dVar21 = (double)(float)(dVar27 * dVar29);
      dVar20 = (double)(float)(dVar20 + 0.0);
      dVar34 = (double)(float)(dVar34 + 0.0);
      dVar29 = dVar38;
      goto LAB_0005c380;
    }
    dVar38 = dVar25 - dVar23;
    dVar35 = (double)(float)(dVar29 - (double)(float)((double)(fVar1 / (float)(param_1 * dVar27)) *
                                                     param_1));
    if (0.0 <= (float)((double)((float)(dVar34 * dVar23) - (float)(dVar35 * dVar30)) * dVar22) +
               (float)((double)((float)(dVar35 * dVar31) - (float)(dVar20 * dVar23)) * dVar21) +
               (float)((double)((float)(dVar20 * dVar30) - (float)(dVar34 * dVar31)) * dVar27)) {
      dVar29 = 0.0;
      dVar36 = dVar32;
      dVar37 = dVar33;
      dVar24 = dVar29;
      dVar26 = dVar29;
      if ((0.0 <= (float)((double)((float)(dVar32 * dVar35) - (float)(dVar25 * dVar34)) * dVar22) +
                  (float)((double)((float)(dVar25 * dVar20) - (float)(dVar33 * dVar35)) * dVar21) +
                  (float)((double)((float)(dVar33 * dVar34) - (float)(dVar32 * dVar20)) * dVar27))
         && (dVar29 = dVar25, dVar36 = dVar30, dVar37 = dVar31, dVar24 = dVar32, dVar26 = dVar33,
            dVar25 = dVar23,
            0.0 <= (float)((double)((float)(dVar34 - dVar30) * (float)dVar38 -
                                   (float)(dVar35 - dVar23) * (float)(dVar32 - dVar30)) * dVar22) +
                   (float)((double)((float)(dVar35 - dVar23) * (float)(dVar33 - dVar31) -
                                   (float)(dVar20 - dVar31) * (float)dVar38) * dVar21) +
                   (float)((double)((float)(dVar20 - dVar31) * (float)(dVar32 - dVar30) -
                                   (float)(dVar34 - dVar30) * (float)(dVar33 - dVar31)) * dVar27)))
      goto LAB_0005c28c;
    }
    else {
      dVar36 = 0.0;
      dVar29 = dVar23;
      dVar37 = dVar36;
      dVar24 = dVar30;
      dVar26 = dVar31;
      dVar25 = dVar36;
    }
    fVar1 = (float)(dVar26 - dVar37);
    fVar2 = (float)(dVar24 - dVar36);
    dVar29 = (double)(float)(dVar29 - dVar25);
    fVar16 = fVar1 * fVar1 + fVar2 * fVar2 + (float)(dVar29 * dVar29);
    dVar20 = (double)(((float)(dVar20 - dVar37) * fVar1 + (float)(dVar34 - dVar36) * fVar2 +
                      (float)((double)(float)(dVar35 - dVar25) * dVar29)) / fVar16);
    if (fVar16 == 0.0) {
      return;
    }
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    if (1.0 <= dVar20) {
      dVar20 = 1.0;
    }
    dVar35 = (double)(float)((double)(float)(dVar20 * dVar29) + dVar25);
  }
LAB_0005c28c:
  dVar34 = (double)(in_stack_00000078 - fVar6);
  dVar20 = (double)(float)(dVar35 - dVar34);
  if (dVar20 < param_1) {
    param_1 = dVar20;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar22 = (double)fVar13;
  dVar29 = (double)(float)(param_1 + dVar34);
  dVar25 = (double)fVar14;
  dVar21 = (double)fVar15;
  dVar20 = (double)(in_stack_00000070 - fVar4);
  dVar34 = (double)(in_stack_00000074 - fVar5);
  fVar1 = (float)(dVar22 * dVar22) + (float)(dVar25 * dVar25) + (float)(dVar21 * dVar21);
  dVar35 = (double)(((float)(dVar20 * dVar22) + (float)(dVar34 * dVar25) + (float)(dVar29 * dVar21))
                   / fVar1);
  if (fVar1 == 0.0) {
    return;
  }
  dVar22 = (double)(float)(dVar22 * dVar35);
  dVar25 = (double)(float)(dVar25 * dVar35);
  dVar21 = (double)(float)(dVar21 * dVar35);
LAB_0005c380:
  dVar33 = 0.0;
  local_f8 = (float)(dVar20 - dVar22);
  dVar38 = (double)local_f8;
  local_f4 = (float)(dVar34 - dVar25);
  dVar36 = (double)local_f4;
  local_f0 = (float)(dVar29 - dVar21);
  dVar37 = (double)local_f0;
  dVar27 = (double)fVar7;
  dVar23 = (double)fVar9;
  dVar35 = (double)fVar11;
  dVar31 = (double)fVar8;
  dVar30 = (double)fVar10;
  dVar32 = (double)fVar12;
  fVar1 = (float)(dVar22 * dVar22) + (float)(dVar25 * dVar25) + (float)(dVar21 * dVar21);
  if (fVar1 <= (float)param_5[2]) {
    dVar25 = dVar33;
    dVar21 = dVar33;
    dVar22 = dVar33;
    dVar24 = dVar35;
    dVar26 = dVar23;
    dVar28 = dVar27;
    if (((((float)(dVar36 * dVar35) - (float)(dVar37 * dVar23)) * fVar13 +
          ((float)(dVar37 * dVar27) - (float)(dVar38 * dVar35)) * fVar14 +
          ((float)(dVar38 * dVar23) - (float)(dVar36 * dVar27)) * fVar15 < 0.0) ||
        (dVar25 = dVar32, dVar21 = dVar30, dVar22 = dVar31, dVar24 = dVar33, dVar26 = dVar33,
        dVar28 = dVar33,
        ((float)(dVar30 * dVar37) - (float)(dVar32 * dVar36)) * fVar13 +
        ((float)(dVar32 * dVar38) - (float)(dVar31 * dVar37)) * fVar14 +
        ((float)(dVar31 * dVar36) - (float)(dVar30 * dVar38)) * fVar15 < 0.0)) ||
       (dVar25 = dVar35, dVar21 = dVar23, dVar22 = dVar27, dVar24 = dVar32, dVar26 = dVar30,
       dVar28 = dVar31,
       ((float)(dVar36 - dVar23) * (float)(dVar32 - dVar35) -
       (float)(dVar37 - dVar35) * (float)(dVar30 - dVar23)) * fVar13 +
       ((float)(dVar37 - dVar35) * (float)(dVar31 - dVar27) -
       (float)(dVar38 - dVar27) * (float)(dVar32 - dVar35)) * fVar14 +
       ((float)(dVar38 - dVar27) * (float)(dVar30 - dVar23) -
       (float)(dVar36 - dVar23) * (float)(dVar31 - dVar27)) * fVar15 < 0.0)) {
      dVar30 = (double)(float)(dVar28 - dVar22);
      dVar23 = (double)(float)(dVar26 - dVar21);
      dVar27 = (double)(float)(dVar24 - dVar25);
      dVar35 = (double)(((float)((double)(float)(dVar38 - dVar22) * dVar30) +
                         (float)((double)(float)(dVar36 - dVar21) * dVar23) +
                        (float)((double)(float)(dVar37 - dVar25) * dVar27)) /
                       ((float)(dVar30 * dVar30) + (float)(dVar23 * dVar23) +
                       (float)(dVar27 * dVar27)));
      if (dVar35 <= 0.0) {
        dVar35 = dVar33;
      }
      if (1.0 <= dVar35) {
        dVar35 = 1.0;
      }
      local_f8 = (float)((double)(float)(dVar35 * dVar30) + dVar22);
      local_f4 = (float)((double)(float)(dVar35 * dVar23) + dVar21);
      local_f0 = (float)((double)(float)(dVar35 * dVar27) + dVar25);
      fVar1 = (float)((double)local_f8 - dVar20) * (float)((double)local_f8 - dVar20) +
              (float)((double)local_f4 - dVar34) * (float)((double)local_f4 - dVar34) +
              (float)((double)local_f0 - dVar29) * (float)((double)local_f0 - dVar29);
      if ((float)param_5[2] < fVar1) {
        return;
      }
    }
    fStack0000005c = (float)param_7;
    fStack00000058 = (float)((ulonglong)param_7 >> 0x20);
    fVar4 = fVar4 + fStack00000058;
    fVar5 = fVar5 + fStack0000005c;
    *param_5 = bVar3 + 0x1000;
    fVar6 = fVar6 + (float)((ulonglong)param_8 >> 0x20);
    param_5[1] = in_stack_0000008c;
    param_5[2] = (int)(fVar1 * 0.9995);
    param_5[3] = (int)(local_f8 + fVar4);
    param_5[4] = (int)(local_f4 + fVar5);
    param_5[5] = (int)(local_f0 + fVar6);
    param_5[6] = (int)fVar13;
    param_5[7] = (int)fVar14;
    param_5[8] = (int)fVar15;
    param_5[9] = (int)fVar4;
    param_5[10] = (int)fVar5;
    param_5[0xb] = (int)fVar6;
    param_5[0xc] = (int)(fVar7 + fVar4);
    param_5[0xd] = (int)(fVar9 + fVar5);
    param_5[0xe] = (int)(fVar11 + fVar6);
    param_5[0xf] = (int)(fVar8 + fVar4);
    param_5[0x10] = (int)(fVar10 + fVar5);
    param_5[0x11] = (int)(fVar12 + fVar6);
  }
  return;
}



//==== 0005c710  ns=collproc  size=0x1e7c
// sig: undefined CollPill(void)
// callers(5): 000824b0 hero::Hero_CheckLedgeGrab; 000888c8 hero::Hero_ResolveCollision; 00102168 mobyutil::MB_UpdateLegAnimState; 0010dc70 mobyutil::MB_CheckCollPill; 0017a230 walk::walk_Update
// callees(5): 000564d0 collproc::CollMoby_TransformVerts; 00056b24 collproc::CollGrid_GetCell; 0005bc20 collproc::CollPillVsSphere; 0005bdf8 collproc::CollPillVsTri; 000f595c mobyfunc::Moby_BuildJointMatrices

/* [collision] Vertical capsule (pill) vs env (x1024) and moby collision. Callers:
   Hero_ResolveCollision, Hero_CheckLedgeGrab, MB_CheckCollPill, walk_Update. */

undefined8
collproc::CollPill(double param_1,double param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,ulonglong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
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
  short sVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  longlong lVar30;
  undefined4 *puVar31;
  CollCell *pCVar32;
  short *psVar34;
  ushort uVar36;
  float *pfVar35;
  float *pfVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  int iVar40;
  ulonglong unaff_r16;
  int iVar41;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar42;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  undefined *puVar43;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar44;
  int iVar45;
  MobyInstance *pMVar46;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar47;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar48;
  ulonglong unaff_r28;
  uint uVar49;
  ulonglong unaff_r29;
  float *pfVar50;
  ulonglong unaff_r30;
  ushort *puVar51;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  ulonglong in_f14;
  double dVar60;
  ulonglong in_f15;
  double dVar61;
  ulonglong in_f16;
  double dVar62;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar63;
  ulonglong in_f24;
  double dVar64;
  ulonglong in_f25;
  double dVar65;
  double dVar66;
  ulonglong in_f26;
  double dVar67;
  ulonglong in_f27;
  double dVar68;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar69;
  ulonglong in_f31;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar33;
  
  uVar28 = ZEXT48(&stack0x00000000);
  puVar23 = (ulonglong *)(uVar28 - 0x28d0);
  *puVar23 = uVar28;
  puVar23[0x51c] = in_LR;
  puVar23[0x508] = in_f14;
  puVar23[0x509] = in_f15;
  puVar23[0x50a] = in_f16;
  puVar23[0x50b] = in_f17;
  puVar23[0x50c] = in_f18;
  puVar23[0x50d] = in_f19;
  puVar23[0x50e] = in_f20;
  puVar23[0x50f] = in_f21;
  puVar23[0x510] = in_f22;
  puVar23[0x511] = in_f23;
  puVar23[0x512] = in_f24;
  puVar23[0x513] = in_f25;
  puVar23[0x514] = in_f26;
  puVar23[0x515] = in_f27;
  puVar23[0x516] = in_f28;
  puVar23[0x517] = in_f29;
  puVar23[0x518] = in_f30;
  puVar23[0x519] = in_f31;
  fVar6 = *param_3;
  dVar58 = (double)param_3[1];
  dVar59 = (double)param_3[2];
  puVar23[0x4f9] = unaff_r17;
  fVar2 = (float)(dVar59 - param_1);
  dVar68 = (double)fVar6 - param_1;
  fVar3 = (float)(dVar58 - param_1);
  *(float *)((int)puVar23 + 0xfc) = (float)(dVar58 + param_1);
  *(float *)(puVar23 + 0x20) = (float)(dVar59 + param_1);
  dVar65 = 0.0;
  dVar67 = (double)(float)(dVar59 + param_1) + param_2;
  fVar1 = (float)dVar67;
  puVar23[0x4e6] = param_7;
  fVar6 = (float)((double)fVar6 + param_1) + 0.0;
  fVar7 = (float)(dVar58 + param_1) + 0.0;
  *(float *)(puVar23 + 0x17) = fVar1;
  *(float *)((int)puVar23 + 0xc4) = fVar2;
  *(float *)((int)puVar23 + 0xb4) = fVar7;
  *(float *)(puVar23 + 0x18) = fVar3;
  dVar62 = 1024.0;
  dVar61 = (double)(float)(param_2 * 1024.0);
  dVar60 = (double)(float)(param_1 * 1024.0);
  *(float *)((int)puVar23 + 0xcc) = (float)(dVar58 * 1024.0);
  puVar23[0x507] = unaff_r31;
  puVar23[0x506] = unaff_r30;
  puVar23[0x505] = unaff_r29;
  puVar23[0x504] = unaff_r28;
  puVar23[0x503] = unaff_r27;
  puVar23[0x502] = unaff_r26;
  puVar23[0x501] = unaff_r25;
  puVar23[0x500] = unaff_r24;
  puVar23[0x4ff] = unaff_r23;
  puVar23[0x4fe] = unaff_r22;
  puVar23[0x4fd] = unaff_r21;
  puVar23[0x4fc] = unaff_r20;
  puVar23[0x4fb] = unaff_r19;
  puVar23[0x4fa] = unaff_r18;
  puVar23[0x4f8] = unaff_r16;
  puVar23[0x4f7] = unaff_r15;
  puVar23[0x4f6] = unaff_r14;
  *(float *)(puVar23 + 0x1a) = (float)(dVar59 * 1024.0);
  if ((fVar3 < 0.0 || (float)dVar68 < 0.0) || (fVar2 < 0.0)) {
    uVar29 = 0;
  }
  else if (((1024.0 < fVar6) || (1024.0 < fVar7)) || (1024.0 < fVar1)) {
    uVar29 = 0;
  }
  else if (CollOutput.collCount < 0) {
    uVar29 = 0;
  }
  else {
    CollOutput.collCount = CollOutput.collCount + 1;
    puVar23[0x4e8] = ZEXT48(&CollOutput);
    puVar23[0x4f0] = (longlong)(int)dVar68;
    puVar23[0x4f0] = (longlong)(int)(dVar58 - param_1);
    iVar41 = *(int *)((int)puVar23 + 0x2784);
    puVar23[0x4f0] = (longlong)(int)(dVar59 - param_1);
    puVar23[0x4f0] = (longlong)(int)fVar6;
    puVar23[0x4f0] = (longlong)(int)fVar7;
    iVar40 = *(int *)((int)puVar23 + 0x2784);
    puVar23[0x4f0] = (longlong)(int)dVar67;
    if (0.0 < dVar61) {
      if (0.0 < dVar60) {
        iVar45 = *(int *)((int)puVar23 + 0x2784) >> 2;
        *(int *)(puVar23 + 0x4e2) = iVar45;
        *(int *)((int)puVar23 + 0x2714) = iVar45;
        iVar42 = iVar41 >> 2;
        *(int *)(puVar23 + 0x4e3) = iVar45;
        iVar48 = *(int *)((int)puVar23 + 0x2784) >> 2;
        *(int *)((int)puVar23 + 0x271c) = iVar45;
        *(float *)(puVar23 + 0x1b) = fVar3 * 1024.0;
        *(float *)((int)puVar23 + 0xdc) = fVar2 * 1024.0;
        *(float *)((int)puVar23 + 0xe4) = fVar7 * 1024.0;
        *(float *)(puVar23 + 0x1d) = fVar1 * 1024.0;
        auVar21 = auRam00000000;
        *(int *)(puVar23 + 0x4e2) = iVar42;
        auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
        *(int *)((int)puVar23 + 0x2714) = iVar42;
        *(int *)(puVar23 + 0x4e3) = iVar42;
        *(int *)((int)puVar23 + 0x271c) = iVar42;
        auVar22 = auRam00000000;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(int *)(puVar23 + 0x4e2) = iVar48;
        *(int *)((int)puVar23 + 0x2714) = iVar48;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(int *)(puVar23 + 0x4e3) = iVar48;
        *(int *)((int)puVar23 + 0x271c) = iVar48;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar72 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        lVar30 = uVar28 - 0x27cc;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        iVar33 = *(int *)((int)puVar23 + 0x2784) >> 2;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        iVar18 = iVar40 >> 2;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        iVar19 = *(int *)((int)puVar23 + 0x2784) >> 2;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,lVar30);
        *(undefined4 *)lVar30 = uVar20;
        auVar21 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        storeVectorElementWordIndexed
                  (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,4,lVar30);
        storeVectorElementWordIndexed
                  (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,lVar30);
        *(int *)(puVar23 + 0x4e2) = iVar33;
        *(int *)((int)puVar23 + 0x2714) = iVar33;
        *(int *)(puVar23 + 0x4e3) = iVar33;
        *(int *)((int)puVar23 + 0x271c) = iVar33;
        auVar21 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        *(int *)(puVar23 + 0x4e2) = iVar18;
        *(int *)((int)puVar23 + 0x2714) = iVar18;
        *(int *)(puVar23 + 0x4e3) = iVar18;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(int *)((int)puVar23 + 0x271c) = iVar18;
        auVar22 = auRam00000000;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(int *)(puVar23 + 0x4e2) = iVar19;
        *(int *)((int)puVar23 + 0x2714) = iVar19;
        *(int *)(puVar23 + 0x4e3) = iVar19;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(int *)((int)puVar23 + 0x271c) = iVar19;
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar72 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        lVar30 = uVar28 - 0x27c0;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        *(undefined4 *)(puVar23 + 0x4e7) = 0;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        puVar23[0x4ef] = (longlong)iVar45;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        puVar23[0x4eb] = (longlong)iVar33;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,lVar30);
        *(undefined4 *)lVar30 = uVar20;
        auVar21 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                  (undefined1  [16])0xffffffff;
        storeVectorElementWordIndexed
                  (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,4,lVar30);
        storeVectorElementWordIndexed
                  (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,lVar30);
        *(undefined4 *)(puVar23 + 0x59) = 0;
        *(undefined4 *)((int)puVar23 + 0x2cc) = 0;
        *(undefined4 *)(puVar23 + 0x5a) = 0;
        *(undefined4 *)((int)puVar23 + 0x2d4) = 0;
        *(undefined4 *)(puVar23 + 0x5b) = 0;
        *(undefined4 *)((int)puVar23 + 0x2dc) = 0;
        *(undefined4 *)(puVar23 + 0x5c) = 0;
        *(undefined4 *)((int)puVar23 + 0x2e4) = 0;
        *(undefined4 *)(puVar23 + 0x5d) = 0;
        *(undefined4 *)((int)puVar23 + 0x2ec) = 0;
        *(undefined4 *)(puVar23 + 0x5e) = 0;
        *(undefined4 *)((int)puVar23 + 0x2f4) = 0;
        *(undefined4 *)(puVar23 + 0x5f) = 0;
        *(undefined4 *)((int)puVar23 + 0x2fc) = 0;
        *(undefined4 *)(puVar23 + 0x60) = 0;
        *(undefined4 *)((int)puVar23 + 700) = 0;
        *(undefined4 *)(puVar23 + 0x58) = 0;
        *(undefined4 *)((int)puVar23 + 0x273c) = 0x3f800000;
        *(float *)((int)puVar23 + 0x2c4) = (float)(dVar60 * dVar60) * 0.9995;
        if ((param_6 & 1) == 0) {
          iVar45 = (int)((puVar23[0x4ef] & 0xffffffff) << 0xc);
          iVar33 = iVar42 << 0xc;
          iVar27 = iVar48 << 0xc;
          *(int *)(puVar23 + 0x4e2) = iVar45;
          *(int *)((int)puVar23 + 0x2714) = iVar45;
          *(int *)(puVar23 + 0x4e3) = iVar45;
          *(int *)((int)puVar23 + 0x271c) = iVar45;
          auVar21 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          *(int *)(puVar23 + 0x4e2) = iVar33;
          *(int *)((int)puVar23 + 0x2714) = iVar33;
          *(int *)(puVar23 + 0x4e3) = iVar33;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          *(int *)((int)puVar23 + 0x271c) = iVar33;
          auVar22 = auRam00000000;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          *(int *)(puVar23 + 0x4e2) = iVar27;
          *(int *)((int)puVar23 + 0x2714) = iVar27;
          *(int *)(puVar23 + 0x4e3) = iVar27;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          *(int *)((int)puVar23 + 0x271c) = iVar27;
          auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar72 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          lVar30 = uVar28 - 0x27a8;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          uVar20 = storeVectorElementWordIndexed
                             (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,lVar30
                             );
          *(undefined4 *)lVar30 = uVar20;
          auVar21 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          storeVectorElementWordIndexed
                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,4,lVar30);
          storeVectorElementWordIndexed
                    (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,lVar30);
          puVar23[0x4f0] = (longlong)iVar45;
          uVar52 = puVar23[0x4f0];
          puVar23[0x4f0] = (longlong)iVar33;
          fVar1 = (float)(longlong)uVar52;
          lVar30 = uVar28 - 0x11cc;
          *(float *)(puVar23 + 0x4e2) = fVar1;
          *(float *)((int)puVar23 + 0x2714) = fVar1;
          *(float *)(puVar23 + 0x4e3) = fVar1;
          *(float *)((int)puVar23 + 0x271c) = fVar1;
          uVar52 = puVar23[0x4f0];
          puVar23[0x4f0] = (longlong)iVar27;
          fVar1 = (float)(longlong)uVar52;
          auVar21 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          *(float *)(puVar23 + 0x4e2) = fVar1;
          *(float *)((int)puVar23 + 0x2714) = fVar1;
          *(float *)(puVar23 + 0x4e3) = fVar1;
          *(float *)((int)puVar23 + 0x271c) = fVar1;
          fVar1 = (float)(longlong)puVar23[0x4f0];
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          *(float *)(puVar23 + 0x4e2) = fVar1;
          *(float *)((int)puVar23 + 0x2714) = fVar1;
          *(float *)(puVar23 + 0x4e3) = fVar1;
          *(float *)((int)puVar23 + 0x271c) = fVar1;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          iVar45 = 0x100;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar71 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          auVar21 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar72 | auVar72 << 0x20 | auVar72 << 0x40 | auVar72 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar22 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar72 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          auVar21 = (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar21 = (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          storeVectorElementWordIndexed
                    (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,uVar28 - 0x27b4
                    );
          do {
            puVar31 = (undefined4 *)lVar30;
            *puVar31 = 0;
            iVar45 = iVar45 + -1;
            puVar31[1] = 0;
            puVar31[2] = 0;
            puVar31[3] = 0;
            lVar30 = lVar30 + 0x10;
          } while (iVar45 != 0);
          uVar52 = uVar28 - 0x11cc;
          while( true ) {
            auVar21 = auVar72 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar44 = puVar23[0x4eb];
            uVar20 = storeVectorElementWordIndexed
                               (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,
                                uVar28 - 0x27b0);
            *(undefined4 *)(uVar28 - 0x27b0) = uVar20;
            iVar45 = iVar42;
            while( true ) {
              auVar21 = auVar71 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar47 = puVar23[0x4ef];
              uVar20 = storeVectorElementWordIndexed
                                 (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,
                                  uVar28 - 0x27b4);
              *(undefined4 *)(uVar28 - 0x27b4) = uVar20;
              while( true ) {
                dVar70 = (double)*(float *)((int)puVar23 + 0x11c);
                dVar69 = (double)*(float *)(puVar23 + 0x24);
                dVar59 = (double)*(float *)((int)puVar23 + 0x124);
                dVar58 = (double)(float)(dVar70 + 2048.0);
                dVar68 = (double)(float)(dVar69 + 2048.0);
                dVar67 = (double)(float)(dVar59 + 2048.0);
                *(float *)(puVar23 + 0x27) = (float)(dVar69 + 2048.0);
                *(float *)((int)puVar23 + 0x13c) = (float)(dVar59 + 2048.0);
                iVar33 = (int)uVar47;
                pCVar32 = CollGrid_GetCell(iVar33,iVar45,iVar48);
                *(CollCell **)(puVar23 + 0x14) = pCVar32;
                if (pCVar32 != (CollCell *)0x0) {
                  fVar1 = *(float *)(puVar23 + 0x14);
                  pfVar50 = (float *)uVar52;
                  *pfVar50 = (float)dVar58;
                  pfVar50[1] = (float)dVar68;
                  pfVar50[2] = (float)dVar67;
                  pfVar50[3] = fVar1;
                  uVar52 = uVar52 + 0x10 & 0xffffffff;
                }
                if ((int)uVar44 == iVar33) break;
                uVar47 = (ulonglong)(iVar33 + 1);
                *(float *)(puVar23 + 0x24) = (float)(dVar69 + dVar65);
                *(float *)((int)puVar23 + 0x124) = (float)(dVar59 + dVar65);
                *(float *)((int)puVar23 + 0x11c) = (float)(dVar70 + 4096.0);
              }
              if (iVar18 == iVar45) break;
              iVar45 = iVar45 + 1;
              *(float *)((int)puVar23 + 0x124) = (float)(dVar59 + dVar65);
              *(float *)(puVar23 + 0x24) = (float)(dVar69 + 4096.0);
            }
            if (iVar19 == iVar48) break;
            iVar48 = iVar48 + 1;
            *(float *)((int)puVar23 + 0x124) = (float)(dVar59 + 4096.0);
          }
          *(float *)((int)uVar52 + 0xc) = (float)dVar65;
          *(float *)(puVar23 + 0x4e7) = (float)dVar65;
          lVar30 = uVar28 - 0x11cc;
          while( true ) {
            pfVar50 = (float *)lVar30;
            psVar34 = (short *)pfVar50[3];
            *(float *)((int)puVar23 + 0xa4) = pfVar50[3];
            if (psVar34 == (short *)0x0) break;
            bVar4 = *(byte *)(psVar34 + 1);
            uVar49 = (uint)bVar4;
            if (bVar4 != 0) {
              fVar1 = *pfVar50;
              fVar2 = pfVar50[1];
              fVar3 = pfVar50[2];
              *(float *)((int)puVar23 + 0x144) = fVar2;
              *(float *)(puVar23 + 0x29) = fVar3;
              iVar45 = 0;
              pfVar35 = (float *)(psVar34 + 2);
              *(float *)(puVar23 + 0x2a) = *(float *)((int)puVar23 + 0xcc) - fVar2;
              *(float *)((int)puVar23 + 0x154) = *(float *)(puVar23 + 0x1a) - fVar3;
              fVar6 = *(float *)((int)puVar23 + 0xd4);
              fVar7 = *(float *)(puVar23 + 0x1b);
              fVar11 = *(float *)((int)puVar23 + 0xdc) - fVar3;
              *(float *)((int)puVar23 + 0x15c) = fVar7 - fVar2;
              *(float *)(puVar23 + 0x2c) = fVar11;
              fVar8 = *(float *)(puVar23 + 0x1c);
              fVar9 = *(float *)(puVar23 + 0x1d);
              fVar10 = *(float *)((int)puVar23 + 0xe4) - fVar2;
              *(float *)(puVar23 + 0x2d) = fVar10;
              *(float *)((int)puVar23 + 0x16c) = fVar9 - fVar3;
              lVar39 = uVar28 - 0x28d0;
              pfVar50 = pfVar35;
              if (bVar4 != 0) {
                do {
                  iVar45 = iVar45 + 1;
                  *(uint *)((int)lVar39 + 0x304) =
                       (uint)(fVar8 - fVar1 < *pfVar50) << 1 | (uint)(*pfVar50 < fVar6 - fVar1) |
                       (uint)(fVar10 < pfVar50[1]) << 9 | (uint)(pfVar50[1] < fVar7 - fVar2) << 8 |
                       (uint)(fVar9 - fVar3 < pfVar50[2]) << 0x11 |
                       (uint)(pfVar50[2] < fVar11) << 0x10;
                  lVar39 = lVar39 + 4;
                  pfVar50 = pfVar50 + 3;
                } while (iVar45 < (int)(uint)bVar4);
              }
              sVar17 = *psVar34;
              iVar45 = 0;
              pfVar37 = pfVar35 + uVar49 * 3;
              pfVar50 = pfVar37;
              if (0 < sVar17) {
                do {
                  *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x28);
                  *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x29);
                  uVar52 = ZEXT48(CollOutput.grid);
                  *(undefined4 *)((int)puVar23 + 0x5c) = *(undefined4 *)((int)puVar23 + 0x144);
                  *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)((int)puVar23 + 0x14c);
                  *(undefined4 *)((int)puVar23 + 0x74) = *(undefined4 *)(puVar23 + 0x2a);
                  *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)((int)puVar23 + 0x154);
                  puVar23[0x11] = uVar52;
                  CollPillVsTri(dVar61,pfVar50,pfVar35,uVar28 - 0x25cc,uVar28 - 0x2614,uVar49,
                                puVar23[0xb],puVar23[0xc],param_6);
                  iVar45 = iVar45 + 1;
                  pfVar50 = pfVar50 + 1;
                } while (iVar45 < sVar17);
              }
              bVar4 = *(byte *)((int)psVar34 + 3);
              if (bVar4 != 0) {
                uVar52 = 0;
                if (bVar4 != 0) {
                  do {
                    *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x28);
                    *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x29);
                    *(undefined4 *)(puVar23 + 0x4e1) =
                         *(undefined4 *)((int)pfVar37 + (int)((uVar52 & 0xffffffff) << 2));
                    *(undefined1 *)((int)puVar23 + 0x2709) = *(undefined1 *)((int)puVar23 + 0x270a);
                    uVar44 = ZEXT48(CollOutput.grid);
                    *(undefined1 *)((int)puVar23 + 0x270a) =
                         *(undefined1 *)((int)pfVar37 + (int)uVar52 + (int)((longlong)sVar17 << 2));
                    *(undefined4 *)((int)puVar23 + 0x5c) = *(undefined4 *)((int)puVar23 + 0x144);
                    *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)((int)puVar23 + 0x14c);
                    *(undefined4 *)((int)puVar23 + 0x74) = *(undefined4 *)(puVar23 + 0x2a);
                    *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)((int)puVar23 + 0x154);
                    puVar23[0x11] = uVar44;
                    CollPillVsTri(dVar61,uVar28 - 0x1c8,pfVar35,uVar28 - 0x25cc,uVar28 - 0x2614,
                                  uVar49,puVar23[0xb],puVar23[0xc],param_6);
                    iVar45 = (int)uVar52 + 1;
                    uVar52 = (ulonglong)iVar45;
                  } while (iVar45 < (int)(uint)bVar4);
                }
              }
            }
            lVar30 = lVar30 + 0x10;
          }
        }
        iVar41 = iVar41 >> 4;
        uVar52 = (longlong)(iVar40 >> 4) + 1;
        *(undefined4 *)(puVar23 + 0x58) = 0;
        puVar23[0x4e5] = uVar52;
        puVar23[0x4eb] = (longlong)((int)puVar23[0x4eb] >> 2);
        puVar23[0x4ef] = (longlong)((int)puVar23[0x4ef] >> 2);
        puVar23[0x4ee] = (longlong)iVar41;
        if (iVar41 < (int)uVar52) {
          do {
            puVar23[0x4ec] = puVar23[0x4ef];
            puVar23[0x4e4] = puVar23[0x4eb] + 1;
            if ((int)puVar23[0x4ef] < (int)(puVar23[0x4eb] + 1)) {
              puVar23[0x4ed] = puVar23[0x4ec] << 2;
              do {
                uVar52 = ZEXT48(g_MobyGrid) + puVar23[0x4ed] + (puVar23[0x4ee] & 0xffffff) * 0x100;
                iVar41 = 0;
                psVar34 = (short *)uVar52;
                sVar17 = *psVar34;
                puVar23[0x4e9] = uVar52 & 0xffffffff;
                cVar5 = *(char *)(psVar34 + 1);
                puVar23[0x4ea] = ZEXT48(&g_MobyGridLists) + (longlong)sVar17 * 0x20 & 0xffffffff;
                if (cVar5 != '\0') {
                  iVar40 = 0;
                  do {
                    pMVar46 = MobyInstance + *(short *)((int)puVar23[0x4ea] + iVar40);
                    uVar52 = ZEXT48(pMVar46);
                    if (((pMVar46 != (MobyInstance *)puVar23[0x4e6]) &&
                        (puVar51 = pMVar46->collision, puVar51 != (ushort *)0x0)) &&
                       (iVar45 = *(int *)((int)puVar23[0x4e8] + 0x10),
                       pMVar46->collQueryStamp != iVar45)) {
                      fVar1 = (float)(dVar60 + (double)(pMVar46->bSphere).rad);
                      fVar6 = (pMVar46->bSphere).x - *(float *)(puVar23 + 0x19);
                      fVar7 = (pMVar46->bSphere).y - *(float *)((int)puVar23 + 0xcc);
                      fVar2 = (pMVar46->bSphere).z;
                      fVar3 = *(float *)(puVar23 + 0x1a);
                      dVar67 = (double)*(float *)(puVar23 + 0x4e7);
                      *(float *)(puVar23 + 0x30) = fVar7;
                      *(float *)((int)puVar23 + 0x184) = fVar2 - fVar3;
                      if ((dVar67 < (double)((fVar2 + fVar1) - fVar3) &&
                           fVar6 * fVar6 + fVar7 * fVar7 <= fVar1 * fVar1) &&
                         ((double)((fVar1 - fVar2) - fVar3) < dVar67)) {
                        uVar49 = *(uint *)(puVar51 + 2);
                        iVar42 = ((int)uVar49 >> 5) +
                                 (uint)((int)uVar49 < 0 && (uVar49 & 0x1f) != 0);
                        if ((param_6 & 4) == 0) {
                          uVar36 = puVar51[1];
                        }
                        else {
                          uVar36 = *puVar51;
                        }
                        pMVar46->collQueryStamp = iVar45;
                        puVar43 = (undefined *)0x0;
                        uVar49 = *(uint *)(pMVar46->collision + 6);
                        if (uVar36 != 0) {
                          if (uVar49 == ((param_6 & 2) == 0)) goto LAB_0005e2dc;
                          uVar44 = 0;
                          do {
                            iVar45 = pMVar46->field71_0xa8;
                            if (*(int *)(&MobyClassRef + (int)((uVar44 & 0xffffffff) << 3)) ==
                                iVar45) {
                              puVar43 = &g_CollMobyJointCache + (int)uVar44 * 0x7fc;
                              goto LAB_0005d92c;
                            }
                            uVar44 = uVar44 + 1;
                          } while ((int)uVar44 < 8);
                          iVar33 = (int)puVar23[0x4e8];
                          iVar48 = *(int *)(iVar33 + 0xc);
                          uVar38 = iVar48 + 1;
                          puVar43 = &g_CollMobyJointCache + iVar48 * 0x7fc;
                          *(uint *)(iVar33 + 0xc) =
                               uVar38 + (((int)uVar38 >> 3) +
                                        (uint)((int)uVar38 < 0 && (uVar38 & 7) != 0)) * -8;
                          *(int *)(&MobyClassRef + iVar48 * 8) = iVar45;
                          *(undefined4 *)(iVar48 * 8 + 0xa109c4) = *(undefined4 *)(iVar33 + 0x10);
                          mobyfunc::Moby_BuildJointMatrices(uVar52,uVar36,puVar43);
                        }
LAB_0005d92c:
                        fVar1 = (float)((double)(pMVar46->pos).y * dVar62);
                        dVar68 = (double)(pMVar46->transform).v0.x;
                        fVar2 = (float)((double)(pMVar46->pos).z * dVar62);
                        dVar58 = (double)(pMVar46->transform).v0.y;
                        dVar59 = (double)(pMVar46->transform).v0.z;
                        dVar65 = (double)(pMVar46->transform).v1.x;
                        dVar69 = (double)(pMVar46->transform).v1.y;
                        dVar70 = (double)(pMVar46->transform).v1.z;
                        dVar63 = (double)(pMVar46->transform).v2.x;
                        dVar64 = (double)(pMVar46->transform).v2.y;
                        dVar66 = (double)(pMVar46->transform).v2.z;
                        *(float *)((int)puVar23 + 0x174) = fVar1;
                        *(float *)(puVar23 + 0x2f) = fVar2;
                        if (uVar49 != 0) {
                          fVar1 = *(float *)((int)puVar23 + 0xcc) - fVar1;
                          dVar53 = (double)fVar1;
                          fVar2 = *(float *)(puVar23 + 0x1a) - fVar2;
                          dVar54 = (double)fVar2;
                          uVar47 = uVar28 - 0x1dcc;
                          iVar45 = 0x100;
                          fVar3 = (float)(dVar53 + dVar60);
                          fVar6 = (float)(dVar54 + dVar60);
                          *(float *)((int)puVar23 + 0x18c) = fVar1;
                          *(float *)(puVar23 + 0x32) = fVar2;
                          *(float *)(puVar23 + 0x33) = (float)(dVar53 - dVar60);
                          *(float *)((int)puVar23 + 0x19c) = (float)(dVar54 - dVar60);
                          *(float *)(puVar23 + 0x36) = fVar3;
                          *(float *)((int)puVar23 + 0x1b4) = fVar6;
                          *(float *)((int)puVar23 + 0x1a4) = (float)((double)fVar3 + dVar67);
                          *(float *)(puVar23 + 0x35) = (float)((double)fVar6 + dVar61);
                          uVar44 = uVar47;
                          do {
                            iVar45 = iVar45 + -1;
                            pfVar50 = (float *)uVar44;
                            *pfVar50 = (float)dVar67;
                            pfVar50[1] = (float)dVar67;
                            pfVar50[2] = (float)dVar67;
                            uVar44 = uVar44 + 0xc;
                          } while (iVar45 != 0);
                          dVar67 = (double)pMVar46->scale;
                          *(float *)(puVar23 + 0x4b) = (float)(dVar58 * dVar67);
                          *(float *)((int)puVar23 + 0x25c) = (float)(dVar59 * dVar67);
                          *(float *)((int)puVar23 + 0x264) = (float)(dVar69 * dVar67);
                          *(float *)(puVar23 + 0x4d) = (float)(dVar70 * dVar67);
                          *(float *)(puVar23 + 0x4e) = (float)(dVar64 * dVar67);
                          *(float *)((int)puVar23 + 0x274) = (float)(dVar66 * dVar67);
                          *(float *)((int)puVar23 + 0x29c) = (float)(dVar58 * dVar67);
                          *(float *)(puVar23 + 0x54) = (float)(dVar59 * dVar67);
                          *(float *)(puVar23 + 0x55) = (float)(dVar69 * dVar67);
                          *(float *)((int)puVar23 + 0x2ac) = (float)(dVar70 * dVar67);
                          *(float *)((int)puVar23 + 0x2b4) = (float)(dVar64 * dVar67);
                          *(float *)(puVar23 + 0x57) = (float)(dVar66 * dVar67);
                          *(undefined4 *)(puVar23 + 7) = *(undefined4 *)((int)puVar23 + 0x194);
                          *(undefined4 *)(puVar23 + 8) = *(undefined4 *)((int)puVar23 + 0x19c);
                          *(undefined4 *)(puVar23 + 9) = *(undefined4 *)(puVar23 + 0x34);
                          *(undefined4 *)(puVar23 + 10) = *(undefined4 *)(puVar23 + 0x35);
                          *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x53);
                          *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x54);
                          *(undefined4 *)(puVar23 + 0xd) = *(undefined4 *)(puVar23 + 0x55);
                          *(undefined4 *)((int)puVar23 + 0x3c) = *(undefined4 *)(puVar23 + 0x33);
                          *(undefined4 *)((int)puVar23 + 0x4c) =
                               *(undefined4 *)((int)puVar23 + 0x1a4);
                          *(undefined4 *)((int)puVar23 + 0x5c) =
                               *(undefined4 *)((int)puVar23 + 0x29c);
                          *(undefined4 *)((int)puVar23 + 100) =
                               *(undefined4 *)((int)puVar23 + 0x2a4);
                          *(undefined4 *)((int)puVar23 + 0x6c) =
                               *(undefined4 *)((int)puVar23 + 0x2ac);
                          *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)(puVar23 + 0x56);
                          *(undefined4 *)((int)puVar23 + 0x74) =
                               *(undefined4 *)((int)puVar23 + 0x2b4);
                          *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)(puVar23 + 0x57);
                          puVar23[0x10] = uVar47;
                          puVar23[0x11] = uVar28 - 0x21cc;
                          puVar23[0x12] = uVar28 - 0x2828;
                          puVar23[0x13] = uVar28 - 0x2824;
                          CollMoby_TransformVerts
                                    (uVar52,puVar23[7],puVar23[8],puVar23[9],puVar23[10],
                                     puVar23[0xb],puVar23[0xc],puVar23[0xd]);
                          iVar45 = 0;
                          if (0 < *(int *)((int)puVar23 + 0xac)) {
                            iVar48 = 0;
                            do {
                              *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x2e);
                              *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x2f);
                              *(undefined4 *)((int)puVar23 + 0x5c) =
                                   *(undefined4 *)((int)puVar23 + 0x174);
                              *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)(puVar23 + 0x31);
                              *(undefined4 *)((int)puVar23 + 0x74) =
                                   *(undefined4 *)((int)puVar23 + 0x18c);
                              *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)(puVar23 + 0x32);
                              puVar23[0x11] = uVar52;
                              CollPillVsTri(dVar61,*(int *)(puVar23 + 0x15) + iVar48,uVar47,
                                            uVar28 - 0x21cc,uVar28 - 0x2614,
                                            ((int)uVar49 >> 3) +
                                            (uint)((int)uVar49 < 0 && (uVar49 & 7) != 0),
                                            puVar23[0xb],puVar23[0xc],param_6);
                              iVar45 = iVar45 + 1;
                              iVar48 = iVar48 + 4;
                            } while (iVar45 < *(int *)((int)puVar23 + 0xac));
                          }
                        }
                        if ((param_6 & 2) == 0) {
                          puVar51 = pMVar46->collision + 8;
                          iVar45 = 0;
                          pfVar50 = pMVar46->collisionMesh;
                          if (0 < iVar42) {
                            do {
                              uVar49 = (uint)pfVar50 & 1;
                              pfVar50 = (float *)((int)pfVar50 >> 1);
                              bVar4 = *(byte *)puVar51;
                              if ((uVar49 == 0) &&
                                 (((int)(short)puVar51[1] & ((param_6 & 4) == 0) + 1) != 0)) {
                                if (bVar4 < 2) {
                                  if (bVar4 == 0) {
LAB_0005dff4:
                                    fVar1 = pMVar46->scale;
                                    pfVar35 = (float *)(puVar43 +
                                                       (int)((longlong)(short)puVar51[2] << 4));
                                    pfVar37 = (float *)(puVar43 +
                                                       (int)((longlong)(short)puVar51[3] << 4));
                                    dVar67 = (double)((float)((double)*pfVar35 * dVar62) * fVar1);
                                    dVar53 = (double)((float)((double)pfVar35[1] * dVar62) * fVar1);
                                    dVar54 = (double)((float)((double)*pfVar37 * dVar62) * fVar1);
                                    dVar55 = (double)((float)((double)pfVar37[1] * dVar62) * fVar1);
                                    dVar56 = (double)((float)((double)pfVar35[2] * dVar62) * fVar1);
                                    dVar57 = (double)((float)((double)pfVar37[2] * dVar62) * fVar1);
                                    fVar2 = *(float *)(puVar51 + 6);
                                    fVar10 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                             (float)(dVar64 * dVar56);
                                    fVar8 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                            (float)(dVar66 * dVar56);
                                    fVar3 = (float)(dVar58 * dVar54) + (float)(dVar69 * dVar55) +
                                            (float)(dVar64 * dVar57);
                                    *(float *)((int)puVar23 + 0x21c) = fVar10;
                                    fVar6 = (float)(dVar59 * dVar54) + (float)(dVar70 * dVar55) +
                                            (float)(dVar66 * dVar57);
                                    *(float *)(puVar23 + 0x44) = fVar8;
                                    *(float *)(puVar23 + 0x45) = fVar3;
                                    *(float *)((int)puVar23 + 0x22c) = fVar6;
                                    fVar9 = (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                            (float)(dVar63 * dVar56) + *(float *)(puVar23 + 0x2e);
                                    fVar10 = fVar10 + *(float *)((int)puVar23 + 0x174);
                                    fVar8 = fVar8 + *(float *)(puVar23 + 0x2f);
                                    fVar12 = ((float)(dVar68 * dVar54) + (float)(dVar65 * dVar55) +
                                              (float)(dVar63 * dVar57) + *(float *)(puVar23 + 0x2e))
                                             - fVar9;
                                    fVar13 = (fVar3 + *(float *)((int)puVar23 + 0x174)) - fVar10;
                                    fVar14 = (fVar6 + *(float *)(puVar23 + 0x2f)) - fVar8;
                                    *(float *)((int)puVar23 + 0x204) = fVar13;
                                    *(float *)(puVar23 + 0x41) = fVar14;
                                    fVar3 = *(float *)(puVar23 + 0x19);
                                    fVar6 = *(float *)(puVar23 + 0x1a);
                                    fVar7 = *(float *)((int)puVar23 + 0xcc);
                                    fVar11 = fVar12 * fVar12 + fVar13 * fVar13;
                                    *(float *)(puVar23 + 0x42) = fVar7 - fVar10;
                                    *(float *)((int)puVar23 + 0x214) = fVar6 - fVar8;
                                    if (*(float *)((int)puVar23 + 0x273c) < ABS(fVar11)) {
                                      fVar11 = ((fVar3 - fVar9) * fVar12 + (fVar7 - fVar10) * fVar13
                                               ) / fVar11;
                                      if (fVar11 <= *(float *)(puVar23 + 0x4e7)) {
                                        fVar11 = *(float *)(puVar23 + 0x4e7);
                                      }
                                      if (*(float *)((int)puVar23 + 0x273c) <= fVar11) {
                                        fVar11 = *(float *)((int)puVar23 + 0x273c);
                                      }
                                      *(float *)(puVar23 + 7) = fVar6;
                                      *(float *)(puVar23 + 6) = fVar3;
                                      fVar8 = fVar8 + fVar14 * fVar11;
                                      fVar10 = fVar10 + fVar13 * fVar11;
                                      *(float *)((int)puVar23 + 0x24c) = fVar13 * fVar11;
                                      *(float *)(puVar23 + 0x4a) = fVar14 * fVar11;
                                      *(float *)((int)puVar23 + 0x34) = fVar7;
                                      *(float *)(puVar23 + 8) = fVar9 + fVar12 * fVar11;
                                      *(float *)(puVar23 + 9) = fVar8;
                                      *(float *)(puVar23 + 0x48) = fVar10;
                                      *(float *)((int)puVar23 + 0x244) = fVar8;
                                      *(float *)((int)puVar23 + 0x44) = fVar10;
                                      puVar23[0xe] = uVar52;
                                      CollPillVsSphere(dVar60,(double)(fVar2 * fVar1),dVar61,
                                                       puVar23[6],puVar23[7],puVar23[8],puVar23[9]);
                                    }
                                    else {
                                      fVar14 = fVar8 + fVar14;
                                      *(float *)((int)puVar23 + 0x234) = fVar10 + fVar13;
                                      *(float *)(puVar23 + 0x47) = fVar14;
                                      if (fVar6 < fVar8) {
                                        fVar6 = fVar8;
                                      }
                                      if (fVar14 < fVar6) {
                                        fVar6 = fVar14;
                                      }
                                      *(float *)(puVar23 + 8) = fVar9 + fVar12;
                                      *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a)
                                      ;
                                      *(float *)(puVar23 + 9) = fVar6;
                                      *(float *)((int)puVar23 + 0x44) = fVar10 + fVar13;
                                      *(float *)(puVar23 + 6) = fVar3;
                                      *(float *)((int)puVar23 + 0x34) = fVar7;
                                      puVar23[0xe] = uVar52;
                                      CollPillVsSphere(dVar60,(double)(fVar2 * fVar1),dVar61,
                                                       puVar23[6],puVar23[7],puVar23[8],puVar23[9]);
                                    }
                                  }
                                  else {
                                    fVar1 = *(float *)(puVar51 + 8);
                                    fVar2 = *(float *)(puVar51 + 10);
                                    fVar3 = *(float *)(puVar51 + 0xc);
                                    fVar6 = *(float *)(puVar51 + 0xe);
                                    *(float *)((int)puVar23 + 0x27c) = fVar2;
                                    *(float *)(puVar23 + 0x50) = fVar3;
                                    *(float *)((int)puVar23 + 0x284) = fVar6;
                                    *(float *)((int)puVar23 + 0x1bc) = fVar2;
                                    *(float *)(puVar23 + 0x38) = fVar3;
                                    fVar7 = pMVar46->scale;
                                    dVar67 = (double)(fVar1 * fVar7);
                                    dVar53 = (double)(fVar2 * fVar7);
                                    dVar54 = (double)(fVar3 * fVar7);
                                    fVar2 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                            (float)(dVar64 * dVar54);
                                    fVar1 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                            (float)(dVar66 * dVar54);
                                    *(float *)(puVar23 + 0x39) = fVar2;
                                    *(float *)((int)puVar23 + 0x1cc) = fVar1;
                                    *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar23 + 0x19);
                                    *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a);
                                    *(undefined4 *)((int)puVar23 + 0x34) =
                                         *(undefined4 *)((int)puVar23 + 0xcc);
                                    *(float *)(puVar23 + 8) =
                                         (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                         (float)(dVar63 * dVar54) + *(float *)(puVar23 + 0x2e);
                                    *(float *)(puVar23 + 9) = fVar1 + *(float *)(puVar23 + 0x2f);
                                    puVar23[0xe] = uVar52;
                                    *(float *)((int)puVar23 + 0x44) =
                                         fVar2 + *(float *)((int)puVar23 + 0x174);
                                    CollPillVsSphere(dVar60,(double)(fVar6 * fVar7),dVar61,
                                                     puVar23[6],puVar23[7],puVar23[8],puVar23[9]);
                                  }
                                }
                                else if (bVar4 < 3) {
                                  fVar1 = *(float *)(puVar51 + 6);
                                  fVar2 = *(float *)(puVar51 + 8);
                                  pfVar35 = (float *)(puVar43 + *(int *)(puVar51 + 2) * 0x10);
                                  fVar3 = *(float *)(puVar51 + 10);
                                  fVar6 = *(float *)(puVar51 + 0xc);
                                  *(float *)((int)puVar23 + 0x1d4) = fVar3;
                                  *(float *)(puVar23 + 0x3b) = fVar6;
                                  fVar7 = pMVar46->scale;
                                  dVar67 = (double)(((float)((double)*pfVar35 * dVar62) + fVar2) *
                                                   fVar7);
                                  dVar53 = (double)(((float)((double)pfVar35[1] * dVar62) + fVar3) *
                                                   fVar7);
                                  dVar54 = (double)(((float)((double)pfVar35[2] * dVar62) + fVar6) *
                                                   fVar7);
                                  fVar3 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                          (float)(dVar64 * dVar54);
                                  fVar2 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                          (float)(dVar66 * dVar54);
                                  *(float *)(puVar23 + 0x3c) = fVar3;
                                  *(float *)((int)puVar23 + 0x1e4) = fVar2;
                                  *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar23 + 0x19);
                                  *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a);
                                  *(undefined4 *)((int)puVar23 + 0x34) =
                                       *(undefined4 *)((int)puVar23 + 0xcc);
                                  *(float *)(puVar23 + 8) =
                                       (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                       (float)(dVar63 * dVar54) + *(float *)(puVar23 + 0x2e);
                                  *(float *)(puVar23 + 9) = fVar2 + *(float *)(puVar23 + 0x2f);
                                  puVar23[0xe] = uVar52;
                                  *(float *)((int)puVar23 + 0x44) =
                                       fVar3 + *(float *)((int)puVar23 + 0x174);
                                  CollPillVsSphere(dVar60,(double)(fVar1 * fVar7),dVar61,puVar23[6],
                                                   puVar23[7],puVar23[8],puVar23[9]);
                                }
                                else {
                                  if (3 < bVar4) goto LAB_0005dff4;
                                  fVar1 = *(float *)(puVar51 + 2);
                                  fVar2 = *(float *)(puVar51 + 8);
                                  fVar3 = *(float *)(puVar51 + 10);
                                  fVar6 = *(float *)(puVar51 + 0xc);
                                  fVar7 = *(float *)(puVar51 + 0xe);
                                  *(float *)((int)puVar23 + 0x28c) = fVar3;
                                  *(float *)(puVar23 + 0x52) = fVar6;
                                  *(float *)((int)puVar23 + 0x294) = fVar7;
                                  *(float *)((int)puVar23 + 0x1ec) = fVar3;
                                  *(float *)(puVar23 + 0x3e) = fVar6;
                                  fVar8 = pMVar46->scale;
                                  dVar67 = (double)(fVar2 * fVar8);
                                  dVar53 = (double)(fVar3 * fVar8);
                                  dVar54 = (double)(fVar6 * fVar8);
                                  fVar6 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                          (float)(dVar64 * dVar54);
                                  fVar2 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                          (float)(dVar66 * dVar54);
                                  *(float *)(puVar23 + 0x3f) = fVar6;
                                  *(float *)((int)puVar23 + 0x1fc) = fVar2;
                                  fVar2 = fVar2 + *(float *)(puVar23 + 0x2f);
                                  fVar3 = fVar2;
                                  if (fVar2 < *(float *)(puVar23 + 0x1a)) {
                                    fVar3 = *(float *)(puVar23 + 0x1a);
                                  }
                                  fVar2 = fVar2 + fVar1 * fVar8;
                                  if (fVar2 < fVar3) {
                                    fVar3 = fVar2;
                                  }
                                  *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar23 + 0x19);
                                  *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a);
                                  *(float *)(puVar23 + 8) =
                                       (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                       (float)(dVar63 * dVar54) + *(float *)(puVar23 + 0x2e);
                                  *(float *)(puVar23 + 9) = fVar3;
                                  *(float *)((int)puVar23 + 0x44) =
                                       fVar6 + *(float *)((int)puVar23 + 0x174);
                                  *(undefined4 *)((int)puVar23 + 0x34) =
                                       *(undefined4 *)((int)puVar23 + 0xcc);
                                  puVar23[0xe] = uVar52;
                                  CollPillVsSphere(dVar60,(double)(fVar7 * fVar8),dVar61,puVar23[6],
                                                   puVar23[7],puVar23[8],puVar23[9]);
                                }
                              }
                              iVar45 = iVar45 + 1;
                              puVar51 = puVar51 + 0x10;
                            } while (iVar45 < iVar42);
                          }
                        }
                      }
                    }
LAB_0005e2dc:
                    iVar41 = iVar41 + 1;
                    iVar40 = iVar40 + 2;
                  } while (iVar41 < (int)(uint)*(byte *)((int)puVar23[0x4e9] + 2));
                }
                uVar52 = puVar23[0x4ec];
                puVar23[0x4ed] = puVar23[0x4ed] + 4;
                puVar23[0x4ec] = uVar52 + 1;
              } while ((int)(uVar52 + 1) < (int)puVar23[0x4e4]);
            }
            uVar52 = puVar23[0x4ee];
            puVar23[0x4ee] = uVar52 + 1;
          } while ((int)(uVar52 + 1) < (int)puVar23[0x4e5]);
        }
        iVar41 = *(int *)((int)puVar23 + 700);
        if (iVar41 == 0) {
          uVar29 = 0;
        }
        else {
          fVar1 = *(float *)(puVar23 + 0x59);
          fVar24 = *(float *)(puVar23 + 0x5a) * 0.0009765625;
          fVar2 = *(float *)((int)puVar23 + 0x2cc);
          fVar3 = *(float *)(puVar23 + 0x5c);
          fVar6 = *(float *)((int)puVar23 + 0x2e4);
          fVar25 = fVar1 * 0.0009765625;
          fVar7 = *(float *)(puVar23 + 0x5d);
          fVar8 = *(float *)((int)puVar23 + 0x2ec);
          fVar9 = *(float *)(puVar23 + 0x5e);
          fVar10 = *(float *)((int)puVar23 + 0x2f4);
          fVar11 = *(float *)(puVar23 + 0x5f);
          fVar26 = fVar2 * 0.0009765625;
          fVar12 = *(float *)((int)puVar23 + 0x2fc);
          fVar13 = *(float *)(puVar23 + 0x60);
          fVar14 = *(float *)(puVar23 + 0x1a);
          uVar20 = *(undefined4 *)((int)puVar23 + 0x2d4);
          dVar67 = (double)(*(float *)(puVar23 + 0x5a) - fVar14);
          uVar15 = *(undefined4 *)(puVar23 + 0x5b);
          uVar16 = *(undefined4 *)((int)puVar23 + 0x2dc);
          iVar40 = (int)puVar23[0x4e8];
          *(float *)(iVar40 + 0x20) = fVar25;
          *(float *)(iVar40 + 0x28) = fVar24;
          *(float *)(iVar40 + 0x24) = fVar26;
          *(undefined4 *)(iVar40 + 0x40) = uVar20;
          *(undefined4 *)(iVar40 + 0x44) = uVar15;
          *(undefined4 *)(iVar40 + 0x48) = uVar16;
          *(float *)(iVar40 + 0x50) = fVar3 * 0.0009765625;
          *(float *)(iVar40 + 0x54) = fVar6 * 0.0009765625;
          *(float *)(iVar40 + 0x58) = fVar7 * 0.0009765625;
          *(float *)(iVar40 + 0x60) = fVar8 * 0.0009765625;
          *(float *)(iVar40 + 100) = fVar9 * 0.0009765625;
          *(float *)(iVar40 + 0x68) = fVar10 * 0.0009765625;
          *(float *)(iVar40 + 0x70) = fVar11 * 0.0009765625;
          uVar20 = *(undefined4 *)(puVar23 + 0x58);
          *(float *)(iVar40 + 0x74) = fVar12 * 0.0009765625;
          *(float *)(iVar40 + 0x78) = fVar13 * 0.0009765625;
          *(undefined4 *)(iVar40 + 0x18) = uVar20;
          *(int *)(iVar40 + 0x1c) = iVar41;
          if (dVar67 < dVar61) {
            dVar61 = dVar67;
          }
          dVar67 = (double)*(float *)(puVar23 + 0x4e7);
          if (dVar61 <= dVar67) {
            dVar61 = dVar67;
          }
          fVar1 = *(float *)(puVar23 + 0x19) - fVar1;
          fVar2 = *(float *)((int)puVar23 + 0xcc) - fVar2;
          fVar3 = (float)((double)(fVar14 - *(float *)(puVar23 + 0x5a)) + dVar61);
          if ((double)SQRT(*(float *)((int)puVar23 + 0x2c4)) == dVar67) {
            *(float *)((int)puVar23 + 0xec) = fVar1 * 1e+06;
            *(float *)(puVar23 + 0x1e) = fVar2 * 1e+06;
            *(float *)((int)puVar23 + 0xf4) = fVar3 * 1e+06;
          }
          else {
            fVar6 = (float)(dVar60 / (double)SQRT(*(float *)((int)puVar23 + 0x2c4)));
            *(float *)((int)puVar23 + 0xec) = fVar1 * fVar6;
            *(float *)(puVar23 + 0x1e) = fVar2 * fVar6;
            *(float *)((int)puVar23 + 0xf4) = fVar3 * fVar6;
          }
          fVar1 = *(float *)((int)puVar23 + 0xf4);
          fVar2 = *(float *)(puVar23 + 0x1e);
          uVar29 = 1;
          *(float *)(iVar40 + 0x30) = *(float *)((int)puVar23 + 0xec) * 0.0009765625 + fVar25;
          *(float *)(iVar40 + 0x34) = fVar2 * 0.0009765625 + fVar26;
          *(float *)(iVar40 + 0x38) = (float)((double)fVar1 - dVar61) * 0.0009765625 + fVar24;
        }
      }
      else {
        uVar29 = 0;
      }
    }
    else {
      uVar29 = 0;
    }
  }
  return uVar29;
}



//==== 0005e598  ns=collproc  size=0x11d0
// sig: undefined CollMobySphere(void)
// callers(81): 0002f530 camera0::???_Cam0_UpdateTargetSpecial; 00032100 camera0::UpdateCamCollisions_0; 000aaec0 hero::HandleHeroMovement; 000ec6f0 mobyattack::UpdateMoby_1523_GC_Blueball; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00105870 mobyutil::DamageSphereAtPos; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0011a018 mobyutil::MB_DebrisCollide; 0012fec8 partupd::UpdatePart_54; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 001907f0 mobyupdate_unsorted::UpdateMoby_1031; 001989d0 mobyupdate_helpers::M1045_001989d0; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001a9c20 mobyupdate_helpers::M1059_001a9c20; 001bc250 mobyupdate_unsorted::UpdateMoby_1090; 001c1a58 mobyupdate_helpers::M1106_001c1a58; 001d05f0 mobyupdate_unsorted::UpdateMoby_1110; 001d2258 mobyupdate_unsorted::UpdateMoby_1112; 001e9be8 mobyupdate_unsorted::UpdateMoby_1168; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 001ff200 mobyupdate_unsorted::UpdateMoby_1206_DamageCauser; 00202b98 mobyupdate_unsorted::UpdateMoby_121
// callees(7): 00055c30 collproc::Coll_AddDamage; 000564d0 collproc::CollMoby_TransformVerts; 00059658 collproc::CollSphereVsSphere; 00059800 collproc::CollSphereVsTri; 000f595c mobyfunc::Moby_BuildJointMatrices; 004ff98c FUN_004ff98c; 005dd48c FUN_005dd48c
// strings: 00651b7c: 'CollMobysSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.'

/* WARNING: Removing unreachable block (ram,0x0005f594) */
/* WARNING: Removing unreachable block (ram,0x0005f10c) */
/* WARNING: Removing unreachable block (ram,0x0005ed68) */
/* WARNING: Removing unreachable block (ram,0x0005f2b4) */
/* WARNING: Removing unreachable block (ram,0x0005ef78) */
/* WARNING: Removing unreachable block (ram,0x0005f63c) */
/* WARNING: Removing unreachable block (ram,0x0005f680) */
/* WARNING: Removing unreachable block (ram,0x0005f68c) */
/* WARNING: Removing unreachable block (ram,0x0005f694) */
/* WARNING: Removing unreachable block (ram,0x0005f6a8) */
/* WARNING: Removing unreachable block (ram,0x0005f6b4) */
/* WARNING: Removing unreachable block (ram,0x0005f6c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] CollMobySphere: sphere vs moby collision only (prims + mesh), feeds Coll_AddDamage
   for damage queries. */

undefined8
collproc::CollMobySphere
          (double param_1,float *param_2,undefined8 param_3,uint param_4,MobyInstance *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar19;
  int iVar20;
  ulonglong uVar18;
  undefined *puVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  uint uVar27;
  ushort uVar28;
  short *psVar29;
  int iVar30;
  int iVar31;
  MobyInstance *pMVar32;
  float *pfVar33;
  ushort *puVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  float fStack_14c4;
  float fStack_14bc;
  float fStack_14b4;
  undefined4 uStack_14ac;
  int local_1460;
  int local_145c;
  undefined1 local_1458 [4];
  undefined1 local_1454 [4];
  undefined1 local_1450 [4];
  undefined1 local_144c [324];
  undefined1 local_1308 [360];
  undefined1 auStack_11a0 [1024];
  float local_da0 [778];
  longlong local_178;
  longlong local_170;
  
  iVar19 = FUN_005dd48c(local_144c);
  if (((iVar19 == 2) || (iVar19 = FUN_005dd48c(local_1450), iVar19 == 2)) ||
     (iVar19 = FUN_005dd48c(local_1454), iVar19 == 2)) {
    FUN_004ff98c(
                "CollMobysSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever."
                );
  }
  else {
    dVar37 = (double)*param_2;
    dVar38 = (double)param_2[1];
    dVar39 = (double)param_2[2];
    fVar2 = (float)(dVar37 * 1024.0);
    fVar3 = (float)(dVar38 * 1024.0);
    fVar4 = (float)(dVar39 * 1024.0);
    fVar5 = (float)(param_1 * 1024.0);
    dVar54 = 0.0;
    if (((((0.0 <= (float)(dVar37 - param_1)) && (0.0 <= (float)(dVar38 - param_1))) &&
         ((0.0 <= (float)(dVar39 - param_1) &&
          (((float)(dVar37 + param_1) <= 1024.0 && ((float)(dVar38 + param_1) <= 1024.0)))))) &&
        ((float)(dVar39 + param_1) <= 1024.0)) && (-1 < CollOutput.collCount)) {
      CollOutput.collCount = CollOutput.collCount + 1;
      if (0.0 < fVar5) {
        iVar19 = (int)(dVar37 - param_1) >> 4;
        for (iVar24 = (int)(dVar38 - param_1) >> 4; iVar24 < ((int)(dVar38 + param_1) >> 4) + 1;
            iVar24 = iVar24 + 1) {
          iVar20 = ((int)(dVar37 + param_1) >> 4) + 1;
          if (iVar19 < iVar20) {
            dVar39 = 1024.0;
            local_170 = (longlong)iVar19 << 2;
            dVar52 = (double)fVar5;
            local_178 = (longlong)iVar19;
            do {
              iVar17 = (int)local_170;
              iVar30 = 0;
              psVar29 = (short *)(&g_MobyGridLists +
                                 *(short *)((int)&g_MobyGrid[iVar24 * 0x40].listStart + iVar17) * 8)
              ;
              if ((&g_MobyGrid[iVar24 * 0x40].count)[iVar17] != '\0') {
                do {
                  pMVar32 = MobyInstance + *psVar29;
                  if ((((pMVar32 != param_5) &&
                       (puVar34 = pMVar32->collision, puVar34 != (ushort *)0x0)) &&
                      (pMVar32->collQueryStamp != CollOutput.collCount)) &&
                     (fVar6 = (pMVar32->bSphere).x - fVar2, fVar7 = (pMVar32->bSphere).y - fVar3,
                     fVar9 = (pMVar32->bSphere).z - fVar4,
                     fVar1 = (float)(dVar52 + (double)(pMVar32->bSphere).rad),
                     fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9 <= fVar1 * fVar1)) {
                    uVar13 = *(uint *)(puVar34 + 2);
                    iVar31 = ((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
                    if ((param_4 & 4) == 0) {
                      uVar28 = puVar34[1];
                    }
                    else {
                      uVar28 = *puVar34;
                    }
                    pMVar32->collQueryStamp = CollOutput.collCount;
                    puVar21 = (undefined *)0x0;
                    uVar13 = *(uint *)(pMVar32->collision + 6);
                    if (uVar28 != 0) {
                      if (uVar13 == ((param_4 & 2) == 0)) goto LAB_0005f5d8;
                      uVar18 = 0;
                      do {
                        if (*(int *)(&MobyClassRef + (int)((uVar18 & 0xffffffff) << 3)) ==
                            pMVar32->field71_0xa8) {
                          puVar21 = &g_CollMobyJointCache + (int)uVar18 * 0x7fc;
                          goto LAB_0005ea60;
                        }
                        uVar18 = uVar18 + 1;
                      } while ((int)uVar18 < 8);
                      iVar25 = CollOutput.padding[2] * 8;
                      uVar27 = CollOutput.padding[2] + 1;
                      puVar21 = &g_CollMobyJointCache + CollOutput.padding[2] * 0x7fc;
                      CollOutput.padding[2] =
                           uVar27 + (((int)uVar27 >> 3) +
                                    (uint)((int)uVar27 < 0 && (uVar27 & 7) != 0)) * -8;
                      *(int *)(&MobyClassRef + iVar25) = pMVar32->field71_0xa8;
                      *(int *)(iVar25 + 0xa109c4) = CollOutput.collCount;
                      mobyfunc::Moby_BuildJointMatrices(pMVar32,uVar28,puVar21);
                    }
LAB_0005ea60:
                    fVar9 = (pMVar32->transform).v0.x;
                    fVar10 = (pMVar32->transform).v0.y;
                    fVar11 = (pMVar32->transform).v0.z;
                    dVar40 = (double)(pMVar32->transform).v1.x;
                    dVar41 = (double)(pMVar32->transform).v1.y;
                    dVar42 = (double)(pMVar32->transform).v1.z;
                    fVar1 = (float)((double)(pMVar32->pos).x * dVar39);
                    fVar6 = (float)((double)(pMVar32->pos).y * dVar39);
                    dVar43 = (double)(pMVar32->transform).v2.x;
                    fVar7 = (float)((double)(pMVar32->pos).z * dVar39);
                    dVar44 = (double)(pMVar32->transform).v2.y;
                    dVar45 = (double)(pMVar32->transform).v2.z;
                    if (uVar13 != 0) {
                      iVar25 = 0x100;
                      fStack_14c4 = (float)((double)(fVar3 - fVar6) - dVar52);
                      fStack_14b4 = (float)((double)(fVar3 - fVar6) + dVar52);
                      pfVar33 = local_da0;
                      do {
                        iVar25 = iVar25 + -1;
                        *pfVar33 = (float)dVar54;
                        pfVar33[1] = (float)dVar54;
                        pfVar33[2] = (float)dVar54;
                        pfVar33 = pfVar33 + 3;
                      } while (iVar25 != 0);
                      dVar35 = (double)pMVar32->scale;
                      dVar36 = dVar40 * dVar35;
                      CollMoby_TransformVerts
                                (pMVar32,CONCAT44((float)((double)(fVar2 - fVar1) - dVar52),
                                                  fStack_14c4),
                                 CONCAT44((float)((double)(fVar4 - fVar7) - dVar52),fStack_14bc),
                                 CONCAT44((float)((double)(fVar2 - fVar1) + dVar52),fStack_14b4),
                                 CONCAT44((float)((double)(fVar4 - fVar7) + dVar52),uStack_14ac),
                                 CONCAT44((float)((double)fVar9 * dVar35),
                                          (float)((double)fVar10 * dVar35)),
                                 CONCAT44((float)((double)fVar11 * dVar35),(float)dVar36),
                                 CONCAT44((float)(dVar41 * dVar35),(float)(dVar42 * dVar35)));
                      iVar25 = 0;
                      if (0 < local_145c) {
                        do {
                          CollSphereVsTri(local_1460 + iVar25 * 4,local_da0,auStack_11a0,local_1308,
                                          uVar13,CONCAT44(fVar1,fVar6),CONCAT44(fVar7,(float)dVar36)
                                          ,param_4);
                          iVar25 = iVar25 + 1;
                        } while (iVar25 < local_145c);
                      }
                    }
                    if ((param_4 & 2) == 0) {
                      puVar34 = pMVar32->collision + 8;
                      iVar25 = 0;
                      pfVar33 = pMVar32->collisionMesh;
                      if (0 < iVar31) {
                        do {
                          uVar13 = (uint)pfVar33 & 1;
                          bVar8 = *(byte *)puVar34;
                          pfVar33 = (float *)((int)pfVar33 >> 1);
                          if ((uVar13 == 0) &&
                             (((int)(short)puVar34[1] & ((param_4 & 4) == 0) + 1) != 0)) {
                            if (bVar8 < 2) {
                              if (bVar8 == 0) {
LAB_0005f2d4:
                                pfVar22 = (float *)(puVar21 +
                                                   (int)((longlong)(short)puVar34[2] << 4));
                                pfVar26 = (float *)(puVar21 +
                                                   (int)((longlong)(short)puVar34[3] << 4));
                                fVar12 = pMVar32->scale;
                                fVar14 = *pfVar22 * 1024.0 * fVar12;
                                dVar52 = (double)(pfVar22[1] * 1024.0 * fVar12);
                                fVar15 = *pfVar26 * 1024.0 * fVar12;
                                dVar36 = (double)(pfVar26[1] * 1024.0 * fVar12);
                                dVar35 = (double)(pfVar22[2] * 1024.0 * fVar12);
                                dVar39 = (double)(pfVar26[2] * 1024.0 * fVar12);
                                dVar46 = (double)(*(float *)(puVar34 + 6) * fVar12);
                                dVar47 = (double)(fVar9 * fVar14 + (float)(dVar40 * dVar52) +
                                                  (float)(dVar43 * dVar35) + fVar1);
                                dVar48 = (double)(fVar10 * fVar14 + (float)(dVar41 * dVar52) +
                                                  (float)(dVar44 * dVar35) + fVar6);
                                dVar52 = (double)(fVar11 * fVar14 + (float)(dVar42 * dVar52) +
                                                  (float)(dVar45 * dVar35) + fVar7);
                                dVar50 = (double)(float)((double)(fVar9 * fVar15 +
                                                                  (float)(dVar40 * dVar36) +
                                                                  (float)(dVar43 * dVar39) + fVar1)
                                                        - dVar47);
                                dVar51 = (double)(float)((double)(fVar10 * fVar15 +
                                                                  (float)(dVar41 * dVar36) +
                                                                  (float)(dVar44 * dVar39) + fVar6)
                                                        - dVar48);
                                dVar53 = (double)(float)((double)(fVar11 * fVar15 +
                                                                  (float)(dVar42 * dVar36) +
                                                                  (float)(dVar45 * dVar39) + fVar7)
                                                        - dVar52);
                                dVar36 = (double)fVar2;
                                dVar35 = (double)fVar3;
                                dVar49 = (double)fVar4;
                                dVar39 = (double)(((float)((double)(float)(dVar36 - dVar47) * dVar50
                                                          ) +
                                                   (float)((double)(float)(dVar35 - dVar48) * dVar51
                                                          ) +
                                                  (float)((double)(float)(dVar49 - dVar52) * dVar53)
                                                  ) / ((float)(dVar50 * dVar50) +
                                                       (float)(dVar51 * dVar51) +
                                                      (float)(dVar53 * dVar53)));
                                iVar23 = FUN_005dd48c(local_1458);
                                if (iVar23 == 2) {
                                  dVar39 = dVar54;
                                }
                                if (dVar39 <= dVar54) {
                                  dVar39 = dVar54;
                                }
                                if (1.0 <= dVar39) {
                                  dVar39 = 1.0;
                                }
                                fStack_14bc = (float)(dVar48 + (double)(float)(dVar51 * dVar39));
                                CollSphereVsSphere((double)fVar5,dVar46,
                                                   CONCAT44((float)dVar36,(float)dVar35),
                                                   CONCAT44((float)dVar49,fStack_14c4),
                                                   CONCAT44((float)(dVar47 + (double)(float)(dVar50 
                                                  * dVar39)),fStack_14bc),
                                                  CONCAT44((float)(dVar52 + (double)(float)(dVar53 *
                                                                                           dVar39)),
                                                           fStack_14b4));
                                dVar39 = 1024.0;
                              }
                              else {
                                fVar12 = pMVar32->scale;
                                fVar14 = *(float *)(puVar34 + 8) * fVar12;
                                dVar36 = (double)(*(float *)(puVar34 + 10) * fVar12);
                                dVar35 = (double)(*(float *)(puVar34 + 0xc) * fVar12);
                                fStack_14bc = fVar10 * fVar14 + (float)(dVar41 * dVar36) +
                                              (float)(dVar44 * dVar35) + fVar6;
                                CollSphereVsSphere(dVar52,(double)(*(float *)(puVar34 + 0xe) *
                                                                  fVar12),CONCAT44(fVar2,fVar3),
                                                   CONCAT44(fVar4,fStack_14c4),
                                                   CONCAT44(fVar9 * fVar14 +
                                                            (float)(dVar40 * dVar36) +
                                                            (float)(dVar43 * dVar35) + fVar1,
                                                            fStack_14bc),
                                                   CONCAT44(fVar11 * fVar14 +
                                                            (float)(dVar42 * dVar36) +
                                                            (float)(dVar45 * dVar35) + fVar7,
                                                            fStack_14b4));
                              }
                            }
                            else if (bVar8 < 3) {
                              pfVar22 = (float *)(puVar21 + *(int *)(puVar34 + 2) * 0x10);
                              fVar12 = pMVar32->scale;
                              fVar14 = ((float)((double)*pfVar22 * dVar39) + *(float *)(puVar34 + 8)
                                       ) * fVar12;
                              dVar36 = (double)(((float)((double)pfVar22[1] * dVar39) +
                                                *(float *)(puVar34 + 10)) * fVar12);
                              dVar35 = (double)(((float)((double)pfVar22[2] * dVar39) +
                                                *(float *)(puVar34 + 0xc)) * fVar12);
                              fStack_14bc = fVar10 * fVar14 + (float)(dVar41 * dVar36) +
                                            (float)(dVar44 * dVar35) + fVar6;
                              CollSphereVsSphere(dVar52,(double)(*(float *)(puVar34 + 6) * fVar12),
                                                 CONCAT44(fVar2,fVar3),CONCAT44(fVar4,fStack_14c4),
                                                 CONCAT44(fVar9 * fVar14 + (float)(dVar40 * dVar36)
                                                          + (float)(dVar43 * dVar35) + fVar1,
                                                          fStack_14bc),
                                                 CONCAT44(fVar11 * fVar14 + (float)(dVar42 * dVar36)
                                                          + (float)(dVar45 * dVar35) + fVar7,
                                                          fStack_14b4));
                            }
                            else {
                              if (3 < bVar8) goto LAB_0005f2d4;
                              fVar12 = pMVar32->scale;
                              fVar14 = *(float *)(puVar34 + 8) * fVar12;
                              dVar36 = (double)(*(float *)(puVar34 + 10) * fVar12);
                              dVar35 = (double)(*(float *)(puVar34 + 0xc) * fVar12);
                              fVar15 = fVar11 * fVar14 + (float)(dVar42 * dVar36) +
                                       (float)(dVar45 * dVar35) + fVar7;
                              fStack_14bc = fVar10 * fVar14 + (float)(dVar41 * dVar36) +
                                            (float)(dVar44 * dVar35) + fVar6;
                              fVar16 = fVar15;
                              if (fVar15 < fVar4) {
                                fVar16 = fVar4;
                              }
                              fVar15 = fVar15 + *(float *)(puVar34 + 2) * fVar12;
                              if (fVar15 < fVar16) {
                                fVar16 = fVar15;
                              }
                              CollSphereVsSphere(dVar52,(double)(*(float *)(puVar34 + 0xe) * fVar12)
                                                 ,CONCAT44(fVar2,fVar3),CONCAT44(fVar4,fStack_14c4),
                                                 CONCAT44(fVar9 * fVar14 + (float)(dVar40 * dVar36)
                                                          + (float)(dVar43 * dVar35) + fVar1,
                                                          fStack_14bc),CONCAT44(fVar16,fStack_14b4))
                              ;
                            }
                            dVar52 = (double)fVar5;
                          }
                          iVar25 = iVar25 + 1;
                          puVar34 = puVar34 + 0x10;
                        } while (iVar25 < iVar31);
                      }
                    }
                  }
LAB_0005f5d8:
                  iVar30 = iVar30 + 1;
                  psVar29 = psVar29 + 1;
                } while (iVar30 < (int)(uint)(byte)(&g_MobyGrid[iVar24 * 0x40].count)[iVar17]);
              }
              local_170 = local_170 + 4;
              local_178 = local_178 + 1;
            } while ((int)local_178 < iVar20);
          }
        }
      }
    }
  }
  return 0;
}



//==== 0005f780  ns=collproc  size=0xfb8
// sig: undefined CollHeroSphere(void)
// callers(1): 000888c8 hero::Hero_ResolveCollision
// callees(0): 

/* [collision] Hero-only collision (u16 coords = world*64). Culls each HeroCollCell by its bsphere
   then tests tris. Only caller Hero_ResolveCollision, so camera/mobys never see it. */

bool collproc::CollHeroSphere(double param_1,float *param_2)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  ushort uVar15;
  ushort uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  ulonglong *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  HeroCollCell *pHVar27;
  HeroCollHeader *pHVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar32;
  int iVar33;
  int iVar34;
  float *pfVar35;
  ushort *puVar36;
  byte *pbVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar41;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar42;
  ulonglong unaff_r31;
  longlong lVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar56;
  ulonglong in_f22;
  double dVar57;
  ulonglong in_f23;
  double dVar58;
  ulonglong in_f24;
  double dVar59;
  ulonglong in_f25;
  double dVar60;
  ulonglong in_f26;
  double dVar61;
  ulonglong in_f27;
  double dVar62;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar31;
  
  uVar29 = ZEXT48(&stack0x00000000);
  lVar1 = uVar29 - 0x1510;
  puVar19 = (ulonglong *)lVar1;
  *puVar19 = uVar29;
  puVar19[0x291] = in_f15;
  puVar19[0x292] = in_f16;
  puVar19[0x293] = in_f17;
  puVar19[0x294] = in_f18;
  puVar19[0x295] = in_f19;
  puVar19[0x296] = in_f20;
  puVar19[0x297] = in_f21;
  puVar19[0x298] = in_f22;
  puVar19[0x299] = in_f23;
  puVar19[0x29a] = in_f24;
  puVar19[0x29b] = in_f25;
  puVar19[0x29c] = in_f26;
  puVar19[0x29d] = in_f27;
  puVar19[0x29e] = in_f28;
  puVar19[0x29f] = in_f29;
  puVar19[0x2a0] = in_f30;
  puVar19[0x2a1] = in_f31;
  puVar19[0x28d] = unaff_r28;
  fVar13 = *param_2;
  puVar19[0x28c] = unaff_r27;
  fVar3 = (float)(param_1 * 64.0);
  fVar5 = param_2[1] * 64.0;
  fVar4 = param_2[2] * 64.0;
  iVar32 = 0;
  iVar33 = 0;
  *(undefined4 *)(puVar19 + 0x278) = 0;
  *(undefined4 *)((int)puVar19 + 0x13e4) = 0;
  *(undefined4 *)(puVar19 + 0x281) = 0;
  *(undefined4 *)(puVar19 + 0x27c) = 0;
  *(undefined4 *)((int)puVar19 + 0x1404) = 0;
  *(float *)(puVar19 + 0x282) = fVar3;
  *(undefined4 *)(puVar19 + 0x280) = 0;
  *(undefined4 *)((int)puVar19 + 0x13fc) = 0;
  *(undefined4 *)((int)puVar19 + 0x13cc) = 0;
  *(undefined4 *)(puVar19 + 0x279) = 0;
  *(undefined4 *)(puVar19 + 0x27f) = 0;
  *(undefined4 *)((int)puVar19 + 0x13c4) = 0;
  *(undefined4 *)((int)puVar19 + 0x13f4) = 0;
  *(undefined4 *)(puVar19 + 0x27e) = 0;
  *(undefined4 *)((int)puVar19 + 0x13ec) = 0;
  *(undefined4 *)((int)puVar19 + 0x140c) = 0;
  *(float *)((int)puVar19 + 0x34) = fVar5 - fVar3;
  *(undefined4 *)(puVar19 + 0x27d) = 0;
  *(float *)(puVar19 + 7) = fVar4 - fVar3;
  *(float *)(puVar19 + 0x27a) = fVar3 * fVar3;
  pHVar28 = g_HeroCollision;
  lVar30 = 0;
  iVar31 = 0;
  *(float *)(puVar19 + 8) = fVar5 + fVar3;
  *(float *)((int)puVar19 + 0x44) = fVar4 + fVar3;
  iVar34 = pHVar28->cellCount;
  puVar19[0x290] = unaff_r31;
  puVar19[0x28f] = unaff_r30;
  puVar19[0x28e] = unaff_r29;
  puVar19[0x28b] = unaff_r26;
  puVar19[0x28a] = unaff_r25;
  puVar19[0x289] = unaff_r24;
  puVar19[0x288] = unaff_r23;
  puVar19[0x287] = unaff_r22;
  puVar19[0x286] = unaff_r21;
  if (0 < iVar34) {
    iVar34 = 0;
    fVar3 = *(float *)(puVar19 + 0x282);
    do {
      pHVar28 = g_HeroCollision;
      puVar36 = (ushort *)((int)&g_HeroCollision->cells[0].bsphereX + iVar34);
      pHVar27 = g_HeroCollision->cells;
      puVar19[0x283] = (ulonglong)*puVar36;
      uVar15 = *(ushort *)((int)&pHVar28->cells[0].bsphereZ + iVar34);
      uVar48 = puVar19[0x283];
      puVar19[0x283] = (ulonglong)*(ushort *)((int)&pHVar27->bsphereY + iVar34);
      fVar6 = (float)(longlong)uVar48 - fVar13 * 64.0;
      uVar48 = puVar19[0x283];
      puVar19[0x283] = (ulonglong)uVar15;
      *(float *)(puVar19 + 0x272) = fVar6;
      *(float *)((int)puVar19 + 0x1394) = fVar6;
      *(float *)(puVar19 + 0x273) = fVar6;
      *(float *)((int)puVar19 + 0x139c) = fVar6;
      auVar65 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar8 = (float)(longlong)uVar48 - fVar5;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(float *)(puVar19 + 0x272) = fVar8;
      *(float *)((int)puVar19 + 0x1394) = fVar8;
      *(float *)(puVar19 + 0x273) = fVar8;
      *(float *)((int)puVar19 + 0x139c) = fVar8;
      fVar7 = (float)(longlong)puVar19[0x283] - fVar4;
      auVar64 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      *(float *)(puVar19 + 0x272) = fVar7;
      *(float *)((int)puVar19 + 0x1394) = fVar7;
      *(float *)(puVar19 + 0x273) = fVar7;
      uVar15 = *(ushort *)((int)&pHVar28->cells[0].bsphereRad + iVar34);
      *(float *)((int)puVar19 + 0x139c) = fVar7;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      puVar19[0x283] = (ulonglong)uVar15;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar48 = puVar19[0x283];
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      lVar39 = uVar29 - 0x14c8;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,0,lVar39);
      *(undefined4 *)lVar39 = uVar17;
      auVar65 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,4,lVar39);
      auVar65 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                (undefined1  [16])0xffffffff;
      storeVectorElementWordIndexed
                (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,8,lVar39);
      if (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 <=
          (fVar3 + (float)(longlong)uVar48) * (fVar3 + (float)(longlong)uVar48)) {
        lVar39 = lVar30 << 2;
        lVar30 = lVar30 + 1;
        *(ushort **)((int)puVar19 + (int)lVar39 + 0x180) = puVar36;
      }
      iVar31 = (int)lVar30;
      iVar33 = iVar33 + 1;
      iVar34 = iVar34 + 0x10;
    } while (iVar33 < g_HeroCollision->cellCount);
  }
  iVar34 = 0;
  *(float *)((int)puVar19 + 0x13dc) = fVar13 * 64.0;
  *(float *)(puVar19 + 0x27b) = fVar5;
  *(float *)((int)puVar19 + 0x13d4) = fVar4;
  if (0 < iVar31) {
    fVar3 = *(float *)(puVar19 + 0x278);
    lVar30 = lVar1;
    iVar32 = 0;
    do {
      lVar39 = uVar29 - 0xd90;
      iVar38 = 0x100;
      iVar33 = *(int *)((int)lVar30 + 0x180);
      do {
        iVar38 = iVar38 + -1;
        pfVar35 = (float *)lVar39;
        *pfVar35 = fVar3;
        pfVar35[1] = fVar3;
        pfVar35[2] = fVar3;
        lVar39 = lVar39 + 0xc;
      } while (iVar38 != 0);
      puVar36 = *(ushort **)(iVar33 + 0xc);
      iVar38 = 0;
      lVar39 = lVar1;
      lVar41 = lVar1;
      if (*(short *)(iVar33 + 10) != 0) {
        do {
          uVar15 = puVar36[1];
          uVar16 = puVar36[2];
          puVar19[0x283] = (longlong)(int)(uint)*puVar36;
          *(uint *)(puVar19 + 0xb) = (uint)uVar15;
          *(uint *)((int)puVar19 + 0x5c) = (uint)uVar16;
          fVar13 = (float)(longlong)puVar19[0x283];
          *(float *)(puVar19 + 0x272) = fVar13;
          *(float *)((int)puVar19 + 0x1394) = fVar13;
          *(float *)(puVar19 + 0x273) = fVar13;
          *(float *)((int)puVar19 + 0x139c) = fVar13;
          auVar65 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          puVar19[0x283] = (longlong)(int)(uint)uVar15;
          fVar4 = (float)(longlong)puVar19[0x283];
          *(float *)(puVar19 + 0x272) = fVar4;
          *(float *)((int)puVar19 + 0x1394) = fVar4;
          *(float *)(puVar19 + 0x273) = fVar4;
          *(float *)((int)puVar19 + 0x139c) = fVar4;
          auVar64 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          puVar19[0x283] = (longlong)(int)(uint)uVar16;
          fVar5 = (float)(longlong)puVar19[0x283];
          *(float *)(puVar19 + 0x272) = fVar5;
          *(float *)((int)puVar19 + 0x1394) = fVar5;
          *(float *)(puVar19 + 0x273) = fVar5;
          *(float *)((int)puVar19 + 0x139c) = fVar5;
          auVar18 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          bVar2 = *(float *)((int)puVar19 + 0x44) < fVar5;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar18 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar63 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          auVar65 = (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar64 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          auVar65 = (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60) >> 0x60 &
                    (undefined1  [16])0xffffffff;
          auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          uVar42 = (ulonglong)(*(float *)(puVar19 + 8) < fVar4) << 1 |
                   (ulonglong)(fVar4 < *(float *)((int)puVar19 + 0x34));
          uVar48 = (ulonglong)bVar2 << 1 | (ulonglong)(fVar5 < *(float *)(puVar19 + 7));
          *(uint *)(puVar19 + 0xe) = (uint)(*(float *)(puVar19 + 8) < fVar4) << 1;
          *(uint *)((int)puVar19 + 0x74) = (uint)bVar2 << 1;
          lVar40 = uVar29 - 0x1498;
          *(int *)((int)puVar19 + 100) = (int)uVar42;
          *(int *)(puVar19 + 0xd) = (int)uVar48;
          iVar38 = iVar38 + 1;
          *(char *)(puVar19 + 0x270) =
               (*(float *)((int)puVar19 + 0x3c) < fVar13) << 1 | fVar13 < *(float *)(puVar19 + 6);
          puVar36 = puVar36 + 4;
          *(char *)((int)puVar19 + 0x1381) = (char)uVar42;
          lVar43 = lVar41 + 0x780;
          *(char *)((int)puVar19 + 0x1382) = (char)uVar48;
          *(undefined1 *)((int)puVar19 + 0x1383) = 0;
          uVar17 = storeVectorElementWordIndexed(auVar63,0,lVar40);
          *(undefined4 *)lVar40 = uVar17;
          storeVectorElementWordIndexed(auVar64,4,lVar40);
          storeVectorElementWordIndexed(auVar65,8,lVar40);
          uVar17 = storeVectorElementWordIndexed(auVar63,0,lVar43);
          *(undefined4 *)lVar43 = uVar17;
          uVar17 = storeVectorElementWordIndexed(auVar64,4,lVar43);
          *(undefined4 *)((int)lVar41 + 0x784) = uVar17;
          uVar17 = storeVectorElementWordIndexed(auVar65,8,lVar43);
          *(undefined4 *)((int)lVar41 + 0x788) = uVar17;
          uVar15 = *(ushort *)(iVar33 + 10);
          *(undefined4 *)((int)lVar39 + 0x380) = *(undefined4 *)(puVar19 + 0x270);
          lVar39 = lVar39 + 4;
          lVar41 = lVar41 + 0xc;
        } while (iVar38 < (int)(uint)uVar15);
      }
      iVar38 = 0;
      pbVar37 = (byte *)((uint)*(ushort *)(iVar33 + 10) * 8 + *(int *)(iVar33 + 0xc));
      if (*(short *)(iVar33 + 8) != 0) {
        do {
          bVar10 = *pbVar37;
          bVar11 = pbVar37[1];
          bVar12 = pbVar37[2];
          dVar55 = (double)*(float *)((int)puVar19 + (uint)bVar10 * 0xc + 0x780);
          dVar53 = (double)*(float *)((int)puVar19 + (uint)bVar10 * 0xc + 0x784);
          dVar51 = (double)*(float *)((int)puVar19 + (uint)bVar10 * 0xc + 0x788);
          if ((*(uint *)((int)puVar19 + (uint)bVar10 * 4 + 0x380) &
               *(uint *)((int)puVar19 + (uint)bVar11 * 4 + 0x380) &
              *(uint *)((int)puVar19 + (uint)bVar12 * 4 + 0x380)) == 0) {
            dVar59 = (double)(float)((double)*(float *)((int)puVar19 + (uint)bVar11 * 0xc + 0x780) -
                                    dVar55);
            fVar13 = (float)((double)*(float *)((int)puVar19 + (uint)bVar11 * 0xc + 0x784) - dVar53)
            ;
            dVar60 = (double)fVar13;
            fVar4 = (float)((double)*(float *)((int)puVar19 + (uint)bVar11 * 0xc + 0x788) - dVar51);
            dVar61 = (double)fVar4;
            dVar56 = (double)(float)((double)*(float *)((int)puVar19 + (uint)bVar12 * 0xc + 0x780) -
                                    dVar55);
            fVar5 = (float)((double)*(float *)((int)puVar19 + (uint)bVar12 * 0xc + 0x784) - dVar53);
            dVar57 = (double)fVar5;
            fVar6 = (float)((double)*(float *)((int)puVar19 + (uint)bVar12 * 0xc + 0x788) - dVar51);
            dVar58 = (double)fVar6;
            fVar7 = (float)((double)*(float *)((int)puVar19 + 0x13dc) - dVar55);
            fVar8 = (float)((double)*(float *)(puVar19 + 0x27b) - dVar53);
            puVar19[0x277] = (ulonglong)dVar55;
            puVar19[0x276] = (ulonglong)dVar53;
            fVar9 = (float)((double)*(float *)((int)puVar19 + 0x13d4) - dVar51);
            puVar19[0x275] = (ulonglong)dVar51;
            *(float *)((int)puVar19 + 0xc4) = fVar13;
            *(float *)(puVar19 + 0x19) = fVar4;
            *(float *)(puVar19 + 0x1a) = fVar5;
            *(float *)((int)puVar19 + 0xd4) = fVar6;
            *(float *)((int)puVar19 + 0x13a4) = fVar7;
            *(float *)(puVar19 + 0x11) = fVar8;
            fVar5 = (float)(dVar57 * dVar61) - (float)(dVar58 * dVar60);
            fVar4 = (float)(dVar58 * dVar59) - (float)(dVar56 * dVar61);
            *(float *)(puVar19 + 0x274) = fVar8;
            fVar6 = (float)(dVar56 * dVar60) - (float)(dVar57 * dVar59);
            *(float *)((int)puVar19 + 0x8c) = fVar9;
            *(float *)((int)puVar19 + 0x94) = fVar4;
            *(float *)(puVar19 + 0x13) = fVar6;
            fVar7 = fVar7 * fVar5 + fVar8 * fVar4 + fVar9 * fVar6;
            fVar13 = fVar7 / (fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
            if (fVar3 <= fVar7) {
              fVar8 = -fVar4 * fVar13;
              fVar20 = -fVar6 * fVar13;
              *(float *)((int)puVar19 + 0xf4) = -fVar4;
              *(float *)(puVar19 + 0x1f) = -fVar6;
              fVar3 = (float)(dVar57 - dVar60);
              fVar7 = (float)(dVar58 - dVar61);
              fVar22 = *(float *)((int)puVar19 + 0x13a4) + -fVar5 * fVar13;
              dVar51 = (double)fVar22;
              fVar23 = *(float *)(puVar19 + 0x274) + fVar8;
              dVar53 = (double)fVar23;
              fVar21 = fVar9 + fVar20;
              dVar55 = (double)fVar21;
              *(float *)(puVar19 + 0x1d) = fVar8;
              *(float *)((int)puVar19 + 0xec) = fVar20;
              *(float *)((int)puVar19 + 0xdc) = fVar23;
              *(float *)(puVar19 + 0x1c) = fVar21;
              fVar20 = fVar5 * fVar13 * fVar5 * fVar13 + fVar4 * fVar13 * fVar4 * fVar13 +
                       fVar6 * fVar13 * fVar6 * fVar13;
              *(float *)((int)puVar19 + 0x84) = fVar22;
              *(float *)(puVar19 + 0x11) = fVar23;
              *(float *)((int)puVar19 + 0x8c) = fVar21;
              *(float *)(puVar19 + 0x14) = fVar3;
              *(float *)((int)puVar19 + 0xa4) = fVar7;
              fVar13 = (float)(dVar53 - dVar60);
              fVar21 = (float)(dVar55 * dVar59) - (float)(dVar51 * dVar61);
              fVar8 = (float)(dVar55 - dVar61);
              fVar22 = (float)(dVar51 * dVar60) - (float)(dVar53 * dVar59);
              fVar23 = (float)(dVar58 * dVar51) - (float)(dVar56 * dVar55);
              fVar24 = (float)(dVar56 * dVar53) - (float)(dVar57 * dVar51);
              *(float *)((int)puVar19 + 0xac) = fVar13;
              *(float *)(puVar19 + 0x16) = fVar8;
              *(float *)(puVar19 + 0x20) = fVar21;
              *(float *)((int)puVar19 + 0x104) = fVar22;
              *(float *)(puVar19 + 0x17) = fVar23;
              *(float *)((int)puVar19 + 0xbc) = fVar24;
              if (fVar20 <= *(float *)(puVar19 + 0x27a)) {
                fVar25 = fVar8 * (float)(dVar56 - dVar59) - (float)(dVar51 - dVar59) * fVar7;
                fVar26 = (float)(dVar51 - dVar59) * fVar3 - fVar13 * (float)(dVar56 - dVar59);
                fVar14 = *(float *)(puVar19 + 0x278);
                *(float *)((int)puVar19 + 0x10c) = fVar25;
                *(float *)(puVar19 + 0x22) = fVar26;
                if (fVar14 <= ((float)(dVar53 * dVar61) - (float)(dVar55 * dVar60)) * fVar5 +
                              fVar21 * fVar4 + fVar22 * fVar6) {
                  dVar54 = (double)*(float *)(puVar19 + 0x278);
                  dVar44 = dVar54;
                  dVar46 = dVar54;
                  dVar45 = dVar54;
                  dVar50 = dVar57;
                  dVar52 = dVar56;
                  dVar62 = dVar58;
                  if ((((float)(dVar57 * dVar55) - (float)(dVar58 * dVar53)) * fVar5 +
                       fVar23 * fVar4 + fVar24 * fVar6 < fVar14) ||
                     (dVar44 = dVar57, dVar46 = dVar56, dVar45 = dVar58, dVar50 = dVar60,
                     dVar52 = dVar59, dVar62 = dVar61,
                     (fVar13 * fVar7 - fVar8 * fVar3) * fVar5 + fVar25 * fVar4 + fVar26 * fVar6 <
                     fVar14)) goto LAB_0006037c;
                }
                else {
                  dVar54 = (double)*(float *)(puVar19 + 0x278);
                  dVar44 = dVar60;
                  dVar46 = dVar59;
                  dVar45 = dVar61;
                  dVar50 = dVar54;
                  dVar52 = dVar54;
                  dVar62 = dVar54;
LAB_0006037c:
                  dVar49 = (double)(float)(dVar46 - dVar52);
                  dVar47 = (double)(float)(dVar44 - dVar50);
                  dVar46 = (double)(float)(dVar45 - dVar62);
                  *(float *)(puVar19 + 0x23) = (float)(dVar53 - dVar50);
                  *(float *)((int)puVar19 + 0x11c) = (float)(dVar55 - dVar62);
                  *(float *)((int)puVar19 + 0x124) = (float)(dVar44 - dVar50);
                  *(float *)(puVar19 + 0x25) = (float)(dVar45 - dVar62);
                  dVar51 = (double)(((float)((double)(float)(dVar51 - dVar52) * dVar49) +
                                     (float)((double)(float)(dVar53 - dVar50) * dVar47) +
                                    (float)((double)(float)(dVar55 - dVar62) * dVar46)) /
                                   ((float)(dVar49 * dVar49) + (float)(dVar47 * dVar47) +
                                   (float)(dVar46 * dVar46)));
                  if (1.0 < dVar51) {
                    dVar51 = 1.0;
                  }
                  if (dVar51 < dVar54) {
                    dVar51 = dVar54;
                  }
                  fVar3 = (float)(dVar52 + (double)(float)(dVar49 * dVar51));
                  fVar13 = (float)(dVar50 + (double)(float)(dVar47 * dVar51));
                  fVar4 = (float)(dVar62 + (double)(float)(dVar46 * dVar51));
                  *(float *)((int)puVar19 + 0x13c) = (float)(dVar47 * dVar51);
                  *(float *)(puVar19 + 0x28) = (float)(dVar46 * dVar51);
                  fVar6 = fVar3 - *(float *)((int)puVar19 + 0x13a4);
                  fVar7 = fVar13 - *(float *)(puVar19 + 0x274);
                  fVar5 = fVar4 - fVar9;
                  *(float *)(puVar19 + 0x26) = fVar13;
                  *(float *)((int)puVar19 + 0x134) = fVar4;
                  *(float *)((int)puVar19 + 0x84) = fVar3;
                  *(float *)(puVar19 + 0x11) = fVar13;
                  *(float *)((int)puVar19 + 0x8c) = fVar4;
                  *(float *)((int)puVar19 + 0x154) = *(float *)(puVar19 + 0x274);
                  *(float *)(puVar19 + 0x2b) = fVar9;
                  *(float *)(puVar19 + 0x29) = fVar7;
                  *(float *)((int)puVar19 + 0x14c) = fVar5;
                  fVar20 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
                  if (*(float *)(puVar19 + 0x27a) < fVar20) goto LAB_00060568;
                }
                dVar51 = (double)puVar19[0x277];
                dVar53 = (double)puVar19[0x276];
                dVar55 = (double)puVar19[0x275];
                fVar3 = (float)((double)*(float *)((int)puVar19 + 0x8c) + dVar55);
                bVar10 = pbVar37[4];
                *(undefined4 *)((int)puVar19 + 0x1404) = *(undefined4 *)(puVar19 + 0x12);
                iVar32 = bVar10 + 0x1000;
                *(undefined4 *)(puVar19 + 0x280) = *(undefined4 *)((int)puVar19 + 0x94);
                *(undefined4 *)((int)puVar19 + 0x13fc) = *(undefined4 *)(puVar19 + 0x13);
                *(float *)((int)puVar19 + 0x13e4) =
                     (float)((double)*(float *)((int)puVar19 + 0x84) + dVar51);
                *(float *)(puVar19 + 0x2c) = (float)((double)*(float *)(puVar19 + 0x11) + dVar53);
                *(float *)((int)puVar19 + 0x164) = fVar3;
                *(float *)(puVar19 + 0x27a) = fVar20 * 0.9995;
                *(float *)(puVar19 + 0x281) = (float)((double)*(float *)(puVar19 + 0x11) + dVar53);
                *(float *)(puVar19 + 0x27c) = fVar3;
                *(float *)((int)puVar19 + 0x13cc) = (float)dVar51;
                *(float *)(puVar19 + 0x279) = (float)dVar53;
                *(float *)((int)puVar19 + 0x13c4) = (float)dVar55;
                *(float *)((int)puVar19 + 0x16c) = (float)(dVar53 + dVar60);
                *(float *)(puVar19 + 0x2e) = (float)(dVar55 + dVar61);
                *(float *)(puVar19 + 0x27f) = (float)(dVar51 + dVar59);
                *(float *)((int)puVar19 + 0x13f4) = (float)(dVar53 + dVar60);
                *(float *)(puVar19 + 0x27e) = (float)(dVar55 + dVar61);
                *(float *)(puVar19 + 0x2f) = (float)(dVar53 + dVar57);
                *(float *)((int)puVar19 + 0x17c) = (float)(dVar55 + dVar58);
                *(float *)(puVar19 + 0x27d) = (float)(dVar53 + dVar57);
                *(float *)((int)puVar19 + 0x13ec) = (float)(dVar51 + dVar56);
                *(float *)((int)puVar19 + 0x140c) = (float)(dVar55 + dVar58);
              }
            }
          }
LAB_00060568:
          iVar38 = iVar38 + 1;
          pbVar37 = pbVar37 + 4;
          fVar3 = *(float *)(puVar19 + 0x278);
        } while (iVar38 < (int)(uint)*(ushort *)(iVar33 + 8));
      }
      iVar34 = iVar34 + 1;
      lVar30 = lVar30 + 4;
    } while (iVar34 < iVar31);
  }
  if (iVar32 != 0) {
    fVar3 = *(float *)(puVar19 + 0x282) / *(float *)(puVar19 + 0x27a);
    CollOutput.normal.x = *(float *)((int)puVar19 + 0x1404);
    CollOutput.ip.x = *(float *)((int)puVar19 + 0x13e4) * 0.015625;
    CollOutput.normal.y = *(float *)(puVar19 + 0x280);
    CollOutput.ip.y = *(float *)(puVar19 + 0x281) * 0.015625;
    CollOutput.ip.z = *(float *)(puVar19 + 0x27c) * 0.015625;
    CollOutput.v0.x = *(float *)((int)puVar19 + 0x13cc) * 0.015625;
    CollOutput.v0.y = *(float *)(puVar19 + 0x279) * 0.015625;
    CollOutput.v0.z = *(float *)((int)puVar19 + 0x13c4) * 0.015625;
    CollOutput.v1.x = *(float *)(puVar19 + 0x27f) * 0.015625;
    CollOutput.v1.y = *(float *)((int)puVar19 + 0x13f4) * 0.015625;
    CollOutput.v1.z = *(float *)(puVar19 + 0x27e) * 0.015625;
    CollOutput.v2.x = *(float *)((int)puVar19 + 0x13ec) * 0.015625;
    CollOutput.normal.z = *(float *)((int)puVar19 + 0x13fc);
    CollOutput.v2.y = *(float *)(puVar19 + 0x27d) * 0.015625;
    CollOutput.v2.z = *(float *)((int)puVar19 + 0x140c) * 0.015625;
    CollOutput.pMoby = (MobyInstance *)0x0;
    CollOutput.push.x =
         (*(float *)((int)puVar19 + 0x13dc) - *(float *)((int)puVar19 + 0x13e4)) * fVar3 * 0.015625
         + *param_2;
    CollOutput.push.y =
         (*(float *)(puVar19 + 0x27b) - *(float *)(puVar19 + 0x281)) * fVar3 * 0.015625 + param_2[1]
    ;
    CollOutput.push.z =
         (*(float *)((int)puVar19 + 0x13d4) - *(float *)(puVar19 + 0x27c)) * fVar3 * 0.015625 +
         param_2[2];
    CollOutput.poly = iVar32;
  }
  return iVar32 != 0;
}



