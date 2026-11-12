// game/update/moby28.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x327030-0x329e30
#include <stdio.h>
#include "game/update/moby28.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby113.h"
#include "game/update/moby251.h"
#include "game/update/moby279.h"
#include "game/update/moby327.h"
#include "game/update/moby404.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0327030 (0xb0 bytes)
void M279_00327030(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  pMVar4 = g_MobyInstance;
  if ((int)param_1 != -1) {
    puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
    if (puVar5 != (ushort *)0x0) {
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar7 = loadVectorLeftIndexed(0x278,0x800000);
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = loadVectorLeftIndexed(in_r0,0x327028);
      auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar7 = vectorAddFloatingPoint
                         (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
      auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = vectorSplatHalfWord(auVar7,1);
      do {
        pvVar2 = pMVar4[*puVar5 & 0x7fff].pVar;
        if (pMVar4[*puVar5 & 0x7fff].oClass == PLASMABOT_001C) {
          uVar3 = storeVectorElementHalfWordIndexed(auVar7,0x260,ZEXT48(pvVar2));
          *(undefined2 *)((int)pvVar2 + 0x260) = uVar3;
        }
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x03270e0 (0x94 bytes)
int M279_003270e0(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  
  if ((int)param_1 == -1) {
    iVar3 = 0;
  }
  else {
    puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
    if (puVar2 == (ushort *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == PLASMABOT_001C) &&
           ((g_MobyInstance[*puVar2 & 0x7fff].state == '\x05' ||
            (g_MobyInstance[*puVar2 & 0x7fff].state == '\x06')))) {
          iVar3 = iVar3 + 1;
        }
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return iVar3;
}


// 0x0327178 (0x60 bytes)
void M279_00327178(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  fVar2 = (DAT_00800274 - 1.0) * DAT_0071f408 + 1.0;
  fVar3 = *(float *)(iVar1 + 0x254) * fVar2;
  *(float *)(iVar1 + 600) = *(float *)(iVar1 + 600) * fVar2;
  *(float *)(iVar1 + 0x254) = fVar3;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar3;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(iVar1 + 600);
  return;
}


// 0x03271f0 (0x328 bytes)
// inlined: FastAtan2 @0x327388
bool M28_003271f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar12;
  longlong lVar11;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  ulonglong in_f27;
  double dVar20;
  ulonglong in_f28;
  double dVar21;
  ulonglong in_f29;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0x100;
  puVar8 = (ulonglong *)lVar11;
  *puVar8 = uVar10;
  puVar8[0x22] = in_LR;
  puVar8[0x1b] = in_f27;
  puVar8[0x1c] = in_f28;
  puVar8[0x1d] = in_f29;
  puVar8[0x1e] = in_f30;
  puVar8[0x1f] = in_f31;
  puVar8[0x1a] = unaff_r31;
  puVar8[0x17] = unaff_r28;
  puVar8[0x18] = unaff_r29;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar8[0x16] = unaff_r27;
  lVar13 = uVar10 - 0x90;
  fVar5 = g_FrameTime * DAT_00800270;
  fVar1 = *(float *)(iVar6 + 0x27c);
  pSVar7 = Splines[*(int *)(iVar6 + 0x240)];
  puVar8[0x19] = unaff_r30;
  iVar12 = MB_PathMoveDist
                     ((double)(fVar5 * fVar1),pSVar7,lVar13,iVar6 + 0x24c,iVar6 + 0x250,Splines,0);
  dVar23 = 0.009999999776482582;
  dVar22 = 0.20000000298023224;
  dVar24 = 0.0;
  dVar21 = (double)*(float *)(param_1 + 0x10);
  dVar20 = (double)*(float *)(param_1 + 0x14);
  iVar14 = (int)lVar13;
  AccelDelt(*(float *)(puVar8 + 0xe),0.01,0.2,0.0,(float *)(param_1 + 0x10),iVar14,
                      (float *)(iVar6 + 0x254));
  AccelDelt(*(float *)((int)puVar8 + 0x74),(float)dVar23,(float)dVar22,(float)dVar24,
                      (float *)(param_1 + 0x14),iVar14,(float *)(iVar6 + 600));
  fVar1 = (float)((double)*(float *)((int)puVar8 + 0x74) - dVar20);
  dVar23 = ABS((double)(float)((double)*(float *)(puVar8 + 0xe) - dVar21));
  dVar22 = ABS((double)fVar1);
  *(float *)(puVar8 + 0x10) = (float)((double)*(float *)(puVar8 + 0xe) - dVar21);
  *(float *)((int)puVar8 + 0x84) = fVar1;
  *(float *)(puVar8 + 0x11) = (float)(dVar23 - dVar22);
  fVar1 = g_FrameTime;
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  dVar20 = ABS((double)*(float *)(puVar8 + 0x10));
  if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
    dVar20 = dVar22;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar22 = ABS((double)*(float *)((int)puVar8 + 0x84));
  if ((double)*(float *)(puVar8 + 0x11) - dVar24 < 0.0) {
    dVar22 = dVar23;
  }
  fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar24 < dVar20) {
    lVar17 = uVar10 - 0xf0;
    lVar13 = uVar10 - 100;
    lVar16 = uVar10 - 0x74;
    lVar19 = 2;
    fVar3 = (float)(dVar22 - dVar20) / (float)(dVar22 + dVar20);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x13) = fVar3;
    *(float *)(puVar8 + 0x12) = fVar3;
    *(float *)((int)puVar8 + 0x94) = fVar3;
    *(float *)((int)puVar8 + 0x8c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x8c) = *(float *)((int)lVar17 + 0x7c) * fVar3 * fVar3;
      iVar14 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar17 = uVar10 - 0x74;
    lVar19 = 4;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar17;
    lVar16 = lVar11;
    do {
      fVar3 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar16 + 0x8c) = *(float *)((int)lVar16 + 0x8c) * fVar3;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
      lVar13 = lVar13 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar14 = (int)lVar11;
      iVar9 = (int)lVar17;
      lVar11 = lVar11 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar2);
  }
  OrganicDeltAng
            ((float)dVar24,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,fVar1 * 6.2831855,
             (float *)(param_1 + 0x48),0x3271d8,(float *)(iVar6 + 0x23c));
  return iVar12 != 0;
}


// 0x0327518 (0x1c bytes)
void M28_00327518(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
  return;
}


// 0x0327534 (0x24 bytes)
void M279_00327534(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe | 0x1000;
  return;
}


// 0x0327558 (0x88 bytes)
undefined8 M279_00327558(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == PLASMABOT_001C) &&
         (g_MobyInstance[*puVar2 & 0x7fff].state == '\x02')) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}


// 0x03275e0 (0xbc bytes)
void M28_003275e0(int param_1)

