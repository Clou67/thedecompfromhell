// game/update/camera20.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x41024-0x424c4
#include "game/update/camera20.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update/moby212.h"
#include "idol/fastfunc.h"

// 0x0041024 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071db70 = 0x10000;
  return;
}


// 0x0041038 (0x24 bytes)
void Cam20_Enable(int importIdx)

{
  *(undefined1 *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c) + 0x38) = 1;
  return;
}


// 0x004105c (0x24 bytes)
void Cam20_Disable(int importIdx)

{
  *(undefined1 *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c) + 0x39) = 1;
  return;
}


// 0x0041080 (0x3c bytes)
int Cam20_IsRunning(int importIdx)

{
  return (uint)(*(short *)(*(int *)(*(int *)(*(int *)(ImportCameras +
                                                      (int)((longlong)importIdx << 5) + 0x1c) + 4) +
                                   0x70) + 0x54) == 1);
}


// 0x00410bc (0x13c bytes)
int Cam20_IsHeroInVolume(UpdateCam *pCam)

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
        iVar1 = PointInsideComplexPoly
                          (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar1 + 0x14)]->points,
                           Splines[*(int *)(iVar1 + 0x14)]->cnt);
      }
      else {
        iVar1 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar1 + 8));
      }
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


// 0x0041210 (0x604 bytes)
// inlined: FastAtan2 @0x413c4
void InitCamera_20(UpdateCam *pCam)

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
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  
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
  auVar32 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
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
    fVar5 = g_ViewContext.xratio;
    pvVar18 = (void *)((int)pvVar18 + 0x10);
    pvVar24 = (void *)((int)pvVar24 + 8);
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  fVar3 = ABS(g_ViewContext.xratio);
  *(undefined4 *)(puVar13 + 0x10) = 0x3f800000;
  *(float *)((int)puVar13 + 0x84) = 1.0 - fVar3;
  uVar16 = (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar5 >> 0x1d) & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
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
    dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)puVar13 + 0xac));
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
  Hero_Warp(&pCVar14[iVar22].pos.x,(float *)(puVar13 + 0xe),0x72,0);
  return;
}


// 0x0041850 (0xb88 bytes)
// inlined: FastRSqrt @0x41a34, FastRSqrt @0x41af8, FastRSqrt @0x41e00, FastRSqrt @0x42254, FastRSqrt @0x42314
void UpdateCamera_20(UpdateCam *pCam)

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
  GPiece<4> local_80;
  GPiece<4> local_7c;
  GPiece<4> local_78;
  GPiece<4> local_74;
  
  pvVar15 = pCam->control;
  iVar16 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(short *)((int)pvVar15 + 0x54) == 0) {
    iVar22 = *(int *)(iVar16 + 0x20);
    iVar23 = *(int *)(iVar16 + 0x24);
    LetterBoxOn = 1;
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
    fVar1 = g_heroGravityDir;
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
      fVar8 = g_MobyInstance[iVar22].pos.w;
      fVar9 = g_MobyInstance[iVar22].pos.x +
              GameCamera.orientMtx.up.x * fVar7 +
              GameCamera.orientMtx.forward.x * fVar6 + GameCamera.orientMtx.right.x * fVar5;
      fVar10 = g_MobyInstance[iVar22].pos.y +
               GameCamera.orientMtx.up.y * fVar7 +
               GameCamera.orientMtx.forward.y * fVar6 + GameCamera.orientMtx.right.y * fVar5;
      fVar5 = g_MobyInstance[iVar22].pos.z +
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
    iVar22 = MB_PathMoveDist
                       ((double)(*(float *)(iVar16 + 0x3c) * g_FrameTime),pSVar17,
                        (longlong)(int)pCam + 0x30,(int)pvVar15 + 0x40,(int)pvVar15 + 0x44,in_r7,0);
    if ((*(short *)((int)pvVar15 + 0x56) != 0) &&
       (iVar23 = FastDecTimerS16((int)pvVar15 + 0x56), iVar23 != 0)) {
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
          dVar31 = (double)MB_CosineInterpolate
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
          g_ViewContext.xratio =
               (fVar3 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 + fVar1 * 0.0083330255 + fVar3 * fVar11 * -0.16666657 + fVar11
               ) / (fVar4 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar8 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2);
          UpdateViewContext();
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
        MB_PathMoveDist
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
        local_84 = g_MobyInstance[iVar22].pos.w;
        fVar2 = pCam->pos[0];
        fVar3 = pCam->pos[1];
        fVar4 = pCam->pos[2];
        local_90 = g_MobyInstance[iVar22].pos.x +
                   GameCamera.orientMtx.up.x * fVar12 +
                   GameCamera.orientMtx.forward.x * fVar11 + GameCamera.orientMtx.right.x * fVar1;
        local_8c = g_MobyInstance[iVar22].pos.y +
                   GameCamera.orientMtx.up.y * fVar12 +
                   GameCamera.orientMtx.forward.y * fVar11 + GameCamera.orientMtx.right.y * fVar1;
        local_88 = g_MobyInstance[iVar22].pos.z +
                   GameCamera.orientMtx.up.z * fVar12 +
                   GameCamera.orientMtx.forward.z * fVar11 + GameCamera.orientMtx.right.z * fVar1;
      }
      fVar9 = DAT_00969f78;
      fVar8 = DAT_00969f74;
      fVar12 = g_heroGravityDir;
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
      g_ViewContext.xratio =
           (fVar4 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11) /
           (fVar3 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2);
      UpdateViewContext();
      pMVar21 = g_MobyInstance;
      LetterBoxOn = 0;
      iVar16 = *(int *)(iVar16 + 0x50);
      GameCamera.screenFade = 0.25;
      (pCam->activation).deactivate = 4;
      M1412_002ef9c8(pMVar21 + iVar16);
      uVar20 = DAT_0096a240;
      MB_PathMoveDist
                (0x4024000000000000,DAT_0096a240,(longlong)(int)pCam + 0x30,local_80,local_7c);
      pCam->pos[2] = pCam->pos[2] + 2.0;
      dVar36 = 0.0;
      MB_PathMoveDist(0,uVar20,&local_a0,local_80,local_7c);
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
                     (double)(float)((double)g_heroGravityDir * dVar34));
      fVar4 = (float)((double)DAT_00969f74 * dVar34 - (double)(float)((double)DAT_00969f78 * dVar35)
                     );
      fVar1 = (float)((double)g_heroGravityDir * dVar35 -
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


// 0x00423d8 (0xe8 bytes)
int ActivateCamera_20(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (*(char *)(iVar1 + 0x38) == '\0') {
    if ((((pCurr == (UpdateCam *)0x0) || ((pCurr->activation).deactivate != 0)) ||
        (g_heroStateType == 0xf)) && (iVar2 = Cam20_IsHeroInVolume(pCam), iVar2 != 0)) {
      if ((*(int *)(iVar1 + 0x48) < 0) || (g_heroStateType == *(int *)(iVar1 + 0x48))) {
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


// 0x00424c0 (0x4 bytes)
void STUB_000424c0(...)

{
  return;
}


