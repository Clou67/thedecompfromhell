// game/update/camera4.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x46854-0x47b84
#include "game/update/camera4.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x0046854 (0x14 bytes)
void SECTION_HEADER_CAMERA_UNK(void)

{
  DAT_0071e628 = 0x10000;
  return;
}


// 0x0046888 (0x12c bytes)
// inlined: FastRSqrt @0x468dc
// strings: 0096c074: 'None'

void ApplyHeroExternalMotion_4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (g_heroMobyPtr->transform).v2.y;
  fVar2 = (g_heroMobyPtr->transform).v2.x;
  fVar3 = (g_heroMobyPtr->transform).v2.z;
  fVar4 = 0.0;
  fVar7 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar6 = fVar4;
  fVar5 = fVar4;
  if (SQRT(fVar7) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar7);
    fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar7 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar4 = fVar2 * fVar6;
    fVar5 = fVar1 * fVar6;
    fVar6 = fVar3 * fVar6;
  }
  if (g_heroType == '\x02') {
    fVar1 = 9.5;
  }
  else if (g_heroType == '\x01') {
    if (Cheats[3] == '\0') {
      fVar1 = 0.9;
    }
    else {
      fVar1 = 1.2;
    }
  }
  else {
    fVar1 = 1.6;
  }
  fVar2 = fVar4 * fVar1 + g_heroPosition.x;
  *(float *)(param_1 + 0x30) = fVar2;
  fVar3 = fVar5 * fVar1 + g_heroPosition.y;
  *(float *)(param_1 + 0x34) = fVar3;
  fVar1 = fVar6 * fVar1 + g_heroPosition.z;
  *(float *)(param_1 + 0x38) = fVar1;
  *(float *)(param_1 + 0x3c) = g_heroPosition.w;
  *(float *)(param_1 + 0x30) = g_heroFrameMove.x + fVar2;
  *(float *)(param_1 + 0x34) = g_heroFrameMove.y + fVar3;
  *(float *)(param_1 + 0x38) = g_heroFrameMove.z + fVar1;
  *(undefined4 *)(param_1 + 0x3c) = g_heroFrameMove.w;
  return;
}


// 0x00469d0 (0x1fc bytes)
// inlined: FastRSqrt @0x46a30, FastRSqrt @0x46b28
// strings: 000469c8: '?fff`'


void SetLookCamInitPosRot(UpdateCam *pCam)

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
  void *pvVar11;
  
  fVar1 = (g_heroMobyPtr->transform).v2.y;
  fVar2 = (g_heroMobyPtr->transform).v2.x;
  fVar3 = (g_heroMobyPtr->transform).v2.z;
  fVar4 = 0.0;
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar6) == 0.0) {
    fVar5 = (g_heroMobyPtr->transform).v2.w;
    fVar1 = fVar4;
    fVar2 = fVar4;
    fVar3 = fVar4;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar6);
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar5 = (g_heroMobyPtr->transform).v2.w;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
    fVar2 = fVar2 * fVar7;
    fVar1 = fVar1 * fVar7;
    fVar3 = fVar3 * fVar7;
  }
  if (g_heroType == '\x02') {
    fVar6 = 9.5;
  }
  else {
    fVar6 = 1.6;
    if (g_heroType == '\x01') {
      fVar6 = (float)0x3f666666;
    }
  }
  pCam->pos[0] = fVar2 * fVar6 + g_heroPosition.x;
  pCam->pos[1] = fVar1 * fVar6 + g_heroPosition.y;
  pCam->pos[2] = fVar3 * fVar6 + g_heroPosition.z;
  pCam->pos[3] = g_heroPosition.w;
  pvVar11 = GameCamera.pLastUpdCam;
  pCam->mtx[8] = fVar2;
  pCam->mtx[9] = fVar1;
  pCam->mtx[10] = fVar3;
  pCam->mtx[0xb] = fVar5;
                    /* WARNING: Load size is inaccurate */
  fVar7 = fVar3 * *pvVar11 - fVar2 * *(float *)((int)pvVar11 + 8);
  fVar9 = fVar1 * *(float *)((int)pvVar11 + 8) - fVar3 * *(float *)((int)pvVar11 + 4);
  fVar8 = fVar2 * *(float *)((int)pvVar11 + 4) - fVar1 * *pvVar11;
  pCam->mtx[7] = 0.0;
  fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
  fVar6 = fVar4;
  fVar5 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar10);
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar4 = fVar9 * fVar6;
    fVar5 = fVar7 * fVar6;
    fVar6 = fVar8 * fVar6;
  }
  pCam->mtx[3] = 0.0;
  pCam->mtx[4] = fVar4;
  pCam->mtx[5] = fVar5;
  pCam->mtx[6] = fVar6;
  pCam->mtx[0] = fVar5 * fVar3 - fVar6 * fVar1;
  pCam->mtx[1] = fVar6 * fVar2 - fVar4 * fVar3;
  pCam->mtx[2] = fVar4 * fVar1 - fVar5 * fVar2;
  pCam->rot[3] = pCam->mtx[3];
  fVar1 = pCam->mtx[1];
  pCam->rot[0] = pCam->mtx[0];
  fVar2 = pCam->mtx[2];
  pCam->rot[1] = fVar1;
  pCam->rot[2] = fVar2;
  return;
}