{
  Spline *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  Spline *pSVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar5 + 0x24c) = 0;
  *(undefined4 *)(iVar5 + 0x250) = 0;
  *(undefined4 *)(iVar5 + 0x25c) = 0;
  *(undefined4 *)(iVar5 + 600) = 0;
  *(undefined4 *)(iVar5 + 0x254) = 0;
  if (*(int *)(iVar5 + 0x240) != -1) {
    pSVar1 = Splines[*(int *)(iVar5 + 0x240)];
    iVar5 = pSVar1->cnt;
    if (0 < iVar5) {
      iVar8 = 0;
      pSVar7 = pSVar1;
      do {
        iVar8 = iVar8 + 1;
        pfVar6 = (float *)((int)pSVar1 + ((iVar8 - (iVar8 / iVar5) * iVar5) * 4 + 4) * 4);
        fVar2 = pSVar7->points[0].y - pfVar6[1];
        fVar3 = pSVar7->points[0].x - *pfVar6;
        fVar4 = pSVar7->points[0].z - pfVar6[2];
        pSVar7->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        iVar5 = pSVar1->cnt;
        pSVar7 = (Spline *)pSVar7->points;
      } while (iVar8 < iVar5);
    }
  }
  return;
}


// 0x03276a8 (0xac bytes)
void M28_003276a8(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar1 + 0x38) != 0) {
    dVar4 = (double)MB_randRangeFloat(180.0,240.0);
    uVar3 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
    *(undefined4 *)(iVar1 + 0x238) = uVar3;
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  FastDecTimerS32(iVar1 + 0x238);
  fVar2 = DAT_0080025c;
  if (*(int *)(iVar1 + 0x238) != 0) {
    fVar2 = DAT_0080025c + 6.0;
  }
  *(float *)(iVar1 + 0x234) = fVar2;
  return;
}


// 0x0327754 (0xd8 bytes)
void M28_00327754(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  pSVar2 = Splines[*(int *)(iVar1 + 0x244)];
  iVar5 = MB_getTargetInArea
                    ((double)*(float *)(iVar1 + 0x234),param_1,iVar1 + 0xd0,pSVar2,0,0,
                     pSVar2->points,pSVar2->cnt);
  if ((iVar5 != 2) &&
     (fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar1 + 0xd4),
     fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar1 + 0xd0),
     *(float *)(iVar1 + 0x234) < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
    *(undefined4 *)(iVar1 + 0x114) = 2;
  }
  if (*(int *)(iVar1 + 0x110) == 0) {
    *(MobyInstance **)(iVar1 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x0327848 (0x694 bytes)
// inlined: FastAtan2 @0x327aa4, FastAtan2 @0x327cf8
void M28_00327848(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MOBY_OCLASSES MVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar22;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar18 = uVar13 - 0x100;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar13;
  puVar12[0x22] = in_LR;
  puVar12[0x1f] = in_f31;
  puVar12[0x1e] = unaff_r31;
  uVar1 = param_1->state;
  puVar12[0x1d] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar12[0x1c] = unaff_r29;
  puVar12[0x1b] = unaff_r28;
  if ((uVar1 == '\0') || (uVar1 == '\v')) {
    if (uVar1 != '\v') {
      return;
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar24 + 0xc0);
    return;
  }
  dVar29 = 0.0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  iVar14 = MB_damage(param_1,0x330000,0);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
     ((MVar6 = *(MOBY_OCLASSES *)(*(int *)(iVar14 + 0x20) + 0xa6), MVar6 == param_1->oClass ||
      (MVar6 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar14 = 0;
  }
  iVar15 = MB_HandleDamage
                     (param_1,iVar14,uVar24 + 0x20,0,puVar12 + 0xe,(int)puVar12 + 0x74,0,4);
  if ((*(int *)(puVar12 + 0xe) == 1) || (param_1->state == '\v')) goto LAB_00327ea0;
  MVar7 = param_1->modeBits;
  fVar5 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar12 + 0x74);
  *(float *)((int)pvVar8 + 0x20) = fVar5;
  if ((double)fVar5 <= dVar29) {
LAB_00327bd4:
    uVar9 = *(uint *)(iVar14 + 0x24);
    param_1->modeBits =
         MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    param_1->state = (char)(ZERO_MASK((uVar9 & 0x800000))) + '\f';
    uVar16 = FastDoubleToInt((double)(*(float *)((int)pvVar8 + 0x88) * 1024.0));
    *(undefined4 *)((int)pvVar8 + 0x80) = uVar16;
    *(undefined4 *)((int)pvVar8 + 0x88) = 0x3e99999a;
    fVar5 = g_FrameTime * 10.0;
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41100000;
    *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41700000;
    *(float *)((int)pvVar8 + 0x78) = fVar5;
    *(float *)((int)pvVar8 + 0x7c) = fVar5;
    uVar9 = *(uint *)(iVar14 + 0x10);
    uVar10 = *(uint *)(iVar14 + 0x14);
    dVar26 = ABS((double)*(float *)(iVar14 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar14 + 0x14));
    *(float *)(puVar12 + 0xf) = (float)(dVar26 - dVar28);
    uVar20 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar10 >> 0x1d) & 4;
    dVar27 = dVar26;
    if ((double)*(float *)(puVar12 + 0xf) - dVar29 < 0.0) {
      dVar27 = dVar28;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    if ((double)*(float *)(puVar12 + 0xf) - dVar29 < 0.0) {
      dVar28 = dVar26;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar29 < dVar27) {
      lVar17 = uVar13 - 0xf0;
      lVar21 = uVar13 - 0x80;
      lVar23 = uVar13 - 0x70;
      lVar25 = 2;
      fVar3 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x8c) = fVar3;
      *(float *)((int)puVar12 + 0x84) = fVar3;
      *(float *)(puVar12 + 0x11) = fVar3;
      *(float *)(puVar12 + 0x10) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0x84) = *(float *)((int)puVar12 + 0x84) * fVar4;
      *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar3;
      *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x70) * fVar3 * fVar3;
        iVar14 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar23 = uVar13 - 0x80;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar3 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0x80) = *(float *)((int)lVar17 + 0x80) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar17 = 2;
      do {
        iVar14 = (int)lVar18;
        iVar15 = (int)lVar23;
        lVar18 = lVar18 + 0x10;
        lVar23 = lVar23 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0x80)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    puVar12[0x18] = (longlong)(int)(animationSpeed * 5.5);
    MB_StartKick
              (dVar29,param_1,uVar24 + 0x60,&DAT_00720000,8,*(undefined4 *)((int)puVar12 + 0xc4),0);
    *(undefined1 *)((int)pvVar8 + 199) = 0xfa;
    if (g_heroType == '\x02') {
      MB_SpawnBoltsFromCrate(param_1,0x200,0xffffffffffffffff);
    }
    else {
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    param_1->collision = (ushort *)0x0;
  }
  else if (iVar15 < 3) {
    if ((-1 < iVar15) && (0 < iVar15)) goto LAB_00327bd4;
  }
  else if (iVar15 < 0xb) {
    FUN_0024d43c(param_1);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    param_1->state = '\n';
    fVar5 = g_FrameTime;
    auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar30 = loadVectorLeftIndexed(4,0x32782c);
    auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar30 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                         auVar31);
    auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
    auVar30 = vectorSplatHalfWord(auVar30,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar24);
    *(undefined2 *)((int)pvVar8 + 0x26) = uVar11;
    *(float *)((int)pvVar8 + 0x78) = fVar5 * 8.0;
    fVar2 = DAT_00800260;
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x41300000;
    *(undefined4 *)((int)pvVar8 + 0xb4) = 0x41e80000;
    *(float *)((int)pvVar8 + 0x7c) = fVar5 * fVar2;
    uVar9 = *(uint *)(iVar14 + 0x10);
    uVar10 = *(uint *)(iVar14 + 0x14);
    dVar26 = ABS((double)*(float *)(iVar14 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar14 + 0x14));
    *(float *)((int)puVar12 + 0x7c) = (float)(dVar26 - dVar28);
    uVar19 = (ulonglong)(uVar9 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
             (ulonglong)(uVar10 >> 0x1d) & 4;
    uVar20 = uVar19 << 2;
    dVar27 = dVar26;
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar29 < 0.0) {
      dVar27 = dVar28;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar20);
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar29 < 0.0) {
      dVar28 = dVar26;
    }
    if (dVar29 < dVar27) {
      lVar17 = uVar13 - 0xf0;
      lVar23 = uVar13 - 0x50;
      lVar21 = uVar13 - 0x60;
      lVar25 = 2;
      fVar3 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)((int)puVar12 + 0xa4) = fVar3;
      *(float *)(puVar12 + 0x15) = fVar3;
      *(float *)(puVar12 + 0x14) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar4;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar3;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0x90) * fVar3 * fVar3;
        iVar14 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar23 = uVar13 - 0x60;
      uVar20 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        pfVar22 = (float *)uVar20;
        fVar3 = pfVar22[1];
        uVar20 = uVar20 + 8;
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * *pfVar22;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar17 = 2;
      do {
        iVar14 = (int)lVar18;
        iVar15 = (int)lVar23;
        lVar18 = lVar18 + 0x10;
        lVar23 = lVar23 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xa0)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar5);
    }
    MB_StartKick(dVar29,param_1,uVar24 + 0x60,uVar20,7,1,0);
    *(undefined1 *)((int)pvVar8 + 199) = 0xfa;
  }
  MB_UpdateLightsTransition(param_1,uVar24 + 0xc0);
