// game/update/moby862.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x498fe0-0x499bf4
#include "game/update/moby862.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"

// 0x0498fe0 (0x14 bytes)
void M862_00498fe0(void)

{
  DAT_008c7e34 = 0x10000;
  return;
}


// 0x0499010 (0x340 bytes)
// inlined: FastAtan2 @0x4991e8
void M862_00499010(MobyInstance *param_1)

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
  if (uVar1 != '\x04') {
    pvVar6 = param_1->pVar;
    dVar23 = 0.0;
    *(undefined4 *)((int)puVar9 + 0x74) = 0;
    iVar12 = MB_damage(param_1,0x10000,0);
    if (((iVar12 == 0) || (*(int *)(iVar12 + 0x20) == 0)) ||
       (*(MOBY_OCLASSES *)(*(int *)(iVar12 + 0x20) + 0xa6) != param_1->oClass)) {
      MB_HandleDamage
                (param_1,iVar12,ZEXT48(pvVar6) + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
      if ((*(int *)(puVar9 + 0xe) != 1) &&
         (fVar2 = *(float *)((int)puVar9 + 0x74), *(int *)((int)puVar9 + 0x74) != 0)) {
        *(undefined4 *)((int)pvVar6 + 0x80) = 0x200;
        *(undefined4 *)((int)pvVar6 + 0x88) = 0x3f000000;
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        fVar2 = DAT_0071f418;
        *(float *)((int)pvVar6 + 0x70) = DAT_0071f418 * 10.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 0;
        *(undefined4 *)((int)pvVar6 + 0x84) = 0x29;
        *(float *)((int)pvVar6 + 0x74) = fVar2 * 1.5;
        fVar5 = g_FrameTime;
        fVar2 = g_FrameTime * 10.0;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x7c) = fVar2;
        *(float *)((int)pvVar6 + 0x78) = fVar5 * 8.0;
        uVar7 = *(uint *)(iVar12 + 0x10);
        uVar8 = *(uint *)(iVar12 + 0x14);
        dVar21 = ABS((double)*(float *)(iVar12 + 0x10));
        dVar22 = ABS((double)*(float *)(iVar12 + 0x14));
        *(float *)(puVar9 + 0xf) = (float)(dVar21 - dVar22);
        uVar14 = (ulonglong)(uVar7 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
        lVar15 = uVar14 << 2;
        dVar20 = dVar21;
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar20 = dVar22;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar15);
        fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if ((double)*(float *)(puVar9 + 0xf) - dVar23 < 0.0) {
          dVar22 = dVar21;
        }
        if (dVar23 < dVar20) {
          lVar17 = uVar11 - 0xb0;
          lVar15 = uVar11 - 0x34;
          lVar16 = uVar11 - 0x44;
          lVar19 = 2;
          fVar3 = (float)(dVar22 - dVar20) / (float)(dVar22 + dVar20);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x11) = fVar3;
          *(float *)(puVar9 + 0x10) = fVar3;
          *(float *)((int)puVar9 + 0x84) = fVar3;
          *(float *)((int)puVar9 + 0x7c) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
          *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar3;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar3 * fVar3;
            iVar12 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar12 + 4) * fVar3 * fVar3;
            lVar15 = lVar15 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar15 = uVar11 - 0x44;
          lVar19 = 4;
          pfVar18 = (float *)&DAT_007358e0;
          lVar16 = lVar15;
          lVar17 = lVar13;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
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
          dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar2);
        }
        MB_StartKick(dVar23,param_1,ZEXT48(pvVar6) + 0x60,lVar15,3,1,0);
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0x41300000;
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0x418c0000;
        param_1->state = '\x04';
      }
      param_1->damage = -1;
    }
  }
  return;
}


// 0x04993b0 (0x844 bytes)
// inlined: FastAtan2 @0x4997e8
// strings: 00499380: '?fff' (raw) | 004993a8: '?333B"'

/* Moby 862 */

