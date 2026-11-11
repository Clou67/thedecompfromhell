// game/update/moby427.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x36da54-0x370f9c
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby427.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby184.h"
#include "game/update/moby499.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x036da54 (0x14 bytes)
void M427_0036da54(void)

{
  DAT_008412a8 = 0x10000;
  return;
}


// 0x036dac0 (0x5b8 bytes)
void M427_0036dac0
               (double param_1,double param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> local_e0;
  GPiece<48> local_d0;
  
  dVar9 = 1.0;
  uVar10 = 0;
  dVar11 = 0.009999999776482582;
  if (0 < param_8) {
    iVar6 = 0;
    uVar12 = 0x3f747ae140000000;
    dVar13 = 0.10000000149011612;
    dVar14 = 1.0199999809265137;
    dVar15 = (double)(float)(param_1 * 210000.0 +
                            (double)((float)(param_2 - param_1) / (float)(longlong)param_8));
    auVar19 = loadVectorLeftIndexed(0x1c,0x36da68);
    auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    do {
      FastIntToDouble(iVar6);
      MB_randRangeSigned(uVar10,uVar12);
      MB_randRangeSigned(uVar10,uVar12);
      MB_randRangeFloat((float)((double)DAT_00841454 * dVar13),DAT_00841454);
      uVar3 = MB_randRange(0x40,0x70);
      MB_randRange(0x40,0x7f);
      uVar8 = MB_randRangeFloat((float)dVar9,(float)dVar14);
      MB_randRange(0xfffffffffffffffe,2);
      uVar8 = SpawnPart_23((double)DAT_0084145c,dVar9,uVar8,dVar15,local_e0);
      iVar7 = (int)uVar8;
      if (iVar7 != 0) {
        iVar5 = MB_randInt(2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar7 + 3) = 0x7e;
          uVar4 = MB_randRange(0x60,0xe0);
          *(uint *)(iVar7 + 4) =
               (uint)((uVar3 & 0xffffffff) << 0x18) |
               (uint)((uVar4 & 0xffffffff) << 0x10) | (uint)((uVar4 & 0xffffffff) << 8) |
               (uint)uVar4;
        }
        auVar16 = ZEXT416(0xffffffff);
        auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
        auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar16);
        auVar16 = ZEXT416(0xffffffff);
        auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
        auVar18 = vectorShiftLeftIntegerWord(auVar16,auVar16);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
        auVar16 = vectorSplatHalfWord(auVar16,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar8);
        *(undefined2 *)(iVar7 + 10) = uVar2;
        *(undefined4 *)(iVar7 + 0x24) = 2;
        *(char *)(iVar7 + 0x2a) = (char)uVar3;
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar18);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
        auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xff;
        uVar1 = storeVectorElementByteIndexed
                          (auVar16 | auVar16 << 8 | auVar16 << 0x10 | auVar16 << 0x18 |
                           auVar16 << 0x20 | auVar16 << 0x28 | auVar16 << 0x30 | auVar16 << 0x38 |
                           auVar16 << 0x40 | auVar16 << 0x48 | auVar16 << 0x50 | auVar16 << 0x58 |
                           auVar16 << 0x60 | auVar16 << 0x68 | auVar16 << 0x70 | auVar16 << 0x78,
                           0x2b,uVar8);
        *(undefined1 *)(iVar7 + 0x2b) = uVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_8);
  }
  MB_randRot();
  MB_randRot();
  dVar14 = 0.029999999329447746;
  MB_randRangeFloat((float)dVar11,0.03);
  dVar13 = 10.5;
  uVar10 = 0x40c3880000000000;
  dVar9 = 20.5;
  MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
  SpawnPart_21(uVar10,param_4,local_d0,0x4f007fff,0x1fffffff);
  MB_randRot();
  MB_randRot();
  MB_randRangeFloat((float)dVar11,(float)dVar14);
  uVar10 = 0x40d3880000000000;
  MB_randRange
            ((int)((double)animationSpeed * dVar13),(int)((double)animationSpeed * dVar9));
  SpawnPart_21(uVar10,param_5,local_d0,0x4f007fff,0x1fffffff);
  return;
}


// 0x036e080 (0x198 bytes)
void M427_0036e080
               (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  GPiece<16> local_50;
  GPiece<64> local_40;
  
  iVar1 = (int)(param_3 << 4);
  M427_0036dac0((double)(*(float *)(&DAT_008412dc + (int)(param_2 << 4)) * DAT_00841450),
                (double)(*(float *)(&DAT_008412dc + iVar1) * DAT_00841450),param_1,local_50,local_40
                ,param_4,iVar1 + 0x8412d0,param_4);
  return;
}


// 0x036e218 (0x1ac bytes)
void M427_0036e218(undefined8 param_1)

{
  M427_0036e080(param_1,0,1,DAT_00841460);
  M427_0036e080(param_1,2,3,DAT_00841464);
  M427_0036e080(param_1,4,5,DAT_00841468);
  M427_0036e080(param_1,5,6,DAT_0084146c);
  M427_0036e080(param_1,6,7,DAT_00841470);
  M427_0036e080(param_1,8,9,DAT_00841468);
  M427_0036e080(param_1,9,10,DAT_0084146c);
  M427_0036e080(param_1,10,0xb,DAT_00841470);
  M427_0036e080(param_1,0xc,0xd,DAT_00841474);
  M427_0036e080(param_1,0xe,0xf,DAT_00841474);
  M427_0036e080(param_1,0x10,0x11,DAT_00841478);
  M427_0036e080(param_1,0x14,0x15,DAT_00841478);
  M427_0036e080(param_1,0x12,0x13,DAT_0084147c);
  M427_0036e080(param_1,0x16,0x17,DAT_0084147c);
  return;
}