LAB_00327ea0:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar24 + 0xc0);
  return;
}


// 0x0327f50 (0x1ee0 bytes)
// inlined: FastAtan2 @0x328820, FastAtan2 @0x328c30, FastAtan2 @0x329204, FastAtan2 @0x329514
// strings: 00655fe0: '*Error: Moby 28(Footsoldier) with no introPath. UID: %d - RAR\n' | 00656020: '*Error: Moby 28(Footsoldier) with a intro path that has no points. UID: %d - RAR\n' | 00656078: '*Error: Moby 28(Footsoldier) with no boundPath. UID: %d - RAR\n' | 006560b8: '*Error: Moby 28(Footsoldier) with a bound path that has no points. UID: %d - RAR\n' | 00656110: '*Error: Moby 28(Footsoldier) with no hatch index. UID: %d - RAR\n'

/* Moby 28 */

void UpdateMoby_28(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  u16 *puVar10;
  void *pvVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar25;
  undefined1 uVar30;
  ushort *puVar26;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined4 *unused;
  longlong lVar31;
  float *pfVar32;
  longlong lVar33;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar34;
  ulonglong unaff_r29;
  bool bVar35;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double dVar38;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double extraout_f1_05;
  double extraout_f1_06;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  float fVar51;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 0x2c0;
  puVar14 = (ulonglong *)lVar24;
  *puVar14 = uVar20;
  puVar14[0x5a] = in_LR;
  puVar14[0x4d] = in_f21;
  puVar14[0x4e] = in_f22;
  puVar14[0x4f] = in_f23;
  puVar14[0x50] = in_f24;
  puVar14[0x51] = in_f25;
  puVar14[0x52] = in_f26;
  puVar14[0x53] = in_f27;
  puVar14[0x54] = in_f28;
  puVar14[0x55] = in_f29;
  puVar14[0x56] = in_f30;
  puVar14[0x57] = in_f31;
  puVar14[0x4c] = unaff_r31;
  puVar14[0x4b] = unaff_r30;
  iVar25 = 0;
  puVar14[0x49] = unaff_r28;
  puVar14[0x48] = unaff_r27;
  pvVar9 = moby->pVar;
  uVar34 = ZEXT48(pvVar9);
  puVar14[0x4a] = unaff_r29;
  iVar28 = 0;
  puVar14[0x47] = unaff_r26;
  puVar14[0x46] = unaff_r25;
  puVar14[0x45] = unaff_r24;
  dVar37 = (double)DoManipulator
                             (0x4004000000000000,moby,2,(Manipulator *)((int)pvVar9 + 0x120U));
  if (*(int *)((int)pvVar9 + 0x288) != 0) {
    if (g_heroType != '\x02') {
      moby->collision = (ushort *)0x0;
      if (moby->animationId == '\x05') {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        FUN_0024d43c(lVar21);
        MB_SpawnBoltsFromCrate(lVar21,0,0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
      moby->updateDistance = -1;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      return;
    }
    if (g_heroType == '\x02') {
      if (moby->state != '\v') {
        moby->collision = moby->pClass->collision;
      }
      moby->updateDistance = '@';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
  }
  bVar1 = moby->state;
  if (bVar1 != 0) {
    M28_00327848(lVar21);
    M28_00327754(lVar21);
    dVar37 = (double)M28_003276a8(lVar21);
    iVar25 = *(int *)((int)pvVar9 + 0x110);
    bVar1 = moby->state;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (bVar1 != 1) {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      fVar51 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
      fVar6 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
      dVar38 = ABS((double)fVar51);
      dVar46 = ABS((double)fVar6);
      *(float *)((int)puVar14 + 0x164) = fVar51;
      *(float *)(puVar14 + 0x2d) = fVar6;
      *(float *)((int)puVar14 + 0x16c) = (float)(dVar38 - dVar46);
      dVar43 = 0.0;
      uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x16c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar14 + 0x164));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        dVar37 = dVar46;
      }
      fVar51 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar44 = (double)*(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar46 = ABS((double)*(float *)(puVar14 + 0x2d));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        dVar46 = dVar38;
      }
      dVar38 = dVar43;
      if (0.0 < dVar37) {
        lVar23 = uVar20 - 0x2b0;
        lVar31 = uVar20 - 300;
        lVar33 = uVar20 - 0x11c;
        lVar36 = 2;
        fVar6 = (float)(dVar46 - dVar37) / (float)(dVar46 + dVar37);
        fVar4 = fVar6 * fVar6;
        *(float *)(puVar14 + 0x34) = fVar6;
        *(float *)(puVar14 + 0x33) = fVar6;
        *(float *)((int)puVar14 + 0x19c) = fVar6;
        *(float *)((int)puVar14 + 0x194) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar4;
        *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6;
        *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar23 + 0x194) = *(float *)((int)lVar23 + 0x184) * fVar6 * fVar6;
          iVar28 = (int)lVar31;
          lVar23 = lVar23 + 8;
          lVar31 = lVar31 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar28 + 4) * fVar6 * fVar6;
          lVar33 = lVar33 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar20 - 300;
        pfVar32 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar31 = lVar33;
        do {
          fVar6 = *pfVar32;
          fVar4 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar23 + 0x194) = *(float *)((int)lVar23 + 0x194) * fVar6;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar23 = 2;
        dVar37 = dVar43;
        do {
          iVar28 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar27 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar28 + 0x194)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar46 = (double)(float)(dVar37 + 0.7853981852531433);
        dVar38 = (double)(float)(dVar46 * (double)fVar51 + dVar44);
      }
      dVar37 = (double)FastIntToDouble(dVar44,dVar46,*(undefined2 *)((int)pvVar9 + 0x262))
      ;
      puVar14[0x43] = (longlong)DAT_00800284;
      puVar14[0x43] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x43] + 0.5));
      dVar46 = (double)FastIntToDouble(*(undefined4 *)((int)puVar14 + 0x21c));
      FastDiffRots
                ((double)*(float *)((int)pvVar9 + 0x278),
                 (double)((DAT_00800280 - -DAT_00800280) * (float)(dVar37 / dVar46) - DAT_00800280))
      ;
      bVar35 = false;
      if ((*(char *)((int)pvVar9 + 0x24b) != '\0') &&
         ((double)((*(float *)(iVar25 + 0x18) + 0.1) - (moby->pos).z) < dVar43)) {
        bVar35 = true;
      }
      M28_00326c98(lVar21);
      pvVar9 = moby->pVar;
      dVar46 = -(double)*(float *)((int)pvVar9 + 0x268);
      dVar37 = (double)FastDiffRots(dVar38,(double)(moby->rotation).z);
      dVar46 = (double)FastWrapRot((float)dVar46,(float)-dVar37);
      dVar37 = 1.2217304706573486;
      if ((dVar46 <= 1.2217304706573486) && (dVar37 = dVar46, dVar46 < -1.2217304706573486)) {
        dVar37 = -1.2217304706573486;
      }
      OrganicDeltAng
                ((float)dVar37,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 6.2831855,(float *)((int)pvVar9 + 0x270),0x720000,
                 (float *)((int)pvVar9 + 0x274));
      FastQuaternionToEuler((double)*(float *)((int)pvVar9 + 0x270),(int)pvVar9 + 0x130,2)
      ;
      GetBoneTransformations(lVar21,0,uVar20 - 0x1a0);
      dVar38 = (double)*(float *)(puVar14 + 0x26);
      dVar46 = (double)*(float *)((int)puVar14 + 0x134);
      fVar51 = (moby->rotation).z;
      MVar8 = moby->oClass;
      dVar37 = (double)*(float *)(puVar14 + 0x27);
      if (!bVar35) {
        dVar37 = dVar43;
      }
      dVar44 = (double)DAT_0080027c;
      *(undefined4 *)((int)puVar14 + 0xcc) = *(undefined4 *)((int)puVar14 + 0x15c);
      dVar40 = (double)SQRT((float)(dVar37 * dVar37 +
                                   (double)(float)(dVar38 * dVar38 +
                                                  (double)(float)(dVar46 * dVar46))));
      dVar45 = (double)DAT_0080028c;
      dVar41 = (double)(float)(dVar44 / dVar40);
      dVar44 = dVar43;
      if (dVar43 - dVar40 < 0.0) {
        dVar44 = (double)(float)(dVar46 * dVar41);
      }
      dVar42 = dVar43;
      if (dVar43 - dVar40 < 0.0) {
        dVar42 = (double)(float)(dVar38 * dVar41);
      }
      dVar39 = dVar43;
      if (dVar43 - dVar40 < 0.0) {
        dVar39 = (double)(float)(dVar37 * dVar41);
      }
      if (dVar40 - dVar43 < 0.0) {
        dVar44 = (double)(float)(dVar46 * dVar41);
      }
      if (dVar40 - dVar43 < 0.0) {
        dVar42 = (double)(float)(dVar38 * dVar41);
      }
      if (dVar40 - dVar43 < 0.0) {
        dVar39 = (double)(float)(dVar37 * dVar41);
      }
      *(float *)(puVar14 + 0x18) = (float)((double)*(float *)(puVar14 + 0x2a) + dVar42);
      *(float *)((int)puVar14 + 0xc4) = (float)((double)*(float *)((int)puVar14 + 0x154) + dVar44);
      *(float *)(puVar14 + 0x19) = (float)((double)*(float *)(puVar14 + 0x2b) + dVar39);
      fVar6 = fVar51 + 1.5707963;
      dVar37 = (double)SQRT((float)(dVar39 * dVar39 +
                                   (double)(float)(dVar42 * dVar42 +
                                                  (double)(float)(dVar44 * dVar44))));
      *(undefined4 *)(puVar14 + 0x1f) = 0x3f800000;
      *(undefined4 *)((int)puVar14 + 0xfc) = 0x45afdf66;
      *(undefined1 *)(puVar14 + 0x21) = 0;
      *(undefined1 *)((int)puVar14 + 0x109) = 1;
      *(MOBY_OCLASSES *)((int)puVar14 + 0x10a) = MVar8;
      *(undefined4 *)((int)puVar14 + 0x10c) = 0x3f800000;
      *(undefined4 *)(puVar14 + 0x22) = 1;
      fVar4 = 3.1415925 - fVar51;
      if (fVar51 - (3.1415925 - fVar51) < 0.0) {
        fVar4 = fVar51;
      }
      fVar3 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = -3.1415925 - fVar51;
      if ((-3.1415925 - fVar51) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      dVar46 = (double)(float)(dVar45 / dVar37);
      fVar51 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
        fVar51 = fVar3;
      }
      fVar6 = fVar5 * fVar5;
      fVar4 = fVar51 * fVar51;
      fVar3 = fVar4 * fVar4 * fVar51;
      fVar17 = fVar6 * fVar6 * fVar5;
      fVar15 = fVar4 * fVar3;
      dVar38 = dVar43;
      if (dVar43 - dVar37 < 0.0) {
        dVar38 = (double)(float)(dVar39 * dVar46);
      }
      dVar45 = dVar43;
      if (dVar43 - dVar37 < 0.0) {
        dVar45 = (double)(float)(dVar44 * dVar46);
      }
      dVar40 = dVar43;
      if (dVar43 - dVar37 < 0.0) {
        dVar40 = (double)(float)(dVar42 * dVar46);
      }
      if (dVar37 - dVar43 < 0.0) {
        dVar38 = (double)(float)(dVar39 * dVar46);
      }
      if (dVar37 - dVar43 < 0.0) {
        dVar45 = (double)(float)(dVar44 * dVar46);
      }
      if (dVar37 - dVar43 < 0.0) {
        dVar40 = (double)(float)(dVar42 * dVar46);
      }
      fVar18 = fVar6 * fVar17;
      *(float *)(puVar14 + 0x1e) =
           fVar4 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar51 * -0.16666657 + fVar51;
      *(undefined4 *)((int)puVar14 + 0x104) = 0x10001;
      *(MobyInstance **)(puVar14 + 0x20) = moby;
      *(float *)(puVar14 + 0x2b) = (float)((double)*(float *)(puVar14 + 0x2b) + dVar38);
      *(float *)((int)puVar14 + 0x154) = (float)((double)*(float *)((int)puVar14 + 0x154) + dVar45);
      *(float *)(puVar14 + 0x2a) = (float)((double)*(float *)(puVar14 + 0x2a) + dVar40);
      *(float *)((int)puVar14 + 0xf4) =
           fVar6 * fVar18 * 2.601887e-06 +
           fVar18 * -0.0001980741 + fVar17 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5;
      iVar25 = CollLine(uVar20 - 0x170,uVar20 - 0x200,0,lVar21,uVar20 - 0x1d0);
      fVar51 = g_CollOutput.ip.y;
      if (iVar25 != 0) {
        *(float *)(puVar14 + 0x18) = g_CollOutput.ip.x;
        fVar6 = g_CollOutput.ip.z;
        *(float *)((int)puVar14 + 0xc4) = fVar51;
        fVar51 = g_CollOutput.ip.w;
        *(float *)(puVar14 + 0x19) = fVar6;
        *(float *)((int)puVar14 + 0xcc) = fVar51;
      }
      FUN_0024d50c(lVar21,uVar20 - 0x1a0,uVar20 - 0x200);
      iVar25 = FastDecTimerS16(uVar34 + 0x262);
      dVar37 = extraout_f1_06;
      if (iVar25 != 0) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar21,6,0,*(undefined4 *)((int)puVar14 + 0x21c));
        moby->state = '\a';
        dVar37 = (double)FUN_0024d43c(lVar21);
      }
    }
    else if (bVar1 == 5) {
      fVar51 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
      fVar6 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
      fVar3 = ABS(fVar51);
      fVar4 = ABS(fVar6);
      *(float *)(puVar14 + 0x2e) = fVar51;
      *(float *)((int)puVar14 + 0x174) = fVar6;
      *(float *)(puVar14 + 0x2f) = fVar3 - fVar4;
      dVar37 = 0.0;
      uVar34 = (ulonglong)(*(uint *)(puVar14 + 0x2e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x2f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x174) >> 0x1d) & 4;
      fVar51 = ABS(*(float *)(puVar14 + 0x2e));
      if (*(float *)(puVar14 + 0x2f) - 0.0 < 0.0) {
        fVar51 = fVar4;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
      fVar6 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar14 + 0x174));
      if (*(float *)(puVar14 + 0x2f) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      if (0.0 < fVar51) {
        lVar23 = uVar20 - 0x2b0;
        lVar33 = uVar20 - 0xfc;
        lVar31 = uVar20 - 0x10c;
        lVar36 = 2;
        fVar51 = (fVar5 - fVar51) / (fVar5 + fVar51);
        fVar3 = fVar51 * fVar51;
        *(float *)(puVar14 + 0x38) = fVar51;
        *(float *)(puVar14 + 0x37) = fVar51;
        *(float *)((int)puVar14 + 0x1bc) = fVar51;
        *(float *)((int)puVar14 + 0x1b4) = fVar51;
        fVar51 = fVar3 * fVar3;
        *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar3;
        *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar51;
        *(float *)(puVar14 + 0x38) = *(float *)(puVar14 + 0x38) * fVar51 * fVar3;
        do {
          *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1a4) * fVar51 * fVar51;
          iVar25 = (int)lVar31;
          lVar31 = lVar31 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar25 + 4) * fVar51 * fVar51;
          lVar33 = lVar33 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar20 - 0x10c;
        pfVar32 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar31 = lVar33;
        do {
          fVar51 = *pfVar32;
          fVar3 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1b4) * fVar51;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar3;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar23 = 2;
        do {
          iVar25 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar28 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar25 + 0x1b4)) +
                            *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                           *(float *)(iVar28 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar4 + fVar6);
      }
      FastDiffRots(dVar37,(double)DAT_00800280);
      M28_00326c98(lVar21);
      pvVar9 = moby->pVar;
      dVar46 = -(double)*(float *)((int)pvVar9 + 0x268);
      dVar37 = (double)FastDiffRots(dVar37,(double)(moby->rotation).z);
      dVar46 = (double)FastWrapRot((float)dVar46,(float)-dVar37);
      dVar37 = 1.2217304706573486;
      if ((dVar46 <= 1.2217304706573486) && (dVar37 = dVar46, dVar46 < -1.2217304706573486)) {
        dVar37 = -1.2217304706573486;
      }
      OrganicDeltAng
                ((float)dVar37,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 6.2831855,(float *)((int)pvVar9 + 0x270),0x720000,
                 (float *)((int)pvVar9 + 0x274));
      dVar37 = (double)FastQuaternionToEuler
                                 ((double)*(float *)((int)pvVar9 + 0x270),(int)pvVar9 + 0x130,2);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        dVar37 = (double)MB_SetAnimation(lVar21,5,0,*(undefined4 *)((int)puVar14 + 0x21c))
        ;
        moby->state = '\x06';
      }
    }
    else if (bVar1 == 4) {
      pvVar11 = moby->pVar;
      fVar51 = (DAT_00800274 - 1.0) * DAT_0071f408 + 1.0;
      fVar6 = *(float *)((int)pvVar11 + 0x254) * fVar51;
      *(float *)((int)pvVar11 + 600) = *(float *)((int)pvVar11 + 600) * fVar51;
      *(float *)((int)pvVar11 + 0x254) = fVar6;
      fVar6 = (moby->pos).x + fVar6;
      (moby->pos).x = fVar6;
      fVar51 = (moby->pos).y + *(float *)((int)pvVar11 + 600);
      pfVar32 = (float *)&g_atanQuadrantTable;
      (moby->pos).y = fVar51;
      fVar6 = *(float *)(iVar25 + 0x10) - fVar6;
      fVar51 = *(float *)(iVar25 + 0x14) - fVar51;
      fVar3 = ABS(fVar6);
      fVar4 = ABS(fVar51);
      *(float *)((int)puVar14 + 0x17c) = fVar6;
      *(float *)(puVar14 + 0x30) = fVar51;
      *(float *)((int)puVar14 + 0x184) = fVar3 - fVar4;
      dVar46 = 0.0;
      uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0x17c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x184) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x30) >> 0x1d) & 4;
      fVar51 = ABS(*(float *)((int)puVar14 + 0x17c));
      if (*(float *)((int)puVar14 + 0x184) - 0.0 < 0.0) {
        fVar51 = fVar4;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = ABS(*(float *)(puVar14 + 0x30));
      if (*(float *)((int)puVar14 + 0x184) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar51) {
        lVar23 = uVar20 - 0x2b0;
        lVar33 = uVar20 - 0xdc;
        lVar31 = uVar20 - 0xec;
        lVar36 = 2;
        fVar51 = (fVar4 - fVar51) / (fVar4 + fVar51);
        fVar4 = fVar51 * fVar51;
        *(float *)(puVar14 + 0x3c) = fVar51;
        *(float *)(puVar14 + 0x3b) = fVar51;
        *(float *)((int)puVar14 + 0x1dc) = fVar51;
        *(float *)((int)puVar14 + 0x1d4) = fVar51;
        fVar51 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar4;
        *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar51;
        *(float *)(puVar14 + 0x3c) = *(float *)(puVar14 + 0x3c) * fVar51 * fVar4;
        do {
          *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1c4) * fVar51 * fVar51;
          iVar27 = (int)lVar31;
          lVar31 = lVar31 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar51 * fVar51;
          lVar33 = lVar33 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar20 - 0xec;
        pfVar32 = (float *)&DAT_007358e0;
        lVar23 = lVar24;
        lVar31 = lVar33;
        do {
          fVar51 = *pfVar32;
          fVar4 = pfVar32[1];
          pfVar32 = pfVar32 + 2;
          *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1d4) * fVar51;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar23 = 2;
        do {
          iVar27 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar16 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar27 + 0x1d4)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar46 = (double)((float)(dVar46 + 0.7853981852531433) * fVar6 + fVar3);
      }
      dVar45 = 12.566370964050293;
      dVar44 = 6.2831854820251465;
      OrganicDeltAng
                ((float)dVar46,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                 g_FrameTime * 6.2831855,&(moby->rotation).z,(int)pfVar32,
                 (float *)((int)pvVar9 + 0x23c));
      dVar38 = (double)M28_00326c98((double)(moby->rotation).z,lVar21);
      pvVar11 = moby->pVar;
      dVar43 = -(double)*(float *)((int)pvVar11 + 0x268);
      dVar37 = (double)FastDiffRots(dVar46,(double)(moby->rotation).z);
      dVar43 = (double)FastWrapRot((float)dVar43,(float)-dVar37);
      dVar37 = 1.2217304706573486;
      if ((dVar43 <= 1.2217304706573486) && (dVar37 = dVar43, dVar43 < -1.2217304706573486)) {
        dVar37 = -1.2217304706573486;
      }
      OrganicDeltAng
                ((float)dVar37,(float)((double)g_FrameTimeSq * dVar45),
                 (float)((double)g_FrameTimeSq * dVar45),
                 (float)((double)g_FrameTime * dVar44),(float *)((int)pvVar11 + 0x270),
                 (int)pfVar32,(float *)((int)pvVar11 + 0x274));
      dVar37 = (double)FastQuaternionToEuler
                                 ((double)*(float *)((int)pvVar11 + 0x270),(int)pvVar11 + 0x130,2);
      if (*(int *)((int)pvVar9 + 0x114) == 2) {
        if (*(int *)((int)pvVar9 + 0x240) != -1) {
          moby->state = '\b';
          if (moby->animationId != '\x03') {
            puVar14[0x43] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar14 + 0x21c));
          }
          iVar25 = *(int *)((int)pvVar9 + 0x24c);
          *(int *)((int)pvVar9 + 0x24c) = iVar25 + -1;
          fVar51 = Splines[*(int *)((int)pvVar9 + 0x240)]->points[iVar25 + -1].w;
          *(undefined4 *)((int)pvVar9 + 0x27c) = 0xbf800000;
          *(float *)((int)pvVar9 + 0x250) = fVar51;
          *(undefined4 *)((int)pvVar9 + 0x25c) = 0;
          *(undefined4 *)((int)pvVar9 + 600) = 0;
          *(undefined4 *)((int)pvVar9 + 0x254) = 0;
          dVar37 = (double)FUN_0024d43c(lVar21);
        }
      }
      else {
        iVar27 = FastDecTimerS16(uVar34 + 0x260);
        dVar37 = extraout_f1_02;
        if (iVar27 != 0) {
          if (((byte)moby->group != 0xffffffff) &&
             (puVar26 = (ushort *)(&g_MobyGroups)[(byte)moby->group],
             puVar26 != (ushort *)0x0)) {
            do {
              if ((g_MobyInstance[*puVar26 & 0x7fff].oClass == PLASMABOT_001C) &&
                 ((g_MobyInstance[*puVar26 & 0x7fff].state == '\x05' ||
                  (g_MobyInstance[*puVar26 & 0x7fff].state == '\x06')))) {
                iVar28 = iVar28 + 1;
              }
              uVar7 = *puVar26;
              puVar26 = puVar26 + 1;
            } while (-1 < (short)uVar7);
            if (1 < iVar28) goto LAB_00329cd8;
          }
          iVar28 = FUN_0024d2e4(lVar21,1,0);
          dVar37 = extraout_f1_03;
          if ((iVar28 != 0) &&
             (iVar28 = MB_randInt(4), dVar37 = extraout_f1_04, iVar28 == 0)) {
            dVar43 = (double)FastSubRots((moby->rotation).z,(float)dVar46);
            dVar37 = 0.01745329238474369;
            if ((dVar43 < 0.01745329238474369) &&
               ((dVar38 < 0.01745329238474369 &&
                (iVar25 = MB_LineCrossesSpline
                                    (*(undefined4 *)((int)pvVar9 + 0x244),lVar21 + 0x10,
                                     iVar25 + 0x10), pMVar19 = g_MobyInstance, dVar37 = extraout_f1_05
                , iVar25 == 0)))) {
              if (((byte)moby->group != 0xffffffff) &&
                 (puVar26 = (ushort *)(&g_MobyGroups)[(byte)moby->group],
                 puVar26 != (ushort *)0x0)) {
                auVar48 = ZEXT416(0xffffffff);
                auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
                auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
                auVar48 = loadVectorLeftIndexed(0x278,0x800000);
                auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
                auVar48 = loadVectorLeftIndexed(0xc,0x327edc);
                auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar48 = vectorAddFloatingPoint
                                    (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                             auVar48 << 0x60);
                auVar48 = vectorMultiplyAddFloatingPoint(auVar50,auVar48,auVar49);
                auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
                auVar48 = vectorSplatHalfWord(auVar48,1);
                do {
                  pvVar11 = pMVar19[*puVar26 & 0x7fff].pVar;
                  if (pMVar19[*puVar26 & 0x7fff].oClass == PLASMABOT_001C) {
                    uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x260,ZEXT48(pvVar11));
                    *(undefined2 *)((int)pvVar11 + 0x260) = uVar13;
                  }
                  uVar7 = *puVar26;
                  puVar26 = puVar26 + 1;
                } while (-1 < (short)uVar7);
              }
              *(float *)((int)pvVar9 + 0x278) = (float)dVar46;
              moby->state = '\x05';
              puVar14[0x43] = (longlong)(int)(animationSpeed * 5.5);
              dVar37 = (double)MB_SetAnimation
                                         (lVar21,4,0,*(undefined4 *)((int)puVar14 + 0x21c));
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              auVar50 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              auVar48 = loadVectorLeftIndexed(0x284,0x800000);
              auVar49 = loadVectorLeftIndexed(0xc,0x327edc);
              auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
              auVar48 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar48 = vectorAddFloatingPoint
                                  (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 |
                                           auVar48 << 0x60);
              auVar48 = vectorMultiplyAddFloatingPoint(auVar49,auVar48,auVar50);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = vectorSplatHalfWord(auVar48,1);
              uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x262,uVar34);
              *(undefined2 *)((int)pvVar9 + 0x262) = uVar13;
            }
          }
        }
      }
    }
    else if (bVar1 == 3) {
      iVar25 = M28_003271f0(lVar21);
      dVar37 = extraout_f1_00;
      if (iVar25 != 0) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        dVar37 = (double)MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar14 + 0x21c))
        ;
        moby->state = '\x04';
      }
    }
    else if (bVar1 == 2) {
      dVar37 = (double)BlendAnimFrame(moby);
      if (3.0 <= dVar37) {
        dVar37 = (double)M28_003271f0(lVar21);
      }
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
        moby->state = '\x03';
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        dVar37 = (double)MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar14 + 0x21c))
        ;
        moby->unk58 = 1.0;
      }
    }
    else {
      if (bVar1 == 1) {
        if (*(int *)((int)pvVar9 + 0x114) == 2) {
          return;
        }
        iVar25 = FastDecTimerS16(uVar34 + 0x248);
        if (iVar25 == 0) {
          return;
        }
        iVar25 = M251_CheckPlasmabotHatchAvailability
                           (*(undefined4 *)((int)pvVar9 + 0x264));
        if (iVar25 == 0) {
          return;
        }
        if ((moby->group != 0xff) &&
           (puVar26 = (ushort *)(&g_MobyGroups)[(byte)moby->group],
           puVar26 != (ushort *)0x0)) {
          do {
            if ((g_MobyInstance[*puVar26 & 0x7fff].oClass == PLASMABOT_001C) &&
               (g_MobyInstance[*puVar26 & 0x7fff].state == '\x02')) {
              return;
            }
            uVar7 = *puVar26;
            puVar26 = puVar26 + 1;
          } while (-1 < (short)uVar7);
        }
        auVar48 = ZEXT416(0xffffffff);
        auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
        auVar48 = loadVectorLeftIndexed(0x288,0x800000);
        auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
        auVar48 = loadVectorLeftIndexed(0xc,0x327edc);
        auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar48 = vectorAddFloatingPoint
                            (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar50,auVar48,auVar49);
        auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
        auVar48 = vectorSplatHalfWord(auVar48,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x248,uVar34);
        *(undefined2 *)((int)pvVar9 + 0x248) = uVar13;
        puVar10 = moby->pClass->collision;
        moby->state = '\x02';
        moby->collision = puVar10;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        MB_SetAnimationNoBlend(lVar21,1,0);
        pSVar12 = Splines[*(int *)((int)pvVar9 + 0x240)];
        dVar37 = (double)FUN_005e8338((double)(pSVar12->points[1].x - pSVar12->points[0].x),
                                      (double)(pSVar12->points[1].y - pSVar12->points[0].y));
        (moby->rotation).z = (float)dVar37;
        *(undefined4 *)((int)pvVar9 + 0x268) = 0;
        *(undefined4 *)((int)pvVar9 + 0x26c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x270) = 0;
        *(undefined4 *)((int)pvVar9 + 0x274) = 0;
        *(undefined4 *)((int)pvVar9 + 0x27c) = 0x3f800000;
        *(undefined4 *)((int)pvVar9 + 0x24c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x250) = 0;
        *(undefined4 *)((int)pvVar9 + 0x25c) = 0;
        *(undefined4 *)((int)pvVar9 + 600) = 0;
        *(undefined4 *)((int)pvVar9 + 0x254) = 0;
        return;
      }
      if (bVar1 == 0) {
        bVar35 = *(char *)((int)pvVar9 + 0x24a) != '\0';
        if (bVar35) {
          if (*(int *)((int)pvVar9 + 0x240) == -1) {
            printf("*Error: Moby 28(Footsoldier) with no introPath. UID: %d - RAR\n",moby->uid
                        );
            DeleteMoby(moby);
            return;
          }
          if (Splines[*(int *)((int)pvVar9 + 0x240)]->cnt == 0) {
            printf("*Error: Moby 28(Footsoldier) with a intro path that has no points. UID: %d - RAR\n"
                         ,moby->uid);
            DeleteMoby(moby);
            return;
          }
        }
        if (*(int *)((int)pvVar9 + 0x244) == -1) {
          printf("*Error: Moby 28(Footsoldier) with no boundPath. UID: %d - RAR\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar9 + 0x244)]->cnt == 0) {
          printf("*Error: Moby 28(Footsoldier) with a bound path that has no points. UID: %d - RAR\n"
                       ,moby->uid);
          DeleteMoby(moby);
          return;
        }
        if ((bVar35) && (*(int *)((int)pvVar9 + 0x264) < 0)) {
          printf("*Error: Moby 28(Footsoldier) with no hatch index. UID: %d - RAR\n",moby->uid
                      );
          DeleteMoby(moby);
          return;
        }
        iVar25 = MB_randInt(2);
        if (iVar25 != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        M28_003275e0(lVar21);
        if (*(int *)((int)pvVar9 + 0x240) != -1) {
          FUN_005e7e98(lVar21 + 0x10,ZEXT48(Splines[*(int *)((int)pvVar9 + 0x240)]) + 0x10);
        }
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0x28) = 1;
        *(undefined4 *)((int)pvVar9 + 0x30) = 0x3fa00000;
        *(undefined1 *)((int)pvVar9 + 0x29) = 0;
        uVar30 = FastDoubleToInt(0x402e000000000000);
        *(undefined1 *)((int)pvVar9 + 0x58) = uVar30;
        uVar30 = FastDoubleToInt(0x4030000000000000);
        *(undefined1 *)((int)pvVar9 + 0x5a) = uVar30;
        *(undefined2 *)((int)pvVar9 + 0x248) = 0;
        *(undefined4 *)((int)pvVar9 + 0x23c) = 0;
        *(undefined2 *)((int)pvVar9 + 0x260) = 0;
        *(undefined4 *)((int)pvVar9 + 0x268) = 0;
        *(undefined4 *)((int)pvVar9 + 0x26c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x280) = 0;
        *(undefined4 *)((int)pvVar9 + 0x284) = 0;
        *(undefined4 *)((int)pvVar9 + 0x270) = 0;
        *(undefined4 *)((int)pvVar9 + 0x274) = 0;
        *(undefined4 *)((int)pvVar9 + 0x27c) = 0x3f800000;
        if (*(char *)((int)pvVar9 + 0x121) == '\0') {
          AttachManipulator(moby,2,(Manipulator *)((int)pvVar9 + 0x120U));
        }
        if (*(char *)((int)pvVar9 + 0x161) == '\0') {
          AttachManipulator(moby,3,(int)pvVar9 + 0x160);
        }
        if (*(char *)((int)pvVar9 + 0x24a) != '\0') {
          M28_00327518(lVar21);
          moby->state = '\x01';
          return;
        }
        dVar37 = (double)GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
        iVar25 = *(int *)((int)pvVar9 + 0x240);
        (moby->pos).z = (float)dVar37;
        moby->state = ((byte)(ZERO_MASK((-1 - iVar25))) & 0xf7) + 0xd;
        return;
      }
    }
  }
  else if (bVar1 == 0xd) {
    fVar51 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
    fVar4 = ABS(fVar51);
    fVar3 = ABS(fVar6);
    *(float *)(puVar14 + 0x31) = fVar51;
    *(float *)((int)puVar14 + 0x18c) = fVar6;
    *(float *)(puVar14 + 0x32) = fVar4 - fVar3;
    fVar51 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x31) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x32) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x18c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar14 + 0x31));
    if (*(float *)(puVar14 + 0x32) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar15 = ABS(*(float *)((int)puVar14 + 0x18c));
    if (*(float *)(puVar14 + 0x32) - 0.0 < 0.0) {
      fVar15 = fVar4;
    }
    if (0.0 < fVar6) {
      lVar23 = uVar20 - 0x2b0;
      lVar33 = uVar20 - 0xbc;
      lVar31 = uVar20 - 0xcc;
      lVar36 = 2;
      fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x40) = fVar6;
      *(float *)(puVar14 + 0x3f) = fVar6;
      *(float *)((int)puVar14 + 0x1fc) = fVar6;
      *(float *)((int)puVar14 + 500) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x3f) = *(float *)(puVar14 + 0x3f) * fVar4;
      *(float *)((int)puVar14 + 0x1fc) = *(float *)((int)puVar14 + 0x1fc) * fVar6;
      *(float *)(puVar14 + 0x40) = *(float *)(puVar14 + 0x40) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 0x1e4) * fVar6 * fVar6;
        iVar25 = (int)lVar31;
        lVar31 = lVar31 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar25 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar36 = 4;
      lVar33 = uVar20 - 0xcc;
      pfVar32 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar31 = lVar33;
      do {
        fVar6 = *pfVar32;
        fVar4 = pfVar32[1];
        pfVar32 = pfVar32 + 2;
        *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 500) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar4;
        lVar31 = lVar31 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar23 = 2;
      do {
        iVar25 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar28 = (int)lVar33;
        lVar33 = lVar33 + 0x10;
        fVar51 = fVar51 + *(float *)(iVar25 + 500) + *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8)
                 + *(float *)(iVar28 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar51 = (fVar51 + 0.7853982) * fVar5 + fVar3;
    }
    fVar51 = OrganicDeltAng
                       (fVar51,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                        (float *)((int)pvVar9 + 0x23c));
    dVar37 = (double)fVar51;
    if ((*(int *)((int)pvVar9 + 0x114) != 2) &&
       (iVar25 = FastDecTimerS16(dVar37,uVar34 + 0x248), dVar37 = extraout_f1, iVar25 != 0
       )) {
      moby->state = '\x03';
      puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
      dVar37 = (double)MB_SetAnimation(lVar21,3,0,*(undefined4 *)((int)puVar14 + 0x21c));
      *(undefined4 *)((int)pvVar9 + 0x24c) = 0;
      moby->unk58 = 1.0;
      *(undefined4 *)((int)pvVar9 + 0x27c) = 0x3f800000;
      *(undefined4 *)((int)pvVar9 + 0x250) = 0;
      *(undefined4 *)((int)pvVar9 + 0x25c) = 0;
      *(undefined4 *)((int)pvVar9 + 600) = 0;
      *(undefined4 *)((int)pvVar9 + 0x254) = 0;
    }
  }
  else {
    if (bVar1 == 0xc) {
      GetBonePosition(lVar21,2,uVar20 - 0x1e0);
      FUN_003426d8(lVar21,uVar20 - 0x1e0);
      *(undefined4 *)(puVar14 + 0x2c) = 0;
      FUN_00363aa0(lVar21,uVar20 - 0x160,1);
      FUN_0024d43c(lVar21);
      DeleteMoby(moby);
      return;
    }
    if (bVar1 == 0xb) {
      uVar29 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x60));
      if ((uVar29 & 0x160) == 0) {
        return;
      }
      FUN_0024d43c(lVar21);
      GetBonePosition(lVar21,2,uVar20 - 0x1f0);
      FUN_003426d8(lVar21,uVar20 - 0x1f0);
      puVar14[0x12] = 0xffffffffffffffff;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar21,uVar34 + 0x40,lVar21 + 0x10,1,0xffffffffffffffff,5,2,4);
      if (g_heroType == '\x02') {
        MB_SpawnBoltsFromCrate(lVar21,0x200,0xffffffffffffffff);
      }
      else {
        MB_SpawnBoltsFromCrate(lVar21,0,0xffffffffffffffff);
      }
      DeleteMoby(moby);
      return;
    }
    if (bVar1 == 10) {
      if (((moby->field43_0x70 & 2U) == 0) ||
         (moby->updateId != moby->animationId || moby->updateId != '\a')) {
        if ((moby->updateId != '\a') && (moby->animationId != '\a')) {
          dVar37 = (double)MB_SetAnimation(lVar21,0,0,10);
          moby->state = '\x04';
        }
      }
      else {
        dVar37 = (double)MB_SetAnimation(lVar21,0,0,10);
        moby->state = '\x04';
      }
    }
    else if (bVar1 == 9) {
      unused = &DAT_00327edc;
      dVar38 = 0.009999999776482582;
      dVar46 = 0.20000000298023224;
      dVar37 = 0.0;
      pSVar12 = Splines[*(int *)((int)pvVar9 + 0x240)];
      AccelDelt(pSVar12->points[0].x,0.01,0.2,0.0,&(moby->pos).x,0x327edc,
                          (float *)((int)pvVar9 + 0x254));
      fVar51 = AccelDelt(pSVar12->points[0].y,(float)dVar38,(float)dVar46,(float)dVar37,
                                   &(moby->pos).y,(int)unused,(float *)((int)pvVar9 + 600));
      dVar37 = (double)fVar51;
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
        puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar14 + 0x21c));
        moby->collision = (ushort *)0x0;
        moby->unk58 = 1.0;
        moby->state = '\x01';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        return;
      }
    }
    else if (bVar1 == 8) {
      if (*(char *)((int)pvVar9 + 0x24a) != '\0') {
        M251_CheckPlasmabotHatchAvailability
                  (*(undefined4 *)((int)pvVar9 + 0x264));
      }
      iVar25 = M28_003271f0(lVar21);
      dVar37 = extraout_f1_01;
      if (iVar25 != 0) {
        if (*(char *)((int)pvVar9 + 0x24a) == '\0') {
          auVar48 = ZEXT416(0xffffffff);
          auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
          auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
          auVar48 = loadVectorLeftIndexed(0x288,0x800000);
          auVar47 = vectorConvertFromSignedFixedPointWord(auVar48,0);
          auVar48 = loadVectorLeftIndexed(0xc,0x327edc);
          auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar50 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar48 = vectorAddFloatingPoint
                              (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60
                              );
          auVar48 = vectorMultiplyAddFloatingPoint(auVar50,auVar48,auVar49);
          auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
          auVar48 = vectorSplatHalfWord(auVar48,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar48,0x248,uVar34);
          *(undefined2 *)((int)pvVar9 + 0x248) = uVar13;
          moby->state = '\r';
        }
        else {
          puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
          dVar37 = (double)MB_SetAnimation
                                     (lVar21,2,0,*(undefined4 *)((int)puVar14 + 0x21c));
          moby->state = '\t';
        }
      }
    }
    else if (((bVar1 == 7) && ((moby->field43_0x70 & 2U) != 0)) &&
            (moby->updateId == moby->animationId)) {
      puVar14[0x43] = (longlong)(int)(animationSpeed * 10.5);
      dVar37 = (double)MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar14 + 0x21c));
      moby->state = '\x04';
    }
  }
