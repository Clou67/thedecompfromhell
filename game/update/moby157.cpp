// game/update/moby157.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x29e140-0x29ff34
#include "game/update/moby157.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby153.h"
#include "game/update/moby168.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x029e140 (0x3dc bytes)
void M157_0029e140(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  GPiece<16> local_e0;
  GPiece<40> local_d0;
  
  if (*(char *)(param_1 + 0xbc) != '\0') {
    uVar3 = 0;
    FastDecTimerS8(param_1 + 0xbc);
    iVar2 = 0;
    dVar4 = 0.009999999776482582;
    dVar5 = 0.05999999865889549;
    uVar6 = 0x4018000000000000;
    dVar7 = 30.5;
    uVar8 = 0x40d86a0000000000;
    uVar9 = 0x4072c00000000000;
    uVar10 = 0x3fef5c2900000000;
    uVar11 = 0x3feb333340000000;
    do {
      MB_randRangeFloat((float)dVar4,(float)dVar5);
      uVar13 = uVar3;
      MB_randRangeSigned(uVar3,uVar6);
      uVar1 = FastDoubleToInt();
      SpawnPart_44
                (uVar8,uVar9,uVar10,uVar13,uVar11,local_e0,local_d0,
                 (int)((double)animationSpeed * dVar7),0x7f,0xffffff,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    dVar12 = 20.5;
    dVar7 = 40.5;
    uVar3 = 0x40c3880000000000;
    MB_randRangeFloat((float)dVar4,(float)dVar5);
    MB_randRange
              ((int)((double)animationSpeed * dVar12),(int)((double)animationSpeed * dVar7));
    SpawnPart_21(uVar3,local_e0,local_d0,0x4f007fff,0x1fffffff);
  }
  return;
}


// 0x029e578 (0x4c0 bytes)
void M157_0029e578(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar7;
  longlong lVar5;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  longlong local_c0;
  
  iVar8 = 0;
  iVar4 = (int)param_1;
  dVar26 = 0.0;
  iVar9 = 0;
  local_c4 = *(undefined4 *)(iVar4 + 0x1c);
  local_d0 = *(float *)(iVar4 + 0xd0) * -1.2 +
             *(float *)(iVar4 + 0xc0) * 0.3 + *(float *)(iVar4 + 0x10);
  local_cc = *(float *)(iVar4 + 0xd4) * -1.2 +
             *(float *)(iVar4 + 0xc4) * 0.3 + *(float *)(iVar4 + 0x14);
  local_c8 = *(float *)(iVar4 + 0xd8) * -1.2 +
             *(float *)(iVar4 + 200) * 0.3 + *(float *)(iVar4 + 0x18);
  uVar25 = 0x4038000000000000;
  uVar24 = 0x3fc0c15240000000;
  dVar23 = 0.2617993950843811;
  dVar22 = 0.05000000074505806;
  dVar21 = 0.10000000149011612;
  dVar20 = 1.7000000476837158;
  dVar19 = 30.5;
  dVar18 = 90.5;
  uVar17 = 0x40ed4c0000000000;
  uVar16 = 0x40a7700000000000;
  uVar15 = 0x3feb333340000000;
  uVar14 = 0xbf50624de0000000;
  while( true ) {
    iVar7 = FastDoubleToInt(uVar25);
    if (iVar7 <= iVar8) break;
    dVar10 = (double)MB_randRangeSigned(dVar26,uVar24);
    local_c0 = (longlong)iVar8;
    MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar23 + dVar10),&local_e0,(float *)&DAT_0096a340);
    dVar10 = (double)MB_randRangeFloat((float)dVar22,(float)dVar21);
    dVar13 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
    fVar2 = (float)(dVar10 / dVar13);
    dVar10 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    dVar12 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    dVar11 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    local_e0 = (float)dVar10;
    local_dc = (float)dVar12;
    local_d8 = (float)dVar11;
    lVar5 = MB_randRange(0,3);
    iVar7 = MB_randInt(2);
    if (g_framesGroundedCnt != 0) {
      local_e0 = (float)((double)DAT_00969de0 * dVar20 + (double)local_e0);
      local_dc = (float)((double)DAT_00969de4 * dVar20 + (double)local_dc);
      local_d8 = (float)((double)DAT_00969de8 * dVar20 + (double)local_d8);
    }
    iVar1 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar1;
    uVar6 = MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
    SpawnPart_44
              (uVar17,uVar16,uVar15,uVar14,dVar26,&local_d0,&local_e0,uVar6,0x1e,0xffffff,
               (ZERO_MASK(iVar7) & lVar5 * 2) - lVar5);
    iVar8 = iVar8 + 1;
  }
  uVar15 = 0x4018000000000000;
  dVar23 = 0.7853981852531433;
  dVar20 = 1.0471975803375244;
  dVar19 = 20.5;
  dVar18 = 60.5;
  uVar14 = 0x40c3880000000000;
  for (; iVar8 = FastDoubleToInt(uVar15), iVar9 < iVar8; iVar9 = iVar9 + 1) {
    dVar10 = (double)MB_randRangeFloat((float)dVar26,(float)dVar23);
    local_c0 = (longlong)iVar9;
    MB_RotateQuatAxisAngle
              ((float)((double)local_c0 * dVar20 + dVar10),&local_e0,(float *)&DAT_0096a340);
    dVar10 = (double)MB_randRangeFloat((float)dVar22,(float)dVar21);
    iVar8 = (int)((double)animationSpeed * dVar18);
    local_c0 = (longlong)iVar8;
    dVar13 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
    fVar2 = (float)(dVar10 / dVar13);
    dVar10 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    dVar12 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    dVar11 = dVar26;
    if (dVar26 - dVar13 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar10 = (double)(local_e0 * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar12 = (double)(local_dc * fVar2);
    }
    if (dVar13 - dVar26 < 0.0) {
      dVar11 = (double)(local_d8 * fVar2);
    }
    local_e0 = (float)dVar10;
    local_dc = (float)dVar12;
    local_d8 = (float)dVar11;
    MB_randRange((int)((double)animationSpeed * dVar19),iVar8);
    SpawnPart_21(uVar14,&local_d0,&local_e0,0x4f007fff,0x1fffffff);
  }
  auVar27 = ZEXT416(0xffffffff);
  auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
  auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar27 = loadVectorLeftIndexed(0x54,0x29e51c);
  auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar28
                      );
  auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
  auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xff;
  uVar3 = storeVectorElementByteIndexed
                    (auVar27 | auVar27 << 8 | auVar27 << 0x10 | auVar27 << 0x18 | auVar27 << 0x20 |
                     auVar27 << 0x28 | auVar27 << 0x30 | auVar27 << 0x38 | auVar27 << 0x40 |
                     auVar27 << 0x48 | auVar27 << 0x50 | auVar27 << 0x58 | auVar27 << 0x60 |
                     auVar27 << 0x68 | auVar27 << 0x70 | auVar27 << 0x78,0xbc,param_1);
  *(undefined1 *)(iVar4 + 0xbc) = uVar3;
  return;
}


