// game/update/moby186.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2caea0-0x2cd958
#include <math.h>
#include <stdio.h>
#include "game/update/moby186.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby1859.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02caea0 (0x28 bytes)
void M1859_002caea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FastIntToDouble(param_3);
  return;
}


// 0x02caee0 (0x2e0 bytes)
// inlined: FastAtan2 @0x2cb038
void M186_002caee0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar14 = uVar19 - 0xb0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar19;
  puVar8[0x18] = in_LR;
  fVar13 = 0.0;
  param_2[0xc] = 0.0;
  fVar1 = *param_3;
  *param_2 = fVar1;
  fVar2 = param_3[1];
  param_2[1] = fVar2;
  fVar3 = param_3[2];
  param_2[2] = fVar3;
  param_2[3] = param_3[3];
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar10 = fVar4 - fVar2;
  fVar6 = *(float *)(param_1 + 0x18);
  fVar9 = fVar5 - fVar1;
  fVar7 = param_2[7];
  puVar8[0x15] = unaff_r31;
  dVar25 = (double)param_2[8];
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  fVar3 = ((float)((double)(float)((double)fVar7 * 35.0) * dVar25) / (ABS(fVar3 - fVar6) + 1.0)) *
          (fVar9 * fVar9 + 0.25);
  dVar23 = (double)fVar3;
  param_2[5] = fVar3;
  if (dVar25 < dVar23) {
    param_2[5] = param_2[8];
    dVar23 = dVar25;
  }
  fVar1 = fVar1 - fVar5;
  fVar2 = fVar2 - fVar4;
  fVar3 = ABS(fVar1);
  fVar4 = ABS(fVar2);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar3 - fVar4;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  uVar15 = uVar17 << 2 | 0x735900;
  lVar16 = uVar17 << 2;
  fVar1 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)lVar16);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)((int)uVar15 + 4);
  if (0.0 < fVar1) {
    lVar20 = uVar19 - 0xa0;
    lVar18 = uVar19 - 0x34;
    lVar16 = uVar19 - 0x24;
    lVar22 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x11) = fVar1;
    *(float *)(puVar8 + 0x10) = fVar1;
    *(float *)((int)puVar8 + 0x84) = fVar1;
    *(float *)((int)puVar8 + 0x7c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar4;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar1;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar1 * fVar1;
      iVar11 = (int)lVar18;
      lVar20 = lVar20 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
      lVar16 = lVar16 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    uVar15 = uVar19 - 0x34;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = 4;
    uVar19 = uVar15;
    lVar16 = lVar14;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)uVar19 + 4) = *(float *)((int)uVar19 + 4) * fVar4;
      uVar19 = uVar19 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = 2;
    lVar18 = 2;
    do {
      iVar11 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar12 = (int)uVar15;
      uVar15 = uVar15 + 0x10;
      fVar13 = fVar13 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
               + *(float *)(iVar12 + 0xc);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    fVar13 = (fVar13 + 0.7853982) * fVar2 + fVar3;
  }
  param_2[6] = fVar13;
  dVar25 = (double)MB_computeLobVelocity
                             (dVar23,-(double)fVar7,param_1 + 0x10,param_2,uVar15,lVar16,0);
  param_2[4] = (float)dVar25;
  dVar24 = (double)(g_FrameTime * 7.0);
  dVar23 = dVar25;
  if (dVar24 < dVar25) {
    param_2[4] = g_FrameTime * 7.0;
    dVar23 = dVar24;
  }
  *(undefined1 *)((int)param_2 + 0x2f) = 0;
  param_2[5] = param_2[5] * (float)(dVar25 / dVar23);
  return;
}


