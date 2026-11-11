// game/update/moby860.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x496f60-0x497c1c
#include "game/update/moby860.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"

// 0x0496f60 (0x334 bytes)
// inlined: FastAtan2 @0x49712c
void M860_00496f60(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xc0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x1a] = in_LR;
  puVar9[0x17] = in_f31;
  puVar9[0x16] = unaff_r31;
  uVar1 = param_1->state;
  puVar9[0x15] = unaff_r30;
  puVar9[0x14] = unaff_r29;
  if (uVar1 != '\x05') {
    pvVar6 = param_1->pVar;
    dVar23 = 0.0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    iVar12 = MB_damage(param_1,0x10000,0);
    MB_HandleDamage
              (param_1,iVar12,ZEXT48(pvVar6) + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
    fVar2 = *(float *)((int)puVar9 + 0x74);
    if (((iVar12 == 0) || (*(int *)(iVar12 + 0x20) == 0)) ||
       (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) != 0x35b)) {
      if ((*(int *)(puVar9 + 0xe) != 1) && (*(int *)((int)puVar9 + 0x74) != 0)) {
        *(undefined4 *)((int)pvVar6 + 0x80) = 0x200;
        *(undefined4 *)((int)pvVar6 + 0x88) = 0x3f000000;
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        fVar2 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x70) = DAT_0071f418 * 10.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 0;
        *(undefined4 *)((int)pvVar6 + 0x84) = 0x29;
        *(float *)((int)pvVar6 + 0x74) = fVar2 * 1.5;
        fVar3 = g_FrameTime;
        fVar2 = g_FrameTime * 10.0;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x7c) = fVar2;
        *(float *)((int)pvVar6 + 0x78) = fVar3 * 8.0;
        uVar7 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0x14);
        dVar22 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar20 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar22 - dVar20);
        uVar14 = (ulonglong)(uVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
        lVar15 = uVar14 << 2;
        dVar21 = dVar22;
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar21 = dVar20;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)lVar15);
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar20 = dVar22;
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (dVar23 < dVar21) {
          lVar17 = uVar11 - 0xb0;
          lVar16 = uVar11 - 0x44;
          lVar15 = uVar11 - 0x34;
          lVar19 = 2;
          fVar4 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          *(float *)(puVar9 + 0x10) = fVar4;
          *(float *)((int)puVar9 + 0x84) = fVar4;
          *(float *)((int)puVar9 + 0x7c) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar5;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar4;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar4 * fVar4;
            iVar12 = (int)lVar16;
            lVar17 = lVar17 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
            lVar15 = lVar15 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar15 = uVar11 - 0x44;
          pfVar18 = (float *)&DAT_007358e0;
          lVar19 = 4;
          lVar16 = lVar15;
          lVar17 = lVar13;
          do {
            fVar4 = *pfVar18;
            fVar5 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar16 = 2;
          do {
            iVar12 = (int)lVar13;
            iVar10 = (int)lVar15;
            lVar13 = lVar13 + 0x10;
            lVar15 = lVar15 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar12 + 0x7c)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar3);
        }
        MB_StartKick(dVar23,param_1,ZEXT48(pvVar6) + 0x60,lVar15,5,1,0);
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0x40400000;
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0x40f00000;
        param_1->state = '\x05';
      }
      param_1->damage = -1;
    }
  }
  return;
}


// 0x0497300 (0x91c bytes)
// inlined: FastAtan2 @0x497580, FastAtan2 @0x497858
/* Moby 860 */

