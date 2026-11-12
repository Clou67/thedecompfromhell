// game/update/moby580.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x3cce70-0x3d0b18
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby580.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x03cce70 (0x14 bytes)
void M580_003cce70(void)

{
  DAT_00846290 = 0x10000;
  return;
}


// 0x03ccea0 (0x2ac bytes)
void M580_003ccea0(double param_1,double param_2)

{
  undefined4 uVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  int in_r8;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  GPiece<48> local_b0;
  
  dVar7 = 1.0;
  uVar8 = 0;
  if (0 < in_r8) {
    iVar5 = 0;
    dVar9 = 1.0199999809265137;
    uVar10 = 0x3f647ae140000000;
    dVar12 = (double)(float)(param_1 * 210000.0 +
                            (double)((float)(param_2 - param_1) / (float)(longlong)in_r8));
    dVar11 = 0.10000000149011612;
    do {
      FastIntToDouble(iVar5);
      uVar4 = MB_randRange(0x40,0x70);
      MB_randRange(0x40,0x7f);
      uVar6 = MB_randRangeFloat((float)dVar7,(float)dVar9);
      MB_randRange(0xfffffffffffffffe,2);
      MB_randRangeSigned(uVar8,uVar10);
      MB_randRangeSigned(uVar8,uVar10);
      MB_randRangeFloat((float)((double)DAT_00846424 * dVar11),DAT_00846424);
      iVar2 = SpawnPart_23((double)DAT_0084642c,dVar7,uVar6,dVar12,local_b0);
      if (iVar2 != 0) {
        iVar3 = MB_randInt(2);
        if (iVar3 != 0) {
          *(undefined1 *)(iVar2 + 3) = 0x44;
        }
        uVar1 = DAT_010c9f80;
        *(undefined4 *)(iVar2 + 0x24) = 2;
        *(short *)(iVar2 + 10) = (short)uVar1;
        *(undefined1 *)(iVar2 + 0x2a) = uVar4;
        *(char *)(iVar2 + 0x2b) = (char)DAT_010c9f80;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_r8);
  }
  return;
}


// 0x03cd150 (0x20c bytes)
void M580_003cd150
               (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  GPiece<16> local_60;
  GPiece<80> local_50;
  
  iVar1 = (int)(param_3 << 4);
  M580_003ccea0((double)(*(float *)(&DAT_0084637c + (int)(param_2 << 4)) * DAT_00846420),
                (double)(*(float *)(&DAT_0084637c + iVar1) * DAT_00846420),param_1,local_60,local_50
                ,param_4,iVar1 + 0x846370,param_4);
  return;
}


// 0x03cd35c (0xb4 bytes)
void M580_003cd35c(undefined8 param_1)

{
  M580_003cd150(param_1,0,1,DAT_0084643c);
  M580_003cd150(param_1,2,3,DAT_00846438);
  M580_003cd150(param_1,4,5,DAT_00846440);
  M580_003cd150(param_1,6,7,DAT_00846440);
  M580_003cd150(param_1,8,9,DAT_00846444);
  return;
}


// 0x03cd410 (0xd4 bytes)
MobyInstance * M580_003cd410(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    pMVar4 = (MobyInstance *)0x0;
  }
  else {
    pMVar4 = (MobyInstance *)0x0;
    puVar5 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      uVar2 = *puVar5 & 0x7fff;
      if (((g_MobyInstance[uVar2].oClass == SANDSHARK_SPAWNER) && (g_MobyInstance[uVar2].state < 0x7f))
         && ((pMVar4 == (MobyInstance *)0x0 ||
             (uVar3 = MB_randInt(0xff), (uVar3 & 1) != 0)))) {
        pMVar4 = g_MobyInstance + uVar2;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return pMVar4;
}


// 0x03cd510 (0x448 bytes)
void M580_003cd510(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<32> local_d0;
  
  if (PartActiveCnt < 0x5dd) {
    if (0x400 < PartActiveCnt) {
      param_3 = ((int)param_3 >> 1) + (uint)((int)param_3 < 0 && (param_3 & 1) != 0);
    }
  }
  else {
    param_3 = ((int)param_3 >> 2) + (uint)((int)param_3 < 0 && (param_3 & 3) != 0);
  }
  iVar4 = 0;
  if (0 < (int)param_3) {
    dVar5 = -0.25;
    dVar6 = -0.75;
    dVar7 = 0.25;
    uStack00000030 = param_1;
    uStack00000038 = param_2;
    do {
      MB_randRot();
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      MB_randRangeFloat((float)dVar5,(float)dVar7);
      MB_randRangeFloat((float)dVar5,(float)dVar7);
      MB_randRangeFloat(DAT_010c9f78,DAT_008462ec);
      MB_randRangeFloat(DAT_010c9f78,DAT_008462ec);
      MB_randRangeFloat(DAT_008462dc,DAT_008462e0);
      MB_randRangeFloat(DAT_008462e4,DAT_008462e8);
      MB_randRangeFloat((float)(longlong)DAT_008462f8,(float)(longlong)DAT_008462fc);
      uVar1 = FastDoubleToInt();
      MB_randRangeFloat((float)(longlong)DAT_00846300,(float)(longlong)DAT_00846304);
      uVar2 = FastDoubleToInt();
      MB_randRangeFloat((float)(longlong)DAT_00846308,(float)(longlong)DAT_0084630c);
      uVar3 = FastDoubleToInt();
      SpawnPart_2(local_f0,local_e0,local_d0,DAT_00846310,DAT_00846314,uVar1,uVar2,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_3);
  }
  return;
}


// 0x03cd980 (0x3c8 bytes)
void M580_003cd980(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<32> local_80;
  
  if (PartActiveCnt < 0x6a5) {
    MB_randRot();
    dVar5 = 0.125;
    MB_randRangeFloat(0.125,0.0);
    dVar4 = -0.125;
    MB_randRangeFloat(-0.125,(float)dVar5);
    MB_randRangeFloat((float)dVar4,(float)dVar5);
    MB_randRangeFloat(DAT_0084632c,DAT_00846330);
    MB_randRangeFloat(DAT_0084632c,DAT_00846330);
    MB_randRangeFloat(DAT_0084631c,DAT_00846320);
    MB_randRangeFloat(DAT_00846324,DAT_00846328);
    MB_randRangeFloat((float)(longlong)DAT_0084633c,(float)(longlong)DAT_00846340);
    uVar1 = FastDoubleToInt();
    MB_randRangeFloat((float)(longlong)DAT_00846344,(float)(longlong)DAT_00846348);
    uVar2 = FastDoubleToInt();
    MB_randRangeFloat((float)(longlong)DAT_0084634c,(float)(longlong)DAT_00846350);
    uVar3 = FastDoubleToInt();
    SpawnPart_2(local_a0,local_90,local_80,DAT_00846354,DAT_00846358,uVar1,uVar2,uVar3);
  }
  return;
}


// 0x03cdd50 (0xc4 bytes)
void M580_003cdd50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = PointInsideComplexPoly
                    ((Vec4 *)(param_1 + 0x10),(Vec4 *)Splines[*(int *)(iVar1 + 0x290)]->points,
                     Splines[*(int *)(iVar1 + 0x290)]->cnt);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 0x12;
    if (*(char *)(param_1 + 0x53) != '\0') {
      MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
    }
    *(undefined4 *)(iVar1 + 0x298) = 1;
  }
  return;
}


// 0x03cde20 (0xf4 bytes)
void M580_003cde20(int param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  ushort *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar6 = 240.0;
    dVar7 = 300.0;
    do {
      if (g_MobyInstance[*puVar4 & 0x7fff].oClass == SANDSHARK_0244) {
        pvVar2 = g_MobyInstance[*puVar4 & 0x7fff].pVar;
        dVar5 = (double)MB_randRangeFloat((float)dVar6,(float)dVar7);
        if ((float)(longlong)(int)*(short *)((int)pvVar2 + 0x25e) <
            (float)(dVar5 * (double)animationSpeed)) {
          uVar3 = FastDoubleToInt();
          *(undefined2 *)((int)pvVar2 + 0x25e) = uVar3;
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x03cdf40 (0x6ac bytes)
void M580_003cdf40(MobyInstance *param_1)

{
  float fVar1;
  ushort uVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  void *pvVar5;
  Spline *pSVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 uVar11;
  ushort *puVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<16> local_70;
  int local_60;
  float local_5c;
  float local_58 [2];
  longlong local_50;
  
  pvVar4 = param_1->pVar;
  uVar14 = ZEXT48(pvVar4);
  *(uint *)((int)pvVar4 + 0x280) = (uint)param_1->state;
  if (param_1->state != '\0') {
    if (*(char *)((int)pvVar4 + 0x2e) == '\x02') {
      *(undefined1 *)((int)pvVar4 + 0x2e) = 1;
      if (-1 < *(int *)((int)pvVar4 + 0x288)) {
        *(int *)((int)g_MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) =
             *(int *)((int)g_MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) + -1;
      }
      if (param_1->group == 0xff) {
        pMVar13 = (MobyInstance *)0x0;
      }
      else {
        pMVar13 = (MobyInstance *)0x0;
        puVar12 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
        do {
          uVar8 = *puVar12 & 0x7fff;
          if (((g_MobyInstance[uVar8].oClass == SANDSHARK_SPAWNER) &&
              (g_MobyInstance[uVar8].state < 0x7f)) &&
             ((pMVar13 == (MobyInstance *)0x0 ||
              (uVar9 = MB_randInt(0xff), (uVar9 & 1) != 0)))) {
            pMVar13 = g_MobyInstance + uVar8;
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (-1 < (short)uVar2);
      }
      *(MobyInstance **)((int)pvVar4 + 0x27c) = pMVar13;
      if (pMVar13 == (MobyInstance *)0x0) {
        DeleteMoby(param_1);
        return;
      }
      param_1->state = '\x1a';
      (param_1->pos).x = *(f32 *)((int)pvVar4 + 0x220);
      (param_1->pos).y = *(f32 *)((int)pvVar4 + 0x224);
      fVar1 = *(float *)((int)pvVar4 + 0x228);
      (param_1->pos).z = fVar1;
      (param_1->pos).w = *(f32 *)((int)pvVar4 + 0x22c);
      param_1->collision = (ushort *)0x0;
      (param_1->pos).z = fVar1 - 10.0;
    }
    if ((*(int *)((int)pvVar4 + 0x38) != 0) ||
       ((iVar10 = FastDecTimerS16(uVar14 + 0x25c), iVar10 == 0 &&
        (fVar1 = (param_1->pos).y - g_heroPosition.y, fVar7 = (param_1->pos).x - g_heroPosition.x,
        SQRT(fVar7 * fVar7 + fVar1 * fVar1) < 10.0)))) {
      dVar15 = (double)MB_randRangeFloat(180.0,240.0);
      uVar11 = FastDoubleToInt((double)(float)(dVar15 * (double)animationSpeed));
      *(undefined2 *)((int)pvVar4 + 0x25e) = uVar11;
    }
    *(undefined4 *)((int)pvVar4 + 0x38) = 0;
    iVar10 = FastDecTimerS16(uVar14 + 0x25e);
    if (iVar10 == 0) {
      fVar1 = *(float *)((int)pvVar4 + 0x24c) + 5.0;
    }
    else {
      fVar1 = *(float *)((int)pvVar4 + 0x24c);
    }
    *(float *)((int)pvVar4 + 0x250) = fVar1;
    dVar15 = 0.0;
    local_5c = 0.0;
    iVar10 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar10,uVar14 + 0x20,0,&local_60,&local_5c,0,4);
    if ((local_60 != 1) && (param_1->state != '\x18')) {
      if (param_1->group != 0xff) {
        puVar12 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
        dVar17 = 240.0;
        dVar18 = 300.0;
        do {
          if (g_MobyInstance[*puVar12 & 0x7fff].oClass == SANDSHARK_0244) {
            pvVar5 = g_MobyInstance[*puVar12 & 0x7fff].pVar;
            dVar16 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
            local_50 = (longlong)(int)*(short *)((int)pvVar5 + 0x25e);
            if ((float)local_50 < (float)(dVar16 * (double)animationSpeed)) {
              uVar11 = FastDoubleToInt();
              *(undefined2 *)((int)pvVar5 + 0x25e) = uVar11;
            }
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (-1 < (short)uVar2);
      }
      *(undefined4 *)((int)pvVar4 + 0x29c) = 0;
      fVar1 = (float)((double)*(float *)((int)pvVar4 + 0x20) - (double)local_5c);
      dVar17 = (double)fVar1;
      *(float *)((int)pvVar4 + 0x20) = fVar1;
      if (dVar17 <= dVar15) {
        *(undefined4 *)((int)pvVar4 + 0x140) = 0x200;
        *(float *)((int)pvVar4 + 0x20) = (float)(dVar17 - (double)local_5c);
        *(undefined4 *)((int)pvVar4 + 0x148) = 0x3f000000;
        fVar1 = DAT_0071f418;
        *(float *)((int)pvVar4 + 0x130) = DAT_008462d0 * DAT_0071f418;
        fVar1 = DAT_008462d4 * fVar1;
        *(undefined4 *)((int)pvVar4 + 0x144) = 9;
        *(float *)((int)pvVar4 + 0x134) = fVar1;
        fVar1 = g_FrameTime;
        *(float *)((int)pvVar4 + 0x138) = DAT_008462c8 * g_FrameTime;
        fVar7 = DAT_008462c4;
        *(undefined1 *)((int)pvVar4 + 0x15d) = 0;
        *(float *)((int)pvVar4 + 0x13c) = fVar7 * fVar1;
        *(float *)((int)pvVar4 + 0x16c) = fVar1 * 2.0;
        dVar15 = (double)GetGroundZ(0x3fe0000000000000,local_70,0);
        if ((double)(param_1->pos).z < dVar15) {
          (param_1->pos).z = (float)dVar15;
        }
        if (-1 < *(int *)((int)pvVar4 + 0x288)) {
          *(int *)((int)g_MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) =
               *(int *)((int)g_MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) + -1;
          *(undefined1 *)((int)pvVar4 + 0x15d) = 0;
        }
        MVar3 = param_1->modeBits;
        *(uint *)((int)pvVar4 + 0x144) = *(uint *)((int)pvVar4 + 0x144) | 0x20;
        param_1->modeBits =
             MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar10 + 0x10),*(undefined8 *)(iVar10 + 0x18),local_58,
                   uVar14 + 0x138,uVar14 + 0x13c);
        MB_StartKick((double)local_58[0],param_1,uVar14 + 0x120);
        *(undefined4 *)((int)pvVar4 + 0x148) = 0x3f59999a;
        *(undefined4 *)((int)pvVar4 + 0x170) = 0x40e00000;
        *(undefined4 *)((int)pvVar4 + 0x174) = 0x41600000;
        param_1->state = '\x18';
        param_1->collision = (ushort *)0x0;
        *(undefined1 *)((int)pvVar4 + 0x117) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar14 + 0x110);
      }
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar14 + 0x110);
    pSVar6 = Splines[*(int *)((int)pvVar4 + 0x290)];
    iVar10 = MB_getTargetInArea
                       ((double)*(float *)((int)pvVar4 + 0x250),param_1,uVar14 + 0x1d0,pSVar6,0,0,
                        pSVar6->points,pSVar6->cnt);
    if ((iVar10 != 2) &&
       ((fVar1 = *(float *)((int)pvVar4 + 0x224) - *(float *)((int)pvVar4 + 0x1d4),
        fVar7 = *(float *)((int)pvVar4 + 0x220) - *(float *)((int)pvVar4 + 0x1d0),
        *(float *)((int)pvVar4 + 0x250) < SQRT(fVar7 * fVar7 + fVar1 * fVar1) ||
        (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar4 + 0x1d8)))))) {
      *(undefined4 *)((int)pvVar4 + 0x214) = 2;
    }
    pMVar13 = g_heroMobyPtr;
    if (*(int *)((int)pvVar4 + 0x210) == 0) {
      *(float *)((int)pvVar4 + 0x1d0) = g_heroPosition.x;
      fVar1 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar4 + 0x210) = pMVar13;
      *(float *)((int)pvVar4 + 0x1d4) = fVar1;
      *(float *)((int)pvVar4 + 0x1d8) = g_heroPosition.z;
      *(float *)((int)pvVar4 + 0x1dc) = g_heroPosition.w;
    }
  }
  return;
}


// 0x03ce680 (0x2498 bytes)
// strings: 00656b44: 'Shark with no path. UID: %d\n' | 00656b64: 'Shark with a path that has no points. UID: %d\n' | 00846430: '@0`X' (raw)

/* Moby 580 */

void UpdateMoby_580(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  MobyClass *pMVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  MobyInstance *pMVar19;
  longlong lVar20;
  uint uVar22;
  int iVar23;
  ulonglong uVar21;
  u8 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  undefined8 uVar28;
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
  GPiece<16> auVar40;
  float fVar41;
  GPiece<16> auStack_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> auStack_160;
  GPiece<16> auStack_150;
  float local_140;
  float local_13c;
  undefined4 local_138;
  GPiece<16> auStack_130;
  GPiece<16> auStack_120;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  GPiece<8> auStack_100;
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  GPiece<16> auStack_c0;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_90;
  f32 local_8c;
  float local_88;
  f32 local_84;
  longlong local_80;
  
  lVar20 = (longlong)(int)moby;
  if (DAT_010c9f7c != 0) {
    return;
  }
  *g_pDebugCounterMode = 0x81;
  *DAT_009271f8 = 0;
  pvVar4 = moby->pVar;
  uVar26 = ZEXT48(pvVar4);
  DoManipulator(0x4000ccccc0000000,moby,0,(Manipulator *)((int)pvVar4 + 0x2a0));
  if ((moby->enabled != '\0') &&
     (dVar27 = (double)FUN_005e8548(lVar20 + 0x10,0x951500), dVar27 < 28.0)) {
    MB_SetZBoundsFromGround(lVar20);
    moby->shadow = '\x16';
  }
  M580_003cdf40(lVar20);
  bVar1 = moby->state;
  fVar41 = (moby->pos).z;
  if (bVar1 < 0xe) {
    if (5 < bVar1) {
      if (bVar1 != 0xd) {
        if (bVar1 == 0xc) {
          iVar23 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x26c));
          if ((iVar23 == 0) &&
             (iVar23 = MB_IsPntInCuboid
                                 (&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x270)),
             iVar23 == 0)) {
            return;
          }
          pMVar19 = g_MobyInstance;
          iVar23 = *(int *)((int)pvVar4 + 0x28c);
          dVar31 = (double)(g_MobyInstance[iVar23].pos.z - *(float *)((int)pvVar4 + 0x228));
          dVar27 = (double)MB_randRangeFloat(6.0,10.0);
          dVar33 = (double)(float)(dVar27 * (double)g_FrameTime);
          dVar27 = (double)(float)(dVar33 * 2.0 +
                                  (double)SQRT((float)((double)(float)((double)(DAT_0071f418 * 10.8)
                                                                      * 2.0) * dVar31)));
          dVar31 = (double)(float)(dVar27 / (double)(DAT_0071f418 * 10.8));
          dVar27 = (double)FUN_005e8588(dVar27,uVar26 + 0x220,&pMVar19[iVar23].pos);
          lVar25 = uVar26 + 0x40;
          dVar27 = (double)(float)(dVar27 / dVar31);
          FUN_005e81f0(lVar25,uVar26 + 0x220,&pMVar19[iVar23].pos);
          *(undefined4 *)((int)pvVar4 + 0x48) = 0;
          FUN_005e7f98(dVar27,lVar25,lVar25);
          *(float *)((int)pvVar4 + 0x48) = (float)dVar33;
          (moby->pos).x = pMVar19[iVar23].pos.x;
          pMVar5 = moby->pClass;
          (moby->pos).y = pMVar19[iVar23].pos.y;
          MVar3 = moby->modeBits;
          (moby->pos).z = pMVar19[iVar23].pos.z;
          uVar24 = moby->animationId;
          (moby->pos).w = pMVar19[iVar23].pos.w;
          moby->collision = pMVar5->collision;
          moby->modeBits =
               MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
               CAN_BE_AUTO_TARGETED;
          if (uVar24 != '\v') {
            MB_SetAnimation(lVar20,0xb,0,0);
          }
          moby->state = '\r';
          return;
        }
        if (bVar1 == 9) {
          iVar23 = FUN_0048c188(lVar20,uVar26 + 0x120);
          if (iVar23 == 0) {
            return;
          }
          moby->state = '\x01';
          *(undefined2 *)((int)pvVar4 + 200) = 0;
          return;
        }
        if (bVar1 == 8) {
          uVar22 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x120));
          if ((uVar22 & 1) == 0) {
            if (-1 < (int)(moby->pos).z) {
              return;
            }
            M580_003cd150(lVar20,0,1,DAT_0084643c);
            M580_003cd150(lVar20,2,3,DAT_00846438);
            M580_003cd150(lVar20,4,5,DAT_00846440);
            M580_003cd150(lVar20,6,7,DAT_00846440);
            M580_003cd150(lVar20,8,9,DAT_00846444);
            DeleteMoby(moby);
            return;
          }
          moby->state = '\v';
          if (moby->animationId == '\x04') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar20,4,8,(int)(animationSpeed * 3.5));
          return;
        }
        if (bVar1 != 7) {
          if (bVar1 != 6) {
            return;
          }
          uVar28 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x1d0) - (moby->pos).x),
                                (double)(*(float *)((int)pvVar4 + 0x1d4) - (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar28,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar20,
                     &DAT_003ce5ec,uVar26 + 0x240);
          if ((moby->updateId == moby->animationId) &&
             (iVar23 = MB_MayaFrameTrigger(13.0,moby), iVar23 != 0)) {
            FUN_005e7f98(0x3fe8000000000000,auStack_100,lVar20 + 0xc0);
            FUN_005e7f54(auStack_100,auStack_100,lVar20 + 0x10);
            local_f8 = local_f8 + 0.5;
            DamageSphereAtPos
                      (0x3fe0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar20,auStack_100,0
                       ,1);
          }
          if ((((moby->field43_0x70 & 2U) != 0) &&
              (dVar27 = (double)FUN_005e8588(lVar20 + 0x10,uVar26 + 0x1d0), 1.5 < dVar27)) &&
             (moby->state = '\x05', moby->animationId != '\0')) {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
          }
          dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar20 + 0x10,0);
          fVar41 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar4 + 0x198));
          *(float *)((int)pvVar4 + 0x198) = fVar41;
          fVar41 = (moby->pos).z + fVar41;
          (moby->pos).z = fVar41;
          if (dVar27 <= (double)fVar41) {
            return;
          }
          *(undefined4 *)((int)pvVar4 + 0x198) = 0;
          (moby->pos).z = (float)dVar27;
          return;
        }
