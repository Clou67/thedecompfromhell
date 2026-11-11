// game/update/moby47.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3988e8-0x3994a8
#include "game/update/moby47.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby481.h"
#include "idol/fastfunc.h"

// 0x03988e8 (0x1cc bytes)
bool M47_003988e8(int param_1,int *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  float local_40 [2];
  longlong local_38;
  
  iVar10 = *(int *)(param_1 + 0x78);
  local_38 = (longlong)*(int *)(iVar10 + 0xe8);
  dVar13 = (double)((float)local_38 + *(float *)(iVar10 + 0xec) +
                   *(float *)(iVar10 + 0xf0) / *(float *)(iVar10 + 0xf4));
  lVar11 = FastDoubleToInt(dVar13);
  iVar12 = (int)lVar11;
  local_38 = (longlong)iVar12;
  *(int *)(iVar10 + 0xe8) = iVar12;
  bVar1 = *param_2 + -2 <= iVar12;
  fVar2 = (float)(dVar13 - (double)local_38);
  *(float *)(iVar10 + 0xec) = fVar2;
  if (!bVar1) {
    iVar12 = (int)(lVar11 << 4);
    fVar3 = *(float *)((int)param_2 + iVar12 + 0x10);
    fVar4 = *(float *)((int)param_2 + iVar12 + 0x14);
    fVar5 = *(float *)((int)param_2 + iVar12 + 0x18);
    fVar6 = *(float *)((int)param_2 + iVar12 + 0x20);
    fVar7 = *(float *)((int)param_2 + iVar12 + 0x24);
    fVar8 = *(float *)((int)param_2 + iVar12 + 0x28);
    dVar14 = (double)*(float *)((int)param_2 + iVar12 + 0x1c);
    fVar9 = *(float *)((int)param_2 + iVar12 + 0x2c);
    *(float *)(param_1 + 0x1c) = fVar9;
    *(float *)(param_1 + 0x10) = fVar2 * (fVar6 - fVar3) + fVar3;
    *(float *)(param_1 + 0x14) = fVar2 * (fVar7 - fVar4) + fVar4;
    *(float *)(param_1 + 0x18) = fVar2 * (fVar8 - fVar5) + fVar5;
    dVar13 = (double)FastDiffRots((double)fVar9,dVar14);
    dVar13 = (double)FastWrapRot
                               ((float)(dVar13 * (double)*(float *)(iVar10 + 0xec)),(float)dVar14);
    iVar12 = *param_2;
    *(float *)(param_1 + 0x48) = (float)dVar13;
    local_40[0] = 0.0;
    fVar2 = *(float *)(param_1 + 0x14) - (float)param_2[iVar12 * 4 + -3];
    fVar3 = *(float *)(param_1 + 0x10) - (float)param_2[iVar12 * 4 + -4];
    fVar4 = *(float *)(param_1 + 0x18) - (float)param_2[iVar12 * 4 + -2];
    OrganicDelt
              (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2),DAT_00842ddc * DAT_0071f418,
               DAT_00842ddc * DAT_0071f418,DAT_00842dd8 * g_FrameTime,local_40,0x720000,
               (float *)(iVar10 + 0xf0));
  }
  return bVar1;
}


// 0x0398ac0 (0x21c bytes)
// inlined: FastAtan2 @0x398b9c
void M47_00398ac0(int *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x60;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  iVar13 = *param_1;
  iVar12 = 0;
  piVar11 = param_1;
  if (0 < iVar13 + -1) {
    do {
      fVar2 = (float)piVar11[9];
      fVar3 = (float)piVar11[5];
      fVar5 = ABS((float)piVar11[8] - (float)piVar11[4]);
      fVar4 = ABS(fVar2 - fVar3);
      *(float *)(puVar7 + 6) = (float)piVar11[8] - (float)piVar11[4];
      *(float *)((int)puVar7 + 0x34) = fVar2 - fVar3;
      *(float *)(puVar7 + 7) = fVar5 - fVar4;
      fVar2 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar7 + 6) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 7) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x34) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar7 + 6));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar7 + 0x34));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar10 - 0x50;
        lVar14 = uVar10 - 0x14;
        lVar16 = uVar10 - 0x24;
        lVar19 = 2;
        fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar7 + 9) = fVar3;
        *(float *)(puVar7 + 8) = fVar3;
        *(float *)((int)puVar7 + 0x44) = fVar3;
        *(float *)((int)puVar7 + 0x3c) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar7 + 8) = *(float *)(puVar7 + 8) * fVar5;
        *(float *)((int)puVar7 + 0x44) = *(float *)((int)puVar7 + 0x44) * fVar3;
        *(float *)(puVar7 + 9) = *(float *)(puVar7 + 9) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x2c) * fVar3 * fVar3;
          iVar13 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar17 = uVar10 - 0x24;
        lVar19 = 4;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar17;
        lVar16 = lVar1;
        do {
          fVar3 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x3c) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar16 = 2;
        lVar14 = lVar1;
        do {
          iVar13 = (int)lVar14;
          iVar9 = (int)lVar17;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar13 + 0x3c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                  + *(float *)(iVar9 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar4;
      }
      iVar13 = *param_1;
      iVar12 = iVar12 + 1;
      piVar11[7] = (int)fVar2;
      piVar11 = piVar11 + 4;
    } while (iVar12 < iVar13 + -1);
  }
  if (1 < iVar13) {
    param_1[iVar13 * 4 + 3] = param_1[iVar13 * 4 + -1];
  }
  return;
}


