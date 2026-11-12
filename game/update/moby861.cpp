// game/update/moby861.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x497c1c-0x498fe0
#include "game/update/moby861.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"

// 0x0497c1c (0x14 bytes)
void M861_00497c1c(void)

{
  DAT_008c7dc4 = 0x10000;
  return;
}


// 0x0497c48 (0x368 bytes)
// inlined: FastAtan2 @0x497e10
void M861_00497c48(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar19;
  ulonglong unaff_r30;
  longlong lVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xd0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x18] = unaff_r31;
  puVar9[0x16] = unaff_r29;
  puVar9[0x17] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar19 = ZEXT48(pvVar6);
  lVar20 = uVar19 + 0x110;
  puVar9[0x15] = unaff_r28;
  MB_ColorDyingMoby(param_1,lVar20);
  if (param_1->state != '\x06') {
    dVar25 = 0.0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    iVar12 = MB_damage(param_1,0x10000,0);
    MB_HandleDamage(param_1,iVar12,uVar19 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
    if ((*(int *)(puVar9 + 0xe) != 1) && (*(int *)((int)puVar9 + 0x74) != 0)) {
      fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
      *(float *)((int)pvVar6 + 0x20) = fVar4;
      if (dVar25 < (double)fVar4) {
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        MB_UpdateLightsTransition(param_1,lVar20);
      }
      else {
        *(undefined4 *)((int)pvVar6 + 0x80) = 0x200;
        *(undefined4 *)((int)pvVar6 + 0x88) = 0x3f000000;
        fVar4 = g_FrameTimeSq;
        *(float *)((int)pvVar6 + 0x70) = g_FrameTimeSq * 10.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 0;
        MVar5 = param_1->modeBits;
        *(undefined4 *)((int)pvVar6 + 0x84) = 0x29;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x74) = fVar4 * 1.5;
        fVar4 = g_FrameTime * 8.0;
        *(float *)((int)pvVar6 + 0x7c) = g_FrameTime * 10.0;
        *(float *)((int)pvVar6 + 0x78) = fVar4;
        uVar7 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0x14);
        dVar24 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar22 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar24 - dVar22);
        uVar14 = (ulonglong)(uVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
        lVar15 = uVar14 << 2;
        dVar23 = dVar24;
        if ((double)*(float *)(puVar9 + 0xf) - dVar25 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)lVar15);
        if ((double)*(float *)(puVar9 + 0xf) - dVar25 < 0.0) {
          dVar22 = dVar24;
        }
        fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (dVar25 < dVar23) {
          lVar17 = uVar11 - 0xc0;
          lVar16 = uVar11 - 0x54;
          lVar15 = uVar11 - 0x44;
          lVar21 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)(puVar9 + 0x11) = fVar2;
          *(float *)(puVar9 + 0x10) = fVar2;
          *(float *)((int)puVar9 + 0x84) = fVar2;
          *(float *)((int)puVar9 + 0x7c) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar3;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar2 * fVar2;
            iVar12 = (int)lVar16;
            lVar17 = lVar17 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar15 = uVar11 - 0x54;
          pfVar18 = (float *)&DAT_007358e0;
          lVar21 = 4;
          lVar16 = lVar15;
          lVar17 = lVar13;
          do {
            fVar2 = *pfVar18;
            fVar3 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar2;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          do {
            iVar12 = (int)lVar13;
            iVar10 = (int)lVar15;
            lVar13 = lVar13 + 0x10;
            lVar15 = lVar15 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
        }
        MB_StartKick(dVar25,param_1,uVar19 + 0x60,lVar15,3,1,0);
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0x41600000;
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0x41c00000;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        MB_UpdateLightsTransition(param_1,lVar20);
        param_1->state = '\x06';
      }
    }
    param_1->damage = -1;
  }
  return;
}


// 0x0497ff8 (0xfe8 bytes)
// inlined: FastAtan2 @0x49831c, FastAtan2 @0x4985ac, FastAtan2 @0x498780, FastAtan2 @0x498944, FastAtan2 @0x498d14
/* Moby 861 */

