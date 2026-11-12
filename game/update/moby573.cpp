// game/update/moby573.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3c0528-0x3c1f3c
#include <stdlib.h>
#include "game/update/moby573.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby574.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x03c0528 (0x450 bytes)
// inlined: FastAtan2 @0x3c0774
void M573_003c0528(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x18] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar19 = ZEXT48(pvVar6);
  iVar13 = *(int *)((int)pvVar6 + 0x38);
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  if ((iVar13 != 0) ||
     ((*(int *)((int)pvVar6 + 0x248) != -1 &&
      (iVar13 = M573_003c2108(g_MobyInstance + *(int *)((int)pvVar6 + 0x248)), iVar13 != 0)))) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(in_LR,0x3c0508);
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x240,uVar19);
    *(undefined4 *)((int)pvVar6 + 0x240U & 0xfffffffc) = uVar7;
  }
  iVar13 = FastDecTimerS32(uVar19 + 0x240);
  if (iVar13 == 0) {
    fVar1 = *(float *)((int)pvVar6 + 0x22c) * 2.0;
  }
  else {
    fVar1 = *(float *)((int)pvVar6 + 0x22c);
  }
  *(float *)((int)pvVar6 + 0x230) = fVar1;
  dVar24 = 0.0;
  *(undefined4 *)((int)puVar8 + 0x74) = 0;
  iVar13 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,iVar13,uVar19 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
  if ((*(int *)(puVar8 + 0xe) != 1) && (param_1->state != '\x15')) {
    if (param_1->group != -1) {
      MB_SetGroupField(param_1->group,1);
    }
    *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x74)
    ;
    fVar1 = g_FrameTimeSq;
    *(undefined1 *)((int)pvVar6 + 0x15d) = 0;
    *(undefined4 *)((int)pvVar6 + 0x144) = 9;
    *(float *)((int)pvVar6 + 0x130) = fVar1 * 50.0;
    fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
    fVar4 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
    dVar23 = ABS((double)fVar1);
    dVar21 = ABS((double)fVar4);
    *(float *)((int)puVar8 + 0x7c) = fVar1;
    *(float *)(puVar8 + 0x10) = fVar4;
    *(float *)((int)puVar8 + 0x84) = (float)(dVar23 - dVar21);
    MVar5 = param_1->modeBits;
    uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
    dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
    if ((double)*(float *)((int)puVar8 + 0x84) - dVar24 < 0.0) {
      dVar22 = dVar21;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar21 = ABS((double)*(float *)(puVar8 + 0x10));
    if ((double)*(float *)((int)puVar8 + 0x84) - dVar24 < 0.0) {
      dVar21 = dVar23;
    }
    if (dVar24 < dVar22) {
      lVar17 = uVar11 - 0xc0;
      lVar14 = uVar11 - 0x38;
      lVar16 = uVar11 - 0x48;
      lVar20 = 2;
      fVar2 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
      fVar3 = fVar2 * fVar2;
      *(float *)((int)puVar8 + 0x94) = fVar2;
      *(float *)((int)puVar8 + 0x8c) = fVar2;
      *(float *)(puVar8 + 0x12) = fVar2;
      *(float *)(puVar8 + 0x11) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar3;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar2;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar2 * fVar2;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = uVar11 - 0x48;
      lVar20 = 4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar17;
      lVar16 = lVar12;
      do {
        fVar2 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)lVar17;
        lVar12 = lVar12 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0x88)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
    }
    *(float *)(puVar8 + 0xf) = (float)dVar24;
    MVar5 = MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                     DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                     TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    param_1->modeBits = MVar5;
    *(float *)((int)pvVar6 + 0x13c) = g_FrameTime * 10.0;
    MB_SetupJumpArc
              (0x4012000000000000,0x4000000000000000,&DAT_003c0508,MVar5,uVar19 + 0x120);
    *(undefined4 *)((int)pvVar6 + 0x170) = 0x40a00000;
    *(undefined4 *)((int)pvVar6 + 0x174) = 0x41400000;
    uVar7 = *(undefined4 *)(iVar13 + 0x18);
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(puVar8 + 7) = uVar7;
    uVar7 = *(undefined4 *)(iVar13 + 0x1c);
    *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)((int)puVar8 + 0x3c) = uVar7;
    MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar11 - 0x58,uVar19 + 0x138,uVar19 + 0x13c);
    MB_StartKick((double)*(float *)(puVar8 + 0xf),param_1,uVar19 + 0x120);
    param_1->state = '\x15';
    *(undefined1 *)((int)pvVar6 + 0x117) = 0xf0;
    MB_UpdateLightsTransition(param_1,uVar19 + 0x110);
  }
  param_1->damage = -1;
  return;
}


