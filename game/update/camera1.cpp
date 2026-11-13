// game/update/camera1.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x34ce0-0x35384
#include "game/update/camera1.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0034ce0 (0x14 bytes)
void SECTION_HEADER_CAMERA1(void)

{
  DAT_0071d5d8 = 0x10000;
  return;
}


// 0x0034cf8 (0x15c bytes)
void Cam1_InitPosRot(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  GPiece<16> local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = ImportCameras;
  iVar2 = param_1[0x1c];
  sVar1 = *(short *)(param_1 + 0x21);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0x3fc00000;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  puVar6 = (undefined4 *)(iVar7 + (int)((longlong)sVar1 << 5));
  *(undefined4 *)(iVar2 + 8) = 0x3dcccccd;
  *(undefined4 *)(iVar2 + 4) = 0x3ca3d70a;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  trapWord(0x10,(longlong)sVar1,0);
  if (-1 < sVar1) {
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(puVar6[7] + 0x18);
  }
  uVar3 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  param_1[0xc] = *puVar6;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  FastEulerToMtx1(&local_50,local_60);
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  param_1[4] = local_40;
  param_1[5] = local_3c;
  param_1[6] = local_38;
  param_1[7] = local_34;
  param_1[8] = local_30;
  param_1[9] = local_2c;
  param_1[10] = local_28;
  param_1[0xb] = local_24;
  param_1[0x10] = local_50;
  param_1[0x11] = local_4c;
  param_1[0x12] = local_48;
  param_1[0x13] = local_44;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  return;
}