// 0x02cb1e0 (0x644 bytes)
// inlined: FastRSqrt @0x2cb3e8
undefined8
M186_002cb1e0(int param_1,undefined4 *param_2,float *param_3,char param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> auStack_a0;
  GPiece<24> local_90;
  
  fVar4 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar5 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = (*(float *)(param_1 + 0x2c) * 5.2) / *(float *)(*(int *)(param_1 + 0x24) + 0x24);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar2 - fVar3 < 0.0) {
    fVar4 = fVar4 * (fVar2 / fVar3);
  }
  if (fVar2 - fVar3 < 0.0) {
    fVar5 = fVar5 * (fVar2 / fVar3);
  }
  dVar12 = 0.5;
  bVar1 = 0.5 < SQRT(fVar5 * 0.5 * fVar5 * 0.5 + fVar4 * 0.5 * fVar4 * 0.5);
  dVar8 = (double)M1859_002c9a68(local_f0,param_1);
  dVar9 = 0.0;
  if (dVar8 == 0.0) {
    uVar6 = 0;
    if (bVar1) {
      uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
    }
  }
  else if ((float)(dVar8 - (double)*(float *)(param_1 + 0x18)) <=
           (*(float *)(param_1 + 0x2c) * 3.0) / *(float *)(*(int *)(param_1 + 0x24) + 0x24)) {
    dVar11 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                     g_CollOutput.normal.x * g_CollOutput.normal.x +
                     g_CollOutput.normal.y * g_CollOutput.normal.y);
    dVar8 = dVar9;
    dVar10 = dVar9;
    if ((float)SQRT(dVar11) != 0.0) {
      dVar8 = 1.0 / SQRT(dVar11);
      dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar8) * dVar8 - 1.0) *
                              (double)(float)(dVar12 * dVar8) + dVar8);
      dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar8) * dVar8 - 1.0) *
                              (double)(float)(dVar12 * dVar8) + dVar8);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar11 * dVar8) * dVar8 - 1.0) *
                      (double)(float)(dVar12 * dVar8) + dVar8);
      dVar9 = (double)(g_CollOutput.normal.x * fVar2);
      dVar8 = (double)(g_CollOutput.normal.y * fVar2);
      dVar10 = (double)(g_CollOutput.normal.z * fVar2);
    }
    if ((double)(float)(ABS(dVar9) + ABS(dVar8)) <= ABS(dVar10)) {
      dVar8 = (double)FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
      dVar9 = (double)(float)(dVar8 * dVar12 + 1.0);
      dVar8 = 0.20000000298023224;
      iVar7 = CollSphere
                        ((double)(float)(dVar9 * 0.19990000128746033),local_90,&DAT_002cb1c0,6,
                         param_1);
      if (iVar7 == 0) {
        if ((param_4 == '\0') ||
           (iVar7 = CollLine(local_e0,local_d0,6,param_1,0), iVar7 != 0)) {
          DAT_0096bc00 = param_2[0x14];
          DAT_0096bc04 = param_2[0x15];
          DAT_0096bc08 = param_2[0x16];
          DAT_0096bc1f = *(undefined1 *)(param_2 + 0x1a);
          DAT_0096bc20 = param_2[0x11];
          DAT_0096bbf0 = *param_2;
          DAT_0096bbf4 = param_2[1];
          DAT_0096bbf8 = param_2[2];
          DAT_0096bbfc = param_2[3];
          M186_002caee0(param_1,&DAT_0096bbf0,local_f0);
          param_2[0x14] = DAT_0096bc00;
          param_2[0x15] = DAT_0096bc04;
          param_2[0x16] = DAT_0096bc08;
          *(undefined1 *)(param_2 + 0x1a) = DAT_0096bc1f;
          param_2[0x11] = DAT_0096bc20;
          MB_BallisticTicksToHeight((double)DAT_0096bc0c,param_1 + 0x10,auStack_a0,0xc0,0)
          ;
          FastIntToDouble(10);
          FastIntToDouble(10);
          iVar7 = CollLine(local_e0,local_b0,6,param_1,0);
          if ((iVar7 == 0) || (g_CollOutput.pMoby == (MobyInstance *)param_2[0xe])) {
            iVar7 = CollLine(local_b0,local_d0,6,param_1,0);
            if ((iVar7 == 0) || (g_CollOutput.pMoby == (MobyInstance *)param_2[0xe])) {
              uVar6 = 1;
              *(undefined1 *)(param_1 + 0xbc) = 0xd;
            }
            else {
              uVar6 = 0;
              if (bVar1) {
                uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
              }
            }
          }
          else {
            uVar6 = 0;
            if (bVar1) {
              uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
            }
          }
        }
        else {
          uVar6 = 0;
          if (bVar1) {
            uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
          }
        }
      }
      else {
        g_CollOutput.push.z = -(float)(dVar9 * dVar8 - (double)g_CollOutput.push.z);
        uVar6 = 0;
        if (bVar1) {
          uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
        }
      }
    }
    else {
      uVar6 = 0;
      if (bVar1) {
        uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
      }
    }
  }
  else {
    uVar6 = 0;
    if (bVar1) {
      uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
    }
  }
  return uVar6;
}


// 0x02cb828 (0x100 bytes)
MobyInstance * FUN_002cb828(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  f32 fVar1;
  undefined4 uVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(DOOM_BOT);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pvVar3 = pMVar4->pVar;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMVar4->drawDistance = 0xff;
    (pMVar4->pos).w = fVar1;
    *(undefined4 *)((int)pvVar3 + 0x10) = *param_3;
    *(undefined4 *)((int)pvVar3 + 0x14) = param_3[1];
    uVar2 = param_3[2];
    *(undefined4 *)((int)pvVar3 + 0x60) = param_1;
    *(undefined4 *)((int)pvVar3 + 0x18) = uVar2;
    *(undefined4 *)((int)pvVar3 + 0x1c) = param_3[3];
    UpdateMobyTransform(pMVar4);
    MB_CopyHeroLights(pMVar4);
    pMVar4->scale = pMVar4->pClass->gScale * 0.1;
  }
  return pMVar4;
}


