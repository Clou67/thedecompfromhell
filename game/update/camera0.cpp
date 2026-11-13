// game/update/camera0.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 74 functions, 0x2bac4-0x34ce0
#include <string.h>
#include "game/update/camera0.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/update/moby688.h"
#include "idol/fastfunc.h"

// 0x002bac4 (0x14 bytes)
void SECTION_HEADER_CAMERA0(void)

{
  DAT_0071d45c = 0x10000;
  return;
}


// 0x002bad8 (0x4 bytes)
void STUB_0002bad8(...)

{
  return;
}


// 0x002badc (0x2c bytes)
void Cam0_GetHeroPos(void *pCam,float *pos)

{
  *pos = g_heroPosition.x;
  pos[1] = g_heroPosition.y;
  pos[2] = g_heroPosition.z;
  pos[3] = g_heroPosition.w;
  return;
}


// 0x002bb10 (0x174 bytes)
// inlined: FastRSqrt @0x2bbec
bool CollPrimSphere(double param_1,float *param_2)

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
  Sphere *pSVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  
  iVar12 = CamCollGrid_FindPrimAtPnt
                     (param_1,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 2));
  if (iVar12 != 0) {
    pSVar11 = Spheres + *(int *)(iVar12 + 0x14);
    fVar1 = (pSVar11->pos).y;
    fVar2 = (pSVar11->pos).x;
    fVar7 = param_2[1] - fVar1;
    fVar3 = (pSVar11->pos).z;
    fVar4 = (pSVar11->matrix).v0.y;
    fVar9 = *param_2 - fVar2;
    fVar5 = (pSVar11->matrix).v0.x;
    fVar8 = param_2[2] - fVar3;
    fVar6 = (pSVar11->matrix).v0.z;
    fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
    dVar13 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    g_CollOutput.ip.w = param_2[3];
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar14 = (double)(-(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4);
    fVar4 = (float)((double)(float)(dVar13 + param_1) * dVar14);
    fVar5 = (float)(dVar13 * dVar14);
    g_CollOutput.push.x = fVar9 * fVar4 + fVar2;
    g_CollOutput.push.y = fVar7 * fVar4 + fVar1;
    g_CollOutput.push.z = fVar8 * fVar4 + fVar3;
    g_CollOutput.ip.x = fVar9 * fVar5 + fVar2;
    g_CollOutput.ip.y = fVar7 * fVar5 + fVar1;
    g_CollOutput.ip.z = fVar8 * fVar5 + fVar3;
    g_CollOutput.push.w = g_CollOutput.ip.w;
  }
  return iVar12 != 0;
}


// 0x002bc88 (0x70 bytes)
bool camera0_IsPntInCollPrim(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = CamCollGrid_FindPrimAtPnt(0,*param_1,param_1[1]);
  return iVar1 != 0;
}


// 0x002bcf8 (0x4 bytes)
void STUB_0002bcf8(...)

{
  return;
}


// 0x002bd08 (0x1cc bytes)
int GetHeroGroundPos(float *pos,int useGroundDist)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  GPiece<16> local_50;
  GPiece<24> local_40;
  
  if (DAT_00969fec == 0) {
    *pos = g_heroPosition.x;
    pos[1] = g_heroPosition.y;
    pos[2] = g_heroPosition.z;
    dVar7 = (double)g_heroPosition.w;
  }
  else {
    dVar4 = (double)g_heroPosition.x;
    dVar5 = (double)g_heroPosition.y;
    dVar6 = (double)g_heroPosition.z;
    dVar7 = (double)g_heroPosition.w;
    if ((0x41efffff <
         (int)(FLOAT_ORDER(g_heroGroundDist))) || (useGroundDist == 0)) {
      iVar3 = CollLine(local_50,local_40,0x12,g_heroMobyPtr,0);
      if (iVar3 != 0) {
        *pos = g_CollOutput.ip.x;
        pos[1] = g_CollOutput.ip.y;
        pos[2] = g_CollOutput.ip.z;
        pos[3] = g_CollOutput.ip.w;
        return 0;
      }
      *pos = (float)dVar4;
      pos[1] = (float)dVar5;
      pos[2] = (float)dVar6;
      pos[3] = (float)dVar7;
      return -1;
    }
    fVar1 = g_heroGroundDist * (float)GameCamera.camStatics.heroUpActual.y;
    fVar2 = g_heroGroundDist * (float)GameCamera.camStatics.heroUpActual.z;
    *pos = (float)(-(double)(g_heroGroundDist * (float)GameCamera.camStatics.heroUpActual.x) +
                  dVar4);
    pos[1] = (float)(-(double)fVar1 + dVar5);
    pos[2] = (float)(-(double)fVar2 + dVar6);
  }
  pos[3] = (float)dVar7;
  return 1;
}


// 0x002bed4 (0x4 bytes)
void STUB_0002bed4(...)

{
  return;
}


// 0x002bed8 (0x180 bytes)
void InitCamTarget_0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x70);
  GetHeroGroundPos(&local_20,0);
  uVar10 = GameCamera.camStatics.heroUpActual.w;
  fVar6 = local_18 * (float)GameCamera.camStatics.heroUpActual.z +
          local_20 * (float)GameCamera.camStatics.heroUpActual.x +
          local_1c * (float)GameCamera.camStatics.heroUpActual.y;
  fVar1 = *(float *)(iVar3 + 0xf0);
  fVar5 = (float)GameCamera.camStatics.heroUpActual.x * fVar6;
  fVar4 = (float)GameCamera.camStatics.heroUpActual.y * fVar6;
  fVar6 = (float)GameCamera.camStatics.heroUpActual.z * fVar6;
  *(float *)(iVar3 + 0x40) = local_20 - fVar5;
  fVar7 = (local_20 - fVar5) + fVar5;
  fVar2 = *(float *)(iVar3 + 0x160);
  *(float *)(iVar3 + 0x44) = local_1c - fVar4;
  fVar8 = (local_1c - fVar4) + fVar4;
  *(undefined2 *)(iVar3 + 0x106) = 0;
  fVar9 = (local_18 - fVar6) + fVar6;
  *(float *)(iVar3 + 0x48) = local_18 - fVar6;
  *(float *)(iVar3 + 0x50) = fVar5;
  *(undefined4 *)(iVar3 + 0x4c) = local_14;
  *(float *)(iVar3 + 0x54) = fVar4;
  *(float *)(iVar3 + 0x58) = fVar6;
  *(undefined4 *)(iVar3 + 0x5c) = uVar10;
  *(float *)(iVar3 + 0x40) = fVar7;
  *(float *)(iVar3 + 0x44) = fVar8;
  *(float *)(iVar3 + 0x48) = fVar9;
  uVar12 = GameCamera.camStatics.heroUp.w;
  uVar11 = GameCamera.camStatics.heroUp.z;
  uVar10 = GameCamera.camStatics.heroUp.y;
  fVar6 = GameCamera.camStatics.heroUp.x;
  fVar5 = GameCamera.camStatics.heroUp.x * fVar1 + fVar7;
  fVar4 = (float)GameCamera.camStatics.heroUp.y * fVar1 + fVar8;
  fVar1 = (float)GameCamera.camStatics.heroUp.z * fVar1 + fVar9;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0x8c) = uVar12;
  *(undefined4 *)(iVar3 + 0xdc) = uVar12;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined1 *)(iVar3 + 0x104) = 0;
  *(undefined1 *)(iVar3 + 0x105) = 0;
  *(undefined4 *)(iVar3 + 0x108) = 0x3f800000;
  *(float *)(iVar3 + 0x80) = fVar5;
  *(float *)(iVar3 + 0x84) = fVar4;
  *(float *)(iVar3 + 0x88) = fVar1;
  *(float *)(iVar3 + 0xd0) = fVar5;
  *(float *)(iVar3 + 0xd4) = fVar4;
  *(float *)(iVar3 + 0xd8) = fVar1;
  *(float *)(iVar3 + 0xa0) = fVar7;
  *(float *)(iVar3 + 0xa4) = fVar8;
  *(float *)(iVar3 + 0xa8) = fVar9;
  *(undefined4 *)(iVar3 + 0xac) = local_14;
  *(undefined4 *)(iVar3 + 0xbc) = 0;
  *(undefined4 *)(iVar3 + 0xb8) = 0;
  *(undefined4 *)(iVar3 + 0xb4) = 0;
  *(undefined4 *)(iVar3 + 0xb0) = 0;
  *(undefined4 *)(iVar3 + 0xcc) = 0;
  *(undefined4 *)(iVar3 + 200) = 0;
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  *(undefined4 *)(iVar3 + 0xc0) = 0;
  *(float *)(iVar3 + 0x90) = fVar6 * fVar2 + fVar7;
  *(float *)(iVar3 + 0x94) = (float)uVar10 * fVar2 + fVar8;
  *(float *)(iVar3 + 0x98) = (float)uVar11 * fVar2 + fVar9;
  *(undefined4 *)(iVar3 + 0x9c) = uVar12;
  return;
}


// 0x002c058 (0xb0 bytes)
ulonglong Cam_LOStoHero(longlong param_1)

{
  undefined4 uVar1;
  GPiece<16> local_10;
  
  uVar1 = CollLine(local_10,param_1 + 0x30,CAMERA_COLL_FLAGS,g_heroMobyPtr,0);
  return (ulonglong)(LZCOUNT(uVar1) << 0x20) >> 0x25;
}


// 0x002c118 (0x14c bytes)
double Cam_GetCurrHeroElv(double param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  fVar1 = (float)((double)(float)GameCamera.camStatics.heroUp.y * param_1 + (double)g_heroPosition.y
                 ) - param_2[0xd];
  fVar2 = (float)((double)GameCamera.camStatics.heroUp.x * param_1 + (double)g_heroPosition.x) -
          param_2[0xc];
  fVar3 = (float)((double)(float)GameCamera.camStatics.heroUp.z * param_1 + (double)g_heroPosition.z
                 ) - param_2[0xe];
  fVar4 = fVar3 * param_2[6] + fVar2 * param_2[4] + fVar1 * param_2[5];
  fVar1 = -(param_2[5] * fVar4 - fVar1);
  fVar3 = -(param_2[6] * fVar4 - fVar3);
  fVar2 = -(param_2[4] * fVar4 - fVar2);
  dVar8 = 0.0;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar4 != 0.0) {
    fVar4 = (fVar3 * param_2[2] + fVar2 * *param_2 + fVar1 * param_2[1]) / fVar4;
    fVar5 = fVar4;
    if (fVar4 - 0.0 < 0.0) {
      fVar5 = ABS(fVar4);
    }
    dVar7 = (double)(1.0 - fVar5);
    if ((double)(1.0 - fVar5) - 0.0 < 0.0) {
      dVar7 = dVar8;
    }
    fVar6 = 1.0;
    if (fVar4 - 0.0 < 0.0) {
      fVar6 = -1.0;
    }
    fVar4 = -((fVar5 * fVar5 * fVar5 * DAT_007358cc +
              fVar5 * fVar5 * DAT_007358c8 + fVar5 * DAT_007358c4 + DAT_007358c0) *
              (float)SQRT(dVar7) - 1.5707964);
    dVar8 = -(double)(fVar4 * fVar6 - 1.5707964);
    if ((fVar3 * param_2[10] + fVar2 * param_2[8] + fVar1 * param_2[9]) - 0.0 < 0.0) {
      dVar8 = (double)(fVar4 * fVar6 - 1.5707964);
    }
  }
  return dVar8;
}


// 0x002c268 (0x28c bytes)
void ApplyHeroExternalMotion_0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  short sVar17;
  float *pfVar18;
  
  fVar16 = g_heroFrameMove.w;
  fVar15 = g_heroFrameMove.z;
  fVar14 = g_heroFrameMove.y;
  fVar13 = g_heroFrameMove.x;
  fVar2 = g_heroFrameMove.x + *(float *)(param_1 + 0x30);
  pfVar1 = *(float **)(param_1 + 0x70);
  fVar4 = g_heroFrameMove.y + *(float *)(param_1 + 0x34);
  fVar3 = g_heroFrameMove.z + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = g_heroFrameMove.w;
  *(float *)(param_1 + 0x30) = fVar2;
  *(float *)(param_1 + 0x34) = fVar4;
  *(float *)(param_1 + 0x38) = fVar3;
  pfVar1[0x2b] = fVar16;
  pfVar1[0x28] = fVar13 + pfVar1[0x28];
  pfVar1[0x29] = fVar14 + pfVar1[0x29];
  pfVar1[0x2a] = fVar15 + pfVar1[0x2a];
  pfVar1[0x10] = fVar13 + pfVar1[0x10];
  pfVar1[0x11] = fVar14 + pfVar1[0x11];
  pfVar1[0x12] = fVar15 + pfVar1[0x12];
  pfVar1[0x13] = fVar16;
  pfVar1[0x34] = fVar13 + pfVar1[0x34];
  pfVar1[0x35] = fVar14 + pfVar1[0x35];
  pfVar1[0x37] = fVar16;
  pfVar1[0x36] = fVar15 + pfVar1[0x36];
  sVar17 = g_onMagnerail;
  pfVar1[3] = fVar16;
  *pfVar1 = fVar13 + *pfVar1;
  pfVar1[1] = fVar14 + pfVar1[1];
  pfVar1[2] = fVar15 + pfVar1[2];
  pfVar18 = pfVar1;
  if ((sVar17 == 0) &&
     (((g_standingOnMoby == 0 || (*(short *)(g_standingOnMoby + 0xa6) != 0x22d)) ||
      ((int)(animationSpeed * 30.5) < (int)GameCamera.camTimer)))) {
    pfVar1[0x72] = g_heroFrameMove.w;
    pfVar18 = *(float **)(param_1 + 0x70);
  }
  if ((g_heroState == FLIP_JUMP) || (g_heroState == UNK_C)) {
    *(undefined2 *)(pfVar18 + 4) = 0;
    uVar12 = GameCamera.camStatics.heroSpeed2D;
    uVar11 = GameCamera.camStatics.heroMoveVec2D.w;
    uVar10 = GameCamera.camStatics.heroMoveVec2D.z;
    uVar9 = GameCamera.camStatics.heroMoveVec2D.y;
    uVar8 = GameCamera.camStatics.heroMoveVec2D.x;
    uVar7 = GameCamera.camStatics.heroUpActual.z;
    uVar6 = GameCamera.camStatics.heroUpActual.y;
    uVar5 = GameCamera.camStatics.heroUpActual.x;
    fVar3 = (float)GameCamera.camStatics.heroUpActual.y * fVar14;
    fVar2 = (float)GameCamera.camStatics.heroUpActual.x * fVar13;
    *(undefined4 *)(param_1 + 0x3c) = GameCamera.camStatics.heroMoveVec2D.w;
    fVar2 = (float)uVar7 * fVar15 + fVar2 + fVar3;
    fVar4 = (float)uVar8 * (float)uVar12 - -((float)uVar5 * fVar2 - fVar13);
    fVar3 = (float)uVar9 * (float)uVar12 - -((float)uVar6 * fVar2 - fVar14);
    fVar2 = (float)uVar10 * (float)uVar12 - -((float)uVar7 * fVar2 - fVar15);
    *(float *)(param_1 + 0x30) = fVar4 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar3 + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) = fVar2 + *(float *)(param_1 + 0x38);
    pfVar1[0x2b] = (float)uVar11;
    pfVar1[0x13] = (float)uVar11;
    pfVar1[0x37] = (float)uVar11;
    pfVar1[0x28] = fVar4 + pfVar1[0x28];
    pfVar1[0x29] = fVar3 + pfVar1[0x29];
    pfVar1[0x2a] = fVar2 + pfVar1[0x2a];
    pfVar1[0x10] = fVar4 + pfVar1[0x10];
    pfVar1[0x11] = fVar3 + pfVar1[0x11];
    pfVar1[0x12] = fVar2 + pfVar1[0x12];
    pfVar1[0x34] = fVar4 + pfVar1[0x34];
    pfVar1[0x35] = fVar3 + pfVar1[0x35];
    pfVar1[0x36] = fVar2 + pfVar1[0x36];
    pfVar18[3] = (float)uVar11;
    *pfVar18 = fVar4 + *pfVar18;
    pfVar18[1] = fVar3 + pfVar18[1];
    pfVar18[2] = fVar2 + pfVar18[2];
  }
  return;
}


// 0x002c4f4 (0x78 bytes)
void GetWorldHeightAtHeroGndOfs(double param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)GameCamera.camStatics.heroUpActual.z *
          (float)((double)(float)GameCamera.camStatics.heroUp.z * param_1 + (double)g_heroPosition.z
                 ) +
          (float)GameCamera.camStatics.heroUpActual.x *
          (float)((double)GameCamera.camStatics.heroUp.x * param_1 + (double)g_heroPosition.x) +
          (float)GameCamera.camStatics.heroUpActual.y *
          (float)((double)(float)GameCamera.camStatics.heroUp.y * param_1 + (double)g_heroPosition.y
                 );
  *param_2 = (float)GameCamera.camStatics.heroUpActual.x * fVar1;
  param_2[1] = (float)GameCamera.camStatics.heroUpActual.y * fVar1;
  param_2[2] = (float)GameCamera.camStatics.heroUpActual.z * fVar1;
  param_2[3] = (float)GameCamera.camStatics.heroUpActual.w;
  return;
}