// 0x029ead8 (0x145c bytes)
/* Moby 157 */

void UpdateMoby_157(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int *piVar5;
  MobyInstance *moby_00;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  MobyInstance *pMVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
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
  double dVar32;
  double dVar33;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> local_210;
  GPiece<32> local_200;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  GPiece<16> local_1c0;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  Vec4 local_190;
  Vec4 aVStack_180 [3];
  GPiece<64> auStack_150;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  longlong local_f8;
  
  dVar14 = 10000.0;
  dVar26 = 0.75;
  piVar5 = (int *)moby->pVar;
  uVar13 = ZEXT48(piVar5);
  M157_0029e140();
  local_10c = (float)dVar14;
  if (moby->state == '\0') {
    moby->state = '\x01';
    *(undefined2 *)(piVar5 + 7) = 0xffff;
    *(undefined2 *)((int)piVar5 + 0x1e) = 0;
  }
  FastApplyTransform(aVStack_180,(Vec4 *)&GameCamera);
  FastNormalizeRMtx4(auStack_150,aVStack_180);
  FastDecTimerS32(uVar13);
  iVar8 = FastDecTimerS32(uVar13 + 0x14);
  if ((iVar8 != 0) || ((piVar5[4] != 0 && ((*(byte *)(piVar5[4] + 0x20) & 0x80) != 0)))) {
    piVar5[4] = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    TransitionMovement(0x1e,1);
  }
  if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE))
     && (DAT_0096bd8c == '\0')) {
    FUN_005e825c(local_210,local_210,auStack_150);
    iVar8 = CollLine(0x951500,local_200,0,moby,0);
    pMVar12 = g_CollOutput.pMoby;
    if (((iVar8 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
       (((g_CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      piVar5[4] = (int)g_CollOutput.pMoby;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(8,0x29ea38);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x14,uVar13);
      *(undefined4 *)((uint)(piVar5 + 5) & 0xfffffffc) = uVar6;
      piVar5[6] = (int)(g_CollOutput.ip.z - (pMVar12->pos).z);
    }
    dVar32 = 240.5;
    dVar20 = 1.0;
    iVar8 = (int)(animationSpeed * 240.5);
    local_f8 = (longlong)iVar8;
    dVar14 = (double)FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar8) * iVar8);
    dVar30 = 240.0;
    dVar28 = 0.01745329238474369;
    FastAddRots(((float)(dVar14 * 360.0) / (animationSpeed * 240.0)) * 0.017453292);
    DrawTargetCrosshair((float)dVar20,moby,0xff180a65,4);
    if (((piVar5[4] != 0) && (*piVar5 == 0)) && (iVar8 = Hero_GetWeaponAmmo(-1), iVar8 != 0))
    {
      iVar8 = piVar5[4];
      fVar1 = GameCamera.posY - *(float *)(iVar8 + 0x14);
      fVar2 = GameCamera.posX - *(float *)(iVar8 + 0x10);
      fVar3 = GameCamera.posZ - *(float *)(iVar8 + 0x18);
      iVar8 = (int)((double)animationSpeed * dVar32);
      local_f8 = (longlong)iVar8;
      dVar20 = ABS(-(double)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 0.01 * 0.57 - 0.9
                            ));
      dVar14 = (double)FastIntToDouble
                                 (worldUpdateTime - (worldUpdateTime / iVar8) * iVar8);
      FastAddRots
                ((float)((double)((float)(dVar14 * -360.0) /
                                 (float)((double)animationSpeed * dVar30)) * dVar28));
      DrawTargetCrosshair((float)dVar20,moby,0xff0fff0f,4);
    }
  }
  iVar8 = DAT_0096af98;
  if (DAT_0096af90 != 0) {
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    piVar5[4] = DAT_0096af98;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = loadVectorLeftIndexed(8,0x29ea38);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                         auVar36);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x14,uVar13);
    *(undefined4 *)((uint)(piVar5 + 5) & 0xfffffffc) = uVar6;
    piVar5[6] = (int)(g_CollOutput.ip.z - *(float *)(iVar8 + 0x18));
  }
  if (((((g_gameMode != GAME_MODE_SCENE) && (*piVar5 == 0)) && (DAT_0096bd8c == '\0')) &&
      ((moby->updateId == '\0' || (moby->updateId == '\x01')))) &&
     (((g_Pad.downButtons & DAT_0096ad80) != 0 &&
      (local_f8 = (longlong)(int)(animationSpeed * 22.5),
      (int)(animationSpeed * 22.5) < DAT_0096ad90)))) {
    dVar14 = 0.0;
    local_1e0 = 0.0;
    local_1dc = 0.0;
    if (moby->animationId == '\0') {
      local_f8 = (longlong)(int)(animationSpeed * 4.5);
      MB_SetAnimation(moby,1,0,(int)(animationSpeed * 4.5));
    }
    if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE))
    {
      local_1d8 = g_FrameTime * 10.0;
      FUN_005e825c(&local_1e0,&local_1e0,auStack_150);
    }
    else {
      fVar1 = g_FrameTime * 10.0;
      local_1e0 = DAT_0096a340 * 0.0 + DAT_0096a320 * fVar1 + DAT_0096a330 * 0.0;
      local_1dc = DAT_0096a344 * 0.0 + DAT_0096a324 * fVar1 + DAT_0096a334 * 0.0;
      local_1d8 = DAT_0096a348 * 0.0 + DAT_0096a328 * fVar1 + DAT_0096a338 * 0.0;
    }
    iVar8 = hero_ConsumeAmmo(-1,1);
    if (iVar8 == 0) {
      PlayMobySound(1,0,moby);
    }
    else {
      if (DAT_0096af90 == 0) {
        dVar20 = (double)FUN_005e8338((double)local_1e0,(double)local_1dc);
      }
      else {
        dVar20 = (double)DAT_0096af9c;
      }
      dVar28 = (double)FUN_005e8338((double)SQRT(local_1e0 * local_1e0 + local_1dc * local_1dc),
                                    (double)local_1d8);
      local_100 = (float)dVar20;
      dVar28 = -dVar28;
      local_104 = (float)dVar28;
      if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) &&
         ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
        local_108 = (float)dVar26;
        FUN_005e825c(&local_1d0,&local_1d0,auStack_150);
        local_1d0 = GameCamera.posX + 0.15;
        local_1cc = GameCamera.posY + 0.3;
        local_1c8 = GameCamera.posZ + 0.75;
        pMVar12 = (MobyInstance *)0x0;
        if (piVar5[4] != 0) {
          local_108 = (float)piVar5[6];
          pMVar12 = (MobyInstance *)0x0;
        }
      }
      else {
        local_108 = (float)dVar26;
        GetBonePosition(moby,0,&local_1d0);
        pMVar12 = (MobyInstance *)0x0;
        if (DAT_00a49344 != (MobyInstance *)0x0) {
          dVar23 = 0.5;
          dVar30 = 1.0471975803375244;
          dVar32 = 0.7853981852531433;
          dVar27 = 0.6981316804885864;
          pMVar12 = (MobyInstance *)0x0;
          dVar21 = 2.0;
          dVar19 = 1.5707963705062866;
          dVar25 = 0.1745329201221466;
          dVar34 = 0.125;
          local_110 = 2.5;
          dVar24 = 1.0;
          dVar22 = -1.0;
          dVar26 = dVar20;
          moby_00 = DAT_00a49344;
          iVar8 = 0;
          do {
            dVar20 = dVar26;
            if (moby_00->state < 0x80) {
              fVar1 = (moby_00->pos).x;
              fVar2 = (moby_00->pos).y;
              fVar3 = (moby_00->pos).z;
              iVar9 = MB_GetPvarsIfMobyHasThem(moby_00);
              dVar20 = dVar23;
              if (iVar9 != 0) {
                dVar20 = (double)*(float *)(iVar9 + 0x10);
              }
              fVar3 = (float)((double)fVar3 + dVar20);
              dVar20 = dVar26;
              if ((((moby_00->modeBits & CAN_BE_AUTO_TARGETED) != NONE) &&
                  (moby_00->pClass != (MobyClass *)0x0)) && ((short)moby_00->pClass->mode_bits == 5)
                 ) {
                dVar20 = (double)FUN_005e8338((double)(fVar1 - local_1d0),
                                              (double)(fVar2 - local_1cc));
                dVar15 = (double)FUN_005e8338((double)SQRT((local_1d0 - fVar1) * (local_1d0 - fVar1)
                                                           + (local_1cc - fVar2) *
                                                             (local_1cc - fVar2)),
                                              (double)(fVar3 - local_1c8));
                dVar31 = (double)SQRT((local_1c8 - fVar3) * (local_1c8 - fVar3) +
                                      (local_1d0 - fVar1) * (local_1d0 - fVar1) +
                                      (local_1cc - fVar2) * (local_1cc - fVar2));
                dVar16 = dVar20;
                if (dVar31 < (double)local_110) {
                  dVar33 = (double)(g_heroMobyPtr->rotation).z;
                  dVar16 = (double)FUN_005e8338((double)((moby_00->pos).x - g_heroPosition.x),
                                                (double)((moby_00->pos).y - g_heroPosition.y));
                  dVar33 = (double)FastSubRots((float)dVar33,(float)dVar16);
                  dVar16 = dVar20;
                  if ((dVar33 < dVar30) && (ABS(dVar15) < dVar32)) {
                    dVar28 = -dVar15;
                    local_10c = (float)dVar31;
                    pMVar12 = moby_00;
                    break;
                  }
                }
                dVar20 = dVar26;
                if (dVar31 <= (double)local_10c) {
                  dVar20 = (double)FastIntToDouble(g_goldWeaponsArray.devastator);
                  MB_SphericalToVector
                            ((float)dVar31,(float)dVar26,
                             (float)((double)DAT_00969fc4 * dVar23 + dVar28),&local_1b0);
                  local_1ac = local_1ac + local_1cc;
                  local_1b0 = local_1b0 + local_1d0;
                  local_1a8 = local_1a8 + local_1c8;
                  dVar29 = (double)(float)(dVar20 * dVar27 + dVar25);
                  dVar33 = (double)(SQRT((local_1a8 - fVar3) * (local_1a8 - fVar3) +
                                         (local_1b0 - fVar1) * (local_1b0 - fVar1) +
                                         (local_1ac - fVar2) * (local_1ac - fVar2)) /
                                   (float)(dVar31 * dVar21));
                  dVar20 = dVar33;
                  if (dVar33 - dVar14 < 0.0) {
                    dVar20 = ABS(dVar33);
                  }
                  dVar17 = dVar24;
                  if (dVar33 - dVar14 < 0.0) {
                    dVar17 = dVar22;
                  }
                  dVar33 = (double)(float)(dVar24 - dVar20);
                  if ((double)(float)(dVar24 - dVar20) - dVar14 < 0.0) {
                    dVar33 = dVar14;
                  }
                  dVar33 = (double)(float)((double)(float)(-(double)(float)((double)((float)((double
                                                  )(float)(dVar20 * dVar20) * dVar20) * DAT_007358cc
                                                  + (float)((double)(float)(dVar20 * dVar20) *
                                                            (double)DAT_007358c8 +
                                                           (double)(float)(dVar20 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar33) - dVar19) * dVar17) *
                                          dVar21);
                  if ((dVar29 < dVar33) && (iVar9 != 0)) {
                    dVar20 = (double)FastIntToDouble(*(undefined1 *)(iVar9 + 10));
                    if ((double)(float)(dVar20 * dVar34) < dVar31) {
                      dVar17 = (double)(float)((double)(float)(dVar20 * dVar34) / dVar31);
                      dVar20 = dVar17;
                      if (dVar17 - dVar14 < 0.0) {
                        dVar20 = ABS(dVar17);
                      }
                      dVar18 = dVar24;
                      if (dVar17 - dVar14 < 0.0) {
                        dVar18 = dVar22;
                      }
                      dVar17 = (double)(float)(dVar24 - dVar20);
                      if ((double)(float)(dVar24 - dVar20) - dVar14 < 0.0) {
                        dVar17 = dVar14;
                      }
                      dVar33 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(
                                                  dVar20 * dVar20) * dVar20) * DAT_007358cc +
                                                  (float)((double)(float)(dVar20 * dVar20) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar20 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar17) - dVar19) * dVar18 -
                                               dVar33);
                      if (dVar33 < dVar14) {
                        dVar33 = dVar14;
                      }
                    }
                  }
                  dVar20 = dVar26;
                  if ((dVar33 < dVar29) &&
                     (iVar10 = CollLine(0x951500,local_1c0,6,moby,0), dVar20 = dVar26,
                     iVar10 == 0)) {
                    dVar28 = -dVar15;
                    iVar10 = MB_FindMobyByVarId(moby_00);
                    local_10c = (float)dVar31;
                    dVar20 = dVar16;
                    pMVar12 = moby_00;
                    if (iVar10 == 0) {
                      piVar5[4] = (int)moby_00;
                      dVar26 = dVar23;
                      if (iVar9 != 0) {
                        dVar26 = (double)*(float *)(iVar9 + 0x10);
                      }
                      local_108 = (float)dVar26;
                    }
                  }
                }
              }
            }
            moby_00 = *(MobyInstance **)((int)&DAT_00a49348 + iVar8);
            dVar26 = dVar20;
            iVar8 = iVar8 + 4;
          } while (moby_00 != (MobyInstance *)0x0);
        }
      }
      PlayMobySound(0,0,moby);
      fVar1 = animationSpeed;
      auVar35 = ZEXT416(0xffffffff);
      auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar39 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x6c,0x29ea38);
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = loadVectorLeftIndexed(0x70,0x29ea38);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar37);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar39);
      dVar26 = 10.5;
      dVar14 = (double)local_108;
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36.piece<0,4>() = auVar35.piece<0,4>() + auVar38.piece<0,4>();
      auVar36.piece<8,8>() = auVar35.piece<8,8>();
      auVar36.piece<4,4>() = auVar35.piece<4,4>() + auVar38.piece<4,4>();
      auVar37.piece<0,8>() = auVar36.piece<0,8>();
      auVar37.piece<12,4>() = auVar35.piece<12,4>();
      auVar37.piece<8,4>() = auVar35.piece<8,4>() + auVar38.piece<8,4>();
      auVar35.piece<0,12>() = auVar37.piece<0,12>();
      auVar35.piece<12,4>() = auVar37.piece<12,4>() + auVar38.piece<12,4>();
      auVar35 = vectorSplatHalfWord(auVar35,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar35,0x1e,uVar13);
      *(undefined2 *)((int)piVar5 + 0x1e) = uVar11;
      if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
        M157_0029e578(moby);
        fVar1 = animationSpeed;
      }
      if (DAT_00a0fd7c != -1) {
        DAT_00a0fd7c = DAT_00a0fd7c + 1;
      }
      dVar30 = 0.5;
      iVar8 = (int)(fVar1 * (float)((double)(longlong)g_GameFrameCount + 0.5));
      local_f8 = (longlong)iVar8;
      if ((int)(uint)DAT_00a0fd7e < iVar8 / 600) {
        sVar4 = (short)(iVar8 >> 0x1f);
        DAT_00a0fd7e = ((short)(iVar8 / 600) + sVar4) -
                       ((short)((short)(iVar8 / 0x2580000) + sVar4) >> 0xf);
      }
      DAT_00a0fd80 = DAT_00a0fd80 | 1 << (Level & 0x3f) | 0x80000000;
      if (DAT_0096bfa8 == 1 && g_heroState != WEAPON_FIRST_PERSON_VIEW) {
        dVar28 = (double)(moby->rotation).z;
        dVar20 = (double)DAT_00722244;
        iVar8 = MB_GetPvarsIfMobyHasThem((MobyInstance *)piVar5[4]);
        if (iVar8 != 0) {
          dVar14 = (double)*(float *)(iVar8 + 0x10);
        }
        FUN_00292d88(dVar28,dVar20,dVar14,dVar28,dVar20,moby,&local_1d0);
      }
      else if (2.0 <= local_10c) {
        if (piVar5[4] == 0) {
          if (pMVar12 == (MobyInstance *)0x0) {
            if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
              local_104 = -(float)((double)DAT_00969fc4 * 0.5 - (double)local_104);
              dVar28 = -(double)(float)((double)DAT_00969fc4 * 0.5 - dVar28);
            }
          }
          else {
            dVar20 = (double)FUN_002931b8(6);
            fVar1 = (pMVar12->pos).x;
            fVar2 = (pMVar12->pos).y;
            fVar3 = (pMVar12->pos).z;
            iVar8 = MB_GetPvarsIfMobyHasThem(pMVar12);
            dVar28 = dVar30;
            if (iVar8 != 0) {
              dVar28 = (double)*(float *)(iVar8 + 0x10);
            }
            local_104 = -(float)((double)DAT_00969fc4 * dVar30 - (double)local_104);
            MB_SphericalToVector((float)dVar20,local_100,local_104,&local_1a0);
            local_1a0 = local_1a0 + local_1d0;
            local_19c = local_19c + local_1cc;
            local_198 = local_198 + local_1c8;
            dVar20 = (double)FUN_005e8338((double)(fVar1 - local_1a0),(double)(fVar2 - local_19c));
            fVar2 = local_19c - fVar2;
            fVar1 = local_1a0 - fVar1;
            dVar28 = (double)FUN_005e8338((double)SQRT(fVar1 * fVar1 + fVar2 * fVar2),
                                          (double)((float)((double)fVar3 + dVar28) - local_198));
            dVar28 = -dVar28;
          }
        }
        FUN_00292d88(dVar20,dVar28,dVar14,(double)local_100,(double)local_104,moby,&local_1d0);
      }
      else {
        iVar8 = MB_GetPvarsIfMobyHasThem((MobyInstance *)piVar5[4]);
        if (iVar8 != 0) {
          dVar14 = (double)*(float *)(iVar8 + 0x10);
        }
        FUN_00292d88(dVar20,dVar28,dVar14,dVar20,dVar28,moby,&local_1d0);
      }
      if ((g_heroStateType == 0) ||
         ((g_heroState == WALKING &&
          ((int)(FLOAT_ORDER(g_heroPadMagnitude)) < 0x3f333333)))) {
        Hero_TransAnim((float)(longlong)((double)animationSpeed * dVar26),0x36,1);
      }
      else {
        Hero_PlayFiringAnim();
      }
    }
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = loadVectorLeftIndexed(0x74,0x29ea38);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                         auVar36);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0,uVar13);
    *(undefined4 *)((uint)piVar5 & 0xfffffffc) = uVar6;
  }
  if (moby->updateId != '\x02') {
    sVar4 = *(short *)((int)piVar5 + 0x1e);
    if (0 < sVar4) {
      dVar14 = 10.5;
      iVar8 = (int)(animationSpeed * 10.5);
      local_f8 = (longlong)iVar8;
      dVar26 = 0.800000011920929;
      if (iVar8 < sVar4) {
        dVar25 = 5.5;
        local_f8 = (longlong)(int)(animationSpeed * 5.5);
        dVar20 = (double)FastIntToDouble
                                   (((int)(animationSpeed * 5.5) + iVar8) - (int)sVar4);
        dVar28 = (double)animationSpeed * dVar25;
        dVar27 = (double)(float)dVar28;
        iVar8 = (int)((double)animationSpeed * dVar14);
        local_f8 = (longlong)iVar8;
        dVar28 = (double)FastIntToDouble
                                   (((int)dVar28 + iVar8) - (int)*(short *)((int)piVar5 + 0x1e));
        dVar30 = (double)animationSpeed * dVar25;
        dVar32 = (double)(float)dVar30;
        iVar8 = (int)((double)animationSpeed * dVar14);
        local_f8 = (longlong)iVar8;
        dVar30 = (double)FastIntToDouble
                                   (((int)dVar30 + iVar8) - (int)*(short *)((int)piVar5 + 0x1e));
        dVar14 = dVar25;
      }
      else {
        dVar20 = (double)FastIntToDouble(sVar4);
        dVar27 = (double)(float)((double)animationSpeed * dVar14);
        dVar28 = (double)FastIntToDouble(*(undefined2 *)((int)piVar5 + 0x1e));
        dVar32 = (double)(float)((double)animationSpeed * dVar14);
        dVar30 = (double)FastIntToDouble(*(undefined2 *)((int)piVar5 + 0x1e));
      }
      dVar27 = (double)(float)(dVar20 / (double)(longlong)dVar27);
      dVar34 = (double)((float)(dVar30 * 0.5) / (float)(longlong)((double)animationSpeed * dVar14));
      dVar25 = (double)((float)(dVar28 * dVar26) / (float)(longlong)dVar32);
      GetBonePosition(moby,0,&local_190);
      dVar14 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
      dVar32 = 3.141592502593994;
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar30 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar20 = 0.008333025500178337;
      dVar26 = -0.0001980741071747616;
      dVar14 = 2.601886990305502e-06;
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar7 = fVar3 * fVar3;
      fVar1 = fVar7 * fVar7 * fVar3;
      fVar2 = fVar7 * fVar1;
      local_190.x = local_190.x +
                    fVar7 * fVar2 * 2.601887e-06 +
                    fVar2 * -0.0001980741 +
                    fVar1 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3;
      dVar19 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
      dVar21 = (double)(float)(dVar32 - dVar19);
      if (dVar19 - (double)(float)(dVar32 - dVar19) < 0.0) {
        dVar21 = dVar19;
      }
      dVar32 = (double)(float)(dVar30 - dVar19);
      if ((double)(float)(dVar30 - dVar19) - dVar21 < 0.0) {
        dVar32 = dVar21;
      }
      dVar30 = (double)(float)(dVar32 * dVar32);
      dVar21 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar32));
      dVar19 = (double)(float)(dVar30 * dVar21);
      local_190.y = local_190.y +
                    (float)((double)(float)(dVar30 * dVar19) * dVar14 +
                           (double)(float)(dVar19 * dVar26 +
                                          (double)(float)(dVar21 * dVar20 +
                                                         (double)(float)((double)(float)(dVar30 * 
                                                  dVar32) * dVar28 + dVar32))));
      local_190.z = local_190.z + 0.3;
      if (*(short *)(piVar5 + 7) == -1) {
        uVar11 = CreatePointLight2(7.0,0,dVar27,dVar25,dVar34,&local_190);
        *(undefined2 *)(piVar5 + 7) = uVar11;
      }
      else {
        iVar8 = (int)((longlong)*(short *)(piVar5 + 7) << 5);
        *(float *)((int)&PointLights[0].pos.x + iVar8) = local_190.x;
        *(float *)((int)&PointLights[0].pos.y + iVar8) = local_190.y;
        *(undefined4 *)((int)&PointLights[0].pos.w + iVar8) = 0x40e00000;
        *(float *)((int)&PointLights[0].pos.z + iVar8) = local_190.z;
        *(float *)((int)&PointLights[0].color.x + iVar8) = (float)dVar27;
        *(float *)((int)&PointLights[0].color.y + iVar8) = (float)dVar25;
        *(float *)((int)&PointLights[0].color.z + iVar8) = (float)dVar34;
      }
      FastDecTimerS16(uVar13 + 0x1e);
      goto LAB_0029fe84;
    }
  }
  if (*(short *)(piVar5 + 7) != -1) {
    DeletePointLight();
    *(undefined2 *)(piVar5 + 7) = 0xffff;
    *(undefined2 *)((int)piVar5 + 0x1e) = 0;
  }
LAB_0029fe84:
  if (moby->animationId == '\x02') {
    DeletePointLight(*(undefined2 *)(piVar5 + 7));
    *(undefined2 *)(piVar5 + 7) = 0xffff;
    *(undefined2 *)((int)piVar5 + 0x1e) = 0;
  }
  return;
}


