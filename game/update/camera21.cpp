// game/update/camera21.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x424c4-0x43e30
#include "game/update/camera21.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x00424c4 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071dbe0 = 0x10000;
  return;
}


// 0x00424f0 (0x62c bytes)
// inlined: FastAtan2 @0x427e8, FastRSqrt @0x429ac, FastRSqrt @0x42a4c
void InitCamera_21(UpdateCam *pCam)

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
  fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
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
  dVar25 = (double)(g_heroGravityDir * -1.5);
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


// 0x0042b48 (0x122c bytes)
// inlined: FastAtan2 @0x43654, FastRSqrt @0x439f4, FastRSqrt @0x43aec, FastRSqrt @0x43be8, FastRSqrt @0x43c9c
void UpdateCamera_21(UpdateCam *pCam)

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
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
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
    uVar29 = (ZERO_MASK((*(int *)(iVar20 + *(int *)(iVar5 + 0x38) * 0x20 + 0x10) - iVar24))) + 2;
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
  pMVar19 = g_MobyInstance;
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
    if (iVar24 == *(int *)(iVar20 + *(int *)((int)g_MobyInstance[iVar7].pVar + 0x60) * 0x20 + 0x10)) {
      g_MobyInstance[iVar7].setByGroup = '\x01';
      if (0 < *(short *)(iVar5 + 0x30)) {
        pMVar19[iVar8].setByGroup = '\x05';
        pvVar10 = pMVar19[iVar8].pVar;
        if (*(short *)(iVar5 + 0x30) == 2) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(4,0x42b1c);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pvVar10));
          *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
          pMVar19[iVar9].setByGroup = '\x05';
          auVar39 = loadVectorLeftIndexed(8,0x42b1c);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar41);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pMVar19[iVar9].pVar));
          *(undefined4 *)((int)pMVar19[iVar9].pVar + 0x1c8U & 0xfffffffc) = uVar15;
        }
        else {
          if (*(short *)(iVar5 + 0x30) == 3) {
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          }
          else {
            auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          }
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
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
    else if (iVar24 == *(int *)(iVar20 + *(int *)((int)g_MobyInstance[iVar8].pVar + 0x60) * 0x20 +
                               0x10)) {
      g_MobyInstance[iVar8].setByGroup = '\x01';
      if (0 < *(short *)(iVar5 + 0x30)) {
        iVar24 = MB_randInt(2);
        if (iVar24 == 0) {
          pMVar19[iVar9].setByGroup = '\x05';
          pvVar10 = pMVar19[iVar9].pVar;
          if (*(short *)(iVar5 + 0x30) == 2) {
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar40 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar40);
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
            pMVar19[iVar7].setByGroup = '\x05';
            auVar39 = loadVectorLeftIndexed(8,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar41);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pMVar19[iVar7].pVar));
            *(undefined4 *)((int)pMVar19[iVar7].pVar + 0x1c8U & 0xfffffffc) = uVar15;
          }
          else {
            if (*(short *)(iVar5 + 0x30) == 3) {
              auVar39 = loadVectorLeftIndexed(4,0x42b1c);
              auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            }
            else {
              auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            }
            auVar41 = ZEXT416(0xffffffff);
            auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
            auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
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
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar40 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar40);
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
            pMVar19[iVar9].setByGroup = '\x05';
            auVar39 = loadVectorLeftIndexed(8,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 |
                                         auVar39 << 0x60,auVar41);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                                ZEXT48(pMVar19[iVar9].pVar));
            *(undefined4 *)((int)pMVar19[iVar9].pVar + 0x1c8U & 0xfffffffc) = uVar15;
          }
          else {
            if (*(short *)(iVar5 + 0x30) == 3) {
              auVar39 = loadVectorLeftIndexed(4,0x42b1c);
              auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            }
            else {
              auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
              auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            }
            auVar41 = ZEXT416(0xffffffff);
            auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
            auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
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
      g_MobyInstance[iVar9].setByGroup = '\x01';
      if (0 < *(short *)(iVar5 + 0x30)) {
        pMVar19[iVar8].setByGroup = '\x05';
        pvVar10 = pMVar19[iVar8].pVar;
        if (*(short *)(iVar5 + 0x30) == 2) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(4,0x42b1c);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar41 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pvVar10));
          *(undefined4 *)((int)pvVar10 + 0x1c8U & 0xfffffffc) = uVar15;
          pMVar19[iVar7].setByGroup = '\x05';
          auVar39 = loadVectorLeftIndexed(8,0x42b1c);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar41);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x1c8,
                              ZEXT48(pMVar19[iVar7].pVar));
          *(undefined4 *)((int)pMVar19[iVar7].pVar + 0x1c8U & 0xfffffffc) = uVar15;
        }
        else {
          if (*(short *)(iVar5 + 0x30) == 3) {
            auVar39 = loadVectorLeftIndexed(4,0x42b1c);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          }
          else {
            auVar39 = loadVectorLeftIndexed(0xc,0x42b1c);
            auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          }
          auVar41 = ZEXT416(0xffffffff);
          auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
          auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
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
  uVar31 = MB_LerpRot
                     ((double)(*(float *)((int)&DAT_0071dc1c + iVar5) * 0.017453292),
                      (double)(*(float *)(&DAT_0071dc4c + iVar5) * 0.017453292),dVar38);
  dVar34 = 0.20000000298023224;
  dVar35 = 0.0;
  dVar36 = (double)Cam_InterpAngles((double)*(float *)((int)pvVar4 + 0x60),uVar31,dVar36,
                                    0x3fc99999a0000000,0);
  *(float *)((int)pvVar4 + 0x60) = (float)dVar36;
  dVar36 = (double)DAT_0071dc08;
  uVar31 = MB_LerpRot
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
  uVar31 = MB_LerpRot
                     ((double)(float)((double)(float)(&DAT_0071dc28)
                                                     [*(int *)((int)pvVar4 + 0x8c) * 0xc] * dVar37),
                      (double)(float)((double)*(float *)(&DAT_0071dc58 +
                                                        *(int *)((int)pvVar4 + 0x8c) * 0x30) *
                                     dVar37),dVar38);
  dVar36 = (double)Cam_InterpAngles((double)*(float *)((int)pvVar4 + 0x6c),uVar31,dVar36,dVar34,
                                    dVar35);
  *(float *)((int)pvVar4 + 0x6c) = (float)dVar36;
  dVar36 = (double)DAT_0071dc14;
  uVar31 = MB_LerpRot
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
  fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
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
  dVar36 = (double)FastWrapRot((float)dVar37,fVar42);
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
    uVar31 = MB_catmullRom(0x3ff0000000000000,dVar35,0x3ff0000000000000,dVar35);
    dVar36 = (double)MB_LerpRot(dVar36,dVar34,uVar31);
  }
  else if (dVar34 == dVar35) {
    *(float *)((int)pvVar4 + 0x98) =
         *(float *)((int)pvVar4 + 0x98) + -(*(float *)((int)pvVar4 + 0x98) * DAT_0071dc18);
    uVar31 = MB_catmullRom(0x3ff0000000000000,dVar35,0x3ff0000000000000,dVar35);
    dVar36 = (double)MB_LerpRot(dVar36,dVar37,uVar31);
    *(float *)((int)pvVar4 + 0x90) = (float)dVar37;
    *(float *)((int)pvVar4 + 0x94) = (float)dVar34;
  }
  else {
    *(float *)((int)pvVar4 + 0x98) =
         (1.0 - *(float *)((int)pvVar4 + 0x98)) * DAT_0071dc18 + *(float *)((int)pvVar4 + 0x98);
    uVar31 = MB_catmullRom(0x3ff0000000000000,dVar35,0x3ff0000000000000,dVar35);
    dVar36 = (double)MB_LerpRot(dVar36,dVar34,uVar31);
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
  dVar36 = (double)(g_heroGravityDir * -1.5);
  fVar2 = DAT_00969f78 * -1.5;
  dVar37 = (double)fVar2;
  fVar42 = (float)((double)(g_heroPosition.y - pCam->pos[1]) + dVar34);
  fVar12 = (float)((double)(g_heroPosition.x - pCam->pos[0]) + dVar36);
  fVar13 = (float)((double)(g_heroPosition.z - pCam->pos[2]) + dVar37);
  *(float *)(puVar16 + 0xe) = g_heroGravityDir * -1.5;
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
    MB_RotateQuatAxisAngle(*(float *)((int)pvVar4 + 0x6c),pCam->mtx,pCam->mtx);
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
    MB_RotateQuatAxisAngle(*(float *)((int)pvVar4 + 0x70),pCam->mtx,pCam->mtx);
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


// 0x0043d74 (0x9c bytes)
int ActivateCamera_21(UpdateCam *pCam,UpdateCam *pCurr)

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


// 0x0043e10 (0x20 bytes)
void ExitCamera_21(UpdateCam *pCam)

{
  if (g_heroStateType != 0xf) {
    (pCam->activation).deactivate = 3;
  }
  return;
}