// 0x036e3c4 (0x1d4 bytes)
void M427_0036e3c4(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  moby = *(MobyInstance **)((int)param_1->pVar + 0xf8);
  if (moby != (MobyInstance *)0x0) {
    DeleteMoby(moby);
  }
  M427_0036e080(param_1,0,1,DAT_00841460);
  M427_0036e080(param_1,2,3,DAT_00841464);
  M427_0036e080(param_1,4,5,DAT_00841468);
  M427_0036e080(param_1,5,6,DAT_0084146c);
  M427_0036e080(param_1,6,7,DAT_00841470);
  M427_0036e080(param_1,8,9,DAT_00841468);
  M427_0036e080(param_1,9,10,DAT_0084146c);
  M427_0036e080(param_1,10,0xb,DAT_00841470);
  M427_0036e080(param_1,0xc,0xd,DAT_00841474);
  M427_0036e080(param_1,0xe,0xf,DAT_00841474);
  M427_0036e080(param_1,0x10,0x11,DAT_00841478);
  M427_0036e080(param_1,0x14,0x15,DAT_00841478);
  M427_0036e080(param_1,0x12,0x13,DAT_0084147c);
  M427_0036e080(param_1,0x16,0x17,DAT_0084147c);
  DeleteMoby(param_1);
  return;
}


// 0x036e680 (0x291c bytes)
// strings: 00656740: 'moby 427, instance %d requires both path fields to run!!! DELETING MOBY FROM LEVEL!!\n'

/* WARNING: Type propagation algorithm not settling */
/* Moby 427 */

