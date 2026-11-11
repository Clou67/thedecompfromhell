// game/update/moby577.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x3c8180-0x3cafa4
#include <math.h>
#include <stdlib.h>
#include "game/update/moby577.h"
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

// 0x03c8180 (0x1d4 bytes)
undefined8
M577_003c8180(double param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  MobyModeBit MVar2;
  ushort uVar3;
  void *pvVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  MobyInstance *pMVar10;
  ushort *puVar11;
  double dVar12;
  
  pMVar10 = g_MobyInstance;
  puVar11 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar11 != (ushort *)0x0) {
    do {
      uVar6 = *puVar11 & 0x7fff;
      if ((g_MobyInstance[uVar6].oClass == 0x240) && (g_MobyInstance[uVar6].state == '\a')) {
        MVar2 = g_MobyInstance[uVar6].modeBits;
        pMVar9 = g_MobyInstance + uVar6;
        g_MobyInstance[uVar6].enabled = '\x01';
        pvVar4 = pMVar10[uVar6].pVar;
        pMVar10[uVar6].collision = pMVar9->pClass->collision;
        pMVar10[uVar6].modeBits =
             MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
        pMVar10[uVar6].pos.x = *param_3;
        pMVar10[uVar6].pos.y = param_3[1];
        pMVar10[uVar6].pos.z = param_3[2];
        fVar1 = param_3[3];
        pMVar10[uVar6].state = '\x01';
        pMVar10[uVar6].pos.w = fVar1;
        *(undefined4 *)((int)pvVar4 + 500) = 0x3f800000;
        fVar1 = *param_4 - *param_3;
        *(float *)((int)pvVar4 + 0x1d0) = fVar1;
        fVar5 = param_4[1] - param_3[1];
        *(float *)((int)pvVar4 + 0x1d4) = fVar5;
        dVar12 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5);
        *(float *)((int)pvVar4 + 0x1d8) = param_4[2] - param_3[2];
        *(float *)((int)pvVar4 + 0x1dc) = param_4[3];
        *(undefined4 *)((int)pvVar4 + 0x1d8) = 0;
        fVar1 = fVar1 * (float)(param_1 / dVar12);
        fVar5 = fVar5 * (float)(param_1 / dVar12);
        fVar7 = 0.0;
        if (0.0 - dVar12 < 0.0) {
          fVar7 = fVar1;
        }
        fVar8 = 0.0;
        if (0.0 - dVar12 < 0.0) {
          fVar8 = fVar5;
        }
        if (dVar12 - 0.0 < 0.0) {
          fVar7 = fVar1;
        }
        if (dVar12 - 0.0 < 0.0) {
          fVar8 = fVar5;
        }
        *(float *)((int)pvVar4 + 0x1d0) = fVar7;
        *(float *)((int)pvVar4 + 0x1d4) = fVar8;
        dVar12 = (double)MB_computeLobVelocity
                                   (param_1,(double)(DAT_0071f418 * -10.0),param_3,param_4,param_4,0
                                    ,0);
        *(float *)((int)pvVar4 + 0x1d8) = (float)dVar12;
        dVar12 = (double)MB_randRangeSigned(0x402e000000000000,0x4046800000000000);
        *(float *)((int)pvVar4 + 0x1ec) = (float)(dVar12 * 0.01745329238474369);
        return 1;
      }
      uVar3 = *puVar11;
      puVar11 = puVar11 + 1;
    } while (-1 < (short)uVar3);
  }
  return 0;
}