// 0x0398ce8 (0x1d8 bytes)
void M47_00398ce8(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  uVar5 = ZEXT48(pvVar1);
  param_1->scale = param_1->pClass->gScale * DAT_00842dd0;
  dVar6 = 0.0;
  local_1c = 0.0;
  uVar3 = MB_damage(param_1,0x330000,0);
  iVar4 = MB_HandleDamage(param_1,uVar3,uVar5 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state != '\a')) {
    fVar2 = *(float *)((int)pvVar1 + 0x20) - local_1c;
    *(float *)((int)pvVar1 + 0x20) = fVar2;
    if ((double)fVar2 <= dVar6) {
      iVar4 = 1;
    }
    if (iVar4 < 3) {
      if (0 < iVar4) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        param_1->state = '\a';
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar7 = loadVectorLeftIndexed(4,0x398cdc);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0xe0,uVar5);
        *(undefined4 *)((int)pvVar1 + 0xe0U & 0xfffffffc) = uVar3;
        *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
      }
    }
    else if (iVar4 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    MB_UpdateLightsTransition(param_1,uVar5 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar5 + 0x60);
  MB_getTargetInArea
            (0x4060000000000000,param_1,uVar5 + 0x70,&DAT_00398cdc,0,0,
             Splines[*(int *)((int)pvVar1 + 0xd0)]->points,
             Splines[*(int *)((int)pvVar1 + 0xd0)]->cnt);
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x0398ed8 (0x5d0 bytes)
/* Moby 47 */

void UpdateMoby_47(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  void *pvVar3;
  Spline *pSVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  M47_00398ce8();
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    fVar2 = (moby->rotation).x;
    (moby->pos).z = -(g_FrameTime * 2.0 - (moby->pos).z);
    (moby->rotation).x = g_FrameTime * 0.2617994 + fVar2;
    iVar8 = FastDecTimerS32(uVar9 + 0xe0);
    if (iVar8 != 0) {
      iVar8 = 0;
      do {
        if (-1 < *(int *)((int)uVar9 + 0xc0)) {
          FUN_0039e8f4(g_MobyInstance + *(int *)((int)uVar9 + 0xc0),local_40);
        }
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 + 4;
      } while (iVar8 < 4);
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x06') {
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    moby->state = '\x05';
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(8,0x398ec0);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0xe4,uVar9);
    *(undefined4 *)((int)pvVar3 + 0xe4U & 0xfffffffc) = uVar5;
  }
  else if (uVar1 == '\x05') {
    iVar8 = FastDecTimerS32(uVar9 + 0xe4);
    if ((iVar8 != 0) && (*(int *)((int)pvVar3 + 0xb4) != 2)) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    iVar8 = M47_003988e8(moby,Splines[*(int *)((int)pvVar3 + 0xdc)]);
    if (iVar8 != 0) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    fVar2 = Splines[*(int *)((int)pvVar3 + 0xd8)]->points[0].w;
    dVar10 = (double)fVar2;
    OrganicDelt
              (fVar2,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               g_FrameTime * 6.2831855,&(moby->rotation).z,
               (int)Splines[*(int *)((int)pvVar3 + 0xd8)],(float *)((int)pvVar3 + 0xf8));
    dVar10 = (double)FastSubRots((moby->rotation).z,(float)dVar10);
    if (dVar10 < 0.009999999776482582) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar3 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar3 + 0xec) = 0;
    }
  }
  else if (uVar1 == '\x02') {
    iVar8 = M47_003988e8(moby,Splines[*(int *)((int)pvVar3 + 0xd8)]);
    if (iVar8 != 0) {
      iVar8 = 0;
      do {
        if (-1 < *(int *)((int)uVar9 + 0xc0)) {
          FUN_0039e8f4(g_MobyInstance + *(int *)((int)uVar9 + 0xc0),local_50);
        }
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 + 4;
      } while (iVar8 < 4);
      moby->state = ((byte)(ZERO_MASK((-1 - *(int *)((int)pvVar3 + 0xdc)))) & 2) + 3;
    }
  }
  else if (uVar1 == '\x01') {
    iVar8 = PointInsideComplexPoly
                      (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0xd4)]->points,
                       Splines[*(int *)((int)pvVar3 + 0xd4)]->cnt);
    if (iVar8 != 0) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar3 + 0x20) = 0x41400000;
    *(undefined2 *)((int)pvVar3 + 0x24) = 0xc;
    *(undefined1 *)((int)pvVar3 + 0x28) = 3;
    if (((*(int *)((int)pvVar3 + 0xd8) == -1) || (*(int *)((int)pvVar3 + 0xd0) == -1)) ||
       (*(int *)((int)pvVar3 + 0xd4) == -1)) {
      DeleteMoby(moby);
    }
    else {
      M47_00398ac0(Splines[*(int *)((int)pvVar3 + 0xd8)]);
      if (*(int *)((int)pvVar3 + 0xdc) != -1) {
        M47_00398ac0(Splines[*(int *)((int)pvVar3 + 0xdc)]);
      }
      *(undefined4 *)((int)pvVar3 + 0xec) = 0;
      fVar6 = DAT_00842dd8;
      fVar2 = g_FrameTime;
      *(undefined4 *)((int)pvVar3 + 0xe8) = 0;
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0xd8)];
      *(float *)((int)pvVar3 + 0xf0) = fVar6 * fVar2;
      fVar2 = pSVar4->points[0].y - pSVar4->points[1].y;
      fVar6 = pSVar4->points[0].x - pSVar4->points[1].x;
      fVar7 = pSVar4->points[0].z - pSVar4->points[1].z;
      *(float *)((int)pvVar3 + 0xf4) = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar2 * fVar2);
      (moby->pos).x = pSVar4->points[0].x;
      (moby->pos).y = pSVar4->points[0].y;
      (moby->pos).z = pSVar4->points[0].z;
      fVar2 = pSVar4->points[0].w;
      moby->state = '\x01';
      (moby->pos).w = fVar2;
    }
  }
  return;
}