// 0x002c578 (0x10b0 bytes)
void HandleSpecialTargetActivation(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  undefined2 uVar7;
  int iVar6;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  uVar3 = param_1[0x1c];
  uVar8 = (ulonglong)uVar3;
  dVar10 = 1.0;
  cVar1 = *(char *)(uVar3 + 0x104);
  if (cVar1 == '\0') {
    if (g_heroStateType == 2) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      *(undefined1 *)(uVar3 + 0x104) = 1;
      uVar7 = (undefined2)DAT_0071d51c;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
    if ((g_heroState == HELI_PACK_HIGH_JUMP) && (GameCamera.camStatics.groundMobyDeltaZ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      auVar11 = ZEXT416(0xffffffff);
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      *(undefined1 *)(uVar3 + 0x104) = 3;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd52c,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d52c + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d530;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d538;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d538,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if ((g_heroState == UNK_C) && (GameCamera.camStatics.groundMobyDeltaZ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      *(undefined1 *)(uVar3 + 0x104) = 8;
      uVar7 = (undefined2)DAT_0071d540;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
    if ((g_heroState == FLIP_JUMP) && (GameCamera.camStatics.groundMobyDeltaZ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      *(undefined1 *)(uVar3 + 0x104) = 6;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d520 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d530;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d528;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d528,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if (((g_heroState == THRUSTER_PACK_HIGH_JUMP) || (g_heroState == DOUBLE_JUMP)) &&
       (GameCamera.camStatics.groundMobyDeltaZ == 0)) {
      *(undefined1 *)(uVar3 + 0x105) = 0;
      auVar11 = ZEXT416(0xffffffff);
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      *(undefined1 *)(uVar3 + 0x104) = 5;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd53c,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d53c + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d540;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d548;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d548,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if (g_heroStateType != 4) {
      return;
    }
    if (GameCamera.camStatics.groundMobyDeltaZ != 0) {
      return;
    }
    *(undefined1 *)(uVar3 + 0x105) = 0;
    *(undefined1 *)(uVar3 + 0x104) = 2;
    uVar7 = (undefined2)DAT_0071d518;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (((cVar1 != '\t') && (cVar1 != '\x01')) && (g_heroState == HYPER_STRIKE)) {
    *(char *)(uVar3 + 0x105) = cVar1;
    *(undefined1 *)(uVar3 + 0x104) = 9;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd54c,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d54c + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
    *(undefined2 *)(uVar3 + 0x114) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    *(undefined4 *)(uVar3 + 0x108) = 0x3f800000;
    *(undefined2 *)(uVar3 + 0x106) = 0;
    *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
    fVar5 = DAT_0071d55c;
    *(undefined1 *)(uVar3 + 0x117) = 0;
    *(float *)(uVar3 + 0x110) = fVar5;
    GetWorldHeightAtHeroGndOfs((double)DAT_0071d55c,uVar8 + 0x70);
    *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
    *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
    *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
    *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
    return;
  }
  if (((cVar1 == '\x02') || (cVar1 == '\x01')) &&
     (g_heroStateType != 2 && g_heroStateType != 4)) {
    *(undefined1 *)(uVar3 + 0x104) = 0;
    *(undefined2 *)(uVar3 + 0x106) = 0;
    *(undefined4 *)(uVar3 + 0x108) = 0x3f800000;
    return;
  }
  if (cVar1 == '\a') {
    if (DAT_0096a0fe == 0) {
      *(undefined1 *)(uVar3 + 0x105) = 7;
      *(undefined1 *)(uVar3 + 0x104) = 6;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d520 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
      *(undefined2 *)(uVar3 + 0x114) = uVar7;
      dVar9 = (double)FastIntToDouble((short)(int)fVar5);
      uVar7 = (undefined2)DAT_0071d530;
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
      dVar9 = (double)FastIntToDouble(uVar7);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      fVar5 = DAT_0071d528;
      *(undefined1 *)(uVar3 + 0x117) = 0;
      *(float *)(uVar3 + 0x110) = fVar5;
      GetWorldHeightAtHeroGndOfs((double)DAT_0071d528,uVar8 + 0x70);
      *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
      *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
      *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
      *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
      return;
    }
    if (g_heroStateType == 2) {
      *(undefined1 *)(uVar3 + 0x105) = 7;
      *(undefined1 *)(uVar3 + 0x104) = 1;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)FastIntToDouble((short)(int)fVar5);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
  }
  if ((cVar1 == '\x04') && (g_heroStateType != 4)) {
    if (g_heroStateType == 2) {
      auVar11 = ZEXT416(0xffffffff);
      auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      *(undefined1 *)(uVar3 + 0x105) = 4;
      *(undefined1 *)(uVar3 + 0x104) = 1;
      auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
      auVar11 = loadVectorLeftIndexed(4,0x2c56c);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = vectorAddFloatingPoint
                          (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
      auVar11 = vectorSplatHalfWord(auVar11,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
      *(undefined2 *)(uVar3 + 0x106) = uVar7;
      dVar9 = (double)FastIntToDouble((short)(int)fVar5);
      *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
      return;
    }
    *(undefined1 *)(uVar3 + 0x105) = 4;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\x03') && (g_heroState == FLIP_JUMP)) {
    *(undefined1 *)(uVar3 + 0x105) = 3;
    *(undefined1 *)(uVar3 + 0x104) = 6;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d520 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x114,uVar8);
    *(undefined2 *)(uVar3 + 0x114) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    uVar7 = (undefined2)DAT_0071d530;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    *(float *)(uVar3 + 0x10c) = (float)(dVar10 / dVar9);
    dVar9 = (double)FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    fVar5 = DAT_0071d528;
    *(undefined1 *)(uVar3 + 0x117) = 0;
    *(float *)(uVar3 + 0x110) = fVar5;
    GetWorldHeightAtHeroGndOfs((double)DAT_0071d528,uVar8 + 0x70);
    *(undefined4 *)(uVar3 + 0x60) = *(undefined4 *)(uVar3 + 0x50);
    *(undefined4 *)(uVar3 + 100) = *(undefined4 *)(uVar3 + 0x54);
    *(undefined4 *)(uVar3 + 0x68) = *(undefined4 *)(uVar3 + 0x58);
    *(undefined4 *)(uVar3 + 0x6c) = *(undefined4 *)(uVar3 + 0x5c);
    return;
  }
  if ((cVar1 == '\x05') && (g_heroState == UNK_C)) {
    *(undefined1 *)(uVar3 + 0x105) = 5;
    *(undefined1 *)(uVar3 + 0x104) = 8;
    uVar7 = (undefined2)DAT_0071d540;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\b') && (g_heroState != UNK_C)) {
    *(undefined1 *)(uVar3 + 0x105) = 8;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd544,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d544 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\x06') && (g_heroState != FLIP_JUMP)) {
    *(undefined1 *)(uVar3 + 0x105) = 6;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (((cVar1 == '\x03') || (cVar1 == '\x05')) && (g_heroStateType != 4)) {
    *(char *)(uVar3 + 0x105) = cVar1;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (((cVar1 == '\t') &&
      ((g_heroStateType == 2 || ((int)(animationSpeed * 55.5) <= (int)DAT_00969fec)))) ||
     ((cVar1 == '\n' &&
      ((g_heroStateType == 2 || ((int)(animationSpeed * 55.5) <= (int)DAT_00969fec)))))) {
    *(char *)(uVar3 + 0x105) = cVar1;
    *(undefined1 *)(uVar3 + 0x104) = 1;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorAddFloatingPoint(auVar12,auVar15);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar14,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar12 = loadVectorLeftIndexed(0xffffffffffffd504,0x720000);
    uVar4 = param_1[0x1c];
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar12,0);
    auVar12 = vectorAddFloatingPoint(auVar12,auVar15);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x20,(ulonglong)uVar4);
    *(undefined2 *)(uVar4 + 0x20) = uVar7;
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    return;
  }
  if ((cVar1 == '\t') && (g_heroState != HYPER_STRIKE)) {
    *(undefined1 *)(uVar3 + 0x105) = 9;
    *(undefined1 *)(uVar3 + 0x104) = 10;
    uVar7 = (undefined2)DAT_0071d558;
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble(uVar7);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if ((cVar1 == '\n') && (iVar6 = FastDecTimerS16(uVar8 + 0x114), iVar6 != 0)) {
    uVar2 = *(undefined1 *)(uVar3 + 0x104);
    auVar11 = ZEXT416(0xffffffff);
    auVar13 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    *(undefined1 *)(uVar3 + 0x104) = 0;
    *(undefined1 *)(uVar3 + 0x105) = uVar2;
    auVar11 = loadVectorLeftIndexed(0xffffffffffffd534,0x720000);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar11 = loadVectorLeftIndexed(4,0x2c56c);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = vectorAddFloatingPoint
                        (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
    auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar11,auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    fVar5 = animationSpeed * ((float)(longlong)DAT_0071d534 + 0.5);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
    *(undefined2 *)(uVar3 + 0x106) = uVar7;
    dVar9 = (double)FastIntToDouble((short)(int)fVar5);
    *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
    return;
  }
  if (*(char *)(uVar3 + 0x104) != '\x05') {
    return;
  }
  if (g_heroState != THRUSTER_PACK_FORWARD_JUMP) {
    return;
  }
  *(undefined1 *)(uVar3 + 0x105) = 5;
  *(undefined1 *)(uVar3 + 0x104) = 0;
  auVar11 = loadVectorLeftIndexed(0xffffffffffffd544,0x720000);
  auVar12 = vectorConvertFromSignedFixedPointWord(auVar11,0);
  auVar11 = loadVectorLeftIndexed(4,0x2c56c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorAddFloatingPoint
                      (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
  auVar11 = ZEXT416(0xffffffff);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
  auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
  fVar5 = animationSpeed * ((float)(longlong)DAT_0071d544 + 0.5);
  auVar11 = vectorSplatHalfWord(auVar11,1);
  uVar7 = storeVectorElementHalfWordIndexed(auVar11,0x106,uVar8);
  *(undefined2 *)(uVar3 + 0x106) = uVar7;
  dVar9 = (double)FastIntToDouble((short)(int)fVar5);
  *(float *)(uVar3 + 0x108) = (float)(dVar10 / dVar9);
  return;
}


// 0x002d638 (0x984 bytes)
ulonglong HandleSpecialTargetUpVec(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined2 uVar16;
  int iVar15;
  ulonglong uVar14;
  ulonglong uVar17;
  undefined8 in_LR;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  fVar3 = g_heroPosition.w;
  puVar12 = (undefined4 *)param_1;
  uVar9 = puVar12[0x1c];
  uVar17 = (ulonglong)uVar9;
  dVar22 = (double)g_heroPosition.x;
  dVar23 = (double)g_heroPosition.y;
  dVar24 = (double)g_heroPosition.z;
  dVar25 = (double)g_heroPosition.w;
  dVar20 = (double)(float)GameCamera.camStatics.heroUpActual.x;
  dVar19 = (double)(float)GameCamera.camStatics.heroUpActual.y;
  dVar18 = (double)(float)GameCamera.camStatics.heroUpActual.z;
  pfVar13 = (float *)param_2;
  if (g_heroState == DEATH_FALLING) {
    dVar18 = (double)(float)((double)*(float *)(uVar9 + 0x48) * dVar18 +
                            (double)(float)((double)*(float *)(uVar9 + 0x40) * dVar20 +
                                           (double)(float)((double)*(float *)(uVar9 + 0x44) * dVar19
                                                          )));
    *pfVar13 = (float)(dVar20 * dVar18);
    pfVar13[1] = (float)((double)(float)GameCamera.camStatics.heroUpActual.y * dVar18);
    pfVar13[2] = (float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar18);
    pfVar13[3] = (float)GameCamera.camStatics.heroUpActual.w;
    *(float *)(uVar9 + 0x40) = *(float *)(uVar9 + 0x40) - (float)(dVar20 * dVar18);
    *(float *)(uVar9 + 0x44) = *(float *)(uVar9 + 0x44) - pfVar13[1];
    *(float *)(uVar9 + 0x48) = *(float *)(uVar9 + 0x48) - pfVar13[2];
    fVar8 = (float)GameCamera.camStatics.heroUpActual.z * *(float *)(uVar9 + 0xa8) +
            (float)GameCamera.camStatics.heroUpActual.x * *(float *)(uVar9 + 0xa0) +
            (float)GameCamera.camStatics.heroUpActual.y * *(float *)(uVar9 + 0xa4);
    fVar3 = (float)GameCamera.camStatics.heroUpActual.x * fVar8;
    *pfVar13 = fVar3;
    pfVar13[1] = (float)GameCamera.camStatics.heroUpActual.y * fVar8;
    pfVar13[2] = (float)GameCamera.camStatics.heroUpActual.z * fVar8;
    pfVar13[3] = (float)GameCamera.camStatics.heroUpActual.w;
    *(float *)(uVar9 + 0x50) = fVar3;
    *(float *)(uVar9 + 0x54) = pfVar13[1];
    *(float *)(uVar9 + 0x58) = pfVar13[2];
    *(float *)(uVar9 + 0x5c) = pfVar13[3];
    if (*(char *)(uVar9 + 0x104) == '\v') {
      return param_1;
    }
    auVar26 = ZEXT416(0xffffffff);
    auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    *(undefined1 *)(uVar9 + 0x104) = 0xb;
    auVar26 = loadVectorLeftIndexed(0xffffffffffffd504,0x720000);
    puVar12[0x10] = *puVar12;
    auVar27 = vectorConvertFromSignedFixedPointWord(auVar26,0);
    puVar12[0x11] = puVar12[1];
    puVar12[0x12] = puVar12[2];
    puVar12[0x13] = puVar12[3];
    auVar26 = loadVectorLeftIndexed(in_LR,0x2d628);
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = vectorAddFloatingPoint
                        (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
    auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    uVar9 = puVar12[0x1c];
    auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
    auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
    auVar26 = vectorSplatHalfWord(auVar26,1);
    uVar16 = storeVectorElementHalfWordIndexed(auVar26,0x20,(ulonglong)uVar9);
    *(undefined2 *)(uVar9 + 0x20) = uVar16;
    return (ulonglong)uVar9;
  }
  bVar1 = *(byte *)(uVar9 + 0x104);
  if (bVar1 < 8) {
    if (bVar1 < 3) {
      if (1 < bVar1) {
        if (g_heroState == WALL_JUMP) {
          *(undefined1 *)(uVar9 + 0x104) = 1;
          uVar16 = (undefined2)DAT_0071d51c;
          *(undefined2 *)(uVar9 + 0x106) = uVar16;
          dVar18 = (double)FastIntToDouble(uVar16);
          *(float *)(uVar9 + 0x108) = (float)(1.0 / dVar18);
        }
        else if (((DAT_0096a0fe != 0) &&
                 (0x3e4ccccd <
                  (int)(FLOAT_ORDER(g_heroGroundDist)))) &&
                ((dVar18 = (double)Cam_GetCurrHeroElv((double)*(float *)(uVar9 + 0xf0)),
                 dVar18 < (double)DAT_0071d4f0 || ((double)DAT_0071d4ec < dVar18)))) {
          *(undefined1 *)(uVar9 + 0x104) = 1;
          uVar16 = (undefined2)DAT_0071d51c;
          *(undefined2 *)(uVar9 + 0x106) = uVar16;
          dVar18 = (double)FastIntToDouble(uVar16);
          *(float *)(uVar9 + 0x108) = (float)(1.0 / dVar18);
        }
        if ((((DAT_00969fec == 0) || (GameCamera.camStatics.groundMobyDeltaZ != 0)) ||
            ((DAT_0096a0fe != 0 && (DAT_0096a12c < 0x10)))) &&
           ((iVar15 = GetHeroGroundPos(&local_60,1), iVar15 == 1 &&
            (SQRT(*(float *)(uVar9 + 0x58) * *(float *)(uVar9 + 0x58) +
                  *(float *)(uVar9 + 0x50) * *(float *)(uVar9 + 0x50) +
                  *(float *)(uVar9 + 0x54) * *(float *)(uVar9 + 0x54)) <=
             local_58 * (float)GameCamera.camStatics.heroUpActual.z +
             local_60 * (float)GameCamera.camStatics.heroUpActual.x +
             local_5c * (float)GameCamera.camStatics.heroUpActual.y)))) {
          iVar15 = GetHeroGroundPos(&local_50,1);
          fVar8 = local_48 * (float)GameCamera.camStatics.heroUpActual.z +
                  local_50 * (float)GameCamera.camStatics.heroUpActual.x +
                  local_4c * (float)GameCamera.camStatics.heroUpActual.y;
          fVar3 = (float)GameCamera.camStatics.heroUpActual.x * fVar8;
          *pfVar13 = fVar3;
          pfVar13[1] = (float)GameCamera.camStatics.heroUpActual.y * fVar8;
          pfVar13[2] = (float)GameCamera.camStatics.heroUpActual.z * fVar8;
          pfVar13[3] = (float)GameCamera.camStatics.heroUpActual.w;
          *(float *)(uVar9 + 0x40) = local_50 - fVar3;
          *(float *)(uVar9 + 0x44) = local_4c - pfVar13[1];
          *(float *)(uVar9 + 0x48) = local_48 - pfVar13[2];
          *(undefined4 *)(uVar9 + 0x4c) = local_44;
          return (longlong)iVar15;
        }
        dVar18 = (double)(float)GameCamera.camStatics.heroUpActual.x;
        if ((ABS((float)(dVar18 - (double)(float)GameCamera.camStatics.heroUpLast.x)) <= 0.001) &&
           ((ABS((float)GameCamera.camStatics.heroUpActual.y - (float)GameCamera.camStatics.heroUpLast.y) <=
             0.001 && (ABS((float)GameCamera.camStatics.heroUpActual.z -
                           (float)GameCamera.camStatics.heroUpLast.z) <= 0.001)))) {
          *pfVar13 = *(float *)(uVar9 + 0x50);
          pfVar13[1] = *(float *)(uVar9 + 0x54);
          pfVar13[2] = *(float *)(uVar9 + 0x58);
          pfVar13[3] = *(float *)(uVar9 + 0x5c);
          dVar18 = (double)(float)GameCamera.camStatics.heroUpActual.y;
          dVar19 = (double)(float)GameCamera.camStatics.heroUpActual.x;
          dVar21 = (double)(float)GameCamera.camStatics.heroUpActual.z;
          *(float *)(uVar9 + 0x4c) = (float)dVar25;
          dVar20 = (double)(float)(dVar24 * dVar21 +
                                  (double)(float)(dVar22 * dVar19 + (double)(float)(dVar23 * dVar18)
                                                 ));
          *(float *)(uVar9 + 0x40) = -(float)(dVar19 * dVar20 - dVar22);
          *(float *)(uVar9 + 0x44) = -(float)(dVar18 * dVar20 - dVar23);
          *(float *)(uVar9 + 0x48) = -(float)(dVar21 * dVar20 - dVar24);
          return ZEXT48(&DAT_0002d628);
        }
        dVar19 = (double)(float)(dVar24 * (double)(float)GameCamera.camStatics.heroUpActual.z +
                                (double)(float)(dVar22 * dVar18 +
                                               (double)(float)(dVar23 * (double)(float)GameCamera.
                                                                                       field17_0x1b4
                                                                                       .piece<16,4>())));
        *pfVar13 = (float)(dVar18 * dVar19);
        pfVar13[1] = (float)((double)(float)GameCamera.camStatics.heroUpActual.y * dVar19);
        pfVar13[2] = (float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar19);
        pfVar13[3] = (float)GameCamera.camStatics.heroUpActual.w;
        *(float *)(uVar9 + 0x40) = (float)(dVar22 - (double)(float)(dVar18 * dVar19));
        *(float *)(uVar9 + 0x44) = (float)(dVar23 - (double)pfVar13[1]);
        fVar3 = pfVar13[2];
        *(float *)(uVar9 + 0x4c) = (float)dVar25;
        *(float *)(uVar9 + 0x48) = (float)(dVar24 - (double)fVar3);
        return ZEXT48(&DAT_0002d628);
      }
    }
    else if (bVar1 != 4) {
      auVar26 = ZEXT416(0xfffffff0);
      auVar27 = ZEXT416(0xffffffff);
      auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar27 = loadVectorLeftIndexed(0x114,uVar17);
      auVar26 = vectorShiftRightAlgebraicWord
                          (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
      auVar27 = loadVectorLeftIndexed(0x10c,uVar17);
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
      auVar29 = loadVectorLeftIndexed(0x60,uVar17);
      auVar30 = loadVectorLeftIndexed(0x70,uVar17);
      auVar31 = loadVectorLeftIndexed(100,uVar17);
      auVar32 = loadVectorLeftIndexed(0x74,uVar17);
      auVar33 = loadVectorLeftIndexed(0x68,uVar17);
      auVar29 = vectorSubtractFloatingPoint(auVar29,auVar30);
      auVar34 = loadVectorLeftIndexed(0x78,uVar17);
      auVar31 = vectorSubtractFloatingPoint(auVar31,auVar32);
      uVar4 = *(undefined4 *)(uVar9 + 0x6c);
      cVar2 = *(char *)(uVar9 + 0x117);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar28);
      auVar27 = vectorSubtractFloatingPoint(auVar33,auVar34);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar26,auVar29,auVar30);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar26,auVar31,auVar32);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar34);
      auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar27 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x50,uVar17)
      ;
      *(undefined4 *)(uVar9 + 0x50 & 0xfffffffc) = uVar10;
      uVar10 = storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x54,uVar17)
      ;
      *(undefined4 *)(uVar9 + 0x54 & 0xfffffffc) = uVar10;
      uVar10 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x58,uVar17)
      ;
      *(undefined4 *)(uVar9 + 0x58 & 0xfffffffc) = uVar10;
      *(undefined4 *)(uVar9 + 0x5c) = uVar4;
      if (cVar2 == '\0') {
        iVar15 = CollSphere(0x3fc99999a0000000,param_1 + 0x30,&DAT_0002d628,0x12,0);
        auVar29 = loadVectorLeftIndexed(0x50,uVar17);
        if (iVar15 != 0) {
          auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = *(undefined4 *)(uVar9 + 0x54);
          uVar10 = *(undefined4 *)(uVar9 + 0x58);
          uVar11 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x70,
                              uVar17);
          *(undefined4 *)(uVar9 + 0x70 & 0xfffffffc) = uVar11;
          *(undefined4 *)(uVar9 + 0x74) = uVar4;
          *(undefined4 *)(uVar9 + 0x78) = uVar10;
          *(undefined4 *)(uVar9 + 0x7c) = *(undefined4 *)(uVar9 + 0x5c);
          *(undefined1 *)(uVar9 + 0x117) = 1;
        }
      }
      auVar26 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,param_2);
      *(undefined4 *)((uint)pfVar13 & 0xfffffffc) = uVar4;
      pfVar13[1] = *(float *)(uVar9 + 0x54);
      pfVar13[2] = *(float *)(uVar9 + 0x58);
      pfVar13[3] = *(float *)(uVar9 + 0x5c);
      dVar18 = (double)(float)GameCamera.camStatics.heroUpActual.y;
      dVar19 = (double)(float)GameCamera.camStatics.heroUpActual.x;
      dVar21 = (double)(float)GameCamera.camStatics.heroUpActual.z;
      *(float *)(uVar9 + 0x4c) = (float)dVar25;
      dVar20 = (double)(float)(dVar24 * dVar21 +
                              (double)(float)(dVar22 * dVar19 + (double)(float)(dVar23 * dVar18)));
      *(float *)(uVar9 + 0x40) = -(float)(dVar19 * dVar20 - dVar22);
      *(float *)(uVar9 + 0x44) = -(float)(dVar18 * dVar20 - dVar23);
      *(float *)(uVar9 + 0x48) = -(float)(dVar21 * dVar20 - dVar24);
      uVar14 = FastDecTimerS16(uVar17 + 0x114);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      if (*(char *)(uVar9 + 0x104) == '\t') {
        auVar26 = ZEXT416(0xffffffff);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        *(undefined1 *)(uVar9 + 0x104) = 10;
        auVar28 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar26 = loadVectorLeftIndexed(0xffffffffffffd54c,0x720000);
        auVar27 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = loadVectorLeftIndexed(in_LR,0x2d628);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar26 = vectorAddFloatingPoint
                            (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
        fVar3 = *(float *)(uVar9 + 0x110);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar28);
        auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
        auVar26 = vectorSplatHalfWord(auVar26,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar26,0x114,uVar17);
        *(undefined2 *)(uVar9 + 0x114) = uVar16;
        *(float *)(uVar9 + 0x60) = *(float *)(uVar9 + 0x50);
        *(float *)(uVar9 + 100) = *(float *)(uVar9 + 0x54);
        *(float *)(uVar9 + 0x68) = *(float *)(uVar9 + 0x58);
        *(undefined4 *)(uVar9 + 0x6c) = *(undefined4 *)(uVar9 + 0x5c);
        uVar4 = GameCamera.camStatics.heroUpActual.z;
        fVar8 = (float)GameCamera.camStatics.heroUpActual.x * fVar3;
        fVar5 = (float)GameCamera.camStatics.heroUpActual.y * fVar3;
        *(undefined4 *)(uVar9 + 0x7c) = *(undefined4 *)(uVar9 + 0x5c);
        *(float *)(uVar9 + 0x70) = -(fVar8 - *(float *)(uVar9 + 0x50));
        *(float *)(uVar9 + 0x74) = -(fVar5 - *(float *)(uVar9 + 0x54));
        *(float *)(uVar9 + 0x78) = -((float)uVar4 * fVar3 - *(float *)(uVar9 + 0x58));
        return 0x114;
      }
      if (*(char *)(uVar9 + 0x104) == '\x06') {
        auVar26 = ZEXT416(0xffffffff);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        *(undefined1 *)(uVar9 + 0x104) = 7;
        auVar28 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar26 = loadVectorLeftIndexed(0xffffffffffffd520,0x720000);
        auVar27 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = loadVectorLeftIndexed(in_LR,0x2d628);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar26 = vectorAddFloatingPoint
                            (auVar27,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
        auVar26 = vectorMultiplyAddFloatingPoint(auVar29,auVar26,auVar28);
        auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
        auVar26 = vectorSplatHalfWord(auVar26,1);
        uVar16 = storeVectorElementHalfWordIndexed(auVar26,0x114,uVar17);
        *(undefined2 *)(uVar9 + 0x114) = uVar16;
        *(undefined4 *)(uVar9 + 0x70) = *(undefined4 *)(uVar9 + 0x60);
        *(undefined4 *)(uVar9 + 0x74) = *(undefined4 *)(uVar9 + 100);
        *(undefined4 *)(uVar9 + 0x78) = *(undefined4 *)(uVar9 + 0x68);
        *(undefined4 *)(uVar9 + 0x7c) = *(undefined4 *)(uVar9 + 0x6c);
        *(undefined4 *)(uVar9 + 0x60) = *(undefined4 *)(uVar9 + 0x50);
        *(undefined4 *)(uVar9 + 100) = *(undefined4 *)(uVar9 + 0x54);
        *(undefined4 *)(uVar9 + 0x68) = *(undefined4 *)(uVar9 + 0x58);
        *(undefined4 *)(uVar9 + 0x6c) = *(undefined4 *)(uVar9 + 0x5c);
        return 0x114;
      }
      *(undefined1 *)(uVar9 + 0x104) = 4;
      uVar16 = (undefined2)DAT_0071d534;
      *(undefined2 *)(uVar9 + 0x106) = uVar16;
      dVar18 = (double)FastIntToDouble(uVar16);
      *(float *)(uVar9 + 0x108) = (float)(1.0 / dVar18);
      return ZEXT48(&DAT_0002d628);
    }
  }
  else {
    if (bVar1 < 9) {
      *pfVar13 = *(float *)(uVar9 + 0x50);
      pfVar13[1] = *(float *)(uVar9 + 0x54);
      pfVar13[2] = *(float *)(uVar9 + 0x58);
      pfVar13[3] = *(float *)(uVar9 + 0x5c);
      dVar18 = (double)(float)GameCamera.camStatics.heroUpActual.y;
      dVar19 = (double)(float)GameCamera.camStatics.heroUpActual.x;
      dVar25 = (double)(float)GameCamera.camStatics.heroUpActual.z;
      *(float *)(uVar9 + 0x4c) = fVar3;
      dVar20 = (double)(float)(dVar24 * dVar25 +
                              (double)(float)(dVar22 * dVar19 + (double)(float)(dVar23 * dVar18)));
      *(float *)(uVar9 + 0x40) = -(float)(dVar19 * dVar20 - dVar22);
      *(float *)(uVar9 + 0x44) = -(float)(dVar18 * dVar20 - dVar23);
      *(float *)(uVar9 + 0x48) = -(float)(dVar25 * dVar20 - dVar24);
      return param_1;
    }
    if (bVar1 < 0xb) {
      dVar18 = (double)(float)(dVar24 * dVar18 +
                              (double)(float)(dVar22 * dVar20 + (double)(float)(dVar23 * dVar19)));
      *pfVar13 = (float)(dVar20 * dVar18);
      pfVar13[1] = (float)((double)(float)GameCamera.camStatics.heroUpActual.y * dVar18);
      pfVar13[2] = (float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar18);
      pfVar13[3] = (float)GameCamera.camStatics.heroUpActual.w;
      *(float *)(uVar9 + 0x40) = (float)(dVar22 - (double)(float)(dVar20 * dVar18));
      fVar8 = *(float *)(uVar9 + 0x60);
      fVar5 = *(float *)(uVar9 + 100);
      fVar6 = *(float *)(uVar9 + 0x68);
      *(float *)(uVar9 + 0x44) = (float)(dVar23 - (double)pfVar13[1]);
      fVar7 = pfVar13[2];
      *(float *)(uVar9 + 0x4c) = fVar3;
      *(float *)(uVar9 + 0x48) = (float)(dVar24 - (double)fVar7);
      fVar3 = DAT_0071d560;
      pfVar13[3] = *(float *)(uVar9 + 0x6c);
      *pfVar13 = fVar3 * (fVar8 - *pfVar13) + *pfVar13;
      pfVar13[1] = fVar3 * (fVar5 - pfVar13[1]) + pfVar13[1];
      pfVar13[2] = fVar3 * (fVar6 - pfVar13[2]) + pfVar13[2];
      return ZEXT48(&DAT_00720000);
    }
  }
  dVar18 = (double)(float)(dVar24 * dVar18 +
                          (double)(float)(dVar22 * dVar20 + (double)(float)(dVar23 * dVar19)));
  *pfVar13 = (float)(dVar20 * dVar18);
  pfVar13[1] = (float)((double)(float)GameCamera.camStatics.heroUpActual.y * dVar18);
  pfVar13[2] = (float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar18);
  pfVar13[3] = (float)GameCamera.camStatics.heroUpActual.w;
  *(float *)(uVar9 + 0x40) = (float)(dVar22 - (double)(float)(dVar20 * dVar18));
  *(float *)(uVar9 + 0x44) = (float)(dVar23 - (double)pfVar13[1]);
  fVar8 = pfVar13[2];
  *(float *)(uVar9 + 0x4c) = fVar3;
  *(float *)(uVar9 + 0x48) = (float)(dVar24 - (double)fVar8);
  return param_1;
}


// 0x002dfbc (0xd8 bytes)
void InterpPitchTarget
               (float gain,float damp,float maxv,float *speed,float *cur,float *targ)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = (double)maxv;
  dVar1 = (double)gain;
  dVar2 = (double)damp;
  fVar4 = Cam_InterpValues(*cur,*targ,gain,damp,maxv,speed);
  *cur = fVar4;
  fVar4 = Cam_InterpValues(cur[1],targ[1],(float)dVar1,(float)dVar2,(float)dVar3,speed);
  cur[1] = fVar4;
  fVar4 = Cam_InterpValues(cur[2],targ[2],(float)dVar1,(float)dVar2,(float)dVar3,speed);
  cur[2] = fVar4;
  return;
}


// 0x002e094 (0x130 bytes)
int GetIdealPitchTarget(void *pCam,float *targOfs,float *ideal,int state)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)pCam + 0x70);
  if (state < 3) {
    if (state == 1) {
      fVar1 = *targOfs + g_heroPosition.x;
      fVar2 = targOfs[1] + g_heroPosition.y;
      fVar3 = targOfs[2] + g_heroPosition.z;
      ideal[3] = targOfs[3];
      *ideal = fVar1;
      ideal[1] = fVar2;
      ideal[2] = fVar3;
      return 1;
    }
  }
  else {
    if (state < 6) {
      fVar1 = targOfs[1];
      fVar2 = targOfs[2];
      fVar3 = targOfs[3];
      *ideal = *targOfs + *(float *)(iVar4 + 0x40);
      ideal[1] = fVar1 + *(float *)(iVar4 + 0x44);
      fVar1 = *(float *)(iVar4 + 0x48);
      ideal[3] = fVar3;
      ideal[2] = fVar2 + fVar1;
      return 0;
    }
    if (state < 8) {
      fVar1 = targOfs[1];
      fVar2 = targOfs[2];
      fVar3 = targOfs[3];
      *ideal = *targOfs + *(float *)(iVar4 + 0x40);
      ideal[1] = fVar1 + *(float *)(iVar4 + 0x44);
      fVar1 = *(float *)(iVar4 + 0x48);
      ideal[3] = fVar3;
      ideal[2] = fVar2 + fVar1;
      return 0;
    }
  }
  fVar1 = targOfs[1];
  fVar2 = targOfs[2];
  fVar3 = targOfs[3];
  *ideal = *targOfs + *(float *)(iVar4 + 0x40);
  ideal[1] = fVar1 + *(float *)(iVar4 + 0x44);
  fVar1 = *(float *)(iVar4 + 0x48);
  ideal[3] = fVar3;
  ideal[2] = fVar2 + fVar1;
  return 1;
}


// 0x002e1c8 (0x18c bytes)
void HandleSpecialPitchTarget(void *param_1,float *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *speed;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  longlong local_40;
  
  iVar2 = *(int *)((int)param_1 + 0x70);
  iVar3 = FastDecTimerS16(iVar2 + 0x106);
  if (iVar3 != 0) {
    *(byte *)(iVar2 + 0x105) = *(byte *)(iVar2 + 0x104);
  }
  local_40 = (longlong)(int)*(short *)(iVar2 + 0x106);
  dVar6 = (double)((float)local_40 * *(float *)(iVar2 + 0x108));
  GetIdealPitchTarget(param_1,param_2,&local_50,(uint)*(byte *)(iVar2 + 0x104));
  cVar1 = *(char *)(iVar2 + 0x104);
  dVar4 = (double)DAT_0071d50c;
  dVar5 = (double)DAT_0071d508;
  if ((((cVar1 == '\x03') || (cVar1 == '\x05')) || (cVar1 == '\x06')) ||
     ((cVar1 == '\a' || (cVar1 == '\x01')))) {
    dVar5 = (double)(float)((double)(float)(dVar5 - (double)DAT_0071d510) * dVar6 +
                           (double)DAT_0071d510);
    dVar4 = (double)(float)((double)(float)(dVar4 - (double)DAT_0071d514) * dVar6 +
                           (double)DAT_0071d514);
  }
  speed = (float *)&DAT_0002e1c4;
  dVar6 = 0.0;
  fVar7 = Cam_InterpValues
                    (*(float *)(iVar2 + 0xd0),local_50,(float)dVar5,(float)dVar4,0.0,
                     (float *)&DAT_0002e1c4);
  *(float *)(iVar2 + 0xd0) = fVar7;
  fVar7 = Cam_InterpValues
                    (*(float *)(iVar2 + 0xd4),local_4c,(float)dVar5,(float)dVar4,(float)dVar6,speed)
  ;
  *(float *)(iVar2 + 0xd4) = fVar7;
  fVar7 = Cam_InterpValues
                    (*(float *)(iVar2 + 0xd8),local_48,(float)dVar5,(float)dVar4,(float)dVar6,speed)
  ;
  *(float *)(iVar2 + 0xd8) = fVar7;
  return;
}


// 0x002e354 (0x30 bytes)
void Cam0_SetCamHeight(double param_1,double param_2)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar1 + 0x16e) = 1;
    *(float *)(iVar1 + 0x17c) = (float)param_1;
    *(float *)(iVar1 + 0x184) = (float)param_2;
  }
  return;
}