// 0x03c8354 (0x7c bytes)
short M577_003c8354(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 == (ushort *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = 0;
    do {
      if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == 0x240) &&
         (g_MobyInstance[*puVar2 & 0x7fff].state != '\a')) {
        sVar3 = sVar3 + 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return sVar3;
}


// 0x03c83e0 (0x328 bytes)
void M577_003c83e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar22 = uVar16 - 0x160;
  puVar6 = (ulonglong *)lVar22;
  *puVar6 = uVar16;
  puVar6[0x2e] = in_LR;
  puVar6[0x2a] = in_f30;
  puVar6[0x2b] = in_f31;
  puVar6[0x29] = unaff_r31;
  fVar12 = DAT_008460f8;
  iVar5 = *(int *)(param_1 + 0x78);
  dVar30 = 1.0;
  fVar1 = *(float *)(iVar5 + 500);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar8 = GameCamera.posX - fVar2;
  fVar7 = fVar1 + 1.0 + DAT_008460f4;
  fVar9 = fVar7 * fVar8;
  fVar10 = fVar7 * (GameCamera.posY - fVar3);
  puVar6[0x28] = unaff_r30;
  fVar12 = (1.0 - fVar1) + fVar12;
  fVar11 = fVar7 * fVar9;
  fVar14 = -(fVar10 * fVar7);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar6 + 0x14) = fVar2;
  fVar2 = SQRT(fVar9 * fVar9 + --(fVar10 * fVar10));
  *(float *)((int)puVar6 + 0xa4) = fVar3;
  fVar15 = DAT_008460f0;
  uVar19 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar6 + 0x15) = fVar1;
  *(undefined4 *)((int)puVar6 + 0xac) = uVar19;
  fVar3 = SQRT(fVar14 * fVar14 + --(fVar11 * fVar11));
  fVar14 = fVar12 / fVar2;
  *(float *)(puVar6 + 0x15) = fVar1 - fVar15;
  dVar31 = 0.0;
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0x94) = 0;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  *(float *)(puVar6 + 0x13) = fVar7;
  *(float *)(puVar6 + 0xe) = fVar8;
  *(undefined4 *)(puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(undefined4 *)((int)puVar6 + 0x7c) = 0;
  *(undefined4 *)((int)puVar6 + 0x8c) = 0;
  uVar19 = DAT_008460ec;
  fVar12 = fVar12 / fVar3;
  dVar29 = (double)(fVar9 * fVar14);
  dVar28 = -(double)(fVar10 * fVar14);
  dVar27 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)((int)puVar6 + 0x84) = (float)dVar27;
  dVar29 = -(double)(fVar11 * fVar12);
  dVar28 = -(double)(fVar10 * fVar7 * fVar12);
  *(float *)(puVar6 + 0x10) = (float)dVar26;
  dVar27 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)(puVar6 + 0xe) = (float)dVar27;
  *(float *)((int)puVar6 + 0x74) = (float)dVar26;
  uVar17 = GetEffectTex(uVar19);
  puVar6[0x25] = uVar17;
  uVar17 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_010c9f60,DAT_008460dc,DAT_010c9f64,DAT_008460e0,0x80);
  puVar6[0x27] = uVar17;
  uVar19 = FastLerpColor((double)*(float *)(iVar5 + 500),DAT_008460e4,DAT_008460e8);
  lVar18 = uVar16 - 0xb0;
  uVar25 = 0;
  puVar21 = &DAT_008460fc;
  puVar20 = &DAT_00846100;
  lVar23 = lVar22;
  lVar24 = lVar22;
  do {
    uVar4 = *puVar20;
    *(undefined4 *)((int)lVar24 + 0x100) = *puVar21;
    *(undefined4 *)((int)lVar24 + 0x104) = uVar4;
    puVar13 = (undefined4 *)lVar18;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    dVar27 = dVar31;
    if ((uVar25 & 1) != 0) {
      dVar27 = dVar30;
    }
    iVar5 = (int)lVar23;
    *(float *)(iVar5 + 0xb8) = (float)dVar27;
    dVar27 = -1.0;
    if ((int)uVar25 < 2) {
      dVar27 = dVar30;
    }
    *(float *)(iVar5 + 0xb4) = (float)dVar27;
    uVar25 = uVar25 + 1;
    puVar21 = puVar21 + 2;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    *(undefined4 *)((int)lVar22 + 0xf0) = uVar19;
    puVar20 = puVar20 + 2;
    lVar18 = lVar18 + 0x10;
    lVar24 = lVar24 + 8;
    lVar23 = lVar23 + 0x10;
    lVar22 = lVar22 + 4;
  } while ((int)uVar25 < 4);
  FastDrawQuad(uVar16 - 0xb0,uVar16 - 0xf0,0,EffectTexHeaders,9);
  return;
}


// 0x03c8708 (0x58 bytes)
void M577_003c8708(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\x06') {
      param_1->state = '\x02';
    }
  }
  else {
    param_1->state = '\x06';
  }
  return;
}


// 0x03c8760 (0x58 bytes)
void M577_003c8760(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x06') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 6;
  }
  return;
}


// 0x03c87b8 (0x58 bytes)
void M577_003c87b8(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x06') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 6;
  }
  return;
}


// 0x03c8810 (0x38 bytes)
void M577_003c8810(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 6;
  return;
}


