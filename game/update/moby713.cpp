// game/update/moby713.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x42f948-0x43153c
#include "game/update/moby713.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x042f948 (0x14 bytes)
void M713_0042f948(void)

{
  DAT_00859d9c = 0x10000;
  return;
}


// 0x042f968 (0x188 bytes)
void M713_0042f968(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  OrganicDelt
            (*(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x94),DAT_00859dc4 * g_FrameTimeSq,
             DAT_00859dc8 * g_FrameTimeSq,DAT_00859dc0 * g_FrameTime,
             (float *)(*(int *)(iVar1 + 0x84) + 0x18),param_2,(float *)(iVar1 + 0x8c));
  OrganicDelt
            (*(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x98),DAT_00859dc4 * g_FrameTimeSq,
             DAT_00859dc8 * g_FrameTimeSq,DAT_00859dc0 * g_FrameTime,
             (float *)(*(int *)(iVar1 + 0x88) + 0x18),param_2,(float *)(iVar1 + 0x90));
  dVar3 = 0.01745329238474369;
  dVar2 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (*(float *)(*(int *)(iVar1 + 0x84) + 0x18) - *(float *)(param_1 + 0x18)
                             ) * DAT_00859dcc * 0.017453292);
  *(float *)(*(int *)(iVar1 + 0x84) + 0x48) = (float)dVar2;
  dVar2 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (float)((double)((*(float *)(*(int *)(iVar1 + 0x88) + 0x18) -
                                              *(float *)(param_1 + 0x18)) * DAT_00859dcc) * dVar3));
  *(float *)(*(int *)(iVar1 + 0x88) + 0x48) = (float)dVar2;
  UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x84));
  UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x88));
  return;
}


// 0x042faf8 (0x148 bytes)
void M713_0042faf8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x84);
  iVar3 = *(int *)(iVar1 + 0x88);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(iVar2 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x94);
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(float *)(*(int *)(iVar1 + 0x88) + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar1 + 0x98);
  *(undefined4 *)(iVar1 + 0x90) = 0;
  dVar5 = 0.01745329238474369;
  dVar4 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (*(float *)(*(int *)(iVar1 + 0x84) + 0x18) - *(float *)(param_1 + 0x18)
                             ) * DAT_00859dcc * 0.017453292);
  *(float *)(*(int *)(iVar1 + 0x84) + 0x48) = (float)dVar4;
  dVar4 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x48),
                             (float)((double)((*(float *)(*(int *)(iVar1 + 0x88) + 0x18) -
                                              *(float *)(param_1 + 0x18)) * DAT_00859dcc) * dVar5));
  *(float *)(*(int *)(iVar1 + 0x88) + 0x48) = (float)dVar4;
  UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x84));
  UpdateMobyTransform(*(MobyInstance **)(iVar1 + 0x88));
  return;
}


// 0x042fc90 (0x18ac bytes)
// strings: 00a0feec: 'None'

/* Moby 713 */