// 0x002e3a0 (0x9d8 bytes)
void UpdateCamTarget_0(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined2 uVar3;
  float fVar4;
  undefined4 uVar5;
  float *speed;
  int iVar6;
  short sVar7;
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
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  float fVar26;
  float fVar27;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<4> local_b0;
  float local_ac;
  float local_a8;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  dVar22 = (double)g_heroPosition.x;
  dVar21 = (double)g_heroPosition.y;
  dVar19 = (double)g_heroPosition.z;
  dVar17 = (double)g_heroPosition.w;
  HandleSpecialTargetActivation(param_1);
  speed = (float *)HandleSpecialTargetUpVec(param_1,&local_e0);
  *(float *)(uVar2 + 0x50) = local_e0;
  *(undefined4 *)(uVar2 + 0x54) = local_dc;
  *(undefined4 *)(uVar2 + 0x58) = local_d8;
  *(undefined4 *)(uVar2 + 0x5c) = local_d4;
  dVar15 = 0.0;
  dVar14 = (double)*(float *)(uVar2 + 0xac);
  dVar8 = (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.z *
                          (double)*(float *)(uVar2 + 0xa8) +
                         (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.x *
                                         (double)*(float *)(uVar2 + 0xa0) +
                                        (double)(float)((double)(float)GameCamera.field17_0x1b4.
                                                                       _16_4_ *
                                                       (double)*(float *)(uVar2 + 0xa4))));
  fVar26 = (float)((double)(float)GameCamera.camStatics.heroUpActual.x * dVar8);
  dVar13 = (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.y * dVar8);
  dVar12 = (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar8);
  dVar11 = (double)(float)((double)*(float *)(uVar2 + 0xa0) - (double)fVar26);
  dVar10 = (double)(float)((double)*(float *)(uVar2 + 0xa4) - dVar13);
  dVar9 = (double)(float)((double)*(float *)(uVar2 + 0xa8) - dVar12);
  fVar26 = Cam_InterpValues
                     (fVar26,local_e0,*(float *)(uVar2 + 0x124),*(float *)(uVar2 + 0x128),0.0,speed)
  ;
  dVar8 = (double)fVar26;
  fVar26 = Cam_InterpValues
                     ((float)dVar13,*(float *)(uVar2 + 0x54),*(float *)(uVar2 + 0x124),
                      *(float *)(uVar2 + 0x128),(float)dVar15,speed);
  dVar13 = (double)fVar26;
  fVar26 = Cam_InterpValues
                     ((float)dVar12,*(float *)(uVar2 + 0x58),*(float *)(uVar2 + 0x124),
                      *(float *)(uVar2 + 0x128),(float)dVar15,speed);
  dVar12 = (double)fVar26;
  fVar26 = Cam_InterpValues
                     ((float)dVar11,*(float *)(uVar2 + 0x40),*(float *)(uVar2 + 0x11c),
                      *(float *)(uVar2 + 0x120),(float)dVar15,speed);
  dVar11 = (double)fVar26;
  fVar26 = Cam_InterpValues
                     ((float)dVar10,*(float *)(uVar2 + 0x44),*(float *)(uVar2 + 0x11c),
                      *(float *)(uVar2 + 0x120),(float)dVar15,speed);
  dVar10 = (double)fVar26;
  fVar27 = Cam_InterpValues
                     ((float)dVar9,*(float *)(uVar2 + 0x48),*(float *)(uVar2 + 0x11c),
                      *(float *)(uVar2 + 0x120),(float)dVar15,speed);
  *(float *)(uVar2 + 0xac) = (float)dVar14;
  fVar26 = *(float *)(uVar2 + 0xf0);
  *(float *)(uVar2 + 0xa8) = (float)((double)fVar27 + dVar12);
  *(float *)(uVar2 + 0x40) = *(float *)(uVar2 + 0x40) + *(float *)(uVar2 + 0x50);
  *(float *)(uVar2 + 0xa0) = (float)(dVar11 + dVar8);
  *(float *)(uVar2 + 0xa4) = (float)(dVar10 + dVar13);
  *(float *)(uVar2 + 0x44) = *(float *)(uVar2 + 0x44) + *(float *)(uVar2 + 0x54);
  *(float *)(uVar2 + 0x48) = *(float *)(uVar2 + 0x48) + *(float *)(uVar2 + 0x58);
  uVar5 = GameCamera.camStatics.heroUp.w;
  fVar27 = GameCamera.camStatics.heroUp.x * fVar26;
  fVar4 = (float)GameCamera.camStatics.heroUp.y * fVar26;
  fVar26 = (float)GameCamera.camStatics.heroUp.z * fVar26;
  if (*(char *)(uVar2 + 0x116) == '\0') {
    FastDecTimerS16((ulonglong)uVar2 + 0x118);
    if (*(short *)(uVar2 + 0x118) < 0) {
      *(undefined2 *)(uVar2 + 0x118) = 0;
    }
    dVar8 = (double)FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)DAT_0071d500 + 0.5)));
    fVar1 = (float)((double)(longlong)(int)*(short *)(uVar2 + 0x118) / dVar8);
    *(float *)(uVar2 + 0x80) =
         fVar27 + fVar1 * (*(float *)(uVar2 + 0xa0) - *(float *)(uVar2 + 0x40)) +
                  *(float *)(uVar2 + 0x40);
    *(float *)(uVar2 + 0x84) =
         fVar4 + fVar1 * (*(float *)(uVar2 + 0xa4) - *(float *)(uVar2 + 0x44)) +
                 *(float *)(uVar2 + 0x44);
    *(float *)(uVar2 + 0x88) =
         fVar26 + fVar1 * (*(float *)(uVar2 + 0xa8) - *(float *)(uVar2 + 0x48)) +
                  *(float *)(uVar2 + 0x48);
  }
  else {
    sVar7 = *(short *)(uVar2 + 0x118) + 1;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    *(short *)(uVar2 + 0x118) = sVar7;
    auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar24 = loadVectorLeftIndexed(0xffffffffffffd500,0x720000);
    auVar23 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar24 = loadVectorLeftIndexed(4,0x2e384);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = vectorAddFloatingPoint
                        (auVar23,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar25);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    if ((int)(animationSpeed * ((float)(longlong)DAT_0071d500 + 0.5)) < (int)sVar7) {
      auVar24 = vectorSplatHalfWord(auVar24,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar24,0x118,(ulonglong)uVar2);
      *(undefined2 *)(uVar2 + 0x118) = uVar3;
    }
    dVar8 = (double)FastIntToDouble
                              ((int)(animationSpeed * ((float)(longlong)DAT_0071d500 + 0.5)));
    fVar1 = (float)((double)(longlong)(int)*(short *)(uVar2 + 0x118) / dVar8);
    *(float *)(uVar2 + 0x80) =
         fVar27 + fVar1 * (*(float *)(uVar2 + 0xa0) - *(float *)(uVar2 + 0x40)) +
                  *(float *)(uVar2 + 0x40);
    *(float *)(uVar2 + 0x84) =
         fVar4 + fVar1 * (*(float *)(uVar2 + 0xa4) - *(float *)(uVar2 + 0x44)) +
                 *(float *)(uVar2 + 0x44);
    *(float *)(uVar2 + 0x88) =
         fVar26 + fVar1 * (*(float *)(uVar2 + 0xa8) - *(float *)(uVar2 + 0x48)) +
                  *(float *)(uVar2 + 0x48);
  }
  *(undefined4 *)(uVar2 + 0x8c) = uVar5;
  HandleSpecialPitchTarget(param_1,local_d0);
  uVar5 = GameCamera.camStatics.heroUp.w;
  if (g_heroType == '\x02') {
    dVar8 = (double)(GameCamera.camStatics.heroUp.x * 3.0);
    dVar13 = (double)((float)GameCamera.camStatics.heroUp.y * 3.0);
    dVar12 = (double)((float)GameCamera.camStatics.heroUp.z * 3.0);
  }
  else if (g_heroType == '\x01') {
    dVar8 = (double)(GameCamera.camStatics.heroUp.x * 0.4);
    dVar13 = (double)((float)GameCamera.camStatics.heroUp.y * 0.4);
    dVar12 = (double)((float)GameCamera.camStatics.heroUp.z * 0.4);
  }
  else {
    dVar8 = (double)(GameCamera.camStatics.heroUp.x * 0.5);
    dVar13 = (double)((float)GameCamera.camStatics.heroUp.y * 0.5);
    dVar12 = (double)((float)GameCamera.camStatics.heroUp.z * 0.5);
  }
  fVar27 = (float)dVar17;
  fVar26 = *(float *)(uVar2 + 0x160);
  fVar4 = (float)GameCamera.camStatics.heroUp.y * fVar26;
  fVar1 = (float)GameCamera.camStatics.heroUp.z * fVar26;
  *(float *)(uVar2 + 0x90) = GameCamera.camStatics.heroUp.x * fVar26 + *(float *)(uVar2 + 0x40);
  *(float *)(uVar2 + 0x94) = fVar4 + *(float *)(uVar2 + 0x44);
  *(float *)(uVar2 + 0x98) = fVar1 + *(float *)(uVar2 + 0x48);
  *(undefined4 *)(uVar2 + 0x9c) = uVar5;
  dVar10 = 20.0;
  iVar6 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  fVar1 = (float)(dVar22 + dVar8) + GameCamera.camStatics.heroUp.x * 20.0;
  dVar9 = (double)(*(float *)(iVar6 + 0x214) * *(float *)(iVar6 + 0x20c) *
                   (*(float *)(iVar6 + 0x210) - 1.0) + DAT_0071d4b8);
  fVar4 = (float)(dVar21 + dVar13) + (float)GameCamera.camStatics.heroUp.y * 20.0;
  fVar26 = (float)GameCamera.camStatics.heroUp.z * 20.0 + (float)(dVar19 + dVar12);
  iVar6 = CollLine(local_c0,local_b0,CAMERA_COLL_FLAGS,g_heroMobyPtr,0);
  dVar11 = (double)GameCamera.camStatics.heroUp.x;
  if (iVar6 != 0) {
    fVar27 = g_CollOutput.ip.w;
    fVar26 = g_CollOutput.ip.z;
    fVar4 = g_CollOutput.ip.y;
    fVar1 = g_CollOutput.ip.x;
  }
  dVar20 = (double)fVar1;
  dVar18 = (double)fVar4;
  dVar16 = (double)fVar26;
  dVar17 = (double)fVar27;
  dVar15 = (double)(float)GameCamera.camStatics.heroUp.y;
  dVar14 = (double)(float)GameCamera.camStatics.heroUp.z;
  iVar6 = CollLine(local_c0,local_b0,CAMERA_COLL_FLAGS,g_heroMobyPtr,0);
  uVar5 = GameCamera.camStatics.heroUp.w;
  local_ac = (float)(dVar21 + dVar13) - (float)(dVar15 * dVar10);
  local_a8 = -(float)(dVar14 * dVar10 - (double)(float)(dVar19 + dVar12));
  fVar26 = (float)(dVar22 + dVar8) - (float)(dVar11 * dVar10);
  if (iVar6 != 0) {
    local_ac = g_CollOutput.ip.y;
    local_a8 = g_CollOutput.ip.z;
    fVar26 = g_CollOutput.ip.x;
  }
  dVar8 = (double)fVar26;
  dVar12 = (double)local_a8;
  dVar13 = (double)local_ac;
  if ((float)(dVar9 * 2.0) <=
      SQRT((float)(dVar12 - dVar16) * (float)(dVar12 - dVar16) +
           (float)(dVar8 - dVar20) * (float)(dVar8 - dVar20) +
           (float)(dVar13 - dVar18) * (float)(dVar13 - dVar18))) {
    dVar14 = (double)*(float *)(uVar2 + 0x44);
    dVar10 = (double)*(float *)(uVar2 + 0x40);
    dVar15 = (double)*(float *)(uVar2 + 0x48);
    dVar11 = (double)*(float *)(uVar2 + 0x160);
    if ((float)(dVar9 + dVar11) <
        SQRT((float)(dVar16 - dVar15) * (float)(dVar16 - dVar15) +
             (float)(dVar20 - dVar10) * (float)(dVar20 - dVar10) +
             (float)(dVar18 - dVar14) * (float)(dVar18 - dVar14))) {
      if ((float)(dVar12 * (double)(float)GameCamera.camStatics.heroUpActual.z +
                 (double)(float)(dVar8 * (double)(float)GameCamera.camStatics.heroUpActual.x +
                                (double)(float)(dVar13 * (double)(float)GameCamera.field17_0x1b4.
                                                                        _16_4_))) <
          (float)(dVar15 * (double)(float)GameCamera.camStatics.heroUpActual.z +
                 (double)(float)(dVar10 * (double)(float)GameCamera.camStatics.heroUpActual.x +
                                (double)(float)(dVar14 * (double)(float)GameCamera.field17_0x1b4.
                                                                        _16_4_)))) {
        local_ac = *(float *)(uVar2 + 0x44);
        local_a8 = *(float *)(uVar2 + 0x48);
        dVar8 = dVar10;
      }
      dVar12 = (double)(float)GameCamera.camStatics.heroUp.y;
      dVar13 = (double)(float)GameCamera.camStatics.heroUp.z;
      *(float *)(uVar2 + 0x90) =
           (float)((double)(float)((double)GameCamera.camStatics.heroUp.x * dVar11) + dVar8);
      *(float *)(uVar2 + 0x94) = (float)(dVar12 * dVar11) + local_ac;
      *(float *)(uVar2 + 0x98) = (float)(dVar13 * dVar11) + local_a8;
      *(undefined4 *)(uVar2 + 0x9c) = uVar5;
    }
    else {
      dVar8 = (double)(float)GameCamera.camStatics.heroUp.y;
      dVar13 = (double)GameCamera.camStatics.heroUp.x;
      dVar12 = -(double)(float)(dVar8 * dVar9 - dVar18);
      dVar11 = -(double)(float)(dVar13 * dVar9 - dVar20);
      dVar19 = (double)(float)GameCamera.camStatics.heroUp.z;
      *(float *)(uVar2 + 0x9c) = (float)dVar17;
      dVar9 = -(double)(float)(dVar19 * dVar9 - dVar16);
      *(float *)(uVar2 + 0x94) = (float)dVar12;
      *(float *)(uVar2 + 0x90) = (float)dVar11;
      *(float *)(uVar2 + 0x98) = (float)dVar9;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar6 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar6 + 0x16e) = 1;
        *(float *)(iVar6 + 0x17c) =
             (float)((double)(float)(dVar9 - dVar15) * dVar19 +
                    (double)(float)((double)(float)(dVar11 - dVar10) * dVar13 +
                                   (double)(float)((double)(float)(dVar12 - dVar14) * dVar8)));
        *(undefined4 *)(iVar6 + 0x184) = 0x3b449ba6;
      }
    }
  }
  else {
    *(float *)(uVar2 + 0x9c) = (float)dVar17;
    fVar26 = (float)(dVar18 + dVar13) * 0.5;
    fVar27 = (float)(dVar20 + dVar8) * 0.5;
    fVar4 = (float)(dVar16 + dVar12) * 0.5;
    *(float *)(uVar2 + 0x94) = fVar26;
    *(float *)(uVar2 + 0x90) = fVar27;
    *(float *)(uVar2 + 0x98) = fVar4;
    fVar26 = (fVar26 - *(float *)(uVar2 + 0x44)) * (float)GameCamera.camStatics.heroUp.y;
    fVar27 = (fVar27 - *(float *)(uVar2 + 0x40)) * GameCamera.camStatics.heroUp.x;
    fVar4 = (fVar4 - *(float *)(uVar2 + 0x48)) * (float)GameCamera.camStatics.heroUp.z;
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      iVar6 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
      *(undefined2 *)(iVar6 + 0x16e) = 1;
      *(float *)(iVar6 + 0x17c) = fVar4 + fVar27 + fVar26;
      *(undefined4 *)(iVar6 + 0x184) = 0x3b449ba6;
    }
  }
  return;
}


// 0x002ed78 (0x8 bytes)
undefined8 STUB_0002ed78(...)

{
  return 0;
}


// 0x002ed80 (0x4 bytes)
void STUB_0002ed80(...)

{
  return;
}


// 0x002ed84 (0x4 bytes)
void STUB_0002ed84(...)

{
  return;
}


// 0x002ed88 (0x4 bytes)
void STUB_0002ed88(...)

{
  return;
}


// 0x002ed8c (0x4 bytes)
void STUB_0002ed8c(...)

{
  return;
}


// 0x002ed90 (0x4 bytes)
void STUB_0002ed90(...)

{
  return;
}


// 0x002ed94 (0x4 bytes)
void STUB_0002ed94(...)

{
  return;
}


// 0x002ed98 (0x4 bytes)
void STUB_0002ed98(...)

{
  return;
}


// 0x002ed9c (0x4 bytes)
void STUB_0002ed9c(...)

{
  return;
}


// 0x002eda8 (0x24c bytes)
void UpdateCameraOffset_0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x70);
  *(float *)(iVar2 + 0x1bc) = g_CameraSpeed;
  dVar5 = 0.0;
  *(undefined4 *)(iVar2 + 0x1c4) = 0;
  *(undefined4 *)(iVar2 + 0x1c8) = 0;
  *(undefined4 *)(iVar2 + 0x1b8) = 0;
  *(undefined4 *)(iVar2 + 0x1cc) = 0;
  pvVar4 = BackupCam.control;
  if (*(short *)(iVar3 + 0x16c) == 0) {
    fVar6 = Cam_InterpValues
                      (*(float *)(iVar3 + 0x15c),*(float *)((int)BackupCam.control + 0x15c),
                       *(float *)(iVar3 + 0x178),DAT_0071d4e4,0.0,(float *)(iVar3 + 0x174));
  }
  else {
    fVar6 = Cam_InterpValues
                      (*(float *)(iVar3 + 0x15c),*(float *)(iVar3 + 0x170),*(float *)(iVar3 + 0x178)
                       ,DAT_0071d4e4,0.0,(float *)(iVar3 + 0x174));
  }
  *(float *)(iVar3 + 0x15c) = fVar6;
  if (*(short *)(iVar3 + 0x16e) == 0) {
    fVar6 = Cam_InterpValues
                      (*(float *)(iVar3 + 0x160),*(float *)((int)pvVar4 + 0x160),
                       *(float *)(iVar3 + 0x184),DAT_0071d4e8,(float)dVar5,(float *)(iVar3 + 0x180))
    ;
  }
  else {
    fVar6 = Cam_InterpValues
                      (*(float *)(iVar3 + 0x160),*(float *)(iVar3 + 0x17c),*(float *)(iVar3 + 0x184)
                       ,DAT_0071d4e8,(float)dVar5,(float *)(iVar3 + 0x180));
  }
  *(float *)(iVar3 + 0x160) = fVar6;
  if (*(short *)(iVar3 + 0x11a) == 0) {
    fVar6 = Cam_InterpValues
                      (*(float *)(iVar3 + 0xf0),*(float *)((int)pvVar4 + 0xf0),
                       *(float *)(iVar3 + 0xf8),0.2,(float)dVar5,(float *)(iVar3 + 0xfc));
  }
  else {
    fVar6 = Cam_InterpValues
                      (*(float *)(iVar3 + 0xf0),*(float *)(iVar3 + 0xf4),*(float *)(iVar3 + 0xf8),
                       0.2,(float)dVar5,(float *)(iVar3 + 0xfc));
  }
  *(float *)(iVar3 + 0xf0) = fVar6;
  *(undefined2 *)(iVar3 + 0x16c) = 0;
  *(undefined2 *)(iVar3 + 0x16e) = 0;
  uVar1 = *(undefined4 *)((int)pvVar4 + 0x15c);
  *(undefined4 *)(iVar3 + 0x170) = 0;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar3 + 0x17c) = 0;
  *(undefined4 *)(iVar3 + 0x188) = uVar1;
  *(undefined2 *)(iVar3 + 0x11a) = 0;
  *(undefined4 *)(iVar3 + 0xf4) = 0;
  *(undefined2 *)(iVar2 + 0x10) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0x70) + 0x22) = 0;
  uVar1 = DAT_0071d480;
  *(undefined4 *)(iVar3 + 0x120) = 0x3e4ccccd;
  *(undefined4 *)(iVar3 + 0x11c) = uVar1;
  uVar1 = DAT_0071d480;
  *(undefined1 *)(iVar3 + 0x116) = 0;
  *(undefined4 *)(iVar3 + 0x124) = uVar1;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(iVar3 + 0x128) = 0x3e4ccccd;
  *(undefined4 *)(iVar2 + 0x214) = DAT_0071d4bc;
  *(undefined4 *)(iVar2 + 0x20c) = DAT_0071d4c4;
  *(undefined4 *)(iVar2 + 0x210) = DAT_0071d4c0;
  *(int *)(iVar2 + 0x218) = CAMERA_COLL_BUMP_FLAGS;
  iVar2 = *(int *)(param_1 + 0x70);
  *(undefined2 *)(iVar2 + 0x226) = 0;
  *(undefined4 *)(iVar2 + 0x22c) = DAT_0071d4fc;
  return;
}


// 0x002eff8 (0x44 bytes)
void Cam0_SetCPosGainDamp(double param_1,double param_2)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    if (param_1 != 0.0) {
      *(float *)(iVar1 + 0x11c) = (float)param_1;
    }
    if (param_2 != 0.0) {
      *(float *)(iVar1 + 0x120) = (float)param_2;
    }
  }
  return;
}


// 0x002f03c (0x28 bytes)
void Cam0_disableLOS(void)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined1 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x116) = 1;
  }
  return;
}


// 0x002f064 (0x24 bytes)
void Cam0_SetCamPull(undefined2 param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x10) = param_1;
  }
  return;
}


// 0x002f0a0 (0x21c bytes)
double AzmLookAtDir(double param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar1 = *(int *)(param_2 + 0x70);
  fVar2 = param_3[2] * (float)GameCamera.camStatics.heroUp.z +
          *param_3 * GameCamera.camStatics.heroUp.x + param_3[1] * (float)GameCamera.camStatics.heroUp.y;
  dVar15 = 0.0;
  fVar5 = -((float)GameCamera.camStatics.heroUp.y * fVar2 - param_3[1]);
  fVar3 = -(GameCamera.camStatics.heroUp.x * fVar2 - *param_3);
  fVar6 = -((float)GameCamera.camStatics.heroUp.z * fVar2 - param_3[2]);
  fVar7 = *(float *)(iVar1 + 0x138) * (float)GameCamera.camStatics.heroUp.z +
          *(float *)(iVar1 + 0x130) * GameCamera.camStatics.heroUp.x +
          *(float *)(iVar1 + 0x134) * (float)GameCamera.camStatics.heroUp.y;
  fVar8 = -((float)GameCamera.camStatics.heroUp.y * fVar7 - *(float *)(iVar1 + 0x134));
  fVar4 = -(GameCamera.camStatics.heroUp.x * fVar7 - *(float *)(iVar1 + 0x130));
  fVar2 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar7 = -((float)GameCamera.camStatics.heroUp.z * fVar7 - *(float *)(iVar1 + 0x138));
  if ((fVar2 != 0.0) &&
     (fVar2 = fVar2 * SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar8 * fVar8), fVar2 != 0.0)) {
    fVar2 = (fVar6 * fVar7 + fVar3 * fVar4 + fVar5 * fVar8) / fVar2;
    dVar12 = 1.0;
    dVar13 = -1.0;
    fVar9 = fVar2;
    if (fVar2 - 0.0 < 0.0) {
      fVar9 = ABS(fVar2);
    }
    dVar10 = dVar12;
    if (fVar2 - 0.0 < 0.0) {
      dVar10 = dVar13;
    }
    dVar11 = (double)(1.0 - fVar9);
    if ((double)(1.0 - fVar9) - 0.0 < 0.0) {
      dVar11 = dVar15;
    }
    dVar14 = dVar12;
    if (((GameCamera.camStatics.heroUp.x * fVar5 - (float)GameCamera.camStatics.heroUp.y * fVar3) * fVar7
        + ((float)GameCamera.camStatics.heroUp.y * fVar6 -
          (float)GameCamera.camStatics.heroUp.z * fVar5) * fVar4 +
          ((float)GameCamera.camStatics.heroUp.z * fVar3 - GameCamera.camStatics.heroUp.x * fVar6) * fVar8
        ) - 0.0 < 0.0) {
      dVar14 = dVar13;
    }
    dVar16 = dVar15;
    dVar15 = (double)FastDiffRots
                               (0x400921fb60000000,
                                -(double)(float)(-(double)((fVar9 * fVar9 * fVar9 * DAT_007358cc +
                                                           fVar9 * fVar9 * DAT_007358c8 +
                                                           fVar9 * DAT_007358c4 + DAT_007358c0) *
                                                           (float)SQRT(dVar11) - 1.5707964) * dVar10
                                                - 1.5707963705062866));
    if ((param_1 == dVar16) || (ABS(dVar15) <= param_1)) {
      dVar10 = (double)(float)(dVar15 * 0.6366197466850281);
      if (dVar12 - (double)(float)(dVar15 * 0.6366197466850281) < 0.0) {
        dVar10 = dVar12;
      }
      dVar12 = (double)MB_catmullRom(dVar13,dVar16,dVar12,dVar16,dVar10);
      *(float *)(iVar1 + 0x1c4) = (float)(dVar14 * dVar12);
    }
  }
  return dVar15;
}


// 0x002f2bc (0x60 bytes)
void AzmLookAtPos(undefined4 param_1)

{
  GPiece<16> local_10;
  
  AzmLookAtDir(param_1,local_10);
  return;
}


// 0x002f31c (0x94 bytes)
void Cam0_ForceLookAtPos(double param_1,undefined8 param_2)