// 0x0046bcc (0x5c bytes)
void InitLookCamera(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)pCam->control;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  SetLookCamInitPosRot(pCam);
  (pCam->activation).deactivate = 0;
  return;
}


// 0x0046c58 (0x754 bytes)
// inlined: FastRSqrt @0x46cfc, FastRSqrt @0x47248, FastRSqrt @0x472f0
void UpdateCamera_4(UpdateCam *pCam)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  MobyInstance *pMVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float local_70;
  float local_6c;
  float local_68;
  
  pfVar4 = (float *)pCam->control;
  ApplyHeroExternalMotion_4();
  fVar17 = (g_heroMobyPtr->transform).v2.y;
  local_70 = (g_heroMobyPtr->transform).v2.x;
  fVar1 = (g_heroMobyPtr->transform).v2.z;
  dVar13 = 0.0;
  fVar17 = fVar1 * fVar1 + local_70 * local_70 + fVar17 * fVar17;
  if (SQRT(fVar17) == 0.0) {
    local_68 = 0.0;
    local_6c = 0.0;
    local_70 = 0.0;
  }
  else {
    local_68 = 1.0 / SQRT(fVar17);
    local_68 = -(fVar17 * local_68 * local_68 - 1.0) * local_68 * 0.5 + local_68;
    local_68 = -(fVar17 * local_68 * local_68 - 1.0) * local_68 * 0.5 + local_68;
    local_68 = -(fVar17 * local_68 * local_68 - 1.0) * local_68 * 0.5 + local_68;
    local_70 = local_70 * local_68;
    local_6c = (g_heroMobyPtr->transform).v2.y * local_68;
    local_68 = (g_heroMobyPtr->transform).v2.z * local_68;
  }
  if ((GameCamera.blender.state == 0) && (g_heroInvisible == '\0')) {
    g_heroInvisible = '\x01';
  }
  fVar17 = g_Pad.sticks.z;
  if (g_Pad.sticks.z == -0.0) {
    fVar17 = g_Pad.sticks.x;
  }
  dVar8 = -(double)fVar17;
  if (dVar8 == 0.0) {
    dVar8 = (double)FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_Pad.downButtons & LEFT) << 0x20) >> 0x25 ^ 1);
  }
  if (dVar8 == dVar13) {
    dVar8 = (double)FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_Pad.downButtons & RIGHT) << 0x20) >> 0x25 ^ 1);
    dVar8 = -dVar8;
  }
  dVar15 = (double)((DAT_0071e64c - DAT_00931394) * ABS(*pfVar4) + DAT_00931394);
  fVar17 = Cam_InterpValues(*pfVar4,(float)dVar8,DAT_0071e650,DAT_0071e654,DAT_00931398,
                            (float *)0x930000);
  *pfVar4 = fVar17;
  if ((double)fVar17 != dVar13) {
    MB_RotateQuatAxisAngle((float)(dVar15 * (double)fVar17),pCam->mtx,pCam->mtx);
  }
  if ((g_heroFrameMove.w != 0.0) && (g_onMagnerail == 0)) {
    MB_RotateQuatAxisAngle(g_heroFrameMove.w,pCam->mtx,pCam->mtx);
  }
  dVar15 = -(double)g_Pad.sticks.w;
  dVar8 = -(double)g_Pad.sticks.y;
  if (dVar13 - dVar15 < 0.0) {
    dVar8 = dVar15;
  }
  if (dVar15 - dVar13 < 0.0) {
    dVar8 = dVar15;
  }
  if (dVar8 == dVar13) {
    dVar8 = (double)FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_Pad.downButtons & UP) << 0x20) >> 0x25 ^ 1);
  }
  if (dVar8 == dVar13) {
    dVar8 = (double)FastIntToDouble
                              ((ulonglong)(LZCOUNT(g_Pad.downButtons & DOWN) << 0x20) >> 0x25 ^ 1);
    dVar8 = -dVar8;
  }
  if ((GameCamera.blender.state != 0) && (DAT_0096bd70 == 2)) {
    dVar8 = dVar13;
  }
  if (g_GameSettings.CameraUpDown == 0) {
    dVar8 = -dVar8;
  }
  dVar15 = (double)((DAT_0071e64c - DAT_00931394) * ABS(pfVar4[2]) + DAT_00931394);
  fVar17 = Cam_InterpValues(pfVar4[2],(float)dVar8,DAT_0071e650,DAT_0071e654,DAT_00931398,
                            (float *)0x930000);
  pfVar4[2] = fVar17;
  if ((double)fVar17 != dVar13) {
    dVar16 = (double)(float)(dVar15 * (double)pfVar4[2]);
    dVar8 = (double)FastWrapRot(pfVar4[4],(float)(dVar15 * (double)pfVar4[2]));
    dVar8 = ABS(dVar8);
    if ((1.1170107126235962 < dVar8) && (ABS((double)pfVar4[4]) < dVar8)) {
      dVar15 = (double)FastDiffRots(dVar8,0x3ff1df46a0000000);
      dVar16 = (double)(float)(dVar16 + -(double)(float)(dVar16 * (double)(float)(dVar15 * 
                                                  2.86478853225708)));
    }
    pfVar7 = (float *)&DAT_00046c28;
    dVar14 = 0.004999999888241291;
    dVar15 = 0.20000000298023224;
    if ((dVar8 < 1.1152653694152832) || (pfVar7 = (float *)pfVar4[4], (int)pfVar7 < 1)) {
      fVar17 = Cam_InterpValues(pfVar4[5],(float)dVar13,0.005,0.2,(float)dVar13,pfVar7);
    }
    else {
      fVar17 = Cam_InterpValues(pfVar4[5],0.5,0.005,0.2,(float)dVar13,(float *)&DAT_00046c28);
    }
    pfVar4[5] = fVar17;
    pMVar6 = g_heroMobyPtr;
    fVar1 = pCam->mtx[1];
    fVar2 = pCam->mtx[0];
    fVar3 = pCam->pos[0];
    dVar12 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    dVar11 = (double)(fVar1 * (float)((double)fVar17 / dVar12));
    dVar9 = (double)(fVar2 * (float)((double)fVar17 / dVar12));
    dVar8 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar8 = dVar11;
    }
    dVar10 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar10 = dVar9;
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar8 = dVar11;
    }
    if (dVar12 - dVar13 < 0.0) {
      dVar10 = dVar9;
    }
    pCam->pos[1] = (float)((double)pCam->pos[1] + dVar8);
    pCam->pos[0] = (float)((double)fVar3 + dVar10);
    pfVar7 = (float *)CollSphere
                                (0x3fd3333340000000,(longlong)(int)pCam + 0x30,&DAT_00046c28,0x12,
                                 pMVar6);
    if (pfVar7 != (float *)0x0) {
      fVar17 = Cam_InterpValues(pfVar4[5],(float)dVar13,(float)dVar14,(float)dVar15,(float)dVar13,
                                pfVar7);
      pfVar4[5] = fVar17;
    }
    dVar8 = (double)FastWrapRot(pfVar4[4],(float)dVar16);
    if (1.4660766124725342 < ABS(dVar8)) {
      if (dVar8 <= dVar13) {
        dVar16 = (double)FastDiffRots(0xbff7750cc0000000,(double)pfVar4[4]);
      }
      else {
        dVar16 = (double)FastDiffRots(0x3ff7750cc0000000,(double)pfVar4[4]);
      }
    }
    MB_RotateQuatAxisAngle((float)dVar16,pCam->mtx,pCam->mtx);
    dVar8 = (double)FastWrapRot(pfVar4[4],(float)dVar16);
    pfVar4[4] = (float)dVar8;
  }
  fVar17 = pCam->mtx[1];
  fVar1 = pCam->mtx[0];
  fVar2 = pCam->mtx[2];
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar17 * fVar17;
  dVar8 = dVar13;
  dVar15 = dVar13;
  dVar16 = dVar13;
  if ((double)SQRT(fVar3) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar3);
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar16 = (double)(fVar1 * fVar5);
    dVar15 = (double)(fVar17 * fVar5);
    dVar8 = (double)(fVar2 * fVar5);
  }
  pCam->mtx[0] = (float)dVar16;
  pCam->mtx[1] = (float)dVar15;
  fVar17 = (float)((double)local_68 * dVar16 - (double)(float)((double)local_70 * dVar8));
  fVar1 = (float)((double)local_6c * dVar8 - (double)(float)((double)local_68 * dVar15));
  fVar2 = (float)((double)local_70 * dVar15 - (double)(float)((double)local_6c * dVar16));
  pCam->mtx[2] = (float)dVar8;
  pCam->mtx[7] = 0.0;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1 + fVar17 * fVar17;
  dVar14 = dVar13;
  dVar9 = dVar13;
  if ((double)SQRT(fVar3) != dVar13) {
    fVar5 = 1.0 / SQRT(fVar3);
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar3 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar14 = (double)(fVar1 * fVar5);
    dVar13 = (double)(fVar17 * fVar5);
    dVar9 = (double)(fVar2 * fVar5);
  }
  pCam->mtx[4] = (float)dVar14;
  pCam->mtx[5] = (float)dVar13;
  pCam->mtx[6] = (float)dVar9;
  pCam->mtx[0xb] = 0.0;
  pCam->mtx[8] = (float)(dVar15 * dVar9 - (double)(float)(dVar8 * dVar13));
  pCam->mtx[9] = (float)(dVar8 * dVar14 - (double)(float)(dVar16 * dVar9));
  pCam->mtx[10] = (float)(dVar16 * dVar13 - (double)(float)(dVar15 * dVar14));
  return;
}


