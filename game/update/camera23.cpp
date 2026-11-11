// game/update/camera23.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x44a20-0x451c8
#include "game/update/camera23.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"

// 0x0044a20 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e4d8 = 0x10000;
  return;
}


// 0x0044a38 (0x194 bytes)
int Cam23_IsTriggered(UpdateCam *pCam)

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
               (iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc)),
               iVar2 == 0)) &&
              ((*(int *)(iVar1 + 0x10) < 0 ||
               (iVar2 = MB_IsPntInCylinder
                                  (&g_heroPosition,(longlong)*(int *)(iVar1 + 0x10)), iVar2 == 0))))
             && ((*(int *)(iVar1 + 8) < 0 ||
                 (iVar2 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8)),
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


// 0x0044c00 (0x51c bytes)
void Cam23_ModifyFollowCam(UpdateCam *pCam)

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
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  
  uVar7 = *(uint *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar19 = Cam23_IsTriggered(pCam);
  if (iVar19 == 0) {
    if (*(int *)(uVar7 + 0x20) != 0) {
      *(undefined2 *)(uVar7 + 0x26) = 1;
    }
    *(undefined4 *)(uVar7 + 0x20) = 0;
    Cam0_ClearModCamera(pCam);
  }
  else {
    iVar19 = Cam0_SetModCamera(pCam);
    if (iVar19 < 1) {
      if (*(int *)(uVar7 + 0x20) != 0) {
        *(undefined2 *)(uVar7 + 0x26) = 1;
      }
      *(undefined4 *)(uVar7 + 0x20) = 0;
    }
    else if ((g_Pad.downButtons & (L1|L2)) == 0) {
      iVar19 = *(int *)(uVar7 + 0x20);
      if (iVar19 < 2) {
        pfVar9 = (float *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5));
        fVar1 = pfVar9[1];
        fVar2 = *pfVar9;
        fVar3 = pfVar9[2];
        fVar10 = fVar3 - g_heroPosition.z;
        fVar5 = (fVar2 - g_heroPosition.x) * g_heroGravityDir +
                (fVar1 - g_heroPosition.y) * DAT_00969f74;
        fVar4 = fVar10 * DAT_00969f78 + fVar5;
        fVar11 = -(DAT_00969f74 * fVar4 - (fVar1 - g_heroPosition.y));
        fVar12 = -(g_heroGravityDir * fVar4 - (fVar2 - g_heroPosition.x));
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
        fVar17 = g_heroPosition.x + -(fVar4 * g_heroGravityDir);
        fVar14 = g_heroPosition.x + -(fVar5 * g_heroGravityDir);
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
      auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                           auVar21);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      if ((int)(animationSpeed * 200.5) < iVar19 + 1) {
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x20,
                           (ulonglong)uVar7);
        *(undefined4 *)(uVar7 + 0x20 & 0xfffffffc) = uVar6;
      }
      if (*(int *)(uVar7 + 0x38) != 0) {
        Cam0_SetCamDist
                  ((double)*(float *)(uVar7 + 0x38),0x3f689374c0000000,&DAT_00044bcc,0);
        Cam0_RunningAtCamOff();
      }
      if (*(int *)(uVar7 + 0x3c) != 0) {
        Cam0_SetCamHeight((double)*(float *)(uVar7 + 0x3c),0x3f689374c0000000);
      }
      if (*(int *)(uVar7 + 0x40) != 0) {
        Cam0_SetCamOfsZ
                  ((double)*(float *)(uVar7 + 0x40),0x3f747ae140000000,&DAT_00044bcc,0);
      }
      if (*(int *)(uVar7 + 0x28) != 0) {
        Cam0_ForceElv((double)(*(float *)(uVar7 + 0x28) * 0.017453292));
      }
      if (*(short *)(uVar7 + 0x24) == 0) {
        Cam0_SetCamPull(0);
      }
    }
    else {
      if (*(int *)(uVar7 + 0x20) != 0) {
        *(undefined2 *)(uVar7 + 0x26) = 1;
      }
      *(undefined4 *)(uVar7 + 0x20) = 0;
      Cam0_ClearModCamera(pCam);
    }
  }
  return;
}


// 0x004511c (0xa0 bytes)
int ActivateCamera_23(UpdateCam *pCam,UpdateCam *pCurr)

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


// 0x00451bc (0x4 bytes)
void STUB_000451bc(...)

{
  return;
}


// 0x00451c0 (0x4 bytes)
void STUB_000451c0(...)

{
  return;
}


// 0x00451c4 (0x4 bytes)
void STUB_000451c4(...)

{
  return;
}


