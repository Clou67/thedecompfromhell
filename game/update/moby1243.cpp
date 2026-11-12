// game/update/moby1243.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x222564-0x2247e4
#include "game/update/moby1243.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1077.h"
#include "game/update/moby1118.h"
#include "game/update/moby1158.h"
#include "game/update/moby1181.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"

// 0x0222564 (0x14 bytes)
void M1243_00222564(void)

{
  DAT_0076d1dc = 0x10000;
  return;
}


// 0x0222588 (0x1e8 bytes)
void M1243_00222588(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  undefined8 in_LR;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  auVar13 = loadVectorLeftIndexed(in_LR,param_2);
  auVar16 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  iVar8 = (int)param_1;
  uVar6 = *(uint *)(iVar8 + 0x78);
  uVar10 = (ulonglong)uVar6;
  pfVar9 = (float *)param_2;
  fVar1 = *pfVar9;
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xb0,uVar10);
  *(undefined4 *)(uVar6 + 0xb0 & 0xfffffffc) = uVar7;
  auVar14 = loadVectorLeftIndexed(4,param_2);
  fVar2 = pfVar9[1];
  auVar12 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = ZEXT416(0xffffffff);
  auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  uVar7 = storeVectorElementWordIndexed
                    (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xb4,uVar10);
  *(undefined4 *)(uVar6 + 0xb4 & 0xfffffffc) = uVar7;
  auVar15 = loadVectorLeftIndexed(8,param_2);
  auVar16 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xb8,uVar10);
  *(undefined4 *)(uVar6 + 0xb8 & 0xfffffffc) = uVar7;
  fVar3 = pfVar9[3];
  *(float *)(uVar6 + 0xbc) = fVar3;
  auVar16 = loadVectorLeftIndexed(0x10,param_1);
  fVar4 = *(float *)(iVar8 + 0x10);
  auVar13 = vectorSubtractFloatingPoint(auVar13,auVar16);
  auVar16 = ZEXT416(0xffffffff);
  auVar19 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = ZEXT416(0xffffffff);
  auVar22 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = ZEXT416(0xffffffff);
  auVar12 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar19,auVar19);
  auVar16 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xa0,uVar10);
  *(undefined4 *)(uVar6 + 0xa0 & 0xfffffffc) = uVar7;
  auVar16 = loadVectorLeftIndexed(0x14,param_1);
  fVar5 = *(float *)(iVar8 + 0x14);
  auVar14 = vectorSubtractFloatingPoint(auVar14,auVar16);
  auVar16 = ZEXT416(0xffffffff);
  auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar16 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xa4,uVar10);
  *(undefined4 *)(uVar6 + 0xa4 & 0xfffffffc) = uVar7;
  auVar22 = loadVectorLeftIndexed(0x18,param_1);
  *(float *)(uVar6 + 0xac) = fVar3;
  auVar16 = loadVectorLeftIndexed(in_LR,0x222578);
  auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar17,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auVar19
                      );
  auVar16 = ZEXT416(0xffffffff);
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar15 = vectorSubtractFloatingPoint(auVar15,auVar22);
  auVar22 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar16 = loadVectorLeftIndexed(8,0x222578);
  auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
  auVar12 = vectorConvertFromSignedFixedPointWord(auVar16,0);
  auVar16 = vectorReciprocalEstimateFloatingPoint(auVar12);
  fVar3 = 1.0 / (float)(longlong)(animationSpeed * 60.5);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar12,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar18);
  auVar16 = ZEXT416(0xffffffff);
  auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar18 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar12,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar20);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar12,auVar17);
  fVar2 = (fVar2 - fVar5) * fVar3;
  fVar3 = (fVar1 - fVar4) * fVar3;
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar21);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar13,auVar19,auVar23);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar14,auVar19,auVar22);
  auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar19,auVar18);
  auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar7 = storeVectorElementWordIndexed
                    (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0xa0,uVar10);
  *(undefined4 *)(uVar6 + 0xa0 & 0xfffffffc) = uVar7;
  uVar7 = storeVectorElementWordIndexed
                    (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar10);
  *(undefined4 *)(uVar6 + 0xa4 & 0xfffffffc) = uVar7;
  uVar7 = storeVectorElementWordIndexed
                    (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa8,uVar10);
  *(undefined4 *)(uVar6 + 0xa8 & 0xfffffffc) = uVar7;
  dVar11 = (double)MB_computeLobVelocity
                             ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                              (double)(g_FrameTimeSq * -10.8),param_1 + 0x10,uVar10 + 0xb0,0xa0,0xa8,
                              0);
  *(float *)(uVar6 + 0xa8) = (float)dVar11;
  *(undefined1 *)(iVar8 + 0xbc) = *(undefined1 *)(iVar8 + 0x20);
  *(undefined1 *)(iVar8 + 0x20) = 5;
  return;
}