{
  void *pvVar1;
  GPiece<16> local_10;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) = (float)param_1;
    AzmLookAtDir(param_2,pvVar1,local_10);
  }
  return;
}


// 0x002f3b0 (0x28 bytes)
void Cam0_RunningAtCamOff(void)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x226) = 1;
  }
  return;
}


// 0x002f3d8 (0x3c bytes)
void Cam0_SetCamDist(double param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar1 + 0x16c) = 1;
    *(float *)(iVar1 + 0x170) = (float)param_1;
    *(float *)(iVar1 + 0x178) = (float)param_2;
    if (param_4 != 0) {
      *(float *)(iVar1 + 0x188) = (float)param_1;
    }
  }
  return;
}


// 0x002f414 (0x54 bytes)
void Cam0_SetCamOfsZ(double param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar1 + 0x11a) = 1;
    *(float *)(iVar1 + 0xf8) = (float)param_2;
    if (param_4 != 0) {
      param_1 = (double)(float)((double)*(float *)((int)BackupCam.control + 0xf0) + param_1)
      ;
    }
    *(float *)(iVar1 + 0xf4) = (float)param_1;
  }
  return;
}


// 0x002f470 (0x6c bytes)
void Cam0_ForceLookAtDir(double param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  if ((*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) && (param_1 != 0.0)) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) = (float)param_1;
    AzmLookAtDir(param_2,pvVar1,param_3);
  }
  return;
}


// 0x002f530 (0xaa0 bytes)
// strings: 0002f504: '>VwPAp' (raw)

void ____Cam0_UpdateTargetSpecial(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  uint uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined4 uVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  undefined4 *puVar14;
  int iVar15;
  GAMECAMERA *pGVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> local_a0;
  GPiece<40> local_90;
  
  iVar12 = *(int *)(param_1 + 0x70);
  bVar7 = false;
  if ((g_HeroRequestedCamType == 0xd) && (*(int *)(iVar12 + 0x230) != 0x14d)) {
    FastWrapRot(DAT_0096a1c4,3.1415927);
    pvVar9 = GameCamera.pCurrentUpdCam;
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) = 0x3e567750;
      AzmLookAtDir(0,pvVar9,local_a0);
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      *(undefined1 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x116) = 1;
    }
  }
  bVar1 = g_heroStateType == 5;
  bVar2 = g_heroStateType == 0x10;
  bVar3 = g_heroStateType != 0xf;
  if ((g_heroStateType == 0x11) &&
     (*(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000,
     *(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0)) {
    iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    *(undefined2 *)(iVar10 + 0x16e) = 1;
    *(undefined4 *)(iVar10 + 0x17c) = 0x3f000000;
    *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
  }
  if (bVar1) {
    bVar7 = true;
    if (g_heroType == '\x01') {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = 0x3fc00000;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = 0x40200000;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
  }
  if (bVar2) {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xf0) = 0x3e800000;
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  bVar1 = g_heroType == '\x02';
  if (g_heroType == '\x01') {
    if (*(int *)(iVar12 + 0x220) == 0) {
      iVar10 = *(int *)(param_1 + 0x70);
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar15 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar15 + 0x16c) = 1;
        *(undefined4 *)(iVar15 + 0x170) = 0x40400000;
        *(undefined4 *)(iVar15 + 0x178) = 0x3b449ba6;
        *(undefined4 *)(iVar15 + 0x188) = 0x40400000;
      }
      if ((!bVar7) &&
         (*(undefined4 *)(iVar10 + 0xf0) = 0x3f800000, *(short *)((int)pvVar9 + 0x86) == 0)) {
        iVar10 = *(int *)((int)pvVar9 + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = 0x3f800000;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x20c) = 0x3f19999a;
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  uVar8 = DAT_0071d56c;
  if (bVar1) {
    if (*(int *)(iVar12 + 0x230) < 2) {
      sVar13 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86);
      if (sVar13 == 0) {
        iVar10 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        *(undefined2 *)(iVar10 + 0x11a) = 1;
        *(undefined4 *)(iVar10 + 0xf8) = 0x3ba3d70a;
        *(undefined4 *)(iVar10 + 0xf4) = uVar8;
        sVar13 = *(short *)((int)pvVar9 + 0x86);
      }
      uVar8 = DAT_0071d570;
      if (sVar13 == 0) {
        iVar10 = *(int *)((int)pvVar9 + 0x70);
        *(undefined2 *)(iVar10 + 0x16c) = 1;
        *(undefined4 *)(iVar10 + 0x170) = uVar8;
        *(undefined4 *)(iVar10 + 0x178) = 0x3b449ba6;
        *(undefined4 *)(iVar10 + 0x188) = uVar8;
        sVar13 = *(short *)((int)pvVar9 + 0x86);
      }
      uVar8 = DAT_0071d574;
      if (sVar13 == 0) {
        iVar10 = *(int *)((int)pvVar9 + 0x70);
        *(undefined2 *)(iVar10 + 0x16e) = 1;
        *(undefined4 *)(iVar10 + 0x17c) = uVar8;
        *(undefined4 *)(iVar10 + 0x184) = 0x3b449ba6;
      }
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x226) = 1;
    }
    iVar10 = *(int *)(param_1 + 0x70);
    *(undefined4 *)(iVar10 + 0x20c) = DAT_0071d57c;
    *(undefined4 *)(iVar10 + 0x214) = DAT_0071d578;
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  if ((DAT_0096bd8a != '\0') && (bVar3)) {
    sVar13 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86);
    if (sVar13 == 0) {
      *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x10) = 0;
      sVar13 = *(short *)((int)pvVar9 + 0x86);
    }
    if ((sVar13 == 0) &&
       (*(undefined1 *)(*(int *)((int)pvVar9 + 0x70) + 0x116) = 1,
       *(short *)((int)pvVar9 + 0x86) == 0)) {
      iVar10 = *(int *)((int)pvVar9 + 0x70);
      *(undefined4 *)(iVar10 + 0x11c) = 0x3d23d70a;
      *(undefined4 *)(iVar10 + 0x120) = 0x3e4ccccd;
    }
  }
  pGVar16 = &GameCamera;
  if (GameCamera.ofsUpdate != NULL) {
    GameCamera.ofsUpdate();
  }
  if ((GameCamera.camStatics.fadeIdeal != 0) && (*(int *)(iVar12 + 0x230) < 2)) {
    if (*(byte *)(GameCamera.camStatics.fadeIdeal + 0x20) < 0x80) {
      if ((0x3e999999 < (uint)ABS(g_Pad.sticks.x)) || (0x3e999999 < (uint)ABS(g_Pad.sticks.y))) {
        ((u8 *)&GameCamera.camStatics)[204 + 4] = '\0';
        ((u8 *)&GameCamera.camStatics)[204 + 5] = '\0';
        ((u8 *)&GameCamera.camStatics)[204 + 6] = '\0';
        ((u8 *)&GameCamera.camStatics)[204 + 7] = '\0';
      }
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      GameCamera.camStatics.fadeTimer = GameCamera.camStatics.fadeTimer + 1;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      dVar21 = 400.5;
      auVar23 = loadVectorLeftIndexed(0x24,0x2f4dc);
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      iVar10 = GameCamera.camStatics.fadeTimer;
      if ((int)(animationSpeed * 400.5) < (int)GameCamera.camStatics.fadeTimer) {
        auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.camStatics.fadeTimer =
             storeVectorElementWordIndexed
                       (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x260,0x9513c0
                       );
        iVar10 = (int)(animationSpeed * 400.5);
      }
      dVar22 = (double)FastIntToDouble(iVar10);
      dVar21 = (double)FastIntToDouble((int)((double)animationSpeed * dVar21));
      pvVar9 = GameCamera.pCurrentUpdCam;
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1bc) =
             (float)(dVar22 / dVar21) * 0.20943952;
        AzmLookAtDir(0,pvVar9,local_90);
      }
    }
    else {
      ((u8 *)&GameCamera.camStatics)[204 + 0] = '\0';
      ((u8 *)&GameCamera.camStatics)[204 + 1] = '\0';
      ((u8 *)&GameCamera.camStatics)[204 + 2] = '\0';
      ((u8 *)&GameCamera.camStatics)[204 + 3] = '\0';
    }
  }
  *(undefined4 *)(iVar12 + 0x230) = 0;
  iVar10 = CollMobySphere
                     (0x402e000000000000,&g_heroPosition,&DAT_0002f4dc,1,g_heroMobyPtr,0);
  if ((0 < iVar10) && (iVar15 = 0, 0 < iVar10)) {
    puVar14 = &g_CollMobyHits;
    dVar21 = 0.0;
    do {
      iVar11 = MB_GetPvarsIfMobyHasThem((MobyInstance *)*puVar14);
      if ((iVar11 != 0) && ((double)*(byte *)(iVar11 + 0xd) != dVar21)) {
        *(undefined4 *)(iVar12 + 0x230) = 1;
        break;
      }
      iVar15 = iVar15 + 1;
      puVar14 = puVar14 + 1;
    } while (iVar15 < iVar10);
  }
  pvVar9 = GameCamera.pCurrentUpdCam;
  if ((g_heroState == THRUSTER_PACK_HOVER) && ((g_Pad.downButtons & (R2|L2)) != 0)) {
    sVar13 = *(short *)((int)GameCamera.pCurrentUpdCam + 0x86);
    if (sVar13 == 0) {
      *(undefined2 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x10) = 0;
      sVar13 = *(short *)((int)pvVar9 + 0x86);
    }
    if ((sVar13 == 0) &&
       (*(undefined1 *)(*(int *)((int)pvVar9 + 0x70) + 0x116) = 1,
       *(short *)((int)pvVar9 + 0x86) == 0)) {
      iVar12 = *(int *)((int)pvVar9 + 0x70);
      *(undefined4 *)(iVar12 + 0x11c) = 0x3d23d70a;
      *(undefined4 *)(iVar12 + 0x120) = 0x3e4ccccd;
    }
    iVar12 = *(int *)(param_1 + 0x70);
    *(undefined2 *)(iVar12 + 0x16) = 0;
    *(undefined2 *)(iVar12 + 0x12) = 0;
    *(undefined2 *)(iVar12 + 0x14) = 0;
  }
  else if (DAT_0092e288 != 0) {
    uVar5 = *(uint *)(param_1 + 0x70);
    uVar17 = (ulonglong)uVar5;
    iVar12 = 0;
    dVar22 = 0.0;
    dVar21 = dVar22;
    do {
      dVar18 = (double)FastSubRots
                                 (*(float *)(pGVar16->field17_0x1b4 + 0x88),
                                  *(float *)(pGVar16->field17_0x1b4 + 0x8c));
      iVar12 = iVar12 + 1;
      dVar21 = (double)(float)(dVar21 + dVar18);
      pGVar16 = (GAMECAMERA *)&(pGVar16->mtx0).v0.y;
    } while (iVar12 < 4);
    fVar4 = (float)(dVar21 * 0.25) * 5.0;
    if (1.0 - fVar4 < 0.0) {
      fVar4 = 1.0;
    }
    if (1.0 - fVar4 < DAT_0071d564) {
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar23 = loadVectorLeftIndexed(0x3c,0x2f4dc);
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      auVar23 = vectorSplatHalfWord(auVar23,1);
      uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x12,uVar17);
      *(undefined2 *)(uVar5 + 0x12) = uVar6;
    }
    if (*(short *)(uVar5 + 0x12) == 0) {
      dVar21 = 0.75;
      if (*(short *)(uVar5 + 0x14) == 0) {
        *(undefined2 *)(uVar5 + 0x16) = 0;
        DAT_0071ea50 = 0.75;
      }
      else {
        FastDecTimerS16(uVar17 + 0x14);
        dVar22 = (double)FastIntToDouble(*(undefined2 *)(uVar5 + 0x14));
        dVar18 = (double)FastIntToDouble((int)(animationSpeed * 45.5));
        DAT_0071ea50 = (float)((double)(float)(dVar22 / dVar18) * -0.75 + dVar21);
        *(undefined2 *)(uVar5 + 0x16) = 0;
      }
    }
    else {
      iVar12 = FastDecTimerS16(uVar17 + 0x12);
      pvVar9 = GameCamera.pCurrentUpdCam;
      if (iVar12 != 0) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = loadVectorLeftIndexed(0x40,0x2f4dc);
        auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                             auVar24);
        auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
        auVar23 = vectorSplatHalfWord(auVar23,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x14,uVar17);
        *(undefined2 *)(uVar5 + 0x14) = uVar6;
      }
      if (*(short *)((int)pvVar9 + 0x86) == 0) {
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x70) + 0x116) = 1;
      }
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      iVar12 = *(ushort *)(uVar5 + 0x16) + 1;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      sVar13 = (short)iVar12;
      *(short *)(uVar5 + 0x16) = sVar13;
      dVar21 = 30.5;
      auVar23 = loadVectorLeftIndexed(0x44,0x2f4dc);
      fVar4 = animationSpeed * 30.5;
      auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      if ((int)fVar4 < (int)sVar13) {
        auVar23 = vectorSplatHalfWord(auVar23,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x16,uVar17);
        *(undefined2 *)(uVar5 + 0x16) = uVar6;
        iVar12 = (int)fVar4;
      }
      dVar18 = 0.014999999664723873;
      dVar20 = (double)(DAT_0071d568 - 0.015);
      dVar19 = (double)FastIntToDouble((short)iVar12);
      dVar21 = (double)FastIntToDouble((int)((double)animationSpeed * dVar21));
      fVar4 = (float)(dVar20 * (double)(float)(dVar19 / dVar21) + dVar18);
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
        iVar12 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
        if ((double)fVar4 != dVar22) {
          *(float *)(iVar12 + 0x11c) = fVar4;
        }
        *(undefined4 *)(iVar12 + 0x120) = 0x3e4ccccd;
      }
      DAT_0071ea50 = (float)dVar22;
    }
  }
  return;
}


// 0x002ffe8 (0x810 bytes)
// inlined: FastRSqrt @0x30674, FastRSqrt @0x3071c
void SetCam0DefaultPosRot(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  MobyInstance *pMVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  GPiece<16> local_b0;
  Vec4 aVStack_a0 [3];
  
  pvVar13 = GameCamera.pCurrentUpdCam;
  iVar7 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  fVar2 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x34);
  fVar3 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x38);
  if (param_1 != 0) {
    dVar25 = (double)*(float *)(iVar7 + 0x15c);
    dVar24 = (double)*(float *)(iVar7 + 0x160);
    FastApplyTransform(aVStack_a0,(Vec4 *)&g_heroMtx);
    iVar18 = *(int *)(iVar7 + 0x100);
    fVar2 = *(float *)(iVar18 + 0xc4);
    fVar3 = *(float *)(iVar18 + 200);
    fVar4 = *(float *)(iVar18 + 0xe4);
    fVar5 = *(float *)(iVar18 + 0xe8);
    iVar19 = (int)pvVar13 + 0x30;
    uVar21 = 0x94;
    *(float *)((int)pvVar13 + 0x30) =
         *(float *)(iVar7 + 0x40) +
         (float)((double)*(float *)(iVar18 + 0xe0) * dVar24 +
                -(double)(float)(dVar25 * (double)*(float *)(iVar18 + 0xc0)));
    *(float *)((int)pvVar13 + 0x34) =
         *(float *)(iVar7 + 0x44) +
         (float)((double)fVar4 * dVar24 + -(double)(float)(dVar25 * (double)fVar2));
    pMVar17 = g_heroMobyPtr;
    *(float *)((int)pvVar13 + 0x38) =
         *(float *)(iVar7 + 0x48) +
         (float)((double)fVar5 * dVar24 + -(double)(float)(dVar25 * (double)fVar3));
    *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
    fVar2 = *(float *)(iVar7 + 0xf0);
    fVar4 = *(float *)(iVar18 + 0xe0) * fVar2 + *(float *)(iVar7 + 0x40);
    fVar3 = *(float *)(iVar18 + 0xe4) * fVar2 + *(float *)(iVar7 + 0x44);
    fVar2 = *(float *)(iVar18 + 0xe8) * fVar2 + *(float *)(iVar7 + 0x48);
    uVar6 = *(undefined4 *)(iVar7 + 0x4c);
    iVar18 = CollLine(&local_c0,iVar19,0x94,pMVar17,0);
    if (iVar18 != 0) {
      if (SQRT((g_CollOutput.ip.x - fVar4) * (g_CollOutput.ip.x - fVar4) +
               (g_CollOutput.ip.y - fVar3) * (g_CollOutput.ip.y - fVar3)) < 0.001) {
        uVar21 = 0x96;
      }
    }
    iVar18 = CollLine(&local_c0,iVar19,uVar21,g_heroMobyPtr,0);
    if (iVar18 != 0) {
      fVar5 = g_CollOutput.ip.y - fVar3;
      fVar8 = g_CollOutput.ip.x - fVar4;
      fVar9 = g_CollOutput.ip.z - fVar2;
      dVar24 = 0.0;
      fVar10 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5);
      if (fVar10 == 0.0) {
        *(undefined4 *)((int)pvVar13 + 0x30) = *(undefined4 *)(iVar7 + 0x40);
        *(undefined4 *)((int)pvVar13 + 0x34) = *(undefined4 *)(iVar7 + 0x44);
        *(undefined4 *)((int)pvVar13 + 0x38) = *(undefined4 *)(iVar7 + 0x48);
        *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
      }
      else if (DAT_0071d4a8 <= fVar10) {
        fVar10 = (fVar10 - 0.5) / fVar10;
        *(float *)((int)pvVar13 + 0x30) = fVar8 * fVar10 + fVar4;
        *(float *)((int)pvVar13 + 0x34) = fVar5 * fVar10 + fVar3;
        *(float *)((int)pvVar13 + 0x38) = fVar9 * fVar10 + fVar2;
        *(undefined4 *)((int)pvVar13 + 0x3c) = uVar6;
      }
      else {
        iVar18 = *(int *)(iVar7 + 0x100);
        iVar20 = 0;
        dVar23 = 0.5;
        fVar3 = *(float *)(iVar18 + 0xe0) * 0.5 + *(float *)(iVar7 + 0x40);
        fVar4 = *(float *)(iVar18 + 0xe4) * 0.5 + *(float *)(iVar7 + 0x44);
        fVar5 = *(float *)(iVar18 + 0xe8) * 0.5 + *(float *)(iVar7 + 0x48);
        fVar2 = *(float *)(iVar7 + 0x4c);
        dVar22 = 0.25;
        dVar25 = dVar23;
        local_c0 = fVar3;
        local_bc = fVar4;
        local_b8 = fVar5;
        local_b4 = fVar2;
        do {
          iVar18 = CollSphere(dVar25,&local_c0);
          pMVar17 = g_heroMobyPtr;
          if (iVar18 == 0) {
            if (iVar20 != 0) break;
            dVar25 = (double)(float)(dVar25 + dVar22);
          }
          else {
            local_c0 = g_CollOutput.push.x;
            local_bc = g_CollOutput.push.y;
            local_b8 = g_CollOutput.push.z;
            local_b4 = g_CollOutput.push.w;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < 3);
        fVar8 = local_bc - fVar4;
        fVar10 = local_c0 - fVar3;
        fVar9 = local_b8 - fVar5;
        dVar25 = (double)SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
        if (dVar25 == dVar24) {
          *(undefined4 *)((int)pvVar13 + 0x30) = *(undefined4 *)(iVar7 + 0x40);
          *(undefined4 *)((int)pvVar13 + 0x34) = *(undefined4 *)(iVar7 + 0x44);
          *(undefined4 *)((int)pvVar13 + 0x38) = *(undefined4 *)(iVar7 + 0x48);
          *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
        }
        else {
          fVar1 = (float)((double)*(float *)(iVar7 + 0x15c) / dVar25);
          *(float *)((int)pvVar13 + 0x30) = fVar10 * fVar1 + fVar3;
          *(float *)((int)pvVar13 + 0x34) = fVar8 * fVar1 + fVar4;
          *(float *)((int)pvVar13 + 0x38) = fVar9 * fVar1 + fVar5;
          *(float *)((int)pvVar13 + 0x3c) = fVar2;
          iVar18 = CollLine(local_b0,iVar19,uVar21,pMVar17,0);
          if (iVar18 != 0) {
            fVar2 = g_CollOutput.ip.y - local_bc;
            fVar3 = g_CollOutput.ip.x - local_c0;
            fVar4 = g_CollOutput.ip.z - local_b8;
            dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            if (dVar25 == dVar24) {
              *(undefined4 *)((int)pvVar13 + 0x30) = *(undefined4 *)(iVar7 + 0x40);
              *(undefined4 *)((int)pvVar13 + 0x34) = *(undefined4 *)(iVar7 + 0x44);
              *(undefined4 *)((int)pvVar13 + 0x38) = *(undefined4 *)(iVar7 + 0x48);
              *(undefined4 *)((int)pvVar13 + 0x3c) = *(undefined4 *)(iVar7 + 0x4c);
            }
            else {
              fVar5 = (float)((double)(float)(dVar25 - dVar23) / dVar25);
              *(float *)((int)pvVar13 + 0x30) = fVar3 * fVar5 + local_c0;
              *(float *)((int)pvVar13 + 0x34) = fVar2 * fVar5 + local_bc;
              *(float *)((int)pvVar13 + 0x38) = fVar4 * fVar5 + local_b8;
              *(float *)((int)pvVar13 + 0x3c) = local_b4;
            }
          }
        }
      }
    }
    fVar2 = *(float *)((int)pvVar13 + 0x34);
    fVar5 = fVar2 - *(float *)(iVar7 + 0x44);
    fVar4 = *(float *)((int)pvVar13 + 0x30) - *(float *)(iVar7 + 0x40);
    fVar3 = *(float *)((int)pvVar13 + 0x38);
    fVar8 = fVar3 - *(float *)(iVar7 + 0x48);
    fVar9 = fVar8 * (float)GameCamera.camStatics.heroUpActual.z +
            fVar4 * (float)GameCamera.camStatics.heroUpActual.x +
            fVar5 * (float)GameCamera.camStatics.heroUpActual.y;
    fVar5 = -((float)GameCamera.camStatics.heroUpActual.y * fVar9 - fVar5);
    fVar4 = -((float)GameCamera.camStatics.heroUpActual.x * fVar9 - fVar4);
    fVar8 = -((float)GameCamera.camStatics.heroUpActual.z * fVar9 - fVar8);
    if (SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5) < 0.05) {
      iVar18 = MB_randInt(2);
      if (iVar18 == 0) {
        fVar2 = *(float *)((int)pvVar13 + 0x30) - 0.5;
      }
      else {
        fVar2 = *(float *)((int)pvVar13 + 0x30) + 0.5;
      }
      *(float *)((int)pvVar13 + 0x30) = fVar2;
      iVar18 = MB_randInt(2);
      if (iVar18 == 0) {
        fVar2 = *(float *)((int)pvVar13 + 0x34) - 0.5;
      }
      else {
        fVar2 = *(float *)((int)pvVar13 + 0x34) + 0.5;
      }
      *(float *)((int)pvVar13 + 0x34) = fVar2;
      fVar3 = *(float *)((int)pvVar13 + 0x38) + 0.5;
      *(float *)((int)pvVar13 + 0x38) = fVar3;
    }
  }
  *(float *)((int)pvVar13 + 0x68) = fVar2;
  *(undefined4 *)((int)pvVar13 + 100) = *(undefined4 *)((int)pvVar13 + 0x30);
  *(float *)((int)pvVar13 + 0x6c) = fVar3;
  uVar16 = GameCamera.camStatics.heroUpActual.w;
  uVar15 = GameCamera.camStatics.heroUpActual.z;
  uVar14 = GameCamera.camStatics.heroUpActual.y;
  uVar6 = GameCamera.camStatics.heroUpActual.x;
  fVar2 = 0.0;
  fVar5 = SQRT((float)GameCamera.camStatics.heroUpActual.z * (float)GameCamera.camStatics.heroUpActual.z +
               (float)GameCamera.camStatics.heroUpActual.x * (float)GameCamera.camStatics.heroUpActual.x +
               (float)GameCamera.camStatics.heroUpActual.y * (float)GameCamera.camStatics.heroUpActual.y);
  fVar4 = *(float *)(iVar7 + 0xf0) / fVar5;
  fVar3 = fVar2;
  if (0.0 - fVar5 < 0.0) {
    fVar3 = (float)GameCamera.camStatics.heroUpActual.x * fVar4;
  }
  fVar8 = fVar2;
  if (0.0 - fVar5 < 0.0) {
    fVar8 = (float)GameCamera.camStatics.heroUpActual.y * fVar4;
  }
  fVar9 = fVar2;
  if (0.0 - fVar5 < 0.0) {
    fVar9 = (float)GameCamera.camStatics.heroUpActual.z * fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar3 = (float)GameCamera.camStatics.heroUpActual.x * fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar8 = (float)GameCamera.camStatics.heroUpActual.y * fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    fVar9 = (float)GameCamera.camStatics.heroUpActual.z * fVar4;
  }
  fVar10 = (fVar8 + *(float *)(iVar7 + 0x44)) - *(float *)((int)pvVar13 + 0x34);
  fVar8 = (fVar3 + *(float *)(iVar7 + 0x40)) - *(float *)((int)pvVar13 + 0x30);
  fVar9 = (fVar9 + *(float *)(iVar7 + 0x48)) - *(float *)((int)pvVar13 + 0x38);
  fVar1 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  fVar3 = fVar2;
  fVar4 = fVar2;
  fVar5 = fVar2;
  if (SQRT(fVar1) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar1);
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar5 = fVar8 * fVar3;
    fVar4 = fVar10 * fVar3;
    fVar3 = fVar9 * fVar3;
  }
  fVar9 = (float)GameCamera.camStatics.heroUpActual.z * fVar4;
  fVar8 = (float)GameCamera.camStatics.heroUpActual.y * fVar5;
  *(float *)pvVar13 = fVar5;
  *(float *)((int)pvVar13 + 4) = fVar4;
  fVar9 = (float)uVar14 * fVar3 - fVar9;
  *(float *)((int)pvVar13 + 8) = fVar3;
  *(undefined4 *)((int)pvVar13 + 0xc) = uVar16;
  *(undefined4 *)((int)pvVar13 + 0x1c) = 0;
  fVar11 = (float)uVar15 * fVar5 - (float)uVar6 * fVar3;
  fVar8 = (float)uVar6 * fVar4 - fVar8;
  fVar12 = fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * fVar11;
  fVar10 = fVar2;
  fVar1 = fVar2;
  if (SQRT(fVar12) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar12);
    fVar10 = -(fVar12 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar12 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar12 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar2 = fVar9 * fVar10;
    fVar1 = fVar11 * fVar10;
    fVar10 = fVar8 * fVar10;
  }
  *(float *)((int)pvVar13 + 0x10) = fVar2;
  *(float *)((int)pvVar13 + 0x14) = fVar1;
  *(float *)((int)pvVar13 + 0x18) = fVar10;
  *(undefined4 *)((int)pvVar13 + 0x2c) = 0;
  *(float *)((int)pvVar13 + 0x40) = fVar5;
  *(float *)((int)pvVar13 + 0x44) = fVar4;
  *(float *)((int)pvVar13 + 0x48) = fVar3;
  *(undefined4 *)((int)pvVar13 + 0x4c) = uVar16;
  *(float *)((int)pvVar13 + 0x20) = fVar4 * fVar10 - fVar3 * fVar1;
  *(float *)((int)pvVar13 + 0x24) = fVar3 * fVar2 - fVar5 * fVar10;
  *(float *)((int)pvVar13 + 0x28) = fVar5 * fVar1 - fVar4 * fVar2;
  return;
}