void UpdateMoby_860(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
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
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f19;
  undefined8 uVar32;
  ulonglong in_f20;
  undefined8 uVar33;
  ulonglong in_f21;
  undefined8 uVar34;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x1a0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x36] = in_LR;
  puVar8[0x27] = in_f19;
  puVar8[0x28] = in_f20;
  puVar8[0x29] = in_f21;
  puVar8[0x2a] = in_f22;
  puVar8[0x2b] = in_f23;
  puVar8[0x2c] = in_f24;
  puVar8[0x2d] = in_f25;
  puVar8[0x2e] = in_f26;
  puVar8[0x2f] = in_f27;
  puVar8[0x30] = in_f28;
  puVar8[0x31] = in_f29;
  puVar8[0x32] = in_f30;
  puVar8[0x33] = in_f31;
  puVar8[0x26] = unaff_r31;
  puVar8[0x24] = unaff_r29;
  puVar8[0x25] = unaff_r30;
  puVar8[0x23] = unaff_r28;
  pvVar6 = moby->pVar;
  uVar20 = ZEXT48(pvVar6);
  M860_00496f60();
  FUN_00495490(0x4014000000000000,moby,uVar20 + 0x110);
  FastDecTimerS32(uVar20 + 0x114);
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    uVar16 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x60));
    if ((uVar16 & 0x140) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x04') {
    iVar15 = *(int *)((int)pvVar6 + 0x110);
    if (iVar15 != 0) {
      fVar3 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
      fVar2 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
      pfVar18 = (float *)&g_atanQuadrantTable;
      fVar4 = ABS(fVar3);
      fVar5 = ABS(fVar2);
      *(float *)(puVar8 + 0x14) = fVar3;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)(puVar8 + 0x15) = fVar4 - fVar5;
      dVar25 = 0.0;
      uVar12 = (ulonglong)(*(uint *)(puVar8 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0xa4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar8 + 0x14));
      if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
      fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar8 + 0xa4));
      if (*(float *)(puVar8 + 0x15) - 0.0 < 0.0) {
        fVar10 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar13 = uVar11 - 400;
        lVar19 = uVar11 - 0xd8;
        lVar17 = uVar11 - 0xe8;
        lVar21 = 2;
        fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0xc4) = fVar3;
        *(float *)((int)puVar8 + 0xbc) = fVar3;
        *(float *)(puVar8 + 0x18) = fVar3;
        *(float *)(puVar8 + 0x17) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar4;
        *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
        *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar3 * fVar3;
          iVar15 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0xe8;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar19;
        do {
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar3;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar9 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xb8)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
      }
      OrganicDeltAngSpeed
                (dVar25,(double)*(float *)((int)pvVar6 + 0xfc),
                 (double)*(float *)((int)pvVar6 + 0x100),(double)*(float *)((int)pvVar6 + 0x104),
                 moby,pfVar18,uVar20 + 0xd4);
    }
    if (moby->animationId != '\a') {
      puVar8[0x20] = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,7,0,*(undefined4 *)((int)puVar8 + 0x104));
    }
    iVar15 = MB_MayaFrameTrigger(18.0,moby);
    if (iVar15 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar44 = ZEXT416(0xffffffff);
        auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = loadVectorLeftIndexed(100,0x497294);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar45);
        auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x114,
                           uVar20);
        *(undefined4 *)((int)pvVar6 + 0x114U & 0xfffffffc) = uVar7;
        moby->state = '\x01';
      }
    }
    else {
      GetBonePosition(moby,0,uVar11 - 0x120);
      dVar25 = (double)FastWrapRot((moby->rotation).z,-3.1415927);
      dVar43 = 0.05235987901687622;
      iVar15 = 0;
      dVar42 = 1.570796251296997;
      dVar41 = 3.141592502593994;
      dVar40 = -3.141592502593994;
      dVar39 = -0.16666656732559204;
      dVar38 = 0.008333025500178337;
      dVar37 = -0.0001980741071747616;
      dVar36 = 2.601886990305502e-06;
      dVar35 = 2.5;
      uVar34 = 0x401c000000000000;
      uVar33 = 0x3ff0000000000000;
      uVar32 = 0x3fd0000000000000;
      do {
        dVar25 = (double)FastWrapRot((float)dVar25,(float)dVar43);
        dVar22 = (double)(float)(dVar25 + dVar42);
        dVar23 = (double)(float)(dVar41 - dVar25);
        if (dVar25 - (double)(float)(dVar41 - dVar25) < 0.0) {
          dVar23 = dVar25;
        }
        dVar26 = (double)(float)(dVar41 - dVar22);
        if (dVar22 - (double)(float)(dVar41 - dVar22) < 0.0) {
          dVar26 = dVar22;
        }
        dVar24 = (double)(float)(dVar40 - dVar25);
        if ((double)(float)(dVar40 - dVar25) - dVar23 < 0.0) {
          dVar24 = dVar23;
        }
        dVar23 = (double)(float)(dVar40 - dVar22);
        if ((double)(float)(dVar40 - dVar22) - dVar26 < 0.0) {
          dVar23 = dVar26;
        }
        dVar22 = (double)(float)(dVar24 * dVar24);
        dVar27 = (double)g_FrameTime;
        *(undefined4 *)(puVar8 + 0x13) = 0;
        dVar26 = (double)(float)(dVar23 * dVar23);
        dVar29 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
        dVar31 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar23));
        dVar28 = (double)(float)(dVar22 * dVar29);
        dVar30 = (double)(float)(dVar26 * dVar31);
        *(float *)((int)puVar8 + 0x94) =
             (float)(dVar27 * dVar35) *
             (float)((double)(float)(dVar22 * dVar28) * dVar36 +
                    (double)(float)(dVar28 * dVar37 +
                                   (double)(float)(dVar29 * dVar38 +
                                                  (double)(float)((double)(float)(dVar22 * dVar24) *
                                                                  dVar39 + dVar24))));
        *(float *)(puVar8 + 0x12) =
             (float)(dVar27 * dVar35) *
             (float)((double)(float)(dVar26 * dVar30) * dVar36 +
                    (double)(float)(dVar30 * dVar37 +
                                   (double)(float)(dVar31 * dVar38 +
                                                  (double)(float)((double)(float)(dVar26 * dVar23) *
                                                                  dVar39 + dVar23))));
        FUN_00495778(uVar34,uVar33,uVar32,moby,uVar11 - 0x120,uVar11 - 0x110,2,uVar11 - 0xa8);
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x78);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (moby->animationId != '\x04') {
      puVar8[0x20] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar8 + 0x104));
    }
    if (*(uint *)((int)pvVar6 + 0x110) == 0) {
      moby->state = '\x01';
    }
    else {
      MB_UpdateNavMoveTurning
                (moby,uVar20 + 0xc0,(ulonglong)*(uint *)((int)pvVar6 + 0x110) + 0x10,uVar11 - 0x130)
      ;
      fVar3 = (moby->pos).y - *(float *)(*(int *)((int)pvVar6 + 0x110) + 0x14);
      fVar2 = (moby->pos).x - *(float *)(*(int *)((int)pvVar6 + 0x110) + 0x10);
      if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 4.0) {
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (moby->animationId != '\0') {
      puVar8[0x20] = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar8 + 0x104));
    }
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    pfVar18 = (float *)&g_atanQuadrantTable;
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar8 + 0xac) = fVar3;
    *(float *)(puVar8 + 0x16) = fVar2;
    *(float *)((int)puVar8 + 0xb4) = fVar4 - fVar5;
    dVar25 = 0.0;
    uVar12 = (ulonglong)(*(uint *)((int)puVar8 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x16) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar8 + 0xac));
    if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar8 + 0x16));
    if (*(float *)((int)puVar8 + 0xb4) - 0.0 < 0.0) {
      fVar10 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar13 = uVar11 - 400;
      lVar19 = uVar11 - 0xb8;
      lVar17 = uVar11 - 200;
      lVar21 = 2;
      fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0xe4) = fVar3;
      *(float *)((int)puVar8 + 0xdc) = fVar3;
      *(float *)(puVar8 + 0x1c) = fVar3;
      *(float *)(puVar8 + 0x1b) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xdc) = *(float *)((int)puVar8 + 0xdc) * fVar4;
      *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar3;
      *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0xd8) = *(float *)((int)lVar13 + 200) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 200;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0xd8) = *(float *)((int)lVar13 + 0xd8) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar9 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xd8)) +
                          *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar25,(double)*(float *)((int)pvVar6 + 0xfc),(double)*(float *)((int)pvVar6 + 0x100)
               ,(double)*(float *)((int)pvVar6 + 0x104),moby,pfVar18,uVar20 + 0xd4);
    if ((*(int *)((int)pvVar6 + 0x114) == 0) && (*(int *)((int)pvVar6 + 0x110) != 0)) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar6 + 0xc0) = 300;
    *(undefined4 *)((int)pvVar6 + 0xc4) = 0x3f000000;
    *(undefined4 *)((int)pvVar6 + 200) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar6 + 0xcc) = 0x3e4ccccd;
    fVar2 = DAT_0071f40c;
    fVar3 = DAT_0071f40c * 0.3;
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    *(float *)((int)pvVar6 + 0xe0) = fVar3;
    fVar5 = g_FrameTime;
    *(float *)((int)pvVar6 + 0xe4) = g_FrameTime * 2.0;
    *(undefined4 *)((int)pvVar6 + 0xe8) = 0x3f32b8c2;
    *(undefined4 *)((int)pvVar6 + 0xec) = 0x3e4ccccd;
    *(float *)((int)pvVar6 + 0x100) = fVar3;
    *(float *)((int)pvVar6 + 0xdc) = fVar2 * 0.05;
    *(float *)((int)pvVar6 + 0xfc) = fVar2 * 0.05;
    *(float *)((int)pvVar6 + 0x104) = fVar5 * 3.1415927;
    auVar44 = loadVectorLeftIndexed(0x14,0x497294);
    auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = vectorMultiplyAddFloatingPoint
                        (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                         auVar45);
    auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
    auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x108,uVar20);
    *(undefined4 *)((int)pvVar6 + 0x108U & 0xfffffffc) = uVar7;
    moby->state = '\x01';
  }
  return;
}