LAB_003cfca0:
        if (bVar1 == 0x17) {
          (moby->pos).z = fVar41 + DAT_008462d8;
          uVar22 = MB_randInt(0xff);
          if ((uVar22 & 1) != 0) {
            uVar13.piece<0,4>() = (moby->pos).x;
            uVar13.piece<4,4>() = (moby->pos).y;
            uVar14.piece<0,4>() = (moby->pos).z;
            uVar14.piece<4,4>() = (moby->pos).w;
            M580_003cd980(uVar13,uVar14);
          }
        }
        uVar28 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x220) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar4 + 0x224) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar20);
        dVar27 = (double)cosf((moby->rotation).z);
        dVar31 = 2.0;
        local_f0 = (float)(dVar27 * 2.0);
        dVar27 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_ec = (float)(dVar27 * dVar31);
        lVar25 = lVar20 + 0x10;
        local_e8 = 0;
        FUN_005e7f54(&local_f0,&local_f0,lVar25);
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x180),&local_f0,
                   auStack_e0);
        if (moby->state == '\x17') {
          (moby->pos).z = (moby->pos).z - DAT_008462d8;
        }
        dVar27 = (double)FUN_005e8588(lVar25,uVar26 + 0x220);
        dVar31 = 0.5;
        if (dVar27 < 0.5) {
          *(undefined4 *)((int)pvVar4 + 0x298) = 0;
          if (moby->state == '\a') {
            if (*(int *)((int)pvVar4 + 0x278) < 0) {
              moby->state = '\x12';
              *(float *)((int)pvVar4 + 0x1a4) = g_FrameTime * 1.5;
              if (moby->animationId != '\0') {
                local_80 = (longlong)(int)(animationSpeed * 3.5);
                MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
              }
            }
            else {
              moby->state = '\x03';
              if (moby->animationId != '\x02') {
                local_80 = (longlong)(int)(animationSpeed * 3.5);
                MB_SetAnimation(lVar20,2,0,(int)(animationSpeed * 3.5));
              }
            }
          }
          else {
            moby->state = '\x02';
            *(float *)((int)pvVar4 + 0x1a4) = g_FrameTime * 1.5;
            if (moby->animationId != '\f') {
              local_80 = (longlong)(int)(animationSpeed * 5.5);
              MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 5.5));
            }
          }
        }
        if (*(int *)((int)pvVar4 + 0x298) != 0) {
          FUN_005e7f98((double)(float)((double)g_FrameTime * dVar31),auStack_c0,
                       lVar20 + 0xc0);
          FUN_005e7f54(lVar25,lVar25,auStack_c0);
          return;
        }
        if (*(int *)((int)pvVar4 + 0x214) != 2) {
          FUN_005e81f0(auStack_d0,uVar26 + 0x1d0,uVar26 + 0x220);
          if (-1 < *(int *)((int)pvVar4 + 0x278)) {
            iVar23 = MB_IsPntInCuboid
                               ((Vec4 *)(uVar26 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x278));
            if (iVar23 == 0) {
              return;
            }
            moby->state = '\x05';
            *(float *)((int)pvVar4 + 0x1a4) =
                 *(float *)((int)pvVar4 + 0x254) * g_FrameTime;
            return;
          }
          dVar27 = (double)FUN_005e8030(auStack_d0);
          if ((double)*(float *)((int)pvVar4 + 0x24c) <= dVar27) {
            return;
          }
          moby->state = ((byte)(ZERO_MASK((7 - (uint)moby->state))) & 0xef) + 0x16;
          *(float *)((int)pvVar4 + 0x1a4) = *(float *)((int)pvVar4 + 0x254) * g_FrameTime;
          if (moby->animationId == '\0') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
          return;
        }
        if (*(short *)((int)pvVar4 + 0x25e) == 0) {
          return;
        }
        iVar23 = MB_randInt(0x13);
        if (iVar23 != 0) {
          return;
        }
        moby->state = '\x15';
        PlayMobySound(4,0,moby);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar20,0,0,0);
        }
        *(undefined4 *)((int)pvVar4 + 0x274) = 0xffffffff;
        return;
      }
