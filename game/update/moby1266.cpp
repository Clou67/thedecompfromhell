// game/update/moby1266.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x232a80-0x235530
#include <math.h>
#include <stdlib.h>
#include "game/update/moby1266.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update.h"
#include "game/update/moby1111.h"
#include "game/update/moby1524.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0232a80 (0x50 bytes)
int M1266_00232a80(MobyInstance *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = param_1->pVar;
  iVar1 = *(int *)((int)pvVar2 + 100);
  *param_2 = param_1;
  iVar3 = iVar1 + 1;
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    param_2[1] = *(undefined4 *)((int)pvVar2 + 0x70);
    pvVar2 = (void *)((int)pvVar2 + 4);
    param_2 = param_2 + 1;
  }
  return iVar3;
}


// 0x0232ad0 (0x88 bytes)
void M1266_00232ad0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)
            ((int)&g_MobyGroups +
            (int)((longlong)(short)*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xe4) << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].oClass == BLARG_SHIP_0527) {
        DeleteMoby(g_MobyInstance + (*puVar2 & 0x7fff));
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0232b58 (0x14 bytes)
void M1266_00232b58(void)

{
  DAT_0078d7e0 = 0x10000;
  return;
}


// 0x0232b90 (0x400 bytes)
/* Moby 1265 */

void M1266_00232b90(MobyInstance *moby)

{
  f32 *pfVar1;
  longlong lVar2;
  int iVar3;
  undefined8 in_r5;
  undefined8 in_r9;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  lVar2 = (longlong)(int)moby;
  pfVar1 = (f32 *)moby->pVar;
  if (moby->state == 0) {
    iVar3 = FastDecTimerS32(pfVar1 + 10);
    if ((((iVar3 == 0) && (iVar3 = MB_randInt(DAT_0078d810), iVar3 == 0)) &&
        (moby->enabled != '\0')) && (0x46 < numSpawnableMobys)) {
      MB_randSphere(0,(double)(DAT_0078d838 * g_FrameTime),local_80);
      MB_randRangeFloat(DAT_0078d830,DAT_0078d834);
      M1524_00292c60(local_a0,local_90,&DAT_00ef1a90);
    }
    *pfVar1 = (moby->pos).x;
    pfVar1[1] = (moby->pos).y;
    pfVar1[2] = (moby->pos).z;
    pfVar1[3] = (moby->pos).w;
  }
  else if (moby->state < 2) {
    lVar5 = lVar2 + 0x10;
    MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar2,lVar5,in_r5,0xffffffffffffffff);
    lVar4 = lVar2 + 0x40;
    dVar7 = 90.5;
    dVar6 = 12.0;
    MB_SpawnDebrisMoby
              ((double)(DAT_0071f418 * 12.0),lVar2,0x785,lVar5,lVar4,(int)(animationSpeed * 90.5),0,
               in_r9,local_70);
    MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar6),lVar2,0x786,lVar5,lVar4,
               (int)((double)animationSpeed * dVar7),0,in_r9,local_70);
    MB_SpawnDebrisMoby
              ((double)(float)((double)DAT_0071f418 * dVar6),lVar2,0x787,lVar5,lVar4,
               (int)((double)animationSpeed * dVar7),0,in_r9,local_70);
    moby->state = '\x02';
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}


// 0x0232fa0 (0xe8 bytes)
void M1266_00232fa0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pfVar4 = *(float **)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 1;
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  *(undefined4 *)(param_1 + 0x94) = 0;
  pfVar4[4] = *(float *)(param_1 + 0x10) - fVar1;
  pfVar4[5] = *(float *)(param_1 + 0x14) - fVar2;
  pfVar4[6] = *(float *)(param_1 + 0x18) - fVar3;
  pfVar4[7] = *(float *)(param_1 + 0x1c);
  dVar8 = 20.0;
  dVar7 = 60.0;
  dVar5 = (double)MB_randRangeFloat(20.0,60.0);
  dVar6 = 0.01745329238474369;
  pfVar4[8] = (float)(dVar5 * 0.01745329238474369) * g_FrameTime;
  dVar5 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
  pfVar4[9] = (float)(dVar5 * dVar6) * g_FrameTime;
  return;
}


