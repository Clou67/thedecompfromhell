// game/update/moby738.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x438738-0x43a0f0
#include "game/update/moby738.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby567.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0438738 (0x14 bytes)
void M738_00438738(void)

{
  DAT_0085a348 = 0x10000;
  return;
}


// 0x0438760 (0x544 bytes)
// inlined: FastAtan2 @0x4388e4, FastAtan2 @0x438a90
void M738_00438760(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  longlong lVar15;
  longlong lVar16;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined4 uVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x120;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar13;
  puVar11[0x26] = in_LR;
  puVar11[0x1e] = in_f26;
  puVar11[0x1f] = in_f27;
  puVar11[0x20] = in_f28;
  puVar11[0x21] = in_f29;
  puVar11[0x22] = in_f30;
  puVar11[0x23] = in_f31;
  puVar11[0x1c] = unaff_r30;
  puVar11[0x1d] = unaff_r31;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar11[0x1a] = unaff_r28;
  dVar30 = 0.0;
  iVar17 = *(int *)(iVar8 + 0x150);
  iVar9 = *(int *)(iVar8 + 0x1ac);
  puVar11[0x1b] = unaff_r29;
  if (iVar9 == 0) {
    uVar20 = 0;
    uVar14 = 0;
    *(undefined4 *)(iVar8 + 0x150) = 0;
    dVar29 = dVar30;
    dVar31 = dVar30;
    do {
      if ((int)uVar14 != iVar17) {
        fVar4 = *(float *)(param_1 + 0x10);
        iVar9 = *(int *)(iVar8 + 0x160) + (int)((uVar14 & 0xffffffff) << 4);
        fVar5 = *(float *)(param_1 + 0x14);
        dVar28 = (double)*(float *)(iVar9 + 0x10);
        dVar27 = (double)*(float *)(iVar9 + 0x14);
        fVar2 = (float)(dVar28 - (double)fVar4);
        dVar26 = (double)*(float *)(iVar9 + 0x18);
        fVar3 = (float)(dVar27 - (double)fVar5);
        dVar23 = ABS((double)fVar2);
        dVar24 = ABS((double)fVar3);
        *(float *)((int)puVar11 + 0x7c) = fVar2;
        *(float *)(puVar11 + 0x10) = fVar3;
        *(float *)((int)puVar11 + 0x84) = (float)(dVar23 - dVar24);
        uVar14 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)((int)puVar11 + 0x7c));
        if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
          dVar22 = dVar24;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
        dVar24 = ABS((double)*(float *)(puVar11 + 0x10));
        if ((double)*(float *)((int)puVar11 + 0x84) - dVar30 < 0.0) {
          dVar24 = dVar23;
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        dVar23 = dVar30;
        if (dVar30 < dVar22) {
          lVar16 = uVar13 - 0x110;
          lVar15 = uVar13 - 0x78;
          lVar18 = uVar13 - 0x68;
          lVar21 = 2;
          fVar6 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0xb4) = fVar6;
          *(float *)((int)puVar11 + 0xac) = fVar6;
          *(float *)(puVar11 + 0x16) = fVar6;
          *(float *)(puVar11 + 0x15) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar7;
          *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar6;
          *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar6 * fVar6;
            iVar9 = (int)lVar15;
            lVar16 = lVar16 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
            lVar18 = lVar18 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar18 = uVar13 - 0x78;
          pfVar19 = (float *)&DAT_007358e0;
          lVar16 = lVar1;
          lVar15 = lVar18;
          do {
            fVar6 = *pfVar19;
            fVar7 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar6;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar7;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar15 = 2;
          lVar16 = lVar1;
          dVar22 = dVar30;
          do {
            iVar9 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar12 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0xa8)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar23 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
        }
        fVar2 = (float)((double)g_heroPosition.x - (double)fVar4);
        fVar3 = (float)((double)g_heroPosition.y - (double)fVar5);
        dVar25 = ABS((double)fVar2);
        dVar24 = ABS((double)fVar3);
        *(float *)(puVar11 + 0xe) = fVar2;
        *(float *)((int)puVar11 + 0x74) = fVar3;
        *(float *)(puVar11 + 0xf) = (float)(dVar25 - dVar24);
        uVar14 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)(puVar11 + 0xe));
        if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
          dVar22 = dVar24;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
        dVar24 = ABS((double)*(float *)((int)puVar11 + 0x74));
        if ((double)*(float *)(puVar11 + 0xf) - dVar30 < 0.0) {
          dVar24 = dVar25;
        }
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        dVar25 = dVar30;
        if (dVar30 < dVar22) {
          lVar16 = uVar13 - 0x110;
          lVar18 = uVar13 - 0x88;
          lVar15 = uVar13 - 0x98;
          lVar21 = 2;
          fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x94) = fVar4;
          *(float *)((int)puVar11 + 0x8c) = fVar4;
          *(float *)(puVar11 + 0x12) = fVar4;
          *(float *)(puVar11 + 0x11) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar5;
          *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar4;
          *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x78) * fVar4 * fVar4;
            iVar9 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
            lVar18 = lVar18 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar18 = uVar13 - 0x98;
          pfVar19 = (float *)&DAT_007358e0;
          lVar16 = lVar1;
          lVar15 = lVar18;
          do {
            fVar4 = *pfVar19;
            fVar5 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar4;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar15 = 2;
          lVar16 = lVar1;
          dVar22 = dVar30;
          do {
            iVar9 = (int)lVar16;
            iVar12 = (int)lVar18;
            lVar16 = lVar16 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0x88)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar25 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar22 = (double)FastSubRots((float)dVar23,(float)dVar25);
        fVar2 = (float)((double)*(float *)(param_1 + 0x14) - dVar27);
        fVar3 = (float)((double)*(float *)(param_1 + 0x10) - dVar28);
        fVar4 = (float)((double)*(float *)(param_1 + 0x18) - dVar26);
        dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        if (1.5707963705062866 <= dVar22) {
          if (((12.0 <= dVar23) && ((dVar23 < dVar31 || (dVar31 < 12.0)))) ||
             ((12.0 > dVar23 && (dVar31 < dVar23)))) {
            uVar20 = *(undefined4 *)(iVar8 + 0x150);
            dVar29 = dVar22;
            dVar31 = dVar23;
          }
        }
        else if (dVar29 < dVar22) {
          uVar20 = *(undefined4 *)(iVar8 + 0x150);
          dVar29 = dVar22;
          dVar31 = dVar23;
        }
      }
      uVar10 = **(uint **)(iVar8 + 0x160);
      lVar16 = (ulonglong)*(uint *)(iVar8 + 0x150) + (ulonglong)uVar10 +
               (longlong)*(char *)(iVar8 + 0x154);
      uVar14 = lVar16 - (longlong)((int)lVar16 / (int)uVar10) * (longlong)(int)uVar10;
      *(int *)(iVar8 + 0x150) = (int)uVar14;
    } while ((int)uVar14 != 0);
    *(undefined4 *)(iVar8 + 0x150) = uVar20;
  }
  else {
    iVar9 = **(int **)(iVar8 + 0x160);
    if (iVar17 < iVar9 + -1) {
      iVar17 = iVar17 + iVar9 + (int)*(char *)(iVar8 + 0x154);
      *(int *)(iVar8 + 0x150) = iVar17 - (iVar17 / iVar9) * iVar9;
    }
  }
  return;
}