void UpdateMoby_713(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  f32 fVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined4 uVar13;
  Cuboid *pCVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar19;
  MobyInstance *pMVar20;
  int iVar21;
  longlong lVar18;
  undefined4 *unused;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  byte bVar25;
  undefined8 in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  float fVar37;
  Vec4 local_f0;
  f32 local_e0;
  f32 local_dc;
  f32 local_d8;
  f32 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  longlong local_60;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  dVar28 = (double)(moby->pos).x;
  dVar29 = (double)(moby->pos).y;
  fVar37 = (moby->pos).z;
  pvVar9 = moby->pVar;
  uVar24 = ZEXT48(pvVar9);
  local_f0.w = (moby->pos).w;
  local_e0 = (moby->rotation).x;
  local_f0.z = -fVar37;
  unused = &DAT_0042fc40;
  local_dc = (moby->rotation).y;
  local_d8 = (moby->rotation).z;
  local_d4 = (moby->rotation).w;
  local_f0.x = (float)-dVar28;
  local_f0.y = (float)-dVar29;
  dVar30 = 0.0;
  if (DAT_010ccd00 != 0) {
    iVar21 = *(int *)((int)pvVar9 + 0x68);
    unused = (undefined4 *)Splines[iVar21]->cnt;
    if (0 < (int)unused) {
      iVar23 = 0;
      iVar22 = 0;
      dVar28 = 0.10000000149011612;
      do {
        uVar19 = (int)&((Spline *)(Splines[iVar21]->points + -1))->cnt + iVar23;
        local_d0 = *(undefined4 *)(uVar19 + 0x10);
        local_cc = *(undefined4 *)(uVar19 + 0x14);
        local_c8 = *(undefined4 *)(uVar19 + 0x18);
        local_c4 = *(undefined4 *)(uVar19 + 0x1c);
        SpawnPart_41
                  ((float)dVar28,&local_d0,moby,4,0x800000ff,(ulonglong)uVar19,0x7f,2,0xff);
        iVar21 = *(int *)((int)pvVar9 + 0x68);
        iVar22 = iVar22 + 1;
        iVar23 = iVar23 + 0x10;
        unused = (undefined4 *)Splines[iVar21]->cnt;
      } while (iVar22 < (int)unused);
      dVar28 = (double)(moby->pos).x;
      dVar29 = (double)(moby->pos).y;
      fVar37 = (moby->pos).z;
    }
  }
  pCVar14 = Cuboids;
  pMVar20 = g_MobyInstance;
  bVar1 = moby->state;
  bVar25 = (bVar1 == 0) << 1;
  if (bVar1 < 9) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        moby->updateDistance = -1;
        moby->setByGroup = '\x01';
        pCVar14 = Cuboids;
        iVar21 = *(int *)((int)pvVar9 + 100);
        (moby->pos).x = Cuboids[iVar21].pos.x;
        (moby->pos).y = pCVar14[iVar21].pos.y;
        fVar37 = pCVar14[iVar21].pos.z;
        (moby->pos).w = pCVar14[iVar21].pos.w;
        moby->state = '\x01';
        (moby->pos).z = fVar37 - 6.0;
        pMVar20 = CreateMoby(TELEPORT_TUBE_0421);
        *(MobyInstance **)((int)pvVar9 + 0x84) = pMVar20;
        pMVar20->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x84) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x84) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x84) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        pMVar20 = CreateMoby(TELEPORT_TUBE_0422);
        *(MobyInstance **)((int)pvVar9 + 0x88) = pMVar20;
        pMVar20->drawDistance = 0x40;
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x88) + 0x31) = 1;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x88) + 0x38) = *(undefined8 *)&moby->color;
        auVar32 = ZEXT416(0xffffffff);
        auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x88) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        auVar32 = ZEXT416(0xffffffff);
        auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
        *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
        auVar32 = loadVectorLeftIndexed(4,0x42fc40);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        pSVar11 = Splines[*(int *)((int)pvVar9 + 0x68)];
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar34 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar11));
        auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar34 = vectorConvertFromSignedFixedPointWord(auVar34,0);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
        auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar34 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xb4,
                            uVar24);
        *(undefined4 *)((int)pvVar9 + 0xb4U & 0xfffffffc) = uVar13;
        auVar32 = loadVectorLeftIndexed(0xc,0x42fc40);
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar11));
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar36,auVar34);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xb0,
                            uVar24);
        *(undefined4 *)((int)pvVar9 + 0xb0U & 0xfffffffc) = uVar13;
        M713_0042faf8(lVar17);
      }
      else if (bVar1 < 2) {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          auVar32 = loadVectorLeftIndexed(0x10,0x42fc40);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x80,
                              uVar24);
          *(undefined4 *)((int)pvVar9 + 0x80U & 0xfffffffc) = uVar13;
          moby->state = '\x02';
        }
      }
      else if (bVar1 < 3) {
        iVar21 = *(int *)((int)pvVar9 + 0x70);
        fVar3 = g_MobyInstance[iVar21].transform.v0.y;
        fVar4 = g_MobyInstance[iVar21].transform.v0.x;
        fVar5 = g_MobyInstance[iVar21].transform.v0.z;
        dVar27 = (double)(g_FrameTime * 5.0);
        fVar6 = g_MobyInstance[iVar21].pos.x;
        fVar7 = g_MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(-dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        dVar26 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        g_MobyInstance[iVar21].pos.z = (float)((double)g_MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar31);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar26);
        pMVar20 = g_MobyInstance;
        iVar21 = *(int *)((int)pvVar9 + 0x74);
        fVar3 = g_MobyInstance[iVar21].transform.v0.y;
        fVar4 = g_MobyInstance[iVar21].transform.v0.x;
        fVar5 = g_MobyInstance[iVar21].transform.v0.z;
        fVar6 = g_MobyInstance[iVar21].pos.x;
        fVar7 = g_MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        dVar26 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        g_MobyInstance[iVar21].pos.z = (float)((double)g_MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar31);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar26);
        pMVar20 = g_MobyInstance;
        iVar21 = *(int *)((int)pvVar9 + 0x78);
        fVar3 = g_MobyInstance[iVar21].transform.v0.y;
        fVar4 = g_MobyInstance[iVar21].transform.v0.x;
        fVar5 = g_MobyInstance[iVar21].transform.v0.z;
        fVar6 = g_MobyInstance[iVar21].pos.x;
        fVar7 = g_MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(-dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        dVar26 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar26 = (double)(fVar4 * fVar37);
        }
        g_MobyInstance[iVar21].pos.z = (float)((double)g_MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar31);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar26);
        pMVar20 = g_MobyInstance;
        iVar21 = *(int *)((int)pvVar9 + 0x7c);
        fVar3 = g_MobyInstance[iVar21].transform.v0.y;
        fVar4 = g_MobyInstance[iVar21].transform.v0.x;
        fVar5 = g_MobyInstance[iVar21].transform.v0.z;
        fVar6 = g_MobyInstance[iVar21].pos.x;
        fVar7 = g_MobyInstance[iVar21].pos.y;
        dVar29 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar37 = (float)(dVar27 / dVar29);
        dVar28 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        dVar27 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar27 = (double)(fVar3 * fVar37);
        }
        dVar31 = dVar30;
        if (dVar30 - dVar29 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar28 = (double)(fVar5 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar27 = (double)(fVar3 * fVar37);
        }
        if (dVar29 - dVar30 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        g_MobyInstance[iVar21].pos.z = (float)((double)g_MobyInstance[iVar21].pos.z + dVar28);
        pMVar20[iVar21].pos.y = (float)((double)fVar7 + dVar27);
        pMVar20[iVar21].pos.x = (float)((double)fVar6 + dVar31);
        UpdateMobyTransform(g_MobyInstance + *(int *)((int)pvVar9 + 0x70));
        UpdateMobyTransform(g_MobyInstance + *(int *)((int)pvVar9 + 0x74));
        UpdateMobyTransform(g_MobyInstance + *(int *)((int)pvVar9 + 0x78));
        UpdateMobyTransform(g_MobyInstance + *(int *)((int)pvVar9 + 0x7c));
        iVar21 = FastDecTimerS32(uVar24 + 0x80);
        if (iVar21 != 0) {
          moby->state = '\x03';
          PlayMobySound(1,0,moby);
        }
      }
      else {
        fVar37 = OrganicDelt
                           (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z,DAT_00859dc4 * g_FrameTimeSq,
                            DAT_00859dc4 * g_FrameTimeSq,DAT_00859dc0 * g_FrameTime,
                            &(moby->pos).z,(int)(Cuboids + *(int *)((int)pvVar9 + 0x60)),
                            (float *)((int)pvVar9 + 0x9c));
        M713_0042faf8((double)fVar37,lVar17);
        if (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z - 0.0001 <= (moby->pos).z) {
          moby->state = '\x04';
          PlayMobySound(0,0,moby);
        }
      }
    }
    else if (bVar1 < 6) {
      if (bVar1 < 5) {
        dVar28 = 2.0;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0x40000000;
        *(undefined4 *)((int)pvVar9 + 0x98) = 0xc0800000;
        M713_0042f968(lVar17);
        fVar37 = (moby->pos).z;
        if ((ABS((float)((double)(*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) - dVar28
                        )) < 0.0001) &&
           (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 4.0) < 0.0001)) {
          moby->state = '\x05';
        }
      }
      else {
        cVar2 = moby->setByGroup;
        if (cVar2 == '\0') {
          iVar21 = *(int *)((int)pvVar9 + 100);
          fVar3 = Cuboids[iVar21].pos.y;
          fVar4 = Cuboids[iVar21].pos.x;
          fVar5 = g_heroPosition.y - fVar3;
          fVar6 = g_heroPosition.x - fVar4;
          if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 16.0) {
            (moby->pos).x = fVar4;
            (moby->pos).y = fVar3;
            fVar37 = pCVar14[iVar21].pos.z;
            (moby->pos).w = pCVar14[iVar21].pos.w;
            (moby->pos).z = fVar37 - 6.0;
            *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
            *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
            M713_0042faf8(lVar17);
            moby->state = '\x03';
            moby->setByGroup = '\x01';
            PlayMobySound(1,0,moby);
            goto LAB_00431480;
          }
        }
        if (cVar2 == '\x01') {
          iVar21 = *(int *)((int)pvVar9 + 0x60);
          fVar3 = Cuboids[iVar21].pos.y;
          fVar4 = Cuboids[iVar21].pos.x;
          fVar5 = g_heroPosition.y - fVar3;
          fVar6 = g_heroPosition.x - fVar4;
          if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 16.0) {
            (moby->pos).x = fVar4;
            (moby->pos).y = fVar3;
            fVar37 = pCVar14[iVar21].pos.z;
            (moby->pos).w = pCVar14[iVar21].pos.w;
            (moby->pos).z = fVar37 - 6.0;
            *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
            *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
            M713_0042faf8(lVar17);
            moby->state = '\x03';
            moby->setByGroup = '\0';
            PlayMobySound(1,0,moby);
            goto LAB_00431480;
          }
        }
        if (((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) && (g_heroType == '\0')) {
          dVar27 = (double)(fVar37 + 2.0);
          if (cVar2 != '\0') {
            iVar21 = Splines[*(int *)((int)pvVar9 + 0x68)]->cnt;
            *(undefined4 *)((int)pvVar9 + 0xa4) = 0;
            pCVar14 = Cuboids;
            pSVar11 = Splines[*(int *)((int)pvVar9 + 0x68)];
            *(int *)((int)pvVar9 + 0xa0) = iVar21 + -1;
            dVar31 = (double)pCVar14[*(int *)((int)pvVar9 + 100)].rot.z;
            lVar18 = FastDoubleToInt(dVar30);
            iVar21 = (int)(lVar18 << 4);
            local_c0 = *(float *)((int)&pSVar11->points[0].x + iVar21);
            local_bc = *(float *)((int)&pSVar11->points[0].y + iVar21);
            local_b8 = *(float *)((int)&pSVar11->points[0].z + iVar21);
            local_b4 = *(undefined4 *)((int)&pSVar11->points[0].w + iVar21);
            local_a4 = 0;
            local_a8 = 0.0;
            local_ac = 0.0;
            local_b0 = 0.0;
            dVar30 = (double)FUN_005e8338((double)(float)(dVar28 - (double)local_c0),
                                          (double)(float)(dVar29 - (double)local_bc));
            local_a8 = (float)dVar30;
            dVar28 = (double)FUN_005e8338((double)SQRT((float)((double)local_c0 - dVar28) *
                                                       (float)((double)local_c0 - dVar28) +
                                                       (float)((double)local_bc - dVar29) *
                                                       (float)((double)local_bc - dVar29)),
                                          (double)(float)(dVar27 - (double)local_b8));
          }
          else {
            iVar21 = *(int *)((int)pvVar9 + 0x68);
            auVar32 = ZEXT416(1);
            *(undefined4 *)((int)pvVar9 + 0xa0) = 0;
            auVar33 = loadVectorLeftIndexed(in_LR,ZEXT48(Splines[iVar21]));
            auVar32 = vectorSubtractUnsignedWordModulo
                                (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60);
            local_60 = (longlong)(Splines[iVar21]->cnt + -1);
            auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
            iVar22 = *(int *)((int)pvVar9 + 0x60);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar13 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                                uVar24);
            *(undefined4 *)((int)pvVar9 + 0xa4U & 0xfffffffc) = uVar13;
            pSVar11 = Splines[iVar21];
            dVar31 = (double)Cuboids[iVar22].rot.z;
            lVar18 = FastDoubleToInt((double)local_60);
            iVar21 = (int)(lVar18 << 4);
            local_c0 = *(float *)((int)&pSVar11->points[0].x + iVar21);
            local_bc = *(float *)((int)&pSVar11->points[0].y + iVar21);
            local_b8 = *(float *)((int)&pSVar11->points[0].z + iVar21);
            local_b4 = *(undefined4 *)((int)&pSVar11->points[0].w + iVar21);
            local_a4 = 0;
            local_a8 = 0.0;
            local_ac = 0.0;
            local_b0 = 0.0;
            dVar30 = (double)FUN_005e8338((double)(float)(dVar28 - (double)local_c0),
                                          (double)(float)(dVar29 - (double)local_bc));
            local_a8 = (float)dVar30;
            dVar28 = (double)FUN_005e8338((double)SQRT((float)((double)local_c0 - dVar28) *
                                                       (float)((double)local_c0 - dVar28) +
                                                       (float)((double)local_bc - dVar29) *
                                                       (float)((double)local_bc - dVar29)),
                                          (double)(float)(dVar27 - (double)local_b8));
          }
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          moby->state = '\x06';
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          local_ac = (float)-dVar28;
          auVar32 = loadVectorLeftIndexed(0x28,0x42fc40);
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xac,
                              uVar24);
          *(undefined4 *)((int)pvVar9 + 0xacU & 0xfffffffc) = uVar13;
          Hero_WalkToPos((float)dVar31,&(moby->pos).x,0xac,0);
          local_60 = (longlong)(int)(animationSpeed * 240.5);
          SetCameraPosition(0x951500,0x951510,3,(int)(animationSpeed * 240.5),0);
          Camera_SetCurrentAccel
                    (DAT_00859dd0,DAT_00859dd4,DAT_010ccd04,DAT_00859dd8,DAT_00859ddc,DAT_010ccd08);
          Camera_SetMobyDrivenTargetPos(&local_c0);
          Camera_SetMobyDrivenTargetRot(&local_b0);
        }
      }
    }
    else if (bVar1 < 7) {
      iVar21 = Hero_GetSpecialStateKind();
      if (iVar21 == 2) {
        moby->state = '\a';
        PlayMobySound(2,0,moby);
        TransitionMovement(0x72,0);
      }
      else if (iVar21 == 0) {
        Camera_DeactivateMobyDrivenCam(2);
        moby->state = '\r';
      }
      else {
        iVar21 = FastDecTimerS32(uVar24 + 0xac);
        if (iVar21 != 0) {
          Camera_DeactivateMobyDrivenCam(2);
          moby->state = '\r';
          ____Hero_TransitionByFallSpeed();
        }
      }
    }
    else if (bVar1 < 8) {
      *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
      M713_0042f968(lVar17);
      fVar37 = (moby->pos).z;
      if ((ABS((*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) + 1.0) < 0.01) &&
         (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 1.0) < 0.01)) {
        moby->state = '\b';
      }
    }
    else {
      dVar28 = 6.0;
      fVar37 = OrganicDelt
                         (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z - 6.0,
                          DAT_00859dc4 * g_FrameTimeSq,DAT_00859dc4 * g_FrameTimeSq,
                          DAT_00859dc0 * g_FrameTime,&(moby->pos).z,
                          (int)(Cuboids + *(int *)((int)pvVar9 + 0x60)),
                          (float *)((int)pvVar9 + 0x9c));
      M713_0042faf8((double)fVar37,lVar17);
      if ((moby->pos).z < Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z - 5.999) {
        if (moby->setByGroup == '\0') {
          moby->setByGroup = '\x01';
          pCVar14 = Cuboids;
          iVar21 = *(int *)((int)pvVar9 + 100);
          (moby->pos).x = Cuboids[iVar21].pos.x;
          (moby->pos).y = pCVar14[iVar21].pos.y;
          fVar8 = pCVar14[iVar21].pos.z;
          (moby->pos).z = fVar8;
          pCVar15 = Cuboids;
          iVar22 = *(int *)((int)pvVar9 + 100);
          (moby->pos).w = pCVar14[iVar21].pos.w;
          iVar21 = *(int *)((int)pvVar9 + 0x60);
          local_90 = pCVar15[iVar22].rot.x;
          local_8c = pCVar15[iVar22].rot.y;
          local_88 = pCVar15[iVar22].rot.z;
          local_84 = pCVar15[iVar22].rot.w;
          fVar37 = pCVar15[iVar22].pos.x;
          fVar3 = pCVar15[iVar21].pos.x;
          fVar4 = pCVar15[iVar22].pos.y;
          fVar5 = pCVar15[iVar21].pos.y;
          fVar6 = pCVar15[iVar22].pos.z;
          fVar7 = pCVar15[iVar21].pos.z;
        }
        else {
          moby->setByGroup = '\0';
          pCVar14 = Cuboids;
          iVar21 = *(int *)((int)pvVar9 + 0x60);
          (moby->pos).x = Cuboids[iVar21].pos.x;
          (moby->pos).y = pCVar14[iVar21].pos.y;
          fVar8 = pCVar14[iVar21].pos.z;
          (moby->pos).z = fVar8;
          pCVar15 = Cuboids;
          iVar22 = *(int *)((int)pvVar9 + 0x60);
          (moby->pos).w = pCVar14[iVar21].pos.w;
          iVar21 = *(int *)((int)pvVar9 + 100);
          local_90 = pCVar15[iVar22].rot.x;
          local_8c = pCVar15[iVar22].rot.y;
          local_88 = pCVar15[iVar22].rot.z;
          local_84 = pCVar15[iVar22].rot.w;
          fVar37 = pCVar15[iVar22].pos.x;
          fVar3 = pCVar15[iVar21].pos.x;
          fVar4 = pCVar15[iVar22].pos.y;
          fVar5 = pCVar15[iVar21].pos.y;
          fVar6 = pCVar15[iVar22].pos.z;
          fVar7 = pCVar15[iVar21].pos.z;
        }
        (moby->pos).z = (float)((double)fVar8 - dVar28);
        local_a0 = g_heroPosition.x + (fVar37 - fVar3);
        local_9c = g_heroPosition.y + (fVar4 - fVar5);
        local_98 = g_heroPosition.z + (fVar6 - fVar7);
        local_94 = g_heroPosition.w;
        Hero_Warp(&local_a0,&local_90,0x72,0);
        *(float *)((int)pvVar9 + 0x9c) = -*(float *)((int)pvVar9 + 0x9c);
        moby->state = '\t';
        local_60 = (longlong)(int)(animationSpeed * 180.5);
        Camera_SetMobyDrivenMode(2,(int)(animationSpeed * 180.5));
      }
    }
    goto LAB_00431480;
  }
  if (0xd < bVar1) {
    if (bVar1 < 0x10) {
      if (bVar1 < 0xf) {
        pMVar20 = CreateMoby(TELEPORT_TUBE_0421);
        *(MobyInstance **)((int)pvVar9 + 0x84) = pMVar20;
        pMVar20->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x84) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x84) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x84) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x84);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        pMVar20 = CreateMoby(TELEPORT_TUBE_0422);
        *(MobyInstance **)((int)pvVar9 + 0x88) = pMVar20;
        pMVar20->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar9 + 0x88) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar9 + 0x88) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar9 + 0x88) + 0x34) = moby->modeBits;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        *(f32 *)(iVar21 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar21 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar21 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar21 + 0x1c) = (moby->pos).w;
        iVar21 = *(int *)((int)pvVar9 + 0x88);
        *(f32 *)(iVar21 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar21 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar21 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar21 + 0x4c) = (moby->rotation).w;
        moby->state = '\x0f';
      }
      else {
        *(undefined4 *)((int)pvVar9 + 0x94) = DAT_010cccec;
        *(undefined4 *)((int)pvVar9 + 0x98) = DAT_010cccf0;
        M713_0042f968(lVar17);
        if (DAT_010cccfc != 0) {
          moby->state = '\x10';
        }
      }
    }
    else if (bVar1 < 0x11) {
      dVar28 = 2.0;
      *(undefined4 *)((int)pvVar9 + 0x94) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xc0800000;
      M713_0042f968(lVar17);
      if (DAT_010cccfc == 0) {
        moby->state = '\x0f';
      }
      else {
        fVar37 = (moby->pos).z;
        if ((ABS((float)((double)(*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) - dVar28
                        )) < 0.01) &&
           (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 4.0) < 0.01)) {
          moby->state = '\x11';
        }
      }
    }
    else if (bVar1 < 0x12) {
      *(undefined4 *)((int)pvVar9 + 0x94) = 0xbf800000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xbf800000;
      M713_0042f968(lVar17);
      if (DAT_010cccfc == 0) {
        moby->state = '\x0f';
      }
      else {
        fVar37 = (moby->pos).z;
        if ((ABS((*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) + 1.0) < 0.01) &&
           (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 1.0) < 0.01)) {
          moby->state = '\x10';
        }
      }
    }
    goto LAB_00431480;
  }
  if (10 < bVar1) {
    if (bVar1 < 0xc) {
      dVar28 = 2.0;
      *(undefined4 *)((int)pvVar9 + 0x94) = 0x40000000;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0xc0800000;
      M713_0042f968(lVar17);
      fVar37 = (moby->pos).z;
      if ((ABS((float)((double)(*(float *)(*(int *)((int)pvVar9 + 0x84) + 0x18) - fVar37) - dVar28))
           < 0.01) && (ABS((*(float *)(*(int *)((int)pvVar9 + 0x88) + 0x18) - fVar37) + 4.0) < 0.01)
         ) {
        iVar21 = (int)((float)(longlong)(animationSpeed * 3600.5) * 60.0);
        local_60 = (longlong)iVar21;
        if ((iVar21 < (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)
                                 ) + (uint)(ushort)CHAR_ARRAY_00a0feec.piece<74,2>() * -600)) &&
           ((HelpData.piece<580,4>() & 1 << (Level & 0x3f)) == 0)) {
          Help_QueueMessage(STR_PRESS_THE_SELECT_BUTTON_0x07DD,0x48);
        }
        moby->state = '\r';
        Camera_DeactivateMobyDrivenCam(2);
        TransitionMovement(0,1);
      }
    }
    else if (bVar1 < 0xd) {
      fVar37 = g_FrameTime * 4.0 + fVar37;
      (moby->pos).z = fVar37;
      if (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z <= fVar37) {
        moby->state = '\x05';
      }
    }
    else if (g_standingOnMoby != moby) {
      moby->state = '\x05';
    }
    goto LAB_00431480;
  }
  if (9 < bVar1) {
    fVar37 = OrganicDelt
                       (Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z,DAT_00859dc4 * g_FrameTimeSq,
                        DAT_00859dc4 * g_FrameTimeSq,DAT_00859dc0 * g_FrameTime,
                        &(moby->pos).z,(int)(Cuboids + *(int *)((int)pvVar9 + 0x60)),
                        (float *)((int)pvVar9 + 0x9c));
    M713_0042faf8((double)fVar37,lVar17);
    fVar10 = (moby->pos).z;
    uVar19 = (int)fVar10 >> 0x1f;
    fVar37 = Cuboids[*(int *)((int)pvVar9 + 0x60)].pos.z;
    uVar12 = (int)fVar37 >> 0x1f;
    if ((int)((uVar12 >> 1 ^ (uint)fVar37) - uVar12) <= (int)((uVar19 >> 1 ^ (uint)fVar10) - uVar19)
       ) {
      moby->state = '\v';
      PlayMobySound(0,0,moby);
    }
    goto LAB_00431480;
  }
  local_60 = (longlong)*(int *)((int)pvVar9 + 0xa0);
  OrganicDelt
            ((float)local_60,*(float *)((int)pvVar9 + 0xb4),*(float *)((int)pvVar9 + 0xb4),
             *(float *)((int)pvVar9 + 0xb0),(float *)((int)pvVar9 + 0xa4),(int)unused,
             (float *)((int)pvVar9 + 0xa8));
  auVar32 = loadVectorLeftIndexed(0xa0,uVar24);
  auVar33 = loadVectorRightIndexed(0xb0,uVar24);
  auVar32 = vectorConvertFromSignedFixedPointWord(auVar32 | auVar33,0);
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  if (*(int *)((int)pvVar9 + 0xa0) == 0) {
LAB_00430e68:
    if (*(int *)((int)pvVar9 + 0xa0) == 0) {
      auVar33 = loadVectorLeftIndexed(0xa4,uVar24);
      auVar34 = loadVectorRightIndexed(0xb4,uVar24);
      auVar33 = (auVar33 | auVar34) >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32);
      if ((bool)(bVar25 >> 1 & 1)) goto LAB_00430e90;
    }
  }
  else {
    auVar33 = loadVectorLeftIndexed(0xa4,uVar24);
    auVar34 = loadVectorRightIndexed(0xb4,uVar24);
    auVar33 = (auVar33 | auVar34) >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32);
    if ((bool)(bVar25 >> 1 & 1)) goto LAB_00430e68;
