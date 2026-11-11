// game/update/moby108.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1b7a68-0x1b83a8
#include "game/update/moby108.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby129.h"
#include "idol/fastfunc.h"

// 0x01b7a68 (0xd0 bytes)
void M1131_001b7a68(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  double dVar3;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar3 = 0.0;
  local_1c = 0.0;
  uVar2 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,uVar2,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if (((local_20 != 1) && (param_1->state != '\b' && param_1->state != '\a')) &&
     (local_1c = *(float *)((int)pvVar1 + 0x20) - local_1c,
     *(float *)((int)pvVar1 + 0x20) = local_1c, (double)local_1c <= dVar3)) {
    param_1->state = '\a';
  }
  param_1->damage = -1;
  return;
}


// 0x01b7b60 (0x848 bytes)
// inlined: FastAtan2 @0x1b806c
/* Moby 108 */

void UpdateMoby_108(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  void *pvVar7;
  int iVar8;
  MobyClass *pMVar9;
  u16 *puVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  float fVar33;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x140;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x2a] = in_LR;
  puVar12[0x27] = in_f31;
  puVar12[0x26] = unaff_r31;
  puVar12[0x25] = unaff_r30;
  pvVar7 = moby->pVar;
  uVar23 = ZEXT48(pvVar7);
  dVar28 = 0.0;
  puVar12[0x24] = unaff_r29;
  *(undefined4 *)(puVar12 + 0x1c) = 0;
  uVar15 = MB_damage(moby,0x330000,0);
  MB_HandleDamage(moby,uVar15,uVar23 + 0x20,0,(int)puVar12 + 0xdc,puVar12 + 0x1c,0,4);
  if (((*(int *)((int)puVar12 + 0xdc) != 1) && (moby->state != '\b' && moby->state != '\a')) &&
     (fVar33 = *(float *)((int)pvVar7 + 0x20) - *(float *)(puVar12 + 0x1c),
     *(float *)((int)pvVar7 + 0x20) = fVar33, (double)fVar33 <= dVar28)) {
    moby->state = '\a';
  }
  moby->damage = -1;
  bVar1 = moby->state;
  pSVar11 = Splines[*(int *)((int)pvVar7 + 0x70)];
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        fVar2 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar7 + 0x80) = fVar2;
        *(f32 *)((int)pvVar7 + 0x84) = (moby->pos).y;
        *(f32 *)((int)pvVar7 + 0x88) = (moby->pos).z;
        *(f32 *)((int)pvVar7 + 0x8c) = (moby->pos).w;
        *(f32 *)((int)pvVar7 + 0x8c) = (moby->rotation).z;
      }
      else {
        iVar16 = MB_IsPntInCuboid
                           ((Vec4 *)&g_heroCGPos,(longlong)*(int *)((int)pvVar7 + 0x90));
        if (iVar16 != 0) {
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          moby->state = '\x02';
          auVar30 = loadVectorLeftIndexed(0x78,uVar23);
          auVar29 = loadVectorRightIndexed(0x88,uVar23);
          auVar29 = vectorConvertFromSignedFixedPointWord(auVar30 | auVar29,0);
          auVar30 = loadVectorLeftIndexed(4,0x1b7b38);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorAddFloatingPoint
                              (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                              );
          auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                              uVar23);
          *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        }
      }
    }
    else if (bVar1 < 3) {
      iVar16 = FastDecTimerS32(uVar23 + 0xa0);
      if (iVar16 != 0) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        moby->state = '\x03';
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(8,0x1b7b38);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        *(f32 *)((int)pvVar7 + 0xa4) = (moby->rotation).z;
      }
    }
    else if (bVar1 < 4) {
      iVar16 = *(int *)((int)pvVar7 + 0xa0) + -1;
      *(int *)((int)pvVar7 + 0xa0) = iVar16;
      puVar12[0x21] = (longlong)iVar16;
      M108_001b78c0
                ((double)(longlong)puVar12[0x21],(double)(longlong)(animationSpeed * 30.5),moby,
                 uVar23 + 0x80,pSVar11->points);
      if (*(int *)((int)pvVar7 + 0xa0) == 0) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        *(undefined4 *)((int)pvVar7 + 0x98) = 1;
        fVar2 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar7 + 0x9c) = 0;
        *(f32 *)((int)pvVar7 + 0xa4) = fVar2;
        moby->state = '\x06';
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(8,0x1b7b38);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
      }
    }
    else {
      iVar16 = *(int *)((int)pvVar7 + 0xa0) + -1;
      *(int *)((int)pvVar7 + 0xa0) = iVar16;
      puVar12[0x21] = (longlong)iVar16;
      M108_001b78c0
                ((double)(longlong)puVar12[0x21],(double)(longlong)(animationSpeed * 90.5),moby,
                 pSVar11->points + *(int *)((int)pvVar7 + 0x9c),
                 pSVar11->points + *(int *)((int)pvVar7 + 0x98));
      if (*(int *)((int)pvVar7 + 0xa0) == 0) {
        iVar16 = *(int *)((int)pvVar7 + 0x9c);
        iVar8 = *(int *)((int)pvVar7 + 0x98);
        if (iVar16 < iVar8) {
          *(int *)((int)pvVar7 + 0x98) = iVar8 + 1;
          *(int *)((int)pvVar7 + 0x9c) = iVar16 + 1;
          if (iVar8 + 1 == pSVar11->cnt) {
            *(int *)((int)pvVar7 + 0x98) = iVar16;
          }
        }
        else {
          *(int *)((int)pvVar7 + 0x98) = iVar8 + -1;
          *(int *)((int)pvVar7 + 0x9c) = iVar16 + -1;
          if (iVar8 + -1 == -1) {
            *(undefined4 *)((int)pvVar7 + 0x98) = 1;
          }
        }
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        moby->state = '\x06';
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(8,0x1b7b38);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        *(f32 *)((int)pvVar7 + 0xa4) = (moby->rotation).z;
      }
    }
  }
  else if (bVar1 < 8) {
    if (5 < bVar1) {
      if (bVar1 < 7) {
        iVar16 = *(int *)((int)pvVar7 + 0xa0) + -1;
        *(int *)((int)pvVar7 + 0xa0) = iVar16;
        fVar33 = pSVar11->points[*(int *)((int)pvVar7 + 0x98)].x - (moby->pos).x;
        fVar3 = pSVar11->points[*(int *)((int)pvVar7 + 0x98)].y - (moby->pos).y;
        dVar27 = ABS((double)fVar33);
        dVar25 = ABS((double)fVar3);
        *(float *)(puVar12 + 0x1a) = fVar33;
        *(float *)((int)puVar12 + 0xd4) = fVar3;
        *(float *)(puVar12 + 0x1b) = (float)(dVar27 - dVar25);
        uVar19 = (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)(puVar12 + 0x1a));
        if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
          dVar26 = dVar25;
        }
        fVar33 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar12 + 0xd4));
        if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
          dVar25 = dVar27;
        }
        fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar28 < dVar26) {
          lVar21 = uVar14 - 0x130;
          lVar20 = uVar14 - 0x5c;
          lVar18 = uVar14 - 0x4c;
          lVar24 = 2;
          fVar4 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1e) = fVar4;
          *(float *)(puVar12 + 0x1d) = fVar4;
          *(float *)((int)puVar12 + 0xec) = fVar4;
          *(float *)((int)puVar12 + 0xe4) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar5;
          *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar4;
          *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar21 + 0xe4) = *(float *)((int)lVar21 + 0xd4) * fVar4 * fVar4;
            iVar8 = (int)lVar20;
            lVar21 = lVar21 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = uVar14 - 0x5c;
          pfVar22 = (float *)&DAT_007358e0;
          lVar24 = 4;
          lVar18 = lVar21;
          lVar20 = lVar17;
          do {
            fVar4 = *pfVar22;
            fVar5 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar20 + 0xe4) = *(float *)((int)lVar20 + 0xe4) * fVar4;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar18 = 2;
          do {
            iVar8 = (int)lVar17;
            iVar13 = (int)lVar21;
            lVar17 = lVar17 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar8 + 0xe4)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar33 + fVar3);
        }
        puVar12[0x21] = (longlong)iVar16;
        dVar28 = (double)M108_001b77f0
                                   ((double)*(float *)((int)pvVar7 + 0xa4),dVar28,
                                    (double)(longlong)puVar12[0x21],
                                    (double)(longlong)(animationSpeed * 30.5),moby);
        (moby->rotation).z = (float)dVar28;
        if (*(int *)((int)pvVar7 + 0xa0) == 0) {
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          moby->state = '\x04';
          auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0xc,0x1b7b38);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar29);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                              uVar23);
          *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        }
      }
      else {
        fVar2 = (moby->pos).y;
        *(f32 *)(puVar12 + 0x18) = (moby->pos).x;
        fVar6 = (moby->pos).w;
        *(f32 *)((int)puVar12 + 0xc4) = fVar2;
        *(f32 *)((int)puVar12 + 0xcc) = fVar6;
        fVar33 = (moby->pos).z;
        puVar12[0x12] = 0xffffffffffffffff;
        puVar12[0x14] = 0;
        puVar12[0x15] = 7;
        puVar12[0x16] = 0xffffffffffffffff;
        puVar12[0x17] = 0;
        *(float *)(puVar12 + 0x19) = fVar33 + 0.75;
        MB_genericExplosion
                  (dVar28,dVar28,0x3ff0000000000000,0x3fe0000000000000,0x3ff0000000000000,
                   0x3fe0000000000000,0x401c000000000000,moby,&DAT_00a15d30,uVar14 - 0x80,
                   &DAT_001b7b38,7,7,10,0x14);
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->state = '\b';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      }
    }
  }
  else if (bVar1 < 9) {
    if (*(int *)((int)pvVar7 + 0x74) != 0) {
      *(int *)((int)pvVar7 + 0x74) = *(int *)((int)pvVar7 + 0x74) + -1;
      (moby->pos).x = *(f32 *)((int)pvVar7 + 0x80);
      (moby->pos).y = *(f32 *)((int)pvVar7 + 0x84);
      fVar33 = *(float *)((int)pvVar7 + 0x88);
      (moby->pos).z = fVar33;
      (moby->pos).w = *(f32 *)((int)pvVar7 + 0x8c);
      (moby->rotation).z = *(f32 *)((int)pvVar7 + 0x8c);
      pMVar9 = moby->pClass;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      (moby->pos).z = fVar33 - 3.0;
      *(undefined4 *)((int)pvVar7 + 0x98) = 0;
      moby->enabled = '\x01';
      puVar10 = pMVar9->collision;
      moby->state = '\t';
      moby->collision = puVar10;
    }
  }
  else if ((bVar1 < 10) &&
          (fVar33 = Delt(*(float *)((int)pvVar7 + 0x88),g_FrameTime * 2.0,
                                   &(moby->pos).z), (double)fVar33 == dVar28)) {
    moby->state = '\x01';
  }
  return;
}


