// game/update/moby664.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x408890-0x408ef8
#include "game/update/moby664.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby617.h"
#include "idol/fastfunc.h"

// 0x0408890 (0x14 bytes)
void M664_00408890(void)

{
  DAT_00854d18 = 0x10000;
  return;
}


// 0x04088d0 (0x628 bytes)
/* Moby 664 */

void UpdateMoby_664(MobyInstance *moby)

{
  f32 fVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  Vec4 local_c0;
  f32 local_b0;
  f32 local_ac;
  f32 local_a8;
  f32 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  longlong local_80;
  
  lVar7 = (longlong)(int)moby;
  uVar6 = ZEXT48(&stack0x00000000);
  local_c0.x = -(moby->pos).x;
  dVar14 = (double)(moby->pos).z;
  local_c0.y = -(moby->pos).y;
  local_c0.w = (moby->pos).w;
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  local_b0 = (moby->rotation).x;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  local_c0.z = (float)-dVar14;
  dVar13 = (double)(*(float *)((int)pvVar3 + 0x84) - 0.25);
  if (*(int *)((int)pvVar3 + 0x80) == 0) {
    *(f32 *)((int)pvVar3 + 0x60) = local_b0;
    *(f32 *)((int)pvVar3 + 100) = (moby->rotation).y;
    *(f32 *)((int)pvVar3 + 0x68) = (moby->rotation).z;
    fVar1 = (moby->rotation).w;
    *(undefined1 *)((int)pvVar3 + 0x70) = 0;
    *(f32 *)((int)pvVar3 + 0x6c) = fVar1;
    *(undefined1 *)((int)pvVar3 + 0x71) = 0;
    *(undefined1 *)((int)pvVar3 + 0x72) = 0;
    *(undefined1 *)((int)pvVar3 + 0x73) = 0;
    *(undefined1 *)((int)pvVar3 + 0x74) = 0;
    *(undefined1 *)((int)pvVar3 + 0x75) = 0;
    *(undefined1 *)((int)pvVar3 + 0x76) = 0;
    *(undefined1 *)((int)pvVar3 + 0x77) = 0;
    *(undefined1 *)((int)pvVar3 + 0x78) = 0;
    *(undefined1 *)((int)pvVar3 + 0x79) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7b) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x7f) = 0;
    fVar2 = (moby->pos).z;
    *(undefined4 *)((int)pvVar3 + 0x80) = 1;
    (moby->pos).z = fVar2 - 0.3;
    *(f32 *)((int)pvVar3 + 0x84) = (moby->pos).z;
  }
  if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
    iVar8 = *(int *)((int)pvVar3 + 0x88);
    if (iVar8 == 0) {
      PlayMobySound(0,0,moby);
      iVar8 = *(int *)((int)pvVar3 + 0x88);
    }
    auVar16 = ZEXT416(0xffffffff);
    auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar16 = loadVectorLeftIndexed(8,0x4088a8);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar16 = vectorMultiplyAddFloatingPoint
                        (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                         auVar17);
    local_80 = (longlong)(int)(animationSpeed * 30.5);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    if (iVar8 < (int)(animationSpeed * 30.5)) {
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x88,uVar9);
      *(undefined4 *)((int)pvVar3 + 0x88U & 0xfffffffc) = uVar4;
    }
  }
  if (*(int *)((int)pvVar3 + 0x88) == 0) {
    dVar10 = 0.01745329238474369;
    uVar12 = 0;
    AccelDeltAng
              (0,(double)(DAT_00854d58 * 0.017453292 * g_FrameTimeSq),
               (double)(DAT_00854d5c * DAT_0071f40c),
               (double)(DAT_00854d60 * 0.017453292 * g_FrameTime),uVar9 + 0x60,
               &DAT_004088a8,uVar9 + 0x70);
    AccelDeltAng
              (uVar12,(double)((float)((double)DAT_00854d58 * dVar10) * g_FrameTimeSq),
               (double)(DAT_00854d5c * DAT_0071f40c),
               (double)((float)((double)DAT_00854d60 * dVar10) * g_FrameTime),uVar9 + 100)
    ;
    fVar2 = (moby->pos).z;
    fVar2 = DAT_00854d44 * g_FrameTime * (*(float *)((int)pvVar3 + 0x84) - fVar2) + fVar2;
    dVar10 = (double)fVar2;
    (moby->pos).z = fVar2;
    dVar11 = (double)*(float *)((int)pvVar3 + 0x84);
    if (dVar11 < dVar10) {
      (moby->pos).z = *(float *)((int)pvVar3 + 0x84);
      dVar10 = dVar11;
    }
    if (dVar14 < dVar13 && dVar13 <= dVar10) {
      PlayMobySound(2,0,moby);
    }
  }
  else {
    FastDecTimerS32(uVar9 + 0x88);
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar5 = g_heroPosition.x - (moby->pos).x;
    dVar15 = (double)(moby->pos).z;
    local_a0 = *(undefined4 *)((int)pvVar3 + 0x60);
    local_9c = *(undefined4 *)((int)pvVar3 + 100);
    local_98 = *(undefined4 *)((int)pvVar3 + 0x68);
    local_94 = *(undefined4 *)((int)pvVar3 + 0x6c);
    dVar11 = 0.01745329238474369;
    dVar10 = (double)(DAT_00854d3c *
                     ((float)((double)g_heroPosition.z - dVar15) * (moby->transform).v0.z +
                     fVar5 * (moby->transform).v0.x + fVar2 * (moby->transform).v0.y));
    AccelDeltAng
              (-(double)(DAT_00854d3c *
                        ((float)((double)g_heroPosition.z - dVar15) * (moby->transform).v1.z +
                        fVar5 * (moby->transform).v1.x + fVar2 * (moby->transform).v1.y)),
               (double)(DAT_00854d4c * 0.017453292 * g_FrameTimeSq),
               (double)(DAT_00854d50 * DAT_0071f40c),
               (double)(DAT_00854d54 * 0.017453292 * g_FrameTime),uVar9 + 0x60,
               &DAT_00850000,uVar9 + 0x70);
    AccelDeltAng
              (dVar10,(double)((float)((double)DAT_00854d4c * dVar11) * g_FrameTimeSq),
               (double)(DAT_00854d50 * DAT_0071f40c),
               (double)((float)((double)DAT_00854d54 * dVar11) * g_FrameTime),uVar9 + 100)
    ;
    dVar10 = -(double)(DAT_00854d40 * g_FrameTime - (moby->pos).z);
    (moby->pos).z = (float)dVar10;
    if ((dVar13 < dVar14) && (dVar10 <= dVar13)) {
      PlayMobySound(1,0,moby);
    }
    MB_TransformBetweenFrames
              (&g_heroPosition,uVar6 - 0x90,lVar7 + 0x10,uVar6 - 0xa0,uVar9 + 0x60);
    DAT_00969dd0 = local_90 - g_heroPosition.x;
    DAT_00969dd4 = local_8c - g_heroPosition.y;
    DAT_00969ddc = local_84;
    DAT_00969dd8 = (local_88 - g_heroPosition.z) + (float)((double)(moby->pos).z - dVar15);
  }
  MB_BobMotion
            (0.14,g_FrameTime * 0.5235988,moby,(float *)((int)pvVar3 + 0x98),
             (float *)((int)pvVar3 + 0x9c));
  MB_SwingMotion
            (0x3fb6571840000000,(double)(g_FrameTime * 0.31415927),
             (double)(g_FrameTime * 0.4886922),lVar7,uVar9 + 0x90,uVar9 + 0x94);
  dVar14 = (double)FastWrapRot(*(float *)((int)pvVar3 + 0x60),(moby->rotation).x);
  (moby->rotation).x = (float)dVar14;
  dVar14 = (double)FastWrapRot(*(float *)((int)pvVar3 + 100),(moby->rotation).y);
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  (moby->rotation).y = (float)dVar14;
  local_c0.z = local_c0.z + fVar2;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x20),&local_c0,uVar6 - 0xb0,lVar7 + 0x40);
  return;
}