// 0x0222788 (0x264 bytes)
undefined8 M1243_00222788(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  Vec4 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  
  iVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar8 = iVar6;
  while (iVar5 = MB_IsPntInCuboid
                           ((Vec4 *)(param_1 + 0x10),(longlong)*(int *)(iVar8 + 0x98)), iVar5 == 0)
  {
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
    if (1 < iVar7) {
      return 0;
    }
  }
  fVar1 = param_2[1] - *(float *)(param_1 + 0x14);
  fVar2 = *param_2 - *(float *)(param_1 + 0x10);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x18);
  local_60.w = param_2[3];
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  local_60.y = fVar1;
  local_60.x = fVar2;
  local_60.z = fVar3;
  if ((2.0 < fVar4) &&
     (local_60.y = 0.0, local_60.x = local_60.y, local_60.z = local_60.y, fVar4 != 0.0)) {
    fVar4 = DAT_0076d230 / fVar4;
    local_60.y = fVar1 * fVar4;
    local_60.x = fVar2 * fVar4;
    local_60.z = fVar3 * fVar4;
  }
  local_60.x = local_60.x + *(float *)(param_1 + 0x10);
  local_60.y = local_60.y + *(float *)(param_1 + 0x14);
  local_60.z = local_60.z + *(float *)(param_1 + 0x18);
  iVar6 = PointInsideComplexPoly
                    (&local_60,(Vec4 *)Splines[*(int *)(iVar6 + *(int *)(iVar6 + 0xe8) * 4)]->points
                     ,Splines[*(int *)(iVar6 + *(int *)(iVar6 + 0xe8) * 4)]->cnt);
  if (iVar6 == 0) {
    return 0;
  }
  local_60.z = local_60.z + 5.0;
  dVar9 = (double)GetGroundZNoWater(&local_60);
  if (ABS((float)(dVar9 - (double)*(float *)(param_1 + 0x18))) <= 0.5) {
    return 0;
  }
  local_50 = *(undefined4 *)(param_1 + 0x10);
  local_4c = *(undefined4 *)(param_1 + 0x14);
  local_44 = *(undefined4 *)(param_1 + 0x1c);
  local_48 = (float)((double)*(float *)(param_1 + 0x18) + 0.15000000596046448);
  local_60.z = (float)(dVar9 + 0.15000000596046448);
  iVar6 = CollLine(&local_50,&local_60,2,param_1,0);
  if (iVar6 == 0) {
    return 0;
  }
  *param_2 = local_60.x;
  param_2[2] = (float)dVar9;
  param_2[1] = local_60.y;
  param_2[3] = local_60.w;
  return 1;
}


// 0x02229f8 (0x240 bytes)
void M1243_002229f8(int param_1,Vec4 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar10;
  undefined8 uVar9;
  int iVar11;
  uint uVar12;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar11 = *(int *)(param_1 + 0x78);
  iVar10 = PointInsideComplexPoly
                     (param_2,(Vec4 *)Splines[*(int *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4)]->
                                      points,
                      Splines[*(int *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4)]->cnt);
  if (iVar10 == 0) {
    MB_SplineIntersect
              (*(undefined4 *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4),param_1 + 0x10,param_2,
               &local_50);
    fVar2 = local_4c - *(float *)(param_1 + 0x14);
    fVar4 = local_50 - *(float *)(param_1 + 0x10);
    fVar6 = local_48 - *(float *)(param_1 + 0x18);
    fVar1 = 0.0;
    fVar8 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
    fVar7 = -0.2 / fVar8;
    fVar5 = fVar1;
    if (0.0 - fVar8 < 0.0) {
      fVar5 = fVar7 * fVar6;
    }
    fVar3 = fVar1;
    if (0.0 - fVar8 < 0.0) {
      fVar3 = fVar7 * fVar2;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar1 = fVar7 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar5 = fVar7 * fVar6;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar3 = fVar7 * fVar2;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar1 = fVar7 * fVar4;
    }
    local_48 = local_48 + fVar5;
    local_4c = local_4c + fVar3;
    local_50 = local_50 + fVar1;
  }
  else {
    local_50 = param_2->x;
    local_4c = param_2->y;
    local_48 = param_2->z;
    local_44 = param_2->w;
  }
  uVar9 = 1;
  local_40 = *(undefined4 *)(iVar11 + *(int *)(iVar11 + 0xe8) * 4);
  iVar10 = *(int *)(iVar11 + 0xe8);
  if (iVar10 < 3) {
    if (1 < iVar10) {
      local_3c = *(undefined4 *)(iVar11 + 0x20);
      uVar9 = 4;
      local_38 = *(undefined4 *)(iVar11 + 0x24);
      local_34 = *(undefined4 *)(iVar11 + 0x28);
    }
  }
  else if (iVar10 < 4) {
    local_3c = *(undefined4 *)(iVar11 + 0x20);
    uVar9 = 3;
    local_38 = *(undefined4 *)(iVar11 + 0x24);
  }
  uVar12 = iVar11 + *(int *)(iVar11 + 0xe8) * 4;
  iVar11 = MB_SplineFindRouteNode
                     (DAT_0076d228,&local_40,uVar9,(longlong)*(int *)(uVar12 + 0x10),
                      (ulonglong)uVar12,param_1 + 0x10,&local_50,param_3);
  if (iVar11 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    param_3[1] = *(undefined4 *)(param_1 + 0x14);
    param_3[2] = *(undefined4 *)(param_1 + 0x18);
    param_3[3] = *(undefined4 *)(param_1 + 0x1c);
  }
  return;
}


// 0x0222c50 (0x238 bytes)
void M1243_00222c50(int param_1,float *param_2,Vec4 *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  iVar2 = *(int *)(param_1 + 0x78);
  M1243_002229f8(param_1,param_2,&local_40);
  param_3->x = local_40 - *(float *)(param_1 + 0x10);
  param_3->y = local_3c - *(float *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x18);
  param_3->w = local_34;
  param_3->z = local_38 - fVar1;
  ClampVec3Magnitude((double)*(float *)(iVar2 + 0xe4),param_3);
  param_3->z = -g_FrameTime;
  MB_MoveAndCollide(0x3fe0000000000000,0x3fd3333340000000,0,param_1,param_3);
  fVar1 = *(float *)(param_1 + 0x14) - param_2[1];
  fVar4 = *(float *)(param_1 + 0x10) - *param_2;
  fVar5 = *(float *)(param_1 + 0x18) - param_2[2];
  if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) <= 10.0) {
    Delt(DAT_0076d200 * g_FrameTime,g_FrameTimeSq * 4.0,(float *)(iVar2 + 0xe4));
  }
  else {
    Delt(DAT_0076d204 * g_FrameTime,g_FrameTimeSq * 4.0,(float *)(iVar2 + 0xe4));
  }
  param_1 = param_1 + 0x10;
  lVar6 = ((ulonglong)*(uint *)(iVar2 + 0xe8) & 0x3fffffff) << 2;
  MB_PushOutOfSplineWalls
            ((double)DAT_0076d22c,*(undefined4 *)(iVar2 + (int)lVar6),lVar6,param_1,param_1);
  iVar3 = *(int *)(iVar2 + 0xe8);
  if (iVar3 < 3) {
    if (1 < iVar3) {
      MB_PushOutOfSplineWalls
                ((double)DAT_0076d22c,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x28),
                 param_1,param_1);
    }
  }
  else if (iVar3 < 4) {
    MB_PushOutOfSplineWalls((double)DAT_0076d22c,*(undefined4 *)(iVar2 + 0x20));
    MB_PushOutOfSplineWalls((double)DAT_0076d22c,*(undefined4 *)(iVar2 + 0x24));
  }
  return;
}