// 0x00307f8 (0x1ec bytes)
void ResetCamOfsVectors_0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
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
  undefined4 uVar15;
  
  uVar15 = g_heroGravityDir.w;
  fVar14 = g_heroGravityDir.z;
  fVar12 = g_heroGravityDir.y;
  fVar11 = g_heroGravityDir.x;
  fVar10 = g_heroPosition.x;
  if (*(short *)(param_1 + 0x86) == 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x70);
    puVar4[0x10] = g_heroPosition.x;
    fVar7 = g_heroPosition.y;
    fVar6 = fVar12 * g_heroPosition.y;
    puVar4[0x11] = g_heroPosition.y;
    fVar9 = g_heroPosition.z;
    fVar1 = (float)puVar4[0x58];
    fVar5 = fVar14 * g_heroPosition.z;
    puVar4[0x12] = g_heroPosition.z;
    fVar13 = g_heroPosition.w;
    fVar2 = (float)puVar4[0x3c];
    puVar4[0x13] = g_heroPosition.w;
    puVar4[0x28] = fVar10;
    puVar4[0x29] = fVar7;
    fVar8 = -(fVar14 * fVar1) + fVar9;
    puVar4[0x2a] = fVar9;
    puVar4[0x2b] = fVar13;
    puVar4[0x17] = uVar15;
    fVar6 = -(fVar11 * fVar10) + -fVar6 + -fVar5;
    puVar4[0x2f] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x33] = 0;
    puVar4[0x32] = 0;
    puVar4[0x31] = 0;
    puVar4[0x30] = 0;
    puVar4[0x3b] = 0;
    fVar5 = -(fVar12 * fVar1) + fVar7;
    puVar4[0x3a] = 0;
    puVar4[0x39] = 0;
    puVar4[0x38] = 0;
    fVar1 = -(fVar11 * fVar1) + fVar10;
    fVar10 = -(fVar11 * fVar2) + fVar10;
    fVar7 = -(fVar12 * fVar2) + fVar7;
    fVar9 = -(fVar14 * fVar2) + fVar9;
    puVar4[0x24] = fVar1;
    puVar4[0x14] = -(fVar11 * fVar6);
    puVar4[0x15] = -(fVar12 * fVar6);
    puVar4[0x16] = -(fVar14 * fVar6);
    puVar4[0x25] = fVar5;
    puVar4[0x26] = fVar8;
    puVar4[0x27] = uVar15;
    puVar4[0x34] = fVar10;
    puVar4[0x35] = fVar7;
    puVar4[0x36] = fVar9;
    puVar4[0x37] = uVar15;
    puVar4[0x20] = fVar10;
    puVar4[0x21] = fVar7;
    puVar4[0x22] = fVar9;
    puVar4[0x23] = uVar15;
    fVar12 = *(float *)(param_1 + 0x30) - fVar1;
    puVar4[0x4c] = fVar12;
    fVar11 = *(float *)(param_1 + 0x34) - fVar5;
    puVar4[0x4d] = fVar11;
    fVar10 = *(float *)(param_1 + 0x38) - fVar8;
    puVar4[0x4e] = fVar10;
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    puVar4[0x50] = fVar12;
    puVar4[0x4f] = uVar3;
    puVar4[0x51] = fVar11;
    puVar4[0x52] = fVar10;
    puVar4[0x53] = uVar3;
    *puVar4 = *(undefined4 *)(param_1 + 0x30);
    puVar4[1] = *(undefined4 *)(param_1 + 0x34);
    puVar4[2] = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    puVar4[0x7c] = fVar1 + fVar12;
    puVar4[3] = uVar3;
    puVar4[0x7d] = fVar5 + fVar11;
    puVar4[0x7e] = fVar8 + fVar10;
    puVar4[0x7f] = uVar15;
    puVar4[0x88] = 0;
  }
  return;
}


// 0x00309f0 (0x490 bytes)
void Camera0_Init(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  undefined8 in_LR;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  
  pMVar15 = g_heroMobyPtr;
  fVar9 = g_heroPosition.x;
  DAT_0092e280 = 0;
  DAT_0092e284 = 0;
  iVar2 = param_1[0x1c];
  *(float *)(iVar2 + 0x40) = g_heroPosition.x;
  fVar10 = g_heroPosition.y;
  *(float *)(iVar2 + 0x44) = g_heroPosition.y;
  fVar13 = g_heroPosition.z;
  *(float *)(iVar2 + 0x48) = g_heroPosition.z;
  fVar14 = g_heroPosition.w;
  *(undefined4 *)(iVar2 + 0xf0) = 0x3fc00000;
  *(float *)(iVar2 + 0x4c) = fVar14;
  *(undefined1 *)(iVar2 + 0x104) = 0;
  *(MobyInstance **)(iVar2 + 0x100) = pMVar15;
  *(undefined1 *)(iVar2 + 0x116) = 0;
  uVar1 = DAT_0071d480;
  *(undefined4 *)(iVar2 + 0x120) = 0x3e4ccccd;
  *(undefined4 *)(iVar2 + 0x11c) = uVar1;
  uVar1 = DAT_0071d480;
  *(undefined4 *)(iVar2 + 0x128) = 0x3e4ccccd;
  *(undefined4 *)(iVar2 + 0x124) = uVar1;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  iVar3 = param_1[0x1c];
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0x3ba3d70a;
  *(undefined2 *)(iVar2 + 0x106) = 0;
  *(undefined4 *)(iVar3 + 0x15c) = 0x40947ae1;
  *(undefined2 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar3 + 0x160) = 0x40000000;
  *(undefined4 *)(iVar3 + 0x164) = 0;
  *(undefined2 *)(iVar2 + 0x11a) = 0;
  *(undefined4 *)(iVar3 + 0x168) = 0;
  *(undefined4 *)(iVar3 + 0x158) = 0;
  *(undefined4 *)(iVar3 + 0x150) = 0;
  *(undefined4 *)(iVar3 + 0x154) = 0;
  *(undefined4 *)(iVar3 + 0x174) = 0;
  *(undefined4 *)(iVar3 + 0x180) = 0;
  puVar4 = (undefined4 *)param_1[0x1c];
  *(undefined4 *)(iVar3 + 0x178) = 0x3b449ba6;
  *(undefined4 *)(iVar3 + 0x184) = 0x3b449ba6;
  *(undefined4 *)(iVar3 + 0x188) = 0x40947ae1;
  *(undefined2 *)(iVar3 + 0x16c) = 0;
  uVar5 = param_1[0x1c];
  *(undefined2 *)(iVar3 + 0x16e) = 0;
  DAT_0071ea50 = 0x3f400000;
  *(undefined2 *)(puVar4 + 4) = 1;
  *(undefined2 *)((int)puVar4 + 0x12) = 0;
  *(undefined4 *)(uVar5 + 0x30) = 0;
  *(undefined4 *)(uVar5 + 0x2c) = 0;
  *(undefined4 *)(uVar5 + 0x34) = 0;
  *(undefined4 *)(uVar5 + 0x38) = 0;
  *(undefined2 *)(puVar4 + 5) = 0;
  *(undefined4 *)(uVar5 + 400) = 0;
  *(undefined2 *)((int)puVar4 + 0x16) = 0;
  *(undefined4 *)(uVar5 + 0x194) = 0;
  *(undefined4 *)(uVar5 + 0x198) = 0x3ba3d70a;
  *(undefined4 *)(uVar5 + 0x19c) = 0x3e4ccccd;
  *(undefined4 *)(uVar5 + 0x1a0) = 0x3e20d97c;
  *(undefined2 *)(uVar5 + 0x20) = 0;
  *(undefined4 *)(uVar5 + 0x1a4) = 0x4164923a;
  *(undefined4 *)(uVar5 + 0x1a8) = 0;
  *(undefined2 *)(uVar5 + 0x22) = 0;
  *(undefined4 *)(uVar5 + 0x1b0) = 0;
  *(undefined4 *)(uVar5 + 0x1ac) = 0;
  *(undefined4 *)(uVar5 + 0x1b4) = 0;
  fVar8 = g_CameraSpeed;
  *(undefined4 *)(uVar5 + 0x1c0) = 0x3f060a92;
  *(float *)(uVar5 + 0x1bc) = fVar8;
  *(undefined4 *)(uVar5 + 0x1c4) = 0;
  *(undefined4 *)(uVar5 + 0x1c8) = 0;
  *(undefined4 *)(uVar5 + 0x1b8) = 0;
  *(undefined4 *)(uVar5 + 0x1cc) = 0;
  uVar1 = *(undefined4 *)(iVar3 + 0x15c);
  *(undefined4 *)(uVar5 + 0x220) = 0;
  *(undefined4 *)(uVar5 + 0x228) = uVar1;
  *(undefined4 *)(uVar5 + 0x230) = 0;
  *(undefined2 *)(uVar5 + 0x224) = 0;
  *(undefined2 *)(uVar5 + 0x226) = 0;
  auVar16 = ZEXT416(0xffffffff);
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  *(undefined4 *)(uVar5 + 0x22c) = DAT_0071d4fc;
  iVar12 = CAMERA_COLL_BUMP_FLAGS;
  auVar16 = loadVectorLeftIndexed(in_LR,0x309e4);
  auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  uVar6 = param_1[0x1c];
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auVar17
                      );
  auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
  auVar16 = vectorSplatHalfWord(auVar16,1);
  uVar7 = storeVectorElementHalfWordIndexed(auVar16,0x204,(ulonglong)uVar6);
  *(undefined2 *)(uVar6 + 0x204) = uVar7;
  *(undefined4 *)(uVar6 + 0x200) = 0;
  uVar1 = DAT_0071d4bc;
  *(undefined2 *)(uVar6 + 0x20a) = 0;
  *(undefined4 *)(uVar6 + 0x214) = uVar1;
  uVar1 = DAT_0071d4c4;
  *(undefined2 *)(uVar6 + 0x206) = 0;
  *(undefined2 *)(uVar6 + 0x208) = 0;
  *(undefined4 *)(uVar6 + 0x20c) = uVar1;
  uVar1 = DAT_0071d4c0;
  *(int *)(uVar6 + 0x218) = iVar12;
  *(undefined4 *)(uVar6 + 0x210) = uVar1;
  *(undefined4 *)(uVar6 + 0x21c) = 0;
  *(undefined4 *)(uVar6 + 0x1ec) = 0;
  *(undefined4 *)(uVar6 + 0x1e8) = 0;
  *(undefined4 *)(uVar6 + 0x1e4) = 0;
  *(undefined4 *)(uVar6 + 0x1e0) = 0;
  *(undefined2 *)(uVar6 + 0x268) = 0;
  *(undefined4 *)(uVar6 + 0x264) = 0;
  *(float *)(uVar6 + 0x240) = fVar9;
  *(float *)(uVar6 + 0x244) = fVar10;
  *(float *)(uVar6 + 0x248) = fVar13;
  *(float *)(uVar6 + 0x24c) = fVar14;
  *(float *)(uVar6 + 0x250) = fVar9;
  *(float *)(uVar6 + 0x254) = fVar10;
  *(float *)(uVar6 + 600) = fVar13;
  *(float *)(uVar6 + 0x25c) = fVar14;
  if (*(char *)((int)param_1 + 0x7d) == '\x02') {
    ResetCamOfsVectors_0(param_1);
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    pvVar11 = GameCamera.pLastUpdCam;
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if ((*(short *)((int)pvVar11 + 0x86) == 7) && (DAT_00969fec == 0)) {
      auVar16 = ZEXT416(0);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    }
    else {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0xffffffffffffd504,0x720000);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar17,0);
      auVar17 = loadVectorLeftIndexed(4,0x309e4);
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar17 = vectorAddFloatingPoint
                          (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar19);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    }
    auVar16 = vectorSplatHalfWord(auVar16,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar16,0x20,(ulonglong)uVar5);
    *(undefined2 *)(uVar5 + 0x20) = uVar7;
  }
  else {
    InitCamTarget_0(param_1);
    SetCam0DefaultPosRot(1);
  }
  fVar8 = (float)param_1[0xc] - *(float *)(iVar2 + 0x90);
  *(float *)(iVar3 + 0x130) = fVar8;
  fVar9 = (float)param_1[0xd] - *(float *)(iVar2 + 0x94);
  *(float *)(iVar3 + 0x134) = fVar9;
  fVar10 = (float)param_1[0xe] - *(float *)(iVar2 + 0x98);
  *(float *)(iVar3 + 0x138) = fVar10;
  uVar1 = param_1[0xf];
  *(float *)(iVar3 + 0x140) = fVar8;
  *(undefined4 *)(iVar3 + 0x13c) = uVar1;
  *(float *)(iVar3 + 0x144) = fVar9;
  *(float *)(iVar3 + 0x148) = fVar10;
  *(undefined4 *)(iVar3 + 0x14c) = uVar1;
  *puVar4 = param_1[0xc];
  puVar4[1] = param_1[0xd];
  puVar4[2] = param_1[0xe];
  puVar4[3] = param_1[0xf];
  *(undefined4 *)(uVar6 + 0x1f0) = param_1[0xc];
  *(undefined4 *)(uVar6 + 500) = param_1[0xd];
  *(undefined4 *)(uVar6 + 0x1f8) = param_1[0xe];
  *(undefined4 *)(uVar6 + 0x1fc) = param_1[0xf];
  fVar8 = *(float *)(iVar3 + 0x138) * g_heroGravityDir.z +
          *(float *)(iVar3 + 0x130) * g_heroGravityDir.x +
          *(float *)(iVar3 + 0x134) * g_heroGravityDir.y;
  fVar9 = -(g_heroGravityDir.y * fVar8 - *(float *)(iVar3 + 0x134));
  fVar10 = -(g_heroGravityDir.x * fVar8 - *(float *)(iVar3 + 0x130));
  fVar8 = -(g_heroGravityDir.z * fVar8 - *(float *)(iVar3 + 0x138));
  fVar8 = *(float *)(iVar3 + 0x15c) - SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
  *(float *)(uVar6 + 0x200) = fVar8;
  if (fVar8 < -0.1) {
    *(undefined2 *)(uVar6 + 0x20a) = 1;
  }
  *(undefined4 *)(uVar5 + 0x28) = *(undefined4 *)(iVar3 + 0x160);
  *(undefined4 *)(uVar5 + 0x24) = *(undefined4 *)(iVar2 + 0xf0);
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  return;
}


// 0x0030e90 (0x280 bytes)
undefined8 CalcCamOfs_0(int param_1,float *param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  fVar1 = *(float *)(uVar7 + 0x130);
  fVar5 = *param_2 - *(float *)(uVar7 + 0x90);
  fVar2 = *(float *)(uVar7 + 0x134);
  *(float *)(uVar7 + 0x130) = fVar5;
  fVar3 = param_2[1] - *(float *)(uVar7 + 0x94);
  *(float *)(uVar7 + 0x134) = fVar3;
  fVar4 = param_2[2] - *(float *)(uVar7 + 0x98);
  fVar1 = SQRT(*(float *)(uVar7 + 0x138) * *(float *)(uVar7 + 0x138) + fVar1 * fVar1 + fVar2 * fVar2
              );
  *(float *)(uVar7 + 0x138) = fVar4;
  *(float *)(uVar7 + 0x13c) = param_2[3];
  if (*(short *)(uVar7 + 0x208) == 0) {
    fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    if (((g_heroType != '\x02') && (0x3d4ccccd < (uint)ABS(g_Pad.sticks.x))) && ((int)param_4 != 0)
       ) {
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      auVar15 = loadVectorLeftIndexed(4,0x30e80);
      auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                           auVar14);
      fVar2 = -(DAT_0071d498 * DAT_0071f408 - fVar2);
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = vectorSplatHalfWord(auVar13,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar13,0x204,(ulonglong)uVar7);
      *(undefined2 *)(uVar7 + 0x204) = uVar9;
    }
    if ((param_3 != 0) || (fVar2 <= fVar1 || g_heroStateType == 2)) {
      if (fVar2 < DAT_0071d4a8) {
        if (0.0001 < fVar2) {
          fVar2 = DAT_0071d4a8 / fVar2;
          fVar5 = fVar5 * fVar2;
          fVar3 = fVar3 * fVar2;
          fVar4 = fVar4 * fVar2;
        }
        else {
          iVar8 = *(int *)(uVar7 + 0x100);
          fVar3 = *(float *)(iVar8 + 0xc4);
          fVar1 = *(float *)(iVar8 + 0xc0);
          fVar4 = *(float *)(iVar8 + 200);
          fVar5 = 0.0;
          fVar2 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
          if (fVar2 == 0.0) {
            uVar6 = *(undefined4 *)(iVar8 + 0xcc);
            fVar4 = fVar5;
            fVar3 = fVar5;
          }
          else {
            fVar2 = -DAT_0071d4a8 / fVar2;
            fVar5 = fVar1 * fVar2;
            fVar3 = fVar3 * fVar2;
            uVar6 = *(undefined4 *)(iVar8 + 0xcc);
            fVar4 = fVar4 * fVar2;
          }
          *(undefined4 *)(uVar7 + 0x13c) = uVar6;
        }
        *(float *)(uVar7 + 0x130) = fVar5;
        *(float *)(uVar7 + 0x134) = fVar3;
        *(float *)(uVar7 + 0x138) = fVar4;
        fVar2 = DAT_0071d4a8;
      }
      param_4 = 1;
      *(float *)(uVar7 + 0x200) = *(float *)(uVar7 + 0x15c) - fVar2;
    }
    else {
      fVar2 = fVar1 / fVar2;
      *(float *)(uVar7 + 0x200) = *(float *)(uVar7 + 0x15c) - fVar1;
      *(float *)(uVar7 + 0x130) = fVar5 * fVar2;
      *(float *)(uVar7 + 0x134) = fVar3 * fVar2;
      *(float *)(uVar7 + 0x138) = fVar4 * fVar2;
    }
  }
  else {
    fVar1 = 0.0;
    fVar12 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    fVar2 = (*(float *)(uVar7 + 0x15c) - *(float *)(uVar7 + 0x200)) / fVar12;
    fVar11 = fVar1;
    if (0.0 - fVar12 < 0.0) {
      fVar11 = fVar5 * fVar2;
    }
    fVar10 = fVar1;
    if (0.0 - fVar12 < 0.0) {
      fVar10 = fVar3 * fVar2;
    }
    if (0.0 - fVar12 < 0.0) {
      fVar1 = fVar4 * fVar2;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar11 = fVar5 * fVar2;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar2;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar1 = fVar4 * fVar2;
    }
    *(float *)(uVar7 + 0x130) = fVar11;
    *(float *)(uVar7 + 0x134) = fVar10;
    *(float *)(uVar7 + 0x138) = fVar1;
  }
  return param_4;
}


// 0x0031128 (0x2e8 bytes)
// inlined: FastRSqrt @0x312c0
void UpdateBumpColl_0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  float local_90;
  float local_8c;
  float local_88;
  
  iVar2 = *(int *)(param_1 + 0x70);
  local_90 = *(float *)(iVar2 + 0x90) + *(float *)(iVar2 + 0x130);
  uVar7 = 0;
  iVar5 = 0;
  uVar6 = 0;
  *(undefined2 *)(iVar2 + 0x208) = 2;
  local_8c = *(float *)(iVar2 + 0x94) + *(float *)(iVar2 + 0x134);
  local_88 = *(float *)(iVar2 + 0x98) + *(float *)(iVar2 + 0x138);
  dVar13 = 1.0;
  iVar3 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  dVar14 = 0.0;
  dVar15 = 0.5;
  dVar16 = 0.75;
  dVar17 = -0.75;
  dVar12 = (double)(*(float *)(iVar3 + 0x214) * *(float *)(iVar3 + 0x20c) *
                    (*(float *)(iVar3 + 0x210) - 1.0) + DAT_0071d4b8);
  do {
    iVar3 = CollPrimSphere(dVar12,&local_90);
    if (iVar3 == 0) {
      iVar3 = CollSphere(dVar12,&local_90);
      if (iVar3 == 0) break;
      uVar7 = 1;
    }
    else {
      uVar6 = 1;
    }
    if (*(short *)(iVar2 + 0x208) != 0) {
      local_8c = g_CollOutput.ip.y - local_8c;
      local_90 = g_CollOutput.ip.x - local_90;
      local_88 = g_CollOutput.ip.z - local_88;
      dVar8 = (double)(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
      dVar9 = dVar14;
      dVar10 = dVar14;
      dVar11 = dVar14;
      if ((double)(float)SQRT(dVar8) != dVar14) {
        dVar9 = 1.0 / SQRT(dVar8);
        dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar13) *
                                (double)(float)(dVar15 * dVar9) + dVar9);
        dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar13) *
                                (double)(float)(dVar15 * dVar9) + dVar9);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar8 * dVar9) * dVar9 - dVar13) *
                        (double)(float)(dVar15 * dVar9) + dVar9);
        dVar11 = (double)(local_90 * fVar1);
        dVar10 = (double)(local_8c * fVar1);
        dVar9 = (double)(local_88 * fVar1);
      }
      uVar4 = 1;
      dVar9 = (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar9 +
                             (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.x * dVar11
                                            + (double)(float)((double)(float)GameCamera.
                                                                             field17_0x1b4.piece<16,4>() *
                                                             dVar10)));
      if ((dVar9 <= dVar16) && (uVar4 = 0, dVar9 < dVar17)) {
        uVar4 = 0xffff;
      }
      *(undefined2 *)(iVar2 + 0x208) = uVar4;
    }
    iVar5 = iVar5 + 1;
    local_90 = g_CollOutput.push.x;
    local_8c = g_CollOutput.push.y;
    local_88 = g_CollOutput.push.z;
  } while (iVar5 < 3);
  CalcCamOfs_0(param_1,&local_90,uVar6,uVar7);
  *(undefined4 *)(iVar2 + 0x1fc) = *(undefined4 *)(iVar2 + 0x9c);
  *(float *)(iVar2 + 0x1f0) = *(float *)(iVar2 + 0x90) + *(float *)(iVar2 + 0x130);
  *(float *)(iVar2 + 500) = *(float *)(iVar2 + 0x94) + *(float *)(iVar2 + 0x134);
  *(float *)(iVar2 + 0x1f8) = *(float *)(iVar2 + 0x98) + *(float *)(iVar2 + 0x138);
  if (*(short *)(iVar2 + 0x208) == 2) {
    *(undefined2 *)(iVar2 + 0x208) = 0;
  }
  return;
}


// 0x0031410 (0x8 bytes)
undefined8 PushCamInAvoidEnv(void)

{
  return 0;
}


// 0x0031420 (0x160 bytes)
void GetPushVec_0
               (double param_1,double param_2,int param_3,float *param_4,float *param_5,
               float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  
  fVar3 = param_5[1] - param_6[1];
  fVar2 = *param_5 - *param_6;
  fVar4 = param_5[2] - param_6[2];
  fVar11 = 0.0;
  iVar8 = *(int *)(param_3 + 0x70);
  dVar15 = (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar1 = (float)(param_1 / dVar15);
  fVar10 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar10 = fVar4 * fVar1;
  }
  fVar12 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar12 = fVar3 * fVar1;
  }
  fVar13 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar13 = fVar2 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar10 = fVar4 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar12 = fVar3 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar13 = fVar2 * fVar1;
  }
  fVar10 = param_5[2] + fVar10;
  fVar12 = param_5[1] + fVar12;
  fVar13 = *param_5 + fVar13;
  param_5[2] = fVar10;
  param_5[1] = fVar12;
  *param_5 = fVar13;
  fVar2 = *(float *)(iVar8 + 0x94);
  fVar3 = *(float *)(iVar8 + 0x90);
  fVar12 = fVar12 - fVar2;
  fVar13 = fVar13 - fVar3;
  fVar4 = *(float *)(iVar8 + 0x98);
  fVar10 = fVar10 - fVar4;
  fVar5 = *param_7;
  fVar6 = param_7[1];
  fVar7 = param_7[2];
  param_4[3] = *(float *)(iVar8 + 0x9c);
  dVar15 = (double)SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12);
  fVar1 = (float)(param_2 / dVar15);
  fVar9 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar9 = fVar10 * fVar1;
  }
  fVar14 = fVar11;
  if (0.0 - dVar15 < 0.0) {
    fVar14 = fVar12 * fVar1;
  }
  if (0.0 - dVar15 < 0.0) {
    fVar11 = fVar13 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar9 = fVar10 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar14 = fVar12 * fVar1;
  }
  if (dVar15 - 0.0 < 0.0) {
    fVar11 = fVar13 * fVar1;
  }
  param_4[2] = (fVar4 + fVar9) - fVar7;
  param_4[1] = (fVar2 + fVar14) - fVar6;
  *param_4 = (fVar3 + fVar11) - fVar5;
  return;
}


