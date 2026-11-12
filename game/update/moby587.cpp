// game/update/moby587.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x3d4228-0x3d5588
#include "game/update/moby587.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1422.h"
#include "idol/fastfunc.h"

// 0x03d4228 (0x80 bytes)
void FUN_003d4228(MobyInstance *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_1->pVar;
  if (param_1->state != '\x02') {
    param_1->state = '\x02';
    *(undefined4 *)((int)pvVar1 + 0x6c) = param_2;
  }
  iVar2 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar1 + 0x70));
  if (iVar2 == 0) {
    iVar2 = sound_LevelPlay(0x12,0,param_1);
    *(int *)((int)pvVar1 + 0x70) = iVar2;
  }
  return;
}


// 0x03d42a8 (0x98 bytes)
void FUN_003d42a8(MobyInstance *param_1)

{
  void *pvVar1;
  int handle;
  
  pvVar1 = param_1->pVar;
  if (param_1->state == '\x02') {
    param_1->state = '\x03';
    handle = *(int *)((int)pvVar1 + 0x70);
    if (((handle != -1) && (g_SoundChannels[handle].pMoby == param_1)) &&
       (g_SoundChannels[handle].state != '\0')) {
      sound_Kill(handle);
    }
    *(undefined4 *)((int)pvVar1 + 0x70) = 0xffffffff;
  }
  return;
}


// 0x03d4340 (0x44 bytes)
undefined8 M587_003d4340(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x03') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = 1;
  }
  else if ((*(char *)(param_1 + 0x20) == '\x02') && (*(int *)(*(int *)(param_1 + 0x78) + 0x6c) == 0)
          ) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x03d43c8 (0x308 bytes)
void M587_003d43c8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  GPiece<32> local_30;
  
  DrawRoundedRect
            (DAT_00846680 + DAT_0084668c,DAT_00846690 + DAT_00846680,DAT_0084667c + DAT_00846694,
             DAT_0084667c + DAT_00846698,DAT_0084669c);
  dVar7 = (double)FastIntToDouble(worldUpdateTime % 0x3c);
  fVar1 = (float)(dVar7 * 0.01666666753590107) * 6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar7 = 1.0;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 3.0 + 0.5);
  if ((dVar8 <= 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
    dVar7 = 0.0;
  }
  uVar5 = FastLerpColor(dVar7,DAT_00846684,DAT_00846688);
  iVar6 = MB_randInt(10);
  FastDoubleToInt((double)(longlong)iVar6);
  FontPrintLargeCenter(DAT_0084667c,DAT_00846680,uVar5,local_30,8);
  return;
}


// 0x03d46d0 (0x14 bytes)
void M587_003d46d0(void)

{
  DAT_008466ec = 0x10000;
  return;
}