// 0x03c8848 (0x40 bytes)
longlong M577_003c8848(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03c8890 (0x94 bytes)
void M577_003c8890(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 7;
  if (*(char *)(param_1 + 0x53) != '\0') {
    MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 1;
  return;
}


// 0x03c8924 (0x14 bytes)
void M577_003c8924(void)

{
  DAT_00846168 = 0x10000;
  return;
}


// 0x03c8938 (0x50 bytes)
longlong M577_003c8938(int param_1,int param_2,int param_3)

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


// 0x03c8a10 (0x2594 bytes)
/* Moby 577 */

void UpdateMoby_577(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  f32 fVar6;
  MobyInstance *pMVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  undefined2 uVar16;
  int iVar13;
  short sVar17;
  uint uVar14;
  ulonglong uVar11;
  undefined4 uVar15;
  undefined8 uVar12;
  int unused;
  longlong lVar18;
  vec4 *pvVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  f32 local_230;
  f32 local_22c;
  GPiece<16> auStack_220;
  GPiece<16> local_210;
  GPiece<16> auStack_200;
  GPiece<16> auStack_1f0;
  GPiece<16> auStack_1e0;
  GPiece<16> auStack_1d0;
  GPiece<16> auStack_1c0;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  Vec4 local_1a0;
  GPiece<16> auStack_190;
  float local_180;
  float local_17c;
  undefined4 local_178;
  float afStack_170 [2];
  float local_168;
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  GPiece<16> auStack_140;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  undefined4 local_118;
  Vec4 local_110;
  GPiece<16> auStack_100;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  f32 local_e0;
  f32 local_dc;
  float local_d8;
  f32 local_d4;
  Vec4 local_d0 [4];
  MobyInstance *local_90;
  GPiece<4> auStack_80;
  undefined4 local_7c;
  float local_78 [2];
  longlong local_70;
  
  lVar10 = (longlong)(int)moby;
  dVar26 = 1.5;
  pvVar5 = moby->pVar;
  uVar21 = ZEXT48(pvVar5);
  DoManipulator(0x3ff8000000000000,moby,0,(Manipulator *)((int)pvVar5 + 0x230));
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
  dVar25 = 4.0;
  MB_getTarget
            ((double)(*(float *)((int)pvVar5 + 0x1fc) + 4.0),lVar10,&DAT_003c8988,local_d0);
  lVar18 = lVar10 + 0x10;
  FUN_005e7e98(&local_230,lVar18);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar5 + 0x214) = uVar16;
  }
  *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  FastDecTimerS16(uVar21 + 0x208);
  iVar13 = FastDecTimerS16(uVar21 + 0x214);
  uVar15 = 0x41c00000;
  if (iVar13 != 0) {
    uVar15 = 0x41400000;
  }
  *(undefined4 *)((int)pvVar5 + 0x1fc) = uVar15;
  dVar28 = 0.0;
  local_7c = 0;
  iVar13 = MB_damage(lVar10,0x330000,0);
  unused = 0;
  MB_HandleDamage(moby,iVar13,uVar21 + 0x20,0,auStack_80,&local_7c,0,4);
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
      dVar22 = (double)FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                                    (double)((moby->pos).y - local_d0[0].y));
      local_78[0] = (float)dVar22;
      fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar13 + 0x2c);
      *(undefined4 *)((int)pvVar5 + 0x130) = 0x3c03126f;
      *(undefined4 *)((int)pvVar5 + 0x134) = 0x3a03126f;
      *(float *)((int)pvVar5 + 0x20) = fVar3;
      fVar9 = g_FrameTime;
      fVar8 = DAT_00846190 * g_FrameTime;
      *(undefined4 *)((int)pvVar5 + 0x144) = 9;
      *(float *)((int)pvVar5 + 0x138) = fVar8;
      fVar8 = DAT_0084618c;
      *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
      *(float *)((int)pvVar5 + 0x13c) = fVar8 * fVar9;
      if (dVar28 < (double)fVar3) {
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_78,
                   uVar21 + 0x138,uVar21 + 0x13c);
        MB_StartKick((double)local_78[0],lVar10,uVar21 + 0x120);
        unused = 6;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\x06';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0xfa;
        uVar16 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar5 + 0x26) = uVar16;
        MB_UpdateLightsTransition(lVar10,uVar21 + 0x110);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = g_FrameTime * 11.0;
        *(float *)((int)pvVar5 + 0x138) = fVar3;
        *(float *)((int)pvVar5 + 0x13c) = fVar3;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_78,
                   uVar21 + 0x138,uVar21 + 0x13c);
        MB_StartKick((double)local_78[0],lVar10,uVar21 + 0x120);
        unused = 0x41900000;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41900000;
        moby->state = 'c';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0x78;
        MB_UpdateLightsTransition(lVar10,uVar21 + 0x110);
        MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar21 + 0x1d0,lVar18);
        *(undefined1 *)((int)pvVar5 + 0x29) = 0;
        if (*(short *)((int)pvVar5 + 0x20a) == 0) {
          fVar3 = (moby->pos).z;
          moby->state = '\x0e';
          uVar2 = moby->animationId;
          (moby->pos).z = fVar3 + 6.0;
          if (uVar2 != '\0') {
            MB_SetAnimation(lVar10,0,0,0);
          }
        }
        else {
          moby->state = '\x01';
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar10,4,0,0);
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
        fVar3 = g_FrameTime;
        *(undefined4 *)((int)pvVar5 + 0x180) = 0x38d;
        *(float *)((int)pvVar5 + 0x1a4) = *(float *)((int)pvVar5 + 0x204) * fVar3;
        uVar14 = rand();
        if ((uVar14 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar5 + 0xd0) = &DAT_0084619c;
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_1f0,local_d0,lVar18);
        dVar26 = (double)FUN_005e8030(auStack_1f0);
        if ((((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar25) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_d0[0].z))) ||
           (iVar13 = MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
            uVar11 = MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar11 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)MB_randRangeFloat(30.0,90.0);
            local_70 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,2,0,uVar12);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_1f0);
            if (((double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0) < dVar26) &&
               ((*(short *)((int)pvVar5 + 0x20a) == 0 &&
                (moby->state = '\x10', moby->animationId != '\0')))) {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,0,0,uVar12);
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x05') {
            uVar12 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar10,5,0,uVar12);
          }
        }
      }
      else if (bVar1 < 3) {
        uVar12 = FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                              (double)((moby->pos).y - local_d0[0].y));
        OrganicDeltAngSpeed
                  (uVar12,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar10,
                   &DAT_003c8988,uVar21 + 0x1f0);
        FUN_005e81f0(auStack_1c0,local_d0,lVar18);
        dVar26 = (double)FUN_005e8030(auStack_1c0);
        if ((((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_d0[0].z))) ||
           (iVar13 = MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
            uVar11 = MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar11 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)MB_randRangeFloat(30.0,90.0);
            local_70 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,2,0,uVar12);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_1c0);
            if (((double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0) < dVar26) &&
               ((*(short *)((int)pvVar5 + 0x20a) == 0 &&
                (moby->state = '\x10', moby->animationId != '\0')))) {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,0,0,uVar12);
            }
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          uVar11 = MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar11 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_70 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            uVar12 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar10,2,0,uVar12);
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,4,0,uVar12);
        }
      }
      else {
        dVar22 = ABS((double)((moby->pos).z - local_d0[0].z));
        dVar28 = (double)FUN_005e8588(lVar18,local_d0);
        dVar28 = (double)(float)(dVar22 / dVar28);
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          FUN_005e7e98(&local_1a0,local_d0);
        }
        else {
          Path_PickNextNode(moby,Splines[*(int *)((int)pvVar5 + 0x21c)],local_d0,&local_1a0);
        }
        dVar22 = (double)FUN_005e8338((double)(local_1a0.x - (moby->pos).x),
                                      (double)(local_1a0.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  ((double)(float)(dVar22 + (double)*(float *)((int)pvVar5 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10);
        dVar22 = (double)cosf((moby->rotation).z);
        dVar24 = 2.0;
        local_1b0 = (float)(dVar22 * 2.0);
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_1ac = (float)(dVar22 * dVar24);
        local_1a8 = 0;
        dVar22 = 1.0;
        uVar11 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_1b0
                            ,&local_1a0);
        iVar13 = FastDecTimerS32(uVar21 + 0x210);
        if (iVar13 != 0) {
          dVar24 = (double)MB_randRangeFloat(30.0,90.0);
          local_70 = (longlong)(int)dVar24;
          uVar15 = idol::GetAnimDuration((int)dVar24);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          *(float *)((int)pvVar5 + 500) = -*(float *)((int)pvVar5 + 500);
        }
        FUN_005e81f0(auStack_190,local_d0,uVar21 + 0x1d0);
        dVar24 = (double)FUN_005e8588(lVar18,local_d0);
        uVar2 = moby->animationId;
        if ((dVar26 <= dVar24) || ((uVar11 & 2) != 0)) {
          if ((dVar22 < dVar28) || ((uVar11 & 2) != 0)) {
            (moby->pos).x = local_230;
            (moby->pos).y = local_22c;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,5,0,uVar12);
            }
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_190);
            if (((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar25) <= dVar26) ||
               (8.0 <= ABS((moby->pos).z - local_d0[0].z))) {
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
          if (uVar2 != '\x03') {
            uVar12 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar10,3,0,uVar12);
          }
        }
        GetGroundZ(0x3fe0000000000000,lVar18,0);
        iVar13 = CollHotspot();
        if (((iVar13 == 0) || (iVar13 = CollHotspot(), iVar13 == 8)) &&
           (moby->state = '\x10', moby->animationId != '\0')) {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,0,0,uVar12);
        }
        moby->setByGroup = '\0';
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar12 = FUN_005e8338((double)(local_d0[0].x - (moby->pos).x),
                              (double)(local_d0[0].y - (moby->pos).y));
        dVar25 = 0.20000000298023224;
        OrganicDeltAngSpeed
                  (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10,
                   &DAT_003c8988,uVar21 + 0x1f0);
        if (((moby->updateId == moby->animationId) &&
            (dVar28 = (double)BlendAnimFrame(moby), dVar28 == 13.0)) &&
           ((ABS((moby->pos).z - local_d0[0].z) < 0.5 &&
            (dVar28 = (double)FUN_005e8588(lVar18,local_d0), dVar28 < 2.0)))) {
          dVar28 = (double)FUN_005e8338((double)(local_d0[0].x - (moby->pos).x),
                                        (double)(local_d0[0].y - (moby->pos).y));
          dVar28 = (double)FastSubRots((float)dVar28,(moby->rotation).z);
          if (dVar28 < 0.2617993950843811) {
            dVar28 = (double)cosf((moby->rotation).z);
            local_180 = (float)(dVar28 * dVar25);
            dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_17c = (float)(dVar28 * dVar25);
            local_178 = 0;
            FUN_005e7e98(afStack_170,local_d0);
            local_168 = local_168 + 0.75;
            if (local_90 != (MobyInstance *)0x0) {
              CollDamageMobyDirect(1.0,local_90,moby,1,unused,afStack_170,&local_180);
            }
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar25 = (double)FUN_005e8588(lVar18,local_d0), dVar26 < dVar25)) &&
           (moby->state = '\x03', moby->animationId != '\x02')) {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,2,0,uVar12);
        }
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0);
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
          FUN_005e7e98(&local_150,uVar21 + 0x1d0);
        }
        else {
          Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                     &local_150);
        }
        uVar12 = FUN_005e8338((double)(local_150.x - (moby->pos).x),
                              (double)(local_150.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar12,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar10);
        dVar26 = (double)cosf((moby->rotation).z);
        dVar25 = 2.0;
        local_160 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_15c = (float)(dVar26 * dVar25);
        local_158 = 0;
        uVar11 = MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_160
                            ,&local_150);
        dVar26 = (double)FUN_005e8588(lVar18,uVar21 + 0x1d0);
        if ((dVar26 < dVar25) && (moby->state = '\x01', moby->animationId != '\x04')) {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,4,0,uVar12);
        }
        FUN_005e81f0(auStack_140,local_d0,uVar21 + 0x1d0);
        dVar26 = (double)FUN_005e8030(auStack_140);
        if ((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,2,0,uVar12);
            }
          }
          else if ((uVar11 & 2) != 0) {
            (moby->pos).x = local_230;
            uVar2 = moby->animationId;
            (moby->pos).y = local_22c;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              uVar12 = idol::GetAnimDuration(3);
              MB_SetAnimation(lVar10,5,0,uVar12);
            }
          }
        }
        else {
          if (moby->group != -1) {
            MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            uVar12 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar10,2,0,uVar12);
          }
        }
        GetGroundZ(0x3fe0000000000000,lVar18,0);
        iVar13 = CollHotspot();
        if (((iVar13 == 0) || (iVar13 = CollHotspot(), iVar13 == 8)) &&
           (moby->state = '\x10', moby->animationId != '\0')) {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,0,0,uVar12);
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
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,2,0,uVar12);
          return;
        }
        fVar6 = (moby->pos).z;
        uVar14 = (int)fVar6 >> 0x1f;
        if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
          MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      iVar13 = FUN_0048c188(lVar10,uVar21 + 0x120);
      if (iVar13 != 0) {
        moby->state = '\x0e';
        uVar15 = idol::GetAnimDuration(0xb4);
        *(undefined4 *)((int)pvVar5 + 0x228) = uVar15;
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar10,0,0,0);
        }
        *(undefined2 *)((int)pvVar5 + 200) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_1e0,local_d0,lVar18);
      dVar26 = (double)FUN_005e8030(auStack_1e0);
      if (((dVar26 < (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) - dVar25)) &&
          (ABS((moby->pos).z - local_d0[0].z) < 8.0)) &&
         (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
        fVar3 = (moby->pos).z;
        uVar2 = moby->animationId;
        moby->state = '\x02';
        (moby->pos).z = fVar3 + 1.0;
        if (uVar2 != '\x05') {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,5,0,uVar12);
        }
      }
    }
    goto LAB_003caf48;
  }
  if (0xe < bVar1) {
    if (bVar1 < 0x12) {
      if (bVar1 < 0x10) {
        uVar12 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1e0) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar5 + 0x1e4) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10);
        lVar20 = uVar21 + 0x40;
        FUN_005e81f0(lVar20,uVar21 + 0x1e0,lVar18);
        ClampVec3Magnitude
                  ((double)(float)((double)g_FrameTime * dVar25),(Vec4 *)lVar20);
        FUN_005e7f54(auStack_200,lVar20,lVar18);
        iVar13 = CollSphere(0x3fd99999a0000000,auStack_200);
        if (iVar13 == 0) {
          FUN_005e7e98(lVar18,auStack_200);
        }
        else {
          FUN_005e7e70(lVar20);
          moby->state = '\x0e';
        }
        dVar26 = (double)FUN_005e8030(lVar20);
        if (dVar26 == dVar28) {
          moby->state = '\x0e';
        }
      }
      else if (bVar1 < 0x11) {
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0);
        Delt(g_FrameTime * 8.0,DAT_0071f418 * 10.8,(float *)((int)pvVar5 + 0x48)
                      );
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        (moby->pos).z = fVar3;
        if ((float)(dVar26 + 6.0) <= fVar3) {
          (moby->pos).z = (float)(dVar26 + 6.0);
          moby->state = '\x0e';
          uVar15 = idol::GetAnimDuration(0xb4);
          *(undefined4 *)((int)pvVar5 + 0x228) = uVar15;
          FUN_005e7e70(uVar21 + 0x40);
        }
      }
      else {
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0);
        Delt(g_FrameTime * -8.0,DAT_0071f418 * 10.8,
                       (float *)((int)pvVar5 + 0x48));
        uVar2 = moby->animationId;
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        dVar25 = (double)fVar3;
        (moby->pos).z = fVar3;
        if (((uVar2 != '\x01') &&
            ((float)(dVar25 - dVar26) <= g_FrameTime * 8.0 * animationSpeed * 45.0)) &&
           (uVar2 != '\x01')) {
          uVar12 = idol::GetAnimDuration(5);
          MB_SetAnimation(lVar10,1,0,uVar12);
          dVar25 = (double)(moby->pos).z;
        }
        if (dVar25 <= dVar26) {
          (moby->pos).z = (float)dVar26;
          uVar11 = MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar11 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)MB_randRangeFloat(30.0,90.0);
          local_70 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          FUN_005e7e70(uVar21 + 0x40);
          if (moby->animationId != '\x02') {
            uVar12 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar10,2,0,uVar12);
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
        FUN_005e7e70(auStack_130);
        iVar13 = idol::GetAnimDuration(1);
        local_70 = (longlong)(int)((float)(longlong)iVar13 * 60.0);
        iVar13 = M577_003c8938
                           (&DAT_010c9f68,3,(int)((float)(longlong)iVar13 * 60.0));
        if (-1 < iVar13) {
          MB_SpawnExplosionSparks
                    (0x3fe0000000000000,0x402a000000000000,lVar10,lVar18,&DAT_003c8988,4);
        }
        lVar20 = lVar10 + 0x40;
        MB_SpawnDebrisMoby(dVar28,lVar10,0x6d3,lVar18,lVar20,0,0);
        MB_SpawnDebrisMoby(dVar28,lVar10,0x6d4,lVar18,lVar20,0,0);
        MB_SpawnDebrisMoby(dVar28,lVar10,0x6d5,lVar18,lVar20,0,0);
        DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        lVar20 = lVar10 + 0x40;
        MB_SpawnDebrisMoby(dVar28,lVar10,0x6d3,lVar18,lVar20,0,0);
        MB_SpawnDebrisMoby(dVar28,lVar10,0x6d4,lVar18,lVar20,0,0);
        MB_SpawnDebrisMoby(dVar28,lVar10,0x6d5,lVar18,lVar20,0,0);
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_003caf48;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 0xb) {
      uVar12 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1d0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar5 + 0x1d4) - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10,
                 &DAT_003c8988,uVar21 + 0x1f0);
      FUN_005e81f0(auStack_1d0,local_d0,uVar21 + 0x1d0);
      dVar26 = (double)FUN_005e8030(auStack_1d0);
      if (((dVar26 < (double)*(float *)((int)pvVar5 + 0x1fc)) &&
          (ABS(*(float *)((int)pvVar5 + 0x1d8) - local_d0[0].z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          MB_SetGroupField(moby->group,2);
        }
        if (moby->animationId != '\x06') {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,6,0,uVar12);
        }
        fVar3 = DAT_00846198;
        dVar26 = (double)DAT_00846198;
        *(undefined4 *)((int)pvVar5 + 0x134) = 0;
        *(float *)((int)pvVar5 + 0x130) = fVar3;
        fVar3 = DAT_00846194 * g_FrameTime;
        *(float *)((int)pvVar5 + 0x138) = fVar3;
        dVar26 = (double)MB_computeLobVelocity
                                   ((double)fVar3,-dVar26,lVar18,uVar21 + 0x1d0);
        *(float *)((int)pvVar5 + 0x13c) = (float)dVar26;
        *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
        fVar3 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar5 + 0x144) = 0xd;
        MB_StartKick((double)fVar3,lVar10,uVar21 + 0x120,0xd,6,1,0);
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
        local_70 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        if (moby->animationId == '\x02') {
          return;
        }
        uVar12 = idol::GetAnimDuration(3);
        MB_SetAnimation(lVar10,2,8,uVar12);
        return;
      }
      fVar6 = (moby->pos).z;
      uVar14 = (int)fVar6 >> 0x1f;
      if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
        MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_003caf48;
  }
  if (bVar1 < 0xd) {
    dVar28 = ABS((double)((moby->pos).z - local_d0[0].z));
    dVar25 = (double)FUN_005e8588(lVar18,local_d0);
    dVar25 = (double)(float)(dVar28 / dVar25);
    if (*(int *)((int)pvVar5 + 0x21c) == -1) {
      FUN_005e7e98(&local_110,uVar21 + 0x1d0);
    }
    else {
      Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                 &local_110);
    }
    uVar12 = FUN_005e8338((double)(local_110.x - (moby->pos).x),
                          (double)(local_110.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10);
    dVar28 = (double)cosf((moby->rotation).z);
    dVar22 = 2.0;
    local_120 = (float)(dVar28 * 2.0);
    dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_11c = (float)(dVar28 * dVar22);
    local_118 = 0;
    dVar22 = 1.0;
    uVar11 = MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_120,
                        &local_110);
    FUN_005e81f0(auStack_100,local_d0,uVar21 + 0x1d0);
    dVar28 = (double)FUN_005e8588(lVar18,local_d0);
    if ((dVar26 <= dVar28) || (dVar22 < dVar25)) {
      if ((dVar22 < dVar25) || ((uVar11 & 2) != 0)) {
        dVar26 = (double)FUN_005e8588(lVar18,local_d0);
        if (dVar26 <= (double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0)) {
          if ((moby->field43_0x70 & 2U) != 0) {
            MB_randInt(4);
            iVar13 = MB_randInt(4);
            local_70 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation
                      (lVar10,(ZERO_MASK(iVar13) & 1U) + 4,0,
                       (int)(animationSpeed * 3.5));
          }
        }
        else {
          moby->state = '\x10';
          if (moby->animationId != '\0') {
            uVar12 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar10,0,0,uVar12);
          }
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x02') {
          uVar12 = idol::GetAnimDuration(3);
          MB_SetAnimation(lVar10,2,0,uVar12);
        }
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x03') {
        uVar12 = idol::GetAnimDuration(3);
        MB_SetAnimation(lVar10,3,0,uVar12);
      }
    }
    GetGroundZ(0x3fe0000000000000,lVar18,0);
    iVar13 = CollHotspot();
    if (((iVar13 == 0) || (iVar13 = CollHotspot(), iVar13 == 8)) &&
       (moby->state = '\x10', moby->animationId != '\0')) {
      local_70 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 3.5));
    }
    moby->setByGroup = '\0';
    goto LAB_003caf48;
  }
  if (0xd < bVar1) {
    FUN_005e81f0(auStack_220,local_d0,lVar18);
    iVar13 = FastDecTimerS32(uVar21 + 0x228);
    if ((((iVar13 == 0) ||
         (dVar26 = (double)FUN_005e8030(auStack_220),
         (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar25) <= dVar26)) ||
        (8.0 <= ABS((moby->pos).z - local_d0[0].z))) ||
       (iVar13 = MB_randInt(0x13), iVar13 != 0)) {
      if (((*(int *)((int)pvVar5 + 0x228) == 0) && (moby->setByGroup == '\x01')) &&
         (iVar13 = MB_randInt(0x13), iVar13 == 0)) {
        uVar11 = MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar11 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)MB_randRangeFloat(30.0,90.0);
        local_70 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        moby->state = '\x11';
        FUN_005e7e70(uVar21 + 0x40);
        moby->setByGroup = '\0';
      }
      else {
        iVar13 = FastDecTimerS32(uVar21 + 0x20c);
        if (iVar13 != 0) {
          uVar15 = idol::GetAnimDuration(0x78);
          *(undefined4 *)((int)pvVar5 + 0x20c) = uVar15;
          MB_randRangeFloat((float)dVar28,3.0);
          dVar26 = (double)MB_randRot();
          cosf((float)dVar26);
          FUN_005e8128(dVar26);
          MB_randRangeFloat(5.0,7.0);
          FUN_005e7f54(uVar21 + 0x1e0,local_210,uVar21 + 0x1d0);
          moby->state = '\x0f';
        }
      }
    }
    else {
      moby->state = '\x11';
    }
    goto LAB_003caf48;
  }
  if ((moby->updateId != '\x02') && (moby->animationId != '\x02')) {
    local_70 = (longlong)(int)(animationSpeed * 3.5);
    MB_SetAnimation(lVar10,2,0,(int)(animationSpeed * 3.5));
  }
  dVar26 = (double)cosf((moby->rotation).z);
  local_f0 = (float)((double)(*(float *)((int)pvVar5 + 0x204) * g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_e8 = 0;
  local_ec = (float)((double)(*(float *)((int)pvVar5 + 0x204) * g_FrameTime) * dVar26);
  FUN_005e7f54(&local_e0,lVar18,&local_f0);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar22 = 2.0;
    dVar25 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar7 = MobyUpdateChainStart;
    do {
      if (((pMVar7 != moby) && (pMVar7->state < 0x80)) &&
         ((pMVar7->oClass == RATCHET || (pMVar7->oClass == PECKBOT)))) {
        pvVar19 = &pMVar7->pos;
        dVar24 = (double)FUN_005e8588(&local_e0,pvVar19);
        if (dVar24 < dVar22) {
          dVar24 = (double)(moby->rotation).z;
          dVar27 = (double)(moby->pos).z;
          uVar12 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          dVar23 = (double)FastDiffRots(dVar24,uVar12);
          dVar24 = dVar26;
          if (dVar28 < dVar23) {
            dVar24 = dVar25;
          }
          dVar24 = (double)FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)g_FrameTime * dVar24));
          (moby->rotation).z = (float)dVar24;
          FUN_005e81f0(&local_e0,lVar18,pvVar19);
          FUN_005e7f98(dVar22,&local_e0,&local_e0);
          FUN_005e7f54(&local_e0,&local_e0,pvVar19);
          local_d8 = (float)dVar27;
        }
      }
      pMVar7 = (MobyInstance *)pMVar7->pChain;
    } while (pMVar7 != (MobyInstance *)0x0);
  }
  (moby->pos).x = local_e0;
  (moby->pos).y = local_dc;
  (moby->pos).z = local_d8;
  (moby->pos).w = local_d4;
  dVar26 = (double)GetGroundZ(0x3fe0000000000000,lVar18,0);
  fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
  *(float *)((int)pvVar5 + 0x198) = fVar3;
  fVar3 = (moby->pos).z + fVar3;
  (moby->pos).z = fVar3;
  if ((double)fVar3 < dVar26) {
    *(undefined4 *)((int)pvVar5 + 0x198) = 0;
    (moby->pos).z = (float)dVar26;
  }
  if (*(uint *)((int)pvVar5 + 0x218) == 0) {
LAB_003caef0:
    moby->state = '\x05';
    if (moby->animationId != '\x02') {
      local_70 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar10,2,0,(int)(animationSpeed * 3.5));
    }
  }
  else {
    dVar26 = (double)FUN_005e8588(lVar18,(ulonglong)*(uint *)((int)pvVar5 + 0x218) + 0x10);
    dVar25 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x216));
    if (dVar25 < dVar26) goto LAB_003caef0;
  }
  moby->setByGroup = '\0';
LAB_003caf48:
  MB_ColorDyingMoby(lVar10,uVar21 + 0x110);
  MB_SetZBoundsFromGround(lVar10);
  return;
}


