// game/update/moby63.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x3ec788-0x3efa94
#include <math.h>
#include <stdlib.h>
#include "game/update/moby63.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x03ec788 (0x50 bytes)
longlong M63_003ec788(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  param_2 = param_2 + -1;
  while( true ) {
    lVar2 = (longlong)param_2;
    if (param_2 < 0) {
      return lVar2;
    }
    iVar1 = (int)(lVar2 << 2);
    if (*(int *)(param_1 + iVar1) < worldUpdateTime) break;
    param_2 = param_2 + -1;
  }
  *(int *)(param_1 + iVar1) = param_3 + worldUpdateTime;
  return lVar2;
}


// 0x03ec7e0 (0x98 bytes)
void M63_003ec7e0
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (*(int *)(param_2 + 0x228) != 0) {
      DeletePart();
      *(undefined4 *)(param_2 + 0x228) = 0;
    }
  }
  else if (*(int *)(param_2 + 0x228) == 0) {
    uVar1 = SpawnPart_68
                      (0x3fc99999a0000000,0x3fc99999a0000000,0x3fe99999a0000000,param_1,0,param_3,
                       0xffffffff80808080,param_5,0x10808080,param_7,0x19);
    *(undefined4 *)(param_2 + 0x228) = uVar1;
  }
  return;
}


// 0x03ec878 (0x44 bytes)
void M63_003ec878(int param_1)