// 0x0222e88 (0x110 bytes)
ulonglong M1243_00222e88
                    (double param_1,int param_2,float *param_3,undefined8 param_4,int param_5)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar10;
  ushort *puVar9;
  
  iVar6 = *(int *)(param_2 + 0x78) + param_5 * 0x10;
  iVar7 = 0;
  uVar8 = 0;
  do {
    sVar10 = (short)*(undefined4 *)(iVar6 + 0x30);
    if (g_NumMobyGroups < sVar10 || sVar10 < 0) break;
    puVar9 = *(ushort **)((int)&g_MobyGroups + (int)((longlong)sVar10 << 2));
    do {
      uVar5 = *puVar9 & 0x7fff;
      if ((g_MobyInstance[uVar5].state < 0x80) &&
         (fVar2 = param_3[1] - g_MobyInstance[uVar5].pos.y,
         fVar3 = *param_3 - g_MobyInstance[uVar5].pos.x,
         fVar4 = param_3[2] - g_MobyInstance[uVar5].pos.z, uVar8 = 1,
         (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < param_1)) {
        return 2;
      }
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (-1 < (short)uVar1);
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar7 < 4);
  return (ulonglong)(LZCOUNT(uVar8) << 0x20) >> 0x25 ^ 1;
}


// 0x0222fe0 (0x1804 bytes)
// inlined: FastRSqrt @0x2235e4
/* Moby 1243 */

void UpdateMoby_1243(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  f32 fVar9;
  Spline *pSVar10;
  uint uVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  u8 uVar26;
  Cuboid *pCVar25;
  longlong lVar27;
  undefined8 in_r7;
  int iVar28;
  MobyInstance *pMVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  float fVar49;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  Vec4 local_60;
  
  lVar20 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar30 = ZEXT48(pvVar8);
  iVar23 = DAT_00f0d2e4;
  if (DAT_00f0d2e4 != 0) {
    uVar21 = (ulonglong)*(uint *)((int)pvVar8 + 0xe8);
    iVar23 = 0;
    iVar22 = 0;
    if (0 < Splines[*(int *)((int)pvVar8 + *(uint *)((int)pvVar8 + 0xe8) * 4)]->cnt) {
      iVar28 = 0;
      dVar36 = 1.0;
      dVar35 = 0.3330000042915344;
      do {
        pSVar10 = Splines[*(int *)((int)pvVar8 + (int)(uVar21 << 2))];
        local_e0 = *(undefined4 *)((int)&pSVar10->points[0].x + iVar28);
        local_dc = *(undefined4 *)((int)&pSVar10->points[0].y + iVar28);
        local_d8 = (float)((double)*(float *)((int)&pSVar10->points[0].z + iVar28) + dVar36);
        local_d4 = *(undefined4 *)((int)&pSVar10->points[0].w + iVar28);
        SpawnPart_41((float)dVar35,&local_e0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
        uVar21 = (ulonglong)*(uint *)((int)pvVar8 + 0xe8);
        iVar23 = iVar23 + 1;
        iVar28 = iVar28 + 0x10;
      } while (iVar23 < Splines[*(int *)((int)pvVar8 + *(uint *)((int)pvVar8 + 0xe8) * 4)]->cnt);
    }
    iVar28 = 0;
    iVar23 = Splines[*(int *)((int)pvVar8 + (int)(uVar21 << 2) + 0x10)]->cnt;
    if (0 < iVar23) {
      dVar36 = 1.0;
      dVar35 = 0.3330000042915344;
      do {
        pSVar10 = Splines[*(int *)((int)pvVar8 + (int)(uVar21 << 2) + 0x10)];
        local_d0 = *(undefined4 *)((int)&pSVar10->points[0].x + iVar22);
        local_cc = *(undefined4 *)((int)&pSVar10->points[0].y + iVar22);
        local_c8 = (float)((double)*(float *)((int)&pSVar10->points[0].z + iVar22) + dVar36);
        local_c4 = *(undefined4 *)((int)&pSVar10->points[0].w + iVar22);
        SpawnPart_41((float)dVar35,&local_d0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
        uVar21 = (ulonglong)*(uint *)((int)pvVar8 + 0xe8);
        iVar28 = iVar28 + 1;
        iVar22 = iVar22 + 0x10;
        iVar23 = Splines[*(int *)((int)pvVar8 + *(uint *)((int)pvVar8 + 0xe8) * 4 + 0x10)]->cnt;
      } while (iVar28 < iVar23);
    }
  }
  iVar22 = FastDecTimerS16(uVar30 + 0xec);
  if (iVar22 == 0) {
    lVar27 = lVar20;
    RegisterFuncForMoby(&PTR_M1246_0022485c_00709818,moby);
    iVar23 = (int)lVar27;
  }
  iVar22 = FastDecTimerS16(uVar30 + 0xee);
  if (iVar22 == 0) {
    lVar27 = lVar20;
    RegisterFuncForMoby(&PTR_M1246_00224a00_00709820,moby);
    iVar23 = (int)lVar27;
  }
  pCVar25 = Cuboids;
  fVar2 = DAT_0076d200;
  fVar49 = g_FrameTime;
  bVar1 = moby->state;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      dVar35 = (double)FUN_005e8338((double)(*(float *)((int)pvVar8 + 0xb0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar8 + 0xb4) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar35,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,iVar23,
                 (float *)((int)pvVar8 + 0xe0));
      SpawnPart_41(0.333,(int)pvVar8 + 0xb0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0xa0);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0xa4);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0xa8);
      fVar49 = -(g_FrameTimeSq * 10.8 - *(float *)((int)pvVar8 + 0xa8));
      *(float *)((int)pvVar8 + 0xa8) = fVar49;
      if (0.0 <= fVar49) {
        return;
      }
      fVar9 = (moby->pos).z;
      uVar11 = (int)fVar9 >> 0x1f;
      uVar12 = (int)*(uint *)((int)pvVar8 + 0xb8) >> 0x1f;
      if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar8 + 0xb8)) - uVar12) <=
          (int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11)) {
        return;
      }
      (moby->pos).x = *(f32 *)((int)pvVar8 + 0xb0);
      (moby->pos).y = *(f32 *)((int)pvVar8 + 0xb4);
      uVar26 = moby->setByGroup;
      (moby->pos).z = *(f32 *)((int)pvVar8 + 0xb8);
      fVar9 = *(f32 *)((int)pvVar8 + 0xbc);
      moby->state = uVar26;
      (moby->pos).w = fVar9;
      return;
    }
    if (bVar1 == 4) {
      dVar35 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar49 = OrganicDeltAng
                         ((float)dVar35,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar8 + 0xe0));
      M1243_00222c50((double)fVar49,lVar20,&g_heroPosition,&local_a0);
      iVar23 = M1243_00222e88(0x4024000000000000,lVar20,lVar20 + 0x10);
      dVar36 = 0.0;
      local_84 = local_94;
      fVar49 = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
      fVar2 = 4.0 / fVar49;
      dVar35 = dVar36;
      if (0.0 - fVar49 < 0.0) {
        dVar35 = (double)(local_98 * fVar2);
      }
      dVar34 = dVar36;
      if (0.0 - fVar49 < 0.0) {
        dVar34 = (double)(local_9c * fVar2);
      }
      dVar31 = dVar36;
      if (0.0 - fVar49 < 0.0) {
        dVar31 = (double)(local_a0 * fVar2);
      }
      if (fVar49 - 0.0 < 0.0) {
        dVar35 = (double)(local_98 * fVar2);
      }
      if (fVar49 - 0.0 < 0.0) {
        dVar34 = (double)(local_9c * fVar2);
      }
      if (fVar49 - 0.0 < 0.0) {
        dVar31 = (double)(local_a0 * fVar2);
      }
      local_88 = (float)(dVar35 + (double)(moby->pos).z);
      local_8c = (float)(dVar34 + (double)(moby->pos).y);
      local_90 = (float)(dVar31 + (double)(moby->pos).x);
      iVar22 = M1243_00222788(lVar20,&local_90);
      if ((iVar23 == 0) && (*(int *)((int)pvVar8 + 0xe8) < 2)) {
        moby->state = '\x06';
        return;
      }
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar49 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar49 * fVar49 + fVar2 * fVar2) < DAT_0076d20c) ||
         ((double)SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) == dVar36))
      {
        moby->state = '\x03';
        return;
      }
      if (iVar23 == 2) {
        moby->state = '\x03';
        return;
      }
      if (iVar22 == 0) {
        return;
      }
      M1243_00222588(lVar20,&local_90);
      return;
    }
    if (bVar1 == 3) {
      dVar35 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      fVar49 = OrganicDeltAng
                         ((float)dVar35,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar8 + 0xe0));
      M1243_002229f8((double)fVar49,lVar20,&g_heroPosition,&local_c0);
      fVar49 = (moby->pos).y;
      local_ac = local_bc - fVar49;
      fVar2 = (moby->pos).x;
      local_b0 = local_c0 - fVar2;
      fVar3 = (moby->pos).z;
      local_a8 = local_b8 - fVar3;
      local_a4 = local_b4;
      fVar4 = 0.0;
      fVar5 = local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac;
      if (SQRT(fVar5) == 0.0) {
        iVar23 = M1243_00222e88
                           (0x4024000000000000,lVar20,lVar20 + 0x10,&DAT_00222f98,
                            *(undefined4 *)((int)pvVar8 + 0xe8));
      }
      else {
        fVar6 = fVar4;
        fVar7 = fVar4;
        if (SQRT(fVar5) != 0.0) {
          fVar7 = 1.0 / SQRT(fVar5);
          fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar7 = -(fVar5 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
          fVar6 = local_b0 * fVar7;
          fVar4 = local_ac * fVar7;
          fVar7 = local_a8 * fVar7;
        }
        local_b0 = fVar6 + fVar2;
        local_ac = fVar4 + fVar49;
        local_a8 = fVar7 + fVar3;
        iVar23 = M1243_00222e88
                           (0x4024000000000000,lVar20,&local_b0,&DAT_00222f98,
                            *(undefined4 *)((int)pvVar8 + 0xe8));
      }
      if (iVar23 == 0) {
        moby->state = '\x06';
        return;
      }
      if (iVar23 == 2) {
        moby->state = '\x03';
        return;
      }
      fVar49 = (moby->pos).y - g_heroPosition.y;
      fVar2 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar2 * fVar2 + fVar49 * fVar49) <= DAT_0076d208) {
        return;
      }
      moby->state = '\x04';
      return;
    }
    if (bVar1 == 2) {
      fVar49 = (moby->pos).y - g_heroPosition.y;
      fVar2 = (moby->pos).x - g_heroPosition.x;
      if (64.0 <= SQRT(fVar2 * fVar2 + fVar49 * fVar49)) {
        return;
      }
      moby->state = '\x03';
      return;
    }
    if (bVar1 == 1) {
      fVar49 = (moby->pos).y - g_heroPosition.y;
      fVar2 = (moby->pos).x - g_heroPosition.x;
      if (6.0 <= SQRT(fVar2 * fVar2 + fVar49 * fVar49)) {
        return;
      }
      FUN_004d407c(lVar20,1);
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      moby->state = '\x03';
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = loadVectorLeftIndexed(0xc,0x222f98);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar38);
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
      auVar37 = vectorSplatHalfWord(auVar37,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar37,0xec,uVar30);
      *(undefined2 *)((int)pvVar8 + 0xec) = uVar13;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (g_MiscLevelFlags.field84_0x54 == 1) {
      FUN_001eede4(g_MobyInstance + *(int *)((int)pvVar8 + 0xd4));
      DeleteMoby(moby);
      return;
    }
    if (g_LevelFlags[Level][*(int *)((int)pvVar8 + 0xd8)] == -1) {
      iVar23 = *(int *)((int)pvVar8 + 0x74);
      *(undefined4 *)((int)pvVar8 + 0xe8) = 1;
      (moby->pos).x = pCVar25[iVar23].pos.x;
      (moby->pos).y = pCVar25[iVar23].pos.y;
      (moby->pos).z = pCVar25[iVar23].pos.z;
      (moby->pos).w = pCVar25[iVar23].pos.w;
      *(float *)((int)pvVar8 + 0xe4) = DAT_0076d200 * g_FrameTime;
      moby->state = '\x03';
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0xe8) = 0;
      *(float *)((int)pvVar8 + 0xe4) = fVar2 * fVar49;
      moby->state = '\x01';
    }
    MB_SplineMarkCrossings(uVar30,1,*(undefined4 *)((int)pvVar8 + 0x10));
    MB_SplineMarkCrossings(uVar30 + 4,1,*(undefined4 *)((int)pvVar8 + 0x14));
    MB_SplineMarkCrossings(uVar30 + 8,1,*(undefined4 *)((int)pvVar8 + 0x18));
    return;
  }
  if (bVar1 == 0xb) {
LAB_00223efc:
    dVar35 = (double)FUN_005e8338((double)(*(float *)((int)pvVar8 + 0xb0) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar8 + 0xb4) - (moby->pos).y));
    OrganicDeltAng
              ((float)dVar35,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
               g_FrameTime * 6.2831855,&(moby->rotation).z,iVar23,
               (float *)((int)pvVar8 + 0xe0));
    SpawnPart_41(0.333,(int)pvVar8 + 0xb0,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar8 + 0xa0);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0xa4);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0xa8);
    fVar2 = -(g_FrameTimeSq * 10.8 - *(float *)((int)pvVar8 + 0xa8));
    *(float *)((int)pvVar8 + 0xa8) = fVar2;
    pMVar29 = g_MobyInstance;
    fVar49 = 0.0;
    if ((fVar2 < 0.0) &&
       (fVar9 = (moby->pos).z, uVar11 = (int)fVar9 >> 0x1f,
       uVar12 = (int)*(uint *)((int)pvVar8 + 0xb8) >> 0x1f,
       (int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11) <
       (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar8 + 0xb8)) - uVar12))) {
      if (moby->state == '\a') {
        iVar23 = *(int *)((int)pvVar8 +
                         (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar8 + 0xe8)) << 0x20) >>
                                0x25 ^ 1) << 2) + 0x90);
        moby->state = '\b';
        (moby->pos).x = *(f32 *)((int)pvVar8 + 0xb0);
        (moby->pos).y = *(f32 *)((int)pvVar8 + 0xb4);
        (moby->pos).z = *(f32 *)((int)pvVar8 + 0xb8);
        (moby->pos).w = *(f32 *)((int)pvVar8 + 0xbc);
        fVar2 = pMVar29[iVar23].pos.x;
        *(float *)((int)pvVar8 + 0xb0) = fVar2;
        fVar3 = pMVar29[iVar23].pos.y;
        *(float *)((int)pvVar8 + 0xb4) = fVar3;
        fVar4 = pMVar29[iVar23].pos.z;
        *(float *)((int)pvVar8 + 0xb8) = fVar4;
        *(f32 *)((int)pvVar8 + 0xbc) = pMVar29[iVar23].pos.w;
        fVar5 = pMVar29[iVar23].transform.v0.y;
        fVar6 = pMVar29[iVar23].transform.v0.x;
        fVar7 = pMVar29[iVar23].transform.v0.z;
        fVar19 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar16 = DAT_0076d21c / fVar19;
        fVar15 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        fVar17 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        fVar18 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        fVar4 = fVar4 + fVar15;
        fVar3 = fVar3 + fVar17;
        fVar2 = fVar2 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar4;
        *(float *)((int)pvVar8 + 0xb4) = fVar3;
        *(float *)((int)pvVar8 + 0xb0) = fVar2;
        fVar5 = pMVar29[iVar23].transform.v1.y;
        fVar6 = pMVar29[iVar23].transform.v1.x;
        fVar7 = pMVar29[iVar23].transform.v1.z;
        fVar19 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar16 = DAT_00f0d2dc / fVar19;
        fVar15 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        fVar17 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        fVar18 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar6 * fVar16;
        }
        fVar4 = fVar4 + fVar15;
        fVar3 = fVar3 + fVar17;
        fVar2 = fVar2 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar4;
        *(float *)((int)pvVar8 + 0xb4) = fVar3;
        *(float *)((int)pvVar8 + 0xb0) = fVar2;
        fVar5 = pMVar29[iVar23].transform.v2.y;
        fVar6 = pMVar29[iVar23].transform.v2.x;
        fVar7 = pMVar29[iVar23].transform.v2.z;
        fVar19 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        fVar16 = DAT_0076d218 / fVar19;
        fVar15 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        fVar17 = fVar49;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (0.0 - fVar19 < 0.0) {
          fVar49 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar7 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar49 = fVar6 * fVar16;
        }
        *(float *)((int)pvVar8 + 0xb8) = fVar4 + fVar15;
        *(float *)((int)pvVar8 + 0xb4) = fVar3 + fVar17;
        *(float *)((int)pvVar8 + 0xb0) = fVar2 + fVar49;
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else {
    if (bVar1 != 10) {
      if (bVar1 == 9) {
        pMVar29 = g_MobyInstance +
                  *(int *)((int)pvVar8 +
                          (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar8 + 0xe8)) << 0x20)
                                 >> 0x25 ^ 1) << 2) + 0x90);
        MB_PlatformGetDelta
                  (lVar20,pMVar29,uVar30 + 0xb0,uVar30 + 0xc0,lVar20 + 0x10,lVar20 + 0x40);
        iVar23 = FUN_001b6870(pMVar29);
        if (iVar23 == 0) {
          return;
        }
        moby->state = '\n';
        *(int *)((int)pvVar8 + 0xe8) = *(int *)((int)pvVar8 + 0xe8) + 1;
        fVar49 = (pMVar29->pos).x;
        *(float *)((int)pvVar8 + 0xb0) = fVar49;
        fVar2 = (pMVar29->pos).y;
        *(float *)((int)pvVar8 + 0xb4) = fVar2;
        fVar3 = (pMVar29->pos).z;
        *(float *)((int)pvVar8 + 0xb8) = fVar3;
        *(f32 *)((int)pvVar8 + 0xbc) = (pMVar29->pos).w;
        fVar4 = (pMVar29->transform).v0.y;
        fVar5 = (pMVar29->transform).v0.x;
        fVar6 = (pMVar29->transform).v0.z;
        fVar7 = 0.0;
        fVar19 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar16 = DAT_0076d224 / fVar19;
        fVar15 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        fVar17 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        fVar18 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        fVar3 = fVar3 + fVar15;
        fVar2 = fVar2 + fVar17;
        fVar49 = fVar49 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar3;
        *(float *)((int)pvVar8 + 0xb4) = fVar2;
        *(float *)((int)pvVar8 + 0xb0) = fVar49;
        fVar4 = (pMVar29->transform).v1.y;
        fVar5 = (pMVar29->transform).v1.x;
        fVar6 = (pMVar29->transform).v1.z;
        fVar19 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar16 = DAT_00f0d2e0 / fVar19;
        fVar15 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        fVar17 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        fVar18 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar18 = fVar5 * fVar16;
        }
        fVar3 = fVar3 + fVar15;
        fVar2 = fVar2 + fVar17;
        fVar49 = fVar49 + fVar18;
        *(float *)((int)pvVar8 + 0xb8) = fVar3;
        *(float *)((int)pvVar8 + 0xb4) = fVar2;
        *(float *)((int)pvVar8 + 0xb0) = fVar49;
        fVar4 = (pMVar29->transform).v2.y;
        fVar5 = (pMVar29->transform).v2.x;
        fVar6 = (pMVar29->transform).v2.z;
        fVar19 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar16 = DAT_0076d220 / fVar19;
        fVar15 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        fVar17 = fVar7;
        if (0.0 - fVar19 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (0.0 - fVar19 < 0.0) {
          fVar7 = fVar5 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar15 = fVar6 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar17 = fVar4 * fVar16;
        }
        if (fVar19 - 0.0 < 0.0) {
          fVar7 = fVar5 * fVar16;
        }
        *(float *)((int)pvVar8 + 0xb8) = fVar3 + fVar15;
        *(float *)((int)pvVar8 + 0xb4) = fVar2 + fVar17;
        *(float *)((int)pvVar8 + 0xb0) = fVar49 + fVar7;
        return;
      }
      if (bVar1 != 8) {
        if (bVar1 != 7) {
          if (bVar1 != 6) {
            return;
          }
          iVar23 = *(int *)((int)pvVar8 + 0xe8);
          M1243_00222c50
                    (lVar20,&Cuboids[*(int *)((int)pvVar8 + iVar23 * 4 + 0x80)].pos,&local_80);
          dVar36 = 0.0;
          local_64 = local_74;
          fVar49 = SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
          fVar2 = 4.0 / fVar49;
          dVar35 = dVar36;
          if (0.0 - fVar49 < 0.0) {
            dVar35 = (double)(local_78 * fVar2);
          }
          dVar34 = dVar36;
          if (0.0 - fVar49 < 0.0) {
            dVar34 = (double)(local_7c * fVar2);
          }
          dVar31 = dVar36;
          if (0.0 - fVar49 < 0.0) {
            dVar31 = (double)(local_80 * fVar2);
          }
          if (fVar49 - 0.0 < 0.0) {
            dVar35 = (double)(local_78 * fVar2);
          }
          if (fVar49 - 0.0 < 0.0) {
            dVar34 = (double)(local_7c * fVar2);
          }
          if (fVar49 - 0.0 < 0.0) {
            dVar31 = (double)(local_80 * fVar2);
          }
          local_68 = (float)(dVar35 + (double)(moby->pos).z);
          local_6c = (float)(dVar34 + (double)(moby->pos).y);
          local_70 = (float)(dVar31 + (double)(moby->pos).x);
          iVar24 = M1243_00222788(lVar20,&local_70);
          pMVar29 = g_MobyInstance;
          iVar22 = *(int *)((int)pvVar8 + 0xe8);
          iVar28 = *(int *)((int)pvVar8 + iVar22 * 4 + 0x80);
          fVar49 = (moby->pos).y - Cuboids[iVar28].pos.y;
          fVar2 = (moby->pos).x - Cuboids[iVar28].pos.x;
          if (0.25 <= SQRT(fVar2 * fVar2 + fVar49 * fVar49)) {
            if (iVar24 == 0) {
              return;
            }
            M1243_00222588(lVar20,&local_70);
            return;
          }
          if (iVar22 < 2) {
            iVar23 = *(int *)((int)pvVar8 +
                             (int)(((ulonglong)(LZCOUNT(iVar23) << 0x20) >> 0x25 ^ 1) << 2) + 0x90);
            fVar2 = g_MobyInstance[iVar23].pos.x;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar3 = pMVar29[iVar23].pos.y;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            fVar4 = pMVar29[iVar23].pos.z;
            *(float *)((int)pvVar8 + 0xb8) = fVar4;
            fVar9 = pMVar29[iVar23].pos.w;
            *(f32 *)((int)pvVar8 + 0xbc) = fVar9;
            fVar5 = pMVar29[iVar23].transform.v0.y;
            fVar6 = pMVar29[iVar23].transform.v0.x;
            fVar7 = pMVar29[iVar23].transform.v0.z;
            dVar34 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar49 = (float)((double)DAT_00f0d2d8 / dVar34);
            dVar35 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar35 = (double)(fVar7 * fVar49);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar31 = (double)(fVar5 * fVar49);
            }
            dVar33 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar33 = (double)(fVar6 * fVar49);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar35 = (double)(fVar7 * fVar49);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar31 = (double)(fVar5 * fVar49);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar33 = (double)(fVar6 * fVar49);
            }
            fVar49 = (float)((double)fVar4 + dVar35);
            fVar3 = (float)((double)fVar3 + dVar31);
            fVar2 = (float)((double)fVar2 + dVar33);
            *(float *)((int)pvVar8 + 0xb8) = fVar49;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar5 = pMVar29[iVar23].transform.v1.y;
            fVar6 = pMVar29[iVar23].transform.v1.x;
            fVar7 = pMVar29[iVar23].transform.v1.z;
            dVar34 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar4 = (float)((double)DAT_0076d214 / dVar34);
            dVar35 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            dVar33 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            fVar49 = (float)((double)fVar49 + dVar35);
            fVar3 = (float)((double)fVar3 + dVar31);
            fVar2 = (float)((double)fVar2 + dVar33);
            *(float *)((int)pvVar8 + 0xb8) = fVar49;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar5 = pMVar29[iVar23].transform.v2.y;
            fVar6 = pMVar29[iVar23].transform.v2.x;
            fVar7 = pMVar29[iVar23].transform.v2.z;
            dVar34 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
            fVar4 = (float)((double)DAT_0076d210 / dVar34);
            dVar35 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            dVar31 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            dVar33 = dVar36;
            if (dVar36 - dVar34 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar35 = (double)(fVar7 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar31 = (double)(fVar5 * fVar4);
            }
            if (dVar34 - dVar36 < 0.0) {
              dVar33 = (double)(fVar6 * fVar4);
            }
            fVar49 = (float)((double)fVar49 + dVar35);
            fVar3 = (float)((double)fVar3 + dVar31);
            fVar2 = (float)((double)fVar2 + dVar33);
            *(float *)((int)pvVar8 + 0xb8) = fVar49;
            *(float *)((int)pvVar8 + 0xb4) = fVar3;
            *(float *)((int)pvVar8 + 0xb0) = fVar2;
            fVar15 = g_FrameTimeSq * 10.8;
            fVar4 = (moby->pos).z;
            fVar16 = g_FrameTime * 8.0;
            fVar6 = (moby->pos).y - fVar3;
            fVar5 = (moby->pos).x;
            fVar7 = fVar5 - fVar2;
            fVar2 = fVar2 - fVar5;
            *(float *)((int)pvVar8 + 0xa0) = fVar2;
            fVar3 = fVar3 - (moby->pos).y;
            *(float *)((int)pvVar8 + 0xa8) = fVar16;
            *(f32 *)((int)pvVar8 + 0xac) = fVar9;
            dVar33 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
            fVar49 = (float)((double)(SQRT(fVar7 * fVar7 + fVar6 * fVar6) /
                                     ((fVar16 * 2.0 + SQRT(fVar15 * 2.0 * (fVar49 - fVar4))) /
                                     fVar15)) / dVar33);
            dVar34 = (double)(fVar2 * fVar49);
            dVar31 = (double)(fVar3 * fVar49);
            dVar35 = dVar36;
            if (dVar36 - dVar33 < 0.0) {
              dVar35 = dVar34;
            }
            dVar32 = dVar36;
            if (dVar36 - dVar33 < 0.0) {
              dVar32 = dVar31;
            }
            if (dVar33 - dVar36 < 0.0) {
              dVar35 = dVar34;
            }
            if (dVar33 - dVar36 < 0.0) {
              dVar32 = dVar31;
            }
            *(float *)((int)pvVar8 + 0xa0) = (float)dVar35;
            *(float *)((int)pvVar8 + 0xa4) = (float)dVar32;
            moby->state = '\a';
            return;
          }
          if ((iVar22 == 2) &&
             (iVar23 = FUN_001e348c(g_MobyInstance + *(int *)((int)pvVar8 + 0xd0)), iVar23 != 0)) {
            *(int *)((int)pvVar8 + 0xe8) = *(int *)((int)pvVar8 + 0xe8) + 1;
            moby->state = '\x03';
            return;
          }
          if (*(int *)((int)pvVar8 + 0xe8) != 3) {
            return;
          }
          FUN_004d407c(lVar20,2);
          SetLevelFlag(*(undefined4 *)((int)pvVar8 + 0xdc));
          FUN_001eede4(g_MobyInstance + *(int *)((int)pvVar8 + 0xd4));
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          moby->state = '\f';
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = loadVectorLeftIndexed(0xc,0x222f98);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = vectorSplatHalfWord(auVar37,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar37,0xee,uVar30);
          *(undefined2 *)((int)pvVar8 + 0xee) = uVar13;
          g_MiscLevelFlags.field84_0x54 = 1;
          return;
        }
        goto LAB_00223efc;
      }
    }
    local_60.x = *(float *)((int)pvVar8 + 0xb0) - (moby->pos).x;
    local_60.y = *(float *)((int)pvVar8 + 0xb4) - (moby->pos).y;
    pMVar29 = g_MobyInstance +
              *(int *)((int)pvVar8 +
                      (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar8 + 0xe8)) << 0x20) >>
                             0x25 ^ 1) << 2) + 0x90);
    local_60.z = *(float *)((int)pvVar8 + 0xb8) - (moby->pos).z;
    local_60.w = *(float *)((int)pvVar8 + 0xbc);
    ClampVec3Magnitude((double)(DAT_0076d200 * g_FrameTime),&local_60);
    local_60.z = local_60.z - g_FrameTime;
    MB_MoveAndCollide(0x3fe0000000000000,0x3fd3333340000000,0,lVar20,&local_60);
    uVar26 = moby->state;
    if ((uVar26 == '\b') &&
       (fVar49 = (moby->pos).y - *(float *)((int)pvVar8 + 0xb4),
       fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0xb0),
       SQRT(fVar2 * fVar2 + fVar49 * fVar49) < 0.25)) {
      iVar23 = FUN_001b67d0(pMVar29);
      uVar26 = moby->state;
      if (iVar23 != 0) {
        MB_PlatformWorldToLocal
                  (lVar20,pMVar29,lVar20 + 0x10,lVar20 + 0x40,uVar30 + 0xb0,uVar30 + 0xc0);
        moby->state = '\t';
        return;
      }
    }
    if ((uVar26 == '\n') &&
       (fVar49 = (moby->pos).y - *(float *)((int)pvVar8 + 0xb4),
       fVar2 = (moby->pos).x - *(float *)((int)pvVar8 + 0xb0),
       SQRT(fVar2 * fVar2 + fVar49 * fVar49) < 0.25)) {
      pCVar25 = Cuboids + *(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0xe8) * 4 + 0x70);
      uVar21 = ZEXT48(pCVar25);
      auVar40 = loadVectorLeftIndexed(0x30,uVar21);
      fVar49 = (pCVar25->pos).x;
      auVar37 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xb0,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xb0U & 0xfffffffc) = uVar14;
      auVar39 = loadVectorLeftIndexed(0x34,uVar21);
      fVar2 = (pCVar25->pos).y;
      auVar37 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xb4,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xb4U & 0xfffffffc) = uVar14;
      auVar41 = loadVectorLeftIndexed(0x38,uVar21);
      auVar38 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = ZEXT416(0xffffffff);
      auVar44 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      uVar14 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xb8,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xb8U & 0xfffffffc) = uVar14;
      fVar3 = (pCVar25->pos).w;
      *(float *)((int)pvVar8 + 0xbc) = fVar3;
      auVar37 = loadVectorLeftIndexed(0x10,lVar20);
      fVar4 = (moby->pos).x;
      auVar40 = vectorSubtractFloatingPoint(auVar40,auVar37);
      auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar37 = ZEXT416(0xffffffff);
      auVar38 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar46 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa0,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa0U & 0xfffffffc) = uVar14;
      auVar37 = loadVectorLeftIndexed(0x14,lVar20);
      fVar5 = (moby->pos).y;
      auVar39 = vectorSubtractFloatingPoint(auVar39,auVar37);
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = ZEXT416(0xffffffff);
      auVar47 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = ZEXT416(0xffffffff);
      auVar38 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa4,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar14;
      auVar47 = loadVectorLeftIndexed(0x18,lVar20);
      *(float *)((int)pvVar8 + 0xac) = fVar3;
      auVar37 = loadVectorLeftIndexed(0x3c,0x222f98);
      auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar44);
      auVar37 = ZEXT416(0xffffffff);
      auVar42 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar41 = vectorSubtractFloatingPoint(auVar41,auVar47);
      auVar47 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar37 = loadVectorLeftIndexed(0x34,0x222f98);
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar42 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
      auVar38 = vectorConvertFromSignedFixedPointWord(auVar37,0);
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar38);
      fVar3 = 1.0 / (float)(longlong)(animationSpeed * 60.5);
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar38,auVar42);
      auVar44 = vectorMultiplyAddFloatingPoint(auVar37,auVar44,auVar43);
      auVar37 = ZEXT416(0xffffffff);
      auVar43 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar38,auVar42);
      auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar37,auVar45);
      auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar37 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar38,auVar42);
      fVar2 = (fVar2 - fVar5) * fVar3;
      fVar3 = (fVar49 - fVar4) * fVar3;
      auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar37,auVar46);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar44,auVar48);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar39,auVar44,auVar47);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar41,auVar44,auVar43);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xa0,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa0U & 0xfffffffc) = uVar14;
      uVar14 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xa4,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar14;
      uVar14 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0xa8,uVar30)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa8U & 0xfffffffc) = uVar14;
      dVar35 = (double)MB_computeLobVelocity
                                 ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                  (double)(g_FrameTimeSq * -10.8),lVar20 + 0x10,uVar30 + 0xb0,0xa0,
                                  0xa4,0);
      *(float *)((int)pvVar8 + 0xa8) = (float)dVar35;
      moby->state = '\v';
    }
  }
  return;
}


