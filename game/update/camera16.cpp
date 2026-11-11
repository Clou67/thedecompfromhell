// game/update/camera16.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x3c818-0x3d318
#include <math.h>
#include "game/update/camera16.h"
#include "game/camera.h"
#include "game/fUnk.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x003c818 (0x14 bytes)
void SECTION_HEADER_UNKNOWN(void)

{
  DAT_0071d9a0 = 0x10000;
  return;
}


// 0x003c830 (0x6c bytes)
undefined8 Cam16_AreMobyGroupDead(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state < 0x80) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}


// 0x003c89c (0xc0 bytes)
void Cam16_InitSplineSegLens(UpdateCam *pCam)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  Spline *pSVar9;
  
  iVar8 = 0;
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  pSVar2 = Splines[*(int *)(iVar1 + 0x14)];
  iVar6 = pSVar2->cnt;
  pSVar9 = pSVar2;
  if (0 < iVar6) {
    do {
      iVar8 = iVar8 + 1;
      pfVar7 = (float *)((int)pSVar2 + ((iVar8 - (iVar8 / iVar6) * iVar6) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar7[1];
      fVar4 = pSVar9->points[0].x - *pfVar7;
      fVar5 = pSVar9->points[0].z - pfVar7[2];
      iVar6 = pSVar2->cnt;
      pSVar9->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar9 = (Spline *)pSVar9->points;
    } while (iVar8 < iVar6);
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  return;
}


// 0x003c95c (0xd4 bytes)
int Cam16_IsHeroInVolume(UpdateCam *pCam)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(int *)(iVar1 + 0xc) < 0) {
    if (*(int *)(iVar1 + 0x10) < 0) {
      if (*(int *)(iVar1 + 8) < 0) {
        return 0;
      }
      iVar1 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8));
    }
    else {
      iVar1 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar1 + 0x10));
    }
  }
  else {
    iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar1 + 0xc));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}


