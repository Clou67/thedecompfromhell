// game/update/camera15.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x3b93c-0x3c818
#include "game/update/camera15.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x003b93c (0x14 bytes)
void SECTION_HEADER_CAMERA15(void)

{
  DAT_0071d924 = 0x10000;
  return;
}


// 0x003b950 (0x170 bytes)
void Cam15_0003b950(int param_1)

{
  Spline *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  Spline *pSVar9;
  
  iVar5 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (*(short *)(iVar5 + 0x28) == 0) {
    *(undefined2 *)(iVar5 + 0x28) = 1;
    if (-1 < *(int *)(iVar5 + 0x20)) {
      iVar8 = 0;
      pSVar1 = Splines[*(int *)(iVar5 + 0x20)];
      iVar6 = pSVar1->cnt;
      pSVar9 = pSVar1;
      if (0 < iVar6) {
        do {
          iVar8 = iVar8 + 1;
          pfVar7 = (float *)((int)pSVar1 + ((iVar8 - (iVar8 / iVar6) * iVar6) * 4 + 4) * 4);
          fVar2 = pSVar9->points[0].y - pfVar7[1];
          fVar3 = pSVar9->points[0].x - *pfVar7;
          fVar4 = pSVar9->points[0].z - pfVar7[2];
          pSVar9->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          iVar6 = pSVar1->cnt;
          pSVar9 = (Spline *)pSVar9->points;
        } while (iVar8 < iVar6);
      }
    }
    if (-1 < *(int *)(iVar5 + 0x24)) {
      iVar6 = 0;
      pSVar1 = Splines[*(int *)(iVar5 + 0x24)];
      iVar5 = pSVar1->cnt;
      pSVar9 = pSVar1;
      if (0 < iVar5) {
        do {
          iVar6 = iVar6 + 1;
          pfVar7 = (float *)((int)pSVar1 + ((iVar6 - (iVar6 / iVar5) * iVar5) * 4 + 4) * 4);
          fVar2 = pSVar9->points[0].y - pfVar7[1];
          fVar3 = pSVar9->points[0].x - *pfVar7;
          fVar4 = pSVar9->points[0].z - pfVar7[2];
          pSVar9->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          iVar5 = pSVar1->cnt;
          pSVar9 = (Spline *)pSVar9->points;
        } while (iVar6 < iVar5);
      }
    }
  }
  return;
}


