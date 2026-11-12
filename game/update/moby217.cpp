// game/update/moby217.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2f19c8-0x2f4458
#include <math.h>
#include "game/update/moby217.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby212.h"
#include "game/update/moby570.h"
#include "game/walk.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02f19c8 (0x1a4 bytes)
void M217_002f19c8(void)

{
  GPiece<16> auVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(0x10,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010bb424 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb424,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x18,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_010bb42c = storeVectorElementWordIndexed(auVar2,0xffffffffffffb42c,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x1c,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010bb430 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb430,0x10c0000);
  DAT_010bb434 = storeVectorElementWordIndexed(auVar2,0xffffffffffffb434,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x20,0x2f1998);
  auVar2 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = ZEXT416(0xffffffff);
  auVar3 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar5);
  auVar2 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  DAT_007fedd8 = 0x10000;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  DAT_010bb414 = DAT_0071f408 * 0.2;
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010bb438 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb438,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x24,0x2f1998);
  DAT_010bb418 = DAT_0071f408 * 0.075;
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010bb41c = DAT_0071f40c * 0.008;
  DAT_010bb420 = DAT_0071f408 * 0.05;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_010bb428 = DAT_0071f408 * 0.1;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  DAT_010bb43c = DAT_0071f408 * 0.1;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010bb440 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb440,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x28,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_010bb444 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb444,0x10c0000);
  return;
}


// 0x02f1b70 (0x74 bytes)
void M217_002f1b70
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  MB_SetAnimation();
  iVar1 = *(int *)(iVar1 + 0x424);
  if (iVar1 != 0) {
    MB_SetAnimation(iVar1,param_2,param_3,param_4);
  }
  return;
}


// 0x02f1be4 (0x1c bytes)
void M217_002f1be4(double param_1,int param_2)

{
  int iVar1;
  
  *(float *)(param_2 + 0x58) = (float)param_1;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 0x424);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x58) = (float)param_1;
  }
  return;
}


// 0x02f1c10 (0x300 bytes)
void M217_002f1c10(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  GPiece<80> local_f0;
  GPiece<88> local_a0;
  
  pvVar1 = param_1->pVar;
  dVar3 = 2.0;
  FastMemCopy32((int)pvVar1 + 0x210,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x214,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x218,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x21c,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x220,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x224,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x228,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x22c,local_a0,0x50);
  FastMemCopy32((int)pvVar1 + 0x230,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x234,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x238,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x23c,local_f0,0x50);
  FastMemCopy32((int)pvVar1 + 0x240,local_f0,0x50);
  walk_SetupTwistVals(param_1,(w_2legData *)((int)pvVar1 + 0x1a0));
  dVar4 = (double)g_FrameTimeSq;
  *(float *)((int)pvVar1 + 0x27c) = (float)(dVar4 * 9.800000190734863);
  *(float *)((int)pvVar1 + 0x26c) = (float)(dVar4 * 3.1415927410125732);
  *(float *)((int)pvVar1 + 0x270) = (float)(dVar4 * 6.2831854820251465);
  fVar2 = g_FrameTime;
  *(float *)((int)pvVar1 + 0x264) = (float)(dVar4 * dVar3);
  *(undefined1 *)((int)pvVar1 + 0x250) = 0;
  *(undefined1 *)((int)pvVar1 + 0x251) = 0;
  *(undefined1 *)((int)pvVar1 + 0x252) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0x253) = 8;
  *(undefined1 *)((int)pvVar1 + 0x254) = 1;
  *(undefined1 *)((int)pvVar1 + 0x255) = 1;
  *(undefined1 *)((int)pvVar1 + 0x290) = 4;
  *(undefined1 *)((int)pvVar1 + 0x291) = 2;
  *(undefined1 *)((int)pvVar1 + 0x293) = 6;
  *(float *)((int)pvVar1 + 0x274) = fVar2 * 6.2831855;
  *(undefined1 *)((int)pvVar1 + 0x292) = 8;
  *(undefined1 *)((int)pvVar1 + 0x340) = 5;
  *(undefined1 *)((int)pvVar1 + 0x341) = 3;
  *(undefined1 *)((int)pvVar1 + 0x343) = 7;
  *(undefined1 *)((int)pvVar1 + 0x342) = 9;
  *(undefined4 *)((int)pvVar1 + 0x280) = 0x3f000000;
  walk_init2LegAnim(param_1,(w_2legData *)((int)pvVar1 + 0x1a0));
  return;
}


// 0x02f1f28 (0xd8 bytes)
void M217_002f1f28(undefined8 param_1)

{
  undefined8 uVar1;
  GPiece<16> auStack_50;
  GPiece<24> local_40;
  
  uVar1 = 0;
  GetBonePosition(0,param_1,6,auStack_50);
  MB_genericExplosion
            (uVar1,uVar1,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,0x3ff8000000000000
             ,0x402e000000000000,param_1,local_40,auStack_50,1,0xffffffffffffffff,10,3,4);
  return;
}


// 0x02f20a0 (0x23b8 bytes)
/* Moby 217 */