// 0x00473f0 (0x4fc bytes)
int ActivateCamera_4(UpdateCam *pCam,UpdateCam *pCurr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  int iVar13;
  short sVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> local_50;
  GPiece<32> local_40;
  
  pvVar12 = GameCamera.pCurrentUpdCam;
  uVar4 = *(uint *)(ImportCameras + (int)((longlong)pCam->importCameraIdx << 5) + 0x1c);
  if ((g_HeroRequestedCamType == pCam->type) || (g_HeroRequestedCamType == 0x51)) {
    sVar14 = pCurr->type;
    if (((sVar14 == 10 || sVar14 == 0) || ((sVar14 == 0xe || (sVar14 == 2)))) &&
       ((sVar14 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86), sVar14 == 10 || sVar14 == 0 ||
        ((sVar14 == 0xe || (sVar14 == 2)))))) {
      iVar13 = CamCollGrid_FindPrimAtPnt
                         (0x3fd0000000000000,CONCAT44(g_heroPosition.x,g_heroPosition.y),
                          CONCAT44(g_heroPosition.z,g_heroPosition.w));
      if ((iVar13 != 0) && ((*(uint *)(iVar13 + 0x18) & 1) != 0)) {
        return 0;
      }
      *(undefined2 *)(uVar4 + 0x22) = 1;
      *(undefined4 *)(uVar4 + 0x24) = 0;
      sVar14 = *(short *)(uVar4 + 0x20) + 1;
      *(short *)(uVar4 + 0x20) = sVar14;
      if ((int)(animationSpeed * 7.5) <= (int)sVar14) {
        if (*(short *)((int)pvVar12 + 0x86) == 0) {
          (pCam->activation).priority = '\x05';
        }
        return 1;
      }
      Cam0_ForceLookAtDir(0x3fb1df46a0000000,0,local_50);
    }
    else {
      *(undefined2 *)(uVar4 + 0x20) = 0;
      *(undefined2 *)(uVar4 + 0x22) = 0;
    }
  }
  else {
    *(undefined2 *)(uVar4 + 0x20) = 0;
    if (*(short *)(uVar4 + 0x22) != 0) {
      *(undefined2 *)(uVar4 + 0x22) = 0;
                    /* WARNING: Load size is inaccurate */
      fVar1 = (g_heroMobyPtr->transform).v0.y;
      fVar2 = (g_heroMobyPtr->transform).v0.x;
      fVar3 = (g_heroMobyPtr->transform).v0.z;
      fVar7 = (float)GameCamera.camStatics.heroUpActual.z *
              *(float *)((int)GameCamera.pCurrentUpdCam + 8) +
              (float)GameCamera.camStatics.heroUpActual.x * *GameCamera.pCurrentUpdCam +
              (float)GameCamera.camStatics.heroUpActual.y *
              *(float *)((int)GameCamera.pCurrentUpdCam + 4);
      fVar6 = (float)GameCamera.camStatics.heroUpActual.z * fVar3 +
              (float)GameCamera.camStatics.heroUpActual.x * fVar2 +
              (float)GameCamera.camStatics.heroUpActual.y * fVar1;
      fVar8 = -((float)GameCamera.camStatics.heroUpActual.y * fVar7 -
               *(float *)((int)GameCamera.pCurrentUpdCam + 4));
      fVar9 = -((float)GameCamera.camStatics.heroUpActual.x * fVar7 - *GameCamera.pCurrentUpdCam);
      fVar1 = -((float)GameCamera.camStatics.heroUpActual.y * fVar6 - fVar1);
      fVar7 = -((float)GameCamera.camStatics.heroUpActual.z * fVar7 -
               *(float *)((int)GameCamera.pCurrentUpdCam + 8));
      fVar2 = -((float)GameCamera.camStatics.heroUpActual.x * fVar6 - fVar2);
      fVar3 = -((float)GameCamera.camStatics.heroUpActual.z * fVar6 - fVar3);
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar10 = fVar6 * SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8);
      fVar11 = fVar6;
      if (0.0 - fVar6 < 0.0) {
        fVar11 = fVar10;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar11 = fVar10;
      }
      if (fVar11 != 0.0) {
        fVar11 = (fVar7 * fVar3 + fVar9 * fVar2 + fVar8 * fVar1) / fVar11;
        fVar1 = fVar11;
        if (fVar11 - 0.0 < 0.0) {
          fVar1 = ABS(fVar11);
        }
        fVar2 = 1.0;
        if (fVar11 - 0.0 < 0.0) {
          fVar2 = -1.0;
        }
        fVar3 = 1.0 - fVar1;
        if ((1.0 - fVar1) - 0.0 < 0.0) {
          fVar3 = 0.0;
        }
        if (1.3962634 <=
            -(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar3) -
               1.5707964) * fVar2 - 1.5707964)) {
          Camera_resetToFollow();
          return 0;
        }
      }
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = loadVectorLeftIndexed(0x3c,0x473ac);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar16);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0x24,
                         (ulonglong)uVar4);
      *(undefined4 *)(uVar4 + 0x24 & 0xfffffffc) = uVar5;
    }
  }
  if (*(int *)(uVar4 + 0x24) != 0) {
    FastDecTimerS32((ulonglong)uVar4 + 0x24);
    Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,local_40);
  }
  return 0;
}


