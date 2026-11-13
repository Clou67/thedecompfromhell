// game/update/moby1012.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x186bcc-0x187538
#include "game/update/moby1012.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/moby816.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0186bcc (0x14 bytes)
void M1012_00186bcc(void)

{
  DAT_0073b9c4 = 0x10000;
  return;
}


// 0x0186be0 (0x40 bytes)
undefined8 M1012_00186be0(int param_1)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 0xa6) == 0x3f4) {
    if ((*(char *)(param_1 + 0x20) == '\0') || (*(int *)(*(int *)(param_1 + 0x78) + 0x7c) != 1)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0186c20 (0x58 bytes)
undefined8 M1012_00186c20(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


// 0x0186c78 (0x114 bytes)
int M1012_00186c78(MobyInstance *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_1->pVar;
  if (param_2 < 3) {
    if (0 < param_2) {
      if (param_2 < 2) {
        MB_ShowPersistentMessage(8,0xbce);
      }
      else {
        MB_ShowPersistentMessage(8,0xbcf);
      }
      goto LAB_00186d24;
    }
  }
  else {
    if (param_2 < 4) {
      MB_ShowPersistentMessage(8,0xbcb);
      goto LAB_00186d24;
    }
    if (param_2 < 5) {
      MB_ShowPersistentMessage(8,0xbcd);
      goto LAB_00186d24;
    }
  }
  MB_ShowPersistentMessage(8,0xffffffffffffffff);
LAB_00186d24:
  iVar2 = *(int *)((int)pvVar1 + 0xa4);
  if (iVar2 == -1) {
    iVar2 = RegisterHUDCallback
                      (0xc,0,&PTR_PromptHud_Init_00705750,&PTR_PromptHud_Update_00705758,
                       &PTR_Draw_PromptMsg_00705788,(int *)0x0,0);
    *(int *)((int)pvVar1 + 0xa4) = iVar2;
  }
  else {
    iVar2 = Hud_ShowEntryById(iVar2,10);
  }
  return iVar2;
}


// 0x0186d90 (0xc0 bytes)
void M1012_00186d90(MobyInstance *param_1)

{
  void *pvVar1;
  double dVar2;
  
  dVar2 = 0.01745329238474369;
  pvVar1 = param_1->pVar;
  MB_BobMotion
            (DAT_0073b9e8,DAT_0073b9ec * 0.017453292 * g_FrameTime,param_1,
             (float *)((int)pvVar1 + 0xac),(float *)((int)pvVar1 + 0xa8));
  MB_SwingMotion
            ((double)DAT_0073b9f0,
             (double)((float)((double)DAT_0073b9f4 * dVar2) * g_FrameTime),
             (double)((float)((double)DAT_0073b9f8 * dVar2) * g_FrameTime),param_1,
             ZEXT48(pvVar1) + 0xb0,ZEXT48(pvVar1) + 0xb4);
  return;
}


// 0x0186e60 (0x6d8 bytes)
/* Moby 1012 */

void UpdateMoby_1012(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  uint uVar13;
  u16 *puVar14;
  void *pvVar15;
  Spline *pSVar16;
  Spline *pSVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  MobyInstance *pMVar25;
  longlong lVar26;
  undefined8 uVar27;
  int iVar28;
  longlong unused;
  undefined8 in_LR;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  Vec4 local_70;
  
  lVar26 = (longlong)(int)moby;
  pvVar12 = moby->pVar;
  if ((*(int *)((int)pvVar12 + 0x90) != -1) && (*(int *)((int)pvVar12 + 0x94) != -1)) {
    if (moby->oClass == TAXI_03F4) {
      if ((moby->state == '\0') || (*(int *)((int)pvVar12 + 0x7c) != 1)) {
        uVar27 = 0;
      }
      else {
        uVar27 = 1;
      }
    }
    else {
      uVar27 = 0;
    }
    FUN_004d407c(lVar26,uVar27);
    dVar30 = (double)(moby->pos).x;
    dVar31 = (double)(moby->pos).y;
    dVar32 = (double)(moby->pos).z;
    FastDecTimerS32(ZEXT48(pvVar12) + 0x88);
    bVar2 = moby->state;
    fVar3 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).z;
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar13 = *(uint *)((int)pvVar12 + 0x80);
        moby->setByGroup = (char)uVar13;
        pSVar16 = Splines[*(int *)((int)pvVar12 + (uVar13 & 0xff) * 4 + 0x90)];
        (moby->pos).x = pSVar16->points[0].x;
        (moby->pos).y = pSVar16->points[0].y;
        (moby->pos).z = pSVar16->points[0].z;
        fVar3 = pSVar16->points[0].w;
        *(undefined4 *)((int)pvVar12 + 0xa4) = 0xffffffff;
        (moby->pos).w = fVar3;
        *(undefined4 *)((int)pvVar12 + 0x88) = 0;
        moby->state = '\x01';
        moby->updateDistance = -1;
        moby->drawDistance = 0xff;
      }
      else {
        pSVar16 = Splines[*(int *)((int)pvVar12 + 0x90)];
        pSVar17 = Splines[*(int *)((int)pvVar12 + 0x94)];
        fVar6 = pSVar16->points[0].y;
        fVar7 = pSVar16->points[0].x;
        fVar22 = g_heroPosition.y - fVar6;
        fVar8 = pSVar17->points[0].y;
        fVar9 = pSVar17->points[0].x;
        fVar20 = g_heroPosition.x - fVar7;
        fVar21 = g_heroPosition.y - fVar8;
        fVar19 = g_heroPosition.x - fVar9;
        fVar10 = pSVar16->points[0].z;
        fVar11 = pSVar17->points[0].z;
        fVar24 = g_heroPosition.z - fVar10;
        fVar23 = g_heroPosition.z - fVar11;
        bVar1 = SQRT(fVar24 * fVar24 + fVar20 * fVar20 + fVar22 * fVar22) <
                SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar21 * fVar21);
        fVar6 = fVar4 - fVar6;
        fVar4 = fVar4 - fVar8;
        fVar7 = fVar3 - fVar7;
        fVar3 = fVar3 - fVar9;
        fVar10 = fVar5 - fVar10;
        fVar5 = fVar5 - fVar11;
        if ((*(int *)((int)pvVar12 + 0x7c) == 0) &&
           ((*(int *)((int)pvVar12 + 0x8c) != 0 ||
            (iVar28 = MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar12 + 0xa0)),
            iVar28 != 0)))) {
          puVar14 = moby->pClass->collision;
          moby->setByGroup = bVar1;
          iVar28 = *(int *)((int)pvVar12 + (uint)bVar1 * 4 + 0x90);
          moby->collision = puVar14;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          pSVar16 = Splines[iVar28];
          (moby->pos).x = pSVar16->points[0].x;
          (moby->pos).y = pSVar16->points[0].y;
          (moby->pos).z = pSVar16->points[0].z;
          fVar3 = pSVar16->points[0].w;
          moby->state = '\x03';
          (moby->pos).w = fVar3;
          *(undefined4 *)((int)pvVar12 + 100) = 1;
          *(undefined4 *)((int)pvVar12 + 0x84) = 0;
          *(undefined4 *)((int)pvVar12 + 0x7c) = 1;
        }
        else if (*(int *)((int)pvVar12 + 0x7c) == 0) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        }
        else if ((*(int *)((int)pvVar12 + 0x84) == 0) ||
                ((((pMVar25 = DAT_0096a1d8, g_heroStateType != 3 && (g_heroState != EDGE_JUMP)
                   ) && (pMVar25 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar25 != moby)
                 ))) {
          if (bVar1 != SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar6 * fVar6) <
                       SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4)) {
            moby->state = '\x03';
            moby->setByGroup = moby->setByGroup ^ 1;
            *(undefined4 *)((int)pvVar12 + 100) = 1;
            *(undefined4 *)((int)pvVar12 + 0x84) = 0;
          }
        }
        else {
          iVar28 = *(int *)((int)pvVar12 +
                           (int)(((ulonglong)(byte)moby->setByGroup ^ 1) << 2) + 0x98);
          unused = (longlong)iVar28;
          M1012_00186c78(moby,iVar28);
          if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_HelpMsgOwner == 8)) {
            Hero_WalkToPos((moby->rotation).z,&(moby->pos).x,unused,0);
            moby->setByGroup = moby->setByGroup ^ 1;
            *(undefined4 *)((int)pvVar12 + 100) = 1;
            *(undefined4 *)((int)pvVar12 + 0x84) = 0;
            moby->state = '\x02';
          }
        }
      }
    }
    else if (bVar2 < 3) {
      iVar28 = Hero_GetSpecialStateKind();
      if (iVar28 == 0) {
        moby->state = '\x03';
      }
    }
    else if (bVar2 < 4) {
      if (*(int *)((int)pvVar12 + 0x8c) == 0) {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      }
      pMVar25 = DAT_0096a1d8;
      if ((((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) ||
          (pMVar25 = g_standingOnMoby, g_framesNotGrounded == 0)) && (pMVar25 == moby)) {
        DAT_00969ed2 = 4;
        DAT_00969ed4 = 4;
      }
      iVar28 = M816_MoveAlongSpline
                         (moby,(longlong)
                               *(int *)((int)pvVar12 + (uint)(byte)moby->setByGroup * 4 + 0x90),
                          (int)pvVar12 + 0x78);
      if (iVar28 != 0) {
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        moby->state = '\x01';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(in_LR,0x186e50);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar18 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,
                            ZEXT48(pvVar12));
        *(undefined4 *)((int)pvVar12 + 0x88U & 0xfffffffc) = uVar18;
      }
    }
    dVar29 = 0.01745329238474369;
    pvVar15 = moby->pVar;
    MB_BobMotion
              (DAT_0073b9e8,DAT_0073b9ec * 0.017453292 * g_FrameTime,moby,
               (float *)((int)pvVar15 + 0xac),(float *)((int)pvVar15 + 0xa8));
    MB_SwingMotion
              ((double)DAT_0073b9f0,
               (double)((float)((double)DAT_0073b9f4 * dVar29) * g_FrameTime),
               (double)((float)((double)DAT_0073b9f8 * dVar29) * g_FrameTime),lVar26,
               ZEXT48(pvVar15) + 0xb0,ZEXT48(pvVar15) + 0xb4);
    local_70.x = (float)((double)(moby->pos).x - dVar30);
    local_70.y = (float)((double)(moby->pos).y - dVar31);
    local_70.w = (moby->pos).w;
    local_70.z = (float)((double)(moby->pos).z - dVar32);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar12 + 0x20),&local_70,ZEXT48(&stack0x00000000) - 0x80,
               lVar26 + 0x40);
    pMVar25 = DAT_0096a1d8;
    if (((((g_heroStateType != 3) && (g_heroState != EDGE_JUMP)) &&
         (pMVar25 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar25 != moby)) &&
       ((fVar3 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
        2.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3) && (*(int *)((int)pvVar12 + 0x88) == 0)))) {
      *(undefined4 *)((int)pvVar12 + 0x84) = 1;
    }
  }
  return;
}


