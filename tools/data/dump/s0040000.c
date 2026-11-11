//==== 00040440  ns=camera::camera19  size=0xadc
// sig: void UpdateCamera_19(UpdateCam * pCam)
// callers(0): 
// callees(8): 00065468 stub::STUB_00065468; 00065470 stub::STUB_00065470; 000668d0 draw::UpdateViewContext; 000b72b0 hero::TransitionMovement; 000fecf0 mobyutil::MB_CosineInterpolate; 0010ce18 mobyutil::MB_PathMoveDist; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera19::UpdateCamera_19(UpdateCam *pCam)

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
  short sVar13;
  short sVar14;
  void *pvVar15;
  int iVar16;
  Spline *pSVar17;
  Spline *pSVar18;
  Vec4 *pVVar19;
  int iVar20;
  int iVar21;
  Vec4 *pVVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  void *pvVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [28];
  
  pvVar15 = pCam->control;
  sVar13 = *(short *)((int)pvVar15 + 0x54);
  iVar16 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (sVar13 == 0) {
    boot::SceneScreenFade = boot::SceneScreenFade + 0.05;
    if (1.0 <= boot::SceneScreenFade) {
      iVar20 = *(int *)(iVar16 + 0x24);
      boot::SceneScreenFade = 1.0;
      pSVar17 = Splines[*(int *)(iVar16 + 0x20)];
      draw::LetterBoxOn = 1;
      *(undefined2 *)((int)pvVar15 + 0x54) = 1;
      fVar1 = pSVar17->points[0].x;
      pCam->pos[0] = fVar1;
      fVar2 = pSVar17->points[0].y;
      pSVar18 = Splines[iVar20];
      pCam->pos[1] = fVar2;
      fVar3 = pSVar17->points[0].z;
      iVar20 = *(int *)(iVar16 + 0x28);
      pCam->pos[2] = fVar3;
      pCam->pos[3] = pSVar17->points[0].w;
      fVar12 = DAT_00969f78;
      fVar11 = DAT_00969f74;
      fVar10 = hero::g_heroGravityDir;
      if (iVar20 < 0) {
        fVar8 = pSVar18->points[0].x;
        fVar9 = pSVar18->points[0].y;
        fVar4 = pSVar18->points[0].z;
        fVar7 = pSVar18->points[0].w;
      }
      else {
        fVar4 = *(float *)(iVar16 + 0x30);
        fVar5 = *(float *)(iVar16 + 0x2c);
        fVar6 = *(float *)(iVar16 + 0x34);
        fVar7 = MobyInstance[iVar20].pos.w;
        fVar8 = MobyInstance[iVar20].pos.x +
                GameCamera.orientMtx.up.x * fVar6 +
                GameCamera.orientMtx.forward.x * fVar5 + GameCamera.orientMtx.right.x * fVar4;
        fVar9 = MobyInstance[iVar20].pos.y +
                GameCamera.orientMtx.up.y * fVar6 +
                GameCamera.orientMtx.forward.y * fVar5 + GameCamera.orientMtx.right.y * fVar4;
        fVar4 = MobyInstance[iVar20].pos.z +
                GameCamera.orientMtx.up.z * fVar6 +
                GameCamera.orientMtx.forward.z * fVar5 + GameCamera.orientMtx.right.z * fVar4;
      }
      fVar9 = fVar9 - fVar2;
      fVar8 = fVar8 - fVar1;
      fVar4 = fVar4 - fVar3;
      fVar1 = 0.0;
      fVar2 = fVar4 * fVar4 + fVar8 * fVar8 + fVar9 * fVar9;
      if (SQRT(fVar2) == 0.0) {
        pCam->mtx[3] = fVar7;
        pCam->mtx[0] = fVar8;
        pCam->mtx[2] = fVar4;
        pCam->mtx[1] = fVar9;
        fVar9 = fVar1;
        fVar4 = fVar1;
        fVar8 = fVar1;
      }
      else {
        fVar3 = 1.0 / SQRT(fVar2);
        pCam->mtx[3] = fVar7;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar8 = fVar8 * fVar3;
        fVar9 = fVar9 * fVar3;
        fVar4 = fVar4 * fVar3;
      }
      pCam->mtx[0] = fVar8;
      fVar7 = -(fVar12 * fVar8) - -(fVar10 * fVar4);
      fVar12 = -(fVar11 * fVar4) - -(fVar12 * fVar9);
      fVar10 = -(fVar10 * fVar9) - -(fVar11 * fVar8);
      pCam->mtx[1] = fVar9;
      pCam->mtx[2] = fVar4;
      pCam->mtx[7] = 0.0;
      fVar11 = fVar10 * fVar10 + fVar12 * fVar12 + fVar7 * fVar7;
      fVar2 = fVar1;
      fVar3 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar1 = 1.0 / SQRT(fVar11);
        fVar1 = -(fVar11 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar11 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar11 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar2 = fVar12 * fVar1;
        fVar3 = fVar7 * fVar1;
        fVar1 = fVar10 * fVar1;
      }
      pCam->mtx[4] = fVar2;
      pCam->mtx[5] = fVar3;
      pCam->mtx[6] = fVar1;
      pCam->mtx[0xb] = 0.0;
      pCam->mtx[8] = fVar9 * fVar1 - fVar4 * fVar3;
      pCam->mtx[9] = fVar4 * fVar2 - fVar8 * fVar1;
      pCam->mtx[10] = fVar8 * fVar3 - fVar9 * fVar2;
    }
  }
  else {
    if (sVar13 == 2) {
      boot::SceneScreenFade = boot::SceneScreenFade + 0.05;
      if (1.0 <= boot::SceneScreenFade) {
        *(undefined2 *)((int)pvVar15 + 0x54) = 3;
        boot::SceneScreenFade = 1.0;
        fVar1 = *(float *)((int)pvVar15 + 0x88) * 0.5;
        fVar3 = fVar1 + 1.5707963;
        fVar2 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar2 = fVar1;
        }
        fVar10 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar10 = fVar3;
        }
        fVar11 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
          fVar11 = fVar2;
        }
        fVar2 = fVar11 * fVar11;
        fVar1 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
          fVar1 = fVar10;
        }
        fVar3 = fVar1 * fVar1;
        fVar10 = fVar2 * fVar2 * fVar11;
        fVar12 = fVar2 * fVar10;
        fVar7 = fVar3 * fVar3 * fVar1;
        fVar8 = fVar3 * fVar7;
        ViewContext.xratio =
             (fVar2 * fVar12 * 2.601887e-06 +
             fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar11 * -0.16666657 + fVar11)
             / (fVar3 * fVar8 * 2.601887e-06 +
               fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1);
        draw::UpdateViewContext();
        *(undefined1 *)(iVar16 + 0x39) = 1;
        draw::LetterBoxOn = 0;
        iVar20 = *(int *)(iVar16 + 0x4c);
        GameCamera.screenFade = 0.05;
        (pCam->activation).deactivate = 4;
        if (iVar20 == 0) {
          hero::TransitionMovement(0,1);
        }
      }
      if (*(int *)(iVar16 + 0x40) == 0) {
        return;
      }
    }
    else {
      if (sVar13 == 3) {
        return;
      }
      boot::SceneScreenFade = boot::SceneScreenFade - 0.05;
      if (boot::SceneScreenFade < 0.0) {
        boot::SceneScreenFade = 0.0;
      }
    }
    dVar30 = (double)pCam->pos[0];
    dVar29 = (double)pCam->pos[1];
    dVar28 = (double)pCam->pos[2];
    pSVar17 = Splines[*(int *)(iVar16 + 0x20)];
    iVar20 = mobyutil::MB_PathMoveDist
                       ((double)(*(float *)(iVar16 + 0x3c) * mobyutil::g_FrameTime),pSVar17,
                        (longlong)(int)pCam + 0x30,(int)pvVar15 + 0x40,(int)pvVar15 + 0x44,
                        &DAT_00720000,0);
    if (*(short *)((int)pvVar15 + 0x56) != 0) {
      iVar21 = fastfunc::FastDecTimerS16((int)pvVar15 + 0x56);
      if (iVar21 == 0) {
        if ((*(int *)(iVar16 + 0x40) != 0) &&
           (sVar13 = *(short *)((int)pvVar15 + 0x56),
           iVar21 = fastfunc::FastDoubleToInt(0x4034000000000000),
           (int)sVar13 < (int)(animationSpeed * ((float)(longlong)iVar21 + 0.5)))) {
          iVar20 = 1;
        }
      }
      else {
        iVar20 = 1;
      }
    }
    if (((*(char *)(iVar16 + 0x39) == '\0') && (iVar20 == 0)) ||
       (iVar20 = *(int *)(iVar16 + 0x40), *(undefined2 *)((int)pvVar15 + 0x54) = 2, iVar20 != 0)) {
      iVar21 = 0;
      iVar20 = 0;
      pvVar25 = pvVar15;
      pvVar26 = pvVar15;
      do {
        sVar13 = *(short *)((int)pvVar26 + 0x58);
        if (sVar13 < 0) break;
        sVar14 = *(short *)((int)pvVar26 + 0x5a);
        if (sVar14 < 0) break;
        iVar23 = *(int *)((int)pvVar15 + 0x40);
        if (iVar23 < sVar14 && sVar13 <= iVar23) {
          fVar1 = 0.0;
          if (sVar13 < iVar23) {
            iVar24 = iVar23 - sVar13;
            pVVar22 = pSVar17->points + sVar13 + -1;
            do {
              iVar24 = iVar24 + -1;
              pVVar19 = pVVar22 + 1;
              pVVar22 = pVVar22 + 1;
              fVar1 = fVar1 + pVVar19->w;
            } while (0 < iVar24);
          }
          fVar2 = fVar1 + *(float *)((int)pvVar15 + 0x44);
          if (iVar23 < sVar14) {
            pVVar22 = pSVar17->points + iVar23 + -1;
            do {
              iVar23 = iVar23 + 1;
              pVVar19 = pVVar22 + 1;
              pVVar22 = pVVar22 + 1;
              fVar1 = fVar1 + pVVar19->w;
            } while (iVar23 < *(short *)((int)pvVar15 + iVar20 + 0x5a));
          }
          dVar27 = (double)mobyutil::MB_CosineInterpolate
                                     ((double)*(float *)((int)pvVar25 + 0x68),
                                      (double)*(float *)((int)pvVar25 + 0x6c),
                                      (double)(fVar2 / fVar1));
          fVar1 = (float)(dVar27 * 0.01745329238474369) * 0.5;
          fVar3 = fVar1 + 1.5707963;
          fVar2 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar2 = fVar1;
          }
          fVar10 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar10 = fVar3;
          }
          fVar11 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
            fVar11 = fVar2;
          }
          fVar2 = fVar11 * fVar11;
          fVar1 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
            fVar1 = fVar10;
          }
          fVar3 = fVar1 * fVar1;
          fVar10 = fVar2 * fVar2 * fVar11;
          fVar12 = fVar2 * fVar10;
          fVar7 = fVar3 * fVar3 * fVar1;
          fVar8 = fVar3 * fVar7;
          ViewContext.xratio =
               (fVar2 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 +
               fVar10 * 0.0083330255 + fVar2 * fVar11 * -0.16666657 + fVar11) /
               (fVar3 * fVar8 * 2.601887e-06 +
               fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1);
          draw::UpdateViewContext();
        }
        iVar21 = iVar21 + 1;
        pvVar26 = (void *)((int)pvVar26 + 2);
        pvVar25 = (void *)((int)pvVar25 + 4);
        iVar20 = iVar20 + 2;
      } while (iVar21 < 7);
      fVar1 = (float)(dVar29 - (double)pCam->pos[1]);
      fVar2 = (float)(dVar30 - (double)pCam->pos[0]);
      fVar3 = (float)(dVar28 - (double)pCam->pos[2]);
      iVar20 = *(int *)(iVar16 + 0x28);
      fVar1 = *(float *)((int)pvVar15 + 0x50) + SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      *(float *)((int)pvVar15 + 0x50) = fVar1;
      if (iVar20 < 0) {
        pSVar17 = Splines[*(int *)(iVar16 + 0x24)];
        mobyutil::MB_PathMoveDist
                  ((double)((fVar1 / *(float *)((int)pvVar15 + 0x48)) *
                           *(float *)((int)pvVar15 + 0x4c)),pSVar17,&local_a0,local_90,local_8c);
        stub::STUB_00065470(0x3fc99999a0000000,&local_a0);
        stub::STUB_00065468(pSVar17->points,pSVar17->points + pSVar17->cnt + -1);
        fVar1 = pCam->pos[0];
        fVar2 = pCam->pos[1];
        fVar3 = pCam->pos[2];
      }
      else {
        fVar10 = *(float *)(iVar16 + 0x30);
        fVar11 = *(float *)(iVar16 + 0x2c);
        fVar12 = *(float *)(iVar16 + 0x34);
        local_94 = MobyInstance[iVar20].pos.w;
        fVar1 = pCam->pos[0];
        fVar2 = pCam->pos[1];
        fVar3 = pCam->pos[2];
        local_a0 = MobyInstance[iVar20].pos.x +
                   GameCamera.orientMtx.up.x * fVar12 +
                   GameCamera.orientMtx.forward.x * fVar11 + GameCamera.orientMtx.right.x * fVar10;
        local_9c = MobyInstance[iVar20].pos.y +
                   GameCamera.orientMtx.up.y * fVar12 +
                   GameCamera.orientMtx.forward.y * fVar11 + GameCamera.orientMtx.right.y * fVar10;
        local_98 = MobyInstance[iVar20].pos.z +
                   GameCamera.orientMtx.up.z * fVar12 +
                   GameCamera.orientMtx.forward.z * fVar11 + GameCamera.orientMtx.right.z * fVar10;
      }
      fVar8 = DAT_00969f78;
      fVar7 = DAT_00969f74;
      fVar12 = hero::g_heroGravityDir;
      fVar2 = local_9c - fVar2;
      fVar1 = local_a0 - fVar1;
      fVar3 = local_98 - fVar3;
      fVar10 = 0.0;
      fVar11 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
      if (SQRT(fVar11) == 0.0) {
        pCam->mtx[3] = local_94;
        pCam->mtx[0] = fVar1;
        pCam->mtx[2] = fVar3;
        pCam->mtx[1] = fVar2;
        fVar2 = fVar10;
        fVar3 = fVar10;
        fVar1 = fVar10;
      }
      else {
        fVar9 = 1.0 / SQRT(fVar11);
        pCam->mtx[3] = local_94;
        fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
        fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
        fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
        fVar1 = fVar1 * fVar9;
        fVar2 = fVar2 * fVar9;
        fVar3 = fVar3 * fVar9;
      }
      pCam->mtx[0] = fVar1;
      fVar9 = -(fVar8 * fVar1) - -(fVar12 * fVar3);
      fVar8 = -(fVar7 * fVar3) - -(fVar8 * fVar2);
      pCam->mtx[1] = fVar2;
      pCam->mtx[2] = fVar3;
      fVar7 = -(fVar12 * fVar2) - -(fVar7 * fVar1);
      pCam->mtx[7] = 0.0;
      fVar4 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
      fVar11 = fVar10;
      fVar12 = fVar10;
      if (SQRT(fVar4) != 0.0) {
        fVar10 = 1.0 / SQRT(fVar4);
        fVar10 = -(fVar4 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar4 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar4 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar11 = fVar8 * fVar10;
        fVar12 = fVar9 * fVar10;
        fVar10 = fVar7 * fVar10;
      }
      pCam->mtx[4] = fVar11;
      pCam->mtx[5] = fVar12;
      pCam->mtx[6] = fVar10;
      pCam->mtx[0xb] = 0.0;
      pCam->mtx[8] = fVar2 * fVar10 - fVar3 * fVar12;
      pCam->mtx[9] = fVar3 * fVar11 - fVar1 * fVar10;
      pCam->mtx[10] = fVar1 * fVar12 - fVar2 * fVar11;
    }
  }
  return;
}



//==== 00040f1c  ns=camera::camera19  size=0x104
// sig: int ActivateCamera_19(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(1): 0003fc8c camera::camera19::Cam19_IsHeroInVolume

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera19::ActivateCamera_19(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(char *)(iVar1 + 0x39) == '\0') {
    if ((*(char *)(iVar1 + 0x38) == '\0') || (pCurr->type == 0x13)) {
      if (((pCurr == (UpdateCam *)0x0) ||
          (((pCurr->activation).deactivate != 0 ||
           ((byte)(pCurr->activation).priority < (byte)(pCam->activation).priority)))) &&
         (iVar2 = Cam19_IsHeroInVolume(pCam), iVar2 != 0)) {
        if ((*(int *)(iVar1 + 0x48) < 0) || (hero::g_heroStateType == *(int *)(iVar1 + 0x48))) {
          if (((int)*(PlayerState *)(iVar1 + 0x44) < 0) ||
             (g_heroState == *(PlayerState *)(iVar1 + 0x44))) {
            iVar1 = 1;
          }
          else {
            iVar1 = 0;
          }
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



//==== 00041020  ns=stub  size=0x4
// sig: undefined STUB_00041020(void)
// callers(0): 
// callees(0): 

void stub::STUB_00041020(void)

{
  return;
}



//==== 00041024  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071db70 = 0x10000;
  return;
}



//==== 00041038  ns=camera::camera20  size=0x24
// sig: void Cam20_Enable(int importIdx)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera20::Cam20_Enable(int importIdx)

{
  *(undefined1 *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c) + 0x38) = 1;
  return;
}



//==== 0004105c  ns=camera::camera20  size=0x24
// sig: void Cam20_Disable(int importIdx)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera20::Cam20_Disable(int importIdx)

{
  *(undefined1 *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c) + 0x39) = 1;
  return;
}



//==== 00041080  ns=camera::camera20  size=0x3c
// sig: int Cam20_IsRunning(int importIdx)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera20::Cam20_IsRunning(int importIdx)

{
  return (uint)(*(short *)(*(int *)(*(int *)(*(int *)(ImportCameras +
                                                      (int)((longlong)importIdx << 5) + 0x1c) + 4) +
                                   0x70) + 0x54) == 1);
}



//==== 000410bc  ns=camera::camera20  size=0x13c
// sig: int Cam20_IsHeroInVolume(UpdateCam * pCam)
// callers(1): 000423d8 camera::camera20::ActivateCamera_20
// callees(4): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera20::Cam20_IsHeroInVolume(UpdateCam *pCam)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(int *)(iVar1 + 0xc) < 0) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      if (*(int *)(iVar1 + 8) < 0) {
        if (*(int *)(iVar1 + 0x14) < 0) {
          if (*(char *)(iVar1 + 0x38) == '\0') {
            return 0;
          }
          if (*(char *)(iVar1 + 0x39) != '\0') {
            return 0;
          }
          return 1;
        }
        iVar1 = mobyutil::PointInsideComplexPoly
                          (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar1 + 0x14)]->points,
                           Splines[*(int *)(iVar1 + 0x14)]->cnt);
      }
      else {
        iVar1 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8));
      }
    }
    else {
      iVar1 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar1 + 0x10));
    }
  }
  else {
    iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



//==== 00041210  ns=camera::camera20  size=0x604
// sig: void InitCamera_20(UpdateCam * pCam)
// callers(0): 
// callees(2): 000a0c38 hero::Hero_Warp; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera20::InitCamera_20(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined4 *puVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  Cuboid *pCVar14;
  ulonglong uVar15;
  void *pvVar18;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  void *pvVar24;
  longlong lVar23;
  int iVar25;
  Spline *pSVar26;
  float *pfVar27;
  float *pfVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0xe0;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x1e] = in_LR;
  puVar13[0x1b] = unaff_r31;
  auVar32 = ZEXT416(0xfffffff0);
  puVar13[0x18] = unaff_r28;
  iVar22 = ImportCameras;
  sVar6 = pCam->importCameraIdx;
  puVar13[0x1a] = unaff_r30;
  uVar7 = *(uint *)(iVar22 + (int)((longlong)sVar6 << 5) + 0x1c);
  puVar13[0x19] = unaff_r29;
  *(undefined1 *)(uVar7 + 0x38) = 3;
  pvVar8 = pCam->control;
  lVar29 = 2;
  *(undefined4 *)((int)pvVar8 + 0x40) = 0;
  fVar4 = 0.0;
  *(undefined2 *)((int)pvVar8 + 0x54) = 0;
  auVar33 = loadVectorLeftIndexed(0x3a,(ulonglong)uVar7);
  auVar34 = loadVectorRightIndexed(0x4a,(ulonglong)uVar7);
  *(undefined4 *)((int)pvVar8 + 0x44) = 0;
  *(undefined4 *)((int)pvVar8 + 0x48) = 0;
  *(undefined4 *)((int)pvVar8 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar8 + 0x50) = 0;
  auVar33 = vectorShiftRightAlgebraicWord
                      (auVar33 | auVar34,
                       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
  auVar34 = loadVectorLeftIndexed(4,0x411f8);
  auVar32 = ZEXT416(0xffffffff);
  auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
  auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar34 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  pvVar9 = pCam->control;
  auVar32 = vectorAddFloatingPoint
                      (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar36,auVar32,auVar34);
  auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
  auVar32 = vectorSplatHalfWord(auVar32,1);
  uVar12 = storeVectorElementHalfWordIndexed(auVar32,0x56,ZEXT48(pvVar8));
  *(undefined2 *)((int)pvVar8 + 0x56) = uVar12;
  pvVar18 = pvVar9;
  pvVar24 = pvVar9;
  do {
    *(undefined4 *)((int)pvVar18 + 0x68) = 0;
    *(undefined2 *)((int)pvVar24 + 0x58) = 0xffff;
    *(undefined4 *)((int)pvVar18 + 0x6c) = 0;
    *(undefined2 *)((int)pvVar24 + 0x5a) = 0xffff;
    *(undefined4 *)((int)pvVar18 + 0x70) = 0;
    *(undefined2 *)((int)pvVar24 + 0x5c) = 0xffff;
    *(undefined4 *)((int)pvVar18 + 0x74) = 0;
    *(undefined2 *)((int)pvVar24 + 0x5e) = 0xffff;
    fVar5 = ViewContext.xratio;
    pvVar18 = (void *)((int)pvVar18 + 0x10);
    pvVar24 = (void *)((int)pvVar24 + 8);
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  fVar3 = ABS(ViewContext.xratio);
  *(undefined4 *)(puVar13 + 0x10) = 0x3f800000;
  *(float *)((int)puVar13 + 0x84) = 1.0 - fVar3;
  uVar16 = (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar5 >> 0x1d) & 4;
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = ABS(*(float *)(puVar13 + 0x10));
  if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
    fVar3 = 1.0;
  }
  if (0.0 < fVar2) {
    lVar29 = uVar15 - 0xd0;
    lVar30 = 2;
    lVar19 = uVar15 - 0x58;
    lVar23 = uVar15 - 0x48;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar13 + 0x94) = fVar2;
    *(float *)((int)puVar13 + 0x8c) = fVar2;
    *(float *)(puVar13 + 0x12) = fVar2;
    *(float *)(puVar13 + 0x11) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar3;
    *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar2;
    *(float *)((int)puVar13 + 0x94) = *(float *)((int)puVar13 + 0x94) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar29 + 0x88) = *(float *)((int)lVar29 + 0x78) * fVar2 * fVar2;
      iVar22 = (int)lVar19;
      lVar29 = lVar29 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
      lVar23 = lVar23 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar23 = uVar15 - 0x58;
    pfVar28 = (float *)&DAT_007358e0;
    lVar29 = lVar17;
    lVar19 = lVar23;
    do {
      fVar2 = *pfVar28;
      fVar3 = pfVar28[1];
      pfVar28 = pfVar28 + 2;
      *(float *)((int)lVar29 + 0x88) = *(float *)((int)lVar29 + 0x88) * fVar2;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
      lVar19 = lVar19 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar29 = 2;
    do {
      iVar22 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar25 = (int)lVar23;
      lVar23 = lVar23 + 0x10;
      fVar4 = fVar4 + *(float *)(iVar22 + 0x88) + *(float *)(iVar25 + 4) + *(float *)(iVar25 + 8) +
              *(float *)(iVar25 + 0xc);
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    fVar4 = (fVar4 + 0.7853982) * fVar5 + fVar1;
  }
  iVar22 = *(int *)(uVar7 + 0x20);
  *(float *)((int)pvVar9 + 0x88) = fVar4 * 2.0;
  if (-1 < iVar22) {
    pSVar11 = Splines[iVar22];
    iVar22 = pSVar11->cnt;
    if (0 < iVar22) {
      iVar25 = 0;
      pfVar28 = (float *)((int)pvVar9 + 0x68);
      pSVar26 = pSVar11;
      iVar20 = 0;
      do {
        if (0 < (int)pSVar26->points[0].w) {
          *pfVar28 = pSVar26->points[0].w;
          pfVar28 = pfVar28 + 1;
          *(short *)((int)pvVar9 + iVar25 + 0x58) = (short)iVar20;
          iVar25 = iVar25 + 2;
        }
        iVar21 = iVar20 + 1;
        pfVar27 = (float *)((int)pSVar11 + ((iVar21 - (iVar21 / iVar22) * iVar22) * 4 + 4) * 4);
        fVar4 = pSVar26->points[0].y - pfVar27[1];
        fVar5 = pSVar26->points[0].x - *pfVar27;
        fVar2 = pSVar26->points[0].z - pfVar27[2];
        fVar4 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
        pSVar26->points[0].w = fVar4;
        iVar22 = pSVar11->cnt;
        if (iVar20 < iVar22 + -1) {
          *(float *)((int)pvVar8 + 0x48) = *(float *)((int)pvVar8 + 0x48) + fVar4;
        }
        pSVar26 = (Spline *)pSVar26->points;
        iVar20 = iVar21;
      } while (iVar21 < iVar22);
    }
  }
  if (0 < *(short *)(uVar7 + 0x3a)) {
    puVar13[0x15] = (longlong)(int)*(short *)(uVar7 + 0x3a);
    puVar13[0x15] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x15] + 0.5));
    dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar13 + 0xac));
    *(float *)(uVar7 + 0x3c) = (float)((double)*(float *)((int)pvVar8 + 0x48) / dVar31) * 60.0;
  }
  if (-1 < *(int *)(uVar7 + 0x24)) {
    pSVar11 = Splines[*(int *)(uVar7 + 0x24)];
    iVar22 = pSVar11->cnt;
    if (0 < iVar22) {
      iVar25 = 0;
      pSVar26 = pSVar11;
      do {
        iVar20 = iVar25 + 1;
        iVar22 = iVar20 - (iVar20 / iVar22) * iVar22;
        fVar4 = pSVar26->points[0].y - *(float *)((int)pSVar11 + (iVar22 * 4 + 5) * 4);
        fVar5 = pSVar26->points[0].x - *(float *)((int)pSVar11 + (iVar22 * 4 + 4) * 4);
        fVar2 = pSVar26->points[0].z - *(float *)((int)pSVar11 + (iVar22 * 4 + 6) * 4);
        fVar4 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
        pSVar26->points[0].w = fVar4;
        iVar22 = pSVar11->cnt;
        if (iVar25 < iVar22 + -1) {
          *(float *)((int)pvVar8 + 0x4c) = *(float *)((int)pvVar8 + 0x4c) + fVar4;
        }
        pSVar26 = (Spline *)pSVar26->points;
        iVar25 = iVar20;
      } while (iVar20 < iVar22);
    }
  }
  puVar10 = (undefined4 *)pCam->control;
  *puVar10 = 0x3cf5c28f;
  puVar10[1] = 0x3e4ccccd;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[5] = 0;
  puVar10[4] = 0;
  pvVar8 = pCam->control;
  *(undefined4 *)((int)pvVar8 + 0x20) = 0x3cf5c28f;
  *(undefined4 *)((int)pvVar8 + 0x24) = 0x3e4ccccd;
  *(undefined4 *)((int)pvVar8 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar8 + 0x38) = 0;
  *(undefined4 *)((int)pvVar8 + 0x34) = 0;
  *(undefined4 *)((int)pvVar8 + 0x30) = 0;
  pvVar8 = GameCamera.pLastUpdCam;
  pCam->pos[0] = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[1] = *(float *)((int)pvVar8 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar8 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar8 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  pCam->mtx[0] = *pvVar8;
  pCam->mtx[1] = *(float *)((int)pvVar8 + 4);
  pCam->mtx[2] = *(float *)((int)pvVar8 + 8);
  pCam->mtx[3] = *(float *)((int)pvVar8 + 0xc);
  pCam->mtx[4] = *(float *)((int)pvVar8 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar8 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar8 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar8 + 0x1c);
  iVar22 = *(int *)(uVar7 + 0x54);
  pCam->mtx[8] = *(float *)((int)pvVar8 + 0x20);
  pCVar14 = Cuboids;
  pCam->mtx[9] = *(float *)((int)pvVar8 + 0x24);
  pCam->mtx[10] = *(float *)((int)pvVar8 + 0x28);
  fVar4 = *(float *)((int)pvVar8 + 0x2c);
  *(undefined4 *)(puVar13 + 0xe) = 0;
  pCam->mtx[0xb] = fVar4;
  *(undefined4 *)((int)puVar13 + 0x74) = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)((int)puVar13 + 0x7c) = 0x3f800000;
  hero::Hero_Warp(&pCVar14[iVar22].pos.x,(float *)(puVar13 + 0xe),0x72,0);
  return;
}



//==== 00041850  ns=camera::camera20  size=0xb88
// sig: void UpdateCamera_20(UpdateCam * pCam)
// callers(0): 
// callees(5): 000668d0 draw::UpdateViewContext; 000fecf0 mobyutil::MB_CosineInterpolate; 0010ce18 mobyutil::MB_PathMoveDist; 002ef9c8 mobyupdate_helpers::M1412_002ef9c8; 004fffb4 fastfunc::FastDecTimerS16

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera20::UpdateCamera_20(UpdateCam *pCam)

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
  short sVar13;
  short sVar14;
  void *pvVar15;
  int iVar16;
  Spline *pSVar17;
  Spline *pSVar18;
  Vec4 *pVVar19;
  undefined4 uVar20;
  MobyInstance *pMVar21;
  int iVar22;
  int iVar23;
  Vec4 *pVVar24;
  int iVar25;
  int iVar26;
  undefined8 in_r7;
  void *pvVar27;
  void *pvVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  
  pvVar15 = pCam->control;
  iVar16 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(short *)((int)pvVar15 + 0x54) == 0) {
    iVar22 = *(int *)(iVar16 + 0x20);
    iVar23 = *(int *)(iVar16 + 0x24);
    draw::LetterBoxOn = 1;
    *(undefined2 *)((int)pvVar15 + 0x54) = 1;
    pSVar17 = Splines[iVar22];
    iVar22 = *(int *)(iVar16 + 0x28);
    fVar2 = pSVar17->points[0].x;
    pSVar18 = Splines[iVar23];
    pCam->pos[0] = fVar2;
    fVar3 = pSVar17->points[0].y;
    pCam->pos[1] = fVar3;
    fVar4 = pSVar17->points[0].z;
    pCam->pos[2] = fVar4;
    pCam->pos[3] = pSVar17->points[0].w;
    fVar12 = DAT_00969f78;
    fVar11 = DAT_00969f74;
    fVar1 = hero::g_heroGravityDir;
    if (iVar22 < 0) {
      fVar9 = pSVar18->points[0].x;
      fVar10 = pSVar18->points[0].y;
      fVar5 = pSVar18->points[0].z;
      fVar8 = pSVar18->points[0].w;
    }
    else {
      fVar5 = *(float *)(iVar16 + 0x30);
      fVar6 = *(float *)(iVar16 + 0x2c);
      fVar7 = *(float *)(iVar16 + 0x34);
      fVar8 = MobyInstance[iVar22].pos.w;
      fVar9 = MobyInstance[iVar22].pos.x +
              GameCamera.orientMtx.up.x * fVar7 +
              GameCamera.orientMtx.forward.x * fVar6 + GameCamera.orientMtx.right.x * fVar5;
      fVar10 = MobyInstance[iVar22].pos.y +
               GameCamera.orientMtx.up.y * fVar7 +
               GameCamera.orientMtx.forward.y * fVar6 + GameCamera.orientMtx.right.y * fVar5;
      fVar5 = MobyInstance[iVar22].pos.z +
              GameCamera.orientMtx.up.z * fVar7 +
              GameCamera.orientMtx.forward.z * fVar6 + GameCamera.orientMtx.right.z * fVar5;
    }
    fVar10 = fVar10 - fVar3;
    fVar9 = fVar9 - fVar2;
    fVar5 = fVar5 - fVar4;
    fVar2 = 0.0;
    fVar3 = fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10;
    if (SQRT(fVar3) == 0.0) {
      pCam->mtx[3] = fVar8;
      pCam->mtx[0] = fVar9;
      pCam->mtx[2] = fVar5;
      pCam->mtx[1] = fVar10;
      fVar10 = fVar2;
      fVar5 = fVar2;
      fVar9 = fVar2;
    }
    else {
      fVar4 = 1.0 / SQRT(fVar3);
      pCam->mtx[3] = fVar8;
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar9 = fVar9 * fVar4;
      fVar10 = fVar10 * fVar4;
      fVar5 = fVar5 * fVar4;
    }
    pCam->mtx[0] = fVar9;
    fVar8 = -(fVar12 * fVar9) - -(fVar1 * fVar5);
    fVar12 = -(fVar11 * fVar5) - -(fVar12 * fVar10);
    fVar1 = -(fVar1 * fVar10) - -(fVar11 * fVar9);
    pCam->mtx[1] = fVar10;
    pCam->mtx[2] = fVar5;
    pCam->mtx[7] = 0.0;
    fVar11 = fVar1 * fVar1 + fVar12 * fVar12 + fVar8 * fVar8;
    fVar3 = fVar2;
    fVar4 = fVar2;
    if (SQRT(fVar11) != 0.0) {
      fVar2 = 1.0 / SQRT(fVar11);
      fVar2 = -(fVar11 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar11 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar11 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar3 = fVar12 * fVar2;
      fVar4 = fVar8 * fVar2;
      fVar2 = fVar1 * fVar2;
    }
    pCam->mtx[4] = fVar3;
    pCam->mtx[5] = fVar4;
    pCam->mtx[6] = fVar2;
    pCam->mtx[0xb] = 0.0;
    pCam->mtx[8] = fVar10 * fVar2 - fVar5 * fVar4;
    pCam->mtx[9] = fVar5 * fVar3 - fVar9 * fVar2;
    pCam->mtx[10] = fVar9 * fVar4 - fVar10 * fVar3;
  }
  else {
    dVar36 = (double)pCam->pos[0];
    dVar35 = (double)pCam->pos[1];
    dVar34 = (double)pCam->pos[2];
    pSVar17 = Splines[*(int *)(iVar16 + 0x20)];
    iVar22 = mobyutil::MB_PathMoveDist
                       ((double)(*(float *)(iVar16 + 0x3c) * mobyutil::g_FrameTime),pSVar17,
                        (longlong)(int)pCam + 0x30,(int)pvVar15 + 0x40,(int)pvVar15 + 0x44,in_r7,0);
    if ((*(short *)((int)pvVar15 + 0x56) != 0) &&
       (iVar23 = fastfunc::FastDecTimerS16((int)pvVar15 + 0x56), iVar23 != 0)) {
      iVar22 = 1;
    }
    if ((*(char *)(iVar16 + 0x39) == '\0') && (iVar22 == 0)) {
      iVar23 = 0;
      iVar22 = 0;
      pvVar27 = pvVar15;
      pvVar28 = pvVar15;
      do {
        sVar13 = *(short *)((int)pvVar28 + 0x58);
        if (sVar13 < 0) break;
        sVar14 = *(short *)((int)pvVar28 + 0x5a);
        if (sVar14 < 0) break;
        iVar25 = *(int *)((int)pvVar15 + 0x40);
        if (iVar25 < sVar14 && sVar13 <= iVar25) {
          fVar2 = 0.0;
          if (sVar13 < iVar25) {
            iVar26 = iVar25 - sVar13;
            pVVar24 = pSVar17->points + sVar13 + -1;
            do {
              iVar26 = iVar26 + -1;
              pVVar19 = pVVar24 + 1;
              pVVar24 = pVVar24 + 1;
              fVar2 = fVar2 + pVVar19->w;
            } while (0 < iVar26);
          }
          fVar3 = fVar2 + *(float *)((int)pvVar15 + 0x44);
          if (iVar25 < sVar14) {
            pVVar24 = pSVar17->points + iVar25 + -1;
            do {
              iVar25 = iVar25 + 1;
              pVVar19 = pVVar24 + 1;
              pVVar24 = pVVar24 + 1;
              fVar2 = fVar2 + pVVar19->w;
            } while (iVar25 < *(short *)((int)pvVar15 + iVar22 + 0x5a));
          }
          dVar31 = (double)mobyutil::MB_CosineInterpolate
                                     ((double)*(float *)((int)pvVar27 + 0x68),
                                      (double)*(float *)((int)pvVar27 + 0x6c),
                                      (double)(fVar3 / fVar2));
          fVar2 = (float)(dVar31 * 0.01745329238474369) * 0.5;
          fVar4 = fVar2 + 1.5707963;
          fVar3 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar3 = fVar2;
          }
          fVar1 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar1 = fVar4;
          }
          fVar11 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
            fVar11 = fVar3;
          }
          fVar3 = fVar11 * fVar11;
          fVar2 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar1 < 0.0) {
            fVar2 = fVar1;
          }
          fVar4 = fVar2 * fVar2;
          fVar1 = fVar3 * fVar3 * fVar11;
          fVar12 = fVar3 * fVar1;
          fVar8 = fVar4 * fVar4 * fVar2;
          fVar9 = fVar4 * fVar8;
          ViewContext.xratio =
               (fVar3 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar1 * 0.0083330255 + fVar3 * fVar11 * -0.16666657 + fVar11
               ) / (fVar4 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar8 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2);
          draw::UpdateViewContext();
        }
        iVar23 = iVar23 + 1;
        pvVar28 = (void *)((int)pvVar28 + 2);
        pvVar27 = (void *)((int)pvVar27 + 4);
        iVar22 = iVar22 + 2;
      } while (iVar23 < 7);
      fVar2 = (float)(dVar35 - (double)pCam->pos[1]);
      fVar3 = (float)(dVar36 - (double)pCam->pos[0]);
      fVar4 = (float)(dVar34 - (double)pCam->pos[2]);
      iVar22 = *(int *)(iVar16 + 0x28);
      fVar2 = *(float *)((int)pvVar15 + 0x50) + SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      *(float *)((int)pvVar15 + 0x50) = fVar2;
      if (iVar22 < 0) {
        mobyutil::MB_PathMoveDist
                  ((double)((fVar2 / *(float *)((int)pvVar15 + 0x48)) *
                           *(float *)((int)pvVar15 + 0x4c)),Splines[*(int *)(iVar16 + 0x24)],
                   &local_90,local_78,local_74);
        fVar2 = pCam->pos[0];
        fVar3 = pCam->pos[1];
        fVar4 = pCam->pos[2];
      }
      else {
        fVar1 = *(float *)(iVar16 + 0x30);
        fVar11 = *(float *)(iVar16 + 0x2c);
        fVar12 = *(float *)(iVar16 + 0x34);
        local_84 = MobyInstance[iVar22].pos.w;
        fVar2 = pCam->pos[0];
        fVar3 = pCam->pos[1];
        fVar4 = pCam->pos[2];
        local_90 = MobyInstance[iVar22].pos.x +
                   GameCamera.orientMtx.up.x * fVar12 +
                   GameCamera.orientMtx.forward.x * fVar11 + GameCamera.orientMtx.right.x * fVar1;
        local_8c = MobyInstance[iVar22].pos.y +
                   GameCamera.orientMtx.up.y * fVar12 +
                   GameCamera.orientMtx.forward.y * fVar11 + GameCamera.orientMtx.right.y * fVar1;
        local_88 = MobyInstance[iVar22].pos.z +
                   GameCamera.orientMtx.up.z * fVar12 +
                   GameCamera.orientMtx.forward.z * fVar11 + GameCamera.orientMtx.right.z * fVar1;
      }
      fVar9 = DAT_00969f78;
      fVar8 = DAT_00969f74;
      fVar12 = hero::g_heroGravityDir;
      fVar3 = local_8c - fVar3;
      fVar2 = local_90 - fVar2;
      fVar4 = local_88 - fVar4;
      fVar1 = 0.0;
      fVar11 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (SQRT(fVar11) == 0.0) {
        pCam->mtx[3] = local_84;
        pCam->mtx[0] = fVar2;
        pCam->mtx[2] = fVar4;
        pCam->mtx[1] = fVar3;
        fVar3 = fVar1;
        fVar4 = fVar1;
        fVar2 = fVar1;
      }
      else {
        fVar10 = 1.0 / SQRT(fVar11);
        pCam->mtx[3] = local_84;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar2 = fVar2 * fVar10;
        fVar3 = fVar3 * fVar10;
        fVar4 = fVar4 * fVar10;
      }
      pCam->mtx[0] = fVar2;
      pCam->mtx[1] = fVar3;
      fVar10 = -(fVar9 * fVar2) - -(fVar12 * fVar4);
      fVar9 = -(fVar8 * fVar4) - -(fVar9 * fVar3);
      pCam->mtx[2] = fVar4;
      pCam->mtx[7] = 0.0;
      fVar8 = -(fVar12 * fVar3) - -(fVar8 * fVar2);
      fVar5 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
      fVar11 = fVar1;
      fVar12 = fVar1;
      if (SQRT(fVar5) != 0.0) {
        fVar1 = 1.0 / SQRT(fVar5);
        fVar1 = -(fVar5 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar5 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar5 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar11 = fVar9 * fVar1;
        fVar12 = fVar10 * fVar1;
        fVar1 = fVar8 * fVar1;
      }
      pCam->mtx[4] = fVar11;
      pCam->mtx[5] = fVar12;
      pCam->mtx[6] = fVar1;
      pCam->mtx[0xb] = 0.0;
      pCam->mtx[8] = fVar3 * fVar1 - fVar4 * fVar12;
      pCam->mtx[9] = fVar4 * fVar11 - fVar2 * fVar1;
      pCam->mtx[10] = fVar2 * fVar12 - fVar3 * fVar11;
    }
    else {
      dVar34 = 0.5;
      fVar4 = *(float *)((int)pvVar15 + 0x88) * 0.5;
      fVar3 = fVar4 + 1.5707963;
      fVar2 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar2 = fVar4;
      }
      fVar1 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar1 = fVar3;
      }
      fVar11 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
        fVar11 = fVar2;
      }
      fVar4 = fVar11 * fVar11;
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      fVar3 = fVar2 * fVar2;
      fVar1 = fVar4 * fVar4 * fVar11;
      fVar12 = fVar4 * fVar1;
      fVar8 = fVar3 * fVar3 * fVar2;
      fVar9 = fVar3 * fVar8;
      ViewContext.xratio =
           (fVar4 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11) /
           (fVar3 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2);
      draw::UpdateViewContext();
      pMVar21 = MobyInstance;
      draw::LetterBoxOn = 0;
      iVar16 = *(int *)(iVar16 + 0x50);
      GameCamera.screenFade = 0.25;
      (pCam->activation).deactivate = 4;
      mobyupdate_helpers::M1412_002ef9c8(pMVar21 + iVar16);
      uVar20 = DAT_0096a240;
      mobyutil::MB_PathMoveDist
                (0x4024000000000000,DAT_0096a240,(longlong)(int)pCam + 0x30,local_80,local_7c);
      pCam->pos[2] = pCam->pos[2] + 2.0;
      dVar36 = 0.0;
      mobyutil::MB_PathMoveDist(0,uVar20,&local_a0,local_80,local_7c);
      fVar2 = local_9c - pCam->pos[1];
      fVar3 = local_a0 - pCam->pos[0];
      fVar4 = (local_98 + 1.5) - pCam->pos[2];
      dVar35 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      if ((double)(float)SQRT(dVar35) == dVar36) {
        pCam->mtx[0] = fVar3;
        pCam->mtx[1] = fVar2;
        pCam->mtx[2] = fVar4;
        pCam->mtx[3] = local_94;
        dVar34 = dVar36;
        dVar35 = dVar36;
        dVar31 = dVar36;
      }
      else {
        dVar31 = 1.0 / SQRT(dVar35);
        pCam->mtx[3] = local_94;
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - 1.0) *
                                 (double)(float)(dVar34 * dVar31) + dVar31);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - 1.0) *
                                 (double)(float)(dVar34 * dVar31) + dVar31);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar35 * dVar31) * dVar31 - 1.0) *
                        (double)(float)(dVar34 * dVar31) + dVar31);
        dVar31 = (double)(fVar3 * fVar1);
        dVar35 = (double)(fVar2 * fVar1);
        dVar34 = (double)(fVar4 * fVar1);
      }
      pCam->mtx[0] = (float)dVar31;
      pCam->mtx[1] = (float)dVar35;
      pCam->mtx[2] = (float)dVar34;
      fVar3 = (float)((double)DAT_00969f78 * dVar31 -
                     (double)(float)((double)hero::g_heroGravityDir * dVar34));
      fVar4 = (float)((double)DAT_00969f74 * dVar34 - (double)(float)((double)DAT_00969f78 * dVar35)
                     );
      fVar1 = (float)((double)hero::g_heroGravityDir * dVar35 -
                     (double)(float)((double)DAT_00969f74 * dVar31));
      pCam->mtx[7] = 0.0;
      pCam->mtx[0xb] = 0.0;
      dVar33 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)(-1.0 / dVar33);
      dVar32 = dVar36;
      if (dVar36 - dVar33 < 0.0) {
        dVar32 = (double)(fVar4 * fVar2);
      }
      dVar30 = dVar36;
      if (dVar36 - dVar33 < 0.0) {
        dVar30 = (double)(fVar3 * fVar2);
      }
      dVar29 = dVar36;
      if (dVar36 - dVar33 < 0.0) {
        dVar29 = (double)(fVar1 * fVar2);
      }
      if (dVar33 - dVar36 < 0.0) {
        dVar32 = (double)(fVar4 * fVar2);
      }
      if (dVar33 - dVar36 < 0.0) {
        dVar30 = (double)(fVar3 * fVar2);
      }
      if (dVar33 - dVar36 < 0.0) {
        dVar29 = (double)(fVar1 * fVar2);
      }
      pCam->mtx[4] = (float)dVar32;
      pCam->mtx[5] = (float)dVar30;
      pCam->mtx[6] = (float)dVar29;
      pCam->mtx[10] = (float)(dVar31 * dVar30 - (double)(float)(dVar35 * dVar32));
      pCam->mtx[8] = (float)(dVar35 * dVar29 - (double)(float)(dVar34 * dVar30));
      pCam->mtx[9] = (float)(dVar34 * dVar32 - (double)(float)(dVar31 * dVar29));
    }
  }
  return;
}



//==== 000423d8  ns=camera::camera20  size=0xe8
// sig: int ActivateCamera_20(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(1): 000410bc camera::camera20::Cam20_IsHeroInVolume

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera20::ActivateCamera_20(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if ((((pCurr == (UpdateCam *)0x0) || ((pCurr->activation).deactivate != 0)) ||
        (hero::g_heroStateType == 0xf)) && (iVar2 = Cam20_IsHeroInVolume(pCam), iVar2 != 0)) {
      if ((*(int *)(iVar1 + 0x48) < 0) || (hero::g_heroStateType == *(int *)(iVar1 + 0x48))) {
        if (((int)*(PlayerState *)(iVar1 + 0x44) < 0) ||
           (g_heroState == *(PlayerState *)(iVar1 + 0x44))) {
          iVar1 = 1;
        }
        else {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



//==== 000424c0  ns=stub  size=0x4
// sig: undefined STUB_000424c0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000424c0(void)

{
  return;
}



//==== 000424c4  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071dbe0 = 0x10000;
  return;
}



//==== 000424f0  ns=camera::camera21  size=0x62c
// sig: void InitCamera_21(UpdateCam * pCam)
// callers(0): 
// callees(1): 00053e38 camera::Camera_ClampAngles

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera21::InitCamera_21(UpdateCam *pCam)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  void *pvVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  float *pfVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong unaff_r31;
  int iVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x18] = in_f30;
  puVar8[0x19] = in_f31;
  puVar8[0x17] = unaff_r31;
  iVar10 = DAT_00a1a85c;
  iVar23 = ImportCameras + (int)((longlong)pCam->importCameraIdx << 5);
  puVar8[0x16] = unaff_r30;
  iVar20 = 0;
  iVar23 = *(int *)(iVar23 + 0x1c);
  *(undefined4 *)(iVar23 + 0x20) = 2;
  *(undefined2 *)(iVar23 + 0x30) = 0;
  *(undefined2 *)(iVar23 + 0x32) = 0;
  dVar30 = 0.0;
  piVar15 = *(int **)(iVar10 + *(int *)(iVar23 + 0x34) * 0x20 + 0x10);
  iVar22 = *piVar15;
  puVar8[0x15] = unaff_r29;
  dVar31 = dVar30;
  if (0 < iVar22 + -1) {
    iVar20 = 0;
    pfVar19 = (float *)&DAT_0092e494;
    piVar18 = piVar15;
    do {
      *pfVar19 = (float)dVar31;
      iVar20 = iVar20 + 1;
      pfVar9 = (float *)(piVar18 + 7);
      pfVar19 = pfVar19 + 1;
      piVar18 = piVar18 + 4;
      dVar31 = (double)(float)(dVar31 + (double)*pfVar9);
    } while (iVar20 < *piVar15 + -1);
  }
  iVar22 = *(int *)(iVar23 + 0x38);
  iVar21 = 0;
  (&DAT_0092e494)[iVar20] = (float)dVar31;
  piVar15 = *(int **)(iVar10 + iVar22 * 0x20 + 0x10);
  dVar31 = dVar30;
  if (0 < *piVar15 + -1) {
    iVar21 = 0;
    pfVar19 = (float *)&DAT_0092f434;
    piVar18 = piVar15;
    do {
      *pfVar19 = (float)dVar31;
      iVar21 = iVar21 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar9 = (float *)(piVar18 + 7);
      piVar18 = piVar18 + 4;
      dVar31 = (double)(float)(dVar31 + (double)*pfVar9);
    } while (iVar21 < *piVar15 + -1);
  }
  iVar23 = *(int *)(iVar23 + 0x3c);
  iVar22 = 0;
  (&DAT_0092f434)[iVar21] = (float)dVar31;
  piVar15 = *(int **)(iVar10 + iVar23 * 0x20 + 0x10);
  dVar31 = dVar30;
  if (0 < *piVar15 + -1) {
    iVar22 = 0;
    pfVar19 = (float *)&DAT_009303d4;
    piVar18 = piVar15;
    do {
      *pfVar19 = (float)dVar31;
      iVar22 = iVar22 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar9 = (float *)(piVar18 + 7);
      piVar18 = piVar18 + 4;
      dVar31 = (double)(float)(dVar31 + (double)*pfVar9);
    } while (iVar22 < *piVar15 + -1);
  }
  pvVar4 = pCam->control;
  (&DAT_009303d4)[iVar22] = (float)dVar31;
  *(undefined4 *)((int)pvVar4 + 0x88) = 1;
  *(undefined4 *)((int)pvVar4 + 0x8c) = 0;
  *(undefined4 *)((int)pvVar4 + 0x90) = 0;
  *(undefined4 *)((int)pvVar4 + 0x94) = 0;
  *(undefined4 *)((int)pvVar4 + 0x98) = 0;
  dVar31 = 1.0;
  DAT_00931374 = 0x3f800000;
  pvVar4 = pCam->control;
  *(float *)((int)pvVar4 + 0x60) = DAT_0071dc1c * 0.017453292;
  *(float *)((int)pvVar4 + 100) = DAT_0071dc20 * 0.017453292;
  *(undefined4 *)((int)pvVar4 + 0x68) = DAT_0071dc24;
  *(float *)((int)pvVar4 + 0x6c) = DAT_0071dc28 * 0.017453292;
  *(float *)((int)pvVar4 + 0x70) = DAT_0071dc2c * 0.017453292;
  pvVar5 = pCam->control;
  *(undefined4 *)((int)pvVar5 + 0x74) = 0;
  *(undefined4 *)((int)pvVar5 + 0x78) = 0;
  *(undefined4 *)((int)pvVar5 + 0x7c) = 0;
  *(undefined4 *)((int)pvVar5 + 0x80) = 0;
  *(undefined4 *)((int)pvVar5 + 0x84) = 0;
  fVar6 = (g_heroMobyPtr->transform).v1.x;
  fVar7 = (g_heroMobyPtr->transform).v1.y;
  fVar3 = ABS((g_heroMobyPtr->transform).v1.x);
  fVar1 = ABS((g_heroMobyPtr->transform).v1.y);
  *(float *)(puVar8 + 0xe) = fVar3 - fVar1;
  uVar2 = *(undefined4 *)((int)pvVar4 + 100);
  uVar12 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4;
  fVar6 = fVar3;
  if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
    fVar6 = fVar1;
  }
  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
  if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  dVar25 = dVar30;
  if (0.0 < fVar6) {
    lVar13 = uVar11 - 0xc0;
    lVar16 = uVar11 - 0x48;
    lVar17 = uVar11 - 0x38;
    lVar24 = 2;
    fVar6 = (fVar1 - fVar6) / (fVar1 + fVar6);
    fVar1 = fVar6 * fVar6;
    *(float *)((int)puVar8 + 0x94) = fVar6;
    *(float *)((int)puVar8 + 0x8c) = fVar6;
    *(float *)(puVar8 + 0x12) = fVar6;
    *(float *)(puVar8 + 0x11) = fVar6;
    fVar6 = fVar1 * fVar1;
    *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar1;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar6;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar6 * fVar1;
    do {
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar6 * fVar6;
      iVar23 = (int)lVar16;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar17 = uVar11 - 0x48;
    pfVar19 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar16 = lVar17;
    do {
      fVar6 = *pfVar19;
      fVar1 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar6;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar1;
      lVar16 = lVar16 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar13 = 2;
    do {
      iVar23 = (int)lVar14;
      iVar22 = (int)lVar17;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar23 + 0x88)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar3);
  }
  *(float *)((int)puVar8 + 0x74) = (float)dVar25;
  *(undefined4 *)(puVar8 + 0xf) = uVar2;
  *(undefined4 *)((int)puVar8 + 0x7c) = *(undefined4 *)((int)pvVar4 + 0x68);
  Camera_ClampAngles((longlong)(int)pCam + 0x30,uVar11 - 0x5c,&g_heroPosition);
  fVar3 = g_heroPosition.w;
  dVar26 = (double)(DAT_00969f74 * -1.5);
  dVar25 = (double)(hero::g_heroGravityDir * -1.5);
  dVar27 = (double)(DAT_00969f78 * -1.5);
  fVar6 = (float)((double)(g_heroPosition.y - pCam->pos[1]) + dVar26);
  fVar7 = (float)((double)(g_heroPosition.x - pCam->pos[0]) + dVar25);
  fVar1 = (float)((double)(g_heroPosition.z - pCam->pos[2]) + dVar27);
  dVar29 = (double)(fVar1 * fVar1 + fVar7 * fVar7 + fVar6 * fVar6);
  if ((double)(float)SQRT(dVar29) == dVar30) {
    pCam->mtx[0] = fVar7;
    pCam->mtx[1] = fVar6;
    pCam->mtx[2] = fVar1;
    pCam->mtx[3] = fVar3;
    dVar29 = dVar30;
    dVar32 = dVar30;
    dVar33 = dVar30;
  }
  else {
    dVar32 = 1.0 / SQRT(dVar29);
    pCam->mtx[3] = g_heroPosition.w;
    dVar32 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar32) * dVar32 - dVar31) *
                             (double)(float)(dVar32 * 0.5) + dVar32);
    dVar32 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar32) * dVar32 - dVar31) *
                             (double)(float)(dVar32 * 0.5) + dVar32);
    fVar3 = (float)(-(double)(float)((double)(float)(dVar29 * dVar32) * dVar32 - dVar31) *
                    (double)(float)(dVar32 * 0.5) + dVar32);
    dVar33 = (double)(fVar7 * fVar3);
    dVar32 = (double)(fVar6 * fVar3);
    dVar29 = (double)(fVar1 * fVar3);
  }
  pCam->mtx[0] = (float)dVar33;
  pCam->mtx[1] = (float)dVar32;
  pCam->mtx[2] = (float)dVar29;
  pCam->mtx[7] = (float)dVar30;
  fVar6 = (float)(dVar26 * dVar29 - (double)(float)(dVar27 * dVar32));
  fVar7 = (float)(dVar27 * dVar33 - (double)(float)(dVar25 * dVar29));
  fVar1 = (float)(dVar25 * dVar32 - (double)(float)(dVar26 * dVar33));
  dVar28 = (double)(fVar1 * fVar1 + fVar6 * fVar6 + fVar7 * fVar7);
  dVar25 = dVar30;
  dVar26 = dVar30;
  dVar27 = dVar30;
  if ((double)(float)SQRT(dVar28) != dVar30) {
    dVar25 = 1.0 / SQRT(dVar28);
    dVar25 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar25) * dVar25 - dVar31) *
                             (double)(float)(dVar25 * 0.5) + dVar25);
    dVar25 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar25) * dVar25 - dVar31) *
                             (double)(float)(dVar25 * 0.5) + dVar25);
    fVar3 = (float)(-(double)(float)((double)(float)(dVar28 * dVar25) * dVar25 - dVar31) *
                    (double)(float)(dVar25 * 0.5) + dVar25);
    dVar27 = (double)(fVar6 * fVar3);
    dVar26 = (double)(fVar7 * fVar3);
    dVar25 = (double)(fVar1 * fVar3);
  }
  pCam->mtx[4] = (float)dVar27;
  pCam->mtx[5] = (float)dVar26;
  pCam->mtx[6] = (float)dVar25;
  pCam->mtx[0xb] = (float)dVar30;
  piVar15 = &DAT_0071dc60;
  pCam->mtx[8] = (float)(dVar32 * dVar25 - (double)(float)(dVar29 * dVar26));
  pCam->mtx[9] = (float)(dVar29 * dVar27 - (double)(float)(dVar33 * dVar25));
  pCam->mtx[10] = (float)(dVar33 * dVar26 - (double)(float)(dVar32 * dVar27));
  iVar23 = 1;
  do {
    if (*piVar15 == 0) {
      *piVar15 = 10000;
    }
    iVar23 = iVar23 + 1;
    piVar15 = piVar15 + 0xc;
  } while (iVar23 < 0x28);
  return;
}



//==== 00042b48  ns=camera::camera21  size=0x122c
// sig: void UpdateCamera_21(UpdateCam * pCam)
// callers(0): 
// callees(8): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 00053e38 camera::Camera_ClampAngles; 000fc620 mobyutil::MB_randInt; 000fec94 mobyutil::MB_catmullRom; 00103ab0 mobyutil::MB_LerpRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502578 fastfunc::FastWrapRot

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera21::UpdateCamera_21(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  short sVar28;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar29;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x130;
  puVar16 = (ulonglong *)lVar23;
  *puVar16 = uVar21;
  puVar16[0x28] = in_LR;
  puVar16[0x21] = in_f27;
  puVar16[0x22] = in_f28;
  puVar16[0x23] = in_f29;
  puVar16[0x24] = in_f30;
  puVar16[0x25] = in_f31;
  puVar16[0x20] = unaff_r31;
  puVar16[0x19] = unaff_r24;
  puVar16[0x1d] = unaff_r28;
  iVar5 = ImportCameras;
  sVar28 = pCam->importCameraIdx;
  uVar29 = 0;
  puVar16[0x1a] = unaff_r25;
  puVar16[0x18] = unaff_r23;
  pvVar4 = pCam->control;
  puVar16[0x1f] = unaff_r30;
  puVar16[0x1e] = unaff_r29;
  iVar20 = DAT_00a1a85c;
  fVar42 = DAT_0096a248;
  iVar7 = DAT_0096a244;
  iVar24 = DAT_0096a240;
  DAT_00931378 = *(undefined4 *)((int)pvVar4 + 0x88);
  iVar5 = *(int *)(iVar5 + (int)((longlong)sVar28 << 5) + 0x1c);
  DAT_0093137c = *(undefined4 *)((int)pvVar4 + 0x8c);
  sVar28 = *(short *)(iVar5 + 0x32);
  iVar6 = *(int *)(DAT_00a1a85c + *(int *)(iVar5 + 0x34) * 0x20 + 0x10);
  puVar16[0x1c] = unaff_r27;
  puVar16[0x1b] = unaff_r26;
  if (iVar24 != iVar6) {
    uVar29 = ((LZCOUNT(*(int *)(iVar20 + *(int *)(iVar5 + 0x38) * 0x20 + 0x10) - iVar24) << 0x3a) >>
             0x3f) + 2;
  }
  iVar6 = (int)uVar29;
  fVar42 = ((float)(&DAT_0092e494)[iVar7 + iVar6 * 1000] + fVar42) /
           (float)(&DAT_0092f430)[iVar6 * 1000];
  DAT_00931384 = fVar42;
  if ((sVar28 < 2) &&
     (*(float *)((int)((uVar29 & 0xffffffff) << 2) + 0x71e3cc + sVar28 * 0xc) <= fVar42)) {
    sVar28 = sVar28 + 1;
    *(short *)(iVar5 + 0x32) = sVar28;
    iVar24 = DAT_0096a240;
  }
  pMVar19 = MobyInstance;
  if (sVar28 == 1) {
    if (sVar28 == 1) {
      DAT_00721e44 = DAT_0071e418 * 0.017453292;
    }
    DAT_00721e48 = DAT_0071e414 * 0.017453292;
  }
  if ((*(short *)(iVar5 + 0x30) < 3) &&
     (*(float *)((int)((uVar29 & 0xffffffff) << 2) + 0x71e39c + *(short *)(iVar5 + 0x30) * 0xc) <=
      fVar42)) {
    iVar7 = *(int *)(iVar5 + 0x24);
    iVar8 = *(int *)(iVar5 + 0x28);
    iVar9 = *(int *)(iVar5 + 0x2c);
    if (iVar24 == *(int *)(iVar20 + *(int *)((int)MobyInstance[iVar7].pVar + 0x60) * 0x20 + 0x10)) {
      MobyInstance[iVar7].setByGroup = '\x01';
      if (0 < *(short *)(iVar5 + 0x30)) {
        pMVar19[iVar8].setByGroup = '\x05';
        pvVar10 = pMVar19[iVar8].pVar;
        if (*(short *)(iVar5 + 0x30) == 2) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(4,0x42b1c);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pvVar10));
          *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
          pMVar19[iVar9].setByGroup = '\x05';
          auVar39 = loadVectorLeftIndexed(8,0x42b1c);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar41);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pMVar19[iVar9].pVar));
          *(undefined4 *)((int)pMVar19[iVar9].pVar + 0x1c8U & 0xfffffffc) = uVar15;
        }
        else {
          if (*(short *)(iVar5 + 0x30) == 3) {
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          }
          else {
            auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          }
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,auVar39
                               ,auVar41);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          uVar15 = storeVectorElementWordIndexed(auVar39,0x1c8,ZEXT48(pvVar10));
          *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
        }
      }
    }
    else if (iVar24 == *(int *)(iVar20 + *(int *)((int)MobyInstance[iVar8].pVar + 0x60) * 0x20 +
                               0x10)) {
      MobyInstance[iVar8].setByGroup = '\x01';
      if (0 < *(short *)(iVar5 + 0x30)) {
        iVar24 = mobyutil::MB_randInt(2);
        if (iVar24 == 0) {
          pMVar19[iVar9].setByGroup = '\x05';
          pvVar10 = pMVar19[iVar9].pVar;
          if (*(short *)(iVar5 + 0x30) == 2) {
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar40 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar40);
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
            pMVar19[iVar7].setByGroup = '\x05';
            auVar39 = loadVectorLeftIndexed(8,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar41);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pMVar19[iVar7].pVar));
            *(undefined4 *)((int)pMVar19[iVar7].pVar + 0x1c8U & 0xfffffffc) = uVar15;
          }
          else {
            if (*(short *)(iVar5 + 0x30) == 3) {
              auVar39 = loadVectorLeftIndexed(4,0x42b1c);
              auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            }
            else {
              auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            }
            auVar41 = ZEXT416(0xffffffff);
            auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
            auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                                 auVar39,auVar41);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            uVar15 = storeVectorElementWordIndexed(auVar39,0x1c8,ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
          }
        }
        else {
          pMVar19[iVar7].setByGroup = '\x05';
          pvVar10 = pMVar19[iVar7].pVar;
          if (*(short *)(iVar5 + 0x30) == 2) {
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar40 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar40);
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
            pMVar19[iVar9].setByGroup = '\x05';
            auVar39 = loadVectorLeftIndexed(8,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar41);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pMVar19[iVar9].pVar));
            *(undefined4 *)((int)pMVar19[iVar9].pVar + 0x1c8U & 0xfffffffc) = uVar15;
          }
          else {
            if (*(short *)(iVar5 + 0x30) == 3) {
              auVar39 = loadVectorLeftIndexed(4,0x42b1c);
              auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            }
            else {
              auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            }
            auVar41 = ZEXT416(0xffffffff);
            auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
            auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                                 auVar39,auVar41);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            uVar15 = storeVectorElementWordIndexed(auVar39,0x1c8,ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
          }
        }
      }
    }
    else {
      MobyInstance[iVar9].setByGroup = '\x01';
      if (0 < *(short *)(iVar5 + 0x30)) {
        pMVar19[iVar8].setByGroup = '\x05';
        pvVar10 = pMVar19[iVar8].pVar;
        if (*(short *)(iVar5 + 0x30) == 2) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(4,0x42b1c);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pvVar10));
          *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
          pMVar19[iVar7].setByGroup = '\x05';
          auVar39 = loadVectorLeftIndexed(8,0x42b1c);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar41);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pMVar19[iVar7].pVar));
          *(undefined4 *)((int)pMVar19[iVar7].pVar + 0x1c8U & 0xfffffffc) = uVar15;
        }
        else {
          if (*(short *)(iVar5 + 0x30) == 3) {
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          }
          else {
            auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          }
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,auVar39
                               ,auVar41);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          uVar15 = storeVectorElementWordIndexed(auVar39,0x1c8,ZEXT48(pvVar10));
          *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
        }
      }
    }
    *(short *)(iVar5 + 0x30) = *(short *)(iVar5 + 0x30) + 1;
  }
  uVar11 = (int)DAT_00931384 >> 0x1f;
  if ((iVar6 == 0) &&
     (uVar14 = (int)*(uint *)(&DAT_0071dc70 + *(int *)((int)pvVar4 + 0x8c) * 0x30) >> 0x1f,
     (int)((uVar14 >> 1 ^ *(uint *)(&DAT_0071dc70 + *(int *)((int)pvVar4 + 0x8c) * 0x30)) - uVar14)
     <= (int)((uVar11 >> 1 ^ (uint)DAT_00931384) - uVar11))) {
    *(int *)((int)pvVar4 + 0x8c) = *(int *)((int)pvVar4 + 0x8c) + 1;
  }
  else if ((iVar6 == 1) &&
          (uVar14 = (int)*(uint *)(&DAT_0071dc74 + *(int *)((int)pvVar4 + 0x8c) * 0x30) >> 0x1f,
          (int)((uVar14 >> 1 ^ *(uint *)(&DAT_0071dc74 + *(int *)((int)pvVar4 + 0x8c) * 0x30)) -
               uVar14) <= (int)((uVar11 >> 1 ^ (uint)DAT_00931384) - uVar11))) {
    *(int *)((int)pvVar4 + 0x8c) = *(int *)((int)pvVar4 + 0x8c) + 1;
  }
  else if ((iVar6 == 2) &&
          (uVar14 = (int)*(uint *)(&DAT_0071dc78 + *(int *)((int)pvVar4 + 0x8c) * 0x30) >> 0x1f,
          (int)((uVar14 >> 1 ^ *(uint *)(&DAT_0071dc78 + *(int *)((int)pvVar4 + 0x8c) * 0x30)) -
               uVar14) <= (int)((uVar11 >> 1 ^ (uint)DAT_00931384) - uVar11))) {
    *(int *)((int)pvVar4 + 0x8c) = *(int *)((int)pvVar4 + 0x8c) + 1;
  }
  uVar11 = *(uint *)((int)pvVar4 + 0x8c);
  uVar29 = (ulonglong)uVar11;
  iVar5 = uVar11 * 0x30;
  if ((&DAT_0071dc60)[uVar11 * 0xc] == 10000) {
    uVar29 = uVar29 - 1;
    *(int *)((int)pvVar4 + 0x8c) = (int)uVar29;
    fVar42 = 1.0;
  }
  else {
    if (iVar6 == 0) {
      fVar42 = *(float *)(&DAT_0071dc70 + iVar5);
      fVar12 = *(float *)(&DAT_0071dc40 + iVar5);
    }
    else if (iVar6 == 1) {
      fVar42 = *(float *)(&DAT_0071dc74 + iVar5);
      fVar12 = *(float *)(&DAT_0071dc44 + iVar5);
    }
    else {
      fVar42 = *(float *)(&DAT_0071dc78 + iVar5);
      fVar12 = *(float *)(&DAT_0071dc48 + iVar5);
    }
    fVar42 = (DAT_00931384 - fVar12) / (fVar42 - fVar12);
  }
  dVar38 = (double)fVar42;
  iVar5 = (int)(uVar29 << 4) * 3;
  dVar37 = 0.01745329238474369;
  dVar36 = (double)DAT_0071dc04;
  uVar31 = mobyutil::MB_LerpRot
                     ((double)(*(float *)((int)&DAT_0071dc1c + iVar5) * 0.017453292),
                      (double)(*(float *)(&DAT_0071dc4c + iVar5) * 0.017453292),dVar38);
  dVar34 = 0.20000000298023224;
  dVar35 = 0.0;
  dVar36 = (double)Cam_InterpAngles((double)*(float *)((int)pvVar4 + 0x60),uVar31,dVar36,
                                    0x3fc99999a0000000,0);
  *(float *)((int)pvVar4 + 0x60) = (float)dVar36;
  dVar36 = (double)DAT_0071dc08;
  uVar31 = mobyutil::MB_LerpRot
                     ((double)(float)((double)(float)(&DAT_0071dc20)
                                                     [*(int *)((int)pvVar4 + 0x8c) * 0xc] * dVar37),
                      (double)(float)((double)*(float *)(&DAT_0071dc50 +
                                                        *(int *)((int)pvVar4 + 0x8c) * 0x30) *
                                     dVar37),dVar38);
  dVar36 = (double)Cam_InterpAngles((double)*(float *)((int)pvVar4 + 100),uVar31,dVar36,dVar34,
                                    dVar35);
  iVar5 = *(int *)((int)pvVar4 + 0x8c);
  *(float *)((int)pvVar4 + 100) = (float)dVar36;
  fVar42 = Cam_InterpValues(*(float *)((int)pvVar4 + 0x68),
                            (float)((double)(float)((double)*(float *)(&DAT_0071dc54 + iVar5 * 0x30)
                                                   - (double)(float)(&DAT_0071dc24)[iVar5 * 0xc]) *
                                    dVar38 + (double)(float)(&DAT_0071dc24)[iVar5 * 0xc]),
                            DAT_0071dc0c,(float)dVar34,(float)dVar35,
                            (float *)(&DAT_0071dc1c + iVar5 * 0xc));
  *(float *)((int)pvVar4 + 0x68) = fVar42;
  dVar36 = (double)DAT_0071dc10;
  uVar31 = mobyutil::MB_LerpRot
                     ((double)(float)((double)(float)(&DAT_0071dc28)
                                                     [*(int *)((int)pvVar4 + 0x8c) * 0xc] * dVar37),
                      (double)(float)((double)*(float *)(&DAT_0071dc58 +
                                                        *(int *)((int)pvVar4 + 0x8c) * 0x30) *
                                     dVar37),dVar38);
  dVar36 = (double)Cam_InterpAngles((double)*(float *)((int)pvVar4 + 0x6c),uVar31,dVar36,dVar34,
                                    dVar35);
  *(float *)((int)pvVar4 + 0x6c) = (float)dVar36;
  dVar36 = (double)DAT_0071dc14;
  uVar31 = mobyutil::MB_LerpRot
                     ((double)(float)((double)(float)(&DAT_0071dc2c)
                                                     [*(int *)((int)pvVar4 + 0x8c) * 0xc] * dVar37),
                      (double)(float)((double)*(float *)(&DAT_0071dc5c +
                                                        *(int *)((int)pvVar4 + 0x8c) * 0x30) *
                                     dVar37),dVar38);
  dVar36 = (double)Cam_InterpAngles((double)*(float *)((int)pvVar4 + 0x70),uVar31,dVar36,dVar34,
                                    dVar35);
  pMVar19 = g_heroMobyPtr;
  *(float *)((int)pvVar4 + 0x70) = (float)dVar36;
  fVar12 = (pMVar19->transform).v1.x;
  fVar13 = (pMVar19->transform).v1.y;
  dVar37 = ABS((double)(pMVar19->transform).v1.x);
  dVar36 = ABS((double)(pMVar19->transform).v1.y);
  *(float *)(puVar16 + 0x10) = (float)(dVar37 - dVar36);
  fVar42 = *(float *)((int)pvVar4 + 0x60);
  uVar29 = (ulonglong)((uint)fVar12 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar16 + 0x10) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar13 >> 0x1d) & 4;
  dVar34 = dVar37;
  if ((double)*(float *)(puVar16 + 0x10) - dVar35 < 0.0) {
    dVar34 = dVar36;
  }
  fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  if ((double)*(float *)(puVar16 + 0x10) - dVar35 < 0.0) {
    dVar36 = dVar37;
  }
  fVar13 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar37 = dVar35;
  if (dVar35 < dVar34) {
    lVar22 = uVar21 - 0x120;
    lVar27 = uVar21 - 0x88;
    lVar25 = uVar21 - 0x98;
    lVar30 = 2;
    fVar1 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar16 + 0xa4) = fVar1;
    *(float *)((int)puVar16 + 0x9c) = fVar1;
    *(float *)(puVar16 + 0x14) = fVar1;
    *(float *)(puVar16 + 0x13) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar16 + 0x9c) = *(float *)((int)puVar16 + 0x9c) * fVar2;
    *(float *)(puVar16 + 0x14) = *(float *)(puVar16 + 0x14) * fVar1;
    *(float *)((int)puVar16 + 0xa4) = *(float *)((int)puVar16 + 0xa4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar22 + 0x98) = *(float *)((int)lVar22 + 0x88) * fVar1 * fVar1;
      iVar5 = (int)lVar25;
      lVar25 = lVar25 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar5 + 4) * fVar1 * fVar1;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar27 = uVar21 - 0x98;
    pfVar26 = (float *)&DAT_007358e0;
    lVar22 = lVar23;
    lVar25 = lVar27;
    do {
      fVar1 = *pfVar26;
      fVar2 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar22 + 0x98) = *(float *)((int)lVar22 + 0x98) * fVar1;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar2;
      lVar25 = lVar25 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar22 = 2;
    dVar36 = dVar35;
    do {
      iVar5 = (int)lVar23;
      iVar24 = (int)lVar27;
      lVar23 = lVar23 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar5 + 0x98)) + *(float *)(iVar24 + 4)
                        + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar37 = (double)((float)(dVar36 + 0.7853981852531433) * fVar12 + fVar13);
  }
  dVar36 = (double)fastfunc::FastWrapRot((float)dVar37,fVar42);
  DAT_00931380 = (float)dVar36;
  if (iVar6 == 0) {
    iVar5 = *(int *)((int)pvVar4 + 0x8c) * 0x30;
    dVar37 = (double)*(float *)(&DAT_0071dc34 + iVar5);
    dVar34 = (double)*(float *)(&DAT_0071dc64 + iVar5);
  }
  else if (iVar6 == 1) {
    iVar5 = *(int *)((int)pvVar4 + 0x8c) * 0x30;
    dVar37 = (double)*(float *)(&DAT_0071dc38 + iVar5);
    dVar34 = (double)*(float *)(&DAT_0071dc68 + iVar5);
  }
  else {
    iVar5 = *(int *)((int)pvVar4 + 0x8c) * 0x30;
    dVar37 = (double)*(float *)(&DAT_0071dc3c + iVar5);
    dVar34 = (double)*(float *)(&DAT_0071dc6c + iVar5);
  }
  if (dVar34 == dVar35 && dVar37 == dVar35) {
    fVar42 = *(float *)((int)pvVar4 + 0x94);
    if (*(int *)((int)pvVar4 + 0x94) == 0) {
      fVar42 = *(float *)((int)pvVar4 + 0x90);
    }
    dVar34 = (double)fVar42;
    *(float *)((int)pvVar4 + 0x98) =
         *(float *)((int)pvVar4 + 0x98) + -(*(float *)((int)pvVar4 + 0x98) * DAT_0071dc18);
    uVar31 = mobyutil::MB_catmullRom(0x3ff0000000000000,dVar35,0x3ff0000000000000,dVar35);
    dVar36 = (double)mobyutil::MB_LerpRot(dVar36,dVar34,uVar31);
  }
  else if (dVar34 == dVar35) {
    *(float *)((int)pvVar4 + 0x98) =
         *(float *)((int)pvVar4 + 0x98) + -(*(float *)((int)pvVar4 + 0x98) * DAT_0071dc18);
    uVar31 = mobyutil::MB_catmullRom(0x3ff0000000000000,dVar35,0x3ff0000000000000,dVar35);
    dVar36 = (double)mobyutil::MB_LerpRot(dVar36,dVar37,uVar31);
    *(float *)((int)pvVar4 + 0x90) = (float)dVar37;
    *(float *)((int)pvVar4 + 0x94) = (float)dVar34;
  }
  else {
    *(float *)((int)pvVar4 + 0x98) =
         (1.0 - *(float *)((int)pvVar4 + 0x98)) * DAT_0071dc18 + *(float *)((int)pvVar4 + 0x98);
    uVar31 = mobyutil::MB_catmullRom(0x3ff0000000000000,dVar35,0x3ff0000000000000,dVar35);
    dVar36 = (double)mobyutil::MB_LerpRot(dVar36,dVar34,uVar31);
    *(float *)((int)pvVar4 + 0x90) = (float)dVar37;
    *(float *)((int)pvVar4 + 0x94) = (float)dVar34;
  }
  uVar15 = *(undefined4 *)((int)pvVar4 + 100);
  *(float *)((int)puVar16 + 0x84) = (float)dVar36;
  *(undefined4 *)(puVar16 + 0x11) = uVar15;
  *(undefined4 *)((int)puVar16 + 0x8c) = *(undefined4 *)((int)pvVar4 + 0x68);
  Camera_ClampAngles((longlong)(int)pCam + 0x30,uVar21 - 0xac,&g_heroPosition);
  fVar3 = g_heroPosition.w;
  fVar1 = DAT_00969f74 * -1.5;
  dVar34 = (double)fVar1;
  dVar36 = (double)(hero::g_heroGravityDir * -1.5);
  fVar2 = DAT_00969f78 * -1.5;
  dVar37 = (double)fVar2;
  fVar42 = (float)((double)(g_heroPosition.y - pCam->pos[1]) + dVar34);
  fVar12 = (float)((double)(g_heroPosition.x - pCam->pos[0]) + dVar36);
  fVar13 = (float)((double)(g_heroPosition.z - pCam->pos[2]) + dVar37);
  *(float *)(puVar16 + 0xe) = hero::g_heroGravityDir * -1.5;
  *(float *)((int)puVar16 + 0x74) = fVar1;
  uVar15 = DAT_00969f7c;
  *(float *)(puVar16 + 0xf) = fVar2;
  *(undefined4 *)((int)puVar16 + 0x7c) = uVar15;
  fVar1 = fVar13 * fVar13 + fVar12 * fVar12 + fVar42 * fVar42;
  if ((double)SQRT(fVar1) == dVar35) {
    pCam->mtx[0] = fVar12;
    pCam->mtx[1] = fVar42;
    pCam->mtx[2] = fVar13;
    pCam->mtx[3] = fVar3;
    dVar38 = dVar35;
    dVar32 = dVar35;
    dVar33 = dVar35;
  }
  else {
    fVar2 = 1.0 / SQRT(fVar1);
    pCam->mtx[3] = fVar3;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar33 = (double)(fVar12 * fVar2);
    dVar32 = (double)(fVar42 * fVar2);
    dVar38 = (double)(fVar13 * fVar2);
  }
  pCam->mtx[0] = (float)dVar33;
  pCam->mtx[1] = (float)dVar32;
  pCam->mtx[2] = (float)dVar38;
  pCam->mtx[7] = 0.0;
  fVar42 = (float)(dVar36 * dVar32 - (double)(float)(dVar34 * dVar33));
  fVar12 = (float)(dVar34 * dVar38 - (double)(float)(dVar37 * dVar32));
  fVar13 = (float)(dVar37 * dVar33 - (double)(float)(dVar36 * dVar38));
  pCam->mtx[6] = fVar42;
  pCam->mtx[4] = fVar12;
  pCam->mtx[5] = fVar13;
  if (*(int *)((int)pvVar4 + 0x6c) != 0) {
    mobyutil::MB_RotateQuatAxisAngle(*(float *)((int)pvVar4 + 0x6c),pCam->mtx,pCam->mtx);
    fVar42 = pCam->mtx[1];
    fVar12 = pCam->mtx[0];
    fVar13 = pCam->mtx[2];
    fVar1 = *(float *)((int)puVar16 + 0x74);
    fVar2 = *(float *)(puVar16 + 0xf);
    fVar3 = *(float *)(puVar16 + 0xe);
    fVar17 = fVar13 * fVar13 + fVar12 * fVar12 + fVar42 * fVar42;
    dVar38 = dVar35;
    dVar32 = dVar35;
    dVar33 = dVar35;
    if ((double)SQRT(fVar17) != dVar35) {
      fVar18 = 1.0 / SQRT(fVar17);
      fVar18 = -(fVar17 * fVar18 * fVar18 - 1.0) * fVar18 * 0.5 + fVar18;
      fVar18 = -(fVar17 * fVar18 * fVar18 - 1.0) * fVar18 * 0.5 + fVar18;
      fVar18 = -(fVar17 * fVar18 * fVar18 - 1.0) * fVar18 * 0.5 + fVar18;
      dVar33 = (double)(fVar12 * fVar18);
      dVar32 = (double)(fVar42 * fVar18);
      dVar38 = (double)(fVar13 * fVar18);
    }
    pCam->mtx[0] = (float)dVar33;
    pCam->mtx[1] = (float)dVar32;
    pCam->mtx[2] = (float)dVar38;
    pCam->mtx[7] = 0.0;
    fVar42 = (float)((double)fVar3 * dVar32 - (double)(float)((double)fVar1 * dVar33));
    fVar12 = (float)((double)fVar1 * dVar38 - (double)(float)((double)fVar2 * dVar32));
    fVar13 = (float)((double)fVar2 * dVar33 - (double)(float)((double)fVar3 * dVar38));
    pCam->mtx[6] = fVar42;
    pCam->mtx[4] = fVar12;
    pCam->mtx[5] = fVar13;
  }
  if (*(int *)((int)pvVar4 + 0x70) != 0) {
    mobyutil::MB_RotateQuatAxisAngle(*(float *)((int)pvVar4 + 0x70),pCam->mtx,pCam->mtx);
    fVar42 = pCam->mtx[1];
    fVar12 = pCam->mtx[0];
    fVar13 = pCam->mtx[2];
    fVar1 = *(float *)((int)puVar16 + 0x74);
    fVar2 = *(float *)(puVar16 + 0xf);
    fVar3 = *(float *)(puVar16 + 0xe);
    fVar17 = fVar13 * fVar13 + fVar12 * fVar12 + fVar42 * fVar42;
    dVar38 = dVar35;
    dVar32 = dVar35;
    dVar33 = dVar35;
    if ((double)SQRT(fVar17) != dVar35) {
      fVar18 = 1.0 / SQRT(fVar17);
      fVar18 = -(fVar17 * fVar18 * fVar18 - 1.0) * fVar18 * 0.5 + fVar18;
      fVar18 = -(fVar17 * fVar18 * fVar18 - 1.0) * fVar18 * 0.5 + fVar18;
      fVar18 = -(fVar17 * fVar18 * fVar18 - 1.0) * fVar18 * 0.5 + fVar18;
      dVar33 = (double)(fVar12 * fVar18);
      dVar32 = (double)(fVar42 * fVar18);
      dVar38 = (double)(fVar13 * fVar18);
    }
    pCam->mtx[2] = (float)dVar38;
    pCam->mtx[0] = (float)dVar33;
    pCam->mtx[1] = (float)dVar32;
    pCam->mtx[7] = 0.0;
    fVar12 = (float)((double)fVar1 * dVar38 - (double)(float)((double)fVar2 * dVar32));
    fVar13 = (float)((double)fVar2 * dVar33 - (double)(float)((double)fVar3 * dVar38));
    fVar42 = (float)((double)fVar3 * dVar32 - (double)(float)((double)fVar1 * dVar33));
  }
  fVar1 = fVar42 * fVar42 + fVar12 * fVar12 + fVar13 * fVar13;
  dVar36 = dVar35;
  dVar34 = dVar35;
  if ((double)SQRT(fVar1) != dVar35) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar36 = (double)(fVar12 * fVar2);
    dVar35 = (double)(fVar13 * fVar2);
    dVar34 = (double)(fVar42 * fVar2);
  }
  pCam->mtx[4] = (float)dVar36;
  pCam->mtx[5] = (float)dVar35;
  pCam->mtx[0xb] = 0.0;
  pCam->mtx[6] = (float)dVar34;
  pCam->mtx[8] = (float)(dVar32 * dVar34 - (double)(float)(dVar38 * dVar35));
  pCam->mtx[9] = (float)(dVar38 * dVar36 - (double)(float)(dVar33 * dVar34));
  pCam->mtx[10] = (float)(dVar33 * dVar35 - (double)(float)(dVar32 * dVar36));
  *(int *)((int)pvVar4 + 0x88) = *(int *)((int)pvVar4 + 0x88) + 1;
  return;
}



//==== 00043d74  ns=camera::camera21  size=0x9c
// sig: int ActivateCamera_21(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera21::ActivateCamera_21(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x20);
  if ((iVar2 == 0) && (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x14)) {
    *(undefined4 *)(iVar1 + 0x20) = 1;
  }
  else if (iVar2 == 1) {
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x14) {
      return 1;
    }
    if ((pCurr == (UpdateCam *)0x0) || ((pCurr->activation).deactivate != 0)) {
      return 1;
    }
  }
  return 0;
}



//==== 00043e10  ns=camera::camera21  size=0x20
// sig: void ExitCamera_21(UpdateCam * pCam)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera21::ExitCamera_21(UpdateCam *pCam)

{
  if (hero::g_heroStateType != 0xf) {
    (pCam->activation).deactivate = 3;
  }
  return;
}



//==== 00043e30  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e468 = 0x10000;
  return;
}



//==== 00043e48  ns=camera::camera22  size=0x15c
// sig: int Cam22_IsHeroInVolume(UpdateCam * pCam)
// callers(1): 00044598 camera::camera22::Cam22_ModifyFollowCam
// callees(4): 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera22::Cam22_IsHeroInVolume(UpdateCam *pCam)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((-1 < *(int *)(iVar2 + 0x28)) &&
     (iVar1 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar2 + 0x28)),
     iVar1 != 0)) {
    return 0;
  }
  if (*(int *)(iVar2 + 0xc) < 0) {
    if (*(int *)(iVar2 + 0x10) < 0) {
      if (*(int *)(iVar2 + 8) < 0) {
        if (*(int *)(iVar2 + 0x14) < 0) {
          return 0;
        }
        iVar2 = mobyutil::PointInsideComplexPoly
                          (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar2 + 0x14)]->points,
                           Splines[*(int *)(iVar2 + 0x14)]->cnt);
      }
      else {
        iVar2 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar2 + 8));
      }
    }
    else {
      iVar2 = mobyutil::MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar2 + 0x10));
    }
  }
  else {
    iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc));
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



//==== 00043fc0  ns=camera::camera22  size=0x5a4
// sig: undefined ???_Cam22_ModifyFollowRot(void)
// callers(1): 00044598 camera::camera22::Cam22_ModifyFollowCam
// callees(1): 005026a0 fastfunc::FastSubRots

undefined8 camera::camera22::____Cam22_ModifyFollowRot(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar24;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0x120;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar10;
  puVar8[0x26] = in_LR;
  puVar8[0x19] = in_f21;
  puVar8[0x1a] = in_f22;
  puVar8[0x1b] = in_f23;
  puVar8[0x1c] = in_f24;
  puVar8[0x1d] = in_f25;
  puVar8[0x1e] = in_f26;
  puVar8[0x1f] = in_f27;
  puVar8[0x20] = in_f28;
  puVar8[0x21] = in_f29;
  puVar8[0x22] = in_f30;
  puVar8[0x23] = in_f31;
  dVar23 = 0.0;
  iVar7 = *(int *)(*(int *)(ImportCameras + (int)((longlong)*(short *)(param_3 + 0x84) << 5) + 0x1c)
                  + 0x48);
  dVar26 = (double)(float)GameCamera.field17_0x1b4._12_4_;
  dVar25 = (double)(float)GameCamera.field17_0x1b4._16_4_;
  dVar24 = (double)(float)GameCamera.field17_0x1b4._20_4_;
  if (param_1 != 0.0 || param_2 != 0.0) {
    dVar28 = (double)(Cuboids[iVar7].pos.y - *(float *)((int)GameCamera.pCurrentUpdCam + 0x34));
    dVar30 = (double)(Cuboids[iVar7].pos.x - *(float *)((int)GameCamera.pCurrentUpdCam + 0x30));
                    /* WARNING: Load size is inaccurate */
    dVar27 = (double)(Cuboids[iVar7].pos.z - *(float *)((int)GameCamera.pCurrentUpdCam + 0x38));
    fVar1 = (float)((double)*(float *)((int)GameCamera.pCurrentUpdCam + 8) * dVar24 +
                   (double)(float)((double)*GameCamera.pCurrentUpdCam * dVar26 +
                                  (double)(float)((double)*(float *)((int)GameCamera.pCurrentUpdCam
                                                                    + 4) * dVar25)));
    dVar21 = (double)fVar1;
    fVar2 = (float)(dVar27 * dVar24 +
                   (double)(float)(dVar30 * dVar26 + (double)(float)(dVar28 * dVar25)));
    dVar19 = (double)fVar2;
    dVar29 = -(double)(float)(dVar25 * dVar19 - dVar28);
    dVar28 = -(double)(float)(dVar25 * dVar21 -
                             (double)*(float *)((int)GameCamera.pCurrentUpdCam + 4));
    dVar31 = -(double)(float)(dVar26 * dVar19 - dVar30);
    dVar26 = -(double)(float)(dVar26 * dVar21 - (double)*GameCamera.pCurrentUpdCam);
    dVar30 = -(double)(float)(dVar24 * dVar19 - dVar27);
    dVar25 = -(double)(float)(dVar24 * dVar21 -
                             (double)*(float *)((int)GameCamera.pCurrentUpdCam + 8));
    fVar6 = SQRT((float)(dVar30 * dVar30 +
                        (double)(float)(dVar31 * dVar31 + (double)(float)(dVar29 * dVar29))));
    dVar27 = (double)fVar6;
    fVar5 = SQRT((float)(dVar25 * dVar25 +
                        (double)(float)(dVar26 * dVar26 + (double)(float)(dVar28 * dVar28))));
    dVar24 = (double)fVar5;
    if (param_2 != 0.0) {
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = (float)(ABS(dVar27) - ABS(dVar19));
      uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        dVar22 = ABS(dVar19);
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar19 = ABS((double)*(float *)(puVar8 + 0x10));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        dVar19 = ABS(dVar27);
      }
      dVar20 = dVar23;
      if (0.0 < dVar22) {
        lVar12 = uVar10 - 0x110;
        lVar14 = uVar10 - 0x78;
        lVar15 = uVar10 - 0x68;
        lVar18 = 2;
        fVar3 = (float)(dVar19 - dVar22) / (float)(dVar19 + dVar22);
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
          iVar7 = (int)lVar14;
          lVar12 = lVar12 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar15 = uVar10 - 0x78;
        pfVar16 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar14 = lVar15;
        do {
          fVar3 = *pfVar16;
          fVar4 = pfVar16[1];
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar14 = 2;
        lVar12 = lVar13;
        dVar19 = dVar23;
        do {
          iVar7 = (int)lVar12;
          lVar12 = lVar12 + 0x10;
          iVar9 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0xa8)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar6 + fVar2);
      }
      *(float *)(puVar8 + 0xe) = fVar5;
      *(float *)((int)puVar8 + 0x74) = fVar1;
      *(float *)(puVar8 + 0xf) = (float)(ABS(dVar24) - ABS(dVar21));
      uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
      dVar19 = ABS((double)*(float *)(puVar8 + 0xe));
      if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
        dVar19 = ABS(dVar21);
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar21 = ABS((double)*(float *)((int)puVar8 + 0x74));
      if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
        dVar21 = ABS(dVar24);
      }
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar22 = dVar23;
      if (0.0 < dVar19) {
        lVar12 = uVar10 - 0x110;
        lVar15 = uVar10 - 0x88;
        lVar14 = uVar10 - 0x98;
        lVar18 = 2;
        fVar6 = (float)(dVar21 - dVar19) / (float)(dVar21 + dVar19);
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar8 + 0x94) = fVar6;
        *(float *)((int)puVar8 + 0x8c) = fVar6;
        *(float *)(puVar8 + 0x12) = fVar6;
        *(float *)(puVar8 + 0x11) = fVar6;
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
        *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar6;
        *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar6 * fVar5;
        do {
          *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar6 * fVar6;
          iVar7 = (int)lVar14;
          lVar14 = lVar14 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar7 + 4) * fVar6 * fVar6;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar15 = uVar10 - 0x98;
        pfVar16 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar14 = lVar15;
        do {
          fVar6 = *pfVar16;
          fVar5 = pfVar16[1];
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar6;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar12 = 2;
        dVar19 = dVar23;
        do {
          iVar7 = (int)lVar13;
          iVar9 = (int)lVar15;
          lVar13 = lVar13 + 0x10;
          lVar15 = lVar15 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar22 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar2);
      }
      dVar19 = (double)fastfunc::FastSubRots((float)dVar20,(float)dVar22);
      if ((double)(float)(param_2 * 0.01745329238474369) < dVar19) {
        return 0;
      }
    }
    if (param_1 == dVar23) {
      uVar11 = 1;
    }
    else if ((double)(float)(dVar27 * dVar24) == dVar23) {
      uVar11 = 0;
    }
    else {
      dVar25 = (double)(float)((double)(float)(dVar30 * dVar25 +
                                              (double)(float)(dVar31 * dVar26 +
                                                             (double)(float)(dVar29 * dVar28))) /
                              (double)(float)(dVar27 * dVar24));
      dVar24 = dVar25;
      if (dVar25 - dVar23 < 0.0) {
        dVar24 = ABS(dVar25);
      }
      fVar1 = 1.0;
      if (dVar25 - dVar23 < 0.0) {
        fVar1 = -1.0;
      }
      dVar25 = (double)(float)(1.0 - dVar24);
      if ((double)(float)(1.0 - dVar24) - dVar23 < 0.0) {
        dVar25 = dVar23;
      }
      if ((float)(param_1 * 0.01745329238474369) <=
          ABS(-(-(((float)((double)(float)(dVar24 * dVar24) * dVar24) * DAT_007358cc +
                  (float)((double)(float)(dVar24 * dVar24) * (double)DAT_007358c8 +
                         (double)(float)(dVar24 * (double)DAT_007358c4 + (double)DAT_007358c0))) *
                  (float)SQRT(dVar25) - 1.5707964) * fVar1 - 1.5707964))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}



//==== 00044598  ns=camera::camera22  size=0x3fc
// sig: void Cam22_ModifyFollowCam(UpdateCam * pCam)
// callers(1): 00044994 camera::camera22::ActivateCamera_22
// callees(11): 0002e354 camera0::Cam0_SetCamHeight; 0002f31c camera0::Cam0_ForceLookAtPos; 0002f3b0 camera0::Cam0_RunningAtCamOff; 0002f3d8 camera0::Cam0_SetCamDist; 0002f414 camera0::Cam0_SetCamOfsZ; 00032bd4 camera0::Cam0_ClearModCamera; 00032c24 camera0::Cam0_SetModCamera; 00032d80 camera0::Cam0_SetCollData; 00043e48 camera::camera22::Cam22_IsHeroInVolume; 00043fc0 camera::camera22::???_Cam22_ModifyFollowRot; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera22::Cam22_ModifyFollowCam(UpdateCam *pCam)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  short sVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar9 = ZEXT48(&stack0x00000000) - 0x70;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  uVar13 = ZEXT48(Cuboids);
  pfVar2 = *(float **)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  uVar16 = ZEXT48(pfVar2);
  fVar3 = pfVar2[0x12];
  iVar11 = camera0::Cam0_SetModCamera(pCam);
  if (iVar11 < 1) {
    *(undefined2 *)(pfVar2 + 8) = 0;
    return;
  }
  iVar11 = Cam22_IsHeroInVolume(pCam);
  if (iVar11 == 0) {
    *(undefined2 *)(pfVar2 + 8) = 0;
    camera0::Cam0_ClearModCamera(pCam);
    return;
  }
  auVar20 = ZEXT416(0xffffffff);
  auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  bVar7 = true;
  auVar20 = ZEXT416(0xffffffff);
  auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
  *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) = 2;
  fVar8 = animationSpeed;
  *(short *)(pfVar2 + 8) = *(short *)(pfVar2 + 8) + 1;
  uVar1 = (uint)(fVar8 * 300.5);
  auVar20 = loadVectorLeftIndexed(lVar9,0x44564);
  auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  auVar21 = vectorShiftLeftIntegerWord(auVar23,auVar23);
  auVar20 = ZEXT416(0xffffffff);
  auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
  auVar20 = loadVectorLeftIndexed(8,0x44564);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  auVar21 = vectorShiftLeftIntegerWord(auVar23,auVar23);
  auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
  auVar20 = loadVectorLeftIndexed(0xc,0x44564);
  auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  iVar11 = (int)(fVar8 * 200.5);
  auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
  camera0::Cam0_SetCollData(0x3ff0000000000000,0x4028000000000000,0x3fbc28f5c0000000);
  uVar19 = 0;
  if ((ANALOG_STICKS.x != 0.0) || (uVar14 = (uint)*(ushort *)(pfVar2 + 8), ANALOG_STICKS.y != 0.0))
  {
    auVar21 = vectorSplatHalfWord(auVar24,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar21,0x20,uVar16);
    *(undefined2 *)(pfVar2 + 8) = uVar5;
    uVar14 = uVar1;
  }
  if ((int)uVar1 <= (int)(short)uVar14) {
    fVar4 = pfVar2[0xf];
    pfVar2[0xf] = (float)((int)fVar4 + 1);
    if ((int)(fVar8 * 400.5) <= (int)fVar4 + 1) {
      iVar12 = ____Cam22_ModifyFollowRot(0x403e000000000000,0,pCam);
      uVar14 = (uint)*(ushort *)(pfVar2 + 8);
      if (iVar12 != 0) {
        auVar21 = vectorSplatHalfWord(auVar23,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar21,0x20,uVar16);
        *(undefined2 *)(pfVar2 + 8) = uVar5;
        uVar14 = (int)(fVar8 * 560.5);
        goto LAB_00044818;
      }
    }
    bVar7 = false;
  }
LAB_00044818:
  sVar15 = (short)uVar14;
  if ((int)(fVar8 * 560.5) <= (int)sVar15) {
    bVar7 = true;
    sVar15 = 1;
    *(undefined2 *)(pfVar2 + 8) = 1;
    pfVar2[0xf] = 0.0;
  }
  if ((iVar11 < sVar15) && ((int)sVar15 < (int)uVar1)) {
    auVar21 = vectorSplatHalfWord(auVar20,1);
    auVar20 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    sVar15 = (short)iVar11;
    uVar5 = storeVectorElementHalfWordIndexed(auVar21,0x20,uVar16);
    *(undefined2 *)(pfVar2 + 8) = uVar5;
    uVar6 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x3c,uVar16);
    *(undefined4 *)((uint)(pfVar2 + 0xf) & 0xfffffffc) = uVar6;
  }
  dVar17 = (double)fastfunc::FastIntToDouble(sVar15);
  dVar18 = (double)fastfunc::FastIntToDouble(iVar11);
  if (bVar7) {
    camera0::Cam0_ForceLookAtPos
              ((double)(*pfVar2 * 0.017453292 * (float)(dVar17 / dVar18)),uVar19,
               (uVar13 + ((ulonglong)(uint)fVar3 & 0x1ffffff) * 0x80 & 0xffffffff) + 0x30);
  }
  if (pfVar2[0xd] != 0.0) {
    camera0::Cam0_SetCamDist((double)pfVar2[0xd],0x3f689374c0000000,&DAT_00044564,0);
    camera0::Cam0_RunningAtCamOff();
  }
  if (pfVar2[0xe] != 0.0) {
    camera0::Cam0_SetCamHeight((double)pfVar2[0xe],0x3f689374c0000000);
  }
  if (pfVar2[0x11] != 0.0) {
    camera0::Cam0_SetCamOfsZ((double)pfVar2[0x11],0x3f747ae140000000,&DAT_00044564,0);
  }
  return;
}



//==== 00044994  ns=camera::camera22  size=0x80
// sig: int ActivateCamera_22(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(1): 00044598 camera::camera22::Cam22_ModifyFollowCam

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera22::ActivateCamera_22(UpdateCam *pCam,UpdateCam *pCurr)

{
  if (((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) &&
      (-1 < *(short *)(*(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c)
                      + 0x20))) && (g_heroType == '\x02')) {
    Cam22_ModifyFollowCam(pCam);
  }
  return -1;
}



//==== 00044a14  ns=stub  size=0x4
// sig: undefined STUB_00044a14(void)
// callers(0): 
// callees(0): 

void stub::STUB_00044a14(void)

{
  return;
}



//==== 00044a18  ns=stub  size=0x4
// sig: undefined STUB_00044a18(void)
// callers(0): 
// callees(0): 

void stub::STUB_00044a18(void)

{
  return;
}



//==== 00044a1c  ns=stub  size=0x4
// sig: undefined STUB_00044a1c(void)
// callers(0): 
// callees(0): 

void stub::STUB_00044a1c(void)

{
  return;
}



//==== 00044a20  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e4d8 = 0x10000;
  return;
}



//==== 00044a38  ns=camera::camera23  size=0x194
// sig: int Cam23_IsTriggered(UpdateCam * pCam)
// callers(2): 00044c00 camera::camera23::Cam23_ModifyFollowCam; 0004511c camera::camera23::ActivateCamera_23
// callees(3): 00110b70 mobyutil::MB_IsPntInCuboid; 00110c60 mobyutil::MB_IsPntInCylinder; 00110d48 mobyutil::MB_IsPntInSphere

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera23::Cam23_IsTriggered(UpdateCam *pCam)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    if ((*(short *)(iVar1 + 0x46) == 0) || (g_heroType == '\x01')) {
      if ((*(short *)(iVar1 + 0x44) == 0) || (g_heroType != '\x01')) {
        if ((*(int *)(iVar1 + 0x34) == 0) ||
           (((*(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x164) & 0x7fffffff) <
             0x3c23d70b &&
            ((*(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b0) & 0x7fffffff) <
             0x3c23d70b)))) {
          if ((((*(int *)(iVar1 + 0xc) < 0) ||
               (iVar2 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc)),
               iVar2 == 0)) &&
              ((*(int *)(iVar1 + 0x10) < 0 ||
               (iVar2 = mobyutil::MB_IsPntInCylinder
                                  (&g_heroPosition,(longlong)*(int *)(iVar1 + 0x10)), iVar2 == 0))))
             && ((*(int *)(iVar1 + 8) < 0 ||
                 (iVar2 = mobyutil::MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8)),
                 iVar2 == 0)))) {
            iVar2 = 0;
            *(undefined2 *)(iVar1 + 0x26) = 1;
          }
          else {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



//==== 00044c00  ns=camera::camera23  size=0x51c
// sig: void Cam23_ModifyFollowCam(UpdateCam * pCam)
// callers(1): 0004511c camera::camera23::ActivateCamera_23
// callees(9): 0002e354 camera0::Cam0_SetCamHeight; 0002f064 camera0::Cam0_SetCamPull; 0002f3b0 camera0::Cam0_RunningAtCamOff; 0002f3d8 camera0::Cam0_SetCamDist; 0002f414 camera0::Cam0_SetCamOfsZ; 00032bd4 camera0::Cam0_ClearModCamera; 00032c24 camera0::Cam0_SetModCamera; 00032cf0 camera0::Cam0_ForceElv; 00044a38 camera::camera23::Cam23_IsTriggered

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera23::Cam23_ModifyFollowCam(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  void *pvVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar7 = *(uint *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar19 = Cam23_IsTriggered(pCam);
  if (iVar19 == 0) {
    if (*(int *)(uVar7 + 0x20) != 0) {
      *(undefined2 *)(uVar7 + 0x26) = 1;
    }
    *(undefined4 *)(uVar7 + 0x20) = 0;
    camera0::Cam0_ClearModCamera(pCam);
  }
  else {
    iVar19 = camera0::Cam0_SetModCamera(pCam);
    if (iVar19 < 1) {
      if (*(int *)(uVar7 + 0x20) != 0) {
        *(undefined2 *)(uVar7 + 0x26) = 1;
      }
      *(undefined4 *)(uVar7 + 0x20) = 0;
    }
    else if ((g_downButtons & (L1|L2)) == 0) {
      iVar19 = *(int *)(uVar7 + 0x20);
      if (iVar19 < 2) {
        pfVar9 = (float *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5));
        fVar1 = pfVar9[1];
        fVar2 = *pfVar9;
        fVar3 = pfVar9[2];
        fVar10 = fVar3 - g_heroPosition.z;
        fVar5 = (fVar2 - g_heroPosition.x) * hero::g_heroGravityDir +
                (fVar1 - g_heroPosition.y) * DAT_00969f74;
        fVar4 = fVar10 * DAT_00969f78 + fVar5;
        fVar11 = -(DAT_00969f74 * fVar4 - (fVar1 - g_heroPosition.y));
        fVar12 = -(hero::g_heroGravityDir * fVar4 - (fVar2 - g_heroPosition.x));
        fVar13 = -(DAT_00969f78 * fVar4 - fVar10);
        fVar4 = *(float *)(uVar7 + 0x2c);
        fVar17 = -(fVar10 * DAT_00969f78 + fVar5);
        fVar10 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
        *(float *)(uVar7 + 0x3c) = fVar17;
        *(float *)(uVar7 + 0x38) = fVar10;
        fVar5 = 0.0;
        if ((*(uint *)(uVar7 + 0x2c) & 0x7fffffff) != 0x3fc90fdb) {
          fVar5 = fVar4 + 1.5707963;
          fVar11 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar11 = fVar4;
          }
          fVar12 = 3.1415925 - fVar5;
          if (fVar5 - (3.1415925 - fVar5) < 0.0) {
            fVar12 = fVar5;
          }
          fVar13 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar11 < 0.0) {
            fVar13 = fVar11;
          }
          fVar4 = fVar13 * fVar13;
          fVar11 = -3.1415925 - fVar5;
          if ((-3.1415925 - fVar5) - fVar12 < 0.0) {
            fVar11 = fVar12;
          }
          fVar5 = fVar11 * fVar11;
          fVar15 = fVar4 * fVar4 * fVar13;
          fVar16 = fVar4 * fVar15;
          fVar12 = fVar5 * fVar5 * fVar11;
          fVar14 = fVar5 * fVar12;
          fVar5 = -(fVar10 * ((fVar4 * fVar16 * 2.601887e-06 +
                              fVar16 * -0.0001980741 +
                              fVar15 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13) /
                             (fVar5 * fVar14 * 2.601887e-06 +
                             fVar14 * -0.0001980741 +
                             fVar12 * 0.0083330255 + fVar5 * fVar11 * -0.16666657 + fVar11)) -
                   fVar17);
        }
        *(float *)(uVar7 + 0x40) = fVar5;
        pvVar18 = GameCamera.pCurrentUpdCam;
        puVar8 = *(undefined4 **)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(float *)((int)GameCamera.pCurrentUpdCam + 0x30) = fVar2;
        *(float *)((int)pvVar18 + 0x34) = fVar1;
        *(float *)((int)pvVar18 + 0x38) = fVar3;
        *(undefined4 *)((int)pvVar18 + 0x3c) = 0;
        puVar8[0x57] = *(undefined4 *)(uVar7 + 0x38);
        fVar4 = *(float *)(uVar7 + 0x3c);
        puVar8[0x58] = fVar4;
        fVar5 = *(float *)(uVar7 + 0x40);
        puVar8[0x3c] = fVar5;
        fVar15 = g_heroPosition.x;
        fVar10 = fVar4 * DAT_00969f74;
        fVar11 = fVar4 * DAT_00969f78;
        fVar12 = fVar5 * DAT_00969f78;
        fVar13 = fVar5 * DAT_00969f74;
        fVar17 = g_heroPosition.x + -(fVar4 * hero::g_heroGravityDir);
        fVar14 = g_heroPosition.x + -(fVar5 * hero::g_heroGravityDir);
        puVar8[0x24] = fVar17;
        fVar16 = g_heroPosition.y;
        fVar2 = fVar2 - fVar17;
        fVar10 = g_heroPosition.y + -fVar10;
        fVar13 = g_heroPosition.y + -fVar13;
        fVar1 = fVar1 - fVar10;
        puVar8[0x25] = fVar10;
        fVar17 = g_heroPosition.z;
        fVar10 = g_heroPosition.z + -fVar11;
        fVar11 = g_heroPosition.z + -fVar12;
        fVar3 = fVar3 - fVar10;
        puVar8[0x26] = fVar10;
        fVar10 = g_heroPosition.w;
        puVar8[0x4c] = fVar2;
        puVar8[0x27] = fVar10;
        puVar8[0x4d] = fVar1;
        puVar8[0x4f] = 0;
        puVar8[0x50] = fVar2;
        puVar8[0x51] = fVar1;
        puVar8[0x53] = 0;
        puVar8[0x4e] = fVar3;
        puVar8[0x52] = fVar3;
        puVar8[0x20] = fVar14;
        puVar8[0x21] = fVar13;
        puVar8[0x22] = fVar11;
        puVar8[0x23] = fVar10;
        puVar8[0x34] = fVar14;
        puVar8[0x35] = fVar13;
        puVar8[0x36] = fVar11;
        puVar8[0x37] = fVar10;
        puVar8[0x10] = fVar15;
        puVar8[0x11] = fVar16;
        puVar8[0x12] = fVar17;
        puVar8[0x13] = fVar10;
        puVar8[0x28] = fVar15;
        puVar8[0x29] = fVar16;
        puVar8[0x2a] = fVar17;
        puVar8[0x2b] = fVar10;
        *puVar8 = *(undefined4 *)((int)pvVar18 + 0x30);
        puVar8[1] = *(undefined4 *)((int)pvVar18 + 0x34);
        puVar8[2] = *(undefined4 *)((int)pvVar18 + 0x38);
        puVar8[3] = *(undefined4 *)((int)pvVar18 + 0x3c);
        puVar8[0x7c] = *(undefined4 *)((int)pvVar18 + 0x30);
        puVar8[0x7d] = *(undefined4 *)((int)pvVar18 + 0x34);
        puVar8[0x7e] = *(undefined4 *)((int)pvVar18 + 0x38);
        uVar6 = *(undefined4 *)((int)pvVar18 + 0x3c);
        puVar8[0x80] = 0;
        puVar8[0x7f] = uVar6;
        puVar8[0xd] = 0;
        puVar8[9] = fVar5;
        puVar8[10] = fVar4;
        puVar8[0xe] = 0;
        puVar8[0xc] = 0;
        puVar8[0xb] = 0;
        *(undefined2 *)((int)puVar8 + 0x22) = 0;
        iVar19 = *(int *)(uVar7 + 0x20);
      }
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      *(int *)(uVar7 + 0x20) = iVar19 + 1;
      auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0x20,0x44bcc);
      auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                           auVar21);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      if ((int)(animationSpeed * 200.5) < iVar19 + 1) {
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x20,
                           (ulonglong)uVar7);
        *(undefined4 *)(uVar7 + 0x20 & 0xfffffffc) = uVar6;
      }
      if (*(int *)(uVar7 + 0x38) != 0) {
        camera0::Cam0_SetCamDist
                  ((double)*(float *)(uVar7 + 0x38),0x3f689374c0000000,&DAT_00044bcc,0);
        camera0::Cam0_RunningAtCamOff();
      }
      if (*(int *)(uVar7 + 0x3c) != 0) {
        camera0::Cam0_SetCamHeight((double)*(float *)(uVar7 + 0x3c),0x3f689374c0000000);
      }
      if (*(int *)(uVar7 + 0x40) != 0) {
        camera0::Cam0_SetCamOfsZ
                  ((double)*(float *)(uVar7 + 0x40),0x3f747ae140000000,&DAT_00044bcc,0);
      }
      if (*(int *)(uVar7 + 0x28) != 0) {
        camera0::Cam0_ForceElv((double)(*(float *)(uVar7 + 0x28) * 0.017453292));
      }
      if (*(short *)(uVar7 + 0x24) == 0) {
        camera0::Cam0_SetCamPull(0);
      }
    }
    else {
      if (*(int *)(uVar7 + 0x20) != 0) {
        *(undefined2 *)(uVar7 + 0x26) = 1;
      }
      *(undefined4 *)(uVar7 + 0x20) = 0;
      camera0::Cam0_ClearModCamera(pCam);
    }
  }
  return;
}



//==== 0004511c  ns=camera::camera23  size=0xa0
// sig: int ActivateCamera_23(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(2): 00044a38 camera::camera23::Cam23_IsTriggered; 00044c00 camera::camera23::Cam23_ModifyFollowCam

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera23::ActivateCamera_23(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(short *)(iVar1 + 0x26) == 0) {
    if ((g_gameMode == GAME_MODE_NORMAL) || (iVar2 = Cam23_IsTriggered(pCam), iVar2 == 0)) {
      Cam23_ModifyFollowCam(pCam);
    }
    else {
      *(undefined2 *)(iVar1 + 0x26) = 0;
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
  }
  return 0;
}



//==== 000451bc  ns=stub  size=0x4
// sig: undefined STUB_000451bc(void)
// callers(0): 
// callees(0): 

void stub::STUB_000451bc(void)

{
  return;
}



//==== 000451c0  ns=stub  size=0x4
// sig: undefined STUB_000451c0(void)
// callers(0): 
// callees(0): 

void stub::STUB_000451c0(void)

{
  return;
}



//==== 000451c4  ns=stub  size=0x4
// sig: undefined STUB_000451c4(void)
// callers(0): 
// callees(0): 

void stub::STUB_000451c4(void)

{
  return;
}



//==== 000451c8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e548 = 0x10000;
  return;
}



//==== 000451f0  ns=camera::camera3  size=0x50c
// sig: undefined Cam3_InitSplinePos(void)
// callers(1): 00046418 camera::camera3::InitCamera_3
// callees(2): 0010d7a0 mobyutil::MB_PathFollowToPos; 00502758 fastfunc::FastDoubleToInt

void camera::camera3::Cam3_InitSplinePos(int param_1)

{
  double dVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  Spline *pSVar8;
  Spline *pSVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  int iVar18;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar19;
  ulonglong unaff_r27;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong uVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar22;
  ulonglong in_f29;
  undefined8 uVar23;
  ulonglong in_f30;
  undefined8 uVar24;
  ulonglong in_f31;
  double dVar25;
  undefined1 auVar26 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x110;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar13;
  puVar12[0x24] = in_LR;
  puVar12[0x1f] = in_f29;
  puVar12[0x20] = in_f30;
  puVar12[0x21] = in_f31;
  puVar12[0x1e] = unaff_r31;
  puVar12[0x18] = unaff_r25;
  iVar18 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(undefined4 *)(iVar18 + 0xc0) = 0;
  *(undefined4 *)(iVar18 + 0xcc) = 0x3fc00000;
  iVar4 = *(int *)(iVar3 + 0x30);
  puVar12[0x1d] = unaff_r30;
  puVar12[0x1c] = unaff_r29;
  puVar12[0x1b] = unaff_r28;
  puVar12[0x1a] = unaff_r27;
  puVar12[0x19] = unaff_r26;
  puVar12[0x17] = unaff_r24;
  puVar12[0x16] = unaff_r23;
  puVar12[0x15] = unaff_r22;
  puVar12[0x14] = unaff_r21;
  if (iVar4 == 3) {
    *(undefined4 *)(iVar18 + 0xcc) = 0x3f000000;
  }
  iVar4 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 200) = 0x3e567750;
  *(undefined4 *)(iVar4 + 0xe0) = 0x40c00000;
  *(undefined4 *)(iVar4 + 0xe4) = 0x3f000000;
  *(undefined4 *)(iVar4 + 0xf0) = 0x40000000;
  puVar5 = *(undefined4 **)(param_1 + 0x70);
  puVar5[4] = 0x3c23d70a;
  puVar5[5] = 0x3e333333;
  dVar25 = 0.0;
  puVar5[6] = 0;
  *(undefined2 *)(puVar5 + 7) = 0;
  puVar5[8] = 0x3a03126f;
  puVar5[9] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  iVar18 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 0x50) = 0x3c23d70a;
  *(undefined4 *)(iVar18 + 0x54) = 0x3e99999a;
  *(undefined4 *)(iVar18 + 0x58) = 0x3e4ccccd;
  *(undefined2 *)(iVar18 + 0x5c) = 0;
  *(undefined4 *)(iVar18 + 0x3c) = 0;
  *(undefined4 *)(iVar18 + 0x38) = 0;
  *(undefined4 *)(iVar18 + 0x34) = 0;
  *(undefined4 *)(iVar18 + 0x30) = 0;
  iVar18 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 0x10c) = 0;
  *(undefined4 *)(iVar18 + 0x108) = 0;
  *(undefined4 *)(iVar18 + 0x104) = 0;
  *(undefined4 *)(iVar18 + 0x100) = 0;
  *(undefined4 *)(iVar18 + 300) = 0;
  *(undefined4 *)(iVar18 + 0x128) = 0;
  *(undefined4 *)(iVar18 + 0x124) = 0;
  *(undefined4 *)(iVar18 + 0x120) = 0;
  *(undefined4 *)(iVar18 + 0x140) = 0x40400000;
  *(undefined4 *)(iVar18 + 0x130) = 0x3b449ba6;
  *(undefined4 *)(iVar18 + 0x134) = 0x3dcccccd;
  *(undefined4 *)(iVar18 + 0x138) = 0x3e4ccccd;
  *(undefined4 *)(iVar18 + 0x13c) = 0;
  iVar18 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar18 + 0x150) = 0;
  *(undefined4 *)(iVar18 + 0x154) = 0;
  *(undefined4 *)(iVar18 + 0x158) = 0;
  *(undefined4 *)(iVar18 + 0x15c) = 0;
  *(undefined4 *)(iVar18 + 0x160) = 1;
  if ((*(int *)(iVar3 + 0x30) == 2) && (*(short *)(iVar3 + 0x34) == 0)) {
    pSVar8 = Splines[*(int *)(iVar3 + 0x28)];
    uVar21 = ZEXT48(pSVar8);
    puVar6 = *(uint **)(DAT_00a1a85c + *(int *)(iVar3 + 0x24) * 0x20 + 0x10);
    pSVar9 = Splines[*(int *)(iVar3 + 0x20)];
    *(undefined2 *)(iVar3 + 0x34) = 1;
    uVar7 = pSVar8->cnt;
    pSVar10 = Splines[*(int *)(iVar3 + 0x2c)];
    uVar20 = ZEXT48(pSVar10);
    if (0 < (int)uVar7) {
      iVar18 = 0;
      uVar24 = 0x4034000000000000;
      uVar23 = 0x4014000000000000;
      lVar14 = uVar21 + 0x1c;
      uVar19 = uVar21;
      do {
        mobyutil::MB_PathFollowToPos
                  (uVar24,uVar23,dVar25,pSVar9,uVar19 + 0x10,uVar13 - 0x90,uVar13 - 0x80,
                   uVar13 - 0x7c);
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)uVar19 + 0x10) = *(undefined4 *)((int)uVar19 + 0x1c);
        auVar26 = loadVectorLeftIndexed(0x90,lVar16);
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar14);
        *(undefined4 *)((uint)lVar14 & 0xfffffffc) = uVar11;
        uVar7 = pSVar8->cnt;
        lVar14 = lVar14 + 0x10;
        uVar19 = uVar19 + 0x10;
      } while (iVar18 < (int)uVar7);
    }
    if (0 < (int)uVar7) {
      lVar14 = 0;
      lVar15 = (ulonglong)uVar7 - 1;
      do {
        lVar17 = lVar14;
        lVar14 = fastfunc::FastDoubleToInt
                           ((double)*(float *)((int)&pSVar8->points[0].w + (int)(lVar15 << 4)));
        lVar15 = fastfunc::FastDoubleToInt((double)*(float *)((int)uVar21 + 0x1c));
        lVar15 = lVar15 - lVar14;
        if ((int)lVar15 < 0) {
          lVar15 = lVar15 + (ulonglong)(uint)pSVar9->cnt;
        }
        *(undefined4 *)((int)puVar12 + 0x94) = 0;
        dVar22 = dVar25;
        if (0 < (int)lVar15) {
          do {
            lVar15 = lVar15 + -1;
            fVar2 = (float)(dVar22 + (double)pSVar9->points
                                             [(int)((lVar17 + lVar14) -
                                                   (longlong)((int)(lVar17 + lVar14) / pSVar9->cnt)
                                                   * (longlong)pSVar9->cnt)].w);
            dVar22 = (double)fVar2;
            *(float *)((int)puVar12 + 0x94) = fVar2;
          } while (0 < (int)lVar15);
        }
        *(float *)((int)uVar21 + 0x14) = (float)dVar22;
        uVar21 = uVar21 + 0x10;
        lVar14 = lVar17 + 1;
        lVar15 = lVar17;
      } while ((int)(lVar17 + 1) < pSVar8->cnt);
    }
    uVar7 = pSVar10->cnt;
    if (0 < (int)uVar7) {
      iVar18 = 0;
      uVar24 = 0x4034000000000000;
      uVar23 = 0x4014000000000000;
      lVar14 = uVar20 + 0x1c;
      uVar21 = uVar20;
      do {
        mobyutil::MB_PathFollowToPos
                  (uVar24,uVar23,dVar25,puVar6,uVar21 + 0x10,uVar13 - 0x90,uVar13 - 0x80,
                   uVar13 - 0x7c);
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)uVar21 + 0x10) = *(undefined4 *)((int)uVar21 + 0x1c);
        auVar26 = loadVectorLeftIndexed(0x90,lVar16);
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar14);
        *(undefined4 *)((uint)lVar14 & 0xfffffffc) = uVar11;
        uVar7 = pSVar10->cnt;
        lVar14 = lVar14 + 0x10;
        uVar21 = uVar21 + 0x10;
      } while (iVar18 < (int)uVar7);
    }
    if (0 < (int)uVar7) {
      lVar16 = (ulonglong)uVar7 - 1;
      lVar14 = 0;
      do {
        lVar16 = fastfunc::FastDoubleToInt
                           ((double)*(float *)((int)&pSVar10->points[0].w + (int)(lVar16 << 4)));
        lVar15 = fastfunc::FastDoubleToInt((double)*(float *)((int)uVar20 + 0x1c));
        lVar15 = lVar15 - lVar16;
        if ((int)lVar15 < 0) {
          lVar15 = lVar15 + (ulonglong)*puVar6;
        }
        *(undefined4 *)((int)puVar12 + 0x94) = 0;
        dVar22 = dVar25;
        if (0 < (int)lVar15) {
          do {
            lVar15 = lVar15 + -1;
            dVar1 = dVar22 + (double)(float)puVar6[(int)((lVar14 + lVar16) -
                                                        (longlong)
                                                        ((int)(lVar14 + lVar16) / (int)*puVar6) *
                                                        (longlong)(int)*puVar6) * 4 + 7];
            dVar22 = (double)(float)dVar1;
            *(float *)((int)puVar12 + 0x94) = (float)dVar1;
          } while (0 < (int)lVar15);
        }
        *(float *)((int)uVar20 + 0x14) = (float)dVar22;
        lVar15 = lVar14 + 1;
        uVar20 = uVar20 + 0x10;
        lVar16 = lVar14;
        lVar14 = lVar15;
      } while ((int)lVar15 < pSVar10->cnt);
    }
  }
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}



//==== 00045728  ns=camera::camera3  size=0xcd8
// sig: void UpdateCamera_3(UpdateCam * pCam)
// callers(0): 
// callees(6): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 0010ce18 mobyutil::MB_PathMoveDist; 0010d7a0 mobyutil::MB_PathFollowToPos; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502758 fastfunc::FastDoubleToInt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera3::UpdateCamera_3(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float *pfVar6;
  int *piVar7;
  Spline *pSVar8;
  Spline *pSVar9;
  Spline *pSVar10;
  Vec4 *speed;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  undefined8 in_r7;
  Spline *pSVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [12];
  
  fVar28 = DAT_0096a248;
  iVar11 = DAT_0096a244;
  pvVar5 = pCam->control;
  dVar27 = 0.009999999776482582;
  pfVar6 = *(float **)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  dVar26 = (double)*pfVar6;
  fVar29 = pfVar6[8];
  if (pfVar6[0xc] == 0.0) {
    *(float *)((int)pvVar5 + 0x154) = DAT_0096a248;
    *(int *)((int)pvVar5 + 0x150) = iVar11;
    mobyutil::MB_PathMoveDist
              (0x3ff0000000000000,Splines[(int)fVar29],&local_120,(int)pvVar5 + 0x150,
               (int)pvVar5 + 0x154,in_r7,0);
    *(float *)((int)pvVar5 + 0x80) = local_120;
    *(float *)((int)pvVar5 + 0x84) = local_11c;
    *(float *)((int)pvVar5 + 0x88) = local_118;
    pSVar8 = Splines[(int)fVar29];
    *(undefined4 *)((int)pvVar5 + 0x8c) = local_114;
    speed = pSVar8->points + iVar11 + -1;
    fVar29 = (float)((double)speed[2].y - (double)speed[1].y);
    fVar1 = (float)((double)speed[2].x - (double)speed[1].x);
    fVar2 = (float)((double)speed[2].z - (double)speed[1].z);
    dVar25 = 0.0;
    fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar29 * fVar29);
    dVar24 = 0.17499999701976776;
    fVar28 = (speed[1].w * (fVar28 / *(float *)(DAT_0096a240 + iVar11 * 0x10 + 0x1c))) / fVar3;
    dVar22 = dVar25;
    if (0.0 - fVar3 < 0.0) {
      dVar22 = (double)(fVar28 * fVar29);
    }
    dVar20 = dVar25;
    if (0.0 - fVar3 < 0.0) {
      dVar20 = (double)(fVar28 * fVar2);
    }
    dVar21 = dVar25;
    if (0.0 - fVar3 < 0.0) {
      dVar21 = (double)(fVar28 * fVar1);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar22 = (double)(fVar28 * fVar29);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar20 = (double)(fVar28 * fVar2);
    }
    if (fVar3 - 0.0 < 0.0) {
      dVar21 = (double)(fVar28 * fVar1);
    }
    dVar23 = (double)(float)((double)speed[1].y + dVar22);
    dVar22 = (double)(float)((double)speed[1].z + dVar20);
    fVar28 = Cam_InterpValues(pCam->pos[0],(float)((double)speed[1].x + dVar21),(float)dVar27,0.175,
                              0.0,&speed->x);
    fVar29 = pCam->pos[1];
    pCam->pos[0] = fVar28;
    fVar29 = Cam_InterpValues(fVar29,(float)dVar23,(float)dVar27,(float)dVar24,(float)dVar25,
                              &speed->x);
    pCam->pos[1] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[2],(float)dVar22,(float)dVar27,(float)dVar24,(float)dVar25,
                              &speed->x);
    pCam->pos[2] = fVar29;
  }
  else if (pfVar6[0xc] == 2.8026e-45) {
    uVar18 = 0;
    pSVar8 = Splines[(int)fVar29];
    pSVar9 = Splines[(int)pfVar6[0xb]];
    piVar7 = *(int **)(DAT_00a1a85c + (int)pfVar6[9] * 0x20 + 0x10);
    pSVar10 = Splines[(int)pfVar6[10]];
    uVar17 = (ulonglong)(uint)pSVar9->cnt - 1;
    uVar19 = uVar18;
    pSVar16 = pSVar9;
    if (0 < pSVar9->cnt) {
      do {
        iVar11 = fastfunc::FastDoubleToInt
                           ((double)*(float *)((int)&pSVar9->points[0].w + (int)(uVar17 << 4)));
        iVar12 = fastfunc::FastDoubleToInt((double)pSVar16->points[0].w);
        uVar19 = uVar18;
        if (iVar12 < iVar11) {
          if (iVar11 <= DAT_0096a244) break;
joined_r0x00045a4c:
          if (DAT_0096a244 < iVar12) break;
        }
        else if (iVar11 <= DAT_0096a244) goto joined_r0x00045a4c;
        uVar19 = uVar18 + 1;
        uVar17 = uVar18;
        uVar18 = uVar19;
        pSVar16 = (Spline *)pSVar16->points;
      } while ((int)uVar19 < pSVar9->cnt);
    }
    *(int *)((int)pvVar5 + 0x160) = (int)uVar19;
    iVar11 = pSVar9->cnt;
    iVar12 = (int)uVar19 + iVar11 + -1;
    iVar12 = iVar12 - (iVar12 / iVar11) * iVar11;
    dVar25 = 0.0;
    iVar11 = (int)((uVar19 & 0xfffffff) << 4);
    dVar24 = (double)*(float *)((int)pSVar9 + (iVar12 * 4 + 4) * 4);
    dVar21 = (double)*(float *)((int)&pSVar9->points[0].y + iVar11);
    dVar20 = (double)*(float *)((int)&pSVar10->points[0].y + iVar11);
    dVar22 = dVar26;
    if (0.0 - dVar24 < 0.0) {
      dVar22 = dVar24;
    }
    dVar26 = dVar22;
    if (dVar24 - 0.0 < 0.0) {
      dVar26 = dVar24;
    }
    iVar11 = fastfunc::FastDoubleToInt
                       ((double)*(float *)((int)pSVar9 + (iVar12 * 4 + 7) * 4),dVar22);
    iVar13 = DAT_0096a244 - iVar11;
    dVar22 = dVar25;
    if (iVar13 < 0) {
      iVar13 = iVar13 + *piVar7;
    }
    for (; 0 < iVar13; iVar13 = iVar13 + -1) {
      iVar15 = iVar11 - (iVar11 / *piVar7) * *piVar7;
      iVar11 = iVar11 + 1;
      dVar22 = (double)(float)(dVar22 + (double)(float)piVar7[iVar15 * 4 + 7]);
    }
    dVar22 = (double)(float)((double)(float)(dVar22 + (double)DAT_0096a248) / dVar21);
    dVar24 = (double)(float)(dVar20 * dVar22);
    fastfunc::FastDoubleToInt((double)*(float *)((int)pSVar10 + iVar12 * 0x10 + 0x1c),dVar22);
    mobyutil::MB_PathMoveDist(dVar24,pSVar8,&local_e0,local_b8,local_b4);
    dVar22 = (double)*(float *)((int)pSVar10 + iVar12 * 0x10 + 0x10);
    dVar24 = (double)*(float *)((int)pvVar5 + 0x10);
    pfVar14 = (float *)&DAT_000456fc;
    if (dVar25 - dVar22 < 0.0) {
      dVar27 = (double)(float)(dVar22 * dVar27);
    }
    dVar22 = dVar24 - 0.0001500000071246177;
    if (dVar24 - dVar27 < 0.0) {
      dVar22 = dVar24 + 0.0001500000071246177;
    }
    dVar22 = (double)(float)dVar22;
    if (ABS((float)(dVar24 - dVar27)) - 0.00015 < 0.0) {
      dVar22 = dVar27;
    }
    *(float *)((int)pvVar5 + 0x10) = (float)dVar22;
    dVar24 = 0.17499999701976776;
    fVar29 = Cam_InterpValues(pCam->pos[0],local_e0,(float)dVar22,0.175,(float)dVar25,
                              (float *)&DAT_000456fc);
    pCam->pos[0] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[1],local_dc,*(float *)((int)pvVar5 + 0x10),(float)dVar24,
                              (float)dVar25,pfVar14);
    pCam->pos[1] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[2],local_d8,*(float *)((int)pvVar5 + 0x10),(float)dVar24,
                              (float)dVar25,pfVar14);
    pCam->pos[2] = fVar29;
  }
  else {
    pSVar8 = Splines[(int)fVar29];
    if ((int)pfVar6[9] < 0) {
      mobyutil::MB_PathFollowToPos
                (0x4034000000000000,0x3ff0000000000000,0,pSVar8,&g_heroPosition,&local_110,local_c0,
                 local_bc,&DAT_000456fc,0);
      if (*(short *)((int)pfVar6 + 0x36) == 1) {
        fVar29 = pfVar6[0xe] * -4.0;
      }
      else {
        fVar29 = pfVar6[0xe];
      }
      mobyutil::MB_PathMoveDist((double)fVar29,pSVar8,&local_110,local_c0,local_bc);
      local_11c = local_10c;
      local_118 = local_108;
    }
    else {
      mobyutil::MB_PathMoveDist
                ((double)pfVar6[0xe],DAT_0096a240,&local_110,local_b0,local_ac,DAT_0096a240,1);
      mobyutil::MB_PathFollowToPos
                (0x4034000000000000,0x3ff0000000000000,0,pSVar8,&local_110,&local_120,local_c0,
                 local_bc,&DAT_000456fc,0);
      local_110 = local_120;
    }
    pfVar14 = (float *)&DAT_000456fc;
    dVar24 = 0.17499999701976776;
    dVar22 = 0.0;
    fVar28 = Cam_InterpValues(pCam->pos[0],local_110,(float)dVar27,0.175,0.0,(float *)&DAT_000456fc)
    ;
    fVar29 = pCam->pos[1];
    pCam->pos[0] = fVar28;
    fVar29 = Cam_InterpValues(fVar29,local_11c,(float)dVar27,(float)dVar24,(float)dVar22,pfVar14);
    pCam->pos[1] = fVar29;
    fVar29 = Cam_InterpValues(pCam->pos[2],local_118,(float)dVar27,(float)dVar24,(float)dVar22,
                              pfVar14);
    pCam->pos[2] = fVar29;
  }
  if ((int)pfVar6[9] < 0) {
    pSVar8 = Splines[(int)pfVar6[8]];
    mobyutil::MB_PathFollowToPos
              (0x4034000000000000,0x3ff0000000000000,0,pSVar8,&g_heroPosition,&local_100,local_c0,
               local_bc,&DAT_000456fc,0);
    if ((Level == Oltanis) && (pfVar6[0xc] == 0.0)) {
      mobyutil::MB_PathMoveDist(dVar26,pSVar8,&local_d0,local_c0,local_bc);
    }
    else {
      mobyutil::MB_PathMoveDist(dVar26,pSVar8,&local_d0,local_c0,local_bc);
    }
    local_100 = g_heroPosition.x + (local_d0 - local_100);
    local_fc = g_heroPosition.y + (local_cc - local_fc);
    local_f8 = g_heroPosition.z + (local_c8 - local_f8);
  }
  else {
    mobyutil::MB_PathMoveDist(dVar26,DAT_0096a240,&local_100,local_a8,local_a4,&hero::g_heroMtx,1);
  }
  dVar22 = 0.0;
  fVar29 = SQRT((float)GameCamera.field17_0x1b4._4_4_ * (float)GameCamera.field17_0x1b4._4_4_ +
                GameCamera.field16_0x1b0 * GameCamera.field16_0x1b0 +
                (float)GameCamera.field17_0x1b4._0_4_ * (float)GameCamera.field17_0x1b4._0_4_);
  fVar28 = *(float *)((int)pvVar5 + 0xcc) / fVar29;
  dVar26 = dVar22;
  if (0.0 - fVar29 < 0.0) {
    dVar26 = (double)((float)GameCamera.field17_0x1b4._0_4_ * fVar28);
  }
  dVar24 = dVar22;
  if (0.0 - fVar29 < 0.0) {
    dVar24 = (double)(GameCamera.field16_0x1b0 * fVar28);
  }
  dVar25 = dVar22;
  if (0.0 - fVar29 < 0.0) {
    dVar25 = (double)((float)GameCamera.field17_0x1b4._4_4_ * fVar28);
  }
  if (fVar29 - 0.0 < 0.0) {
    dVar26 = (double)((float)GameCamera.field17_0x1b4._0_4_ * fVar28);
  }
  if (fVar29 - 0.0 < 0.0) {
    dVar24 = (double)(GameCamera.field16_0x1b0 * fVar28);
  }
  if (fVar29 - 0.0 < 0.0) {
    dVar25 = (double)((float)GameCamera.field17_0x1b4._4_4_ * fVar28);
  }
  fVar29 = (float)(dVar26 + (double)local_fc) - pCam->pos[1];
  fVar1 = (float)(dVar24 + (double)local_100) - pCam->pos[0];
  fVar28 = (float)(dVar25 + (double)local_f8) - pCam->pos[2];
  dVar24 = (double)*(float *)((int)pvVar5 + 0x50);
  fVar2 = fVar28 * fVar28 + fVar1 * fVar1 + fVar29 * fVar29;
  dVar26 = dVar22;
  if (SQRT(fVar2) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar28 = fVar28 * fVar3 * pCam->mtx[2] +
             fVar1 * fVar3 * pCam->mtx[0] + fVar29 * fVar3 * pCam->mtx[1];
    fVar29 = fVar28;
    if (fVar28 - 0.0 < 0.0) {
      fVar29 = ABS(fVar28);
    }
    dVar26 = (double)(1.0 - fVar29);
    if ((double)(1.0 - fVar29) - 0.0 < 0.0) {
      dVar26 = dVar22;
    }
    fVar1 = 1.0;
    if (fVar28 - 0.0 < 0.0) {
      fVar1 = -1.0;
    }
    dVar26 = -(double)(-((fVar29 * fVar29 * fVar29 * DAT_007358cc +
                         fVar29 * fVar29 * DAT_007358c8 + fVar29 * DAT_007358c4 + DAT_007358c0) *
                         (float)SQRT(dVar26) - 1.5707964) * fVar1 - 1.5707964);
  }
  dVar25 = dVar24 - 0.0001500000071246177;
  if (dVar24 - dVar27 < 0.0) {
    dVar25 = dVar24 + 0.0001500000071246177;
  }
  dVar25 = (double)(float)dVar25;
  if (ABS((float)(dVar24 - dVar27)) - 0.00015 < 0.0) {
    dVar25 = dVar27;
  }
  *(float *)((int)pvVar5 + 0x50) = (float)dVar25;
  dVar26 = (double)Cam_InterpAngles(0,dVar26,dVar25,0x3fc6666660000000,0);
  mobyutil::MB_RotateQuatAxisAngle((float)dVar26,pCam->mtx,pCam->rot);
  fVar29 = pCam->mtx[1];
  fVar28 = pCam->mtx[0];
  fVar1 = pCam->mtx[2];
  dVar26 = (double)(float)GameCamera.field17_0x1b4._0_4_;
  dVar27 = (double)(float)GameCamera.field17_0x1b4._4_4_;
  dVar24 = (double)GameCamera.field16_0x1b0;
  fVar2 = fVar1 * fVar1 + fVar28 * fVar28 + fVar29 * fVar29;
  if ((double)SQRT(fVar2) == dVar22) {
    fVar3 = pCam->mtx[1];
    pCam->rot[0] = pCam->mtx[0];
    fVar4 = pCam->mtx[2];
    pCam->rot[1] = fVar3;
    fVar3 = pCam->mtx[3];
    pCam->rot[2] = fVar4;
    dVar25 = dVar22;
    dVar20 = dVar22;
    dVar21 = dVar22;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar2);
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar3 = pCam->mtx[3];
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar21 = (double)(fVar28 * fVar4);
    dVar20 = (double)(fVar29 * fVar4);
    dVar25 = (double)(fVar1 * fVar4);
  }
  pCam->rot[3] = fVar3;
  pCam->rot[2] = (float)dVar25;
  pCam->rot[1] = (float)dVar20;
  pCam->rot[0] = (float)dVar21;
  dVar25 = dVar22;
  dVar20 = dVar22;
  dVar21 = dVar22;
  if ((double)SQRT(fVar2) != dVar22) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    dVar21 = (double)(fVar28 * fVar3);
    dVar20 = (double)(fVar29 * fVar3);
    dVar25 = (double)(fVar1 * fVar3);
  }
  pCam->mtx[0] = (float)dVar21;
  pCam->mtx[1] = (float)dVar20;
  pCam->mtx[2] = (float)dVar25;
  fVar29 = (float)(dVar27 * dVar21 - (double)(float)(dVar24 * dVar25));
  fVar28 = (float)(dVar26 * dVar25 - (double)(float)(dVar27 * dVar20));
  fVar1 = (float)(dVar24 * dVar20 - (double)(float)(dVar26 * dVar21));
  pCam->mtx[7] = 0.0;
  fVar2 = fVar1 * fVar1 + fVar28 * fVar28 + fVar29 * fVar29;
  dVar26 = dVar22;
  dVar27 = dVar22;
  if ((double)SQRT(fVar2) != dVar22) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    dVar26 = (double)(fVar28 * fVar3);
    dVar22 = (double)(fVar29 * fVar3);
    dVar27 = (double)(fVar1 * fVar3);
  }
  pCam->mtx[4] = (float)dVar26;
  pCam->mtx[5] = (float)dVar22;
  pCam->mtx[6] = (float)dVar27;
  pCam->mtx[0xb] = 0.0;
  pCam->mtx[8] = (float)(dVar20 * dVar27 - (double)(float)(dVar25 * dVar22));
  pCam->mtx[9] = (float)(dVar25 * dVar26 - (double)(float)(dVar21 * dVar27));
  pCam->mtx[10] = (float)(dVar21 * dVar22 - (double)(float)(dVar20 * dVar26));
  return;
}



//==== 00046400  ns=camera::camera3  size=0x8
// sig: int ActivateCamera_3(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera3::ActivateCamera_3(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}



//==== 00046418  ns=camera::camera3  size=0x364
// sig: void InitCamera_3(UpdateCam * pCam)
// callers(0): 
// callees(2): 000451f0 camera::camera3::Cam3_InitSplinePos; 0010d7a0 mobyutil::MB_PathFollowToPos

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera3::InitCamera_3(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  uint uVar8;
  void *pvVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  Spline *pSVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_50 [16];
  undefined1 local_40 [4];
  undefined1 local_3c [12];
  
  pvVar9 = GameCamera.pLastUpdCam;
  iVar6 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  pCam->pos[0] = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[1] = *(float *)((int)pvVar9 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar9 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar9 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  fVar1 = *pvVar9;
  pCam->mtx[0] = fVar1;
  fVar2 = *(float *)((int)pvVar9 + 4);
  pCam->mtx[1] = fVar2;
  fVar3 = *(float *)((int)pvVar9 + 8);
  pCam->mtx[2] = fVar3;
  fVar4 = *(float *)((int)pvVar9 + 0xc);
  pCam->mtx[3] = fVar4;
  pCam->mtx[4] = *(float *)((int)pvVar9 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar9 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar9 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar9 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar9 + 0x20);
  pCam->mtx[9] = *(float *)((int)pvVar9 + 0x24);
  iVar11 = *(int *)(iVar6 + 0x20);
  pCam->mtx[10] = *(float *)((int)pvVar9 + 0x28);
  fVar5 = *(float *)((int)pvVar9 + 0x2c);
  pCam->rot[0] = fVar1;
  pCam->mtx[0xb] = fVar5;
  pCam->rot[1] = fVar2;
  pCam->rot[2] = fVar3;
  pCam->rot[3] = fVar4;
  if (-1 < iVar11) {
    iVar12 = 0;
    pSVar7 = Splines[iVar11];
    iVar11 = pSVar7->cnt;
    pSVar13 = pSVar7;
    if (0 < iVar11) {
      do {
        iVar12 = iVar12 + 1;
        pfVar10 = (float *)((int)pSVar7 + ((iVar12 - (iVar12 / iVar11) * iVar11) * 4 + 4) * 4);
        fVar1 = pSVar13->points[0].y - pfVar10[1];
        fVar2 = pSVar13->points[0].x - *pfVar10;
        fVar3 = pSVar13->points[0].z - pfVar10[2];
        pSVar13->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        iVar11 = pSVar7->cnt;
        pSVar13 = (Spline *)pSVar13->points;
      } while (iVar12 < iVar11);
    }
  }
  *(undefined2 *)(iVar6 + 0x36) = 0;
  if (*(int *)(iVar6 + 0x30) == 3) {
    dVar18 = 0.0;
    dVar19 = 1.0;
    pSVar7 = Splines[*(int *)(iVar6 + 0x20)];
    iVar11 = mobyutil::MB_PathFollowToPos
                       (0x4034000000000000,0x3ff0000000000000,0,pSVar7,&g_heroPosition,auStack_50,
                        local_40,local_3c);
    if (iVar11 != 0) {
      iVar11 = pSVar7->cnt;
      uVar8 = (uint)(1 - (longlong)iVar11 >> 0x3f) & 1U - (iVar11 + -1);
      fVar1 = pSVar7->points[uVar8 + iVar11 + -1].y - pSVar7->points[0].y;
      fVar2 = pSVar7->points[uVar8 + iVar11 + -1].x - pSVar7->points[0].x;
      fVar3 = pSVar7->points[uVar8 + iVar11 + -1].z - pSVar7->points[0].z;
      dVar15 = (double)(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (((double)(float)SQRT(dVar15) != dVar18) && (iVar11 + -1 + uVar8 != 0)) {
        dVar14 = dVar18;
        dVar16 = dVar18;
        dVar17 = dVar18;
        if ((double)(float)SQRT(dVar15) != dVar18) {
          dVar14 = 1.0 / SQRT(dVar15);
          dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar14) * dVar14 -
                                                   dVar19) * (double)(float)(dVar14 * 0.5) + dVar14)
          ;
          dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar14) * dVar14 -
                                                   dVar19) * (double)(float)(dVar14 * 0.5) + dVar14)
          ;
          fVar4 = (float)(-(double)(float)((double)(float)(dVar15 * dVar14) * dVar14 - dVar19) *
                          (double)(float)(dVar14 * 0.5) + dVar14);
          dVar17 = (double)(fVar2 * fVar4);
          dVar16 = (double)(fVar1 * fVar4);
          dVar14 = (double)(fVar3 * fVar4);
        }
        if (dVar18 < (double)(float)(dVar14 * (double)(pCam->pos[2] - g_heroPosition.z) +
                                    (double)(float)(dVar17 * (double)(pCam->pos[0] -
                                                                     g_heroPosition.x) +
                                                   (double)(float)(dVar16 * (double)(pCam->pos[1] -
                                                                                    g_heroPosition.y
                                                                                    ))))) {
          *(undefined2 *)(iVar6 + 0x36) = 1;
        }
      }
    }
  }
  Cam3_InitSplinePos(pCam);
  return;
}



//==== 0004677c  ns=camera::camera3  size=0xac
// sig: void ExitCamera_3(UpdateCam * pCam)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera3::ExitCamera_3(UpdateCam *pCam)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((hero::g_HeroRequestedCamType != pCam->type) ||
     ((iVar2 = *(int *)(iVar1 + 0x24), -1 < iVar2 &&
      ((DAT_0096a240 != *(int *)(DAT_00a1a85c + iVar2 * 0x20 + 0x10) || (DAT_0096a250 != 0)))))) {
    (pCam->activation).deactivate =
         ((ushort)((LZCOUNT(3 - *(int *)(iVar1 + 0x30)) << 0x3a) >> 0x3f) & 2) + 3;
  }
  return;
}



//==== 00046828  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e5b8 = 0x10000;
  return;
}



//==== 00046840  ns=camera::camera309  size=0x8
// sig: int ActivateCamera_309(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera309::ActivateCamera_309(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}



//==== 00046848  ns=stub  size=0x4
// sig: undefined STUB_00046848(void)
// callers(0): 
// callees(0): 

void stub::STUB_00046848(void)

{
  return;
}



//==== 0004684c  ns=stub  size=0x4
// sig: undefined STUB_0004684c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0004684c(void)

{
  return;
}



//==== 00046850  ns=stub  size=0x4
// sig: undefined STUB_00046850(void)
// callers(0): 
// callees(0): 

void stub::STUB_00046850(void)

{
  return;
}



//==== 00046854  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e628 = 0x10000;
  return;
}



//==== 00046888  ns=camera::camera4  size=0x12c
// sig: undefined ApplyHeroExternalMotion_4(void)
// callers(1): 00046c58 camera::camera4::UpdateCamera_4
// callees(0): 
// strings: 0096c074: 'None'

void camera::camera4::ApplyHeroExternalMotion_4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (g_heroMobyPtr->transform).v2.y;
  fVar2 = (g_heroMobyPtr->transform).v2.x;
  fVar3 = (g_heroMobyPtr->transform).v2.z;
  fVar4 = 0.0;
  fVar7 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar6 = fVar4;
  fVar5 = fVar4;
  if (SQRT(fVar7) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar7);
    fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar4 = fVar2 * fVar6;
    fVar5 = fVar1 * fVar6;
    fVar6 = fVar3 * fVar6;
  }
  if (g_heroType == '\x02') {
    fVar1 = 9.5;
  }
  else if (g_heroType == '\x01') {
    if (Cheats[3] == '\0') {
      fVar1 = 0.9;
    }
    else {
      fVar1 = 1.2;
    }
  }
  else {
    fVar1 = 1.6;
  }
  fVar2 = fVar4 * fVar1 + g_heroPosition.x;
  *(float *)(param_1 + 0x30) = fVar2;
  fVar3 = fVar5 * fVar1 + g_heroPosition.y;
  *(float *)(param_1 + 0x34) = fVar3;
  fVar1 = fVar6 * fVar1 + g_heroPosition.z;
  *(float *)(param_1 + 0x38) = fVar1;
  *(float *)(param_1 + 0x3c) = g_heroPosition.w;
  *(float *)(param_1 + 0x30) = DAT_00969e20 + fVar2;
  *(float *)(param_1 + 0x34) = DAT_00969e24 + fVar3;
  *(float *)(param_1 + 0x38) = DAT_00969e28 + fVar1;
  *(undefined4 *)(param_1 + 0x3c) = DAT_00969e2c;
  return;
}



//==== 000469d0  ns=camera::camera4  size=0x1fc
// sig: void SetLookCamInitPosRot(UpdateCam * pCam)
// callers(2): 00046bcc camera::camera4::InitLookCamera; 000478ec camera::camera4::InitCamera_4
// callees(0): 
// strings: 000469c8: '?fff`'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera4::SetLookCamInitPosRot(UpdateCam *pCam)

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
  void *pvVar11;
  
  fVar1 = (g_heroMobyPtr->transform).v2.y;
  fVar2 = (g_heroMobyPtr->transform).v2.x;
  fVar3 = (g_heroMobyPtr->transform).v2.z;
  fVar4 = 0.0;
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar6) == 0.0) {
    fVar5 = (g_heroMobyPtr->transform).v2.w;
    fVar1 = fVar4;
    fVar2 = fVar4;
    fVar3 = fVar4;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar6);
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar5 = (g_heroMobyPtr->transform).v2.w;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar2 = fVar2 * fVar7;
    fVar1 = fVar1 * fVar7;
    fVar3 = fVar3 * fVar7;
  }
  if (g_heroType == '\x02') {
    fVar6 = 9.5;
  }
  else {
    fVar6 = 1.6;
    if (g_heroType == '\x01') {
      fVar6 = (float)0x3f666666;
    }
  }
  pCam->pos[0] = fVar2 * fVar6 + g_heroPosition.x;
  pCam->pos[1] = fVar1 * fVar6 + g_heroPosition.y;
  pCam->pos[2] = fVar3 * fVar6 + g_heroPosition.z;
  pCam->pos[3] = g_heroPosition.w;
  pvVar11 = GameCamera.pLastUpdCam;
  pCam->mtx[8] = fVar2;
  pCam->mtx[9] = fVar1;
  pCam->mtx[10] = fVar3;
  pCam->mtx[0xb] = fVar5;
                    /* WARNING: Load size is inaccurate */
  fVar7 = fVar3 * *pvVar11 - fVar2 * *(float *)((int)pvVar11 + 8);
  fVar9 = fVar1 * *(float *)((int)pvVar11 + 8) - fVar3 * *(float *)((int)pvVar11 + 4);
  fVar8 = fVar2 * *(float *)((int)pvVar11 + 4) - fVar1 * *pvVar11;
  pCam->mtx[7] = 0.0;
  fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
  fVar6 = fVar4;
  fVar5 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar10);
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar4 = fVar9 * fVar6;
    fVar5 = fVar7 * fVar6;
    fVar6 = fVar8 * fVar6;
  }
  pCam->mtx[3] = 0.0;
  pCam->mtx[4] = fVar4;
  pCam->mtx[5] = fVar5;
  pCam->mtx[6] = fVar6;
  pCam->mtx[0] = fVar5 * fVar3 - fVar6 * fVar1;
  pCam->mtx[1] = fVar6 * fVar2 - fVar4 * fVar3;
  pCam->mtx[2] = fVar4 * fVar1 - fVar5 * fVar2;
  pCam->rot[3] = pCam->mtx[3];
  fVar1 = pCam->mtx[1];
  pCam->rot[0] = pCam->mtx[0];
  fVar2 = pCam->mtx[2];
  pCam->rot[1] = fVar1;
  pCam->rot[2] = fVar2;
  return;
}



//==== 00046bcc  ns=camera::camera4  size=0x5c
// sig: void InitLookCamera(UpdateCam * pCam)
// callers(0): 
// callees(1): 000469d0 camera::camera4::SetLookCamInitPosRot

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera4::InitLookCamera(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)pCam->control;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  SetLookCamInitPosRot(pCam);
  (pCam->activation).deactivate = 0;
  return;
}



//==== 00046c58  ns=camera::camera4  size=0x754
// sig: void UpdateCamera_4(UpdateCam * pCam)
// callers(0): 
// callees(7): 00046888 camera::camera4::ApplyHeroExternalMotion_4; 000501e8 camera::Cam_InterpValues; 00059e20 collproc::CollSphere; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera4::UpdateCamera_4(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  MobyInstance *pMVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float local_70;
  float local_6c;
  float local_68;
  
  pfVar4 = (float *)pCam->control;
  ApplyHeroExternalMotion_4();
  fVar17 = (g_heroMobyPtr->transform).v2.y;
  local_70 = (g_heroMobyPtr->transform).v2.x;
  fVar1 = (g_heroMobyPtr->transform).v2.z;
  dVar13 = 0.0;
  fVar17 = fVar1 * fVar1 + local_70 * local_70 + fVar17 * fVar17;
  if (SQRT(fVar17) == 0.0) {
    local_68 = 0.0;
    local_6c = 0.0;
    local_70 = 0.0;
  }
  else {
    local_68 = 1.0 / SQRT(fVar17);
    local_68 = -(fVar17 * local_68 * local_68 - 1.0) * local_68 * 0.5 + local_68;
    local_68 = -(fVar17 * local_68 * local_68 - 1.0) * local_68 * 0.5 + local_68;
    local_68 = -(fVar17 * local_68 * local_68 - 1.0) * local_68 * 0.5 + local_68;
    local_70 = local_70 * local_68;
    local_6c = (g_heroMobyPtr->transform).v2.y * local_68;
    local_68 = (g_heroMobyPtr->transform).v2.z * local_68;
  }
  if ((GameCamera.blender.state == 0) && (hero::g_heroInvisible == '\0')) {
    hero::g_heroInvisible = '\x01';
  }
  fVar17 = ANALOG_STICKS.z;
  if (ANALOG_STICKS.z == -0.0) {
    fVar17 = ANALOG_STICKS.x;
  }
  dVar8 = -(double)fVar17;
  if (dVar8 == 0.0) {
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_downButtons & LEFT) << 0x20) >> 0x25 ^ 1);
  }
  if (dVar8 == dVar13) {
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_downButtons & RIGHT) << 0x20) >> 0x25 ^ 1);
    dVar8 = -dVar8;
  }
  dVar15 = (double)((DAT_0071e64c - DAT_00931394) * ABS(*pfVar4) + DAT_00931394);
  fVar17 = Cam_InterpValues(*pfVar4,(float)dVar8,DAT_0071e650,DAT_0071e654,DAT_00931398,
                            (float *)0x930000);
  *pfVar4 = fVar17;
  if ((double)fVar17 != dVar13) {
    mobyutil::MB_RotateQuatAxisAngle((float)(dVar15 * (double)fVar17),pCam->mtx,pCam->mtx);
  }
  if ((DAT_00969e2c != 0.0) && (g_onMagnerail == 0)) {
    mobyutil::MB_RotateQuatAxisAngle(DAT_00969e2c,pCam->mtx,pCam->mtx);
  }
  dVar15 = -(double)ANALOG_STICKS.w;
  dVar8 = -(double)ANALOG_STICKS.y;
  if (dVar13 - dVar15 < 0.0) {
    dVar8 = dVar15;
  }
  if (dVar15 - dVar13 < 0.0) {
    dVar8 = dVar15;
  }
  if (dVar8 == dVar13) {
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_downButtons & UP) << 0x20) >> 0x25 ^ 1);
  }
  if (dVar8 == dVar13) {
    dVar8 = (double)fastfunc::FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_downButtons & DOWN) << 0x20) >> 0x25 ^ 1);
    dVar8 = -dVar8;
  }
  if ((GameCamera.blender.state != 0) && (DAT_0096bd70 == 2)) {
    dVar8 = dVar13;
  }
  if (g_GameSettings.CameraUpDown == 0) {
    dVar8 = -dVar8;
  }
  dVar15 = (double)((DAT_0071e64c - DAT_00931394) * ABS(pfVar4[2]) + DAT_00931394);
  fVar17 = Cam_InterpValues(pfVar4[2],(float)dVar8,DAT_0071e650,DAT_0071e654,DAT_00931398,
                            (float *)0x930000);
  pfVar4[2] = fVar17;
  if ((double)fVar17 != dVar13) {
    dVar16 = (double)(float)(dVar15 * (double)pfVar4[2]);
    dVar8 = (double)fastfunc::FastWrapRot(pfVar4[4],(float)(dVar15 * (double)pfVar4[2]));
    dVar8 = ABS(dVar8);
    if ((1.1170107126235962 < dVar8) && (ABS((double)pfVar4[4]) < dVar8)) {
      dVar15 = (double)fastfunc::FastDiffRots(dVar8,0x3ff1df46a0000000);
      dVar16 = (double)(float)(dVar16 + -(double)(float)(dVar16 * (double)(float)(dVar15 * 
                                                  2.86478853225708)));
    }
    pfVar7 = (float *)&DAT_00046c28;
    dVar14 = 0.004999999888241291;
    dVar15 = 0.20000000298023224;
    if ((dVar8 < 1.1152653694152832) || (pfVar7 = (float *)pfVar4[4], (int)pfVar7 < 1)) {
      fVar17 = Cam_InterpValues(pfVar4[5],(float)dVar13,0.005,0.2,(float)dVar13,pfVar7);
    }
    else {
      fVar17 = Cam_InterpValues(pfVar4[5],0.5,0.005,0.2,(float)dVar13,(float *)&DAT_00046c28);
    }
    pfVar4[5] = fVar17;
    pMVar6 = g_heroMobyPtr;
    fVar1 = pCam->mtx[1];
    fVar2 = pCam->mtx[0];
    fVar3 = pCam->pos[0];
    dVar12 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    dVar11 = (double)(fVar1 * (float)((double)fVar17 / dVar12));
    dVar9 = (double)(fVar2 * (float)((double)fVar17 / dVar12));
    dVar8 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar8 = dVar11;
    }
    dVar10 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar10 = dVar9;
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar8 = dVar11;
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar10 = dVar9;
    }
    pCam->pos[1] = (float)((double)pCam->pos[1] + dVar8);
    pCam->pos[0] = (float)((double)fVar3 + dVar10);
    pfVar7 = (float *)collproc::CollSphere
                                (0x3fd3333340000000,(longlong)(int)pCam + 0x30,&DAT_00046c28,0x12,
                                 pMVar6);
    if (pfVar7 != (float *)0x0) {
      fVar17 = Cam_InterpValues(pfVar4[5],(float)dVar13,(float)dVar14,(float)dVar15,(float)dVar13,
                                pfVar7);
      pfVar4[5] = fVar17;
    }
    dVar8 = (double)fastfunc::FastWrapRot(pfVar4[4],(float)dVar16);
    if (1.4660766124725342 < ABS(dVar8)) {
      if (dVar8 <= dVar13) {
        dVar16 = (double)fastfunc::FastDiffRots(0xbff7750cc0000000,(double)pfVar4[4]);
      }
      else {
        dVar16 = (double)fastfunc::FastDiffRots(0x3ff7750cc0000000,(double)pfVar4[4]);
      }
    }
    mobyutil::MB_RotateQuatAxisAngle((float)dVar16,pCam->mtx,pCam->mtx);
    dVar8 = (double)fastfunc::FastWrapRot(pfVar4[4],(float)dVar16);
    pfVar4[4] = (float)dVar8;
  }
  fVar17 = pCam->mtx[1];
  fVar1 = pCam->mtx[0];
  fVar2 = pCam->mtx[2];
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar17 * fVar17;
  dVar8 = dVar13;
  dVar15 = dVar13;
  dVar16 = dVar13;
  if ((double)SQRT(fVar3) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar3);
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar16 = (double)(fVar1 * fVar5);
    dVar15 = (double)(fVar17 * fVar5);
    dVar8 = (double)(fVar2 * fVar5);
  }
  pCam->mtx[0] = (float)dVar16;
  pCam->mtx[1] = (float)dVar15;
  fVar17 = (float)((double)local_68 * dVar16 - (double)(float)((double)local_70 * dVar8));
  fVar1 = (float)((double)local_6c * dVar8 - (double)(float)((double)local_68 * dVar15));
  fVar2 = (float)((double)local_70 * dVar15 - (double)(float)((double)local_6c * dVar16));
  pCam->mtx[2] = (float)dVar8;
  pCam->mtx[7] = 0.0;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar17 * fVar17;
  dVar14 = dVar13;
  dVar9 = dVar13;
  if ((double)SQRT(fVar3) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar3);
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar14 = (double)(fVar1 * fVar5);
    dVar13 = (double)(fVar17 * fVar5);
    dVar9 = (double)(fVar2 * fVar5);
  }
  pCam->mtx[4] = (float)dVar14;
  pCam->mtx[5] = (float)dVar13;
  pCam->mtx[6] = (float)dVar9;
  pCam->mtx[0xb] = 0.0;
  pCam->mtx[8] = (float)(dVar15 * dVar9 - (double)(float)(dVar8 * dVar13));
  pCam->mtx[9] = (float)(dVar8 * dVar14 - (double)(float)(dVar16 * dVar9));
  pCam->mtx[10] = (float)(dVar16 * dVar13 - (double)(float)(dVar15 * dVar14));
  return;
}



//==== 000473f0  ns=camera::camera4  size=0x4fc
// sig: int ActivateCamera_4(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(4): 0002f470 camera0::Cam0_ForceLookAtDir; 0005393c camera::Camera_resetToFollow; 000558f8 camera::CamCollGrid_FindPrimAtPnt; 004fff60 fastfunc::FastDecTimerS32

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera4::ActivateCamera_4(UpdateCam *pCam,UpdateCam *pCurr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  int iVar13;
  short sVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [32];
  
  pvVar12 = GameCamera.pCurrentUpdCam;
  uVar4 = *(uint *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((hero::g_HeroRequestedCamType == pCam->type) || (hero::g_HeroRequestedCamType == 0x51)) {
    sVar14 = pCurr->type;
    if (((sVar14 == 10 || sVar14 == 0) || ((sVar14 == 0xe || (sVar14 == 2)))) &&
       ((sVar14 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86), sVar14 == 10 || sVar14 == 0 ||
        ((sVar14 == 0xe || (sVar14 == 2)))))) {
      iVar13 = CamCollGrid_FindPrimAtPnt
                         (0x3fd0000000000000,CONCAT44(g_heroPosition.x,g_heroPosition.y),
                          CONCAT44(g_heroPosition.z,g_heroPosition.w));
      if ((iVar13 != 0) && ((*(uint *)(iVar13 + 0x18) & 1) != 0)) {
        return 0;
      }
      *(undefined2 *)(uVar4 + 0x22) = 1;
      *(undefined4 *)(uVar4 + 0x24) = 0;
      sVar14 = *(short *)(uVar4 + 0x20) + 1;
      *(short *)(uVar4 + 0x20) = sVar14;
      if ((int)(animationSpeed * 7.5) <= (int)sVar14) {
        if (*(short *)((int)pvVar12 + 0x86) == 0) {
          (pCam->activation).priority = '\x05';
        }
        return 1;
      }
      camera0::Cam0_ForceLookAtDir(0x3fb1df46a0000000,0,local_50);
    }
    else {
      *(undefined2 *)(uVar4 + 0x20) = 0;
      *(undefined2 *)(uVar4 + 0x22) = 0;
    }
  }
  else {
    *(undefined2 *)(uVar4 + 0x20) = 0;
    if (*(short *)(uVar4 + 0x22) != 0) {
      *(undefined2 *)(uVar4 + 0x22) = 0;
                    /* WARNING: Load size is inaccurate */
      fVar1 = (g_heroMobyPtr->transform).v0.y;
      fVar2 = (g_heroMobyPtr->transform).v0.x;
      fVar3 = (g_heroMobyPtr->transform).v0.z;
      fVar7 = (float)GameCamera.field17_0x1b4._20_4_ *
              *(float *)((int)GameCamera.pCurrentUpdCam + 8) +
              (float)GameCamera.field17_0x1b4._12_4_ * *GameCamera.pCurrentUpdCam +
              (float)GameCamera.field17_0x1b4._16_4_ *
              *(float *)((int)GameCamera.pCurrentUpdCam + 4);
      fVar6 = (float)GameCamera.field17_0x1b4._20_4_ * fVar3 +
              (float)GameCamera.field17_0x1b4._12_4_ * fVar2 +
              (float)GameCamera.field17_0x1b4._16_4_ * fVar1;
      fVar8 = -((float)GameCamera.field17_0x1b4._16_4_ * fVar7 -
               *(float *)((int)GameCamera.pCurrentUpdCam + 4));
      fVar9 = -((float)GameCamera.field17_0x1b4._12_4_ * fVar7 - *GameCamera.pCurrentUpdCam);
      fVar1 = -((float)GameCamera.field17_0x1b4._16_4_ * fVar6 - fVar1);
      fVar7 = -((float)GameCamera.field17_0x1b4._20_4_ * fVar7 -
               *(float *)((int)GameCamera.pCurrentUpdCam + 8));
      fVar2 = -((float)GameCamera.field17_0x1b4._12_4_ * fVar6 - fVar2);
      fVar3 = -((float)GameCamera.field17_0x1b4._20_4_ * fVar6 - fVar3);
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar10 = fVar6 * SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8);
      fVar11 = fVar6;
      if (0.0 - fVar6 < 0.0) {
        fVar11 = fVar10;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar11 = fVar10;
      }
      if (fVar11 != 0.0) {
        fVar11 = (fVar7 * fVar3 + fVar9 * fVar2 + fVar8 * fVar1) / fVar11;
        fVar1 = fVar11;
        if (fVar11 - 0.0 < 0.0) {
          fVar1 = ABS(fVar11);
        }
        fVar2 = 1.0;
        if (fVar11 - 0.0 < 0.0) {
          fVar2 = -1.0;
        }
        fVar3 = 1.0 - fVar1;
        if ((1.0 - fVar1) - 0.0 < 0.0) {
          fVar3 = 0.0;
        }
        if (1.3962634 <=
            -(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar3) -
               1.5707964) * fVar2 - 1.5707964)) {
          Camera_resetToFollow();
          return 0;
        }
      }
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = loadVectorLeftIndexed(0x3c,0x473ac);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar16);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x24,
                         (ulonglong)uVar4);
      *(undefined4 *)(uVar4 + 0x24 & 0xfffffffc) = uVar5;
    }
  }
  if (*(int *)(uVar4 + 0x24) != 0) {
    fastfunc::FastDecTimerS32((ulonglong)uVar4 + 0x24);
    camera0::Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,local_40);
  }
  return 0;
}



//==== 000478ec  ns=camera::camera4  size=0xd4
// sig: void InitCamera_4(UpdateCam * pCam)
// callers(0): 
// callees(2): 000469d0 camera::camera4::SetLookCamInitPosRot; 0015d12c sound::PlayMobySound

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera4::InitCamera_4(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)pCam->control;
  GameCamera.blender.reqPosInterpAdd = 0.05;
  GameCamera.blender.reqType = '\0';
  GameCamera.blender.reqQuatInterpAdd = 0.05;
  GameCamera.blender.state =
       (short)((LZCOUNT(-(uint)(ushort)GameCamera.blender.state) << 0x3a) >> 0x3f) + 2;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  SetLookCamInitPosRot(pCam);
  (pCam->activation).deactivate = 0;
  if (GameCamera.field17_0x1b4._160_4_ != 0) {
    sound::PlayMobySound(0,0,(MobyInstance *)GameCamera.field17_0x1b4._160_4_);
  }
  return;
}



//==== 000479d8  ns=camera::camera4  size=0x1ac
// sig: void ExitCamera_4(UpdateCam * pCam)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera4::ExitCamera_4(UpdateCam *pCam)

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
  
  if (hero::g_HeroRequestedCamType != 4 && hero::g_HeroRequestedCamType != 0x51) {
    if (GameCamera.blender.state == 0) {
      GameCamera.blender.reqType = '\0';
      (pCam->activation).deactivate = 2;
      GameCamera.blender.reqPosInterpAdd = 0.018;
      GameCamera.blender.reqQuatInterpAdd = 0.018;
    }
    else {
      fVar1 = (g_heroMobyPtr->transform).v0.y;
      fVar2 = (g_heroMobyPtr->transform).v0.x;
      fVar3 = (g_heroMobyPtr->transform).v0.z;
      fVar5 = (float)GameCamera.field17_0x1b4._20_4_ * pCam->mtx[2] +
              (float)GameCamera.field17_0x1b4._12_4_ * pCam->mtx[0] +
              (float)GameCamera.field17_0x1b4._16_4_ * pCam->mtx[1];
      fVar4 = (float)GameCamera.field17_0x1b4._20_4_ * fVar3 +
              (float)GameCamera.field17_0x1b4._12_4_ * fVar2 +
              (float)GameCamera.field17_0x1b4._16_4_ * fVar1;
      fVar6 = -((float)GameCamera.field17_0x1b4._16_4_ * fVar5 - pCam->mtx[1]);
      fVar7 = -((float)GameCamera.field17_0x1b4._12_4_ * fVar5 - pCam->mtx[0]);
      fVar5 = -((float)GameCamera.field17_0x1b4._20_4_ * fVar5 - pCam->mtx[2]);
      fVar1 = -((float)GameCamera.field17_0x1b4._16_4_ * fVar4 - fVar1);
      fVar2 = -((float)GameCamera.field17_0x1b4._12_4_ * fVar4 - fVar2);
      fVar3 = -((float)GameCamera.field17_0x1b4._20_4_ * fVar4 - fVar3);
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar8 = fVar4 * SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar9 = fVar4;
      if (0.0 - fVar4 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar9 != 0.0) {
        fVar9 = (fVar5 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1) / fVar9;
        fVar1 = fVar9;
        if (fVar9 - 0.0 < 0.0) {
          fVar1 = ABS(fVar9);
        }
        fVar2 = 1.0;
        if (fVar9 - 0.0 < 0.0) {
          fVar2 = -1.0;
        }
        fVar3 = 1.0 - fVar1;
        if ((1.0 - fVar1) - 0.0 < 0.0) {
          fVar3 = 0.0;
        }
        if (1.3962634 <=
            -(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar3) -
               1.5707964) * fVar2 - 1.5707964)) {
          GameCamera.blender.state = 0;
          (pCam->activation).deactivate = 4;
          return;
        }
      }
      GameCamera.blender.reqType = '\0';
      (pCam->activation).deactivate = 2;
      GameCamera.blender.reqPosInterpAdd = 0.018;
      GameCamera.blender.reqQuatInterpAdd = 0.018;
    }
  }
  return;
}



//==== 00047b84  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e6a4 = 0x10000;
  return;
}



//==== 00047b98  ns=camera::camera5  size=0x70
// sig: void Camera_SetMobyDrivenTargetPos(float * pos)
// callers(48): 00014fd0 mobyupdate_unsorted::Moby1267_UpdateCamera; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 00161788 space::UpdateSpace; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016da88 vendor::Vendor_PreUpdate; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a2fb0 mobyupdate_helpers::M1051_001a2fb0; 001a3680 mobyupdate_helpers::M1051_001a3680; 001a3d50 mobyupdate_helpers::M1051_001a3d50; 001a43a8 mobyupdate_helpers::M1051_001a43a8; 001a48d0 mobyupdate_helpers::M1051_001a48d0; 001a4df8 mobyupdate_helpers::M1051_001a4df8; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001cb618 mobyupdate_helpers::M1109_001cb618; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001d98b8 mobyupdate_helpers::M1134_001d98b8; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001e2e88 mobyupdate_unsorted::UpdateMoby_1157; 001e70a8 mobyupd::update1160::M1160_UpdateFlight
// callees(1): 000500f4 camera::Camera_FindCameraOfType

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::Camera_SetMobyDrivenTargetPos(float *pos)

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



//==== 00047c08  ns=camera::camera5  size=0x70
// sig: void Camera_SetMobyDrivenTargetRot(float * rot)
// callers(48): 00014fd0 mobyupdate_unsorted::Moby1267_UpdateCamera; 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 00161788 space::UpdateSpace; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016da88 vendor::Vendor_PreUpdate; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a2fb0 mobyupdate_helpers::M1051_001a2fb0; 001a3680 mobyupdate_helpers::M1051_001a3680; 001a3d50 mobyupdate_helpers::M1051_001a3d50; 001a43a8 mobyupdate_helpers::M1051_001a43a8; 001a48d0 mobyupdate_helpers::M1051_001a48d0; 001a4df8 mobyupdate_helpers::M1051_001a4df8; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001cb618 mobyupdate_helpers::M1109_001cb618; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001d98b8 mobyupdate_helpers::M1134_001d98b8; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001e2e88 mobyupdate_unsorted::UpdateMoby_1157; 001e70a8 mobyupd::update1160::M1160_UpdateFlight
// callees(1): 000500f4 camera::Camera_FindCameraOfType

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::Camera_SetMobyDrivenTargetRot(float *rot)

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



//==== 00047c80  ns=camera::camera5  size=0x1bc
// sig: int Camera_GetMobyDrivenTargetStatus(void)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera5::Camera_GetMobyDrivenTargetStatus(void)

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



//==== 00047e3c  ns=camera::camera5  size=0x64
// sig: void Camera_SetMobyDrivenPolarRadiusCurve(float a, float b)
// callers(1): 0032adf8 mobyupdate_unsorted::UpdateMoby_280
// callees(1): 000500f4 camera::Camera_FindCameraOfType

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::Camera_SetMobyDrivenPolarRadiusCurve(float a,float b)

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



//==== 00047ea0  ns=camera::camera5  size=0xa8
// sig: undefined Camera_SetMobyDrivenMode(void)
// callers(1): 0042fc90 mobyupdate_unsorted::UpdateMoby_713
// callees(1): 00053fe8 camera::???_Camera_CalcPolarToTarget

void camera::camera5::Camera_SetMobyDrivenMode(int param_1,undefined4 param_2)

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



//==== 00047f48  ns=camera::camera5  size=0x2c
// sig: void Camera_SetCurrentAccel(float a, float b, float c, float d, float e, float f)
// callers(6): 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 002826c8 mobyupdate_unsorted::UpdateMoby_1448; 0042fc90 mobyupdate_unsorted::UpdateMoby_713
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::Camera_SetCurrentAccel(float a,float b,float c,float d,float e,float f)

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



//==== 00047f74  ns=camera  size=0x24c
// sig: undefined SetCameraPosition(void)
// callers(43): 000156a8 mobyupdate_unsorted::UpdateMoby_1267; 00161788 space::UpdateSpace; 0016a8f0 vendor::Spawn_Moby11_Vendor; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a43a8 mobyupdate_helpers::M1051_001a43a8; 001a48d0 mobyupdate_helpers::M1051_001a48d0; 001a4df8 mobyupdate_helpers::M1051_001a4df8; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001e2e88 mobyupdate_unsorted::UpdateMoby_1157; 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 002288c8 mobyupdate_unsorted::UpdateMoby_1251; 00236ba0 mobyupdate_unsorted::UpdateMoby_1270; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002826c8 mobyupdate_unsorted::UpdateMoby_1448
// callees(3): 000500f4 camera::Camera_FindCameraOfType; 0005048c camera::Camera_switchToNewCam; 00053fe8 camera::???_Camera_CalcPolarToTarget

void camera::SetCameraPosition
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
  undefined1 local_b0 [24];
  
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



//==== 000481d0  ns=camera::camera5  size=0x250
// sig: void Camera_DeactivateMobyDrivenCam(int exitFlags)
// callers(45): 00019cb8 mobyupdate_unsorted::UpdateMoby_1274; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 00190d60 mobyupdate_unsorted::UpdateMoby_1032; 001a2f20 mobyupdate_helpers::M1051_001a2f20; 001a35f4 mobyupdate_helpers::M1051_001a35f4; 001a3cc4 mobyupdate_helpers::M1051_001a3cc4; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001b9d68 mobyupdate_unsorted::UpdateMoby_1083; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 001d4308 mobyupdate_unsorted::UpdateMoby_1118; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001e1b00 mobyupdate_unsorted::UpdateMoby_1156; 001e2e88 mobyupdate_unsorted::UpdateMoby_1157; 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 002285f0 mobyupdate_helpers::M1251_002285f0; 002288c8 mobyupdate_unsorted::UpdateMoby_1251; 00236ba0 mobyupdate_unsorted::UpdateMoby_1270; 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet
// callees(3): 00050398 camera::Camera_DeactivateCurrent; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::Camera_DeactivateMobyDrivenCam(int exitFlags)

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
    fastfunc::FastEulerToMtx1(local_a0,&g_heroRotation);
    fastfunc::FastApplyTransform((Vec4 *)p1,local_a0);
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



//==== 00048420  ns=camera::camera5  size=0x18
// sig: void DeactivateMobyDrivenCamAccel(void)
// callers(3): 00014fd0 mobyupdate_unsorted::Moby1267_UpdateCamera; 001f9680 mobyupdate_unsorted::UpdateMoby_1201; 00382358 mobyupdate_unsorted::UpdateMoby_440
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::DeactivateMobyDrivenCamAccel(void)

{
  *(undefined1 *)((int)GameCamera.pCurrentUpdCam + 0x88) = 1;
  return;
}



//==== 00048438  ns=camera::camera5  size=0xc8
// sig: void InitCamera_5(UpdateCam * pCam)
// callers(0): 
// callees(2): 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::InitCamera_5(UpdateCam *pCam)

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
  fastfunc::FastEulerToMtx1(aVStack_60,(longlong)(int)pCam + 0x40);
  fastfunc::FastApplyTransform((Vec4 *)pCam,aVStack_60);
  (pCam->activation).deactivate = 0;
  return;
}



//==== 00048510  ns=camera::camera5  size=0x47c
// sig: void UpdateMobyDrivenCam(UpdateCam * pCam)
// callers(1): 00048998 camera::camera5::UpdateCamera_5
// callees(14): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 00053e38 camera::Camera_ClampAngles; 00053fe8 camera::???_Camera_CalcPolarToTarget; 000fec94 mobyutil::MB_catmullRom; 000fecf0 mobyutil::MB_CosineInterpolate; 000fedd0 mobyutil::MB_lerpRotCosine; 000feed8 mobyutil::MB_CosineInterpolateUnitVec; 000ff030 mobyutil::MB_CosineInterpolateAngVec; 004fff60 fastfunc::FastDecTimerS32; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::UpdateMobyDrivenCam(UpdateCam *pCam)

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
    fastfunc::FastDecTimerS32((int)pvVar2 + 0xe0);
    dVar6 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar2 + 0xe4));
    dVar6 = (double)(float)((double)(longlong)
                                    (*(int *)((int)pvVar2 + 0xe4) - *(int *)((int)pvVar2 + 0xe0)) /
                           dVar6);
    mobyutil::MB_CosineInterpolateUnitVec(dVar6,lVar3 + 0x30,lVar3 + 0x30,(int)pvVar2 + 0x80);
    mobyutil::MB_CosineInterpolateAngVec(dVar6,lVar3 + 0x40,lVar3 + 0x40,(int)pvVar2 + 0x90);
  }
  else if (cVar1 == '\x03') {
    iVar5 = fastfunc::FastDecTimerS32((int)pvVar2 + 0xe0);
    if (iVar5 == 0) {
      dVar6 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar2 + 0xe4));
      lVar4 = (longlong)(*(int *)((int)pvVar2 + 0xe4) - *(int *)((int)pvVar2 + 0xe0));
      dVar8 = (double)(float)((double)lVar4 / dVar6);
      ____Camera_CalcPolarToTarget
                (dVar6,(double)lVar4,(int)pvVar2 + 0xe8,(int)pvVar2 + 0x80,&g_heroPosition);
      dVar6 = (double)fastfunc::FastDiffRots
                                ((double)*(float *)((int)pvVar2 + 0xe8),
                                 (double)*(float *)((int)pvVar2 + 0xfc));
      dVar7 = (double)fastfunc::FastDiffRots
                                ((double)*(float *)((int)pvVar2 + 0x98),
                                 (double)GameCamera.rot.radius);
      if (((0.3490658402442932 < dVar6) && (dVar7 < -0.3490658402442932)) ||
         ((dVar6 < -0.3490658402442932 && (0.3490658402442932 < dVar7)))) {
        dVar6 = (double)(*(float *)((int)pvVar2 + 0xe8) - *(float *)((int)pvVar2 + 0xfc));
        if (((dVar6 < 0.0) && (0.0 < dVar7)) || ((0.0 < dVar6 && (dVar7 < 0.0)))) {
          dVar6 = -dVar6;
        }
        dVar6 = (double)mobyutil::MB_CosineInterpolate(0,dVar6,dVar8);
        dVar6 = (double)(float)((double)*(float *)((int)pvVar2 + 0xfc) + dVar6);
      }
      else {
        dVar6 = (double)mobyutil::MB_lerpRotCosine
                                  ((double)*(float *)((int)pvVar2 + 0xfc),
                                   (double)*(float *)((int)pvVar2 + 0xe8),dVar8);
      }
      *(float *)((int)pvVar2 + 0xfc) = (float)dVar6;
      dVar6 = (double)mobyutil::MB_catmullRom
                                ((double)*(float *)((int)pvVar2 + 0x124),0,0x3ff0000000000000,
                                 (double)*(float *)((int)pvVar2 + 0x128),dVar8);
      *(float *)((int)pvVar2 + 0x104) =
           (float)((double)(float)((double)*(float *)((int)pvVar2 + 0xf0) -
                                  (double)*(float *)((int)pvVar2 + 0x104)) * dVar6 +
                  (double)*(float *)((int)pvVar2 + 0x104));
      dVar6 = (double)mobyutil::MB_lerpRotCosine
                                ((double)*(float *)((int)pvVar2 + 0x100),
                                 (double)*(float *)((int)pvVar2 + 0xec),dVar8);
      iVar5 = (int)pvVar2 + 0x110;
      *(float *)((int)pvVar2 + 0x100) = (float)dVar6;
      mobyutil::MB_CosineInterpolateUnitVec(dVar8,iVar5,iVar5,&g_heroPosition);
      Camera_ClampAngles(lVar3 + 0x30,(int)pvVar2 + 0xfc,iVar5);
      mobyutil::MB_CosineInterpolateAngVec(dVar8,lVar3 + 0x40,lVar3 + 0x40,(int)pvVar2 + 0x90);
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
  fastfunc::FastEulerToMtx1(aVStack_80,lVar3 + 0x40);
  fastfunc::FastApplyTransform((Vec4 *)pCam,aVStack_80);
  return;
}



//==== 0004898c  ns=camera::camera5  size=0x8
// sig: int ActivateCamera_5(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera5::ActivateCamera_5(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}



//==== 00048998  ns=camera::camera5  size=0x64
// sig: void UpdateCamera_5(UpdateCam * pCam)
// callers(0): 
// callees(2): 00048510 camera::camera5::UpdateMobyDrivenCam; 000543c8 camera::Camera_CollSphereBump

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera5::UpdateCamera_5(UpdateCam *pCam)

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



//==== 000489fc  ns=stub  size=0x4
// sig: undefined STUB_000489fc(void)
// callers(0): 
// callees(0): 

void stub::STUB_000489fc(void)

{
  return;
}



//==== 00048a00  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e714 = 0x10000;
  return;
}



//==== 00048a20  ns=camera::camera6  size=0xd4
// sig: undefined ???_Cam6_ClampAndBuildMtx(void)
// callers(0): 
// callees(4): 00053e38 camera::Camera_ClampAngles; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot

void camera::camera6::____Cam6_ClampAndBuildMtx(Vec4 *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  Vec4 aVStack_60 [4];
  
  fVar2 = param_1[7].x;
  Camera_ClampAngles(param_1 + 3,param_1 + 5,(int)fVar2 + 0xb0);
  dVar3 = (double)fastfunc::FastWrapRot(param_1[5].x,*(float *)((int)fVar2 + 200));
  param_1[5].x = (float)dVar3;
  fVar2 = param_1[5].y;
  fVar1 = param_1[5].w;
  param_1[4].x = 0.0;
  dVar3 = (double)fastfunc::FastWrapRot(fVar2,fVar1);
  param_1[4].y = (float)dVar3;
  dVar3 = (double)fastfunc::FastWrapRot(3.1415927,param_1[5].x);
  fVar2 = param_1[6].x;
  param_1[4].z = (float)dVar3;
  dVar3 = (double)fastfunc::FastWrapRot((float)dVar3,fVar2);
  param_1[4].z = (float)dVar3;
  param_1[4].w = 0.0;
  fastfunc::FastEulerToMtx1(aVStack_60,param_1 + 4);
  fastfunc::FastApplyTransform(param_1,aVStack_60);
  return;
}



//==== 00048b00  ns=camera::camera6  size=0x174
// sig: undefined Cam6_SetTarget(void)
// callers(1): 00049058 camera::camera6::???_Cam6_SetupFromMoby
// callees(6): 0004ff0c camera::Camera_ClearPolar; 0004ff28 camera::Cam_CopyRotWrapped; 00053e38 camera::Camera_ClampAngles; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot

void camera::camera6::Cam6_SetTarget(double param_1,Vec4 *param_2,float *param_3,float *param_4)

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
  dVar3 = (double)fastfunc::FastWrapRot(param_2[5].x,*(float *)((int)fVar1 + 200));
  param_2[5].x = (float)dVar3;
  fVar1 = param_2[5].y;
  fVar2 = param_2[5].w;
  param_2[4].x = 0.0;
  dVar3 = (double)fastfunc::FastWrapRot(fVar1,fVar2);
  param_2[4].y = (float)dVar3;
  dVar3 = (double)fastfunc::FastWrapRot(3.1415927,param_2[5].x);
  fVar1 = param_2[6].x;
  param_2[4].z = (float)dVar3;
  dVar3 = (double)fastfunc::FastWrapRot((float)dVar3,fVar1);
  param_2[4].z = (float)dVar3;
  param_2[4].w = 0.0;
  fastfunc::FastEulerToMtx1(aVStack_70,param_2 + 4);
  fastfunc::FastApplyTransform(param_2,aVStack_70);
  return;
}



//==== 00048c78  ns=camera::camera6  size=0x178
// sig: undefined Cam6_ResetParams(void)
// callers(2): 000494e0 camera::camera6::Cam6_Activate; 000498e8 camera::camera6::InitCamera_6
// callees(5): 0004ff0c camera::Camera_ClearPolar; 00053e38 camera::Camera_ClampAngles; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot

void camera::camera6::Cam6_ResetParams(Vec4 *param_1)

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
  dVar3 = (double)fastfunc::FastWrapRot(param_1[5].x,*(float *)((int)fVar2 + 200));
  param_1[5].x = (float)dVar3;
  fVar2 = param_1[5].y;
  fVar1 = param_1[5].w;
  param_1[4].x = 0.0;
  dVar3 = (double)fastfunc::FastWrapRot(fVar2,fVar1);
  param_1[4].y = (float)dVar3;
  dVar3 = (double)fastfunc::FastWrapRot(3.1415927,param_1[5].x);
  fVar2 = param_1[6].x;
  param_1[4].z = (float)dVar3;
  dVar3 = (double)fastfunc::FastWrapRot((float)dVar3,fVar2);
  param_1[4].z = (float)dVar3;
  param_1[4].w = 0.0;
  fastfunc::FastEulerToMtx1(aVStack_70,param_1 + 4);
  fastfunc::FastApplyTransform(param_1,aVStack_70);
  *(undefined2 *)((int)&param_1[7].w + 2) = 0;
  return;
}



//==== 00048df8  ns=camera::camera6  size=0x238
// sig: undefined Cam6_Update(void)
// callers(1): 000499d8 camera::camera6::UpdateCamera_6
// callees(6): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 00053e38 camera::Camera_ClampAngles; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot

void camera::camera6::Cam6_Update(Vec4 *param_1)

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
  uVar4 = fastfunc::FastWrapRot(*(float *)((int)fVar2 + 200),*(float *)((int)fVar2 + 0x14));
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
  dVar5 = (double)fastfunc::FastWrapRot(fVar6,fVar1);
  param_1[4].y = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot(3.1415927,param_1[5].x);
  fVar2 = param_1[6].x;
  param_1[4].z = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot((float)dVar5,fVar2);
  param_1[4].z = (float)dVar5;
  fastfunc::FastEulerToMtx1(aVStack_60,param_1 + 4);
  fastfunc::FastApplyTransform(param_1,aVStack_60);
  return;
}



//==== 00049058  ns=camera::camera6  size=0x484
// sig: undefined ???_Cam6_SetupFromMoby(void)
// callers(2): 000494e0 camera::camera6::Cam6_Activate; 002af360 mobyupdate_unsorted::UpdateMoby_172
// callees(4): 00048b00 camera::camera6::Cam6_SetTarget; 0004ff28 camera::Cam_CopyRotWrapped; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots
// strings: 00049048: '?333?' (raw)

undefined8 camera::camera6::____Cam6_SetupFromMoby(int param_1,int param_2)

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
      dVar22 = (double)fastfunc::FastWrapRot(*(float *)(iVar8 + 0xac),*(float *)(iVar9 + 0x18));
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
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
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
      dVar25 = (double)fastfunc::FastSubRots((float)dVar25,fVar1);
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



//==== 000494e0  ns=camera::camera6  size=0x124
// sig: undefined Cam6_Activate(void)
// callers(1): 002ae5d8 FUN_002ae5d8
// callees(6): 00048c78 camera::camera6::Cam6_ResetParams; 00049058 camera::camera6::???_Cam6_SetupFromMoby; 0004ff0c camera::Camera_ClearPolar; 0004ff28 camera::Cam_CopyRotWrapped; 000500f4 camera::Camera_FindCameraOfType; 0005048c camera::Camera_switchToNewCam

UpdateCam * camera::camera6::Cam6_Activate(undefined8 param_1)

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



//==== 00049618  ns=camera::camera6  size=0x2c0
// sig: undefined ???_Cam6_RotMath(void)
// callers(2): 002ae9e0 FUN_002ae9e0; 002af360 mobyupdate_unsorted::UpdateMoby_172
// callees(1): 005026a0 fastfunc::FastSubRots

void camera::camera6::____Cam6_RotMath(int param_1)

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
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
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
  dVar19 = (double)fastfunc::FastSubRots(fVar10,fVar1);
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



//==== 000498d8  ns=camera::camera6  size=0x8
// sig: int ActivateCamera_6(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera6::ActivateCamera_6(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}



//==== 000498e8  ns=camera::camera6  size=0xf0
// sig: void InitCamera_6(UpdateCam * pCam)
// callers(0): 
// callees(3): 00048c78 camera::camera6::Cam6_ResetParams; 0004ff0c camera::Camera_ClearPolar; 0004ff28 camera::Cam_CopyRotWrapped

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera6::InitCamera_6(UpdateCam *pCam)

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



//==== 000499d8  ns=camera::camera6  size=0x20
// sig: void UpdateCamera_6(UpdateCam * pCam)
// callers(0): 
// callees(1): 00048df8 camera::camera6::Cam6_Update

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera6::UpdateCamera_6(UpdateCam *pCam)

{
  Cam6_Update(pCam);
  return;
}



//==== 000499f8  ns=stub  size=0x4
// sig: undefined STUB_000499f8(void)
// callers(0): 
// callees(0): 

void stub::STUB_000499f8(void)

{
  return;
}



//==== 000499fc  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e7c0 = 0x10000;
  return;
}



//==== 00049a50  ns=camera::camera7  size=0x548
// sig: void InitCamera_7(UpdateCam * pCam)
// callers(1): 0004b358 camera::camera7::UpdateCamera_7
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera7::InitCamera_7(UpdateCam *pCam)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  LevelId LVar19;
  MobyInstance *pMVar20;
  PlayerState PVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  float *pfVar29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar24 = uVar22 - 0x70;
  puVar13 = (ulonglong *)lVar24;
  *puVar13 = uVar22;
  pvVar9 = pCam->control;
  *(undefined4 *)((int)pvVar9 + 0x80) = 0;
  LVar19 = Level;
  puVar13[0xd] = unaff_r31;
  puVar13[0xc] = unaff_r30;
  if ((LVar19 == Oltanis) &&
     ((g_heroState == SWINGING_YELLOW_SWINGSHOT || (g_heroState == DISENGAGE_YELLOW_SWINGSHOT)))) {
    uVar1 = 0x40000000;
  }
  else {
    uVar1 = 0x3fc00000;
  }
  *(undefined4 *)((int)pvVar9 + 0x8c) = uVar1;
  pMVar20 = g_heroMobyPtr;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  *(undefined4 *)((int)pvVar9 + 0x88) = 0x3e567750;
  *(MobyInstance **)((int)pvVar9 + 0x84) = pMVar20;
  *(undefined4 *)((int)pvVar9 + 0x98) = 0x3ae4c388;
  pvVar10 = pCam->control;
  *(undefined4 *)((int)pvVar9 + 0x9c) = 0xbb8efa35;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  *(undefined4 *)((int)pvVar10 + 0xa0) = 0x40947ae1;
  *(undefined4 *)((int)pvVar10 + 0xa4) = 0x3f000000;
  *(undefined4 *)((int)pvVar10 + 0xb0) = 0x40000000;
  *(undefined4 *)((int)pvVar10 + 0xb4) = 0x3d4ccccd;
  puVar11 = (undefined4 *)pCam->control;
  puVar11[4] = 0x3c23d70a;
  puVar11[5] = 0x3e99999a;
  fVar2 = 0.0;
  puVar11[6] = 0;
  auVar31 = loadVectorLeftIndexed(0x10,0x49a10);
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
  auVar31 = vectorSplatHalfWord(auVar31,1);
  uVar12 = storeVectorElementHalfWordIndexed(auVar31,0x1e,ZEXT48(puVar11));
  *(undefined2 *)((int)puVar11 + 0x1e) = uVar12;
  *(undefined2 *)(puVar11 + 7) = 0;
  puVar11[3] = 0;
  puVar11[2] = 0;
  puVar11[1] = 0;
  *puVar11 = 0;
  pvVar10 = pCam->control;
  *(undefined4 *)((int)pvVar10 + 0x34) = 0x3ca3d70a;
  *(undefined4 *)((int)pvVar10 + 0x38) = 0x3e4ccccd;
  *(undefined4 *)((int)pvVar10 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar10 + 0x30) = 0;
  pvVar10 = pCam->control;
  *(undefined4 *)((int)pvVar10 + 0xbc) = 0;
  pvVar18 = GameCamera.pLastUpdCam;
  fVar3 = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[0] = fVar3;
  pCam->pos[1] = *(float *)((int)pvVar18 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar18 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar18 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  fVar4 = *pvVar18;
  pCam->mtx[0] = fVar4;
  fVar5 = *(float *)((int)pvVar18 + 4);
  pCam->mtx[1] = fVar5;
  fVar6 = *(float *)((int)pvVar18 + 8);
  pCam->mtx[2] = fVar6;
  fVar7 = *(float *)((int)pvVar18 + 0xc);
  pCam->mtx[3] = fVar7;
  pCam->mtx[4] = *(float *)((int)pvVar18 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar18 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar18 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar18 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar18 + 0x20);
  pCam->mtx[9] = *(float *)((int)pvVar18 + 0x24);
  pCam->mtx[10] = *(float *)((int)pvVar18 + 0x28);
  fVar8 = *(float *)((int)pvVar18 + 0x2c);
  (pCam->activation).deactivate = 0;
  pCam->mtx[0xb] = fVar8;
  pCam->rot[0] = fVar4;
  pCam->rot[1] = fVar5;
  pCam->rot[2] = fVar6;
  PVar21 = g_heroState;
  pCam->rot[3] = fVar7;
  fVar4 = DAT_0096a68c;
  iVar16 = DAT_0096a674;
  iVar23 = DAT_0096a644;
  if ((PVar21 == SWINGING_YELLOW_SWINGSHOT) || (PVar21 == DISENGAGE_YELLOW_SWINGSHOT)) {
    fVar2 = DAT_0096a68c + 1.5707963;
    fVar3 = 3.1415925 - DAT_0096a68c;
    if (DAT_0096a68c - (3.1415925 - DAT_0096a68c) < 0.0) {
      fVar3 = DAT_0096a68c;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = -3.1415925 - DAT_0096a68c;
    if ((-3.1415925 - DAT_0096a68c) - fVar3 < 0.0) {
      fVar6 = fVar3;
    }
    fVar3 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar3 = fVar5;
    }
    fVar2 = fVar6 * fVar6;
    *(undefined4 *)((int)pvVar9 + 0x78) = 0;
    fVar5 = fVar3 * fVar3;
    fVar14 = fVar2 * fVar2 * fVar6;
    fVar7 = fVar5 * fVar5 * fVar3;
    fVar15 = fVar2 * fVar14;
    fVar8 = fVar5 * fVar7;
    *(float *)((int)pvVar9 + 0x74) =
         fVar2 * fVar15 * 2.601887e-06 +
         fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6;
    *(float *)((int)pvVar9 + 0x70) =
         fVar5 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3;
    fVar2 = fVar4;
    iVar23 = iVar16;
  }
  else {
    fVar3 = *(float *)(DAT_0096a644 + 0x10) - fVar3;
    *(float *)((int)pvVar9 + 0x70) = fVar3;
    fVar7 = *(float *)(iVar23 + 0x14) - pCam->pos[1];
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0;
    fVar6 = fVar3 * fVar3 + fVar7 * fVar7;
    fVar4 = fVar2;
    fVar5 = fVar2;
    if (SQRT(fVar6) != 0.0) {
      fVar4 = 1.0 / SQRT(fVar6);
      fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar5 = fVar3 * fVar4;
      fVar4 = fVar7 * fVar4;
    }
    *(float *)((int)pvVar9 + 0x70) = fVar5;
    *(float *)((int)pvVar9 + 0x74) = fVar4;
    *(undefined4 *)((int)pvVar9 + 0x78) = 0;
    *(float *)(puVar13 + 6) = fVar5;
    *(float *)((int)puVar13 + 0x34) = fVar4;
    *(float *)(puVar13 + 7) = ABS(fVar5) - ABS(fVar4);
    uVar26 = (ulonglong)(*(uint *)(puVar13 + 6) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 7) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x34) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar13 + 6));
    if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
      fVar3 = ABS(fVar4);
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar4 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar13 + 0x34));
    if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
      fVar7 = ABS(fVar5);
    }
    if (0.0 < fVar3) {
      lVar28 = uVar22 - 0x60;
      lVar25 = uVar22 - 0x24;
      lVar27 = uVar22 - 0x34;
      lVar30 = 2;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar13 + 9) = fVar3;
      *(float *)(puVar13 + 8) = fVar3;
      *(float *)((int)puVar13 + 0x44) = fVar3;
      *(float *)((int)puVar13 + 0x3c) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar13 + 8) = *(float *)(puVar13 + 8) * fVar5;
      *(float *)((int)puVar13 + 0x44) = *(float *)((int)puVar13 + 0x44) * fVar3;
      *(float *)(puVar13 + 9) = *(float *)(puVar13 + 9) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar28 + 0x3c) = *(float *)((int)lVar28 + 0x2c) * fVar3 * fVar3;
        iVar16 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar28 = uVar22 - 0x34;
      lVar30 = 4;
      pfVar29 = (float *)&DAT_007358e0;
      lVar25 = lVar28;
      lVar27 = lVar24;
      do {
        fVar3 = *pfVar29;
        fVar5 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar27 + 0x3c) = *(float *)((int)lVar27 + 0x3c) * fVar3;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar25 = 2;
      do {
        iVar16 = (int)lVar24;
        iVar17 = (int)lVar28;
        lVar24 = lVar24 + 0x10;
        lVar28 = lVar28 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar16 + 0x3c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                + *(float *)(iVar17 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar4;
    }
  }
  *(float *)((int)pvVar10 + 0xb8) = fVar2;
  *(int *)((int)pvVar10 + 0xc0) = iVar23;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  GameCamera.blender.reqType = '\x02';
  GameCamera.blender.state = 1;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = loadVectorLeftIndexed(0x38,0x49a10);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  GameCamera.blender.reqInterpFrames =
       storeVectorElementWordIndexed
                 (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x2f4,0x9513c0);
  return;
}



//==== 00049ff0  ns=camera::camera7  size=0xb84
// sig: undefined Cam7_UpdatePos(void)
// callers(2): 0004af80 camera::camera7::UpdateCamera_7; 0004b358 camera::camera7::UpdateCamera_7
// callees(4): 00050288 camera::Cam_InterpAngles; 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00109af0 mobyutil::Delt
// strings: 00049fbc: '>333Dz' (raw)

void camera::camera7::Cam7_UpdatePos(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  MobyInstance *pMVar19;
  int iVar20;
  int iVar21;
  longlong lVar17;
  longlong lVar18;
  ushort *puVar23;
  float *pfVar24;
  longlong lVar22;
  MobyInstance *pMVar28;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar33;
  undefined8 uVar34;
  ulonglong in_f31;
  double dVar35;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x150;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar16;
  puVar9[0x2c] = in_LR;
  puVar9[0x21] = in_f23;
  puVar9[0x22] = in_f24;
  puVar9[0x23] = in_f25;
  puVar9[0x24] = in_f26;
  puVar9[0x25] = in_f27;
  puVar9[0x26] = in_f28;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x20] = unaff_r31;
  puVar9[0x1e] = unaff_r29;
  pMVar19 = DAT_0096a674;
  iVar8 = *(int *)(param_1 + 0x70);
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1c] = unaff_r27;
  puVar9[0x1b] = unaff_r26;
  if ((pMVar19 == (MobyInstance *)0x0) || (g_heroState != SWINGING_YELLOW_SWINGSHOT)) {
    fVar1 = 4.64;
    fVar3 = 2.0;
  }
  else {
    fVar1 = (pMVar19->pos).z - g_heroPosition.z;
    fVar4 = DAT_0096a680;
    if ((fVar1 <= DAT_0096a680) && (fVar4 = fVar1, fVar1 < 0.0)) {
      fVar4 = 0.0;
    }
    fVar3 = (fVar4 / DAT_0096a680) * 2.0;
    fVar1 = fVar4 / DAT_0096a680 + 3.65;
  }
  dVar35 = (double)fVar3;
  dVar33 = 8.0;
  mobyutil::Delt(fVar1,mobyutil::g_FrameTime * 8.0,
                 (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0xa0));
  mobyutil::Delt((float)dVar35,mobyutil::g_FrameTime * 4.0,
                 (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0xb0));
  if ((Level == Oltanis) && (g_heroState == SWINGING_YELLOW_SWINGSHOT)) {
    mobyutil::Delt((float)(dVar35 + 0.25),(float)((double)mobyutil::g_FrameTime * dVar33),
                   (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x8c));
  }
  else {
    mobyutil::Delt((float)(dVar35 - 0.5),(float)((double)mobyutil::g_FrameTime * dVar33),
                   (float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x8c));
  }
  if (g_heroState == SWINGING_YELLOW_SWINGSHOT) {
    if (((Level == Umbris || Level == Oltanis) || (Level == Gaspar)) &&
       ((DAT_0096a674 == (MobyInstance *)0x0 || (DAT_0096a674->group != -1)))) {
      pMVar19 = (MobyInstance *)0x0;
      fVar1 = 1000.0;
      puVar23 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)DAT_0096a674->group];
      if (puVar23 != (ushort *)0x0) {
        dVar33 = 0.0;
        do {
          pMVar28 = MobyInstance + (*puVar23 & 0x7fff);
          if ((pMVar28 != DAT_0096a674) &&
             ((pMVar28->oClass == SWINGSHOT_SWING || (pMVar28->oClass == SWINGSHOT_PULL)))) {
            fVar3 = (pMVar28->pos).y - (DAT_0096a674->pos).y;
            fVar4 = (pMVar28->pos).x - (DAT_0096a674->pos).x;
            fVar6 = (pMVar28->pos).z - (DAT_0096a674->pos).z;
            fVar6 = fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3;
            dVar35 = dVar33;
            dVar30 = dVar33;
            if (SQRT(fVar6) != 0.0) {
              fVar10 = 1.0 / SQRT(fVar6);
              fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
              fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
              fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
              dVar35 = (double)(fVar4 * fVar10);
              dVar30 = (double)(fVar3 * fVar10);
            }
            fVar3 = g_heroRotation.z + 1.5707963;
            fVar4 = 3.1415925 - g_heroRotation.z;
            if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
              fVar4 = g_heroRotation.z;
            }
            fVar10 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar10 = fVar3;
            }
            fVar11 = -3.1415925 - g_heroRotation.z;
            if ((-3.1415925 - g_heroRotation.z) - fVar4 < 0.0) {
              fVar11 = fVar4;
            }
            fVar4 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
              fVar4 = fVar10;
            }
            fVar3 = fVar11 * fVar11;
            fVar10 = fVar4 * fVar4;
            fVar14 = fVar3 * fVar3 * fVar11;
            fVar12 = fVar10 * fVar10 * fVar4;
            fVar15 = fVar3 * fVar14;
            fVar13 = fVar10 * fVar12;
            fVar3 = (float)((double)(fVar10 * fVar13 * 2.601887e-06 +
                                    fVar13 * -0.0001980741 +
                                    fVar12 * 0.0083330255 + fVar10 * fVar4 * -0.16666657 + fVar4) *
                            dVar35 + (double)(float)((double)(fVar3 * fVar15 * 2.601887e-06 +
                                                             fVar15 * -0.0001980741 +
                                                             fVar14 * 0.0083330255 +
                                                             fVar3 * fVar11 * -0.16666657 + fVar11)
                                                    * dVar30));
            if ((0.0 < fVar3) && (fVar3 = -(fVar3 * 10.0 - SQRT(fVar6)), fVar3 < fVar1)) {
              fVar1 = fVar3;
              pMVar19 = pMVar28;
            }
          }
          uVar7 = *puVar23;
          puVar23 = puVar23 + 1;
        } while (-1 < (short)uVar7);
        if (pMVar19 != (MobyInstance *)0x0) {
          fVar1 = (pMVar19->pos).x - (DAT_0096a674->pos).x;
          fVar3 = (pMVar19->pos).y - (DAT_0096a674->pos).y;
          fVar6 = ABS(fVar1);
          fVar4 = ABS(fVar3);
          *(float *)((int)puVar9 + 0x8c) = fVar1;
          *(float *)(puVar9 + 0x12) = fVar3;
          *(float *)((int)puVar9 + 0x94) = fVar6 - fVar4;
          uVar25 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
          uVar26 = uVar25 << 2 | 0x735900;
          fVar1 = ABS(*(float *)((int)puVar9 + 0x8c));
          if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
            fVar1 = fVar4;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
          fVar4 = ABS(*(float *)(puVar9 + 0x12));
          if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
            fVar4 = fVar6;
          }
          fVar6 = *(float *)((int)uVar26 + 4);
          if (0.0 < fVar1) {
            lVar17 = uVar16 - 0x140;
            lVar22 = uVar16 - 0x98;
            lVar27 = uVar16 - 0x88;
            lVar29 = 2;
            fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
            fVar4 = fVar1 * fVar1;
            *(float *)((int)puVar9 + 0xc4) = fVar1;
            *(float *)((int)puVar9 + 0xbc) = fVar1;
            *(float *)(puVar9 + 0x18) = fVar1;
            *(float *)(puVar9 + 0x17) = fVar1;
            fVar1 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
            *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar1;
            *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar1 * fVar4;
            do {
              *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar1 * fVar1;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar16 - 0x98;
            uVar26 = ZEXT48(&DAT_007358e0);
            lVar17 = lVar18;
            lVar22 = lVar27;
            do {
              pfVar24 = (float *)uVar26;
              fVar1 = pfVar24[1];
              uVar26 = uVar26 + 8;
              *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xb8) * *pfVar24;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
              lVar22 = lVar22 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar21 = (int)lVar27;
              lVar27 = lVar27 + 0x10;
              dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0xb8)) +
                                *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                               *(float *)(iVar21 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar6);
          }
          dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),dVar33,
                                            0x3f547ae140000000,0x3fc6666660000000,0,&DAT_00049f98,
                                            uVar26,iVar8 + 0xbc);
          *(float *)(iVar8 + 0xb8) = (float)dVar33;
          goto LAB_0004a6c0;
        }
      }
      if (*(int *)(iVar8 + 0x80) == 1) {
        dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),
                                          (double)*(float *)(*(int *)(iVar8 + 0x84) + 0x48),
                                          0x3f547ae140000000,0x3fc6666660000000,0,&DAT_00049f98,
                                          *(int *)(iVar8 + 0x84),iVar8 + 0xbc);
      }
      else {
        dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),(double)g_heroRotation.z,
                                          0x3f547ae140000000,0x3fc6666660000000,0,&DAT_00049f98,
                                          puVar23,iVar8 + 0xbc);
      }
      *(float *)(iVar8 + 0xb8) = (float)dVar33;
    }
    else {
      dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),(double)g_heroRotation.z,
                                        0x3f547ae140000000,0x3fc6666660000000,0);
      *(float *)(iVar8 + 0xb8) = (float)dVar33;
    }
  }
  else if (g_heroState == PULLING_GREEN_SWINGSHOT) {
    if (*(int *)(iVar8 + 0x80) == 1) {
      dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),
                                        (double)*(float *)(*(int *)(iVar8 + 0x84) + 0x48),
                                        (double)DAT_0071e7e4,0x3fc6666660000000,0,&DAT_00049f98,
                                        &DAT_00720000,iVar8 + 0xbc);
    }
    else {
      dVar33 = (double)Cam_InterpAngles((double)*(float *)(iVar8 + 0xb8),(double)g_heroRotation.z,
                                        (double)DAT_0071e7e4,0x3fc6666660000000,0,&DAT_00049f98,
                                        &DAT_00720000,iVar8 + 0xbc);
    }
    *(float *)(iVar8 + 0xb8) = (float)dVar33;
  }
LAB_0004a6c0:
  fVar1 = *(float *)(iVar8 + 0xb8);
  fVar3 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar6 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar6 = fVar3;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
    fVar1 = fVar6;
  }
  fVar3 = fVar10 * fVar10;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar3 * fVar3 * fVar10;
  fVar6 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar3 * fVar12;
  fVar11 = fVar4 * fVar6;
  fVar10 = fVar3 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10;
  fVar3 = fVar4 * fVar11 * 2.601887e-06 +
          fVar11 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1;
  *(float *)(iVar8 + 0x70) = fVar3;
  *(float *)(iVar8 + 0x74) = fVar10;
  dVar33 = 0.0;
  fVar1 = SQRT(fVar3 * fVar3 + fVar10 * fVar10);
  *(undefined4 *)(iVar8 + 0x7c) = 0;
  *(undefined4 *)(iVar8 + 0x78) = 0;
  if (fVar1 == 0.0) {
    *(float *)(puVar9 + 0xe) = fVar3;
    *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)(iVar8 + 0x74);
    *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(iVar8 + 0x78);
    uVar2 = *(undefined4 *)(iVar8 + 0x7c);
    *(undefined4 *)(puVar9 + 0xf) = 0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    *(undefined4 *)(puVar9 + 0xe) = 0;
    dVar35 = dVar33;
    dVar30 = dVar33;
    dVar31 = dVar33;
  }
  else {
    fVar1 = -*(float *)(iVar8 + 0xa0) / fVar1;
    dVar30 = (double)(fVar3 * fVar1);
    *(float *)(puVar9 + 0xe) = fVar3 * fVar1;
    fVar3 = *(float *)(iVar8 + 0x74) * fVar1;
    dVar31 = (double)fVar3;
    *(float *)((int)puVar9 + 0x74) = fVar3;
    fVar1 = *(float *)(iVar8 + 0x78) * fVar1;
    dVar35 = (double)fVar1;
    *(float *)(puVar9 + 0xf) = fVar1;
    uVar2 = *(undefined4 *)(iVar8 + 0x7c);
  }
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar2;
  fVar1 = (float)(dVar35 + (double)*(float *)(iVar8 + 0xb0));
  dVar35 = (double)g_heroPosition.x;
  dVar32 = (double)g_heroPosition.y;
  fVar3 = fVar1 + g_heroPosition.z;
  *(float *)(puVar9 + 0xf) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar30 + dVar35);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar31 + dVar32);
  *(float *)(puVar9 + 0xf) = fVar3;
  iVar20 = collproc::CollLine(param_1 + 0x30,uVar16 - 0xe0,0x12,0,0);
  if (iVar20 == 0) {
    uVar2 = *(undefined4 *)((int)puVar9 + 0x74);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar9 + 0xe);
    uVar5 = *(undefined4 *)(puVar9 + 0xf);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    uVar2 = *(undefined4 *)((int)puVar9 + 0x7c);
    *(undefined4 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x34);
    fVar6 = CollOutput.ip.y - fVar1;
    fVar3 = *(float *)(param_1 + 0x30);
    fVar11 = CollOutput.ip.x - fVar3;
    fVar4 = *(float *)(param_1 + 0x38);
    fVar10 = CollOutput.ip.z - fVar4;
    fVar12 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar6 * fVar6);
    if (0.5 < fVar12) {
      iVar20 = 0;
      fVar12 = (fVar12 - 0.5) / fVar12;
      *(undefined4 *)((int)puVar9 + 0x7c) = *(undefined4 *)(param_1 + 0x3c);
      *(float *)(puVar9 + 0xe) = fVar11 * fVar12 + fVar3;
      *(float *)((int)puVar9 + 0x74) = fVar6 * fVar12 + fVar1;
      *(float *)(puVar9 + 0xf) = fVar10 * fVar12 + fVar4;
      uVar34 = 0x3fe8000000000000;
      do {
        iVar21 = collproc::CollSphere(uVar34,uVar16 - 0xe0);
        fVar1 = CollOutput.push.y;
        if (iVar21 == 0) break;
        iVar20 = iVar20 + 1;
        *(float *)(puVar9 + 0xe) = CollOutput.push.x;
        fVar3 = CollOutput.push.z;
        *(float *)((int)puVar9 + 0x74) = fVar1;
        fVar1 = CollOutput.push.w;
        *(float *)(puVar9 + 0xf) = fVar3;
        *(float *)((int)puVar9 + 0x7c) = fVar1;
      } while (iVar20 < 5);
    }
    fVar1 = *(float *)(puVar9 + 0xe);
    fVar3 = *(float *)((int)puVar9 + 0x74);
    *(float *)(param_1 + 0x30) = fVar1;
    uVar2 = *(undefined4 *)(puVar9 + 0xf);
    *(float *)(param_1 + 0x34) = fVar3;
    uVar5 = *(undefined4 *)((int)puVar9 + 0x7c);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    fVar1 = g_heroPosition.x - fVar1;
    fVar3 = g_heroPosition.y - fVar3;
    dVar30 = ABS((double)fVar1);
    dVar31 = ABS((double)fVar3);
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = fVar3;
    *(float *)(puVar9 + 0x11) = (float)(dVar30 - dVar31);
    uVar26 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
    dVar35 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)(puVar9 + 0x11) - dVar33 < 0.0) {
      dVar35 = dVar31;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar9 + 0x84));
    if ((double)*(float *)(puVar9 + 0x11) - dVar33 < 0.0) {
      dVar31 = dVar30;
    }
    fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if (dVar33 < dVar35) {
      lVar17 = uVar16 - 0x140;
      lVar27 = uVar16 - 0xa8;
      lVar22 = uVar16 - 0xb8;
      lVar29 = 2;
      fVar4 = (float)(dVar31 - dVar35) / (float)(dVar31 + dVar35);
      fVar6 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xa4) = fVar4;
      *(float *)((int)puVar9 + 0x9c) = fVar4;
      *(float *)(puVar9 + 0x14) = fVar4;
      *(float *)(puVar9 + 0x13) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar6;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x88) * fVar4 * fVar4;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar27 = uVar16 - 0xb8;
      pfVar24 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar22 = lVar27;
      do {
        fVar4 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar17 = 2;
      do {
        iVar20 = (int)lVar18;
        iVar21 = (int)lVar27;
        lVar18 = lVar18 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0x98)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar1 + fVar3);
    }
    *(float *)(iVar8 + 0xb8) = (float)dVar33;
    *(undefined4 *)(iVar8 + 0xbc) = 0;
  }
  return;
}



//==== 0004ab98  ns=camera::camera7  size=0x3e8
// sig: undefined Cam7_UpdateRot(void)
// callers(2): 0004af80 camera::camera7::UpdateCamera_7; 0004b358 camera::camera7::UpdateCamera_7
// callees(2): 00050288 camera::Cam_InterpAngles; 001113e0 mobyutil::MB_RotateQuatAxisAngle
// strings: 0004ab90: '>333`'

void camera::camera7::Cam7_UpdateRot(float *param_1)

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
  
  fVar5 = param_1[0x1c];
  fVar1 = g_heroPosition.y - param_1[0xd];
  fVar3 = g_heroPosition.x - param_1[0xc];
  fVar4 = (g_heroPosition.z + *(float *)((int)fVar5 + 0x8c)) - param_1[0xe];
  dVar9 = 0.0;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  dVar11 = dVar9;
  dVar12 = dVar9;
  dVar13 = dVar9;
  if (SQRT(fVar2) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar2);
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar13 = (double)(fVar3 * fVar6);
    dVar12 = (double)(fVar1 * fVar6);
    dVar11 = (double)(fVar4 * fVar6);
  }
  dVar8 = 1.0;
  fVar1 = (float)(dVar11 * (double)param_1[2] +
                 (double)(float)(dVar13 * (double)*param_1 +
                                (double)(float)(dVar12 * (double)param_1[1])));
  fVar3 = fVar1;
  if (fVar1 - 0.0 < 0.0) {
    fVar3 = ABS(fVar1);
  }
  dVar11 = (double)(1.0 - fVar3);
  if ((double)(1.0 - fVar3) - 0.0 < 0.0) {
    dVar11 = dVar9;
  }
  dVar12 = dVar8;
  if (fVar1 - 0.0 < 0.0) {
    dVar12 = -1.0;
  }
  dVar11 = -(double)(float)(-(double)((fVar3 * fVar3 * fVar3 * DAT_007358cc +
                                      fVar3 * fVar3 * DAT_007358c8 +
                                      fVar3 * DAT_007358c4 + DAT_007358c0) * (float)SQRT(dVar11) -
                                     1.5707964) * dVar12 - 1.5707963705062866);
  if (g_heroState == PULLING_GREEN_SWINGSHOT) {
    fVar1 = *(float *)((int)fVar5 + 0x30) + 0.017;
    dVar12 = (double)fVar1;
    *(float *)((int)fVar5 + 0x30) = fVar1;
    if (1.0 < dVar12) {
      *(undefined4 *)((int)fVar5 + 0x30) = 0x3f800000;
      dVar12 = dVar8;
    }
    dVar11 = (double)(float)(dVar11 * dVar12);
  }
  else {
    dVar11 = (double)Cam_InterpAngles(0,dVar11,0x3f947ae140000000,0x3fc6666660000000,0,
                                      (int)fVar5 + 0x30,&DAT_0004ab74,(int)fVar5 + 0x30);
  }
  mobyutil::MB_RotateQuatAxisAngle((float)dVar11,param_1,param_1 + 0x10);
  fVar5 = param_1[1];
  fVar1 = *param_1;
  fVar3 = param_1[2];
  dVar11 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  if ((double)(float)SQRT(dVar11) == dVar9) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar4 = param_1[3];
    param_1[0x12] = param_1[2];
    dVar11 = dVar9;
    dVar12 = dVar9;
    dVar13 = dVar9;
  }
  else {
    dVar12 = 1.0 / SQRT(dVar11);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar12) * dVar12 - dVar8) *
                             (double)(float)(dVar12 * 0.5) + dVar12);
    fVar4 = param_1[3];
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar12) * dVar12 - dVar8) *
                             (double)(float)(dVar12 * 0.5) + dVar12);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar11 * dVar12) * dVar12 - dVar8) *
                    (double)(float)(dVar12 * 0.5) + dVar12);
    dVar13 = (double)(fVar1 * fVar2);
    dVar12 = (double)(fVar5 * fVar2);
    dVar11 = (double)(fVar3 * fVar2);
  }
  param_1[0x10] = (float)dVar13;
  param_1[0x11] = (float)dVar12;
  param_1[0x12] = (float)dVar11;
  param_1[0x13] = fVar4;
  *param_1 = (float)dVar13;
  param_1[1] = (float)dVar12;
  param_1[2] = (float)dVar11;
  param_1[3] = fVar4;
  fVar5 = (float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar13 -
                 (double)(float)((double)GameCamera.field16_0x1b0 * dVar11));
  fVar1 = (float)((double)(float)GameCamera.field17_0x1b4._0_4_ * dVar11 -
                 (double)(float)((double)(float)GameCamera.field17_0x1b4._4_4_ * dVar12));
  fVar3 = (float)((double)GameCamera.field16_0x1b0 * dVar12 -
                 (double)(float)((double)(float)GameCamera.field17_0x1b4._0_4_ * dVar13));
  param_1[7] = 0.0;
  dVar14 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  dVar7 = dVar9;
  dVar10 = dVar9;
  if ((double)(float)SQRT(dVar14) != dVar9) {
    dVar9 = 1.0 / SQRT(dVar14);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar9) * dVar9 - dVar8) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar9) * dVar9 - dVar8) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar14 * dVar9) * dVar9 - dVar8) *
                    (double)(float)(dVar9 * 0.5) + dVar9);
    dVar7 = (double)(fVar1 * fVar2);
    dVar9 = (double)(fVar5 * fVar2);
    dVar10 = (double)(fVar3 * fVar2);
  }
  param_1[4] = (float)dVar7;
  param_1[5] = (float)dVar9;
  param_1[6] = (float)dVar10;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar12 * dVar10 - (double)(float)(dVar11 * dVar9));
  param_1[9] = (float)(dVar11 * dVar7 - (double)(float)(dVar13 * dVar10));
  param_1[10] = (float)(dVar13 * dVar9 - (double)(float)(dVar12 * dVar7));
  return;
}



//==== 0004af80  ns=camera::camera7  size=0x34
// sig: undefined UpdateCamera_7(void)
// callers(0): 
// callees(2): 00049ff0 camera::camera7::Cam7_UpdatePos; 0004ab98 camera::camera7::Cam7_UpdateRot

void camera::camera7::UpdateCamera_7(undefined8 param_1)

{
  Cam7_UpdatePos();
  Cam7_UpdateRot(param_1);
  return;
}



//==== 0004afb4  ns=camera  size=0x34
// sig: undefined CamZoomOfs_Reset(void)
// callers(1): 002d8058 mobyupdate_unsorted::UpdateMoby_{191_758_803_1429}
// callees(0): 

void camera::CamZoomOfs_Reset(void)

{
  GameCamera.orientMtx.position.y = 0.0;
  GameCamera.orientMtx.position.x = 0.0;
  GameCamera.orientMtx.position.z = 10000.0;
  GameCamera.orientMtx.position.w = 0.0;
  GameCamera.field22_0x390 = (char  [4])&PTR_CamZoomOfs_Update_00704158;
  return;
}



//==== 0004aff0  ns=camera  size=0x64
// sig: undefined CamZoomOfs_Update(void)
// callers(0): 
// callees(2): 0002f414 camera0::Cam0_SetCamOfsZ; 00050000 camera::Camera_AddPostUpdFunc

void camera::CamZoomOfs_Update(void)

{
  if (GameCamera.orientMtx.position.w != 0.0) {
    camera0::Cam0_SetCamOfsZ
              ((double)(GameCamera.orientMtx.position.w * 0.35),0x3f747ae140000000,&DAT_0004afe8,1);
    Camera_AddPostUpdFunc(&PTR_CamZoomOfs_PostUpd_00704160);
  }
  return;
}



//==== 0004b058  ns=camera  size=0x64
// sig: undefined CamZoomOfs_PostUpd(void)
// callers(0): 
// callees(0): 

void camera::CamZoomOfs_PostUpd(void)

{
  GameCamera.orientMtx.position.z = 10000.0;
  if (GameCamera.orientMtx.position.y == 0.0) {
    GameCamera.orientMtx.position.w = GameCamera.orientMtx.position.w - DAT_0071e7e8;
    if (GameCamera.orientMtx.position.w < 0.0) {
      GameCamera.orientMtx.position.w = 0.0;
    }
  }
  else {
    GameCamera.orientMtx.position.y = 0.0;
  }
  GameCamera.orientMtx.position.x = 0.0;
  return;
}



//==== 0004b0e0  ns=camera  size=0x264
// sig: undefined ???_Cam_NudgeTowardMoby(void)
// callers(1): 002d8058 mobyupdate_unsorted::UpdateMoby_{191_758_803_1429}
// callees(0): 

void camera::____Cam_NudgeTowardMoby(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) &&
     ((uint)ABS(ANALOG_STICKS.y) < 0x3d4cccce)) {
    fVar1 = *(float *)((int)param_1 + 0x14) - g_heroPosition.y;
    fVar2 = *(float *)((int)param_1 + 0x10) - g_heroPosition.x;
    fVar3 = *(float *)((int)param_1 + 0x18) - g_heroPosition.z;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar4 < 22.0) {
      if (((0.0 < fVar4) && (fVar4 < GameCamera.orientMtx.position.z)) && (0.0 < fVar3)) {
                    /* WARNING: Load size is inaccurate */
        fVar4 = (*(float *)((int)GameCamera.pCurrentUpdCam + 8) * fVar3 +
                *GameCamera.pCurrentUpdCam * fVar2 +
                *(float *)((int)GameCamera.pCurrentUpdCam + 4) * fVar1) / fVar4;
        fVar1 = fVar4;
        if (fVar4 - 0.0 < 0.0) {
          fVar1 = ABS(fVar4);
        }
        fVar2 = 1.0;
        if (fVar4 - 0.0 < 0.0) {
          fVar2 = -1.0;
        }
        fVar3 = 1.0 - fVar1;
        if ((1.0 - fVar1) - 0.0 < 0.0) {
          fVar3 = 0.0;
        }
        if (-(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar3) -
               1.5707964) * fVar2 - 1.5707964) < 1.1170107) {
          fVar1 = *(float *)((int)param_1 + 0x14) -
                  *(float *)((int)GameCamera.pCurrentUpdCam + 0x34);
          fVar2 = *(float *)((int)param_1 + 0x10) -
                  *(float *)((int)GameCamera.pCurrentUpdCam + 0x30);
          fVar3 = *(float *)((int)param_1 + 0x18) -
                  *(float *)((int)GameCamera.pCurrentUpdCam + 0x38);
          fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          fVar4 = 0.0001;
          if (0.0 - fVar5 < 0.0) {
            fVar4 = fVar5;
          }
          if (fVar5 - 0.0 < 0.0) {
            fVar4 = fVar5;
          }
          fVar2 = (*(float *)((int)GameCamera.pCurrentUpdCam + 8) * fVar3 +
                  *GameCamera.pCurrentUpdCam * fVar2 +
                  *(float *)((int)GameCamera.pCurrentUpdCam + 4) * fVar1) / fVar4;
          fVar1 = fVar2;
          if (fVar2 - 0.0 < 0.0) {
            fVar1 = ABS(fVar2);
          }
          fVar3 = 1.0;
          if (fVar2 - 0.0 < 0.0) {
            fVar3 = -1.0;
          }
          fVar2 = 1.0 - fVar1;
          if ((1.0 - fVar1) - 0.0 < 0.0) {
            fVar2 = 0.0;
          }
          if (-(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                  fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar2)
                 - 1.5707964) * fVar3 - 1.5707964) < 0.62831855) {
            GameCamera.orientMtx.position.x = (float)GameCamera.pCurrentUpdCam;
            GameCamera.orientMtx.position.w = GameCamera.orientMtx.position.w + DAT_0071e7e8;
            GameCamera.orientMtx.position.y = param_1;
            GameCamera.orientMtx.position.z = fVar4;
            if (1.0 < GameCamera.orientMtx.position.w) {
              GameCamera.orientMtx.position.w = 1.0;
            }
          }
        }
      }
    }
  }
  return;
}



//==== 0004b344  ns=camera::camera7  size=0x8
// sig: int ActivateCamera_7(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera7::ActivateCamera_7(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}



//==== 0004b358  ns=camera::camera7  size=0x24c
// sig: void UpdateCamera_7(UpdateCam * pCam)
// callers(0): 
// callees(4): 00049a50 camera::camera7::InitCamera_7; 00049ff0 camera::camera7::Cam7_UpdatePos; 0004ab98 camera::camera7::Cam7_UpdateRot; 000543c8 camera::Camera_CollSphereBump

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera7::UpdateCamera_7(UpdateCam *pCam)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 in_LR;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pvVar1 = GameCamera.pLastUpdCam;
  lVar2 = (longlong)(int)pCam;
  if (g_heroState == SWINGING_YELLOW_SWINGSHOT) {
    if (*(int *)((int)pCam->control + 0xc0) != DAT_0096a674) {
      *(float *)((int)GameCamera.pLastUpdCam + 0x30) = pCam->pos[0];
      *(float *)((int)pvVar1 + 0x34) = pCam->pos[1];
      *(float *)((int)pvVar1 + 0x38) = pCam->pos[2];
      *(float *)((int)pvVar1 + 0x3c) = pCam->pos[3];
      *(float *)pvVar1 = pCam->mtx[0];
      *(float *)((int)pvVar1 + 4) = pCam->mtx[1];
      *(float *)((int)pvVar1 + 8) = pCam->mtx[2];
      *(float *)((int)pvVar1 + 0xc) = pCam->mtx[3];
      *(float *)((int)pvVar1 + 0x10) = pCam->mtx[4];
      *(float *)((int)pvVar1 + 0x14) = pCam->mtx[5];
      *(float *)((int)pvVar1 + 0x18) = pCam->mtx[6];
      *(float *)((int)pvVar1 + 0x1c) = pCam->mtx[7];
      *(float *)((int)pvVar1 + 0x20) = pCam->mtx[8];
      *(float *)((int)pvVar1 + 0x24) = pCam->mtx[9];
      *(float *)((int)pvVar1 + 0x28) = pCam->mtx[10];
      *(float *)((int)pvVar1 + 0x2c) = pCam->mtx[0xb];
      InitCamera_7(pCam);
      auVar3 = ZEXT416(0xffffffff);
      auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
      auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
      auVar3 = loadVectorLeftIndexed(in_LR,0x4b34c);
      auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar3 = vectorMultiplyAddFloatingPoint
                         (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
      auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
      auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.blender.reqInterpFrames =
           storeVectorElementWordIndexed
                     (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x2f4,0x9513c0);
    }
  }
  else if ((((g_heroState == THROWING_GREEN_SWINGSHOT) || (g_heroState == PULLING_GREEN_SWINGSHOT))
           || (g_heroState == UNK_26)) && (*(int *)((int)pCam->control + 0xc0) != DAT_0096a644)) {
    *(float *)((int)GameCamera.pLastUpdCam + 0x30) = pCam->pos[0];
    *(float *)((int)pvVar1 + 0x34) = pCam->pos[1];
    *(float *)((int)pvVar1 + 0x38) = pCam->pos[2];
    *(float *)((int)pvVar1 + 0x3c) = pCam->pos[3];
    *(float *)pvVar1 = pCam->mtx[0];
    *(float *)((int)pvVar1 + 4) = pCam->mtx[1];
    *(float *)((int)pvVar1 + 8) = pCam->mtx[2];
    *(float *)((int)pvVar1 + 0xc) = pCam->mtx[3];
    *(float *)((int)pvVar1 + 0x10) = pCam->mtx[4];
    *(float *)((int)pvVar1 + 0x14) = pCam->mtx[5];
    *(float *)((int)pvVar1 + 0x18) = pCam->mtx[6];
    *(float *)((int)pvVar1 + 0x1c) = pCam->mtx[7];
    *(float *)((int)pvVar1 + 0x20) = pCam->mtx[8];
    *(float *)((int)pvVar1 + 0x24) = pCam->mtx[9];
    *(float *)((int)pvVar1 + 0x28) = pCam->mtx[10];
    *(float *)((int)pvVar1 + 0x2c) = pCam->mtx[0xb];
    InitCamera_7(pCam);
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(in_LR,0x4b34c);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    GameCamera.blender.reqInterpFrames =
         storeVectorElementWordIndexed
                   (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x2f4,0x9513c0);
  }
  Cam7_UpdatePos(lVar2);
  Cam7_UpdateRot(lVar2);
  Camera_CollSphereBump(0x3fe0000000000000,lVar2 + 0x30);
  *(undefined4 *)((int)pCam->control + 0x80) = 0;
  return;
}



//==== 0004b5a4  ns=camera::camera7  size=0x3c
// sig: void ExitCamera_7(UpdateCam * pCam)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera7::ExitCamera_7(UpdateCam *pCam)

{
  if ((hero::g_HeroRequestedCamType != pCam->type) && (g_heroState != NEUTRAL_JUMP)) {
    (pCam->activation).deactivate = 3;
    (pCam->activation).activate = '\0';
  }
  return;
}



//==== 0004b5e0  ns=camera::camera7  size=0x44
// sig: undefined Cam7_SetTargetMoby(void)
// callers(1): 00272248 mobyupdate_unsorted::UpdateMoby_1417_FlyingCar
// callees(0): 

void camera::camera7::Cam7_SetTargetMoby(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 7) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined4 *)(iVar1 + 0x84) = param_1;
    iVar2 = *(int *)((int)pvVar3 + 0x70);
    *(undefined4 *)(iVar1 + 0x80) = 1;
    *(undefined4 *)(iVar1 + 0x8c) = 0x40000000;
    *(undefined4 *)(iVar2 + 0xa0) = 0x40e00000;
    *(undefined4 *)(iVar2 + 0xb0) = 0x40000000;
  }
  return;
}



//==== 0004b624  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e838 = 0x10000;
  return;
}



//==== 0004b660  ns=camera::camera8  size=0x180
// sig: undefined Cam8_UpdateTarget(void)
// callers(2): 0004b858 camera::camera8::Cam8_CalcInitialPos; 0004d5a8 camera::camera8::UpdateCamera_8
// callees(0): 

void camera::camera8::Cam8_UpdateTarget(int param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  
  fVar9 = DAT_00969d08;
  fVar5 = DAT_00969d04;
  iVar4 = *(int *)(param_1 + 0x70);
  fVar7 = DAT_00969d00 * 0.7 + g_heroPosition.x;
  fVar3 = 0.0;
  *(float *)(iVar4 + 0x80) = fVar7;
  fVar6 = fVar5 * 0.7 + g_heroPosition.y;
  bVar1 = Level == Rilgar;
  bVar2 = Level == Kalebo;
  *(float *)(iVar4 + 0x84) = fVar6;
  fVar5 = fVar9 * 0.7 + g_heroPosition.z;
  *(float *)(iVar4 + 0x88) = fVar5;
  fVar9 = g_heroPosition.w;
  *(float *)(iVar4 + 0x1d0) = fVar7;
  *(float *)(iVar4 + 0x8c) = fVar9;
  *(float *)(iVar4 + 0x1d4) = fVar6;
  *(float *)(iVar4 + 0x1d8) = fVar5;
  *(float *)(iVar4 + 0x1dc) = fVar9;
  uVar12 = DAT_00969f7c;
  fVar11 = DAT_00969f78;
  fVar10 = DAT_00969f74;
  fVar9 = hero::g_heroGravityDir;
  if (bVar1) {
    if (48.0 <= SQRT((286.16 - fVar7) * (286.16 - fVar7) + (447.82 - fVar6) * (447.82 - fVar6))) {
      if (fVar5 < 67.2) {
        *(undefined4 *)(iVar4 + 0x88) = 0x42866666;
      }
    }
    else if (fVar5 < 62.4) {
      *(undefined4 *)(iVar4 + 0x88) = 0x4279999a;
    }
  }
  else if ((bVar2) && (fVar5 < 77.5)) {
    *(undefined4 *)(iVar4 + 0x88) = 0x429b0000;
  }
  *(undefined4 *)(iVar4 + 0xac) = uVar12;
  fVar7 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
  fVar6 = -1.0 / fVar7;
  fVar5 = fVar3;
  if (0.0 - fVar7 < 0.0) {
    fVar5 = fVar9 * fVar6;
  }
  fVar8 = fVar3;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = fVar10 * fVar6;
  }
  if (0.0 - fVar7 < 0.0) {
    fVar3 = fVar11 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar5 = fVar9 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = fVar10 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar3 = fVar11 * fVar6;
  }
  *(float *)(iVar4 + 0xa0) = fVar5;
  *(float *)(iVar4 + 0xa4) = fVar8;
  *(float *)(iVar4 + 0xa8) = fVar3;
  return;
}



//==== 0004b7f0  ns=camera::camera8  size=0x58
// sig: undefined Cam8_SetParams(void)
// callers(0): 
// callees(0): 

void camera::camera8::Cam8_SetParams
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8)

{
  int iVar1;
  
  iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  *(float *)(iVar1 + 0x184) = (float)param_1;
  *(float *)(iVar1 + 0x188) = (float)param_2;
  *(float *)(iVar1 + 0x180) = (float)param_3;
  *(float *)(iVar1 + 400) = (float)param_4;
  *(float *)(iVar1 + 0x194) = (float)param_5;
  *(float *)(iVar1 + 0x18c) = (float)param_6;
  if (param_7 - 0.0 < 0.0) {
    param_7 = 0.009999999776482582;
  }
  *(float *)(iVar1 + 0x10) = (float)param_7;
  if (param_8 - 0.0 < 0.0) {
    param_8 = 0.20000000298023224;
  }
  *(float *)(iVar1 + 0x14) = (float)param_8;
  return;
}



//==== 0004b858  ns=camera::camera8  size=0x4d4
// sig: undefined Cam8_CalcInitialPos(void)
// callers(1): 0004bd38 camera::camera8::Cam8_InitParams
// callees(1): 0004b660 camera::camera8::Cam8_UpdateTarget

void camera::camera8::Cam8_CalcInitialPos(float *param_1)

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
  
  fVar5 = param_1[0x1c];
  Cam8_UpdateTarget();
  fVar1 = (g_heroMobyPtr->transform).v0.y;
  fVar2 = (g_heroMobyPtr->transform).v0.x;
  fVar3 = (g_heroMobyPtr->transform).v0.z;
  fVar4 = 0.0;
  fVar9 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar7 = fVar4;
  fVar8 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar9) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar9);
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar9 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar7 = fVar2 * fVar8;
    fVar6 = fVar1 * fVar8;
    fVar8 = fVar3 * fVar8;
  }
  fVar3 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  fVar2 = *(float *)((int)fVar5 + 0xe0) / fVar3;
  fVar1 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    fVar1 = fVar2 * fVar7;
  }
  fVar9 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    fVar9 = fVar2 * fVar6;
  }
  fVar10 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    fVar10 = fVar2 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar1 = fVar2 * fVar7;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar9 = fVar2 * fVar6;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar10 = fVar2 * fVar8;
  }
  fVar1 = *(float *)((int)fVar5 + 0x80) - fVar1;
  param_1[0xc] = fVar1;
  fVar9 = *(float *)((int)fVar5 + 0x84) - fVar9;
  param_1[0xd] = fVar9;
  fVar10 = *(float *)((int)fVar5 + 0x88) - fVar10;
  param_1[0xe] = fVar10;
  param_1[0xf] = *(float *)((int)fVar5 + 0x8c);
  fVar2 = DAT_00969f7c;
  fVar7 = SQRT(DAT_00969f78 * DAT_00969f78 +
               hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar6 = -1.0 / fVar7;
  fVar3 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar3 = DAT_00969f74 * fVar6;
  }
  fVar8 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = hero::g_heroGravityDir * fVar6;
  }
  fVar12 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar12 = DAT_00969f78 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar3 = DAT_00969f74 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = hero::g_heroGravityDir * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar12 = DAT_00969f78 * fVar6;
  }
  fVar11 = SQRT(fVar12 * fVar12 + fVar8 * fVar8 + fVar3 * fVar3);
  fVar7 = *(float *)((int)fVar5 + 0xf0) / fVar11;
  fVar6 = fVar4;
  if (0.0 - fVar11 < 0.0) {
    fVar6 = fVar7 * fVar12;
  }
  fVar13 = fVar4;
  if (0.0 - fVar11 < 0.0) {
    fVar13 = fVar7 * fVar3;
  }
  fVar14 = fVar4;
  if (0.0 - fVar11 < 0.0) {
    fVar14 = fVar7 * fVar8;
  }
  if (fVar11 - 0.0 < 0.0) {
    fVar6 = fVar7 * fVar12;
  }
  if (fVar11 - 0.0 < 0.0) {
    fVar13 = fVar7 * fVar3;
  }
  if (fVar11 - 0.0 < 0.0) {
    fVar14 = fVar7 * fVar8;
  }
  fVar10 = fVar10 + fVar6;
  fVar9 = fVar9 + fVar13;
  fVar1 = fVar1 + fVar14;
  param_1[0xe] = fVar10;
  param_1[0xd] = fVar9;
  param_1[0xc] = fVar1;
  fVar7 = *(float *)((int)fVar5 + 0xcc) / fVar11;
  fVar6 = fVar4;
  if (0.0 - fVar11 < 0.0) {
    fVar6 = fVar7 * fVar3;
  }
  fVar13 = fVar4;
  if (0.0 - fVar11 < 0.0) {
    fVar13 = fVar7 * fVar8;
  }
  fVar14 = fVar4;
  if (0.0 - fVar11 < 0.0) {
    fVar14 = fVar7 * fVar12;
  }
  if (fVar11 - 0.0 < 0.0) {
    fVar6 = fVar7 * fVar3;
  }
  if (fVar11 - 0.0 < 0.0) {
    fVar13 = fVar7 * fVar8;
  }
  if (fVar11 - 0.0 < 0.0) {
    fVar14 = fVar7 * fVar12;
  }
  fVar9 = (fVar6 + *(float *)((int)fVar5 + 0x84)) - fVar9;
  fVar1 = (fVar13 + *(float *)((int)fVar5 + 0x80)) - fVar1;
  fVar10 = (fVar14 + *(float *)((int)fVar5 + 0x88)) - fVar10;
  fVar5 = fVar10 * fVar10 + fVar1 * fVar1 + fVar9 * fVar9;
  if (SQRT(fVar5) == 0.0) {
    param_1[3] = fVar2;
    *param_1 = fVar1;
    param_1[1] = fVar9;
    param_1[2] = fVar10;
    fVar2 = param_1[3];
    fVar10 = fVar4;
    fVar9 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar5);
    param_1[3] = fVar2;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar1 = fVar1 * fVar6;
    fVar9 = fVar9 * fVar6;
    fVar10 = fVar10 * fVar6;
  }
  *param_1 = fVar1;
  param_1[1] = fVar9;
  fVar15 = fVar3 * fVar10 - fVar12 * fVar9;
  fVar11 = fVar8 * fVar9 - fVar3 * fVar1;
  param_1[2] = fVar10;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  fVar8 = fVar12 * fVar1 - fVar8 * fVar10;
  fVar13 = fVar1 * fVar8 - fVar9 * fVar15;
  fVar14 = fVar10 * fVar15 - fVar1 * fVar11;
  fVar12 = fVar11 * fVar11 + fVar15 * fVar15 + fVar8 * fVar8;
  fVar7 = fVar9 * fVar11 - fVar10 * fVar8;
  fVar3 = fVar4;
  fVar5 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar12) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar12);
    fVar3 = -(fVar12 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar12 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar12 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar6 = fVar15 * fVar3;
    fVar5 = fVar8 * fVar3;
    fVar3 = fVar11 * fVar3;
  }
  param_1[6] = fVar3;
  param_1[4] = fVar6;
  param_1[5] = fVar5;
  fVar6 = fVar13 * fVar13 + fVar7 * fVar7 + fVar14 * fVar14;
  fVar3 = fVar4;
  fVar5 = fVar4;
  if (SQRT(fVar6) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar6);
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar5 = fVar7 * fVar4;
    fVar3 = fVar14 * fVar4;
    fVar4 = fVar13 * fVar4;
  }
  param_1[8] = fVar5;
  param_1[9] = fVar3;
  param_1[10] = fVar4;
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar9;
  param_1[0x12] = fVar10;
  param_1[0x13] = fVar2;
  return;
}



//==== 0004bd38  ns=camera::camera8  size=0x23c
// sig: undefined Cam8_InitParams(void)
// callers(1): 0004d4dc camera::camera8::InitCamera_8
// callees(1): 0004b858 camera::camera8::Cam8_CalcInitialPos

void camera::camera8::Cam8_InitParams(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  MobyInstance *pMVar11;
  
  puVar8 = *(undefined4 **)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c)
  ;
  puVar8[0x12] = 0;
  iVar9 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar9 + 0x184) = puVar8[10];
  *(undefined4 *)(iVar9 + 0x188) = puVar8[0xb];
  *(undefined4 *)(iVar9 + 0x180) = puVar8[0xc];
  *(undefined4 *)(iVar9 + 400) = puVar8[0xd];
  *(undefined4 *)(iVar9 + 0x194) = puVar8[0xe];
  uVar1 = puVar8[0xf];
  *(undefined4 *)(iVar9 + 0x1bc) = 0;
  *(undefined4 *)(iVar9 + 0x18c) = uVar1;
  *(undefined4 *)(iVar9 + 0x1b8) = 0;
  *(undefined4 *)(iVar9 + 0xc0) = 5;
  pMVar11 = g_heroMobyPtr;
  *(undefined4 *)(iVar9 + 0x1b4) = 0;
  *(undefined4 *)(iVar9 + 0x1b0) = 0;
  *(undefined4 *)(iVar9 + 0x1cc) = 0;
  *(undefined4 *)(iVar9 + 0x1c8) = 0;
  *(MobyInstance **)(iVar9 + 0xc4) = pMVar11;
  *(undefined4 *)(iVar9 + 0x1c4) = 0;
  *(undefined4 *)(iVar9 + 0x1c0) = 0;
  *(undefined4 *)(iVar9 + 200) = 0x3e567750;
  puVar10 = *(undefined4 **)(param_1 + 0x70);
  *(undefined4 *)(iVar9 + 0xcc) = *(undefined4 *)(iVar9 + 0x180);
  *(undefined4 *)(iVar9 + 0xd8) = 0x3ae4c388;
  *(undefined4 *)(iVar9 + 0xdc) = 0xbb8efa35;
  uVar1 = *(undefined4 *)(iVar9 + 0x184);
  puVar10[0x39] = 0x3f000000;
  puVar10[0x38] = uVar1;
  puVar10[0x3c] = *(undefined4 *)(iVar9 + 0x188);
  puVar10[4] = 0x3c23d70a;
  *(undefined2 *)(puVar10 + 7) = 0;
  puVar10[6] = 0;
  iVar9 = *(int *)(param_1 + 0x70);
  puVar10[5] = 0x3e4ccccd;
  puVar10[3] = 0;
  puVar10[2] = 0;
  puVar10[1] = 0;
  *puVar10 = 0;
  *(undefined4 *)(iVar9 + 0x10c) = 0;
  *(undefined4 *)(iVar9 + 0x108) = 0;
  *(undefined4 *)(iVar9 + 0x104) = 0;
  *(undefined4 *)(iVar9 + 0x100) = 0;
  *(undefined4 *)(iVar9 + 300) = 0;
  *(undefined4 *)(iVar9 + 0x128) = 0;
  *(undefined4 *)(iVar9 + 0x124) = 0;
  *(undefined4 *)(iVar9 + 0x120) = 0;
  *(undefined4 *)(iVar9 + 0x140) = 0;
  *(undefined4 *)(iVar9 + 0x110) = *puVar8;
  *(undefined4 *)(iVar9 + 0x134) = puVar8[8];
  *(undefined4 *)(iVar9 + 0x138) = puVar8[9];
  *(undefined4 *)(iVar9 + 0x13c) = 0;
  *(undefined4 *)(iVar9 + 0x50) = 0x3f4ccccd;
  *(undefined4 *)(iVar9 + 0x54) = 0x3e99999a;
  *(undefined4 *)(iVar9 + 0x58) = 0;
  *(undefined4 *)(iVar9 + 0x70) = 0x3faaaaab;
  *(undefined4 *)(iVar9 + 0x3c) = 0;
  *(undefined4 *)(iVar9 + 0x38) = 0;
  *(undefined4 *)(iVar9 + 0x34) = 0;
  *(undefined4 *)(iVar9 + 0x30) = 0;
  fVar2 = (float)puVar8[0x10];
  fVar3 = (float)puVar8[0x11];
  *(undefined2 *)(iVar9 + 0x5c) = 0;
  uVar1 = puVar8[0xb];
  uVar4 = puVar8[0xc];
  uVar5 = puVar8[0xd];
  uVar6 = puVar8[0xe];
  uVar7 = puVar8[0xf];
  if (fVar2 - 0.0 < 0.0) {
    fVar2 = 0.01;
  }
  iVar9 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  if (fVar3 - 0.0 < 0.0) {
    fVar3 = 0.2;
  }
  *(undefined4 *)(iVar9 + 0x184) = puVar8[10];
  *(undefined4 *)(iVar9 + 0x188) = uVar1;
  *(undefined4 *)(iVar9 + 0x180) = uVar4;
  *(undefined4 *)(iVar9 + 400) = uVar5;
  *(undefined4 *)(iVar9 + 0x194) = uVar6;
  *(undefined4 *)(iVar9 + 0x18c) = uVar7;
  *(float *)(iVar9 + 0x10) = fVar2;
  *(float *)(iVar9 + 0x14) = fVar3;
  Cam8_CalcInitialPos(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}



//==== 0004bf90  ns=camera::camera8  size=0x85c
// sig: undefined Cam8_UpdateRot(void)
// callers(1): 0004c828 camera::camera8::Cam8_UpdateCam
// callees(3): 000501e8 camera::Cam_InterpValues; 00050288 camera::Cam_InterpAngles; 001113e0 mobyutil::MB_RotateQuatAxisAngle

void camera::camera8::Cam8_UpdateRot(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  short sVar7;
  float *speed;
  double dVar8;
  double extraout_f1;
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
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  
  pMVar6 = g_heroMobyPtr;
  dVar23 = 0.0;
  pfVar3 = *(float **)(param_1 + 0x70);
  local_d8 = SQRT(DAT_00969f78 * DAT_00969f78 +
                  hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  if (local_d8 == 0.0) {
    local_d8 = 0.0;
    local_dc = 0.0;
    local_e0 = 0.0;
  }
  else {
    local_d8 = -1.0 / local_d8;
    local_e0 = hero::g_heroGravityDir * local_d8;
    local_dc = DAT_00969f74 * local_d8;
    local_d8 = DAT_00969f78 * local_d8;
  }
  sVar7 = *(short *)(pfVar3 + 7);
  if ((sVar7 == 0) && (DAT_0096a56e != '\0')) {
    *(undefined2 *)(pfVar3 + 7) = 1;
    dVar12 = (double)local_e0;
    dVar10 = (double)local_d8;
    dVar8 = (double)(pMVar6->transform).v2.z;
    dVar15 = (double)(pMVar6->transform).v2.y;
    dVar17 = (double)(pMVar6->transform).v2.x;
    dVar9 = (double)local_dc;
    fVar28 = (float)(dVar10 * dVar17 - (double)(float)(dVar12 * dVar8));
    fVar1 = (float)(dVar9 * dVar8 - (double)(float)(dVar10 * dVar15));
    fVar2 = (float)(dVar12 * dVar15 - (double)(float)(dVar9 * dVar17));
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar28 * fVar28;
    dVar8 = dVar23;
    dVar15 = dVar23;
    dVar17 = dVar23;
    if (SQRT(fVar4) != 0.0) {
      fVar5 = 1.0 / SQRT(fVar4);
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar17 = (double)(fVar1 * fVar5);
      dVar15 = (double)(fVar28 * fVar5);
      dVar8 = (double)(fVar2 * fVar5);
    }
    fVar28 = (float)(dVar8 * dVar12 - (double)(float)(dVar17 * dVar10));
    fVar1 = (float)(dVar15 * dVar10 - (double)(float)(dVar8 * dVar9));
    fVar2 = (float)(dVar17 * dVar9 - (double)(float)(dVar15 * dVar12));
    local_c4 = 0.0;
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar28 * fVar28;
    dVar13 = dVar23;
    dVar16 = dVar23;
    dVar24 = dVar23;
    if (SQRT(fVar4) != 0.0) {
      fVar5 = 1.0 / SQRT(fVar4);
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar16 = (double)(fVar1 * fVar5);
      dVar13 = (double)(fVar28 * fVar5);
      dVar24 = (double)(fVar2 * fVar5);
    }
    local_d0 = (float)dVar16;
    local_cc = (float)dVar13;
    local_c8 = (float)dVar24;
    dVar26 = (double)(*(float *)(param_1 + 0x34) - pfVar3[0x21]);
    dVar27 = (double)(*(float *)(param_1 + 0x30) - pfVar3[0x20]);
    dVar25 = (double)(*(float *)(param_1 + 0x38) - pfVar3[0x22]);
    fVar28 = SQRT((float)(dVar10 * dVar10 +
                         (double)(float)(dVar12 * dVar12 + (double)(float)(dVar9 * dVar9))));
    dVar21 = 9.999999747378752e-05;
    dVar18 = (double)((float)(dVar25 * dVar10 +
                             (double)(float)(dVar27 * dVar12 + (double)(float)(dVar26 * dVar9))) /
                     fVar28);
    dVar11 = dVar23;
    if (0.0 - fVar28 < 0.0) {
      dVar11 = (double)(float)(dVar9 * dVar18);
    }
    dVar20 = dVar23;
    if (0.0 - fVar28 < 0.0) {
      dVar20 = (double)(float)(dVar12 * dVar18);
    }
    dVar22 = dVar23;
    if (0.0 - fVar28 < 0.0) {
      dVar22 = (double)(float)(dVar10 * dVar18);
    }
    if (fVar28 - 0.0 < 0.0) {
      dVar11 = (double)(float)(dVar9 * dVar18);
    }
    if (fVar28 - 0.0 < 0.0) {
      dVar20 = (double)(float)(dVar12 * dVar18);
    }
    if (fVar28 - 0.0 < 0.0) {
      dVar22 = (double)(float)(dVar10 * dVar18);
    }
    dVar19 = 1.0;
    dVar11 = (double)(float)(dVar26 - dVar11);
    dVar12 = (double)(float)(dVar27 - dVar20);
    dVar18 = (double)(float)(dVar25 - dVar22);
    dVar20 = -1.0;
    fVar28 = (float)(dVar18 * dVar18 +
                    (double)(float)(dVar12 * dVar12 + (double)(float)(dVar11 * dVar11)));
    dVar10 = (double)SQRT(fVar28);
    dVar22 = 1.5707963705062866;
    dVar9 = dVar21;
    if (0.0 - dVar10 < 0.0) {
      dVar9 = dVar10;
    }
    if (dVar10 - 0.0 < 0.0) {
      dVar9 = dVar10;
    }
    fVar1 = (float)((double)(float)(dVar24 * dVar18 +
                                   (double)(float)(dVar16 * dVar12 +
                                                  (double)(float)(dVar13 * dVar11))) / dVar9);
    fVar2 = fVar1;
    if (fVar1 - 0.0 < 0.0) {
      fVar2 = ABS(fVar1);
    }
    dVar9 = (double)(1.0 - fVar2);
    if ((double)(1.0 - fVar2) - 0.0 < 0.0) {
      dVar9 = dVar23;
    }
    dVar13 = dVar19;
    if (fVar1 - 0.0 < 0.0) {
      dVar13 = dVar20;
    }
    dVar14 = -(double)((fVar2 * fVar2 * fVar2 * DAT_007358cc +
                       fVar2 * fVar2 * DAT_007358c8 + fVar2 * DAT_007358c4 + DAT_007358c0) *
                       (float)SQRT(dVar9) - 1.5707964);
    dVar9 = dVar23;
    dVar16 = dVar23;
    dVar24 = dVar23;
    if (dVar10 != 0.0) {
      fVar1 = 1.0 / SQRT(fVar28);
      fVar1 = -(fVar28 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      fVar1 = -(fVar28 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
      dVar10 = (double)(-(fVar28 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1);
      dVar9 = (double)(float)(dVar12 * dVar10);
      dVar16 = (double)(float)(dVar11 * dVar10);
      dVar24 = (double)(float)(dVar18 * dVar10);
    }
    fVar28 = -(float)(dVar14 * dVar13 - 1.5707963705062866);
    if ((float)(dVar8 * dVar24 + (double)(float)(dVar17 * dVar9 + (double)(float)(dVar15 * dVar16)))
        - 0.0 < 0.0) {
      fVar28 = (float)(dVar14 * dVar13 - 1.5707963705062866);
    }
    *(float *)(param_1 + 0x50) = fVar28;
    mobyutil::MB_RotateQuatAxisAngle(fVar28,&local_c0,&local_d0);
    dVar8 = (double)(float)(dVar25 * dVar25 +
                           (double)(float)(dVar27 * dVar27 + (double)(float)(dVar26 * dVar26)));
    dVar15 = (double)(float)SQRT(dVar8);
    if (dVar23 - dVar15 < 0.0) {
      dVar21 = dVar15;
    }
    if (dVar15 - dVar23 < 0.0) {
      dVar21 = dVar15;
    }
    dVar9 = (double)(float)((double)(float)((double)local_b8 * dVar25 +
                                           (double)(float)((double)local_c0 * dVar27 +
                                                          (double)(float)((double)local_bc * dVar26)
                                                          )) / dVar21);
    dVar17 = dVar9;
    if (dVar9 - dVar23 < 0.0) {
      dVar17 = ABS(dVar9);
    }
    dVar10 = (double)(float)(dVar19 - dVar17);
    if ((double)(float)(dVar19 - dVar17) - dVar23 < 0.0) {
      dVar10 = dVar23;
    }
    dVar12 = dVar19;
    if (dVar9 - dVar23 < 0.0) {
      dVar12 = dVar20;
    }
    dVar13 = -(double)(float)((double)((float)((double)(float)(dVar17 * dVar17) * dVar17) *
                                       DAT_007358cc +
                                      (float)((double)(float)(dVar17 * dVar17) *
                                              (double)DAT_007358c8 +
                                             (double)(float)(dVar17 * (double)DAT_007358c4 +
                                                            (double)DAT_007358c0))) *
                              (double)(float)SQRT(dVar10) - dVar22);
    dVar17 = dVar23;
    dVar9 = dVar23;
    dVar10 = dVar23;
    if (dVar15 != dVar23) {
      dVar15 = 1.0 / SQRT(dVar8);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar15) * dVar15 - dVar19) *
                               (double)(float)(dVar15 * 0.5) + dVar15);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar15) * dVar15 - dVar19) *
                               (double)(float)(dVar15 * 0.5) + dVar15);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar15) * dVar15 - dVar19) *
                               (double)(float)(dVar15 * 0.5) + dVar15);
      dVar17 = (double)(float)(dVar27 * dVar15);
      dVar9 = (double)(float)(dVar26 * dVar15);
      dVar10 = (double)(float)(dVar25 * dVar15);
    }
    *(float *)(param_1 + 0x58) = (float)SQRT(dVar8);
    sVar7 = *(short *)(pfVar3 + 7);
    fVar28 = (float)(dVar13 * dVar12 - dVar22);
    if ((double)(float)((double)local_d8 * dVar10 +
                       (double)(float)((double)local_e0 * dVar17 +
                                      (double)(float)((double)local_dc * dVar9))) - dVar23 < 0.0) {
      fVar28 = -(float)(dVar13 * dVar12 - dVar22);
    }
    *(float *)(param_1 + 0x54) = fVar28;
    pfVar3[0x2c] = local_d0;
    pfVar3[0x2d] = local_cc;
    pfVar3[0x2e] = local_c8;
    pfVar3[0x54] = 3.1415927;
    pfVar3[0x2f] = local_c4;
    pfVar3[0x55] = -1.5358897;
    pfVar3[0x56] = 5.0;
    pfVar3[0x57] = 0.0;
    pfVar3[0x58] = 0.0;
    pfVar3[0x59] = 0.0;
    pfVar3[0x5a] = 0.005;
    pfVar3[0x5d] = 0.2;
    pfVar3[0x5b] = 0.005;
    pfVar3[0x5e] = 0.2;
    pfVar3[0x5c] = 0.005;
    pfVar3[0x5f] = 0.2;
  }
  if (sVar7 == 1) {
    local_b0 = pfVar3[0x2c];
    dVar8 = (double)SQRT(pfVar3[0x2e] * pfVar3[0x2e] +
                         local_b0 * local_b0 + pfVar3[0x2d] * pfVar3[0x2d]);
    if (dVar8 == dVar23) {
      local_a4 = pfVar3[0x2f];
      local_a8 = 0.0;
      local_ac = 0.0;
      local_b0 = 0.0;
    }
    else {
      local_a8 = (float)((double)*(float *)(param_1 + 0x58) / dVar8);
      local_b0 = local_b0 * local_a8;
      local_ac = pfVar3[0x2d] * local_a8;
      local_a8 = pfVar3[0x2e] * local_a8;
      local_a4 = pfVar3[0x2f];
    }
    mobyutil::MB_RotateQuatAxisAngle(*(float *)(param_1 + 0x50),&local_b0,&local_b0);
    fVar1 = local_d8 * local_b0 - local_e0 * local_a8;
    fVar28 = local_dc * local_a8 - local_d8 * local_ac;
    fVar2 = local_e0 * local_ac - local_dc * local_b0;
    local_94 = 0;
    fVar4 = fVar2 * fVar2 + fVar28 * fVar28 + fVar1 * fVar1;
    dVar8 = dVar23;
    dVar15 = dVar23;
    dVar17 = dVar23;
    if ((double)SQRT(fVar4) != dVar23) {
      fVar5 = 1.0 / SQRT(fVar4);
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar17 = (double)(fVar28 * fVar5);
      dVar15 = (double)(fVar1 * fVar5);
      dVar8 = (double)(fVar2 * fVar5);
    }
    local_a0 = (float)dVar17;
    local_9c = (float)dVar15;
    local_98 = (float)dVar8;
    mobyutil::MB_RotateQuatAxisAngle(*(float *)(param_1 + 0x54),&local_b0,&local_b0);
    *(float *)(param_1 + 0x30) = pfVar3[0x20] + local_b0;
    *(float *)(param_1 + 0x34) = pfVar3[0x21] + local_ac;
    *(float *)(param_1 + 0x38) = pfVar3[0x22] + local_a8;
    *(float *)(param_1 + 0x3c) = pfVar3[0x23];
    dVar8 = (double)Cam_InterpAngles((double)*(float *)(param_1 + 0x50),(double)pfVar3[0x54],
                                     (double)pfVar3[0x5a],(double)pfVar3[0x5d],dVar23);
    *(float *)(param_1 + 0x50) = (float)dVar8;
    speed = (float *)Cam_InterpAngles((double)*(float *)(param_1 + 0x54),(double)pfVar3[0x55],
                                      (double)pfVar3[0x5b],(double)pfVar3[0x5e],dVar23);
    *(float *)(param_1 + 0x54) = (float)extraout_f1;
    fVar28 = Cam_InterpValues(*(float *)(param_1 + 0x58),pfVar3[0x56],pfVar3[0x5c],pfVar3[0x5f],
                              (float)dVar23,speed);
    *(float *)(param_1 + 0x58) = fVar28;
    if (DAT_0096a56e == '\0') {
      *(undefined2 *)(pfVar3 + 7) = 0;
      *pfVar3 = -*pfVar3;
      pfVar3[1] = -pfVar3[1];
      pfVar3[2] = -pfVar3[2];
    }
  }
  return;
}



//==== 0004c828  ns=camera::camera8  size=0xcac
// sig: undefined Cam8_UpdateCam(void)
// callers(1): 0004d5a8 camera::camera8::UpdateCamera_8
// callees(3): 0004bf90 camera::camera8::Cam8_UpdateRot; 000501e8 camera::Cam_InterpValues; 00059e20 collproc::CollSphere

void camera::camera8::Cam8_UpdateCam(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyInstance *pMVar6;
  int iVar7;
  code *speed;
  float *speed_00;
  int iVar8;
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
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined1 local_f0 [40];
  
  pMVar6 = g_heroMobyPtr;
  dVar29 = 0.0;
  iVar8 = 0;
  fVar4 = param_1[0x1c];
  fVar32 = SQRT(DAT_00969f78 * DAT_00969f78 +
                hero::g_heroGravityDir * hero::g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  dVar31 = (double)*(float *)((int)fVar4 + 0x180);
  dVar26 = (double)*(float *)((int)fVar4 + 0x88);
  fVar1 = -1.0 / fVar32;
  dVar25 = dVar29;
  if (0.0 - fVar32 < 0.0) {
    dVar25 = (double)(hero::g_heroGravityDir * fVar1);
  }
  dVar24 = dVar29;
  if (0.0 - fVar32 < 0.0) {
    dVar24 = (double)(DAT_00969f78 * fVar1);
  }
  dVar23 = dVar29;
  if (0.0 - fVar32 < 0.0) {
    dVar23 = (double)(DAT_00969f74 * fVar1);
  }
  if (fVar32 - 0.0 < 0.0) {
    dVar25 = (double)(hero::g_heroGravityDir * fVar1);
  }
  if (fVar32 - 0.0 < 0.0) {
    dVar24 = (double)(DAT_00969f78 * fVar1);
  }
  if (fVar32 - 0.0 < 0.0) {
    dVar23 = (double)(DAT_00969f74 * fVar1);
  }
  if (*(short *)((int)fVar4 + 0x1c) == 0) {
    dVar9 = (double)*(float *)((int)fVar4 + 0xa4);
    dVar15 = (double)*(float *)((int)fVar4 + 0xa0);
    dVar16 = (double)*(float *)((int)fVar4 + 0xa8);
    dVar17 = (double)(float)((double)param_1[0xc] - (double)*(float *)((int)fVar4 + 0x80));
    dVar12 = (double)(float)((double)param_1[0xd] - (double)*(float *)((int)fVar4 + 0x84));
    fVar32 = SQRT((float)(dVar16 * dVar16 +
                         (double)(float)(dVar15 * dVar15 + (double)(float)(dVar9 * dVar9))));
    dVar19 = (double)((float)((double)(float)((double)param_1[0xe] - dVar26) * dVar16 +
                             (double)(float)(dVar17 * dVar15 + (double)(float)(dVar12 * dVar9))) /
                     fVar32);
    dVar22 = (double)(*(float *)((int)fVar4 + 0xf0) / fVar32);
    dVar30 = dVar29;
    if (0.0 - fVar32 < 0.0) {
      dVar30 = (double)(float)(dVar9 * dVar19);
    }
    dVar10 = dVar29;
    if (0.0 - fVar32 < 0.0) {
      dVar10 = (double)(float)(dVar15 * dVar19);
    }
    dVar13 = dVar29;
    if (0.0 - fVar32 < 0.0) {
      dVar13 = (double)(float)(dVar16 * dVar19);
    }
    if (fVar32 - 0.0 < 0.0) {
      dVar30 = (double)(float)(dVar9 * dVar19);
    }
    if (fVar32 - 0.0 < 0.0) {
      dVar10 = (double)(float)(dVar15 * dVar19);
    }
    if (fVar32 - 0.0 < 0.0) {
      dVar13 = (double)(float)(dVar16 * dVar19);
    }
    fVar1 = (float)(dVar12 - dVar30);
    fVar2 = (float)(dVar17 - dVar10);
    fVar3 = (float)((double)(float)((double)param_1[0xe] - dVar26) - dVar13);
    dVar30 = dVar29;
    if (0.0 - fVar32 < 0.0) {
      dVar30 = (double)(float)(dVar15 * dVar22);
    }
    dVar12 = dVar29;
    if (0.0 - fVar32 < 0.0) {
      dVar12 = (double)(float)(dVar16 * dVar22);
    }
    dVar17 = dVar29;
    if (0.0 - fVar32 < 0.0) {
      dVar17 = (double)(float)(dVar9 * dVar22);
    }
    if (fVar32 - 0.0 < 0.0) {
      dVar12 = (double)(float)(dVar16 * dVar22);
    }
    if (fVar32 - 0.0 < 0.0) {
      dVar30 = (double)(float)(dVar15 * dVar22);
    }
    fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar32 - 0.0 < 0.0) {
      dVar17 = (double)(float)(dVar9 * dVar22);
    }
    fVar32 = *(float *)((int)fVar4 + 0xe0) / fVar5;
    dVar9 = dVar29;
    if (0.0 - fVar5 < 0.0) {
      dVar9 = (double)(fVar2 * fVar32);
    }
    dVar15 = dVar29;
    if (0.0 - fVar5 < 0.0) {
      dVar15 = (double)(fVar1 * fVar32);
    }
    dVar16 = dVar29;
    if (0.0 - fVar5 < 0.0) {
      dVar16 = (double)(fVar3 * fVar32);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar9 = (double)(fVar2 * fVar32);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar15 = (double)(fVar1 * fVar32);
    }
    if (fVar5 - 0.0 < 0.0) {
      dVar16 = (double)(fVar3 * fVar32);
    }
    dVar15 = (double)((float)((double)(float)(dVar15 + (double)*(float *)((int)fVar4 + 0x84)) +
                             dVar17) + *(float *)((int)fVar4 + 0x1b4));
    dVar12 = (double)((float)((double)(float)(dVar16 + dVar26) + dVar12) +
                     *(float *)((int)fVar4 + 0x1b8));
    fVar32 = Cam_InterpValues(param_1[0xc],
                              (float)((double)(float)(dVar9 + (double)*(float *)((int)fVar4 + 0x80))
                                     + dVar30) + *(float *)((int)fVar4 + 0x1b0),
                              *(float *)((int)fVar4 + 0x10),*(float *)((int)fVar4 + 0x14),
                              *(float *)((int)fVar4 + 0x18),(float *)g_heroMobyPtr);
    param_1[0xc] = fVar32;
    fVar32 = Cam_InterpValues(param_1[0xd],(float)dVar15,*(float *)((int)fVar4 + 0x10),
                              *(float *)((int)fVar4 + 0x14),*(float *)((int)fVar4 + 0x18),
                              (float *)pMVar6);
    param_1[0xd] = fVar32;
    fVar32 = Cam_InterpValues(param_1[0xe],(float)dVar12,*(float *)((int)fVar4 + 0x10),
                              *(float *)((int)fVar4 + 0x14),*(float *)((int)fVar4 + 0x18),
                              (float *)pMVar6);
    param_1[0xe] = fVar32;
    uVar27 = 0x3fe0000000000000;
    dVar23 = (double)(float)dVar23;
    dVar24 = (double)(float)dVar24;
    dVar25 = (double)(float)dVar25;
    do {
      iVar7 = collproc::CollSphere(uVar27,local_f0);
      if (iVar7 != 0) {
        fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0xf0),
                                  (float)((double)CollOutput.push.z - dVar26),0.05,0.2,(float)dVar29
                                  ,(float *)&CollOutput);
        *(float *)((int)fVar4 + 0xf0) = fVar32;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
    if (iVar8 == 6) {
      speed = Camera_AddPostUpdFunc;
      dVar9 = 0.019999999552965164;
      dVar30 = 0.20000000298023224;
      dVar26 = 0.05000000074505806;
      fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0x1b0),(float)dVar29,0.02,0.2,0.05,
                                (float *)Camera_AddPostUpdFunc);
      *(float *)((int)fVar4 + 0x1b0) = fVar32;
      fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0x1b4),(float)dVar29,(float)dVar9,
                                (float)dVar30,(float)dVar26,(float *)speed);
      *(float *)((int)fVar4 + 0x1b4) = fVar32;
      fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0x1b8),(float)dVar29,(float)dVar9,
                                (float)dVar30,(float)dVar26,(float *)speed);
      *(float *)((int)fVar4 + 0x1b8) = fVar32;
      fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0xf0),*(float *)((int)fVar4 + 0x188),0.005,
                                (float)dVar30,(float)dVar29,(float *)speed);
      *(float *)((int)fVar4 + 0xf0) = fVar32;
    }
    if ((g_framesNotGrounded == 0) ||
       ((int)(((uint)((int)hero::g_heroGroundDist >> 0x1f) >> 1 ^ hero::g_heroGroundDist) -
             ((int)hero::g_heroGroundDist >> 0x1f)) < 0x40000001)) {
      fVar32 = *(float *)((int)fVar4 + 0xe0);
      fVar1 = *(float *)((int)fVar4 + 0x184);
      fVar2 = *(float *)((int)fVar4 + 0xf0);
      fVar3 = *(float *)((int)fVar4 + 0x188);
      fVar5 = fVar32 - 0.03;
      if (fVar32 - fVar1 < 0.0) {
        fVar5 = fVar32 + 0.03;
      }
      if (ABS(fVar32 - fVar1) - 0.03 < 0.0) {
        fVar5 = fVar1;
      }
      dVar26 = (double)*(float *)((int)fVar4 + 0xcc);
      *(float *)((int)fVar4 + 0xe0) = fVar5;
      fVar32 = fVar2 - 0.1;
      if (fVar2 - fVar3 < 0.0) {
        fVar32 = fVar2 + 0.1;
      }
      if (ABS(fVar2 - fVar3) - 0.1 < 0.0) {
        fVar32 = fVar3;
      }
      *(float *)((int)fVar4 + 0xf0) = fVar32;
      dVar30 = dVar26 - 0.03999999910593033;
      if (dVar26 - dVar31 < 0.0) {
        dVar30 = dVar26 + 0.03999999910593033;
      }
      dVar30 = (double)(float)dVar30;
      if (ABS((float)(dVar26 - dVar31)) - 0.04 < 0.0) {
        dVar30 = dVar31;
      }
    }
    else {
      fVar32 = *(float *)((int)fVar4 + 0xe0);
      fVar1 = *(float *)((int)fVar4 + 400);
      fVar2 = fVar32 - 0.015;
      if (fVar32 - fVar1 < 0.0) {
        fVar2 = fVar32 + 0.015;
      }
      if (ABS(fVar32 - fVar1) - 0.015 < 0.0) {
        fVar2 = fVar1;
      }
      *(float *)((int)fVar4 + 0xe0) = fVar2;
      if (iVar8 == 6) {
        fVar32 = *(float *)((int)fVar4 + 0xf0);
        fVar1 = *(float *)((int)fVar4 + 0x194);
        fVar2 = fVar32 - 0.05;
        if (fVar32 - fVar1 < 0.0) {
          fVar2 = fVar32 + 0.05;
        }
        if (ABS(fVar32 - fVar1) - 0.05 < 0.0) {
          fVar2 = fVar1;
        }
        *(float *)((int)fVar4 + 0xf0) = fVar2;
      }
      dVar31 = (double)*(float *)((int)fVar4 + 0xcc);
      dVar9 = (double)*(float *)((int)fVar4 + 0x18c);
      dVar26 = dVar31 - 0.019999999552965164;
      if (dVar31 - dVar9 < 0.0) {
        dVar26 = dVar31 + 0.019999999552965164;
      }
      dVar30 = (double)(float)dVar26;
      if (ABS((float)(dVar31 - dVar9)) - 0.02 < 0.0) {
        dVar30 = dVar9;
      }
    }
    iVar8 = 1;
  }
  else {
    *(float *)((int)fVar4 + 0x1a0) = (g_heroMobyPtr->transform).v2.x;
    *(float *)((int)fVar4 + 0x1a4) = (pMVar6->transform).v2.y;
    fVar32 = *(float *)((int)fVar4 + 0xe0);
    *(float *)((int)fVar4 + 0x1a8) = (pMVar6->transform).v2.z;
    fVar1 = *(float *)((int)fVar4 + 0x184);
    *(float *)((int)fVar4 + 0x1ac) = (pMVar6->transform).v2.w;
    fVar2 = *(float *)((int)fVar4 + 0xf0);
    fVar3 = *(float *)((int)fVar4 + 0x188);
    fVar5 = fVar32 - 0.015;
    if (fVar32 - fVar1 < 0.0) {
      fVar5 = fVar32 + 0.015;
    }
    if (ABS(fVar32 - fVar1) - 0.015 < 0.0) {
      fVar5 = fVar1;
    }
    dVar26 = (double)*(float *)((int)fVar4 + 0xcc);
    *(float *)((int)fVar4 + 0xe0) = fVar5;
    fVar32 = fVar2 - 0.05;
    if (fVar2 - fVar3 < 0.0) {
      fVar32 = fVar2 + 0.05;
    }
    if (ABS(fVar2 - fVar3) - 0.05 < 0.0) {
      fVar32 = fVar3;
    }
    *(float *)((int)fVar4 + 0xf0) = fVar32;
    dVar30 = dVar26 - 0.019999999552965164;
    if (dVar26 - dVar31 < 0.0) {
      dVar30 = dVar26 + 0.019999999552965164;
    }
    dVar30 = (double)(float)dVar30;
    if (ABS((float)(dVar26 - dVar31)) - 0.02 < 0.0) {
      dVar30 = dVar31;
    }
  }
  *(float *)((int)fVar4 + 0xcc) = (float)dVar30;
  speed_00 = (float *)Cam8_UpdateRot(param_1);
  fVar1 = *(float *)((int)fVar4 + 0xa4);
  fVar2 = *(float *)((int)fVar4 + 0xa0);
  fVar3 = *(float *)((int)fVar4 + 0xa8);
  *(float *)((int)fVar4 + 0x80) = *(float *)((int)fVar4 + 0x1d0);
  *(float *)((int)fVar4 + 0x84) = *(float *)((int)fVar4 + 0x1d4);
  dVar30 = (double)*(float *)((int)fVar4 + 0x1dc);
  *(float *)((int)fVar4 + 0x88) = *(float *)((int)fVar4 + 0x1d8);
  dVar31 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)fVar4 + 0x8c) = *(float *)((int)fVar4 + 0x1dc);
  fVar32 = (float)((double)*(float *)((int)fVar4 + 0xcc) / dVar31);
  dVar26 = dVar29;
  if (dVar29 - dVar31 < 0.0) {
    dVar26 = (double)(fVar1 * fVar32);
  }
  dVar9 = dVar29;
  if (dVar29 - dVar31 < 0.0) {
    dVar9 = (double)(fVar2 * fVar32);
  }
  dVar12 = dVar29;
  if (dVar29 - dVar31 < 0.0) {
    dVar12 = (double)(fVar3 * fVar32);
  }
  if (dVar31 - dVar29 < 0.0) {
    dVar26 = (double)(fVar1 * fVar32);
  }
  if (dVar31 - dVar29 < 0.0) {
    dVar9 = (double)(fVar2 * fVar32);
  }
  if (dVar31 - dVar29 < 0.0) {
    dVar12 = (double)(fVar3 * fVar32);
  }
  dVar15 = (double)(float)((double)*(float *)((int)fVar4 + 0x1d4) + dVar26);
  dVar16 = (double)(float)((double)*(float *)((int)fVar4 + 0x1d0) + dVar9);
  dVar12 = (double)(float)((double)*(float *)((int)fVar4 + 0x1d8) + dVar12);
  fVar32 = (float)(dVar15 - (double)param_1[0xd]);
  fVar1 = (float)(dVar16 - (double)param_1[0xc]);
  fVar2 = (float)(dVar12 - (double)param_1[0xe]);
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar32 * fVar32;
  dVar26 = dVar29;
  dVar31 = dVar29;
  dVar9 = dVar29;
  if ((double)SQRT(fVar3) != dVar29) {
    fVar5 = 1.0 / SQRT(fVar3);
    speed_00 = (float *)&DAT_0004c7ec;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar9 = (double)(fVar1 * fVar5);
    dVar26 = (double)(fVar32 * fVar5);
    dVar31 = (double)(fVar2 * fVar5);
  }
  param_1[7] = 0.0;
  fVar32 = (float)(dVar31 * dVar23 - (double)(float)(dVar26 * dVar24));
  fVar1 = (float)(dVar26 * dVar25 - (double)(float)(dVar9 * dVar23));
  fVar2 = (float)(dVar9 * dVar24 - (double)(float)(dVar31 * dVar25));
  fVar3 = fVar1 * fVar1 + fVar32 * fVar32 + fVar2 * fVar2;
  dVar17 = dVar29;
  dVar19 = dVar29;
  dVar22 = dVar29;
  if ((double)SQRT(fVar3) != dVar29) {
    fVar5 = 1.0 / SQRT(fVar3);
    speed_00 = (float *)&DAT_0004c7ec;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar17 = (double)(fVar32 * fVar5);
    dVar22 = (double)(fVar2 * fVar5);
    dVar19 = (double)(fVar1 * fVar5);
  }
  param_1[4] = (float)dVar17;
  param_1[5] = (float)dVar22;
  param_1[6] = (float)dVar19;
  param_1[0xb] = 0.0;
  fVar32 = (float)(dVar26 * dVar19 - (double)(float)(dVar31 * dVar22));
  dVar10 = (double)fVar32;
  fVar1 = (float)(dVar31 * dVar17 - (double)(float)(dVar9 * dVar19));
  dVar13 = (double)fVar1;
  fVar2 = (float)(dVar9 * dVar22 - (double)(float)(dVar26 * dVar17));
  dVar14 = (double)fVar2;
  param_1[8] = fVar32;
  param_1[9] = fVar1;
  param_1[10] = fVar2;
  if (((iVar8 == 0) ||
      (speed_00 = (float *)&DAT_0004c7ec,
      ABS((float)((double)param_1[2] * dVar31 +
                 (double)(float)((double)*param_1 * dVar9 +
                                (double)(float)((double)param_1[1] * dVar26)))) < 0.5)) ||
     (speed_00 = (float *)(uint)DAT_0096a56d, DAT_0096a56d != 0)) {
    fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0x140),(float)dVar29,
                              *(float *)((int)fVar4 + 0x134),*(float *)((int)fVar4 + 0x138),
                              *(float *)((int)fVar4 + 0x13c),speed_00);
  }
  else {
    fVar32 = (g_heroMobyPtr->transform).v0.y;
    fVar1 = (g_heroMobyPtr->transform).v0.x;
    fVar2 = (g_heroMobyPtr->transform).v0.z;
    fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar32 * fVar32;
    dVar26 = dVar29;
    dVar31 = dVar29;
    dVar9 = dVar29;
    if ((double)SQRT(fVar3) != dVar29) {
      fVar5 = 1.0 / SQRT(fVar3);
      fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar26 = (double)(fVar1 * fVar5);
      dVar31 = (double)(fVar32 * fVar5);
      dVar9 = (double)(fVar2 * fVar5);
    }
    dVar28 = (double)SQRT((float)(dVar14 * dVar14 +
                                 (double)(float)(dVar10 * dVar10 + (double)(float)(dVar13 * dVar13))
                                 ));
    dVar21 = (double)(float)((double)(float)(dVar9 * dVar14 +
                                            (double)(float)(dVar26 * dVar10 +
                                                           (double)(float)(dVar31 * dVar13))) /
                            dVar28);
    dVar20 = dVar29;
    if (dVar29 - dVar28 < 0.0) {
      dVar20 = (double)(float)(dVar13 * dVar21);
    }
    dVar11 = dVar29;
    if (dVar29 - dVar28 < 0.0) {
      dVar11 = (double)(float)(dVar10 * dVar21);
    }
    dVar18 = dVar29;
    if (dVar29 - dVar28 < 0.0) {
      dVar18 = (double)(float)(dVar14 * dVar21);
    }
    if (dVar28 - dVar29 < 0.0) {
      dVar20 = (double)(float)(dVar13 * dVar21);
    }
    if (dVar28 - dVar29 < 0.0) {
      dVar11 = (double)(float)(dVar10 * dVar21);
    }
    if (dVar28 - dVar29 < 0.0) {
      dVar18 = (double)(float)(dVar14 * dVar21);
    }
    fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0x140),
                              DAT_0071e85c *
                              (float)((double)(float)(dVar9 - dVar18) * dVar19 +
                                     (double)(float)((double)(float)(dVar26 - dVar11) * dVar17 +
                                                    (double)(float)((double)(float)(dVar31 - dVar20)
                                                                   * dVar22))),
                              *(float *)((int)fVar4 + 0x134),*(float *)((int)fVar4 + 0x138),
                              *(float *)((int)fVar4 + 0x13c),(float *)&DAT_00720000);
  }
  *(float *)((int)fVar4 + 0x140) = fVar32;
  if (9.999999747378752e-06 < ABS((double)fVar32)) {
    fVar1 = param_1[5];
    fVar2 = param_1[4];
    fVar3 = param_1[6];
    dVar31 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar4 = (float)((double)fVar32 / dVar31);
    dVar26 = dVar29;
    if (dVar29 - dVar31 < 0.0) {
      dVar26 = (double)(fVar3 * fVar4);
    }
    dVar9 = dVar29;
    if (dVar29 - dVar31 < 0.0) {
      dVar9 = (double)(fVar1 * fVar4);
    }
    dVar17 = dVar29;
    if (dVar29 - dVar31 < 0.0) {
      dVar17 = (double)(fVar2 * fVar4);
    }
    if (dVar31 - dVar29 < 0.0) {
      dVar26 = (double)(fVar3 * fVar4);
    }
    if (dVar31 - dVar29 < 0.0) {
      dVar9 = (double)(fVar1 * fVar4);
    }
    if (dVar31 - dVar29 < 0.0) {
      dVar17 = (double)(fVar2 * fVar4);
    }
    dVar12 = (double)(float)(dVar26 + dVar12);
    dVar15 = (double)(float)(dVar9 + dVar15);
    dVar16 = (double)(float)(dVar17 + dVar16);
  }
  fVar4 = (float)(dVar16 - (double)param_1[0xc]);
  fVar32 = (float)(dVar15 - (double)param_1[0xd]);
  fVar1 = (float)(dVar12 - (double)param_1[0xe]);
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar32 * fVar32;
  if ((double)SQRT(fVar2) == dVar29) {
    param_1[3] = (float)dVar30;
    param_1[1] = fVar32;
    *param_1 = fVar4;
    param_1[2] = fVar1;
    dVar26 = dVar29;
    dVar31 = dVar29;
    dVar30 = dVar29;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar2);
    param_1[3] = (float)dVar30;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    dVar31 = (double)(fVar4 * fVar3);
    dVar26 = (double)(fVar32 * fVar3);
    dVar30 = (double)(fVar1 * fVar3);
  }
  *param_1 = (float)dVar31;
  param_1[1] = (float)dVar26;
  param_1[2] = (float)dVar30;
  fVar4 = (float)(dVar24 * dVar31 - (double)(float)(dVar25 * dVar30));
  fVar32 = (float)(dVar23 * dVar30 - (double)(float)(dVar24 * dVar26));
  fVar1 = (float)(dVar25 * dVar26 - (double)(float)(dVar23 * dVar31));
  param_1[7] = 0.0;
  fVar2 = fVar1 * fVar1 + fVar32 * fVar32 + fVar4 * fVar4;
  dVar25 = dVar29;
  dVar24 = dVar29;
  if ((double)SQRT(fVar2) != dVar29) {
    fVar3 = 1.0 / SQRT(fVar2);
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    dVar25 = (double)(fVar32 * fVar3);
    dVar29 = (double)(fVar4 * fVar3);
    dVar24 = (double)(fVar1 * fVar3);
  }
  param_1[4] = (float)dVar25;
  param_1[5] = (float)dVar29;
  param_1[6] = (float)dVar24;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar26 * dVar24 - (double)(float)(dVar30 * dVar29));
  param_1[9] = (float)(dVar30 * dVar25 - (double)(float)(dVar31 * dVar24));
  param_1[10] = (float)(dVar31 * dVar29 - (double)(float)(dVar26 * dVar25));
  return;
}



//==== 0004d4d4  ns=camera::camera8  size=0x8
// sig: int ActivateCamera_8(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera8::ActivateCamera_8(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}



//==== 0004d4dc  ns=camera::camera8  size=0xcc
// sig: void InitCamera_8(UpdateCam * pCam)
// callers(0): 
// callees(2): 0004bd38 camera::camera8::Cam8_InitParams; 0010bf98 mobyutil::MB_TransformToQuat

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera8::InitCamera_8(UpdateCam *pCam)

{
  void *pvVar1;
  longlong lVar2;
  
  pvVar1 = GameCamera.pLastUpdCam;
  lVar2 = (longlong)(int)pCam;
  pCam->pos[0] = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[1] = *(float *)((int)pvVar1 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar1 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar1 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  pCam->mtx[0] = *pvVar1;
  pCam->mtx[1] = *(float *)((int)pvVar1 + 4);
  pCam->mtx[2] = *(float *)((int)pvVar1 + 8);
  pCam->mtx[3] = *(float *)((int)pvVar1 + 0xc);
  pCam->mtx[4] = *(float *)((int)pvVar1 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar1 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar1 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar1 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar1 + 0x20);
  pCam->mtx[9] = *(float *)((int)pvVar1 + 0x24);
  pCam->mtx[10] = *(float *)((int)pvVar1 + 0x28);
  pCam->mtx[0xb] = *(float *)((int)pvVar1 + 0x2c);
  mobyutil::MB_TransformToQuat(lVar2 + 0x40,lVar2);
  Cam8_InitParams(lVar2);
  return;
}



//==== 0004d5a8  ns=camera::camera8  size=0x34
// sig: void UpdateCamera_8(UpdateCam * pCam)
// callers(0): 
// callees(2): 0004b660 camera::camera8::Cam8_UpdateTarget; 0004c828 camera::camera8::Cam8_UpdateCam

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera8::UpdateCamera_8(UpdateCam *pCam)

{
  Cam8_UpdateTarget();
  Cam8_UpdateCam(pCam);
  return;
}



//==== 0004d5dc  ns=stub  size=0x4
// sig: undefined STUB_0004d5dc(void)
// callers(0): 
// callees(0): 

void stub::STUB_0004d5dc(void)

{
  return;
}



//==== 0004d5e0  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e8b4 = 0x10000;
  return;
}



//==== 0004d608  ns=camera::camera9  size=0x138
// sig: undefined Cam9_TrackHeroPos(void)
// callers(2): 0004dbd0 camera::camera9::Cam9_InitPos; 0004ee20 camera::camera9::UpdateCamera_9
// callees(1): 000501e8 camera::Cam_InterpValues

void camera::camera9::Cam9_TrackHeroPos(int param_1)

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
  if (hero::g_heroStateType == 4) {
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



//==== 0004d748  ns=camera::camera9  size=0x90
// sig: undefined Cam9_InitTarget(void)
// callers(0): 
// callees(0): 

void camera::camera9::Cam9_InitTarget(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  
  pMVar6 = MobyInstance;
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
    *(f32 *)(iVar3 + 0x80) = MobyInstance[iVar4].pos.x;
    *(f32 *)(iVar3 + 0x84) = pMVar6[iVar4].pos.y;
    fVar1 = pMVar6[iVar4].pos.z;
    fVar2 = pMVar6[iVar4].pos.w;
  }
  *(f32 *)(iVar3 + 0x88) = fVar1;
  *(f32 *)(iVar3 + 0x8c) = fVar2;
  return;
}



//==== 0004d7e8  ns=camera::camera9  size=0x3d8
// sig: undefined Cam9_CalcDesiredPos(void)
// callers(2): 0004dbd0 camera::camera9::Cam9_InitPos; 0004e828 camera::camera9::Cam9_UpdatePos
// callees(2): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere

void camera::camera9::Cam9_CalcDesiredPos(int param_1,float *param_2,int param_3)

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
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  iVar14 = *(int *)(param_1 + 0x70);
  fVar5 = *(float *)(iVar14 + 0x24) - *(float *)(iVar14 + 0x84);
  fVar11 = *(float *)(iVar14 + 0x20) - *(float *)(iVar14 + 0x80);
  fVar1 = SQRT((float)GameCamera.field17_0x1b4._20_4_ * (float)GameCamera.field17_0x1b4._20_4_ +
               (float)GameCamera.field17_0x1b4._12_4_ * (float)GameCamera.field17_0x1b4._12_4_ +
               (float)GameCamera.field17_0x1b4._16_4_ * (float)GameCamera.field17_0x1b4._16_4_);
  fVar13 = 0.0;
  fVar6 = *(float *)(iVar14 + 0x28) - *(float *)(iVar14 + 0x88);
  fVar8 = (fVar6 * (float)GameCamera.field17_0x1b4._20_4_ +
          fVar11 * (float)GameCamera.field17_0x1b4._12_4_ +
          fVar5 * (float)GameCamera.field17_0x1b4._16_4_) / fVar1;
  fVar7 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar7 = (float)GameCamera.field17_0x1b4._16_4_ * fVar8;
  }
  fVar9 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4._12_4_ * fVar8;
  }
  fVar10 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4._20_4_ * fVar8;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar7 = (float)GameCamera.field17_0x1b4._16_4_ * fVar8;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4._12_4_ * fVar8;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4._20_4_ * fVar8;
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
  fVar2 = (float)GameCamera.field17_0x1b4._20_4_ * fVar8 -
          (float)GameCamera.field17_0x1b4._12_4_ * fVar9;
  fVar3 = (float)GameCamera.field17_0x1b4._16_4_ * fVar9 -
          (float)GameCamera.field17_0x1b4._20_4_ * fVar7;
  fVar12 = (float)GameCamera.field17_0x1b4._12_4_ * fVar7 -
           (float)GameCamera.field17_0x1b4._16_4_ * fVar8;
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
    fVar10 = (float)GameCamera.field17_0x1b4._12_4_ * fVar2;
  }
  fVar12 = fVar13;
  if (0.0 - fVar1 < 0.0) {
    fVar12 = (float)GameCamera.field17_0x1b4._16_4_ * fVar2;
  }
  if (0.0 - fVar1 < 0.0) {
    fVar13 = (float)GameCamera.field17_0x1b4._20_4_ * fVar2;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar10 = (float)GameCamera.field17_0x1b4._12_4_ * fVar2;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar12 = (float)GameCamera.field17_0x1b4._16_4_ * fVar2;
  }
  if (fVar1 - 0.0 < 0.0) {
    fVar13 = (float)GameCamera.field17_0x1b4._20_4_ * fVar2;
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
    iVar14 = collproc::CollLine(local_70,local_60,CAMERA_COLL_FLAGS,0,0);
    if (iVar14 == 0) {
      *param_2 = fVar10;
      param_2[1] = fVar12;
      param_2[2] = fVar5;
      param_2[3] = fVar1;
      iVar14 = collproc::CollSphere(0x3fe0000000000000,param_2,0x950000,CAMERA_COLL_SPHERE_FLAGS,0);
      if (iVar14 != 0) {
        *param_2 = CollOutput.push.x;
        param_2[1] = CollOutput.push.y;
        param_2[2] = CollOutput.push.z;
        param_2[3] = CollOutput.push.w;
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



//==== 0004dbd0  ns=camera::camera9  size=0x320
// sig: undefined Cam9_InitPos(void)
// callers(1): 0004def0 camera::camera9::InitCamera_9
// callees(2): 0004d608 camera::camera9::Cam9_TrackHeroPos; 0004d7e8 camera::camera9::Cam9_CalcDesiredPos

void camera::camera9::Cam9_InitPos(float *param_1)

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
  pMVar18 = MobyInstance;
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
    *(f32 *)((int)fVar4 + 0x80) = MobyInstance[iVar5].pos.x;
    *(f32 *)((int)fVar4 + 0x84) = pMVar18[iVar5].pos.y;
    fVar1 = pMVar18[iVar5].pos.z;
    fVar2 = pMVar18[iVar5].pos.w;
  }
  *(f32 *)((int)fVar4 + 0x88) = fVar1;
  *(f32 *)((int)fVar4 + 0x8c) = fVar2;
  Cam9_CalcDesiredPos(param_1,param_1 + 0xc,0,1);
  uVar17 = GameCamera.field17_0x1b4._20_4_;
  uVar16 = GameCamera.field17_0x1b4._16_4_;
  uVar15 = GameCamera.field17_0x1b4._12_4_;
  fVar7 = SQRT((float)GameCamera.field17_0x1b4._20_4_ * (float)GameCamera.field17_0x1b4._20_4_ +
               (float)GameCamera.field17_0x1b4._12_4_ * (float)GameCamera.field17_0x1b4._12_4_ +
               (float)GameCamera.field17_0x1b4._16_4_ * (float)GameCamera.field17_0x1b4._16_4_);
  fVar4 = 0.0;
  fVar10 = *(float *)((int)fVar3 + 0x44) / fVar7;
  fVar8 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = (float)GameCamera.field17_0x1b4._16_4_ * fVar10;
  }
  fVar9 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4._12_4_ * fVar10;
  }
  fVar11 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar11 = (float)GameCamera.field17_0x1b4._20_4_ * fVar10;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = (float)GameCamera.field17_0x1b4._16_4_ * fVar10;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar9 = (float)GameCamera.field17_0x1b4._12_4_ * fVar10;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar11 = (float)GameCamera.field17_0x1b4._20_4_ * fVar10;
  }
  fVar8 = (fVar8 + *(float *)((int)fVar3 + 0x24)) - param_1[0xd];
  fVar10 = (fVar9 + *(float *)((int)fVar3 + 0x20)) - param_1[0xc];
  fVar3 = (fVar11 + *(float *)((int)fVar3 + 0x28)) - param_1[0xe];
  fVar7 = fVar3 * fVar3 + fVar10 * fVar10 + fVar8 * fVar8;
  if (SQRT(fVar7) == 0.0) {
    param_1[3] = (float)GameCamera.field17_0x1b4._24_4_;
    param_1[2] = fVar3;
    *param_1 = fVar10;
    param_1[1] = fVar8;
    fVar3 = fVar4;
    fVar8 = fVar4;
    fVar10 = fVar4;
  }
  else {
    fVar9 = 1.0 / SQRT(fVar7);
    param_1[3] = (float)GameCamera.field17_0x1b4._24_4_;
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



//==== 0004def0  ns=camera::camera9  size=0x134
// sig: void InitCamera_9(UpdateCam * pCam)
// callers(0): 
// callees(1): 0004dbd0 camera::camera9::Cam9_InitPos

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera9::InitCamera_9(UpdateCam *pCam)

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



//==== 0004e058  ns=camera::camera9  size=0x7c0
// sig: undefined Cam9_UpdateRot(void)
// callers(1): 0004ee20 camera::camera9::UpdateCamera_9
// callees(4): 000501e8 camera::Cam_InterpValues; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void camera::camera9::Cam9_UpdateRot(float *param_1)

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
  fVar6 = ANALOG_STICKS.x;
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
  mobyutil::MB_RotateQuatAxisAngle(fVar35 * fVar2,outQuat,outQuat);
  fVar2 = ANALOG_STICKS.y;
  fVar35 = Cam_InterpValues(*(float *)((int)fVar7 + 0x9c),ANALOG_STICKS.y,DAT_0071e8d8,DAT_0071e8dc,
                            (float)dVar32,&ANALOG_STICKS.x);
  *(float *)((int)fVar7 + 0x9c) = fVar35;
  dVar33 = (double)(fVar35 * DAT_0071e8e0);
  dVar26 = (double)fastfunc::FastWrapRot(*(float *)((int)fVar7 + 0xa4),fVar35 * DAT_0071e8e0);
  dVar27 = ABS(dVar26);
  dVar30 = 0.7853981852531433;
  dVar34 = dVar32;
  if (dVar27 <= 0.7853981852531433) {
    if (0.5235987901687622 < dVar27) {
      fVar35 = (float)(dVar33 * (double)(ABS((float)(0.7853981852531433 - dVar27)) * 3.8197186));
      dVar33 = (double)fVar35;
      dVar26 = (double)fastfunc::FastWrapRot(*(float *)((int)fVar7 + 0xa4),fVar35);
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
  mobyutil::MB_RotateQuatAxisAngle((float)dVar34,outQuat,outQuat);
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
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
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
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
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
    dVar26 = (double)fastfunc::FastDiffRots(dVar28,dVar33);
    if ((dVar26 <= dVar34) && (dVar34 = dVar26, dVar26 < -0.009999999776482582)) {
      dVar34 = -0.009999999776482582;
    }
    *(undefined4 *)(puVar12 + 0x12) = 0;
    *(undefined4 *)((int)puVar12 + 0x94) = 0;
    *(undefined4 *)(puVar12 + 0x13) = 0x3f800000;
    *(undefined4 *)((int)puVar12 + 0x9c) = 0;
    mobyutil::MB_RotateQuatAxisAngle((float)dVar34,outQuat,outQuat);
    uVar17 = GameCamera.field17_0x1b4._20_4_;
    uVar16 = GameCamera.field17_0x1b4._16_4_;
    uVar15 = GameCamera.field17_0x1b4._12_4_;
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
    fVar3 = fVar35 * (float)GameCamera.field17_0x1b4._16_4_;
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



//==== 0004e828  ns=camera::camera9  size=0x2f8
// sig: undefined Cam9_UpdatePos(void)
// callers(1): 0004ee20 camera::camera9::UpdateCamera_9
// callees(2): 0004d7e8 camera::camera9::Cam9_CalcDesiredPos; 000501e8 camera::Cam_InterpValues

void camera::camera9::Cam9_UpdatePos(float *param_1)

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
  uVar11 = GameCamera.field17_0x1b4._20_4_;
  uVar10 = GameCamera.field17_0x1b4._16_4_;
  uVar9 = GameCamera.field17_0x1b4._12_4_;
  fVar12 = 0.0;
  fVar3 = SQRT((float)GameCamera.field17_0x1b4._20_4_ * (float)GameCamera.field17_0x1b4._20_4_ +
               (float)GameCamera.field17_0x1b4._12_4_ * (float)GameCamera.field17_0x1b4._12_4_ +
               (float)GameCamera.field17_0x1b4._16_4_ * (float)GameCamera.field17_0x1b4._16_4_);
  fVar4 = *(float *)((int)fVar1 + 0x44) / fVar3;
  fVar2 = fVar12;
  if (0.0 - fVar3 < 0.0) {
    fVar2 = (float)GameCamera.field17_0x1b4._16_4_ * fVar4;
  }
  fVar5 = fVar12;
  if (0.0 - fVar3 < 0.0) {
    fVar5 = (float)GameCamera.field17_0x1b4._12_4_ * fVar4;
  }
  fVar6 = fVar12;
  if (0.0 - fVar3 < 0.0) {
    fVar6 = (float)GameCamera.field17_0x1b4._20_4_ * fVar4;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar2 = (float)GameCamera.field17_0x1b4._16_4_ * fVar4;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar5 = (float)GameCamera.field17_0x1b4._12_4_ * fVar4;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar6 = (float)GameCamera.field17_0x1b4._20_4_ * fVar4;
  }
  fVar2 = (fVar2 + *(float *)((int)fVar1 + 0x24)) - param_1[0xd];
  fVar4 = (fVar5 + *(float *)((int)fVar1 + 0x20)) - param_1[0xc];
  fVar13 = (fVar6 + *(float *)((int)fVar1 + 0x28)) - fVar13;
  fVar1 = fVar13 * fVar13 + fVar4 * fVar4 + fVar2 * fVar2;
  if (SQRT(fVar1) == 0.0) {
    param_1[3] = (float)GameCamera.field17_0x1b4._24_4_;
    param_1[2] = fVar13;
    *param_1 = fVar4;
    param_1[1] = fVar2;
    fVar13 = fVar12;
    fVar2 = fVar12;
    fVar4 = fVar12;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar1);
    param_1[3] = (float)GameCamera.field17_0x1b4._24_4_;
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



//==== 0004eb28  ns=camera::camera9  size=0x34
// sig: undefined ???_Cam9_CollSphereBump(void)
// callers(0): 
// callees(1): 000543c8 camera::Camera_CollSphereBump

void camera::camera9::____Cam9_CollSphereBump(longlong param_1)

{
  Camera_CollSphereBump(0x3fe0000000000000,param_1 + 0x30);
  return;
}



//==== 0004eb78  ns=camera::camera9  size=0x2a4
// sig: int ActivateCamera_9(UpdateCam * pCam, UpdateCam * pCurr)
// callers(0): 
// callees(2): 00057820 collproc::CollLine; 00104e44 mobyutil::PointInsideComplexPoly

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int camera::camera9::ActivateCamera_9(UpdateCam *pCam,UpdateCam *pCurr)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  MobyInstance *pMVar4;
  int iVar5;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  pMVar4 = MobyInstance;
  bVar1 = (pCam->activation).priority;
  iVar5 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  bVar2 = (pCurr->activation).priority;
  iVar3 = *(int *)(iVar5 + 0x24);
  pCam->subType = '\0';
  if ((((bVar1 <= bVar2) || (0x7f < pMVar4[iVar3].state)) ||
      (5.0 <= ABS(g_heroPosition.z - pMVar4[iVar3].pos.z))) ||
     ((iVar5 = mobyutil::PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar5 + 0x14)]->points,
                          Splines[*(int *)(iVar5 + 0x14)]->cnt), iVar5 == 0 ||
      (iVar5 = collproc::CollLine(local_40,local_30,CAMERA_COLL_FLAGS,0,0), iVar5 != 0)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
    (pCam->activation).blendSpeed = 60.0;
  }
  return iVar5;
}



//==== 0004ee20  ns=camera::camera9  size=0xdc
// sig: void UpdateCamera_9(UpdateCam * pCam)
// callers(0): 
// callees(4): 0002bcf8 stub::STUB_0002bcf8; 0004d608 camera::camera9::Cam9_TrackHeroPos; 0004e058 camera::camera9::Cam9_UpdateRot; 0004e828 camera::camera9::Cam9_UpdatePos

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera9::UpdateCamera_9(UpdateCam *pCam)

{
  f32 fVar1;
  f32 fVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  
  stub::STUB_0002bcf8(pCam,ZEXT48(pCam->control) + 0xb0);
  Cam9_UpdateRot(pCam);
  Cam9_TrackHeroPos(pCam);
  pMVar6 = MobyInstance;
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
    *(f32 *)((int)pvVar3 + 0x80) = MobyInstance[iVar4].pos.x;
    *(f32 *)((int)pvVar3 + 0x84) = pMVar6[iVar4].pos.y;
    fVar1 = pMVar6[iVar4].pos.z;
    fVar2 = pMVar6[iVar4].pos.w;
  }
  *(f32 *)((int)pvVar3 + 0x88) = fVar1;
  *(f32 *)((int)pvVar3 + 0x8c) = fVar2;
  Cam9_UpdatePos(pCam);
  return;
}



//==== 0004ef00  ns=camera::camera9  size=0xe4
// sig: void ExitCamera_9(UpdateCam * pCam)
// callers(0): 
// callees(1): 00104e44 mobyutil::PointInsideComplexPoly

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::camera9::ExitCamera_9(UpdateCam *pCam)

{
  int iVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  pMVar2 = MobyInstance;
  iVar3 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar1 = *(int *)(iVar3 + 0x24);
  iVar3 = mobyutil::PointInsideComplexPoly
                    (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar3 + 0x14)]->points,
                     Splines[*(int *)(iVar3 + 0x14)]->cnt);
  if (((iVar3 == 0) || (5.0 < ABS(g_heroPosition.z - pMVar2[iVar1].pos.z))) ||
     (0x7f < pMVar2[iVar1].state)) {
    (pCam->activation).deactivate = 3;
  }
  return;
}



//==== 0004efe4  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA_UNK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e938 = 0x10000;
  return;
}



//==== 0004eff8  ns=loaders  size=0x24
// sig: undefined GsTex_Init(void)
// callers(1): 00012ec8 boot::GameStart
// callees(0): 

void loaders::GsTex_Init(void)

{
  DAT_009513a0 = 0;
  g_GsRamAlloc = GSmem.base;
  return;
}



//==== 0004f01c  ns=loaders  size=0x48
// sig: undefined GsTex_ResetAll(void)
// callers(0): 
// callees(0): 

void loaders::GsTex_ResetAll(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  g_GsRamAlloc = GSmem.base;
  if (0 < DAT_009513a0) {
    puVar2 = &DAT_00931408;
    iVar1 = DAT_009513a0;
    do {
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + 0x10;
    } while (0 < iVar1);
  }
  return;
}



//==== 0004f064  ns=loaders  size=0x290
// sig: undefined GsTex_Register(void)
// callers(0): 
// callees(2): 00500178 fastfunc::FastLog2; 005001fc fastfunc::FastMemSet

int loaders::GsTex_Register(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  fastfunc::FastMemSet(&DAT_009313a0 + DAT_009513a0 * 0x80,0,0x80);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = DAT_009513a0 * 0x80;
  *(int *)(&DAT_009313fc + iVar6) = iVar5;
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(&DAT_00931400 + iVar6) = iVar1;
  *(undefined4 *)(&DAT_00931404 + iVar6) = *(undefined4 *)(param_1 + 0x1c);
  if (iVar5 == 0x27) {
LAB_0004f104:
    *(int *)(&DAT_009313a0 + iVar6) = param_1 + 0x20;
    iVar8 = ((uint)((LZCOUNT(0x12 - iVar1) << 0x3a) >> 0x3f) & 0x200) + 0x200;
    *(uint *)(&DAT_009313b4 + iVar6) =
         iVar8 + ((uint)((LZCOUNT(0x27 - iVar5) << 0x3a) >> 0x3f) &
                 (((uint)((LZCOUNT(0x12 - iVar1) << 0x3a) >> 0x3f) & 0x20) + 0x20) - iVar8);
  }
  else {
    if (iVar5 != 0x26) {
      if (iVar5 == 0x13) goto LAB_0004f104;
      if (iVar5 != 0x12) goto LAB_0004f180;
    }
    *(undefined4 *)(&DAT_009313a0 + iVar6) = 0;
    *(undefined4 *)(&DAT_009313b4 + iVar6) = 0;
  }
LAB_0004f180:
  uVar3 = fastfunc::FastLog2(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(&DAT_009313ec + DAT_009513a0 * 0x80) = uVar3;
  uVar3 = fastfunc::FastLog2(*(undefined4 *)(param_1 + 0xc));
  iVar1 = DAT_009513a0 * 0x80;
  *(undefined4 *)(&DAT_009313f0 + iVar1) = uVar3;
  iVar5 = *(int *)(param_1 + 0x10);
  *(int *)(&DAT_009313a4 + iVar1) = param_1 + *(int *)(&DAT_009313b4 + iVar1) + 0x20;
  if (iVar5 == 0x27) {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8 >> 1;
  }
  else if (iVar5 == 0x26) {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8 * 2;
  }
  else if (iVar5 == 0x13) {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8;
  }
  else {
    iVar6 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    if (iVar5 == 0x12) {
      *(int *)(&DAT_009313b8 + iVar1) = iVar6 * iVar8 * 4;
    }
  }
  *(int *)(&DAT_009313f4 + iVar1) = iVar6;
  iVar5 = 1;
  *(int *)(&DAT_009313f8 + iVar1) = iVar8;
  if (1 < *(int *)(&DAT_00931404 + iVar1)) {
    piVar9 = (int *)(&DAT_009313a0 + iVar1);
    piVar7 = (int *)(&DAT_009313bc + iVar1);
    piVar4 = (int *)(&DAT_009313b8 + iVar1);
    piVar10 = (int *)(&DAT_009313a8 + iVar1);
    do {
      piVar9 = piVar9 + 1;
      iVar6 = *piVar9;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(&DAT_00931404 + iVar1);
      *piVar7 = *piVar4 >> 2;
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar7 = piVar7 + 1;
      *piVar10 = iVar6 + iVar2;
      piVar10 = piVar10 + 1;
    } while (iVar5 < iVar8);
  }
  iVar5 = DAT_009513a0;
  DAT_009513a0 = DAT_009513a0 + 1;
  return iVar5;
}



//==== 0004f2f4  ns=loaders  size=0x250
// sig: undefined GsTex_BuildUploadPacket(void)
// callers(1): 0004f544 loaders::GsTex_Upload
// callees(3): 00502ea0 FUN_00502ea0; 0050300c FUN_0050300c; 00503044 FUN_00503044

void loaders::GsTex_BuildUploadPacket
               (undefined1 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               ulonglong param_5,longlong param_6,uint param_7)

{
  undefined1 *puVar1;
  undefined1 uVar3;
  undefined8 uVar2;
  int iVar4;
  
  *DAT_00e5aa58 = 6;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar3 = FUN_0050300c(6,0);
  iVar4 = ((int)param_7 >> 4) + (uint)((int)param_7 < 0 && (param_7 & 0xf) != 0);
  DAT_00e5aa58[3] = uVar3;
  puVar1 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar2 = FUN_00502ea0(1,1,0,0,0,4);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = 0xeeeeeee;
  uVar2 = FUN_00503044(0,0,0,param_2,param_3,param_4);
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = 5;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0x20;
  *(undefined8 *)(puVar1 + 0x38) = 0x1f;
  *(ulonglong *)(puVar1 + 0x40) = param_5 | param_6 << 0x20;
  *(undefined8 *)(puVar1 + 0x58) = 0x1e;
  uVar2 = FUN_00502ea0(iVar4,0,0,0,2,0);
  DAT_00e5aa58 = puVar1 + 0x70;
  *(undefined8 *)(puVar1 + 0x60) = uVar2;
  *(undefined8 *)(puVar1 + 0x68) = 0;
  puVar1[0x70] = (char)iVar4;
  DAT_00e5aa58[1] = param_1;
  DAT_00e5aa58[2] = 0;
  uVar3 = FUN_0050300c(iVar4,0);
  DAT_00e5aa58[3] = uVar3;
  puVar1 = DAT_00e5aa58 + 0x10;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  *puVar1 = 2;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar3 = FUN_0050300c(2,0);
  DAT_00e5aa58[3] = uVar3;
  puVar1 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar2 = FUN_00502ea0(1,1,0,0,0,1);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0xe;
  *(undefined8 *)(puVar1 + 0x28) = 0x1d;
  DAT_00e5aa58 = puVar1 + 0x30;
  return;
}



//==== 0004f544  ns=loaders  size=0x2fc
// sig: undefined GsTex_Upload(void)
// callers(1): 0004f840 loaders::GsTex_Bind
// callees(4): 0004f2f4 loaders::GsTex_BuildUploadPacket; 00502f6c stub::STUB_00502f6c; 00502fbc stub::STUB_00502fbc_RET_0; 00502fd4 stub::STUB_00502fd4_RET_0

void loaders::GsTex_Upload(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  iVar5 = (int)(param_1 << 7);
  if (*(longlong *)((int)&DAT_00931408 + iVar5) == 0) {
    iVar1 = *(int *)(&DAT_009313fc + iVar5);
    if ((iVar1 == 0x27) || (iVar1 == 0x13)) {
      iVar3 = g_GsRamAlloc >> 8;
      *(int *)(&DAT_009313c8 + iVar5) = iVar3;
      if (iVar1 == 0x27) {
        g_GsRamAlloc = g_GsRamAlloc + 0x100;
        GsTex_BuildUploadPacket
                  (*(undefined4 *)(&DAT_009313a0 + iVar5),iVar3,1,
                   *(undefined4 *)(&DAT_00931400 + iVar5),8,2,*(undefined4 *)(&DAT_009313b4 + iVar5)
                  );
      }
      else {
        g_GsRamAlloc = g_GsRamAlloc + *(int *)(&DAT_009313b4 + iVar5);
        GsTex_BuildUploadPacket
                  (*(undefined4 *)(&DAT_009313a0 + iVar5),iVar3,1,
                   *(undefined4 *)(&DAT_00931400 + iVar5),0x10,0x10,*(int *)(&DAT_009313b4 + iVar5))
        ;
      }
    }
    uVar7 = 0;
    if (0 < *(int *)(&DAT_00931404 + iVar5)) {
      puVar10 = (undefined4 *)(&DAT_009313a0 + iVar5);
      uVar8 = 0;
      piVar9 = (int *)(&DAT_009313cc + iVar5);
      piVar12 = (int *)(&DAT_009313dc + iVar5);
      puVar11 = (undefined4 *)(&DAT_009313b8 + iVar5);
      do {
        puVar10 = puVar10 + 1;
        iVar1 = *(int *)(&DAT_009313f4 + iVar5);
        iVar3 = iVar1 >> (uVar7 + 6 & 0x3f);
        *piVar12 = iVar3 + ((uint)((longlong)iVar3 + -1 >> 0x3f) & 1U - iVar3);
        uVar2 = *puVar10;
        iVar4 = g_GsRamAlloc >> 8;
        iVar3 = *(int *)(&DAT_009313f8 + iVar5);
        *piVar9 = iVar4;
        GsTex_BuildUploadPacket
                  (uVar2,iVar4,*piVar12,*(undefined4 *)(&DAT_009313fc + iVar5),
                   iVar1 >> (uVar7 & 0x3f),iVar3 >> (uVar7 & 0x3f),*puVar11);
        iVar1 = *(int *)(&DAT_009313b8 + iVar5) >> (uVar8 & 0x3f);
        uVar7 = uVar7 + 1;
        piVar12 = piVar12 + 1;
        piVar9 = piVar9 + 1;
        g_GsRamAlloc = g_GsRamAlloc +
                       iVar1 + ((uint)((longlong)iVar1 + -0x100 >> 0x3f) & 0x100U - iVar1);
        puVar11 = puVar11 + 1;
        uVar8 = uVar8 + 2;
      } while ((int)uVar7 < *(int *)(&DAT_00931404 + iVar5));
    }
    g_GsRamAlloc = g_GsRamAlloc + 0x800;
    uVar6 = stub::STUB_00502fbc_RET_0
                      (*(undefined4 *)(&DAT_009313cc + iVar5),*(undefined4 *)(&DAT_009313dc + iVar5)
                       ,*(undefined4 *)(&DAT_009313fc + iVar5),
                       *(undefined4 *)(&DAT_009313ec + iVar5),*(undefined4 *)(&DAT_009313f0 + iVar5)
                       ,1,0,*(undefined4 *)(&DAT_009313c8 + iVar5));
    *(undefined8 *)((int)&DAT_00931408 + iVar5) = uVar6;
    uVar6 = stub::STUB_00502fd4_RET_0(0,*(int *)(&DAT_00931404 + iVar5) + -1,1,3,0,0,0xffa0);
    *(undefined8 *)(&DAT_00931410 + iVar5) = uVar6;
    uVar6 = stub::STUB_00502f6c(*(undefined4 *)(&DAT_009313d0 + iVar5),
                                *(undefined4 *)(&DAT_009313e0 + iVar5),
                                *(undefined4 *)(&DAT_009313d4 + iVar5),
                                *(undefined4 *)(&DAT_009313e4 + iVar5),
                                *(undefined4 *)(&DAT_009313d8 + iVar5),
                                *(undefined4 *)(&DAT_009313e8 + iVar5));
    *(undefined8 *)(&DAT_00931418 + iVar5) = uVar6;
  }
  return;
}



//==== 0004f840  ns=loaders  size=0x268
// sig: undefined GsTex_Bind(void)
// callers(1): 0004faa8 loaders::GsTex_BindWrapper
// callees(4): 0004f544 loaders::GsTex_Upload; 00502e70 FUN_00502e70; 00502fec FUN_00502fec; 0050300c FUN_0050300c

void loaders::GsTex_Bind(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                        int param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar10;
  undefined8 uVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar3 = (int)(param_1 << 7);
  iVar11 = (int)(param_4 + param_2) * 0x10 + SCREEN_PROJECTION_MAP_X + -8;
  iVar12 = (int)((param_3 & 0xffffffff) << 4) + SCREEN_PROJECTION_MAP_Y + -8;
  iVar1 = *(int *)(&DAT_009313f4 + iVar3);
  iVar14 = (int)((param_2 & 0xffffffff) << 4) + SCREEN_PROJECTION_MAP_X + -8;
  iVar2 = *(int *)(&DAT_009313f8 + iVar3);
  iVar13 = (param_5 + (int)param_3) * 0x10 + SCREEN_PROJECTION_MAP_Y + -8;
  GsTex_Upload();
  *DAT_00e5aa58 = 7;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar10 = FUN_0050300c(7,0);
  DAT_00e5aa58[3] = uVar10;
  uVar8 = uRam0071e968;
  uVar7 = DAT_0071e960._4_4_;
  uVar6 = DAT_0071e960._0_4_;
  puVar4 = (undefined4 *)((uint)(DAT_00e5aa58 + 0x10) & 0xfffffff0);
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  puVar4[3] = uRam0071e96c;
  puVar4[2] = uVar8;
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  puVar5 = DAT_00e5aa58;
  *(undefined8 *)(DAT_00e5aa58 + 0x10) = *(undefined8 *)((int)&DAT_00931408 + iVar3);
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar9 = FUN_00502e70(0x11,0,1,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = param_6;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  uVar9 = FUN_00502fec(iVar14,iVar12,0xfffff0);
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(longlong *)(puVar5 + 0x38) = (longlong)(iVar1 * 0x10);
  uVar9 = FUN_00502fec(iVar11,iVar12,0xfffff0);
  *(undefined8 *)(puVar5 + 0x40) = uVar9;
  *(longlong *)(puVar5 + 0x48) = (longlong)(iVar2 * 0x100000);
  uVar9 = FUN_00502fec(iVar14,iVar13,0xfffff0);
  *(undefined8 *)(puVar5 + 0x50) = uVar9;
  *(longlong *)(puVar5 + 0x58) = (longlong)(iVar2 * 0x100000 + iVar1 * 0x10);
  uVar9 = FUN_00502fec(iVar11,iVar13,0xfffff0);
  *(undefined8 *)(puVar5 + 0x60) = uVar9;
  *(undefined8 *)(puVar5 + 0x68) = 0;
  puVar5 = DAT_00e5aa58 + 0x60;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x60;
  *puVar5 = 0;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}



//==== 0004faa8  ns=loaders  size=0x4c
// sig: undefined GsTex_BindWrapper(void)
// callers(0): 
// callees(1): 0004f840 loaders::GsTex_Bind

void loaders::GsTex_BindWrapper(void)

{
  GsTex_Bind();
  return;
}



//==== 0004faf4  ns=loaders  size=0x54
// sig: undefined GsTex_StaticInit(void)
// callers(0): 
// callees(1): 00502ea0 FUN_00502ea0

void loaders::GsTex_StaticInit(void)

{
  DAT_0071e9bc = 0x10000;
  DAT_0071e960 = FUN_00502ea0(1,1,0,0,1,0xb);
  return;
}



//==== 0004fb48  ns=boot  size=0x8
// sig: undefined ???_ReturnTrue_GameStart(void)
// callers(1): 00012ec8 boot::GameStart
// callees(0): 

undefined8 boot::____ReturnTrue_GameStart(void)

{
  return 1;
}



//==== 0004fb50  ns=bloaders  size=0x270
// sig: undefined LoadPifAsPSMT8H(undefined4 pPif, undefined4 gsRegs, undefined4 tex_loc, undefined4 pal_loc)
// callers(1): 0004fdc0 bloaders::LoadDebugFont
// callees(9): 00500178 fastfunc::FastLog2; 005001fc fastfunc::FastMemSet; 00502f6c stub::STUB_00502f6c; 00502fbc stub::STUB_00502fbc_RET_0; 00502fd4 stub::STUB_00502fd4_RET_0; 0050306c stub::sceGsExecLoadImage; 00503074 stub::sceGsSyncPath; 00503084 stub::sceGsSetDefLoadImage; 00503244 stub::FlushCache

void bloaders::LoadPifAsPSMT8H(int pPif,undefined8 *gsRegs,int tex_loc,int pal_loc)

{
  int iVar1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar2;
  longlong lVar5;
  undefined1 auStack_80 [4];
  undefined1 local_7c [84];
  
  fastfunc::FastMemSet(local_7c,0,0x54);
  iVar1 = *(int *)(pPif + 0x14);
  uVar3 = fastfunc::FastLog2(*(undefined4 *)(pPif + 8));
  uVar4 = fastfunc::FastLog2(*(undefined4 *)(pPif + 0xc));
  stub::sceGsSetDefLoadImage(auStack_80,pal_loc >> 8,1,*(undefined4 *)(pPif + 0x14),0,0,0x10,0x10);
  stub::FlushCache(0);
  stub::sceGsExecLoadImage(auStack_80,pPif + 0x20);
  stub::sceGsSyncPath(0,0);
  lVar5 = (longlong)(*(int *)(pPif + 8) >> 6);
  lVar5 = lVar5 + (lVar5 + -1 >> 0x3f & 1U - lVar5);
  stub::sceGsSetDefLoadImage
            (auStack_80,tex_loc >> 8,lVar5,0x14,0,0,*(int *)(pPif + 8),*(undefined4 *)(pPif + 0xc));
  stub::FlushCache(0);
  stub::sceGsExecLoadImage
            (auStack_80,pPif + ((uint)((LZCOUNT(0x12 - iVar1) << 0x3a) >> 0x3f) & 0x200) + 0x220);
  stub::sceGsSyncPath(0,0);
  uVar2 = stub::STUB_00502fbc_RET_0(tex_loc >> 8,(int)lVar5,0x14,uVar3,uVar4,1,0,pal_loc >> 8);
  *gsRegs = uVar2;
  uVar2 = stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  gsRegs[1] = uVar2;
  uVar2 = stub::STUB_00502f6c(0,0,0,0,0,0);
  gsRegs[2] = uVar2;
  return;
}



//==== 0004fdc0  ns=bloaders  size=0x78
// sig: undefined LoadDebugFont(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(2): 0004fb50 bloaders::LoadPifAsPSMT8H; 005034f4 idol::m_LoadGameFileB
// strings: 00651a84: 'debugfont'

void bloaders::LoadDebugFont(void)

{
  undefined8 regs [3];
  
  idol::m_LoadGameFileB(&DAT_00a2c5c0,"debugfont");
  LoadPifAsPSMT8H(&DAT_00a2c5c0,regs,GSmem.zbuf + 0xc0000,0x3ffc00);
  DebugFontTex0 = regs[0];
  return;
}



//==== 0004fe38  ns=sound  size=0xb0
// sig: undefined UnloadSoundBanks(void)
// callers(0): 
// callees(11): 0011cd1c music::music_Stop; 0015d8b4 sound::sound_StopAllSounds; 001754e0 stub::STUB_001754e0; 00503078 stub::STUB_00503078; 00503244 stub::FlushCache; 00505d20 stub::STUB_00505d20; 00505f48 stub::STUB_00505f48; 00505f4c stub::STUB_00505f4c; 00506664 FUN_00506664; 005cd098 libc::printf; 0060a9b4 989snd::snd_UnloadBank
// strings: 00651a90: 'unloaded sound bank %#010x\n'

void sound::UnloadSoundBanks(void)

{
  stub::FlushCache(0);
  stub::STUB_00505f4c();
  stub::STUB_00505d20();
  sound_StopAllSounds();
  music::music_Stop();
  FUN_00506664(0);
  stub::STUB_001754e0();
  if (g_pSoundDefs != 0) {
    989snd::snd_UnloadBank(*(undefined4 *)(g_pSoundDefs + 0x1c),1);
    stub::STUB_00505f48();
    libc::printf("unloaded sound bank %#010x\n",*(undefined4 *)(g_pSoundDefs + 0x1c));
  }
  stub::STUB_00503078(0);
  return;
}



//==== 0004fee8  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_CAMERA(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_CAMERA(void)

{
  DAT_0071ea2c = 0x10000;
  return;
}



//==== 0004ff00  ns=camera  size=0xc
// sig: undefined ???_Cam_SetTweak_71ea50(void)
// callers(0): 
// callees(0): 

void camera::____Cam_SetTweak_71ea50(double param_1)

{
  DAT_0071ea50 = (float)param_1;
  return;
}



//==== 0004ff0c  ns=camera  size=0x1c
// sig: void Camera_ClearPolar(float * pol)
// callers(4): 00048b00 camera::camera6::Cam6_SetTarget; 00048c78 camera::camera6::Cam6_ResetParams; 000494e0 camera::camera6::Cam6_Activate; 000498e8 camera::camera6::InitCamera_6
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Camera_ClearPolar(float *pol)

{
  *pol = 0.0;
  pol[1] = 0.0;
  pol[2] = 0.0;
  pol[3] = 0.0;
  pol[4] = 0.0;
  return;
}



//==== 0004ff28  ns=camera  size=0x68
// sig: void Cam_CopyRotWrapped(float wrap, float * dst, float * src)
// callers(4): 00048b00 camera::camera6::Cam6_SetTarget; 00049058 camera::camera6::???_Cam6_SetupFromMoby; 000494e0 camera::camera6::Cam6_Activate; 000498e8 camera::camera6::InitCamera_6
// callees(1): 00502578 fastfunc::FastWrapRot

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::Cam_CopyRotWrapped(float wrap,float *dst,float *src)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = (double)fastfunc::FastWrapRot(*src,wrap);
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



//==== 0004ff90  ns=camera  size=0x70
// sig: void BackupCurrentCam(void)
// callers(0): 
// callees(1): 005002cc fastfunc::FastMemCopy

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void camera::BackupCurrentCam(void)

{
  fastfunc::FastMemCopy(&BackupCam,GameCamera.pCurrentUpdCam,0xa0);
  fastfunc::FastMemCopy(&DAT_00953d60,&CamControlCurrent,0x280);
  BackupCam.control = &DAT_00953d60;
  return;
}



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