// 0x02cb930 (0x120 bytes)
undefined1 M186_002cb930(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  GPiece<16> local_30;
  GPiece<24> local_20;
  
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  iVar1 = CollLine(local_20,local_30,6,param_1,0);
  if (iVar1 != 0) {
    if (((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
        ((g_CollOutput.pMoby)->pClass == (MobyClass *)0x0)) ||
       ((short)(g_CollOutput.pMoby)->pClass->mode_bits != 5)) {
      iVar1 = CollHotspot();
      if (iVar1 < 4) {
        if (iVar1 < 2) {
          if (iVar1 < 0) {
            return uVar2;
          }
        }
        else if (iVar1 < 3) {
          return uVar2;
        }
      }
      else if (iVar1 < 0xb) {
        if (iVar1 != 8) {
          return uVar2;
        }
      }
      else if (0xd < iVar1) {
        return uVar2;
      }
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0xb;
    }
  }
  return uVar2;
}


// 0x02cbaf8 (0x1e60 bytes)
// strings: 00655b34: 'Hey, M186 init should be earlier!\n' | 002cbaa0: '?333>' (raw) | 00655b5c: 'main loop squirm! should never get here!\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 186 */

void UpdateMoby_186(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  f32 fVar6;
  MobyInstance *pMVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar13;
  u8 uVar15;
  float fVar14;
  ulonglong uVar12;
  float *pfVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  uint local_a0;
  
  lVar11 = (longlong)(int)moby;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar5 = (float *)moby->pVar;
  if (pfVar5 == (float *)0x0) {
    return;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  fVar6 = (moby->pos).x;
  uVar8 = (int)fVar6 >> 0x1f;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
  dVar26 = 2.0;
  if ((((iVar13 < 0x40000000) || (0x447f4000 < iVar13)) ||
      (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x447f4000 < iVar13 || iVar13 < 0x40000000)) ||
     ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x40000000 || (0x447f4000 < iVar13)))) {
    DeleteMoby(moby);
    return;
  }
  iVar13 = MB_damage(lVar11,&DAT_00800001,0);
  if (iVar13 != 0) {
    moby->state = '\v';
  }
  dVar18 = (double)FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
  dVar25 = 1.0;
  dVar27 = (double)(float)(dVar18 + 1.0);
  dVar24 = 0.05000000074505806;
  moby->scale = (float)((double)(float)((double)moby->pClass->gScale * dVar27 - (double)moby->scale)
                        * 0.05000000074505806 + (double)moby->scale);
  dVar18 = (double)FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
  dVar23 = 0.5;
  uVar15 = moby->updateId;
  dVar18 = (double)(float)(dVar18 * 0.5 + dVar25);
  if (((uVar15 == '\0') || (uVar15 == '\x06')) || (dVar19 = dVar25, uVar15 == '\a')) {
    dVar19 = (double)(float)(dVar18 / dVar27);
  }
  moby->unk58 = (float)dVar19;
  if (moby->state != '\v') {
    iVar13 = FastDoubleToInt((double)(float)(dVar27 * 183.29600524902344));
    fVar14 = DAT_0071f408;
    DAT_0096bba0 = iVar13 + 1;
    DAT_0096bbd0 = 0.0;
    DAT_0096bba4 = (float)(dVar27 * 0.1979999989271164 + 0.019999999552965164);
    if (moby->state == '\0') {
      DAT_0096bba8 = (float)(dVar27 * 0.25);
      DAT_0096bbdc = DAT_0071f408 * 0.02;
      DAT_0096bbac = DAT_0096bba8;
      pfVar5[0x11] = DAT_0071f408 * 0.2;
      DAT_0096bbe0 = fVar14 * 0.01;
      DAT_0096bbbc = (float)(dVar27 * 0.009999999776482582) * fVar14;
      pfVar5[0x10] = DAT_0096bbbc;
      DAT_0096bbc0 = 0.3;
      pfVar5[0x17] = (float)((double)(fVar14 * 0.066) * dVar18);
      DAT_0096bbc8 = 0x40490fdb;
      DAT_0096bbe4 = fVar14 * 0.045;
      DAT_0096bc0c = DAT_0071f418 * 29.7;
      DAT_0096bc14 = 0x40f00000;
      DAT_0096bc18 = 0x41380000;
      _DAT_0096bc1c = 0x2030400;
      DAT_0096bc10 = (float)(dVar27 * 0.10000000149011612);
      DAT_0096bc24 = DAT_0096bbdc;
      DAT_0096bc28 = DAT_0096bbe0;
      DAT_0096bc2c = DAT_0096bbe4;
      pfVar5[0xe] = 0.0;
      moby->state = '\x0e';
      pfVar5[0xc] = 0.0;
      DAT_0096bbb0 = pfVar5[0x10];
      pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar18);
      DAT_0096bbb4 = pfVar5[0x11];
      DAT_0096bbb8 = pfVar5[0x12];
      DAT_0096bbe8 = pfVar5[0x13];
      DAT_0096bbc4 = pfVar5[0x17];
      DAT_0096bc00 = pfVar5[0x14];
      DAT_0096bc04 = pfVar5[0x15];
      DAT_0096bc08 = pfVar5[0x16];
      _DAT_0096bc1c = CONCAT31(_DAT_0096bc1c,*(undefined1 *)(pfVar5 + 0x1a));
      DAT_0096bc20 = pfVar5[0x11];
      DAT_0096bbf0 = *pfVar5;
      DAT_0096bbf4 = pfVar5[1];
      DAT_0096bbf8 = pfVar5[2];
      DAT_0096bbfc = pfVar5[3];
      if (moby->animationId != '\x05') {
        MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
      }
    }
    if (moby->state == '\r') {
      if (((pfVar5[0x18] == 0.0) || (cVar1 = *(char *)((int)pfVar5[0x18] + 0x20), cVar1 == -2)) ||
         (cVar1 == -3)) {
        DeleteMoby(moby);
        return;
      }
      fVar6 = (moby->pos).x;
      uVar8 = (int)fVar6 >> 0x1f;
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
      if (((iVar13 < 0x447f4001 && 0x3fffffff < iVar13) &&
          (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
          iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x447f4001 && 0x3fffffff < iVar13))
         && ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
             iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x3fffffff < iVar13 &&
             (iVar13 < 0x447f4001)))) {
        return;
      }
      DeleteMoby(moby);
      return;
    }
    fVar14 = pfVar5[0xd];
    pfVar5[0xd] = (float)((int)fVar14 + 1);
    if ((int)(animationSpeed * 3600.5) < (int)fVar14 + 1) {
      moby->state = '\v';
    }
    FastDecTimerS32(pfVar5 + 0xc);
    pfVar5[8] = (moby->pos).x;
    pfVar5[9] = (moby->pos).y;
    pfVar5[10] = (moby->pos).z;
    pfVar5[0xb] = (moby->pos).w;
    iVar13 = M186_002c9860(lVar11,5,0);
    fVar14 = (moby->pos).z;
    if (iVar13 != 0) {
      if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
LAB_002cc0e0:
        (moby->pos).x = g_CollOutput.push.x;
        (moby->pos).y = g_CollOutput.push.y;
        fVar3 = g_CollOutput.push.z - fVar14;
        (moby->pos).z = g_CollOutput.push.z;
        (moby->pos).w = g_CollOutput.push.w;
        if (0.6 < ABS(fVar3)) {
          (moby->pos).z = fVar14 + 0.01;
        }
        pfVar16 = pfVar5 + 4;
        pfVar5[4] = g_CollOutput.normal.x;
        pfVar5[5] = g_CollOutput.normal.y;
        pfVar5[6] = g_CollOutput.normal.z;
        pfVar5[7] = g_CollOutput.normal.w;
        FUN_005e8e80((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
        FUN_005e7ed8((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
        moby->state = '\b';
        fVar14 = animationSpeed;
        if (pfVar5[0xe] != 0.0) {
          pfVar5[0xf] = pfVar5[0xe];
          pfVar5[0xc] = (float)((int)pfVar5[0xc] + 500);
        }
        if (moby->animationId != '\x05') {
          MB_SetAnimation(lVar11,5,0,(int)(fVar14 * 5.5));
        }
      }
      else if (g_CollOutput.poly < 0) {
        if (((((g_CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) == NONE) ||
            ((g_CollOutput.pMoby)->pClass == (MobyClass *)0x0)) ||
           ((short)(g_CollOutput.pMoby)->pClass->mode_bits != 5)) {
          if (g_CollOutput.poly < 0) goto LAB_002cc0e0;
        }
        else {
          moby->state = '\v';
        }
      }
    }
    fVar6 = (moby->pos).z;
    uVar8 = (int)fVar6 >> 0x1f;
    if ((int)((uVar8 >> 1 ^ (uint)fVar6) - uVar8) < 0x3dcccccd) {
      DeleteMoby(moby);
      return;
    }
    if (4000 < (int)pfVar5[0xc]) {
      moby->state = '\v';
    }
  }
  lVar17 = lVar11 + 0x10;
  dVar19 = (double)GetGroundZ(dVar23,lVar17,0);
  uVar22 = 0;
  if ((dVar19 != 0.0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) {
    MB_PlatformLocalToWorld
              (lVar11,g_CollOutput.pMoby,lVar17,lVar11 + 0x40,lVar17,lVar11 + 0x40);
  }
  bVar2 = moby->state;
  if (bVar2 < 8) {
    if (1 < bVar2) {
      if (bVar2 < 6) {
        pMVar7 = (MobyInstance *)pfVar5[0xe];
        dVar26 = dVar18;
        if ((pMVar7 != (MobyInstance *)0x0) && (pMVar7->state != 0xfd && pMVar7->state != 0xfe)) {
          dVar24 = (double)(pMVar7->pos).z;
          iVar13 = MB_GetPvarsIfMobyHasThem(pMVar7);
          if (iVar13 != 0) {
            dVar19 = (double)FastIntToDouble(*(undefined1 *)(iVar13 + 10));
            dVar24 = (double)(float)(dVar24 + (double)*(float *)(iVar13 + 0x10));
            dVar18 = (double)(float)(dVar19 * 0.125 + dVar18);
          }
          fVar3 = (moby->pos).y;
          fVar14 = pfVar5[0xe];
          fVar4 = (moby->pos).x;
          fVar9 = fVar3 - *(float *)((int)fVar14 + 0x14);
          dVar19 = (double)(moby->pos).z;
          fVar10 = fVar4 - *(float *)((int)fVar14 + 0x10);
          fVar14 = (float)(dVar19 - (double)*(float *)((int)fVar14 + 0x18));
          if ((double)SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar9 * fVar9) < dVar18) {
            iVar13 = CollSphere(dVar26,lVar17);
            fVar4 = (moby->pos).x;
            fVar3 = (moby->pos).y;
            dVar19 = (double)(moby->pos).z;
            if (iVar13 != 0) {
              moby->state = '\v';
              goto LAB_002cd86c;
            }
          }
          fVar3 = fVar3 - *(float *)((int)pfVar5[0xe] + 0x14);
          fVar4 = fVar4 - *(float *)((int)pfVar5[0xe] + 0x10);
          if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)(dVar18 * dVar23)) &&
             (ABS((float)(dVar24 - (double)(float)(dVar26 * 0.10000000149011612 + dVar19))) <
              (float)(dVar18 * dVar23))) {
            DAT_0096bc00 = pfVar5[0x14];
            DAT_0096bc04 = pfVar5[0x15];
            DAT_0096bc08 = pfVar5[0x16];
            _DAT_0096bc1c = CONCAT31(_DAT_0096bc1c,*(undefined1 *)(pfVar5 + 0x1a));
            DAT_0096bc20 = pfVar5[0x11];
            DAT_0096bbf0 = *pfVar5;
            DAT_0096bbf4 = pfVar5[1];
            DAT_0096bbf8 = pfVar5[2];
            DAT_0096bbfc = pfVar5[3];
            M186_002caee0
                      (lVar11,&DAT_0096bbf0,(ulonglong)(uint)pfVar5[0xe] + 0x10);
            pfVar5[0x14] = DAT_0096bc00;
            pfVar5[0x15] = DAT_0096bc04;
            fVar14 = pfVar5[0xe];
            pfVar5[0x16] = DAT_0096bc08;
            *(undefined1 *)(pfVar5 + 0x1a) = DAT_0096bc1f;
            pfVar5[0x11] = DAT_0096bc20;
            *pfVar5 = *(float *)((int)fVar14 + 0x10);
            pfVar5[1] = *(float *)((int)fVar14 + 0x14);
            pfVar5[2] = *(float *)((int)fVar14 + 0x18);
            pfVar5[3] = *(float *)((int)fVar14 + 0x1c);
            pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.066) * dVar26);
            if (moby->animationId != '\0') {
              MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 2.5));
            }
            moby->state = '\x06';
          }
        }
        iVar13 = MB_randInt(4);
        if (iVar13 == 0) {
          fVar14 = (float)M186_002c9be0
                                    (lVar11,local_f0,lVar11 + 0x40,pfVar5[0xf],1);
          pfVar5[0xe] = fVar14;
        }
        dVar18 = 0.10000000149011612;
        pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar26);
        moby->state = '\x04';
        if (pfVar5[0xe] == 0.0) {
          uVar22 = MB_randRangeFloat(-3.1415927,3.1415927);
          iVar13 = MB_randInt(4);
          if (iVar13 == 0) {
            uVar20 = 0x3ffd9163e0000000;
            uVar21 = 0x4010000000000000;
            dVar27 = (double)(float)(dVar27 * 0.3499999940395355);
            dVar24 = (double)FastIntToDouble
                                       (0x3fd6666660000000,0x3ffd9163e0000000,0x4010000000000000,
                                        DAT_0096bba0);
            dVar24 = (double)M186_002ca268
                                       (uVar22,uVar20,uVar21,dVar27,uVar21,
                                        (double)(float)(dVar24 * 0.0009765625),lVar11,lVar17);
            pfVar5[0x19] = (float)dVar24;
          }
          else {
            local_a0 = 0x40a00000;
          }
        }
        pMVar7 = (MobyInstance *)pfVar5[0xe];
        if (((pMVar7 == (MobyInstance *)0x0) || (pMVar7 == g_heroMobyPtr)) ||
           ((pMVar7->state != 0xfd && pMVar7->state != 0xfe &&
            (((pMVar7->pClass != (MobyClass *)0x0 && ((short)pMVar7->pClass->mode_bits == 5)) &&
             ((pMVar7->modeBits & CAN_BE_AUTO_TARGETED) != NONE)))))) {
          uVar15 = moby->state;
          if (pMVar7 == (MobyInstance *)0x0) {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              MB_SetAnimation(lVar11,6,0,(int)(animationSpeed * 10.5));
            }
            pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
          }
          else {
            iVar13 = MB_randInt(4);
            if ((iVar13 == 0) &&
               (iVar13 = M186_002cb1e0
                                   (lVar11,pfVar5,(ulonglong)(uint)pfVar5[0xe] + 0x10,1),
               iVar13 != 0)) {
              fVar14 = pfVar5[0xe];
              *pfVar5 = *(float *)((int)fVar14 + 0x10);
              pfVar5[1] = *(float *)((int)fVar14 + 0x14);
              pfVar5[2] = *(float *)((int)fVar14 + 0x18);
              pfVar5[3] = *(float *)((int)fVar14 + 0x1c);
              pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.066) * dVar26);
              if (moby->animationId != '\0') {
                MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 2.5));
              }
              moby->state = '\x06';
              goto LAB_002cd86c;
            }
            pMVar7 = (MobyInstance *)pfVar5[0xe];
            fVar14 = (moby->pos).y - (pMVar7->pos).y;
            fVar3 = (moby->pos).x - (pMVar7->pos).x;
            dVar24 = (double)SQRT(fVar3 * fVar3 + fVar14 * fVar14);
            if (pMVar7 == g_heroMobyPtr) {
              moby->state = '\x05';
              if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x06')) {
                MB_SetAnimation(lVar11,6,0,(int)((double)animationSpeed * dVar23));
              }
              pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
            }
            if (8.0 <= dVar24) {
              if (dVar24 <= 20.0) {
                moby->state = '\x04';
                if (moby->animationId != '\a') {
                  MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 10.5));
                }
                pfVar5[0x17] = (float)((double)(float)((double)DAT_0071f408 * dVar18) * dVar26);
              }
              else {
                moby->state = '\x05';
                if (moby->animationId != '\0') {
                  MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 10.5));
                }
                pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
              }
            }
            else {
              moby->state = '\x04';
              if (moby->animationId != '\a') {
                MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 10.5));
              }
              pfVar5[0x17] = (float)((double)(float)((double)DAT_0071f408 * dVar18) * dVar26);
            }
            iVar13 = MB_randInt(4);
            if (iVar13 == 0) {
              dVar24 = (double)(moby->rotation).z;
              uVar21 = 0x3ffd9163e0000000;
              uVar20 = 0x3fd6666660000000;
              uVar22 = 0x4010000000000000;
              dVar23 = (double)FastIntToDouble
                                         (0x4010000000000000,0x3fd6666660000000,DAT_0096bba0);
              dVar23 = (double)M186_002ca268
                                         (dVar24,uVar21,uVar22,uVar20,uVar22,
                                          (double)(float)(dVar23 * 0.0009765625),lVar11,lVar17);
              pfVar5[0x19] = (float)dVar23;
            }
            else {
              local_a0 = 0x40a00000;
            }
          }
          if ((moby->state == '\x04') && (uVar15 == '\x05')) {
            moby->state = '\f';
            if (moby->animationId != '\x01') {
              MB_SetAnimation(lVar11,1,0,(int)(animationSpeed * 10.5));
            }
          }
          else {
            dVar27 = (double)(moby->pos).y;
            dVar23 = (double)FUN_005e8128((double)pfVar5[0x19]);
            dVar24 = 5.0;
            pfVar5[1] = (float)(dVar23 * 5.0 + dVar27);
            dVar27 = (double)(moby->pos).x;
            dVar23 = (double)cosf(pfVar5[0x19]);
            DAT_0096bbb0 = pfVar5[0x10];
            *pfVar5 = (float)(dVar23 * dVar24 + dVar27);
            pfVar5[2] = (float)((double)(moby->pos).z + dVar25);
            DAT_0096bbb4 = pfVar5[0x11];
            DAT_0096bbb8 = pfVar5[0x12];
            DAT_0096bbe8 = pfVar5[0x13];
            DAT_0096bbc4 = pfVar5[0x17];
            OrganicDeltAngSpeed
                      ((double)pfVar5[0x19],(double)DAT_0096bbdc,(double)DAT_0096bbe0,
                       (double)DAT_0096bbe4,lVar11,DAT_0096bbe8,pfVar5 + 0x11);
            iVar13 = CollLine(local_e0,local_d0,6,lVar11,0);
            dVar23 = (double)(moby->pos).z;
            if (((iVar13 == 0) || (g_CollOutput.pMoby == (MobyInstance *)pfVar5[0xe])) ||
               (((g_CollOutput.pMoby != (MobyInstance *)0x0 &&
                 ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
                ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)))) {
              uVar12 = MB_UpdateNavMoveTurning(lVar11,&DAT_0096bba0,pfVar5,pfVar5 + 4);
              if (dVar25 < ABS((double)(float)((double)(moby->pos).z - dVar23))) {
                (moby->pos).z = (float)dVar23;
                iVar13 = M186_002c9860(lVar11,5,0);
                if (iVar13 != 0) {
                  (moby->pos).x = g_CollOutput.push.x;
                  (moby->pos).y = g_CollOutput.push.y;
                  dVar24 = (double)g_CollOutput.push.z;
                  (moby->pos).z = g_CollOutput.push.z;
                  (moby->pos).w = g_CollOutput.push.w;
                  if (dVar25 < ABS((double)(float)(dVar24 - dVar23))) {
                    (moby->pos).z = (float)dVar23;
                  }
                }
              }
            }
            else {
              uVar12 = 2;
              local_a0 = 0;
              pfVar5[4] = (moby->pos).x - *pfVar5;
              fVar14 = (moby->pos).y;
              pfVar5[6] = 0.01;
              pfVar5[5] = fVar14 - pfVar5[1];
              FUN_005e7f98(dVar18,pfVar5 + 4,pfVar5 + 4);
            }
            pfVar5[0x10] = DAT_0096bbb0;
            pfVar5[0x11] = DAT_0096bbb4;
            pfVar5[0x12] = DAT_0096bbb8;
            pfVar5[0x13] = DAT_0096bbe8;
            pfVar5[0x17] = DAT_0096bbc4;
            if (((uVar12 & 2) != 0) ||
               ((int)(FLOAT_ORDER(local_a0)) <
                0x40800000)) {
              iVar13 = M186_002cb1e0(lVar11,pfVar5,pfVar5,0);
              if (iVar13 == 0) {
                if (pfVar5[0xe] != 0.0) {
                  pfVar5[0xf] = pfVar5[0xe];
                  pfVar5[0xc] = (float)((int)pfVar5[0xc] + 500);
                }
                pfVar5[4] = (moby->pos).x - *pfVar5;
                fVar14 = (moby->pos).y;
                pfVar5[6] = 0.01;
                pfVar5[5] = fVar14 - pfVar5[1];
                FUN_005e7f98(dVar18,pfVar5 + 4,pfVar5 + 4);
                moby->state = '\b';
                if (moby->animationId != '\x05') {
                  MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
                }
                goto LAB_002cd86c;
              }
              pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.066) * dVar26);
              if (moby->animationId != '\0') {
                MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 2.5));
              }
              moby->state = '\x06';
            }
          }
          uVar15 = M186_002cb930(lVar11);
          moby->state = uVar15;
        }
        else {
          pfVar5[0xe] = 0.0;
          moby->state = '\x02';
          pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
        }
      }
      else if (bVar2 < 7) {
        dVar18 = (double)FUN_005e8338((double)(*pfVar5 - (moby->pos).x),
                                      (double)(pfVar5[1] - (moby->pos).y));
        DAT_0096bbb0 = pfVar5[0x10];
        DAT_0096bbb4 = pfVar5[0x11];
        DAT_0096bbb8 = pfVar5[0x12];
        DAT_0096bbe8 = pfVar5[0x13];
        DAT_0096bbc4 = pfVar5[0x17];
        OrganicDeltAngSpeed
                  (dVar18,(double)(float)((double)DAT_0096bbdc * dVar26),
                   (double)(float)((double)DAT_0096bbe0 * dVar23),
                   (double)(float)((double)DAT_0096bbe4 * dVar26),lVar11,DAT_0096bbe8,&DAT_0096bbb4)
        ;
        pfVar5[0x10] = DAT_0096bbb0;
        pfVar5[0x11] = DAT_0096bbb4;
        pfVar5[0x12] = DAT_0096bbb8;
        pfVar5[0x13] = DAT_0096bbe8;
        pfVar5[0x17] = DAT_0096bbc4;
        dVar26 = (double)FastSubRots((moby->rotation).z,(float)dVar18);
        if (dVar26 < 0.0872664600610733) {
          MB_SetAnimation(lVar11,DAT_0096bc1c,0,(int)(animationSpeed * 3.5));
          moby->state = '\a';
        }
        uVar15 = M186_002cb930(lVar11);
        moby->state = uVar15;
      }
      else {
        DAT_0096bc00 = pfVar5[0x14];
        DAT_0096bc04 = pfVar5[0x15];
        DAT_0096bc08 = pfVar5[0x16];
        _DAT_0096bc1c = CONCAT31(_DAT_0096bc1c,*(undefined1 *)(pfVar5 + 0x1a));
        DAT_0096bc20 = pfVar5[0x11];
        DAT_0096bbf0 = *pfVar5;
        DAT_0096bbf4 = pfVar5[1];
        DAT_0096bbf8 = pfVar5[2];
        DAT_0096bbfc = pfVar5[3];
        iVar13 = MB_updateJump(lVar11,&DAT_0096bbf0);
        if (iVar13 == 4) {
          moby->state = '\x04';
          if (moby->animationId != '\a') {
            MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 3.5));
          }
          pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar18);
        }
        pfVar5[0x14] = DAT_0096bc00;
        pfVar5[0x15] = DAT_0096bc04;
        pfVar5[0x16] = DAT_0096bc08;
        *(undefined1 *)(pfVar5 + 0x1a) = DAT_0096bc1f;
        pfVar5[0x11] = DAT_0096bc20;
        uVar15 = M186_002cb930(lVar11);
        moby->state = uVar15;
      }
      goto LAB_002cd86c;
    }
    if (bVar2 == 0) {
      printf("Hey, M186 init should be earlier!\n");
      moby->state = '\x01';
      goto LAB_002cd86c;
    }
  }
  else {
    if (0xb < bVar2) {
      if (bVar2 < 0xe) {
        if (bVar2 < 0xd) {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->state = '\x04';
            if (moby->animationId != '\a') {
              MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 10.5));
            }
            pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar18);
          }
        }
        else {
          printf("main loop squirm! should never get here!\n");
        }
      }
      else if (bVar2 < 0xf) {
        iVar13 = CollSphere((double)(float)(dVar27 * dVar23),lVar17);
        if (((iVar13 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
           ((g_CollOutput.pMoby)->oClass == DOOM_BOT)) {
          fVar14 = g_CollOutput.push.y - (moby->pos).y;
          fVar3 = g_CollOutput.push.x - (moby->pos).x;
          fVar4 = g_CollOutput.push.z - (moby->pos).z;
          FUN_005e7f98((double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar14 * fVar14) * 1.1),
                       local_b0,local_b0);
          (moby->pos).x = (moby->pos).x + fVar3;
          (moby->pos).y = (moby->pos).y + fVar14;
          (moby->pos).z = (moby->pos).z + 0.0;
        }
        pfVar16 = pfVar5 + 4;
        DAT_0096bbb0 = pfVar5[0x10];
        pfVar5[6] = -(DAT_0071f418 * 9.0 - pfVar5[6]);
        DAT_0096bbb4 = pfVar5[0x11];
        DAT_0096bbb8 = pfVar5[0x12];
        DAT_0096bbe8 = pfVar5[0x13];
        DAT_0096bbc4 = pfVar5[0x17];
        uVar12 = MB_MoveAndCollide2
                           ((double)(float)(dVar27 * 0.699999988079071),(double)DAT_0096bbd0,lVar11,
                            pfVar16,&DAT_002cba54,DAT_0096bba0);
        if ((uVar12 & 2) != 0) {
          pfVar5[6] = 0.0;
          pfVar5[4] = (float)((double)pfVar5[4] * dVar23);
          pfVar5[5] = (float)((double)pfVar5[5] * dVar23);
        }
        FUN_005e8e80((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
        if ((uVar12 & 2) == 0) {
          if (moby->animationId != '\x05') {
            MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
          }
        }
        else {
          moby->state = '\x02';
        }
        uVar22 = FUN_005e8338((double)pfVar5[4],(double)pfVar5[5]);
        OrganicDeltAngSpeed
                  (uVar22,(double)DAT_0096bbbc,(double)DAT_0096bbc0,(double)DAT_0096bbc4,lVar11);
        pfVar5[0x10] = DAT_0096bbb0;
        pfVar5[0x11] = DAT_0096bbb4;
        pfVar5[0x12] = DAT_0096bbb8;
        pfVar5[0x13] = DAT_0096bbe8;
        pfVar5[0x17] = DAT_0096bbc4;
        uVar15 = M186_002cb930(lVar11);
        moby->state = uVar15;
      }
      else {
        moby->state = '\0';
      }
      goto LAB_002cd86c;
    }
    if (bVar2 < 9) {
      pfVar16 = pfVar5 + 4;
      DAT_0096bbb0 = pfVar5[0x10];
      pfVar5[6] = -(DAT_0071f418 * 9.0 - pfVar5[6]);
      DAT_0096bbb4 = pfVar5[0x11];
      DAT_0096bbb8 = pfVar5[0x12];
      DAT_0096bbe8 = pfVar5[0x13];
      DAT_0096bbc4 = pfVar5[0x17];
      uVar12 = MB_MoveAndCollide2
                         ((double)(float)(dVar27 * 0.699999988079071),(double)DAT_0096bbd0,lVar11,
                          pfVar16,&DAT_002cba54,DAT_0096bba0);
      if ((uVar12 & 2) != 0) {
        pfVar5[6] = 0.0;
        pfVar5[4] = (float)((double)pfVar5[4] * dVar23);
        pfVar5[5] = (float)((double)pfVar5[5] * dVar23);
      }
      FUN_005e7ed8((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((uVar12 & 2) == 0) {
          if (moby->animationId != '\x05') {
            MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
          }
        }
        else {
          moby->state = '\x02';
        }
      }
      uVar22 = FUN_005e8338((double)pfVar5[4],(double)pfVar5[5]);
      OrganicDeltAngSpeed
                (uVar22,(double)DAT_0096bbbc,(double)DAT_0096bbc0,(double)DAT_0096bbc4,lVar11);
      pfVar5[0x10] = DAT_0096bbb0;
      pfVar5[0x11] = DAT_0096bbb4;
      pfVar5[0x12] = DAT_0096bbb8;
      pfVar5[0x13] = DAT_0096bbe8;
      pfVar5[0x17] = DAT_0096bbc4;
      uVar15 = M186_002cb930(lVar11);
      moby->state = uVar15;
      goto LAB_002cd86c;
    }
    if (10 < bVar2) {
      fVar6 = (moby->pos).x;
      uVar8 = (int)fVar6 >> 0x1f;
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
      if (((iVar13 < 0x447f4001 && 0x3fffffff < iVar13) &&
          (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
          iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x447f4001 && 0x3fffffff < iVar13))
         && ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
             iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x3fffffff < iVar13 &&
             (iVar13 < 0x447f4001)))) {
        MB_genericExplosion
                  (uVar22,uVar22,(double)(float)(dVar18 * dVar26),dVar18,0x4022000000000000,dVar25,
                   0x402e000000000000,lVar11,local_c0,lVar17,1,5,5,2,4);
        uVar21 = CollMobySphere(dVar18,lVar17);
        uVar22.piece<0,4>() = (moby->pos).x;
        uVar22.piece<4,4>() = (moby->pos).y;
        uVar20.piece<0,4>() = (moby->pos).z;
        uVar20.piece<4,4>() = (moby->pos).w;
        MB_DamageMobyList
                  (0x4008000000000000,dVar25,dVar25,lVar11,2,uVar22,uVar20,&DAT_00a14a00,uVar21,0,
                   0x10000);
        if (g_goldWeaponsArray.gloveOfDoom == '\0') {
          PlayMobySound(0,0,moby);
        }
        else {
          PlayMobySound(4,0,moby);
        }
        DeleteMoby(moby);
        return;
      }
      DeleteMoby(moby);
      return;
    }
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    moby->state = '\x02';
  }
  uVar15 = M186_002cb930(lVar11);
  moby->state = uVar15;
LAB_002cd86c:
  fVar6 = (moby->pos).x;
  uVar8 = (int)fVar6 >> 0x1f;
  iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
  if (((0x447f4000 < iVar13 || iVar13 < 0x40000000) ||
      (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x447f4000 < iVar13 || iVar13 < 0x40000000)) ||
     ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x40000000 || (0x447f4000 < iVar13)))) {
    DeleteMoby(moby);
  }
  return;
}