// 0x003bad8 (0x2bc bytes)
// inlined: FastRSqrt @0x3bc34
void Cam15_0003bad8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Spline *pSVar6;
  float fVar7;
  float fVar8;
  undefined8 in_r8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> local_50;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  
  iVar5 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5) + 0x1c);
  dVar16 = 0.0;
  pSVar6 = Splines[*(int *)(iVar5 + 0x20)];
  MB_PathFollowToPos
            (0x406fe00000000000,(double)DAT_0071d948,0,pSVar6,&g_heroPosition,local_50,local_40,
             local_3c,in_r8,0);
  MB_PathMoveDist((double)*(float *)(iVar5 + 0x34),pSVar6,param_1 + 0xc,local_40,local_3c)
  ;
  fVar4 = g_heroPosition.w;
  fVar1 = g_heroPosition.y - param_1[0xd];
  fVar2 = g_heroPosition.x - param_1[0xc];
  fVar7 = (g_heroPosition.z + *(float *)(iVar5 + 0x18)) - param_1[0xe];
  fVar3 = fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1;
  if ((double)SQRT(fVar3) == dVar16) {
    *param_1 = fVar2;
    param_1[3] = fVar4;
    param_1[1] = fVar1;
    param_1[2] = fVar7;
    fVar4 = param_1[3];
    dVar9 = dVar16;
    dVar10 = dVar16;
    dVar11 = dVar16;
  }
  else {
    fVar8 = 1.0 / SQRT(fVar3);
    param_1[3] = g_heroPosition.w;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar9 = (double)(fVar2 * fVar8);
    dVar10 = (double)(fVar1 * fVar8);
    dVar11 = (double)(fVar7 * fVar8);
  }
  *param_1 = (float)dVar9;
  param_1[1] = (float)dVar10;
  param_1[2] = (float)dVar11;
  param_1[0x10] = (float)dVar9;
  param_1[0x11] = (float)dVar10;
  param_1[0x12] = (float)dVar11;
  param_1[0x13] = fVar4;
  fVar1 = (float)((double)g_heroGravityDir.z * dVar9 -
                 (double)(float)((double)g_heroGravityDir.x * dVar11));
  fVar2 = (float)((double)g_heroGravityDir.y * dVar11 - (double)(float)((double)g_heroGravityDir.z * dVar10));
  fVar3 = (float)((double)g_heroGravityDir.x * dVar10 -
                 (double)(float)((double)g_heroGravityDir.y * dVar9));
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  dVar15 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar4 = (float)(-1.0 / dVar15);
  dVar14 = dVar16;
  if (dVar16 - dVar15 < 0.0) {
    dVar14 = (double)(fVar2 * fVar4);
  }
  dVar13 = dVar16;
  if (dVar16 - dVar15 < 0.0) {
    dVar13 = (double)(fVar1 * fVar4);
  }
  dVar12 = dVar16;
  if (dVar16 - dVar15 < 0.0) {
    dVar12 = (double)(fVar3 * fVar4);
  }
  if (dVar15 - dVar16 < 0.0) {
    dVar14 = (double)(fVar2 * fVar4);
  }
  if (dVar15 - dVar16 < 0.0) {
    dVar13 = (double)(fVar1 * fVar4);
  }
  if (dVar15 - dVar16 < 0.0) {
    dVar12 = (double)(fVar3 * fVar4);
  }
  param_1[4] = (float)dVar14;
  param_1[5] = (float)dVar13;
  param_1[6] = (float)dVar12;
  param_1[10] = (float)(dVar9 * dVar13 - (double)(float)(dVar10 * dVar14));
  param_1[8] = (float)(dVar10 * dVar12 - (double)(float)(dVar11 * dVar13));
  param_1[9] = (float)(dVar11 * dVar14 - (double)(float)(dVar9 * dVar12));
  return;
}


// 0x003bd94 (0x114 bytes)
void InitCamera_15(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  puVar1[0x11] = 0x3fc00000;
  puVar1[0xc] = g_heroPosition.x;
  puVar1[0xd] = g_heroPosition.y;
  fVar3 = g_heroPosition.z;
  puVar1[0xf] = 0;
  puVar1[0xe] = fVar3;
  puVar1[0x14] = 0xc0947ae1;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[4] = 0x3c23d70a;
  puVar1[5] = 0x3e333333;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[9] = 0x3c23d70a;
  puVar1[10] = 0x3e99999a;
  puVar1[0xb] = 0;
  puVar1[8] = 0;
  puVar1[0x24] = 0;
  puVar1[0x26] = 0;
  Cam15_0003bad8(param_1);
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(float *)(iVar2 + 0x3c) = g_heroPosition.z;
  fVar3 = g_heroPosition.z;
  *(undefined2 *)(iVar2 + 0x2a) = 0;
  *(float *)(iVar2 + 0x2c) = fVar3;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}


