// game/update/camera19.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x3fb90-0x41024
#include "game/update/camera19.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "idol/fastfunc.h"

// 0x003fb90 (0x14 bytes)
void SECTION_CAMERA_CAMERA_UNK(void)

{
  DAT_0071db00 = 0x10000;
  return;
}


// 0x003fba8 (0x2c bytes)
void Cam19_Enable(int importIdx)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c);
  *(undefined1 *)(iVar1 + 0x38) = 1;
  *(undefined1 *)(iVar1 + 0x39) = 0;
  return;
}


// 0x003fbd4 (0x3c bytes)
void Cam19_Disable(int importIdx)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13) {
    *(undefined1 *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) + 0x1c) + 0x39) = 1;
  }
  return;
}


// 0x003fc10 (0x7c bytes)
int Cam19_IsDone(int importIdx)

{
  short sVar1;
  int iVar2;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13) {
    sVar1 = *(short *)(*(int *)(*(int *)(*(int *)(ImportCameras + (int)((longlong)importIdx << 5) +
                                                 0x1c) + 4) + 0x70) + 0x54);
    if ((sVar1 == 1) && (SceneScreenFade != 0.0)) {
      iVar2 = 1;
    }
    else if (sVar1 == 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


// 0x003fc8c (0x13c bytes)
int Cam19_IsHeroInVolume(UpdateCam *pCam)

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


// 0x003fde8 (0x620 bytes)
// inlined: FastAtan2 @0x3ffa4
void InitCamera_19(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  undefined4 *puVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  void *pvVar17;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  void *pvVar23;
  longlong lVar22;
  int iVar24;
  Spline *pSVar25;
  float *pfVar26;
  float *pfVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0xe0;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar14;
  puVar13[0x1e] = in_LR;
  puVar13[0x1b] = unaff_r31;
  auVar31 = ZEXT416(0xfffffff0);
  puVar13[0x18] = unaff_r28;
  iVar21 = ImportCameras;
  sVar5 = pCam->importCameraIdx;
  puVar13[0x1a] = unaff_r30;
  uVar6 = *(uint *)(iVar21 + (int)((longlong)sVar5 << 5) + 0x1c);
  puVar13[0x19] = unaff_r29;
  *(undefined1 *)(uVar6 + 0x38) = 1;
  pvVar7 = pCam->control;
  lVar28 = 2;
  *(undefined4 *)((int)pvVar7 + 0x40) = 0;
  fVar9 = 0.0;
  *(undefined2 *)((int)pvVar7 + 0x54) = 0;
  auVar32 = loadVectorLeftIndexed(0x3a,(ulonglong)uVar6);
  auVar33 = loadVectorRightIndexed(0x4a,(ulonglong)uVar6);
  *(undefined4 *)((int)pvVar7 + 0x44) = 0;
  *(undefined4 *)((int)pvVar7 + 0x48) = 0;
  *(undefined4 *)((int)pvVar7 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar7 + 0x50) = 0;
  auVar32 = vectorShiftRightAlgebraicWord
                      (auVar32 | auVar33,
                       auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
  auVar33 = loadVectorLeftIndexed(4,0x3fdc8);
  auVar31 = ZEXT416(0xffffffff);
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
  auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar33 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  pvVar8 = pCam->control;
  auVar31 = vectorAddFloatingPoint
                      (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar33);
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
  puVar13[0x17] = unaff_r27;
  puVar13[0x16] = unaff_r26;
  auVar31 = vectorSplatHalfWord(auVar31,1);
  uVar12 = storeVectorElementHalfWordIndexed(auVar31,0x56,ZEXT48(pvVar7));
  *(undefined2 *)((int)pvVar7 + 0x56) = uVar12;
  pvVar17 = pvVar8;
  pvVar23 = pvVar8;
  do {
    *(undefined4 *)((int)pvVar17 + 0x68) = 0;
    *(undefined2 *)((int)pvVar23 + 0x58) = 0xffff;
    *(undefined4 *)((int)pvVar17 + 0x6c) = 0;
    *(undefined2 *)((int)pvVar23 + 0x5a) = 0xffff;
    *(undefined4 *)((int)pvVar17 + 0x70) = 0;
    *(undefined2 *)((int)pvVar23 + 0x5c) = 0xffff;
    *(undefined4 *)((int)pvVar17 + 0x74) = 0;
    *(undefined2 *)((int)pvVar23 + 0x5e) = 0xffff;
    fVar4 = g_ViewContext.xratio;
    pvVar17 = (void *)((int)pvVar17 + 0x10);
    pvVar23 = (void *)((int)pvVar23 + 8);
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  fVar3 = ABS(g_ViewContext.xratio);
  *(undefined4 *)(puVar13 + 0xe) = 0x3f800000;
  *(float *)((int)puVar13 + 0x74) = 1.0 - fVar3;
  uVar15 = (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = ABS(*(float *)(puVar13 + 0xe));
  if (*(float *)((int)puVar13 + 0x74) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar13 + 0x74) - 0.0 < 0.0) {
    fVar3 = 1.0;
  }
  if (0.0 < fVar2) {
    lVar28 = uVar14 - 0xd0;
    lVar29 = 2;
    lVar18 = uVar14 - 0x68;
    lVar22 = uVar14 - 0x58;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar2;
    *(float *)((int)puVar13 + 0x7c) = fVar2;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)(puVar13 + 0xf) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar13 + 0x7c) = *(float *)((int)puVar13 + 0x7c) * fVar3;
    *(float *)(puVar13 + 0x10) = *(float *)(puVar13 + 0x10) * fVar2;
    *(float *)((int)puVar13 + 0x84) = *(float *)((int)puVar13 + 0x84) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar28 + 0x78) = *(float *)((int)lVar28 + 0x68) * fVar2 * fVar2;
      iVar21 = (int)lVar18;
      lVar28 = lVar28 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
      lVar22 = lVar22 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar22 = uVar14 - 0x68;
    pfVar27 = (float *)&DAT_007358e0;
    lVar28 = lVar16;
    lVar18 = lVar22;
    do {
      fVar2 = *pfVar27;
      fVar3 = pfVar27[1];
      pfVar27 = pfVar27 + 2;
      *(float *)((int)lVar28 + 0x78) = *(float *)((int)lVar28 + 0x78) * fVar2;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
      lVar18 = lVar18 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar28 = 2;
    do {
      iVar21 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar24 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      fVar9 = fVar9 + *(float *)(iVar21 + 0x78) + *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) +
              *(float *)(iVar24 + 0xc);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar1;
  }
  iVar21 = *(int *)(uVar6 + 0x20);
  *(float *)((int)pvVar8 + 0x88) = fVar9 * 2.0;
  if (-1 < iVar21) {
    pSVar11 = Splines[iVar21];
    iVar21 = pSVar11->cnt;
    if (0 < iVar21) {
      iVar24 = 0;
      pfVar27 = (float *)((int)pvVar8 + 0x68);
      pSVar25 = pSVar11;
      iVar19 = 0;
      do {
        fVar9 = pSVar25->points[0].w;
        if (0 < (int)fVar9) {
          *pfVar27 = pSVar25->points[0].w;
          if (0x43340000 <
              (int)(FLOAT_ORDER(fVar9))) {
            *pfVar27 = *(float *)((int)pvVar8 + 0x88) * 57.295776;
          }
          pfVar27 = pfVar27 + 1;
          *(short *)((int)pvVar8 + iVar24 + 0x58) = (short)iVar19;
          iVar24 = iVar24 + 2;
        }
        iVar20 = iVar19 + 1;
        pfVar26 = (float *)((int)pSVar11 + ((iVar20 - (iVar20 / iVar21) * iVar21) * 4 + 4) * 4);
        fVar9 = pSVar25->points[0].y - pfVar26[1];
        fVar4 = pSVar25->points[0].x - *pfVar26;
        fVar2 = pSVar25->points[0].z - pfVar26[2];
        fVar9 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9);
        pSVar25->points[0].w = fVar9;
        iVar21 = pSVar11->cnt;
        if (iVar19 < iVar21 + -1) {
          *(float *)((int)pvVar7 + 0x48) = *(float *)((int)pvVar7 + 0x48) + fVar9;
        }
        pSVar25 = (Spline *)pSVar25->points;
        iVar19 = iVar20;
      } while (iVar20 < iVar21);
    }
  }
  if (0 < *(short *)(uVar6 + 0x3a)) {
    puVar13[0x13] = (longlong)(int)*(short *)(uVar6 + 0x3a);
    puVar13[0x13] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x13] + 0.5));
    dVar30 = (double)FastIntToDouble(*(undefined4 *)((int)puVar13 + 0x9c));
    *(float *)(uVar6 + 0x3c) = (float)((double)*(float *)((int)pvVar7 + 0x48) / dVar30) * 60.0;
  }
  if (-1 < *(int *)(uVar6 + 0x24)) {
    pSVar11 = Splines[*(int *)(uVar6 + 0x24)];
    iVar21 = pSVar11->cnt;
    if (0 < iVar21) {
      iVar24 = 0;
      pSVar25 = pSVar11;
      do {
        iVar19 = iVar24 + 1;
        iVar21 = iVar19 - (iVar19 / iVar21) * iVar21;
        fVar9 = pSVar25->points[0].y - *(float *)((int)pSVar11 + (iVar21 * 4 + 5) * 4);
        fVar4 = pSVar25->points[0].x - *(float *)((int)pSVar11 + (iVar21 * 4 + 4) * 4);
        fVar2 = pSVar25->points[0].z - *(float *)((int)pSVar11 + (iVar21 * 4 + 6) * 4);
        fVar9 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9);
        pSVar25->points[0].w = fVar9;
        iVar21 = pSVar11->cnt;
        if (iVar24 < iVar21 + -1) {
          *(float *)((int)pvVar7 + 0x4c) = *(float *)((int)pvVar7 + 0x4c) + fVar9;
        }
        pSVar25 = (Spline *)pSVar25->points;
        iVar24 = iVar19;
      } while (iVar19 < iVar21);
    }
  }
  puVar10 = (undefined4 *)pCam->control;
  *puVar10 = 0x3cf5c28f;
  puVar10[1] = 0x3e4ccccd;
  puVar10[7] = 0;
  puVar10[6] = 0;
  puVar10[5] = 0;
  puVar10[4] = 0;
  pvVar7 = pCam->control;
  *(undefined4 *)((int)pvVar7 + 0x20) = 0x3cf5c28f;
  *(undefined4 *)((int)pvVar7 + 0x24) = 0x3e4ccccd;
  *(undefined4 *)((int)pvVar7 + 0x3c) = 0;
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  *(undefined4 *)((int)pvVar7 + 0x34) = 0;
  *(undefined4 *)((int)pvVar7 + 0x30) = 0;
  pvVar7 = GameCamera.pLastUpdCam;
  pCam->pos[0] = *(float *)((int)GameCamera.pLastUpdCam + 0x30);
  pCam->pos[1] = *(float *)((int)pvVar7 + 0x34);
  pCam->pos[2] = *(float *)((int)pvVar7 + 0x38);
  pCam->pos[3] = *(float *)((int)pvVar7 + 0x3c);
                    /* WARNING: Load size is inaccurate */
  pCam->mtx[0] = *pvVar7;
  pCam->mtx[1] = *(float *)((int)pvVar7 + 4);
  pCam->mtx[2] = *(float *)((int)pvVar7 + 8);
  pCam->mtx[3] = *(float *)((int)pvVar7 + 0xc);
  pCam->mtx[4] = *(float *)((int)pvVar7 + 0x10);
  pCam->mtx[5] = *(float *)((int)pvVar7 + 0x14);
  pCam->mtx[6] = *(float *)((int)pvVar7 + 0x18);
  pCam->mtx[7] = *(float *)((int)pvVar7 + 0x1c);
  pCam->mtx[8] = *(float *)((int)pvVar7 + 0x20);
  iVar21 = *(int *)(uVar6 + 0x4c);
  pCam->mtx[9] = *(float *)((int)pvVar7 + 0x24);
  pCam->mtx[10] = *(float *)((int)pvVar7 + 0x28);
  pCam->mtx[0xb] = *(float *)((int)pvVar7 + 0x2c);
  if (iVar21 == 0) {
    TransitionMovement(0x72,1);
  }
  return;
}


