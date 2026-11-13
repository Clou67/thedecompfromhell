// game/update/moby1160.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 16 functions, 0x1e43d8-0x1e8fb4
#include <stdio.h>
#include <string.h>
#include "game/update/moby1160.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/rUnk.h"
#include "game/tieproc.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1009.h"
#include "game/update/moby1034.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby179.h"
#include "game/update/moby291.h"
#include "game/update/moby335.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x01e43d8 (0x14 bytes)
void M1160_001e43d8(void)

{
  DAT_00764ff0 = 0x10000;
  return;
}


// 0x01e43f0 (0x218 bytes)
void M1160_DrawShape
               (short *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar6;
  uint uVar9;
  short *psVar10;
  
  uVar9 = param_2 + 1;
  iVar7 = ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0) + 3;
  *(char *)g_pPacket = (char)iVar7;
  *(undefined1 *)((int)g_pPacket + 1) = 0;
  *(undefined1 *)((int)g_pPacket + 2) = 0;
  uVar8 = Gs_DmaTagByte(iVar7,0);
  *(undefined1 *)((int)g_pPacket + 3) = uVar8;
  uVar4 = uRam00736518;
  uVar3 = g_TieGifTags.piece<4,4>();
  uVar2 = g_TieGifTags.piece<0,4>();
  puVar1 = (undefined4 *)((uint)((int)g_pPacket + 0x10) & 0xfffffff0);
  g_pPacket = (undefined2 *)((int)g_pPacket + 0x10);
  puVar1[3] = uRam0073651c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *g_pPacket = 0x8001;
  puVar5 = g_pPacket;
  g_pPacket = g_pPacket + 8;
  uVar6 = SCE_GS_SET_PRIM(0x11,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 8) = uVar6;
  *(undefined8 *)(puVar5 + 0xc) = param_6;
  uVar4 = uRam00736528;
  uVar3 = DAT_00736520.piece<4,4>();
  uVar2 = DAT_00736520.piece<0,4>();
  puVar1 = (undefined4 *)((uint)(g_pPacket + 8) & 0xfffffff0);
  g_pPacket = g_pPacket + 8;
  puVar1[3] = uRam0073652c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *g_pPacket = (short)param_2 + -0x8000;
  psVar10 = g_pPacket + 8;
  g_pPacket = psVar10;
  if (0 < param_2) {
    iVar7 = 0;
    do {
      uVar6 = SCE_GS_SET_XYZ((*param_1 + param_3) * 0x10 + SCREEN_PROJECTION_MAP_X + -8,
                           (param_1[1] + param_4) * 0x10 + SCREEN_PROJECTION_MAP_Y + -8,param_5);
      iVar7 = iVar7 + 1;
      *(undefined8 *)psVar10 = uVar6;
      param_1 = param_1 + 2;
      psVar10 = psVar10 + 4;
    } while (iVar7 < param_2);
  }
  g_pPacket = g_pPacket + (((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0)) * 8
  ;
  return;
}


// 0x01e4610 (0x25c bytes)
void M1160_DrawShapeScaled
               (double param_1,double param_2,double param_3,undefined2 *param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar7;
  undefined1 uVar10;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  uint uVar11;
  short *psVar12;
  double dVar13;
  double dVar14;
  
  uVar11 = param_5 + 1;
  iVar7 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) + 3;
  *(char *)g_pPacket = (char)iVar7;
  *(undefined1 *)((int)g_pPacket + 1) = 0;
  *(undefined1 *)((int)g_pPacket + 2) = 0;
  uVar10 = Gs_DmaTagByte(iVar7,0);
  *(undefined1 *)((int)g_pPacket + 3) = uVar10;
  uVar4 = uRam00736518;
  uVar3 = g_TieGifTags.piece<4,4>();
  uVar2 = g_TieGifTags.piece<0,4>();
  puVar1 = (undefined4 *)((uint)((int)g_pPacket + 0x10) & 0xfffffff0);
  g_pPacket = (undefined2 *)((int)g_pPacket + 0x10);
  puVar1[3] = uRam0073651c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *g_pPacket = 0x8001;
  puVar5 = g_pPacket;
  g_pPacket = g_pPacket + 8;
  uVar6 = SCE_GS_SET_PRIM(0x11,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 8) = uVar6;
  *(undefined8 *)(puVar5 + 0xc) = param_9;
  uVar4 = uRam00736528;
  uVar3 = DAT_00736520.piece<4,4>();
  uVar2 = DAT_00736520.piece<0,4>();
  puVar1 = (undefined4 *)((uint)(g_pPacket + 8) & 0xfffffff0);
  g_pPacket = g_pPacket + 8;
  puVar1[3] = uRam0073652c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *g_pPacket = (short)param_5 + -0x8000;
  psVar12 = g_pPacket + 8;
  g_pPacket = psVar12;
  if (0 < param_5) {
    iVar7 = 0;
    dVar14 = 16.0;
    do {
      dVar13 = (double)FastIntToDouble(*param_4);
      iVar8 = FastDoubleToInt
                        ((double)(float)((double)(float)(dVar13 * param_3 + param_1) * dVar14));
      iVar8 = iVar8 + SCREEN_PROJECTION_MAP_X;
      dVar13 = (double)FastIntToDouble(param_4[1]);
      iVar9 = FastDoubleToInt
                        ((double)(float)((double)(float)(dVar13 * param_3 + param_2) * dVar14));
      uVar6 = SCE_GS_SET_XYZ(iVar8 + -8,iVar9 + SCREEN_PROJECTION_MAP_Y + -8,param_8);
      iVar7 = iVar7 + 1;
      *(undefined8 *)psVar12 = uVar6;
      param_4 = param_4 + 2;
      psVar12 = psVar12 + 4;
    } while (iVar7 < param_5);
  }
  g_pPacket = g_pPacket +
                 (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * 8;
  return;
}


// 0x01e4870 (0x2b4 bytes)
void M1160_DrawShapeRotated
               (double param_1,double param_2,double param_3,undefined2 *param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar7;
  undefined1 uVar10;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  uint uVar11;
  short *psVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> local_c0;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  
  uVar11 = param_5 + 1;
  iVar7 = ((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0) + 3;
  *(char *)g_pPacket = (char)iVar7;
  *(undefined1 *)((int)g_pPacket + 1) = 0;
  *(undefined1 *)((int)g_pPacket + 2) = 0;
  uVar10 = Gs_DmaTagByte(iVar7,0);
  *(undefined1 *)((int)g_pPacket + 3) = uVar10;
  uVar4 = uRam00736518;
  uVar3 = g_TieGifTags.piece<4,4>();
  uVar2 = g_TieGifTags.piece<0,4>();
  puVar1 = (undefined4 *)((uint)((int)g_pPacket + 0x10) & 0xfffffff0);
  g_pPacket = (undefined2 *)((int)g_pPacket + 0x10);
  puVar1[3] = uRam0073651c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *g_pPacket = 0x8001;
  puVar5 = g_pPacket;
  g_pPacket = g_pPacket + 8;
  uVar6 = SCE_GS_SET_PRIM(0x11,0,0,0,1,0,1,0);
  *(undefined8 *)(puVar5 + 8) = uVar6;
  *(undefined8 *)(puVar5 + 0xc) = param_9;
  uVar4 = uRam00736528;
  uVar3 = DAT_00736520.piece<4,4>();
  uVar2 = DAT_00736520.piece<0,4>();
  puVar1 = (undefined4 *)((uint)(g_pPacket + 8) & 0xfffffff0);
  g_pPacket = g_pPacket + 8;
  puVar1[3] = uRam0073652c;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  *g_pPacket = (short)param_5 + -0x8000;
  psVar12 = g_pPacket + 8;
  g_pPacket = psVar12;
  FastEulerToMtx1(&local_b0,local_c0);
  if (0 < param_5) {
    iVar7 = 0;
    dVar16 = 16.0;
    do {
      dVar13 = (double)FastIntToDouble(*param_4);
      dVar14 = (double)FastIntToDouble(param_4[1]);
      dVar15 = (double)(float)((double)local_b0 * dVar13 +
                              (double)(float)((double)local_a0 * dVar14));
      dVar13 = (double)(float)((double)local_ac * dVar13 +
                              (double)(float)((double)local_9c * dVar14));
      iVar8 = FastDoubleToInt
                        ((double)(float)((double)(float)(dVar15 * param_3 + param_1) * dVar16),
                         dVar15,(double)local_b0,(double)local_9c,(double)local_ac);
      iVar8 = iVar8 + SCREEN_PROJECTION_MAP_X;
      iVar9 = FastDoubleToInt
                        ((double)(float)((double)(float)(dVar13 * param_3 + param_2) * dVar16));
      uVar6 = SCE_GS_SET_XYZ(iVar8 + -8,iVar9 + SCREEN_PROJECTION_MAP_Y + -8,param_8);
      iVar7 = iVar7 + 1;
      *(undefined8 *)psVar12 = uVar6;
      param_4 = param_4 + 2;
      psVar12 = psVar12 + 4;
    } while (iVar7 < param_5);
  }
  g_pPacket = g_pPacket +
                 (((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)) * 8;
  return;
}


// 0x01e4b28 (0xe0 bytes)
void M1160_WorldToScreen
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}


// 0x01e4c20 (0x284 bytes)
void M1160_001e4c20
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  FastDiffRots(0x3ff921fb60000000,dVar8);
  FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = FastDoubleToInt();
  iVar7 = FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)FastIntToDouble(param_7 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M1160_DrawShapeRotated
              ((double)(longlong)(iVar6 + 0x1b0),
               (double)(longlong)(iVar7 + g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
               param_6);
  }
  return;
}