// 0x003ca68 (0x804 bytes)
// inlined: FastRSqrt @0x3cdd0, FastRSqrt @0x3ce48, FastAtan2 @0x3d054
void Cam16_ModifyFollowCam(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  ushort uVar7;
  float *pfVar8;
  Spline *pSVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar17;
  ushort *puVar18;
  longlong lVar15;
  longlong lVar16;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x130;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar14;
  puVar11[0x28] = in_LR;
  puVar11[0x23] = in_f29;
  puVar11[0x24] = in_f30;
  puVar11[0x25] = in_f31;
  puVar11[0x22] = unaff_r31;
  iVar17 = ImportCameras;
  sVar6 = pCam->importCameraIdx;
  puVar11[0x20] = unaff_r29;
  puVar11[0x21] = unaff_r30;
  puVar11[0x1f] = unaff_r28;
  puVar11[0x1e] = unaff_r27;
  pfVar8 = *(float **)(iVar17 + (int)((longlong)sVar6 << 5) + 0x1c);
  iVar17 = Cam0_SetModCamera();
  if (iVar17 < 1) {
    pfVar8[0xc] = 0.0;
    pfVar8[9] = 1.4013e-45;
    return;
  }
  if (-1 < (int)pfVar8[0xf]) {
    puVar18 = (ushort *)(&g_MobyGroups)[(int)pfVar8[0xf]];
    if (puVar18 != (ushort *)0x0) {
      do {
        if (g_MobyInstance[*puVar18 & 0x7fff].state < 0x80) goto LAB_0003cb54;
        uVar7 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar7);
    }
    pfVar8[9] = -NAN;
    Cam0_ClearModCamera(pCam);
    return;
  }
LAB_0003cb54:
  iVar17 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(int *)(iVar17 + 0xc) < 0) {
    if (*(int *)(iVar17 + 0x10) < 0) {
      if (*(int *)(iVar17 + 8) < 0) goto LAB_0003cbf4;
      iVar17 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar17 + 8));
    }
    else {
      iVar17 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar17 + 0x10));
    }
  }
  else {
    iVar17 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar17 + 0xc));
  }
  if (iVar17 != 0) {
    if ((0x3e99999a < (uint)ABS(g_Pad.sticks.x)) || (0x3e99999a < (uint)ABS(g_Pad.sticks.y))) {
      Cam0_ClearModCamera(pCam);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(in_LR,0x3ca30);
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x30,
                          ZEXT48(pfVar8));
      *(undefined4 *)((uint)(pfVar8 + 0xc) & 0xfffffffc) = uVar10;
      pfVar8[9] = 1.4013e-45;
      return;
    }
    iVar17 = FastDecTimerS32(ZEXT48(pfVar8) + 0x30);
    if (iVar17 == 0) {
      Cam0_ClearModCamera(pCam);
      pfVar8[9] = 1.4013e-45;
      return;
    }
    *(undefined4 *)(puVar11 + 0x14) = 0;
    dVar27 = 0.0;
    *(undefined4 *)((int)puVar11 + 0xa4) = 0;
    pSVar9 = Splines[(int)pfVar8[5]];
    iVar17 = MB_PathFollowToPos
                       (0x4034000000000000,0x4014000000000000,0,pSVar9,&g_heroPosition,uVar14 - 0xb0
                        ,uVar14 - 0x90,uVar14 - 0x8c);
    if (iVar17 == 0) {
      Cam0_ClearModCamera(pCam);
      return;
    }
    fVar1 = g_heroPosition.y - *(float *)((int)puVar11 + 0x84);
    if (pfVar8[8] <
        SQRT((g_heroPosition.x - *(float *)(puVar11 + 0x10)) *
             (g_heroPosition.x - *(float *)(puVar11 + 0x10)) + fVar1 * fVar1)) {
      Cam0_ClearModCamera(pCam);
      return;
    }
    iVar17 = *(int *)(puVar11 + 0x14);
    fVar1 = pSVar9->points[iVar17].y;
    fVar2 = pSVar9->points[iVar17].x;
    fVar5 = fVar1 - GameCamera.posY;
    fVar3 = fVar2 - GameCamera.posX;
    fVar4 = fVar3 * fVar3 + fVar5 * fVar5;
    dVar25 = dVar27;
    dVar26 = dVar27;
    if ((double)SQRT(fVar4) != dVar27) {
      fVar12 = 1.0 / SQRT(fVar4);
      fVar12 = -(fVar4 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
      fVar12 = -(fVar4 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
      fVar12 = -(fVar4 * fVar12 * fVar12 - 1.0) * fVar12 * 0.5 + fVar12;
      dVar25 = (double)(fVar3 * fVar12);
      dVar26 = (double)(fVar5 * fVar12);
    }
    fVar1 = pSVar9->points[iVar17 + 1].y - fVar1;
    fVar2 = pSVar9->points[iVar17 + 1].x - fVar2;
    fVar5 = fVar2 * fVar2 + fVar1 * fVar1;
    dVar24 = dVar27;
    dVar29 = dVar27;
    if ((double)SQRT(fVar5) != dVar27) {
      fVar3 = 1.0 / SQRT(fVar5);
      fVar3 = -(fVar5 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar5 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar5 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar29 = (double)(fVar2 * fVar3);
      dVar24 = (double)(fVar1 * fVar3);
    }
    dVar30 = 1.0;
    dVar28 = dVar30;
    if ((double)(float)(dVar29 * dVar25 + (double)(float)(dVar24 * dVar26)) - dVar27 < 0.0) {
      dVar28 = -1.0;
    }
    MB_PathMoveDist
              ((double)(float)((double)pfVar8[10] * dVar28),pSVar9,uVar14 - 0xa0,uVar14 - 0x90,
               uVar14 - 0x8c);
    fVar1 = *(float *)((int)puVar11 + 0x94) - g_heroPosition.y;
    if (SQRT((*(float *)(puVar11 + 0x12) - g_heroPosition.x) *
             (*(float *)(puVar11 + 0x12) - g_heroPosition.x) + fVar1 * fVar1) < pfVar8[10] - 0.5) {
      pfVar8[9] = 1.4013e-45;
      return;
    }
    puVar11[0x1b] = (longlong)(int)(animationSpeed * 240.5);
    dVar26 = (double)FastIntToDouble(*(undefined4 *)((int)puVar11 + 0xdc));
    dVar25 = (double)FastIntToDouble(pfVar8[9]);
    if (dVar26 - dVar25 < 0.0) {
      dVar25 = dVar26;
    }
    dVar26 = (double)MB_catmullRom
                               (dVar30,dVar27,dVar30,dVar27,(double)(float)(dVar25 / dVar26));
    fVar1 = *pfVar8;
    fVar2 = *(float *)((int)puVar11 + 0x94) - GameCamera.posY;
    dVar24 = ABS((double)(*(float *)(puVar11 + 0x12) - GameCamera.posX));
    dVar29 = ABS((double)fVar2);
    *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x12) - GameCamera.posX;
    *(float *)((int)puVar11 + 0xac) = fVar2;
    dVar28 = (double)(float)((double)fVar1 * dVar26);
    *(float *)(puVar11 + 0x16) = (float)(dVar24 - dVar29);
    fVar1 = GameCamera.rot.radius;
    uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xac) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar11 + 0x15));
    if ((double)*(float *)(puVar11 + 0x16) - dVar27 < 0.0) {
      dVar25 = dVar29;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar29 = ABS((double)*(float *)((int)puVar11 + 0xac));
    if ((double)*(float *)(puVar11 + 0x16) - dVar27 < 0.0) {
      dVar29 = dVar24;
    }
    dVar24 = dVar27;
    if (dVar27 < dVar25) {
      lVar15 = uVar14 - 0x120;
      lVar19 = uVar14 - 0x7c;
      lVar22 = uVar14 - 0x6c;
      lVar23 = 2;
      fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)(puVar11 + 0x17) = fVar3;
      *(float *)((int)puVar11 + 0xbc) = fVar3;
      *(float *)((int)puVar11 + 0xb4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar4;
      *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar3;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar3 * fVar3;
        iVar17 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar22 = uVar14 - 0x7c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar22;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar3;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar15 = 2;
      dVar25 = dVar27;
      do {
        iVar17 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xb4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar25 = (double)FastSubRots((float)dVar24,fVar1);
    if ((double)(pfVar8[0xb] * 0.017453292) < dVar25) {
      pfVar8[9] = 1.4013e-45;
    }
    else {
      Cam0_ForceLookAtPos
                ((double)(float)(dVar28 * 0.01745329238474369),dVar27,uVar14 - 0xa0);
    }
    if (pfVar8[0xd] != 0.0) {
      Cam0_SetCamDist((double)pfVar8[0xd],0x3f60624de0000000,&DAT_0003ca30,0);
    }
    if (pfVar8[0xe] != 0.0) {
      Cam0_SetCamHeight((double)pfVar8[0xe],0x3f60624de0000000);
    }
    Cam0_SetCamPull(0);
    Cam0_RunningAtCamOff();
    Cam0_disableLOS();
    Cam0_SetCPosGainDamp
              ((double)(float)(dVar26 * 0.02499999850988388 + 0.004999999888241291),
               0x3fc99999a0000000);
    pfVar8[9] = (float)((int)pfVar8[9] + 1);
    return;
  }
LAB_0003cbf4:
  Cam0_ClearModCamera(pCam);
  pfVar8[0xc] = 0.0;
  pfVar8[9] = 1.4013e-45;
  return;
}


// 0x003d26c (0xa0 bytes)
int ActivateCamera_16(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar2 = *(int *)(iVar1 + 0x24);
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      Cam16_InitSplineSegLens(pCam);
      *(undefined4 *)(iVar1 + 0x24) = 1;
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      Cam16_ModifyFollowCam(pCam);
    }
  }
  return -1;
}


// 0x003d30c (0x4 bytes)
void STUB_0003d30c(...)

{
  return;
}


// 0x003d310 (0x4 bytes)
void STUB_0003d310(...)

{
  return;
}


// 0x003d314 (0x4 bytes)
void STUB_0003d314(...)

{
  return;
}


