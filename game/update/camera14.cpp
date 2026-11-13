// game/update/camera14.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x3a810-0x3b93c
#include "game/update/camera14.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "idol/fastfunc.h"

// 0x003a810 (0x14 bytes)
void SECTION_HEADER_CAMERA14(void)

{
  DAT_0071d894 = 0x10000;
  return;
}


// 0x003a838 (0x4a4 bytes)
// inlined: FastRSqrt @0x3aa30, FastRSqrt @0x3aae0, FastRSqrt @0x3ab8c
void Cam14_0003a838(float *param_1)

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
  float fVar18;
  
  fVar18 = DAT_00969f78;
  fVar17 = DAT_00969f74;
  fVar11 = g_heroGravityDir;
  fVar16 = g_heroPosition.z;
  fVar15 = g_heroPosition.y;
  fVar10 = g_heroPosition.x;
  fVar7 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar7 + 0xf4);
  fVar2 = *(float *)((int)fVar7 + 0xf0);
  fVar3 = *(float *)((int)fVar7 + 0xf8);
  fVar8 = SQRT(DAT_00969f78 * DAT_00969f78 +
               g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar4 = *(float *)((int)fVar7 + 0xe0);
  fVar5 = *(float *)((int)fVar7 + 0xd0);
  fVar6 = 0.0;
  param_1[0xf] = g_heroPosition.w;
  fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = -fVar4 / fVar8;
  fVar14 = -fVar5 / fVar9;
  fVar5 = fVar6;
  if (0.0 - fVar8 < 0.0) {
    fVar5 = fVar11 * fVar4;
  }
  fVar13 = fVar6;
  if (0.0 - fVar8 < 0.0) {
    fVar13 = fVar18 * fVar4;
  }
  fVar12 = fVar6;
  if (0.0 - fVar8 < 0.0) {
    fVar12 = fVar17 * fVar4;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar5 = fVar11 * fVar4;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar13 = fVar18 * fVar4;
  }
  if (fVar8 - 0.0 < 0.0) {
    fVar12 = fVar17 * fVar4;
  }
  fVar4 = fVar6;
  if (0.0 - fVar9 < 0.0) {
    fVar4 = fVar3 * fVar14;
  }
  fVar8 = fVar6;
  if (0.0 - fVar9 < 0.0) {
    fVar8 = fVar1 * fVar14;
  }
  fVar11 = fVar6;
  if (0.0 - fVar9 < 0.0) {
    fVar11 = fVar2 * fVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    fVar4 = fVar3 * fVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    fVar8 = fVar1 * fVar14;
  }
  if (fVar9 - 0.0 < 0.0) {
    fVar11 = fVar2 * fVar14;
  }
  fVar4 = fVar4 + fVar16 + fVar13;
  fVar8 = fVar8 + fVar15 + fVar12;
  fVar11 = fVar11 + fVar10 + fVar5;
  param_1[0xe] = fVar4;
  param_1[0xd] = fVar8;
  param_1[0xc] = fVar11;
  fVar3 = SQRT(DAT_00969f78 * DAT_00969f78 +
               g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  fVar2 = -*(float *)((int)fVar7 + 0xc4) / fVar3;
  fVar1 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar1 = DAT_00969f74 * fVar2;
  }
  fVar5 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar5 = g_heroGravityDir * fVar2;
  }
  fVar9 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar9 = DAT_00969f78 * fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar1 = DAT_00969f74 * fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar5 = g_heroGravityDir * fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar9 = DAT_00969f78 * fVar2;
  }
  fVar8 = (g_heroPosition.y + fVar1) - fVar8;
  fVar11 = (g_heroPosition.x + fVar5) - fVar11;
  fVar4 = (g_heroPosition.z + fVar9) - fVar4;
  fVar5 = fVar4 * fVar4 + fVar11 * fVar11 + fVar8 * fVar8;
  fVar2 = fVar6;
  fVar3 = fVar6;
  fVar1 = fVar6;
  if (SQRT(fVar5) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar5);
    fVar2 = -(fVar5 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar5 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar5 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar1 = fVar11 * fVar2;
    fVar3 = fVar8 * fVar2;
    fVar2 = fVar4 * fVar2;
  }
  *(float *)((int)fVar7 + 0x10c) = g_heroPosition.w;
  *(float *)((int)fVar7 + 0x100) = fVar1;
  *(float *)((int)fVar7 + 0x104) = fVar3;
  *(float *)((int)fVar7 + 0x108) = fVar2;
  fVar2 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar2) == 0.0) {
    *param_1 = fVar1;
    param_1[1] = *(float *)((int)fVar7 + 0x104);
    param_1[2] = *(float *)((int)fVar7 + 0x108);
    param_1[3] = *(float *)((int)fVar7 + 0x10c);
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    fVar2 = param_1[3];
    fVar4 = fVar6;
    fVar1 = fVar6;
    fVar3 = fVar6;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar2);
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar2 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar1 = fVar1 * fVar4;
    *param_1 = fVar1;
    fVar3 = *(float *)((int)fVar7 + 0x104) * fVar4;
    param_1[1] = fVar3;
    fVar4 = *(float *)((int)fVar7 + 0x108) * fVar4;
    param_1[2] = fVar4;
    fVar2 = *(float *)((int)fVar7 + 0x10c);
    param_1[3] = fVar2;
  }
  fVar5 = fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3;
  if (SQRT(fVar5) == 0.0) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar2 = param_1[3];
    param_1[0x12] = param_1[2];
    fVar3 = fVar6;
    fVar4 = fVar6;
    fVar1 = fVar6;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar5);
    fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar3 = fVar3 * fVar7;
    fVar1 = fVar1 * fVar7;
    fVar4 = fVar4 * fVar7;
  }
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar4;
  param_1[0x13] = fVar2;
  *param_1 = fVar1;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = fVar2;
  fVar5 = DAT_00969f78 * fVar1 - g_heroGravityDir * fVar4;
  fVar7 = DAT_00969f74 * fVar4 - DAT_00969f78 * fVar3;
  fVar8 = g_heroGravityDir * fVar3 - DAT_00969f74 * fVar1;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  fVar14 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5);
  fVar9 = -1.0 / fVar14;
  fVar2 = fVar6;
  if (0.0 - fVar14 < 0.0) {
    fVar2 = fVar7 * fVar9;
  }
  fVar10 = fVar6;
  if (0.0 - fVar14 < 0.0) {
    fVar10 = fVar5 * fVar9;
  }
  if (0.0 - fVar14 < 0.0) {
    fVar6 = fVar8 * fVar9;
  }
  if (fVar14 - 0.0 < 0.0) {
    fVar2 = fVar7 * fVar9;
  }
  if (fVar14 - 0.0 < 0.0) {
    fVar10 = fVar5 * fVar9;
  }
  if (fVar14 - 0.0 < 0.0) {
    fVar6 = fVar8 * fVar9;
  }
  param_1[4] = fVar2;
  param_1[5] = fVar10;
  param_1[6] = fVar6;
  param_1[10] = fVar1 * fVar10 - fVar3 * fVar2;
  param_1[8] = fVar3 * fVar6 - fVar4 * fVar10;
  param_1[9] = fVar4 * fVar2 - fVar1 * fVar6;
  return;
}