void UpdateMoby_217(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  MobyInstance *pMVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *unused;
  undefined2 uVar18;
  undefined1 uVar21;
  short sVar19;
  longlong lVar12;
  undefined8 uVar13;
  short sVar20;
  uint uVar17;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auStack_260;
  GPiece<16> auStack_250;
  Vec4 VStack_240;
  GPiece<16> auStack_230;
  float local_220;
  float local_21c;
  undefined4 local_218;
  Vec4 local_210;
  Vec4 local_200;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  uint local_1d4;
  float afStack_1d0 [4];
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  GPiece<16> auStack_1b0;
  GPiece<144> auStack_1a0;
  uint local_110;
  ushort *local_10c;
  float *local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  uint local_f4;
  MobyInstance *local_c0;
  GPiece<4> auStack_b0;
  float local_ac;
  float local_a8;
  float local_a4 [7];
  longlong local_88;
  
  lVar11 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  uVar23 = ZEXT48(pvVar4);
  bVar9 = false;
  if ((*(int *)((int)pvVar4 + 0x38) != 0) || (*(char *)((int)pvVar4 + 0x406) != '\0')) {
    bVar9 = true;
  }
  unused = &DAT_002f2000;
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar4 + 0x120U));
  if ((moby->enabled != '\0') &&
     (dVar24 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar24 < 27.0)) {
    MB_SetZBoundsFromGround(lVar11);
    moby->shadow = '\x15';
  }
  if (bVar9) {
    fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
  }
  else {
    fVar2 = *(float *)((int)pvVar4 + 0x43c);
  }
  MB_getTarget((double)fVar2,lVar11);
  lVar22 = lVar11 + 0x10;
  dVar29 = (double)(moby->rotation).z;
  dVar24 = (double)FUN_005e8588(lVar22,&local_100);
  dVar25 = (double)FUN_005e8338((double)(local_100 - (moby->pos).x),
                                (double)(local_fc - (moby->pos).y));
  dVar26 = (double)BlendAnimFrame(moby);
  if (g_gameMode == GAME_MODE_SCENE) {
    iVar14 = *(int *)((int)pvVar4 + 0x424);
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (iVar14 != 0) {
      *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) | 0x41;
    }
  }
  else if ((moby->modeBits & DISABLED) != NONE) {
    iVar14 = *(int *)((int)pvVar4 + 0x424);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (iVar14 != 0) {
      *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) & 0xffbe;
    }
  }
  FUN_005e7e98(auStack_260,lVar22);
  FUN_005e7e98(auStack_250,lVar22);
  FUN_005e7e98(&VStack_240,&local_100);
  if ((moby->enabled != '\0') && (dVar27 = (double)FUN_005e8548(lVar22,0x951500), dVar27 < 32.0)) {
    MB_SetZBoundsFromGround(lVar11);
    moby->shadow = '\x1a';
  }
  FastDecTimerS16(uVar23 + 0x404);
  if ((moby->state != '\n') && (moby->state != '\0')) {
    dVar27 = 0.0;
    local_ac = 0.0;
    iVar14 = MB_damage(lVar11,0x210000,0);
    unused = (undefined4 *)0x0;
    iVar15 = MB_HandleDamage(moby,iVar14,uVar23 + 0x20,0,auStack_b0,&local_ac,0,4);
    if ((iVar14 != 0) && ((local_ac != 0.0 && (moby->state != '\0')))) {
      pMVar5 = *(MobyInstance **)(iVar14 + 0x20);
      if (pMVar5 == (MobyInstance *)0x0) {
        dVar28 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else if (pMVar5 == g_currentWeaponMoby) {
        dVar28 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else {
        dVar28 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar5->pos).x),
                                      (double)((moby->pos).y - (pMVar5->pos).y));
      }
      fVar2 = g_FrameTimeSq;
      local_a8 = (float)dVar28;
      *(float *)((int)pvVar4 + 0xd4) = g_FrameTimeSq * 12.0;
      *(float *)((int)pvVar4 + 0xd0) = fVar2 * 35.0;
      fVar2 = g_FrameTime;
      dVar28 = 7.0;
      *(undefined1 *)((int)pvVar4 + 0xfd) = 0;
      *(undefined4 *)((int)pvVar4 + 0xe4) = 9;
      *(float *)((int)pvVar4 + 0xd8) = fVar2 * 7.0;
      fVar2 = *(float *)((int)pvVar4 + 0x20) - local_ac;
      *(float *)((int)pvVar4 + 0x20) = fVar2;
      if ((double)fVar2 <= dVar27) {
        iVar15 = 1;
      }
      if (iVar15 == 1 || *(short *)((int)pvVar4 + 0x404) == 0) {
        if (iVar15 < 6) {
          if (iVar15 < 2) {
            if ((-1 < iVar15) && (0 < iVar15)) {
              *(undefined4 *)((int)pvVar4 + 0xe0) = 0x400;
              *(undefined4 *)((int)pvVar4 + 0xe8) = 0x3f800000;
              MB_SetupJumpArc
                        (0x4016ccccc0000000,0x4010000000000000,0x400,&DAT_002f2000,uVar23 + 0xc0);
              MB_VecAtan2Angles
                        (*(undefined8 *)(iVar14 + 0x10),*(undefined8 *)(iVar14 + 0x18),&local_a8,
                         uVar23 + 0xd8,uVar23 + 0xdc);
              MB_StartKick((double)local_a8,lVar11,uVar23 + 0xc0);
              unused = (undefined4 *)0xa;
              *(undefined4 *)((int)pvVar4 + 0x110) = 0x41400000;
              *(undefined4 *)((int)pvVar4 + 0x114) = 0x41c80000;
              moby->state = '\n';
              *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
              MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
              MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
            }
          }
          else if (2 < iVar15) {
            if (iVar15 < 4) goto LAB_002f252c;
            PlayMobySound(0xb,0,moby);
            unused = (undefined4 *)idol::GetAnimDuration(4);
            M217_002f1b70(lVar11,6,2);
            uVar18 = idol::GetAnimDuration(0x28);
            *(undefined2 *)((int)pvVar4 + 0x402) = uVar18;
            moby->state = '\x01';
            dVar27 = (double)animationSpeed;
            *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
            *(float *)((int)pvVar4 + 0x42c) = 3.4 / (float)(dVar27 * dVar28);
            MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
            uVar18 = idol::GetAnimDuration(0x46);
            *(undefined2 *)((int)pvVar4 + 0x404) = uVar18;
            uVar21 = idol::GetAnimDuration(0xf0);
            *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
          }
        }
        else if (iVar15 < 9) {
          if (iVar15 == 7) {
            PlayMobySound(0xb,0,moby);
            if (*(int *)((int)pvVar4 + 0x448) < 1) {
              *(undefined4 *)((int)pvVar4 + 0x408) = 0xbf060a92;
            }
            uVar16 = idol::GetAnimDuration(0x1e);
            *(undefined4 *)((int)pvVar4 + 0x448) = uVar16;
            moby->setByGroup = moby->setByGroup | 5;
            uVar13 = idol::GetAnimDuration(6);
            M217_002f1b70(lVar11,5,0,uVar13);
            M217_002f1be4(0x4000000000000000,lVar11);
            unused = (undefined4 *)0x5;
            moby->state = '\b';
            MB_StartKick((double)local_a8,lVar11,uVar23 + 0xc0,8,5,1,0);
            *(undefined4 *)((int)pvVar4 + 0x110) = 0x40a00000;
            *(undefined4 *)((int)pvVar4 + 0x114) = 0x41200000;
            dVar27 = (double)animationSpeed;
            *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
            *(float *)((int)pvVar4 + 0x42c) = 3.4 / (float)(dVar27 * dVar28);
            MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
            uVar18 = idol::GetAnimDuration(0x46);
            *(undefined2 *)((int)pvVar4 + 0x404) = uVar18;
            uVar21 = idol::GetAnimDuration(0xf0);
            *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
          }
          else {
LAB_002f252c:
            PlayMobySound(0xb,0,moby);
            if (*(int *)((int)pvVar4 + 0x448) < 1) {
              *(undefined4 *)((int)pvVar4 + 0x408) = 0xbf060a92;
            }
            uVar16 = idol::GetAnimDuration(0x1e);
            *(undefined4 *)((int)pvVar4 + 0x448) = uVar16;
            if (((*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) == 0) ||
                (unused = (undefined4 *)((int)*(uint *)(iVar14 + 0x2c) >> 0x1f),
                0x3f800000 < (int)(((uint)unused >> 1 ^ *(uint *)(iVar14 + 0x2c)) - (int)unused)))
               && ((moby->updateId != '\x04' || ((dVar26 < 17.0 || (20.0 < dVar26)))))) {
              moby->setByGroup = moby->setByGroup | 5;
              unused = (undefined4 *)idol::GetAnimDuration(6);
              M217_002f1b70(lVar11,5,0);
              M217_002f1be4(0x4000000000000000,lVar11);
              moby->state = '\b';
            }
            dVar27 = (double)animationSpeed;
            *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
            *(float *)((int)pvVar4 + 0x42c) = (3.4 / (float)(dVar27 * dVar28)) * 0.5;
            MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
            uVar18 = idol::GetAnimDuration(0x46);
            *(undefined2 *)((int)pvVar4 + 0x404) = uVar18;
            uVar21 = idol::GetAnimDuration(0xf0);
            *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
          }
        }
      }
      else {
        if (*(int *)((int)pvVar4 + 0x448) < 1) {
          *(undefined4 *)((int)pvVar4 + 0x408) = 0xbf060a92;
        }
        uVar16 = idol::GetAnimDuration(0x1e);
        *(undefined4 *)((int)pvVar4 + 0x448) = uVar16;
        *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
        MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
      }
    }
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar4 + 0x38) != 0) {
    uVar21 = idol::GetAnimDuration(0xf0);
    *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
  }
  *(undefined4 *)((int)pvVar4 + 0x38) = 0;
  FastDecTimerU8(uVar23 + 0x406);
  if ((moby->state != '\0') && (*(char *)((int)pvVar4 + 0x2e) != '\x01')) {
    if (*(MobyInstance **)((int)pvVar4 + 0x424) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar4 + 0x424));
    }
    DeleteMoby(moby);
    return;
  }
  FastDecTimerS16(uVar23 + 0x402);
  dVar27 = (double)(moby->rotation).z;
  bVar1 = moby->state;
  fVar2 = (moby->pos).x;
  pvVar6 = moby->pVar;
  fVar3 = (moby->pos).y;
  if (4 < bVar1) {
    if (bVar1 == 10) {
      uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0xc0));
      if (((uVar17 & 0x40) != 0) ||
         (fVar7 = (moby->pos).z, uVar17 = (int)fVar7 >> 0x1f,
         (int)((uVar17 >> 1 ^ (uint)fVar7) - uVar17) < 0x3f800000)) {
        M217_002f1f28(lVar11);
        if (*(MobyInstance **)((int)pvVar4 + 0x424) != (MobyInstance *)0x0) {
          DeleteMoby(*(MobyInstance **)((int)pvVar4 + 0x424));
        }
        MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        lVar12 = lVar11 + 0x40;
        uVar13 = 0;
        MB_SpawnDebrisMoby(0,lVar11,0x798,lVar22,lVar12,0,0);
        MB_SpawnDebrisMoby(uVar13,lVar11,0x799,lVar22,lVar12,0,0);
        MB_SpawnDebrisMoby(uVar13,lVar11,0x79a,lVar22,lVar12,0,0);
        DeleteMoby(moby);
        return;
      }
    }
    else if (bVar1 == 9) {
      if ((moby->updateId == '\b') && ((moby->field43_0x70 & 2U) != 0)) {
        moby->state = '\x05';
        moby->setByGroup = moby->setByGroup & 0xefU | 8;
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,9,0,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),9,0,iVar14);
        }
      }
      else {
        if ((moby->setByGroup & 0x10U) == 0) {
          dVar24 = (double)MB_DeltAngSpeed
                                     (dVar27,dVar25,(double)(g_FrameTimeSq * 3.1415927),
                                      (double)(g_FrameTimeSq * 6.2831855),
                                      (double)(g_FrameTime * 4.1887903),&DAT_002f2000,
                                      &DAT_00720000,uVar23 + 0x410);
        }
        else {
          uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x3f0) - fVar2),
                                (double)(*(float *)((int)pvVar4 + 0x3f4) - fVar3));
          dVar24 = (double)MB_DeltAngSpeed
                                     (dVar27,uVar13,(double)(g_FrameTimeSq * 3.1415927),
                                      (double)(g_FrameTimeSq * 6.2831855),
                                      (double)(g_FrameTime * 4.1887903),&DAT_002f2000,
                                      &DAT_00720000,uVar23 + 0x410);
        }
        (moby->rotation).z = (float)dVar24;
      }
    }
    else if (bVar1 == 8) {
      if ((moby->animationId != '\x05') || ((moby->updateId == '\x05' && (13.0 < dVar26)))) {
        if ((moby->setByGroup & 4U) == 0) {
          if ((moby->animationId != '\b') || ((28.0 <= dVar26 && (moby->updateId == '\b')))) {
            if (*(int *)((int)pvVar4 + 0x418) < 1) {
              moby->state = '\x01';
              *(undefined2 *)((int)pvVar4 + 0x402) = 0;
            }
            else {
              fVar2 = -(g_FrameTimeSq * 200.0 - *(float *)((int)pvVar4 + 0x418));
              *(float *)((int)pvVar4 + 0x418) = fVar2;
              MB_SphericalToVector
                        (fVar2,*(float *)((int)pvVar4 + 0x414),(moby->rotation).y,afStack_1d0);
              FUN_005e7f54(lVar22,lVar22,afStack_1d0);
              dVar24 = (double)MB_DeltAngSpeed
                                         ((double)(moby->rotation).z,dVar25,
                                          (double)(g_FrameTimeSq * 3.1415927),
                                          (double)(g_FrameTimeSq * 6.2831855),
                                          (double)(g_FrameTime * 4.1887903));
              (moby->rotation).z = (float)dVar24;
            }
          }
          else {
            fVar2 = DAT_0071f408 * 0.11111111;
            if (*(float *)((int)pvVar4 + 0x418) < fVar2) {
              fVar2 = g_FrameTimeSq * 20.0 + *(float *)((int)pvVar4 + 0x418);
            }
            *(float *)((int)pvVar4 + 0x418) = fVar2;
            MB_SphericalToVector
                      (fVar2,*(float *)((int)pvVar4 + 0x414),(moby->rotation).y,afStack_1d0);
            FUN_005e7f54(lVar22,lVar22,afStack_1d0);
            dVar24 = (double)MB_DeltAngSpeed
                                       ((double)(moby->rotation).z,dVar25,
                                        (double)(g_FrameTimeSq * 3.1415927),
                                        (double)(g_FrameTimeSq * 6.2831855),
                                        (double)(g_FrameTime * 4.1887903),&DAT_002f2000,
                                        &DAT_00720000,uVar23 + 0x410);
            (moby->rotation).z = (float)dVar24;
          }
        }
        else {
          moby->setByGroup = moby->setByGroup & 0xfb;
          iVar14 = (int)(animationSpeed * 6.5);
          local_88 = (longlong)iVar14;
          MB_SetAnimation(lVar11,4,4,iVar14);
          if (*(int *)((int)pvVar6 + 0x424) != 0) {
            MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),4,4,iVar14);
          }
          moby->unk58 = 1.5;
          iVar14 = *(int *)((int)moby->pVar + 0x424);
          if (iVar14 != 0) {
            *(undefined4 *)(iVar14 + 0x58) = 0x3fc00000;
          }
          moby->state = '\a';
        }
      }
    }
    else if (bVar1 == 7) {
      if ((((moby->updateId == moby->animationId) &&
           (dVar27 = (double)BlendAnimFrame(moby), 17.0 <= dVar27)) &&
          (dVar27 = (double)BlendAnimFrame(moby), dVar27 < 20.0)) &&
         ((ABS((moby->pos).z - local_f8) < 2.0 &&
          (dVar27 = (double)FUN_005e8588(lVar22,&local_100), dVar27 < 4.5)))) {
        dVar27 = (double)cosf((float)dVar25);
        dVar28 = 0.20000000298023224;
        local_1f0 = (float)(dVar27 * 0.20000000298023224);
        dVar27 = (double)FUN_005e8128(dVar25);
        local_1ec = (float)(dVar27 * dVar28);
        local_1e8 = 0;
        local_1e0 = local_100;
        local_1dc = local_fc;
        local_1d4 = local_f4;
        local_1d8 = local_f8 + 0.75;
        if (local_c0 != (MobyInstance *)0x0) {
          CollDamageMobyDirect(1.0,local_c0,moby,1,(int)unused,&local_1e0,&local_1f0);
        }
      }
      if (20.0 < dVar26) {
        uVar17 = (int)moby->unk58 >> 0x1f;
        if (0x3f800000 < (int)((uVar17 >> 1 ^ (uint)moby->unk58) - uVar17)) {
          fVar2 = -(g_FrameTime * 3.0 - moby->unk58);
          if (fVar2 - 1.0 < 0.0) {
            fVar2 = 1.0;
          }
          moby->unk58 = fVar2;
          iVar14 = *(int *)((int)moby->pVar + 0x424);
          if (iVar14 != 0) {
            *(float *)(iVar14 + 0x58) = fVar2;
          }
        }
      }
      fVar2 = animationSpeed;
      if ((moby->updateId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        uVar13 = 0;
        auVar30 = loadVectorLeftIndexed(0x74,0x2f2000);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar18 = storeVectorElementHalfWordIndexed(auVar30,0x402,uVar23);
        *(undefined2 *)((int)pvVar4 + 0x402) = uVar18;
        pvVar6 = moby->pVar;
        if (bVar9) {
          fVar3 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
        }
        else {
          fVar3 = *(float *)((int)pvVar4 + 0x43c);
        }
        if (dVar24 < (double)fVar3) {
          uVar13 = 0xd;
        }
        iVar14 = (int)(fVar2 * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,uVar13,0,iVar14);
        iVar15 = *(int *)((int)pvVar6 + 0x424);
        if (iVar15 != 0) {
          MB_SetAnimation(iVar15,uVar13,0,iVar14);
        }
        moby->state = '\x01';
      }
    }
    else if (bVar1 == 6) {
      if (4.5 <= dVar24) {
        if ((moby->setByGroup & 8U) != 0) {
          moby->setByGroup = moby->setByGroup & 0xf7;
          Walk_ResetLegState(moby,(w_2legData *)((int)pvVar4 + 0x1a0));
          dVar27 = (double)(moby->rotation).z;
          fVar2 = (moby->pos).x;
          fVar3 = (moby->pos).y;
        }
        uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x3f0) - fVar2),
                              (double)(*(float *)((int)pvVar4 + 0x3f4) - fVar3));
        dVar24 = (double)MB_DeltAngSpeed
                                   (dVar27,uVar13,(double)(g_FrameTimeSq * 6.2831855),
                                    (double)(g_FrameTimeSq * 125.663704),
                                    (double)(g_FrameTime * 12.566371));
        *(float *)((int)pvVar4 + 0x414) = (float)dVar24;
        walk_Update((double)(g_FrameTime * 4.0),dVar24,(double)(g_FrameTimeSq * 20.0)
                          ,lVar11,uVar23 + 0x1a0);
        dVar24 = (double)FUN_005e8588(lVar22,uVar23 + 0x3f0);
        dVar26 = 2.0;
        fVar2 = (moby->rotation).z;
        if (dVar24 < 2.0) {
          moby->state = '\x01';
        }
        if (*(int *)((int)pvVar4 + 0x41c) != -1) {
          dVar24 = (double)cosf(fVar2);
          local_200.x = (float)(dVar24 * dVar26);
          dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_200.y = (float)(dVar24 * dVar26);
          local_200.z = 0.0;
          FUN_005e7f54(&local_200,&local_200,lVar22);
          iVar14 = PointInsideComplexPoly
                             (&local_200,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 == 0) {
            *(undefined4 *)((int)pvVar4 + 0x410) = 0;
            pvVar6 = moby->pVar;
            iVar14 = (int)(animationSpeed * 12.5);
            local_88 = (longlong)iVar14;
            MB_SetAnimation(lVar11,8,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              MB_SetAnimation(iVar15,8,0,iVar14);
            }
            moby->state = '\t';
            moby->setByGroup = moby->setByGroup | 0x10;
          }
          iVar14 = PointInsideComplexPoly
                             (&VStack_240,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 != 0) {
            moby->state = '\x01';
          }
        }
      }
      else {
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,4,4,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),4,4,iVar14);
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 5) {
      if ((moby->setByGroup & 8U) != 0) {
        moby->setByGroup = moby->setByGroup & 0xf7;
        Walk_ResetLegState(moby,(w_2legData *)((int)pvVar4 + 0x1a0));
        dVar27 = (double)(moby->rotation).z;
      }
      dVar26 = (double)MB_DeltAngSpeed
                                 (dVar27,dVar25,(double)(g_FrameTimeSq * 6.2831855),
                                  (double)(g_FrameTimeSq * 125.663704),
                                  (double)(g_FrameTime * 12.566371));
      *(float *)((int)pvVar4 + 0x414) = (float)dVar26;
      walk_Update((double)(g_FrameTime * 4.0),dVar26,(double)(g_FrameTimeSq * 20.0),
                        lVar11,uVar23 + 0x1a0);
      if (4.5 <= dVar24) {
        if (*(int *)((int)pvVar4 + 0x41c) != -1) {
          dVar24 = (double)cosf((moby->rotation).z);
          dVar26 = 2.0;
          local_210.x = (float)(dVar24 * 2.0);
          dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_210.y = (float)(dVar24 * dVar26);
          local_210.z = 0.0;
          FUN_005e7f54(&local_210,&local_210,lVar22);
          iVar14 = PointInsideComplexPoly
                             (&local_210,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 == 0) {
            *(undefined4 *)((int)pvVar4 + 0x410) = 0;
            pvVar6 = moby->pVar;
            iVar14 = (int)(animationSpeed * 12.5);
            local_88 = (longlong)iVar14;
            MB_SetAnimation(lVar11,8,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              MB_SetAnimation(iVar15,8,0,iVar14);
            }
            moby->state = '\t';
          }
          iVar14 = PointInsideComplexPoly
                             (&VStack_240,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 == 0) {
            moby->state = '\x06';
          }
        }
      }
      else {
        pvVar6 = moby->pVar;
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,4,4,iVar14);
        iVar15 = *(int *)((int)pvVar6 + 0x424);
        if (iVar15 != 0) {
          MB_SetAnimation(iVar15,4,4,iVar14);
        }
        moby->state = '\a';
      }
    }
    goto LAB_002f4034;
  }
  if (1 < bVar1) {
    if (bVar1 < 3) {
      if ((moby->updateId == '\x02') && ((moby->field43_0x70 & 2U) != 0)) {
        uVar13 = 0;
        if (bVar9) {
          fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar4 + 0x43c);
        }
        if (dVar24 < (double)fVar2) {
          uVar13 = 0xd;
        }
        local_88 = (longlong)(int)(animationSpeed * 12.5);
        M217_002f1b70(lVar11,uVar13,0,(int)(animationSpeed * 12.5));
        moby->state = '\x01';
      }
    }
    else if (bVar1 < 4) {
      if ((moby->updateId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,0xb,0,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),0xb,0,iVar14);
        }
      }
      if (*(short *)((int)pvVar4 + 0x402) == 0) {
        if (4.5 <= dVar24) {
          if (bVar9) {
            fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x43c);
          }
          if ((dVar24 < (double)fVar2) && ((moby->setByGroup & 1U) == 0)) {
            pvVar6 = moby->pVar;
            iVar14 = (int)(animationSpeed * 12.5);
            local_88 = (longlong)iVar14;
            MB_SetAnimation(lVar11,2,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              MB_SetAnimation(iVar15,2,0,iVar14);
            }
            moby->state = '\x02';
            moby->setByGroup = moby->setByGroup | 1;
          }
        }
        else {
          pvVar6 = moby->pVar;
          iVar14 = (int)(animationSpeed * 12.5);
          local_88 = (longlong)iVar14;
          MB_SetAnimation(lVar11,4,4,iVar14);
          iVar15 = *(int *)((int)pvVar6 + 0x424);
          if (iVar15 != 0) {
            MB_SetAnimation(iVar15,4,4,iVar14);
          }
          moby->state = '\a';
        }
      }
    }
    else {
      pSVar8 = Splines[*(int *)((int)pvVar4 + 0x434)];
      if (moby->animationId != '\x03') {
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,3,0,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),3,0,iVar14);
        }
      }
      if (dVar24 < 4.5) {
        pvVar6 = moby->pVar;
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        MB_SetAnimation(lVar11,4,4,iVar14);
        iVar15 = *(int *)((int)pvVar6 + 0x424);
        if (iVar15 != 0) {
          MB_SetAnimation(iVar15,4,4,iVar14);
        }
        moby->state = '\a';
      }
      dVar26 = (double)FUN_005e8588(pSVar8->points + *(short *)((int)pvVar4 + 0x438),lVar22);
      if (dVar26 < 1.0) {
        sVar20 = *(short *)((int)pvVar4 + 0x438) + 1;
        pvVar6 = moby->pVar;
        *(short *)((int)pvVar4 + 0x438) = sVar20;
        if ((int)sVar20 == pSVar8->cnt) {
          if (bVar9) {
            fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x43c);
          }
          if (dVar24 <= (double)fVar2) {
            iVar14 = (int)(animationSpeed * 24.5);
            local_88 = (longlong)iVar14;
            MB_SetAnimation(lVar11,0xd,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              MB_SetAnimation(iVar15,0xd,0,iVar14);
            }
          }
          else {
            iVar14 = (int)(animationSpeed * 24.5);
            local_88 = (longlong)iVar14;
            MB_SetAnimation(lVar11,0,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              MB_SetAnimation(iVar15,0,0,iVar14);
            }
          }
          moby->state = '\x01';
          goto LAB_002f4034;
        }
      }
      dVar24 = (double)(moby->rotation).z;
      iVar14 = (int)((longlong)*(short *)((int)pvVar4 + 0x438) << 4);
      uVar13 = FUN_005e8338((double)(*(float *)((int)&pSVar8->points[0].x + iVar14) - (moby->pos).x)
                            ,(double)(*(float *)((int)&pSVar8->points[0].y + iVar14) - (moby->pos).y
                                     ));
      dVar24 = (double)MB_DeltAngSpeed
                                 (dVar24,uVar13,(double)(g_FrameTimeSq * 12.566371),
                                  (double)(g_FrameTimeSq * 6.2831855),
                                  (double)(g_FrameTime * 3.1415927));
      (moby->rotation).z = (float)dVar24;
      dVar24 = (double)cosf((float)dVar24);
      dVar26 = 6.0;
      local_220 = (float)((double)(g_FrameTime * 6.0) * dVar24);
      dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_218 = 0;
      local_21c = (float)((double)(float)((double)g_FrameTime * dVar26) * dVar24);
      FUN_005e7f54(&local_220,&local_220,lVar22);
      CollMovingSphere
                (0x3fd0000000000000,0x3ff8000000000000,0x3fe8000000000000,0x3febecde60000000,lVar11,
                 lVar22,&local_220);
    }
    goto LAB_002f4034;
  }
  if (bVar1 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x20) = 0x40400000;
    *(undefined2 *)((int)pvVar4 + 0x24) = 3;
    *(undefined1 *)((int)pvVar4 + 0x28) = 2;
    *(undefined4 *)((int)pvVar4 + 0x30) = 0x3fc00000;
    *(undefined1 *)((int)pvVar4 + 0x2e) = 1;
    *(undefined1 *)((int)pvVar4 + 0x29) = 0;
    moby->setByGroup = '\0';
    *(undefined4 *)((int)pvVar4 + 0x420) = 0;
    *(undefined4 *)((int)pvVar4 + 0x424) = 0;
    *(undefined1 *)((int)pvVar4 + 0x407) = 0;
    FUN_005e7e98(uVar23 + 0x3f0,lVar22);
    if (*(char *)((int)pvVar4 + 0x121) == '\0') {
      AttachManipulator(moby,0,(Manipulator *)((int)pvVar4 + 0x120U));
    }
    AttachManipulator(moby,0xc,(int)pvVar4 + 0x160);
    *(f32 *)((int)pvVar4 + 0x428) = (moby->rotation).z;
    *(undefined1 *)((int)pvVar4 + 0x58) = 10;
    *(undefined1 *)((int)pvVar4 + 0x5a) = 0xc;
    if (*(char *)((int)pvVar4 + 0x400) == '\0') {
      moby->state = '\x01';
    }
    else {
      moby->state = '\x03';
      uVar13 = idol::GetAnimDuration(0xc);
      M217_002f1b70(lVar11,10,0,uVar13);
    }
    goto LAB_002f4034;
  }
  if ((moby->animationId == '\x06') &&
     (sVar20 = *(short *)((int)pvVar4 + 0x402), sVar19 = idol::GetAnimDuration(0x25),
     sVar20 == sVar19)) {
    PlayMobySound(2,0,moby);
  }
  bVar10 = (moby->field43_0x70 & 2U) == 0;
  if (bVar10) {
LAB_002f2bbc:
    if ((moby->animationId != '\r') && ((moby->animationId != '\x06' || (!bVar10)))) {
      if (bVar9) {
        fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
      }
      else {
        fVar2 = *(float *)((int)pvVar4 + 0x43c);
      }
      if (dVar24 < (double)fVar2) {
        uVar13 = idol::GetAnimDuration(0x18);
        M217_002f1b70(lVar11,0xd,0,uVar13);
      }
    }
  }
  else {
    if (bVar9) {
      fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
    }
    else {
      fVar2 = *(float *)((int)pvVar4 + 0x43c);
    }
    if (dVar24 <= (double)fVar2) goto LAB_002f2bbc;
    local_a4[0] = 0.0;
    local_a4[1] = 0.0;
    local_a4[2] = 0.0;
    local_a4[3] = 0.0;
    local_a4[4] = 0.0;
    local_a4[5] = 1.4013e-45;
    lVar12 = MB_randInt(6);
    uVar16 = *(undefined4 *)((int)local_a4 + (int)(lVar12 << 2));
    uVar13 = idol::GetAnimDuration(0x18);
    M217_002f1b70(lVar11,uVar16,0,uVar13);
  }
  if ((((*(int *)((int)pvVar4 + 0x430) == -1) || (*(int *)((int)pvVar4 + 0x434) == -1)) ||
      (*(short *)((int)pvVar4 + 0x43a) != 0)) ||
     ((!bVar9 &&
      (iVar14 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x430)),
      iVar14 == 0)))) {
    if ((moby->updateId == '\r') && (iVar14 = FastDecTimerU8(uVar23 + 0x407), iVar14 != 0)
       ) {
      PlayMobySound(10,0,moby);
      uVar21 = idol::GetAnimDuration(0xb4);
      *(undefined1 *)((int)pvVar4 + 0x407) = uVar21;
    }
    if (*(short *)((int)pvVar4 + 0x402) == 0) {
      if (4.5 <= dVar24) {
        if (bVar9) {
          fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar4 + 0x43c);
        }
        if ((dVar24 < (double)fVar2) && ((moby->setByGroup & 1U) == 0)) {
          uVar13 = idol::GetAnimDuration(0xc);
          M217_002f1b70(lVar11,2,0,uVar13);
          moby->state = '\x02';
          moby->setByGroup = moby->setByGroup | 1;
        }
      }
      else {
        uVar13 = idol::GetAnimDuration(0xc);
        M217_002f1b70(lVar11,4,4,uVar13);
        moby->state = '\a';
      }
    }
  }
  else {
    moby->state = '\x04';
    moby->setByGroup = moby->setByGroup | 1;
    *(undefined2 *)((int)pvVar4 + 0x43a) = 1;
  }