{
  if (*(int *)(param_1 + 0x228) != 0) {
    DeletePart();
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}


// 0x03ec8c8 (0xf4 bytes)
void M63_003ec8c8(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar4 = (double)*(float *)(param_1 + 0x18);
  if ((double)(float)(dVar4 + 0.30000001192092896) <= dVar3) {
    if (dVar3 <= dVar4) {
      puVar2 = (undefined4 *)(param_2 + 0x120U & 0xfffffff0);
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    else {
      *(float *)(param_1 + 0x18) = (float)((double)g_FrameTimeSq * 9.800000190734863 + dVar4);
      puVar2 = (undefined4 *)(param_2 + 0x120U & 0xfffffff0);
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
  }
  else {
    dVar5 = -(double)(g_FrameTimeSq * 9.8 - *(float *)(param_2 + 0x128));
    fVar1 = (float)(dVar4 + dVar5);
    *(float *)(param_2 + 0x128) = (float)dVar5;
    *(float *)(param_1 + 0x18) = fVar1;
    if ((double)fVar1 < dVar3) {
      *(float *)(param_1 + 0x18) = (float)dVar3;
    }
  }
  return;
}


// 0x03eca78 (0x301c bytes)
/* Moby 63 */

void UpdateMoby_63(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  float fVar4;
  short sVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar14;
  undefined2 uVar18;
  short sVar19;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar17;
  longlong lVar20;
  vec4 *pvVar21;
  longlong lVar22;
  MobyInstance *pMVar24;
  longlong lVar23;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  f32 local_2a0;
  f32 local_29c;
  GPiece<16> auStack_290;
  GPiece<16> local_280;
  GPiece<16> auStack_270;
  GPiece<16> auStack_260;
  GPiece<16> local_250;
  GPiece<16> auStack_240;
  GPiece<16> auStack_230;
  GPiece<16> auStack_220;
  GPiece<16> auStack_210;
  GPiece<16> auStack_200;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  Vec4 local_1e0;
  GPiece<16> auStack_1d0;
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  float afStack_1b0 [2];
  float local_1a8;
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  Vec4 local_190;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  GPiece<16> auStack_140;
  float local_130;
  float local_12c;
  undefined4 local_128;
  GPiece<8> auStack_120;
  float local_118;
  Vec4 local_110 [4];
  MobyInstance *local_d0;
  GPiece<4> auStack_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4 [3];
  longlong local_a8;
  
  lVar11 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar25 = ZEXT48(pvVar6);
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar6 + 0x230));
  if ((moby->enabled != '\0') &&
     (dVar26 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar26 < 28.0)) {
    MB_SetZBoundsFromGround(lVar11);
    moby->shadow = '\x16';
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  moby->collision = moby->pClass->collision;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  dVar26 = 4.0;
  MB_getTarget
            ((double)(*(float *)((int)pvVar6 + 0x1fc) + 4.0),lVar11,&DAT_003ec9bc,local_110);
  pMVar24 = local_d0;
  if ((local_d0 == (MobyInstance *)0x0) ||
     (((*(short *)((int)pvVar6 + 0x214) == 0 && (*(int *)((int)pvVar6 + 0x22c) != -1)) &&
      (iVar14 = MB_IsPntInCuboid(local_110,(longlong)*(int *)((int)pvVar6 + 0x22c)),
      iVar14 == 0)))) {
    pMVar24 = (MobyInstance *)0x0;
    local_d0 = (MobyInstance *)0x0;
    local_110[0].w = 0.0;
    local_110[0].z = 0.0;
    local_110[0].y = 0.0;
    local_110[0].x = 0.0;
  }
  lVar22 = lVar11 + 0x10;
  FUN_005e7e98(&local_2a0,lVar22);
  if (*(int *)((int)pvVar6 + 0x38) != 0) {
    uVar18 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar6 + 0x214) = uVar18;
  }
  *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  FastDecTimerS16(uVar25 + 0x208);
  if (moby->state != '\0') {
    iVar14 = FastDecTimerS16(uVar25 + 0x214);
    if (iVar14 == 0) {
      uVar16 = *(undefined4 *)((int)pvVar6 + 0x200);
    }
    else {
      uVar16 = *(undefined4 *)((int)pvVar6 + 0x1dc);
    }
    *(undefined4 *)((int)pvVar6 + 0x1fc) = uVar16;
  }
  dVar30 = 0.0;
  local_bc = 0;
  iVar14 = MB_damage(lVar11,0x330000,0);
  iVar17 = 0;
  MB_HandleDamage(moby,iVar14,uVar25 + 0x20,0,auStack_c0,&local_bc,0,4);
  FastDecTimerS16(uVar25 + 0x26);
  sVar5 = *(short *)((int)pvVar6 + 0x26);
  sVar19 = idol::GetAnimDuration(0x2d);
  if (((sVar5 < sVar19) && (iVar14 != 0)) && (moby->state != 'c')) {
    sVar5 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6);
    if (((sVar5 == 0xb0) || (sVar5 == 0xb1)) && (*(short *)((int)pvVar6 + 0x26) != 0)) {
      *(undefined4 *)(iVar14 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar14 + 0x2c) != 0) {
      dVar27 = (double)FUN_005e8338((double)((moby->pos).x - local_110[0].x),
                                    (double)((moby->pos).y - local_110[0].y));
      local_b8 = (float)dVar27;
      *(undefined4 *)((int)pvVar6 + 0x140) = 0x202;
      *(undefined4 *)((int)pvVar6 + 0x148) = 0x3f000000;
      fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)(iVar14 + 0x2c);
      *(undefined4 *)((int)pvVar6 + 0x130) = 0x3bb43958;
      *(undefined4 *)((int)pvVar6 + 0x134) = 0x3a902de0;
      *(float *)((int)pvVar6 + 0x20) = fVar4;
      fVar10 = DAT_008542ac;
      fVar9 = g_FrameTime;
      *(undefined4 *)((int)pvVar6 + 0x144) = 9;
      *(float *)((int)pvVar6 + 0x138) = fVar10 * fVar9;
      fVar10 = DAT_008542a8;
      *(undefined1 *)((int)pvVar6 + 0x15d) = 0;
      *(float *)((int)pvVar6 + 0x13c) = fVar10 * fVar9;
      fVar9 = g_FrameTime;
      if (dVar30 < (double)fVar4) {
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar14 + 0x10),*(undefined8 *)(iVar14 + 0x18),&local_b8,
                   uVar25 + 0x138,uVar25 + 0x13c);
        dVar27 = (double)local_b8;
        rand();
        MB_StartKick(dVar27,lVar11,uVar25 + 0x120);
        iVar17 = 6;
        *(undefined4 *)((int)pvVar6 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar6 + 0x174) = 0x41200000;
        moby->state = '\x06';
        M63_003ec878(uVar25);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        uVar18 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar6 + 0x26) = uVar18;
        MB_UpdateLightsTransition(lVar11,uVar25 + 0x110);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x138) = fVar9 * 10.0;
        *(float *)((int)pvVar6 + 0x13c) = fVar9 * 5.5;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar14 + 0x10),*(undefined8 *)(iVar14 + 0x18),&local_b8,
                   uVar25 + 0x138,uVar25 + 0x13c);
        dVar27 = (double)local_b8;
        rand();
        MB_StartKick(dVar27,lVar11,uVar25 + 0x120);
        iVar17 = 99;
        *(undefined4 *)((int)pvVar6 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar6 + 0x174) = 0x41900000;
        moby->state = 'c';
        M63_003ec878(uVar25);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        MB_UpdateLightsTransition(lVar11,uVar25 + 0x110);
        if (dVar26 <= ABS((double)(g_heroPosition.z - 248.0))) {
          MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        }
        else {
          MB_SpawnBoltsFromCrate(lVar11,0x200,0xffffffffffffffff);
        }
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar25 + 0x1d0,lVar22);
        *(undefined4 *)((int)pvVar6 + 0x1dc) = *(undefined4 *)((int)pvVar6 + 0x1fc);
        if (*(short *)((int)pvVar6 + 0x20a) == 0) {
          fVar4 = (moby->pos).z;
          moby->state = '\x0e';
          uVar2 = moby->animationId;
          (moby->pos).z = fVar4 + 6.0;
          if (uVar2 != '\0') {
            MB_SetAnimation(lVar11,0,0,0);
          }
        }
        else {
          moby->state = '\x01';
          if (moby->animationId != '\x03') {
            MB_SetAnimation(lVar11,3,0,0);
          }
        }
        *(undefined4 *)((int)pvVar6 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar6 + 0x24) = 1;
        *(undefined2 *)((int)pvVar6 + 0x214) = 0;
        *(undefined2 *)((int)pvVar6 + 0x208) = 0;
        *(undefined1 *)((int)pvVar6 + 0x58) = 8;
        *(undefined1 *)((int)pvVar6 + 0x5a) = 4;
        *(undefined1 *)((int)pvVar6 + 0x29) = 0;
        MB_InitDefaultParams((float *)((int)pvVar6 + 0x180));
        *(undefined4 *)((int)pvVar6 + 0x18c) = 0x40000000;
        *(undefined4 *)((int)pvVar6 + 0x188) = 0x40000000;
        fVar4 = *(float *)((int)pvVar6 + 0x204) * g_FrameTime;
        *(undefined4 *)((int)pvVar6 + 0x180) = 0x38d;
        *(uint *)((int)pvVar6 + 0x1b8) = *(uint *)((int)pvVar6 + 0x1b8) | 0x30;
        *(float *)((int)pvVar6 + 0x1a4) = fVar4;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar6 + 0xd0) = &DAT_008542b8;
        if (*(int *)((int)pvVar6 + 0x220) != -1) {
          iVar14 = PathFindClosestPnt
                             ((float)dVar30,(Vec4 *)lVar22,Splines[*(int *)((int)pvVar6 + 0x220)]);
          *(int *)((int)pvVar6 + 0x224) = iVar14;
        }
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_230,local_110,lVar22);
        dVar30 = (double)FUN_005e8030(auStack_230);
        if ((((double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar30) ||
            (8.0 <= ABS((moby->pos).z - local_110[0].z))) ||
           (iVar14 = MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = MB_randInt(0x13), iVar14 == 0)) {
            uVar12 = MB_randInt(0x100);
            fVar4 = *(float *)((int)pvVar6 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar4 = -fVar4;
              *(float *)((int)pvVar6 + 0x1f8) = fVar4;
            }
            *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
            dVar26 = (double)MB_randRangeFloat(30.0,90.0);
            local_a8 = (longlong)(int)dVar26;
            uVar18 = idol::GetAnimDuration((int)dVar26);
            *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
            moby->state = '\x03';
            if (moby->animationId != '\x05') {
              uVar13 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,5,0,uVar13);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_230);
            if (((double)(*(float *)((int)pvVar6 + 0x1fc) + 6.0) < dVar26) &&
               (*(short *)((int)pvVar6 + 0x20a) == 0)) {
              *(undefined1 *)((int)pvVar6 + 0x40) = 0;
              *(undefined1 *)((int)pvVar6 + 0x41) = 0;
              *(undefined1 *)((int)pvVar6 + 0x42) = 0;
              *(undefined1 *)((int)pvVar6 + 0x43) = 0;
              *(undefined1 *)((int)pvVar6 + 0x44) = 0;
              *(undefined1 *)((int)pvVar6 + 0x45) = 0;
              *(undefined1 *)((int)pvVar6 + 0x46) = 0;
              *(undefined1 *)((int)pvVar6 + 0x47) = 0;
              *(undefined1 *)((int)pvVar6 + 0x48) = 0;
              *(undefined1 *)((int)pvVar6 + 0x49) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
              moby->state = '\x10';
              if (moby->animationId != '\0') {
                uVar13 = idol::GetAnimDuration(3);
                MB_SetAnimation(lVar11,0,0,uVar13);
              }
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x04') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,4,0,uVar13);
          }
        }
        M63_003ec8c8(lVar11,uVar25);
      }
      else if (bVar1 < 3) {
        uVar13 = FUN_005e8338((double)((moby->pos).x - local_110[0].x),
                              (double)((moby->pos).y - local_110[0].y));
        OrganicDeltAngSpeed
                  (uVar13,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11,
                   &DAT_003ec9bc,uVar25 + 0x1f0);
        FUN_005e81f0(auStack_200,local_110,lVar22);
        dVar26 = (double)FUN_005e8030(auStack_200);
        if ((((double)*(float *)((int)pvVar6 + 0x1fc) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_110[0].z))) ||
           (iVar14 = MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = MB_randInt(0x13), iVar14 == 0)) {
            uVar12 = MB_randInt(0x100);
            fVar4 = *(float *)((int)pvVar6 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar4 = -fVar4;
              *(float *)((int)pvVar6 + 0x1f8) = fVar4;
            }
            *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
            dVar26 = (double)MB_randRangeFloat(30.0,90.0);
            local_a8 = (longlong)(int)dVar26;
            uVar18 = idol::GetAnimDuration((int)dVar26);
            *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
            moby->state = '\x03';
            if (moby->animationId != '\x05') {
              uVar13 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,5,0,uVar13);
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          uVar12 = MB_randInt(0x100);
          fVar4 = *(float *)((int)pvVar6 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar4 = -fVar4;
            *(float *)((int)pvVar6 + 0x1f8) = fVar4;
          }
          *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar26;
          uVar18 = idol::GetAnimDuration((int)dVar26);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          moby->state = '\x03';
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,5,0,uVar13);
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x03')) {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,3,0,uVar13);
        }
        M63_003ec8c8(lVar11,uVar25);
      }
      else {
        dVar27 = ABS((double)((moby->pos).z - local_110[0].z));
        dVar30 = (double)FUN_005e8588(lVar22,local_110);
        dVar30 = (double)(float)(dVar27 / dVar30);
        if (*(int *)((int)pvVar6 + 0x21c) == -1) {
          FUN_005e7e98(&local_1e0,local_110);
        }
        else {
          Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar6 + 0x21c)],(Vec4 *)local_110,&local_1e0);
        }
        dVar27 = (double)FUN_005e8338((double)(local_1e0.x - (moby->pos).x),
                                      (double)(local_1e0.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  ((double)(float)(dVar27 + (double)*(float *)((int)pvVar6 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
        dVar27 = (double)cosf((moby->rotation).z);
        dVar29 = 2.0;
        local_1f0 = (float)(dVar27 * 2.0);
        dVar27 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_1ec = (float)(dVar27 * dVar29);
        local_1e8 = 0;
        dVar27 = 1.0;
        uVar12 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x180),&local_1f0
                            ,&local_1e0);
        iVar14 = FastDecTimerS16(uVar25 + 0x210);
        if (iVar14 != 0) {
          dVar29 = (double)MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar29;
          uVar18 = idol::GetAnimDuration((int)dVar29);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          *(float *)((int)pvVar6 + 500) = -*(float *)((int)pvVar6 + 500);
        }
        FUN_005e81f0(auStack_1d0,local_110,uVar25 + 0x1d0);
        dVar29 = (double)FUN_005e8588(lVar22,local_110);
        if (((1.5 <= dVar29) &&
            (((local_d0 == (MobyInstance *)0x0 || (local_d0->oClass != MORPH_O_RAY_CHICKEN)) ||
             ((local_d0->state == 0xfd || local_d0->state == 0xfe || (2.299999952316284 <= dVar29)))
             ))) || ((uVar12 & 2) != 0)) {
          if ((dVar27 < dVar30) || ((uVar12 & 2) != 0)) {
            (moby->pos).x = local_2a0;
            (moby->pos).y = local_29c;
          }
          dVar30 = (double)FUN_005e8030(auStack_1d0);
          if (((double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar30) ||
             (8.0 <= ABS((moby->pos).z - local_110[0].z))) {
            if (moby->setByGroup != '\x01') {
              moby->state = '\x05';
            }
          }
          else if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x06') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,6,0,uVar13);
          }
        }
        moby->setByGroup = '\0';
        M63_003ec8c8(lVar11,uVar25);
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar13 = FUN_005e8338((double)(local_110[0].x - (moby->pos).x),
                              (double)(local_110[0].y - (moby->pos).y));
        dVar29 = 0.20000000298023224;
        OrganicDeltAngSpeed
                  (uVar13,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                   &DAT_003ec9bc,uVar25 + 0x1f0);
        uVar2 = moby->updateId;
        uVar3 = moby->animationId;
        dVar26 = (double)BlendAnimFrame(moby);
        dVar31 = ABS((double)((moby->pos).z - local_110[0].z));
        dVar30 = (double)FUN_005e8588(lVar22,local_110);
        dVar27 = (double)FUN_005e8338((double)(local_110[0].x - (moby->pos).x),
                                      (double)(local_110[0].y - (moby->pos).y));
        dVar27 = (double)FastSubRots((float)dVar27,(moby->rotation).z);
        if ((((uVar2 == uVar3) && (ABS((double)(float)(dVar26 - 13.0)) < dVar29)) && (dVar31 < 1.5))
           && (((dVar30 < 2.0 ||
                ((((local_d0 != (MobyInstance *)0x0 && (local_d0->oClass == MORPH_O_RAY_CHICKEN)) &&
                  (local_d0->state != 0xfd && local_d0->state != 0xfe)) &&
                 (dVar30 < 2.5999999046325684)))) && (dVar27 < 0.2617993950843811)))) {
          dVar26 = (double)cosf((moby->rotation).z);
          local_1c0 = (float)(dVar26 * dVar29);
          dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_1bc = (float)(dVar26 * dVar29);
          local_1b8 = 0;
          FUN_005e7e98(afStack_1b0,local_110);
          local_1a8 = local_1a8 + 0.75;
          if (pMVar24 != (MobyInstance *)0x0) {
            CollDamageMobyDirect(1.0,pMVar24,moby,1,iVar17,afStack_1b0,&local_1c0);
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar26 = (double)FUN_005e8588(lVar22,local_110), 1.5 < dVar26)) &&
           (moby->state = '\x03', moby->animationId != '\x05')) {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,5,0,uVar13);
        }
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0x120);
        fVar4 = -(g_FrameTimeSq * 9.8 - *(float *)((int)pvVar6 + 0x198));
        *(float *)((int)pvVar6 + 0x198) = fVar4;
        fVar4 = (moby->pos).z + fVar4;
        (moby->pos).z = fVar4;
        if ((double)fVar4 < dVar26) {
          *(undefined4 *)((int)pvVar6 + 0x198) = 0;
          (moby->pos).z = (float)dVar26;
        }
        M63_003ec8c8(lVar11,uVar25);
      }
      else if (bVar1 < 6) {
        if (*(int *)((int)pvVar6 + 0x21c) == -1) {
          FUN_005e7e98(&local_190,uVar25 + 0x1d0);
        }
        else {
          Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar6 + 0x21c)],(Vec4 *)((int)pvVar6 + 0x1d0),
                     &local_190);
        }
        uVar13 = FUN_005e8338((double)(local_190.x - (moby->pos).x),
                              (double)(local_190.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar13,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11);
        dVar26 = (double)cosf((moby->rotation).z);
        dVar30 = 2.0;
        local_1a0 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_19c = (float)(dVar26 * dVar30);
        local_198 = 0;
        uVar12 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x180),&local_1a0
                            ,&local_190);
        dVar26 = (double)FUN_005e8588(lVar22,uVar25 + 0x1d0);
        if ((dVar26 < dVar30) && (moby->state = '\x01', moby->animationId != '\x03')) {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,3,0,uVar13);
        }
        FUN_005e81f0(auStack_180,local_110,uVar25 + 0x1d0);
        dVar26 = (double)FUN_005e8030(auStack_180);
        if ((double)*(float *)((int)pvVar6 + 0x1fc) <= dVar26) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\x05') {
              uVar13 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,5,0,uVar13);
            }
          }
          else if ((uVar12 & 2) != 0) {
            (moby->pos).x = local_2a0;
            uVar2 = moby->animationId;
            (moby->pos).y = local_29c;
            moby->state = '\f';
            if (uVar2 != '\x04') {
              uVar13 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,4,0,uVar13);
            }
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,5,0,uVar13);
          }
        }
        M63_003ec8c8(lVar11,uVar25);
        moby->setByGroup = '\0';
      }
      else {
        uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x120));
        if ((uVar15 & 1) != 0) {
          *(undefined1 *)((int)pvVar6 + 0x120) = 0;
          *(undefined1 *)((int)pvVar6 + 0x121) = 0;
          *(undefined1 *)((int)pvVar6 + 0x122) = 0;
          *(undefined1 *)((int)pvVar6 + 0x123) = 0;
          *(undefined1 *)((int)pvVar6 + 0x124) = 0;
          *(undefined1 *)((int)pvVar6 + 0x125) = 0;
          *(undefined1 *)((int)pvVar6 + 0x126) = 0;
          *(undefined1 *)((int)pvVar6 + 0x127) = 0;
          *(undefined1 *)((int)pvVar6 + 0x128) = 0;
          *(undefined1 *)((int)pvVar6 + 0x129) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12a) = 0;
          *(undefined1 *)((int)pvVar6 + 299) = 0;
          *(undefined1 *)((int)pvVar6 + 300) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12d) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12e) = 0;
          *(undefined1 *)((int)pvVar6 + 0x12f) = 0;
          moby->state = '\x03';
          if (moby->animationId == '\x05') {
            return;
          }
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,5,0,uVar13);
          return;
        }
        fVar7 = (moby->pos).z;
        uVar15 = (int)fVar7 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar7) - uVar15) < 0x40a00000) {
          MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      M63_003ec878(uVar25);
      iVar14 = FUN_0048c188(lVar11,uVar25 + 0x120);
      if (iVar14 != 0) {
        moby->state = '\x0e';
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar11,0,0,0);
        }
        *(undefined2 *)((int)pvVar6 + 200) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_220,local_110,lVar22);
      dVar30 = (double)FUN_005e8030(auStack_220);
      if (((dVar30 < (double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) - dVar26)) &&
          (ABS((moby->pos).z - local_110[0].z) < 8.0)) &&
         (iVar14 = MB_randInt(0x13), iVar14 == 0)) {
        fVar4 = (moby->pos).z;
        uVar2 = moby->animationId;
        moby->state = '\x02';
        (moby->pos).z = fVar4 + 1.0;
        if (uVar2 != '\x04') {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,4,0,uVar13);
        }
      }
    }
    goto LAB_003ef8b8;
  }
  if (0xf < bVar1) {
    if (bVar1 < 0x13) {
      if (bVar1 < 0x11) {
        uVar13 = 0x3fe0000000000000;
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0x120);
        if (3.0 <= (float)((double)(moby->pos).z - dVar26)) {
          Delt(g_FrameTime,g_FrameTimeSq * 10.8,(float *)((int)pvVar6 + 0x48));
        }
        else {
          Delt(g_FrameTime * 8.0,g_FrameTimeSq * 10.8,
                         (float *)((int)pvVar6 + 0x48));
        }
        MB_MoveAndCollide(0x3fe3333340000000,uVar13,dVar30,lVar11,uVar25 + 0x40);
        dVar30 = (double)(moby->pos).z;
        moby->unk58 = -((float)(dVar30 - dVar26) * 0.16666667 * 5.0 - 6.0);
        if ((double)(float)(dVar26 + 6.0) <= dVar30) {
          uVar2 = moby->animationId;
          (moby->pos).z = (float)(dVar26 + 6.0);
          if (uVar2 != '\0') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,0,0,uVar13);
          }
          moby->state = '\x0e';
          FUN_005e7e70(uVar25 + 0x40);
        }
        M63_003ec7e0(lVar11,uVar25);
      }
      else if (bVar1 < 0x12) {
        uVar13 = 0x3fe0000000000000;
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0x120);
        Delt(g_FrameTime * -8.0,g_FrameTimeSq * 10.8,
                       (float *)((int)pvVar6 + 0x48));
        MB_MoveAndCollide(0x3fe3333340000000,uVar13,dVar30,lVar11,uVar25 + 0x40);
        if (((moby->animationId != '\x02') &&
            ((float)((double)(moby->pos).z - dVar26) <=
             g_FrameTime * 8.0 * animationSpeed * 45.0)) && (moby->animationId != '\x02'))
        {
          uVar13 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar11,2,0,uVar13);
        }
        if ((double)(moby->pos).z <= dVar26) {
          (moby->pos).z = (float)dVar26;
          uVar12 = MB_randInt(0x100);
          fVar4 = *(float *)((int)pvVar6 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar4 = -fVar4;
            *(float *)((int)pvVar6 + 0x1f8) = fVar4;
          }
          *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar26;
          uVar18 = idol::GetAnimDuration((int)dVar26);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          moby->state = '\x03';
          FUN_005e7e70(uVar25 + 0x40);
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,5,0,uVar13);
          }
        }
      }
      else {
        pSVar8 = Splines[*(int *)((int)pvVar6 + 0x220)];
        uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x1e0) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar6 + 0x1e4) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar13,0x3f926e9780000000,0x3fe99999a0000000,0x3fb70a3d80000000,lVar11);
        lVar23 = uVar25 + 0x1e0;
        lVar20 = uVar25 + 0x40;
        FUN_005e81f0(lVar20,lVar23,lVar22);
        ClampVec3Magnitude
                  ((double)(float)((double)g_FrameTime * dVar26),(Vec4 *)lVar20);
        FUN_005e7f54(auStack_260,lVar20,lVar22);
        dVar27 = (double)FUN_005e8030(lVar20);
        dVar29 = 1.0;
        moby->unk58 = (float)(dVar27 * 20.0 + 1.0);
        iVar14 = CollSphere(0x3ff3333340000000,auStack_260);
        if (iVar14 == 0) {
          FUN_005e7e98(lVar22,auStack_260);
        }
        else {
          uVar16 = idol::GetAnimDuration(0x78);
          *(undefined4 *)((int)pvVar6 + 0x20c) = uVar16;
          iVar14 = 0;
          dVar28 = 3.0;
          dVar31 = 5.0;
          dVar27 = 7.0;
          uVar13 = 0x3fe0000000000000;
          do {
            MB_randRangeFloat((float)dVar30,(float)dVar28);
            dVar32 = (double)MB_randRot();
            cosf((float)dVar32);
            FUN_005e8128(dVar32);
            MB_randRangeFloat((float)dVar31,(float)dVar27);
            FUN_005e7f54(lVar23,local_250,uVar25 + 0x1d0);
            dVar32 = (double)GetGroundZ(uVar13,lVar23,0x120);
            if (dVar29 < dVar32) break;
            iVar14 = iVar14 + 1;
          } while (iVar14 < 10);
          if (moby->animationId != '\0') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,0,0,uVar13);
          }
          moby->state = '\x0f';
        }
        dVar30 = (double)FUN_005e8548(lVar22,lVar23);
        dVar27 = (double)FUN_005e8030(lVar20);
        if (dVar30 < dVar27) {
          iVar14 = *(int *)((int)pvVar6 + 0x224) + 1;
          *(int *)((int)pvVar6 + 0x224) = iVar14;
          if (pSVar8->cnt <= iVar14) {
            iVar14 = 0;
            *(undefined4 *)((int)pvVar6 + 0x224) = 0;
          }
          FUN_005e7e98(lVar23,pSVar8->points + iVar14);
          dVar30 = (double)MB_randRangeFloat(-0.2,0.2);
          *(float *)((int)pvVar6 + 0x1e8) =
               (float)((double)*(float *)((int)pvVar6 + 0x1e8) + dVar30);
          dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0x120);
          if (((dVar30 <= dVar29) ||
              (dVar27 = (double)FUN_005e7ebc(auStack_240),
              (double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar27)) ||
             ((10.0 <= ABS((moby->pos).z - local_110[0].z) ||
              (iVar14 = MB_randInt(0x13), iVar14 != 0)))) {
            if (((dVar29 < dVar30) && (moby->setByGroup == '\x01')) &&
               (iVar14 = MB_randInt(4), iVar14 == 0)) {
              uVar12 = MB_randInt(0x100);
              fVar4 = *(float *)((int)pvVar6 + 0x1f8);
              if ((uVar12 & 1) != 0) {
                fVar4 = -fVar4;
                *(float *)((int)pvVar6 + 0x1f8) = fVar4;
              }
              *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
              dVar26 = (double)MB_randRangeFloat(30.0,90.0);
              local_a8 = (longlong)(int)dVar26;
              uVar18 = idol::GetAnimDuration((int)dVar26);
              *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
              if (moby->animationId != '\0') {
                uVar13 = idol::GetAnimDuration(3);
                MB_SetAnimation(lVar11,0,0,uVar13);
              }
              M63_003ec878(uVar25);
              *(undefined1 *)((int)pvVar6 + 0x40) = 0;
              *(undefined1 *)((int)pvVar6 + 0x41) = 0;
              *(undefined1 *)((int)pvVar6 + 0x42) = 0;
              *(undefined1 *)((int)pvVar6 + 0x43) = 0;
              *(undefined1 *)((int)pvVar6 + 0x44) = 0;
              *(undefined1 *)((int)pvVar6 + 0x45) = 0;
              *(undefined1 *)((int)pvVar6 + 0x46) = 0;
              *(undefined1 *)((int)pvVar6 + 0x47) = 0;
              *(undefined1 *)((int)pvVar6 + 0x48) = 0;
              *(undefined1 *)((int)pvVar6 + 0x49) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
              *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
              moby->state = '\x11';
              FUN_005e7e70(lVar20);
              moby->setByGroup = '\0';
            }
          }
          else {
            if (moby->animationId != '\0') {
              uVar13 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,0,0,uVar13);
            }
            *(undefined1 *)((int)pvVar6 + 0x40) = 0;
            *(undefined1 *)((int)pvVar6 + 0x41) = 0;
            *(undefined1 *)((int)pvVar6 + 0x42) = 0;
            *(undefined1 *)((int)pvVar6 + 0x43) = 0;
            *(undefined1 *)((int)pvVar6 + 0x44) = 0;
            *(undefined1 *)((int)pvVar6 + 0x45) = 0;
            *(undefined1 *)((int)pvVar6 + 0x46) = 0;
            *(undefined1 *)((int)pvVar6 + 0x47) = 0;
            *(undefined1 *)((int)pvVar6 + 0x48) = 0;
            *(undefined1 *)((int)pvVar6 + 0x49) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
            moby->state = '\x11';
            M63_003ec878(uVar25);
          }
        }
        M63_003ec7e0(lVar11,uVar25);
      }
    }
    else if (bVar1 == 99) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x120));
      if ((uVar15 & 0x140) != 0) {
        FUN_005e7e70(auStack_170);
        iVar14 = idol::GetAnimDuration(1);
        local_a8 = (longlong)(int)((float)(longlong)iVar14 * 60.0);
        iVar14 = M63_003ec788
                           (&DAT_010cbbc4,3,(int)((float)(longlong)iVar14 * 60.0));
        if (-1 < iVar14) {
          MB_SpawnExplosionSparks
                    (0x3fe0000000000000,0x402a000000000000,lVar11,lVar22,&DAT_003ec9bc,4);
        }
        DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_003ef8b8;
  }
  if (bVar1 < 0xd) {
    if (bVar1 < 0xb) {
      uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x1d0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar6 + 0x1d4) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar13,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                 &DAT_003ec9bc,uVar25 + 0x1f0);
      FUN_005e81f0(auStack_210,local_110,uVar25 + 0x1d0);
      dVar26 = (double)FUN_005e8030(auStack_210);
      if (((dVar26 < (double)*(float *)((int)pvVar6 + 0x1fc)) &&
          (ABS(*(float *)((int)pvVar6 + 0x1d8) - local_110[0].z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,2);
        }
        bVar1 = moby->animationId;
        uVar15 = rand();
        if ((uint)bVar1 != (uVar15 & 1) + 9) {
          uVar15 = rand();
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,(uVar15 & 1) + 9,0,uVar13);
        }
        fVar4 = DAT_008542b4;
        dVar26 = (double)DAT_008542b4;
        *(undefined4 *)((int)pvVar6 + 0x134) = 0;
        *(float *)((int)pvVar6 + 0x130) = fVar4;
        fVar4 = DAT_008542b0 * g_FrameTime;
        *(float *)((int)pvVar6 + 0x138) = fVar4;
        dVar26 = (double)MB_computeLobVelocity
                                   ((double)fVar4,-dVar26,lVar22,uVar25 + 0x1d0);
        *(float *)((int)pvVar6 + 0x13c) = (float)dVar26;
        *(undefined1 *)((int)pvVar6 + 0x15d) = 0;
        dVar26 = (double)(moby->rotation).z;
        *(undefined4 *)((int)pvVar6 + 0x144) = 0xd;
        rand();
        MB_StartKick(dVar26,lVar11,uVar25 + 0x120);
        *(undefined4 *)((int)pvVar6 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar6 + 0x174) = 0x41200000;
        M63_003ec7e0(lVar11,uVar25);
        moby->state = '\v';
      }
    }
    else if (bVar1 < 0xc) {
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x120));
      if ((uVar15 & 1) != 0) {
        M63_003ec878(uVar25);
        *(undefined1 *)((int)pvVar6 + 0x120) = 0;
        *(undefined1 *)((int)pvVar6 + 0x121) = 0;
        *(undefined1 *)((int)pvVar6 + 0x122) = 0;
        *(undefined1 *)((int)pvVar6 + 0x123) = 0;
        *(undefined1 *)((int)pvVar6 + 0x124) = 0;
        *(undefined1 *)((int)pvVar6 + 0x125) = 0;
        *(undefined1 *)((int)pvVar6 + 0x126) = 0;
        *(undefined1 *)((int)pvVar6 + 0x127) = 0;
        *(undefined1 *)((int)pvVar6 + 0x128) = 0;
        *(undefined1 *)((int)pvVar6 + 0x129) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12a) = 0;
        *(undefined1 *)((int)pvVar6 + 299) = 0;
        *(undefined1 *)((int)pvVar6 + 300) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12d) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12e) = 0;
        *(undefined1 *)((int)pvVar6 + 0x12f) = 0;
        moby->state = '\x03';
        uVar25 = MB_randInt(0x100);
        fVar4 = *(float *)((int)pvVar6 + 0x1f8);
        if ((uVar25 & 1) != 0) {
          fVar4 = -fVar4;
          *(float *)((int)pvVar6 + 0x1f8) = fVar4;
        }
        *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
        dVar26 = (double)MB_randRangeFloat(30.0,90.0);
        local_a8 = (longlong)(int)dVar26;
        uVar18 = idol::GetAnimDuration((int)dVar26);
        *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
        if (moby->animationId == '\x05') {
          return;
        }
        uVar13 = idol::GetAnimDuration(3);
        MB_SetAnimation(lVar11,5,8,uVar13);
        return;
      }
      fVar7 = (moby->pos).z;
      uVar15 = (int)fVar7 >> 0x1f;
      if ((int)((uVar15 >> 1 ^ (uint)fVar7) - uVar15) < 0x40a00000) {
        MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
    }
    else {
      dVar30 = ABS((double)((moby->pos).z - local_110[0].z));
      dVar26 = (double)FUN_005e8588(lVar22,local_110);
      dVar26 = (double)(float)(dVar30 / dVar26);
      if (*(int *)((int)pvVar6 + 0x21c) == -1) {
        FUN_005e7e98(&local_150,uVar25 + 0x1d0);
      }
      else {
        Path_PickNextNode
                  (moby,Splines[*(int *)((int)pvVar6 + 0x21c)],(Vec4 *)((int)pvVar6 + 0x1d0),
                   &local_150);
      }
      uVar13 = FUN_005e8338((double)(local_150.x - (moby->pos).x),
                            (double)(local_150.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar13,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
      dVar30 = (double)cosf((moby->rotation).z);
      dVar27 = 2.0;
      local_160 = (float)(dVar30 * 2.0);
      dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_15c = (float)(dVar30 * dVar27);
      local_158 = 0;
      dVar27 = 1.0;
      uVar15 = MB_UpdateNavMove
                         (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar6 + 0x180),&local_160,
                          &local_150);
      FUN_005e81f0(auStack_140,local_110,uVar25 + 0x1d0);
      dVar30 = (double)FUN_005e8588(lVar22,local_110);
      if ((1.5 <= dVar30) || (dVar27 < dVar26)) {
        if ((dVar27 < dVar26) || ((uVar15 & 2) != 0)) {
          if ((moby->field43_0x70 & 2U) != 0) {
            MB_randInt(4);
            iVar14 = MB_randInt(4);
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,(ZERO_MASK(iVar14) & 1U) + 3,0,uVar13)
            ;
          }
          iVar14 = MB_randInt(99);
          if (iVar14 == 0) {
            *(undefined1 *)((int)pvVar6 + 0x40) = 0;
            *(undefined1 *)((int)pvVar6 + 0x41) = 0;
            *(undefined1 *)((int)pvVar6 + 0x42) = 0;
            *(undefined1 *)((int)pvVar6 + 0x43) = 0;
            *(undefined1 *)((int)pvVar6 + 0x44) = 0;
            *(undefined1 *)((int)pvVar6 + 0x45) = 0;
            *(undefined1 *)((int)pvVar6 + 0x46) = 0;
            *(undefined1 *)((int)pvVar6 + 0x47) = 0;
            *(undefined1 *)((int)pvVar6 + 0x48) = 0;
            *(undefined1 *)((int)pvVar6 + 0x49) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4a) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4b) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4c) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4d) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4e) = 0;
            *(undefined1 *)((int)pvVar6 + 0x4f) = 0;
            moby->state = '\x10';
            if (moby->animationId != '\0') {
              uVar13 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,0,0,uVar13);
            }
          }
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x05') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,5,0,uVar13);
          }
        }
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x06') {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,6,0,uVar13);
        }
      }
      moby->setByGroup = '\0';
    }
    goto LAB_003ef8b8;
  }
  if (0xd < bVar1) {
    if (bVar1 < 0xf) {
      M63_003ec7e0(lVar11,uVar25);
      FUN_005e81f0(auStack_290,local_110,lVar22);
      uVar13 = 0x3fe0000000000000;
      dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0x120);
      dVar29 = 1.0;
      if ((((dVar27 <= 1.0) ||
           (dVar31 = (double)FUN_005e7ebc(auStack_290),
           (double)(float)((double)*(float *)((int)pvVar6 + 0x1fc) + dVar26) <= dVar31)) ||
          (10.0 <= ABS((moby->pos).z - local_110[0].z))) ||
         (iVar14 = MB_randInt(0x13), iVar14 != 0)) {
        if (((dVar27 <= dVar29) || (moby->setByGroup != '\x01')) ||
           (iVar14 = MB_randInt(4), iVar14 != 0)) {
          if (*(int *)((int)pvVar6 + 0x220) == -1) {
            iVar14 = FastDecTimerS32(uVar25 + 0x20c);
            if (iVar14 != 0) {
              MB_randRange(0x28,0x78);
              uVar16 = idol::GetAnimDuration();
              *(undefined4 *)((int)pvVar6 + 0x20c) = uVar16;
              iVar14 = 0;
              dVar31 = 5.0;
              dVar27 = 7.0;
              do {
                MB_randRangeFloat((float)dVar30,(float)dVar26);
                dVar28 = (double)MB_randRot();
                cosf((float)dVar28);
                FUN_005e8128(dVar28);
                MB_randRangeFloat((float)dVar31,(float)dVar27);
                FUN_005e7f54(uVar25 + 0x1e0,local_280,uVar25 + 0x1d0);
                dVar28 = (double)GetGroundZ(uVar13,uVar25 + 0x1e0,0x120);
                if (dVar29 < dVar28) break;
                iVar14 = iVar14 + 1;
              } while (iVar14 < 10);
              if (moby->animationId != '\0') {
                uVar13 = idol::GetAnimDuration(3);
                MB_SetAnimation(lVar11,0,0,uVar13);
              }
              moby->state = '\x0f';
            }
          }
          else {
            pSVar8 = Splines[*(int *)((int)pvVar6 + 0x220)];
            dVar26 = (double)FUN_005e8548(lVar22,pSVar8->points + *(int *)((int)pvVar6 + 0x224));
            iVar14 = *(int *)((int)pvVar6 + 0x224);
            if (dVar26 < 0.25) {
              iVar14 = iVar14 + 1;
              *(int *)((int)pvVar6 + 0x224) = iVar14;
              if (pSVar8->cnt <= iVar14) {
                iVar14 = 0;
                *(undefined4 *)((int)pvVar6 + 0x224) = 0;
              }
            }
            FUN_005e7e98(uVar25 + 0x1e0,pSVar8->points + iVar14);
            moby->state = '\x12';
          }
        }
        else {
          uVar12 = MB_randInt(0x100);
          fVar4 = *(float *)((int)pvVar6 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar4 = -fVar4;
            *(float *)((int)pvVar6 + 0x1f8) = fVar4;
          }
          *(float *)((int)pvVar6 + 500) = fVar4 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_a8 = (longlong)(int)dVar26;
          uVar18 = idol::GetAnimDuration((int)dVar26);
          *(undefined2 *)((int)pvVar6 + 0x210) = uVar18;
          if (moby->animationId != '\0') {
            uVar13 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,0,0,uVar13);
          }
          M63_003ec878(uVar25);
          moby->state = '\x11';
          FUN_005e7e70(uVar25 + 0x40);
          moby->setByGroup = '\0';
        }
      }
      else {
        if (moby->animationId != '\0') {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,0,0,uVar13);
        }
        moby->state = '\x11';
        M63_003ec878(uVar25);
      }
    }
    else {
      uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar6 + 0x1e0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar6 + 0x1e4) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar13,0x3f9eb851e0000000,0x3fe3333340000000,0x3fb70a3d80000000,lVar11);
      lVar23 = uVar25 + 0x40;
      dVar30 = (double)FUN_005e8030(lVar23);
      local_b4[0] = (float)dVar30;
      dVar27 = 1.0;
      moby->unk58 = (float)(dVar30 * 20.0 + 1.0);
      FUN_005e81f0(lVar23,uVar25 + 0x1e0,lVar22);
      dVar30 = (double)FUN_005e8030(lVar23);
      if (dVar30 <= dVar27) {
        Delt(g_FrameTime,g_FrameTimeSq * 8.0,local_b4);
      }
      else {
        Delt((float)((double)g_FrameTime * dVar26),g_FrameTimeSq * 6.0,local_b4);
      }
      ClampVec3Magnitude((double)local_b4[0],(Vec4 *)lVar23);
      FUN_005e7f54(auStack_270,lVar23,lVar22);
      iVar14 = CollSphere(0x3ff3333340000000,auStack_270,&DAT_003ec9bc,0,lVar11);
      if (iVar14 == 0) {
        FUN_005e7e98(lVar22,auStack_270);
      }
      else {
        FUN_005e7e70(lVar23);
        if (moby->animationId != '\0') {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,0,0,uVar13);
        }
        moby->state = '\x0e';
      }
      dVar26 = (double)FUN_005e8548(lVar22,uVar25 + 0x1e0);
      if ((dVar26 < (double)local_b4[0]) || (local_b4[0] == 0.0)) {
        if (moby->animationId != '\0') {
          uVar13 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,0,0,uVar13);
        }
        moby->state = '\x0e';
      }
      M63_003ec7e0(lVar11,uVar25);
    }
    goto LAB_003ef8b8;
  }
  if ((moby->updateId != '\x05') && (moby->animationId != '\x05')) {
    uVar13 = idol::GetAnimDuration(3);
    MB_SetAnimation(lVar11,5,0,uVar13);
  }
  fVar4 = (moby->rotation).z;
  *(undefined2 *)((int)pvVar6 + 0x212) = 1;
  dVar26 = (double)cosf(fVar4);
  local_130 = (float)((double)(*(float *)((int)pvVar6 + 0x204) * g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_128 = 0;
  local_12c = (float)((double)(*(float *)((int)pvVar6 + 0x204) * g_FrameTime) * dVar26);
  FUN_005e7f54(auStack_120,lVar22,&local_130);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar29 = 2.0;
    dVar27 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar24 = MobyUpdateChainStart;
    do {
      if (((pMVar24 != moby) && (pMVar24->state < 0x80)) &&
         ((pMVar24->oClass == RATCHET || (pMVar24->oClass == ROBOSQUAWKER)))) {
        pvVar21 = &pMVar24->pos;
        dVar31 = (double)FUN_005e8588(auStack_120,pvVar21);
        if (dVar31 < dVar29) {
          dVar31 = (double)(moby->rotation).z;
          dVar32 = (double)(moby->pos).z;
          uVar13 = FUN_005e8338((double)((pMVar24->pos).x - (moby->pos).x),
                                (double)((pMVar24->pos).y - (moby->pos).y));
          dVar28 = (double)FastDiffRots(dVar31,uVar13);
          dVar31 = dVar26;
          if (dVar30 < dVar28) {
            dVar31 = dVar27;
          }
          dVar31 = (double)FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)g_FrameTime * dVar31));
          (moby->rotation).z = (float)dVar31;
          FUN_005e81f0(auStack_120,lVar22,pvVar21);
          FUN_005e7f98(dVar29,auStack_120,auStack_120);
          FUN_005e7f54(auStack_120,auStack_120,pvVar21);
          local_118 = (float)dVar32;
        }
      }
      pMVar24 = (MobyInstance *)pMVar24->pChain;
    } while (pMVar24 != (MobyInstance *)0x0);
  }
  FUN_005e7e98(lVar22,auStack_120);
  dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0x120);
  fVar4 = -(g_FrameTimeSq * 9.8 - *(float *)((int)pvVar6 + 0x198));
  *(float *)((int)pvVar6 + 0x198) = fVar4;
  fVar4 = (moby->pos).z + fVar4;
  (moby->pos).z = fVar4;
  if ((double)fVar4 < dVar26) {
    *(undefined4 *)((int)pvVar6 + 0x198) = 0;
    (moby->pos).z = (float)dVar26;
  }
  if (*(uint *)((int)pvVar6 + 0x218) == 0) {
LAB_003ef87c:
    moby->state = '\x05';
    if (moby->animationId != '\x05') {
      uVar13 = idol::GetAnimDuration(3);
      MB_SetAnimation(lVar11,5,0,uVar13);
    }
  }
  else {
    dVar26 = (double)FUN_005e8588(lVar22,(ulonglong)*(uint *)((int)pvVar6 + 0x218) + 0x10);
    dVar30 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar6 + 0x216));
    if (dVar30 < dVar26) goto LAB_003ef87c;
  }
  moby->setByGroup = '\0';
