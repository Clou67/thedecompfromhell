// game/update/camera22.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x43e30-0x44a20
#include "game/update/camera22.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x0043e30 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e468 = 0x10000;
  return;
}


// 0x0043e48 (0x15c bytes)
int Cam22_IsHeroInVolume(UpdateCam *pCam)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((-1 < *(int *)(iVar2 + 0x28)) &&
     (iVar1 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar2 + 0x28)),
     iVar1 != 0)) {
    return 0;
  }
  if (*(int *)(iVar2 + 0xc) < 0) {
    if (*(int *)(iVar2 + 0x10) < 0) {
      if (*(int *)(iVar2 + 8) < 0) {
        if (*(int *)(iVar2 + 0x14) < 0) {
          return 0;
        }
        iVar2 = PointInsideComplexPoly
                          (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar2 + 0x14)]->points,
                           Splines[*(int *)(iVar2 + 0x14)]->cnt);
      }
      else {
        iVar2 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar2 + 8));
      }
    }
    else {
      iVar2 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar2 + 0x10));
    }
  }
  else {
    iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc));
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}


// 0x0043fc0 (0x5a4 bytes)
// inlined: FastAtan2 @0x441a4, FastAtan2 @0x44338
undefined8 ____Cam22_ModifyFollowRot(double param_1,double param_2,int param_3)

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
  dVar26 = (double)(float)GameCamera.field17_0x1b4.piece<12,4>();
  dVar25 = (double)(float)GameCamera.field17_0x1b4.piece<16,4>();
  dVar24 = (double)(float)GameCamera.field17_0x1b4.piece<20,4>();
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
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
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
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
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


// 0x0044598 (0x3fc bytes)
void Cam22_ModifyFollowCam(UpdateCam *pCam)

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
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
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
  iVar11 = Cam0_SetModCamera(pCam);
  if (iVar11 < 1) {
    *(undefined2 *)(pfVar2 + 8) = 0;
    return;
  }
  iVar11 = Cam22_IsHeroInVolume(pCam);
  if (iVar11 == 0) {
    *(undefined2 *)(pfVar2 + 8) = 0;
    Cam0_ClearModCamera(pCam);
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
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  auVar21 = vectorShiftLeftIntegerWord(auVar23,auVar23);
  auVar20 = ZEXT416(0xffffffff);
  auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
  auVar20 = loadVectorLeftIndexed(8,0x44564);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  auVar21 = vectorShiftLeftIntegerWord(auVar23,auVar23);
  auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
  auVar20 = loadVectorLeftIndexed(0xc,0x44564);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar21
                      );
  iVar11 = (int)(fVar8 * 200.5);
  auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
  Cam0_SetCollData(0x3ff0000000000000,0x4028000000000000,0x3fbc28f5c0000000);
  uVar19 = 0;
  if ((g_Pad.sticks.x != 0.0) || (uVar14 = (uint)*(ushort *)(pfVar2 + 8), g_Pad.sticks.y != 0.0))
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
    auVar20 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    sVar15 = (short)iVar11;
    uVar5 = storeVectorElementHalfWordIndexed(auVar21,0x20,uVar16);
    *(undefined2 *)(pfVar2 + 8) = uVar5;
    uVar6 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x3c,uVar16);
    *(undefined4 *)((uint)(pfVar2 + 0xf) & 0xfffffffc) = uVar6;
  }
  dVar17 = (double)FastIntToDouble(sVar15);
  dVar18 = (double)FastIntToDouble(iVar11);
  if (bVar7) {
    Cam0_ForceLookAtPos
              ((double)(*pfVar2 * 0.017453292 * (float)(dVar17 / dVar18)),uVar19,
               (uVar13 + ((ulonglong)(uint)fVar3 & 0x1ffffff) * 0x80 & 0xffffffff) + 0x30);
  }
  if (pfVar2[0xd] != 0.0) {
    Cam0_SetCamDist((double)pfVar2[0xd],0x3f689374c0000000,&DAT_00044564,0);
    Cam0_RunningAtCamOff();
  }
  if (pfVar2[0xe] != 0.0) {
    Cam0_SetCamHeight((double)pfVar2[0xe],0x3f689374c0000000);
  }
  if (pfVar2[0x11] != 0.0) {
    Cam0_SetCamOfsZ((double)pfVar2[0x11],0x3f747ae140000000,&DAT_00044564,0);
  }
  return;
}


// 0x0044994 (0x80 bytes)
int ActivateCamera_22(UpdateCam *pCam,UpdateCam *pCurr)

{
  if (((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) &&
      (-1 < *(short *)(*(int *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c)
                      + 0x20))) && (g_heroType == '\x02')) {
    Cam22_ModifyFollowCam(pCam);
  }
  return -1;
}


// 0x0044a14 (0x4 bytes)
void STUB_00044a14(...)

{
  return;
}


// 0x0044a18 (0x4 bytes)
void STUB_00044a18(...)

{
  return;
}


// 0x0044a1c (0x4 bytes)
void STUB_00044a1c(...)

{
  return;
}


