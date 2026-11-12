// game/update/moby739.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x43a0f0-0x43cc8c
#include <math.h>
#include <stdlib.h>
#include "game/update/moby739.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x043a0f0 (0x14 bytes)
void M739_0043a0f0(void)

{
  DAT_0085a3c8 = 0x10000;
  return;
}


// 0x043a188 (0x232c bytes)
/* Moby 739 */

void UpdateMoby_739(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  short sVar3;
  float *pfVar4;
  MobyInstance *pMVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined2 uVar13;
  int iVar10;
  short sVar14;
  uint uVar11;
  float fVar12;
  ulonglong uVar9;
  vec4 *pvVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  f32 local_1e0;
  f32 local_1dc;
  GPiece<16> auStack_1d0;
  GPiece<16> local_1c0;
  GPiece<16> auStack_1b0;
  GPiece<16> auStack_1a0;
  GPiece<16> auStack_190;
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
  f32 local_120;
  f32 local_11c;
  float local_118;
  f32 local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  Vec4 local_100;
  GPiece<16> auStack_f0;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  Vec4 local_d0;
  GPiece<16> auStack_c0;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  f32 local_a0;
  f32 local_9c;
  float local_98;
  f32 local_94;
  GPiece<4> auStack_90;
  undefined4 local_8c [3];
  longlong local_80;
  
  lVar8 = (longlong)(int)moby;
  lVar16 = lVar8 + 0x10;
  pfVar4 = (float *)moby->pVar;
  uVar18 = ZEXT48(pfVar4);
  FUN_005e7e98(&local_1e0,lVar16);
  if (pfVar4[6] != 0.0) {
    uVar13 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)(pfVar4 + 0x7d) = uVar13;
  }
  pfVar4[6] = 0.0;
  FastDecTimerS16(uVar18 + 0x1e8);
  iVar10 = FastDecTimerS16(uVar18 + 500);
  fVar12 = 20.0;
  if (iVar10 != 0) {
    fVar12 = 12.0;
  }
  pfVar4[0x77] = fVar12;
  dVar25 = 0.0;
  local_8c[0] = 0;
  iVar10 = MB_damage(lVar8,0x330000,0);
  MB_HandleDamage(moby,iVar10,uVar18,0,auStack_90,local_8c,0,4);
  FastDecTimerS16(uVar18 + 6);
  sVar3 = *(short *)((int)pfVar4 + 6);
  sVar14 = idol::GetAnimDuration(0x2d);
  if (((sVar3 < sVar14) && (iVar10 != 0)) && (moby->state != 'c')) {
    sVar3 = *(short *)(*(int *)(iVar10 + 0x20) + 0xa6);
    if (((sVar3 == 0xb0) || (sVar3 == 0xb1)) && (*(short *)((int)pfVar4 + 6) != 0)) {
      *(undefined4 *)(iVar10 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar10 + 0x2c) != 0) {
      fVar12 = *pfVar4 - *(float *)(iVar10 + 0x2c);
      pfVar4[0x44] = 0.008;
      pfVar4[0x45] = 0.0005;
      *pfVar4 = fVar12;
      fVar7 = DAT_0085a3f0;
      fVar6 = g_FrameTime;
      pfVar4[0x49] = 1.26117e-44;
      pfVar4[0x46] = fVar7 * fVar6;
      fVar7 = DAT_0085a3ec;
      *(undefined1 *)((int)pfVar4 + 0x13d) = 0;
      pfVar4[0x47] = fVar7 * fVar6;
      fVar6 = g_FrameTime;
      if (dVar25 < (double)fVar12) {
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        MB_StartKick(lVar8,uVar18 + 0x100);
        pfVar4[0x54] = 5.0;
        pfVar4[0x55] = 10.0;
        moby->state = '\x06';
        *(undefined1 *)((int)pfVar4 + 0xf7) = 0xfa;
        uVar13 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pfVar4 + 6) = uVar13;
        MB_UpdateLightsTransition(lVar8,uVar18 + 0xf0);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        pfVar4[0x46] = fVar6 * 8.0;
        pfVar4[0x47] = fVar6 * 10.0;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        MB_StartKick(lVar8,uVar18 + 0x100);
        pfVar4[0x54] = 11.0;
        pfVar4[0x55] = 18.0;
        moby->state = 'c';
        *(undefined1 *)((int)pfVar4 + 0xf7) = 0x78;
        MB_UpdateLightsTransition(lVar8,uVar18 + 0xf0);
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar18 + 0x1b0,lVar16);
        if (*(short *)((int)pfVar4 + 0x1ea) == 0) {
          fVar12 = (moby->pos).z;
          moby->state = '\x0e';
          (moby->pos).z = fVar12 + 6.0;
        }
        else {
          moby->state = '\x01';
        }
        *pfVar4 = 1.0;
        *(undefined2 *)(pfVar4 + 1) = 1;
        *(undefined2 *)(pfVar4 + 0x7d) = 0;
        *(undefined2 *)(pfVar4 + 0x7a) = 0;
        MB_InitDefaultParams(pfVar4 + 0x58);
        pfVar4[0x5b] = 2.0;
        pfVar4[0x5a] = 2.0;
        fVar12 = g_FrameTime;
        pfVar4[0x58] = 1.27378e-42;
        pfVar4[0x61] = pfVar4[0x79] * fVar12;
        uVar11 = rand();
        if ((uVar11 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        pfVar4[0x2c] = (float)&DAT_0085a3fc;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar8,2,0,0);
        }
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_1a0,&g_heroPosition,lVar16);
        dVar25 = (double)FUN_005e8030(auStack_1a0);
        if ((((double)(pfVar4[0x77] + 4.0) <= dVar25) ||
            (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) ||
           (iVar10 = MB_randInt(0x13), iVar10 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar10 = MB_randInt(0x13), iVar10 == 0)) {
            uVar9 = MB_randInt(0x100);
            fVar12 = pfVar4[0x76];
            if ((uVar9 & 1) != 0) {
              fVar12 = -fVar12;
              pfVar4[0x76] = fVar12;
            }
            pfVar4[0x75] = fVar12 * 0.017453292;
            dVar25 = (double)MB_randRangeFloat(30.0,90.0);
            pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
            moby->state = '\x03';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar25 = (double)FUN_005e8030(auStack_1a0);
            if (((double)(pfVar4[0x77] + 6.0) < dVar25) &&
               ((*(short *)((int)pfVar4 + 0x1ea) == 0 &&
                (moby->state = '\x10', moby->animationId != '\x02')))) {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar8,2,0,(int)(animationSpeed * 3.5));
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x05') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
          }
        }
      }
      else if (bVar1 < 3) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar8,
                   &DAT_0043a108,uVar18 + 0x1d0);
        FUN_005e81f0(auStack_170,&g_heroPosition,lVar16);
        dVar25 = (double)FUN_005e8030(auStack_170);
        if ((((double)pfVar4[0x77] <= dVar25) || (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) ||
           (iVar10 = MB_randInt(0x13), iVar10 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar10 = MB_randInt(0x13), iVar10 == 0)) {
            uVar9 = MB_randInt(0x100);
            fVar12 = pfVar4[0x76];
            if ((uVar9 & 1) != 0) {
              fVar12 = -fVar12;
              pfVar4[0x76] = fVar12;
            }
            pfVar4[0x75] = fVar12 * 0.017453292;
            dVar25 = (double)MB_randRangeFloat(30.0,90.0);
            pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
            moby->state = '\x03';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          uVar9 = MB_randInt(0x100);
          fVar12 = pfVar4[0x76];
          if ((uVar9 & 1) != 0) {
            fVar12 = -fVar12;
            pfVar4[0x76] = fVar12;
          }
          pfVar4[0x75] = fVar12 * 0.017453292;
          dVar25 = (double)MB_randRangeFloat(30.0,90.0);
          pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x02')) {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,2,0,(int)(animationSpeed * 3.5));
        }
      }
      else {
        dVar26 = ABS((double)((moby->pos).z - (g_heroMobyPtr->pos).z));
        dVar25 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        dVar25 = (double)(float)(dVar26 / dVar25);
        if (pfVar4[0x7f] == -NAN) {
          local_150.x = g_heroPosition.x;
          local_150.y = g_heroPosition.y;
          local_150.z = g_heroPosition.z;
          local_150.w = g_heroPosition.w;
        }
        else {
          Path_PickNextNode
                    (moby,Splines[(int)pfVar4[0x7f]],(Vec4 *)&g_heroPosition,&local_150);
        }
        dVar26 = (double)FUN_005e8338((double)(local_150.x - (moby->pos).x),
                                      (double)(local_150.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  ((double)(float)(dVar26 + (double)pfVar4[0x75]),0x3fa99999a0000000,
                   0x3fd3333340000000,0x3fc99999a0000000,lVar8);
        dVar26 = (double)cosf((moby->rotation).z);
        dVar23 = 2.0;
        local_160 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_15c = (float)(dVar26 * dVar23);
        local_158 = 0;
        dVar26 = 1.0;
        uVar9 = MB_UpdateNavMove
                          (0x3ff0000000000000,moby,(MobyInstance *)(pfVar4 + 0x58),&local_160,
                           &local_150);
        iVar10 = FastDecTimerS32(uVar18 + 0x1f0);
        if (iVar10 != 0) {
          dVar23 = (double)MB_randRangeFloat(30.0,90.0);
          fVar12 = animationSpeed;
          pfVar4[0x75] = -pfVar4[0x75];
          pfVar4[0x7c] = (float)(int)(fVar12 * ((float)(longlong)dVar23 + 0.5));
        }
        FUN_005e81f0(auStack_140,&g_heroPosition,uVar18 + 0x1b0);
        dVar23 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        uVar2 = moby->animationId;
        if ((1.5 <= dVar23) || ((uVar9 & 2) != 0)) {
          if ((dVar26 < dVar25) || ((uVar9 & 2) != 0)) {
            (moby->pos).x = local_1e0;
            (moby->pos).y = local_1dc;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
            }
          }
          else {
            dVar25 = (double)FUN_005e8030(auStack_140);
            if (((double)(pfVar4[0x77] + 4.0) <= dVar25) ||
               (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
              if (moby->setByGroup != '\x01') {
                moby->state = '\x05';
              }
            }
            else if (moby->group != -1) {
              MB_SetGroupField(moby->group,1);
            }
          }
        }
        else {
          moby->state = '\x04';
          if (uVar2 != '\x01') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        dVar25 = 0.20000000298023224;
        OrganicDeltAngSpeed
                  (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8,
                   &DAT_0043a108,uVar18 + 0x1d0);
        if (((moby->updateId == moby->animationId) &&
            (dVar26 = (double)BlendAnimFrame(moby), dVar26 == 13.0)) &&
           ((ABS((moby->pos).z - g_heroPosition.z) < 0.5 &&
            (dVar26 = (double)FUN_005e8588(lVar16,&g_heroPosition), dVar26 < 2.0)))) {
          dVar26 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar26 = (double)FastSubRots((float)dVar26,(moby->rotation).z);
          if (dVar26 < 0.2617993950843811) {
            dVar26 = (double)cosf((moby->rotation).z);
            local_130 = (float)(dVar26 * dVar25);
            dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_12c = (float)(dVar26 * dVar25);
            local_128 = 0;
            local_120 = (g_heroMobyPtr->pos).x;
            local_11c = (g_heroMobyPtr->pos).y;
            local_114 = (g_heroMobyPtr->pos).w;
            local_118 = (g_heroMobyPtr->pos).z + 0.75;
            CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x43a108,&local_120,&local_130);
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar25 = (double)FUN_005e8588(lVar16,&g_heroPosition), 1.5 < dVar25)) &&
           (moby->state = '\x03', moby->animationId != '\0')) {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
        }
        dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar16,0);
        fVar12 = -(g_FrameTimeSq * 9.8 - pfVar4[0x5e]);
        pfVar4[0x5e] = fVar12;
        fVar12 = (moby->pos).z + fVar12;
        (moby->pos).z = fVar12;
        if ((double)fVar12 < dVar25) {
          pfVar4[0x5e] = 0.0;
          (moby->pos).z = (float)dVar25;
        }
      }
      else if (bVar1 < 6) {
        if (pfVar4[0x7f] == -NAN) {
          local_100.x = pfVar4[0x6c];
          local_100.y = pfVar4[0x6d];
          local_100.z = pfVar4[0x6e];
          local_100.w = pfVar4[0x6f];
        }
        else {
          Path_PickNextNode
                    (moby,Splines[(int)pfVar4[0x7f]],(Vec4 *)(pfVar4 + 0x6c),&local_100);
        }
        uVar19 = FUN_005e8338((double)(local_100.x - (moby->pos).x),
                              (double)(local_100.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar8);
        dVar25 = (double)cosf((moby->rotation).z);
        dVar26 = 2.0;
        local_110 = (float)(dVar25 * 2.0);
        dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_10c = (float)(dVar25 * dVar26);
        local_108 = 0;
        uVar9 = MB_UpdateNavMove
                          (0x3ff0000000000000,moby,(MobyInstance *)(pfVar4 + 0x58),&local_110,
                           &local_100);
        dVar25 = (double)FUN_005e8588(lVar16,uVar18 + 0x1b0);
        if ((dVar25 < dVar26) && (moby->state = '\x01', moby->animationId != '\x02')) {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,2,0,(int)(animationSpeed * 3.5));
        }
        FUN_005e81f0(auStack_f0,&g_heroPosition,uVar18 + 0x1b0);
        dVar25 = (double)FUN_005e8030(auStack_f0);
        if ((double)pfVar4[0x77] <= dVar25) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
            }
          }
          else if ((uVar9 & 2) != 0) {
            (moby->pos).x = local_1e0;
            uVar2 = moby->animationId;
            (moby->pos).y = local_1dc;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
            }
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\0') {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
      else {
        uVar11 = MB_UpdateKick(moby,(KickVars *)(pfVar4 + 0x40));
        if ((uVar11 & 1) != 0) {
          moby->state = '\t';
          if (moby->animationId == '\x04') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,4,8,(int)(animationSpeed * 3.5));
          return;
        }
        if ((int)(moby->pos).z < 0) {
          DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      iVar10 = FUN_0048c188(lVar8,uVar18 + 0x100);
      if (iVar10 != 0) {
        moby->state = '\0';
        *(undefined2 *)(pfVar4 + 0x2a) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_190,&g_heroPosition,lVar16);
      dVar25 = (double)FUN_005e8030(auStack_190);
      if (((dVar25 < (double)(pfVar4[0x77] - 4.0)) && (ABS((moby->pos).z - g_heroPosition.z) < 8.0))
         && (iVar10 = MB_randInt(0x13), iVar10 == 0)) {
        fVar12 = (moby->pos).z;
        uVar2 = moby->animationId;
        moby->state = '\x02';
        (moby->pos).z = fVar12 + 1.0;
        if (uVar2 != '\x05') {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      dVar25 = (double)BlendAnimFrame(moby);
      if (29.0 < dVar25) {
        moby->state = '\x03';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
        return;
      }
    }
    goto LAB_0043c460;
  }
  if (0xe < bVar1) {
    if (bVar1 < 0x12) {
      if (bVar1 < 0x10) {
        uVar19 = FUN_005e8338((double)(pfVar4[0x70] - (moby->pos).x),
                              (double)(pfVar4[0x71] - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8);
        lVar17 = uVar18 + 0x20;
        FUN_005e81f0(lVar17,uVar18 + 0x1c0,lVar16);
        ClampVec3Magnitude((double)(g_FrameTime * 4.0),(Vec4 *)lVar17);
        FUN_005e7f54(auStack_1b0,lVar17,lVar16);
        iVar10 = STUB_00055ac0_RET_0(auStack_1b0,400,0,lVar8,0);
        if (iVar10 == 0) {
          FUN_005e7e98(lVar16,auStack_1b0);
        }
        else {
          FUN_005e7e70(lVar17);
          moby->state = '\x0e';
        }
        dVar26 = (double)FUN_005e8030(lVar17);
        if (dVar26 == dVar25) {
          moby->state = '\x0e';
        }
      }
      else if (bVar1 < 0x11) {
        dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar16,0);
        Delt(g_FrameTime * 8.0,g_FrameTimeSq * 10.8,pfVar4 + 10);
        fVar12 = (moby->pos).z + pfVar4[10];
        (moby->pos).z = fVar12;
        if ((float)(dVar25 + 6.0) <= fVar12) {
          (moby->pos).z = (float)(dVar25 + 6.0);
          moby->state = '\x0e';
          FUN_005e7e70(uVar18 + 0x20);
          if (moby->animationId != '\x02') {
            uVar19 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar8,2,0,uVar19);
          }
        }
      }
      else {
        dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar16,0);
        Delt(g_FrameTime * -8.0,g_FrameTimeSq * 10.8,pfVar4 + 10);
        fVar12 = (moby->pos).z + pfVar4[10];
        (moby->pos).z = fVar12;
        if ((double)fVar12 <= dVar25) {
          (moby->pos).z = (float)dVar25;
          uVar9 = MB_randInt(0x100);
          fVar12 = pfVar4[0x76];
          if ((uVar9 & 1) != 0) {
            fVar12 = -fVar12;
            pfVar4[0x76] = fVar12;
          }
          pfVar4[0x75] = fVar12 * 0.017453292;
          dVar25 = (double)MB_randRangeFloat(30.0,90.0);
          local_80 = (longlong)(int)dVar25;
          fVar12 = (float)idol::GetAnimDuration((int)dVar25);
          pfVar4[0x7c] = fVar12;
          moby->state = '\x03';
          FUN_005e7e70(uVar18 + 0x20);
          if (moby->animationId != '\0') {
            uVar19 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar8,0,0,uVar19);
          }
        }
      }
    }
    else if (bVar1 == 99) {
      uVar11 = MB_UpdateKick(moby,(KickVars *)(pfVar4 + 0x40));
      if ((uVar11 & 0x40) != 0) {
        MB_SpawnExplosionSparks
                  (0x3fe0000000000000,0x402a000000000000,lVar8,lVar16,&DAT_0043a108,6);
        DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_0043c460;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 0xb) {
      uVar19 = FUN_005e8338((double)(pfVar4[0x6c] - (moby->pos).x),
                            (double)(pfVar4[0x6d] - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8,&DAT_0043a108
                 ,uVar18 + 0x1d0);
      FUN_005e81f0(auStack_180,&g_heroPosition,uVar18 + 0x1b0);
      dVar25 = (double)FUN_005e8030(auStack_180);
      if (((dVar25 < (double)pfVar4[0x77]) && (ABS(pfVar4[0x6e] - g_heroPosition.z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,2);
        }
        if (moby->animationId != '\a') {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,7,0,(int)(animationSpeed * 3.5));
        }
        fVar12 = DAT_0085a3f8;
        dVar25 = (double)DAT_0085a3f8;
        pfVar4[0x45] = 0.0;
        pfVar4[0x44] = fVar12;
        fVar12 = DAT_0085a3f4 * g_FrameTime;
        pfVar4[0x46] = fVar12;
        dVar25 = (double)MB_computeLobVelocity
                                   ((double)fVar12,-dVar25,lVar16,uVar18 + 0x1b0);
        pfVar4[0x47] = (float)dVar25;
        *(undefined1 *)((int)pfVar4 + 0x13d) = 0;
        fVar12 = (moby->rotation).z;
        pfVar4[0x49] = 1.82169e-44;
        MB_StartKick((double)fVar12,lVar8,uVar18 + 0x100,0xd,7,1,0);
        pfVar4[0x54] = 5.0;
        pfVar4[0x55] = 10.0;
        moby->state = '\v';
      }
    }
    else {
      uVar11 = MB_UpdateKick(moby,(KickVars *)(pfVar4 + 0x40));
      if ((uVar11 & 1) != 0) {
        moby->state = '\x03';
        uVar18 = MB_randInt(0x100);
        fVar12 = pfVar4[0x76];
        if ((uVar18 & 1) != 0) {
          fVar12 = -fVar12;
          pfVar4[0x76] = fVar12;
        }
        pfVar4[0x75] = fVar12 * 0.017453292;
        dVar25 = (double)MB_randRangeFloat(30.0,90.0);
        fVar12 = animationSpeed;
        pfVar4[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar25 + 0.5));
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(fVar12 * 3.5);
        MB_SetAnimation(lVar8,0,8,(int)(fVar12 * 3.5));
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_0043c460;
  }
  if (bVar1 < 0xd) {
    dVar26 = ABS((double)((moby->pos).z - (g_heroMobyPtr->pos).z));
    dVar25 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    dVar25 = (double)(float)(dVar26 / dVar25);
    if (pfVar4[0x7f] == -NAN) {
      local_d0.x = pfVar4[0x6c];
      local_d0.y = pfVar4[0x6d];
      local_d0.z = pfVar4[0x6e];
      local_d0.w = pfVar4[0x6f];
    }
    else {
      Path_PickNextNode(moby,Splines[(int)pfVar4[0x7f]],(Vec4 *)(pfVar4 + 0x6c),&local_d0);
    }
    uVar19 = FUN_005e8338((double)(local_d0.x - (moby->pos).x),(double)(local_d0.y - (moby->pos).y))
    ;
    OrganicDeltAngSpeed
              (uVar19,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar8);
    dVar26 = (double)cosf((moby->rotation).z);
    dVar23 = 2.0;
    local_e0 = (float)(dVar26 * 2.0);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_dc = (float)(dVar26 * dVar23);
    local_d8 = 0;
    dVar23 = 1.0;
    uVar9 = MB_UpdateNavMove
                      (0x3ff0000000000000,moby,(MobyInstance *)(pfVar4 + 0x58),&local_e0,&local_d0);
    FUN_005e81f0(auStack_c0,&g_heroPosition,uVar18 + 0x1b0);
    dVar26 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    if ((1.5 <= dVar26) || (dVar23 < dVar25)) {
      if ((dVar23 < dVar25) || ((uVar9 & 2) != 0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          MB_randInt(4);
          iVar10 = MB_randInt(4);
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation
                    (lVar8,(ZERO_MASK(iVar10) & 3U) + 2,0,
                     (int)(animationSpeed * 3.5));
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\0') {
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x01') {
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 3.5));
      }
    }
    moby->setByGroup = '\0';
    goto LAB_0043c460;
  }
  if (0xd < bVar1) {
    FUN_005e81f0(auStack_1d0,&g_heroPosition,lVar16);
    dVar26 = (double)FUN_005e8030(auStack_1d0);
    if ((((double)(pfVar4[0x77] + 4.0) <= dVar26) || (8.0 <= ABS((moby->pos).z - g_heroPosition.z)))
       || (iVar10 = MB_randInt(0x13), iVar10 != 0)) {
      if ((moby->setByGroup == '\x01') && (iVar10 = MB_randInt(0x13), iVar10 == 0)) {
        uVar9 = MB_randInt(0x100);
        fVar12 = pfVar4[0x76];
        if ((uVar9 & 1) != 0) {
          fVar12 = -fVar12;
          pfVar4[0x76] = fVar12;
        }
        pfVar4[0x75] = fVar12 * 0.017453292;
        dVar25 = (double)MB_randRangeFloat(30.0,90.0);
        local_80 = (longlong)(int)dVar25;
        fVar12 = (float)idol::GetAnimDuration((int)dVar25);
        pfVar4[0x7c] = fVar12;
        moby->state = '\x11';
        FUN_005e7e70(uVar18 + 0x20);
        if (moby->animationId != '\x02') {
          uVar19 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar8,2,0,uVar19);
        }
        moby->setByGroup = '\0';
      }
      else {
        iVar10 = FastDecTimerS32(uVar18 + 0x1ec);
        if (iVar10 != 0) {
          fVar12 = (float)idol::GetAnimDuration(0x78);
          pfVar4[0x7b] = fVar12;
          MB_randRangeFloat((float)dVar25,3.0);
          dVar25 = (double)MB_randRot();
          cosf((float)dVar25);
          FUN_005e8128(dVar25);
          MB_randRangeFloat(5.0,7.0);
          FUN_005e7f54(uVar18 + 0x1c0,local_1c0,uVar18 + 0x1b0);
          moby->state = '\x0f';
        }
      }
    }
    else {
      moby->state = '\x11';
      if (moby->animationId != '\x02') {
        uVar19 = idol::GetAnimDuration(3);
        MB_SetAnimation(lVar8,2,0,uVar19);
      }
    }
    goto LAB_0043c460;
  }
  if ((moby->updateId != '\0') && (moby->animationId != '\0')) {
    local_80 = (longlong)(int)(animationSpeed * 3.5);
    MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
  }
  dVar26 = (double)cosf((moby->rotation).z);
  local_b0 = (float)((double)(pfVar4[0x79] * g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_a8 = 0;
  local_ac = (float)((double)(pfVar4[0x79] * g_FrameTime) * dVar26);
  FUN_005e7f54(&local_a0,lVar16,&local_b0);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar22 = 2.0;
    dVar23 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar5 = MobyUpdateChainStart;
    do {
      if (((pMVar5 != moby) && (pMVar5->state < 0x80)) &&
         ((pMVar5->oClass == RATCHET || (pMVar5->oClass == 0x2e3)))) {
        pvVar15 = &pMVar5->pos;
        dVar20 = (double)FUN_005e8588(&local_a0,pvVar15);
        if (dVar20 < dVar22) {
          dVar20 = (double)(moby->rotation).z;
          dVar24 = (double)(moby->pos).z;
          uVar19 = FUN_005e8338((double)((pMVar5->pos).x - (moby->pos).x),
                                (double)((pMVar5->pos).y - (moby->pos).y));
          dVar21 = (double)FastDiffRots(dVar20,uVar19);
          dVar20 = dVar26;
          if (dVar25 < dVar21) {
            dVar20 = dVar23;
          }
          dVar20 = (double)FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)g_FrameTime * dVar20));
          (moby->rotation).z = (float)dVar20;
          FUN_005e81f0(&local_a0,lVar16,pvVar15);
          FUN_005e7f98(dVar22,&local_a0,&local_a0);
          FUN_005e7f54(&local_a0,&local_a0,pvVar15);
          local_98 = (float)dVar24;
        }
      }
      pMVar5 = (MobyInstance *)pMVar5->pChain;
    } while (pMVar5 != (MobyInstance *)0x0);
  }
  (moby->pos).x = local_a0;
  (moby->pos).y = local_9c;
  (moby->pos).z = local_98;
  (moby->pos).w = local_94;
  dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar16,0);
  fVar12 = -(g_FrameTimeSq * 9.8 - pfVar4[0x5e]);
  pfVar4[0x5e] = fVar12;
  fVar12 = (moby->pos).z + fVar12;
  (moby->pos).z = fVar12;
  if ((double)fVar12 < dVar25) {
    pfVar4[0x5e] = 0.0;
    (moby->pos).z = (float)dVar25;
  }
  if (pfVar4[0x7e] == 0.0) {
LAB_0043c408:
    moby->state = '\x05';
    if (moby->animationId != '\0') {
      local_80 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 3.5));
    }
  }
  else {
    dVar25 = (double)FUN_005e8588(lVar16,(ulonglong)(uint)pfVar4[0x7e] + 0x10);
    dVar26 = (double)FastIntToDouble(*(undefined2 *)((int)pfVar4 + 0x1f6));
    if (dVar26 < dVar25) goto LAB_0043c408;
  }
  moby->setByGroup = '\0';
