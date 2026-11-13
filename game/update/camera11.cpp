// game/update/camera11.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x37818-0x38640
#include "game/update/camera11.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "idol/fastfunc.h"

// 0x0037818 (0x7c bytes)
void SECTION_HEADER_CAMERA11(void)

{
  undefined8 in_r0;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x37810);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_0071d6d8 = 0x10000;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_0092e48c = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffe48c,0x930000);
  auVar1 = loadVectorLeftIndexed(4,0x37810);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_0092e490 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffe490,0x930000);
  return;
}


// 0x00378a8 (0x33c bytes)
// inlined: FastRSqrt @0x37a88, FastRSqrt @0x37b44
void Cam11_000378a8(float *param_1)

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
  float fVar16;
  float fVar17;
  int iVar18;
  GPiece<16> local_20;
  
  fVar17 = g_heroPosition.w;
  fVar13 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar13 + 0x10);
  fVar14 = *(float *)((int)fVar13 + 0x90) * fVar1 + g_heroPosition.x;
  fVar16 = *(float *)((int)fVar13 + 0x94) * fVar1 + g_heroPosition.y;
  fVar15 = *(float *)((int)fVar13 + 0x98) * fVar1 + g_heroPosition.z;
  fVar1 = (g_heroMobyPtr->transform).v0.x;
  fVar2 = *(float *)((int)fVar13 + 0x20);
  fVar3 = (g_heroMobyPtr->transform).v0.y;
  fVar4 = (g_heroMobyPtr->transform).v0.z;
  fVar5 = (g_heroMobyPtr->transform).v2.x;
  fVar6 = *(float *)((int)fVar13 + 0x28);
  fVar7 = (g_heroMobyPtr->transform).v2.y;
  fVar8 = (g_heroMobyPtr->transform).v2.z;
  fVar9 = (g_heroMobyPtr->transform).v1.x;
  fVar10 = *(float *)((int)fVar13 + 0x24);
  fVar11 = (g_heroMobyPtr->transform).v1.y;
  fVar12 = (g_heroMobyPtr->transform).v1.z;
  param_1[0xf] = g_heroPosition.w;
  iVar18 = CAMERA_COLL_FLAGS;
  param_1[0xc] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2 + fVar14;
  param_1[0xd] = fVar11 * fVar10 + fVar7 * fVar6 + fVar3 * fVar2 + fVar16;
  param_1[0xe] = fVar12 * fVar10 + fVar8 * fVar6 + fVar4 * fVar2 + fVar15;
  iVar18 = CollLine(local_20,param_1 + 0xc,iVar18,0,0);
  fVar1 = param_1[0xc];
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xd];
  if (iVar18 != 0) {
    fVar3 = g_CollOutput.ip.y - fVar16;
    fVar1 = g_CollOutput.ip.x - fVar14;
    fVar2 = g_CollOutput.ip.z - fVar15;
    fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    if (fVar4 == 0.0) {
      param_1[0xc] = fVar14;
      param_1[0xd] = fVar16;
      param_1[0xe] = fVar15;
      param_1[0xf] = fVar17;
      fVar1 = fVar14;
      fVar2 = fVar15;
      fVar3 = fVar16;
    }
    else {
      param_1[0xf] = fVar17;
      fVar4 = (fVar4 - 0.5) / fVar4;
      fVar1 = fVar1 * fVar4 + fVar14;
      fVar3 = fVar3 * fVar4 + fVar16;
      fVar2 = fVar2 * fVar4 + fVar15;
      param_1[0xc] = fVar1;
      param_1[0xd] = fVar3;
      param_1[0xe] = fVar2;
    }
  }
  fVar16 = fVar16 - fVar3;
  fVar14 = fVar14 - fVar1;
  fVar15 = fVar15 - fVar2;
  fVar1 = 0.0;
  fVar5 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
  fVar4 = fVar1;
  fVar3 = fVar1;
  fVar2 = fVar1;
  if (SQRT(fVar5) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar5);
    fVar4 = -(fVar5 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar5 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar5 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar3 = fVar14 * fVar4;
    fVar2 = fVar16 * fVar4;
    fVar4 = fVar15 * fVar4;
  }
  param_1[0x10] = fVar3;
  param_1[0x11] = fVar2;
  param_1[0x12] = fVar4;
  param_1[0x13] = fVar17;
  *param_1 = fVar3;
  param_1[1] = fVar2;
  param_1[2] = fVar4;
  param_1[3] = fVar17;
  fVar8 = *(float *)((int)fVar13 + 0x98) * fVar3 - *(float *)((int)fVar13 + 0x90) * fVar4;
  fVar9 = *(float *)((int)fVar13 + 0x94) * fVar4 - *(float *)((int)fVar13 + 0x98) * fVar2;
  fVar7 = *(float *)((int)fVar13 + 0x90) * fVar2 - *(float *)((int)fVar13 + 0x94) * fVar3;
  param_1[7] = 0.0;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar5 = fVar1;
  fVar6 = fVar1;
  if (SQRT(fVar10) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar10);
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar1 = fVar9 * fVar6;
    fVar5 = fVar8 * fVar6;
    fVar6 = fVar7 * fVar6;
  }
  param_1[4] = fVar1;
  param_1[5] = fVar5;
  param_1[6] = fVar6;
  param_1[0xb] = 0.0;
  param_1[8] = fVar2 * fVar6 - fVar4 * fVar5;
  param_1[9] = fVar4 * fVar1 - fVar3 * fVar6;
  param_1[10] = fVar3 * fVar5 - fVar2 * fVar1;
  return;
}