// 0x003bef0 (0x64c bytes)
// inlined: FastRSqrt @0x3c1a8, FastRSqrt @0x3c3a4
void Cam15_0003bef0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *speed;
  undefined8 in_r8;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  
  fVar23 = param_1[0x1c];
  pfVar3 = *(float **)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x21) << 5) + 0x1c);
  dVar21 = 0.0;
  fVar22 = pfVar3[9];
  pSVar4 = Splines[(int)pfVar3[8]];
  if ((int)fVar22 < 0) {
    MB_PathFollowToPos
              (0x406fe00000000000,(double)DAT_0071d948,0,pSVar4,(int)fVar23 + 0x30,&local_70,
               local_60,local_5c,in_r8,0);
  }
  else {
    MB_PathFollowToPos
              (0x406fe00000000000,(double)DAT_0071d948,0,Splines[(int)fVar22],(int)fVar23 + 0x30,
               &local_70,local_60,local_5c,(int)fVar22 * 4,0);
  }
  MB_PathMoveDist((double)pfVar3[0xd],pSVar4,&local_70,local_60,local_5c);
  speed = (float *)&DAT_0003bea8;
  dVar19 = (double)local_6c;
  dVar17 = (double)local_68;
  dVar15 = 0.009999999776482582;
  dVar14 = 0.17499999701976776;
  fVar22 = Cam_InterpValues(param_1[0xc],local_70,0.01,0.175,(float)dVar21,(float *)&DAT_0003bea8);
  param_1[0xc] = fVar22;
  fVar22 = Cam_InterpValues(param_1[0xd],(float)dVar19,(float)dVar15,(float)dVar14,(float)dVar21,
                            speed);
  param_1[0xd] = fVar22;
  fVar22 = Cam_InterpValues(param_1[0xe],(float)dVar17,(float)dVar15,(float)dVar14,(float)dVar21,
                            speed);
  param_1[0xe] = fVar22;
  fVar22 = *(float *)((int)fVar23 + 0x30);
  fVar2 = *(float *)((int)fVar23 + 0x34);
  if (*(short *)((int)pfVar3 + 0x2a) == 0) {
    if (g_framesGroundedCnt == 0) {
      fVar23 = pfVar3[0xf];
    }
    else {
      fVar23 = *(float *)((int)fVar23 + 0x38);
      pfVar3[0xf] = fVar23;
      *(undefined2 *)((int)pfVar3 + 0x2a) = 1;
    }
  }
  else {
    fVar23 = pfVar3[0xf];
  }
  uVar20 = 0x3f747ae140000000;
  uVar18 = 0x3fc99999a0000000;
  fVar23 = Cam_InterpValues(pfVar3[0xb],fVar23 + pfVar3[6],0.005,0.2,(float)dVar21,
                            (float *)&DAT_0003bea8);
  pfVar3[0xb] = fVar23;
  fVar2 = fVar2 - param_1[0xd];
  fVar22 = fVar22 - param_1[0xc];
  fVar23 = fVar23 - param_1[0xe];
  fVar1 = fVar23 * fVar23 + fVar22 * fVar22 + fVar2 * fVar2;
  if ((double)SQRT(fVar1) == dVar21) {
    *param_1 = fVar22;
    param_1[3] = local_64;
    param_1[1] = fVar2;
    param_1[2] = fVar23;
    local_64 = param_1[3];
    dVar14 = dVar21;
    dVar15 = dVar21;
    dVar17 = dVar21;
  }
  else {
    fVar5 = 1.0 / SQRT(fVar1);
    param_1[3] = local_64;
    fVar5 = -(fVar1 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar1 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar1 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar17 = (double)(fVar22 * fVar5);
    dVar15 = (double)(fVar2 * fVar5);
    dVar14 = (double)(fVar23 * fVar5);
  }
  *param_1 = (float)dVar17;
  param_1[1] = (float)dVar15;
  param_1[2] = (float)dVar14;
  param_1[0x10] = (float)dVar17;
  param_1[0x11] = (float)dVar15;
  param_1[0x12] = (float)dVar14;
  param_1[0x13] = local_64;
  fVar22 = (float)((double)g_heroGravityDir.z * dVar17 -
                  (double)(float)((double)g_heroGravityDir.x * dVar14));
  fVar2 = (float)((double)g_heroGravityDir.y * dVar14 - (double)(float)((double)g_heroGravityDir.z * dVar15));
  fVar1 = (float)((double)g_heroGravityDir.x * dVar15 -
                 (double)(float)((double)g_heroGravityDir.y * dVar17));
  param_1[7] = 0.0;
  dVar16 = -1.0;
  param_1[0xb] = 0.0;
  dVar13 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar22 * fVar22);
  fVar23 = (float)(-1.0 / dVar13);
  dVar19 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar19 = (double)(fVar2 * fVar23);
  }
  dVar12 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar12 = (double)(fVar22 * fVar23);
  }
  dVar11 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar11 = (double)(fVar1 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar19 = (double)(fVar2 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar12 = (double)(fVar22 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar11 = (double)(fVar1 * fVar23);
  }
  param_1[4] = (float)dVar19;
  param_1[5] = (float)dVar12;
  param_1[6] = (float)dVar11;
  fVar23 = (float)(dVar19 * dVar19 + (double)(float)(dVar12 * dVar12));
  param_1[10] = (float)(dVar17 * dVar12 - (double)(float)(dVar15 * dVar19));
  param_1[8] = (float)(dVar15 * dVar11 - (double)(float)(dVar14 * dVar12));
  param_1[9] = (float)(dVar14 * dVar19 - (double)(float)(dVar17 * dVar11));
  fVar22 = g_heroRotation.z + 1.5707963;
  fVar2 = 3.1415925 - g_heroRotation.z;
  if (g_heroRotation.z - (3.1415925 - g_heroRotation.z) < 0.0) {
    fVar2 = g_heroRotation.z;
  }
  fVar1 = 3.1415925 - fVar22;
  if (fVar22 - (3.1415925 - fVar22) < 0.0) {
    fVar1 = fVar22;
  }
  fVar5 = -3.1415925 - g_heroRotation.z;
  if ((-3.1415925 - g_heroRotation.z) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = -3.1415925 - fVar22;
  if ((-3.1415925 - fVar22) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  fVar22 = fVar5 * fVar5;
  fVar1 = fVar2 * fVar2;
  fVar9 = fVar22 * fVar22 * fVar5;
  fVar7 = fVar1 * fVar1 * fVar2;
  fVar10 = fVar22 * fVar9;
  fVar8 = fVar1 * fVar7;
  dVar14 = dVar21;
  dVar15 = dVar21;
  if ((double)SQRT(fVar23) != dVar21) {
    fVar6 = 1.0 / SQRT(fVar23);
    fVar6 = -(fVar23 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar23 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    dVar15 = (double)(-(fVar23 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6);
    dVar14 = (double)(float)(dVar19 * dVar15);
    dVar15 = (double)(float)(dVar12 * dVar15);
  }
  fVar23 = param_1[0x1c];
  dVar14 = (double)Cam_InterpAngles((double)*(float *)((int)fVar23 + 0x90),
                                    (double)(*pfVar3 * 0.017453292 *
                                            (float)(dVar14 * (double)(fVar1 * fVar8 * 2.601887e-06 +
                                                                     fVar8 * -0.0001980741 +
                                                                     fVar7 * 0.0083330255 +
                                                                     fVar1 * fVar2 * -0.16666657 +
                                                                     fVar2) +
                                                   (double)(float)(dVar15 * (double)(fVar22 * fVar10
                                                                                     * 2.601887e-06
                                                                                    + fVar10 * 
                                                  -0.0001980741 +
                                                  fVar9 * 0.0083330255 +
                                                  fVar22 * fVar5 * -0.16666657 + fVar5)))),uVar20,
                                    uVar18,dVar21,&DAT_0003bea8,0,(int)fVar23 + 0x98);
  *(float *)((int)fVar23 + 0x90) = (float)dVar14;
  MB_RotateQuatAxisAngle((float)dVar14,param_1,param_1);
  dVar15 = (double)param_1[2];
  dVar17 = (double)param_1[1];
  dVar19 = (double)*param_1;
  fVar22 = (float)((double)g_heroGravityDir.z * dVar19 -
                  (double)(float)((double)g_heroGravityDir.x * dVar15));
  fVar2 = (float)((double)g_heroGravityDir.y * dVar15 - (double)(float)((double)g_heroGravityDir.z * dVar17));
  fVar1 = (float)((double)g_heroGravityDir.x * dVar17 -
                 (double)(float)((double)g_heroGravityDir.y * dVar19));
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  dVar13 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar22 * fVar22);
  fVar23 = (float)(dVar16 / dVar13);
  dVar14 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar14 = (double)(fVar2 * fVar23);
  }
  dVar16 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar16 = (double)(fVar22 * fVar23);
  }
  dVar12 = dVar21;
  if (dVar21 - dVar13 < 0.0) {
    dVar12 = (double)(fVar1 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar14 = (double)(fVar2 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar16 = (double)(fVar22 * fVar23);
  }
  if (dVar13 - dVar21 < 0.0) {
    dVar12 = (double)(fVar1 * fVar23);
  }
  param_1[4] = (float)dVar14;
  param_1[5] = (float)dVar16;
  param_1[6] = (float)dVar12;
  param_1[10] = (float)(dVar19 * dVar16 - (double)(float)(dVar17 * dVar14));
  param_1[8] = (float)(dVar17 * dVar12 - (double)(float)(dVar15 * dVar16));
  param_1[9] = (float)(dVar15 * dVar14 - (double)(float)(dVar19 * dVar12));
  return;
}


// 0x003c53c (0x14c bytes)
undefined8 ActivateCamera_15(Vec4 *point,int area)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  
  iVar3 = *(int *)(ImportCameras + (int)((longlong)*(short *)&point[8].y << 5) + 0x1c);
  if (((area != 0) && (*(short *)(area + 0x7e) == 0)) &&
     (*(byte *)&point[7].w <= *(byte *)(area + 0x7c))) {
    return 0;
  }
  Cam15_0003b950();
  if (((((*(int *)(iVar3 + 0xc) < 0) ||
        (iVar2 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar3 + 0xc)),
        iVar2 == 0)) &&
       ((*(int *)(iVar3 + 0x10) < 0 ||
        (iVar2 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar3 + 0x10)),
        iVar2 == 0)))) &&
      ((*(int *)(iVar3 + 8) < 0 ||
       (iVar2 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar3 + 8)),
       iVar2 == 0)))) &&
     ((*(int *)(iVar3 + 0x14) < 0 ||
      (iVar3 = PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar3 + 0x14)]->points,
                          Splines[*(int *)(iVar3 + 0x14)]->cnt), iVar3 == 0)))) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x003c688 (0x78 bytes)