// 0x003ace0 (0x1b8 bytes)
void InitCamera_14(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyInstance *pMVar10;
  undefined8 in_LR;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> local_60;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  iVar2 = *(int *)(param_1 + 0x70);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  iVar3 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(undefined4 *)(iVar2 + 0xc4) = 0x3fc00000;
  pMVar10 = g_heroMobyPtr;
  fVar6 = g_heroPosition.x;
  *(float *)(iVar2 + 0xb0) = g_heroPosition.x;
  fVar7 = g_heroPosition.y;
  *(MobyInstance **)(iVar2 + 0xc0) = pMVar10;
  *(float *)(iVar2 + 0xb4) = fVar7;
  fVar8 = g_heroPosition.z;
  pfVar4 = *(float **)(param_1 + 0x70);
  *(float *)(iVar2 + 0xb8) = g_heroPosition.z;
  fVar9 = g_heroPosition.w;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  fVar1 = *(float *)(iVar3 + 0x20);
  pfVar4[0x36] = fVar1;
  pfVar4[0x34] = fVar1;
  fVar1 = *(float *)(iVar3 + 0x24);
  pfVar4[8] = 0.01;
  pfVar4[0x38] = fVar1;
  pfVar4[9] = 0.2;
  pfVar4[10] = 0.0;
  pfVar4[7] = 0.0;
  pfVar4[6] = 0.0;
  pfVar4[5] = 0.0;
  pfVar4[4] = 0.0;
  *pfVar4 = fVar6;
  pfVar4[1] = fVar7;
  pfVar4[2] = fVar8;
  pfVar4[3] = fVar9;
  auVar11 = loadVectorLeftIndexed(in_LR,0x3acdc);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar12
                      );
  auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
  auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar5 = storeVectorElementWordIndexed
                    (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x30,
                     ZEXT48(pfVar4));
  *(undefined4 *)((uint)(pfVar4 + 0xc) & 0xfffffffc) = uVar5;
  pfVar4[0x48] = 0.0;
  pfVar4[0x46] = 0.0;
  pfVar4[0x47] = 0.0;
  pfVar4[0x49] = fVar8;
  pfVar4[0x44] = 0.0;
  pfVar4[0x45] = 0.0;
  FastEulerToMtx(&local_50,local_60);
  pfVar4[0x3c] = local_50;
  pfVar4[0x3d] = local_4c;
  pfVar4[0x3e] = local_48;
  pfVar4[0x3f] = local_44;
  Cam14_0003a838(param_1);
  *(undefined2 *)(param_1 + 0x7e) = 0;
  GameCamera.blender.reqInterpFrames = 0x78;
  return;
}