// 0x0037be4 (0x160 bytes)
void InitCamera_11(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  pfVar1 = *(float **)(param_1 + 0x70);
  pfVar1[4] = DAT_0071d724;
  *pfVar1 = g_heroPosition.x;
  pfVar1[1] = g_heroPosition.y;
  pfVar1[2] = g_heroPosition.z;
  pfVar1[3] = g_heroPosition.w;
  iVar2 = *(int *)(param_1 + 0x70);
  fVar3 = -DAT_0071d6fc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(float *)(iVar2 + 0x20) = fVar3;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 0x40) = DAT_0071d708;
  uVar4 = DAT_0071d710;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x44) = uVar4;
  uVar4 = DAT_0071d70c;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = uVar4;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar2 + 100) = DAT_0071d714;
  uVar4 = DAT_0071d718;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x68) = uVar4;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  *(float *)(iVar2 + 0x90) = -g_heroGravityDir.x;
  *(float *)(iVar2 + 0x94) = -g_heroGravityDir.y;
  *(float *)(iVar2 + 0x98) = -g_heroGravityDir.z;
  uVar4 = g_heroGravityDir.w;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = uVar4;
  *(undefined4 *)(iVar2 + 0x78) = DAT_0071d71c;
  uVar4 = DAT_0071d720;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = uVar4;
  *(undefined4 *)(iVar2 + 0x84) = 0x3e860a92;
  *(undefined4 *)(iVar2 + 0x88) = 0x410938a5;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  Cam11_000378a8(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}