void UpdateCamera_15(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  *(float *)(iVar1 + 0x30) = g_heroPosition.x;
  *(float *)(iVar1 + 0x34) = g_heroPosition.y;
  fVar3 = g_heroPosition.z;
  *(float *)(iVar1 + 0x38) = g_heroPosition.z;
  *(float *)(iVar1 + 0x3c) = g_heroPosition.w;
  *(float *)(iVar1 + 0x38) = fVar3 + *(float *)(iVar2 + 0x18);
  Cam15_0003bef0();
  return;
}


// 0x003c700 (0x118 bytes)
void ExitCamera_15(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ImportCameras + (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c);
  if (((((-1 < *(int *)(iVar2 + 0xc)) &&
        (iVar1 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar2 + 0xc)),
        iVar1 == 0)) ||
       ((-1 < *(int *)(iVar2 + 0x10) &&
        (iVar1 = MB_IsPntInCylinder(&g_heroPosition,(longlong)*(int *)(iVar2 + 0x10)),
        iVar1 == 0)))) ||
      ((-1 < *(int *)(iVar2 + 8) &&
       (iVar1 = MB_IsPntInSphere(&g_heroPosition,(longlong)*(int *)(iVar2 + 8)),
       iVar1 == 0)))) ||
     ((-1 < *(int *)(iVar2 + 0x14) &&
      (iVar2 = PointInsideComplexPoly
                         (&g_heroPosition,(Vec4 *)Splines[*(int *)(iVar2 + 0x14)]->points,
                          Splines[*(int *)(iVar2 + 0x14)]->cnt), iVar2 == 0)))) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}


