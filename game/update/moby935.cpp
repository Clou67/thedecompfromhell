// game/update/moby935.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4c0208-0x4c29c0
#include <stdlib.h>
#include "game/update/moby935.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x04c0208 (0x4ac bytes)
// inlined: FastAtan2 @0x4c03bc, FastAtan2 @0x4c055c
MobyInstance * FUN_004c0208(float param_1,float *param_2,f32 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar15;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0xe0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x19] = unaff_r29;
  puVar8[0x1a] = unaff_r30;
  puVar8[0x18] = unaff_r28;
  pMVar15 = CreateMoby(0x3a6);
  if (pMVar15 != (MobyInstance *)0x0) {
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    uVar12 = *(undefined8 *)((int)param_1 + 0x38);
    pMVar15->state = '\0';
    pMVar15->color = (int)((ulonglong)uVar12 >> 0x20);
    pMVar15->light = (int)uVar12;
    pfVar18 = (float *)pMVar15->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    pMVar15->scale = pMVar15->scale * 20.0;
    (pMVar15->pos).x = *param_3;
    (pMVar15->pos).y = param_3[1];
    (pMVar15->pos).z = param_3[2];
    (pMVar15->pos).w = param_3[3];
    *pfVar18 = *param_2 * 5.0;
    pfVar18[1] = param_2[1] * 5.0;
    pfVar18[2] = param_2[2] * 5.0;
    pfVar18[3] = param_2[3];
    auVar21 = loadVectorLeftIndexed(8,0x4c01f0);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x38,
                       ZEXT48(pfVar18));
    *(undefined4 *)((uint)(pfVar18 + 0xe) & 0xfffffffc) = uVar7;
    pfVar18[0xf] = param_1;
    pMVar15->alpha = '0';
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar2 = ABS(*param_2);
    fVar3 = ABS(param_2[1]);
    pMVar15->modeBits = pMVar15->modeBits | DRAW_TRANSPARENT_WEIRD;
    *(float *)(puVar8 + 0xf) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar16 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar4 = fVar1;
    if (0.0 < fVar5) {
      lVar13 = uVar11 - 0xd0;
      lVar17 = uVar11 - 0x44;
      lVar19 = uVar11 - 0x34;
      lVar20 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      *(float *)(puVar8 + 0x14) = fVar5;
      *(float *)((int)puVar8 + 0xa4) = fVar5;
      *(float *)((int)puVar8 + 0x9c) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar5;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar5 * fVar5;
        iVar9 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 0x44;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar5 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar5;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      fVar5 = fVar1;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar4 = (fVar5 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar15->rotation).z = fVar4;
    fVar5 = param_2[2];
    fVar2 = ABS(param_2[2]);
    fVar6 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar3 = ABS(fVar6);
    *(float *)(puVar8 + 0xe) = fVar6;
    *(float *)((int)puVar8 + 0x74) = fVar3 - fVar2;
    uVar16 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar5 >> 0x1d) & 4;
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    if (0.0 < fVar6) {
      lVar13 = uVar11 - 0xd0;
      lVar17 = uVar11 - 100;
      lVar19 = uVar11 - 0x54;
      lVar20 = 2;
      fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x11) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar6;
      *(float *)((int)puVar8 + 0x84) = fVar6;
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar2;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar6;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar6 * fVar2;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar6 * fVar6;
        iVar9 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar6 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar6;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar10 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar4;
    }
    (pMVar15->rotation).y = -fVar1;
    UpdateMobyTransform(pMVar15);
    SpawnPart_26
              (0x4104c08000000000,pMVar15,&DAT_004c01f0,0x600040ff,0x80,0xffffffffffffffff);
  }
  return pMVar15;
}