// 0x0037d68 (0x7e4 bytes)
// inlined: FastRSqrt @0x382e0, FastRSqrt @0x38480
void Cam11_00037d68(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float gain;
  float fVar5;
  uint uVar6;
  float *outQuat;
  int iVar7;
  MobyInstance *speed;
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
  float fVar18;
  float fVar19;
  float local_e0 [9];
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  fVar5 = param_1[0x1c];
  dVar16 = 0.0;
  local_e0[0] = -DAT_0071d6fc;
  outQuat = (float *)((int)fVar5 + 0x20);
  local_e0[1] = 0.0;
  local_e0[2] = 0.0;
  local_e0[3] = 0.0;
  local_e0[4] = 0.0;
  dVar10 = 1.0;
  local_e0[5] = 1.0;
  local_e0[6] = 0.0;
  local_e0[7] = 0.0;
  if ((uint)ABS(g_Pad.sticks.y) < 0x3d4cccce) {
    *(float *)((int)fVar5 + 0x20) = local_e0[0];
    *(undefined4 *)((int)fVar5 + 0x24) = 0;
    *(undefined4 *)((int)fVar5 + 0x28) = 0;
    *(undefined4 *)((int)fVar5 + 0x2c) = 0;
    dVar8 = dVar16;
  }
  else {
    fVar18 = DAT_0071d734;
    if ((int)g_Pad.sticks.y < 0) {
      fVar18 = DAT_0071d730;
    }
    MB_RotateQuatAxisAngle(-(g_Pad.sticks.y * fVar18),outQuat,local_e0);
    dVar8 = 0.03498000279068947;
  }
  local_e0[8] = (float)dVar16;
  local_bc = (float)dVar16;
  local_b8 = 0x3f800000;
  local_b4 = (float)dVar16;
  if ((uint)ABS(g_Pad.sticks.x) < 0x3d4cccce) {
    uVar6 = *(uint *)((int)fVar5 + 0xa0);
    iVar7 = FLOAT_ORDER(uVar6);
    if (uVar6 != 0) {
      dVar9 = 0.11659999936819077;
      if (dVar16 - dVar8 < 0.0) {
        dVar9 = dVar8;
      }
      if (dVar8 - dVar16 < 0.0) {
        dVar9 = dVar8;
      }
      dVar8 = dVar9;
      if (iVar7 < 1) {
        dVar9 = -(double)DAT_0071d73c;
      }
      else {
        dVar9 = (double)DAT_0071d73c;
      }
      dVar9 = (double)FastDiffRots((double)*(float *)((int)fVar5 + 0xa0),dVar9);
      *(float *)((int)fVar5 + 0xa0) = (float)dVar9;
      if ((iVar7 < 1) || (dVar16 <= dVar9)) {
        if ((iVar7 < 0) && (dVar16 < dVar9)) {
          *(float *)((int)fVar5 + 0xa0) = (float)dVar16;
          dVar9 = dVar16;
        }
      }
      else {
        *(float *)((int)fVar5 + 0xa0) = (float)dVar16;
        dVar9 = dVar16;
      }
      MB_RotateQuatAxisAngle((float)dVar9,outQuat,outQuat);
    }
  }
  else {
    dVar9 = 0.11659999936819077;
    if (dVar16 - dVar8 < 0.0) {
      dVar9 = dVar8;
    }
    if (dVar8 - dVar16 < 0.0) {
      dVar9 = dVar8;
    }
    dVar8 = (double)FastWrapRot
                              (*(float *)((int)fVar5 + 0xa0),DAT_0071d738 * g_Pad.sticks.x);
    MB_RotateQuatAxisAngle((float)dVar8,&local_a0,outQuat);
    fVar18 = *(float *)((int)fVar5 + 0x10);
    local_84 = g_heroPosition.w;
    local_90 = (g_heroMobyPtr->transform).v1.x * local_9c +
               (g_heroMobyPtr->transform).v2.x * local_98 +
               (g_heroMobyPtr->transform).v0.x * local_a0 + param_1[8] * fVar18 + g_heroPosition.x;
    local_8c = (g_heroMobyPtr->transform).v1.y * local_9c +
               (g_heroMobyPtr->transform).v2.y * local_98 +
               (g_heroMobyPtr->transform).v0.y * local_a0 + param_1[9] * fVar18 + g_heroPosition.y;
    local_88 = (g_heroMobyPtr->transform).v1.z * local_9c +
               (g_heroMobyPtr->transform).v2.z * local_98 +
               (g_heroMobyPtr->transform).v0.z * local_a0 + param_1[10] * fVar18 + g_heroPosition.z;
    iVar7 = CollLine(&local_90,param_1 + 0xc,CAMERA_COLL_FLAGS,0,0);
    if (iVar7 == 0) {
      *(float *)((int)fVar5 + 0xa0) = (float)dVar8;
      *(float *)((int)fVar5 + 0x20) = local_a0;
      *(float *)((int)fVar5 + 0x24) = local_9c;
      *(float *)((int)fVar5 + 0x28) = local_98;
      *(undefined4 *)((int)fVar5 + 0x2c) = local_94;
      dVar8 = dVar9;
    }
    else {
      MB_RotateQuatAxisAngle(*(float *)((int)fVar5 + 0xa0),outQuat,outQuat);
      dVar8 = dVar9;
    }
  }
  fVar18 = *(float *)((int)fVar5 + 0x10);
  dVar8 = (double)((float)((double)(float)GameCamera.camStatics.heroSpeed + dVar8) * 8.576329);
  dVar15 = (double)(param_1[8] * fVar18 + g_heroPosition.x);
  dVar14 = (double)(param_1[9] * fVar18 + g_heroPosition.y);
  dVar13 = (double)(param_1[10] * fVar18 + g_heroPosition.z);
  dVar9 = (double)*(float *)((int)fVar5 + 0x20);
  fVar18 = (g_heroMobyPtr->transform).v0.x;
  fVar1 = (g_heroMobyPtr->transform).v2.x;
  fVar2 = *(float *)((int)fVar5 + 0x28);
  dVar17 = (double)g_heroPosition.w;
  if (dVar10 - dVar8 < 0.0) {
    dVar8 = dVar10;
  }
  fVar3 = (g_heroMobyPtr->transform).v1.x;
  fVar4 = *(float *)((int)fVar5 + 0x24);
  gain = *(float *)((int)fVar5 + 0x40);
  dVar12 = (double)((g_heroMobyPtr->transform).v1.y * fVar4 +
                   (g_heroMobyPtr->transform).v2.y * fVar2 +
                   (float)((double)(g_heroMobyPtr->transform).v0.y * dVar9 + dVar14));
  dVar11 = (double)((g_heroMobyPtr->transform).v1.z * fVar4 +
                   (g_heroMobyPtr->transform).v2.z * fVar2 +
                   (float)((double)(g_heroMobyPtr->transform).v0.z * dVar9 + dVar13));
  fVar19 = (float)((double)(float)((double)DAT_0071d708 - (double)DAT_0071d70c) * dVar8 +
                  (double)DAT_0071d70c);
  if (gain <= fVar19) {
    speed = g_heroMobyPtr;
    if (gain < fVar19) {
      speed = (MobyInstance *)&DAT_00720000;
      gain = gain + DAT_0071d704;
      *(float *)((int)fVar5 + 0x40) = gain;
      fVar19 = DAT_0071d708;
      if (DAT_0071d708 < gain) {
        *(float *)((int)fVar5 + 0x40) = DAT_0071d708;
        gain = fVar19;
      }
    }
  }
  else {
    gain = gain - DAT_0071d704;
    *(float *)((int)fVar5 + 0x40) = gain;
    fVar19 = DAT_0071d70c;
    speed = (MobyInstance *)&DAT_00720000;
    if (gain < DAT_0071d70c) {
      *(float *)((int)fVar5 + 0x40) = DAT_0071d70c;
      gain = fVar19;
    }
  }
  fVar18 = Cam_InterpValues(param_1[0xc],
                            fVar3 * fVar4 + fVar1 * fVar2 + (float)((double)fVar18 * dVar9 + dVar15)
                            ,gain,*(float *)((int)fVar5 + 0x44),*(float *)((int)fVar5 + 0x48),
                            (float *)speed);
  param_1[0xc] = fVar18;
  fVar18 = Cam_InterpValues(param_1[0xd],(float)dVar12,*(float *)((int)fVar5 + 0x40),
                            *(float *)((int)fVar5 + 0x44),*(float *)((int)fVar5 + 0x48),
                            (float *)speed);
  param_1[0xd] = fVar18;
  fVar19 = Cam_InterpValues(param_1[0xe],(float)dVar11,*(float *)((int)fVar5 + 0x40),
                            *(float *)((int)fVar5 + 0x44),*(float *)((int)fVar5 + 0x48),
                            (float *)speed);
  fVar18 = (float)(dVar14 - (double)param_1[0xd]);
  fVar1 = (float)(dVar15 - (double)param_1[0xc]);
  fVar2 = (float)(dVar13 - (double)fVar19);
  param_1[0xe] = fVar19;
  dVar14 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar18 * fVar18);
  dVar8 = dVar16;
  dVar9 = dVar16;
  dVar13 = dVar16;
  if ((double)(float)SQRT(dVar14) != dVar16) {
    dVar8 = 1.0 / SQRT(dVar14);
    dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar8) * dVar8 - dVar10) *
                            (double)(float)(dVar8 * 0.5) + dVar8);
    dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar14 * dVar8) * dVar8 - dVar10) *
                            (double)(float)(dVar8 * 0.5) + dVar8);
    fVar19 = (float)(-(double)(float)((double)(float)(dVar14 * dVar8) * dVar8 - dVar10) *
                     (double)(float)(dVar8 * 0.5) + dVar8);
    dVar13 = (double)(fVar1 * fVar19);
    dVar9 = (double)(fVar18 * fVar19);
    dVar8 = (double)(fVar2 * fVar19);
  }
  dVar15 = (double)(float)(dVar8 * (double)param_1[0x12] +
                          (double)(float)(dVar13 * (double)param_1[0x10] +
                                         (double)(float)(dVar9 * (double)param_1[0x11])));
  dVar14 = dVar15;
  if (dVar15 - dVar16 < 0.0) {
    dVar14 = ABS(dVar15);
  }
  dVar11 = (double)(float)(dVar10 - dVar14);
  if ((double)(float)(dVar10 - dVar14) - dVar16 < 0.0) {
    dVar11 = dVar16;
  }
  dVar12 = dVar10;
  if (dVar15 - dVar16 < 0.0) {
    dVar12 = -1.0;
  }
  dVar14 = (double)Cam_InterpAngles(dVar16,-(double)(float)(-(double)(((float)((double)(float)(
                                                  dVar14 * dVar14) * dVar14) * DAT_007358cc +
                                                  (float)((double)(float)(dVar14 * dVar14) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar14 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar11) - 1.5707964) * dVar12 -
                                                  1.5707963705062866),(double)DAT_0071d714,
                                    (double)DAT_0071d718,dVar16,&DAT_00720000,&DAT_00720000,
                                    (int)fVar5 + 0x60);
  local_a4 = (float)dVar16;
  local_a8 = (float)((double)param_1[0x10] * dVar9 - (double)(float)((double)param_1[0x11] * dVar13)
                    );
  local_b0 = (float)((double)param_1[0x11] * dVar8 - (double)(float)((double)param_1[0x12] * dVar9))
  ;
  local_ac = (float)((double)param_1[0x12] * dVar13 - (double)(float)((double)param_1[0x10] * dVar8)
                    );
  MB_RotateQuatAxisAngle((float)dVar14,param_1 + 0x10,param_1 + 0x10);
  param_1[0x10] = (float)dVar13;
  param_1[0x11] = (float)dVar9;
  param_1[0x12] = (float)dVar8;
  param_1[0x13] = (float)dVar17;
  *param_1 = (float)dVar13;
  param_1[1] = (float)dVar9;
  param_1[2] = (float)dVar8;
  param_1[3] = (float)dVar17;
  fVar1 = *(float *)((int)fVar5 + 0x90);
  fVar18 = *(float *)((int)fVar5 + 0x98);
  fVar2 = *(float *)((int)fVar5 + 0x94);
  param_1[7] = (float)dVar16;
  fVar5 = (float)((double)fVar18 * dVar13 - (double)(float)((double)fVar1 * dVar8));
  fVar18 = (float)((double)fVar2 * dVar8 - (double)(float)((double)fVar18 * dVar9));
  fVar1 = (float)((double)fVar1 * dVar9 - (double)(float)((double)fVar2 * dVar13));
  dVar11 = (double)(fVar1 * fVar1 + fVar18 * fVar18 + fVar5 * fVar5);
  dVar14 = dVar16;
  dVar15 = dVar16;
  dVar17 = dVar16;
  if ((double)(float)SQRT(dVar11) != dVar16) {
    dVar14 = 1.0 / SQRT(dVar11);
    dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar14) * dVar14 - dVar10) *
                             (double)(float)(dVar14 * 0.5) + dVar14);
    dVar14 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar14) * dVar14 - dVar10) *
                             (double)(float)(dVar14 * 0.5) + dVar14);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar11 * dVar14) * dVar14 - dVar10) *
                    (double)(float)(dVar14 * 0.5) + dVar14);
    dVar17 = (double)(fVar18 * fVar2);
    dVar15 = (double)(fVar5 * fVar2);
    dVar14 = (double)(fVar1 * fVar2);
  }
  param_1[4] = (float)dVar17;
  param_1[5] = (float)dVar15;
  param_1[6] = (float)dVar14;
  param_1[0xb] = (float)dVar16;
  param_1[8] = (float)(dVar9 * dVar14 - (double)(float)(dVar8 * dVar15));
  param_1[9] = (float)(dVar8 * dVar17 - (double)(float)(dVar13 * dVar14));
  param_1[10] = (float)(dVar13 * dVar15 - (double)(float)(dVar9 * dVar17));
  return;
}


// 0x003854c (0x8 bytes)
undefined8 ActivateCamera_11(void)

{
  return 0;
}


// 0x0038560 (0xb8 bytes)
void UpdateCamera_11(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  Cam11_00037d68();
  Camera_CollSphereBump(0x3ff0000000000000,param_1 + 0x30);
  fVar1 = *(float *)(param_1 + 0x34) - g_heroPosition.y;
  fVar2 = *(float *)(param_1 + 0x30) - g_heroPosition.x;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if ((fVar3 < DAT_0071d72c) && (fVar3 != 0.0)) {
    fVar3 = (DAT_0071d72c - fVar3) / fVar3;
    *(float *)(param_1 + 0x30) = fVar2 * fVar3 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar1 * fVar3 + *(float *)(param_1 + 0x34);
  }
  return;
}


// 0x0038618 (0x28 bytes)
void ExitCamera_11(int param_1)

{
  if (g_HeroRequestedCamType != *(short *)(param_1 + 0x86)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}


