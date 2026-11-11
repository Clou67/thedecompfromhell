// game/update/camera17.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3d318-0x3e274
#include "game/update/camera17.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x003d318 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071da10 = 0x10000;
  return;
}


// 0x003d330 (0x230 bytes)
int Cam17_IsHeroInVolume(UpdateCam *pCam)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    if (((*(short *)(iVar3 + 0x2c) == 2) && (g_heroStateType == 0x1a)) &&
       (0 < *(short *)(iVar3 + 0x2e))) {
      bVar1 = true;
    }
    else if (((*(short *)(iVar3 + 0x2c) == 4) && (g_HeroRequestedCamType == 3)) &&
            (0 < *(short *)(iVar3 + 0x2e))) {
      bVar1 = true;
    }
    if ((*(int *)(iVar3 + 0xc) < 0) ||
       ((!bVar1 &&
        (iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar3 + 0xc)),
        iVar2 == 0)))) {
      if ((*(int *)(iVar3 + 0x4c) < 0) ||
         ((!bVar1 &&
          (iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar3 + 0x4c)),
          iVar2 == 0)))) {
        if ((*(int *)(iVar3 + 0x10) < 0) ||
           ((!bVar1 &&
            (iVar2 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar3 + 0x10)),
            iVar2 == 0)))) {
          if ((*(int *)(iVar3 + 8) < 0) ||
             ((!bVar1 &&
              (iVar2 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar3 + 8)),
              iVar2 == 0)))) {
            if ((*(int *)(iVar3 + 0x14) < 0) ||
               ((!bVar1 &&
                (iVar3 = PointInsideComplexPoly
                                   (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar3 + 0x14)]->points,
                                    Splines[*(int *)(iVar3 + 0x14)]->cnt), iVar3 == 0)))) {
              iVar3 = 0;
            }
            else {
              iVar3 = 1;
            }
          }
          else {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


// 0x003d5b0 (0xbb0 bytes)
void Cam17_ModifyFollowCam(UpdateCam *pCam)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *pvVar15;
  int iVar16;
  short sVar18;
  uint uVar17;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<56> local_70;
  
  pfVar8 = *(float **)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  uVar19 = ZEXT48(pfVar8);
  if (((*(short *)(pfVar8 + 0xb) != 8) ||
      (*(int *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) != 0)) &&
     ((*(short *)(pfVar8 + 0xb) != 6 ||
      (*(int *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) == 0)))) {
    iVar16 = Cam17_IsHeroInVolume(pCam);
    if (iVar16 == 0) {
      if (*(short *)((int)pfVar8 + 0x2e) != 0) {
        *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
      }
      *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
      Cam0_ClearModCamera(pCam);
    }
    else {
      iVar16 = Cam0_SetModCamera(pCam);
      if (iVar16 < 1) {
        if (*(short *)((int)pfVar8 + 0x2e) != 0) {
          *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
        }
        *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
      }
      else if ((*(short *)((int)pfVar8 + 0x36) == 0) ||
              (dVar20 = (double)FastSubRots
                                          (*(float *)(ImportCameras +
                                                      (int)((longlong)pCam->importCameraIdx << 5) +
                                                     0x18),GameCamera.rot.radius),
              dVar20 < 1.3962633609771729)) {
        pvVar15 = GameCamera.pCurrentUpdCam;
        if ((*(short *)(pfVar8 + 0x12) == 0) ||
           ((*(short *)(pfVar8 + 0xb) != 5 || ((g_Pad.downButtons & (L1|L2)) == 0)))) {
          bVar1 = *(short *)((int)pfVar8 + 0x2e) == 0;
          if (bVar1) {
            pfVar8[0x10] = *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x11c);
            pfVar8[0x11] = *(float *)(*(int *)((int)pvVar15 + 0x70) + 0x120);
          }
          if ((*(short *)(pfVar8 + 0xb) == 5) && (bVar1)) {
            fVar3 = 0.0;
            *pfVar8 = 0.0;
            pvVar15 = GameCamera.pCurrentUpdCam;
            puVar9 = *(undefined4 **)((int)GameCamera.pCurrentUpdCam + 0x70);
            fVar4 = (float)puVar9[0x4d];
            fVar5 = (float)puVar9[0x4c];
            fVar6 = (float)puVar9[0x4e];
            fVar14 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
            fVar13 = pfVar8[9] / fVar14;
            fVar12 = fVar3;
            if (0.0 - fVar14 < 0.0) {
              fVar12 = fVar5 * fVar13;
            }
            fVar11 = fVar3;
            if (0.0 - fVar14 < 0.0) {
              fVar11 = fVar4 * fVar13;
            }
            if (0.0 - fVar14 < 0.0) {
              fVar3 = fVar6 * fVar13;
            }
            if (fVar14 - 0.0 < 0.0) {
              fVar12 = fVar5 * fVar13;
            }
            if (fVar14 - 0.0 < 0.0) {
              fVar11 = fVar4 * fVar13;
            }
            if (fVar14 - 0.0 < 0.0) {
              fVar3 = fVar6 * fVar13;
            }
            puVar9[0x4c] = fVar12;
            puVar9[0x4d] = fVar11;
            puVar9[0x4e] = fVar3;
            puVar9[0x57] = pfVar8[9];
            fVar4 = pfVar8[10];
            puVar9[0x58] = fVar4;
            fVar5 = pfVar8[0xc];
            puVar9[0x50] = fVar12;
            puVar9[0x3c] = fVar5;
            puVar9[0x51] = fVar11;
            puVar9[0x52] = fVar3;
            puVar9[0x53] = puVar9[0x4f];
            fVar3 = fVar4 * DAT_00969f74;
            fVar5 = fVar4 * DAT_00969f78;
            fVar4 = g_heroPosition.x + -(fVar4 * g_heroGravityDir);
            puVar9[0x24] = fVar4;
            puVar9[0x25] = g_heroPosition.y + -fVar3;
            puVar9[0x26] = g_heroPosition.z + -fVar5;
            puVar9[0x27] = g_heroPosition.w;
            *(float *)((int)pvVar15 + 0x30) = fVar4 + fVar12;
            *(float *)((int)pvVar15 + 0x34) = (float)puVar9[0x25] + (float)puVar9[0x4d];
            *(float *)((int)pvVar15 + 0x38) = (float)puVar9[0x26] + (float)puVar9[0x4e];
            *(undefined4 *)((int)pvVar15 + 0x3c) = puVar9[0x27];
            fVar12 = g_heroPosition.x;
            fVar3 = (float)puVar9[0x3c];
            fVar4 = fVar3 * DAT_00969f74;
            fVar5 = fVar3 * DAT_00969f78;
            fVar6 = g_heroPosition.x + -(fVar3 * g_heroGravityDir);
            puVar9[0x20] = fVar6;
            fVar13 = g_heroPosition.y;
            fVar4 = g_heroPosition.y + -fVar4;
            puVar9[0x21] = fVar4;
            fVar14 = g_heroPosition.z;
            fVar5 = g_heroPosition.z + -fVar5;
            puVar9[0x22] = fVar5;
            fVar11 = g_heroPosition.w;
            puVar9[0x34] = fVar6;
            puVar9[0x23] = fVar11;
            puVar9[0x35] = fVar4;
            puVar9[0x36] = fVar5;
            puVar9[0x37] = fVar11;
            puVar9[0x10] = fVar12;
            puVar9[0x11] = fVar13;
            puVar9[0x12] = fVar14;
            puVar9[0x13] = fVar11;
            puVar9[0x28] = fVar12;
            puVar9[0x29] = fVar13;
            puVar9[0x2a] = fVar14;
            puVar9[0x2b] = fVar11;
            *puVar9 = *(undefined4 *)((int)pvVar15 + 0x30);
            puVar9[1] = *(undefined4 *)((int)pvVar15 + 0x34);
            puVar9[2] = *(undefined4 *)((int)pvVar15 + 0x38);
            puVar9[3] = *(undefined4 *)((int)pvVar15 + 0x3c);
            puVar9[0x7c] = *(undefined4 *)((int)pvVar15 + 0x30);
            puVar9[0x7d] = *(undefined4 *)((int)pvVar15 + 0x34);
            puVar9[0x7e] = *(undefined4 *)((int)pvVar15 + 0x38);
            puVar9[0x7f] = *(undefined4 *)((int)pvVar15 + 0x3c);
            puVar9[0x80] = (float)puVar9[0x57] -
                           SQRT((float)puVar9[0x4e] * (float)puVar9[0x4e] +
                                (float)puVar9[0x4c] * (float)puVar9[0x4c] +
                                (float)puVar9[0x4d] * (float)puVar9[0x4d]);
            puVar9[0xd] = 0;
            puVar9[9] = fVar3;
            puVar9[10] = puVar9[0x58];
            puVar9[0xe] = 0;
            puVar9[0xc] = 0;
            puVar9[0xb] = 0;
          }
          dVar22 = 200.5;
          auVar25 = loadVectorLeftIndexed(8,0x3d560);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          dVar20 = (double)FastIntToDouble((int)(animationSpeed * 200.5));
          bVar1 = false;
          sVar18 = *(short *)(pfVar8 + 0xb);
          *(short *)((int)pfVar8 + 0x2e) = *(short *)((int)pfVar8 + 0x2e) + 1;
          if (sVar18 == 10) {
            Cam0_DisableUserCam();
            *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) = 0x14d;
            sVar18 = *(short *)(pfVar8 + 0xb);
          }
          if (sVar18 == 0xb) {
            Cam0_DisableUserCam();
            *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x230) = 2;
            sVar18 = *(short *)(pfVar8 + 0xb);
          }
          if ((sVar18 == 2) || (sVar18 == 4)) {
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
                 *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 3;
            auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            bVar1 = (int)((double)animationSpeed * dVar22) < (int)*(short *)((int)pfVar8 + 0x2e);
            if (bVar1) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
            Cam0_RunningAtCamOff();
          }
          else if ((((sVar18 == 1) || (sVar18 == 7)) || (sVar18 == 10)) || (sVar18 == 9)) {
            if ((g_Pad.sticks.x != 0.0) || (g_Pad.sticks.y != 0.0)) {
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            dVar21 = (double)animationSpeed;
            auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            uVar7 = *(ushort *)((int)pfVar8 + 0x2e);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
            uVar2 = (uint)(dVar21 * dVar22);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            uVar17 = (uint)uVar7;
            bVar1 = false;
            if (((int)uVar2 <= (int)(short)uVar7) &&
               (bVar1 = true, 0 < (int)GameCamera.field17_0x1b4.piece<128,4>())) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
              uVar17 = uVar2;
            }
            if ((int)(dVar21 * 400.5) <= (int)(short)uVar17) {
              bVar1 = false;
              *(undefined2 *)((int)pfVar8 + 0x2e) = 1;
            }
          }
          else if (sVar18 == 3) {
            dVar22 = 1.5;
            auVar25 = loadVectorLeftIndexed(0x10,0x3d560);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar24 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            dVar20 = (double)FastIntToDouble((int)(animationSpeed * 1.5));
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar25);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            if ((int)((double)animationSpeed * dVar22) < (int)*(short *)((int)pfVar8 + 0x2e)) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              bVar1 = true;
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
          }
          else {
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar23);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            if ((int)((double)animationSpeed * dVar22) < (int)*(short *)((int)pfVar8 + 0x2e)) {
              auVar25 = vectorSplatHalfWord(auVar25,1);
              bVar1 = true;
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x2e,uVar19);
              *(undefined2 *)((int)pfVar8 + 0x2e) = uVar10;
            }
          }
          sVar18 = *(short *)(pfVar8 + 0xb);
          dVar22 = 0.01745329238474369;
          if ((((sVar18 != 1) && (sVar18 != 7)) && (sVar18 != 9)) || (!bVar1)) {
            Cam0_ForceLookAtDir
                      ((double)(*pfVar8 * 0.017453292 *
                               (float)((double)(longlong)(int)*(short *)((int)pfVar8 + 0x2e) /
                                      dVar20)),(double)(pfVar8[8] * 0.017453292),local_70);
          }
          if (pfVar8[9] != 0.0) {
            if ((*(short *)(pfVar8 + 0xb) == 6) || (*(short *)(pfVar8 + 0xb) == 8)) {
              Cam0_SetCamDist((double)pfVar8[9],0x3f60624de0000000,0x40000,0);
              Cam0_SetRunAtCamDist((double)(pfVar8[9] + 1.36));
            }
            else {
              Cam0_SetCamDist((double)pfVar8[9],0x3f689374c0000000,&DAT_0003d560,0);
              Cam0_RunningAtCamOff();
            }
          }
          if (pfVar8[10] != 0.0) {
            if ((*(short *)(pfVar8 + 0xb) == 6) || (*(short *)(pfVar8 + 0xb) == 8)) {
              Cam0_SetCamHeight((double)pfVar8[10],0x3f60624de0000000);
            }
            else {
              Cam0_SetCamHeight((double)pfVar8[10],0x3f689374c0000000);
            }
          }
          if (pfVar8[0xc] != 0.0) {
            if ((*(short *)(pfVar8 + 0xb) == 6) || (*(short *)(pfVar8 + 0xb) == 8)) {
              Cam0_SetCamOfsZ((double)pfVar8[0xc],0x3f60624de0000000,&DAT_0003d560,0);
            }
            else {
              Cam0_SetCamOfsZ((double)pfVar8[0xc],0x3f747ae140000000,&DAT_0003d560,0);
            }
          }
          if (pfVar8[0x14] != 0.0) {
            Cam0_ForceElv((double)(float)((double)pfVar8[0x14] * dVar22));
          }
          if (*(short *)(pfVar8 + 0x15) != 0) {
            *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
                 *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 2;
          }
          if (*(short *)((int)pfVar8 + 0x56) != 0) {
            *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
                 *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 1;
          }
          if (*(short *)(pfVar8 + 0xd) == 0) {
            Cam0_SetCamPull(0);
          }
          if ((pfVar8[0xe] != 0.0) || (pfVar8[0xf] != 0.0)) {
            if ((int)*(short *)((int)pfVar8 + 0x2e) < (int)(animationSpeed * 120.5)) {
              dVar20 = (double)FastIntToDouble
                                         ((double)pfVar8[0xe],(int)(animationSpeed * 120.5));
              fVar3 = (float)((double)(longlong)(int)*(short *)((int)pfVar8 + 0x2e) / dVar20);
              Cam0_SetCPosGainDamp
                        ((double)((pfVar8[0xe] - pfVar8[0x10]) * fVar3 + pfVar8[0x10]),
                         (double)((pfVar8[0xf] - pfVar8[0x11]) * fVar3 + pfVar8[0x11]));
            }
            else {
              Cam0_SetCPosGainDamp((double)pfVar8[0xe],(double)pfVar8[0xf]);
            }
          }
          sVar18 = *(short *)(pfVar8 + 0xb);
          if ((sVar18 == 7 || sVar18 == 1) || (sVar18 == 10)) {
            Cam0_RunningAtCamOff();
            Cam0_disableLOS();
            Cam0_SetPitchGainDamp(0x3f847ae140000000,0x3fc99999a0000000);
          }
        }
        else {
          if (*(short *)((int)pfVar8 + 0x2e) != 0) {
            *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
          }
          *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
          Cam0_ClearModCamera(pCam);
        }
      }
      else {
        if (*(short *)((int)pfVar8 + 0x2e) != 0) {
          *(undefined2 *)((int)pfVar8 + 0x4a) = 1;
        }
        *(undefined2 *)((int)pfVar8 + 0x2e) = 0;
        Cam0_ClearModCamera(pCam);
      }
    }
  }
  return;
}


// 0x003e160 (0x108 bytes)
int ActivateCamera_17(UpdateCam *pCam,UpdateCam *pCurr)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((*(short *)(iVar2 + 0x48) != 1) || (*(short *)(iVar2 + 0x4a) == 0)) {
    sVar1 = *(short *)(iVar2 + 0x2c);
    if (((sVar1 != 0xb) || (g_heroType == '\x02')) &&
       (((((sVar1 != 1 && (sVar1 != 10)) || (*(short *)(iVar2 + 0x2e) != 0)) || (DAT_00969fec == 0))
        || ((Level == Oltanis && (g_HeroRequestedCamType == 0xd)))))) {
      if ((sVar1 == 2) && (g_heroStateType != 0x1a)) {
        *(undefined2 *)(iVar2 + 0x2e) = 0;
      }
      else {
        Cam17_ModifyFollowCam(pCam);
      }
    }
  }
  return 0;
}


// 0x003e268 (0x4 bytes)
void STUB_0003e268(...)

{
  return;
}


// 0x003e26c (0x4 bytes)
void STUB_0003e26c(...)

{
  return;
}


// 0x003e270 (0x4 bytes)
void STUB_0003e270(...)

{
  return;
}