// 0x0040440 (0xadc bytes)
// inlined: FastRSqrt @0x40658, FastRSqrt @0x40718, FastRSqrt @0x40d98, FastRSqrt @0x40e58
void UpdateCamera_19(UpdateCam *pCam)

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
  GPiece<4> local_90;
  GPiece<28> local_8c;
  
  pvVar15 = pCam->control;
  sVar13 = *(short *)((int)pvVar15 + 0x54);
  iVar16 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if (sVar13 == 0) {
    SceneScreenFade = SceneScreenFade + 0.05;
    if (1.0 <= SceneScreenFade) {
      iVar20 = *(int *)(iVar16 + 0x24);
      SceneScreenFade = 1.0;
      pSVar17 = Splines[*(int *)(iVar16 + 0x20)];
      LetterBoxOn = 1;
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
      fVar10 = g_heroGravityDir;
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
        fVar7 = g_MobyInstance[iVar20].pos.w;
        fVar8 = g_MobyInstance[iVar20].pos.x +
                GameCamera.orientMtx.up.x * fVar6 +
                GameCamera.orientMtx.forward.x * fVar5 + GameCamera.orientMtx.right.x * fVar4;
        fVar9 = g_MobyInstance[iVar20].pos.y +
                GameCamera.orientMtx.up.y * fVar6 +
                GameCamera.orientMtx.forward.y * fVar5 + GameCamera.orientMtx.right.y * fVar4;
        fVar4 = g_MobyInstance[iVar20].pos.z +
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
      SceneScreenFade = SceneScreenFade + 0.05;
      if (1.0 <= SceneScreenFade) {
        *(undefined2 *)((int)pvVar15 + 0x54) = 3;
        SceneScreenFade = 1.0;
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
        g_ViewContext.xratio =
             (fVar2 * fVar12 * 2.601887e-06 +
             fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar11 * -0.16666657 + fVar11)
             / (fVar3 * fVar8 * 2.601887e-06 +
               fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1);
        UpdateViewContext();
        *(undefined1 *)(iVar16 + 0x39) = 1;
        LetterBoxOn = 0;
        iVar20 = *(int *)(iVar16 + 0x4c);
        GameCamera.screenFade = 0.05;
        (pCam->activation).deactivate = 4;
        if (iVar20 == 0) {
          TransitionMovement(0,1);
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
      SceneScreenFade = SceneScreenFade - 0.05;
      if (SceneScreenFade < 0.0) {
        SceneScreenFade = 0.0;
      }
    }
    dVar30 = (double)pCam->pos[0];
    dVar29 = (double)pCam->pos[1];
    dVar28 = (double)pCam->pos[2];
    pSVar17 = Splines[*(int *)(iVar16 + 0x20)];
    iVar20 = MB_PathMoveDist
                       ((double)(*(float *)(iVar16 + 0x3c) * g_FrameTime),pSVar17,
                        (longlong)(int)pCam + 0x30,(int)pvVar15 + 0x40,(int)pvVar15 + 0x44,
                        &DAT_00720000,0);
    if (*(short *)((int)pvVar15 + 0x56) != 0) {
      iVar21 = FastDecTimerS16((int)pvVar15 + 0x56);
      if (iVar21 == 0) {
        if ((*(int *)(iVar16 + 0x40) != 0) &&
           (sVar13 = *(short *)((int)pvVar15 + 0x56),
           iVar21 = FastDoubleToInt(0x4034000000000000),
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
          dVar27 = (double)MB_CosineInterpolate
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
          g_ViewContext.xratio =
               (fVar2 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 +
               fVar10 * 0.0083330255 + fVar2 * fVar11 * -0.16666657 + fVar11) /
               (fVar3 * fVar8 * 2.601887e-06 +
               fVar8 * -0.0001980741 + fVar7 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1);
          UpdateViewContext();
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
        MB_PathMoveDist
                  ((double)((fVar1 / *(float *)((int)pvVar15 + 0x48)) *
                           *(float *)((int)pvVar15 + 0x4c)),pSVar17,&local_a0,local_90,local_8c);
        STUB_00065470(0x3fc99999a0000000,&local_a0);
        STUB_00065468(pSVar17->points,pSVar17->points + pSVar17->cnt + -1);
        fVar1 = pCam->pos[0];
        fVar2 = pCam->pos[1];
        fVar3 = pCam->pos[2];
      }
      else {
        fVar10 = *(float *)(iVar16 + 0x30);
        fVar11 = *(float *)(iVar16 + 0x2c);
        fVar12 = *(float *)(iVar16 + 0x34);
        local_94 = g_MobyInstance[iVar20].pos.w;
        fVar1 = pCam->pos[0];
        fVar2 = pCam->pos[1];
        fVar3 = pCam->pos[2];
        local_a0 = g_MobyInstance[iVar20].pos.x +
                   GameCamera.orientMtx.up.x * fVar12 +
                   GameCamera.orientMtx.forward.x * fVar11 + GameCamera.orientMtx.right.x * fVar10;
        local_9c = g_MobyInstance[iVar20].pos.y +
                   GameCamera.orientMtx.up.y * fVar12 +
                   GameCamera.orientMtx.forward.y * fVar11 + GameCamera.orientMtx.right.y * fVar10;
        local_98 = g_MobyInstance[iVar20].pos.z +
                   GameCamera.orientMtx.up.z * fVar12 +
                   GameCamera.orientMtx.forward.z * fVar11 + GameCamera.orientMtx.right.z * fVar10;
      }
      fVar8 = DAT_00969f78;
      fVar7 = DAT_00969f74;
      fVar12 = g_heroGravityDir;
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


// 0x0040f1c (0x104 bytes)
int ActivateCamera_19(UpdateCam *pCam,UpdateCam *pCurr)

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
      iVar1 = 1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// 0x0041020 (0x4 bytes)
void STUB_00041020(...)

{
  return;
}


