// game/update/moby1293.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x23efc4-0x23f9e0
// shared update function UpdateMoby_{1293_1320}; registered for oClasses 1293, 1320
#include <stdio.h>
#include "game/update/moby1293.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x023efc4 (0x14 bytes)
void M1320_0023efc4(void)

{
  DAT_0078dfa4 = 0x10000;
  return;
}


// shared update function, registered for oClasses 1293, 1320
// 0x023f010 (0x810 bytes)
// strings: 006553b0: 'Floating ship piece UID:%d oclass:%d missing trigger moby! Will just float there.\n'

/* Moby 1293
   Moby 1320 */

void UpdateMoby_1293(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  Vec4 local_d0;
  f32 local_c0;
  f32 local_bc;
  f32 local_b8;
  f32 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  longlong local_90;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  local_d0.x = -(moby->pos).x;
  dVar17 = (double)(moby->pos).z;
  local_d0.y = -(moby->pos).y;
  local_d0.w = (moby->pos).w;
  pvVar5 = moby->pVar;
  uVar13 = ZEXT48(pvVar5);
  local_c0 = (moby->rotation).x;
  local_bc = (moby->rotation).y;
  local_b8 = (moby->rotation).z;
  local_b4 = (moby->rotation).w;
  local_d0.z = (float)-dVar17;
  bVar1 = moby->state;
  dVar16 = (double)(*(float *)((int)pvVar5 + 0x84) - 0.3);
  if (bVar1 == 0) {
    *(f32 *)((int)pvVar5 + 0x60) = (moby->rotation).x;
    fVar3 = (moby->rotation).y;
    *(undefined4 *)((int)pvVar5 + 0x80) = 1;
    *(f32 *)((int)pvVar5 + 100) = fVar3;
    *(f32 *)((int)pvVar5 + 0x68) = (moby->rotation).z;
    fVar3 = (moby->rotation).w;
    *(undefined1 *)((int)pvVar5 + 0x70) = 0;
    *(f32 *)((int)pvVar5 + 0x6c) = fVar3;
    *(undefined1 *)((int)pvVar5 + 0x71) = 0;
    *(undefined1 *)((int)pvVar5 + 0x72) = 0;
    *(undefined1 *)((int)pvVar5 + 0x73) = 0;
    *(undefined1 *)((int)pvVar5 + 0x74) = 0;
    *(undefined1 *)((int)pvVar5 + 0x75) = 0;
    *(undefined1 *)((int)pvVar5 + 0x76) = 0;
    *(undefined1 *)((int)pvVar5 + 0x77) = 0;
    *(undefined1 *)((int)pvVar5 + 0x78) = 0;
    *(undefined1 *)((int)pvVar5 + 0x79) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7a) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7b) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7d) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7e) = 0;
    *(undefined1 *)((int)pvVar5 + 0x7f) = 0;
    fVar4 = (moby->pos).z;
    *(float *)((int)pvVar5 + 0x84) = fVar4;
    if (*(int *)((int)pvVar5 + 0x8c) == -1) {
      printf("Floating ship piece UID:%d oclass:%d missing trigger moby! Will just float there.\n"
                   ,moby->uid,moby->oClass);
      moby->state = '\x02';
    }
    else {
      (moby->pos).z = fVar4 - 5.0;
      dVar18 = -1.5707963705062866;
      dVar16 = 1.5707963705062866;
      dVar17 = (double)MB_randRangeFloat(-1.5707964,1.5707964);
      (moby->rotation).x = (float)dVar17;
      dVar17 = (double)MB_randRangeFloat((float)dVar18,(float)dVar16);
      (moby->rotation).y = (float)dVar17;
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (((g_MobyInstance + *(int *)((int)pvVar5 + 0x8c) == (MobyInstance *)0x0) ||
        (uVar2 = g_MobyInstance[*(int *)((int)pvVar5 + 0x8c)].state, uVar2 == 0xfe)) ||
       (uVar2 == 0xfd)) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      iVar12 = *(int *)((int)pvVar5 + 0x88);
      if (iVar12 == 0) {
        PlayMobySound(0,0,moby);
        iVar12 = *(int *)((int)pvVar5 + 0x88);
      }
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0x10,0x23efd8);
      auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                           auVar21);
      local_90 = (longlong)(int)(animationSpeed * 30.5);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      if (iVar12 < (int)(animationSpeed * 30.5)) {
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x88,uVar13
                          );
        *(undefined4 *)((int)pvVar5 + 0x88U & 0xfffffffc) = uVar8;
      }
    }
    if (*(int *)((int)pvVar5 + 0x88) == 0) {
      fVar4 = (moby->pos).z;
      fVar4 = DAT_0078dfd0 * g_FrameTime * (*(float *)((int)pvVar5 + 0x84) - fVar4) +
              fVar4;
      (moby->pos).z = fVar4;
      uVar15 = 0;
      if (*(float *)((int)pvVar5 + 0x84) - 2.0 <= fVar4) {
        dVar18 = 0.01745329238474369;
        AccelDeltAng
                  (0,(double)(DAT_0078dfe4 * 0.017453292 * g_FrameTimeSq),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),
                   (double)(DAT_0078dfec * 0.017453292 * g_FrameTime),uVar13 + 0x60,
                   &DAT_00720000,uVar13 + 0x70);
        AccelDeltAng
                  (uVar15,(double)((float)((double)DAT_0078dfe4 * dVar18) * g_FrameTimeSq),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),
                   (double)((float)((double)DAT_0078dfec * dVar18) * g_FrameTime),
                   uVar13 + 100);
      }
      else {
        (moby->pos).z = DAT_0078dfd0 * g_FrameTime + fVar4;
        dVar19 = 0.01745329238474369;
        dVar14 = 3.0;
        dVar18 = 1.5707963705062866;
        AccelDeltAng
                  (0,(double)(DAT_0078dfe4 * 0.017453292 * g_FrameTimeSq * 3.0),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),(double)(g_FrameTime * 1.5707964)
                   ,uVar13 + 0x60,&DAT_0023efd8,uVar13 + 0x70);
        AccelDeltAng
                  (uVar15,(double)(float)((double)((float)((double)DAT_0078dfe4 * dVar19) *
                                                  g_FrameTimeSq) * dVar14),
                   (double)(DAT_0078dfe8 * DAT_0071f40c),
                   (double)(float)((double)g_FrameTime * dVar18),uVar13 + 100);
      }
      fVar3 = (moby->pos).z;
      uVar6 = (int)fVar3 >> 0x1f;
      uVar7 = (int)*(uint *)((int)pvVar5 + 0x84) >> 0x1f;
      fVar4 = *(float *)((int)pvVar5 + 0x84);
      fVar9 = (moby->pos).z;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0x84)) - uVar7) <
          (int)((uVar6 >> 1 ^ (uint)fVar3) - uVar6)) {
        (moby->pos).z = fVar4;
        fVar9 = fVar4;
      }
      if (dVar17 < dVar16 && dVar16 <= (double)fVar9) {
        PlayMobySound(2,0,moby);
      }
    }
    else {
      FastDecTimerS32(uVar13 + 0x88);
      fVar4 = g_heroPosition.y - (moby->pos).y;
      fVar9 = g_heroPosition.x - (moby->pos).x;
      dVar19 = (double)(moby->pos).z;
      local_b0 = *(undefined4 *)((int)pvVar5 + 0x60);
      local_ac = *(undefined4 *)((int)pvVar5 + 100);
      local_a8 = *(undefined4 *)((int)pvVar5 + 0x68);
      local_a4 = *(undefined4 *)((int)pvVar5 + 0x6c);
      dVar14 = 0.01745329238474369;
      dVar18 = (double)(DAT_0078dfc8 *
                       ((float)((double)g_heroPosition.z - dVar19) * (moby->transform).v0.z +
                       fVar9 * (moby->transform).v0.x + fVar4 * (moby->transform).v0.y));
      AccelDeltAng
                (-(double)(DAT_0078dfc8 *
                          ((float)((double)g_heroPosition.z - dVar19) * (moby->transform).v1.z +
                          fVar9 * (moby->transform).v1.x + fVar4 * (moby->transform).v1.y)),
                 (double)(DAT_0078dfd8 * 0.017453292 * g_FrameTimeSq),
                 (double)(DAT_0078dfdc * DAT_0071f40c),
                 (double)(DAT_0078dfe0 * 0.017453292 * g_FrameTime),uVar13 + 0x60,0x790000
                 ,uVar13 + 0x70);
      AccelDeltAng
                (dVar18,(double)((float)((double)DAT_0078dfd8 * dVar14) * g_FrameTimeSq),
                 (double)(DAT_0078dfdc * DAT_0071f40c),
                 (double)((float)((double)DAT_0078dfe0 * dVar14) * g_FrameTime),
                 uVar13 + 100);
      dVar18 = -(double)(DAT_0078dfcc * g_FrameTime - (moby->pos).z);
      (moby->pos).z = (float)dVar18;
      if ((dVar16 < dVar17) && (dVar18 <= dVar16)) {
        PlayMobySound(1,0,moby);
      }
      MB_TransformBetweenFrames
                (&g_heroPosition,uVar10 - 0xa0,lVar11 + 0x10,uVar10 - 0xb0,uVar13 + 0x60);
      DAT_00969dd0 = local_a0 - g_heroPosition.x;
      DAT_00969dd4 = local_9c - g_heroPosition.y;
      DAT_00969ddc = local_94;
      DAT_00969dd8 = (local_98 - g_heroPosition.z) + (float)((double)(moby->pos).z - dVar19);
    }
    MB_BobMotion
              (0.14,g_FrameTime * 0.5235988,moby,(float *)((int)pvVar5 + 0x98),
               (float *)((int)pvVar5 + 0x9c));
    MB_SwingMotion
              (0x3fb6571840000000,(double)(g_FrameTime * 0.43633232),
               (double)(g_FrameTime * 0.54105204),lVar11,uVar13 + 0x90,uVar13 + 0x94);
    dVar17 = (double)FastWrapRot(*(float *)((int)pvVar5 + 0x60),(moby->rotation).x);
    (moby->rotation).x = (float)dVar17;
    dVar17 = (double)FastWrapRot(*(float *)((int)pvVar5 + 100),(moby->rotation).y);
    local_d0.x = local_d0.x + (moby->pos).x;
    local_d0.y = local_d0.y + (moby->pos).y;
    fVar4 = (moby->pos).z;
    (moby->rotation).y = (float)dVar17;
    local_d0.z = local_d0.z + fVar4;
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar5 + 0x20),&local_d0,uVar10 - 0xc0,lVar11 + 0x40);
  }
  return;
}


