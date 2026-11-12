// game/update/moby1229.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x211390-0x212c68
#include <stdio.h>
#include "game/update/moby1229.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby819.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x0211390 (0x14 bytes)
void M1229_00211390(void)

{
  DAT_0076850c = 0x10000;
  return;
}


// 0x02113b8 (0x320 bytes)
void M1229_002113b8(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  Spline *pSVar3;
  undefined2 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  int local_40;
  float local_3c;
  longlong local_38;
  
  pvVar1 = param_1->pVar;
  uVar8 = ZEXT48(pvVar1);
  iVar6 = MB_damage(param_1,0x370000,0);
  dVar9 = 0.0;
  local_3c = 0.0;
  iVar7 = MB_HandleDamage(param_1,iVar6,uVar8 + 0x20,5,&local_40,&local_3c,0,4);
  if (((iVar6 == 0) || (local_40 == 1)) || (param_1->state == '\b')) goto LAB_00211584;
  uVar2 = *(uint *)(iVar6 + 0x24);
  fVar5 = *(float *)((int)pvVar1 + 0x20) - local_3c;
  *(float *)((int)pvVar1 + 0x20) = fVar5;
  if ((double)fVar5 <= dVar9) {
    iVar7 = 1;
  }
  if ((uVar2 & 0x40000) == 0) {
    if (iVar7 < 9) {
      if (iVar7 == 1) goto LAB_002114cc;
    }
    else if (iVar7 < 0xd) {
      if (iVar7 != 0xb) {
        *(undefined1 *)((int)pvVar1 + 199) = 0xfa;
        MB_UpdateLightsTransition(param_1,uVar8 + 0xc0);
        goto LAB_00211584;
      }
    }
    else if (iVar7 < 0xe) goto LAB_00211584;
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    *(undefined1 *)((int)pvVar1 + 199) = 0xfa;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(4,0x2113a8);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = vectorSplatHalfWord(auVar10,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar10,0x26,uVar8);
    *(undefined2 *)((int)pvVar1 + 0x26) = uVar4;
    MB_UpdateLightsTransition(param_1,uVar8 + 0xc0);
    local_38 = (longlong)(int)(animationSpeed * 6.5);
    MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 6.5));
    param_1->setByGroup = param_1->state;
    param_1->state = '\a';
  }
  else {
LAB_002114cc:
    *(undefined1 *)((int)pvVar1 + 199) = 0xfa;
    MB_UpdateLightsTransition(param_1,uVar8 + 0xc0);
    param_1->state = '\b';
  }
