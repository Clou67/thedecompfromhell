// game/update/camera12.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x38640-0x39294
#include "game/update/camera12.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0038640 (0x14 bytes)
void SECTION_HEADER_CAMERA12(void)

{
  DAT_0071d78c = 0x10000;
  return;
}


// 0x0038658 (0x80 bytes)
int Cam12_IsHeroInVolume(int param_1,Vec4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < 0) {
    if (*(int *)(param_1 + 0xc) < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = MB_IsPntInCuboid(param_2,(longlong)*(int *)(param_1 + 0xc));
    }
  }
  else {
    iVar1 = PointInsideComplexPoly
                      (param_2,(Vec4 *)Splines[*(int *)(param_1 + 0x14)]->points,
                       Splines[*(int *)(param_1 + 0x14)]->cnt);
  }
  return iVar1;
}


// 0x00386e8 (0x4ac bytes)
// inlined: FastRSqrt @0x387e8, FastRSqrt @0x38874, FastRSqrt @0x38a2c, FastRSqrt @0x38adc
void Cam12_000386e8(float *param_1)

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
  int iVar11;
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
  GPiece<16> local_50;
  
  fVar6 = param_1[0x1c];
  iVar11 = *(int *)((int)fVar6 + 0x60);
  fVar5 = *(float *)((int)fVar6 + 100);
  fVar4 = (float)GameCamera.field17_0x1b4.piece<12,4>() * fVar5 + *(float *)(iVar11 + 0x10);
  fVar8 = (float)GameCamera.field17_0x1b4.piece<16,4>() * fVar5 + *(float *)(iVar11 + 0x14);
  fVar7 = (float)GameCamera.field17_0x1b4.piece<20,4>() * fVar5 + *(float *)(iVar11 + 0x18);
  fVar5 = *(float *)(iVar11 + 0x1c);
  dVar19 = (double)(*(float *)(iVar11 + 0x14) - *(float *)((int)fVar6 + 0x34));
  dVar13 = (double)(float)GameCamera.field17_0x1b4.piece<16,4>();
  dVar20 = (double)(*(float *)(iVar11 + 0x10) - *(float *)((int)fVar6 + 0x30));
  dVar12 = (double)(float)GameCamera.field17_0x1b4.piece<12,4>();
  dVar18 = (double)(*(float *)(iVar11 + 0x18) - *(float *)((int)fVar6 + 0x38));
  dVar14 = (double)(float)GameCamera.field17_0x1b4.piece<20,4>();
  dVar21 = 0.0;
  dVar16 = (double)*(float *)((int)fVar6 + 0x70);
  dVar17 = (double)*(float *)((int)fVar6 + 0x74);
  fVar6 = *(float *)((int)fVar6 + 0x78);
  dVar15 = (double)(float)(dVar18 * dVar14 +
                          (double)(float)(dVar20 * dVar12 + (double)(float)(dVar19 * dVar13)));
  fVar1 = -(float)(dVar13 * dVar15 - dVar19);
  fVar9 = -(float)(dVar12 * dVar15 - dVar20);
  fVar2 = -(float)(dVar14 * dVar15 - dVar18);
  fVar3 = fVar2 * fVar2 + fVar9 * fVar9 + fVar1 * fVar1;
  dVar15 = dVar21;
  dVar18 = dVar21;
  dVar19 = dVar21;
  if (SQRT(fVar3) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar3);
    fVar10 = -(fVar3 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar3 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar3 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar19 = (double)(fVar9 * fVar10);
    dVar18 = (double)(fVar1 * fVar10);
    dVar15 = (double)(fVar2 * fVar10);
  }
  fVar1 = (float)(dVar14 * dVar19 - (double)(float)(dVar12 * dVar15));
  fVar2 = (float)(dVar13 * dVar15 - (double)(float)(dVar14 * dVar18));
  fVar3 = (float)(dVar12 * dVar18 - (double)(float)(dVar13 * dVar19));
  fVar9 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar12 = dVar21;
  dVar13 = dVar21;
  dVar14 = dVar21;
  if (SQRT(fVar9) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar9);
    fVar10 = -(fVar9 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar9 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar9 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar14 = (double)(fVar2 * fVar10);
    dVar13 = (double)(fVar1 * fVar10);
    dVar12 = (double)(fVar3 * fVar10);
  }
  param_1[0xf] = fVar5;
  iVar11 = CAMERA_COLL_FLAGS;
  param_1[0xc] = fVar4 - ((float)(dVar18 * dVar12 - (double)(float)(dVar15 * dVar13)) * fVar6 +
                         (float)(dVar19 * dVar16 + (double)(float)(dVar14 * dVar17)));
  param_1[0xd] = fVar8 - ((float)(dVar15 * dVar14 - (double)(float)(dVar19 * dVar12)) * fVar6 +
                         (float)(dVar18 * dVar16 + (double)(float)(dVar13 * dVar17)));
  param_1[0xe] = fVar7 - ((float)(dVar19 * dVar13 - (double)(float)(dVar18 * dVar14)) * fVar6 +
                         (float)(dVar15 * dVar16 + (double)(float)(dVar12 * dVar17)));
  iVar11 = CollLine(local_50,param_1 + 0xc,iVar11,0,0);
  dVar15 = (double)(float)GameCamera.field17_0x1b4.piece<0,4>();
  dVar18 = (double)(float)GameCamera.field17_0x1b4.piece<4,4>();
  dVar19 = (double)GameCamera.field16_0x1b0;
  fVar6 = param_1[0xc];
  fVar1 = param_1[0xe];
  fVar2 = param_1[0xd];
  if (iVar11 != 0) {
    fVar2 = g_CollOutput.ip.y - fVar8;
    fVar6 = g_CollOutput.ip.x - fVar4;
    fVar1 = g_CollOutput.ip.z - fVar7;
    dVar12 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2);
    if (dVar12 == dVar21) {
      param_1[0xc] = fVar4;
      param_1[0xd] = fVar8;
      param_1[0xe] = fVar7;
      param_1[0xf] = fVar5;
      fVar6 = fVar4;
      fVar1 = fVar7;
      fVar2 = fVar8;
    }
    else {
      param_1[0xf] = fVar5;
      fVar3 = (float)((double)(float)(dVar12 - 0.5) / dVar12);
      fVar6 = fVar6 * fVar3 + fVar4;
      fVar2 = fVar2 * fVar3 + fVar8;
      fVar1 = fVar1 * fVar3 + fVar7;
      param_1[0xc] = fVar6;
      param_1[0xd] = fVar2;
      param_1[0xe] = fVar1;
    }
  }
  fVar8 = fVar8 - fVar2;
  fVar4 = fVar4 - fVar6;
  fVar7 = fVar7 - fVar1;
  fVar6 = fVar7 * fVar7 + fVar4 * fVar4 + fVar8 * fVar8;
  dVar12 = dVar21;
  dVar13 = dVar21;
  dVar14 = dVar21;
  if ((double)SQRT(fVar6) != dVar21) {
    fVar1 = 1.0 / SQRT(fVar6);
    fVar1 = -(fVar6 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar6 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar6 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar14 = (double)(fVar4 * fVar1);
    dVar13 = (double)(fVar8 * fVar1);
    dVar12 = (double)(fVar7 * fVar1);
  }
  param_1[0x13] = fVar5;
  param_1[3] = fVar5;
  param_1[0x10] = (float)dVar14;
  param_1[0x11] = (float)dVar13;
  param_1[0x12] = (float)dVar12;
  fVar5 = (float)(dVar18 * dVar14 - (double)(float)(dVar19 * dVar12));
  fVar6 = (float)(dVar15 * dVar12 - (double)(float)(dVar18 * dVar13));
  fVar4 = (float)(dVar19 * dVar13 - (double)(float)(dVar15 * dVar14));
  *param_1 = (float)dVar14;
  param_1[1] = (float)dVar13;
  param_1[2] = (float)dVar12;
  param_1[7] = 0.0;
  fVar7 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
  dVar15 = dVar21;
  dVar18 = dVar21;
  if ((double)SQRT(fVar7) != dVar21) {
    fVar8 = 1.0 / SQRT(fVar7);
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar15 = (double)(fVar6 * fVar8);
    dVar21 = (double)(fVar5 * fVar8);
    dVar18 = (double)(fVar4 * fVar8);
  }
  param_1[4] = (float)dVar15;
  param_1[5] = (float)dVar21;
  param_1[6] = (float)dVar18;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar13 * dVar18 - (double)(float)(dVar12 * dVar21));
  param_1[9] = (float)(dVar12 * dVar15 - (double)(float)(dVar14 * dVar18));
  param_1[10] = (float)(dVar14 * dVar21 - (double)(float)(dVar13 * dVar15));
  return;
}


