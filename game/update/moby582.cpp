// game/update/moby582.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x3d0b20-0x3d14d8
#include "game/update/moby582.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby580.h"
#include "game/update/moby806.h"
#include "game/update/moby849.h"

// 0x03d0b20 (0x278 bytes)
// inlined: FastAtan2 @0x3d0c60
void FUN_003d0b20(MobyInstance *param_1,f32 *param_2,float *param_3)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xc0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar13;
  puVar9[0x1a] = in_LR;
  puVar9[0x15] = unaff_r29;
  MVar5 = param_1->modeBits;
  puVar9[0x14] = unaff_r28;
  pvVar6 = param_1->pVar;
  puVar9[0x17] = unaff_r31;
  uVar1 = param_1->animationId;
  puVar9[0x16] = unaff_r30;
  param_1->modeBits =
       MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
  param_1->state = '\x1b';
  if (uVar1 != '\v') {
    MB_SetAnimation(param_1,0xb,0,1);
  }
  (param_1->pos).x = *param_2;
  (param_1->pos).y = param_2[1];
  (param_1->pos).z = param_2[2];
  (param_1->pos).w = param_2[3];
  *(float *)((int)pvVar6 + 0x40) = *param_3;
  *(float *)((int)pvVar6 + 0x44) = param_3[1];
  *(float *)((int)pvVar6 + 0x48) = param_3[2];
  *(float *)((int)pvVar6 + 0x4c) = param_3[3];
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar3 = ABS(*param_3);
  fVar10 = ABS(param_3[1]);
  *(float *)(puVar9 + 0xe) = fVar3 - fVar10;
  fVar2 = 0.0;
  uVar15 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar8 >> 0x1d) & 4;
  fVar7 = fVar3;
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar7 = fVar10;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar8 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar10 = fVar3;
  }
  if (0.0 < fVar7) {
    lVar18 = uVar13 - 0xb0;
    lVar16 = uVar13 - 0x3c;
    lVar17 = uVar13 - 0x4c;
    lVar20 = 2;
    fVar7 = (fVar10 - fVar7) / (fVar10 + fVar7);
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar9 + 0x10) = fVar7;
    *(float *)(puVar9 + 0xf) = fVar7;
    *(float *)((int)puVar9 + 0x7c) = fVar7;
    *(float *)((int)puVar9 + 0x74) = fVar7;
    fVar7 = fVar3 * fVar3;
    *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) * fVar3;
    *(float *)((int)puVar9 + 0x7c) = *(float *)((int)puVar9 + 0x7c) * fVar7;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar7 * fVar3;
    do {
      *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar7 * fVar7;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x4c;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar14;
    do {
      fVar7 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 0x74) * fVar7;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    do {
      iVar11 = (int)lVar14;
      iVar12 = (int)lVar18;
      lVar14 = lVar14 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar2 = fVar2 + *(float *)(iVar11 + 0x74) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
              *(float *)(iVar12 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar8;
  }
  (param_1->rotation).z = fVar2;
  UpdateMobyTransform(param_1);
  return;
}


// 0x03d0d98 (0x58 bytes)
void M582_003d0d98(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}


// 0x03d0df0 (0x8c bytes)
void M582_003d0df0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x288);
    if (-1 < iVar1) {
      *(int *)((int)g_MobyInstance[iVar1].pVar + 0x14c) =
           *(int *)((int)g_MobyInstance[iVar1].pVar + 0x14c) + -1;
    }
  }
  return;
}


// 0x03d0e7c (0x58 bytes)
void M582_003d0e7c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}


// 0x03d0ed4 (0x38 bytes)
void M582_003d0ed4(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}


// 0x03d0f0c (0x40 bytes)
longlong M582_003d0f0c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03d0f50 (0x1d0 bytes)
void M582_003d0f50(MobyInstance *param_1)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  
  pvVar3 = param_1->pVar;
  if (param_1->group == 0xff) {
    pMVar7 = (MobyInstance *)0x0;
  }
  else {
    pMVar7 = (MobyInstance *)0x0;
    puVar6 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
    do {
      uVar4 = *puVar6 & 0x7fff;
      if (((g_MobyInstance[uVar4].oClass == SANDSHARK_SPAWNER) && (g_MobyInstance[uVar4].state < 0x7f))
         && ((pMVar7 == (MobyInstance *)0x0 ||
             (uVar5 = MB_randInt(0xff), (uVar5 & 1) != 0)))) {
        pMVar7 = g_MobyInstance + uVar4;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  *(MobyInstance **)((int)pvVar3 + 0x27c) = pMVar7;
  if (pMVar7 == (MobyInstance *)0x0) {
    M580_003cd150(param_1,0,1,DAT_0084643c);
    M580_003cd150(param_1,2,3,DAT_00846438);
    M580_003cd150(param_1,4,5,DAT_00846440);
    M580_003cd150(param_1,6,7,DAT_00846440);
    M580_003cd150(param_1,8,9,DAT_00846444);
    DeleteMoby(param_1);
  }
  else {
    param_1->state = '\x1a';
    param_1->unk58 = 0.0;
    (param_1->pos).x = *(f32 *)((int)pvVar3 + 0x220);
    (param_1->pos).y = *(f32 *)((int)pvVar3 + 0x224);
    fVar1 = *(float *)((int)pvVar3 + 0x228);
    (param_1->pos).z = fVar1;
    (param_1->pos).w = *(f32 *)((int)pvVar3 + 0x22c);
    param_1->collision = (ushort *)0x0;
    (param_1->pos).z = fVar1 - 10.0;
  }
  return;
}


// 0x03d1128 (0x50 bytes)
void M582_003d1128(void)

{
  undefined8 in_r0;
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x3d1120);
  auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  DAT_00846494 = 0x10000;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010c9f80 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffff9f80,0x10d0000);
  return;
}


