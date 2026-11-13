// game/update/moby557.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3b5ce0-0x3b6460
#include <stdio.h>
#include "game/update/moby557.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby42.h"
#include "idol/fastfunc.h"

// 0x03b5ce0 (0x14 bytes)
void M557_003b5ce0(void)

{
  DAT_00845964 = 0x10000;
  return;
}


// 0x03b5d10 (0x750 bytes)
// strings: 00656a90: '*Error: Moby 557(hoverboat) with no target. UID: %d - RAR\n'

/* Moby 557 */

void UpdateMoby_557_Hoverboat(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  undefined2 uVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  Vec4 local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  longlong local_40;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar5 = moby->pVar;
  uVar13 = ZEXT48(pvVar5);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if ((-1 < *(int *)((int)pvVar5 + 0x21c)) &&
     (iVar12 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x21c)),
     iVar12 != 0)) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    pMVar8 = g_MobyInstance;
    iVar12 = *(int *)((int)pvVar5 + 0x150);
    if (iVar12 < 0) {
      return;
    }
    pMVar9 = g_MobyInstance + iVar12;
    g_MobyInstance[iVar12].collision = (ushort *)0x0;
    pMVar8[iVar12].modeBits =
         pMVar9->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    return;
  }
  if (moby->collision == (ushort *)0x0) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->collision = moby->pClass->collision;
    pMVar8 = g_MobyInstance;
    iVar12 = *(int *)((int)pvVar5 + 0x150);
    if (-1 < iVar12) {
      pMVar9 = g_MobyInstance + iVar12;
      g_MobyInstance[iVar12].collision = (g_MobyInstance[iVar12].pClass)->collision;
      pMVar8[iVar12].modeBits =
           pMVar9->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
  }
  dVar15 = (double)(moby->pos).x;
  dVar16 = (double)(moby->pos).y;
  dVar17 = (double)(moby->pos).z;
  if (moby->state == '\0') {
    pSVar6 = Splines[*(int *)((int)pvVar5 + 0x74)];
    (moby->pos).x = pSVar6->points[0].x;
    (moby->pos).y = pSVar6->points[0].y;
    (moby->pos).z = pSVar6->points[0].z;
    (moby->pos).w = pSVar6->points[0].w;
    *(undefined4 *)((int)pvVar5 + 0x15c) = 0xffffffff;
    *(undefined4 *)((int)pvVar5 + 0x200) = 0;
    *(undefined2 *)((int)pvVar5 + 0x206) = 0;
    AttachManipulator(moby,0,(int)pvVar5 + 0x1c0);
    if (*(int *)((int)pvVar5 + 0x150) == -1) {
      printf("*Error: Moby 557(hoverboat) with no target. UID: %d - RAR\n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    *(undefined2 *)((int)pvVar5 + 0x204) = 0;
    *(undefined4 *)((int)pvVar5 + 0x214) = *(undefined4 *)((int)pvVar5 + 0xfc);
  }
  UpdateMoby_42(moby);
  pMVar8 = g_MobyInstance + *(int *)((int)pvVar5 + 0x150);
  if (*(int *)((int)pvVar5 + 0x158) == 0x3039) {
    if (*(int *)((int)pvVar5 + 0x154) == -1) {
      local_90 = (moby->pos).x;
      local_8c = (moby->pos).y;
      local_88 = (moby->pos).z;
      local_84 = (moby->pos).w;
    }
    else {
      GetBonePosition(lVar11,*(int *)((int)pvVar5 + 0x154),uVar10 - 0x90);
    }
    FastEulerToMtx1(uVar10 - 0x80,lVar11 + 0x40);
    fVar1 = *(float *)((int)pvVar5 + 0x164);
    fVar2 = *(float *)((int)pvVar5 + 0x160);
    fVar3 = *(float *)((int)pvVar5 + 0x168);
    fVar4 = *(float *)((int)pvVar5 + 0x16c);
    (pMVar8->pos).x =
         local_90 + local_50 * fVar4 + local_60 * fVar3 + local_80 * fVar2 + local_70 * fVar1;
    (pMVar8->pos).y =
         local_8c + local_4c * fVar4 + local_5c * fVar3 + local_7c * fVar2 + local_6c * fVar1;
    (pMVar8->pos).z =
         local_88 + local_48 * fVar4 + local_58 * fVar3 + local_78 * fVar2 + local_68 * fVar1;
    (pMVar8->pos).w = local_84;
  }
  iVar12 = *(int *)((int)pvVar5 + 0x15c);
  if (iVar12 != -1) {
    iVar12 = IsMobyPlayingSound(moby,iVar12);
    if (iVar12 != 0) goto LAB_003b6074;
    iVar12 = *(int *)((int)pvVar5 + 0x15c);
  }
  if (iVar12 == -1) {
    iVar12 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar5 + 0x15c) = iVar12;
  }
LAB_003b6074:
  dVar14 = (double)FastWrapRot(*(float *)((int)pvVar5 + 0x200),0.17453292);
  *(float *)((int)pvVar5 + 0x200) = (float)dVar14;
  FastQuaternionToEuler(uVar13 + 0x1d0,0);
  local_a0.x = (float)((double)(moby->pos).x - dVar15);
  local_a0.y = (float)((double)(moby->pos).y - dVar16);
  local_a0.w = (moby->pos).w;
  local_a0.z = (float)((double)(moby->pos).z - dVar17);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x180),&local_a0,uVar10 - 0xb0,lVar11 + 0x40);
  if ((g_heroStateType == 0xd) && (DAT_0096a644 == pMVar8)) {
    if (*(short *)((int)pvVar5 + 0x204) == 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      *(undefined2 *)((int)pvVar5 + 0x204) = 1;
      auVar18 = loadVectorLeftIndexed(0x5a04,0x840000);
      auVar19 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = loadVectorLeftIndexed(4,0x3b5cf8);
      auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar18 = vectorAddFloatingPoint
                          (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorMultiplyAddFloatingPoint(auVar20,auVar18,auVar19);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      iVar12 = (int)(animationSpeed * ((float)(longlong)DAT_00845a04 + 0.5));
      local_40 = (longlong)iVar12;
      auVar18 = vectorSplatHalfWord(auVar18,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar18,0x20c,uVar13);
      *(undefined2 *)((int)pvVar5 + 0x20c) = uVar7;
      dVar15 = (double)FastIntToDouble((short)iVar12);
      *(float *)((int)pvVar5 + 0x210) = (float)(1.0 / dVar15);
    }
    FastDecTimerS16(uVar13 + 0x20c);
    dVar15 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x20c));
    *(float *)((int)pvVar5 + 0xfc) =
         (*(float *)((int)pvVar5 + 0x214) - 0.005) *
         (float)(dVar15 * (double)*(float *)((int)pvVar5 + 0x210)) + 0.005;
  }
  else {
    if (*(short *)((int)pvVar5 + 0x204) == 1) {
      if ((g_framesNotGrounded == 0) || (g_heroPosition.z <= (moby->pos).z - 3.0)) {
        auVar18 = ZEXT416(0xffffffff);
        auVar20 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        *(undefined2 *)((int)pvVar5 + 0x204) = 0;
        auVar18 = loadVectorLeftIndexed(0x5a08,0x840000);
        auVar19 = vectorConvertFromSignedFixedPointWord(auVar18,0);
        auVar18 = loadVectorLeftIndexed(4,0x3b5cf8);
        auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar18 = vectorAddFloatingPoint
                            (auVar19,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
        auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar20,auVar18,auVar19);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = vectorSplatHalfWord(auVar18,1);
        iVar12 = (int)(animationSpeed * ((float)(longlong)DAT_00845a08 + 0.5));
        local_40 = (longlong)iVar12;
        uVar7 = storeVectorElementHalfWordIndexed(auVar18,0x20c,uVar13);
        *(undefined2 *)((int)pvVar5 + 0x20c) = uVar7;
        dVar15 = (double)FastIntToDouble((short)iVar12);
        *(undefined4 *)((int)pvVar5 + 0x218) = *(undefined4 *)((int)pvVar5 + 0xfc);
        *(float *)((int)pvVar5 + 0x210) = (float)(1.0 / dVar15);
      }
      else {
        local_a0.x = (pMVar8->pos).x - g_heroPosition.x;
        local_a0.y = (pMVar8->pos).y - g_heroPosition.y;
        fVar1 = SQRT(local_a0.x * local_a0.x + local_a0.y * local_a0.y);
        DAT_00969ddc = (pMVar8->pos).w;
        local_a0.z = 0.0;
        fVar2 = fVar1;
        if (g_FrameTime * DAT_00845a00 - fVar1 < 0.0) {
          fVar2 = g_FrameTime * DAT_00845a00;
        }
        local_a0.w = DAT_00969ddc;
        if (fVar1 == 0.0) {
          DAT_00969dd8 = 0.0;
          DAT_00969dd4 = 0.0;
          DAT_00969dd0 = 0.0;
        }
        else {
          fVar2 = fVar2 / fVar1;
          DAT_00969dd0 = local_a0.x * fVar2;
          DAT_00969dd4 = local_a0.y * fVar2;
          DAT_00969dd8 = fVar2 * 0.0;
        }
      }
    }
    if (*(short *)((int)pvVar5 + 0x204) == 0) {
      FastDecTimerS16(uVar13 + 0x20c);
      dVar15 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x20c));
      *(float *)((int)pvVar5 + 0xfc) =
           (*(float *)((int)pvVar5 + 0x218) - *(float *)((int)pvVar5 + 0x214)) *
           (float)(dVar15 * (double)*(float *)((int)pvVar5 + 0x210)) +
           *(float *)((int)pvVar5 + 0x214);
    }
    else {
      FastDecTimerS16(uVar13 + 0x20c);
      dVar15 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x20c));
      *(float *)((int)pvVar5 + 0xfc) =
           (*(float *)((int)pvVar5 + 0x214) - 0.005) *
           (float)(dVar15 * (double)*(float *)((int)pvVar5 + 0x210)) + 0.005;
    }
  }
  return;
}