// 0x04c06d8 (0x89c bytes)
// inlined: FastAtan2 @0x4c0964, FastAtan2 @0x4c0c14
void M935_004c06d8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  void *pvVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar11;
  longlong lVar12;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x100;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar10;
  puVar9[0x22] = in_LR;
  puVar9[0x1f] = in_f31;
  puVar9[0x1e] = unaff_r31;
  fVar4 = DAT_008f4b48;
  pMVar5 = param_1->pClass;
  puVar9[0x1d] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar20 = ZEXT48(pvVar6);
  param_1->scale = pMVar5->gScale * fVar4;
  *(float *)((int)pvVar6 + 0xf4) = DAT_008f4b78 * g_FrameTime;
  param_1->unk58 = 1.0;
  dVar25 = 0.0;
  puVar9[0x1c] = unaff_r29;
  puVar9[0x1b] = unaff_r28;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar13 = MB_damage(param_1,0x330000,0);
  iVar14 = MB_HandleDamage
                     (param_1,iVar13,uVar20 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\t')) {
    iVar7 = *(int *)(iVar13 + 0x20);
    fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar6 + 0x20) = fVar4;
    iVar14 = iVar14 + ((uint)(ZERO_MASK((0x47 - (uint)*(ushort *)(iVar7 + 0xa6)))) &
                      3U - iVar14);
    if ((double)fVar4 <= dVar25) {
      iVar14 = 1;
    }
    uVar15 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f4b4c;
    fVar4 = g_FrameTimeSq;
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x84) = 0;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x80) = fVar1 * fVar4;
    fVar4 = g_FrameTime;
    if (iVar14 < 3) {
      if ((-1 < iVar14) && (0 < iVar14)) {
        fVar4 = DAT_008f4b4c * g_FrameTimeSq;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x80) = fVar4;
        fVar4 = g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008f4b5c * g_FrameTime;
        fVar1 = DAT_008f4b58;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x10) = fVar4;
        *(float *)((int)puVar9 + 0x84) = fVar1;
        *(float *)(puVar9 + 0x11) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x58;
          lVar16 = uVar10 - 0x68;
          lVar21 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xa4) = fVar3;
          *(float *)((int)puVar9 + 0x9c) = fVar3;
          *(float *)(puVar9 + 0x14) = fVar3;
          *(float *)(puVar9 + 0x13) = fVar3;
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar2;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar3;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar3 * fVar2;
          do {
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar3 * fVar3;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x68;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar3 = *pfVar17;
            fVar2 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar3;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x84,uVar20 + 0x88,uVar20 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar20 + 0x70);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 10) >> 0x3f) & 0xf9) + 0x10;
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar14 < 0xb) {
      if (iVar14 < 9) {
        *(float *)((int)pvVar6 + 0x88) = DAT_008f4b54 * g_FrameTime;
        fVar1 = DAT_008f4b50;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41300000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
        dVar22 = ABS((double)fVar4);
        dVar23 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x8c) = fVar4;
        *(float *)(puVar9 + 0x12) = fVar1;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar22 - dVar23);
        uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar24 = dVar23;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar23 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar25 < dVar24) {
          lVar11 = uVar10 - 0xf0;
          lVar19 = uVar10 - 0x38;
          lVar16 = uVar10 - 0x48;
          lVar21 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xc4) = fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar3;
          *(float *)(puVar9 + 0x18) = fVar3;
          *(float *)(puVar9 + 0x17) = fVar3;
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar2;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar3;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar3 * fVar2;
          do {
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar3 * fVar3;
            iVar14 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar19 = uVar10 - 0x48;
          pfVar17 = (float *)&DAT_007358e0;
          lVar11 = lVar12;
          lVar16 = lVar19;
          do {
            fVar3 = *pfVar17;
            fVar2 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar3;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar11 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar7 = (int)lVar19;
            lVar12 = lVar12 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0xb8)) +
                              *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                             *(float *)(iVar7 + 0xc));
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar25;
        uVar15 = *(undefined4 *)(iVar13 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar13 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar15;
        uVar15 = *(undefined4 *)(iVar13 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar15;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar10 - 0x88,uVar20 + 0x88,uVar20 + 0x8c);
        MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar20 + 0x70);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 10) >> 0x3f) & 0xf9) + 0xf;
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    dVar25 = (double)MB_randRangeFloat(180.0,240.0);
    uVar15 = FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x194) = uVar15;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  FastDecTimerS32(uVar20 + 0x194);
  if (*(int *)((int)pvVar6 + 0x194) == 0) {
    fVar4 = *(float *)((int)pvVar6 + 0x18c);
  }
  else {
    fVar4 = *(float *)((int)pvVar6 + 0x18c) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x198) = fVar4;
  pSVar8 = Splines[*(int *)((int)pvVar6 + 0x180)];
  iVar13 = MB_getTargetInArea
                     (param_1,uVar20 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if (iVar13 != 2) {
    if (param_1->state == '\x01') {
      pSVar8 = Splines[*(int *)((int)pvVar6 + 0x184)];
      fVar4 = pSVar8->points[1].x;
      fVar1 = pSVar8->points[1].y;
      fVar3 = pSVar8->points[1].z;
    }
    else {
      fVar4 = (param_1->pos).x;
      fVar1 = (param_1->pos).y;
      fVar3 = (param_1->pos).z;
    }
    fVar1 = fVar1 - *(float *)((int)pvVar6 + 0x124);
    fVar4 = fVar4 - *(float *)((int)pvVar6 + 0x120);
    if ((*(float *)((int)pvVar6 + 0x198) < SQRT(fVar4 * fVar4 + fVar1 * fVar1)) ||
       (3.0 < fVar3 - *(float *)((int)pvVar6 + 0x128))) {
      *(undefined4 *)((int)pvVar6 + 0x164) = 2;
    }
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x04c0fd8 (0x19e8 bytes)
/* Moby 935 */

void UpdateMoby_935(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  void *pvVar7;
  Spline *pSVar8;
  Spline *pSVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  MobyInstance *pMVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  GPiece<16> local_190;
  float local_180;
  float local_17c;
  undefined4 local_178;
  GPiece<16> auStack_170;
  f32 local_160;
  f32 local_15c;
  float local_158;
  f32 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  GPiece<16> auStack_140;
  float local_130;
  float local_12c;
  undefined4 local_128;
  GPiece<16> auStack_120;
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  f32 local_f0;
  f32 local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  GPiece<16> auStack_d0;
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  GPiece<16> auStack_a0;
  GPiece<64> auStack_90;
  longlong local_50;
  
  lVar14 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  dVar26 = 1.0;
  moby->unk58 = 1.0;
  M935_004c06d8();
  iVar17 = *(int *)((int)pvVar6 + 0x160);
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar6 + 0x1c0));
  pMVar19 = g_MobyInstance;
  bVar2 = moby->state;
  if (bVar2 < 9) {
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 2;
        *(undefined1 *)((int)pvVar6 + 0x28) = 1;
        *(undefined1 *)((int)pvVar6 + 0x29) = 1;
        MB_InitDefaultParams((float *)((int)pvVar6 + 0xd0));
        *(undefined4 *)((int)pvVar6 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar6 + 0xd8) = 0x3f000000;
        uVar15 = FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar6 + 0xd0) = uVar15;
        *(undefined4 *)((int)pvVar6 + 0xd4) = 0x3f000000;
        *(uint *)((int)pvVar6 + 0x108) = *(uint *)((int)pvVar6 + 0x108) | 0x10;
        uVar16 = rand();
        if ((uVar16 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        if (*(int *)((int)pvVar6 + 0x1a4) < 0) {
          if (*(int *)((int)pvVar6 + 0x188) == 0) {
            moby->state = '\x02';
            if (moby->animationId != '\0') {
              MB_SetAnimation(lVar14,0,0,5);
            }
            *(f32 *)((int)pvVar6 + 0x170) = (moby->pos).x;
            *(f32 *)((int)pvVar6 + 0x174) = (moby->pos).y;
            *(f32 *)((int)pvVar6 + 0x178) = (moby->pos).z;
            *(f32 *)((int)pvVar6 + 0x17c) = (moby->pos).w;
          }
          else {
            moby->state = '\x01';
            iVar17 = *(int *)((int)pvVar6 + 0x184);
            pSVar8 = Splines[iVar17];
            (moby->pos).x = pSVar8->points[0].x;
            (moby->pos).y = pSVar8->points[0].y;
            fVar27 = pSVar8->points[0].z;
            pSVar9 = Splines[iVar17];
            (moby->pos).w = pSVar8->points[0].w;
            (moby->pos).z = (float)((double)fVar27 - dVar26);
            *(float *)((int)pvVar6 + 0x170) = pSVar9->points[1].x;
            *(float *)((int)pvVar6 + 0x174) = pSVar9->points[1].y;
            *(float *)((int)pvVar6 + 0x178) = pSVar9->points[1].z;
            *(float *)((int)pvVar6 + 0x17c) = pSVar9->points[1].w;
          }
        }
        else {
          moby->state = '\n';
          dVar26 = (double)MB_randRangeFloat(-3.0,3.0);
          *(float *)((int)pvVar6 + 0x1a8) = (float)dVar26;
        }
      }
      else if (bVar2 < 2) {
        dVar26 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar6 + 0x184)]->points[1].x -
                                              (moby->pos).x),
                                      (double)(Splines[*(int *)((int)pvVar6 + 0x184)]->points[1].y -
                                              (moby->pos).y));
        fVar27 = OrganicDeltAng
                           ((float)dVar26,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar6 + 0x1a0));
        if ((*(int *)((int)pvVar6 + 0x164) != 2) &&
           (iVar17 = MB_randInt((double)fVar27,9), iVar17 == 0)) {
          moby->state = '\x06';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar14,0,0,5);
          }
          FUN_005e81f0((int)pvVar6 + 0x40,ZEXT48(Splines[*(int *)((int)pvVar6 + 0x184)]) + 0x20,
                       lVar14 + 0x10);
          fVar10 = g_FrameTimeSq;
          fVar3 = *(float *)((int)pvVar6 + 0x44);
          fVar4 = *(float *)((int)pvVar6 + 0x40);
          dVar26 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
          fVar5 = DAT_008f4b68 * g_FrameTime;
          pSVar8 = Splines[*(int *)((int)pvVar6 + 0x184)];
          fVar27 = (float)((double)fVar5 / dVar26);
          fVar4 = fVar4 * fVar27;
          fVar3 = fVar3 * fVar27;
          fVar27 = 0.0;
          if (0.0 - dVar26 < 0.0) {
            fVar27 = fVar4;
          }
          fVar11 = 0.0;
          if (0.0 - dVar26 < 0.0) {
            fVar11 = fVar3;
          }
          if (dVar26 - 0.0 < 0.0) {
            fVar27 = fVar4;
          }
          if (dVar26 - 0.0 < 0.0) {
            fVar11 = fVar3;
          }
          *(float *)((int)pvVar6 + 0x40) = fVar27;
          *(float *)((int)pvVar6 + 0x44) = fVar11;
          dVar26 = (double)MB_computeLobVelocity
                                     ((double)fVar5,-(double)(DAT_008f4b6c * fVar10),lVar14 + 0x10,
                                      ZEXT48(pSVar8) + 0x20);
          *(float *)((int)pvVar6 + 0x48) = (float)dVar26;
        }
      }
      else if (*(int *)((int)pvVar6 + 0x164) != 2) {
        dVar26 = (double)MB_randRangeFloat(-DAT_008f4b64,DAT_008f4b64);
        *(float *)((int)pvVar6 + 0x19c) = (float)(dVar26 * 0.01745329238474369);
        moby->state = '\x03';
        if (moby->animationId != '\x01') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar2 < 5) {
      if (bVar2 < 4) {
        dVar21 = 2.0;
        moby->unk58 = 2.0;
        fVar27 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar5 = fVar3 - *(float *)(iVar17 + 0x14), fVar4 = fVar27 - *(float *)(iVar17 + 0x10),
           DAT_008f4b60 <= SQRT(fVar4 * fVar4 + fVar5 * fVar5))) {
          dVar22 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - fVar27),
                                        (double)(*(float *)(iVar17 + 0x14) - fVar3));
          dVar22 = (double)FastWrapRot((float)dVar22,*(float *)((int)pvVar6 + 0x19c));
          OrganicDeltAng
                    ((float)dVar22,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                     g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                     (float *)((int)pvVar6 + 0x1a0));
          dVar22 = (double)BlendAnimFrame(moby);
          if ((10.0 < dVar22) && (dVar22 < 30.0)) {
            *(float *)((int)pvVar6 + 0xf4) = DAT_008f4b78 * g_FrameTime;
            fVar27 = (moby->rotation).z;
            fVar3 = fVar27 + 1.5707963;
            fVar4 = 3.1415925 - fVar27;
            if (fVar27 - (3.1415925 - fVar27) < 0.0) {
              fVar4 = fVar27;
            }
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar10 = -3.1415925 - fVar27;
            if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar27 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar27 = fVar5;
            }
            fVar3 = fVar10 * fVar10;
            local_178 = 0;
            fVar4 = fVar27 * fVar27;
            fVar12 = fVar3 * fVar3 * fVar10;
            fVar5 = fVar4 * fVar4 * fVar27;
            fVar13 = fVar3 * fVar12;
            fVar11 = fVar4 * fVar5;
            local_17c = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                        fVar13 * -0.0001980741 +
                                        fVar12 * 0.0083330255 +
                                        fVar3 * fVar10 * -0.16666657 + fVar10) * dVar21);
            local_180 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                        fVar11 * -0.0001980741 +
                                        fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27
                                        ) * dVar21);
            MB_UpdateNavMove
                      (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_180,auStack_170);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x03') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          }
        }
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          moby->state = '\x05';
        }
      }
      else {
        fVar27 = (moby->pos).x;
        dVar25 = 2.0;
        moby->unk58 = 2.0;
        dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - fVar27),
                                      (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        dVar22 = (double)BlendAnimFrame(moby);
        OrganicDeltAng
                  ((float)dVar21,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar6 + 0x1a0));
        fVar27 = (moby->rotation).z;
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
           fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10),
           SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_008f4b60)) {
          if ((dVar22 < 10.0) || (30.0 < dVar22)) {
            if (*(int *)((int)pvVar6 + 0x164) == 2) {
              moby->state = '\x05';
            }
          }
          else {
            fVar3 = fVar27 + 1.5707963;
            fVar4 = 3.1415925 - fVar27;
            if (fVar27 - (3.1415925 - fVar27) < 0.0) {
              fVar4 = fVar27;
            }
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar10 = -3.1415925 - fVar27;
            if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar27 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar27 = fVar5;
            }
            fVar3 = fVar10 * fVar10;
            fVar4 = fVar27 * fVar27;
            fVar12 = fVar3 * fVar3 * fVar10;
            fVar5 = fVar4 * fVar4 * fVar27;
            fVar13 = fVar3 * fVar12;
            fVar11 = fVar4 * fVar5;
            local_148 = 0;
            local_14c = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                        fVar13 * -0.0001980741 +
                                        fVar12 * 0.0083330255 +
                                        fVar3 * fVar10 * -0.16666657 + fVar10) * dVar25);
            local_150 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                        fVar11 * -0.0001980741 +
                                        fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27
                                        ) * dVar25);
            *(float *)((int)pvVar6 + 0xf4) = DAT_010e47cc * g_FrameTime;
            MB_UpdateNavMove
                      (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_150,auStack_140);
          }
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
          }
        }
        local_160 = (moby->pos).x;
        local_15c = (moby->pos).y;
        local_154 = (moby->pos).w;
        local_158 = (moby->pos).z + 0.333;
        DamageSphereAtPos
                  ((double)(DAT_008f4b48 * 0.6),dVar26,dVar26,lVar14,&local_160,&DAT_004c0f74,1,
                   0x8f0000,0,0,1);
      }
    }
    else if (bVar2 < 6) {
      fVar27 = (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = fVar27 - *(float *)((int)pvVar6 + 0x174);
      fVar5 = fVar3 - *(float *)((int)pvVar6 + 0x170);
      if (dVar26 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x170) - fVar3),
                                        (double)(*(float *)((int)pvVar6 + 0x174) - fVar27));
          OrganicDeltAng
                    ((float)dVar21,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                     g_FrameTime * 12.566371,&(moby->rotation).z,0x4c0f74,
                     (float *)((int)pvVar6 + 0x1a0));
          dVar21 = (double)BlendAnimFrame(moby);
          if (((moby->animationId == '\x01') && (10.0 <= dVar21)) && (dVar21 <= 30.0)) {
            fVar27 = (moby->rotation).z;
            fVar3 = fVar27 + 1.5707963;
            fVar4 = 3.1415925 - fVar27;
            if (fVar27 - (3.1415925 - fVar27) < 0.0) {
              fVar4 = fVar27;
            }
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar10 = -3.1415925 - fVar27;
            if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar27 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar27 = fVar5;
            }
            fVar3 = fVar10 * fVar10;
            fVar4 = fVar27 * fVar27;
            fVar12 = fVar3 * fVar3 * fVar10;
            local_128 = 0;
            fVar5 = fVar4 * fVar4 * fVar27;
            fVar13 = fVar3 * fVar12;
            fVar11 = fVar4 * fVar5;
            local_12c = (fVar3 * fVar13 * 2.601887e-06 +
                        fVar13 * -0.0001980741 +
                        fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) * 2.0;
            local_130 = (fVar4 * fVar11 * 2.601887e-06 +
                        fVar11 * -0.0001980741 +
                        fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27) * 2.0;
            MB_UpdateNavMove
                      (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_130,auStack_120);
          }
        }
        else {
          dVar26 = (double)MB_randRangeFloat(-DAT_008f4b64,DAT_008f4b64);
          *(float *)((int)pvVar6 + 0x19c) = (float)(dVar26 * 0.01745329238474369);
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        bVar1 = moby->animationId != '\x01';
        if (bVar1) {
          if (bVar1) {
            MB_SetAnimation(lVar14,1,0,5);
          }
        }
        else if (bVar1) {
          MB_SetAnimation(lVar14,1,0,5);
        }
      }
    }
    else if (bVar2 < 8) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x48);
      fVar27 = -(DAT_008f4b6c * g_FrameTimeSq - *(float *)((int)pvVar6 + 0x48));
      *(float *)((int)pvVar6 + 0x48) = fVar27;
      if ((fVar27 < 0.0) &&
         (dVar21 = (double)GetGroundZ(0x3fe0000000000000,local_190,0),
         (double)(moby->pos).z < dVar21)) {
        if (moby->state == '\x06') {
          (moby->pos).z = (float)dVar21;
          moby->state = '\x02';
        }
        else {
          moby->state = '\x01';
          (moby->pos).z = (float)(dVar21 - dVar26);
        }
      }
    }
    else {
      uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
      if ((uVar16 & 0x40) == 0) {
        if ((uVar16 & 0x120) == 0) {
          if (*(short *)((int)pvVar6 + 0xae) == 2) {
            moby->unk58 = DAT_008f4b74;
          }
        }
        else {
          DeleteMoby(moby);
        }
      }
      else {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar2 == 0x10) {
    lVar20 = lVar14 + 0x10;
    MB_PlatformLocalToWorld
              (lVar14,g_MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar20,lVar14 + 0x40,lVar20,
               lVar14 + 0x40);
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar16 & 0x160) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar14,lVar20,&DAT_004c0f74,
                 0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (bVar2 == 0xf) {
    lVar20 = lVar14 + 0x10;
    MB_PlatformLocalToWorld
              (lVar14,g_MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar20,lVar14 + 0x40,lVar20,
               lVar14 + 0x40);
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70));
    if ((uVar16 & 0x40) == 0) {
      if ((uVar16 & 0x120) == 0) {
        if (*(short *)((int)pvVar6 + 0xae) == 2) {
          moby->unk58 = DAT_008f4b74;
        }
      }
      else {
        DeleteMoby(moby);
      }
    }
    else {
      iVar17 = PointInsideComplexPoly
                         ((Vec4 *)lVar20,(Vec4 *)Splines[*(int *)((int)pvVar6 + 0x180)]->points,
                          Splines[*(int *)((int)pvVar6 + 0x180)]->cnt);
      if (iVar17 == 0) {
        DeleteMoby(moby);
      }
      else {
        moby->state = '\f';
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,0,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar2 == 0xe) {
    dVar25 = 2.0;
    pMVar19 = g_MobyInstance + *(int *)((int)pvVar6 + 0x1a4);
    moby->unk58 = 2.0;
    MB_PlatformLocalToWorld
              (lVar14,pMVar19,lVar14 + 0x10,lVar14 + 0x40,lVar14 + 0x10,lVar14 + 0x40);
    dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    dVar22 = (double)BlendAnimFrame(moby);
    OrganicDeltAng
              ((float)dVar21,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar6 + 0x1a0));
    fVar27 = (moby->rotation).z;
    if (((moby->field43_0x70 & 2U) == 0) ||
       (fVar3 = (moby->pos).y - *(float *)(iVar17 + 0x14),
       fVar4 = (moby->pos).x - *(float *)(iVar17 + 0x10),
       SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_008f4b60)) {
      if ((dVar22 < 10.0) || (30.0 < dVar22)) {
        if (*(int *)((int)pvVar6 + 0x164) == 2) {
          moby->state = '\x05';
        }
      }
      else {
        fVar3 = fVar27 + 1.5707963;
        fVar4 = 3.1415925 - fVar27;
        if (fVar27 - (3.1415925 - fVar27) < 0.0) {
          fVar4 = fVar27;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar10 = -3.1415925 - fVar27;
        if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
          fVar10 = fVar4;
        }
        fVar27 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar27 = fVar5;
        }
        fVar3 = fVar10 * fVar10;
        fVar4 = fVar27 * fVar27;
        fVar12 = fVar3 * fVar3 * fVar10;
        fVar5 = fVar4 * fVar4 * fVar27;
        fVar13 = fVar3 * fVar12;
        fVar11 = fVar4 * fVar5;
        local_a8 = 0;
        local_ac = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                   fVar13 * -0.0001980741 +
                                   fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) *
                          dVar25);
        local_b0 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                   fVar11 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27) *
                          dVar25);
        *(float *)((int)pvVar6 + 0xf4) = DAT_010e47cc * g_FrameTime;
        MB_UpdateNavMove
                  (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_b0,auStack_a0);
      }
    }
    else {
      moby->state = '\r';
      if (moby->animationId != '\x01') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
      }
    }
    local_c0 = (moby->pos).x;
    local_bc = (moby->pos).y;
    local_b4 = (moby->pos).w;
    local_b8 = (moby->pos).z + 0.333;
    DamageSphereAtPos
              ((double)(DAT_008f4b48 * 0.6),dVar26,0,lVar14,&local_c0,&DAT_004c0f74,1);
  }
  else if (bVar2 == 0xd) {
    MB_PlatformLocalToWorld
              (lVar14,g_MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar14 + 0x10,lVar14 + 0x40,
               lVar14 + 0x10,lVar14 + 0x40);
    fVar27 = (moby->pos).x;
    dVar21 = 2.0;
    moby->unk58 = 2.0;
    fVar3 = (moby->pos).y;
    if (((moby->field43_0x70 & 2U) == 0) ||
       (fVar5 = fVar3 - *(float *)(iVar17 + 0x14), fVar4 = fVar27 - *(float *)(iVar17 + 0x10),
       DAT_008f4b60 <= SQRT(fVar4 * fVar4 + fVar5 * fVar5))) {
      dVar22 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - fVar27),
                                    (double)(*(float *)(iVar17 + 0x14) - fVar3));
      dVar22 = (double)FastWrapRot((float)dVar22,*(float *)((int)pvVar6 + 0x19c));
      OrganicDeltAng
                ((float)dVar22,g_FrameTimeSq * 8.726646,g_FrameTimeSq * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar6 + 0x1a0));
      dVar22 = (double)BlendAnimFrame(moby);
      if ((10.0 < dVar22) && (dVar22 < 30.0)) {
        fVar27 = (moby->rotation).z;
        fVar3 = fVar27 + 1.5707963;
        fVar4 = 3.1415925 - fVar27;
        if (fVar27 - (3.1415925 - fVar27) < 0.0) {
          fVar4 = fVar27;
        }
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar10 = -3.1415925 - fVar27;
        if ((-3.1415925 - fVar27) - fVar4 < 0.0) {
          fVar10 = fVar4;
        }
        fVar27 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar27 = fVar5;
        }
        fVar3 = fVar10 * fVar10;
        local_d8 = 0;
        fVar4 = fVar27 * fVar27;
        fVar12 = fVar3 * fVar3 * fVar10;
        fVar5 = fVar4 * fVar4 * fVar27;
        fVar13 = fVar3 * fVar12;
        fVar11 = fVar4 * fVar5;
        local_dc = (float)((double)(fVar3 * fVar13 * 2.601887e-06 +
                                   fVar13 * -0.0001980741 +
                                   fVar12 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10) *
                          dVar21);
        local_e0 = (float)((double)(fVar4 * fVar11 * 2.601887e-06 +
                                   fVar11 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar4 * fVar27 * -0.16666657 + fVar27) *
                          dVar21);
        MB_UpdateNavMove
                  (dVar26,moby,(MobyInstance *)((int)pvVar6 + 0xd0),&local_e0,auStack_d0);
      }
    }
    else {
      moby->state = '\x0e';
      if (moby->animationId != '\x03') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
      }
    }
    if (*(int *)((int)pvVar6 + 0x164) == 2) {
      moby->state = '\f';
    }
  }
  else if (bVar2 == 0xc) {
    MB_PlatformLocalToWorld
              (lVar14,g_MobyInstance + *(int *)((int)pvVar6 + 0x1a4),lVar14 + 0x10,lVar14 + 0x40,
               lVar14 + 0x10,lVar14 + 0x40);
    if (*(int *)((int)pvVar6 + 0x164) != 2) {
      dVar26 = (double)MB_randRangeFloat(-DAT_008f4b64,DAT_008f4b64);
      *(float *)((int)pvVar6 + 0x19c) = (float)(dVar26 * 0.01745329238474369);
      moby->state = '\r';
      if (moby->animationId != '\x01') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar2 == 0xb) {
    fVar27 = (moby->pos).x + *(float *)((int)pvVar6 + 0x40);
    pvVar7 = g_MobyInstance[*(int *)((int)pvVar6 + 0x1a4)].pVar;
    (moby->pos).x = fVar27;
    fVar3 = (moby->pos).y + *(float *)((int)pvVar6 + 0x44);
    (moby->pos).y = fVar3;
    fVar4 = (moby->pos).z + *(float *)((int)pvVar6 + 0x48);
    (moby->pos).z = fVar4;
    (moby->pos).x = fVar27 + *(float *)((int)pvVar7 + 0x70);
    (moby->pos).y = fVar3 + *(float *)((int)pvVar7 + 0x74);
    (moby->pos).z = fVar4 + *(float *)((int)pvVar7 + 0x78);
    fVar27 = -(DAT_008f4b6c * g_FrameTimeSq - *(float *)((int)pvVar6 + 0x48));
    *(float *)((int)pvVar6 + 0x48) = fVar27;
    if (fVar27 < 0.0) {
      local_f0 = (moby->pos).x;
      local_e8 = (float)((double)(moby->pos).z + dVar26);
      local_ec = (moby->pos).y;
      local_e4 = (moby->pos).w;
      dVar26 = (double)GetGroundZ(0x3fe0000000000000,&local_f0,0);
      if ((double)(moby->pos).z < dVar26) {
        moby->state = '\f';
      }
    }
  }
  else if (bVar2 == 10) {
    if (*(int *)((int)pvVar6 + 0x164) != 2) {
      iVar17 = *(int *)((int)pvVar6 + 0x1a4);
      FastNormalizeRMtx4(auStack_90,&g_MobyInstance[iVar17].transform);
      local_110 = (moby->pos).x - pMVar19[iVar17].pos.x;
      local_104 = (moby->pos).w;
      local_10c = (moby->pos).y - pMVar19[iVar17].pos.y;
      local_108 = (moby->pos).z - pMVar19[iVar17].pos.z;
      FUN_005e825c(&local_110,&local_110,auStack_90);
      uVar16 = (int)*(uint *)((int)pvVar6 + 0x1a8) >> 0x1f;
      iVar18 = FLOAT_ORDER(local_110);
      if ((iVar18 < (int)((uVar16 >> 1 ^ *(uint *)((int)pvVar6 + 0x1a8)) - uVar16)) &&
         (-0x40466666 < iVar18)) {
        dVar26 = 0.0;
        fVar27 = -2.0;
        if (0.0 - local_10c < 0.0) {
          fVar27 = 2.0;
        }
        fVar3 = pMVar19[iVar17].transform.v1.z;
        fVar4 = pMVar19[iVar17].transform.v0.z;
        fVar5 = pMVar19[iVar17].transform.v2.z;
        local_f4 = pMVar19[iVar17].transform.v0.w * local_110 +
                   pMVar19[iVar17].transform.v1.w * fVar27 + pMVar19[iVar17].transform.v2.w +
                   local_f4;
        local_100 = pMVar19[iVar17].transform.v0.x * local_110 +
                    pMVar19[iVar17].transform.v1.x * fVar27 + pMVar19[iVar17].transform.v2.x +
                    pMVar19[iVar17].pos.x;
        local_fc = pMVar19[iVar17].transform.v0.y * local_110 +
                   pMVar19[iVar17].transform.v1.y * fVar27 + pMVar19[iVar17].transform.v2.y +
                   pMVar19[iVar17].pos.y;
        local_f8 = pMVar19[iVar17].pos.z;
        moby->state = '\v';
        local_f8 = fVar4 * local_110 + fVar3 * fVar27 + fVar5 + local_f8;
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar14,0,0,5);
        }
        fVar5 = local_100 - (moby->pos).x;
        *(float *)((int)pvVar6 + 0x40) = fVar5;
        fVar3 = local_fc - (moby->pos).y;
        *(float *)((int)pvVar6 + 0x44) = fVar3;
        *(float *)((int)pvVar6 + 0x48) = local_f8 - (moby->pos).z;
        dVar24 = (double)SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        *(float *)((int)pvVar6 + 0x4c) = local_f4;
        fVar4 = DAT_008f4b68 * g_FrameTime;
        fVar27 = (float)((double)fVar4 / dVar24);
        dVar22 = (double)(fVar5 * fVar27);
        dVar25 = (double)(fVar3 * fVar27);
        dVar21 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar21 = dVar22;
        }
        dVar23 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar23 = dVar25;
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar21 = dVar22;
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar23 = dVar25;
        }
        *(float *)((int)pvVar6 + 0x40) = (float)dVar21;
        *(float *)((int)pvVar6 + 0x44) = (float)dVar23;
        dVar26 = (double)MB_computeLobVelocity
                                   ((double)fVar4,-(double)(DAT_008f4b6c * g_FrameTimeSq),
                                    lVar14 + 0x10,&local_100,0x8f0000,&DAT_00720000,0);
        *(float *)((int)pvVar6 + 0x48) = (float)dVar26;
      }
    }
  }
  else if ((bVar2 == 9) &&
          (uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x70)),
          (uVar16 & 0x160) != 0)) {
    MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar14,lVar14 + 0x10,&DAT_004c0f74,
               0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