void UpdateMoby_427(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  MobyInstance *pMVar10;
  int *piVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  uint uVar19;
  undefined8 uVar17;
  longlong lVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  ushort uVar24;
  undefined4 uVar23;
  longlong lVar25;
  int *piVar26;
  ulonglong uVar27;
  u8 uVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> local_240;
  GPiece<16> local_230;
  GPiece<16> local_220;
  GPiece<16> local_210;
  Vec4 local_200;
  float local_1f0;
  float local_1ec;
  f32 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  f32 local_1b8;
  GPiece<16> local_1b0;
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 local_194;
  MobyInstance *local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  Vec4 aVStack_170 [3];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  MobyInstance *local_f0;
  GPiece<4> auStack_e0;
  float local_dc;
  float local_d8 [4];
  longlong local_c8;
  
  lVar16 = (longlong)(int)moby;
  pvVar9 = moby->pVar;
  uVar27 = ZEXT48(pvVar9);
  iVar22 = 0;
  if ((*(int *)((int)pvVar9 + 0x38) != 0) || (*(char *)((int)pvVar9 + 0xfe) != '\0')) {
    iVar22 = 1;
  }
  MB_SetScaleCheat(0x4008000000000000,uVar27 + 0x110);
  if ((moby->enabled != '\0') &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1) < 27.0)) {
    MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x15';
  }
  if (iVar22 == 0) {
    fVar1 = *(float *)((int)pvVar9 + 0xdc);
  }
  else {
    fVar1 = *(float *)((int)pvVar9 + 0xdc) * 2.0;
  }
  MB_getTarget((double)fVar1,lVar16);
  local_12c = (moby->pos).y - local_12c;
  local_130 = (moby->pos).x - local_130;
  dVar36 = 0.0;
  local_dc = 0.0;
  dVar41 = (double)SQRT(local_130 * local_130 + local_12c * local_12c);
  dVar29 = (double)BlendAnimFrame(moby);
  dVar35 = (double)local_110;
  dVar34 = (double)local_10c;
  dVar33 = (double)local_108;
  dVar32 = (double)local_104;
  dVar40 = (double)(moby->pos).x;
  dVar38 = (double)(moby->pos).y;
  if ((moby->state != '\0') && (*(char *)((int)pvVar9 + 0x2e) != '\x01')) {
    if (*(MobyInstance **)((int)pvVar9 + 0xf8) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0xf8));
    }
    DeleteMoby(moby);
    return;
  }
  uVar19 = *(uint *)((int)pvVar9 + 0xe0);
  if ((uVar19 == 0xffffffff) || (*(uint *)((int)pvVar9 + 0xe4) == 0xffffffff)) {
    uVar19 = (int)moby - (int)g_MobyInstance;
    local_c8 = (longlong)(int)(((int)uVar19 >> 8) + (uint)((int)uVar19 < 0 && (uVar19 & 0xff) != 0))
    ;
    uVar17 = FastDoubleToInt((double)local_c8);
    printf("moby 427, instance %d requires both path fields to run!!! DELETING MOBY FROM LEVEL!!\n"
                 ,uVar17);
    pMVar10 = *(MobyInstance **)((int)moby->pVar + 0xf8);
    if (pMVar10 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar10);
    }
    M427_0036e080(lVar16,0,1,DAT_00841460);
    M427_0036e080(lVar16,2,3,DAT_00841464);
    M427_0036e080(lVar16,4,5,DAT_00841468);
    M427_0036e080(lVar16,5,6,DAT_0084146c);
    M427_0036e080(lVar16,6,7,DAT_00841470);
    M427_0036e080(lVar16,8,9,DAT_00841468);
    M427_0036e080(lVar16,9,10,DAT_0084146c);
    M427_0036e080(lVar16,10,0xb,DAT_00841470);
    M427_0036e080(lVar16,0xc,0xd,DAT_00841474);
    M427_0036e080(lVar16,0xe,0xf,DAT_00841474);
    M427_0036e080(lVar16,0x10,0x11,DAT_00841478);
    M427_0036e080(lVar16,0x14,0x15,DAT_00841478);
    M427_0036e080(lVar16,0x12,0x13,DAT_0084147c);
    M427_0036e080(lVar16,0x16,0x17,DAT_0084147c);
    DeleteMoby(moby);
    return;
  }
  lVar18 = -1;
  lVar25 = 0;
  piVar11 = *(int **)((int)Splines +
                     (int)(((ulonglong)uVar19 +
                            (ZERO_MASK((uint)*(ushort *)((int)pvVar9 + 0xe8)) &
                            (ulonglong)*(uint *)((int)pvVar9 + 0xe4) - (ulonglong)uVar19) &
                           0xffffffff) << 2));
  dVar39 = dVar36;
  dVar37 = dVar36;
  piVar26 = piVar11;
  if (0 < *piVar11) {
    do {
      dVar31 = (double)SQRT((float)(dVar35 - (double)(float)piVar26[4]) *
                            (float)(dVar35 - (double)(float)piVar26[4]) +
                            (float)(dVar34 - (double)(float)piVar26[5]) *
                            (float)(dVar34 - (double)(float)piVar26[5]));
      if (dVar39 < dVar31) {
        lVar18 = lVar25;
        dVar39 = dVar31;
      }
      lVar25 = lVar25 + 1;
      piVar26 = piVar26 + 4;
    } while ((int)lVar25 < *piVar11);
    if ((int)lVar18 != -1) {
      iVar20 = (int)(lVar18 << 4);
      dVar39 = (double)*(float *)((int)piVar11 + iVar20 + 0x14);
      dVar31 = (double)*(float *)((int)piVar11 + iVar20 + 0x10);
      fVar1 = (float)(dVar39 - dVar38);
      fVar2 = (float)(dVar31 - dVar40);
      dVar37 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      dVar38 = dVar39;
      dVar40 = dVar31;
    }
  }
  iVar20 = MB_damage(lVar16,0x210000,0);
  iVar21 = MB_HandleDamage(moby,iVar20,uVar27 + 0x20,0,auStack_e0,&local_dc,0,4);
  FastDecTimerS16(uVar27 + 0xf0);
  FastDecTimerS16(uVar27 + 0xf2);
  if (((iVar20 != 0) && (moby->state < 0xb)) && (*(short *)((int)pvVar9 + 0xf0) == 0)) {
    local_d8[1] = 1.0;
    pMVar10 = *(MobyInstance **)(iVar20 + 0x20);
    if (pMVar10 == (MobyInstance *)0x0) {
      dVar39 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else if (pMVar10 == g_currentWeaponMoby) {
      dVar39 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else {
      dVar39 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar10->pos).x),
                                    (double)((moby->pos).y - (pMVar10->pos).y));
    }
    local_d8[0] = (float)dVar39;
    fVar1 = *(float *)((int)pvVar9 + 0x20) - local_dc;
    *(float *)((int)pvVar9 + 0x20) = fVar1;
    fVar2 = animationSpeed;
    if ((double)fVar1 <= dVar36) {
      iVar21 = 1;
    }
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x10,0x36e598);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar43);
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xff;
    uVar12 = storeVectorElementByteIndexed
                       (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 | auVar42 << 0x20
                        | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38 | auVar42 << 0x40 |
                        auVar42 << 0x48 | auVar42 << 0x50 | auVar42 << 0x58 | auVar42 << 0x60 |
                        auVar42 << 0x68 | auVar42 << 0x70 | auVar42 << 0x78,0xfe,uVar27);
    *(undefined1 *)((int)pvVar9 + 0xfe) = uVar12;
    if (iVar21 < 4) {
      if (0 < iVar21) {
        if (iVar21 < 3) {
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
          fVar1 = DAT_0071f418;
          *(float *)((int)pvVar9 + 0x80) = DAT_0071f418 * 37.0;
          *(float *)((int)pvVar9 + 0x84) = fVar1 * 20.0;
          fVar1 = g_FrameTime;
          *(float *)((int)pvVar9 + 0x88) = g_FrameTime * 17.0;
          *(float *)((int)pvVar9 + 0x8c) = fVar1 * 13.0;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar20 + 0x10),*(undefined8 *)(iVar20 + 0x18),local_d8 + 2,
                     uVar27 + 0x88,uVar27 + 0x8c);
          MB_StartKick((double)local_d8[2],lVar16,uVar27 + 0x70);
          *(undefined4 *)((int)pvVar9 + 0xc0) = 0x41400000;
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41c80000;
          moby->state = '\v';
          MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
        }
        else {
LAB_0036edcc:
          *(undefined1 *)((int)pvVar9 + 0x67) = 0x96;
          iVar21 = (int)(fVar2 * 5.5);
          local_c8 = (longlong)iVar21;
          MB_SetAnimation(lVar16,8,0,iVar21);
          moby->state = '\b';
          sVar7 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6);
          if ((sVar7 == 0x131) || (sVar7 == 0xb0)) {
            fVar1 = (2.0 / (animationSpeed * 15.0)) * 0.5;
          }
          else {
            fVar1 = 2.0 / (animationSpeed * 15.0);
          }
          *(float *)((int)pvVar9 + 0xf4) = fVar1;
          MB_VecAtan2Angles
                    (*(undefined8 *)(iVar20 + 0x10),*(undefined8 *)(iVar20 + 0x18),local_d8,
                     uVar27 + 0xf4,local_d8 + 1);
          dVar36 = (double)FastWrapRot(3.1415927,local_d8[0]);
          (moby->rotation).z = (float)dVar36;
        }
      }
    }
    else if (iVar21 < 7) {
      if (5 < iVar21) goto LAB_0036edcc;
      *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
      iVar21 = (int)(fVar2 * 5.5);
      local_c8 = (longlong)iVar21;
      MB_SetAnimation(lVar16,0xc,0,iVar21);
      moby->state = '\n';
      *(float *)((int)pvVar9 + 0xf4) = 2.0 / (animationSpeed * 15.0);
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar20 + 0x10),*(undefined8 *)(iVar20 + 0x18),local_d8,
                 uVar27 + 0xf4,local_d8 + 1);
      dVar36 = (double)FastWrapRot(3.1415927,local_d8[0]);
      (moby->rotation).z = (float)dVar36;
    }
    MB_UpdateLightsTransition(lVar16,uVar27 + 0x60);
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x10,0x36e598);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar43);
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xff;
    uVar12 = storeVectorElementByteIndexed
                       (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 | auVar42 << 0x20
                        | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38 | auVar42 << 0x40 |
                        auVar42 << 0x48 | auVar42 << 0x50 | auVar42 << 0x58 | auVar42 << 0x60 |
                        auVar42 << 0x68 | auVar42 << 0x70 | auVar42 << 0x78,0xfe,uVar27);
    *(undefined1 *)((int)pvVar9 + 0xfe) = uVar12;
  }
  *(undefined4 *)((int)pvVar9 + 0x38) = 0;
  FastDecTimerU8(uVar27 + 0xfe);
  FastDecTimerS32(uVar27 + 0x108);
  fVar1 = animationSpeed;
  bVar3 = moby->state;
  if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        MVar8 = moby->modeBits;
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined4 *)((int)pvVar9 + 0xd0) = 0;
        moby->modeBits = MVar8 | CAN_BE_AUTO_TARGETED;
        *(undefined1 *)((int)pvVar9 + 0x28) = 1;
        *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
        *(undefined1 *)((int)pvVar9 + 0x29) = 1;
        *(undefined2 *)((int)pvVar9 + 0xf0) = 0;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0xfe) = 0;
        *(undefined1 *)((int)pvVar9 + 0xff) = 0;
        fVar4 = (moby->pos).z;
        *(undefined1 *)((int)pvVar9 + 0x58) = 8;
        *(f32 *)((int)pvVar9 + 0xd4) = fVar4;
        *(undefined1 *)((int)pvVar9 + 0x5a) = 10;
        uVar19 = rand();
        if ((uVar19 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        if (*(char *)((int)pvVar9 + 0xfc) == '\0') {
          uVar19 = rand();
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation
                    (lVar16,ZERO_MASK((uVar19 & 1)) & 1,0,
                     (int)(animationSpeed * 10.5));
          moby->state = '\x01';
        }
        else {
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 10.5));
          moby->state = '\x05';
        }
      }
      else {
        if ((moby->field43_0x70 & 2U) != 0) {
          uVar19 = rand();
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation
                    (lVar16,ZERO_MASK((uVar19 & 1)) & 1,0,
                     (int)(animationSpeed * 10.5));
        }
        uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                              (double)(float)(dVar34 - (double)(moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                   (double)(g_FrameTime * 7.330383),lVar16,&DAT_00720000,uVar27 + 0xec);
        if (iVar22 == 0) {
          if ((dVar41 > 2.5) && (1.0 < dVar37)) {
            if (14.0 < dVar41) {
              local_c8 = (longlong)(int)(animationSpeed * 8.5);
              MB_SetAnimation(lVar16,10,0,(int)(animationSpeed * 8.5));
              moby->state = '\x02';
              goto LAB_00370a44;
            }
            if ((dVar41 < 8.0) && (*(int *)((int)pvVar9 + 0x108) == 0)) {
              local_c8 = (longlong)(int)(animationSpeed * 8.5);
              MB_SetAnimation(lVar16,0xb,0,(int)(animationSpeed * 8.5));
              moby->state = '\x03';
              goto LAB_00370a44;
            }
          }
          if ((14.0 <= dVar41) || ((dVar41 < 2.5 || (8.0 <= ABS((moby->pos).z - local_128))))) {
            if (dVar41 <= 2.5) {
              if (*(short *)((int)pvVar9 + 0xf2) < 1) {
                moby->state = '\a';
                local_c8 = (longlong)(int)(animationSpeed * 7.5);
                MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
              }
              else {
                auVar42 = ZEXT416(0xffffffff);
                auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
                auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
                auVar42 = loadVectorLeftIndexed(0x5c,0x36e598);
                auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
                auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar42 = vectorMultiplyAddFloatingPoint
                                    (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 |
                                             auVar42 << 0x60,auVar43);
                local_c8 = (longlong)(int)(animationSpeed * 20.5);
                auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
                if ((int)(animationSpeed * 20.5) < (int)*(short *)((int)pvVar9 + 0xf2)) {
                  auVar42 = vectorSplatHalfWord(auVar42,1);
                  uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
                  *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
                }
              }
            }
          }
          else if (((*(short *)((int)pvVar9 + 0xf2) == 0) &&
                   (iVar22 = CollLine(local_240,local_230,0,lVar16,0), iVar22 != 0)) &&
                  (g_CollOutput.pMoby == local_f0)) {
            moby->state = '\x05';
            local_c8 = (longlong)(int)(animationSpeed * 7.5);
            MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 7.5));
          }
        }
        else {
          local_c8 = (longlong)(int)(animationSpeed * 8.5);
          MB_SetAnimation(lVar16,0xb,0,(int)(animationSpeed * 8.5));
          moby->state = '\x03';
        }
      }
    }
    else if (bVar3 < 3) {
      if ((dVar41 < 13.0) || (uVar17 = 0x3ff0000000000000, dVar37 < 1.0)) {
        local_c8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
        moby->state = '\x01';
      }
      else {
        uVar30 = FUN_005e8338((double)(float)(dVar40 - (double)(moby->pos).x),
                              (double)(float)(dVar38 - (double)(moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar30,(double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),
                   (double)(g_FrameTime * 4.712389),lVar16,&DAT_00720000,uVar27 + 0xec);
        fVar1 = 0.7853982;
        fVar2 = *(float *)((int)pvVar9 + 0xec) * 30.0;
        if ((fVar2 <= 0.7853982) && (fVar1 = fVar2, fVar2 < -0.7853982)) {
          fVar1 = -0.7853982;
        }
        *(float *)((int)pvVar9 + 0x178) = fVar1 * 0.7;
        *(float *)((int)pvVar9 + 0x1f8) = fVar1 * 0.4;
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        CollMovingSphere
                  (0x3fe0000000000000,uVar17,0x3fe0000000000000,0x3fe0c15240000000,lVar16,
                   lVar16 + 0x10,local_220);
      }
    }
    else if (bVar3 < 4) {
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x80,0x36e598);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                           auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x108,uVar27
                         );
      *(undefined4 *)((int)pvVar9 + 0x108U & 0xfffffffc) = uVar23;
      if (iVar22 == 0) {
        dVar32 = 1.0;
        if (dVar41 < 1.0) {
          dVar33 = (double)FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                                        (double)(float)(dVar34 - (double)(moby->pos).y));
          dVar33 = (double)FastSubRots((float)dVar33,(moby->rotation).z);
          fVar1 = animationSpeed;
          if (dVar33 < 0.2617993950843811) {
            moby->state = '\a';
            local_c8 = (longlong)(int)(animationSpeed * 7.5);
            MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
            goto LAB_00370a44;
          }
        }
        if (dVar41 <= 9.0) {
          if (dVar32 <= dVar37) {
            uVar17 = FUN_005e8338((double)(float)(dVar40 - (double)(moby->pos).x),
                                  (double)(float)(dVar38 - (double)(moby->pos).y));
            OrganicDeltAngSpeed
                      (uVar17,(double)(DAT_0071f40c * 0.035),(double)(DAT_0071f40c * 0.3),
                       (double)(g_FrameTime * 4.712389),lVar16);
            dVar38 = (double)cosf((moby->rotation).z);
            dVar40 = 6.0;
            local_1f0 = (float)((double)(g_FrameTime * 6.0) * dVar38);
            dVar38 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_1f0 = local_1f0 + (moby->pos).x;
            local_1e8 = (moby->pos).z;
            local_1ec = (float)((double)(float)((double)g_FrameTime * dVar40) * dVar38 +
                               (double)(moby->pos).y);
            CollMovingSphere
                      (0x3fe0000000000000,dVar32,0x3fe0000000000000,0x3fe0c15240000000,lVar16,
                       lVar16 + 0x10,&local_1f0);
          }
          else {
            local_c8 = (longlong)(int)(fVar1 * 10.5);
            MB_SetAnimation(lVar16,0,0,(int)(fVar1 * 10.5));
            moby->state = '\x01';
          }
        }
        else {
          moby->state = '\x05';
          local_c8 = (longlong)(int)(animationSpeed * 7.5);
          MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 7.5));
        }
      }
      else {
        uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                              (double)(float)(dVar34 - (double)(moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                   (double)(g_FrameTime * 4.886922),lVar16);
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        local_200.x = (moby->pos).x;
        local_200.y = (moby->pos).y;
        local_200.z = (moby->pos).z;
        local_200.w = (moby->pos).w;
        dVar38 = 1.0;
        iVar22 = CollMovingSphere
                           (0x3fe0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                            0x3fe0c15240000000,lVar16,&local_200,local_210);
        if ((iVar22 == 0) ||
           (iVar22 = PointInsideComplexPoly(&local_200,(Vec4 *)(piVar11 + 4),*piVar11),
           iVar22 == 0)) {
          uVar28 = '\0';
        }
        else {
          uVar28 = '\v';
          (moby->pos).x = local_200.x;
          (moby->pos).y = local_200.y;
          (moby->pos).z = local_200.z;
          (moby->pos).w = local_200.w;
        }
        iVar22 = FastDecTimerU8(uVar27 + 0xff);
        if ((iVar22 != 0) && (uVar28 != moby->animationId)) {
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,uVar28,0,(int)(animationSpeed * 10.5));
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar44 = loadVectorLeftIndexed(0x8c,0x36e598);
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xff;
          uVar12 = storeVectorElementByteIndexed
                             (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 |
                              auVar42 << 0x20 | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38
                              | auVar42 << 0x40 | auVar42 << 0x48 | auVar42 << 0x50 |
                              auVar42 << 0x58 | auVar42 << 0x60 | auVar42 << 0x68 | auVar42 << 0x70
                              | auVar42 << 0x78,0xff,uVar27);
          *(undefined1 *)((int)pvVar9 + 0xff) = uVar12;
        }
        if (*(short *)((int)pvVar9 + 0xf2) == 0) {
          if (dVar41 < dVar38) {
            dVar38 = (double)FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                                          (double)(float)(dVar34 - (double)(moby->pos).y));
            dVar38 = (double)FastSubRots((float)dVar38,(moby->rotation).z);
            if (dVar38 < 0.2617993950843811) {
              moby->state = '\a';
              local_c8 = (longlong)(int)(animationSpeed * 7.5);
              MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
              *(undefined1 *)((int)pvVar9 + 0xff) = 0;
              goto LAB_00370a44;
            }
          }
          if (dVar41 < 14.0) {
            moby->state = '\x05';
            local_c8 = (longlong)(int)(animationSpeed * 7.5);
            MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 7.5));
            *(undefined1 *)((int)pvVar9 + 0xff) = 0;
          }
        }
      }
    }
    else if (moby->animationId == '\x02') {
      if ((moby->field43_0x70 & 2U) != 0) {
        local_c8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
        moby->state = '\x01';
      }
    }
    else {
      local_c8 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(lVar16,2,0,(int)(animationSpeed * 7.5));
      *(float *)((int)pvVar9 + 0xd0) = g_FrameTime * -7.668;
    }
  }
  else if (bVar3 < 8) {
    if (bVar3 < 6) {
      uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                            (double)(float)(dVar34 - (double)(moby->pos).y));
      OrganicDeltAngSpeed
                (uVar17,(double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),
                 (double)(g_FrameTime * 5.5850534),lVar16,&DAT_00720000,uVar27 + 0xec);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId != '\x04')) {
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar16,4,0,(int)(animationSpeed * 7.5));
      }
      if (((iVar22 == 0) && (2.5 < dVar41)) && (1.0 < dVar37)) {
        if (14.0 < dVar41) {
          local_c8 = (longlong)(int)(animationSpeed * 9.5);
          MB_SetAnimation(lVar16,10,0,(int)(animationSpeed * 9.5));
          moby->state = '\x02';
          goto LAB_00370a44;
        }
        if ((dVar41 < 8.0) && (*(int *)((int)pvVar9 + 0x108) == 0)) {
          local_c8 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar16,0xb,0,(int)(animationSpeed * 5.5));
          moby->state = '\x03';
          goto LAB_00370a44;
        }
      }
      if (2.5 <= dVar41) {
        auVar42 = loadVectorLeftIndexed(0xa8,0x36e598);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        if (((*(short *)((int)pvVar9 + 0xf2) == 0) && (dVar41 < 14.0)) &&
           (ABS((moby->pos).z - local_128) < 4.0)) {
          dVar40 = (double)GameCamera.rot.radius;
          dVar38 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                        (double)((moby->pos).y - GameCamera.posY));
          dVar38 = (double)FastSubRots((float)dVar40,(float)dVar38);
          if (dVar38 < 0.6108652353286743) {
            dVar40 = (double)(moby->rotation).z;
            dVar38 = (double)FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                                          (double)(float)(dVar34 - (double)(moby->pos).y));
            dVar38 = (double)FastSubRots((float)dVar40,(float)dVar38);
            if (dVar38 < 0.7853981852531433) {
              moby->state = '\x06';
              local_c8 = (longlong)(int)(animationSpeed * 7.5);
              MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 7.5));
              auVar43 = ZEXT416(0xffffffff);
              auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
              auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
              auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar42,auVar43);
              auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
              auVar42 = vectorSplatHalfWord(auVar42,1);
              uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
              *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
              *(undefined1 *)((int)pvVar9 + 0xfd) = 3;
              goto LAB_00370a44;
            }
          }
        }
        if (14.0 < dVar41) {
          moby->state = ((byte)(ZERO_MASK(iVar22)) & 0xfe) + 3;
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,6,0,(int)(animationSpeed * 10.5));
          auVar43 = ZEXT416(0xffffffff);
          auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar42,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
          *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
        }
      }
      else {
        moby->state = '\a';
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
      }
    }
    else if (bVar3 < 7) {
      uVar17 = FUN_005e8338((double)(local_110 - (moby->pos).x),(double)(local_10c - (moby->pos).y))
      ;
      OrganicDeltAngSpeed
                (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                 (double)(g_FrameTime * 4.712389),lVar16,&DAT_00720000,uVar27 + 0xec);
      if (dVar41 < 2.5) {
        moby->state = '\a';
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
      }
      if (((moby->animationId != '\x05') ||
          (uVar19 = (int)*(uint *)((int)pvVar9 + 0xd8) >> 0x1f,
          0x3fffffff < (int)((uVar19 >> 1 ^ *(uint *)((int)pvVar9 + 0xd8)) - uVar19) || dVar29 < 2.0
          )) || (*(int *)((int)pvVar9 + 0xf8) == 0)) {
        if ((((moby->field43_0x70 & 2U) != 0) && (*(short *)((int)pvVar9 + 0xf2) == 0)) &&
           (*(char *)((int)pvVar9 + 0xfd) == '\0')) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0xb8,0x36e598);
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
          *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
          moby->state = '\x05';
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar16,4,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        GetBonePosition(*(int *)((int)pvVar9 + 0xf8),0,&local_1e0);
        local_1d0 = (float)(dVar35 - (double)local_1e0);
        local_1cc = (float)(dVar34 - (double)local_1dc);
        local_1c4 = (float)dVar32;
        local_1c8 = (float)(dVar33 - (double)local_1d8);
        dVar38 = (double)FUN_005e8338();
        dVar40 = (double)FastSubRots((float)dVar38,(moby->rotation).z);
        if (0.2617993950843811 < dVar40) {
          dVar38 = (double)(moby->rotation).z;
        }
        dVar40 = (double)FUN_005e8338((double)SQRT(local_1d0 * local_1d0 + local_1cc * local_1cc),
                                      (double)local_1c8);
        dVar32 = 10.0;
        MB_SphericalToVector
                  (g_FrameTime * 10.0,(float)dVar38,(float)dVar40,&local_1d0);
        iVar22 = PlayMobySound(7,0,moby);
        FastDoubleToInt
                  ((double)(14.0 / (float)((double)g_FrameTime * dVar32)),iVar22);
        M184_0001b100(lVar16);
        FastDecTimerU8(uVar27 + 0xfd);
      }
    }
    else {
      uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                            (double)(float)(dVar34 - (double)(moby->pos).y));
      OrganicDeltAngSpeed
                (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                 (double)(g_FrameTime * 5.5850534),lVar16,&DAT_00720000,uVar27 + 0xec);
      if (((moby->updateId == moby->animationId) && (12.0 <= dVar29)) &&
         ((dVar29 < 13.0 && (ABS((moby->pos).z - local_128) < 2.0)))) {
        dVar40 = (double)(moby->pos).y;
        dVar38 = (double)(moby->pos).x;
        fVar1 = (float)(dVar40 - dVar34);
        fVar2 = (float)(dVar38 - dVar35);
        uVar17 = 0x3ff0000000000000;
        if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) {
          dVar38 = (double)FUN_005e8338((double)(float)(dVar35 - dVar38),
                                        (double)(float)(dVar34 - dVar40));
          dVar38 = (double)FastSubRots((float)dVar38,(moby->rotation).z);
          if (dVar38 < 0.2617993950843811) {
            dVar38 = (double)cosf((moby->rotation).z);
            dVar40 = 0.20000000298023224;
            local_1a0 = (float)(dVar38 * 0.20000000298023224);
            dVar38 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_19c = (float)(dVar38 * dVar40);
            local_198 = 0;
            local_18c = 1;
            local_184 = 0x3f800000;
            local_190 = moby;
            FUN_005e84c0(uVar17,&local_1a0,&local_1a0);
            local_198 = 0x3f800000;
            local_188 = CONCAT22(1,moby->oClass);
            local_194 = 0x45afdf66;
            if (local_f0 != (MobyInstance *)0x0) {
              CollDamageMobyDirect
                        (local_f0,0x40,CONCAT44(local_1a0,local_19c),0x3f80000045afdf66,
                         CONCAT44(local_190,local_18c),CONCAT44(local_188,local_184),
                         CONCAT44(uStack_180,uStack_17c),CONCAT44(uStack_178,uStack_174));
            }
          }
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        moby->state = '\x05';
        fVar1 = animationSpeed;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x5c,0x36e598);
        auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
        *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
        local_c8 = (longlong)(int)(fVar1 * 7.5);
        MB_SetAnimation(lVar16,4,0,(int)(fVar1 * 7.5));
      }
    }
  }
  else if (bVar3 < 0xb) {
    if (0 < *(int *)((int)pvVar9 + 0xf4)) {
      dVar40 = 3.1415927410125732;
      dVar38 = (double)FastWrapRot((moby->rotation).z,3.1415927);
      dVar38 = (double)cosf((float)dVar38);
      local_1c0 = (float)(dVar38 * (double)*(float *)((int)pvVar9 + 0xf4));
      FastWrapRot((moby->rotation).z,(float)dVar40);
      dVar38 = (double)FUN_005e8128();
      local_1c0 = local_1c0 + (moby->pos).x;
      local_1bc = (float)(dVar38 * (double)*(float *)((int)pvVar9 + 0xf4) + (double)(moby->pos).y);
      local_1b8 = (moby->pos).z;
      *(float *)((int)pvVar9 + 0xf4) =
           *(float *)((int)pvVar9 + 0xf4) + -2.0 / (animationSpeed * 15.0 * animationSpeed * 15.0);
      CollMovingSphere
                (0x3fe0000000000000,0x3ff0000000000000,0x3fe0000000000000,0x3fe0c15240000000,lVar16,
                 lVar16 + 0x10,&local_1c0);
    }
    fVar1 = animationSpeed;
    if ((moby->field43_0x70 & 2U) != 0) {
      *(ushort *)((int)pvVar9 + 0xe8) = *(ushort *)((int)pvVar9 + 0xe8) ^ 1;
      local_c8 = (longlong)(int)(fVar1 * 9.5);
      MB_SetAnimation
                (lVar16,ZERO_MASK((9 - (uint)moby->state)) & 9,0,(int)(fVar1 * 9.5));
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      moby->state = '\x01';
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(200,0x36e598);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                           auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x108,uVar27
                         );
      *(undefined4 *)((int)pvVar9 + 0x108U & 0xfffffffc) = uVar23;
    }
  }
  else if ((bVar3 < 0xc) &&
          (uVar19 = MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70)),
          (uVar19 & 0x60) != 0)) {
    pMVar10 = *(MobyInstance **)((int)moby->pVar + 0xf8);
    if (pMVar10 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar10);
    }
    M427_0036e080(lVar16,0,1,DAT_00841460);
    M427_0036e080(lVar16,2,3,DAT_00841464);
    M427_0036e080(lVar16,4,5,DAT_00841468);
    M427_0036e080(lVar16,5,6,DAT_0084146c);
    M427_0036e080(lVar16,6,7,DAT_00841470);
    M427_0036e080(lVar16,8,9,DAT_00841468);
    M427_0036e080(lVar16,9,10,DAT_0084146c);
    M427_0036e080(lVar16,10,0xb,DAT_00841470);
    M427_0036e080(lVar16,0xc,0xd,DAT_00841474);
    M427_0036e080(lVar16,0xe,0xf,DAT_00841474);
    M427_0036e080(lVar16,0x10,0x11,DAT_00841478);
    M427_0036e080(lVar16,0x14,0x15,DAT_00841478);
    M427_0036e080(lVar16,0x12,0x13,DAT_0084147c);
    M427_0036e080(lVar16,0x16,0x17,DAT_0084147c);
    DeleteMoby(moby);
    return;
  }