// 0x0438d20 (0x13d0 bytes)
/* Moby 738 */

void UpdateMoby_738(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  int *piVar10;
  f32 fVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  double in_f30;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  
  lVar24 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x140;
  puVar15 = (ulonglong *)lVar1;
  *puVar15 = uVar23;
  puVar15[0x2a] = in_LR;
  puVar15[0x22] = in_f26;
  puVar15[0x23] = in_f27;
  puVar15[0x24] = in_f28;
  puVar15[0x25] = in_f29;
  puVar15[0x26] = (ulonglong)in_f30;
  puVar15[0x27] = in_f31;
  puVar15[0x21] = unaff_r31;
  puVar15[0x20] = unaff_r30;
  puVar15[0x1f] = unaff_r29;
  puVar15[0x1e] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar28 = ZEXT48(pvVar9);
  iVar25 = MB_damage(lVar24,0x210000,0);
  FastDecTimerS16(uVar28 + 0x26);
  if ((iVar25 != 0) && (*(short *)((int)pvVar9 + 0x26) == 0)) {
    fVar3 = *(float *)((int)pvVar9 + 0x20) - *(float *)(iVar25 + 0x2c);
    *(float *)((int)pvVar9 + 0x20) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined4 *)((int)pvVar9 + 0x80) = 0x3c03126f;
      *(undefined4 *)((int)pvVar9 + 0x84) = 0x3a03126f;
      fVar3 = g_FrameTime;
      *(float *)((int)pvVar9 + 0x88) = g_FrameTime * 15.0;
      *(undefined1 *)((int)pvVar9 + 0xad) = 0;
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
      *(undefined4 *)((int)pvVar9 + 0x94) = 1;
      *(float *)((int)pvVar9 + 0x8c) = fVar3 * 10.0;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      MB_StartKick(lVar24,uVar28 + 0x70);
      *(undefined1 *)((int)pvVar9 + 0x67) = 0xb4;
      moby->state = '\x0e';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
    }
    else {
      *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
      sVar7 = *(short *)(*(int *)(iVar25 + 0x20) + 0xa6);
      if ((sVar7 == 0xb0) || (sVar7 == 0xb1)) {
        auVar39 = loadVectorLeftIndexed(4,0x438ca4);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      }
      else {
        auVar40 = loadVectorLeftIndexed(8,0x438ca4);
        auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40,
                           auVar41);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x26,uVar28);
      *(undefined2 *)((int)pvVar9 + 0x26) = uVar13;
      *(undefined4 *)((int)pvVar9 + 0x80) = 0x3c03126f;
      *(undefined4 *)((int)pvVar9 + 0x84) = 0x3a03126f;
      fVar3 = g_FrameTime;
      *(undefined1 *)((int)pvVar9 + 0xad) = 0;
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
      *(undefined4 *)((int)pvVar9 + 0x94) = 1;
      *(float *)((int)pvVar9 + 0x88) = fVar3 * 5.0;
      *(float *)((int)pvVar9 + 0x8c) = fVar3 * 5.0;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      MB_StartKick(lVar24,uVar28 + 0x70);
      if (moby->animationId != '\v') {
        MB_SetAnimation(lVar24,0xb,0,6);
      }
      moby->state = '\f';
    }
    MB_UpdateLightsTransition(lVar24,uVar28 + 0x60);
  }
  bVar2 = moby->state;
  moby->damage = -1;
  if (bVar2 < 8) {
    if (bVar2 == 7) {
      uVar29 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,
                 &DAT_00438ca4,uVar28 + 0x194);
      if ((moby->field43_0x70 & 2U) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if ((8.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
           (6.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar24,0,0,0);
          }
          moby->state = '\x01';
        }
        else {
          M738_00438760(lVar24);
          if (moby->animationId != '\b') {
            MB_SetAnimation(lVar24,8,0,0);
          }
          moby->unk58 = 3.0;
          moby->state = '\t';
        }
      }
    }
    else if (bVar2 == 6) {
      dVar37 = (double)BlendAnimFrame(moby);
      iVar25 = *(int *)((int)pvVar9 + 0x1a4);
      dVar30 = 0.0;
      if (dVar37 == 0.0) {
        GetBonePosition(lVar24,0,uVar23 - 0x80);
        fVar3 = (moby->pos).x;
        *(float *)((int)pvVar9 + 0x180) = fVar3;
        fVar4 = (moby->pos).y;
        *(float *)((int)pvVar9 + 0x184) = fVar4;
        fVar5 = (moby->pos).z;
        *(float *)((int)pvVar9 + 0x188) = fVar5;
        *(f32 *)((int)pvVar9 + 0x18c) = (moby->pos).w;
        fVar6 = (moby->rotation).z + 1.5707963;
        fVar16 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar16 = fVar6;
        }
        fVar18 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar16 < 0.0) {
          fVar18 = fVar16;
        }
        fVar6 = fVar18 * fVar18;
        fVar16 = fVar6 * fVar6 * fVar18;
        fVar19 = fVar6 * fVar16;
        *(float *)((int)pvVar9 + 0x180) =
             (fVar6 * fVar19 * 2.601887e-06 +
             fVar19 * -0.0001980741 + fVar16 * 0.0083330255 + fVar6 * fVar18 * -0.16666657 + fVar18)
             * *(float *)((int)pvVar9 + 0x198) + fVar3;
        fVar3 = (moby->rotation).z;
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        *(float *)((int)pvVar9 + 0x188) = fVar5 + *(float *)((int)pvVar9 + 0x19c);
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar3 = fVar5 * fVar5;
        fVar6 = fVar3 * fVar3 * fVar5;
        fVar16 = fVar3 * fVar6;
        *(float *)((int)pvVar9 + 0x184) =
             (fVar3 * fVar16 * 2.601887e-06 +
             fVar16 * -0.0001980741 + fVar6 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) *
             *(float *)((int)pvVar9 + 0x198) + fVar4;
        uVar29 = 0x3fd0000000000000;
        Delt(0.25,1.0,(float *)((int)pvVar9 + 0x19c));
        fVar4 = *(float *)((int)pvVar9 + 0x180) - *(float *)(puVar15 + 0x18);
        *(float *)(puVar15 + 0x1a) = fVar4;
        fVar5 = *(float *)((int)pvVar9 + 0x184) - *(float *)((int)puVar15 + 0xc4);
        fVar3 = DAT_0085a36c * g_FrameTime;
        *(float *)((int)puVar15 + 0xd4) = fVar5;
        auVar39 = loadVectorLeftIndexed(0x188,uVar28);
        auVar40 = loadVectorRightIndexed(0x198,uVar28);
        auVar42 = loadVectorLeftIndexed(200,lVar1);
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = vectorSubtractFloatingPoint(auVar39 | auVar40,auVar42);
        dVar35 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
        auVar39 = ZEXT416(0xffffffff);
        auVar42 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar39 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        uVar14 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xd8,lVar1
                           );
        *(undefined4 *)(puVar15 + 0x1b) = uVar14;
        *(undefined4 *)((int)puVar15 + 0xdc) = *(undefined4 *)((int)pvVar9 + 0x18c);
        auVar39 = ZEXT416(0xffffffff);
        auVar43 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar45 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar46 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        fVar3 = (float)((double)fVar3 / dVar35);
        dVar31 = (double)(fVar4 * fVar3);
        dVar32 = (double)(fVar5 * fVar3);
        dVar37 = dVar30;
        if (dVar30 - dVar35 < 0.0) {
          dVar37 = dVar31;
        }
        dVar33 = dVar30;
        if (dVar30 - dVar35 < 0.0) {
          dVar33 = dVar32;
        }
        if (dVar35 - dVar30 < 0.0) {
          dVar37 = dVar31;
        }
        if (dVar35 - dVar30 < 0.0) {
          dVar33 = dVar32;
        }
        *(float *)(puVar15 + 0x1a) = (float)dVar37;
        *(float *)((int)puVar15 + 0xd4) = (float)dVar33;
        auVar46 = loadVectorLeftIndexed(0x68,0x438ca4);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar42);
        auVar41 = loadVectorLeftIndexed(0x6c,0x438ca4);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar46 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
        auVar42 = vectorReciprocalEstimateFloatingPoint(auVar41);
        auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar41,auVar46);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar47,auVar39);
        auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar41,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar39,auVar42,auVar44);
        auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar41,auVar46);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar39,auVar43);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar45);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xd8,lVar1
                           );
        *(undefined4 *)(puVar15 + 0x1b) = uVar14;
        FUN_003bbc08(uVar29,uVar23 - 0x70,uVar23 - 0x80,lVar24,10);
        iVar25 = *(int *)((int)pvVar9 + 0x1a4) + 1;
        *(int *)((int)pvVar9 + 0x1a4) = iVar25;
      }
      if (((3 < iVar25) ||
          (fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
          fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3), *(float *)((int)pvVar9 + 0x1a0) < fVar3)) ||
         (fVar4 = ABS((moby->pos).z - g_heroPosition.z), 6.0 < fVar4)) {
        if (moby->animationId != '\x05') {
          MB_SetAnimation(lVar24,5,0,0);
        }
        moby->state = '\a';
      }
      else if (((fVar3 < 4.0) && (fVar4 < 6.0)) &&
              ((*(int *)((int)pvVar9 + 0x1ac) == 0 ||
               (*(int *)((int)pvVar9 + 0x150) < **(int **)((int)pvVar9 + 0x160) + -1)))) {
        if (moby->animationId != '\b') {
          MB_SetAnimation(lVar24,8,0,0);
        }
        fVar3 = DAT_0085a378;
        moby->state = '\t';
        moby->unk58 = fVar3;
      }
    }
    else if (bVar2 == 3) {
      piVar10 = *(int **)((int)pvVar9 + 0x130);
      if (piVar10 == (int *)0x0) {
        dVar37 = 0.0;
        dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar24 + 0x10,0);
        dVar35 = (double)(moby->pos).z;
        in_f30 = (double)(float)(dVar30 - dVar35);
        if (in_f30 - (double)(g_FrameTime * -10.0) < 0.0) {
          in_f30 = (double)(g_FrameTime * -10.0);
        }
        (moby->pos).z = (float)(dVar35 + in_f30);
      }
      else {
        iVar25 = *piVar10;
        iVar27 = *(int *)((int)pvVar9 + 0x120) + iVar25 + (int)*(char *)((int)pvVar9 + 0x124);
        iVar27 = iVar27 - (iVar27 / iVar25) * iVar25;
        dVar37 = in_f30;
        uVar29 = FUN_005e8338((double)((float)piVar10[iVar27 * 4 + 4] - (moby->pos).x),
                              (double)((float)piVar10[iVar27 * 4 + 5] - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar29,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,
                   &DAT_00438ca4,uVar28 + 0x194);
        piVar10 = *(int **)((int)pvVar9 + 0x130);
        if (*(int *)((int)pvVar9 + 0x120) == *piVar10 + -1) {
          moby->state = '\x01';
        }
        else {
          fVar3 = (moby->pos).y;
          fVar4 = (moby->pos).x;
          fVar20 = (float)piVar10[iVar27 * 4 + 5] - fVar3;
          fVar16 = (float)piVar10[iVar27 * 4 + 4] - fVar4;
          fVar5 = (moby->pos).z;
          fVar18 = (float)piVar10[iVar27 * 4 + 6] - fVar5;
          fVar6 = 0.0;
          fVar22 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar20 * fVar20);
          fVar21 = (g_FrameTime * 5.0) / fVar22;
          fVar19 = fVar6;
          if (0.0 - fVar22 < 0.0) {
            fVar19 = fVar20 * fVar21;
          }
          fVar17 = fVar6;
          if (0.0 - fVar22 < 0.0) {
            fVar17 = fVar16 * fVar21;
          }
          if (0.0 - fVar22 < 0.0) {
            fVar6 = fVar18 * fVar21;
          }
          if (fVar22 - 0.0 < 0.0) {
            fVar19 = fVar20 * fVar21;
          }
          if (fVar22 - 0.0 < 0.0) {
            fVar17 = fVar16 * fVar21;
          }
          if (fVar22 - 0.0 < 0.0) {
            fVar6 = fVar18 * fVar21;
          }
          fVar3 = fVar3 + fVar19;
          fVar4 = fVar4 + fVar17;
          fVar5 = fVar5 + fVar6;
          fVar18 = (float)piVar10[iVar27 * 4 + 5] - fVar3;
          fVar6 = (float)piVar10[iVar27 * 4 + 4] - fVar4;
          fVar16 = (float)piVar10[iVar27 * 4 + 6] - fVar5;
          (moby->pos).x = fVar4;
          (moby->pos).y = fVar3;
          (moby->pos).z = fVar5;
          if (SQRT(fVar16 * fVar16 + fVar6 * fVar6 + fVar18 * fVar18) < 0.5) {
            *(int *)((int)pvVar9 + 0x120) = iVar27;
          }
        }
      }
      if (SQRT((float)(in_f30 * in_f30 +
                      (double)(float)(dVar37 * dVar37 + (double)(float)(dVar37 * dVar37)))) <
          g_FrameTime) {
        moby->state = '\x01';
      }
    }
    else if (bVar2 == 2) {
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 25.0) {
        moby->state = '\x03';
      }
    }
    else if (bVar2 == 1) {
      uVar29 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,
                 &DAT_00438ca4,uVar28 + 0x194);
      FastDecTimerS32(uVar28 + 400);
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      if (((SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                 (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) <
            *(float *)((int)pvVar9 + 0x1a0)) &&
          (dVar37 = 4.0, ABS((moby->pos).z - g_heroPosition.z) < 4.0)) &&
         ((moby->enabled != '\0' && (*(int *)((int)pvVar9 + 400) == 0)))) {
        dVar35 = (double)(moby->rotation).z;
        dVar30 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar4),
                                      (double)(g_heroPosition.y - fVar3));
        dVar30 = (double)FastSubRots((float)dVar35,(float)dVar30);
        fVar4 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        if (dVar30 < 0.0872664600610733) {
          *(undefined4 *)((int)pvVar9 + 0x198) = 0x40800000;
          fVar3 = DAT_00969f88 - (moby->pos).z;
          *(undefined4 *)((int)pvVar9 + 0x1a4) = 0;
          *(float *)((int)pvVar9 + 0x19c) = (float)((double)fVar3 - dVar37);
          moby->state = '\x06';
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar24,4,10,6);
          }
          *(undefined4 *)((int)pvVar9 + 400) = 0;
          goto LAB_0043a0a8;
        }
      }
      if (((SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                 (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)) < 4.0) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 6.0)) &&
         ((*(int *)((int)pvVar9 + 0x1ac) == 0 ||
          (*(int *)((int)pvVar9 + 0x150) < **(int **)((int)pvVar9 + 0x160) + -1)))) {
        if (moby->animationId != '\b') {
          MB_SetAnimation(lVar24,8,0,0);
        }
        fVar3 = DAT_0085a378;
        moby->state = '\t';
        moby->unk58 = fVar3;
      }
    }
    else if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar9 + 0x150) = 0;
      *(Spline **)((int)pvVar9 + 0x160) = Splines[*(int *)((int)pvVar9 + 0x164)];
      if (*(int *)((int)pvVar9 + 0x134) < 0) {
        *(undefined4 *)((int)pvVar9 + 0x130) = 0;
        fVar3 = (moby->pos).z + 20.0;
      }
      else {
        pSVar12 = Splines[*(int *)((int)pvVar9 + 0x134)];
        *(undefined4 *)((int)pvVar9 + 0x120) = 0;
        *(Spline **)((int)pvVar9 + 0x130) = pSVar12;
        (moby->pos).x = pSVar12->points[0].x;
        (moby->pos).y = pSVar12->points[0].y;
        fVar3 = pSVar12->points[0].z;
        (moby->pos).w = pSVar12->points[0].w;
      }
      MVar8 = moby->modeBits;
      (moby->pos).z = fVar3;
      moby->modeBits = MVar8 | CAN_BE_AUTO_TARGETED;
      *(undefined1 *)((int)pvVar9 + 0x29) = 0;
      uVar26 = g_heroMobyPtr->light;
      moby->color = g_heroMobyPtr->color;
      moby->light = uVar26;
      MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
      *(undefined4 *)((int)pvVar9 + 0x10c) = 0x3cf5c28f;
      *(undefined4 *)((int)pvVar9 + 0x110) = 0x3e99999a;
      *(undefined4 *)((int)pvVar9 + 0x114) = 0x3e800000;
      *(float *)((int)pvVar9 + 0xec) = g_FrameTimeSq * 5.0;
      fVar4 = DAT_0085a370;
      fVar3 = g_FrameTime;
      *(undefined4 *)((int)pvVar9 + 0xdc) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0xd8) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
      *(undefined1 *)((int)pvVar9 + 0x28) = 1;
      *(undefined4 *)((int)pvVar9 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar9 + 0x48) = 0;
      *(undefined4 *)((int)pvVar9 + 0x44) = 0;
      *(undefined4 *)((int)pvVar9 + 0x40) = 0;
      *(float *)((int)pvVar9 + 0xf4) = fVar4 * fVar3;
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar24,0,0,0);
      }
      moby->state = '\x02';
    }
  }
  else if (bVar2 == 0xe) {
    uVar26 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar26 & 6) != 0) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 1;
      puVar15[0x15] = 1;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar24,uVar28 + 0x40,lVar24 + 0x10,1,0xffffffffffffffff,5,2,4);
      DeleteMoby(moby);
      return;
    }
    fVar11 = (moby->pos).x;
    uVar26 = (int)fVar11 >> 0x1f;
    iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26;
    if ((((iVar25 < 0x40000000) || (0x447f4000 < iVar25)) ||
        (fVar11 = (moby->pos).y, uVar26 = (int)fVar11 >> 0x1f,
        iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, 0x447f4000 < iVar25 || iVar25 < 0x40000000))
       || ((fVar11 = (moby->pos).z, uVar26 = (int)fVar11 >> 0x1f,
           iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, iVar25 < 0x40000000 ||
           (0x447f4000 < iVar25)))) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 1;
      puVar15[0x15] = 1;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar24,uVar28 + 0x40,lVar24 + 0x10,1,0xffffffffffffffff,5,2,4);
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar2 == 0xc) {
    uVar26 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar26 & 0x40) != 0) {
      moby->state = '\b';
      if (moby->animationId == '\x06') {
        return;
      }
      MB_SetAnimation(lVar24,6,0,3);
      return;
    }
    fVar11 = (moby->pos).x;
    uVar26 = (int)fVar11 >> 0x1f;
    iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26;
    if (((iVar25 < 0x40000000) || (0x447f4000 < iVar25)) ||
       ((fVar11 = (moby->pos).y, uVar26 = (int)fVar11 >> 0x1f,
        iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, 0x447f4000 < iVar25 || iVar25 < 0x40000000
        || ((fVar11 = (moby->pos).z, uVar26 = (int)fVar11 >> 0x1f,
            iVar25 = (uVar26 >> 1 ^ (uint)fVar11) - uVar26, iVar25 < 0x40000000 ||
            (0x447f4000 < iVar25)))))) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 1;
      puVar15[0x15] = 1;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar24,uVar28 + 0x40,lVar24 + 0x10,1,0xffffffffffffffff,5,2,4);
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar2 == 0xb) {
    uVar29 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24,&DAT_00438ca4,
               uVar28 + 0x194);
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar24,0,0,6);
      }
      moby->state = '\x01';
    }
  }
  else if (bVar2 == 10) {
    iVar25 = *(int *)((int)pvVar9 + 0x160) + *(int *)((int)pvVar9 + 0x150) * 0x10;
    dVar32 = (double)*(float *)(iVar25 + 0x10);
    dVar33 = (double)*(float *)(iVar25 + 0x14);
    dVar34 = (double)*(float *)(iVar25 + 0x18);
    dVar36 = (double)*(float *)(iVar25 + 0x1c);
    uVar29 = FUN_005e8338((double)(float)(dVar32 - (double)(moby->pos).x),
                          (double)(float)(dVar33 - (double)(moby->pos).y));
    dVar38 = 0.10000000149011612;
    OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar24);
    dVar30 = (double)(moby->rotation).z;
    dVar37 = (double)FUN_005e8338((double)(float)(dVar32 - (double)(moby->pos).x),
                                  (double)(float)(dVar33 - (double)(moby->pos).y));
    dVar37 = (double)FastSubRots((float)dVar30,(float)dVar37);
    dVar31 = (double)(moby->pos).x;
    dVar35 = (double)(moby->pos).y;
    dVar30 = (double)(moby->pos).z;
    if (dVar37 < 0.1745329201221466) {
      *(float *)((int)puVar15 + 0xec) = (float)dVar36;
      fVar3 = DAT_0085a370 * g_FrameTime;
      *(float *)(puVar15 + 0x1c) = (float)(dVar32 - dVar31);
      *(float *)((int)puVar15 + 0xe4) = (float)(dVar33 - dVar35);
      *(float *)(puVar15 + 0x1d) = (float)(dVar34 - dVar30);
      ClampVec3Magnitude((double)fVar3,(Vec4 *)(puVar15 + 0x1c));
      fVar3 = (moby->pos).x + *(float *)(puVar15 + 0x1c);
      dVar31 = (double)fVar3;
      fVar4 = (moby->pos).y + *(float *)((int)puVar15 + 0xe4);
      dVar35 = (double)fVar4;
      fVar5 = (moby->pos).z + *(float *)(puVar15 + 0x1d);
      dVar30 = (double)fVar5;
      (moby->pos).x = fVar3;
      (moby->pos).y = fVar4;
      (moby->pos).z = fVar5;
    }
    if ((double)SQRT((float)(dVar30 - dVar34) * (float)(dVar30 - dVar34) +
                     (float)(dVar31 - dVar32) * (float)(dVar31 - dVar32) +
                     (float)(dVar35 - dVar33) * (float)(dVar35 - dVar33)) < dVar38) {
      if (moby->animationId != '\n') {
        MB_SetAnimation(lVar24,10,0,0);
      }
      moby->state = '\v';
    }
  }
  else if (bVar2 == 9) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\b') {
        MB_SetAnimation(lVar24,8,0,0);
      }
      M738_00438760(lVar24);
      moby->unk58 = 1.0;
      moby->state = '\n';
    }
  }
  else if ((bVar2 == 8) && ((moby->field43_0x70 & 2U) != 0)) {
    if (moby->animationId != '\a') {
      MB_SetAnimation(lVar24,7,0,0);
    }
    fVar3 = DAT_0085a378;
    moby->state = '\t';
    moby->unk58 = fVar3;
  }
LAB_0043a0a8:
  MB_ColorDyingMoby(lVar24,uVar28 + 0x60);
  return;
}