// 0x0031590 (0x554 bytes)
undefined8
UpdateSegmentPush_0(undefined8 param_1,undefined8 param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  float local_f0;
  float local_ec;
  float local_e8;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  uVar10 = 0;
  iVar11 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
  iVar5 = *(int *)(param_3 + 0x70);
  uVar19 = 0;
  local_e8 = 0.0;
  local_ec = 0.0;
  local_f0 = 0.0;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  dVar14 = (double)g_CollOutput.push.x;
  dVar18 = (double)(*(float *)(iVar11 + 0x214) * *(float *)(iVar11 + 0x20c) *
                    (*(float *)(iVar11 + 0x210) - 1.0) + DAT_0071d4b8);
  iVar11 = iVar5 + 0x90;
  dVar15 = (double)g_CollOutput.push.y;
  dVar16 = (double)g_CollOutput.push.z;
  dVar17 = (double)g_CollOutput.push.w;
  dVar12 = (double)MB_SegmentPush(0,&local_b0,local_d0,iVar11,local_c0);
  fVar6 = *(float *)(iVar5 + 0x94) - local_ac;
  fVar7 = *(float *)(iVar5 + 0x90) - local_b0;
  fVar8 = *(float *)(iVar5 + 0x98) - local_a8;
  dVar20 = 0.75;
  dVar13 = (double)((float)((double)(float)(dVar18 - (double)DAT_0071d4b8) *
                            (double)(SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) /
                                    (*(float *)(iVar5 + 0x15c) - *(float *)(iVar5 + 0x200))) +
                           (double)DAT_0071d4b8) * 0.75);
  if (dVar12 < dVar13) {
    uVar10 = 1;
    GetPushVec_0((double)(float)(dVar13 - dVar12),param_1,param_3,&local_f0,&local_b0,local_d0,
                 local_e0);
    *param_4 = (float)dVar14;
    param_4[1] = (float)dVar15;
    param_4[2] = (float)dVar16;
    param_4[3] = (float)dVar17;
    iVar9 = CollSphere
                      (param_2,param_4,0x950000,CAMERA_COLL_SPHERE_FLAGS,g_heroMobyPtr);
    if (iVar9 != 0) {
      dVar12 = (double)MB_SegmentPush(uVar19,&local_b0,local_d0,iVar11,local_c0);
      fVar6 = *(float *)(iVar5 + 0x94) - local_ac;
      fVar7 = *(float *)(iVar5 + 0x90) - local_b0;
      fVar8 = *(float *)(iVar5 + 0x98) - local_a8;
      dVar13 = (double)(float)((double)(float)((double)(float)(dVar18 - (double)DAT_0071d4b8) *
                                               (double)(SQRT(fVar8 * fVar8 +
                                                             fVar7 * fVar7 + fVar6 * fVar6) /
                                                       (*(float *)(iVar5 + 0x15c) -
                                                       *(float *)(iVar5 + 0x200))) +
                                              (double)DAT_0071d4b8) * dVar20);
      if (dVar12 < dVar13) {
        GetPushVec_0((double)(float)(dVar13 - dVar12),param_1,param_3,&local_a0,&local_b0,local_d0,
                     local_e0);
        local_f0 = local_a0 + 0.0;
        local_ec = local_9c + 0.0;
        local_e8 = local_98 + 0.0;
        *param_4 = g_CollOutput.push.x;
        param_4[1] = g_CollOutput.push.y;
        param_4[2] = g_CollOutput.push.z;
        param_4[3] = g_CollOutput.push.w;
        iVar9 = CollSphere
                          (param_2,param_4,0x950000,CAMERA_COLL_SPHERE_FLAGS,g_heroMobyPtr);
        if (iVar9 != 0) {
          dVar12 = (double)MB_SegmentPush(uVar19,&local_b0,local_d0,iVar11,local_c0);
          fVar6 = *(float *)(iVar5 + 0x94) - local_ac;
          fVar7 = *(float *)(iVar5 + 0x90) - local_b0;
          fVar8 = *(float *)(iVar5 + 0x98) - local_a8;
          dVar13 = (double)(float)((double)(float)((double)(float)(dVar18 - (double)DAT_0071d4b8) *
                                                   (double)(SQRT(fVar8 * fVar8 +
                                                                 fVar7 * fVar7 + fVar6 * fVar6) /
                                                           (*(float *)(iVar5 + 0x15c) -
                                                           *(float *)(iVar5 + 0x200))) +
                                                  (double)DAT_0071d4b8) * dVar20);
          if (dVar12 < dVar13) {
            GetPushVec_0((double)(float)(dVar13 - dVar12),param_1,param_3,&local_a0,&local_b0,
                         local_d0,local_e0);
            local_f0 = local_f0 + local_a0;
            local_ec = local_ec + local_9c;
            local_e8 = local_e8 + local_98;
          }
        }
      }
    }
  }
  param_4[3] = fVar4;
  *param_4 = fVar1 + local_f0;
  param_4[1] = fVar2 + local_ec;
  param_4[2] = fVar3 + local_e8;
  return uVar10;
}


// 0x0031ae8 (0x78 bytes)
undefined8 ExceptionColl(int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 != 1) ||
     (iVar1 = *(int *)(param_1 + 0x70),
     0.0 <= (g_CollOutput.ip.z - param_3[2]) * *(float *)(iVar1 + 0x138) +
            (g_CollOutput.ip.x - *param_3) * *(float *)(iVar1 + 0x130) +
            (g_CollOutput.ip.y - param_3[1]) * *(float *)(iVar1 + 0x134))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// 0x0031b78 (0x554 bytes)
// inlined: FastRSqrt @0x31c54, FastRSqrt @0x31e50, FastRSqrt @0x31fc4
undefined8 UpdateSegmentColl_0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
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
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  float local_d0;
  float local_cc;
  float local_c8;
  
  uVar6 = *(uint *)(param_1 + 0x70);
  fVar2 = *(float *)(uVar6 + 0x134);
  fVar3 = *(float *)(uVar6 + 0x130);
  fVar4 = *(float *)(uVar6 + 0x138);
  dVar26 = 0.0;
  local_d0 = *(float *)(uVar6 + 0x90);
  local_cc = *(float *)(uVar6 + 0x94);
  local_c8 = *(float *)(uVar6 + 0x98);
  dVar25 = (double)DAT_0071d4b8;
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
  uVar5 = *(undefined4 *)(uVar6 + 0x9c);
  dVar22 = dVar26;
  dVar23 = dVar26;
  dVar24 = dVar26;
  if (SQRT(fVar1) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar1);
    fVar8 = -(fVar1 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar1 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar1 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar24 = (double)(fVar3 * fVar8);
    dVar23 = (double)(fVar2 * fVar8);
    dVar22 = (double)(fVar4 * fVar8);
  }
  puVar9 = &DAT_00031b60;
  iVar11 = 0;
  dVar21 = 1.0;
  uVar12 = 0;
  dVar20 = 0.5;
  dVar19 = 0.75;
  auVar30 = loadVectorLeftIndexed(0x10,0x31b60);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  dVar27 = dVar26;
  for (; puVar9 = (undefined4 *)
                  FastDoubleToInt
                            ((double)(float)((double)*(float *)(uVar6 + 0x210) - dVar21),puVar9),
      iVar11 < (int)puVar9; iVar11 = iVar11 + 1) {
    if (((0 < iVar11) &&
        (iVar10 = CamCollGrid_FindPrimAtPnt
                            (dVar26,CONCAT44(local_d0,local_cc),CONCAT44(local_c8,uVar5)),
        puVar9 = (undefined4 *)CAMERA_COLL_SPHERE_FLAGS, iVar10 == 0)) &&
       (puVar9 = (undefined4 *)
                 CollSphere
                           (dVar25,&local_d0,g_heroMobyPtr,CAMERA_COLL_SPHERE_FLAGS,
                            g_heroMobyPtr), puVar9 != (undefined4 *)0x0)) {
      dVar18 = (double)local_d0;
      dVar17 = (double)local_cc;
      dVar16 = (double)local_c8;
      dVar15 = (double)g_CollOutput.ip.x;
      dVar14 = (double)g_CollOutput.ip.y;
      dVar13 = (double)g_CollOutput.ip.z;
      if ((iVar11 != 1) ||
         (puVar9 = *(undefined4 **)(param_1 + 0x70),
         dVar26 <= (double)((float)(dVar13 - dVar16) * (float)puVar9[0x4e] +
                           (float)(dVar15 - dVar18) * (float)puVar9[0x4c] +
                           (float)(dVar14 - dVar17) * (float)puVar9[0x4d]))) {
        puVar9 = (undefined4 *)UpdateSegmentPush_0(dVar27,dVar25,param_1,&local_d0,iVar11);
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        if (puVar9 != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)(uint)g_heroType;
          uVar12 = 1;
          if ((g_heroType != 2) &&
             (puVar9 = (undefined4 *)((uint)g_Pad.sticks.x & 0x7fffffff),
             (undefined4 *)0x3d4ccccd < puVar9)) {
            fVar2 = (float)(dVar14 - dVar17);
            fVar3 = (float)(dVar15 - dVar18);
            fVar4 = (float)(dVar13 - dVar16);
            dVar13 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            dVar22 = dVar26;
            dVar23 = dVar26;
            dVar24 = dVar26;
            if ((double)(float)SQRT(dVar13) != dVar26) {
              dVar22 = 1.0 / SQRT(dVar13);
              dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar22) * dVar22 -
                                                       dVar21) * (double)(float)(dVar20 * dVar22) +
                                      dVar22);
              dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar22) * dVar22 -
                                                       dVar21) * (double)(float)(dVar20 * dVar22) +
                                      dVar22);
              fVar1 = (float)(-(double)(float)((double)(float)(dVar13 * dVar22) * dVar22 - dVar21) *
                              (double)(float)(dVar20 * dVar22) + dVar22);
              dVar24 = (double)(fVar3 * fVar1);
              dVar22 = (double)(fVar2 * fVar1);
              dVar23 = (double)(fVar4 * fVar1);
            }
            if (ABS((double)(float)((double)(float)GameCamera.camStatics.heroUpActual.z * dVar23 +
                                   (double)(float)((double)(float)GameCamera.camStatics.heroUpActual.x *
                                                   dVar24 + (double)(float)((double)(float)
                                                  GameCamera.camStatics.heroUpActual.y * dVar22)))) <
                dVar19) {
              auVar29 = ZEXT416(0xffffffff);
              auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
              auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
              puVar9 = (undefined4 *)0x204;
              auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar29);
              fVar2 = DAT_0071d498 * DAT_0071f408 + *(float *)(uVar6 + 0x200);
              auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
              auVar28 = vectorSplatHalfWord(auVar28,1);
              uVar7 = storeVectorElementHalfWordIndexed(auVar28,0x204,(ulonglong)uVar6);
              *(undefined2 *)(uVar6 + 0x204) = uVar7;
              *(float *)(uVar6 + 0x200) = fVar2;
              if (*(float *)(uVar6 + 0x15c) - fVar2 < DAT_0071d4a8) {
                *(float *)(uVar6 + 0x200) = *(float *)(uVar6 + 0x15c) - DAT_0071d4a8;
              }
            }
          }
          fVar3 = local_cc - *(float *)(uVar6 + 0x94);
          fVar4 = local_d0 - *(float *)(uVar6 + 0x90);
          fVar1 = local_c8 - *(float *)(uVar6 + 0x98);
          *(undefined4 *)(uVar6 + 0x13c) = uVar5;
          dVar22 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
          fVar2 = (float)((double)(*(float *)(uVar6 + 0x15c) - *(float *)(uVar6 + 0x200)) / dVar22);
          dVar13 = dVar26;
          if (dVar26 - dVar22 < 0.0) {
            dVar13 = (double)(fVar3 * fVar2);
          }
          dVar14 = dVar26;
          if (dVar26 - dVar22 < 0.0) {
            dVar14 = (double)(fVar4 * fVar2);
          }
          dVar15 = dVar26;
          if (dVar26 - dVar22 < 0.0) {
            dVar15 = (double)(fVar1 * fVar2);
          }
          if (dVar22 - dVar26 < 0.0) {
            dVar13 = (double)(fVar3 * fVar2);
          }
          if (dVar22 - dVar26 < 0.0) {
            dVar14 = (double)(fVar4 * fVar2);
          }
          if (dVar22 - dVar26 < 0.0) {
            dVar15 = (double)(fVar1 * fVar2);
          }
          *(float *)(uVar6 + 0x130) = (float)dVar14;
          *(float *)(uVar6 + 0x134) = (float)dVar13;
          *(float *)(uVar6 + 0x138) = (float)dVar15;
          dVar16 = (double)(float)(dVar15 * dVar15 +
                                  (double)(float)(dVar14 * dVar14 + (double)(float)(dVar13 * dVar13)
                                                 ));
          dVar22 = dVar26;
          dVar23 = dVar26;
          dVar24 = dVar26;
          if ((double)(float)SQRT(dVar16) != dVar26) {
            dVar22 = 1.0 / SQRT(dVar16);
            dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar22) * dVar22 -
                                                     dVar21) * (double)(float)(dVar20 * dVar22) +
                                    dVar22);
            dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar22) * dVar22 -
                                                     dVar21) * (double)(float)(dVar20 * dVar22) +
                                    dVar22);
            dVar22 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar22) * dVar22 -
                                                     dVar21) * (double)(float)(dVar20 * dVar22) +
                                    dVar22);
            dVar22 = (double)(float)(dVar15 * dVar22);
            dVar23 = (double)(float)(dVar13 * dVar22);
            dVar24 = (double)(float)(dVar14 * dVar22);
          }
        }
      }
    }
    dVar25 = (double)(float)((double)*(float *)(uVar6 + 0x214) * (double)*(float *)(uVar6 + 0x20c) +
                            dVar25);
    dVar27 = (double)(float)(dVar27 + dVar25);
    dVar13 = (double)(float)((double)((*(float *)(uVar6 + 0x15c) - *(float *)(uVar6 + 0x200)) /
                                     *(float *)(uVar6 + 0x15c)) * dVar25);
    local_d0 = (float)(dVar13 * dVar24 + (double)local_d0);
    local_cc = (float)(dVar13 * dVar23 + (double)local_cc);
    local_c8 = (float)(dVar13 * dVar22 + (double)local_c8);
  }
  return uVar12;
}


// 0x0032100 (0xacc bytes)
// inlined: FastRSqrt @0x323c8, FastRSqrt @0x324c4, FastRSqrt @0x329d8
void UpdateCamCollisions_0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  float fVar10;
  MobyInstance *pMVar11;
  float *outQuat;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int *piVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar19 = (ulonglong)uVar7;
  iVar15 = 0;
  outQuat = (float *)(uVar7 + 0x130);
  iVar20 = 0;
  bVar16 = false;
  if ((Level == Quartu) && (g_heroType == '\x02')) {
    bVar16 = true;
  }
  dVar40 = 0.5;
  iVar12 = CollMobySphere
                     ((double)(((*(float *)(uVar7 + 0x15c) - *(float *)(uVar7 + 0x200)) + 1.5) * 0.5
                              ),local_160,Level,1,g_heroMobyPtr,0);
  if ((0 < iVar12) && (iVar14 = 0, 0 < iVar12)) {
    iVar18 = 0;
    piVar17 = &g_CollMobyHits;
    dVar39 = 0.0;
    dVar38 = 1.0;
    dVar37 = 1.5707963705062866;
    dVar36 = 0.4363323152065277;
    dVar35 = -0.01745329238474369;
    dVar34 = 0.01745329238474369;
    dVar33 = -1.0;
    do {
      iVar8 = *piVar17;
      if (*(int *)(iVar8 + 0x94) != 0) {
        iVar13 = MB_HasCollPrims(iVar8);
        dVar30 = (double)(float)GameCamera.camStatics.heroUpActual.x;
        dVar31 = (double)(float)GameCamera.camStatics.heroUpActual.y;
        dVar32 = (double)(float)GameCamera.camStatics.heroUpActual.z;
        if ((iVar13 == 0) || (bVar16)) {
          sVar6 = *(short *)(iVar8 + 0xa6);
          if (((sVar6 == 0xb || sVar6 == 0x72) ||
              ((((sVar6 == 0x2c || (sVar6 == 0x9a)) || (sVar6 == 0xff)) ||
               ((sVar6 == 0x392 || (sVar6 == 0x452)))))) || (sVar6 == 0x353)) {
            dVar22 = (double)(*(float *)(iVar8 + 0x14) - *(float *)(uVar7 + 0x94));
            dVar21 = (double)(*(float *)(iVar8 + 0x10) - *(float *)(uVar7 + 0x90));
            dVar23 = (double)(*(float *)(iVar8 + 0x18) - *(float *)(uVar7 + 0x98));
            dVar27 = (double)(float)(dVar32 * dVar23 +
                                    (double)(float)(dVar30 * dVar21 +
                                                   (double)(float)(dVar31 * dVar22)));
            fVar3 = -(float)(dVar31 * dVar27 - dVar22);
            fVar5 = -(float)(dVar30 * dVar27 - dVar21);
            fVar4 = -(float)(dVar32 * dVar27 - dVar23);
            dVar29 = (double)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
            dVar27 = dVar39;
            dVar26 = dVar39;
            dVar28 = dVar39;
            if ((double)(float)SQRT(dVar29) != dVar39) {
              dVar27 = 1.0 / SQRT(dVar29);
              dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar27) * dVar27 -
                                                       dVar38) * (double)(float)(dVar27 * dVar40) +
                                      dVar27);
              dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar29 * dVar27) * dVar27 -
                                                       dVar38) * (double)(float)(dVar27 * dVar40) +
                                      dVar27);
              fVar2 = (float)(-(double)(float)((double)(float)(dVar29 * dVar27) * dVar27 - dVar38) *
                              (double)(float)(dVar27 * dVar40) + dVar27);
              dVar27 = (double)(fVar5 * fVar2);
              dVar26 = (double)(fVar3 * fVar2);
              dVar28 = (double)(fVar4 * fVar2);
            }
            dVar24 = (double)*(float *)(uVar7 + 0x134);
            dVar29 = (double)*(float *)(uVar7 + 0x130);
            dVar25 = (double)*(float *)(uVar7 + 0x138);
            dVar26 = (double)((float)(dVar28 * dVar25 +
                                     (double)(float)(dVar27 * dVar29 +
                                                    (double)(float)(dVar26 * dVar24))) /
                             (*(float *)(uVar7 + 0x15c) - *(float *)(uVar7 + 0x200)));
            dVar27 = dVar26;
            if (dVar26 - dVar39 < 0.0) {
              dVar27 = ABS(dVar26);
            }
            dVar28 = dVar38;
            if (dVar26 - dVar39 < 0.0) {
              dVar28 = dVar33;
            }
            dVar26 = (double)(float)(dVar38 - dVar27);
            if ((double)(float)(dVar38 - dVar27) - dVar39 < 0.0) {
              dVar26 = dVar39;
            }
            if (ABS(-(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar27 * 
                                                  dVar27) * dVar27) * DAT_007358cc +
                                                  (float)((double)(float)(dVar27 * dVar27) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar27 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar26) - dVar37) * dVar28 -
                                    dVar37)) < dVar36) {
              fVar3 = (float)(dVar32 * dVar29 - (double)(float)(dVar30 * dVar25));
              fVar4 = (float)(dVar31 * dVar25 - (double)(float)(dVar32 * dVar24));
              fVar5 = (float)(dVar30 * dVar24 - (double)(float)(dVar31 * dVar29));
              dVar27 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
              dVar30 = dVar39;
              dVar31 = dVar39;
              dVar32 = dVar39;
              if ((double)(float)SQRT(dVar27) != dVar39) {
                dVar30 = 1.0 / SQRT(dVar27);
                dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar30) * dVar30
                                                         - dVar38) *
                                         (double)(float)(dVar30 * dVar40) + dVar30);
                dVar30 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar30) * dVar30
                                                         - dVar38) *
                                         (double)(float)(dVar30 * dVar40) + dVar30);
                fVar2 = (float)(-(double)(float)((double)(float)(dVar27 * dVar30) * dVar30 - dVar38)
                                * (double)(float)(dVar30 * dVar40) + dVar30);
                dVar32 = (double)(fVar4 * fVar2);
                dVar31 = (double)(fVar3 * fVar2);
                dVar30 = (double)(fVar5 * fVar2);
              }
              if ((double)(float)(dVar30 * dVar23 +
                                 (double)(float)(dVar32 * dVar21 + (double)(float)(dVar31 * dVar22))
                                 ) <= dVar39) {
                MB_RotateQuatAxisAngle((float)dVar34,outQuat,outQuat);
              }
              else {
                MB_RotateQuatAxisAngle((float)dVar35,outQuat,outQuat);
              }
            }
          }
          else {
            iVar20 = iVar20 + 1;
            *(int *)((int)&DAT_0092e28c + iVar18) = iVar8;
            *(undefined4 *)(iVar8 + 0x94) = 0;
            iVar18 = iVar18 + 4;
          }
        }
      }
      iVar14 = iVar14 + 1;
      piVar17 = piVar17 + 1;
    } while (iVar14 < iVar12);
  }
  if (((g_heroState != DEATH_ICE) && ((Level != Gemlik || (g_heroState != DEATH_MUD)))) &&
     (iVar12 = UpdateSegmentColl_0(param_1), iVar12 != 0)) {
    iVar15 = 1;
  }
  iVar12 = PushCamInAvoidEnv(param_1);
  iVar14 = UpdateBumpColl_0(param_1);
  dVar40 = (double)*(float *)(uVar7 + 0x200);
  if ((double)(float)((double)*(float *)(uVar7 + 0x15c) - dVar40) < (double)DAT_0071d4b0) {
    fVar3 = (float)((double)*(float *)(uVar7 + 0x15c) - (double)DAT_0071d4b0);
    dVar40 = (double)fVar3;
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    *(float *)(uVar7 + 0x200) = fVar3;
    auVar41 = loadVectorLeftIndexed(0x24,0x320cc);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar9 = storeVectorElementHalfWordIndexed(auVar41,0x204,uVar19);
    *(undefined2 *)(uVar7 + 0x204) = uVar9;
  }
  if ((*(short *)(uVar7 + 0x20a) == 0) &&
     ((((uint)(ZERO_MASK(iVar14)) &
       (uint)(ZERO_MASK(iVar12)) & iVar15 - 1U) != 0xffffffff ||
      ((((int)(animationSpeed * 2000.5) <= (int)*(short *)(uVar7 + 0x204) ||
        (*(short *)(uVar7 + 0x204) < 1)) &&
       ((0x3e999999 <
         (int)(((uint)((int)g_Pad.sticks.x >> 0x1f) >> 1 ^ (uint)g_Pad.sticks.x) -
              ((int)g_Pad.sticks.x >> 0x1f)) ||
        (0x3e999999 <
         (int)(((uint)((int)g_Pad.sticks.y >> 0x1f) >> 1 ^ (uint)g_Pad.sticks.y) -
              ((int)g_Pad.sticks.y >> 0x1f)))))))))) {
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = loadVectorLeftIndexed(0x24,0x320cc);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    if ((int)(animationSpeed * 2000.5) < (int)*(short *)(uVar7 + 0x204)) {
      FastDecTimerS16(uVar19 + 0x204);
      dVar40 = (double)*(float *)(uVar7 + 0x200);
    }
    else {
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar41,0x204,uVar19);
      *(undefined2 *)(uVar7 + 0x204) = uVar9;
    }
  }
  else {
    iVar15 = FastDecTimerS16(uVar19 + 0x204);
    if (iVar15 == 0) {
      if ((*(short *)(uVar7 + 0x20a) != 0) &&
         (iVar15 = FastDecTimerS16(uVar19 + 0x204), iVar15 != 0)) {
        *(undefined2 *)(uVar7 + 0x20a) = 0;
      }
    }
    else {
      *(undefined2 *)(uVar7 + 0x20a) = 0;
    }
    dVar40 = (double)FastIntToDouble(*(undefined2 *)(uVar7 + 0x204));
    dVar33 = (double)FastIntToDouble((int)(animationSpeed * 2000.5));
    dVar40 = (double)MB_CosineInterpolate
                               (0,(double)*(float *)(uVar7 + 0x200),(double)(float)(dVar40 / dVar33)
                               );
    *(float *)(uVar7 + 0x200) = (float)dVar40;
  }
  pMVar11 = g_heroMobyPtr;
  fVar3 = *(float *)(uVar7 + 0x134);
  fVar4 = *(float *)(uVar7 + 0x130);
  fVar5 = *(float *)(uVar7 + 0x138);
  dVar33 = 0.0;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  bVar16 = g_heroState == DEATH_ICE;
  bVar1 = g_heroState == DEATH_MUD;
  fVar10 = (float)((double)*(float *)(uVar7 + 0x15c) - dVar40) / fVar2;
  dVar40 = dVar33;
  if (0.0 - fVar2 < 0.0) {
    dVar40 = (double)(fVar3 * fVar10);
  }
  dVar34 = dVar33;
  if (0.0 - fVar2 < 0.0) {
    dVar34 = (double)(fVar4 * fVar10);
  }
  dVar35 = dVar33;
  if (0.0 - fVar2 < 0.0) {
    dVar35 = (double)(fVar5 * fVar10);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar40 = (double)(fVar3 * fVar10);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar34 = (double)(fVar4 * fVar10);
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar35 = (double)(fVar5 * fVar10);
  }
  *(float *)(uVar7 + 0x134) = (float)dVar40;
  *(float *)(uVar7 + 0x130) = (float)dVar34;
  *(float *)(uVar7 + 0x138) = (float)dVar35;
  if (((bVar16) ||
      (((Level == Gemlik && (bVar1)) ||
       (iVar15 = CollLine(uVar19 + 0x90,local_150,CAMERA_COLL_FLAGS,pMVar11,0),
       iVar15 == 0)))) ||
     (((g_CollOutput.pMoby != (MobyInstance *)0x0 && ((g_CollOutput.pMoby)->oClass == CAMERA_OBJECT)) ||
      (iVar15 = CamCollGrid_FindPrimAtPnt
                          (dVar33,CONCAT44(g_CollOutput.ip.x,g_CollOutput.ip.y),
                           CONCAT44(g_CollOutput.ip.z,g_CollOutput.ip.w)), iVar15 != 0)))) {
    *(undefined4 *)(uVar7 + 0x21c) = 0;
  }
  else {
    if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
       (bVar16 = MB_isCrate(g_CollOutput.pMoby), bVar16)) {
      SetCollDamIn
                (0x4034000000000000,&uStack_130,g_heroMobyPtr,0x800000,g_heroMobyPtr,local_140);
      local_118 = CONCAT22(0x303,g_heroMobyPtr->oClass);
      CollDamageMobyDirect
                (g_CollOutput.pMoby,g_heroMobyPtr->oClass,CONCAT44(uStack_130,uStack_12c),
                 CONCAT44(uStack_128,uStack_124),CONCAT44(uStack_120,uStack_11c),
                 CONCAT44(local_118,uStack_114),CONCAT44(uStack_110,uStack_10c),
                 CONCAT44(uStack_108,uStack_104));
    }
    fVar3 = animationSpeed;
    iVar15 = *(int *)(uVar7 + 0x21c) + 1;
    *(int *)(uVar7 + 0x21c) = iVar15;
    if ((int)(fVar3 * 30.5) <= iVar15) {
      Camera_resetToFollow();
    }
  }
  if (0 < iVar20) {
    piVar17 = &DAT_0092e28c;
    do {
      iVar15 = *piVar17;
      iVar20 = iVar20 + -1;
      piVar17 = piVar17 + 1;
      *(undefined4 *)(iVar15 + 0x94) = *(undefined4 *)(*(int *)(iVar15 + 0x24) + 0x10);
    } while (0 < iVar20);
  }
  return;
}