void UpdateMoby_861(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  float *pfVar21;
  longlong lVar20;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x1b0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar15;
  puVar12[0x38] = in_LR;
  puVar12[0x34] = in_f30;
  puVar12[0x35] = in_f31;
  puVar12[0x33] = unaff_r31;
  puVar12[0x31] = unaff_r29;
  puVar12[0x32] = unaff_r30;
  pvVar9 = moby->pVar;
  uVar23 = ZEXT48(pvVar9);
  M861_00497c48();
  FUN_00495490(0x4014000000000000,moby,uVar23 + 0x120);
  FastDecTimerS32(uVar23 + 0x124);
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    uVar19 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x60));
    if ((uVar19 & 0x140) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x04') {
    iVar10 = *(int *)((int)pvVar9 + 0x120);
    if (iVar10 != 0) {
      fVar3 = *(float *)(iVar10 + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(iVar10 + 0x14) - (moby->pos).y;
      pfVar21 = (float *)&g_atanQuadrantTable;
      fVar5 = ABS(fVar3);
      fVar8 = ABS(fVar4);
      *(float *)(puVar12 + 0x12) = fVar3;
      *(float *)((int)puVar12 + 0x94) = fVar4;
      *(float *)(puVar12 + 0x13) = fVar5 - fVar8;
      dVar27 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar12 + 0x12));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar3 = fVar8;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar12 + 0x94));
      if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar15 - 0x1a0;
        lVar22 = uVar15 - 0xd4;
        lVar20 = uVar15 - 0xe4;
        lVar24 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x1b) = fVar3;
        *(float *)(puVar12 + 0x1a) = fVar3;
        *(float *)((int)puVar12 + 0xd4) = fVar3;
        *(float *)((int)puVar12 + 0xcc) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar5;
        *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar3;
        *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar3 * fVar3;
          iVar10 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar22 = uVar15 - 0xe4;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar22;
        do {
          fVar3 = *pfVar21;
          fVar5 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar17 = 2;
        do {
          iVar10 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xcc)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar8 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar27,(double)*(float *)((int)pvVar9 + 0xfc),
                 (double)*(float *)((int)pvVar9 + 0x100),(double)*(float *)((int)pvVar9 + 0x104),
                 moby,pfVar21,uVar23 + 0xd4);
    }
    if (moby->animationId != '\x01') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar12 + 0x174));
    }
    dVar27 = (double)BlendAnimFrame(moby);
    if ((2.0 <= dVar27) && (dVar27 <= 6.0)) {
      puVar12[0xe] = 0;
      DamageSphereAtBone
                (0x3fd99999a0000000,0x3ff0000000000000,0x4000000000000000,moby,1,&DAT_00497fb0,
                 0x10001);
    }
    fVar3 = animationSpeed;
    if ((moby->field43_0x70 & 2U) != 0) {
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x44,0x497fb0);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x124,uVar23
                         );
      *(undefined4 *)((int)pvVar9 + 0x124U & 0xfffffffc) = uVar11;
      if (moby->animationId != '\0') {
        puVar12[0x2e] = (longlong)(int)(fVar3 * 7.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x174));
      }
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x03') {
    uVar1 = moby->animationId;
    if (uVar1 != '\x04') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar12 + 0x174));
      uVar1 = moby->animationId;
    }
    if (*(uint *)((int)pvVar9 + 0x120) == 0) {
      if (uVar1 != '\0') {
        puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x174));
      }
      moby->state = '\x01';
    }
    else {
      MB_UpdateNavMoveTurning
                (moby,uVar23 + 0xc0,(ulonglong)*(uint *)((int)pvVar9 + 0x120) + 0x10,uVar15 - 0x130)
      ;
      fVar3 = (moby->pos).y - *(float *)(*(int *)((int)pvVar9 + 0x120) + 0x14);
      fVar4 = (moby->pos).x - *(float *)(*(int *)((int)pvVar9 + 0x120) + 0x10);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 2.0) {
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (moby->animationId != '\x05') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar12 + 0x174));
    }
    OrganicDeltAngSpeed
              ((double)*(float *)((int)pvVar9 + 300),(double)*(float *)((int)pvVar9 + 0xfc),
               (double)*(float *)((int)pvVar9 + 0x100),(double)*(float *)((int)pvVar9 + 0x104),moby)
    ;
    iVar10 = *(int *)((int)pvVar9 + 0x120);
    fVar3 = (moby->rotation).z;
    if (iVar10 != 0) {
      fVar4 = (moby->pos).y;
      fVar8 = (moby->pos).x;
      fVar5 = fVar4 - *(float *)(iVar10 + 0x14);
      fVar7 = fVar8 - *(float *)(iVar10 + 0x10);
      if (SQRT(fVar7 * fVar7 + fVar5 * fVar5) < 2.0) {
        dVar27 = 0.0;
        if (*(short *)(iVar10 + 0xa6) == 0x359) {
          dVar26 = 1.0;
        }
        else {
          dVar26 = dVar27;
          if (*(short *)(iVar10 + 0xa6) == 0x57) {
            if (g_heroState == CLANK_STANDING || g_heroState == UNK_50) {
              fVar8 = *(float *)(iVar10 + 0x10) - fVar8;
              fVar4 = *(float *)(iVar10 + 0x14) - fVar4;
              fVar7 = ABS(fVar8);
              fVar5 = ABS(fVar4);
              *(float *)(puVar12 + 0x18) = fVar8;
              *(float *)((int)puVar12 + 0xc4) = fVar4;
              *(float *)(puVar12 + 0x19) = fVar7 - fVar5;
              uVar23 = (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1d) & 4;
              fVar4 = ABS(*(float *)(puVar12 + 0x18));
              if (*(float *)(puVar12 + 0x19) - 0.0 < 0.0) {
                fVar4 = fVar5;
              }
              fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
              fVar5 = ABS(*(float *)((int)puVar12 + 0xc4));
              if (*(float *)(puVar12 + 0x19) - 0.0 < 0.0) {
                fVar5 = fVar7;
              }
              fVar7 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
              dVar25 = dVar27;
              if (0.0 < fVar4) {
                lVar17 = uVar15 - 0x1a0;
                lVar20 = uVar15 - 100;
                lVar22 = uVar15 - 0x54;
                lVar24 = 2;
                fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
                fVar5 = fVar4 * fVar4;
                *(float *)(puVar12 + 0x2b) = fVar4;
                *(float *)(puVar12 + 0x2a) = fVar4;
                *(float *)((int)puVar12 + 0x154) = fVar4;
                *(float *)((int)puVar12 + 0x14c) = fVar4;
                fVar4 = fVar5 * fVar5;
                *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar5;
                *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar4;
                *(float *)(puVar12 + 0x2b) = *(float *)(puVar12 + 0x2b) * fVar4 * fVar5;
                do {
                  *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar4 * fVar4;
                  iVar10 = (int)lVar20;
                  lVar17 = lVar17 + 8;
                  lVar20 = lVar20 + 8;
                  *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
                  lVar22 = lVar22 + 8;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                lVar24 = 4;
                lVar22 = uVar15 - 100;
                pfVar21 = (float *)&DAT_007358e0;
                lVar17 = lVar18;
                lVar20 = lVar22;
                do {
                  fVar4 = *pfVar21;
                  fVar5 = pfVar21[1];
                  pfVar21 = pfVar21 + 2;
                  *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * fVar4;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
                  lVar20 = lVar20 + 8;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                lVar17 = 2;
                do {
                  iVar10 = (int)lVar18;
                  lVar18 = lVar18 + 0x10;
                  iVar13 = (int)lVar22;
                  lVar22 = lVar22 + 0x10;
                  dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0x14c)) +
                                    *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                                   *(float *)(iVar13 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar7);
              }
              dVar25 = (double)FastSubRots(fVar3,(float)dVar25);
              if (1.0471975803375244 <= dVar25) {
                if ((DAT_00969f20 == moby) || (DAT_00969f1c == moby)) {
                  dVar26 = 1.0;
                }
              }
              else {
                dVar26 = 1.0;
              }
            }
            else {
              dVar26 = 1.0;
            }
          }
        }
        if (dVar26 != dVar27) {
          moby->state = '\x01';
        }
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (moby->animationId != '\0') {
      puVar12[0x2e] = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar12 + 0x174));
    }
    iVar10 = *(int *)((int)pvVar9 + 0x120);
    if (iVar10 == 0) {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar8 = g_heroPosition.y - fVar4;
      fVar7 = ABS(g_heroPosition.x - fVar3);
      fVar5 = ABS(fVar8);
      *(float *)(puVar12 + 0x15) = g_heroPosition.x - fVar3;
      *(float *)((int)puVar12 + 0xac) = fVar8;
      *(float *)(puVar12 + 0x16) = fVar7 - fVar5;
      dVar27 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
      fVar8 = ABS(*(float *)(puVar12 + 0x15));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar14 = fVar7;
      }
      if (0.0 < fVar8) {
        lVar17 = uVar15 - 0x1a0;
        lVar22 = uVar15 - 0x94;
        lVar20 = uVar15 - 0xa4;
        lVar24 = 2;
        fVar8 = (fVar14 - fVar8) / (fVar14 + fVar8);
        fVar7 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x23) = fVar8;
        *(float *)(puVar12 + 0x22) = fVar8;
        *(float *)((int)puVar12 + 0x114) = fVar8;
        *(float *)((int)puVar12 + 0x10c) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar7;
        *(float *)((int)puVar12 + 0x114) = *(float *)((int)puVar12 + 0x114) * fVar8;
        *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar8 * fVar8;
          iVar10 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar22 = uVar15 - 0xa4;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar22;
        do {
          fVar8 = *pfVar21;
          fVar7 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar20 = 2;
        lVar17 = lVar18;
        do {
          iVar10 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar13 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0x10c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar5);
      }
    }
    else {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar8 = *(float *)(iVar10 + 0x10) - fVar3;
      fVar5 = *(float *)(iVar10 + 0x14) - fVar4;
      fVar6 = ABS(fVar8);
      fVar7 = ABS(fVar5);
      *(float *)((int)puVar12 + 0xb4) = fVar8;
      *(float *)(puVar12 + 0x17) = fVar5;
      *(float *)((int)puVar12 + 0xbc) = fVar6 - fVar7;
      dVar27 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1d) & 4;
      fVar8 = ABS(*(float *)((int)puVar12 + 0xb4));
      if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
        fVar8 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar12 + 0x17));
      if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      if (0.0 < fVar8) {
        lVar17 = uVar15 - 0x1a0;
        lVar20 = uVar15 - 0x84;
        lVar22 = uVar15 - 0x74;
        lVar24 = 2;
        fVar8 = (fVar14 - fVar8) / (fVar14 + fVar8);
        fVar6 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x27) = fVar8;
        *(float *)(puVar12 + 0x26) = fVar8;
        *(float *)((int)puVar12 + 0x134) = fVar8;
        *(float *)((int)puVar12 + 300) = fVar8;
        fVar8 = fVar6 * fVar6;
        *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar6;
        *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar8;
        *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar8 * fVar6;
        do {
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar8 * fVar8;
          iVar10 = (int)lVar20;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar22 = uVar15 - 0x84;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar22;
        do {
          fVar8 = *pfVar21;
          fVar6 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar20 = 2;
        lVar17 = lVar18;
        do {
          iVar10 = (int)lVar17;
          iVar13 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 300)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar5);
      }
    }
    fVar4 = g_heroPosition.y - fVar4;
    pfVar21 = (float *)&g_atanQuadrantTable;
    fVar5 = ABS(g_heroPosition.x - fVar3);
    fVar8 = ABS(fVar4);
    *(float *)((int)puVar12 + 0x9c) = g_heroPosition.x - fVar3;
    *(float *)(puVar12 + 0x14) = fVar4;
    *(float *)((int)puVar12 + 0xa4) = fVar5 - fVar8;
    dVar26 = 0.0;
    uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar12 + 0x9c));
    if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
      fVar3 = fVar8;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)(puVar12 + 0x14));
    if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    if (0.0 < fVar3) {
      lVar17 = uVar15 - 0x1a0;
      lVar22 = uVar15 - 0xb4;
      lVar20 = uVar15 - 0xc4;
      lVar24 = 2;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x1f) = fVar3;
      *(float *)(puVar12 + 0x1e) = fVar3;
      *(float *)((int)puVar12 + 0xf4) = fVar3;
      *(float *)((int)puVar12 + 0xec) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar5;
      *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar3;
      *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar3 * fVar3;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0xc4;
      pfVar21 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar20 = lVar22;
      do {
        fVar3 = *pfVar21;
        fVar5 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      do {
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar13 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar10 + 0xec)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar8 + fVar4);
    }
    OrganicDeltAngSpeed
              (dVar26,(double)*(float *)((int)pvVar9 + 0xfc),(double)*(float *)((int)pvVar9 + 0x100)
               ,(double)*(float *)((int)pvVar9 + 0x104),moby,pfVar21,uVar23 + 0xd4);
    if (*(int *)((int)pvVar9 + 0x124) == 0) {
      iVar10 = *(int *)((int)pvVar9 + 0x120);
      if (((iVar10 == 0) ||
          (fVar3 = (moby->pos).y - *(float *)(iVar10 + 0x14),
          fVar4 = (moby->pos).x - *(float *)(iVar10 + 0x10),
          2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) ||
         (dVar26 = (double)FastSubRots((moby->rotation).z,(float)dVar27),
         0.2617993950843811 <= dVar26)) {
        if (((*(int *)((int)pvVar9 + 0x120) == 0) && (*(int *)((int)pvVar9 + 0x128) != 0)) &&
           (dVar27 = (double)FastSubRots((moby->rotation).z,(float)dVar27),
           dVar27 < 0.0872664600610733)) {
          moby->state = '\x02';
        }
      }
      else {
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar9 + 0xc0) = 300;
    *(undefined4 *)((int)pvVar9 + 0xc4) = 0x3f000000;
    *(undefined4 *)((int)pvVar9 + 200) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar9 + 0xcc) = 0x3e4ccccd;
    fVar4 = DAT_0071f40c;
    fVar3 = DAT_0071f40c * 0.3;
    auVar28 = ZEXT416(0xffffffff);
    auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
    auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
    *(float *)((int)pvVar9 + 0xe0) = fVar3;
    fVar8 = g_FrameTime;
    *(float *)((int)pvVar9 + 0xe4) = g_FrameTime * 3.0;
    *(undefined4 *)((int)pvVar9 + 0xe8) = 0x3f32b8c2;
    *(undefined4 *)((int)pvVar9 + 0xec) = 0x3e4ccccd;
    *(float *)((int)pvVar9 + 0x100) = fVar3;
    *(float *)((int)pvVar9 + 0xdc) = fVar4 * 0.05;
    *(float *)((int)pvVar9 + 0xfc) = fVar4 * 0.05;
    iVar10 = *(int *)((int)pvVar9 + 0x128);
    *(float *)((int)pvVar9 + 0x104) = fVar8 * 3.1415927;
    auVar28 = loadVectorLeftIndexed(0x14,0x497fb0);
    auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    fVar2 = (moby->rotation).z;
    auVar28 = vectorMultiplyAddFloatingPoint
                        (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                         auVar29);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x108,uVar23);
    *(undefined4 *)((int)pvVar9 + 0x108U & 0xfffffffc) = uVar11;
    *(f32 *)((int)pvVar9 + 300) = fVar2;
    if (iVar10 == 0) {
      moby->state = '\x01';
    }
    else {
      moby->state = '\x02';
    }
  }
  return;
}