// 0x023f820 (0x14 bytes)
void M1320_0023f820(void)

{
  DAT_0078e03c = 0x10000;
  return;
}


// 0x023f840 (0x1a0 bytes)
void M1320_0023f840(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  GPiece<16> auStack_70;
  GPiece<24> auStack_60;
  
  MB_randSphere
            ((double)(DAT_0078e08c * g_FrameTime),
             (double)(DAT_0078e090 * g_FrameTime),auStack_70);
  MB_randSphere
            ((double)(DAT_0078e08c * g_FrameTime),
             (double)(DAT_0078e090 * g_FrameTime),auStack_60);
  uVar2 = DAT_0078e0a0;
  uVar1 = DAT_0078e09c;
  dVar6 = 0.0;
  dVar5 = 1.0;
  MB_randRangeFloat(0.0,1.0);
  uVar3 = FastLerpColor(uVar1,uVar2);
  uVar2 = DAT_0078e0a0;
  uVar1 = DAT_0078e09c;
  MB_randRangeFloat((float)dVar6,(float)dVar5);
  uVar4 = FastLerpColor(uVar1,uVar2);
  SpawnPart_2
            (param_1 + 0x10,auStack_70,auStack_60,uVar3,uVar4,DAT_0078e0a4,DAT_0078e0a8,DAT_0078e0ac
            );
  return;
}


