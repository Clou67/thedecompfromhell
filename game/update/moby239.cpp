// game/update/moby239.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x309070-0x30b548
#include <math.h>
#include <stdlib.h>
#include "game/update/moby239.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby248.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0309070 (0x14 bytes)
void M239_00309070(void)

{
  DAT_007ff58c = 0x10000;
  return;
}


// 0x03090f8 (0x2450 bytes)
/* Moby 239 */

void UpdateMoby_239(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  void *pvVar3;
  f32 fVar4;
  u16 *puVar5;
  int *piVar6;
  Spline *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  MobyInstance *pMVar17;
  char cVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  float fVar28;
  GPiece<16> auStack_1c0;
  GPiece<16> auStack_1b0;
  GPiece<16> local_1a0;
  float local_190;
  float local_18c;
  undefined4 local_188;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  GPiece<8> auStack_160;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float afStack_130 [2];
  float local_128;
  GPiece<16> auStack_120;
  GPiece<16> auStack_110;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  GPiece<8> auStack_c0;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  GPiece<16> auStack_a0;
  GPiece<16> auStack_90;
  float local_80;
  float local_7c;
  int local_78;
  float local_74 [3];
  longlong local_68;
  
  lVar12 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  uVar20 = ZEXT48(pvVar3);
  iVar13 = MB_damage(lVar12,0x210000,0);
  dVar24 = 0.0;
  local_7c = 0.0;
  iVar14 = MB_HandleDamage(moby,iVar13,uVar20 + 0x20,0,&local_78,&local_7c,0,4);
  FastDecTimerS32(uVar20 + 0x1a4);
  if ((((iVar14 != 0xb) && (iVar14 != 0xc)) && (local_78 != 1)) &&
     ((uVar1 = moby->state, uVar1 != '\x05' && uVar1 != 'c' && (uVar1 != '\x0f')))) {
    *(undefined4 *)((int)pvVar3 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar3 + 0x84) = 0x3a03126f;
    fVar11 = DAT_007ff5c4;
    fVar9 = g_FrameTime;
    fVar28 = DAT_007ff5c4 * g_FrameTime;
    *(undefined4 *)((int)pvVar3 + 0x94) = 9;
    *(float *)((int)pvVar3 + 0x88) = fVar28;
    fVar8 = DAT_007ff5c0;
    *(undefined1 *)((int)pvVar3 + 0xad) = 0;
    fVar8 = fVar8 * fVar9;
    *(float *)((int)pvVar3 + 0x8c) = fVar8;
    fVar10 = *(float *)((int)pvVar3 + 0x20) - local_7c;
    *(float *)((int)pvVar3 + 0x20) = fVar10;
    if ((double)fVar10 <= dVar24) {
      uVar1 = moby->state;
      if ((uVar1 == '\x0f' || uVar1 == '\v') || (uVar1 == '\x10')) {
        *(float *)((int)pvVar3 + 0x88) = fVar28 * 2.0;
        *(float *)((int)pvVar3 + 0x8c) = fVar8 * 2.0;
        if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 6;
        }
        else if (*(int *)((int)pvVar3 + 0x1a8) == 3) {
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 0;
          *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x1b0) + 0x78) + 0xe4) = 0;
        }
        *(undefined4 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x94) = 0;
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                 uVar20 + 0x88,uVar20 + 0x8c);
      dVar22 = (double)local_80;
      idol::GetAnimDuration(5);
      MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
      *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40000000;
      *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41000000;
      moby->state = 'c';
    }
    else {
      uVar1 = moby->state;
      if ((uVar1 == '\x10' || uVar1 == '\v') || (uVar1 == '\x0f')) {
        if (uVar1 != '\x0f') {
          moby->setByGroup = uVar1;
        }
        moby->state = '\x0f';
        *(undefined1 *)((int)pvVar3 + 0x67) = 0x96;
        *(uint *)((int)pvVar3 + 0x94) = *(uint *)((int)pvVar3 + 0x94) & 0xfffffff7;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_74,
                   uVar20 + 0x88,uVar20 + 0x8c);
        dVar24 = (double)local_74[0];
        idol::GetAnimDuration(5);
        MB_StartKick(dVar24,lVar12,uVar20 + 0x70);
        MB_UpdateLightsTransition(lVar12,uVar20 + 0x60);
        moby->damage = -1;
        return;
      }
      if (*(int *)(iVar13 + 0x2c) == 0x3f800000) {
        *(undefined1 *)((int)pvVar3 + 0x67) = 0x96;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                   uVar20 + 0x88,uVar20 + 0x8c);
        dVar22 = (double)local_80;
        idol::GetAnimDuration(5);
        MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
        *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40800000;
        *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41100000;
        moby->state = '\x05';
      }
      else {
        fVar9 = fVar11 * 2.0 * fVar9;
        if (*(int *)(iVar13 + 0x2c) == 0x40000000) {
          *(undefined1 *)((int)pvVar3 + 0x67) = 0xdc;
          *(float *)((int)pvVar3 + 0x88) = fVar9;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                     uVar20 + 0x88,uVar20 + 0x8c);
          dVar22 = (double)local_80;
          idol::GetAnimDuration(5);
          MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
          *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40000000;
          *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41000000;
          moby->state = '\a';
        }
        else {
          *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
          *(float *)((int)pvVar3 + 0x88) = fVar9;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                     uVar20 + 0x88,uVar20 + 0x8c);
          dVar22 = (double)local_80;
          idol::GetAnimDuration(5);
          MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
          *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40000000;
          *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41000000;
          moby->state = '\x06';
        }
      }
    }
    MB_UpdateLightsTransition(lVar12,uVar20 + 0x60);
  }
  bVar2 = moby->state;
  moby->damage = -1;
  if (bVar2 < 10) {
    if (bVar2 < 4) {
      if (bVar2 == 0) {
        iVar13 = *(int *)((int)pvVar3 + 0x1a8);
        if (iVar13 < 2) {
          if (-1 < iVar13) {
            if (iVar13 < 1) {
              pSVar7 = Splines[*(int *)((int)pvVar3 + 0x144)];
              *(Spline **)((int)pvVar3 + 0x140) = pSVar7;
              *(Spline **)((int)pvVar3 + 0x170) = Splines[*(int *)((int)pvVar3 + 0x174)];
              FUN_005e7e98(lVar12 + 0x10,ZEXT48(pSVar7) + 0x10);
              moby->drawDistance = 0;
              moby->collision = (ushort *)0x0;
              if (moby->animationId != '\a') {
                MB_SetAnimation(lVar12,7,0,0);
              }
              moby->state = '\n';
            }
            else {
              moby->state = '\x11';
              if (moby->animationId != '\0') {
                MB_SetAnimation(lVar12,0,0,3);
              }
            }
          }
        }
        else if (iVar13 < 3) {
          pSVar7 = Splines[*(int *)((int)pvVar3 + 0x144)];
          *(Spline **)((int)pvVar3 + 0x140) = pSVar7;
          FUN_005e7e98(lVar12 + 0x10,ZEXT48(pSVar7) + 0x10);
          moby->state = '\r';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar12,0,0,3);
          }
        }
        else if (iVar13 < 4) {
          pSVar7 = Splines[*(int *)((int)pvVar3 + 0x144)];
          *(Spline **)((int)pvVar3 + 0x140) = pSVar7;
          *(Spline **)((int)pvVar3 + 0x170) = Splines[*(int *)((int)pvVar3 + 0x174)];
          FUN_005e7e98(lVar12 + 0x10,ZEXT48(pSVar7) + 0x10);
          moby->drawDistance = 0;
          moby->collision = (ushort *)0x0;
          moby->state = '\n';
          if (moby->animationId != '\a') {
            MB_SetAnimation(lVar12,7,0,0);
          }
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(undefined1 *)((int)pvVar3 + 0x29) = 1;
        MB_InitDefaultParams((float *)((int)pvVar3 + 0xd0));
        uVar15 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar15;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined4 *)((int)pvVar3 + 0xdc) = 0x40000000;
        *(undefined4 *)((int)pvVar3 + 0xd8) = 0x40000000;
        *(undefined4 *)((int)pvVar3 + 0xd0) = 0x38d;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0x40a00000;
        *(undefined4 *)((int)pvVar3 + 0xf4) = 0x3df58e22;
        *(undefined1 *)((int)pvVar3 + 0x28) = 2;
        *(undefined1 *)((int)pvVar3 + 0x58) = 10;
        *(undefined1 *)((int)pvVar3 + 0x5a) = 10;
        *(undefined4 *)((int)pvVar3 + 0x1a4) = 0;
        FUN_005e7e98(uVar20 + 0x120,lVar12 + 0x10);
        uVar16 = idol::GetAnimDuration(0x3c);
        *(undefined4 *)((int)pvVar3 + 400) = uVar16;
      }
      else if (bVar2 < 2) {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
        lVar19 = lVar12 + 0x10;
        dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition);
        if (((24.0 <= dVar24) ||
            (dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition), dVar24 < 2.5)) ||
           (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
          dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition);
          if (2.5 < dVar24) {
            dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition);
            if ((29.0 < dVar24) && (moby->state = '\x11', moby->animationId != '\0')) {
              uVar21 = idol::GetAnimDuration(8);
              MB_SetAnimation(lVar12,0,0,uVar21);
            }
          }
          else if (*(int *)((int)pvVar3 + 400) == 0) {
            uVar16 = idol::GetAnimDuration(0x14);
            *(undefined4 *)((int)pvVar3 + 400) = uVar16;
          }
          else {
            iVar13 = FastDecTimerS32(uVar20 + 400);
            if (iVar13 == 0) {
              iVar13 = *(int *)((int)pvVar3 + 400);
              iVar14 = idol::GetAnimDuration(0x14);
              if (iVar14 < iVar13) {
                uVar16 = idol::GetAnimDuration(0x14);
                *(undefined4 *)((int)pvVar3 + 400) = uVar16;
              }
            }
            else {
              moby->state = '\x04';
              if (moby->animationId != '\x01') {
                uVar21 = idol::GetAnimDuration(8);
                MB_SetAnimation(lVar12,1,0,uVar21);
              }
            }
          }
        }
        else {
          iVar13 = FastDecTimerS32(uVar20 + 400);
          if (iVar13 != 0) {
            FUN_005e7f54(auStack_1c0,lVar19,local_1a0);
            FUN_005e7f54(auStack_1b0,&g_heroPosition,local_1a0);
            iVar13 = CollLine(auStack_1c0,auStack_1b0,0,lVar12,0);
            if (((iVar13 != 0) && (g_CollOutput.pMoby == g_heroMobyPtr)) &&
               (moby->state = '\x02', moby->animationId != '\x06')) {
              uVar21 = idol::GetAnimDuration(5);
              MB_SetAnimation(lVar12,6,0,uVar21);
            }
          }
        }
      }
      else if (bVar2 < 3) {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
        lVar19 = lVar12 + 0x10;
        dVar22 = (double)FUN_005e8588(lVar19,&g_heroPosition);
        if ((dVar22 < 2.5) && (moby->state = '\x01', moby->animationId != '\0')) {
          uVar21 = idol::GetAnimDuration(8);
          MB_SetAnimation(lVar12,0,0,uVar21);
        }
        if ((moby->updateId == moby->animationId) &&
           (dVar22 = (double)BlendAnimFrame(moby), dVar22 == 10.0)) {
          FUN_005e7e98(&local_150,&g_heroPosition);
          uVar21 = 0x3fe0000000000000;
          dVar22 = (double)GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
          if (dVar22 != dVar24) {
            dVar24 = (double)GetGroundZ(uVar21,&g_heroPosition,0);
            local_148 = (float)dVar24;
          }
          FUN_005e81f0(&local_150,&local_150,lVar19);
          dVar24 = (double)FUN_005e8030(&local_150);
          uVar21 = 0x4022000000000000;
          if (9.0 < dVar24) {
            dVar23 = -1.0;
            dVar22 = 1.0;
            dVar24 = (double)MB_randRangeFloat(-1.0,1.0);
            local_150 = (float)((double)local_150 + dVar24);
            dVar24 = (double)MB_randRangeFloat((float)dVar23,(float)dVar22);
            local_14c = (float)((double)local_14c + dVar24);
            FUN_005e7f98(uVar21,&local_150,&local_150);
          }
          dVar24 = (double)FUN_005e7ebc(&local_150);
          dVar22 = (double)(float)(dVar24 / (double)(DAT_007ff5b4 * animationSpeed));
          FUN_005e7f54(dVar24,(double)(DAT_007ff5b4 * animationSpeed),&local_150,&local_150,lVar19);
          GetBonePosition(lVar12,9,auStack_170);
          FUN_005e81f0(auStack_160,&local_150,auStack_170);
          local_158 = 0.0;
          FUN_005e7f98(dVar22,auStack_160,auStack_160);
          dVar24 = (double)MB_computeLobVelocity
                                     (dVar22,-(double)(DAT_007ff5b8 * g_FrameTimeSq),auStack_170,
                                      &local_150);
          local_158 = (float)dVar24;
          iVar13 = FUN_00315198(lVar12,auStack_170,auStack_160);
          if (iVar13 != 0) {
            iVar14 = *(int *)(iVar13 + 0x78);
            uVar16 = idol::GetAnimDuration(0xb4);
            *(undefined4 *)(iVar14 + 0x20) = uVar16;
            *(undefined1 *)(iVar13 + 0x20) = 1;
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          uVar16 = FastDoubleToInt((double)(DAT_007ff5bc * animationSpeed));
          *(undefined4 *)((int)pvVar3 + 400) = uVar16;
          moby->state = '\x01';
          if (moby->animationId != '\f') {
            uVar21 = idol::GetAnimDuration(8);
            MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
        }
      }
      else {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
        dVar24 = (double)cosf((moby->rotation).z);
        dVar22 = 2.0;
        local_190 = (float)(dVar24 * 2.0);
        dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_18c = (float)(dVar24 * dVar22);
        local_188 = 0;
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar3 + 0xd0),&local_190,
                   auStack_180);
        dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
        if (dVar22 <= dVar24) {
          dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((8.0 < dVar24) && (moby->state = '\x01', moby->animationId != '\f')) {
            uVar21 = idol::GetAnimDuration(8);
            MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            uVar21 = idol::GetAnimDuration(8);
            MB_SetAnimation(lVar12,1,0,uVar21);
          }
        }
      }
    }
    else if (bVar2 < 7) {
      if (bVar2 < 5) {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                   &DAT_00309088,uVar20 + 0x194);
        if ((((moby->updateId == moby->animationId) &&
             (dVar24 = (double)BlendAnimFrame(moby), 10.0 <= dVar24)) &&
            (dVar24 = (double)BlendAnimFrame(moby), dVar24 < 11.0)) &&
           ((ABS((moby->pos).z - g_heroPosition.z) < 2.0 &&
            (dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition), dVar24 < 2.5)))) {
          dVar24 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar24 = (double)FastSubRots((float)dVar24,(moby->rotation).z);
          if (dVar24 < 0.2617993950843811) {
            dVar24 = (double)cosf((moby->rotation).z);
            dVar22 = 1.350000023841858;
            local_140 = (float)(dVar24 * 1.350000023841858);
            dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_13c = (float)(dVar24 * dVar22);
            iVar13 = 0x45afdf66;
            local_138 = 0x3f0ccccd;
            local_134 = 0x45afdf66;
            FUN_005e7e98(afStack_130,&g_heroMobyPtr->pos);
            local_128 = local_128 + 0.75;
            CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,iVar13,afStack_130,&local_140);
          }
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\x01';
          uVar16 = idol::GetAnimDuration(0x14);
          *(undefined4 *)((int)pvVar3 + 400) = uVar16;
          if (moby->animationId != '\f') {
            uVar21 = idol::GetAnimDuration(8);
            MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
        }
      }
      else if (bVar2 < 6) {
        FastDecTimerS32(uVar20 + 400);
        uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if ((uVar15 & 1) != 0) {
          dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((dVar24 < 3.0) && (ABS((moby->pos).z - g_heroPosition.z) < 4.0)) {
            moby->state = '\x04';
            if (moby->animationId == '\x01') {
              return;
            }
            uVar21 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar12,1,5,uVar21);
            return;
          }
          moby->state = '\x01';
          if (moby->animationId == '\f') {
            return;
          }
          uVar21 = idol::GetAnimDuration(7);
          MB_SetAnimation(lVar12,0xc,5,uVar21);
          return;
        }
        fVar4 = (moby->pos).z;
        uVar15 = (int)fVar4 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
          DeleteMoby(moby);
          return;
        }
      }
      else {
        FastDecTimerS32(uVar20 + 400);
        uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if ((uVar15 & 0x40) != 0) {
          dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((dVar24 < 2.0) && (ABS((moby->pos).z - g_heroPosition.z) < 4.0)) {
            moby->state = '\x04';
            if (moby->animationId == '\x01') {
              return;
            }
            uVar21 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar12,1,5,uVar21);
            return;
          }
          moby->state = '\x01';
          if (moby->animationId == '\f') {
            return;
          }
          uVar21 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar12,0xc,5,uVar21);
          return;
        }
        fVar4 = (moby->pos).z;
        uVar15 = (int)fVar4 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
          DeleteMoby(moby);
          return;
        }
      }
    }
    else {
      dVar24 = 7.5;
      if (bVar2 < 8) {
        uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if ((uVar15 & 0x40) == 0) {
          fVar4 = (moby->pos).z;
          uVar15 = (int)fVar4 >> 0x1f;
          if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
            DeleteMoby(moby);
            return;
          }
        }
        else {
          moby->state = '\b';
          if (moby->animationId != '\n') {
            local_68 = (longlong)(int)((double)animationSpeed * dVar24);
            MB_SetAnimation(lVar12,10,0,(int)((double)animationSpeed * dVar24));
          }
        }
      }
      else if (bVar2 < 9) {
        FastDecTimerS32(uVar20 + 400);
        dVar22 = (double)BlendAnimFrame(moby);
        if (dVar22 == 20.0) {
          dVar22 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((dVar22 < 2.0) && (ABS((moby->pos).z - g_heroPosition.z) < 4.0)) {
            moby->state = '\x04';
            if (moby->animationId == '\x01') {
              return;
            }
            local_68 = (longlong)(int)((double)animationSpeed * dVar24);
            MB_SetAnimation(lVar12,1,5,(int)((double)animationSpeed * dVar24));
            return;
          }
          moby->state = '\x01';
          if (moby->animationId == '\f') {
            return;
          }
          local_68 = (longlong)(int)((double)animationSpeed * dVar24);
          MB_SetAnimation(lVar12,0xc,5,(int)((double)animationSpeed * dVar24));
          return;
        }
      }
    }
  }
  else if (bVar2 < 0xf) {
    if (bVar2 < 0xc) {
      if (bVar2 < 0xb) {
        dVar24 = (double)BlendAnimFrame(moby);
        if (dVar24 == 12.0) {
          moby->unk58 = 0.0;
        }
        FUN_005e7e98(auStack_120,
                     *(int **)((int)pvVar3 + 0x140) + **(int **)((int)pvVar3 + 0x140) * 4);
        dVar24 = (double)FUN_005e8548(auStack_120,&g_heroPosition);
        if ((dVar24 < (double)*(float *)((int)pvVar3 + 0x198)) ||
           (iVar13 = MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x1c0)),
           iVar13 != 0)) {
          moby->drawDistance = 0x40;
          puVar5 = moby->pClass->collision;
          moby->state = '\v';
          iVar13 = *(int *)((int)pvVar3 + 0x1b4);
          moby->collision = puVar5;
          if (iVar13 == -1) {
            pMVar17 = CreateMoby(PLATFORM_00F0);
            *(MobyInstance **)((int)pvVar3 + 0x1b0) = pMVar17;
            pMVar17->updateDistance = '@';
            *(undefined2 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x32) = 0x40;
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x31) = 1;
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 1;
            *(undefined8 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x38) =
                 *(undefined8 *)&g_heroMobyPtr->color;
            FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar12 + 0x10);
            UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
          }
          else {
            pMVar17 = g_MobyInstance + iVar13;
            *(MobyInstance **)((int)pvVar3 + 0x1b0) = pMVar17;
            pMVar17->drawDistance = 0x40;
            *(undefined4 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x94) =
                 *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x1b0) + 0x24) + 0x10);
          }
        }
      }
      else {
        iVar13 = **(int **)((int)pvVar3 + 0x140);
        iVar14 = *(int *)((int)pvVar3 + 0x130) + iVar13 + (int)*(char *)((int)pvVar3 + 0x134);
        iVar14 = iVar14 - (iVar14 / iVar13) * iVar13;
        if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
          uVar21 = FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar3 + 0x170) + 0x10) -
                                        (moby->pos).x),
                                (double)(*(float *)(*(int *)((int)pvVar3 + 0x170) + 0x14) -
                                        (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                     &DAT_00309088,uVar20 + 0x194);
        }
        else {
          uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                (double)(g_heroPosition.y - (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                     &DAT_00309088,uVar20 + 0x194);
        }
        FUN_005e7e98(auStack_110,*(int *)((int)pvVar3 + 0x140) + iVar14 * 0x10 + 0x10);
        lVar19 = lVar12 + 0x10;
        dVar24 = (double)FUN_005e8548(lVar19,auStack_110);
        if ((dVar24 < 0.5) && (iVar14 < **(int **)((int)pvVar3 + 0x140) + -1)) {
          *(int *)((int)pvVar3 + 0x130) = iVar14;
        }
        FUN_005e81f0(auStack_100,auStack_110,lVar19);
        dVar24 = (double)FUN_005e8030(auStack_100);
        if ((double)(DAT_007ff5c8 * g_FrameTime) < dVar24) {
          FUN_005e7f98(auStack_100,auStack_100);
        }
        FUN_005e7f54(lVar19,lVar19,auStack_100);
        FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar19);
        *(f32 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x48) = (moby->rotation).z;
        PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
        dVar24 = (double)FUN_005e8548(lVar19,auStack_110);
        if ((((dVar24 < 0.10000000149011612) && (iVar14 == **(int **)((int)pvVar3 + 0x140) + -1)) ||
            (*(int *)(*(int *)((int)pvVar3 + 0x140) + iVar14 * 0x10 + 0x1c) == 0x42280000)) &&
           (moby->unk58 == 0.0)) {
          if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
            moby->unk58 = 1.0;
          }
          else {
            moby->state = '\x10';
            moby->unk58 = 1.0;
            if (moby->animationId != '\f') {
              uVar21 = idol::GetAnimDuration(0xc);
              MB_SetAnimation(lVar12,0xc,0,uVar21);
            }
            fVar28 = DAT_007ff5c8;
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            *(float *)((int)pvVar3 + 0x1b8) = DAT_007ff5c8;
            *(float *)((int)pvVar3 + 0x1bc) = fVar28;
            auVar26 = loadVectorLeftIndexed(0xfffffffffffff5cc,0x800000);
            auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar25);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar16 = storeVectorElementWordIndexed
                               (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1ac,
                                uVar20);
            *(undefined4 *)((int)pvVar3 + 0x1acU & 0xfffffffc) = uVar16;
          }
        }
        fVar28 = g_FrameTime;
        if ((moby->updateId == '\a') && ((moby->field43_0x70 & 2U) != 0)) {
          fVar8 = DAT_007ff5c4 * 2.0;
          *(undefined4 *)((int)pvVar3 + 0x94) = 0xd;
          *(float *)((int)pvVar3 + 0x88) = fVar8 * fVar28;
          fVar8 = DAT_007ff5c0;
          *(undefined1 *)((int)pvVar3 + 0xad) = 0;
          *(float *)((int)pvVar3 + 0x8c) = fVar8 * fVar28;
          MB_StartKick((double)(moby->rotation).z,lVar12,uVar20 + 0x70,0x800000,8,1,0);
          *(undefined4 *)((int)pvVar3 + 0xc0) = 0x41000000;
          *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41800000;
          moby->state = '\f';
          if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 6;
            FUN_005e7e98((ulonglong)*(uint *)(*(int *)((int)pvVar3 + 0x1b0) + 0x78) + 0x40,
                         auStack_100);
          }
          else if (*(int *)((int)pvVar3 + 0x1a8) == 3) {
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 0;
            *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x1b0) + 0x78) + 0xe4) = 0;
          }
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x94) = 0;
        }
      }
    }
    else if (bVar2 < 0xd) {
      if (moby->updateId == '\b') {
        uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if (((uVar15 & 0x40) != 0) && (moby->animationId != '\t')) {
          MB_SetAnimation(lVar12,9,0,0);
        }
      }
      else if (((moby->updateId == '\t') &&
               (dVar24 = (double)BlendAnimFrame(moby), 13.0 <= dVar24)) &&
              (moby->state = '\x01', moby->animationId != '\f')) {
        uVar21 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar12,0xc,0,uVar21);
      }
    }
    else if (bVar2 < 0xe) {
      dVar24 = (double)FUN_005e8548(lVar12 + 0x10,&g_heroPosition);
      if ((dVar24 < (double)*(float *)((int)pvVar3 + 0x198)) &&
         (moby->state = '\x0e', moby->animationId != '\x05')) {
        uVar21 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar12,5,0,uVar21);
      }
    }
    else {
      piVar6 = *(int **)((int)pvVar3 + 0x140);
      iVar13 = *piVar6;
      iVar14 = *(int *)((int)pvVar3 + 0x130) + iVar13 + (int)*(char *)((int)pvVar3 + 0x134);
      iVar14 = iVar14 - (iVar14 / iVar13) * iVar13;
      uVar21 = FUN_005e8338((double)((float)piVar6[iVar14 * 4 + 4] - (moby->pos).x),
                            (double)((float)piVar6[iVar14 * 4 + 5] - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fc99999a0000000,lVar12);
      FUN_005e7e98(auStack_a0,*(int *)((int)pvVar3 + 0x140) + iVar14 * 0x10 + 0x10);
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar3 + 0xd0),auStack_a0,auStack_90)
      ;
      dVar24 = (double)FUN_005e8548(lVar12 + 0x10,auStack_a0);
      if ((0.10000000149011612 <= dVar24) || (iVar14 != **(int **)((int)pvVar3 + 0x140) + -1)) {
        dVar24 = (double)FUN_005e8548(lVar12 + 0x10,auStack_a0);
        if ((dVar24 < 0.5) && (iVar14 < **(int **)((int)pvVar3 + 0x140) + -1)) {
          *(int *)((int)pvVar3 + 0x130) = iVar14;
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\f') {
          uVar21 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar12,0xc,0,uVar21);
        }
      }
    }
  }
  else if (bVar2 < 0x12) {
    if (bVar2 < 0x10) {
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
      if ((uVar15 & 0x40) != 0) {
        moby->state = moby->setByGroup;
        if (moby->animationId == '\f') {
          return;
        }
        uVar21 = idol::GetAnimDuration(7);
        MB_SetAnimation(lVar12,0xc,0,uVar21);
        return;
      }
      FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar12 + 0x10);
      *(f32 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x48) = (moby->rotation).z;
      PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
    }
    else if (bVar2 < 0x11) {
      uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                 &DAT_00309088,uVar20 + 0x194);
      iVar13 = FastDecTimerS32(uVar20 + 0x1ac);
      cVar18 = *(char *)((int)pvVar3 + 0x164);
      if (iVar13 != 0) {
        cVar18 = -cVar18;
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        *(char *)((int)pvVar3 + 0x164) = cVar18;
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff5cc,0x800000);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar25);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1ac,
                            uVar20);
        *(undefined4 *)((int)pvVar3 + 0x1acU & 0xfffffffc) = uVar16;
      }
      if (cVar18 == '\x01') {
        FUN_005e7e98(auStack_f0,*(int **)((int)pvVar3 + 0x170) + **(int **)((int)pvVar3 + 0x170) * 4
                    );
      }
      else {
        FUN_005e7e98(auStack_f0,(ulonglong)*(uint *)((int)pvVar3 + 0x170) + 0x10);
      }
      lVar19 = lVar12 + 0x10;
      dVar22 = (double)FUN_005e8548(lVar19,auStack_f0);
      dVar23 = (double)(*(float *)((int)pvVar3 + 0x1b8) * g_FrameTime);
      iVar13 = idol::GetAnimDuration(0x1e);
      local_68 = (longlong)iVar13;
      if ((double)(float)(dVar23 * (double)local_68) <= dVar22) {
        fVar28 = Delt(*(float *)((int)pvVar3 + 0x1bc),g_FrameTime * 10.0,
                                (float *)((int)pvVar3 + 0x1b8));
      }
      else {
        fVar28 = animationSpeed * 0.95238096 * *(float *)((int)pvVar3 + 0x1b8);
        *(float *)((int)pvVar3 + 0x1b8) = fVar28;
      }
      FUN_005e81f0((double)fVar28,auStack_e0,auStack_f0,lVar19);
      dVar22 = (double)FUN_005e8030(auStack_e0);
      if ((double)(*(float *)((int)pvVar3 + 0x1b8) * g_FrameTime) < dVar22) {
        FUN_005e7f98(auStack_e0,auStack_e0);
      }
      FUN_005e7f54(lVar19,lVar19,auStack_e0);
      FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar19);
      *(f32 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x48) = (moby->rotation).z;
      PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
      iVar13 = FastDecTimerS32(uVar20 + 400);
      if (((iVar13 != 0) && (moby->updateId == '\f')) && (moby->animationId != '\x06')) {
        uVar21 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar12,6,0,uVar21);
      }
      if (moby->updateId == '\x06') {
        dVar22 = (double)BlendAnimFrame(moby);
        if (dVar22 == 10.0) {
          FUN_005e7e98(&local_b0,&g_heroPosition);
          uVar21 = 0x3fe0000000000000;
          dVar22 = (double)GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
          if (dVar22 != dVar24) {
            dVar24 = (double)GetGroundZ(uVar21,&g_heroPosition,0);
            local_a8 = (float)dVar24;
          }
          FUN_005e81f0(&local_b0,&local_b0,lVar19);
          dVar24 = (double)FUN_005e8030(&local_b0);
          if (9.0 < dVar24) {
            FUN_005e7f98(&local_b0,&local_b0);
            dVar23 = -1.0;
            dVar22 = 1.0;
            dVar24 = (double)MB_randRangeFloat(-1.0,1.0);
            local_b0 = (float)((double)local_b0 + dVar24);
            dVar24 = (double)MB_randRangeFloat((float)dVar23,(float)dVar22);
            local_ac = (float)((double)local_ac + dVar24);
          }
          FUN_005e7f54(&local_b0,&local_b0,lVar19);
          GetBonePosition(lVar12,9,auStack_d0);
          FUN_005e81f0(auStack_c0,&local_b0,auStack_d0);
          FUN_005e7f98((double)(DAT_007ff5b0 * g_FrameTime),auStack_c0,auStack_c0);
          dVar24 = (double)MB_computeLobVelocity
                                     ((double)(DAT_007ff5b0 * g_FrameTime),
                                      -(double)(DAT_007ff5b8 * g_FrameTimeSq),auStack_d0,&local_b0);
          local_b8 = (float)dVar24;
          iVar13 = FUN_00315198(lVar12,auStack_d0,auStack_c0);
          if (iVar13 != 0) {
            iVar14 = *(int *)(iVar13 + 0x78);
            uVar16 = idol::GetAnimDuration(0xb4);
            *(undefined4 *)(iVar14 + 0x20) = uVar16;
            *(undefined1 *)(iVar13 + 0x20) = 1;
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\f') {
            uVar21 = idol::GetAnimDuration(5);
            MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
          iVar13 = MB_randInt(0x1e);
          local_68 = (longlong)iVar13;
          uVar16 = FastDoubleToInt
                             ((double)(animationSpeed * (DAT_007ff5bc + (float)local_68)));
          *(undefined4 *)((int)pvVar3 + 400) = uVar16;
        }
      }
    }
    else {
      dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
      if ((dVar24 < 28.0) && (moby->state = '\x01', moby->animationId != '\f')) {
        uVar21 = idol::GetAnimDuration(8);
        MB_SetAnimation(lVar12,0xc,0,uVar21);
      }
    }
  }
  else if (bVar2 == 99) {
    uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
    if ((uVar15 & 0x40) != 0) {
      MB_SpawnBoltsFromCrate(lVar12,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
    fVar4 = (moby->pos).z;
    uVar15 = (int)fVar4 >> 0x1f;
    if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
      MB_SpawnBoltsFromCrate(lVar12,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
  }
  MB_ColorDyingMoby(lVar12,uVar20 + 0x60);
  return;
}