LAB_003d04c8:
      dVar27 = (double)FastDiffRots
                                 ((double)(moby->rotation).y,
                                  (double)(g_FrameTime * 12.566371));
      (moby->rotation).y = (float)dVar27;
      FUN_005e7f54(lVar20 + 0x10,lVar20 + 0x10,uVar26 + 0x40);
      *(float *)((int)pvVar4 + 0x48) = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar4 + 0x48));
      fVar17 = DAT_008462d8;
      fVar41 = (moby->pos).z;
      if (*(float *)((int)pvVar4 + 0x228) - DAT_008462d8 <= fVar41) {
        if (*(float *)((int)pvVar4 + 0x228) + 0.6 <= fVar41) {
          return;
        }
        uVar15.piece<0,4>() = (moby->pos).x;
        uVar15.piece<4,4>() = (moby->pos).y;
        M580_003cd510(uVar15,CONCAT44(fVar41,(moby->pos).w),6);
        return;
      }
      moby->collision = moby->pClass->collision;
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      fVar41 = *(float *)((int)pvVar4 + 0x228);
      uVar24 = moby->animationId;
      moby->state = '\x17';
      (moby->rotation).y = 0.0;
      (moby->pos).z = fVar41 - fVar17;
      if (uVar24 == '\f') {
        return;
      }
      local_80 = (longlong)(int)(animationSpeed * 1.5);
      MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 1.5));
      return;
    }
    if (bVar1 != 5) {
      if (bVar1 == 3) {
        if (*(int *)((int)pvVar4 + 0x214) == 2) {
          return;
        }
        iVar23 = MB_IsPntInCuboid
                           ((Vec4 *)((int)pvVar4 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x278));
        if (iVar23 == 0) {
          return;
        }
        moby->state = '\x05';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (bVar1 == 2) {
        (moby->pos).z = fVar41 + DAT_008462d8;
        dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x220) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar4 + 0x224) - (moby->pos).y));
        uVar28 = FastWrapRot((float)dVar27,*(float *)((int)pvVar4 + 0x244));
        OrganicDeltAngSpeed
                  (uVar28,0x3fa99999a0000000,0x3fd3333340000000,0x3fa47ae140000000,lVar20,
                   &DAT_003ce5ec,uVar26 + 0x240);
        dVar33 = (double)(moby->pos).x;
        dVar27 = (double)cosf((moby->rotation).z);
        fVar41 = (moby->rotation).z;
        dVar31 = (double)(moby->pos).y;
        (moby->pos).x = (float)(dVar27 * (double)g_FrameTime + dVar33);
        dVar27 = (double)FUN_005e8128((double)fVar41);
        (moby->pos).y = (float)(dVar27 * (double)g_FrameTime + dVar31);
        iVar23 = FastDecTimerS32(uVar26 + 0x260);
        if (iVar23 != 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(0x20,0x3ce5ec);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x260,
                             uVar26);
          *(undefined4 *)((int)pvVar4 + 0x260U & 0xfffffffc) = uVar7;
          dVar27 = (double)MB_randRangeFloat
                                     (*(float *)((int)pvVar4 + 0x248) * -0.017453292,
                                      *(float *)((int)pvVar4 + 0x248) * 0.017453292);
          *(float *)((int)pvVar4 + 0x244) = (float)dVar27;
        }
        if ((moby->enabled != '\0') && (uVar21 = MB_randInt(0xff), (uVar21 & 1) != 0)) {
          uVar9.piece<0,4>() = (moby->pos).x;
          uVar9.piece<4,4>() = (moby->pos).y;
          uVar10.piece<0,4>() = (moby->pos).z;
          uVar10.piece<4,4>() = (moby->pos).w;
          M580_003cd980(uVar9,uVar10);
        }
        (moby->pos).z = (moby->pos).z - DAT_008462d8;
        if (*(int *)((int)pvVar4 + 0x214) == 2) {
          if (*(short *)((int)pvVar4 + 0x25e) == 0) {
            return;
          }
          iVar23 = MB_randInt(0x13);
          if (iVar23 != 0) {
            return;
          }
          moby->state = '\x15';
          PlayMobySound(4,0,moby);
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar20,0,0,0);
          }
          *(undefined4 *)((int)pvVar4 + 0x274) = 0xffffffff;
          return;
        }
        if (-1 < *(int *)((int)pvVar4 + 0x274)) {
          iVar23 = MB_IsPntInCuboid
                             ((Vec4 *)((int)pvVar4 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x274))
          ;
          if ((iVar23 != 0) && (*(short *)((int)pvVar4 + 0x25e) == 0)) {
            return;
          }
          iVar23 = MB_randInt(9);
          if (iVar23 != 0) {
            return;
          }
          *(undefined4 *)((int)pvVar4 + 0x274) = 0xffffffff;
          return;
        }
        iVar23 = MB_randInt(4);
        if (iVar23 != 0) {
          return;
        }
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = loadVectorLeftIndexed(0x248,uVar26);
        auVar38 = loadVectorRightIndexed(600,uVar26);
        auVar39 = loadVectorLeftIndexed(0x28,0x3ce5ec);
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = loadVectorLeftIndexed(0x284,uVar26);
        auVar40 = loadVectorRightIndexed(0x294,uVar26);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37 | auVar38,
                             auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar36);
        if (*(int *)((int)pvVar4 + 0x284) == 0) {
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x244,
                             uVar26);
          *(undefined4 *)((int)pvVar4 + 0x244U & 0xfffffffc) = uVar7;
          uVar26 = MB_randInt(0x100);
          if ((uVar26 & 1) != 0) {
            *(float *)((int)pvVar4 + 0x244) = -*(float *)((int)pvVar4 + 0x244);
          }
        }
        else {
          auVar37 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar40,0);
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar37,auVar36);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x244,
                             uVar26);
          *(undefined4 *)((int)pvVar4 + 0x244U & 0xfffffffc) = uVar7;
        }
        dVar27 = (double)MB_randRangeFloat(30.0,90.0);
        *(int *)((int)pvVar4 + 0x260) = (int)(animationSpeed * ((float)(longlong)dVar27 + 0.5));
        *(float *)((int)pvVar4 + 0x1a4) = g_FrameTime * 4.0;
        moby->state = '\x11';
        if (moby->animationId == '\f') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (bVar1 == 1) {
        FUN_005e81f0(auStack_190,&g_heroPosition,lVar20 + 0x10);
        moby->state = '\x12';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (bVar1 != 0) {
        return;
      }
      if (*(int *)((int)pvVar4 + 0x290) == -1) {
        printf("Shark with no path. UID: %d\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar4 + 0x290)]->cnt == 0) {
        printf("Shark with a path that has no points. UID: %d\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (-1 < *(int *)((int)pvVar4 + 0x288)) {
        *(int *)((int)g_MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) =
             *(int *)((int)g_MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) + 1;
      }
      *(f32 *)((int)pvVar4 + 0x220) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x224) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x228) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x22c) = (moby->pos).w;
      *(f32 *)((int)pvVar4 + 0x230) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x234) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x238) = (moby->pos).z;
      fVar2 = (moby->pos).w;
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x3f800000;
      *(f32 *)((int)pvVar4 + 0x23c) = fVar2;
      *(undefined2 *)((int)pvVar4 + 0x24) = 1;
      uVar7 = DAT_008462c0;
      *(undefined1 *)((int)pvVar4 + 0x5c) = 1;
      *(char *)((int)pvVar4 + 0x58) = (char)uVar7;
      *(undefined1 *)((int)pvVar4 + 0x2e) = 1;
      *(undefined1 *)((int)pvVar4 + 0x29) = 1;
      *(undefined2 *)((int)pvVar4 + 0x25e) = 0;
      MB_InitDefaultParams((float *)((int)pvVar4 + 0x180));
      *(undefined4 *)((int)pvVar4 + 0x18c) = 0x40000000;
      *(undefined4 *)((int)pvVar4 + 0x188) = 0x40000000;
      *(undefined4 *)((int)pvVar4 + 0x180) = 0x200;
      *(undefined4 *)((int)pvVar4 + 0x184) = 0x3f000000;
      *(float *)((int)pvVar4 + 0x1a4) = *(float *)((int)pvVar4 + 0x254) * g_FrameTime;
      uVar22 = rand();
      if ((uVar22 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      *(undefined **)((int)pvVar4 + 0xd0) = &DAT_00846360;
      if (*(int *)((int)pvVar4 + 0x26c) < 0) {
        if (-1 < *(int *)((int)pvVar4 + 0x278)) {
          *(undefined4 *)((int)pvVar4 + 0x18c) = 0x3e4ccccd;
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar20,2,0,(int)(animationSpeed * 3.5));
          return;
        }
        if (-1 < *(int *)((int)pvVar4 + 600)) {
          moby->collision = (ushort *)0x0;
          moby->state = '\x1d';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          return;
        }
        moby->state = '\x01';
        if (moby->animationId == '\x02') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar20,2,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (*(int *)((int)pvVar4 + 0x28c) == -1) {
        DeleteMoby(moby);
        return;
      }
      fVar41 = (moby->pos).z;
      uVar24 = moby->animationId;
      moby->collision = (ushort *)0x0;
      moby->state = '\f';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | DISABLED;
      (moby->pos).z = fVar41 + 10.0;
      if (uVar24 == '\0') {
        return;
      }
      local_80 = (longlong)(int)(animationSpeed * 3.5);
      MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
      return;
    }
  }
  else {
    if (0x17 < bVar1) {
      if (bVar1 == 0x1d) {
        if (g_MobyInstance[*(int *)((int)pvVar4 + 600)].state < 5) {
          return;
        }
        if (g_heroState == MOVEMENT_LOCKED) {
          return;
        }
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        moby->collision = moby->pClass->collision;
        *(undefined4 *)((int)pvVar4 + 600) = 0xffffffff;
        auVar35 = loadVectorLeftIndexed(0x10,0x3ce5ec);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar35,0x25c,uVar26);
        *(undefined2 *)((int)pvVar4 + 0x25c) = uVar6;
        moby->state = '\0';
        (moby->pos).z = (moby->pos).z - DAT_008462d8;
        return;
      }
      if (bVar1 != 0x1b) {
        if (bVar1 == 0x1a) {
          iVar23 = M580_003cd410(lVar20);
          *(int *)((int)pvVar4 + 0x27c) = iVar23;
          if (iVar23 != 0) {
            return;
          }
          DeleteMoby(moby);
          return;
        }
        if (bVar1 == 0x19) {
          if (7 < (byte)moby->alpha) {
            moby->alpha = moby->alpha - 8;
            return;
          }
          iVar23 = M580_003cd410(lVar20);
          *(int *)((int)pvVar4 + 0x27c) = iVar23;
          if (iVar23 != 0) {
            M580_003cd150(lVar20,0,1,DAT_0084643c);
            M580_003cd150(lVar20,2,3,DAT_00846438);
            M580_003cd150(lVar20,4,5,DAT_00846440);
            M580_003cd150(lVar20,6,7,DAT_00846440);
            M580_003cd150(lVar20,8,9,DAT_00846444);
            moby->alpha = -0x80;
            moby->state = '\x1a';
            (moby->pos).x = *(f32 *)((int)pvVar4 + 0x220);
            (moby->pos).y = *(f32 *)((int)pvVar4 + 0x224);
            fVar41 = *(float *)((int)pvVar4 + 0x228);
            (moby->pos).z = fVar41;
            (moby->pos).w = *(f32 *)((int)pvVar4 + 0x22c);
            moby->collision = (ushort *)0x0;
            (moby->pos).z = fVar41 - 10.0;
            return;
          }
          M580_003cd150(lVar20,0,1,DAT_0084643c);
          M580_003cd150(lVar20,2,3,DAT_00846438);
          M580_003cd150(lVar20,4,5,DAT_00846440);
          M580_003cd150(lVar20,6,7,DAT_00846440);
          M580_003cd150(lVar20,8,9,DAT_00846444);
          DeleteMoby(moby);
          return;
        }
        if (bVar1 != 0x18) {
          return;
        }
        uVar22 = MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x120));
        if (((uVar22 & 1) != 0) && (*(int *)((int)pvVar4 + 0x29c) == 0)) {
          *(undefined4 *)((int)pvVar4 + 0x29c) = 1;
          uVar28.piece<0,4>() = (moby->pos).x;
          uVar28.piece<4,4>() = (moby->pos).y;
          uVar16.piece<0,4>() = (moby->pos).z;
          uVar16.piece<4,4>() = (moby->pos).w;
          M580_003cd510(uVar28,uVar16,0x1b);
        }
        if ((uVar22 & 0x140) != 0) {
          local_90 = (moby->pos).x;
          local_8c = (moby->pos).y;
          local_84 = (moby->pos).w;
          uVar28 = 0x3fd54fdf40000000;
          local_88 = (moby->pos).z + 0.333;
          MB_SpawnBoltsFromCrate(lVar20,0,0xffffffffffffffff);
          MB_SpawnExplosionSparks2(uVar28,0,lVar20,&local_90);
          iVar23 = M580_003cd410(lVar20);
          *(int *)((int)pvVar4 + 0x27c) = iVar23;
          if (iVar23 != 0) {
            M580_003cd150(lVar20,0,1,DAT_0084643c);
            M580_003cd150(lVar20,2,3,DAT_00846438);
            M580_003cd150(lVar20,4,5,DAT_00846440);
            M580_003cd150(lVar20,6,7,DAT_00846440);
            M580_003cd150(lVar20,8,9,DAT_00846444);
            moby->state = '\x1a';
            moby->unk58 = 0.0;
            (moby->pos).x = *(f32 *)((int)pvVar4 + 0x220);
            (moby->pos).y = *(f32 *)((int)pvVar4 + 0x224);
            fVar41 = *(float *)((int)pvVar4 + 0x228);
            (moby->pos).z = fVar41;
            (moby->pos).w = *(f32 *)((int)pvVar4 + 0x22c);
            moby->collision = (ushort *)0x0;
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            (moby->pos).z = fVar41 - 10.0;
            return;
          }
          M580_003cd150(lVar20,0,1,DAT_0084643c);
          M580_003cd150(lVar20,2,3,DAT_00846438);
          M580_003cd150(lVar20,4,5,DAT_00846440);
          M580_003cd150(lVar20,6,7,DAT_00846440);
          M580_003cd150(lVar20,8,9,DAT_00846444);
          DeleteMoby(moby);
          return;
        }
        if (-1 < (int)(moby->pos).z) {
          return;
        }
        M580_003cd150(lVar20,0,1,DAT_0084643c);
        M580_003cd150(lVar20,2,3,DAT_00846438);
        M580_003cd150(lVar20,4,5,DAT_00846440);
        M580_003cd150(lVar20,6,7,DAT_00846440);
        M580_003cd150(lVar20,8,9,DAT_00846444);
        DeleteMoby(moby);
        return;
      }
      MB_randSphere(0,0x3fc99999a0000000,&local_a0);
      FUN_005e7f54(auStack_b0,&local_a0,lVar20 + 0x10);
      uVar18 = DAT_00846434;
      uVar7 = DAT_00846430;
      fVar41 = g_FrameTime * 5.0;
      local_a0 = local_a0 * fVar41;
      local_9c = local_9c * fVar41;
      local_98 = local_98 * fVar41;
      iVar23 = MB_randRange(0x14,0x28);
      iVar23 = (int)(animationSpeed * ((float)(longlong)iVar23 + 0.5));
      local_80 = (longlong)iVar23;
      uVar28 = MB_randRange(0x78,0x96);
      SpawnPart_4(lVar20 + 0x10,&local_a0,uVar7,uVar18,iVar23,100,uVar28,0);
      goto LAB_003d04c8;
    }
    if (bVar1 < 0x11) {
      if (bVar1 < 0xf) {
        dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x1d0) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar4 + 0x1d4) - (moby->pos).y));
        OrganicDeltAngSpeed
                  ((double)(float)(dVar27 + (double)*(float *)((int)pvVar4 + 0x244)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar20);
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        lVar25 = lVar20 + 0x10;
        FUN_005e7f54(local_180,local_180,lVar25);
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x180),local_180,
                   auStack_160);
        M580_003cdd50(lVar20);
        iVar23 = MB_SplineIntersect
                           (*(undefined4 *)((int)pvVar4 + 0x290),lVar25,local_170,auStack_150);
        bVar8 = false;
        if (iVar23 != 0) {
          dVar27 = (double)FUN_005e8548(lVar25,auStack_150);
          bVar8 = false;
          if (dVar27 < (double)*(float *)((int)pvVar4 + 0x294)) {
            bVar8 = true;
          }
        }
        if (*(short *)((int)pvVar4 + 0x25e) == 0) {
          moby->state = '\x12';
          return;
        }
        if (bVar8) {
          moby->state = '\x0f';
          if (moby->animationId == '\x05') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar20,5,0,(int)(animationSpeed * 10.5));
          return;
        }
        dVar27 = (double)FUN_005e8588(lVar25,local_170);
        if (dVar27 < 1.5) {
          moby->state = '\x06';
          if (moby->animationId == '\x01') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar20,1,0,(int)(animationSpeed * 10.5));
          return;
        }
        if (*(int *)((int)pvVar4 + 0x214) == 2) {
          return;
        }
        moby->state = '\x05';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 15.5);
        MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 15.5));
        return;
      }
      if (0xf < bVar1) {
        return;
      }
      dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x1d0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar4 + 0x1d4) - (moby->pos).y));
      fVar41 = OrganicDeltAng
                         ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar4 + 0x240));
      if (*(short *)((int)pvVar4 + 0x25e) == 0) {
        moby->state = '\x12';
        return;
      }
      dVar27 = (double)FUN_005e8588((double)fVar41,lVar20 + 0x10,uVar26 + 0x1d0);
      if (dVar27 < 1.5) {
        moby->state = '\x06';
        if (moby->animationId == '\x01') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar20,1,0,(int)(animationSpeed * 10.5));
        return;
      }
      if (*(int *)((int)pvVar4 + 0x214) == 2) {
        return;
      }
      moby->state = '\x05';
      if (moby->animationId == '\0') {
        return;
      }
      local_80 = (longlong)(int)(animationSpeed * 15.5);
      MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 15.5));
      return;
    }
    if (bVar1 < 0x16) {
      if (0x12 < bVar1) {
        (moby->pos).z = fVar41 + DAT_008462d8;
        dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar20 + 0x10,0);
        dVar31 = 4.0;
        dVar33 = (double)(moby->pos).x;
        dVar30 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).w;
        fVar41 = Delt((float)((double)DAT_008462d8 + dVar27),g_FrameTime * 4.0,
                                &(moby->pos).z);
        if (fVar41 == 0.0) {
          if (moby->state == '\x13') {
            moby->state = '\x05';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
            }
          }
          else if (moby->state == '\x14') {
            moby->state = '\a';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
            }
          }
          else {
            dVar34 = 3.5;
            dVar29 = (double)MB_randRangeFloat(2.0,3.5);
            *(float *)((int)pvVar4 + 0x294) = (float)dVar29;
            *(float *)((int)pvVar4 + 0x1a4) = (float)((double)g_FrameTime * dVar31);
            moby->state = '\x0e';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)((double)animationSpeed * dVar34);
              MB_SetAnimation(lVar20,0,0,(int)((double)animationSpeed * dVar34));
            }
          }
        }
        (moby->pos).z = (moby->pos).z - DAT_008462d8;
        M580_003cd510
                  (CONCAT44((float)dVar33,(float)dVar30),CONCAT44((float)dVar27,(float)dVar32),6);
        return;
      }
      (moby->pos).z = fVar41 + DAT_008462d8;
      dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar20 + 0x10,0);
      dVar31 = (double)(moby->pos).x;
      dVar33 = (double)(moby->pos).y;
      dVar30 = (double)(moby->pos).w;
      if (dVar27 - (double)*(float *)((int)pvVar4 + 0x228) < 0.0) {
        dVar27 = (double)*(float *)((int)pvVar4 + 0x228);
      }
      Delt((float)dVar27,g_FrameTime * 4.0,&(moby->pos).z);
      dVar32 = (double)(moby->pos).z;
      if (dVar27 == dVar32) {
        if (moby->animationId != '\f') {
          local_80 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 5.5));
          dVar32 = (double)(moby->pos).z;
        }
        moby->state = (char)(ZERO_MASK((0x11 - (uint)moby->state))) + '\x17';
      }
      (moby->pos).z = (float)(dVar32 - (double)DAT_008462d8);
      local_80 = (longlong)(int)(animationSpeed * 10.5);
      if (worldUpdateTime <= (int)(animationSpeed * 10.5)) {
        return;
      }
      M580_003cd510
                (CONCAT44((float)dVar31,(float)dVar33),CONCAT44((float)dVar27,(float)dVar30),6);
      return;
    }
    if (0x16 < bVar1) goto LAB_003cfca0;
  }
  if (bVar1 == 0x16) {
    (moby->pos).z = fVar41 + DAT_008462d8;
    uVar22 = MB_randInt(0xff);
    if ((uVar22 & 1) != 0) {
      uVar11.piece<0,4>() = (moby->pos).x;
      uVar11.piece<4,4>() = (moby->pos).y;
      uVar12.piece<0,4>() = (moby->pos).z;
      uVar12.piece<4,4>() = (moby->pos).w;
      M580_003cd980(uVar11,uVar12);
    }
  }
  local_110 = *(float *)((int)pvVar4 + 0x1d0);
  local_10c = *(float *)((int)pvVar4 + 0x1d4);
  local_108 = *(undefined4 *)((int)pvVar4 + 0x1d8);
  local_104 = *(undefined4 *)((int)pvVar4 + 0x1dc);
  dVar27 = (double)FUN_005e8338((double)(local_110 - (moby->pos).x),
                                (double)(local_10c - (moby->pos).y));
  OrganicDeltAngSpeed
            ((double)(float)(dVar27 + (double)*(float *)((int)pvVar4 + 0x244)),0x3fa99999a0000000,
             0x3fd3333340000000,0x3fc99999a0000000,lVar20);
  dVar27 = (double)cosf((moby->rotation).z);
  dVar31 = 2.0;
  local_140 = (float)(dVar27 * 2.0);
  dVar27 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_13c = (float)(dVar27 * dVar31);
  lVar25 = lVar20 + 0x10;
  local_138 = 0;
  FUN_005e7f54(&local_140,&local_140,lVar25);
  MB_UpdateNavMove
            (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x180),&local_140,auStack_130);
  M580_003cdd50(lVar20);
  if (moby->state == '\x16') {
    (moby->pos).z = (moby->pos).z - DAT_008462d8;
  }
  if (*(int *)((int)pvVar4 + 0x214) == 2) {
    uVar24 = '\a';
    if (*(int *)((int)pvVar4 + 0x278) < 0) {
      uVar24 = ((byte)(ZERO_MASK((uint)*(ushort *)((int)pvVar4 + 0x25e))) & 4) +
               0xe;
    }
    moby->state = uVar24;
  }
  else if ((*(int *)((int)pvVar4 + 0x278) < 0) ||
          (iVar23 = MB_IsPntInCuboid
                              ((Vec4 *)((int)pvVar4 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x278)
                              ), iVar23 != 0)) {
    FUN_005e81f0(auStack_120,uVar26 + 0x1d0,uVar26 + 0x220);
    dVar27 = (double)FUN_005e8588(lVar25,&local_110);
    if ((12.0 <= dVar27) || (moby->state != '\x16')) {
      dVar27 = (double)FUN_005e8588(lVar25,&local_110);
      if (((dVar27 < 1.5) && (moby->state == '\x05')) &&
         (moby->state = '\x06', moby->animationId != '\x01')) {
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar20,1,0,(int)(animationSpeed * 3.5));
      }
    }
    else {
      moby->state = '\x13';
      PlayMobySound(4,0,moby);
      if (moby->animationId != '\0') {
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else {
    moby->state = '\a';
  }
  return;
}