LAB_003ef8b8:
  MB_ColorDyingMoby(lVar11,uVar25 + 0x110);
  fVar7 = (moby->pos).x;
  uVar15 = (int)fVar7 >> 0x1f;
  iVar14 = (uVar15 >> 1 ^ (uint)fVar7) - uVar15;
  if ((((iVar14 < 0x40000000) || (0x447f4000 < iVar14)) ||
      (fVar7 = (moby->pos).y, uVar15 = (int)fVar7 >> 0x1f,
      iVar14 = (uVar15 >> 1 ^ (uint)fVar7) - uVar15, 0x447f4000 < iVar14 || iVar14 < 0x40000000)) ||
     ((fVar7 = (moby->pos).z, uVar15 = (int)fVar7 >> 0x1f,
      iVar14 = (uVar15 >> 1 ^ (uint)fVar7) - uVar15, iVar14 < 0x40000000 || (0x447f4000 < iVar14))))
  {
    DeleteMoby(moby);
  }
  else if ((((*(short *)((int)pvVar6 + 0x20a) == 2) &&
            ((0x3f7ae148 <
              (int)(FLOAT_ORDER(g_PerfLoad)) ||
             (0x3f7ae148 <
              (int)(FLOAT_ORDER(g_FrameLoad)))))) &&
           (iVar14 = MB_randInt(0x1d), iVar14 == 0)) && (moby->enabled == '\0')) {
    iVar17 = rand();
    iVar14 = iVar17 / 3 + (iVar17 >> 0x1f);
    iVar17 = iVar17 + (iVar14 - (iVar14 >> 0x1f)) * -3;
    if (moby->group != -1) {
      iVar17 = MB_CountActiveMobysByGroup(moby->group,0xffffffffffffffff);
    }
    if (2 < iVar17) {
      DeleteMoby(moby);
    }
  }
  return;
}