// 0x03d1180 (0x358 bytes)
/* Moby 582 */

void UpdateMoby_582(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  
  piVar19 = (int *)moby->pVar;
  if (moby->state == 0) {
    iVar10 = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
    iVar9 = DAT_00a1a860;
    do {
      iVar11 = 0;
      if (0 < iVar9) {
        iVar18 = iVar10 * 8;
        iVar16 = 0;
        piVar15 = piVar19 + iVar10 * 2 + 8;
        piVar14 = piVar19 + iVar10 * 2 + 1;
        piVar13 = piVar19 + iVar10 * 2 + 9;
        iVar17 = iVar9;
        do {
          iVar7 = DAT_00a1a85c;
          iVar2 = DAT_00a1a85c + iVar16;
          if (*(int *)(iVar2 + 0xc) != 0) {
            *(int *)((int)piVar19 + iVar18) = iVar2;
            iVar20 = 0;
            *piVar15 = *(int *)(iVar2 + 0xc);
            iVar12 = iVar7;
            if (0 < iVar17) {
              do {
                if (*(int *)(iVar12 + 0xc) != 0) {
                  iVar1 = *(int *)(iVar2 + 0x10);
                  pfVar5 = (float *)(*(int **)(iVar12 + 0x10) + **(int **)(iVar12 + 0x10) * 4);
                  fVar3 = *(float *)(iVar1 + 0x14) - pfVar5[1];
                  fVar4 = *(float *)(iVar1 + 0x10) - *pfVar5;
                  fVar6 = *(float *)(iVar1 + 0x18) - pfVar5[2];
                  if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
                    piVar15 = piVar15 + 2;
                    iVar7 = iVar7 + iVar20 * 0x20;
                    iVar18 = iVar18 + 8;
                    iVar10 = iVar10 + 1;
                    *piVar14 = iVar7;
                    piVar14 = piVar14 + 2;
                    *piVar13 = *(int *)(iVar7 + 0xc);
                    *(undefined4 *)(iVar7 + 0xc) = 0;
                    piVar13 = piVar13 + 2;
                    *(undefined4 *)(DAT_00a1a85c + iVar16 + 0xc) = 0;
                    iVar9 = DAT_00a1a860;
                    iVar17 = DAT_00a1a860;
                    break;
                  }
                }
                iVar20 = iVar20 + 1;
                iVar12 = iVar12 + 0x20;
              } while (iVar20 < iVar17);
            }
          }
          iVar11 = iVar11 + 1;
          iVar16 = iVar16 + 0x20;
        } while (iVar11 < iVar17);
      }
    } while (iVar10 < 4);
    iVar9 = 0;
    do {
      FUN_0046615c(&Cuboids[piVar19[0x10]].pos);
      iVar9 = iVar9 + 1;
      piVar19 = piVar19 + 1;
    } while (iVar9 < 2);
  }
  else if (moby->state < 2) {
    iVar9 = 0;
    DAT_00969eaa = 5;
    do {
      if ((g_heroStateType != 0xf) ||
         ((DAT_0096a240 != *(int *)(*piVar19 + 0x10) &&
          (DAT_0096a240 != *(int *)(piVar19[1] + 0x10))))) {
        iVar10 = *piVar19;
        fVar3 = g_heroPosition.y - *(float *)(*(int *)(iVar10 + 0x10) + 0x14);
        fVar4 = g_heroPosition.y - *(float *)(*(int *)(piVar19[1] + 0x10) + 0x14);
        fVar6 = g_heroPosition.x - *(float *)(*(int *)(iVar10 + 0x10) + 0x10);
        fVar8 = g_heroPosition.x - *(float *)(*(int *)(piVar19[1] + 0x10) + 0x10);
        if (SQRT(fVar8 * fVar8 + fVar4 * fVar4) <= SQRT(fVar6 * fVar6 + fVar3 * fVar3)) {
          *(undefined4 *)(iVar10 + 0xc) = 0;
          *(int *)(piVar19[1] + 0xc) = piVar19[9];
        }
        else {
          *(int *)(iVar10 + 0xc) = piVar19[8];
          *(undefined4 *)(piVar19[1] + 0xc) = 0;
        }
      }
      iVar9 = iVar9 + 1;
      piVar19 = piVar19 + 2;
    } while (iVar9 < 4);
  }
  return;
}