LAB_002f4034:
  MB_ColorDyingMoby(lVar11,uVar23 + 0xb0);
  uVar13 = 0;
  if (0 < *(int *)((int)pvVar4 + 0x42c)) {
    dVar24 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                  (double)((moby->pos).y - g_heroPosition.y));
    dVar24 = (double)cosf((float)dVar24);
    local_1c0 = (float)(dVar24 * (double)*(float *)((int)pvVar4 + 0x42c));
    FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                 (double)((moby->pos).y - g_heroPosition.y));
    dVar24 = (double)FUN_005e8128();
    local_1b8 = 0;
    local_1bc = (float)(dVar24 * (double)*(float *)((int)pvVar4 + 0x42c));
    FUN_005e7f54(&local_1c0,&local_1c0,lVar22);
    if (*(int *)((int)pvVar4 + 0x420) == 0) {
      *(float *)((int)pvVar4 + 0x42c) =
           *(float *)((int)pvVar4 + 0x42c) + -3.4 / (animationSpeed * 7.0 * animationSpeed * 7.0);
    }
    CollMovingSphere
              (0x3fd0000000000000,0x3ff8000000000000,0x3fe8000000000000,0x3febecde60000000,lVar11,
               lVar22,&local_1c0);
  }
  *(float *)((int)pvVar4 + 0x408) = *(float *)((int)pvVar4 + 0x408) * 0.96;
  FastDecTimerS32(uVar23 + 0x448);
  FastQuaternionToEuler((double)*(float *)((int)pvVar4 + 0x408),auStack_230,1);
  lVar12 = uVar23 + 0x130;
  FastQuaternionToEuler(uVar13,lVar12,2);
  FastQuaternionMult(lVar12,lVar12,auStack_230);
  if (moby->state != '\b') {
    *(u8 *)((int)pvVar4 + 0x401) = moby->state;
  }
  fVar2 = g_FrameTimeSq * 29.8 + *(float *)((int)pvVar4 + 0x420);
  *(float *)((int)pvVar4 + 0x420) = fVar2;
  dVar26 = 2.0;
  (moby->pos).z = (moby->pos).z - (fVar2 - 2.0);
  dVar24 = (double)GetGroundZ(0x3fe0000000000000,lVar22,0);
  fVar2 = (float)((double)(moby->pos).z - dVar26);
  dVar26 = (double)fVar2;
  (moby->pos).z = fVar2;
  if (dVar26 < dVar24) {
    (moby->pos).z = (float)dVar24;
    *(undefined4 *)((int)pvVar4 + 0x420) = 0;
    dVar26 = (double)(moby->pos).z;
  }
  if ((double)(*(float *)((int)pvVar4 + 0x3f8) - 8.0) <= dVar26) {
    if (moby->state != '\0') {
      dVar26 = (double)*(float *)((int)pvVar4 + 0x428);
      dVar24 = (double)FastDiffRots((double)(moby->rotation).z,dVar29);
      dVar24 = (double)FastWrapRot((float)dVar26,(float)dVar24);
      *(float *)((int)pvVar4 + 0x428) = (float)dVar24;
      GetBoneTransformations(lVar11,0xc,auStack_1a0 + 0x20);
      MB_MtxToEuler((int)(auStack_1a0 + 0x20),(MobyInstance *)auStack_1a0);
      FastDiffRots(dVar25,(double)*(float *)((int)pvVar4 + 0x428));
      FastQuaternionToEuler(auStack_1b0,2);
      *(float *)((int)pvVar4 + 0x428) = (float)dVar25;
      FastQuaternionMult(uVar23 + 0x170,uVar23 + 0x170,auStack_1b0);
    }
    if (*(int *)((int)pvVar4 + 0x424) == 0) {
      GetBonePosition(lVar11,0xb,auStack_1a0 + 0x10);
      uVar16 = FUN_003bd440(lVar11);
      *(undefined4 *)((int)pvVar4 + 0x424) = uVar16;
    }
    else {
      GetBoneTransformations(lVar11,0xd,(Vec4 *)(auStack_1a0 + 0x60));
      iVar14 = *(int *)((int)pvVar4 + 0x424);
      *(uint *)(iVar14 + 0x10) = local_110;
      *(ushort **)(iVar14 + 0x14) = local_10c;
      *(float **)(iVar14 + 0x18) = local_108;
      *(int *)(iVar14 + 0x1c) = local_104;
      UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar4 + 0x424));
      UpdateMobyTransform(*(MobyInstance **)((int)pvVar4 + 0x424));
      FastApplyTransform
                ((Vec4 *)(*(int *)((int)pvVar4 + 0x424) + 0xc0),(Vec4 *)(auStack_1a0 + 0x60));
      MB_NormalizeMtx3Columns((ulonglong)*(uint *)((int)pvVar4 + 0x424) + 0xc0);
      PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar4 + 0x424));
      *(ushort *)(*(int *)((int)pvVar4 + 0x424) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar4 + 0x424) + 0x34) | 6;
    }
  }
  else {
    M217_002f1f28(lVar11);
    if (*(MobyInstance **)((int)pvVar4 + 0x424) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar4 + 0x424));
    }
    DeleteMoby(moby);
  }
  return;
}


