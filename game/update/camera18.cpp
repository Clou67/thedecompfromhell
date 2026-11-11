// game/update/camera18.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x3e274-0x3fb90
#include "game/update/camera18.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x003e274 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071da90 = 0x10000;
  return;
}


// 0x003e288 (0x1e4 bytes)
int Cam18_IsTriggered(UpdateCam *pCam)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  iVar1 = *(int *)(iVar6 + 0x48);
  if (GameCamera.field19_0x25c.piece<0,4>() == iVar1 && GameCamera.field19_0x25c.piece<0,4>() != 0) {
    uVar5 = 1;
  }
  else if (*(short *)(iVar6 + 0x3c) == 6) {
    uVar5 = ((g_standingOnMoby - iVar1) == 0);
  }
  else if (*(char *)(iVar6 + 0x22) == '\x01') {
    fVar2 = g_heroPosition.y - *(float *)(iVar1 + 0x14);
    fVar3 = g_heroPosition.x - *(float *)(iVar1 + 0x10);
    fVar4 = g_heroPosition.z - *(float *)(iVar1 + 0x18);
    if (*(float *)(iVar6 + 0x24) <= SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    if (*(int *)(iVar6 + 0xc) < 0) {
      if (*(int *)(iVar6 + 0x10) < 0) {
        if (*(int *)(iVar6 + 8) < 0) {
          if ((-1 < *(int *)(iVar6 + 0x14)) &&
             (iVar6 = PointInsideComplexPoly
                                (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar6 + 0x14)]->points,
                                 Splines[*(int *)(iVar6 + 0x14)]->cnt), iVar6 != 0)) {
            return 1;
          }
        }
        else {
          iVar6 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar6 + 8));
          if (iVar6 != 0) {
            return 1;
          }
        }
      }
      else {
        iVar6 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar6 + 0x10));
        if (iVar6 != 0) {
          return 1;
        }
      }
    }
    else {
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar6 + 0xc));
      if (iVar6 != 0) {
        return 1;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


// 0x003e488 (0x590 bytes)
// inlined: FastAtan2 @0x3e658, FastAtan2 @0x3e7ec
undefined8 ____Cam18_ModifyFollowRot(double param_1,double param_2,int param_3)

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
  dVar26 = (double)(float)GameCamera.field17_0x1b4.piece<12,4>();
  dVar25 = (double)(float)GameCamera.field17_0x1b4.piece<16,4>();
  iVar7 = *(int *)(*(int *)(ImportCameras + (int)((longlong)*(short *)(param_3 + 0x84) << 5) + 0x1c)
                  + 0x48);
  dVar24 = (double)(float)GameCamera.field17_0x1b4.piece<20,4>();
  if (param_1 != 0.0 || param_2 != 0.0) {
    dVar28 = (double)(*(float *)(iVar7 + 0x14) - *(float *)((int)GameCamera.pCurrentUpdCam + 0x34));
    dVar30 = (double)(*(float *)(iVar7 + 0x10) - *(float *)((int)GameCamera.pCurrentUpdCam + 0x30));
    dVar27 = (double)(*(float *)(iVar7 + 0x18) - *(float *)((int)GameCamera.pCurrentUpdCam + 0x38));
                    /* WARNING: Load size is inaccurate */
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
    fVar3 = SQRT((float)(dVar30 * dVar30 +
                        (double)(float)(dVar31 * dVar31 + (double)(float)(dVar29 * dVar29))));
    dVar27 = (double)fVar3;
    fVar6 = SQRT((float)(dVar25 * dVar25 +
                        (double)(float)(dVar26 * dVar26 + (double)(float)(dVar28 * dVar28))));
    dVar24 = (double)fVar6;
    if (param_2 != 0.0) {
      *(float *)((int)puVar8 + 0x7c) = fVar3;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = (float)(ABS(dVar27) - ABS(dVar19));
      uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        dVar22 = ABS(dVar19);
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar19 = ABS((double)*(float *)(puVar8 + 0x10));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        dVar19 = ABS(dVar27);
      }
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar20 = dVar23;
      if (0.0 < dVar22) {
        lVar12 = uVar10 - 0x110;
        lVar15 = uVar10 - 0x68;
        lVar14 = uVar10 - 0x78;
        lVar18 = 2;
        fVar4 = (float)(dVar19 - dVar22) / (float)(dVar19 + dVar22);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xb4) = fVar4;
        *(float *)((int)puVar8 + 0xac) = fVar4;
        *(float *)(puVar8 + 0x16) = fVar4;
        *(float *)(puVar8 + 0x15) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar5;
        *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar4;
        *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar4 * fVar4;
          iVar7 = (int)lVar14;
          lVar14 = lVar14 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar15 = uVar10 - 0x78;
        pfVar16 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar14 = lVar15;
        do {
          fVar4 = *pfVar16;
          fVar5 = pfVar16[1];
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar4;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar14 = 2;
        lVar12 = lVar13;
        dVar19 = dVar23;
        do {
          iVar7 = (int)lVar12;
          iVar9 = (int)lVar15;
          lVar12 = lVar12 + 0x10;
          lVar15 = lVar15 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0xa8)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar20 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(float *)(puVar8 + 0xe) = fVar6;
      *(float *)((int)puVar8 + 0x74) = fVar1;
      *(float *)(puVar8 + 0xf) = (float)(ABS(dVar24) - ABS(dVar21));
      uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
      dVar19 = ABS((double)*(float *)(puVar8 + 0xe));
      if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
        dVar19 = ABS(dVar21);
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      dVar21 = ABS((double)*(float *)((int)puVar8 + 0x74));
      if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
        dVar21 = ABS(dVar24);
      }
      fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      dVar22 = dVar23;
      if (0.0 < dVar19) {
        lVar12 = uVar10 - 0x110;
        lVar14 = uVar10 - 0x98;
        lVar15 = uVar10 - 0x88;
        lVar18 = 2;
        fVar3 = (float)(dVar21 - dVar19) / (float)(dVar21 + dVar19);
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0x94) = fVar3;
        *(float *)((int)puVar8 + 0x8c) = fVar3;
        *(float *)(puVar8 + 0x12) = fVar3;
        *(float *)(puVar8 + 0x11) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar6;
        *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar3;
        *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar3 * fVar3;
          iVar7 = (int)lVar14;
          lVar12 = lVar12 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar7 + 4) * fVar3 * fVar3;
          lVar15 = lVar15 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar18 = 4;
        lVar15 = uVar10 - 0x98;
        pfVar16 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar14 = lVar15;
        do {
          fVar3 = *pfVar16;
          fVar6 = pfVar16[1];
          pfVar16 = pfVar16 + 2;
          *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        lVar12 = 2;
        dVar19 = dVar23;
        do {
          iVar7 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar9 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar22 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar2);
      }
      dVar19 = (double)FastSubRots((float)dVar20,(float)dVar22);
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


// 0x003eaa8 (0x102c bytes)
// inlined: FastAtan2 @0x3ed58, FastAtan2 @0x3efdc, FastAtan2 @0x3f8e8
// strings: 0003ea9c: '@W\n=A' (raw)


void Cam18_ModifyFollowCam(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  short sVar23;
  short sVar24;
  uint uVar22;
  longlong lVar17;
  longlong lVar18;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong uVar28;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  undefined8 uVar34;
  ulonglong in_f30;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f31;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1b0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x38] = in_LR;
  puVar12[0x33] = in_f29;
  puVar12[0x34] = in_f30;
  puVar12[0x35] = in_f31;
  puVar12[0x32] = unaff_r31;
  iVar20 = ImportCameras;
  sVar24 = pCam->importCameraIdx;
  puVar12[0x31] = unaff_r30;
  pfVar7 = *(float **)(iVar20 + (int)((longlong)sVar24 << 5) + 0x1c);
  uVar30 = ZEXT48(pfVar7);
  fVar8 = pfVar7[0x14];
  puVar12[0x30] = unaff_r29;
  puVar12[0x2f] = unaff_r28;
  puVar12[0x2e] = unaff_r27;
  puVar12[0x2d] = unaff_r26;
  puVar12[0x2c] = unaff_r25;
  puVar12[0x2b] = unaff_r24;
  puVar12[0x2a] = unaff_r23;
  puVar12[0x29] = unaff_r22;
  if (fVar8 != 0.0) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    Cam0_ClearModCamera(pCam);
    return;
  }
  if ((int)pfVar7[0x11] < 0) {
    pMVar29 = g_MobyInstance + (int)pfVar7[10];
    if (0x7f < pMVar29->state) {
      *(undefined2 *)(pfVar7 + 8) = 0xffff;
      Cam0_ClearModCamera(pCam);
      return;
    }
  }
  else {
    puVar19 = (ushort *)(&g_MobyGroups)[(int)pfVar7[0x11]];
    if (puVar19 == (ushort *)0x0) {
      *(undefined2 *)(pfVar7 + 8) = 0xffff;
      Cam0_ClearModCamera(pCam);
      return;
    }
    while (pMVar29 = g_MobyInstance + (*puVar19 & 0x7fff), 0x7f < pMVar29->state) {
      uVar6 = *puVar19;
      puVar19 = puVar19 + 1;
      if ((short)uVar6 < 0) {
        *(undefined2 *)(pfVar7 + 8) = 0xffff;
        Cam0_ClearModCamera(pCam);
        return;
      }
    }
  }
  pfVar7[0x12] = (float)pMVar29;
  if ((*(short *)(pfVar7 + 0xf) == 6) && (g_standingOnMoby != pMVar29)) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    Cam0_ClearModCamera(pCam);
    return;
  }
  iVar20 = Cam0_SetModCamera(pCam);
  if (iVar20 < 1) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    return;
  }
  iVar21 = Cam18_IsTriggered(pCam);
  iVar20 = ImportCameras;
  sVar24 = pCam->importCameraIdx;
  if (iVar21 == 0) {
    *(undefined2 *)(pfVar7 + 8) = 0;
    Cam0_ClearModCamera(pCam);
    return;
  }
  if (*(short *)(pfVar7 + 0xf) == 5) {
                    /* WARNING: Load size is inaccurate */
    uVar9 = *GameCamera.pCurrentUpdCam;
    uVar10 = *(uint *)((int)GameCamera.pCurrentUpdCam + 4);
                    /* WARNING: Load size is inaccurate */
    fVar1 = ABS(*GameCamera.pCurrentUpdCam);
    fVar2 = ABS(*(float *)((int)GameCamera.pCurrentUpdCam + 4));
    *(float *)(puVar12 + 0x12) = fVar1 - fVar2;
    fVar8 = 0.0;
    uVar28 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 | (ulonglong)(uVar10 >> 0x1d) & 4;
    fVar3 = fVar1;
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar17 = uVar16 - 0x1a0;
      lVar25 = uVar16 - 0xdc;
      lVar26 = uVar16 - 0xcc;
      lVar31 = 2;
      fVar2 = (fVar2 - fVar3) / (fVar2 + fVar3);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar12 + 0x1c) = fVar2;
      *(float *)(puVar12 + 0x1b) = fVar2;
      *(float *)((int)puVar12 + 0xdc) = fVar2;
      *(float *)((int)puVar12 + 0xd4) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar3;
      *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar2;
      *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar2 * fVar2;
        iVar21 = (int)lVar25;
        lVar17 = lVar17 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar16 - 0xdc;
      pfVar27 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar25 = lVar26;
      do {
        fVar2 = *pfVar27;
        fVar3 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar2;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar17 = lVar18;
      do {
        iVar21 = (int)lVar17;
        iVar13 = (int)lVar26;
        lVar17 = lVar17 + 0x10;
        lVar26 = lVar26 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar21 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar4 + fVar1;
    }
    if (*(short *)(pfVar7 + 8) < 2) {
      pfVar7[0x10] = *(float *)(iVar20 + (int)((longlong)sVar24 << 5) + 0x18);
    }
    else if ((0x3e999999 < (uint)ABS(g_Pad.sticks.x)) || (0x3e999999 < (uint)ABS(g_Pad.sticks.y)))
    {
      pfVar7[0x10] = fVar8;
    }
    dVar37 = (double)pfVar7[0x10];
    dVar32 = (double)FastSubRots(pfVar7[0x10],fVar8);
    if (1.5707963705062866 < dVar32) {
      FastWrapRot((float)dVar37,3.1415927);
    }
  }
  if (*(short *)(pfVar7 + 0xf) == 4) {
                    /* WARNING: Load size is inaccurate */
    uVar9 = *GameCamera.pCurrentUpdCam;
    uVar10 = *(uint *)((int)GameCamera.pCurrentUpdCam + 4);
                    /* WARNING: Load size is inaccurate */
    fVar2 = ABS(*GameCamera.pCurrentUpdCam);
    fVar3 = ABS(*(float *)((int)GameCamera.pCurrentUpdCam + 4));
    fVar8 = *(float *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x18);
    dVar32 = (double)fVar8;
    *(float *)((int)puVar12 + 0x8c) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar28 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1e) & 2 |
             (ulonglong)(uVar10 >> 0x1d) & 4;
    fVar4 = fVar2;
    if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar17 = uVar16 - 0x1a0;
      lVar26 = uVar16 - 0xec;
      lVar25 = uVar16 - 0xfc;
      lVar31 = 2;
      fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x18) = fVar3;
      *(float *)(puVar12 + 0x17) = fVar3;
      *(float *)((int)puVar12 + 0xbc) = fVar3;
      *(float *)((int)puVar12 + 0xb4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar4;
      *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar3;
      *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar3 * fVar3;
        iVar20 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
        lVar26 = lVar26 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar26 = uVar16 - 0xfc;
      pfVar27 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar25 = lVar26;
      do {
        fVar3 = *pfVar27;
        fVar4 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
        lVar25 = lVar25 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar25 = 2;
      lVar17 = lVar18;
      do {
        iVar20 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar21 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar20 + 0xb4) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8)
                + *(float *)(iVar21 + 0xc);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    dVar37 = (double)FastSubRots(fVar8,fVar1);
    if (1.5707963705062866 < dVar37) {
      dVar32 = (double)FastWrapRot((float)dVar32,3.1415927);
    }
    pfVar7[0x10] = (float)dVar32;
  }
  bVar14 = true;
  uVar6 = *(ushort *)(pfVar7 + 8);
  sVar24 = *(short *)(pfVar7 + 0xf);
  dVar32 = 1.0;
  sVar23 = (short)(uVar6 + 1);
  *(short *)(pfVar7 + 8) = sVar23;
  fVar1 = animationSpeed;
  fVar8 = 400.5;
  if (sVar24 != 1) {
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar2 = 350.5;
    auVar44 = loadVectorLeftIndexed(0x18,0x3ea18);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  }
  else {
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar44 = loadVectorLeftIndexed(0x20,0x3ea18);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    fVar2 = fVar8;
    fVar8 = 560.5;
  }
  auVar41 = ZEXT416(0xffffffff);
  auVar39 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  fVar3 = animationSpeed * 300.5;
  auVar41 = ZEXT416(0xffffffff);
  auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  fVar8 = animationSpeed * fVar8;
  auVar41 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar40 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  fVar2 = animationSpeed * fVar2;
  auVar41 = ZEXT416(0xffffffff);
  auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  auVar41 = loadVectorLeftIndexed(0x1c,0x3ea18);
  auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar39
                      );
  auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar39 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar40,auVar44,auVar41);
  puVar12[0x1f] = (longlong)(int)(animationSpeed * 200.5);
  auVar44 = loadVectorLeftIndexed(0x14,0x3ea18);
  iVar20 = *(int *)((int)puVar12 + 0xfc);
  auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  puVar12[0x1f] = (longlong)(int)fVar3;
  auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar9 = *(uint *)((int)puVar12 + 0xfc);
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar39
                      );
  puVar12[0x1f] = (longlong)(int)fVar8;
  uVar10 = *(uint *)((int)puVar12 + 0xfc);
  puVar12[0x1f] = (longlong)(int)fVar2;
  auVar38 = vectorConvertToSignedFixedPointWordSaturate
                      (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0);
  auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
  iVar21 = *(int *)((int)puVar12 + 0xfc);
  auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
  if (sVar24 == 7) {
    uVar22 = uVar6 + 1;
    if (g_Pad.sticks.x != 0.0) {
      auVar44 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
      *(undefined2 *)(pfVar7 + 8) = uVar11;
      uVar22 = uVar9;
    }
    sVar24 = (short)uVar22;
    if ((int)uVar9 <= (int)sVar24) {
      *(short *)((int)pfVar7 + 0x3e) = *(short *)((int)pfVar7 + 0x3e) + 1;
      puVar12[0x1f] = (longlong)(int)(fVar1 * 30.5);
      if ((int)(uVar9 + *(int *)((int)puVar12 + 0xfc)) < (int)sVar24) {
        dVar32 = 0.10000000149011612;
      }
      else {
        bVar14 = false;
      }
    }
    if ((int)uVar10 <= (int)sVar24) {
      bVar14 = true;
      sVar24 = 1;
      *(undefined2 *)(pfVar7 + 8) = 1;
      *(undefined2 *)((int)pfVar7 + 0x3e) = 0;
    }
    if ((iVar20 < sVar24) && ((int)sVar24 < (int)uVar9)) {
      auVar44 = vectorSplatHalfWord(auVar38,1);
      auVar38 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
      *(undefined2 *)(pfVar7 + 8) = uVar11;
      uVar11 = storeVectorElementHalfWordIndexed(auVar38,0x3e,uVar30);
      *(undefined2 *)((int)pfVar7 + 0x3e) = uVar11;
    }
    goto LAB_0003f478;
  }
  if ((sVar24 != 1) && (sVar24 != 2)) {
    if (iVar20 < sVar23) {
      auVar44 = vectorSplatHalfWord(auVar38,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
      *(undefined2 *)(pfVar7 + 8) = uVar11;
    }
    goto LAB_0003f478;
  }
  Cam0_SetBumpFlags(0xb0);
  Cam0_SetCollData(dVar32,0x4028000000000000,0x3fbc28f5c0000000);
  if ((g_Pad.sticks.x != 0.0) || (uVar22 = (uint)*(ushort *)(pfVar7 + 8), g_Pad.sticks.y != 0.0))
  {
    auVar39 = vectorSplatHalfWord(auVar41,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar39,0x20,uVar30);
    *(undefined2 *)(pfVar7 + 8) = uVar11;
    uVar22 = uVar9;
  }
  if ((int)uVar9 <= (int)(short)uVar22) {
    sVar24 = *(short *)((int)pfVar7 + 0x3e) + 1;
    *(short *)((int)pfVar7 + 0x3e) = sVar24;
    if (iVar21 <= sVar24) {
      iVar21 = ____Cam18_ModifyFollowRot(0x403e000000000000,0,pCam);
      uVar22 = (uint)*(ushort *)(pfVar7 + 8);
      if (iVar21 != 0) {
        auVar44 = vectorSplatHalfWord(auVar44,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
        *(undefined2 *)(pfVar7 + 8) = uVar11;
        uVar22 = uVar10;
        goto LAB_0003f408;
      }
    }
    bVar14 = false;
  }
LAB_0003f408:
  sVar24 = (short)uVar22;
  if ((int)uVar10 <= (int)sVar24) {
    bVar14 = true;
    sVar24 = 1;
    *(undefined2 *)(pfVar7 + 8) = 1;
    *(undefined2 *)((int)pfVar7 + 0x3e) = 0;
  }
  if ((iVar20 < sVar24) && ((int)sVar24 < (int)uVar9)) {
    auVar44 = vectorSplatHalfWord(auVar38,1);
    auVar38 = vectorSplatHalfWord(auVar41,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar44,0x20,uVar30);
    *(undefined2 *)(pfVar7 + 8) = uVar11;
    uVar11 = storeVectorElementHalfWordIndexed(auVar38,0x3e,uVar30);
    *(undefined2 *)((int)pfVar7 + 0x3e) = uVar11;
  }
LAB_0003f478:
  dVar37 = (double)FastIntToDouble(iVar20);
  puVar12[0x1f] = (longlong)(int)*(short *)(pfVar7 + 8);
  bVar15 = false;
  dVar32 = (double)((float)((double)*pfVar7 * dVar32) * 0.017453292 *
                   (float)((double)(longlong)puVar12[0x1f] / dVar37));
  if ((bVar14) &&
     (iVar20 = ____Cam18_ModifyFollowRot
                         ((double)pfVar7[0xc],(double)pfVar7[0xb],0x3f91df46a0000000,
                          (double)(longlong)puVar12[0x1f],pCam), iVar20 != 0)) {
    sVar24 = *(short *)(pfVar7 + 0xf);
    bVar15 = true;
    if ((sVar24 == 4) || (sVar24 == 5)) {
      fVar8 = pfVar7[0x10] + 1.5707963;
      fVar1 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar1 = fVar8;
      }
      fVar2 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      fVar8 = fVar2 * fVar2;
      fVar1 = fVar8 * fVar8 * fVar2;
      fVar3 = fVar8 * fVar1;
      *(float *)(puVar12 + 0xe) =
           fVar8 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2;
      fVar8 = pfVar7[0x10];
      fVar1 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar1 = fVar8;
      }
      fVar2 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      fVar8 = fVar2 * fVar2;
      fVar1 = fVar8 * fVar8 * fVar2;
      fVar3 = fVar8 * fVar1;
      *(float *)((int)puVar12 + 0x74) =
           fVar8 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2;
      *(undefined4 *)(puVar12 + 0xf) = 0;
      Cam0_ForceLookAtDir(dVar32,0,uVar16 - 0x140);
    }
    else if (sVar24 == 3) {
      sVar24 = *(short *)(pfVar7 + 8);
      puVar12[0x1f] = (longlong)(int)(animationSpeed * 90.5);
      if ((int)sVar24 < *(int *)((int)puVar12 + 0xfc)) {
        dVar37 = (double)FastIntToDouble(dVar32,*(int *)((int)puVar12 + 0xfc));
        puVar12[0x1f] = (longlong)(int)*(short *)(pfVar7 + 8);
        dVar32 = (double)(float)(dVar32 * (double)(float)((double)(longlong)puVar12[0x1f] / dVar37))
        ;
      }
      Cam0_ForceLookAtPos(dVar32,0,&pMVar29->pos);
    }
    else {
      Cam0_ForceLookAtPos(dVar32,0,&pMVar29->pos);
    }
  }
  dVar32 = 0.0;
  if (pfVar7[0xd] != 0.0) {
    Cam0_SetCamDist((double)pfVar7[0xd],0x3f689374c0000000,&DAT_0003ea18,0);
    Cam0_RunningAtCamOff();
  }
  if (pfVar7[0xe] != 0.0) {
    Cam0_SetCamHeight((double)pfVar7[0xe],0x3f689374c0000000);
  }
  if (pfVar7[0x13] != 0.0) {
    Cam0_SetCamOfsZ((double)pfVar7[0x13],0x3f747ae140000000,&DAT_0003ea18,0);
  }
  sVar24 = *(short *)(pfVar7 + 0xf);
  if (sVar24 == 3) {
    Cam0_SetCamPull(0);
    Cam0_RunningAtCamOff();
    Cam0_disableLOS();
    dVar35 = 0.009999999776482582;
    uVar34 = 0x3fc99999a0000000;
    Cam0_SetPitchGainDamp(0x3f847ae140000000,0x3fc99999a0000000);
    sVar24 = *(short *)(pfVar7 + 8);
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 120.5);
    dVar37 = 0.029999999329447746;
    if ((int)sVar24 < *(int *)((int)puVar12 + 0xfc)) {
      dVar37 = (double)FastIntToDouble(0x3f9eb851e0000000,*(int *)((int)puVar12 + 0xfc));
      puVar12[0x1f] = (longlong)(int)*(short *)(pfVar7 + 8);
      dVar37 = (double)(float)((double)(float)((double)(longlong)puVar12[0x1f] / dVar37) *
                               0.019999999552965164 + dVar35);
    }
    Cam0_SetCPosGainDamp(dVar37,uVar34);
    sVar24 = *(short *)(pfVar7 + 0xf);
  }
  if ((sVar24 == 4) || (sVar24 == 5)) {
    Cam0_SetCamPull(0);
    Cam0_RunningAtCamOff();
    Cam0_disableLOS();
    uVar34 = Cam0_SetPitchGainDamp(0x3f947ae140000000,0x3fc99999a0000000);
    uVar36 = 0x3f689374c0000000;
    Cam0_SetCamDist(0x40175c2900000000,0x3f689374c0000000,uVar34,0);
    if (*(short *)(pfVar7 + 0xf) == 4) {
      fVar8 = (pMVar29->pos).x - g_heroPosition.x;
      fVar1 = (pMVar29->pos).y - g_heroPosition.y;
      dVar35 = ABS((double)fVar8);
      dVar33 = ABS((double)fVar1);
      *(float *)(puVar12 + 0x10) = fVar8;
      *(float *)((int)puVar12 + 0x84) = fVar1;
      *(float *)(puVar12 + 0x11) = (float)(dVar35 - dVar33);
      uVar30 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)(puVar12 + 0x10));
      if ((double)*(float *)(puVar12 + 0x11) - dVar32 < 0.0) {
        dVar37 = dVar33;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
      dVar33 = ABS((double)*(float *)((int)puVar12 + 0x84));
      if ((double)*(float *)(puVar12 + 0x11) - dVar32 < 0.0) {
        dVar33 = dVar35;
      }
      fVar1 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      if (dVar32 < dVar37) {
        lVar17 = uVar16 - 0x1a0;
        lVar25 = uVar16 - 0x11c;
        lVar26 = uVar16 - 0x10c;
        lVar31 = 2;
        fVar2 = (float)(dVar33 - dVar37) / (float)(dVar33 + dVar37);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar12 + 0x14) = fVar2;
        *(float *)(puVar12 + 0x13) = fVar2;
        *(float *)((int)puVar12 + 0x9c) = fVar2;
        *(float *)((int)puVar12 + 0x94) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar3;
        *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
        *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
          iVar20 = (int)lVar25;
          lVar17 = lVar17 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar26 = uVar16 - 0x11c;
        pfVar27 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar25 = lVar26;
        do {
          fVar2 = *pfVar27;
          fVar3 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
          lVar25 = lVar25 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar17 = 2;
        do {
          iVar20 = (int)lVar18;
          iVar21 = (int)lVar26;
          lVar18 = lVar18 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar20 + 0x94)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar8 + fVar1);
      }
      if ((bVar15) &&
         (dVar32 = (double)FastSubRots((float)dVar32,pfVar7[0x10]),
         1.919862151145935 < dVar32)) {
        if (pfVar7[0xd] == 0.0) {
          Cam0_SetCamDist(0x4020000000000000,uVar36,&DAT_0003ea18,0);
        }
        else {
          Cam0_SetCamDist((double)(pfVar7[0xd] + 3.36),uVar36,&DAT_0003ea18,0);
        }
      }
    }
    Cam0_SetBumpFlags(0xb0);
  }
  return;
}


// 0x003fad4 (0x38 bytes)
void Cam18_SetTriggered(UpdateCam *pCam)

{
  if (pCam->type == 0x12) {
    *(undefined4 *)
     (*(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c) + 0x50) = 1;
  }
  return;
}


// 0x003fb0c (0x78 bytes)
int ActivateCamera_18(UpdateCam *pCam,UpdateCam *pCurr)

{
  int iVar1;
  
  iVar1 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) && (-1 < *(short *)(iVar1 + 0x20))) {
    Cam18_ModifyFollowCam(pCam);
  }
  *(undefined4 *)(iVar1 + 0x50) = 0;
  return 0;
}


// 0x003fb84 (0x4 bytes)
void STUB_0003fb84(...)

{
  return;
}


// 0x003fb88 (0x4 bytes)
void STUB_0003fb88(...)

{
  return;
}


// 0x003fb8c (0x4 bytes)
void STUB_0003fb8c(...)

{
  return;
}


