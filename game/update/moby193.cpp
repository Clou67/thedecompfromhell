// game/update/moby193.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2dc568-0x2de770
#include <math.h>
#include <stdlib.h>
#include "game/update/moby193.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02dc568 (0x2208 bytes)
/* Moby 193 */

void UpdateMoby_193(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  u16 *puVar9;
  MobyInstance *pMVar10;
  undefined2 uVar11;
  float fVar12;
  longlong lVar13;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar14;
  ulonglong uVar18;
  undefined8 uVar19;
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
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  float local_140;
  float local_13c;
  undefined4 local_138;
  float local_130;
  float local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  Vec4 local_110;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  Vec4 local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  f32 local_d4;
  Vec4 local_d0 [4];
  MobyInstance *local_90;
  GPiece<4> auStack_80;
  undefined4 local_7c;
  longlong local_78;
  
  lVar13 = (longlong)(int)moby;
  iVar15 = 2;
  pvVar8 = moby->pVar;
  uVar18 = ZEXT48(pvVar8);
  if (moby->state != '\a' && moby->state != 'c') {
    dVar32 = 0.0;
    local_7c = 0;
    iVar15 = MB_damage(lVar13,0x330000,0);
    MB_HandleDamage(moby,iVar15,uVar18 + 0x20,0,auStack_80,&local_7c,0,4);
    FastDecTimerS16(uVar18 + 0x26);
    local_78 = (longlong)(int)(animationSpeed * 45.5);
    if (((int)*(short *)((int)pvVar8 + 0x26) < (int)(animationSpeed * 45.5)) && (iVar15 != 0)) {
      sVar7 = *(short *)(*(int *)(iVar15 + 0x20) + 0xa6);
      if ((sVar7 == 0xb0) || (sVar7 == 0xb1)) {
        dVar30 = 1.0;
        if (*(short *)((int)pvVar8 + 0x26) != 0) {
          dVar30 = dVar32;
        }
        *(float *)(iVar15 + 0x2c) = (float)dVar30;
      }
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      if (*(int *)(iVar15 + 0x2c) != 0) {
        fVar4 = *(float *)((int)pvVar8 + 0x20) - *(float *)(iVar15 + 0x2c);
        *(undefined4 *)((int)pvVar8 + 0x130) = 0x3c03126f;
        *(undefined4 *)((int)pvVar8 + 0x134) = 0x3a03126f;
        *(float *)((int)pvVar8 + 0x20) = fVar4;
        fVar5 = DAT_007f3ea4;
        fVar12 = g_FrameTime;
        *(undefined4 *)((int)pvVar8 + 0x144) = 9;
        fVar5 = fVar5 * fVar12;
        *(float *)((int)pvVar8 + 0x138) = fVar5;
        fVar6 = DAT_007f3ea0;
        *(undefined1 *)((int)pvVar8 + 0x15d) = 0;
        fVar6 = fVar6 * fVar12;
        *(float *)((int)pvVar8 + 0x13c) = fVar6;
        if (dVar32 < (double)fVar4) {
          if (*(short *)(iVar15 + 0x2a) == 0xb4) {
            *(float *)((int)pvVar8 + 0x138) = fVar5 * 1.35;
            *(float *)((int)pvVar8 + 0x13c) = fVar6 * 1.35;
          }
          FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                       (double)((moby->pos).y - local_d0[0].y));
          MB_StartKick(lVar13,uVar18 + 0x120);
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          *(undefined4 *)((int)pvVar8 + 0x170) = 0x40a00000;
          *(undefined4 *)((int)pvVar8 + 0x174) = 0x41200000;
          moby->state = '\x06';
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          *(undefined1 *)((int)pvVar8 + 0x117) = 0xfa;
          auVar33 = loadVectorLeftIndexed(0x18,0x2dc4dc);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar33,0x26,uVar18);
          *(undefined2 *)((int)pvVar8 + 0x26) = uVar11;
          MB_UpdateLightsTransition(lVar13,uVar18 + 0x110);
        }
        else {
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          fVar5 = g_FrameTime;
          fVar4 = g_FrameTime * 8.0;
          *(float *)((int)pvVar8 + 0x138) = fVar4;
          *(float *)((int)pvVar8 + 0x13c) = fVar5 * 10.0;
          if (*(short *)(iVar15 + 0x2a) == 0xb4) {
            *(float *)((int)pvVar8 + 0x138) = fVar4 * 1.35;
            *(float *)((int)pvVar8 + 0x13c) = fVar5 * 10.0 * 1.35;
          }
          FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                       (double)((moby->pos).y - local_d0[0].y));
          MB_StartKick(lVar13,uVar18 + 0x120);
          *(undefined4 *)((int)pvVar8 + 0x170) = 0x41300000;
          *(undefined4 *)((int)pvVar8 + 0x174) = 0x41900000;
          if (g_heroType == '\x02') {
            MB_SpawnBoltsFromCrate(lVar13,0x200,0xffffffffffffffff);
          }
          else {
            MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
          }
          moby->collision = (ushort *)0x0;
          moby->state = 'c';
          *(undefined1 *)((int)pvVar8 + 0x117) = 0x78;
          MB_UpdateLightsTransition(lVar13,uVar18 + 0x110);
        }
      }
    }
    moby->damage = -1;
    DoManipulator(0x4000ccccc0000000,moby,0,(Manipulator *)((int)pvVar8 + 0x230));
    if ((moby->enabled != '\0') &&
       (fVar4 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
       fVar6 = (moby->pos).z - GameCamera.posZ,
       SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 38.0)) {
      MB_SetZBoundsFromGround(lVar13);
      moby->shadow = '\x1e';
    }
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if (40.0 < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
      return;
    }
    if (*(int *)((int)pvVar8 + 0x228) != 0) {
      if (g_heroType != '\x02') {
        moby->collision = (ushort *)0x0;
        moby->updateDistance = -1;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        return;
      }
      if (g_heroType == '\x02') {
        puVar9 = moby->pClass->collision;
        moby->updateDistance = '@';
        moby->collision = puVar9;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      }
    }
    if (*(int *)((int)pvVar8 + 0x38) != 0) {
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x28,0x2dc4dc);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar33 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar34);
      auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
      auVar33 = vectorSplatHalfWord(auVar33,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar33,0x214,uVar18);
      *(undefined2 *)((int)pvVar8 + 0x214) = uVar11;
    }
    *(undefined4 *)((int)pvVar8 + 0x38) = 0;
    FastDecTimerS32(uVar18 + 0x208);
    iVar15 = FastDecTimerS16(uVar18 + 0x214);
    uVar3 = 0x41a00000;
    if (iVar15 != 0) {
      uVar3 = 0x41400000;
    }
    *(undefined4 *)((int)pvVar8 + 0x1fc) = uVar3;
    iVar15 = MB_getTarget(lVar13,&DAT_002dc4dc,local_d0);
  }
  dVar28 = (double)(moby->pos).x;
  dVar25 = (double)(moby->pos).y;
  iVar16 = FastDecTimerS32(uVar18 + 0x224);
  fVar4 = (moby->pos).x;
  bVar1 = moby->state;
  dVar30 = -1.0;
  fVar5 = (moby->pos).y;
  dVar32 = dVar30;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
      if ((uVar17 & 1) != 0) {
        moby->state = '\t';
        if (moby->animationId == '\x03') {
          return;
        }
        iVar15 = MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        MB_SetAnimation(lVar13,3,0,iVar15);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
      goto LAB_002de680;
    }
    if (bVar1 != 5) {
      if (bVar1 == 4) {
        uVar19 = FUN_005e8338((double)(local_d0[0].x - fVar4),(double)(local_d0[0].y - fVar5));
        dVar32 = 0.20000000298023224;
        OrganicDeltAngSpeed
                  (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar13,
                   &DAT_002dc4dc,uVar18 + 0x1f0);
        if (((moby->updateId == moby->animationId) &&
            (dVar25 = (double)BlendAnimFrame(moby), dVar25 == 13.0)) &&
           (ABS((moby->pos).z - local_d0[0].z) < 0.5)) {
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).x;
          fVar12 = fVar4 - local_d0[0].y;
          fVar6 = fVar5 - local_d0[0].x;
          if (SQRT(fVar6 * fVar6 + fVar12 * fVar12) < 2.0) {
            dVar25 = (double)FUN_005e8338((double)(local_d0[0].x - fVar5),
                                          (double)(local_d0[0].y - fVar4));
            dVar25 = (double)FastSubRots((float)dVar25,(moby->rotation).z);
            if (dVar25 < 0.2617993950843811) {
              dVar25 = (double)cosf((moby->rotation).z);
              local_140 = (float)(dVar25 * dVar32);
              dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
              local_13c = (float)(dVar25 * dVar32);
              local_138 = 0;
              local_130 = local_d0[0].x;
              local_12c = local_d0[0].y;
              local_124 = local_d0[0].w;
              local_128 = local_d0[0].z + 0.75;
              CollDamageMobyDirect(1.0,local_90,moby,1,0x2dc4dc,&local_130,&local_140);
            }
          }
        }
        dVar32 = dVar30;
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (local_d0[0].y = (moby->pos).y - local_d0[0].y,
            local_d0[0].x = (moby->pos).x - local_d0[0].x,
            1.5 < SQRT(local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y))) &&
           (moby->state = '\x03', moby->animationId != '\0')) {
          iVar15 = MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
          local_78 = (longlong)iVar15;
          MB_SetAnimation(lVar13,0,0,iVar15);
          dVar32 = dVar30;
        }
        dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
        fVar4 = -(g_FrameTimeSq * 9.8 - *(float *)((int)pvVar8 + 0x198));
        *(float *)((int)pvVar8 + 0x198) = fVar4;
        fVar4 = (moby->pos).z + fVar4;
        (moby->pos).z = fVar4;
        if ((double)fVar4 < dVar30) {
          *(undefined4 *)((int)pvVar8 + 0x198) = 0;
          (moby->pos).z = (float)dVar30;
        }
        goto LAB_002de680;
      }
      if (bVar1 == 3) {
        dVar25 = (double)(ABS((moby->pos).z - local_d0[0].z) /
                         SQRT((fVar4 - local_d0[0].x) * (fVar4 - local_d0[0].x) +
                              (fVar5 - local_d0[0].y) * (fVar5 - local_d0[0].y)));
        if (*(int *)((int)pvVar8 + 0x21c) == -1) {
          local_150.x = local_d0[0].x;
          local_150.y = local_d0[0].y;
          local_150.z = local_d0[0].z;
          local_150.w = local_d0[0].w;
        }
        else {
          Path_PickNextNode(moby,Splines[*(int *)((int)pvVar8 + 0x21c)],local_d0,&local_150);
          fVar4 = (moby->pos).x;
          fVar5 = (moby->pos).y;
        }
        dVar28 = (double)FUN_005e8338((double)(local_150.x - fVar4),(double)(local_150.y - fVar5));
        OrganicDeltAngSpeed
                  ((double)(float)(dVar28 + (double)*(float *)((int)pvVar8 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar13);
        dVar28 = (double)cosf((moby->rotation).z);
        dVar26 = 2.0;
        local_160 = (float)(dVar28 * 2.0);
        dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_15c = (float)(dVar28 * dVar26);
        local_150.x = (moby->pos).x + local_160;
        local_150.z = (moby->pos).z;
        local_158 = 0;
        local_150.w = (moby->pos).w;
        local_150.y = (moby->pos).y + local_15c;
        dVar28 = 1.0;
        uVar14 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0x180),&local_150
                            ,&local_160);
        iVar15 = FastDecTimerS32(uVar18 + 0x210);
        if (iVar15 != 0) {
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          fVar4 = animationSpeed;
          *(float *)((int)pvVar8 + 500) = -*(float *)((int)pvVar8 + 500);
          *(int *)((int)pvVar8 + 0x210) = (int)(fVar4 * ((float)(longlong)dVar26 + 0.5));
        }
        fVar4 = local_d0[0].x - *(float *)((int)pvVar8 + 0x1d0);
        fVar5 = local_d0[0].y - *(float *)((int)pvVar8 + 0x1d4);
        fVar6 = local_d0[0].z - *(float *)((int)pvVar8 + 0x1d8);
        if (((uVar14 & 4) != 0) ||
           ((local_d0[0].y = (moby->pos).y - local_d0[0].y,
            local_d0[0].x = (moby->pos).x - local_d0[0].x,
            SQRT(local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y) < 1.5 &&
            ((uVar14 & 2) == 0)))) {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            iVar15 = MB_randRange(10,0xd);
            iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
            local_78 = (longlong)iVar15;
            MB_SetAnimation(lVar13,1,0,iVar15);
          }
        }
        else {
          uVar17 = (int)*(uint *)((int)pvVar8 + 400) >> 0x1f;
          if ((((int)((uVar17 >> 1 ^ *(uint *)((int)pvVar8 + 400)) - uVar17) <
                (int)(FLOAT_ORDER(g_FrameTime))) || (dVar28 < dVar25)) ||
             ((uVar14 & 2) != 0)) {
            auVar33 = ZEXT416(0xffffffff);
            auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = loadVectorLeftIndexed(0x68,0x2dc4dc);
            auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar33 = vectorMultiplyAddFloatingPoint
                                (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60,auVar34);
            auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
            auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar3 = storeVectorElementWordIndexed
                              (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x224,
                               uVar18);
            *(undefined4 *)((int)pvVar8 + 0x224U & 0xfffffffc) = uVar3;
            moby->state = '\x05';
          }
          else if ((*(float *)((int)pvVar8 + 0x1fc) + 4.0 <=
                    SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5)) ||
                  (8.0 <= ABS((moby->pos).z - local_d0[0].z))) {
            if (moby->setByGroup != '\x01') {
              moby->state = '\x05';
            }
          }
          else if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
        }
        moby->setByGroup = '\0';
        goto LAB_002de680;
      }
      if (bVar1 != 2) {
        if (bVar1 == 1) {
          fVar6 = (moby->pos).z;
          fVar12 = local_d0[0].z - fVar6;
          if (((1 < iVar15) &&
              (*(float *)((int)pvVar8 + 0x1fc) + 4.0 <=
               SQRT(fVar12 * fVar12 +
                    (local_d0[0].x - fVar4) * (local_d0[0].x - fVar4) +
                    (local_d0[0].y - fVar5) * (local_d0[0].y - fVar5)))) ||
             ((8.0 <= ABS(fVar6 - local_d0[0].z) ||
              (iVar15 = MB_randInt(0x13), iVar15 != 0)))) {
            if ((moby->setByGroup == '\x01') && (iVar15 = MB_randInt(0x13), iVar15 == 0))
            {
              uVar14 = MB_randInt(0x100);
              fVar4 = *(float *)((int)pvVar8 + 0x1f8);
              if ((uVar14 & 1) != 0) {
                fVar4 = -fVar4;
                *(float *)((int)pvVar8 + 0x1f8) = fVar4;
              }
              *(float *)((int)pvVar8 + 500) = fVar4 * 0.017453292;
              dVar25 = (double)MB_randRangeFloat(30.0,90.0);
              dVar28 = 0.5;
              *(int *)((int)pvVar8 + 0x210) =
                   (int)(animationSpeed * (float)((double)(longlong)dVar25 + 0.5));
              moby->state = '\x03';
              if (moby->animationId != '\0') {
                iVar15 = MB_randRange(10,0xd);
                iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar28));
                local_78 = (longlong)iVar15;
                MB_SetAnimation(lVar13,0,0,iVar15);
              }
              moby->setByGroup = '\0';
            }
          }
          else {
            moby->state = '\x02';
            if (moby->animationId != '\x04') {
              iVar15 = MB_randRange(10,0xd);
              iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
              local_78 = (longlong)iVar15;
              MB_SetAnimation(lVar13,4,0,iVar15);
            }
          }
        }
        else if (bVar1 == 0) {
          *(float *)((int)pvVar8 + 0x1d0) = fVar4;
          *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x1dc) = (moby->pos).w;
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar8 + 0x20) = 0x3f800000;
          *(undefined2 *)((int)pvVar8 + 0x24) = 1;
          *(undefined1 *)((int)pvVar8 + 0x29) = 0;
          *(undefined1 *)((int)pvVar8 + 0x5a) = 2;
          *(undefined1 *)((int)pvVar8 + 0x58) = 8;
          *(undefined2 *)((int)pvVar8 + 0x214) = 0;
          *(undefined4 *)((int)pvVar8 + 0x208) = 0;
          MB_InitDefaultParams((float *)((int)pvVar8 + 0x180));
          *(undefined4 *)((int)pvVar8 + 0x18c) = 0x40000000;
          *(undefined4 *)((int)pvVar8 + 0x188) = 0x40000000;
          fVar4 = *(float *)((int)pvVar8 + 0x204) * g_FrameTime;
          *(undefined4 *)((int)pvVar8 + 0x180) = 0x38d;
          *(float *)((int)pvVar8 + 0x1a4) = fVar4;
          uVar17 = rand();
          if ((uVar17 & 1) != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
          *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007f3eb0;
          dVar32 = dVar30;
          if (moby->animationId != '\x02') {
            iVar15 = MB_randRange(10,0xd);
            iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
            local_78 = (longlong)iVar15;
            MB_SetAnimation(lVar13,2,0,iVar15);
            dVar32 = dVar30;
          }
          dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
          (moby->pos).z = (float)dVar30;
        }
        goto LAB_002de680;
      }
      goto LAB_002dcf0c;
    }
    if (*(int *)((int)pvVar8 + 0x21c) == -1) {
      local_110.x = *(float *)((int)pvVar8 + 0x1d0);
      local_110.y = *(float *)((int)pvVar8 + 0x1d4);
      local_110.z = *(f32 *)((int)pvVar8 + 0x1d8);
      local_110.w = *(f32 *)((int)pvVar8 + 0x1dc);
    }
    else {
      Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar8 + 0x21c)],(Vec4 *)((int)pvVar8 + 0x1d0),
                 &local_110);
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
    }
    uVar19 = FUN_005e8338((double)(local_110.x - fVar4),(double)(local_110.y - fVar5));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar13);
    dVar26 = (double)cosf((moby->rotation).z);
    dVar23 = 2.0;
    local_120 = (float)(dVar26 * 2.0);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_11c = (float)(dVar26 * dVar23);
    local_110.x = (moby->pos).x + local_120;
    local_110.z = (moby->pos).z;
    local_118 = 0;
    local_110.w = (moby->pos).w;
    local_110.y = (moby->pos).y + local_11c;
    uVar14 = MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0x180),&local_110,
                        &local_120);
    fVar4 = (moby->pos).y - *(float *)((int)pvVar8 + 0x1d4);
    fVar5 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1d0);
    if (((double)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < dVar23) &&
       (moby->state = '\x01', moby->animationId != '\x02')) {
      iVar15 = MB_randRange(10,0xd);
      iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
      local_78 = (longlong)iVar15;
      MB_SetAnimation(lVar13,2,0,iVar15);
    }
    local_d0[0].x = local_d0[0].x - *(float *)((int)pvVar8 + 0x1d0);
    local_d0[0].y = local_d0[0].y - *(float *)((int)pvVar8 + 0x1d4);
    local_d0[0].z = local_d0[0].z - *(float *)((int)pvVar8 + 0x1d8);
    if (iVar16 == 0) {
LAB_002ddbe4:
      if ((uVar14 & 2) != 0) {
        uVar2 = moby->animationId;
        (moby->pos).x = (float)dVar28;
        (moby->pos).y = (float)dVar25;
        moby->state = '\f';
        if (uVar2 != '\x04') {
          iVar15 = MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
          local_78 = (longlong)iVar15;
          MB_SetAnimation(lVar13,4,0,iVar15);
        }
      }
    }
    else if (*(float *)((int)pvVar8 + 0x1fc) <=
             SQRT(local_d0[0].z * local_d0[0].z +
                  local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y)) {
      if (moby->setByGroup != '\x01') goto LAB_002ddbe4;
      moby->state = '\x03';
      if (moby->animationId != '\0') {
        iVar15 = MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        MB_SetAnimation(lVar13,0,0,iVar15);
      }
    }
    else {
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      moby->state = '\x03';
      if (moby->animationId != '\0') {
        iVar15 = MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        MB_SetAnimation(lVar13,0,0,iVar15);
      }
    }
    moby->setByGroup = '\0';
    goto LAB_002de680;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 9) {
      if (bVar1 < 8) {
        iVar15 = FUN_0048c188(lVar13,uVar18 + 0x120);
        if (iVar15 != 0) {
          moby->state = '\x01';
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar13,2,0,0);
          }
          *(undefined2 *)((int)pvVar8 + 200) = 0;
        }
        goto LAB_002de680;
      }
    }
    else if (bVar1 < 10) {
      dVar25 = (double)BlendAnimFrame(moby);
      if (29.0 < dVar25) {
        moby->state = '\x03';
        if (moby->animationId == '\0') {
          return;
        }
        iVar15 = MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        MB_SetAnimation(lVar13,0,0,iVar15);
        return;
      }
      goto LAB_002de680;
    }