// 0x01e4eb8 (0x288 bytes)
void M1160_001e4eb8
               (int param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  GPiece<16> auStack_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_50;
  float local_4c;
  float local_48;
  
  dVar9 = (double)*(float *)(param_1 + 8);
  uVar2 = (int)*(uint *)(param_1 + 4) >> 0x1f;
  iVar8 = (uVar2 >> 1 ^ *(uint *)(param_1 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar8) || (iVar8 < -0x3fc90fdb)) {
    dVar9 = -dVar9;
  }
  FastDiffRots(0x3ff921fb60000000,dVar9);
  FastEulerToMtx1(&local_80,auStack_90);
  fVar3 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar4 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar9 = (double)((local_4c * fVar1 + local_7c * fVar4 + local_6c * fVar3) * 0.14285715);
  fVar5 = (local_50 * fVar1 + local_80 * fVar4 + local_70 * fVar3) * 0.14285715;
  fVar1 = (local_48 * fVar1 + local_78 * fVar4 + local_68 * fVar3) * 0.14285715;
  dVar10 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar9 * dVar9));
  iVar7 = FastDoubleToInt();
  iVar8 = FastDoubleToInt(-dVar9);
  if (dVar10 < 46.0) {
    if (38.0 < dVar10) {
      dVar10 = (double)(float)(46.0 - dVar10);
      dVar9 = (double)FastIntToDouble(param_5 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar9 * dVar10) * 0.125));
    }
    iVar6 = (int)(param_4 << 4);
    iVar8 = iVar8 + g_ScreenHeight;
    GetEffectTex(*(undefined2 *)(iVar6 + 0x765a5c));
    Sprite_DrawShapeWrapper
              ((iVar7 - *(short *)(iVar6 + 0x765a68)) + 0x1b0,
               (iVar8 - *(short *)(iVar6 + 0x765a6a)) + -0x50,*(undefined2 *)(iVar6 + 0x765a62),
               *(undefined2 *)(iVar6 + 0x765a64),*(undefined2 *)(iVar6 + 0x765a5e),
               *(undefined2 *)(iVar6 + 0x765a60),*(undefined2 *)(iVar6 + 0x765a62),
               *(undefined2 *)(iVar6 + 0x765a64));
  }
  return;
}


// 0x01e5158 (0xd90 bytes)
// strings: 006548c8: '%d' | 006548d0: '%03.2f'