// 0x0032bcc (0x4 bytes)
void STUB_00032bcc(...)

{
  return;
}


// 0x0032bd0 (0x4 bytes)
void STUB_00032bd0(...)

{
  return;
}


// 0x0032bd4 (0x50 bytes)
undefined8 Cam0_ClearModCamera(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    if (*(int *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x220) == param_1) {
      uVar1 = 1;
      *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x220) = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


// 0x0032c24 (0xa8 bytes)
undefined8 Cam0_SetModCamera(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    iVar2 = *(int *)(iVar1 + 0x220);
    if (iVar2 == 0) {
      *(int *)(iVar1 + 0x220) = param_1;
      uVar3 = 1;
    }
    else if (iVar2 == param_1) {
      uVar3 = 1;
    }
    else if (*(byte *)(*(int *)(ImportCameras +
                                (int)((longlong)*(short *)(iVar2 + 0x84) << 5) + 0x1c) + 0x1c) <
             *(byte *)(*(int *)(ImportCameras +
                                (int)((longlong)*(short *)(param_1 + 0x84) << 5) + 0x1c) + 0x1c)) {
      *(int *)(iVar1 + 0x220) = param_1;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}


// 0x0032ccc (0x24 bytes)
void Cam0_SetRunAtCamDist(double param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x22c) = (float)param_1;
  }
  return;
}


// 0x0032cf0 (0x24 bytes)
void Cam0_ForceElv(double param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(float *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1cc) = (float)param_1;
  }
  return;
}


// 0x0032d18 (0x44 bytes)
void Cam0_SetPitchGainDamp(double param_1,double param_2)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    if (param_1 != 0.0) {
      *(float *)(iVar1 + 0x124) = (float)param_1;
    }
    if (param_2 != 0.0) {
      *(float *)(iVar1 + 0x128) = (float)param_2;
    }
  }
  return;
}


// 0x0032d5c (0x24 bytes)
void Cam0_SetBumpFlags(undefined4 param_1)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(undefined4 *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x218) = param_1;
  }
  return;
}


// 0x0032d80 (0x50 bytes)
void Cam0_SetCollData(double param_1,double param_2,double param_3)

{
  int iVar1;
  
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    iVar1 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
    if (*(int *)(iVar1 + 0x20c) != 0) {
      *(float *)(iVar1 + 0x20c) = (float)param_1;
    }
    if (*(int *)(iVar1 + 0x210) != 0) {
      *(float *)(iVar1 + 0x210) = (float)param_2;
    }
    if (*(int *)(iVar1 + 0x214) != 0) {
      *(float *)(iVar1 + 0x214) = (float)param_3;
    }
  }
  return;
}


// 0x0032dd0 (0x2c bytes)
void Cam0_DisableUserCam(void)

{
  if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
    *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) =
         *(uint *)(*(int *)((int)GameCamera.pCurrentUpdCam + 0x70) + 0x1b8) | 3;
  }
  return;
}


// 0x0032e10 (0x234 bytes)
// strings: 00a0feec: 'None'


void GetAnalogInputs_0(void *pCam,float *azm,float *elv)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  short sVar5;
  dword dVar6;
  undefined2 uVar7;
  
  fVar3 = g_Pad.sticks.x;
  dVar6 = g_GameSettings.CameraLeftRight;
  iVar4 = *(int *)((int)pCam + 0x70);
  if ((*(uint *)(iVar4 + 0x1b8) & 1) == 0) {
    *azm = g_Pad.sticks.x;
    if (dVar6 == 0) {
      fVar3 = -fVar3;
      *azm = fVar3;
    }
  }
  else {
    fVar3 = 0.0;
    *azm = 0.0;
  }
  uVar7 = CHAR_ARRAY_00a0feec.piece<64,2>();
  if (fVar3 == 0.0) {
    DAT_0092e280 = 0;
    DAT_0092e284 = 0;
    if (*(int *)(iVar4 + 0x1c4) != 0) {
      *azm = *(float *)(iVar4 + 0x1c4);
    }
  }
  else {
    *(float *)(iVar4 + 0x1bc) = g_CameraSpeed;
    if ((ushort)uVar7 < 3) {
      DAT_0092e280 = DAT_0092e280 + 1;
      if (DAT_0092e284 == 0) {
        if ((int)(animationSpeed * 60.5) < DAT_0092e280) {
          if (uVar7 != -1) {
            CHAR_ARRAY_00a0feec.piece<64,2>() = uVar7 + 1;
          }
          iVar2 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<66,2>() < iVar2 / 600) {
            sVar5 = (short)(iVar2 >> 0x1f);
            CHAR_ARRAY_00a0feec.piece<66,2>() =
                 ((short)(iVar2 / 600) + sVar5) -
                 ((short)((short)(iVar2 / 0x2580000) + sVar5) >> 0xf);
          }
          DAT_0092e284 = 1;
          CHAR_ARRAY_00a0feec.piece<68,4>() = CHAR_ARRAY_00a0feec.piece<68,4>() | 1 << (Level & 0x3f) | 0x80000000
          ;
        }
      }
    }
  }
  if ((*(uint *)(iVar4 + 0x1b8) & 2) == 0) {
    fVar3 = -g_Pad.sticks.y;
    bVar1 = g_GameSettings.CameraUpDown == 0;
    *elv = fVar3;
    if (bVar1) {
      fVar3 = -fVar3;
      *elv = fVar3;
    }
    if (fVar3 == 0.0) {
      *elv = *(float *)(iVar4 + 0x1cc) * 1.4323945;
    }
  }
  else {
    *elv = 0.0;
    *elv = *(float *)(iVar4 + 0x1cc) * 1.4323945;
  }
  return;
}


// 0x0033068 (0x584 bytes)
// inlined: FastRSqrt @0x3327c, FastAtan2 @0x33378
void UpdateUserCam_0(double param_1,double param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  float *outQuat;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  float fVar30;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar5 = (ulonglong *)lVar16;
  *puVar5 = uVar14;
  puVar5[0x24] = in_LR;
  puVar5[0x1e] = in_f28;
  puVar5[0x1f] = in_f29;
  puVar5[0x20] = in_f30;
  puVar5[0x21] = in_f31;
  puVar5[0x1d] = unaff_r31;
  puVar5[0x18] = unaff_r26;
  puVar5[0x19] = unaff_r27;
  puVar5[0x17] = unaff_r25;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x1a] = unaff_r28;
  fVar4 = param_3[0x1c];
  puVar5[0x1c] = unaff_r30;
  outQuat = (float *)((int)fVar4 + 0x130);
  dVar27 = 0.0;
  fVar30 = Cam_InterpValues
                     (*(float *)((int)fVar4 + 0x1a8),(float)param_1,DAT_0071d48c,DAT_0071d490,0.0,
                      param_3);
  *(float *)((int)fVar4 + 0x1a8) = fVar30;
  dVar22 = (double)*(float *)((int)fVar4 + 0x1b0);
  *(float *)((int)fVar4 + 0x164) = *(float *)((int)fVar4 + 0x1bc) * fVar30;
  dVar29 = dVar27;
  if (0.30000001192092896 - param_2 < 0.0) {
    dVar29 = (double)((float)(param_2 - 0.30000001192092896) * 1.4285715);
  }
  if (param_2 - -0.30000001192092896 < 0.0) {
    dVar29 = (double)((float)(param_2 + 0.30000001192092896) * 1.4285715);
  }
  if (dVar29 != dVar27) {
    dVar22 = (double)*(float *)((int)fVar4 + 0x1b0);
    fVar30 = DAT_0071d49c;
    if ((ABS(dVar22) <= ABS(dVar29)) ||
       (((dVar29 <= dVar27 || (*(int *)((int)fVar4 + 0x1b0) < 1)) &&
        ((dVar27 <= dVar29 || (-1 < *(int *)((int)fVar4 + 0x1b0))))))) goto LAB_00033194;
  }
  fVar30 = DAT_0071d4a0;
LAB_00033194:
  dVar28 = (double)fVar30;
  fVar30 = Cam_InterpValues
                     ((float)dVar22,(float)dVar29,DAT_0071d48c,DAT_0071d490,fVar30,
                      (float *)&DAT_00720000);
  *(float *)((int)fVar4 + 0x1b0) = fVar30;
  dVar29 = (double)(fVar30 * 0.6981317);
  if (param_1 == dVar27) {
    MB_RotateQuatAxisAngle(*(float *)((int)fVar4 + 0x1c8),outQuat,outQuat);
  }
  else {
    MB_RotateQuatAxisAngle(*(float *)((int)fVar4 + 0x164),outQuat,outQuat);
  }
  uVar13 = GameCamera.camStatics.heroUp.z;
  uVar12 = GameCamera.camStatics.heroUp.y;
  fVar6 = GameCamera.camStatics.heroUp.x;
  fVar30 = *(float *)((int)fVar4 + 0x130);
  fVar1 = *(float *)((int)fVar4 + 0x138);
  fVar2 = *(float *)((int)fVar4 + 0x134);
  fVar3 = fVar1 * GameCamera.camStatics.heroUp.x - fVar30 * (float)GameCamera.camStatics.heroUp.z;
  fVar7 = fVar2 * (float)GameCamera.camStatics.heroUp.z -
          fVar1 * (float)GameCamera.camStatics.heroUp.y;
  fVar8 = fVar30 * (float)GameCamera.camStatics.heroUp.y - fVar2 * GameCamera.camStatics.heroUp.x;
  *(undefined4 *)((int)puVar5 + 0x7c) = 0;
  fVar9 = fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3;
  fVar6 = fVar1 * (float)uVar13 + fVar30 * fVar6 + fVar2 * (float)uVar12;
  fVar30 = SQRT(fVar1 * fVar1 + fVar30 * fVar30 + fVar2 * fVar2);
  dVar22 = dVar27;
  dVar25 = dVar27;
  dVar26 = dVar27;
  if ((double)SQRT(fVar9) != dVar27) {
    fVar1 = 1.0 / SQRT(fVar9);
    fVar1 = -(fVar9 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar9 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar9 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar26 = (double)(fVar7 * fVar1);
    dVar25 = (double)(fVar3 * fVar1);
    dVar22 = (double)(fVar8 * fVar1);
  }
  dVar23 = ABS((double)fVar30);
  *(float *)(puVar5 + 0x10) = fVar30;
  dVar24 = ABS((double)fVar6);
  *(float *)((int)puVar5 + 0x84) = fVar6;
  *(float *)(puVar5 + 0xe) = (float)dVar26;
  *(float *)(puVar5 + 0x11) = (float)(dVar23 - dVar24);
  *(float *)((int)puVar5 + 0x74) = (float)dVar25;
  *(float *)(puVar5 + 0xf) = (float)dVar22;
  uVar19 = (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x84) >> 0x1d) & 4;
  dVar22 = ABS((double)*(float *)(puVar5 + 0x10));
  if ((double)*(float *)(puVar5 + 0x11) - dVar27 < 0.0) {
    dVar22 = dVar24;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar30 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  dVar25 = ABS((double)*(float *)((int)puVar5 + 0x84));
  if ((double)*(float *)(puVar5 + 0x11) - dVar27 < 0.0) {
    dVar25 = dVar23;
  }
  dVar26 = dVar27;
  if (dVar27 < dVar22) {
    lVar15 = uVar14 - 0x100;
    lVar17 = uVar14 - 0x84;
    lVar20 = uVar14 - 0x74;
    lVar21 = 2;
    fVar2 = (float)(dVar25 - dVar22) / (float)(dVar25 + dVar22);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x13) = fVar2;
    *(float *)(puVar5 + 0x12) = fVar2;
    *(float *)((int)puVar5 + 0x94) = fVar2;
    *(float *)((int)puVar5 + 0x8c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar3;
    *(float *)((int)puVar5 + 0x94) = *(float *)((int)puVar5 + 0x94) * fVar2;
    *(float *)(puVar5 + 0x13) = *(float *)(puVar5 + 0x13) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar15 + 0x8c) = *(float *)((int)lVar15 + 0x7c) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar20 = uVar14 - 0x84;
    pfVar18 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar15 = lVar16;
    lVar17 = lVar20;
    do {
      fVar2 = *pfVar18;
      fVar3 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar15 + 0x8c) = *(float *)((int)lVar15 + 0x8c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar15 = 2;
    dVar22 = dVar27;
    do {
      iVar10 = (int)lVar16;
      iVar11 = (int)lVar20;
      lVar16 = lVar16 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar10 + 0x8c)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar26 = (double)((float)(dVar22 + 0.7853981852531433) * fVar1 + fVar30);
  }
  if ((ABS(dVar26) < ABS(dVar29)) && ((double)DAT_0071d4a0 == dVar28)) {
    *(float *)((int)fVar4 + 0x1b0) = (float)(dVar26 * 1.4323945045471191);
  }
  dVar22 = dVar27;
  if (dVar29 <= dVar26) {
    if ((dVar26 <= dVar29) || (*(short *)((int)param_3[0x1c] + 0x208) < 0)) {
      *(undefined4 *)((int)fVar4 + 0x168) = 0;
    }
    else {
      dVar27 = (double)FastWrapRot((float)dVar26,-DAT_0071d4a4);
      if (dVar29 <= dVar27) {
        dVar27 = -(double)DAT_0071d4a4;
      }
      else {
        dVar27 = (double)FastDiffRots(dVar29,dVar26);
      }
      *(float *)((int)fVar4 + 0x168) = (float)dVar27;
    }
  }
  else {
    dVar27 = (double)FastWrapRot((float)dVar26,DAT_0071d4a4);
    if (dVar27 <= dVar29) {
      dVar27 = (double)DAT_0071d4a4;
    }
    else {
      dVar27 = (double)FastDiffRots(dVar29,dVar26);
    }
    *(float *)((int)fVar4 + 0x168) = (float)dVar27;
  }
  if (dVar29 < dVar22) {
    *(undefined2 *)((int)param_3[0x1c] + 0x22) = 1;
    dVar27 = (double)*(float *)((int)fVar4 + 0x168);
  }
  MB_RotateQuatAxisAngle((float)dVar27,outQuat,outQuat);
  return;
}


// 0x00335f0 (0x16c bytes)
void UpdateCamPull_0(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar3 = *(float **)(param_1 + 0x70);
  if (0 < *(short *)(pfVar3 + 4)) {
    fVar4 = DAT_0071ea50 * ((pfVar3[1] - pfVar3[0x25]) - pfVar3[0x4d]) + pfVar3[0x4d];
    fVar6 = DAT_0071ea50 * ((*pfVar3 - pfVar3[0x24]) - pfVar3[0x4c]) + pfVar3[0x4c];
    fVar5 = DAT_0071ea50 * ((pfVar3[2] - pfVar3[0x26]) - pfVar3[0x4e]) + pfVar3[0x4e];
    fVar1 = pfVar3[0x57];
    pfVar3[0x4f] = pfVar3[3];
    fVar2 = 0.0;
    fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    if (fVar7 <= fVar1) {
      pfVar3[0x4e] = fVar5;
      fVar8 = fVar1 - pfVar3[0x80];
      pfVar3[0x4d] = fVar4;
      pfVar3[0x4c] = fVar6;
      if (fVar7 < fVar8) {
        fVar9 = fVar8 / fVar7;
        fVar10 = fVar2;
        if (0.0 - fVar7 < 0.0) {
          fVar10 = fVar6 * fVar9;
        }
        fVar11 = fVar2;
        if (0.0 - fVar7 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (0.0 - fVar7 < 0.0) {
          fVar2 = fVar5 * fVar9;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar10 = fVar6 * fVar9;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (fVar7 - 0.0 < 0.0) {
          fVar2 = fVar5 * fVar9;
        }
        pfVar3[0x4c] = fVar10;
        pfVar3[0x4d] = fVar11;
        pfVar3[0x4e] = fVar2;
        fVar7 = fVar8;
      }
    }
    else {
      fVar9 = fVar1 / fVar7;
      fVar8 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar8 = fVar6 * fVar9;
      }
      fVar10 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar10 = fVar4 * fVar9;
      }
      if (0.0 - fVar7 < 0.0) {
        fVar2 = fVar5 * fVar9;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar8 = fVar6 * fVar9;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar10 = fVar4 * fVar9;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar2 = fVar5 * fVar9;
      }
      pfVar3[0x4c] = fVar8;
      pfVar3[0x4d] = fVar10;
      pfVar3[0x4e] = fVar2;
      fVar7 = fVar1;
    }
    pfVar3[0x80] = fVar1 - fVar7;
  }
  return;
}