// 0x03d4720 (0x1ec bytes)
void M587_003d4720(int param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar3 = (double)FastWrapRot(*(float *)(param_1 + 0x44),*(float *)(iVar1 + 0x6c));
  *(float *)(param_1 + 0x44) = (float)dVar3;
  if (*(char *)(param_1 + 0x20) == '\x05') {
    if (dVar3 <= 0.5235987901687622) {
      if (dVar3 < -0.5235987901687622) {
        *(undefined4 *)(param_1 + 0x44) = 0xbf060a92;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x3f060a92;
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\x04') {
    if (dVar3 <= 0.0872664600610733) {
      if (dVar3 < -0.0872664600610733) {
        *(undefined4 *)(param_1 + 0x44) = 0xbdb2b8c2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0x3db2b8c2;
    }
  }
  else if (dVar3 <= 0.03490658476948738) {
    if (dVar3 < -0.03490658476948738) {
      *(undefined4 *)(param_1 + 0x44) = 0xbd0efa35;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3d0efa35;
  }
  dVar4 = (double)FastWrapRot
                            (*(float *)(iVar1 + 0x74),
                             DAT_0084671c * 0.017453292 * g_FrameTime);
  fVar2 = DAT_00846718;
  dVar3 = (double)(float)(3.141592502593994 - dVar4);
  if (dVar4 - (double)(float)(3.141592502593994 - dVar4) < 0.0) {
    dVar3 = dVar4;
  }
  dVar5 = (double)(float)(-3.141592502593994 - dVar4);
  if ((double)(float)(-3.141592502593994 - dVar4) - dVar3 < 0.0) {
    dVar5 = dVar3;
  }
  dVar3 = (double)(float)(dVar5 * dVar5);
  dVar6 = (double)(float)(dVar3 * (double)(float)(dVar3 * dVar5));
  *(float *)(iVar1 + 0x74) = (float)dVar4;
  dVar4 = (double)(float)(dVar3 * dVar6);
  *(float *)(param_1 + 0x18) =
       fVar2 * ((float)(dVar3 * dVar4) * 2.601887e-06 +
               (float)(dVar4 * -0.0001980741071747616 +
                      (double)(float)(dVar6 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar3 * dVar5) *
                                                     -0.16666656732559204 + dVar5)))) +
       *(float *)(iVar1 + 100);
  return;
}


// 0x03d4938 (0x5d0 bytes)
// inlined: FastRSqrt @0x3d4b20
void M587_003d4938(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  undefined4 local_f0 [8];
  
  iVar8 = MB_randInt(5);
  dVar12 = 1.0;
  MB_randRangeFloat(1.0,2.5);
  MB_randRot();
  dVar11 = 0.0;
  iVar9 = 0;
  if (0 < iVar8 + 5) {
    do {
      MB_randSphere(dVar11,(double)(DAT_00846748 * g_FrameTime),local_f0);
      MB_randRangeFloat(-DAT_00846744,DAT_00846744);
      MB_randRangeFloat(-DAT_00846744,DAT_00846744);
      MB_randRangeFloat(DAT_0084675c,DAT_00846760);
      MB_randRangeFloat(DAT_00846764,DAT_00846768);
      uVar2 = DAT_00846770;
      uVar1 = DAT_0084676c;
      MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar3 = FastLerpColor(uVar1,uVar2);
      uVar2 = DAT_00846778;
      uVar1 = DAT_00846774;
      MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar4 = FastLerpColor(uVar1,uVar2);
      dVar10 = (double)MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar5 = FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)((double)(longlong)DAT_0084674c * dVar10 + dVar12)));
      dVar13 = (double)(longlong)DAT_00846750;
      dVar10 = (double)MB_randRangeFloat(-DAT_00846758,DAT_00846758);
      uVar6 = FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar13 * (double)(float)(dVar10 + dVar12))));
      dVar13 = (double)(longlong)DAT_00846754;
      dVar10 = (double)MB_randRangeFloat(-DAT_00846758,DAT_00846758);
      uVar7 = FastDoubleToInt
                        ((double)(animationSpeed *
                                 (float)(dVar13 * (double)(float)(dVar10 + dVar12))));
      SpawnPart_2(local_120,local_110,local_100,uVar3,uVar4,uVar5,uVar6,uVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8 + 5);
  }
  return;
}


// 0x03d4f28 (0x5f0 bytes)
/* Moby 587 */