LAB_00430e90:
    moby->state = '\n';
  }
  MB_PathEvalSpline
            ((double)*(float *)((int)pvVar9 + 0xa4),Splines[*(int *)((int)pvVar9 + 0x68)],
             *(int *)((int)pvVar9 + 0x68) * 4,0,uVar16 - 0x70,uVar16 - 0x80,0);
  dVar27 = (double)(moby->pos).x;
  dVar30 = (double)(moby->pos).y;
  dVar28 = (double)(moby->pos).z;
  local_74 = 0;
  local_78 = 0.0;
  dVar29 = (double)(float)(dVar28 + 8.0);
  local_7c = 0.0;
  local_80 = 0;
  dVar28 = (double)FUN_005e8338((double)(float)(dVar27 - (double)local_70),
                                (double)(float)(dVar30 - (double)local_6c),dVar28,0x4020000000000000
                               );
  local_78 = (float)dVar28;
  dVar28 = (double)FUN_005e8338((double)SQRT((float)((double)local_70 - dVar27) *
                                             (float)((double)local_70 - dVar27) +
                                             (float)((double)local_6c - dVar30) *
                                             (float)((double)local_6c - dVar30)),
                                (double)(float)(dVar29 - (double)local_68));
  local_7c = (float)-dVar28;
  Camera_SetMobyDrivenTargetPos((float *)(uVar16 - 0x70));
  Camera_SetMobyDrivenTargetRot((float *)(uVar16 - 0x80));
LAB_00431480:
  local_f0.y = local_f0.y + (moby->pos).y;
  local_f0.x = local_f0.x + (moby->pos).x;
  local_f0.z = local_f0.z + (moby->pos).z;
  if (4.0 < SQRT(local_f0.z * local_f0.z + local_f0.x * local_f0.x + local_f0.y * local_f0.y)) {
    local_f0.w = 0.0;
    local_f0.z = 0.0;
    local_f0.y = 0.0;
    local_f0.x = 0.0;
  }
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar9 + 0x20),&local_f0,uVar16 - 0xe0,lVar17 + 0x40);
  return;
}