MobyInstance *
M1160_ScanTargets
          (int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  MOBY_OCLASSES MVar1;
  MobyInstance *pMVar2;
  MobyInstance *moby;
  float fVar3;
  float fVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined8 uVar5;
  undefined8 uVar6;
  size_t sVar12;
  MobyInstance *in_r10;
  MobyInstance *pMVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  float fVar24;
  MobyInstance *in_stack_00000074;
  GPiece<16> local_1a0;
  float local_190;
  float local_18c;
  float local_180;
  float local_17c;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_150;
  float local_14c;
  float local_140;
  float local_13c;
  float local_130;
  float local_12c;
  char acStack_120 [88];
  
  moby = MobyUpdateChainStart;
  pMVar13 = (MobyInstance *)0x0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  iVar14 = 0x7fffffff;
  if (moby != (MobyInstance *)0x0) {
    dVar23 = 0.0625;
    uVar22 = 0x3ff0000000000000;
    dVar21 = 0.05000000074505806;
    uVar20 = 0x3ff4ccccc0000000;
    pMVar13 = (MobyInstance *)0x0;
    do {
      if (((((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (moby->enabled != '\0')) &&
          (moby->pClass != (MobyClass *)0x0)) && ((short)moby->pClass->mode_bits == 5)) {
        ScreenPosFromWorldSpace(&local_130,&moby->pos);
        iVar7 = FastDoubleToInt
                          ((double)(float)((double)(local_130 -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                          dVar23));
        iVar8 = FastDoubleToInt
                          ((double)(float)((double)(local_12c -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                          dVar23));
        iVar15 = iVar7 - *(int *)(param_2 + 0xe0);
        iVar16 = iVar8 - *(int *)(param_2 + 0xe4);
        iVar15 = iVar15 * ((iVar15 >> 0x1f & 0xfffffffeU) + 1);
        iVar16 = iVar16 * ((iVar16 >> 0x1f & 0xfffffffeU) + 1);
        ScreenPosFromWorldSpace(&local_140,local_1a0);
        iVar9 = FastDoubleToInt
                          ((double)(float)((double)(local_140 -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                          dVar23));
        iVar10 = FastDoubleToInt
                           ((double)(float)((double)(local_13c -
                                                    (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                           dVar23));
        dVar17 = (double)FastIntToDouble
                                   ((iVar9 - iVar7) * (iVar9 - iVar7) +
                                    (iVar10 - iVar8) * (iVar10 - iVar8));
        iVar7 = FastDoubleToInt((double)(float)SQRT(dVar17));
        if ((iVar15 < iVar7 + 0x1c) && (iVar16 < iVar7 + 0x1c)) {
          if (in_r10 == (MobyInstance *)0x0) {
            if ((moby != in_stack_00000074) &&
               (iVar7 = iVar15 * iVar15 + iVar16 * iVar16, iVar7 < iVar14)) {
              pMVar13 = moby;
              iVar14 = iVar7;
            }
          }
          else if (moby == in_r10) {
            pMVar13 = moby;
            iVar14 = 0;
          }
        }
      }
      MVar1 = moby->oClass;
      if (MVar1 == JET_FIGHTER_HEALTH_CRATE_04C4) {
        M1160_001e4eb8(param_4,param_3,moby,2,0x70808080);
      }
      else if (MVar1 == AMMOCRATE_04C2) {
        M1160_001e4eb8(param_4,param_3,moby,2,0x70808080);
      }
      else if (MVar1 == 0x4bf) {
        if (1 < moby->state) {
          ScreenPosFromWorldSpace(&local_190,&moby->pos);
          if (moby->enabled != '\0') {
            dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X)
                                    * dVar23);
            dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                    * dVar23);
            dVar17 = (double)FastIntToDouble
                                       ((double)(local_18c -
                                                (float)(longlong)SCREEN_PROJECTION_MAP_Y),
                                        worldUpdateTime);
            fVar24 = MB_WrapRot((float)(dVar17 * dVar21));
            M1160_DrawShapeRotated(dVar19,dVar18,uVar22,-(double)fVar24,&DAT_00765934,0x1e);
            ScreenPosFromWorldSpace(&local_170,&moby->pos);
            uVar6 = FastDoubleToInt
                              ((double)(float)((double)(local_170 -
                                                       (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                              dVar23));
            iVar7 = FastDoubleToInt
                              ((double)(float)((double)(local_16c -
                                                       (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                              dVar23));
            iVar8 = iVar7 + 10;
            FontPrintSmallCenter(uVar6,iVar8,0x802020ff,&DAT_006548d8,3);
            pfVar11 = (float *)MB_GetPvarsIfMobyHasThem(moby);
            if (pfVar11 != (float *)0x0) {
              iVar8 = iVar7 + 0x18;
              uVar5 = FastDoubleToInt((double)*pfVar11);
              snprintf(acStack_120,"%d",uVar5);
              sVar12 = strlen(acStack_120);
              FontPrintSmallCenter(uVar6,iVar8,0x806060ff,acStack_120,sVar12);
            }
            pMVar2 = *(MobyInstance **)(param_2 + 0x70);
            if (moby == pMVar2) {
              fVar24 = *(float *)(param_1 + 0x14) - (pMVar2->pos).y;
              fVar3 = *(float *)(param_1 + 0x10) - (pMVar2->pos).x;
              fVar4 = *(float *)(param_1 + 0x18) - (pMVar2->pos).z;
              snprintf(acStack_120,"%03.2f",
                             (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
              sVar12 = strlen(acStack_120);
              FontPrintSmallCenter(uVar6,iVar8 + 0xe,0x80ffffff,acStack_120,sVar12);
            }
          }
          M1160_001e4eb8(param_4,param_3,moby,1,0x70808080);
        }
      }
      else if (MVar1 == 0x4be) {
        ScreenPosFromWorldSpace(&local_190,&moby->pos);
        if (moby->enabled != '\0') {
          dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                  dVar23);
          dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                  dVar23);
          dVar17 = (double)FastIntToDouble
                                     ((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      ,worldUpdateTime);
          fVar24 = MB_WrapRot((float)(dVar17 * dVar21));
          M1160_DrawShapeRotated(dVar19,dVar18,uVar22,-(double)fVar24,&DAT_00765934,0x1e);
          ScreenPosFromWorldSpace(&local_160,&moby->pos);
          uVar6 = FastDoubleToInt
                            ((double)(float)((double)(local_160 -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                            dVar23));
          iVar7 = FastDoubleToInt
                            ((double)(float)((double)(local_15c -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                            dVar23));
          iVar8 = iVar7 + 10;
          FontPrintSmallCenter(uVar6,iVar8,0x802020ff,&DAT_006548d8,3);
          pfVar11 = (float *)MB_GetPvarsIfMobyHasThem(moby);
          if (pfVar11 != (float *)0x0) {
            iVar8 = iVar7 + 0x18;
            uVar5 = FastDoubleToInt((double)*pfVar11);
            snprintf(acStack_120,"%d",uVar5);
            sVar12 = strlen(acStack_120);
            FontPrintSmallCenter(uVar6,iVar8,0x806060ff,acStack_120,sVar12);
          }
          pMVar2 = *(MobyInstance **)(param_2 + 0x70);
          if (moby == pMVar2) {
            fVar24 = *(float *)(param_1 + 0x14) - (pMVar2->pos).y;
            fVar3 = *(float *)(param_1 + 0x10) - (pMVar2->pos).x;
            fVar4 = *(float *)(param_1 + 0x18) - (pMVar2->pos).z;
            snprintf(acStack_120,"%03.2f",
                           (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
            sVar12 = strlen(acStack_120);
            FontPrintSmallCenter(uVar6,iVar8 + 0xe,0x80ffffff,acStack_120,sVar12);
          }
        }
        M1160_001e4eb8(param_4,param_3,moby,1,0x70808080);
      }
      else if (MVar1 == 0x3eb) {
        ScreenPosFromWorldSpace(&local_190,&moby->pos);
        if (moby->enabled != '\0') {
          dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                  dVar23);
          dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                  dVar23);
          dVar17 = (double)FastIntToDouble
                                     ((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      ,worldUpdateTime);
          fVar24 = MB_WrapRot((float)(dVar17 * dVar21));
          M1160_DrawShapeRotated(dVar19,dVar18,uVar22,(double)fVar24,&DAT_00765934,0x1e);
          dVar19 = (double)(float)((double)(local_190 - (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                  dVar23);
          dVar18 = (double)(float)((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                  dVar23);
          dVar17 = (double)FastIntToDouble
                                     ((double)(local_18c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      ,worldUpdateTime);
          fVar24 = MB_WrapRot((float)(dVar17 * dVar21));
          M1160_DrawShapeRotated(dVar19,dVar18,uVar20,-(double)fVar24,&DAT_00765934,0x1e);
          ScreenPosFromWorldSpace(&local_150,&moby->pos);
          uVar6 = FastDoubleToInt
                            ((double)(float)((double)(local_150 -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                            dVar23));
          iVar7 = FastDoubleToInt
                            ((double)(float)((double)(local_14c -
                                                     (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                            dVar23));
          iVar8 = iVar7 + 10;
          FontPrintSmallCenter(uVar6,iVar8,0x80ffffff,&DAT_006548c0,3);
          pfVar11 = (float *)MB_GetPvarsIfMobyHasThem(moby);
          if (pfVar11 != (float *)0x0) {
            iVar8 = iVar7 + 0x18;
            uVar5 = FastDoubleToInt((double)*pfVar11);
            snprintf(acStack_120,"%d",uVar5);
            sVar12 = strlen(acStack_120);
            FontPrintSmallCenter(uVar6,iVar8,0x80ffffff,acStack_120,sVar12);
          }
          pMVar2 = *(MobyInstance **)(param_2 + 0x70);
          if (moby == pMVar2) {
            fVar24 = *(float *)(param_1 + 0x14) - (pMVar2->pos).y;
            fVar3 = *(float *)(param_1 + 0x10) - (pMVar2->pos).x;
            fVar4 = *(float *)(param_1 + 0x18) - (pMVar2->pos).z;
            snprintf(acStack_120,"%03.2f",
                           (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
            sVar12 = strlen(acStack_120);
            FontPrintSmallCenter(uVar6,iVar8 + 0xe,0x80ffffff,acStack_120,sVar12);
          }
        }
        M1160_001e4eb8(param_4,param_3,moby,0,0x70808080);
        *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
      }
      else if (((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) &&
              (M1160_001e4eb8(param_4,param_3,moby,1,0x70808080),
              moby == *(MobyInstance **)(param_2 + 0x70))) {
        ScreenPosFromWorldSpace(&local_180,&moby->pos);
        uVar6 = FastDoubleToInt
                          ((double)(float)((double)(local_180 -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_X) *
                                          dVar23));
        iVar8 = FastDoubleToInt
                          ((double)(float)((double)(local_17c -
                                                   (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                          dVar23));
        iVar7 = *(int *)(param_2 + 0x70);
        fVar24 = *(float *)(param_1 + 0x14) - *(float *)(iVar7 + 0x14);
        fVar3 = *(float *)(param_1 + 0x10) - *(float *)(iVar7 + 0x10);
        fVar4 = *(float *)(param_1 + 0x18) - *(float *)(iVar7 + 0x18);
        snprintf(acStack_120,"%03.2f",
                       (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar24 * fVar24));
        sVar12 = strlen(acStack_120);
        FontPrintSmallCenter(uVar6,iVar8 + 10,0x80ffffff,acStack_120,sVar12);
      }
      moby = (MobyInstance *)moby->pChain;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar13;
}


// 0x01e5ef0 (0x204 bytes)
void M1160_UpdateTargetLock(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  GPiece<16> local_30;
  
  iVar2 = FastDecTimerS32(param_2 + 0x74);
  if (((((iVar2 != 0) || (iVar2 = *(int *)(param_2 + 0x70), iVar2 == 0)) ||
       (*(char *)(iVar2 + 0x20) == -3 || *(char *)(iVar2 + 0x20) == -2)) ||
      ((*(char *)(iVar2 + 0x31) == '\0' || ((g_Pad.repeat & 0x2000) != 0)))) || (DAT_0096b2d6 == '\0')
     ) {
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  iVar3 = M1160_ScanTargets(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2
                            ,0x951500,local_30);
  iVar2 = *(int *)(param_2 + 0x70);
  if (((iVar3 != iVar2) && (500 < *(int *)(param_2 + 0x74))) || (DAT_0096b2d6 == '\0')) {
    iVar2 = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
  }
  if ((iVar3 != 0) &&
     (((iVar2 == 0 || ((*(short *)(iVar2 + 0xa6) != 0x3eb && (*(short *)(iVar3 + 0xa6) == 0x3eb))))
      && (DAT_0096b2d6 != '\0')))) {
    *(int *)(param_2 + 0x70) = iVar3;
    uVar1 = DAT_007651a8;
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_2 + 0x74) = uVar1;
    iVar2 = iVar3;
  }
  if (((iVar2 != 0) && (*(int *)(param_2 + 0x68) == 0)) &&
     ((iVar2 == 0 || ((*(char *)(iVar2 + 0x20) == -2 || (*(char *)(iVar2 + 0x20) == -3)))))) {
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  return;
}


// 0x01e6130 (0x814 bytes)
// strings: 006548dc: 'OBJECTIVES REMAINING: %d' | 006548fc: 'ALTITUDE: %03.0f' | 00654914: 'ROLL: %03.0f' | 00654924: 'HEADING: %03.0f' | 00654934: 'WARNING! SHIP NEEDS REPAIR' | 00654954: 'minHealth'

void M1160_Hud_Draw(MobyInstance *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float local_c0;
  float local_bc;
  GPiece<8> local_b0;
  char acStack_a8 [64];
  void *PVARS;
  
  PVARS = param_1->pVar;
  GetEffectTex(0x3e);
  Sprite_DrawShapeWrapper(0x180,g_ScreenHeight + -0x80,0x60,0x60,0,0,0x60,0x60);
  M1160_UpdateTargetLock(param_1,PVARS);
  if (*(uint *)((int)PVARS + 0x70) != 0) {
    ScreenPosFromWorldSpace(&local_c0,(ulonglong)*(uint *)((int)PVARS + 0x70) + 0x10);
    dVar13 = 0.0625;
    uVar2 = FastDoubleToInt
                      ((double)((local_c0 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
    uVar3 = FastDoubleToInt
                      ((double)(float)((double)(local_bc - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar13));
    if (*(int *)((int)PVARS + 0x74) < 0x1f5) {
      lVar7 = (ZERO_MASK((*(int *)((int)PVARS + 0x74) / (int)(animationSpeed * 20.5) & 1U)) & 0xff00U) + 0x600000ff;
      M1160_DrawShape(&DAT_00765934,0x1e,uVar2,uVar3,&DAT_00fffff3,lVar7);
      M1160_DrawShape(&DAT_00765874,0x1e,uVar2,uVar3,&DAT_00fffff3,lVar7);
      M1160_DrawShape(&DAT_007659ac,0x1a,uVar2,uVar3,&DAT_00fffff3,lVar7);
      *(undefined4 *)((int)PVARS + 0xec) = *(undefined4 *)((int)PVARS + 0x70);
    }
    else {
      uVar8 = FastIntToDouble(uVar2);
      uVar9 = FastIntToDouble(uVar3);
      uVar10 = 0x3ff0000000000000;
      dVar13 = (double)FastIntToDouble(0x3ff0000000000000,worldUpdateTime);
      dVar12 = 0.03333333507180214;
      fVar15 = MB_WrapRot((float)(dVar13 * 0.03333333507180214));
      M1160_DrawShapeRotated(uVar8,uVar9,uVar10,(double)fVar15,&DAT_00765934,0x1e);
      dVar13 = (double)FastIntToDouble(DAT_007651b0);
      dVar11 = (double)FastIntToDouble(*(int *)((int)PVARS + 0x74) + -500);
      dVar14 = (double)(float)((double)(float)(dVar11 * 5.0) / dVar13);
      uVar2 = FastIntToDouble((double)(float)(dVar11 * 5.0),uVar2);
      uVar3 = FastIntToDouble(uVar3);
      dVar13 = (double)FastIntToDouble(worldUpdateTime);
      fVar15 = MB_WrapRot((float)(dVar13 * dVar12));
      M1160_DrawShapeRotated(uVar2,uVar3,dVar14,(double)fVar15,&DAT_00765874,0x1e);
      *(undefined4 *)((int)PVARS + 0xec) = 0;
    }
  }
  iVar6 = 0x40;
  iVar5 = 0;
  if (DAT_0096b2d7 != 0) {
    uVar2 = 0x4038000000000000;
    uVar3 = 0x3fe0000000000000;
    do {
      if (iVar5 < (int)(uint)DAT_0096b2d6) {
        M1160_DrawShapeScaled(uVar2,(double)(longlong)iVar6,uVar3,&DAT_00765700,0x19);
      }
      else {
        M1160_DrawShapeScaled(uVar2,(double)(longlong)iVar6,uVar3,&DAT_00765700,0x19);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x12;
    } while (iVar5 < (int)(uint)DAT_0096b2d7);
  }
  M1160_DrawShape(&DAT_00765784,0x1e,*(undefined4 *)((int)PVARS + 0xe0),
                  *(undefined4 *)((int)PVARS + 0xe4),&DAT_00fffff3,0xff20ff20);
  snprintf(acStack_a8,"OBJECTIVES REMAINING: %d",*(undefined4 *)((int)PVARS + 0xe8));
  sVar4 = strlen(acStack_a8);
  FontPrintSmallLeft(0x10,0x159,0x80008000,acStack_a8,sVar4);
  snprintf(acStack_a8,"ALTITUDE: %03.0f",(double)((param_1->pos).z - 100.0));
  sVar4 = strlen(acStack_a8);
  FontPrintSmallLeft(0x10,0x168,0x80008000,acStack_a8,sVar4);
  dVar11 = 180.0;
  dVar13 = 0.31830987334251404;
  snprintf(acStack_a8,"ROLL: %03.0f",(double)((param_1->rotation).x * 180.0 * 0.31830987));
  sVar4 = strlen(acStack_a8);
  FontPrintSmallLeft(0x10,0x177,0x80008000,acStack_a8,sVar4);
  snprintf(acStack_a8,"HEADING: %03.0f",
                 (double)(float)((double)(float)((double)(param_1->rotation).z * dVar11) * dVar13));
  sVar4 = strlen(acStack_a8);
  FontPrintSmallLeft(0x10,0x186,0x80008000,acStack_a8,sVar4);
  if (DAT_0096b2dc < DAT_0096b2e0 * 0.1) {
    if ((worldUpdateTime / 0x5a & 1U) != 0) {
      FontPrintSmallCenter(0x100,0x186,0x80000080,"WARNING! SHIP NEEDS REPAIR",0x1a);
    }
  }
  fVar15 = (DAT_0096b2dc - *(float *)((int)PVARS + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar15) < 0.0) {
    fVar15 = fVar15 / ABS(fVar15);
  }
  fVar15 = *(float *)((int)PVARS + 0xf0) + fVar15;
  *(float *)((int)PVARS + 0xf0) = fVar15;
  iVar5 = FastDoubleToInt((double)((fVar15 * 251.0) / DAT_0096b2e0));
  uVar1 = g_pIdolDraw;
  iVar5 = iVar5 + 2;
  iVar5 = iVar5 + ((uint)(0xfd - (longlong)iVar5 >> 0x3f) & 0xfdU - iVar5);
  idol_draw::BindFragmentProgram(g_pIdolDraw,HUD_Pass,0xd);
  uVar2 = FUN_004de9c4(uVar1,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(uVar1,HUD_Pass,0xd,uVar2,local_b0,1);
  GetEffectTex(0x3c);
  Sprite_DrawShapeWrapper(0x170,g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(uVar1,HUD_Pass,0xc);
  GetEffectTex(0x3d);
  Sprite_DrawShapeWrapper(0x170,g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  *(uint *)((int)PVARS + 0xf4) = iVar5 + ((uint)((longlong)iVar5 + -2 >> 0x3f) & 2U - iVar5);
  return;
}


// 0x01e6958 (0x23c bytes)
void M1160_FireGun(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<16> local_60;
  GPiece<24> auStack_50;
  
  iVar2 = FastDecTimerS32(param_2 + 100);
  if ((iVar2 != 0) && ((g_Pad.padDownButtons & 0x84) != 0)) {
    GetBonePosition(param_1,*(byte *)(param_2 + 0x31) & 1,auStack_50);
    M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_1,local_60,auStack_50);
    uVar1 = DAT_007650b0;
    *(byte *)(param_2 + 0x31) = *(byte *)(param_2 + 0x31) ^ 1;
    *(undefined4 *)(param_2 + 100) = uVar1;
  }
  return;
}


// 0x01e6ba8 (0x244 bytes)
void M1160_UpdateGunsAndAimPos
               (double param_1,double param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  GPiece<16> auStack_60;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  longlong local_30;
  
  MB_SphericalToVector
            (DAT_007650ac * DAT_007650e0,(float)param_1,(float)param_2,&local_70);
  local_70 = local_70 + *param_4;
  local_6c = local_6c + param_4[1];
  local_68 = local_68 + param_4[2];
  iVar5 = FastDecTimerS32(param_4 + 0x19);
  if ((iVar5 != 0) && ((g_Pad.padDownButtons & 0x84) != 0)) {
    GetBonePosition(param_3,*(byte *)((int)param_4 + 0x31) & 1,auStack_60);
    M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_3,&local_70,auStack_60);
    param_4[0x19] = DAT_007650b0;
    *(byte *)((int)param_4 + 0x31) = *(byte *)((int)param_4 + 0x31) ^ 1;
  }
  fVar4 = 0.0;
  local_44 = local_64;
  fVar3 = SQRT(local_68 * local_68 + local_70 * local_70 + local_6c * local_6c);
  fVar2 = 23.0 / fVar3;
  fVar1 = local_70 * fVar2;
  fVar6 = local_6c * fVar2;
  fVar2 = local_68 * fVar2;
  local_70 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_70 = fVar1;
  }
  local_6c = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_6c = fVar6;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_70 = fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_6c = fVar6;
  }
  local_68 = fVar4;
  if (fVar3 - 0.0 < 0.0) {
    local_68 = fVar2;
  }
  local_50 = local_70 + *(float *)(param_3 + 0x10);
  local_4c = local_6c + *(float *)(param_3 + 0x14);
  local_48 = local_68 + *(float *)(param_3 + 0x18);
  ScreenPosFromWorldSpace(&local_40,&local_50);
  local_30 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar7 = 0.0625;
  fVar6 = (float)FastDoubleToInt((double)((local_40 - (float)local_30) * 0.0625));
  param_4[0x38] = fVar6;
  local_30 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar6 = (float)FastDoubleToInt
                           ((double)(float)((double)(local_3c - (float)local_30) * dVar7));
  param_4[0x39] = fVar6;
  return;
}


// 0x01e6df8 (0x1ac bytes)
void M1160_UpdateMissiles(longlong param_1,int param_2)

{
  int iVar1;
  GPiece<32> local_50;
  
  iVar1 = FastDecTimerS32(param_2 + 0x68);
  if (((iVar1 != 0) && ((g_Pad.padDownButtons & 0x28) != 0)) && (DAT_0096b2d6 != 0)) {
    GetBonePosition(param_1,DAT_0096b2d6 & 1,local_50);
    iVar1 = Spawn_Moby1034
                      ((double)(DAT_007650b4 * DAT_007650e0),param_1,local_50,
                       *(undefined4 *)(param_2 + 0xec),param_1 + 0x40,&DAT_001e6dec,
                       (int)(animationSpeed * 300.5));
    if (iVar1 != 0) {
      DAT_0096b2d6 = DAT_0096b2d6 - 1;
      *(undefined4 *)(param_2 + 0x68) = DAT_007650b8;
    }
  }
  return;
}


// 0x01e6fb8 (0x98 bytes)
double M1160_BlendByDist(double param_1,double param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_3 + 0x14) - DAT_00765a94;
  fVar2 = *(float *)(param_3 + 0x10) - DAT_00765a90;
  fVar3 = *(float *)(param_3 + 0x18) - DAT_00765a98;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (220.0 < fVar1) {
    dVar4 = (double)((fVar1 - 220.0) * 0.0055555557);
    if (dVar4 - 0.0 < 0.0) {
      dVar4 = 0.0;
    }
    if (1.0 - dVar4 < 0.0) {
      dVar4 = 1.0;
    }
    param_1 = (double)(float)((double)(float)(1.0 - dVar4) * param_1 +
                             (double)(float)(dVar4 * param_2));
  }
  return param_1;
}


// 0x01e70a8 (0xf2c bytes)
// inlined: FastRSqrt @0x1e7410, FastAtan2 @0x1e7ab4, FastAtan2 @0x1e7c80
// strings: 00765080: '@&ff=' (raw)

void M1160_UpdateFlight(MobyInstance *moby,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyModeBit MVar13;
  MOBY_OCLASSES MVar14;
  ulonglong *puVar15;
  int iVar16;
  CONTROLLER_INPUT CVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  byte bVar30;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  double dVar39;
  ulonglong in_f30;
  undefined8 uVar40;
  ulonglong in_f31;
  double dVar41;
  float fVar42;
  
  lVar25 = (longlong)param_2;
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar23 = uVar20 - 0x210;
  puVar15 = (ulonglong *)lVar23;
  *puVar15 = uVar20;
  puVar15[0x44] = in_LR;
  puVar15[0x3c] = in_f26;
  puVar15[0x3d] = in_f27;
  puVar15[0x3e] = in_f28;
  puVar15[0x3f] = in_f29;
  puVar15[0x40] = in_f30;
  puVar15[0x41] = in_f31;
  puVar15[0x3a] = unaff_r30;
  puVar15[0x3b] = unaff_r31;
  puVar15[0x39] = unaff_r29;
  dVar41 = 0.0;
  *(undefined4 *)(puVar15 + 0x18) = 0;
  *(undefined4 *)((int)puVar15 + 0xc4) = 0;
  *(undefined4 *)(puVar15 + 0x19) = 0;
  *(undefined4 *)((int)puVar15 + 0xcc) = 0;
  fVar3 = DAT_007650e0;
  uVar40 = 0x4020000000000000;
  fVar1 = g_FrameTime * 8.0;
  iVar24 = *(int *)(param_2 + 0x44) + 1;
  MVar13 = moby->modeBits;
  *(int *)(param_2 + 0x44) = iVar24;
  uVar19 = g_Pad.repeat;
  moby->modeBits =
       MVar13 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                 DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  uVar18 = g_Pad.padDownButtons;
  CVar17 = g_Pad.downButtons;
  fVar2 = g_Pad.sticks.z;
  fVar42 = *(float *)(param_2 + 0x38);
  dVar35 = (double)g_Pad.sticks.w;
  dVar38 = (double)*(float *)(param_2 + 0xd8);
  puVar15[0x38] = unaff_r28;
  puVar15[0x37] = unaff_r27;
  puVar15[0x36] = unaff_r26;
  puVar15[0x35] = unaff_r25;
  puVar15[0x34] = unaff_r24;
  *(float *)(puVar15 + 0x19) = fVar1 * fVar3;
  if (((uVar19 & 0x8000) != 0) &&
     (bVar30 = *(char *)(param_2 + 0x30) + 1, *(byte *)(param_2 + 0x30) = bVar30, 1 < bVar30)) {
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  if (DAT_00765040 < iVar24) {
    if ((uVar18 & 0x40) == 0) {
      if (DAT_00765044 * DAT_007650e0 - DAT_0076503c * DAT_007650e0 <= fVar42) {
        fVar1 = DAT_00765044 * DAT_007650e0;
        if (fVar1 < fVar42) {
          fVar1 = (DAT_00765044 * DAT_007650e0 - fVar42) * DAT_00765050 + fVar42;
        }
      }
      else {
        fVar1 = DAT_0076503c * DAT_007650e0 + fVar42;
      }
      *(float *)(param_2 + 0x38) = fVar1;
    }
    else {
      fVar1 = DAT_0076504c * DAT_007650e0 + fVar42;
      *(float *)(param_2 + 0x38) = fVar1;
      fVar42 = DAT_00765048 * DAT_007650e0;
      if (fVar42 < fVar1) {
        *(float *)(param_2 + 0x38) = fVar42;
        fVar1 = fVar42;
      }
    }
  }
  else {
    fVar1 = DAT_00765038 * DAT_007650e0 + fVar42;
    *(float *)(param_2 + 0x38) = fVar1;
  }
  if (DAT_00765054 < iVar24) {
    fVar1 = DAT_007650f4;
    fVar42 = DAT_00765104;
    if ((CVar17 & L3) != 0) {
      fVar2 = DAT_00765070 * (fVar2 / DAT_00765068);
      dVar35 = (double)(DAT_0076506c * (float)(dVar35 / (double)DAT_00765064));
      fVar1 = DAT_007650f8;
      fVar42 = DAT_00765108;
    }
    dVar38 = (double)fVar42;
    AccelDelt(fVar2,DAT_007650ec,DAT_007650f0,fVar1,(float *)(param_2 + 0x4c),0x760000,
                        (float *)(param_2 + 0x7c));
    AccelDelt((float)dVar35,DAT_007650fc,DAT_00765100,(float)dVar38,
                        (float *)(param_2 + 0x50),0x760000,(float *)(param_2 + 0x80));
    AccelDeltAng
              ((double)(*(float *)(param_2 + 0x4c) * DAT_007650cc),(double)DAT_0076510c,
               (double)DAT_00765110,(double)DAT_00765114,lVar25 + 0xd0,0x760000,lVar25 + 0x84);
    dVar38 = (double)FastDiffRots
                               ((double)*(float *)(param_2 + 0xd4),
                                (double)(*(float *)(param_2 + 0x50) * DAT_00765064));
    *(float *)(param_2 + 0xd4) = (float)dVar38;
    dVar38 = (double)FastDiffRots
                               ((double)*(float *)(param_2 + 0xd8),
                                (double)(*(float *)(param_2 + 0x4c) * DAT_00765068));
    fVar1 = *(float *)(param_2 + 0x38);
    *(float *)(param_2 + 0xd8) = (float)dVar38;
  }
  MB_SphericalToVector
            (fVar1,(float)dVar38,-*(float *)(param_2 + 0xd4),(float *)(puVar15 + 0x1a));
  fVar42 = *(float *)((int)puVar15 + 0xd4);
  fVar2 = *(float *)(puVar15 + 0x1a);
  fVar1 = *(float *)(puVar15 + 0x1b);
  fVar3 = *(float *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x50);
  fVar5 = *(float *)(param_2 + 0x4c);
  fVar6 = (moby->pos).x;
  fVar7 = (moby->pos).y;
  fVar8 = (moby->pos).z;
  bVar30 = *(byte *)(param_2 + 0x30);
  fVar10 = fVar1 * fVar1 + fVar2 * fVar2 + fVar42 * fVar42;
  if ((double)SQRT(fVar10) == dVar41) {
    uVar9 = *(undefined4 *)((int)puVar15 + 0xdc);
    dVar38 = dVar41;
    dVar35 = dVar41;
    dVar36 = dVar41;
  }
  else {
    fVar11 = 1.0 / SQRT(fVar10);
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    uVar9 = *(undefined4 *)((int)puVar15 + 0xdc);
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    fVar11 = -(fVar10 * fVar11 * fVar11 - 1.0) * fVar11 * 0.5 + fVar11;
    dVar38 = (double)(fVar2 * fVar11);
    dVar36 = (double)(fVar42 * fVar11);
    dVar35 = (double)(fVar1 * fVar11);
  }
  *(float *)(param_2 + 0x10) = (float)dVar38;
  *(float *)(param_2 + 0x14) = (float)dVar36;
  *(float *)(param_2 + 0x18) = (float)dVar35;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  (moby->pos).x = fVar6 + fVar2;
  (moby->pos).y = fVar7 + fVar42;
  (moby->pos).z = fVar8 + fVar1;
  dVar38 = (double)(fVar3 - DAT_00765044);
  fVar42 = DAT_00765048 - DAT_00765044;
  *(undefined4 *)((int)puVar15 + 0x10c) = 0;
  *(undefined4 *)((int)puVar15 + 0x114) = 0;
  *(undefined4 *)((int)puVar15 + 0x11c) = 0;
  if (dVar38 - dVar41 < 0.0) {
    dVar38 = dVar41;
  }
  fVar42 = (float)(dVar38 / (double)fVar42);
  dVar39 = (double)fVar42;
  *(float *)(param_2 + 0xb4) = fVar42;
  fVar6 = DAT_00765154;
  fVar2 = DAT_00765080 * DAT_007650dc;
  fVar42 = fVar5 * DAT_007650d0 * DAT_007650dc;
  fVar1 = (fVar4 * DAT_0076517c + DAT_00765078) * DAT_007650dc;
  fVar3 = -(float)((double)DAT_00765180 * dVar39 - -(double)(fVar4 * DAT_00765178 - DAT_00765074)) *
          DAT_007650dc;
  *(float *)(puVar15 + 0x22) = DAT_0076507c * DAT_007650dc;
  *(float *)((int)puVar15 + 0x104) = fVar42;
  *(float *)(puVar15 + 0x21) = fVar1;
  *(float *)(puVar15 + 0x23) = fVar2;
  *(float *)(puVar15 + 0x20) = fVar3;
  AccelDelt(*(float *)(puVar15 + (uint)bVar30 * 2 + 0x20),fVar6,DAT_00765158,DAT_0076515c,
                      (float *)(param_2 + 0xa4),0x760000,(float *)(param_2 + 0xb8));
  AccelDelt(*(float *)((int)puVar15 + (uint)*(byte *)(param_2 + 0x30) * 0x10 + 0x104),
                      DAT_00765160,DAT_00765164,DAT_00765168,(float *)(param_2 + 0xa8),0x760000,
                      (float *)(param_2 + 0xbc));
  fVar42 = AccelDelt(*(float *)(puVar15 + (uint)*(byte *)(param_2 + 0x30) * 2 + 0x21),
                               DAT_0076516c,DAT_00765170,DAT_00765174,(float *)(param_2 + 0xac),
                               0x760000,(float *)(param_2 + 0xc0));
  dVar36 = (double)*(float *)(param_2 + 0xa4);
  dVar35 = (double)*(float *)(param_2 + 0xa8);
  dVar38 = (double)*(float *)(param_2 + 0xac);
  FastEulerToMtx((double)fVar42,uVar20 - 0xf0,lVar25 + 0xd0);
  fVar42 = *(float *)(puVar15 + 0x26);
  fVar2 = *(float *)((int)puVar15 + 0x134);
  fVar1 = *(float *)(puVar15 + 0x27);
  fVar3 = *(float *)(puVar15 + 0x24);
  fVar4 = *(float *)((int)puVar15 + 0x124);
  fVar5 = *(float *)(puVar15 + 0x25);
  fVar6 = *(float *)(puVar15 + 0x28);
  fVar7 = *(float *)((int)puVar15 + 0x144);
  fVar8 = *(float *)(puVar15 + 0x29);
  *(float *)(param_2 + 0xc4) =
       (g_Pad.sticks.x * 1.5707964 - *(float *)(param_2 + 0xc4)) * DAT_007650bc +
       *(float *)(param_2 + 0xc4);
  *(float *)(param_2 + 200) =
       (g_Pad.sticks.y * 1.5707964 - *(float *)(param_2 + 200)) * DAT_007650c0 +
       *(float *)(param_2 + 200);
  fVar10 = (moby->pos).x;
  fVar11 = (moby->pos).y;
  fVar12 = (moby->pos).z;
  *(f32 *)((int)puVar15 + 0xfc) = (moby->pos).w;
  *(float *)(puVar15 + 0x1e) =
       fVar10 + (float)((double)fVar6 * dVar38 +
                       (double)(float)((double)fVar3 * dVar36 +
                                      (double)(float)((double)fVar42 * dVar35)));
  *(float *)((int)puVar15 + 0xf4) =
       fVar11 + (float)((double)fVar7 * dVar38 +
                       (double)(float)((double)fVar4 * dVar36 +
                                      (double)(float)((double)fVar2 * dVar35)));
  *(float *)(puVar15 + 0x1f) =
       fVar12 + (float)((double)fVar8 * dVar38 +
                       (double)(float)((double)fVar5 * dVar36 +
                                      (double)(float)((double)fVar1 * dVar35)));
  Camera_SetMobyDrivenTargetPos((float *)(puVar15 + 0x1e));
  uVar32 = FastWrapRot
                     (*(float *)(param_2 + 0xd0) * DAT_00765088,
                      *(float *)(param_2 + 0x4c) * DAT_00765084);
  uVar33 = FastWrapRot(*(float *)(param_2 + 0xd4),DAT_0076508c);
  uVar33 = FastDiffRots(uVar33,(double)(*(float *)(param_2 + 0x50) * DAT_00765064));
  dVar38 = (double)*(float *)(param_2 + 0xd8);
  AccelDeltAng
            (uVar32,(double)DAT_00765130,(double)DAT_00765134,(double)DAT_00765138,lVar25 + 0x20,
             0x760000,lVar25 + 0x8c);
  AccelDeltAng
            (uVar33,(double)DAT_0076513c,(double)DAT_00765140,(double)DAT_00765144,lVar25 + 0x24,
             0x760000,lVar25 + 0x90);
  AccelDeltAng
            (dVar38,(double)DAT_00765148,(double)DAT_0076514c,(double)DAT_00765150,lVar25 + 0x28,
             0x760000,lVar25 + 0x94);
  fVar42 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0xc4);
  *(undefined4 *)(puVar15 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  dVar38 = (double)FastDiffRots((double)fVar42,(double)fVar2);
  fVar42 = *(float *)(param_2 + 0x24);
  *(float *)(puVar15 + 0x1d) = (float)dVar38;
  dVar38 = (double)FastDiffRots((double)fVar42,(double)*(float *)(param_2 + 200));
  *(float *)((int)puVar15 + 0xe4) = (float)dVar38;
  Camera_SetMobyDrivenTargetRot((float *)(puVar15 + 0x1c));
  AccelDelt((float)((double)(float)((double)DAT_00765188 - (double)DAT_00765184) * dVar39
                             + (double)DAT_00765184),DAT_0076518c,DAT_00765190,DAT_00765194,
                      (float *)(param_2 + 0x9c),0x760000,(float *)(param_2 + 0xb0));
  fVar42 = *(float *)(param_2 + 0x9c) * 0.5;
  fVar1 = fVar42 + 1.5707963;
  fVar2 = 3.1415925 - fVar42;
  if (fVar42 - (3.1415925 - fVar42) < 0.0) {
    fVar2 = fVar42;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = -3.1415925 - fVar42;
  if ((-3.1415925 - fVar42) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar2 = fVar4 * fVar4;
  fVar42 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar42 = fVar3;
  }
  fVar1 = fVar42 * fVar42;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar2 * fVar3;
  fVar6 = fVar1 * fVar1 * fVar42;
  fVar7 = fVar1 * fVar6;
  g_ViewContext.xratio =
       (fVar2 * fVar5 * 2.601887e-06 +
       fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) /
       (fVar1 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar1 * fVar42 * -0.16666657 + fVar42);
  UpdateViewContext();
  dVar38 = (double)FastWrapRot
                             (*(float *)(param_2 + 0xd0),*(float *)(param_2 + 0x4c) * DAT_007651a0);
  (moby->rotation).x = (float)dVar38;
  dVar38 = (double)FastWrapRot
                             (*(float *)(param_2 + 0xd4),
                              -(*(float *)(param_2 + 0x50) * DAT_007651a4));
  (moby->rotation).y = (float)dVar38;
  dVar38 = (double)FastWrapRot
                             (*(float *)(param_2 + 0xd8),
                              -(*(float *)(param_2 + 0x4c) * DAT_00f08a00));
  (moby->rotation).z = (float)dVar38;
  dVar38 = 2.0;
  iVar24 = CollSphere(0x4000000000000000,lVar21 + 0x10);
  if (iVar24 != 0) {
    if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
      MVar14 = (g_CollOutput.pMoby)->oClass;
      if (((MVar14 == 0x192 || MVar14 == RATCHET) || (MVar14 == AMMOCRATE_04C2)) ||
         (MVar14 == 0x4c3)) goto LAB_001e7ef4;
    }
    (moby->pos).x = g_CollOutput.push.x;
    (moby->pos).y = g_CollOutput.push.y;
    (moby->pos).z = g_CollOutput.push.z;
    (moby->pos).w = g_CollOutput.push.w;
    FastVecReflect(uVar20 - 0x140,uVar20 - 0x140,0xa10980);
    dVar39 = ABS((double)*(float *)(puVar15 + 0x1a));
    dVar35 = ABS((double)*(float *)((int)puVar15 + 0xd4));
    dVar37 = (double)*(float *)(param_2 + 0xd8);
    *(float *)(puVar15 + 0x2b) = (float)(dVar39 - dVar35);
    dVar34 = 0.7853981852531433;
    uVar26 = (ulonglong)(*(uint *)(puVar15 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xd4) >> 0x1d) & 4;
    dVar36 = dVar39;
    if ((double)*(float *)(puVar15 + 0x2b) - dVar41 < 0.0) {
      dVar36 = dVar35;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar42 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    if ((double)*(float *)(puVar15 + 0x2b) - dVar41 < 0.0) {
      dVar35 = dVar39;
    }
    dVar39 = dVar41;
    if (dVar41 < dVar36) {
      lVar22 = uVar20 - 0x200;
      lVar27 = uVar20 - 0x94;
      lVar29 = uVar20 - 0x84;
      lVar31 = 2;
      fVar1 = (float)(dVar35 - dVar36) / (float)(dVar35 + dVar36);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar15 + 0x31) = fVar1;
      *(float *)(puVar15 + 0x30) = fVar1;
      *(float *)((int)puVar15 + 0x184) = fVar1;
      *(float *)((int)puVar15 + 0x17c) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x30) = *(float *)(puVar15 + 0x30) * fVar3;
      *(float *)((int)puVar15 + 0x184) = *(float *)((int)puVar15 + 0x184) * fVar1;
      *(float *)(puVar15 + 0x31) = *(float *)(puVar15 + 0x31) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar22 + 0x17c) = *(float *)((int)lVar22 + 0x16c) * fVar1 * fVar1;
        iVar24 = (int)lVar27;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0x94;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0x17c) = *(float *)((int)lVar22 + 0x17c) * fVar1;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar27 = 2;
      lVar22 = lVar23;
      dVar35 = dVar41;
      do {
        iVar24 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar16 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar24 + 0x17c)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      dVar39 = (double)((float)(dVar35 + 0.7853981852531433) * fVar2 + fVar42);
    }
    dVar35 = (double)FastDiffRots(dVar39,dVar37);
    dVar35 = (double)FastWrapRot((float)dVar37,(float)(dVar35 * (double)DAT_00765058));
    fVar42 = *(float *)((int)puVar15 + 0xd4);
    fVar2 = *(float *)(puVar15 + 0x1a);
    *(float *)(param_2 + 0xd8) = (float)dVar35;
    dVar37 = (double)*(float *)(param_2 + 0xd4);
    dVar35 = ABS((double)*(float *)(puVar15 + 0x1b));
    fVar42 = SQRT(fVar2 * fVar2 + fVar42 * fVar42);
    dVar39 = ABS((double)fVar42);
    *(float *)(puVar15 + 0x2a) = fVar42;
    *(float *)((int)puVar15 + 0x154) = (float)(dVar39 - dVar35);
    uVar26 = (ulonglong)(*(uint *)(puVar15 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x154) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x1b) >> 0x1d) & 4;
    fVar42 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    dVar36 = ABS((double)*(float *)(puVar15 + 0x2a));
    if ((double)*(float *)((int)puVar15 + 0x154) - dVar41 < 0.0) {
      dVar36 = dVar35;
    }
    if ((double)*(float *)((int)puVar15 + 0x154) - dVar41 < 0.0) {
      dVar35 = dVar39;
    }
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar39 = dVar41;
    if (dVar41 < dVar36) {
      lVar22 = uVar20 - 0x200;
      lVar29 = uVar20 - 0xa4;
      lVar27 = uVar20 - 0xb4;
      lVar31 = 2;
      fVar1 = (float)(dVar35 - dVar36) / (float)(dVar35 + dVar36);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar15 + 0x2d) = fVar1;
      *(float *)(puVar15 + 0x2c) = fVar1;
      *(float *)((int)puVar15 + 0x164) = fVar1;
      *(float *)((int)puVar15 + 0x15c) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x2c) = *(float *)(puVar15 + 0x2c) * fVar3;
      *(float *)((int)puVar15 + 0x164) = *(float *)((int)puVar15 + 0x164) * fVar1;
      *(float *)(puVar15 + 0x2d) = *(float *)(puVar15 + 0x2d) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x14c) * fVar1 * fVar1;
        iVar24 = (int)lVar27;
        lVar27 = lVar27 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar1 * fVar1;
        lVar29 = lVar29 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar31 = 4;
      lVar29 = uVar20 - 0xb4;
      pfVar28 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar27 = lVar29;
      do {
        fVar1 = *pfVar28;
        fVar3 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar22 + 0x15c) = *(float *)((int)lVar22 + 0x15c) * fVar1;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar3;
        lVar27 = lVar27 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      lVar22 = 2;
      dVar35 = dVar41;
      do {
        iVar24 = (int)lVar23;
        iVar16 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar24 + 0x15c)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar39 = (double)((float)(dVar35 + dVar34) * fVar42 + fVar2);
    }
    dVar35 = (double)FastDiffRots(-dVar39,dVar37);
    dVar35 = (double)FastWrapRot((float)dVar37,(float)(dVar35 * (double)DAT_0076505c));
    *(float *)(param_2 + 0xd4) = (float)dVar35;
    *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) * DAT_0076509c;
    if (*(int *)(param_2 + 0xcc) == 0) {
      DAT_0096b2dc = DAT_0096b2dc - DAT_007650a0;
      if ((double)DAT_0096b2dc < dVar41) {
        FastVecReflect(uVar20 - 0x150,uVar20 - 0x140,0xa10980);
        fVar2 = *(float *)((int)puVar15 + 0xc4);
        fVar1 = *(float *)(puVar15 + 0x18);
        fVar3 = *(float *)(puVar15 + 0x19);
        dVar35 = (double)g_FrameTime;
        puVar15[0x12] = 0xffffffffffffffff;
        puVar15[0x14] = 1;
        puVar15[0x15] = 1;
        puVar15[0x16] = 0xffffffffffffffff;
        puVar15[0x17] = 0;
        dVar36 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        fVar42 = (float)((double)(float)(dVar35 * dVar38) / dVar36);
        dVar38 = dVar41;
        if (dVar41 - dVar36 < 0.0) {
          dVar38 = (double)(fVar1 * fVar42);
        }
        dVar35 = dVar41;
        if (dVar41 - dVar36 < 0.0) {
          dVar35 = (double)(fVar2 * fVar42);
        }
        dVar39 = dVar41;
        if (dVar41 - dVar36 < 0.0) {
          dVar39 = (double)(fVar3 * fVar42);
        }
        if (dVar36 - dVar41 < 0.0) {
          dVar38 = (double)(fVar1 * fVar42);
        }
        if (dVar36 - dVar41 < 0.0) {
          dVar35 = (double)(fVar2 * fVar42);
        }
        if (dVar36 - dVar41 < 0.0) {
          dVar39 = (double)(fVar3 * fVar42);
        }
        *(float *)(puVar15 + 0x18) = (float)dVar38;
        *(float *)((int)puVar15 + 0xc4) = (float)dVar35;
        *(float *)(puVar15 + 0x19) = (float)dVar39;
        MB_genericExplosion
                  (uVar40,0x4059000000000000,0x4030000000000000,uVar40,0x4022000000000000,
                   0x3ff0000000000000,0x4049000000000000,lVar21,uVar20 - 0x150,0,&DAT_001e7050,1,
                   0x1e,10,0x18);
        moby->state = '\a';
      }
      *(undefined4 *)(param_2 + 0xcc) = DAT_0076519c;
    }
  }
LAB_001e7ef4:
  RegisterMobyDraw(&PTR_M1160_Hud_Draw_007090b0,moby);
  M1160_UpdateMissiles(lVar21,lVar25);
  uVar40 = FastWrapRot
                     (*(float *)(param_2 + 0x28),-(*(float *)(param_2 + 0x4c) * 0.14285715));
  dVar38 = (double)FastWrapRot
                             (*(float *)(param_2 + 0x24),
                              *(float *)(param_2 + 0x50) * -0.14285715 - 0.1);
  M1160_UpdateGunsAndAimPos(uVar40,-dVar38,lVar21,lVar25);
  MB_RegisterLameShadow(DAT_007650dc * DAT_00765094,moby);
  return;
}


// 0x01e8018 (0xf9c bytes)
// inlined: FastAtan2 @0x1e8260, FastAtan2 @0x1e8438, FastAtan2 @0x1e8860
/* Moby 1160 */

void UpdateMoby_1160_JetFighterUnused(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *out;
  f32 fVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar16;
  longlong lVar15;
  MobyInstance *pMVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x270;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x50] = in_LR;
  puVar11[0x4a] = in_f28;
  puVar11[0x4b] = in_f29;
  puVar11[0x4c] = in_f30;
  puVar11[0x4d] = in_f31;
  puVar11[0x49] = unaff_r31;
  puVar11[0x48] = unaff_r30;
  puVar11[0x47] = unaff_r29;
  puVar11[0x46] = unaff_r28;
  puVar11[0x45] = unaff_r27;
  puVar11[0x44] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    out = (float *)moby->pVar;
    FastDecTimerS32(out + 0x33);
    uVar1 = moby->state;
    if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
       ((iVar16 = MB_damage(lVar14,0x30001,0), iVar16 != 0 && (moby->state == '\x04')))) {
      uVar10 = (int)*(uint *)(iVar16 + 0x2c) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar16 + 0x2c)) - uVar10) <
          (int)(FLOAT_ORDER(DAT_0096b2dc))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar16 + 0x2c);
        if ((*(uint *)(iVar16 + 0x30) & 1) != 0) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          GameCamera.shake.strength = 1.0;
          auVar32 = loadVectorLeftIndexed(in_LR,0x1e7fd4);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          lVar23 = uVar13 - 0x1b0;
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.shake.time =
               storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,
                          0x9513c0);
          dVar31 = (double)(*(float *)(iVar16 + 0x2c) * DAT_007650c8);
          MB_SphericalToVector(out[0xe],out[0x36],-out[0x35],(float *)lVar23);
          (moby->pos).x = (moby->pos).x + *(float *)(iVar16 + 0x10);
          (moby->pos).y = (moby->pos).y + *(float *)(iVar16 + 0x14);
          (moby->pos).z = (moby->pos).z + *(float *)(iVar16 + 0x18);
          FastVecReflect(lVar23,lVar23,iVar16 + 0x10);
          fVar3 = ABS(*(float *)(puVar11 + 0x18));
          dVar29 = (double)out[0x36];
          fVar7 = ABS(*(float *)((int)puVar11 + 0xc4));
          *(float *)(puVar11 + 0x36) = fVar3 - fVar7;
          dVar28 = 0.0;
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1d) & 4;
          fVar4 = fVar3;
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar4 = fVar7;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar7 = fVar3;
          }
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          dVar25 = dVar28;
          if (0.0 < fVar4) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x6c;
            lVar20 = uVar13 - 0x7c;
            lVar24 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar7 = fVar4 * fVar4;
            *(float *)(puVar11 + 0x40) = fVar4;
            *(float *)(puVar11 + 0x3f) = fVar4;
            *(float *)((int)puVar11 + 0x1fc) = fVar4;
            *(float *)((int)puVar11 + 500) = fVar4;
            fVar4 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x3f) = *(float *)(puVar11 + 0x3f) * fVar7;
            *(float *)((int)puVar11 + 0x1fc) = *(float *)((int)puVar11 + 0x1fc) * fVar4;
            *(float *)(puVar11 + 0x40) = *(float *)(puVar11 + 0x40) * fVar4 * fVar7;
            do {
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 0x1e4) * fVar4 * fVar4;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x7c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar4 = *pfVar21;
              fVar7 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 500) * fVar4;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 500)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar6 + fVar3);
          }
          dVar25 = (double)FastDiffRots(dVar25,dVar29);
          dVar29 = (double)FastWrapRot
                                     ((float)dVar29,
                                      (float)((double)(float)(dVar25 * (double)DAT_00765058) *
                                             dVar31));
          out[0x36] = (float)dVar29;
          dVar30 = (double)out[0x35];
          dVar29 = ABS((double)*(float *)(puVar11 + 0x19));
          fVar4 = SQRT(*(float *)(puVar11 + 0x18) * *(float *)(puVar11 + 0x18) +
                       *(float *)((int)puVar11 + 0xc4) * *(float *)((int)puVar11 + 0xc4));
          dVar27 = ABS((double)fVar4);
          *(float *)(puVar11 + 0x35) = fVar4;
          *(float *)((int)puVar11 + 0x1ac) = (float)(dVar27 - dVar29);
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar11 + 0x35));
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar25 = dVar29;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar29 = dVar27;
          }
          if (dVar28 < dVar25) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x8c;
            lVar20 = uVar13 - 0x9c;
            lVar24 = 2;
            fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x3c) = fVar3;
            *(float *)(puVar11 + 0x3b) = fVar3;
            *(float *)((int)puVar11 + 0x1dc) = fVar3;
            *(float *)((int)puVar11 + 0x1d4) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar11 + 0x3b) = *(float *)(puVar11 + 0x3b) * fVar6;
            *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar3;
            *(float *)(puVar11 + 0x3c) = *(float *)(puVar11 + 0x3c) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1c4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x9c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar6 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1d4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1d4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar4);
          }
          dVar28 = (double)FastDiffRots(dVar28,dVar30);
          dVar28 = (double)FastWrapRot
                                     ((float)dVar30,
                                      (float)((double)(float)(dVar28 * (double)DAT_0076505c) *
                                             dVar31));
          out[0x35] = (float)dVar28;
        }
      }
      else {
        MB_SphericalToVector(out[0xe],out[0x36],-out[0x35],(float *)(uVar13 - 0x1a0));
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        GameCamera.shake.strength = 0.2;
        auVar32 = loadVectorLeftIndexed(0x10,0x1e7fd4);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.shake.time =
             storeVectorElementWordIndexed
                       (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,0x9513c0
                       );
        uVar26 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        out[0xd] = 2.52234e-43;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar11[0x12] = 0xffffffffffffffff;
        puVar11[0x14] = 1;
        puVar11[0x15] = 1;
        puVar11[0x16] = 0xffffffffffffffff;
        puVar11[0x17] = 0;
        MB_genericExplosion
                  (uVar26,uVar26,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar14,uVar13 - 0x1a0,0,0xffffffffffffffff,
                   1,10,3,0x10);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar32 = ZEXT416(0xffffffff);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x50c4,0x760000);
      auVar34 = vectorReciprocalEstimateFloatingPoint(auVar33);
      auVar32 = loadVectorLeftIndexed(0x18,0x1e7fd4);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar36);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar36 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,0x1e7fd4);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar34,auVar33,auVar36);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar39);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar38);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x1608
                                ,0x969ce0);
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      g_heroInvisible = 0;
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      TransitionMovement(0,1);
      Camera_DeactivateMobyDrivenCam(0);
      DeleteMoby(moby);
    }
    else {
      if (uVar1 != '\x06') {
        if (uVar1 == '\x05') {
          iVar16 = FastDecTimerS32(out + 0xd);
          if (iVar16 != 0) {
            moby->state = '\x01';
          }
        }
        else if (uVar1 == '\x04') {
          M1160_UpdateFlight(moby,out);
        }
        else if (uVar1 == '\x03') {
          dVar31 = (double)((moby->pos).y - g_heroPosition.y);
          dVar25 = (double)((moby->pos).x - g_heroPosition.x);
          dVar29 = (double)((moby->pos).z - g_heroPosition.z);
          dVar28 = (double)FastDiffRots((double)out[0x36],(double)g_heroRotation.z);
          if ((SQRT((float)(dVar29 * dVar29 +
                           (double)(float)(dVar25 * dVar25 + (double)(float)(dVar31 * dVar31)))) <
               DAT_00765030) && (dVar28 < (double)DAT_00765034)) {
            MB_SphericalToVector(DAT_00765024,out[0x36],-out[0x35],out);
            moby->state = '\x04';
            moby->scale = moby->pClass->gScale * DAT_007650dc;
            g_heroInvisible = 1;
          }
          dVar27 = (double)DAT_00765028;
          g_heroPosition.x = (float)(dVar27 * dVar25 + (double)g_heroPosition.x);
          g_heroPosition.y = (float)(dVar27 * dVar31 + (double)g_heroPosition.y);
          g_heroPosition.z = (float)(dVar27 * dVar29 + (double)g_heroPosition.z);
          dVar28 = (double)FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0076502c * dVar28));
          g_heroRotation.z = (float)dVar28;
        }
        else if (uVar1 == '\x02') {
          TransitionMovement(0x32,1);
          SetCameraPosition(0x951500,0x951510,0,0,0);
          out[0xf] = 0.0;
          out[0x10] = 0.0;
          fVar4 = DAT_00765024;
          out[0x11] = 0.0;
          out[0xe] = fVar4;
          out[0x13] = 0.0;
          out[0x14] = 0.0;
          out[0x1a] = 0.0;
          out[0x19] = 0.0;
          out[0x31] = 0.0;
          out[0x32] = 0.0;
          moby->updateDistance = -1;
          pMVar17 = g_heroMobyPtr;
          moby->drawDistance = 0xff;
          pMVar17->collisionMesh = (float *)0xffffffff;
          moby->state = '\x03';
          g_heroPosition.x = DAT_00765028 * ((moby->pos).x - g_heroPosition.x) + g_heroPosition.x;
          g_heroPosition.y = DAT_00765028 * ((moby->pos).y - g_heroPosition.y) + g_heroPosition.y;
          g_heroPosition.z = DAT_00765028 * ((moby->pos).z - g_heroPosition.z) + g_heroPosition.z;
          dVar28 = (double)FastDiffRots((double)out[0x36],(double)g_heroRotation.z);
          dVar28 = (double)FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0076502c * dVar28));
          g_heroRotation.z = (float)dVar28;
        }
        else if (uVar1 == '\x01') {
          dVar28 = (double)MB_BSphereGap(lVar14,g_heroMobyPtr);
          if (dVar28 < (double)DAT_00765020) {
            moby->state = '\x02';
            DAT_0096b2d4 = moby->oClass;
            DAT_0096b2ee = 1;
            DAT_0096b2d6 = SUB41(out[0x1b],0);
            DAT_0096b2d7 = (undefined1)DAT_007650a8;
            DAT_0096b2dc = out[0x12];
            DAT_0096b2d0 = moby;
            DAT_0096b2d8 = DAT_0096b2d7;
            out[0x3c] = 0.0;
            out[0x3d] = 3.57331e-43;
            DAT_0096b2e4 = 0x42c80000;
            DAT_0096b2e0 = DAT_007650c4;
            DAT_0096b2d9 = 3;
            DAT_0096b2da = 3;
            DAT_0096b2db = 3;
            DAT_0096b2ef = 0;
          }
        }
        else if (uVar1 == '\0') {
          out[0x12] = DAT_00765098;
          moby->state = '\x01';
          fVar4 = DAT_007650a4;
          *(undefined1 *)(out + 0xc) = 0;
          out[0x1b] = fVar4;
          moby->scale = moby->pClass->gScale;
          out[8] = out[0x34];
          out[9] = out[0x35];
          fVar7 = g_ViewContext.xratio;
          fVar3 = ABS(g_ViewContext.xratio);
          *(undefined4 *)(puVar11 + 0x34) = 0x3f800000;
          *(float *)((int)puVar11 + 0x1a4) = 1.0 - fVar3;
          fVar4 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar6 = ABS(*(float *)(puVar11 + 0x34));
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar6 = fVar3;
          }
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar3 = 1.0;
          }
          fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if (0.0 < fVar6) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0xac;
            lVar20 = uVar13 - 0xbc;
            lVar24 = 2;
            fVar3 = (fVar3 - fVar6) / (fVar3 + fVar6);
            fVar6 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x38) = fVar3;
            *(float *)(puVar11 + 0x37) = fVar3;
            *(float *)((int)puVar11 + 0x1bc) = fVar3;
            *(float *)((int)puVar11 + 0x1b4) = fVar3;
            fVar3 = fVar6 * fVar6;
            *(float *)(puVar11 + 0x37) = *(float *)(puVar11 + 0x37) * fVar6;
            *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar3;
            *(float *)(puVar11 + 0x38) = *(float *)(puVar11 + 0x38) * fVar3 * fVar6;
            do {
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1a4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0xbc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar6 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1b4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar23 = 2;
            do {
              iVar16 = (int)lVar15;
              lVar15 = lVar15 + 0x10;
              iVar12 = (int)lVar22;
              lVar22 = lVar22 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar16 + 0x1b4) + *(float *)(iVar12 + 4) +
                      *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar7 + fVar5;
          }
          out[0x2c] = 0.0;
          out[0x26] = fVar4 * 2.0;
          out[0x27] = fVar4 * 2.0;
          out[0x34] = (moby->rotation).x;
          out[0x35] = (moby->rotation).y;
          out[0x36] = (moby->rotation).z;
          out[0x37] = (moby->rotation).w;
          DAT_007651b4 = (void *)(DAT_0095ddd4 + (uint)DAT_0095da9a * 0x10);
          if (DAT_00f08e04 == '\0') {
            memcpy(&DAT_00f08a04,DAT_007651b4,0x400);
          }
          DAT_00f08e04 = '\x01';
        }
      }
      fVar8 = (moby->pos).x;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar7 = 15.0;
      fVar4 = (moby->pos).x;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x41700000) {
        (moby->pos).x = 15.0;
        fVar4 = fVar7;
      }
      fVar3 = 1008.0;
      if (1008.0 < fVar4) {
        (moby->pos).x = 1008.0;
        fVar4 = fVar3;
      }
      fVar8 = (moby->pos).y;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar6 = (moby->pos).y;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x41700000) {
        (moby->pos).y = 15.0;
        fVar6 = fVar7;
      }
      if (1008.0 < fVar6) {
        (moby->pos).y = 1008.0;
        fVar6 = fVar3;
      }
      fVar8 = (moby->pos).z;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar5 = (moby->pos).z;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x41700000) {
        (moby->pos).z = 15.0;
        fVar5 = fVar7;
      }
      if (1008.0 < fVar5) {
        (moby->pos).z = 1008.0;
        fVar5 = fVar3;
      }
      bVar2 = moby->state;
      if (bVar2 == 4) {
        g_heroPosition.w = (moby->pos).w;
        g_heroRotation.x = out[0x34];
        g_heroRotation.y = out[0x35];
        g_heroRotation.z = out[0x36];
        g_heroRotation.w = out[0x37];
        g_heroPosition.x = fVar4;
        g_heroPosition.y = fVar6;
        g_heroPosition.z = fVar5;
      }
      if ((2 < bVar2) && (bVar2 < 5)) {
        pMVar17 = (MobyInstance *)out[0x15];
        if (pMVar17 == (MobyInstance *)0x0) {
          pMVar17 = (MobyInstance *)FUN_002b9870(lVar14);
          out[0x15] = (float)pMVar17;
        }
        if (pMVar17 != (MobyInstance *)0x0) {
          pvVar9 = pMVar17->pVar;
          (pMVar17->rotation).z = DAT_0071f408 * -1.5707964;
          fVar4 = *(float *)((int)pvVar9 + 0xc);
          fVar7 = (out[0x2d] * DAT_00765198 + 10.0) * DAT_007650dc;
          if (fVar4 <= fVar7) {
            if (fVar4 < fVar7) {
              *(float *)((int)pvVar9 + 0xc) = DAT_0071f408 * 0.35 + fVar4;
            }
          }
          else {
            *(float *)((int)pvVar9 + 0xc) = -(DAT_0071f408 * 0.35 - fVar4);
          }
          cVar18 = FastDoubleToInt((double)(out[0x2d] * 80.0));
          pMVar17->alpha = cVar18 + 'P';
          FastEulerToMtx1(uVar13 - 0x150,&pMVar17->rotation);
          FastMtxCopyNoTranslate(uVar13 - 0x110,lVar14 + 0xc0);
          FastVecMtx4Mul(uVar13 - 400,uVar13 - 0x110,uVar13 - 0x150);
          FastApplyTransform(&(pMVar17->transform).v0,(Vec4 *)(uVar13 - 400));
          GetBonePosition(lVar14,2,&pMVar17->pos);
          PostUpdateMobyLockTransform(pMVar17);
        }
      }
    }
  }
  return;
}


