// game/update/moby133.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x24bb50-0x24c2f8
#include "game/update/moby133.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1327.h"
#include "idol/fastfunc.h"

// 0x024bb50 (0x100 bytes)
void M1327_0024bb50(MobyInstance *param_1)

{
  int iVar1;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  iVar1 = MB_damage(param_1,0x330000,0);
  if (iVar1 != 0) {
    param_1->state = '\x02';
    param_1->enabled = '\0';
    param_1->collision = (ushort *)0x0;
    param_1->modeBits = param_1->modeBits | DISABLED;
    M133_0024b718(param_1,&DAT_00969de0);
    PlayMobySound(0,0,param_1);
    if ((*(int *)(iVar1 + 0x20) != 0) && (*(short *)(*(int *)(iVar1 + 0x20) + 0xa6) == 0)) {
      auVar2 = ZEXT416(0xffffffff);
      auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
      auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
      auVar2 = loadVectorLeftIndexed(in_LR,0x24bb4c);
      auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar2 = vectorMultiplyAddFloatingPoint
                         (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
      auVar3 = loadVectorLeftIndexed(0x8c4,0x969ce0);
      auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
      auVar2 = ZEXT416((uint)(auVar3.piece<0,4>() + auVar2.piece<0,4>())) & (GPiece<16>)0xffffffff;
      DAT_0096a5a4 = storeVectorElementWordIndexed
                               (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x8c4,
                                0x969ce0);
    }
    param_1->damage = -1;
  }
  return;
}


// 0x024bc98 (0x660 bytes)
// inlined: FastAtan2 @0x24bf64
/* Moby 133 */

void UpdateMoby_133(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar16;
  undefined4 uVar17;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f31;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0xe0;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar13;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = in_f31;
  puVar8[0x1a] = unaff_r31;
  puVar8[0x19] = unaff_r30;
  puVar8[0x18] = unaff_r29;
  puVar8[0x17] = unaff_r28;
  pvVar7 = moby->pVar;
  iVar16 = MB_damage(moby,0x330000,0);
  if (iVar16 != 0) {
    moby->state = '\x02';
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
    M133_0024b718(moby,&DAT_00969de0);
    PlayMobySound(0,0,moby);
    if ((*(int *)(iVar16 + 0x20) != 0) && (*(short *)(*(int *)(iVar16 + 0x20) + 0xa6) == 0)) {
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(in_LR,0x24bc50);
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar25 = loadVectorLeftIndexed(0x8c4,0x969ce0);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = ZEXT416((uint)(auVar25.piece<0,4>() + auVar24.piece<0,4>())) & (GPiece<16>)0xffffffff;
      DAT_0096a5a4 = storeVectorElementWordIndexed
                               (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x8c4,
                                0x969ce0);
    }
    moby->damage = -1;
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->updateDistance = '@';
    if (moby->animationId != '\0') {
      MB_SetAnimation(moby,0,0,0);
    }
    if (*(int *)((int)pvVar7 + 0xb0) == -1) {
      DeleteMoby(moby);
    }
    else if (Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt == 0) {
      DeleteMoby(moby);
    }
    else {
      MB_InitDefaultParams((float *)((int)pvVar7 + 0x60));
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0x3f800000;
      *(undefined4 *)((int)pvVar7 + 0x68) = 0x3f800000;
      uVar17 = FastDoubleToInt(0x40799999a0000000);
      *(undefined4 *)((int)pvVar7 + 0x60) = uVar17;
      *(float *)((int)pvVar7 + 0x84) = g_FrameTime * 4.0;
    }
  }
  else if (bVar1 < 2) {
    fVar2 = Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].x -
            (moby->pos).x;
    fVar4 = Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].y -
            (moby->pos).y;
    fVar5 = ABS(fVar2);
    fVar3 = ABS(fVar4);
    *(float *)(puVar8 + 0x10) = fVar2;
    *(float *)((int)puVar8 + 0x84) = fVar4;
    *(float *)(puVar8 + 0x11) = fVar5 - fVar3;
    fVar2 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar8 + 0x84));
    if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
      fVar9 = fVar5;
    }
    if (0.0 < fVar4) {
      lVar20 = uVar13 - 0xd0;
      lVar19 = uVar13 - 0x54;
      lVar18 = uVar13 - 0x44;
      lVar22 = 2;
      fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x13) = fVar4;
      *(float *)(puVar8 + 0x12) = fVar4;
      *(float *)((int)puVar8 + 0x94) = fVar4;
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar5;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar20 + 0x8c) = *(float *)((int)lVar20 + 0x7c) * fVar4 * fVar4;
        iVar16 = (int)lVar19;
        lVar20 = lVar20 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar20 = uVar13 - 0x54;
      pfVar21 = (float *)&DAT_007358e0;
      lVar22 = 4;
      lVar18 = lVar20;
      lVar19 = lVar15;
      do {
        fVar4 = *pfVar21;
        fVar5 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 0x8c) = *(float *)((int)lVar19 + 0x8c) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar18 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar16 + 0x8c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8)
                + *(float *)(iVar10 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    OrganicDeltAng
              (fVar2,g_FrameTimeSq * 1.0471976,g_FrameTimeSq * 1.0471976,
               g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 0xbc));
    fVar2 = (moby->rotation).z;
    fVar5 = fVar2 + 1.5707963;
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar3 = fVar5;
    }
    fVar6 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar6 = fVar4;
    }
    *(undefined4 *)(puVar8 + 0xf) = 0;
    fVar2 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar5 = fVar6 * fVar6;
    fVar4 = fVar2 * fVar2;
    fVar3 = fVar5 * fVar5 * fVar6;
    fVar11 = fVar4 * fVar4 * fVar2;
    fVar9 = fVar5 * fVar3;
    fVar12 = fVar4 * fVar11;
    *(float *)((int)puVar8 + 0x74) =
         fVar5 * fVar9 * 2.601887e-06 +
         fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar6 * -0.16666657 + fVar6;
    dVar23 = 1.0;
    *(float *)(puVar8 + 0xe) =
         fVar4 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2;
    MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0x60),puVar8 + 0xe,
               (int)pvVar7 + 0x40);
    iVar16 = FastDecTimerS32(ZEXT48(pvVar7) + 0xb8);
    if ((iVar16 != 0) ||
       (fVar2 = (moby->pos).y -
                Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].y,
       fVar4 = (moby->pos).x -
               Splines[*(int *)((int)pvVar7 + 0xb0)]->points[*(int *)((int)pvVar7 + 0xb4)].x,
       (double)SQRT(fVar4 * fVar4 + fVar2 * fVar2) < dVar23)) {
      iVar16 = MB_randInt(Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt);
      iVar16 = *(int *)((int)pvVar7 + 0xb4) + iVar16;
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      *(int *)((int)pvVar7 + 0xb4) =
           iVar16 - (iVar16 / Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt) *
                    Splines[*(int *)((int)pvVar7 + 0xb0)]->cnt;
      auVar24 = loadVectorLeftIndexed(0x3c,0x24bc50);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar17 = storeVectorElementWordIndexed
                         (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0xb8,
                          ZEXT48(pvVar7));
      *(undefined4 *)((int)pvVar7 + 0xb8U & 0xfffffffc) = uVar17;
    }
    M133_0024b2e8(moby);
  }
  else if ((bVar1 < 3) &&
          (fVar2 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
          48.0 < SQRT(fVar4 * fVar4 + fVar2 * fVar2))) {
    moby->state = '\x01';
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->collision = moby->pClass->collision;
  }
  return;
}