// 0x00478ec (0xd4 bytes)
void InitCamera_4(UpdateCam *pCam)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)pCam->control;
  GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.05;
  GameCamera.blender.reqType = '\0';
  GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.05;
  GameCamera.blender.state =
       (short)(ZERO_MASK((uint)(ushort)GameCamera.blender.state)) + 2;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  SetLookCamInitPosRot(pCam);
  (pCam->activation).deactivate = 0;
  if (GameCamera.camStatics.pCamColl != 0) {
    PlayMobySound(0,0,(MobyInstance *)GameCamera.camStatics.pCamColl);
  }
  return;
}


// 0x00479d8 (0x1ac bytes)
void ExitCamera_4(UpdateCam *pCam)

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
  
  if (g_HeroRequestedCamType != 4 && g_HeroRequestedCamType != 0x51) {
    if (GameCamera.blender.state == 0) {
      GameCamera.blender.reqType = '\0';
      (pCam->activation).deactivate = 2;
      GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.018;
      GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.018;
    }
    else {
      fVar1 = (g_heroMobyPtr->transform).v0.y;
      fVar2 = (g_heroMobyPtr->transform).v0.x;
      fVar3 = (g_heroMobyPtr->transform).v0.z;
      fVar5 = (float)GameCamera.camStatics.heroUpActual.z * pCam->mtx[2] +
              (float)GameCamera.camStatics.heroUpActual.x * pCam->mtx[0] +
              (float)GameCamera.camStatics.heroUpActual.y * pCam->mtx[1];
      fVar4 = (float)GameCamera.camStatics.heroUpActual.z * fVar3 +
              (float)GameCamera.camStatics.heroUpActual.x * fVar2 +
              (float)GameCamera.camStatics.heroUpActual.y * fVar1;
      fVar6 = -((float)GameCamera.camStatics.heroUpActual.y * fVar5 - pCam->mtx[1]);
      fVar7 = -((float)GameCamera.camStatics.heroUpActual.x * fVar5 - pCam->mtx[0]);
      fVar5 = -((float)GameCamera.camStatics.heroUpActual.z * fVar5 - pCam->mtx[2]);
      fVar1 = -((float)GameCamera.camStatics.heroUpActual.y * fVar4 - fVar1);
      fVar2 = -((float)GameCamera.camStatics.heroUpActual.x * fVar4 - fVar2);
      fVar3 = -((float)GameCamera.camStatics.heroUpActual.z * fVar4 - fVar3);
      fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar8 = fVar4 * SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar9 = fVar4;
      if (0.0 - fVar4 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar9 = fVar8;
      }
      if (fVar9 != 0.0) {
        fVar9 = (fVar5 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1) / fVar9;
        fVar1 = fVar9;
        if (fVar9 - 0.0 < 0.0) {
          fVar1 = ABS(fVar9);
        }
        fVar2 = 1.0;
        if (fVar9 - 0.0 < 0.0) {
          fVar2 = -1.0;
        }
        fVar3 = 1.0 - fVar1;
        if ((1.0 - fVar1) - 0.0 < 0.0) {
          fVar3 = 0.0;
        }
        if (1.3962634 <=
            -(-((fVar1 * fVar1 * fVar1 * DAT_007358cc +
                fVar1 * fVar1 * DAT_007358c8 + fVar1 * DAT_007358c4 + DAT_007358c0) * SQRT(fVar3) -
               1.5707964) * fVar2 - 1.5707964)) {
          GameCamera.blender.state = 0;
          (pCam->activation).deactivate = 4;
          return;
        }
      }
      GameCamera.blender.reqType = '\0';
      (pCam->activation).deactivate = 2;
      GameCamera.blender.blendData.posData.reqPosInterpAdd = 0.018;
      GameCamera.blender.blendData.posData.reqQuatInterpAdd = 0.018;
    }
  }
  return;
}