// 0x003ae98 (0x4 bytes)
void STUB_0003ae98(...)

{
  return;
}


// 0x003aeb8 (0x450 bytes)
// inlined: FastRSqrt @0x3af90, FastRSqrt @0x3b0fc, FastRSqrt @0x3b1a4, FastRSqrt @0x3b26c
void ____Cam14_RotateByStick(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *outQuat;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  iVar3 = *(int *)(param_1 + 0x70);
  dVar15 = 0.019999999552965164;
  dVar14 = 0.20000000298023224;
  dVar13 = 0.0;
  outQuat = (float *)(iVar3 + 0xf0);
  fVar16 = Cam_InterpValues(*(float *)(iVar3 + 0x120),g_Pad.sticks.x,0.02,0.2,0.0,(float *)0x960000
                           );
  *(float *)(iVar3 + 0x120) = fVar16;
  MB_RotateQuatAxisAngle(fVar16 * 0.034906585,outQuat,outQuat);
  fVar16 = *(float *)(iVar3 + 0xf4);
  fVar1 = *(float *)(iVar3 + 0xf0);
  fVar2 = *(float *)(iVar3 + 0xf8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar16 * fVar16;
  dVar8 = dVar13;
  dVar9 = dVar13;
  dVar11 = dVar13;
  if ((double)SQRT(fVar4) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar11 = (double)(fVar1 * fVar5);
    dVar9 = (double)(fVar16 * fVar5);
    dVar8 = (double)(fVar2 * fVar5);
  }
  *(float *)(iVar3 + 0xf0) = (float)dVar11;
  *(float *)(iVar3 + 0xf4) = (float)dVar9;
  *(float *)(iVar3 + 0xf8) = (float)dVar8;
  fVar16 = Cam_InterpValues(*(float *)(iVar3 + 0x128),g_Pad.sticks.y,(float)dVar15,(float)dVar14,
                            (float)dVar13,&g_Pad.sticks.x);
  *(float *)(iVar3 + 0x128) = fVar16;
  dVar9 = (double)(float)GameCamera.field17_0x1b4.piece<16,4>();
  dVar14 = (double)(float)GameCamera.field17_0x1b4.piece<12,4>();
  dVar15 = (double)(float)GameCamera.field17_0x1b4.piece<20,4>();
  dVar11 = (double)SQRT((float)(dVar15 * dVar15 +
                               (double)(float)(dVar14 * dVar14 + (double)(float)(dVar9 * dVar9))));
  dVar12 = (double)(float)((double)(float)(dVar15 * (double)*(float *)(iVar3 + 0xf8) +
                                          (double)(float)(dVar14 * (double)*(float *)(iVar3 + 0xf0)
                                                         + (double)(float)(dVar9 * (double)*(float *
                                                  )(iVar3 + 0xf4)))) / dVar11);
  dVar8 = dVar13;
  if (dVar13 - dVar11 < 0.0) {
    dVar8 = (double)(float)(dVar15 * dVar12);
  }
  dVar7 = dVar13;
  if (dVar13 - dVar11 < 0.0) {
    dVar7 = (double)(float)(dVar9 * dVar12);
  }
  dVar10 = dVar13;
  if (dVar13 - dVar11 < 0.0) {
    dVar10 = (double)(float)(dVar14 * dVar12);
  }
  if (dVar11 - dVar13 < 0.0) {
    dVar8 = (double)(float)(dVar15 * dVar12);
  }
  if (dVar11 - dVar13 < 0.0) {
    dVar7 = (double)(float)(dVar9 * dVar12);
  }
  if (dVar11 - dVar13 < 0.0) {
    dVar10 = (double)(float)(dVar14 * dVar12);
  }
  *(float *)(iVar3 + 0xf0) = (float)((double)*(float *)(iVar3 + 0xf0) - dVar10);
  *(float *)(iVar3 + 0xf4) = (float)((double)*(float *)(iVar3 + 0xf4) - dVar7);
  *(float *)(iVar3 + 0xf8) = (float)((double)*(float *)(iVar3 + 0xf8) - dVar8);
  MB_RotateQuatAxisAngle(-(fVar16 * DAT_0071d8cc),outQuat,outQuat);
  fVar16 = *(float *)(iVar3 + 0xf4);
  fVar1 = *(float *)(iVar3 + 0xf0);
  fVar2 = *(float *)(iVar3 + 0xf8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar16 * fVar16;
  dVar8 = dVar13;
  dVar9 = dVar13;
  dVar11 = dVar13;
  if ((double)SQRT(fVar4) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar11 = (double)(fVar1 * fVar5);
    dVar9 = (double)(fVar16 * fVar5);
    dVar8 = (double)(fVar2 * fVar5);
  }
  *(float *)(iVar3 + 0xf0) = (float)dVar11;
  *(float *)(iVar3 + 0xf4) = (float)dVar9;
  *(float *)(iVar3 + 0xf8) = (float)dVar8;
  fVar4 = g_heroPosition.w;
  fVar16 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if (DAT_00969fec == 0) {
    *(float *)(iVar3 + 0x124) = g_heroPosition.z;
  }
  else {
    fVar16 = *(float *)(iVar3 + 0x124);
  }
  fVar2 = fVar2 - *(float *)(param_1 + 0x34);
  fVar1 = fVar1 - *(float *)(param_1 + 0x30);
  fVar16 = (fVar16 + *(float *)(iVar3 + 0xc4)) - *(float *)(param_1 + 0x38);
  fVar5 = fVar16 * fVar16 + fVar1 * fVar1 + fVar2 * fVar2;
  dVar8 = dVar13;
  dVar9 = dVar13;
  if ((double)SQRT(fVar5) != dVar13) {
    fVar6 = 1.0 / SQRT(fVar5);
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar8 = (double)(fVar6 * fVar1);
    dVar13 = (double)(fVar6 * fVar2);
    dVar9 = (double)(fVar6 * fVar16);
  }
  *(float *)(iVar3 + 0x100) = (float)dVar8;
  *(float *)(iVar3 + 0x104) = (float)dVar13;
  *(float *)(iVar3 + 0x108) = (float)dVar9;
  *(float *)(iVar3 + 0x10c) = fVar4;
  return;
}


// 0x003b310 (0x26c bytes)
void Cam14_0003b310(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *speed;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  
  pfVar2 = *(float **)(param_1 + 0x70);
  if ((g_HeroRequestedCamType != 0x50) || (g_heroState == WALL_JUMP)) {
    pfVar2[0x49] = g_heroPosition.z;
  }
  fVar13 = pfVar2[0x3d];
  fVar1 = pfVar2[0x3c];
  fVar14 = pfVar2[0x3e];
  speed = (float *)&DAT_0003b308;
  fVar3 = SQRT(DAT_00969f78 * DAT_00969f78 +
               g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74);
  dVar10 = 0.0;
  fVar4 = SQRT(fVar14 * fVar14 + fVar1 * fVar1 + fVar13 * fVar13);
  fVar5 = -pfVar2[0x38] / fVar3;
  fVar6 = -pfVar2[0x34] / fVar4;
  dVar11 = dVar10;
  if (0.0 - fVar3 < 0.0) {
    dVar11 = (double)(DAT_00969f78 * fVar5);
  }
  dVar12 = dVar10;
  if (0.0 - fVar3 < 0.0) {
    dVar12 = (double)(g_heroGravityDir * fVar5);
  }
  dVar7 = dVar10;
  if (0.0 - fVar3 < 0.0) {
    dVar7 = (double)(DAT_00969f74 * fVar5);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar11 = (double)(DAT_00969f78 * fVar5);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar12 = (double)(g_heroGravityDir * fVar5);
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar7 = (double)(DAT_00969f74 * fVar5);
  }
  dVar8 = dVar10;
  if (0.0 - fVar4 < 0.0) {
    dVar8 = (double)(fVar14 * fVar6);
  }
  dVar9 = dVar10;
  if (0.0 - fVar4 < 0.0) {
    dVar9 = (double)(fVar13 * fVar6);
  }
  if (0.0 - fVar4 < 0.0) {
    dVar10 = (double)(fVar1 * fVar6);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar8 = (double)(fVar14 * fVar6);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar9 = (double)(fVar13 * fVar6);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar10 = (double)(fVar1 * fVar6);
  }
  fVar13 = Cam_InterpValues(*pfVar2,g_heroPosition.x,pfVar2[8],pfVar2[9],pfVar2[10],
                            (float *)&DAT_0003b308);
  *pfVar2 = fVar13;
  fVar13 = Cam_InterpValues(pfVar2[1],g_heroPosition.y,pfVar2[8],pfVar2[9],pfVar2[10],speed);
  pfVar2[1] = fVar13;
  fVar14 = Cam_InterpValues(pfVar2[2],pfVar2[0x49],pfVar2[8],pfVar2[9],pfVar2[10],speed);
  fVar13 = *pfVar2;
  fVar1 = pfVar2[1];
  pfVar2[2] = fVar14;
  *(float *)(param_1 + 0x38) = (float)(dVar8 + (double)(float)((double)fVar14 + dVar11));
  *(float *)(param_1 + 0x30) = (float)(dVar10 + (double)(float)((double)fVar13 + dVar12));
  *(float *)(param_1 + 0x34) = (float)(dVar9 + (double)(float)((double)fVar1 + dVar7));
  return;
}


// 0x003b588 (0x2d0 bytes)
// inlined: FastRSqrt @0x3b6e4, FastRSqrt @0x3b79c
void Cam14_0003b588(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  
  pfVar3 = (float *)param_1[0x1c];
  dVar17 = 0.0;
  dVar16 = (double)*pfVar3;
  dVar15 = (double)pfVar3[1];
  dVar14 = (double)pfVar3[2];
  fVar18 = Cam_InterpValues(pfVar3[0x2e],g_heroPosition.z,DAT_0071d8d0,DAT_0071d8d4,0.0,
                            (float *)&DAT_00720000);
  pfVar3[0x2e] = fVar18;
  fVar2 = (float)GameCamera.field17_0x1b4.piece<24,4>();
  dVar13 = (double)SQRT((float)GameCamera.field17_0x1b4.piece<20,4>() *
                        (float)GameCamera.field17_0x1b4.piece<20,4>() +
                        (float)GameCamera.field17_0x1b4.piece<12,4>() *
                        (float)GameCamera.field17_0x1b4.piece<12,4>() +
                        (float)GameCamera.field17_0x1b4.piece<16,4>() *
                        (float)GameCamera.field17_0x1b4.piece<16,4>());
  dVar7 = (double)(float)GameCamera.field17_0x1b4.piece<0,4>();
  dVar8 = (double)(float)GameCamera.field17_0x1b4.piece<4,4>();
  dVar9 = (double)GameCamera.field16_0x1b0;
  fVar18 = (float)((double)pfVar3[0x31] / dVar13);
  dVar12 = dVar17;
  if (dVar17 - dVar13 < 0.0) {
    dVar12 = (double)((float)GameCamera.field17_0x1b4.piece<16,4>() * fVar18);
  }
  dVar10 = dVar17;
  if (dVar17 - dVar13 < 0.0) {
    dVar10 = (double)((float)GameCamera.field17_0x1b4.piece<12,4>() * fVar18);
  }
  dVar11 = dVar17;
  if (dVar17 - dVar13 < 0.0) {
    dVar11 = (double)((float)GameCamera.field17_0x1b4.piece<20,4>() * fVar18);
  }
  if (dVar13 - dVar17 < 0.0) {
    dVar12 = (double)((float)GameCamera.field17_0x1b4.piece<16,4>() * fVar18);
  }
  if (dVar13 - dVar17 < 0.0) {
    dVar10 = (double)((float)GameCamera.field17_0x1b4.piece<12,4>() * fVar18);
  }
  if (dVar13 - dVar17 < 0.0) {
    dVar11 = (double)((float)GameCamera.field17_0x1b4.piece<20,4>() * fVar18);
  }
  fVar18 = (float)(dVar15 + dVar12) - param_1[0xd];
  fVar1 = (float)(dVar16 + dVar10) - param_1[0xc];
  fVar4 = (float)(dVar14 + dVar11) - param_1[0xe];
  fVar5 = fVar4 * fVar4 + fVar1 * fVar1 + fVar18 * fVar18;
  if ((double)SQRT(fVar5) == dVar17) {
    param_1[3] = (float)GameCamera.field17_0x1b4.piece<24,4>();
    *param_1 = fVar1;
    param_1[1] = fVar18;
    param_1[2] = fVar4;
    fVar2 = param_1[3];
    dVar12 = dVar17;
    dVar13 = dVar17;
    dVar14 = dVar17;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar5);
    param_1[3] = (float)GameCamera.field17_0x1b4.piece<24,4>();
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar5 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar14 = (double)(fVar1 * fVar6);
    dVar13 = (double)(fVar18 * fVar6);
    dVar12 = (double)(fVar4 * fVar6);
  }
  param_1[0x13] = fVar2;
  *param_1 = (float)dVar14;
  param_1[1] = (float)dVar13;
  param_1[2] = (float)dVar12;
  param_1[0x10] = (float)dVar14;
  fVar18 = (float)(dVar8 * dVar14 - (double)(float)(dVar9 * dVar12));
  fVar2 = (float)(dVar7 * dVar12 - (double)(float)(dVar8 * dVar13));
  fVar1 = (float)(dVar9 * dVar13 - (double)(float)(dVar7 * dVar14));
  param_1[0x11] = (float)dVar13;
  param_1[0x12] = (float)dVar12;
  param_1[7] = 0.0;
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar18 * fVar18;
  dVar7 = dVar17;
  dVar8 = dVar17;
  if ((double)SQRT(fVar4) != dVar17) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar7 = (double)(fVar2 * fVar5);
    dVar17 = (double)(fVar18 * fVar5);
    dVar8 = (double)(fVar1 * fVar5);
  }
  param_1[4] = (float)dVar7;
  param_1[5] = (float)dVar17;
  param_1[6] = (float)dVar8;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar13 * dVar8 - (double)(float)(dVar12 * dVar17));
  param_1[9] = (float)(dVar12 * dVar7 - (double)(float)(dVar14 * dVar8));
  param_1[10] = (float)(dVar14 * dVar17 - (double)(float)(dVar13 * dVar7));
  return;
}


// 0x003b858 (0x38 bytes)
undefined8 ActivateCamera_14(void)

{
  undefined8 uVar1;
  
  if (((g_HeroRequestedCamType == 0x50) && (g_heroState != WALL_JUMP)) ||
     (g_heroState == NEUTRAL_JUMP)) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x003b890 (0x34 bytes)
void UpdateCamera_14(undefined8 param_1)

{
  Cam14_0003b310();
  Cam14_0003b588(param_1);
  return;
}


// 0x003b8c4 (0x78 bytes)
void ExitCamera_14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c)
                  + 0xc);
  if ((-1 < iVar1) &&
     (iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)iVar1), iVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}