// 0x03c0a18 (0x1524 bytes)
/* Moby 573 */

void UpdateMoby_573(void *this_,MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  Spline *pSVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  float local_160;
  float local_15c;
  undefined4 local_158;
  GPiece<16> auStack_150;
  GPiece<16> auStack_140;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  GPiece<16> auStack_f0;
  Vec4 local_e0 [4];
  MobyInstance *local_a0;
  uint local_90;
  GPiece<4> auStack_8c;
  longlong local_88;
  
  lVar15 = (longlong)(int)this_;
  uVar18 = *(uint *)((int)this_ + 0x78);
  uVar20 = (ulonglong)uVar18;
  MB_getTarget((double)*(float *)(uVar18 + 0x230),lVar15,moby,local_e0);
  DoManipulator(0x4000ccccc0000000,(MobyInstance *)this_,0,(Manipulator *)(uVar18 + 0x280))
  ;
  M573_003c0528(lVar15);
  FastDecTimerS32(uVar20 + 0x244);
  bVar1 = *(byte *)((int)this_ + 0x20);
  uVar6 = *(ushort *)((int)this_ + 0x34);
  fVar4 = *(float *)((int)this_ + 0x10);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      pSVar7 = Splines[*(int *)(uVar18 + 0x270)];
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,ZEXT48(pSVar7),lVar15 + 0x10,auStack_140,
                 &local_90,auStack_8c,*(int *)(uVar18 + 0x270) * 4,0);
      uVar16 = *(uint *)(uVar18 + 0x278);
      lVar19 = (ulonglong)uVar16 +
               ((longlong)(int)uVar16 - (longlong)(int)local_90 >> 0x3f &
               (ulonglong)local_90 - (ulonglong)uVar16);
      *(int *)(uVar18 + 0x278) = (int)lVar19;
      uVar16 = MB_UpdateNavMoveTurning
                         (lVar15,uVar20 + 0x180,ZEXT48(pSVar7) + lVar19 * 0x10 + 0x10 & 0xffffffff,
                          uVar20 + 0x40);
      if ((uVar16 & 0x14) != 0) {
        if (*(int *)(uVar18 + 0x278) < pSVar7->cnt + -1) {
          *(int *)(uVar18 + 0x278) = *(int *)(uVar18 + 0x278) + 1;
        }
        else {
          *(undefined4 *)(uVar18 + 0x270) = 0xffffffff;
          cVar3 = *(char *)((int)this_ + 0x53);
          *(undefined1 *)((int)this_ + 0x20) = 1;
          if (cVar3 != '\x01') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 10.5));
            cVar3 = *(char *)((int)this_ + 0x53);
          }
          if (*(int *)(uVar18 + 0x248) != -1) {
            if (cVar3 != '\0') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar15,0,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this_ + 0x20) = 2;
          }
        }
      }
      iVar17 = MB_randInt(0xe);
      if ((iVar17 == 0) &&
         ((((*(int *)(uVar18 + 0x248) == -1 ||
            (g_MobyInstance + *(int *)(uVar18 + 0x248) == (MobyInstance *)0x0)) ||
           (uVar2 = g_MobyInstance[*(int *)(uVar18 + 0x248)].state, uVar2 == 0xfd || uVar2 == 0xfe))
          || (iVar17 = M573_003c2108(), iVar17 != 0)))) {
        *(undefined4 *)(uVar18 + 0x270) = 0xffffffff;
        dVar21 = (double)MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
        *(undefined1 *)((int)this_ + 0x20) = 4;
        if (*(char *)((int)this_ + 0x53) != '\x03') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 4) {
      uVar22 = FUN_005e8338((double)(local_e0[0].x - fVar4),
                            (double)(local_e0[0].y - *(float *)((int)this_ + 0x14)));
      OrganicDeltAngSpeed
                (uVar22,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar15);
      fVar4 = *(float *)((int)this_ + 0x48);
      fVar5 = fVar4 + 1.5707963;
      fVar9 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar9 = fVar4;
      }
      fVar11 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar11 = fVar5;
      }
      fVar10 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar4 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar11 < 0.0) {
        fVar4 = fVar11;
      }
      fVar5 = fVar10 * fVar10;
      fVar9 = fVar4 * fVar4;
      fVar13 = fVar5 * fVar5 * fVar10;
      local_158 = 0;
      fVar11 = fVar9 * fVar9 * fVar4;
      fVar14 = fVar5 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_15c = (fVar5 * fVar14 * 2.601887e-06 +
                  fVar14 * -0.0001980741 +
                  fVar13 * 0.0083330255 + fVar5 * fVar10 * -0.16666657 + fVar10) * 2.0;
      local_160 = (fVar9 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar11 * 0.0083330255 + fVar9 * fVar4 * -0.16666657 + fVar4) * 2.0;
      MB_UpdateNavMove
                (0x3ff0000000000000,(MobyInstance *)this_,(MobyInstance *)(uVar18 + 0x180),&local_160
                 ,auStack_150);
      iVar17 = FastDecTimerS32(uVar20 + 0x23c);
      if (iVar17 != 0) {
        dVar21 = (double)MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
      }
      fVar4 = *(float *)((int)this_ + 0x14) - local_e0[0].y;
      fVar9 = *(float *)((int)this_ + 0x10) - local_e0[0].x;
      fVar5 = *(float *)(uVar18 + 0x234) * g_FrameTime;
      if (fVar5 * 0.5 * animationSpeed * 40.0 + fVar5 * animationSpeed * 10.0 + 1.5 <=
          SQRT(fVar9 * fVar9 + fVar4 * fVar4)) {
        local_e0[0].y = local_e0[0].y - *(float *)(uVar18 + 0x204);
        local_e0[0].x = local_e0[0].x - *(float *)(uVar18 + 0x200);
        fVar4 = local_e0[0].z - *(float *)(uVar18 + 0x208);
        if ((*(float *)(uVar18 + 0x230) <
             SQRT(fVar4 * fVar4 + local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y)) ||
           (3.0 < ABS(local_e0[0].z - *(float *)((int)this_ + 0x18)))) {
          *(undefined1 *)((int)this_ + 0x20) = 7;
        }
      }
      else {
        *(undefined1 *)((int)this_ + 0x20) = 6;
        if (*(char *)((int)this_ + 0x53) != '\x05') {
          uVar22 = FastDoubleToInt((double)(animationSpeed * 10.0));
          MB_SetAnimation(lVar15,5,0,uVar22);
        }
      }
    }
    else if (bVar1 == 3) {
      uVar22 = FUN_005e8338((double)(local_e0[0].x - fVar4),
                            (double)(local_e0[0].y - *(float *)((int)this_ + 0x14)));
      OrganicDeltAngSpeed
                (uVar22,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,
                 &DAT_003c0978,uVar20 + 0x220);
      if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
        dVar21 = (double)MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
        *(undefined1 *)((int)this_ + 0x20) = 4;
        if (*(char *)((int)this_ + 0x53) != '\x03') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 2) {
      iVar17 = MB_randInt(0xe);
      if ((iVar17 == 0) &&
         (((*(int *)(uVar18 + 0x248) == -1 ||
           (g_MobyInstance + *(int *)(uVar18 + 0x248) == (MobyInstance *)0x0)) ||
          ((uVar2 = g_MobyInstance[*(int *)(uVar18 + 0x248)].state, uVar2 == 0xfd || uVar2 == 0xfe ||
           (iVar17 = M573_003c2108(), iVar17 != 0)))))) {
        dVar21 = (double)MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
        *(undefined1 *)((int)this_ + 0x20) = 4;
        if (*(char *)((int)this_ + 0x53) != '\x03') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 1) {
      if (*(int *)(uVar18 + 0x270) == -1) {
        iVar17 = MB_randInt(0xe);
        if (((iVar17 == 0) &&
            (local_e0[0].y = local_e0[0].y - *(float *)(uVar18 + 0x204),
            local_e0[0].x = local_e0[0].x - *(float *)(uVar18 + 0x200),
            fVar4 = local_e0[0].z - *(float *)(uVar18 + 0x208),
            SQRT(fVar4 * fVar4 + local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y) <
            *(float *)(uVar18 + 0x230))) &&
           (ABS(local_e0[0].z - *(float *)((int)this_ + 0x18)) < 3.0)) {
          *(undefined1 *)((int)this_ + 0x20) = 3;
          if (*(char *)((int)this_ + 0x53) != '\x02') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 10.5));
          }
          *(undefined4 *)((int)this_ + 0x58) = 0x3f60c7ce;
        }
      }
      else {
        pSVar7 = Splines[*(int *)(uVar18 + 0x270)];
        fVar4 = pSVar7->points[0].x;
        *(float *)((int)this_ + 0x10) = fVar4;
        fVar5 = pSVar7->points[0].y;
        *(float *)((int)this_ + 0x14) = fVar5;
        *(float *)((int)this_ + 0x18) = pSVar7->points[0].z;
        *(float *)((int)this_ + 0x1c) = pSVar7->points[0].w;
        dVar21 = (double)FUN_005e8338((double)(pSVar7->points[1].x - fVar4),
                                      (double)(pSVar7->points[1].y - fVar5));
        *(float *)((int)this_ + 0x48) = (float)dVar21;
        iVar17 = MB_randInt(0xe);
        if (((iVar17 == 0) &&
            (iVar17 = M574_003c220c(*(undefined1 *)((int)this_ + 0x21)),
            iVar17 != 0)) ||
           ((iVar17 = MB_IsPntInCuboid(local_e0,(longlong)*(int *)(uVar18 + 0x27c)),
            iVar17 != 0 ||
            ((local_e0[0].y = local_e0[0].y - *(float *)((int)this_ + 0x14),
             local_e0[0].x = local_e0[0].x - *(float *)((int)this_ + 0x10),
             local_e0[0].z = local_e0[0].z - *(float *)((int)this_ + 0x18),
             SQRT(local_e0[0].z * local_e0[0].z +
                  local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y) <
             *(float *)(uVar18 + 0x274) && (ABS(local_e0[0].z) < 4.0)))))) {
          *(undefined4 *)(uVar18 + 0x278) = 0;
          *(undefined1 *)((int)this_ + 0x20) = 5;
          if (*(char *)((int)this_ + 0x53) != '\x03') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      if ((*(short *)((int)this_ + 0xb2) == 0x309) && (Level == Kerwan)) {
        DeleteMoby((MobyInstance *)this_);
        return;
      }
      *(float *)(uVar18 + 0x200) = fVar4;
      *(ushort *)((int)this_ + 0x34) = uVar6 | 0x1000;
      *(undefined4 *)(uVar18 + 0x204) = *(undefined4 *)((int)this_ + 0x14);
      *(undefined4 *)(uVar18 + 0x208) = *(undefined4 *)((int)this_ + 0x18);
      *(undefined4 *)(uVar18 + 0x20c) = *(undefined4 *)((int)this_ + 0x1c);
      *(undefined1 *)((int)this_ + 0x20) = 1;
      *(undefined1 *)((int)this_ + 0x7f) = 0x18;
      *(undefined4 *)(uVar18 + 0x20) = 0x3f800000;
      *(undefined2 *)(uVar18 + 0x24) = 1;
      *(undefined1 *)(uVar18 + 0x29) = 0;
      *(undefined4 *)(uVar18 + 0x240) = 0;
      MB_InitDefaultParams((float *)(uVar18 + 0x180));
      fVar4 = g_FrameTimeSq;
      *(float *)(uVar18 + 0x1bc) = g_FrameTimeSq * 6.2831855;
      *(float *)(uVar18 + 0x1c0) = fVar4 * 12.566371;
      fVar5 = g_FrameTime;
      *(undefined4 *)(uVar18 + 0x18c) = 0x40000000;
      fVar4 = *(float *)(uVar18 + 0x234) * fVar5;
      *(undefined4 *)(uVar18 + 0x188) = 0x40000000;
      *(undefined4 *)(uVar18 + 0x180) = 0x38d;
      *(uint *)(uVar18 + 0x1b8) = *(uint *)(uVar18 + 0x1b8) | 0x20;
      *(undefined4 *)(uVar18 + 0x1a8) = 0x40061bba;
      *(float *)(uVar18 + 0x1a4) = fVar4;
      *(float *)(uVar18 + 0x1c4) = fVar5 * 3.1415927;
      fVar5 = animationSpeed;
      *(undefined4 *)(uVar18 + 0x244) = 0;
      *(undefined4 *)(uVar18 + 0x264) = 0x3f800000;
      *(undefined4 *)(uVar18 + 0x26c) = 0;
      *(undefined4 *)(uVar18 + 0x260) = 0;
      *(undefined1 *)(uVar18 + 0x58) = 8;
      *(undefined1 *)(uVar18 + 0x5a) = 7;
      *(float *)(uVar18 + 0x1ac) = fVar5 * 6.0 * fVar4;
      uVar16 = rand();
      if ((uVar16 & 1) != 0) {
        *(ushort *)((int)this_ + 0x34) = *(ushort *)((int)this_ + 0x34) | 0x8000;
      }
      *(undefined **)(uVar18 + 0xd0) = &DAT_00845f5c;
      if ((*(int *)(uVar18 + 0x248) == -1) || (*(int *)(uVar18 + 0x270) != -1)) {
        if (*(char *)((int)this_ + 0x53) != '\x01') {
          MB_SetAnimation(lVar15,1,0,0);
        }
      }
      else {
        if (*(char *)((int)this_ + 0x53) != '\0') {
          MB_SetAnimation(lVar15,0,0,0);
        }
        *(undefined1 *)((int)this_ + 0x20) = 2;
      }
    }
  }
  else if (bVar1 == 0x15) {
    *(ushort *)((int)this_ + 0x34) = uVar6 & 0xefff;
    uVar18 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar18 + 0x120));
    if ((uVar18 & 0x60) != 0) {
      lVar19 = lVar15 + 0x10;
      MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar15,lVar19);
      uVar22 = 0;
      MB_SpawnDebrisMoby(0,lVar15,0x6ce,lVar19,lVar15 + 0x40,0,0);
      MB_SpawnDebrisMoby(uVar22,lVar15,0x6cf,lVar19,lVar15 + 0x40,0,0);
      MB_SpawnDebris(lVar15,0x77d,1,0x77d,1,3,2);
      MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
      DeleteMoby((MobyInstance *)this_);
      return;
    }
    uVar18 = (int)*(uint *)((int)this_ + 0x18) >> 0x1f;
    if ((int)((uVar18 >> 1 ^ *(uint *)((int)this_ + 0x18)) - uVar18) < 0x40000000) {
      MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
      DeleteMoby((MobyInstance *)this_);
      return;
    }
  }
  else if (bVar1 == 9) {
    iVar17 = FUN_0048c188(lVar15,uVar20 + 0x120);
    if (iVar17 != 0) {
      *(undefined1 *)((int)this_ + 0x20) = 0;
      *(undefined2 *)(uVar18 + 200) = 0;
    }
  }
  else if (bVar1 == 8) {
    uVar18 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar18 + 0x120));
    if ((uVar18 & 0x60) == 0) {
      uVar18 = (int)*(uint *)((int)this_ + 0x18) >> 0x1f;
      if ((int)((uVar18 >> 1 ^ *(uint *)((int)this_ + 0x18)) - uVar18) < 0x40000000) {
        MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
        DeleteMoby((MobyInstance *)this_);
        return;
      }
    }
    else {
      *(undefined1 *)((int)this_ + 0x20) = 4;
      if (*(char *)((int)this_ + 0x53) != '\x03') {
        local_88 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 7) {
    uVar22 = FUN_005e8338((double)(*(float *)(uVar18 + 0x200) - fVar4),
                          (double)(*(float *)(uVar18 + 0x204) - *(float *)((int)this_ + 0x14)));
    OrganicDeltAngSpeed
              (uVar22,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15);
    fVar4 = *(float *)((int)this_ + 0x48);
    fVar9 = fVar4 + 1.5707963;
    fVar5 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar5 = fVar4;
    }
    fVar11 = 3.1415925 - fVar9;
    if (fVar9 - (3.1415925 - fVar9) < 0.0) {
      fVar11 = fVar9;
    }
    fVar10 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
      fVar10 = fVar5;
    }
    local_f8 = 0;
    fVar4 = -3.1415925 - fVar9;
    if ((-3.1415925 - fVar9) - fVar11 < 0.0) {
      fVar4 = fVar11;
    }
    fVar9 = fVar10 * fVar10;
    fVar5 = fVar4 * fVar4;
    fVar11 = fVar9 * fVar9 * fVar10;
    fVar12 = fVar9 * fVar11;
    fVar13 = fVar5 * fVar5 * fVar4;
    fVar14 = fVar5 * fVar13;
    local_fc = (fVar9 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 +
               fVar11 * 0.0083330255 + fVar9 * fVar10 * -0.16666657 + fVar10) * 2.0;
    local_100 = (fVar5 * fVar14 * 2.601887e-06 +
                fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4
                ) * 2.0;
    dVar21 = 1.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,(MobyInstance *)this_,(MobyInstance *)(uVar18 + 0x180),&local_100,
               auStack_f0);
    fVar4 = *(float *)((int)this_ + 0x14) - *(float *)(uVar18 + 0x204);
    fVar5 = *(float *)((int)this_ + 0x10) - *(float *)(uVar18 + 0x200);
    if (dVar21 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
      if (((*(int *)(uVar18 + 0x244) == 0) &&
          (local_e0[0].y = *(float *)((int)this_ + 0x14) - local_e0[0].y,
          local_e0[0].x = *(float *)((int)this_ + 0x10) - local_e0[0].x,
          fVar4 = *(float *)(uVar18 + 0x234) * g_FrameTime,
          SQRT(local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y) <
          fVar4 * 0.5 * animationSpeed * 40.0 + fVar4 * animationSpeed * 10.0 + 1.5)) &&
         (*(undefined1 *)((int)this_ + 0x20) = 6, *(char *)((int)this_ + 0x53) != '\x05')) {
        uVar22 = FastDoubleToInt((double)(animationSpeed * 10.0));
        MB_SetAnimation(lVar15,5,0,uVar22);
      }
    }
    else {
      *(undefined1 *)((int)this_ + 0x20) = 1;
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        local_88 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else if (bVar1 == 6) {
    uVar22 = FUN_005e8338((double)(local_e0[0].x - fVar4),
                          (double)(local_e0[0].y - *(float *)((int)this_ + 0x14)));
    dVar21 = 0.20000000298023224;
    OrganicDeltAngSpeed
              (uVar22,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar15);
    dVar28 = 3.141592502593994;
    dVar27 = 1.570796251296997;
    fVar4 = *(float *)((int)this_ + 0x48);
    dVar29 = -3.141592502593994;
    fVar9 = fVar4 + 1.5707963;
    dVar30 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    dVar32 = -0.0001980741071747616;
    dVar33 = 2.601886990305502e-06;
    dVar34 = 2.0;
    fVar5 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar5 = fVar4;
    }
    fVar11 = 3.1415925 - fVar9;
    if (fVar9 - (3.1415925 - fVar9) < 0.0) {
      fVar11 = fVar9;
    }
    fVar10 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
      fVar10 = fVar5;
    }
    fVar4 = -3.1415925 - fVar9;
    if ((-3.1415925 - fVar9) - fVar11 < 0.0) {
      fVar4 = fVar11;
    }
    fVar11 = fVar10 * fVar10;
    fVar14 = fVar4 * fVar4;
    fVar5 = fVar11 * fVar11 * fVar10;
    fVar12 = fVar14 * fVar14 * fVar4;
    fVar9 = fVar11 * fVar5;
    fVar13 = fVar14 * fVar12;
    local_12c = (fVar11 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 +
                fVar5 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) * 2.0;
    local_130 = (fVar14 * fVar13 * 2.601887e-06 +
                fVar13 * -0.0001980741 +
                fVar12 * 0.0083330255 + fVar14 * fVar4 * -0.16666657 + fVar4) * 2.0;
    dVar26 = 0.0;
    local_128 = 0;
    dVar35 = 1.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,(MobyInstance *)this_,(MobyInstance *)(uVar18 + 0x180),&local_130,
               uVar18 + 0x40);
    if (*(char *)((int)this_ + 0x52) == '\x05') {
      Delt((float)dVar26,
                     (*(float *)(uVar18 + 0x234) * g_FrameTime) / (animationSpeed * 40.0),
                     (float *)(uVar18 + 0x1a4));
    }
    dVar26 = (double)BlendAnimFrame((MobyInstance *)this_);
    if ((ABS((float)(dVar26 - 25.0)) <= 0.25) &&
       (ABS((double)(local_e0[0].z - *(float *)((int)this_ + 0x18))) < dVar35)) {
      dVar26 = (double)FUN_005e8338((double)(local_e0[0].x - *(float *)((int)this_ + 0x10)),
                                    (double)(local_e0[0].y - *(float *)((int)this_ + 0x14)));
      dVar26 = (double)FastSubRots((float)dVar26,*(float *)((int)this_ + 0x48));
      if ((dVar26 < 0.2617993950843811) &&
         ((local_a0 != (MobyInstance *)0x0 &&
          (fVar5 = *(float *)((int)this_ + 0x14) - local_e0[0].y,
          fVar4 = *(float *)((int)this_ + 0x10) - local_e0[0].x,
          (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5) < dVar34)))) {
        dVar34 = (double)*(float *)((int)this_ + 0x48);
        dVar26 = (double)(float)(dVar34 + dVar27);
        local_118 = 0;
        local_110 = local_e0[0].x;
        local_10c = local_e0[0].y;
        local_104 = local_e0[0].w;
        dVar27 = (double)(float)(dVar28 - dVar34);
        if (dVar34 - (double)(float)(dVar28 - dVar34) < 0.0) {
          dVar27 = dVar34;
        }
        dVar23 = (double)(float)(dVar28 - dVar26);
        if (dVar26 - (double)(float)(dVar28 - dVar26) < 0.0) {
          dVar23 = dVar26;
        }
        dVar28 = (double)(float)(dVar29 - dVar34);
        if ((double)(float)(dVar29 - dVar34) - dVar27 < 0.0) {
          dVar28 = dVar27;
        }
        dVar34 = (double)(float)(dVar28 * dVar28);
        dVar27 = (double)(float)(dVar29 - dVar26);
        if ((double)(float)(dVar29 - dVar26) - dVar23 < 0.0) {
          dVar27 = dVar23;
        }
        dVar26 = (double)(float)(dVar27 * dVar27);
        dVar23 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar28));
        dVar25 = (double)(float)(dVar34 * dVar23);
        dVar24 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar27));
        dVar29 = (double)(float)(dVar26 * dVar24);
        local_11c = (float)((double)(float)((double)(float)(dVar34 * dVar25) * dVar33 +
                                           (double)(float)(dVar25 * dVar32 +
                                                          (double)(float)(dVar23 * dVar31 +
                                                                         (double)(float)((double)(
                                                  float)(dVar34 * dVar28) * dVar30 + dVar28)))) *
                           dVar21);
        local_120 = (float)((double)(float)((double)(float)(dVar26 * dVar29) * dVar33 +
                                           (double)(float)(dVar29 * dVar32 +
                                                          (double)(float)(dVar24 * dVar31 +
                                                                         (double)(float)((double)(
                                                  float)(dVar26 * dVar27) * dVar30 + dVar27)))) *
                           dVar21);
        local_108 = local_e0[0].z + 0.75;
        CollDamageMobyDirect
                  ((float)dVar35,local_a0,(MobyInstance *)this_,1,0x3c0978,&local_110,&local_120);
        goto LAB_003c1e6c;
      }
    }
    if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
      *(float *)(uVar18 + 0x1a4) = *(float *)(uVar18 + 0x234) * g_FrameTime;
      *(undefined1 *)((int)this_ + 0x20) = 7;
      if (*(char *)((int)this_ + 0x53) != '\x03') {
        local_88 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 3.5));
      }
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x90,0x3c0978);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x244,uVar20)
      ;
      *(undefined4 *)(uVar18 + 0x244 & 0xfffffffc) = uVar8;
    }
  }
LAB_003c1e6c:
  if ((*(char *)((int)this_ + 0x31) != '\0') &&
     (fVar4 = *(float *)((int)this_ + 0x14) - GameCamera.posY,
     fVar5 = *(float *)((int)this_ + 0x10) - GameCamera.posX,
     fVar9 = *(float *)((int)this_ + 0x18) - GameCamera.posZ,
     SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar4 * fVar4) < 32.0)) {
    MB_SetZBoundsFromGround(lVar15);
  }
  MB_ColorDyingMoby(lVar15,uVar20 + 0x110);
  *(undefined1 *)((int)this_ + 0xbc) = 0;
  return;
}