LAB_00211584:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar8 + 0xc0);
  if (g_heroType == '\x01') {
    FUN_00495490(0x4059400000000000,param_1,uVar8 + 0x110);
    if (*(int *)((int)pvVar1 + 0x110) == 0) {
      *(undefined4 *)((int)pvVar1 + 0x114) = 2;
    }
    else {
      iVar6 = PointInsideComplexPoly
                        ((Vec4 *)(*(int *)((int)pvVar1 + 0x110) + 0x10),
                         (Vec4 *)Splines[*(int *)((int)pvVar1 + 400)]->points,
                         Splines[*(int *)((int)pvVar1 + 400)]->cnt);
      if (iVar6 == 0) {
        *(undefined4 *)((int)pvVar1 + 0x110) = 0;
        *(undefined4 *)((int)pvVar1 + 0x114) = 2;
      }
      else {
        *(undefined4 *)((int)pvVar1 + 0x114) = 0;
      }
    }
  }
  else {
    pSVar3 = Splines[*(int *)((int)pvVar1 + 400)];
    iVar6 = MB_getTargetInArea
                      (0x4059400000000000,param_1,uVar8 + 0xd0,pSVar3,0,0,pSVar3->points,pSVar3->cnt
                      );
    if ((iVar6 != 2) && (param_1->enabled == '\0')) {
      *(undefined4 *)((int)pvVar1 + 0x114) = 2;
    }
  }
  if (*(int *)((int)pvVar1 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x0211748 (0x150c bytes)
// strings: 00654f7c: 'ERROR!! Moby class %d maya instance %d has no path set; deleted\n' | 00a1000c: 'None'

/* Moby 1229 */

void UpdateMoby_1229(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  void *pvVar6;
  MobyInstance *pMVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  undefined2 uVar18;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  Vec4 local_160;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  float local_118;
  f32 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  f32 local_f4;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  f32 local_d0;
  f32 local_cc;
  float local_c8;
  f32 local_c4;
  Vec4 local_c0;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  GPiece<16> auStack_90;
  longlong local_80;
  
  lVar14 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar20 = ZEXT48(pvVar6);
  DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar6 + 0x1d0));
  if (*(int *)((int)pvVar6 + 0x140) == -1) {
    printf("ERROR!! Moby class %d maya instance %d has no path set; deleted\n",moby->oClass,
                 (ulonglong)(uint)moby->field71_0xa8 & 0xffff);
    DeleteMoby(moby);
  }
  else {
    M1229_002113b8(lVar14);
    bVar5 = moby->state;
    pMVar7 = *(MobyInstance **)((int)pvVar6 + 0x110);
    if (bVar5 < 4) {
      if (bVar5 == 0) {
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x41100000;
        uVar18 = FastDoubleToInt(0x4022000000000000);
        iVar15 = *(int *)((int)pvVar6 + 0x140);
        *(undefined2 *)((int)pvVar6 + 0x24) = uVar18;
        *(undefined1 *)((int)pvVar6 + 0x28) = 3;
        *(undefined1 *)((int)pvVar6 + 0x29) = 0;
        *(undefined4 *)((int)pvVar6 + 0x19c) = 0;
        moby->drawDistance = 0x7f;
        auVar30 = ZEXT416(0xffffffff);
        auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        pSVar8 = Splines[iVar15];
        auVar30 = loadVectorLeftIndexed(0xffffffffffff8530,0x770000);
        auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
        (moby->pos).x = pSVar8->points[0].x;
        (moby->pos).y = pSVar8->points[0].y;
        (moby->pos).z = pSVar8->points[0].z;
        (moby->pos).w = pSVar8->points[0].w;
        auVar30 = loadVectorLeftIndexed(8,0x2116d8);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar30 = vectorAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
        auVar31 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar18 = storeVectorElementHalfWordIndexed(auVar30,0x196,uVar20);
        *(undefined2 *)((int)pvVar6 + 0x196) = uVar18;
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar14,0,0,0);
        }
        moby->state = '\x01';
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          DeleteMoby(moby);
          return;
        }
      }
      else if (bVar5 < 2) {
        iVar15 = MB_IsPntInCuboid
                           ((Vec4 *)&pMVar7->pos,(longlong)*(int *)((int)pvVar6 + 0x148));
        if (iVar15 != 0) {
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            local_80 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 20.5));
          }
          iVar15 = g_Help.state;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
          if ((((iVar15 == 0) && (g_Help.curId == -1)) && (g_heroType == '\0')) &&
             ((g_HelpFlags.piece<736,2>() == 0 && (UnlockableItems.devastator == '\0')))) {
            Help_QueueMessage(STR_THE_DEVASTATOR_MANUFACTURED_EXCLUSIVELY_0x2715,0x5c);
          }
        }
      }
      else if (bVar5 < 3) {
        uVar21 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                              (double)((pMVar7->pos).y - (moby->pos).y));
        uVar25 = 0x3f947ae140000000;
        uVar24 = 0x3fd3333340000000;
        dVar26 = 3.1415927410125732;
        OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 3.1415927),lVar14);
        fVar2 = (moby->pos).y - (pMVar7->pos).y;
        fVar3 = (moby->pos).x - (pMVar7->pos).x;
        dVar23 = (double)(moby->rotation).y;
        dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                      (double)((pMVar7->pos).z - (moby->pos).z));
        dVar22 = (double)MB_DeltAngSpeed
                                   (dVar23,-dVar22,uVar25,uVar24,
                                    (double)(float)((double)g_FrameTime * dVar26));
        bVar5 = moby->field43_0x70;
        (moby->rotation).y = (float)dVar22;
        if (((bVar5 & 2) != 0) && (moby->animationId == '\x01')) {
          local_80 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 20.5));
        }
        fVar2 = g_FrameTime * 4.0 + (moby->pos).z;
        pSVar8 = Splines[*(int *)((int)pvVar6 + 0x140)];
        (moby->pos).z = fVar2;
        fVar3 = (moby->pos).y - pSVar8->points[0].y;
        fVar4 = (moby->pos).x - pSVar8->points[0].x;
        fVar2 = fVar2 - pSVar8->points[0].z;
        if ((SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) &&
           (moby->state = '\x03', moby->animationId != '\x02')) {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        iVar15 = *(int *)((int)pvVar6 + 0x158);
        pSVar8 = Splines[*(int *)((int)pvVar6 + 0x140)];
        dVar29 = (double)pSVar8->points[iVar15].x;
        dVar28 = (double)pSVar8->points[iVar15].y;
        dVar27 = (double)pSVar8->points[iVar15].z;
        dVar26 = (double)pSVar8->points[iVar15].w;
        uVar21 = FUN_005e8338((double)(float)(dVar29 - (double)(moby->pos).x),
                              (double)(float)(dVar28 - (double)(moby->pos).y));
        uVar25 = 0x3f947ae140000000;
        uVar24 = 0x3fd3333340000000;
        OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 12.566371),lVar14);
        fVar2 = (moby->pos).y - (pMVar7->pos).y;
        fVar3 = (moby->pos).x - (pMVar7->pos).x;
        dVar23 = (double)(moby->rotation).y;
        dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                      (double)((pMVar7->pos).z - (moby->pos).z));
        dVar22 = (double)MB_DeltAngSpeed
                                   (dVar23,-dVar22,uVar25,uVar24,
                                    (double)(g_FrameTime * 3.1415927));
        fVar2 = (float)(dVar28 - (double)(moby->pos).y);
        fVar3 = (float)(dVar29 - (double)(moby->pos).x);
        fVar4 = (float)(dVar27 - (double)(moby->pos).z);
        (moby->rotation).y = (float)dVar22;
        fVar9 = g_FrameTime * 8.0;
        fVar11 = 0.0;
        *(float *)((int)pvVar6 + 300) = (float)dVar26;
        fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar9 = fVar9 / fVar10;
        fVar12 = fVar11;
        if (0.0 - fVar10 < 0.0) {
          fVar12 = fVar2 * fVar9;
        }
        fVar13 = fVar11;
        if (0.0 - fVar10 < 0.0) {
          fVar13 = fVar3 * fVar9;
        }
        if (0.0 - fVar10 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar12 = fVar2 * fVar9;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar13 = fVar3 * fVar9;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar11 = fVar4 * fVar9;
        }
        *(float *)((int)pvVar6 + 0x124) = fVar12;
        *(float *)((int)pvVar6 + 0x120) = fVar13;
        *(float *)((int)pvVar6 + 0x128) = fVar11;
        (moby->pos).x = (moby->pos).x + fVar13;
        (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x124);
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x128);
        if (fVar10 < 0.5) {
          iVar15 = *(int *)((int)pvVar6 + 0x158) + 1;
          if (iVar15 < Splines[*(int *)((int)pvVar6 + 0x140)]->cnt) {
            *(int *)((int)pvVar6 + 0x158) = iVar15;
          }
          else {
            *(undefined4 *)((int)pvVar6 + 0x158) = 0;
            moby->state = '\x04';
            uVar16 = FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x160) * 60.0));
            *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
          }
        }
      }
    }
    else if (bVar5 < 7) {
      if (bVar5 < 5) {
        iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x1b0))
        ;
        if (iVar15 == 0) {
          local_170 = (pMVar7->pos).x;
          local_16c = (pMVar7->pos).y;
          dVar22 = (double)(pMVar7->pos).z;
          local_164 = (pMVar7->pos).w;
          if (g_heroType == '\x01') {
            if (g_heroMobyPtr == pMVar7) {
              FastVecScale
                        ((double)(longlong)(animationSpeed * 20.5),&local_140,&DAT_00969de0);
              local_150 = local_140;
              local_14c = local_13c;
              local_148 = local_138;
              local_144 = local_134;
              FastVecAddSelf(auStack_130,&local_170,&local_150);
              dVar22 = (double)GetGroundZ(0x3fe0000000000000,&local_170,0);
            }
            local_168 = (float)(dVar22 + 0.20000000298023224);
            g_CollOutput.pMoby = pMVar7;
          }
          else {
            local_170 = *(float *)((int)pvVar6 + 0xf0);
            local_16c = *(float *)((int)pvVar6 + 0xf4);
            local_168 = *(float *)((int)pvVar6 + 0xf8);
            local_164 = *(f32 *)((int)pvVar6 + 0xfc);
            CollLine(lVar14 + 0x10,&local_170,0,lVar14,0);
          }
          uVar21 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          uVar25 = 0x3f947ae140000000;
          uVar24 = 0x3fd3333340000000;
          OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                     (double)(g_FrameTime * 12.566371),lVar14);
          fVar2 = (moby->pos).y - local_16c;
          fVar3 = (moby->pos).x - local_170;
          dVar23 = (double)(moby->rotation).y;
          dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                        (double)(local_168 - (moby->pos).z));
          dVar22 = (double)MB_DeltAngSpeed
                                     (dVar23,-dVar22,uVar25,uVar24,
                                      (double)(g_FrameTime * 3.1415927));
          (moby->rotation).y = (float)dVar22;
          dVar23 = (double)(moby->rotation).z;
          dVar22 = (double)FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                        (double)((pMVar7->pos).y - (moby->pos).y));
          dVar22 = (double)FastSubRots((float)dVar23,(float)dVar22);
          if (dVar22 < 0.1745329201221466) {
            if (moby->animationId != '\x03') {
              local_80 = (longlong)(int)(animationSpeed * 6.5);
              MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 6.5));
            }
            moby->unk58 = DAT_00768538;
          }
          bVar1 = moby->updateId != '\x03';
          if (((bVar1) || (*(int *)((int)pvVar6 + 0x114) == 2)) || (g_CollOutput.pMoby != pMVar7)) {
            if ((!bVar1) && (moby->animationId != '\x02')) {
              local_80 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
            }
          }
          else {
            dVar22 = 1.0;
            iVar15 = MB_MayaFrameTrigger(1.0,moby);
            iVar17 = MB_MayaFrameTrigger(16.0,moby);
            if (iVar15 != 0 || iVar17 != 0) {
              GetBonePosition
                        (lVar14,(ulonglong)(LZCOUNT(iVar17) << 0x20) >> 0x25,&local_110);
              MB_SphericalToVector
                        ((float)dVar22,(moby->rotation).z,-(moby->rotation).y,&local_120);
              FastVecAddSelf(auStack_f0,&local_110,&local_120);
              local_16c = local_16c - local_10c;
              local_170 = local_170 - local_110;
              local_168 = local_168 - local_108;
              local_114 = local_164;
              local_118 = 0.0;
              fVar2 = SQRT(local_168 * local_168 + local_170 * local_170 + local_16c * local_16c);
              fVar3 = (DAT_00768534 * g_FrameTime) / fVar2;
              local_120 = local_118;
              if (0.0 - fVar2 < 0.0) {
                local_120 = local_170 * fVar3;
              }
              local_11c = local_118;
              if (0.0 - fVar2 < 0.0) {
                local_11c = local_16c * fVar3;
              }
              if (0.0 - fVar2 < 0.0) {
                local_118 = local_168 * fVar3;
              }
              if (fVar2 - 0.0 < 0.0) {
                local_120 = local_170 * fVar3;
              }
              if (fVar2 - 0.0 < 0.0) {
                local_11c = local_16c * fVar3;
              }
              if (fVar2 - 0.0 < 0.0) {
                local_118 = local_168 * fVar3;
              }
              local_f4 = local_164;
              local_f8 = animationSpeed * 3.0;
              local_100 = local_120 * local_f8;
              local_fc = local_11c * local_f8;
              local_f8 = local_118 * local_f8;
              FastVecAddSelf(auStack_e0,&local_100,&local_110);
              ____MB_SpawnRingPartFx(lVar14);
              local_80 = (longlong)(int)(animationSpeed * 300.5);
              FUN_00470690(dVar22,&local_120,&local_110,lVar14,pMVar7,(int)(animationSpeed * 300.5))
              ;
            }
          }
          iVar15 = FastDecTimerS32(uVar20 + 0x168);
          if (iVar15 != 0) {
            if (moby->animationId != '\x02') {
              local_80 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x05';
            uVar16 = FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x164) * 60.0));
            *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
          }
          iVar15 = *(int *)((int)pvVar6 + 0x158);
          pSVar8 = Splines[*(int *)((int)pvVar6 + 0x144)];
          local_160.x = pSVar8->points[iVar15].x - (moby->pos).x;
          local_160.y = pSVar8->points[iVar15].y - (moby->pos).y;
          local_160.w = pSVar8->points[iVar15].w;
          local_160.z = pSVar8->points[iVar15].z - (moby->pos).z;
          ClampVec3Magnitude((double)(g_FrameTime * 8.0),&local_160);
          (moby->pos).x = (moby->pos).x + local_160.x;
          (moby->pos).y = (moby->pos).y + local_160.y;
          (moby->pos).z = (moby->pos).z + local_160.z;
          if ((SQRT(local_160.z * local_160.z +
                    local_160.x * local_160.x + local_160.y * local_160.y) < g_FrameTime)
             && (iVar15 = *(int *)((int)pvVar6 + 0x158) + 1,
                iVar15 < Splines[*(int *)((int)pvVar6 + 0x144)]->cnt)) {
            *(int *)((int)pvVar6 + 0x158) = iVar15;
          }
        }
        else {
          moby->state = '\x06';
        }
      }
      else if (bVar5 < 6) {
        iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x1b0))
        ;
        if (iVar15 == 0) {
          local_d0 = (pMVar7->pos).x;
          local_cc = (pMVar7->pos).y;
          local_c8 = (pMVar7->pos).z;
          dVar22 = (double)local_c8;
          local_c4 = (pMVar7->pos).w;
          if (g_heroType == '\x01') {
            if (g_heroMobyPtr == pMVar7) {
              FastVecScale
                        ((double)(longlong)(animationSpeed * 20.5),&local_a0,&DAT_00969de0);
              local_b0 = local_a0;
              local_ac = local_9c;
              local_a8 = local_98;
              local_a4 = local_94;
              FastVecAddSelf(auStack_90,&local_d0,&local_b0);
              dVar22 = (double)GetGroundZ(0x3fe0000000000000,&local_d0,0);
            }
            local_c8 = (float)(dVar22 + 0.20000000298023224);
            g_CollOutput.pMoby = pMVar7;
          }
          else {
            local_d0 = *(f32 *)((int)pvVar6 + 0xf0);
            local_cc = *(f32 *)((int)pvVar6 + 0xf4);
            local_c8 = *(float *)((int)pvVar6 + 0xf8);
            local_c4 = *(f32 *)((int)pvVar6 + 0xfc);
            CollLine(lVar14 + 0x10,&local_d0,0,lVar14,0);
          }
          uVar21 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          uVar25 = 0x3f947ae140000000;
          uVar24 = 0x3fd3333340000000;
          OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,
                     (double)(g_FrameTime * 12.566371),lVar14);
          fVar2 = (moby->pos).y - local_cc;
          fVar3 = (moby->pos).x - local_d0;
          dVar23 = (double)(moby->rotation).y;
          dVar22 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2),
                                        (double)(local_c8 - (moby->pos).z));
          dVar22 = (double)MB_DeltAngSpeed
                                     (dVar23,-dVar22,uVar25,uVar24,
                                      (double)(g_FrameTime * 3.1415927));
          (moby->rotation).y = (float)dVar22;
          iVar15 = FastDecTimerS32(uVar20 + 0x168);
          if (iVar15 != 0) {
            local_80 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
            fVar2 = DAT_00768538;
            moby->state = '\x04';
            moby->unk58 = fVar2;
            uVar16 = FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x160) * 60.0));
            *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
          }
          iVar15 = *(int *)((int)pvVar6 + 0x158);
          pSVar8 = Splines[*(int *)((int)pvVar6 + 0x144)];
          local_c0.x = pSVar8->points[iVar15].x - (moby->pos).x;
          local_c0.y = pSVar8->points[iVar15].y - (moby->pos).y;
          local_c0.z = pSVar8->points[iVar15].z - (moby->pos).z;
          local_c0.w = pSVar8->points[iVar15].w;
          ClampVec3Magnitude((double)(g_FrameTime * 8.0),&local_c0);
          (moby->pos).x = (moby->pos).x + local_c0.x;
          (moby->pos).y = (moby->pos).y + local_c0.y;
          (moby->pos).z = (moby->pos).z + local_c0.z;
          if ((SQRT(local_c0.z * local_c0.z + local_c0.x * local_c0.x + local_c0.y * local_c0.y) <
               g_FrameTime) &&
             (iVar15 = *(int *)((int)pvVar6 + 0x158) + 1,
             iVar15 < Splines[*(int *)((int)pvVar6 + 0x144)]->cnt)) {
            *(int *)((int)pvVar6 + 0x158) = iVar15;
          }
        }
        else {
          moby->state = '\x06';
        }
      }
      else {
        fVar3 = g_FrameTime * 10.0 + (moby->pos).z;
        fVar2 = moby->scale;
        (moby->pos).z = fVar3;
        fVar2 = fVar2 * (DAT_0071f408 * -0.015299976 + 1.0);
        moby->scale = fVar2;
        if ((250.0 < fVar3) || (fVar2 < 0.01)) {
          DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar5 < 8) {
      if ((moby->updateId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->setByGroup == '\x04') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          fVar2 = DAT_00768538;
          moby->state = '\x04';
          moby->unk58 = fVar2;
          uVar16 = FastDoubleToInt
                             ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x160) * 60.0));
          *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
        }
        else if (moby->setByGroup == '\x06') {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
          moby->state = '\x06';
        }
        else {
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,2,0,(int)(animationSpeed * 10.5));
          moby->state = '\x05';
          uVar16 = FastDoubleToInt
                             ((double)(animationSpeed * *(float *)((int)pvVar6 + 0x164) * 60.0));
          *(undefined4 *)((int)pvVar6 + 0x168) = uVar16;
        }
      }
    }
    else if (bVar5 < 9) {
      lVar19 = lVar14 + 0x10;
      uVar21 = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar14,uVar20 + 0x40,lVar19,5,1,5,2,4);
      MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      MB_SpawnDebrisMoby(uVar21,lVar14,0x5fd,lVar19,lVar14 + 0x40,0,0);
      MB_SpawnDebrisMoby(uVar21,lVar14,0x5fe,lVar19,lVar14 + 0x40,0,0);
      DeleteMoby(moby);
      return;
    }
    if ((moby->enabled != '\0') &&
       (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
       fVar4 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) < 28.0)) {
      MB_SetZBoundsFromGround(lVar14);
      moby->shadow = '\x16';
    }
  }
  return;
}


// 0x0212c54 (0x14 bytes)
void M1229_00212c54(void)

{
  DAT_00768588 = 0x10000;
  return;
}


