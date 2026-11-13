// game/update/camera8.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x4b624-0x4d5e0
#include "game/update/camera8.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x004b624 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e838 = 0x10000;
  return;
}


// 0x004b660 (0x180 bytes)
void Cam8_UpdateTarget(int param_1)

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
  uVar12 = g_heroGravityDir.w;
  fVar11 = g_heroGravityDir.z;
  fVar10 = g_heroGravityDir.y;
  fVar9 = g_heroGravityDir.x;
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


// 0x004b7f0 (0x58 bytes)
void Cam8_SetParams
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


// 0x004b858 (0x4d4 bytes)
// inlined: FastRSqrt @0x4b8f4, FastRSqrt @0x4bb38, FastRSqrt @0x4bc00, FastRSqrt @0x4bc7c
void Cam8_CalcInitialPos(float *param_1)

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
  fVar2 = g_heroGravityDir.w;
  fVar7 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
               g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
  fVar6 = -1.0 / fVar7;
  fVar3 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar3 = g_heroGravityDir.y * fVar6;
  }
  fVar8 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = g_heroGravityDir.x * fVar6;
  }
  fVar12 = fVar4;
  if (0.0 - fVar7 < 0.0) {
    fVar12 = g_heroGravityDir.z * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar3 = g_heroGravityDir.y * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = g_heroGravityDir.x * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar12 = g_heroGravityDir.z * fVar6;
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


// 0x004bd38 (0x23c bytes)
void Cam8_InitParams(int param_1)

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


// 0x004bf90 (0x85c bytes)
// inlined: FastRSqrt @0x4c10c, FastRSqrt @0x4c1a0, FastRSqrt @0x4c334, FastRSqrt @0x4c464, FastRSqrt @0x4c648
void Cam8_UpdateRot(int param_1)

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
  local_d8 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                  g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
  if (local_d8 == 0.0) {
    local_d8 = 0.0;
    local_dc = 0.0;
    local_e0 = 0.0;
  }
  else {
    local_d8 = -1.0 / local_d8;
    local_e0 = g_heroGravityDir.x * local_d8;
    local_dc = g_heroGravityDir.y * local_d8;
    local_d8 = g_heroGravityDir.z * local_d8;
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
    MB_RotateQuatAxisAngle(fVar28,&local_c0,&local_d0);
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
    MB_RotateQuatAxisAngle(*(float *)(param_1 + 0x50),&local_b0,&local_b0);
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
    MB_RotateQuatAxisAngle(*(float *)(param_1 + 0x54),&local_b0,&local_b0);
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


// 0x004c828 (0xcac bytes)
// inlined: FastRSqrt @0x4cfc8, FastRSqrt @0x4d068, FastRSqrt @0x4d170, FastRSqrt @0x4d33c, FastRSqrt @0x4d3dc
void Cam8_UpdateCam(float *param_1)

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
  GPiece<40> local_f0;
  
  pMVar6 = g_heroMobyPtr;
  dVar29 = 0.0;
  iVar8 = 0;
  fVar4 = param_1[0x1c];
  fVar32 = SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                g_heroGravityDir.x * g_heroGravityDir.x + g_heroGravityDir.y * g_heroGravityDir.y);
  dVar31 = (double)*(float *)((int)fVar4 + 0x180);
  dVar26 = (double)*(float *)((int)fVar4 + 0x88);
  fVar1 = -1.0 / fVar32;
  dVar25 = dVar29;
  if (0.0 - fVar32 < 0.0) {
    dVar25 = (double)(g_heroGravityDir.x * fVar1);
  }
  dVar24 = dVar29;
  if (0.0 - fVar32 < 0.0) {
    dVar24 = (double)(g_heroGravityDir.z * fVar1);
  }
  dVar23 = dVar29;
  if (0.0 - fVar32 < 0.0) {
    dVar23 = (double)(g_heroGravityDir.y * fVar1);
  }
  if (fVar32 - 0.0 < 0.0) {
    dVar25 = (double)(g_heroGravityDir.x * fVar1);
  }
  if (fVar32 - 0.0 < 0.0) {
    dVar24 = (double)(g_heroGravityDir.z * fVar1);
  }
  if (fVar32 - 0.0 < 0.0) {
    dVar23 = (double)(g_heroGravityDir.y * fVar1);
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
      iVar7 = CollSphere(uVar27,local_f0);
      if (iVar7 != 0) {
        fVar32 = Cam_InterpValues(*(float *)((int)fVar4 + 0xf0),
                                  (float)((double)g_CollOutput.push.z - dVar26),0.05,0.2,(float)dVar29
                                  ,(float *)&g_CollOutput);
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
       ((int)(FLOAT_ORDER(g_heroGroundDist)) < 0x40000001)) {
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


// 0x004d4d4 (0x8 bytes)
int ActivateCamera_8(UpdateCam *pCam,UpdateCam *pCurr)

{
  return 0;
}


// 0x004d4dc (0xcc bytes)
void InitCamera_8(UpdateCam *pCam)

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
  MB_TransformToQuat(lVar2 + 0x40,lVar2);
  Cam8_InitParams(lVar2);
  return;
}


// 0x004d5a8 (0x34 bytes)
void UpdateCamera_8(UpdateCam *pCam)

{
  Cam8_UpdateTarget();
  Cam8_UpdateCam(pCam);
  return;
}


// 0x004d5dc (0x4 bytes)
void STUB_0004d5dc(...)

{
  return;
}