LAB_002dcf0c:
    uVar19 = FUN_005e8338((double)(local_d0[0].x - fVar4),(double)(local_d0[0].y - fVar5));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar13,&DAT_002dc4dc,
               uVar18 + 0x1f0);
    local_d0[0].x = local_d0[0].x - (moby->pos).x;
    fVar4 = (moby->pos).z;
    local_d0[0].y = local_d0[0].y - (moby->pos).y;
    fVar5 = local_d0[0].z - fVar4;
    if ((((1 < iVar15) &&
         (*(float *)((int)pvVar8 + 0x1fc) <=
          SQRT(fVar5 * fVar5 + local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y))) ||
        (8.0 <= ABS(fVar4 - local_d0[0].z))) || (iVar15 = MB_randInt(0x13), iVar15 != 0))
    {
      if ((moby->setByGroup == '\x01') && (iVar15 = MB_randInt(0x13), iVar15 == 0)) {
        uVar14 = MB_randInt(0x100);
        fVar4 = *(float *)((int)pvVar8 + 0x1f8);
        if ((uVar14 & 1) != 0) {
          fVar4 = -fVar4;
          *(float *)((int)pvVar8 + 0x1f8) = fVar4;
        }
        *(float *)((int)pvVar8 + 500) = fVar4 * 0.017453292;
        dVar25 = (double)MB_randRangeFloat(30.0,90.0);
        dVar28 = 0.5;
        *(int *)((int)pvVar8 + 0x210) =
             (int)(animationSpeed * (float)((double)(longlong)dVar25 + 0.5));
        moby->state = '\x03';
        if (moby->animationId != '\0') {
          iVar15 = MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar28));
          local_78 = (longlong)iVar15;
          MB_SetAnimation(lVar13,0,0,iVar15);
        }
        moby->setByGroup = '\0';
      }
    }
    else {
      if (moby->group != -1) {
        MB_SetGroupField(moby->group,1);
      }
      uVar14 = MB_randInt(0x100);
      fVar4 = *(float *)((int)pvVar8 + 0x1f8);
      if ((uVar14 & 1) != 0) {
        fVar4 = -fVar4;
        *(float *)((int)pvVar8 + 0x1f8) = fVar4;
      }
      *(float *)((int)pvVar8 + 500) = fVar4 * 0.017453292;
      dVar25 = (double)MB_randRangeFloat(30.0,90.0);
      dVar28 = 0.5;
      *(int *)((int)pvVar8 + 0x210) =
           (int)(animationSpeed * (float)((double)(longlong)dVar25 + 0.5));
      moby->state = '\x03';
      if (moby->animationId != '\0') {
        iVar15 = MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar28));
        local_78 = (longlong)iVar15;
        MB_SetAnimation(lVar13,0,0,iVar15);
      }
      moby->setByGroup = '\0';
    }
    if (((moby->animationId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x02')) {
      iVar15 = MB_randRange(10,0xd);
      iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
      local_78 = (longlong)iVar15;
      MB_SetAnimation(lVar13,2,0,iVar15);
    }
    goto LAB_002de680;
  }
  if (0xd < bVar1) {
    if (bVar1 == 99) {
      uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
      if ((uVar17 & 0x40) != 0) {
        MB_SpawnExplosionSparks
                  (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_002dc4dc,6);
        DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_002de680;
  }
  if (bVar1 < 0xd) {
    dVar25 = (double)(ABS((moby->pos).z - local_d0[0].z) /
                     SQRT((fVar4 - local_d0[0].x) * (fVar4 - local_d0[0].x) +
                          (fVar5 - local_d0[0].y) * (fVar5 - local_d0[0].y)));
    if (*(int *)((int)pvVar8 + 0x21c) == -1) {
      local_f0.x = *(float *)((int)pvVar8 + 0x1d0);
      local_f0.y = *(float *)((int)pvVar8 + 0x1d4);
      local_f0.z = *(f32 *)((int)pvVar8 + 0x1d8);
      local_f0.w = *(f32 *)((int)pvVar8 + 0x1dc);
    }
    else {
      Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar8 + 0x21c)],(Vec4 *)((int)pvVar8 + 0x1d0),&local_f0
                );
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
    }
    uVar19 = FUN_005e8338((double)(local_f0.x - fVar4),(double)(local_f0.y - fVar5));
    OrganicDeltAngSpeed
              (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar13);
    dVar28 = (double)cosf((moby->rotation).z);
    dVar26 = 2.0;
    local_100 = (float)(dVar28 * 2.0);
    dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_fc = (float)(dVar28 * dVar26);
    local_f0.x = (moby->pos).x + local_100;
    local_f0.z = (moby->pos).z;
    local_f8 = 0;
    local_f0.w = (moby->pos).w;
    local_f0.y = (moby->pos).y + local_fc;
    dVar28 = 1.0;
    uVar14 = MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0x180),&local_f0,
                        &local_100);
    uVar2 = moby->animationId;
    if ((uVar14 & 4) == 0) {
      local_d0[0].y = (moby->pos).y - local_d0[0].y;
      local_d0[0].x = (moby->pos).x - local_d0[0].x;
      if ((1.5 <= SQRT(local_d0[0].x * local_d0[0].x + local_d0[0].y * local_d0[0].y)) ||
         (dVar28 < dVar25)) {
        if ((dVar28 < dVar25) || ((uVar14 & 2) != 0)) {
          if (((uVar14 & 2) == 0) || (iVar16 == 0)) {
            if ((moby->field43_0x70 & 2U) != 0) {
              MB_randInt(4);
              iVar16 = MB_randInt(4);
              iVar15 = MB_randRange(10,0xd);
              iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
              local_78 = (longlong)iVar15;
              MB_SetAnimation
                        (lVar13,(ZERO_MASK(iVar16) & 2U) + 2,0,iVar15);
            }
          }
          else {
            moby->state = '\x01';
            if (uVar2 != '\x02') {
              iVar15 = MB_randRange(10,0xd);
              iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
              local_78 = (longlong)iVar15;
              MB_SetAnimation(lVar13,2,0,iVar15);
            }
          }
        }
        else {
          moby->state = '\x05';
          if (uVar2 != '\0') {
            iVar15 = MB_randRange(10,0xd);
            iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
            local_78 = (longlong)iVar15;
            MB_SetAnimation(lVar13,0,0,iVar15);
          }
        }
      }
      else {
        moby->state = '\x04';
        if (uVar2 != '\x01') {
          iVar15 = MB_randRange(10,0xd);
          iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
          local_78 = (longlong)iVar15;
          MB_SetAnimation(lVar13,1,0,iVar15);
        }
      }
    }
    else {
      moby->state = '\x04';
      if (uVar2 != '\x01') {
        iVar15 = MB_randRange(10,0xd);
        iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
        local_78 = (longlong)iVar15;
        MB_SetAnimation(lVar13,1,0,iVar15);
      }
    }
    moby->setByGroup = '\0';
    goto LAB_002de680;
  }
  if ((moby->updateId != '\0') && (moby->animationId != '\0')) {
    iVar15 = MB_randRange(10,0xd);
    iVar15 = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
    local_78 = (longlong)iVar15;
    MB_SetAnimation(lVar13,0,0,iVar15);
    dVar32 = dVar30;
  }
  dVar30 = (double)cosf((moby->rotation).z);
  dVar28 = (double)(*(float *)((int)pvVar8 + 0x204) * g_FrameTime);
  dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
  dVar26 = (double)(moby->pos).x;
  dVar23 = (double)(moby->pos).y;
  local_e0 = (float)(dVar28 * dVar30 + dVar26);
  dVar28 = (double)local_e0;
  local_d8 = (moby->pos).z;
  dVar30 = (double)local_d8;
  local_d4 = (moby->pos).w;
  local_dc = (float)((double)(*(float *)((int)pvVar8 + 0x204) * g_FrameTime) * dVar25 +
                    dVar23);
  dVar25 = (double)local_dc;
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar31 = 2.0;
    dVar29 = 0.0;
    dVar27 = 1.5707963705062866;
    dVar24 = -1.5707963705062866;
    dVar22 = dVar30;
    pMVar10 = MobyUpdateChainStart;
    do {
      if (((pMVar10 != moby) && (pMVar10->state < 0x80)) &&
         ((pMVar10->oClass == RATCHET || (pMVar10->oClass == CHOMPER_00C1)))) {
        dVar21 = (double)(pMVar10->pos).y;
        dVar20 = (double)(pMVar10->pos).x;
        fVar4 = (float)(dVar25 - dVar21);
        fVar5 = (float)(dVar28 - dVar20);
        if ((double)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < dVar31) {
          dVar30 = (double)(moby->rotation).z;
          uVar19 = FUN_005e8338((double)(float)(dVar20 - dVar26),(double)(float)(dVar21 - dVar23));
          dVar25 = (double)FastDiffRots(dVar30,uVar19);
          dVar30 = dVar24;
          if (dVar29 < dVar25) {
            dVar30 = dVar27;
          }
          dVar30 = (double)FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)g_FrameTime * dVar30));
          (moby->rotation).z = (float)dVar30;
          local_e0 = (moby->pos).x - (pMVar10->pos).x;
          local_d4 = (moby->pos).w;
          local_dc = (moby->pos).y - (pMVar10->pos).y;
          local_d8 = (moby->pos).z - (pMVar10->pos).z;
          dVar30 = dVar22;
          FUN_005e7f98(dVar31,&local_e0,&local_e0);
          local_e0 = local_e0 + (pMVar10->pos).x;
          dVar28 = (double)local_e0;
          dVar26 = (double)(moby->pos).x;
          dVar23 = (double)(moby->pos).y;
          local_d8 = (float)dVar30;
          local_dc = local_dc + (pMVar10->pos).y;
          dVar25 = (double)local_dc;
          dVar22 = (double)(moby->pos).z;
        }
      }
      pMVar10 = (MobyInstance *)pMVar10->pChain;
    } while (pMVar10 != (MobyInstance *)0x0);
  }
  (moby->pos).x = (float)dVar28;
  (moby->pos).y = (float)dVar25;
  (moby->pos).z = (float)dVar30;
  (moby->pos).w = local_d4;
  dVar25 = 0.5;
  dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
  fVar4 = -(g_FrameTimeSq * 9.8 - *(float *)((int)pvVar8 + 0x198));
  *(float *)((int)pvVar8 + 0x198) = fVar4;
  fVar4 = (moby->pos).z + fVar4;
  (moby->pos).z = fVar4;
  if ((double)fVar4 < dVar30) {
    *(undefined4 *)((int)pvVar8 + 0x198) = 0;
    (moby->pos).z = (float)dVar30;
  }
  iVar15 = *(int *)((int)pvVar8 + 0x218);
  if (iVar15 == 0) {
LAB_002de60c:
    moby->state = '\x05';
    if (moby->animationId != '\0') {
      iVar15 = MB_randRange(10,0xd);
      iVar15 = (int)(animationSpeed * (float)((double)(longlong)iVar15 + dVar25));
      local_78 = (longlong)iVar15;
      MB_SetAnimation(lVar13,0,0,iVar15);
    }
  }
  else {
    fVar4 = (moby->pos).y - *(float *)(iVar15 + 0x14);
    fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10);
    dVar26 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
    dVar28 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar8 + 0x216));
    if (dVar28 < dVar26) goto LAB_002de60c;
  }
  moby->setByGroup = '\0';
LAB_002de680:
  if (dVar30 == dVar32) {
    dVar30 = (double)GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
  }
  if (((dVar30 == 0.0) || (0.1 <= (float)((double)(moby->pos).z - dVar30))) ||
     (iVar15 = CollHotspot(), iVar15 != 1)) {
    MB_ColorDyingMoby(lVar13,uVar18 + 0x110);
  }
  else {
    MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar13,lVar13 + 0x10,&DAT_002dc4dc,6);
    DeleteMoby(moby);
  }
  return;
}