// 0x0034e68 (0x368 bytes)
// inlined: FastRSqrt @0x34f00, FastRSqrt @0x35068, FastRSqrt @0x35130
void Cam1_UpdateCam(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  GPiece<24> local_30;
  
  fVar5 = param_1[0x1c];
  fVar1 = g_heroPosition.y - param_1[0xd];
  fVar3 = g_heroPosition.x - param_1[0xc];
  fVar4 = (g_heroPosition.z + *(float *)((int)fVar5 + 0x5c)) - param_1[0xe];
  dVar13 = 0.0;
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1;
  dVar8 = dVar13;
  dVar9 = dVar13;
  dVar10 = dVar13;
  if (SQRT(fVar2) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar2);
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar10 = (double)(fVar3 * fVar6);
    dVar9 = (double)(fVar1 * fVar6);
    dVar8 = (double)(fVar4 * fVar6);
  }
  dVar12 = 1.0;
  fVar1 = (float)(dVar8 * (double)param_1[2] +
                 (double)(float)(dVar10 * (double)*param_1 +
                                (double)(float)(dVar9 * (double)param_1[1])));
  fVar3 = fVar1;
  if (fVar1 - 0.0 < 0.0) {
    fVar3 = ABS(fVar1);
  }
  dVar8 = (double)(1.0 - fVar3);
  if ((double)(1.0 - fVar3) - 0.0 < 0.0) {
    dVar8 = dVar13;
  }
  dVar9 = dVar12;
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = -1.0;
  }
  Cam_InterpAngles(0,-(double)(float)(-(double)((fVar3 * fVar3 * fVar3 * DAT_007358cc +
                                                fVar3 * fVar3 * DAT_007358c8 +
                                                fVar3 * DAT_007358c4 + DAT_007358c0) *
                                                (float)SQRT(dVar8) - 1.5707964) * dVar9 -
                                     1.5707963705062866),(double)*(float *)((int)fVar5 + 4),
                   (double)*(float *)((int)fVar5 + 8),(double)*(float *)((int)fVar5 + 0xc),fVar5,
                   &DAT_00034e54,fVar5);
  MB_QuatBetweenVecs(param_1,param_1 + 0x10,local_30);
  fVar5 = param_1[1];
  fVar1 = *param_1;
  fVar3 = param_1[2];
  dVar8 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  if ((double)(float)SQRT(dVar8) == dVar13) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar4 = param_1[3];
    param_1[0x12] = param_1[2];
    dVar8 = dVar13;
    dVar9 = dVar13;
    dVar10 = dVar13;
  }
  else {
    dVar9 = 1.0 / SQRT(dVar8);
    fVar4 = param_1[3];
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar12) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar12) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar12) *
                    (double)(float)(dVar9 * 0.5) + dVar9);
    dVar10 = (double)(fVar1 * fVar2);
    dVar9 = (double)(fVar5 * fVar2);
    dVar8 = (double)(fVar3 * fVar2);
  }
  param_1[0x10] = (float)dVar10;
  param_1[0x11] = (float)dVar9;
  param_1[0x12] = (float)dVar8;
  param_1[0x13] = fVar4;
  *param_1 = (float)dVar10;
  param_1[1] = (float)dVar9;
  param_1[2] = (float)dVar8;
  param_1[3] = fVar4;
  fVar5 = (float)((double)(float)GameCamera.camStatics.heroUp.z * dVar10 -
                 (double)(float)((double)GameCamera.camStatics.heroUp.x * dVar8));
  fVar1 = (float)((double)(float)GameCamera.camStatics.heroUp.y * dVar8 -
                 (double)(float)((double)(float)GameCamera.camStatics.heroUp.z * dVar9));
  fVar3 = (float)((double)GameCamera.camStatics.heroUp.x * dVar9 -
                 (double)(float)((double)(float)GameCamera.camStatics.heroUp.y * dVar10));
  param_1[7] = 0.0;
  dVar7 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar5 * fVar5);
  dVar11 = dVar13;
  dVar14 = dVar13;
  if ((double)(float)SQRT(dVar7) != dVar13) {
    dVar13 = 1.0 / SQRT(dVar7);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - dVar12) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - dVar12) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - dVar12) *
                    (double)(float)(dVar13 * 0.5) + dVar13);
    dVar11 = (double)(fVar1 * fVar2);
    dVar13 = (double)(fVar5 * fVar2);
    dVar14 = (double)(fVar3 * fVar2);
  }
  param_1[4] = (float)dVar11;
  param_1[5] = (float)dVar13;
  param_1[6] = (float)dVar14;
  param_1[0xb] = 0.0;
  param_1[8] = (float)(dVar9 * dVar14 - (double)(float)(dVar8 * dVar13));
  param_1[9] = (float)(dVar8 * dVar11 - (double)(float)(dVar10 * dVar14));
  param_1[10] = (float)(dVar10 * dVar13 - (double)(float)(dVar9 * dVar11));
  return;
}


// 0x00351d0 (0xf4 bytes)
undefined8 ActivateCamera_1(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (((*(int *)(param_1 + 0x74) == 4) &&
      (((param_2 == 0 || (*(short *)(param_2 + 0x7e) != 0)) ||
       (*(byte *)(param_2 + 0x7c) < *(byte *)(param_1 + 0x7c))))) &&
     (iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc)),
     iVar1 != 0)) {
    iVar2 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*(int *)(iVar2 + 0xc));
    if (iVar2 != 0) {
      return 1;
    }
    GameCamera.blender.reqType = '\0';
    *(undefined2 *)((int)GameCamera.pCurrentUpdCam + 0x7e) = 2;
    GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.018;
    GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.018;
    return 1;
  }
  return 0;
}


// 0x00352c4 (0x20 bytes)
void InitCamera_1(void)

{
  Cam1_InitPosRot();
  return;
}


// 0x00352e4 (0x20 bytes)
void UpdateCamera_1(void)

{
  Cam1_UpdateCam();
  return;
}


// 0x0035304 (0x80 bytes)
void ExitCamera_1(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x74) == 4) &&
     (iVar1 = MB_IsPntInCuboid
                        (&g_heroPosition,
                         (longlong)
                         *(int *)(*(int *)(ImportCameras +
                                           (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c)
                                 + 0xc)), iVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}