// 0x0233088 (0x14 bytes)
void M1266_00233088(void)

{
  DAT_0078d88c = 0x10000;
  return;
}


// 0x02330a0 (0x50 bytes)
longlong M1266_002330a0(int param_1,int param_2,int param_3)

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


// 0x0233180 (0x23b0 bytes)
/* Moby 1266 */

void UpdateMoby_1266(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  f32 fVar6;
  MobyInstance *pMVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  undefined2 uVar16;
  int iVar13;
  short sVar17;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar12;
  int unused;
  longlong lVar18;
  vec4 *pvVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  f32 local_240;
  f32 local_23c;
  GPiece<16> auStack_230;
  GPiece<16> local_220;
  GPiece<16> auStack_210;
  GPiece<16> auStack_200;
  GPiece<16> auStack_1f0;
  GPiece<16> auStack_1e0;
  GPiece<16> auStack_1d0;
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  Vec4 local_1b0;
  GPiece<16> auStack_1a0;
  float local_190;
  float local_18c;
  undefined4 local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  Vec4 local_160;
  GPiece<16> auStack_150;
  float local_140;
  float local_13c;
  undefined4 local_138;
  Vec4 local_130;
  GPiece<16> auStack_120;
  float local_110;
  float local_10c;
  undefined4 local_108;
  f32 local_100;
  f32 local_fc;
  float local_f8;
  f32 local_f4;
  Vec4 local_f0 [4];
  MobyInstance *local_b0;
  GPiece<4> auStack_a0;
  undefined4 local_9c;
  float local_98 [2];
  longlong local_90;
  
  lVar11 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar21 = ZEXT48(pvVar5);
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
            ((double)(*(float *)((int)pvVar5 + 0x1fc) + 4.0),lVar11,&DAT_002330f0,local_f0);
  lVar18 = lVar11 + 0x10;
  FUN_005e7e98(&local_240,lVar18);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar5 + 0x214) = uVar16;
  }
  *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  FastDecTimerS16(uVar21 + 0x208);
  iVar13 = FastDecTimerS16(uVar21 + 0x214);
  uVar15 = 0x42000000;
  if (iVar13 != 0) {
    uVar15 = 0x41800000;
  }
  *(undefined4 *)((int)pvVar5 + 0x1fc) = uVar15;
  dVar29 = 0.0;
  local_9c = 0;
  iVar13 = MB_damage(lVar11,0x330000,0);
  unused = 0;
  MB_HandleDamage(moby,iVar13,uVar21 + 0x20,0,auStack_a0,&local_9c,0,4);
  FastDecTimerS16(uVar21 + 0x26);
  sVar4 = *(short *)((int)pvVar5 + 0x26);
  sVar17 = idol::GetAnimDuration(0x2d);
  if (((sVar4 < sVar17) && (iVar13 != 0)) && (moby->state != 'c')) {
    sVar4 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6);
    if (((sVar4 == 0xb0) || (sVar4 == 0xb1)) && (*(short *)((int)pvVar5 + 0x26) != 0)) {
      *(undefined4 *)(iVar13 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar13 + 0x2c) != 0) {
      dVar22 = (double)FUN_005e8338((double)((moby->pos).x - local_f0[0].x),
                                    (double)((moby->pos).y - local_f0[0].y));
      local_98[0] = (float)dVar22;
      fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar13 + 0x2c);
      *(undefined1 *)((int)pvVar5 + 0x5a) = 2;
      *(undefined1 *)((int)pvVar5 + 0x58) = 10;
      *(undefined4 *)((int)pvVar5 + 0x130) = 0x3c03126f;
      *(undefined4 *)((int)pvVar5 + 0x134) = 0x3a03126f;
      *(float *)((int)pvVar5 + 0x20) = fVar3;
      fVar10 = g_FrameTime;
      fVar9 = DAT_0078d8b4 * g_FrameTime;
      *(undefined4 *)((int)pvVar5 + 0x144) = 9;
      *(float *)((int)pvVar5 + 0x138) = fVar9;
      fVar9 = DAT_0078d8b0;
      *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
      *(float *)((int)pvVar5 + 0x13c) = fVar9 * fVar10;
      if (dVar29 < (double)fVar3) {
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_98,
                   uVar21 + 0x138,uVar21 + 0x13c);
        MB_StartKick((double)local_98[0],lVar11,uVar21 + 0x120);
        unused = 6;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\x06';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0xfa;
        uVar16 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar5 + 0x26) = uVar16;
        MB_UpdateLightsTransition(lVar11,uVar21 + 0x110);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = g_FrameTime;
        *(float *)((int)pvVar5 + 0x138) = g_FrameTime * 8.0;
        *(float *)((int)pvVar5 + 0x13c) = fVar3 * 10.0;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_98,
                   uVar21 + 0x138,uVar21 + 0x13c);
        MB_StartKick((double)local_98[0],lVar11,uVar21 + 0x120);
        unused = 99;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41900000;
        moby->state = 'c';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0x78;
        MB_UpdateLightsTransition(lVar11,uVar21 + 0x110);
        MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar21 + 0x1d0,lVar18);
        if (*(short *)((int)pvVar5 + 0x20a) == 0) {
          fVar3 = (moby->pos).z;
          moby->state = '\x0e';
          uVar2 = moby->animationId;
          (moby->pos).z = fVar3 + 6.0;
          if (uVar2 != '\0') {
            MB_SetAnimation(lVar11,0,0,0);
          }
        }
        else {
          moby->state = '\x01';
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar11,4,0,0);
          }
        }
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar5 + 0x24) = 1;
        *(undefined2 *)((int)pvVar5 + 0x214) = 0;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        *(undefined1 *)((int)pvVar5 + 0x58) = 8;
        *(undefined1 *)((int)pvVar5 + 0x5a) = 4;
        MB_InitDefaultParams((float *)((int)pvVar5 + 0x180));
        *(undefined4 *)((int)pvVar5 + 0x18c) = 0x40000000;
        *(undefined4 *)((int)pvVar5 + 0x188) = 0x40000000;
        fVar3 = *(float *)((int)pvVar5 + 0x204) * g_FrameTime;
        *(undefined4 *)((int)pvVar5 + 0x180) = 0x38d;
        *(uint *)((int)pvVar5 + 0x1b8) = *(uint *)((int)pvVar5 + 0x1b8) | 0x30;
        *(float *)((int)pvVar5 + 0x1a4) = fVar3;
        uVar14 = rand();
        if ((uVar14 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar5 + 0xd0) = &DAT_0078d8c0;
        if (*(int *)((int)pvVar5 + 0x228) != -1) {
          iVar13 = PathFindClosestPnt
                             ((float)dVar29,(Vec4 *)lVar18,Splines[*(int *)((int)pvVar5 + 0x228)]);
          *(int *)((int)pvVar5 + 0x22c) = iVar13;
        }
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_200,local_f0,lVar18);
        dVar29 = (double)FUN_005e8030(auStack_200);
        if ((((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar26) <= dVar29) ||
            (8.0 <= ABS((moby->pos).z - local_f0[0].z))) ||
           (iVar13 = MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
            uVar12 = MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)MB_randRangeFloat(30.0,90.0);
            local_90 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar25 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,2,0,uVar25);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_200);
            if (((double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0) < dVar26) &&
               ((*(short *)((int)pvVar5 + 0x20a) == 0 &&
                (moby->state = '\x10', moby->animationId != '\0')))) {
              uVar25 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,0,0,uVar25);
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x05') {
            uVar25 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,5,0,uVar25);
          }
        }
      }
      else if (bVar1 < 3) {
        uVar25 = FUN_005e8338((double)((moby->pos).x - local_f0[0].x),
                              (double)((moby->pos).y - local_f0[0].y));
        OrganicDeltAngSpeed
                  (uVar25,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11,
                   &DAT_002330f0,uVar21 + 0x1f0);
        FUN_005e81f0(auStack_1d0,local_f0,lVar18);
        dVar26 = (double)FUN_005e8030(auStack_1d0);
        if ((((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_f0[0].z))) ||
           (iVar13 = MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
            uVar12 = MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar12 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)MB_randRangeFloat(30.0,90.0);
            local_90 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar25 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar11,2,0,uVar25);
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          uVar12 = MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_90 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            uVar25 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,2,0,uVar25);
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          uVar25 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,4,0,uVar25);
        }
      }
      else {
        dVar22 = ABS((double)((moby->pos).z - local_f0[0].z));
        dVar29 = (double)FUN_005e8588(lVar18,local_f0);
        dVar29 = (double)(float)(dVar22 / dVar29);
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          FUN_005e7e98(&local_1b0,local_f0);
        }
        else {
          Path_PickNextNode(moby,Splines[*(int *)((int)pvVar5 + 0x21c)],local_f0,&local_1b0);
        }
        dVar22 = (double)FUN_005e8338((double)(local_1b0.x - (moby->pos).x),
                                      (double)(local_1b0.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  ((double)(float)(dVar22 + (double)*(float *)((int)pvVar5 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
        dVar22 = (double)cosf((moby->rotation).z);
        dVar27 = 2.0;
        local_1c0 = (float)(dVar22 * 2.0);
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_1bc = (float)(dVar22 * dVar27);
        local_1b8 = 0;
        dVar22 = 1.0;
        uVar12 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_1c0
                            ,&local_1b0);
        iVar13 = FastDecTimerS32(uVar21 + 0x210);
        if (iVar13 != 0) {
          dVar27 = (double)MB_randRangeFloat(30.0,90.0);
          fVar3 = animationSpeed;
          *(float *)((int)pvVar5 + 500) = -*(float *)((int)pvVar5 + 500);
          *(int *)((int)pvVar5 + 0x210) = (int)(fVar3 * ((float)(longlong)dVar27 + 0.5));
        }
        FUN_005e81f0(auStack_1a0,local_f0,uVar21 + 0x1d0);
        dVar27 = (double)FUN_005e8588(lVar18,local_f0);
        if ((1.5 <= dVar27) || ((uVar12 & 2) != 0)) {
          if ((dVar22 < dVar29) || ((uVar12 & 2) != 0)) {
            (moby->pos).x = local_240;
            (moby->pos).y = local_23c;
          }
          else {
            dVar29 = (double)FUN_005e8030(auStack_1a0);
            if (((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar26) <= dVar29) ||
               (8.0 <= ABS((moby->pos).z - local_f0[0].z))) {
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
          if (moby->animationId != '\x03') {
            local_90 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar11,3,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar25 = FUN_005e8338((double)(local_f0[0].x - (moby->pos).x),
                              (double)(local_f0[0].y - (moby->pos).y));
        dVar26 = 0.20000000298023224;
        OrganicDeltAngSpeed
                  (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                   &DAT_002330f0,uVar21 + 0x1f0);
        if (((moby->updateId == moby->animationId) &&
            (dVar29 = (double)BlendAnimFrame(moby), dVar29 == 13.0)) &&
           ((ABS((moby->pos).z - local_f0[0].z) < 0.5 &&
            (dVar29 = (double)FUN_005e8588(lVar18,local_f0), dVar29 < 2.0)))) {
          dVar29 = (double)FUN_005e8338((double)(local_f0[0].x - (moby->pos).x),
                                        (double)(local_f0[0].y - (moby->pos).y));
          dVar29 = (double)FastSubRots((float)dVar29,(moby->rotation).z);
          if (dVar29 < 0.2617993950843811) {
            dVar29 = (double)cosf((moby->rotation).z);
            local_190 = (float)(dVar29 * dVar26);
            dVar29 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_18c = (float)(dVar29 * dVar26);
            local_188 = 0;
            local_180 = local_f0[0].x;
            local_17c = local_f0[0].y;
            local_174 = local_f0[0].w;
            local_178 = local_f0[0].z + 0.75;
            if (local_b0 != (MobyInstance *)0x0) {
              CollDamageMobyDirect(1.0,local_b0,moby,1,unused,&local_180,&local_190);
            }
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar26 = (double)FUN_005e8588(lVar18,local_f0), 1.5 < dVar26)) &&
           (moby->state = '\x03', moby->animationId != '\x02')) {
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
        }
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0x120);
        fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
        *(float *)((int)pvVar5 + 0x198) = fVar3;
        fVar3 = (moby->pos).z + fVar3;
        (moby->pos).z = fVar3;
        if ((double)fVar3 < dVar26) {
          *(undefined4 *)((int)pvVar5 + 0x198) = 0;
          (moby->pos).z = (float)dVar26;
        }
      }
      else if (bVar1 < 6) {
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          local_160.x = *(float *)((int)pvVar5 + 0x1d0);
          local_160.y = *(float *)((int)pvVar5 + 0x1d4);
          local_160.z = *(float *)((int)pvVar5 + 0x1d8);
          local_160.w = *(float *)((int)pvVar5 + 0x1dc);
        }
        else {
          Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                     &local_160);
        }
        uVar25 = FUN_005e8338((double)(local_160.x - (moby->pos).x),
                              (double)(local_160.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar25,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar11);
        dVar26 = (double)cosf((moby->rotation).z);
        dVar29 = 2.0;
        local_170 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_16c = (float)(dVar26 * dVar29);
        local_168 = 0;
        uVar12 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_170
                            ,&local_160);
        dVar26 = (double)FUN_005e8588(lVar18,uVar21 + 0x1d0);
        if ((dVar26 < dVar29) && (moby->state = '\x01', moby->animationId != '\x04')) {
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 3.5));
        }
        FUN_005e81f0(auStack_150,local_f0,uVar21 + 0x1d0);
        dVar26 = (double)FUN_005e8030(auStack_150);
        if ((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              local_90 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
            }
          }
          else if ((uVar12 & 2) != 0) {
            (moby->pos).x = local_240;
            uVar2 = moby->animationId;
            (moby->pos).y = local_23c;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              local_90 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 3.5));
            }
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            local_90 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
          }
        }
        moby->setByGroup = '\0';
      }
      else {
        uVar14 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
        if ((uVar14 & 1) != 0) {
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
          return;
        }
        fVar6 = (moby->pos).z;
        uVar14 = (int)fVar6 >> 0x1f;
        if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
          MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      iVar13 = FUN_0048c188(lVar11,uVar21 + 0x120);
      if (iVar13 != 0) {
        moby->state = '\x0e';
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar11,0,0,0);
        }
        *(undefined2 *)((int)pvVar5 + 200) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_1f0,local_f0,lVar18);
      dVar29 = (double)FUN_005e8030(auStack_1f0);
      if (((dVar29 < (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) - dVar26)) &&
          (ABS((moby->pos).z - local_f0[0].z) < 8.0)) &&
         (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
        fVar3 = (moby->pos).z;
        moby->state = '\x02';
        uVar2 = moby->animationId;
        (moby->pos).z = fVar3 + 1.0;
        if (uVar2 != '\x05') {
          uVar25 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,5,0,uVar25);
        }
      }
    }
    goto LAB_002354d4;
  }
  if (0xe < bVar1) {
    if (bVar1 < 0x12) {
      if (bVar1 < 0x10) {
        uVar25 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1e0) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar5 + 0x1e4) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
        lVar20 = uVar21 + 0x40;
        FUN_005e81f0(lVar20,uVar21 + 0x1e0,lVar18);
        ClampVec3Magnitude
                  ((double)(float)((double)g_FrameTime * dVar26),(Vec4 *)lVar20);
        FUN_005e7f54(auStack_210,lVar20,lVar18);
        iVar13 = CollSphere(0x4079000000000000,auStack_210);
        if (iVar13 == 0) {
          FUN_005e7e98(lVar18,auStack_210);
        }
        else {
          FUN_005e7e70(lVar20);
          moby->state = '\x0e';
        }
        dVar26 = (double)FUN_005e8030(lVar20);
        if (dVar26 == dVar29) {
          moby->state = '\x0e';
        }
      }
      else if (bVar1 < 0x11) {
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0x120);
        Delt(g_FrameTime * 8.0,DAT_0071f418 * 10.8,(float *)((int)pvVar5 + 0x48)
                      );
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        (moby->pos).z = fVar3;
        if ((float)(dVar26 + 6.0) <= fVar3) {
          (moby->pos).z = (float)(dVar26 + 6.0);
          moby->state = '\x0e';
          FUN_005e7e70(uVar21 + 0x40);
        }
      }
      else {
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0x120);
        Delt(g_FrameTime * -8.0,DAT_0071f418 * 10.8,
                       (float *)((int)pvVar5 + 0x48));
        uVar2 = moby->animationId;
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        dVar29 = (double)fVar3;
        (moby->pos).z = fVar3;
        if (((uVar2 != '\x01') &&
            ((float)(dVar29 - dVar26) <= g_FrameTime * 8.0 * animationSpeed * 45.0)) &&
           (uVar2 != '\x01')) {
          uVar25 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar11,1,0,uVar25);
          dVar29 = (double)(moby->pos).z;
        }
        if (dVar29 <= dVar26) {
          (moby->pos).z = (float)dVar26;
          uVar12 = MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar12 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_90 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          FUN_005e7e70(uVar21 + 0x40);
          if (moby->animationId != '\x02') {
            uVar25 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar11,2,0,uVar25);
          }
        }
      }
    }
    else if (bVar1 == 99) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar14 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
      if ((uVar14 & 0x140) != 0) {
        iVar13 = (int)((float)(longlong)(animationSpeed * 1.5) * 60.0);
        local_90 = (longlong)iVar13;
        iVar13 = M1266_002330a0(&DAT_00f15584,3,iVar13);
        if (-1 < iVar13) {
          MB_SpawnExplosionSparks
                    (0x3fe0000000000000,0x402a000000000000,lVar11,lVar18,&DAT_002330f0,4);
        }
        DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_002354d4;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 0xb) {
      uVar25 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1d0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar5 + 0x1d4) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11,
                 &DAT_002330f0,uVar21 + 0x1f0);
      FUN_005e81f0(auStack_1e0,local_f0,uVar21 + 0x1d0);
      dVar26 = (double)FUN_005e8030(auStack_1e0);
      if (((dVar26 < (double)*(float *)((int)pvVar5 + 0x1fc)) &&
          (ABS(*(float *)((int)pvVar5 + 0x1d8) - local_f0[0].z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,2);
        }
        if (moby->animationId != '\x06') {
          uVar25 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar11,6,0,uVar25);
        }
        fVar3 = DAT_0078d8bc;
        dVar26 = (double)DAT_0078d8bc;
        *(undefined4 *)((int)pvVar5 + 0x134) = 0;
        *(float *)((int)pvVar5 + 0x130) = fVar3;
        fVar3 = DAT_0078d8b8 * g_FrameTime;
        *(float *)((int)pvVar5 + 0x138) = fVar3;
        dVar26 = (double)MB_computeLobVelocity
                                   ((double)fVar3,-dVar26,lVar18,uVar21 + 0x1d0);
        *(float *)((int)pvVar5 + 0x13c) = (float)dVar26;
        *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
        fVar3 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar5 + 0x144) = 0xd;
        MB_StartKick((double)fVar3,lVar11,uVar21 + 0x120,0xd,6,1,0);
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\v';
      }
    }
    else {
      uVar14 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
      if ((uVar14 & 1) != 0) {
        moby->state = '\x03';
        uVar21 = MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar21 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)MB_randRangeFloat(30.0,90.0);
        local_90 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        if (moby->animationId == '\x02') {
          return;
        }
        uVar25 = idol::GetAnimDuration(3);
        MB_SetAnimation(lVar11,2,8,uVar25);
        return;
      }
      fVar6 = (moby->pos).z;
      uVar14 = (int)fVar6 >> 0x1f;
      if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
        MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_002354d4;
  }
  if (bVar1 < 0xd) {
    dVar29 = ABS((double)((moby->pos).z - local_f0[0].z));
    dVar26 = (double)FUN_005e8588(lVar18,local_f0);
    dVar26 = (double)(float)(dVar29 / dVar26);
    if (*(int *)((int)pvVar5 + 0x21c) == -1) {
      local_130.x = *(float *)((int)pvVar5 + 0x1d0);
      local_130.y = *(float *)((int)pvVar5 + 0x1d4);
      local_130.z = *(float *)((int)pvVar5 + 0x1d8);
      local_130.w = *(float *)((int)pvVar5 + 0x1dc);
    }
    else {
      Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                 &local_130);
    }
    uVar25 = FUN_005e8338((double)(local_130.x - (moby->pos).x),
                          (double)(local_130.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar25,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar11);
    dVar29 = (double)cosf((moby->rotation).z);
    dVar22 = 2.0;
    local_140 = (float)(dVar29 * 2.0);
    dVar29 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_13c = (float)(dVar29 * dVar22);
    local_138 = 0;
    dVar22 = 1.0;
    uVar12 = MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_140,
                        &local_130);
    FUN_005e81f0(auStack_120,local_f0,uVar21 + 0x1d0);
    dVar29 = (double)FUN_005e8588(lVar18,local_f0);
    if ((1.5 <= dVar29) || (dVar22 < dVar26)) {
      if ((dVar22 < dVar26) || ((uVar12 & 2) != 0)) {
        if ((moby->field43_0x70 & 2U) != 0) {
          MB_randInt(4);
          iVar13 = MB_randInt(4);
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation
                    (lVar11,(ZERO_MASK(iVar13) & 1U) + 4,0,
                     (int)(animationSpeed * 3.5));
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x02') {
          local_90 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
        }
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x03') {
        local_90 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar11,3,0,(int)(animationSpeed * 3.5));
      }
    }
    moby->setByGroup = '\0';
    goto LAB_002354d4;
  }
  if (0xd < bVar1) {
    FUN_005e81f0(auStack_230,local_f0,lVar18);
    uVar25 = 0x3fe0000000000000;
    dVar22 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0x120);
    dVar27 = 1.0;
    if ((((dVar22 <= 1.0) ||
         (dVar23 = (double)FUN_005e8030(auStack_230),
         (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar26) <= dVar23)) ||
        (8.0 <= ABS((moby->pos).z - local_f0[0].z))) ||
       (iVar13 = MB_randInt(0x13), iVar13 != 0)) {
      if (((dVar22 <= dVar27) || (moby->setByGroup != '\x01')) ||
         (iVar13 = MB_randInt(4), iVar13 != 0)) {
        if (*(int *)((int)pvVar5 + 0x228) == -1) {
          iVar13 = FastDecTimerS32(uVar21 + 0x20c);
          if (iVar13 != 0) {
            uVar15 = idol::GetAnimDuration(0x78);
            *(undefined4 *)((int)pvVar5 + 0x20c) = uVar15;
            iVar13 = 0;
            dVar23 = 3.0;
            dVar22 = 5.0;
            dVar26 = 7.0;
            do {
              MB_randRangeFloat((float)dVar29,(float)dVar23);
              dVar24 = (double)MB_randRot();
              cosf((float)dVar24);
              FUN_005e8128(dVar24);
              MB_randRangeFloat((float)dVar22,(float)dVar26);
              FUN_005e7f54(uVar21 + 0x1e0,local_220,uVar21 + 0x1d0);
              dVar24 = (double)GetGroundZ(uVar25,uVar21 + 0x1e0,0x120);
              if (dVar27 < dVar24) break;
              iVar13 = iVar13 + 1;
            } while (iVar13 < 10);
            moby->state = '\x0f';
          }
        }
        else {
          pSVar8 = Splines[*(int *)((int)pvVar5 + 0x228)];
          dVar26 = (double)FUN_005e8548(lVar18,pSVar8->points + *(int *)((int)pvVar5 + 0x22c));
          iVar13 = *(int *)((int)pvVar5 + 0x22c);
          if (dVar26 < 0.25) {
            iVar13 = iVar13 + 1;
            *(int *)((int)pvVar5 + 0x22c) = iVar13;
            if (pSVar8->cnt <= iVar13) {
              iVar13 = 0;
              *(undefined4 *)((int)pvVar5 + 0x22c) = 0;
            }
          }
          FUN_005e7e98(uVar21 + 0x1e0,pSVar8->points + iVar13);
          moby->state = '\x0f';
        }
      }
      else {
        uVar12 = MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar12 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)MB_randRangeFloat(30.0,90.0);
        local_90 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        moby->state = '\x11';
        FUN_005e7e70(uVar21 + 0x40);
        moby->setByGroup = '\0';
      }
    }
    else {
      moby->state = '\x11';
    }
    goto LAB_002354d4;
  }
  if ((moby->updateId != '\x02') && (moby->animationId != '\x02')) {
    local_90 = (longlong)(int)(animationSpeed * 3.5);
    MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
  }
  dVar26 = (double)cosf((moby->rotation).z);
  local_110 = (float)((double)(*(float *)((int)pvVar5 + 0x204) * g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_108 = 0;
  local_10c = (float)((double)(*(float *)((int)pvVar5 + 0x204) * g_FrameTime) * dVar26);
  FUN_005e7f54(&local_100,lVar18,&local_110);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar27 = 2.0;
    dVar22 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar7 = MobyUpdateChainStart;
    do {
      if (((pMVar7 != moby) && (pMVar7->state < 0x80)) &&
         ((pMVar7->oClass == RATCHET || (pMVar7->oClass == 0x4f2)))) {
        pvVar19 = &pMVar7->pos;
        dVar23 = (double)FUN_005e8588(&local_100,pvVar19);
        if (dVar23 < dVar27) {
          dVar23 = (double)(moby->rotation).z;
          dVar28 = (double)(moby->pos).z;
          uVar25 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          dVar24 = (double)FastDiffRots(dVar23,uVar25);
          dVar23 = dVar26;
          if (dVar29 < dVar24) {
            dVar23 = dVar22;
          }
          dVar23 = (double)FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)g_FrameTime * dVar23));
          (moby->rotation).z = (float)dVar23;
          FUN_005e81f0(&local_100,lVar18,pvVar19);
          FUN_005e7f98(dVar27,&local_100,&local_100);
          FUN_005e7f54(&local_100,&local_100,pvVar19);
          local_f8 = (float)dVar28;
        }
      }
      pMVar7 = (MobyInstance *)pMVar7->pChain;
    } while (pMVar7 != (MobyInstance *)0x0);
  }
  (moby->pos).x = local_100;
  (moby->pos).y = local_fc;
  (moby->pos).z = local_f8;
  (moby->pos).w = local_f4;
  dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0x120);
  fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
  *(float *)((int)pvVar5 + 0x198) = fVar3;
  fVar3 = (moby->pos).z + fVar3;
  (moby->pos).z = fVar3;
  if ((double)fVar3 < dVar26) {
    *(undefined4 *)((int)pvVar5 + 0x198) = 0;
    (moby->pos).z = (float)dVar26;
  }
  if (*(uint *)((int)pvVar5 + 0x218) == 0) {
LAB_00235480:
    moby->state = '\x05';
    if (moby->animationId != '\x02') {
      local_90 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar11,2,0,(int)(animationSpeed * 3.5));
    }
  }
  else {
    dVar26 = (double)FUN_005e8588(lVar18,(ulonglong)*(uint *)((int)pvVar5 + 0x218) + 0x10);
    dVar29 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x216));
    if (dVar29 < dVar26) goto LAB_00235480;
  }
  moby->setByGroup = '\0';
LAB_002354d4:
  MB_ColorDyingMoby(lVar11,uVar21 + 0x110);
  return;
}


