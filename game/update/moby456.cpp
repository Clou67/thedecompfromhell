// game/update/moby456.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x38b800-0x38c84c
#include "game/update/moby456.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby487.h"
#include "idol/fastfunc.h"

// 0x038b800 (0x14 bytes)
void M456_0038b800(void)

{
  DAT_00842100 = 0x10000;
  return;
}


// 0x038b850 (0xffc bytes)
// inlined: FastAtan2 @0x38bd68, FastAtan2 @0x38bfa4, FastAtan2 @0x38c40c, FastAtan2 @0x38c644
/* Moby 456 */

void UpdateMoby_456(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  MobyModeBit MVar7;
  uint uVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar16;
  int iVar17;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0x170;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar12;
  puVar10[0x30] = in_LR;
  puVar10[0x2c] = in_f30;
  puVar10[0x2d] = in_f31;
  puVar10[0x2b] = unaff_r31;
  puVar10[0x2a] = unaff_r30;
  puVar10[0x29] = unaff_r29;
  puVar10[0x28] = unaff_r28;
  pfVar19 = (float *)moby->pVar;
  uVar21 = ZEXT48(pfVar19);
  iVar16 = MB_damage(moby,0x210000,0);
  FastDecTimerS16(uVar21 + 6);
  if ((iVar16 != 0) && (*(short *)((int)pfVar19 + 6) == 0)) {
    fVar3 = *pfVar19 - *(float *)(iVar16 + 0x2c);
    *pfVar19 = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined1 *)((int)pfVar19 + 0x47) = 0xfa;
      if (moby->animationId != '\x10') {
        MB_SetAnimation(moby,0x10,0,3);
      }
      moby->state = '\t';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
    }
    else {
      uVar8 = (int)*(uint *)(iVar16 + 0x2c) >> 0x1f;
      iVar17 = (uVar8 >> 1 ^ *(uint *)(iVar16 + 0x2c)) - uVar8;
      if (iVar17 < 0x3f800000) {
        *(undefined1 *)((int)pfVar19 + 0x47) = 100;
      }
      else if (iVar17 < 0x40000000) {
        *(undefined1 *)((int)pfVar19 + 0x47) = 0x78;
        sVar6 = *(short *)(*(int *)(iVar16 + 0x20) + 0xa6);
        if ((sVar6 == 0xb0) || (sVar6 == 0xb1)) {
          auVar32 = loadVectorLeftIndexed(4,0x38b818);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        }
        else {
          auVar32 = loadVectorLeftIndexed(8,0x38b818);
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        }
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32,
                             auVar34);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar32,6,uVar21);
        *(undefined2 *)((int)pfVar19 + 6) = uVar9;
      }
      else if (iVar17 < 0x40400000) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pfVar19 + 0x47) = 200;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x38b818);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar32,6,uVar21);
        *(undefined2 *)((int)pfVar19 + 6) = uVar9;
        if (moby->animationId != '\b') {
          MB_SetAnimation(moby,8,0,3);
        }
        moby->state = '\b';
      }
      else {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pfVar19 + 0x47) = 0xe6;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x38b818);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar32,6,uVar21);
        *(undefined2 *)((int)pfVar19 + 6) = uVar9;
        if (moby->animationId != '\b') {
          MB_SetAnimation(moby,8,0,3);
        }
        moby->state = '\b';
      }
    }
    MB_UpdateLightsTransition(moby,uVar21 + 0x40);
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\t') {
    if ((moby->field43_0x70 & 2U) != 0) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\b') {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(moby,0,0,0);
      }
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x06') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar10 + 0x9c) = fVar3;
    *(float *)(puVar10 + 0x14) = fVar2;
    *(float *)((int)puVar10 + 0xa4) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar10 + 0x9c));
    if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x14));
    if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar18 = uVar12 - 0x90;
      lVar20 = uVar12 - 0x80;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xec) = fVar3;
      *(float *)((int)puVar10 + 0xe4) = fVar3;
      *(float *)(puVar10 + 0x1d) = fVar3;
      *(float *)(puVar10 + 0x1c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar4;
      *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar3;
      *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xd0) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0x90;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xe0) = *(float *)((int)lVar14 + 0xe0) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar17 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xe0)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_0038b818,
               uVar21 + 0x130);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x06') {
        MB_SetAnimation(moby,6,0,0);
      }
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x05') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar10 + 0x12) = fVar3;
    *(float *)((int)puVar10 + 0x94) = fVar2;
    *(float *)(puVar10 + 0x13) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x94));
    if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar18 = uVar12 - 0xb0;
      lVar20 = uVar12 - 0xa0;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xcc) = fVar3;
      *(float *)((int)puVar10 + 0xc4) = fVar3;
      *(float *)(puVar10 + 0x19) = fVar3;
      *(float *)(puVar10 + 0x18) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar4;
      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar3;
      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xb0) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0xb0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0xc0) = *(float *)((int)lVar14 + 0xc0) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        iVar17 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xc0)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_0038b818,
               uVar21 + 0x130);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(moby,0,0,0);
      }
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x04') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    pfVar19 = (float *)&g_atanQuadrantTable;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar10 + 0x15) = fVar3;
    *(float *)((int)puVar10 + 0xac) = fVar2;
    *(float *)(puVar10 + 0x16) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar10 + 0x15));
    if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0xac));
    if (*(float *)(puVar10 + 0x16) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    dVar23 = dVar29;
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar18 = uVar12 - 0x70;
      lVar20 = uVar12 - 0x60;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0x10c) = fVar3;
      *(float *)((int)puVar10 + 0x104) = fVar3;
      *(float *)(puVar10 + 0x21) = fVar3;
      *(float *)(puVar10 + 0x20) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar4;
      *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar3;
      *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0xf0) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0x70;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0x100) = *(float *)((int)lVar14 + 0x100) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar16 + 0x100)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar23,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar19,
               uVar21 + 0x130);
    dVar23 = (double)BlendAnimFrame(moby);
    dVar31 = 10.0;
    if (((10.0 <= dVar23) && (dVar23 = (double)BlendAnimFrame(moby), dVar23 <= 12.0)) ||
       ((dVar23 = (double)BlendAnimFrame(moby), 38.0 <= dVar23 &&
        (dVar23 = (double)BlendAnimFrame(moby), dVar23 <= 40.0)))) {
      dVar23 = (double)BlendAnimFrame(moby);
      if ((dVar23 < dVar31) || (dVar23 = (double)BlendAnimFrame(moby), 12.0 < dVar23)) {
        GetBonePosition(moby,1,uVar12 - 0x100);
      }
      else {
        GetBonePosition(moby,0,uVar12 - 0x100);
      }
      fVar3 = g_heroPosition.y - *(float *)((int)puVar10 + 0x74);
      fVar2 = g_heroPosition.x - *(float *)(puVar10 + 0xe);
      fVar5 = (moby->pos).z - *(float *)(puVar10 + 0xf);
      dVar30 = (double)fVar5;
      *(float *)((int)puVar10 + 0x8c) = g_heroPosition.w;
      *(float *)(puVar10 + 0x11) = fVar5;
      dVar27 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      fVar5 = DAT_0084212c * g_FrameTime;
      dVar31 = (double)(fVar3 * (float)(12.0 / dVar27));
      dVar25 = (double)(fVar2 * (float)(12.0 / dVar27));
      dVar23 = dVar29;
      if (dVar29 - dVar27 < 0.0) {
        dVar23 = dVar31;
      }
      dVar26 = dVar29;
      if (dVar29 - dVar27 < 0.0) {
        dVar26 = dVar25;
      }
      if (dVar27 - dVar29 < 0.0) {
        dVar23 = dVar31;
      }
      if (dVar27 - dVar29 < 0.0) {
        dVar26 = dVar25;
      }
      *(float *)(puVar10 + 0x10) = (float)dVar26;
      *(float *)((int)puVar10 + 0x84) = (float)dVar23;
      dVar25 = (double)SQRT((float)(dVar30 * dVar30 +
                                   (double)(float)(dVar26 * dVar26 +
                                                  (double)(float)(dVar23 * dVar23))));
      dVar27 = (double)(float)((double)fVar5 / dVar25);
      dVar31 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar31 = (double)(float)(dVar26 * dVar27);
      }
      dVar24 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar24 = (double)(float)(dVar23 * dVar27);
      }
      dVar28 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar28 = (double)(float)(dVar30 * dVar27);
      }
      if (dVar25 - dVar29 < 0.0) {
        dVar31 = (double)(float)(dVar26 * dVar27);
      }
      if (dVar25 - dVar29 < 0.0) {
        dVar24 = (double)(float)(dVar23 * dVar27);
      }
      if (dVar25 - dVar29 < 0.0) {
        dVar28 = (double)(float)(dVar30 * dVar27);
      }
      *(float *)(puVar10 + 0x10) = (float)dVar31;
      *(float *)((int)puVar10 + 0x84) = (float)dVar24;
      *(float *)(puVar10 + 0x11) = (float)dVar28;
      FUN_0039ed48(uVar12 - 0xf0,uVar12 - 0x100,moby);
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((20.0 < SQRT(fVar2 * fVar2 + fVar3 * fVar3)) ||
       (6.0 < ABS((moby->pos).z - g_heroPosition.z))) {
      if (moby->animationId != '\x05') {
        MB_SetAnimation(moby,5,0,0);
      }
      moby->unk58 = 1.0;
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x03') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar10 + 0xb4) = fVar3;
    *(float *)(puVar10 + 0x17) = fVar2;
    *(float *)((int)puVar10 + 0xbc) = fVar4 - fVar5;
    dVar29 = 0.0;
    uVar13 = (ulonglong)(*(uint *)((int)puVar10 + 0xb4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xbc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x17) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar10 + 0xb4));
    if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x17));
    if (*(float *)((int)puVar10 + 0xbc) - 0.0 < 0.0) {
      fVar11 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar12 - 0x160;
      lVar20 = uVar12 - 0x40;
      lVar18 = uVar12 - 0x50;
      lVar22 = 2;
      fVar3 = (fVar11 - fVar3) / (fVar11 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 300) = fVar3;
      *(float *)((int)puVar10 + 0x124) = fVar3;
      *(float *)(puVar10 + 0x25) = fVar3;
      *(float *)(puVar10 + 0x24) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0x124) = *(float *)((int)puVar10 + 0x124) * fVar4;
      *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar3;
      *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x110) * fVar3 * fVar3;
        iVar16 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar12 - 0x50;
      pfVar19 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar18 = lVar20;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0x120) = *(float *)((int)lVar14 + 0x120) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x120)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_0038b818,
               uVar21 + 0x130);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x04') {
        MB_SetAnimation(moby,4,0,0);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x01') {
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 20.0) &&
       (ABS((moby->pos).z - g_heroPosition.z) < 6.0)) {
      if (moby->animationId != '\x04') {
        MB_SetAnimation(moby,4,0,0);
      }
      moby->unk58 = 8.0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\0') {
    MVar7 = moby->modeBits;
    pfVar19[0x40] = 1.4013e-45;
    moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
    *(undefined1 *)((int)pfVar19 + 9) = 0;
    uVar8 = g_heroMobyPtr->light;
    moby->color = g_heroMobyPtr->color;
    moby->light = uVar8;
    MB_InitDefaultParams(pfVar19 + 0x2c);
    pfVar19[0x3d] = 0.25;
    pfVar19[0x3b] = 0.03;
    pfVar19[0x3c] = 0.3;
    fVar2 = DAT_00842124;
    fVar3 = g_FrameTime;
    pfVar19[0xb] = 0.0;
    pfVar19[0x2f] = 2.0;
    pfVar19[0x2e] = 2.0;
    *pfVar19 = 3.0;
    *(undefined1 *)(pfVar19 + 2) = 3;
    pfVar19[10] = 0.0;
    pfVar19[9] = 0.0;
    pfVar19[8] = 0.0;
    pfVar19[0x35] = fVar2 * fVar3;
    if (moby->animationId != '\0') {
      MB_SetAnimation(moby,0,0,0);
    }
    moby->state = '\x01';
  }
  MB_ColorDyingMoby(moby,uVar21 + 0x40);
  return;
}