LAB_0043c460:
  MB_ColorDyingMoby(lVar8,uVar18 + 0xf0);
  return;
}


// 0x043c4b4 (0x58 bytes)
void M739_0043c4b4(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x043c50c (0x58 bytes)
void M739_0043c50c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x043c564 (0x58 bytes)
void M739_0043c564(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x043c5bc (0x38 bytes)
void M739_0043c5bc(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x043c5f4 (0x40 bytes)
longlong M739_0043c5f4(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x043c634 (0x14 bytes)
void M739_0043c634(void)

{
  DAT_0085a454 = 0x10000;
  return;
}


// 0x043c668 (0x624 bytes)
// inlined: FastAtan2 @0x43c76c, FastAtan2 @0x43c908
void M739_0043c668(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r26;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x230;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x48] = in_LR;
  puVar10[0x44] = in_f30;
  puVar10[0x45] = in_f31;
  puVar10[0x43] = unaff_r31;
  gVar13 = g_gameMode;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x42] = unaff_r30;
  puVar10[0x41] = unaff_r29;
  puVar10[0x40] = unaff_r28;
  puVar10[0x3f] = unaff_r27;
  puVar10[0x3e] = unaff_r26;
  if (gVar13 != GAME_MODE_SCENE) {
    uVar20 = 0;
    do {
      uVar8 = *(uint *)(iVar7 + 0x24);
      fVar6 = ABS(*(float *)(iVar7 + 0x24));
      fVar3 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      fVar2 = ABS(fVar3);
      *(float *)((int)puVar10 + 0x194) = fVar3;
      *(float *)(puVar10 + 0x33) = fVar2 - fVar6;
      dVar25 = 0.0;
      dVar26 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x194) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x33) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar10 + 0x194));
      if (*(float *)(puVar10 + 0x33) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      if (*(float *)(puVar10 + 0x33) - 0.0 < 0.0) {
        fVar6 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar22 = dVar25;
      if (0.0 < fVar3) {
        lVar19 = uVar14 - 0x220;
        lVar16 = uVar14 - 0x74;
        lVar18 = uVar14 - 100;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x39) = fVar3;
        *(float *)(puVar10 + 0x38) = fVar3;
        *(float *)((int)puVar10 + 0x1c4) = fVar3;
        *(float *)((int)puVar10 + 0x1bc) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x38) = *(float *)(puVar10 + 0x38) * fVar6;
        *(float *)((int)puVar10 + 0x1c4) = *(float *)((int)puVar10 + 0x1c4) * fVar3;
        *(float *)(puVar10 + 0x39) = *(float *)(puVar10 + 0x39) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1bc) = *(float *)((int)lVar19 + 0x1ac) * fVar3 * fVar3;
          iVar11 = (int)lVar16;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x74;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1bc) = *(float *)((int)lVar19 + 0x1bc) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar11 + 0x1bc)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar22 = (double)FastWrapRot((float)-dVar22,1.5707964);
      *(float *)(puVar10 + 0xe) = (float)dVar22;
      uVar8 = *(uint *)(iVar7 + 0x28);
      uVar9 = *(uint *)(iVar7 + 0x20);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x28));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x20));
      *(float *)(puVar10 + 0x32) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x32) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      dVar24 = dVar23;
      if ((double)*(float *)(puVar10 + 0x32) - dVar25 < 0.0) {
        dVar24 = dVar22;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if ((double)*(float *)(puVar10 + 0x32) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      if (dVar25 < dVar24) {
        lVar19 = uVar14 - 0x220;
        lVar18 = uVar14 - 0x84;
        lVar16 = uVar14 - 0x94;
        lVar21 = 2;
        fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x35) = fVar2;
        *(float *)(puVar10 + 0x34) = fVar2;
        *(float *)((int)puVar10 + 0x1a4) = fVar2;
        *(float *)((int)puVar10 + 0x19c) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x34) = *(float *)(puVar10 + 0x34) * fVar5;
        *(float *)((int)puVar10 + 0x1a4) = *(float *)((int)puVar10 + 0x1a4) * fVar2;
        *(float *)(puVar10 + 0x35) = *(float *)(puVar10 + 0x35) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x19c) = *(float *)((int)lVar19 + 0x18c) * fVar2 * fVar2;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x19c) = *(float *)((int)lVar19 + 0x19c) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          iVar12 = (int)lVar18;
          lVar19 = lVar19 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0x19c)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar6 + fVar3);
      }
      *(float *)((int)puVar10 + 0x74) = (float)dVar25;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      iVar11 = worldUpdateTime;
      DAT_010ccd30 = 0;
      puVar10[0x3c] = (longlong)(int)(animationSpeed * 180.5);
      dVar25 = (double)FastIntToDouble
                                 (iVar11 - (iVar11 / *(int *)((int)puVar10 + 0x1e4)) *
                                           *(int *)((int)puVar10 + 0x1e4));
      dVar26 = (double)FastAddRots
                                 ((float)(dVar25 * 6.2831854820251465) / (animationSpeed * 180.0));
      dVar22 = 1.0;
      dVar25 = dVar22;
      if ((uVar20 & 1) != 0) {
        dVar25 = -1.0;
      }
      DAT_010ccd34 = (float)(dVar26 * dVar25);
      DAT_010ccd38 = 0;
      DAT_010ccd3c = 0;
      FastEulerToMtx1(uVar14 - 0x170);
      lVar19 = uVar14 - 0x1b0;
      FastEulerToMtx1(lVar19,uVar14 - 0x1c0);
      FastVecMtx4Mul(lVar19,lVar19,uVar14 - 0x170);
      *(undefined4 *)(puVar10 + 0x16) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)puVar10 + 0xb4) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(puVar10 + 0x17) = *(undefined4 *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(puVar10 + 0x28) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xbc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x144) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x29) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x14c) = 0x80808080;
      uVar15 = GetEffectTex((ZERO_MASK((uVar20 & 1))) + 0x12);
      puVar10[0x2f] = uVar15;
      uVar15 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
      puVar10[0x30] = uVar15;
      uVar15 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
      puVar10[0x2e] = uVar15;
      uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
      puVar10[0x31] = uVar15;
      *(undefined4 *)((int)puVar10 + 0x104) = 0;
      *(undefined4 *)(puVar10 + 0x20) = 0xbf800000;
      *(float *)(puVar10 + 0x21) = (float)dVar22;
      *(float *)((int)puVar10 + 0x10c) = (float)dVar22;
      *(float *)(puVar10 + 0x22) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x114) = 0;
      *(float *)(puVar10 + 0x23) = (float)dVar22;
      *(float *)((int)puVar10 + 0x11c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x24) = 0xbf800000;
      *(undefined4 *)((int)puVar10 + 0x124) = 0;
      *(undefined4 *)(puVar10 + 0x25) = 0xbf800000;
      *(float *)((int)puVar10 + 300) = (float)dVar22;
      *(float *)(puVar10 + 0x26) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x134) = 0;
      *(undefined4 *)(puVar10 + 0x27) = 0xbf800000;
      *(float *)((int)puVar10 + 0x13c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2a) = 0;
      *(float *)((int)puVar10 + 0x154) = (float)dVar22;
      *(float *)(puVar10 + 0x2b) = (float)dVar22;
      *(float *)((int)puVar10 + 0x15c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      *(undefined4 *)((int)puVar10 + 0x164) = 0;
      *(float *)(puVar10 + 0x2d) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x16c) = 0;
      FastDrawQuad(uVar14 - 0x130,lVar19,1,EffectTexHeaders,9);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 2);
  }
  return;
}