LAB_00370a44:
  MB_ColorDyingMoby(lVar16,uVar27 + 0x60);
  uVar28 = moby->state;
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  if (((uVar28 == '\x01') || (uVar28 == '\x03')) ||
     ((uVar28 == '\x04' || ((uVar28 == '\x05' || (uVar28 == '\x06')))))) {
    uVar19 = (uint)(ZERO_MASK((int)local_f0)) & (int)g_heroMobyPtr - (int)local_f0;
    fVar5 = *(float *)((int)&(local_f0->pos).y + uVar19);
    fVar6 = *(float *)((int)&(local_f0->pos).x + uVar19);
    fVar15 = fVar2 - fVar5;
    fVar14 = fVar1 - fVar6;
    if (SQRT(fVar14 * fVar14 + fVar15 * fVar15) < 24.0) {
      uVar17 = FUN_005e8338((double)(fVar6 - fVar1),(double)(fVar5 - fVar2));
      dVar40 = (double)FastDiffRots(uVar17,(double)(moby->rotation).z);
      dVar38 = 0.9599310755729675;
      if ((dVar40 <= 0.9599310755729675) && (dVar38 = dVar40, dVar40 < -0.9599310755729675)) {
        dVar38 = -0.9599310755729675;
      }
      *(float *)((int)pvVar9 + 0x178) = (float)(dVar38 * 0.5);
      *(float *)((int)pvVar9 + 0x1f8) = (float)(dVar38 * 0.5);
    }
  }
  if ((moby->modeBits & MIRROR) != NONE) {
    *(float *)((int)pvVar9 + 0x178) = -*(float *)((int)pvVar9 + 0x178);
    *(float *)((int)pvVar9 + 0x1f8) = -*(float *)((int)pvVar9 + 0x1f8);
  }
  dVar38 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar16,uVar27 + 0x110,5);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * 0.024000000208616257),
             (double)(float)((double)DAT_0071f40c * dVar38),lVar16,uVar27 + 400,6);
  if (*(int *)((int)pvVar9 + 0xf8) == 0) {
    GetBonePosition(lVar16,1,local_1b0);
    uVar23 = FUN_003a38c8(lVar16);
    *(undefined4 *)((int)pvVar9 + 0xf8) = uVar23;
  }
  else {
    GetBoneTransformations(lVar16,1,aVStack_170);
    iVar22 = *(int *)((int)pvVar9 + 0xf8);
    *(undefined4 *)(iVar22 + 0x10) = local_140;
    *(undefined4 *)(iVar22 + 0x14) = local_13c;
    *(undefined4 *)(iVar22 + 0x18) = local_138;
    *(undefined4 *)(iVar22 + 0x1c) = local_134;
    UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar9 + 0xf8));
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0xf8));
    FastApplyTransform((Vec4 *)(*(int *)((int)pvVar9 + 0xf8) + 0xc0),aVStack_170);
    MB_NormalizeMtx3Columns((ulonglong)*(uint *)((int)pvVar9 + 0xf8) + 0xc0);
    if ((moby->modeBits & DISABLED) == NONE) {
      iVar22 = *(int *)((int)pvVar9 + 0xf8);
      uVar24 = *(ushort *)(iVar22 + 0x34) & 0xffbe;
    }
    else {
      iVar22 = *(int *)((int)pvVar9 + 0xf8);
      uVar24 = *(ushort *)(iVar22 + 0x34) | 0x41;
    }
    *(ushort *)(iVar22 + 0x34) = uVar24;
    PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar9 + 0xf8));
    *(ushort *)(*(int *)((int)pvVar9 + 0xf8) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar9 + 0xf8) + 0x34) | 6;
  }
  fVar1 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar9 + 0xd0);
  *(float *)((int)pvVar9 + 0xd0) = fVar1;
  dVar40 = 2.0;
  (moby->pos).z = (moby->pos).z - (fVar1 - 2.0);
  dVar38 = (double)GetGroundZ(0x3fe0000000000000,lVar16 + 0x10,0);
  fVar1 = (float)((double)(moby->pos).z - dVar40);
  dVar40 = (double)fVar1;
  (moby->pos).z = fVar1;
  if (dVar40 < dVar38) {
    (moby->pos).z = (float)dVar38;
    *(undefined4 *)((int)pvVar9 + 0xd0) = 0;
    dVar40 = (double)(moby->pos).z;
  }
  if ((double)(*(float *)((int)pvVar9 + 0xd4) - 5.0) <= dVar40) {
    *(float *)((int)pvVar9 + 0xd8) = (float)dVar29;
  }
  else {
    MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
    pMVar10 = *(MobyInstance **)((int)moby->pVar + 0xf8);
    if (pMVar10 != (MobyInstance *)0x0) {
      DeleteMoby(pMVar10);
    }
    M427_0036e080(lVar16,0,1,DAT_00841460);
    M427_0036e080(lVar16,2,3,DAT_00841464);
    M427_0036e080(lVar16,4,5,DAT_00841468);
    M427_0036e080(lVar16,5,6,DAT_0084146c);
    M427_0036e080(lVar16,6,7,DAT_00841470);
    M427_0036e080(lVar16,8,9,DAT_00841468);
    M427_0036e080(lVar16,9,10,DAT_0084146c);
    M427_0036e080(lVar16,10,0xb,DAT_00841470);
    M427_0036e080(lVar16,0xc,0xd,DAT_00841474);
    M427_0036e080(lVar16,0xe,0xf,DAT_00841474);
    M427_0036e080(lVar16,0x10,0x11,DAT_00841478);
    M427_0036e080(lVar16,0x14,0x15,DAT_00841478);
    M427_0036e080(lVar16,0x12,0x13,DAT_0084147c);
    M427_0036e080(lVar16,0x16,0x17,DAT_0084147c);
    DeleteMoby(moby);
  }
  return;
}