// 0x0038b94 (0x118 bytes)
void InitCamera_12(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 0x70) = DAT_0071d7b0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  uVar4 = DAT_0071d7b4;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x78) = uVar4;
  uVar4 = DAT_0071d7b8;
  *(MobyInstance **)(iVar2 + 0x60) = g_heroMobyPtr;
  puVar3 = *(undefined4 **)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 100) = uVar4;
  puVar3[4] = DAT_0071d7bc;
  uVar4 = DAT_0071d7c0;
  puVar3[6] = 0;
  puVar3[5] = uVar4;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  sVar1 = *(short *)(param_1 + 0x84);
  puVar3[9] = DAT_0071d7c4;
  iVar2 = ImportCameras;
  puVar3[10] = DAT_0071d7c8;
  puVar7 = (undefined4 *)(iVar2 + (int)((longlong)sVar1 << 5));
  puVar3[0xb] = 0;
  puVar3[8] = 0;
  puVar3[0x10] = DAT_0071d7cc;
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  puVar3[0xc] = *puVar7;
  puVar3[0xd] = uVar4;
  puVar3[0xe] = uVar5;
  puVar3[0xf] = uVar6;
  Cam12_000386e8(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}


// 0x0038cb8 (0x464 bytes)
// inlined: FastRSqrt @0x38dc8, FastRSqrt @0x38e54, FastRSqrt @0x38f98, FastRSqrt @0x39048
void Cam12_00038cb8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float *speed;
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
  double dVar21;
  float fVar22;
  float fVar23;
  
  fVar3 = param_1[0x1c];
  iVar4 = *(int *)((int)fVar3 + 0x60);
  dVar14 = (double)(*(float *)(iVar4 + 0x14) - *(float *)((int)fVar3 + 0x34));
  dVar15 = (double)(*(float *)(iVar4 + 0x10) - *(float *)((int)fVar3 + 0x30));
  dVar8 = (double)(float)GameCamera.field17_0x1b4.piece<0,4>();
  dVar7 = (double)GameCamera.field16_0x1b0;
  dVar13 = (double)(*(float *)(iVar4 + 0x18) - *(float *)((int)fVar3 + 0x38));
  dVar9 = (double)(float)GameCamera.field17_0x1b4.piece<4,4>();
  dVar17 = 0.0;
  fVar22 = *(float *)((int)fVar3 + 100);
  dVar21 = (double)((float)GameCamera.field17_0x1b4.piece<12,4>() * fVar22 + *(float *)(iVar4 + 0x10));
  dVar10 = (double)(float)(dVar13 * dVar9 +
                          (double)(float)(dVar15 * dVar7 + (double)(float)(dVar14 * dVar8)));
  dVar20 = (double)((float)GameCamera.field17_0x1b4.piece<16,4>() * fVar22 + *(float *)(iVar4 + 0x14));
  dVar18 = (double)*(float *)(iVar4 + 0x1c);
  dVar19 = (double)((float)GameCamera.field17_0x1b4.piece<20,4>() * fVar22 + *(float *)(iVar4 + 0x18));
  dVar11 = (double)*(float *)((int)fVar3 + 0x70);
  dVar12 = (double)*(float *)((int)fVar3 + 0x74);
  fVar1 = -(float)(dVar8 * dVar10 - dVar14);
  fVar5 = -(float)(dVar7 * dVar10 - dVar15);
  fVar23 = -(float)(dVar9 * dVar10 - dVar13);
  fVar22 = *(float *)((int)fVar3 + 0x78);
  fVar2 = fVar23 * fVar23 + fVar5 * fVar5 + fVar1 * fVar1;
  dVar10 = dVar17;
  dVar13 = dVar17;
  dVar14 = dVar17;
  speed = param_1;
  if (SQRT(fVar2) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar2);
    speed = (float *)&DAT_00038cac;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar14 = (double)(fVar5 * fVar6);
    dVar13 = (double)(fVar1 * fVar6);
    dVar10 = (double)(fVar23 * fVar6);
  }
  fVar1 = (float)(dVar9 * dVar14 - (double)(float)(dVar7 * dVar10));
  fVar23 = (float)(dVar7 * dVar13 - (double)(float)(dVar8 * dVar14));
  fVar2 = (float)(dVar8 * dVar10 - (double)(float)(dVar9 * dVar13));
  fVar5 = fVar23 * fVar23 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar7 = dVar17;
  dVar8 = dVar17;
  dVar9 = dVar17;
  if (SQRT(fVar5) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar5);
    speed = (float *)&DAT_00038cac;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar9 = (double)(fVar2 * fVar6);
    dVar8 = (double)(fVar1 * fVar6);
    dVar7 = (double)(fVar23 * fVar6);
  }
  dVar16 = (double)(float)(dVar20 - (double)((float)(dVar10 * dVar9 -
                                                    (double)(float)(dVar14 * dVar7)) * fVar22 +
                                            (float)(dVar13 * dVar11 +
                                                   (double)(float)(dVar8 * dVar12))));
  dVar15 = (double)(float)(dVar19 - (double)((float)(dVar14 * dVar8 -
                                                    (double)(float)(dVar13 * dVar9)) * fVar22 +
                                            (float)(dVar10 * dVar11 +
                                                   (double)(float)(dVar7 * dVar12))));
  fVar22 = Cam_InterpValues(param_1[0xc],
                            (float)(dVar21 - (double)((float)(dVar13 * dVar7 -
                                                             (double)(float)(dVar10 * dVar8)) *
                                                      fVar22 + (float)(dVar14 * dVar11 +
                                                                      (double)(float)(dVar9 * dVar12
                                                                                     )))),
                            *(float *)((int)fVar3 + 0x10),*(float *)((int)fVar3 + 0x14),
                            *(float *)((int)fVar3 + 0x18),speed);
  param_1[0xc] = fVar22;
  fVar22 = Cam_InterpValues(param_1[0xd],(float)dVar16,*(float *)((int)fVar3 + 0x10),
                            *(float *)((int)fVar3 + 0x14),*(float *)((int)fVar3 + 0x18),speed);
  param_1[0xd] = fVar22;
  fVar23 = Cam_InterpValues(param_1[0xe],(float)dVar15,*(float *)((int)fVar3 + 0x10),
                            *(float *)((int)fVar3 + 0x14),*(float *)((int)fVar3 + 0x18),speed);
  fVar22 = (float)(dVar19 - (double)fVar23);
  fVar3 = (float)(dVar20 - (double)param_1[0xd]);
  fVar1 = (float)(dVar21 - (double)param_1[0xc]);
  param_1[0xe] = fVar23;
  dVar7 = (double)(float)GameCamera.field17_0x1b4.piece<0,4>();
  dVar8 = (double)(float)GameCamera.field17_0x1b4.piece<4,4>();
  dVar9 = (double)GameCamera.field16_0x1b0;
  fVar23 = fVar22 * fVar22 + fVar1 * fVar1 + fVar3 * fVar3;
  dVar10 = dVar17;
  dVar13 = dVar17;
  dVar14 = dVar17;
  if ((double)SQRT(fVar23) != dVar17) {
    fVar2 = 1.0 / SQRT(fVar23);
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar14 = (double)(fVar1 * fVar2);
    dVar13 = (double)(fVar3 * fVar2);
    dVar10 = (double)(fVar22 * fVar2);
  }
  param_1[0x13] = (float)dVar18;
  param_1[3] = (float)dVar18;
  param_1[0x10] = (float)dVar14;
  param_1[0x11] = (float)dVar13;
  param_1[0x12] = (float)dVar10;
  fVar22 = (float)(dVar8 * dVar14 - (double)(float)(dVar9 * dVar10));
  fVar3 = (float)(dVar7 * dVar10 - (double)(float)(dVar8 * dVar13));
  fVar1 = (float)(dVar9 * dVar13 - (double)(float)(dVar7 * dVar14));
  *param_1 = (float)dVar14;
  param_1[1] = (float)dVar13;
  param_1[2] = (float)dVar10;
  param_1[7] = 0.0;
  fVar23 = fVar1 * fVar1 + fVar3 * fVar3 + fVar22 * fVar22;
  dVar7 = dVar17;
  dVar8 = dVar17;
  if ((double)SQRT(fVar23) != dVar17) {
    fVar2 = 1.0 / SQRT(fVar23);
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar23 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar7 = (double)(fVar3 * fVar2);
    dVar17 = (double)(fVar22 * fVar2);
    dVar8 = (double)(fVar1 * fVar2);
  }
  param_1[4] = (float)dVar7;
  param_1[5] = (float)dVar17;
  param_1[6] = (float)dVar8;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar13 * dVar8 - (double)(float)(dVar10 * dVar17));
  param_1[9] = (float)(dVar10 * dVar7 - (double)(float)(dVar14 * dVar8));
  param_1[10] = (float)(dVar14 * dVar17 - (double)(float)(dVar13 * dVar7));
  return;
}


// 0x003911c (0xa8 bytes)
undefined8 ActivateCamera_12(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 < 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 < 0) {
      return 0;
    }
    iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar2);
  }
  else {
    iVar2 = PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[iVar1]->points,Splines[iVar1]->cnt);
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}


// 0x00391c4 (0x20 bytes)
void UpdateCamera_12(void)

{
  Cam12_00038cb8();
  return;
}


// 0x00391e4 (0xb0 bytes)
void ExitCamera_12(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  iVar1 = *(int *)(iVar2 + 0x14);
  if (iVar1 < 0) {
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 < 0) goto LAB_00039278;
    iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar2);
  }
  else {
    iVar2 = PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[iVar1]->points,Splines[iVar1]->cnt);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_00039278:
  *(undefined2 *)(param_1 + 0x7e) = 3;
  return;
}