void UpdateMoby_587(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  double dVar10;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  longlong local_30;
  
  lVar8 = (longlong)(int)moby;
  local_50.x = -(moby->pos).x;
  fVar2 = (moby->pos).z;
  local_50.y = -(moby->pos).y;
  local_50.z = -fVar2;
  pvVar5 = moby->pVar;
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(float *)((int)pvVar5 + 0x60) = fVar2;
      fVar3 = (moby->pos).z;
      *(undefined4 *)((int)pvVar5 + 0x70) = 0;
      *(f32 *)((int)pvVar5 + 100) = fVar3;
      *(undefined4 *)((int)pvVar5 + 0x68) = 0;
      *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
      dVar10 = (double)MB_randRot();
      *(float *)((int)pvVar5 + 0x74) = (float)dVar10;
      *(uint *)((int)pvVar5 + 0x5c) = *(uint *)((int)pvVar5 + 0x5c) | 1;
      moby->state = (char)(ZERO_MASK(*(int *)((int)pvVar5 + 0x88))) + '\x02';
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 < 4) {
      iVar9 = FastDecTimerS32((int)pvVar5 + 0x7c);
      if (iVar9 != 0) {
        dVar10 = (double)FastIntToDouble(DAT_00facc7c);
        fVar4 = (float)(dVar10 - (double)DAT_00846730) /
                (float)((double)DAT_00846734 - (double)DAT_00846730);
        fVar2 = 1.0;
        if ((fVar4 <= 1.0) && (fVar2 = fVar4, fVar4 < 0.0)) {
          fVar2 = 0.0;
        }
        fVar4 = DAT_00846728;
        if (*(int *)((int)pvVar5 + 0x84) != 0) {
          fVar4 = DAT_00846720;
        }
        *(float *)((int)pvVar5 + 0x6c) =
             fVar4 * -(fVar2 * 0.333 - 1.0) * 0.017453292 * g_FrameTime;
        moby->state = '\x04';
      }
    }
    else {
      if ((moby->enabled != '\0') &&
         (iVar9 = FastDecTimerS32((int)pvVar5 + 0x8c), iVar9 != 0)) {
        M587_003d4938(lVar8);
        iVar9 = MB_randRange(0x5a,0x78);
        local_30 = (longlong)iVar9;
        *(int *)((int)pvVar5 + 0x8c) = (int)(animationSpeed * ((float)local_30 + 0.5));
      }
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        *(undefined4 *)((int)pvVar5 + 0x8c) = 0;
        moby->state = '\x05';
        iVar9 = PlayMobySound(1,0,moby);
        *(short *)((int)pvVar5 + 0x92) = (short)iVar9;
      }
      if ((*(int *)((int)pvVar5 + 0x80) != 0) &&
         (fVar2 = (moby->pos).y - g_heroPosition.y, fVar4 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar4 * fVar4 + fVar2 * fVar2) < DAT_0084672c)) {
        moby->state = '\x05';
        iVar9 = PlayMobySound(1,0,moby);
        *(short *)((int)pvVar5 + 0x92) = (short)iVar9;
      }
    }
  }
  else if (bVar1 < 6) {
    if ((moby->enabled != '\0') &&
       (iVar9 = FastDecTimerS32((int)pvVar5 + 0x8c), iVar9 != 0)) {
      M587_003d4938(lVar8);
      iVar9 = MB_randRange(0xf,0x1e);
      local_30 = (longlong)iVar9;
      *(int *)((int)pvVar5 + 0x8c) = (int)(animationSpeed * ((float)local_30 + 0.5));
    }
    dVar10 = (double)FastIntToDouble(DAT_00facc7c);
    fVar2 = 1.0;
    fVar4 = (float)(dVar10 - (double)DAT_00846730) /
            (float)((double)DAT_00846734 - (double)DAT_00846730);
    if ((fVar4 <= 1.0) && (fVar2 = fVar4, fVar4 < 0.0)) {
      fVar2 = 0.0;
    }
    if ((*(int *)((int)pvVar5 + 0x80) == 0) &&
       ((*(int *)((int)pvVar5 + 0x88) == 0 || (*(int *)((int)pvVar5 + 0x84) != 0)))) {
      if (*(int *)((int)pvVar5 + 0x84) == 0) {
        fVar4 = *(float *)((int)pvVar5 + 0x70);
        fVar7 = DAT_00846714;
      }
      else {
        fVar4 = *(float *)((int)pvVar5 + 0x70);
        fVar7 = DAT_00846710;
      }
      fVar7 = fVar7 * -(fVar2 * 0.333 - 1.0);
      fVar2 = g_FrameTimeSq;
    }
    else {
      fVar4 = *(float *)((int)pvVar5 + 0x70);
      fVar2 = 15.0;
      fVar7 = g_FrameTimeSq;
    }
    fVar2 = -(fVar7 * fVar2 - fVar4);
    *(float *)((int)pvVar5 + 0x70) = fVar2;
    *(float *)((int)pvVar5 + 100) = *(float *)((int)pvVar5 + 100) + fVar2;
    if ((moby->pos).z < *(float *)((int)pvVar5 + 0x60) - 10.0) {
      if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
          ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                ((int)g_heroPosition.z >> 0x1f)) <
           (int)(FLOAT_ORDER(HeroDeathHeight)))) && (g_heroState != DEATH_FALLING)) {
        TransitionMovement(0x77,1);
        fVar2 = *(float *)((int)pvVar5 + 0x70);
      }
      *(float *)((int)pvVar5 + 0x70) = -(g_FrameTimeSq * 13.7 - fVar2);
      fVar3 = (moby->pos).z;
      uVar6 = (int)fVar3 >> 0x1f;
      if ((int)((uVar6 >> 1 ^ (uint)fVar3) - uVar6) < 0x41700000) {
        DeleteMoby(moby);
        return;
      }
    }
  }
  M587_003d4720(lVar8);
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x20),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             lVar8 + 0x40);
  return;
}


// 0x03d5518 (0x2c bytes)
undefined8 M587_003d5518(int param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x20) == '\x02') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
    uVar1 = 0;
  }
  return uVar1;
}


// 0x03d5544 (0x30 bytes)
bool M587_003d5544(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  bVar1 = *(char *)(param_1 + 0x20) == '\x01';
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x20) = 3;
    *(undefined4 *)(iVar2 + 0x7c) = param_2;
    *(undefined4 *)(iVar2 + 0x78) = param_3;
  }
  return bVar1;
}


// 0x03d5574 (0x14 bytes)
void M587_003d5574(void)

{
  DAT_008467d4 = 0x10000;
  return;
}