// 0x00337a0 (0xa40 bytes)
// inlined: FastRSqrt @0x33874, FastRSqrt @0x33974, FastRSqrt @0x33a24, FastAtan2 @0x33d40, FastRSqrt @0x33f28, FastRSqrt @0x34050, FastRSqrt @0x3410c
void UpdateCamRotation_0(float *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar39;
  float fVar40;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x130;
  puVar10 = (ulonglong *)lVar21;
  *puVar10 = uVar19;
  puVar10[0x28] = in_LR;
  puVar10[0x1c] = in_f22;
  puVar10[0x1d] = in_f23;
  puVar10[0x1e] = in_f24;
  puVar10[0x1f] = in_f25;
  puVar10[0x20] = in_f26;
  puVar10[0x21] = in_f27;
  puVar10[0x22] = in_f28;
  puVar10[0x23] = in_f29;
  puVar10[0x24] = in_f30;
  puVar10[0x25] = in_f31;
  puVar10[0x18] = unaff_r28;
  puVar10[0x1b] = unaff_r31;
  fVar9 = param_1[0x1c];
  puVar10[0x1a] = unaff_r30;
  puVar10[0x19] = unaff_r29;
  cVar1 = *(char *)((int)fVar9 + 0x104);
  puVar10[0x17] = unaff_r27;
  uVar18 = GameCamera.camStatics.heroUp.z;
  uVar17 = GameCamera.camStatics.heroUp.y;
  fVar40 = GameCamera.camStatics.heroUp.x;
  if (cVar1 == '\v') {
    fVar40 = g_heroPosition.x - param_1[0xc];
    *param_1 = fVar40;
    fVar7 = g_heroPosition.y - param_1[0xd];
    param_1[1] = fVar7;
    fVar8 = g_heroPosition.z - param_1[0xe];
    param_1[2] = fVar8;
    fVar4 = fVar8 * fVar8 + fVar40 * fVar40 + fVar7 * fVar7;
    param_1[3] = g_heroPosition.w;
    fVar11 = 0.0;
    fVar2 = fVar11;
    fVar3 = fVar11;
    if (SQRT(fVar4) != 0.0) {
      fVar11 = 1.0 / SQRT(fVar4);
      fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar11 = -(fVar4 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
      fVar3 = fVar40 * fVar11;
      fVar2 = fVar7 * fVar11;
      fVar11 = fVar8 * fVar11;
    }
    *param_1 = fVar3;
    param_1[1] = fVar2;
    param_1[2] = fVar11;
    FastDecTimerS16((int)fVar9 + 0x20);
  }
  else {
    fVar7 = *(float *)((int)fVar9 + 0x88) * (float)GameCamera.camStatics.heroUp.z +
            *(float *)((int)fVar9 + 0x80) * GameCamera.camStatics.heroUp.x +
            *(float *)((int)fVar9 + 0x84) * (float)GameCamera.camStatics.heroUp.y;
    fVar8 = param_1[0xe] * (float)GameCamera.camStatics.heroUp.z +
            param_1[0xc] * GameCamera.camStatics.heroUp.x +
            param_1[0xd] * (float)GameCamera.camStatics.heroUp.y;
    dVar39 = (double)(-((float)GameCamera.camStatics.heroUp.y * fVar7 -
                       *(float *)((int)fVar9 + 0x84)) -
                     -((float)GameCamera.camStatics.heroUp.y * fVar8 - param_1[0xd]));
    dVar28 = (double)(-(GameCamera.camStatics.heroUp.x * fVar7 - *(float *)((int)fVar9 + 0x80)) -
                     -(GameCamera.camStatics.heroUp.x * fVar8 - param_1[0xc]));
    dVar29 = (double)(-((float)GameCamera.camStatics.heroUp.z * fVar7 -
                       *(float *)((int)fVar9 + 0x88)) -
                     -((float)GameCamera.camStatics.heroUp.z * fVar8 - param_1[0xe]));
    fVar2 = param_1[2];
    fVar3 = param_1[1];
    fVar8 = *param_1;
    fVar7 = (float)(dVar29 * dVar29 +
                   (double)(float)(dVar28 * dVar28 + (double)(float)(dVar39 * dVar39)));
    if (0.05 <= SQRT(fVar7)) {
      fVar8 = 1.0 / SQRT(fVar7);
      param_1[3] = *(float *)((int)fVar9 + 0x8c);
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar33 = (double)(-(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8);
      fVar8 = (float)(dVar28 * dVar33);
      fVar3 = (float)(dVar39 * dVar33);
      fVar2 = (float)(dVar29 * dVar33);
      *param_1 = fVar8;
      param_1[1] = fVar3;
      param_1[2] = fVar2;
    }
    fVar11 = (float)uVar17 * fVar2 - (float)uVar18 * fVar3;
    fVar7 = (float)uVar18 * fVar8 - fVar40 * fVar2;
    fVar40 = fVar40 * fVar3 - (float)uVar17 * fVar8;
    dVar37 = 0.0;
    param_1[7] = 0.0;
    fVar8 = fVar40 * fVar40 + fVar11 * fVar11 + fVar7 * fVar7;
    dVar33 = dVar37;
    dVar30 = dVar37;
    dVar31 = dVar37;
    if (SQRT(fVar8) != 0.0) {
      fVar3 = 1.0 / SQRT(fVar8);
      fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar8 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar31 = (double)(fVar11 * fVar3);
      dVar30 = (double)(fVar7 * fVar3);
      dVar33 = (double)(fVar40 * fVar3);
    }
    param_1[4] = (float)dVar31;
    param_1[5] = (float)dVar30;
    pfVar24 = (float *)&DAT_0003375c;
    param_1[6] = (float)dVar33;
    dVar33 = 0.004000000189989805;
    dVar30 = 0.20000000298023224;
    fVar40 = Cam_InterpValues
                       (*(float *)((int)fVar9 + 0x28),*(float *)((int)fVar9 + 0x160),0.004,0.2,0.0,
                        (float *)&DAT_0003375c);
    *(float *)((int)fVar9 + 0x28) = fVar40;
    fVar40 = Cam_InterpValues
                       (*(float *)((int)fVar9 + 0x24),*(float *)((int)fVar9 + 0xf0),(float)dVar33,
                        (float)dVar30,(float)dVar37,pfVar24);
    *(float *)((int)fVar9 + 0x24) = fVar40;
    uVar18 = GameCamera.camStatics.heroUp.z;
    uVar17 = GameCamera.camStatics.heroUp.y;
    fVar11 = GameCamera.camStatics.heroUp.x;
    fVar2 = DAT_007358cc;
    fVar40 = *(float *)((int)fVar9 + 0x28) - fVar40;
    fVar7 = *(float *)((int)fVar9 + 0x148) * (float)GameCamera.camStatics.heroUp.z +
            *(float *)((int)fVar9 + 0x140) * GameCamera.camStatics.heroUp.x +
            *(float *)((int)fVar9 + 0x144) * (float)GameCamera.camStatics.heroUp.y;
    fVar8 = ((param_1[0xd] -
             (float)(-(double)(fVar7 * (float)GameCamera.camStatics.heroUp.y) - dVar39)) -
            -(fVar40 * (float)GameCamera.camStatics.heroUp.y)) - param_1[0xd];
    fVar3 = ((param_1[0xc] - (float)(-(double)(fVar7 * GameCamera.camStatics.heroUp.x) - dVar28)) -
            -(fVar40 * GameCamera.camStatics.heroUp.x)) - param_1[0xc];
    fVar40 = ((param_1[0xe] -
              (float)(-(double)(fVar7 * (float)GameCamera.camStatics.heroUp.z) - dVar29)) -
             -(fVar40 * (float)GameCamera.camStatics.heroUp.z)) - param_1[0xe];
    dVar28 = (double)SQRT(fVar40 * fVar40 + fVar3 * fVar3 + fVar8 * fVar8);
    if (dVar28 != dVar37) {
      fVar7 = param_1[1];
      fVar4 = *param_1;
      fVar5 = param_1[2];
      dVar31 = 1.0;
      fVar16 = fVar5 * param_1[4] - fVar4 * param_1[6];
      fVar14 = fVar7 * param_1[6] - fVar5 * param_1[5];
      fVar15 = fVar4 * param_1[5] - fVar7 * param_1[4];
      dVar33 = (double)DAT_007358c0;
      dVar38 = (double)DAT_007358c4;
      dVar29 = (double)DAT_007358c8;
      param_1[8] = fVar14;
      param_1[0xb] = 0.0;
      dVar39 = (double)(float)((double)(fVar5 * fVar40 + fVar4 * fVar3 + fVar7 * fVar8) / dVar28);
      param_1[9] = fVar16;
      param_1[10] = fVar15;
      fVar7 = *(float *)((int)fVar9 + 0x134);
      fVar4 = *(float *)((int)fVar9 + 0x130);
      fVar5 = *(float *)((int)fVar9 + 0x138);
      fVar6 = *(float *)((int)fVar9 + 0x34);
      fVar11 = fVar5 * (float)uVar18 + fVar4 * fVar11 + fVar7 * (float)uVar17;
      fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar7 * fVar7);
      dVar28 = dVar39;
      if (dVar39 - dVar37 < 0.0) {
        dVar28 = ABS(dVar39);
      }
      dVar36 = ABS((double)fVar11);
      dVar34 = (double)(float)(1.0 - dVar28);
      if ((double)(float)(1.0 - dVar28) - dVar37 < 0.0) {
        dVar34 = dVar37;
      }
      dVar35 = ABS((double)fVar7);
      *(float *)(puVar10 + 0xe) = fVar7;
      *(float *)((int)puVar10 + 0x74) = fVar11;
      dVar32 = dVar31;
      if (dVar39 - dVar37 < 0.0) {
        dVar32 = -1.0;
      }
      *(float *)(puVar10 + 0xf) = (float)(dVar35 - dVar36);
      uVar25 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
      uVar22 = uVar25 << 2 | 0x735900;
      dVar39 = ABS((double)*(float *)(puVar10 + 0xe));
      if ((double)*(float *)(puVar10 + 0xf) - dVar37 < 0.0) {
        dVar39 = dVar36;
      }
      dVar29 = -(double)(((float)((double)(float)(dVar28 * dVar28) * dVar28) * fVar2 +
                         (float)((double)(float)(dVar28 * dVar28) * dVar29 +
                                (double)(float)(dVar28 * dVar38 + dVar33))) * (float)SQRT(dVar34) -
                        1.5707964);
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      dVar28 = ABS((double)*(float *)((int)puVar10 + 0x74));
      if ((double)*(float *)(puVar10 + 0xf) - dVar37 < 0.0) {
        dVar28 = dVar35;
      }
      fVar2 = *(float *)((int)uVar22 + 4);
      dVar33 = -(double)(float)(dVar29 * dVar32 - 1.5707963705062866);
      if ((double)(fVar15 * fVar40 + fVar14 * fVar3 + fVar16 * fVar8) - dVar37 < 0.0) {
        dVar33 = (double)(float)(dVar29 * dVar32 - 1.5707963705062866);
      }
      dVar29 = dVar37;
      if (dVar37 < dVar39) {
        lVar20 = uVar19 - 0x120;
        lVar23 = uVar19 - 0xb4;
        lVar26 = uVar19 - 0xa4;
        lVar27 = 2;
        fVar40 = (float)(dVar28 - dVar39) / (float)(dVar28 + dVar39);
        fVar8 = fVar40 * fVar40;
        *(float *)(puVar10 + 0x11) = fVar40;
        *(float *)(puVar10 + 0x10) = fVar40;
        *(float *)((int)puVar10 + 0x84) = fVar40;
        *(float *)((int)puVar10 + 0x7c) = fVar40;
        fVar40 = fVar8 * fVar8;
        *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar8;
        *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar40;
        *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar40 * fVar8;
        do {
          *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar40 * fVar40;
          iVar12 = (int)lVar23;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar40 * fVar40;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar19 - 0xb4;
        uVar22 = ZEXT48(&DAT_007358e0);
        lVar20 = lVar21;
        lVar23 = lVar26;
        do {
          pfVar24 = (float *)uVar22;
          fVar40 = pfVar24[1];
          uVar22 = uVar22 + 8;
          *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x7c) * *pfVar24;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar40;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar20 = 2;
        dVar28 = dVar37;
        do {
          iVar12 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar13 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar12 + 0x7c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      dVar28 = 0.5;
      fVar40 = -(float)(dVar29 * 1.4323945045471191);
      if (0.5 - fVar40 < 0.0) {
        fVar40 = 1.0 - fVar40;
      }
      dVar39 = dVar37;
      if ((float)(dVar29 * 1.4323945045471191) - -0.1 < 0.0) {
        dVar39 = (double)(fVar40 * 2.0 * 0.2617994);
      }
      dVar29 = (double)Cam_InterpAngles
                                 ((double)fVar6,dVar39,0x3f747ae140000000,dVar30,dVar37,0x30000,
                                  uVar22,(int)fVar9 + 0x38);
      *(float *)((int)fVar9 + 0x34) = (float)dVar29;
      dVar39 = (double)FastDiffRots(dVar33);
      dVar29 = 1.2217304706573486;
      if ((dVar39 <= 1.2217304706573486) && (dVar29 = dVar39, dVar39 < -1.2217304706573486)) {
        dVar29 = -1.2217304706573486;
      }
      MB_RotateQuatAxisAngle((float)dVar29,param_1,param_1);
      fVar40 = param_1[1];
      fVar7 = *param_1;
      fVar8 = param_1[2];
      dVar33 = (double)(fVar8 * fVar8 + fVar7 * fVar7 + fVar40 * fVar40);
      dVar29 = dVar37;
      dVar39 = dVar37;
      if ((double)(float)SQRT(dVar33) != dVar37) {
        dVar29 = 1.0 / SQRT(dVar33);
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar29) * dVar29 - dVar31
                                                 ) * (double)(float)(dVar28 * dVar29) + dVar29);
        dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar29) * dVar29 - dVar31
                                                 ) * (double)(float)(dVar28 * dVar29) + dVar29);
        fVar3 = (float)(-(double)(float)((double)(float)(dVar33 * dVar29) * dVar29 - dVar31) *
                        (double)(float)(dVar28 * dVar29) + dVar29);
        dVar29 = (double)(fVar7 * fVar3);
        dVar37 = (double)(fVar40 * fVar3);
        dVar39 = (double)(fVar8 * fVar3);
      }
      *param_1 = (float)dVar29;
      param_1[1] = (float)dVar37;
      param_1[2] = (float)dVar39;
    }
  }
  if (*(short *)((int)fVar9 + 0x20) != 0) {
    FastDecTimerS16((int)fVar9 + 0x20);
    dVar28 = (double)FastIntToDouble(*(undefined2 *)((int)fVar9 + 0x20));
    puVar10[0x14] = (longlong)DAT_0071d504;
    dVar39 = 0.5;
    puVar10[0x14] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar10[0x14] + 0.5))
    ;
    dVar29 = (double)FastIntToDouble(*(undefined4 *)((int)puVar10 + 0xa4));
    fVar9 = (float)(dVar28 / dVar29);
    param_1[3] = param_1[0x13];
    fVar40 = 0.0;
    fVar8 = fVar9 * (param_1[0x11] - param_1[1]) + param_1[1];
    fVar7 = fVar9 * (param_1[0x10] - *param_1) + *param_1;
    fVar9 = fVar9 * (param_1[0x12] - param_1[2]) + param_1[2];
    dVar28 = (double)(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
    fVar3 = fVar40;
    fVar2 = fVar40;
    if ((float)SQRT(dVar28) != 0.0) {
      dVar29 = 1.0 / SQRT(dVar28);
      dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar29) * dVar29 - 1.0) *
                               (double)(float)(dVar39 * dVar29) + dVar29);
      dVar29 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar29) * dVar29 - 1.0) *
                               (double)(float)(dVar39 * dVar29) + dVar29);
      fVar40 = (float)(-(double)(float)((double)(float)(dVar28 * dVar29) * dVar29 - 1.0) *
                       (double)(float)(dVar39 * dVar29) + dVar29);
      fVar2 = fVar7 * fVar40;
      fVar3 = fVar8 * fVar40;
      fVar40 = fVar9 * fVar40;
    }
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = fVar40;
  }
  fVar9 = param_1[2];
  fVar40 = param_1[1];
  fVar7 = *param_1;
  fVar11 = (float)GameCamera.camStatics.heroUp.z * fVar7 - GameCamera.camStatics.heroUp.x * fVar9;
  fVar5 = (float)GameCamera.camStatics.heroUp.y * fVar9 -
          (float)GameCamera.camStatics.heroUp.z * fVar40;
  fVar4 = GameCamera.camStatics.heroUp.x * fVar40 - (float)GameCamera.camStatics.heroUp.y * fVar7;
  fVar8 = 0.0;
  param_1[7] = 0.0;
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5 + fVar11 * fVar11;
  fVar3 = fVar8;
  fVar2 = fVar8;
  if (SQRT(fVar6) != 0.0) {
    fVar3 = 1.0 / SQRT(fVar6);
    fVar3 = -(fVar6 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar6 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar3 = -(fVar6 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
    fVar8 = fVar5 * fVar3;
    fVar2 = fVar11 * fVar3;
    fVar3 = fVar4 * fVar3;
  }
  param_1[4] = fVar8;
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  param_1[0xb] = 0.0;
  param_1[8] = fVar40 * fVar3 - fVar9 * fVar2;
  param_1[9] = fVar9 * fVar8 - fVar7 * fVar3;
  param_1[10] = fVar7 * fVar2 - fVar40 * fVar8;
  return;
}


// 0x00341f8 (0x1ec bytes)
void Cam0_HandleRunningAtCam(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  uVar7 = GameCamera.camStatics.heroSpeed2D;
  fVar2 = param_1[0x1c];
  if (*(short *)((int)fVar2 + 0x226) == 0) {
    if (GameCamera.camStatics.heroSpeed2D == 0 && *(short *)((int)fVar2 + 0x224) != 0) {
      if (-0.3 < (g_heroMobyPtr->transform).v0.z * param_1[2] +
                 (g_heroMobyPtr->transform).v0.x * *param_1 +
                 (g_heroMobyPtr->transform).v0.y * param_1[1]) goto LAB_00034280;
    }
    else {
LAB_00034280:
      if (((GameCamera.camStatics.heroSpeed2D & 0x7fffffff) < 0x38d1b718) ||
         (-0.3 < (float)GameCamera.camStatics.heroMoveVec2D.z * param_1[2] +
                 (float)GameCamera.camStatics.heroMoveVec2D.x * *param_1 +
                 (float)GameCamera.camStatics.heroMoveVec2D.y * param_1[1])) goto LAB_000343ac;
    }
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = loadVectorLeftIndexed(4,0x341e0);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x224,(ulonglong)(uint)fVar2);
    *(undefined2 *)((int)fVar2 + 0x224) = uVar4;
    fVar1 = 4.0;
    fVar5 = (float)uVar7 * 14.2857;
    if (1.0 - (float)uVar7 * 14.2857 < 0.0) {
      fVar5 = 1.0;
    }
    if (g_heroType != '\x01') {
      fVar1 = *(float *)((int)fVar2 + 0x22c);
    }
    fVar1 = (fVar1 - *(float *)((int)fVar2 + 0x188)) * fVar5 + *(float *)((int)fVar2 + 0x188);
    fVar6 = *(float *)((int)fVar2 + 0x228);
    if (*(float *)((int)fVar2 + 0x228) < fVar1) {
      *(float *)((int)fVar2 + 0x228) = fVar1;
      fVar6 = fVar1;
    }
    if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0) {
      iVar3 = *(int *)((int)GameCamera.pCurrentUpdCam + 0x70);
      *(undefined2 *)(iVar3 + 0x16c) = 1;
      *(float *)(iVar3 + 0x170) = fVar6;
      *(undefined4 *)(iVar3 + 0x178) = 0x3b449ba6;
    }
    *param_2 = (DAT_0071d4f4 - DAT_0071d4cc) * fVar5 + DAT_0071d4cc;
    *param_3 = (DAT_0071d4f8 - DAT_0071d4d0) * fVar5 + DAT_0071d4d0;
  }
  else {
LAB_000343ac:
    if (*(short *)((int)fVar2 + 0x224) != 0) {
      *(undefined2 *)((int)fVar2 + 0x224) = 0;
      *(undefined4 *)((int)fVar2 + 0x228) = *(undefined4 *)((int)fVar2 + 0x188);
    }
    *param_2 = DAT_0071d4cc;
    *param_3 = DAT_0071d4d0;
  }
  return;
}


// 0x00343f8 (0x644 bytes)
void UpdateCamPosition_0(int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *speed;
  double dVar6;
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
  double dVar22;
  float fVar23;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  
  pfVar2 = *(float **)(param_1 + 0x70);
  *pfVar2 = pfVar2[0x24] + pfVar2[0x4c];
  dVar21 = (double)SQRT(pfVar2[0x52] * pfVar2[0x52] +
                        pfVar2[0x50] * pfVar2[0x50] + pfVar2[0x51] * pfVar2[0x51]);
  pfVar2[1] = pfVar2[0x25] + pfVar2[0x4d];
  pfVar2[2] = pfVar2[0x26] + pfVar2[0x4e];
  pfVar2[3] = pfVar2[0x27];
  dVar18 = (double)(pfVar2[0x57] - pfVar2[0x80]);
  speed = (float *)Cam0_HandleRunningAtCam(param_1,&local_c0,&local_bc);
  dVar13 = 0.0;
  fVar23 = Cam_InterpValues((float)dVar21,(float)dVar18,local_c0,local_bc,0.0,speed);
  dVar21 = (double)fVar23;
  dVar22 = 1.0;
  dVar16 = (double)(pfVar2[0x4e] * (float)GameCamera.camStatics.heroUp.z +
                   pfVar2[0x4c] * GameCamera.camStatics.heroUp.x +
                   pfVar2[0x4d] * (float)GameCamera.camStatics.heroUp.y);
  dVar14 = (double)(pfVar2[0x52] * (float)GameCamera.camStatics.heroUp.z +
                   pfVar2[0x50] * GameCamera.camStatics.heroUp.x +
                   pfVar2[0x51] * (float)GameCamera.camStatics.heroUp.y);
  dVar6 = (double)(float)(dVar16 / dVar18);
  dVar10 = -1.0;
  dVar12 = 1.5707963705062866;
  dVar7 = (double)(float)(dVar14 / dVar21);
  dVar18 = dVar6;
  if (dVar6 - dVar13 < 0.0) {
    dVar18 = ABS(dVar6);
  }
  dVar11 = dVar22;
  if (dVar6 - dVar13 < 0.0) {
    dVar11 = dVar10;
  }
  dVar6 = dVar7;
  if (dVar7 - dVar13 < 0.0) {
    dVar6 = ABS(dVar7);
  }
  dVar19 = (double)(float)(1.0 - dVar18);
  if ((double)(float)(1.0 - dVar18) - dVar13 < 0.0) {
    dVar19 = dVar13;
  }
  dVar15 = (double)(float)(1.0 - dVar6);
  if ((double)(float)(1.0 - dVar6) - dVar13 < 0.0) {
    dVar15 = dVar13;
  }
  dVar17 = dVar22;
  if (dVar7 - dVar13 < 0.0) {
    dVar17 = dVar10;
  }
  dVar6 = (double)Cam_InterpAngles
                            ((double)(float)(-(double)(((float)((double)(float)(dVar6 * dVar6) *
                                                               dVar6) * DAT_007358cc +
                                                       (float)((double)(float)(dVar6 * dVar6) *
                                                               (double)DAT_007358c8 +
                                                              (double)(float)(dVar6 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar15) - 1.5707964) * dVar17),
                             (double)(float)(-(double)(((float)((double)(float)(dVar18 * dVar18) *
                                                               dVar18) * DAT_007358cc +
                                                       (float)((double)(float)(dVar18 * dVar18) *
                                                               (double)DAT_007358c8 +
                                                              (double)(float)(dVar18 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar19) - 1.5707964) * dVar11),
                             (double)DAT_0071d4dc,(double)DAT_0071d4e0,dVar13,&DAT_00720000,
                             &DAT_00720000,pfVar2 + 0x55);
  dVar7 = -(double)(float)((double)GameCamera.camStatics.heroUp.x * dVar14 - (double)pfVar2[0x50]);
  dVar11 = -(double)(float)((double)GameCamera.camStatics.heroUp.x * dVar16 - (double)pfVar2[0x4c]);
  dVar19 = -(double)(float)((double)(float)GameCamera.camStatics.heroUp.y * dVar16 -
                           (double)pfVar2[0x4d]);
  dVar16 = -(double)(float)((double)(float)GameCamera.camStatics.heroUp.z * dVar16 -
                           (double)pfVar2[0x4e]);
  local_100 = (float)dVar7;
  dVar18 = -(double)(float)((double)(float)GameCamera.camStatics.heroUp.y * dVar14 -
                           (double)pfVar2[0x51]);
  local_fc = (float)dVar18;
  dVar14 = -(double)(float)((double)(float)GameCamera.camStatics.heroUp.z * dVar14 -
                           (double)pfVar2[0x52]);
  local_f8 = (float)dVar14;
  dVar7 = (double)((float)(dVar16 * dVar14 +
                          (double)(float)(dVar11 * dVar7 + (double)(float)(dVar19 * dVar18))) /
                  (SQRT((float)(dVar16 * dVar16 +
                               (double)(float)(dVar11 * dVar11 + (double)(float)(dVar19 * dVar19))))
                  * SQRT((float)(dVar14 * dVar14 +
                                (double)(float)(dVar7 * dVar7 + (double)(float)(dVar18 * dVar18)))))
                  );
  local_f4 = pfVar2[0x53];
  dVar18 = dVar7;
  if (dVar7 - dVar13 < 0.0) {
    dVar18 = ABS(dVar7);
  }
  dVar14 = dVar22;
  if (dVar7 - dVar13 < 0.0) {
    dVar14 = dVar10;
  }
  dVar7 = (double)(float)(dVar22 - dVar18);
  if ((double)(float)(dVar22 - dVar18) - dVar13 < 0.0) {
    dVar7 = dVar13;
  }
  dVar7 = (double)Cam_InterpAngles
                            (dVar13,-(double)(float)(-(double)(float)((double)((float)((double)(
                                                  float)(dVar18 * dVar18) * dVar18) * DAT_007358cc +
                                                  (float)((double)(float)(dVar18 * dVar18) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar18 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar7) - dVar12) * dVar14 -
                                                  dVar12),(double)DAT_0071d4d4,(double)DAT_0071d4d8,
                             dVar13,&DAT_00720000,&DAT_00720000,pfVar2 + 0x54);
  local_ec = (float)GameCamera.camStatics.heroUp.z * local_100 - GameCamera.camStatics.heroUp.x * local_f8
  ;
  local_f0 = (float)GameCamera.camStatics.heroUp.y * local_f8 -
             (float)GameCamera.camStatics.heroUp.z * local_fc;
  local_e8 = GameCamera.camStatics.heroUp.x * local_fc - (float)GameCamera.camStatics.heroUp.y * local_100
  ;
  local_e4 = 0;
  dVar18 = dVar22;
  if ((double)(float)((double)local_e8 * dVar16 +
                     (double)(float)((double)local_f0 * dVar11 +
                                    (double)(float)((double)local_ec * dVar19))) - dVar13 < 0.0) {
    dVar18 = dVar10;
  }
  MB_RotateQuatAxisAngle((float)(dVar7 * dVar18),&local_e0,&local_100);
  local_e4 = 0;
  local_f0 = local_dc * (float)GameCamera.camStatics.heroUp.z -
             local_d8 * (float)GameCamera.camStatics.heroUp.y;
  local_e8 = local_e0 * (float)GameCamera.camStatics.heroUp.y - local_dc * GameCamera.camStatics.heroUp.x;
  local_ec = local_d8 * GameCamera.camStatics.heroUp.x - local_e0 * (float)GameCamera.camStatics.heroUp.z;
  MB_RotateQuatAxisAngle((float)dVar6,&local_e0,&local_e0);
  uVar5 = GameCamera.camStatics.heroUp.z;
  uVar4 = GameCamera.camStatics.heroUp.y;
  fVar3 = GameCamera.camStatics.heroUp.x;
  fVar23 = pfVar2[0x58];
  dVar16 = (double)(float)GameCamera.camStatics.heroUp.w;
  dVar14 = (double)(float)GameCamera.camStatics.heroUpActual.x;
  dVar7 = (double)(float)GameCamera.camStatics.heroUpActual.y;
  dVar6 = (double)(float)GameCamera.camStatics.heroUpActual.z;
  dVar18 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  if (dVar18 == dVar13) {
    pfVar2[0x50] = local_e0;
    pfVar2[0x51] = local_dc;
    pfVar2[0x52] = local_d8;
    pfVar2[0x52] = 0.0;
    pfVar2[0x51] = 0.0;
    pfVar2[0x50] = 0.0;
    dVar18 = dVar13;
    dVar21 = dVar13;
    dVar11 = dVar13;
  }
  else {
    fVar1 = (float)(dVar21 / dVar18);
    dVar11 = (double)(local_e0 * fVar1);
    pfVar2[0x50] = local_e0 * fVar1;
    dVar21 = (double)(local_dc * fVar1);
    pfVar2[0x51] = local_dc * fVar1;
    dVar18 = (double)(local_d8 * fVar1);
    pfVar2[0x52] = local_d8 * fVar1;
  }
  pfVar2[0x53] = local_d4;
  dVar20 = (double)(fVar3 * fVar23 + pfVar2[0x28]);
  dVar17 = (double)((float)uVar4 * fVar23 + pfVar2[0x29]);
  dVar15 = (double)((float)uVar5 * fVar23 + pfVar2[0x2a]);
  dVar19 = (double)SQRT((float)(dVar18 * dVar18 +
                               (double)(float)(dVar11 * dVar11 + (double)(float)(dVar21 * dVar21))))
  ;
  if (dVar19 != dVar13) {
    dVar8 = (double)(float)((double)(float)(dVar18 * dVar6 +
                                           (double)(float)(dVar11 * dVar14 +
                                                          (double)(float)(dVar21 * dVar7))) / dVar19
                           );
    dVar19 = dVar8;
    if (dVar8 - dVar13 < 0.0) {
      dVar19 = ABS(dVar8);
    }
    dVar9 = dVar22;
    if (dVar8 - dVar13 < 0.0) {
      dVar9 = dVar10;
    }
    dVar10 = (double)(float)(dVar22 - dVar19);
    if ((double)(float)(dVar22 - dVar19) - dVar13 < 0.0) {
      dVar10 = dVar13;
    }
    dVar10 = ABS(-(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar19 * dVar19)
                                                                   * dVar19) * DAT_007358cc +
                                                           (float)((double)(float)(dVar19 * dVar19)
                                                                   * (double)DAT_007358c8 +
                                                                  (double)(float)(dVar19 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar10) - dVar12) * dVar9 -
                                 dVar12));
    if (dVar10 < 0.2617993950843811) {
      local_c4 = 0;
      local_c8 = (float)(dVar14 * dVar21 - (double)(float)(dVar7 * dVar11));
      local_d0 = (float)(dVar7 * dVar18 - (double)(float)(dVar6 * dVar21));
      local_cc = (float)(dVar6 * dVar11 - (double)(float)(dVar14 * dVar18));
      dVar18 = (double)FastDiffRots(0x3fd0c15240000000,dVar10);
      MB_RotateQuatAxisAngle((float)dVar18,pfVar2 + 0x50,pfVar2 + 0x50);
      pfVar2[0x56] = 0.0;
      pfVar2[0x54] = 0.0;
      pfVar2[0x55] = 0.0;
      dVar11 = (double)pfVar2[0x50];
    }
  }
  *(float *)(param_1 + 0x30) = (float)(dVar20 + dVar11);
  *(float *)(param_1 + 0x34) = (float)(dVar17 + (double)pfVar2[0x51]);
  fVar23 = pfVar2[0x52];
  *(float *)(param_1 + 0x3c) = (float)dVar16;
  *(float *)(param_1 + 0x38) = (float)(dVar15 + (double)fVar23);
  return;
}


// 0x0034a3c (0x120 bytes)
void Cam0_DrawCollSpheres(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  Sphere *pSVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = 0;
  iVar12 = 0;
  do {
    iVar8 = 0;
    iVar11 = iVar12;
    do {
      if (*(int *)(CamCollGrid + iVar11) != 0) {
        piVar9 = (int *)(*(int *)(CamCollGrid + iVar11) + CamCollGrid);
        iVar10 = 0;
        iVar4 = *piVar9;
        piVar6 = piVar9;
        if (0 < iVar4) {
          do {
            if (piVar6[8] == 5) {
              pSVar5 = Spheres + piVar6[9];
              fVar1 = (pSVar5->matrix).v0.y;
              fVar2 = (pSVar5->matrix).v0.x;
              fVar3 = (pSVar5->matrix).v0.z;
              STUB_00065470((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1),
                                  &pSVar5->pos);
              iVar4 = *piVar9;
            }
            iVar10 = iVar10 + 1;
            piVar6 = piVar6 + 0xc;
          } while (iVar10 < iVar4);
        }
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 0x40);
    iVar7 = iVar7 + 1;
    iVar12 = iVar12 + 0x100;
  } while (iVar7 < 0x40);
  return;
}


// 0x0034b5c (0x74 bytes)
void UpdateFollowCamera(undefined8 param_1)

{
  float local_10;
  float local_c;
  
  Cam0_DrawCollSpheres();
  UpdateCamPull_0(param_1);
  GetAnalogInputs_0((void *)param_1,&local_10,&local_c);
  UpdateUserCam_0((double)local_10,(double)local_c,param_1);
  UpdateCamCollisions_0(param_1);
  UpdateCamPosition_0(param_1);
  STUB_00032bd0(param_1);
  UpdateCamRotation_0(param_1);
  return;
}


// 0x0034bd0 (0x50 bytes)
void WarpFollowCam(float *pos)

{
  void *pvVar1;
  
  pvVar1 = GameCamera.pCurrentUpdCam;
  GameCamera.posX = *pos;
  GameCamera.posY = pos[1];
  GameCamera.posZ = pos[2];
  GameCamera.posW = *(char (*) [4])(pos + 3);
  *(float *)((int)GameCamera.pCurrentUpdCam + 0x30) = *pos;
  *(float *)((int)pvVar1 + 0x34) = pos[1];
  *(float *)((int)pvVar1 + 0x38) = pos[2];
  *(float *)((int)pvVar1 + 0x3c) = pos[3];
  return;
}


// 0x0034c20 (0x8 bytes)
undefined8 Camera0_Activate(void)

{
  return 0;
}


// 0x0034c28 (0xb4 bytes)
void Camera0_Update(undefined8 param_1)

{
  float local_10;
  float local_c;
  
  g_CameraSpeed = (&g_BaseCameraSpeed)[g_GameSettings.CameraSpeed];
  ApplyHeroExternalMotion_0();
  ____Cam0_UpdateTargetSpecial(param_1);
  UpdateCamTarget_0(param_1);
  Cam0_DrawCollSpheres();
  UpdateCamPull_0(param_1);
  GetAnalogInputs_0((void *)param_1,&local_10,&local_c);
  UpdateUserCam_0((double)local_10,(double)local_c,param_1);
  UpdateCamCollisions_0(param_1);
  UpdateCamPosition_0(param_1);
  STUB_00032bd0(param_1);
  UpdateCamRotation_0(param_1);
  UpdateCameraOffset_0(param_1);
  return;
}


// 0x0034cdc (0x4 bytes)
void STUB_00034cdc(...)

{
  return;
}