void UpdateMoby_862(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  MobyInstance *cur;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xf0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = unaff_r31;
  puVar9[0x1b] = unaff_r29;
  puVar9[0x1c] = unaff_r30;
  pvVar7 = moby->pVar;
  uVar21 = ZEXT48(pvVar7);
  M862_00499010();
  FUN_00495490(0x4028000000000000,moby,uVar21 + 0x140);
  FastDecTimerS32(uVar21 + 0x144);
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x60));
    if ((uVar17 & 0x140) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    iVar16 = *(int *)((int)pvVar7 + 0x140);
    if (iVar16 != 0) {
      fVar4 = *(float *)(iVar16 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar16 + 0x14) - (moby->pos).y;
      pfVar19 = (float *)&g_atanQuadrantTable;
      fVar5 = ABS(fVar4);
      fVar6 = ABS(fVar3);
      *(float *)((int)puVar9 + 0x94) = fVar4;
      *(float *)(puVar9 + 0x13) = fVar3;
      *(float *)((int)puVar9 + 0x9c) = fVar5 - fVar6;
      dVar23 = 0.0;
      uVar13 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar9 + 0x94));
      if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
        fVar4 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)(puVar9 + 0x13));
      if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar14 = uVar12 - 0xe0;
        lVar20 = uVar12 - 0x40;
        lVar18 = uVar12 - 0x50;
        lVar22 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xac) = fVar4;
        *(float *)((int)puVar9 + 0xa4) = fVar4;
        *(float *)(puVar9 + 0x15) = fVar4;
        *(float *)(puVar9 + 0x14) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar5;
        *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar4;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0x90) * fVar4 * fVar4;
          iVar16 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar12 - 0x50;
        pfVar19 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar18 = lVar20;
        do {
          fVar4 = *pfVar19;
          fVar5 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0xa0) = *(float *)((int)lVar14 + 0xa0) * fVar4;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar14 = 2;
        do {
          iVar16 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar10 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar16 + 0xa0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar6 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar23,(double)*(float *)((int)pvVar7 + 0xfc),
                 (double)*(float *)((int)pvVar7 + 0x100),(double)*(float *)((int)pvVar7 + 0x104),
                 moby,pfVar19,uVar21 + 0xd4);
    }
    bVar2 = moby->setByGroup;
    if (bVar2 == 0) {
      if (-1 < (int)(uint)bVar2) {
        if ((*(int *)((int)pvVar7 + 0x140) == 0) ||
           (*(short *)(*(int *)((int)pvVar7 + 0x140) + 0xa6) != 0x359)) {
          moby->setByGroup = '\x02';
        }
        else {
          iVar16 = MB_randRange(0x14,0x46);
          puVar9[0x18] = (longlong)iVar16;
          *(int *)((int)pvVar7 + 0x144) =
               (int)(animationSpeed * ((float)(longlong)puVar9[0x18] + 0.5));
          moby->setByGroup = '\x01';
        }
      }
    }
    else if (bVar2 < 2) {
      fVar4 = (moby->pos).y - *(float *)((int)pvVar7 + 0x114);
      fVar3 = (moby->pos).x - *(float *)((int)pvVar7 + 0x110);
      if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) <= 5.5) {
        if (moby->animationId != '\0') {
          puVar9[0x18] = (longlong)(int)(animationSpeed * 7.5);
          MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0xc4));
        }
        if (*(int *)((int)pvVar7 + 0x144) == 0) {
          auVar24 = ZEXT416(0xffffffff);
          auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
          moby->setByGroup = '\x02';
          auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
          auVar24 = loadVectorLeftIndexed(0x44,0x499350);
          auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar24 = vectorMultiplyAddFloatingPoint
                              (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60
                               ,auVar25);
          auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
          auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x144,
                             uVar21);
          *(undefined4 *)((int)pvVar7 + 0x144U & 0xfffffffc) = uVar8;
        }
      }
      else {
        moby->state = '\x01';
      }
    }
    else if (bVar2 < 3) {
      if (moby->animationId != '\x02') {
        puVar9[0x18] = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 0xc4));
      }
      dVar23 = (double)BlendAnimFrame(moby);
      if ((7.0 <= dVar23) && (dVar23 <= 14.0)) {
        puVar9[0xe] = 0;
        DamageSphereAtBone
                  (0x3fc99999a0000000,0x3ff0000000000000,0x3fe6666660000000,moby,0,&DAT_00499350,
                   0x10001);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0x5c,0x499350);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x144,
                           uVar21);
        *(undefined4 *)((int)pvVar7 + 0x144U & 0xfffffffc) = uVar8;
        moby->state = '\x01';
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (moby->animationId != '\x01') {
      puVar9[0x18] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xc4));
    }
    if (*(uint *)((int)pvVar7 + 0x140) == 0) {
      moby->state = '\x01';
    }
    else {
      MB_UpdateNavMoveTurning
                (moby,uVar21 + 0xc0,(ulonglong)*(uint *)((int)pvVar7 + 0x140) + 0x10,uVar12 - 0x70);
      fVar4 = (moby->pos).y - *(float *)(*(int *)((int)pvVar7 + 0x140) + 0x14);
      fVar3 = (moby->pos).x - *(float *)(*(int *)((int)pvVar7 + 0x140) + 0x10);
      if (SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 0.9) {
        moby->setByGroup = '\0';
        moby->state = '\x03';
      }
    }
  }
  else if (uVar1 == '\x01') {
    if (moby->animationId != '\x01') {
      puVar9[0x18] = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xc4));
    }
    DoMeander(0x3fd6666660000000,0x3fd0000000000000,moby,uVar21 + 0x110);
    if (((*(int *)((int)pvVar7 + 0x144) == 0) &&
        (iVar16 = *(int *)((int)pvVar7 + 0x140), iVar16 != 0)) &&
       ((fVar4 = (moby->pos).y - *(float *)(iVar16 + 0x14),
        fVar3 = (moby->pos).x - *(float *)(iVar16 + 0x10), SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 4.0
        || (*(int *)((int)pvVar7 + 0x148) != 0)))) {
      if ((byte)moby->group != 0xff) {
        MB_GetFirstMobyInGroup
                  ((MobyInstance **)(puVar9 + 0x12),(uint)(byte)moby->group,'\0','\0');
        cur = *(MobyInstance **)(puVar9 + 0x12);
        while (cur != (MobyInstance *)0x0) {
          *(undefined4 *)((int)cur->pVar + 0x148) = 1;
          MB_GetNextMobyInGroup((MobyInstance **)(puVar9 + 0x12),cur,'\0','\0');
          cur = *(MobyInstance **)(puVar9 + 0x12);
        }
      }
      *(undefined4 *)((int)pvVar7 + 0x148) = 0;
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar7 + 0xc0) = 300;
    *(undefined4 *)((int)pvVar7 + 0xc4) = 0x3f000000;
    *(undefined4 *)((int)pvVar7 + 200) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar7 + 0xcc) = 0x3e4ccccd;
    fVar3 = DAT_0071f40c;
    fVar4 = DAT_0071f40c * 0.3;
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    *(float *)((int)pvVar7 + 0xe0) = fVar4;
    fVar6 = g_FrameTime;
    *(float *)((int)pvVar7 + 0xe4) = g_FrameTime * 3.0;
    *(undefined4 *)((int)pvVar7 + 0xe8) = 0x3f32b8c2;
    *(undefined4 *)((int)pvVar7 + 0xec) = 0x3e4ccccd;
    *(float *)((int)pvVar7 + 0x100) = fVar4;
    *(float *)((int)pvVar7 + 0xdc) = fVar3 * 0.05;
    *(float *)((int)pvVar7 + 0xfc) = fVar3 * 0.05;
    *(float *)((int)pvVar7 + 0x104) = fVar6 * 3.1415927;
    auVar24 = loadVectorLeftIndexed(0x14,0x499350);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                         auVar25);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x108,uVar21);
    *(undefined4 *)((int)pvVar7 + 0x108U & 0xfffffffc) = uVar8;
    *(undefined4 *)((int)pvVar7 + 300) = 0x3f99999a;
    *(float *)((int)pvVar7 + 0x124) = fVar6 * 2.0;
    *(f32 *)((int)pvVar7 + 0x110) = (moby->pos).x;
    *(f32 *)((int)pvVar7 + 0x114) = (moby->pos).y;
    *(f32 *)((int)pvVar7 + 0x118) = (moby->pos).z;
    *(f32 *)((int)pvVar7 + 0x11c) = (moby->pos).w;
    moby->state = '\x01';
  }
  return;
}