LAB_00329cd8:
  uVar2 = moby->state;
  if ((((uVar2 != '\x05' && uVar2 != '\x04') && (uVar2 != '\x06')) && (uVar2 != '\a')) &&
     (uVar2 != '\x01')) {
    M28_00326c98((double)(moby->rotation).z,lVar21);
    pvVar9 = moby->pVar;
    dVar37 = (double)(moby->rotation).z;
    dVar46 = -(double)*(float *)((int)pvVar9 + 0x268);
    dVar37 = (double)FastDiffRots(dVar37,dVar37);
    dVar46 = (double)FastWrapRot((float)dVar46,(float)-dVar37);
    dVar37 = 1.2217304706573486;
    if ((dVar46 <= 1.2217304706573486) && (dVar37 = dVar46, dVar46 < -1.2217304706573486)) {
      dVar37 = -1.2217304706573486;
    }
    OrganicDeltAng
              ((float)dVar37,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 6.2831855,(float *)((int)pvVar9 + 0x270),0x720000,
               (float *)((int)pvVar9 + 0x274));
    dVar37 = (double)FastQuaternionToEuler
                               ((double)*(float *)((int)pvVar9 + 0x270),(int)pvVar9 + 0x130,2);
  }
  M28_00326788(dVar37,lVar21);
  return;
}


