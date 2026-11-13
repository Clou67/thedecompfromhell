// game/update/moby388.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 21 functions, 0x35aac0-0x3621c0
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby388.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/camera19.h"
#include "game/update/moby352.h"
#include "game/update/moby389.h"
#include "game/update/moby819.h"
#include "game/update/moby829.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x035aac0 (0xbc8 bytes)
// inlined: FastRSqrt @0x35adb4, FastRSqrt @0x35af60, FastRSqrt @0x35b018, FastRSqrt @0x35b240, FastRSqrt @0x35b2ec
void M388_0035aac0
               (int param_1,longlong param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float local_260 [4];
  float local_250 [4];
  GPiece<48> local_240;
  GPiece<16> local_210;
  GPiece<64> auStack_200;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<96> local_190;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<96> local_100;
  
  GetEffectTex(0x2d);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  GetEffectTex(0x2c);
  uVar9 = 0x3ff0000000000000;
  uVar8 = 0;
  FastEulerToMtx1(auStack_200,param_1 + 0x40);
  FUN_005e825c(local_260,param_2,auStack_200);
  FUN_005e825c(local_250,param_2 + 0x10,auStack_200);
  FUN_005e825c(local_1c0,local_1c0,local_240);
  FUN_005e825c(local_1b0,local_1b0,local_240);
  FUN_005e825c(local_130,local_130,local_240);
  FUN_005e825c(local_120,local_120,local_240);
  iVar4 = (int)param_5;
  uVar2 = 1;
  if (1 < iVar4) {
    uVar7 = 0xbff0000000000000;
    do {
      iVar3 = (int)uVar2;
      if (iVar3 == iVar4 + -1) {
        FUN_005e825c(local_210,(uVar2 & 0xfffffff) * 0x10 + param_2 & 0xffffffff,auStack_200);
      }
      else {
        lVar1 = (uVar2 & 0xfffffff) * 0x10;
        FUN_005e825c(local_260,lVar1 + param_2 & 0xffffffff,auStack_200);
        FUN_005e825c(local_250,lVar1 + param_2 + 0x10 & 0xffffffff,auStack_200);
      }
      FUN_005e825c(local_1a0,local_1a0,local_240);
      FUN_005e825c(local_190,local_190,local_240);
      FUN_005e825c(local_110,local_110,local_240);
      FUN_005e825c(local_100,local_100,local_240);
      if ((iVar3 == 1) && (param_4 == 0x10)) {
        FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
        FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
      }
      else if ((iVar3 == iVar4 + -2) && (param_4 == 0x10)) {
        FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
        FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
      }
      else {
        FastDrawQuad(local_1c0,0,0,EffectTexHeaders,9);
        FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
      }
      dVar5 = (double)FastIntToDouble(uVar2);
      dVar6 = (double)FastIntToDouble(param_5);
      MB_catmullRom(uVar7,uVar8,uVar9,uVar8,(double)(float)(dVar5 / dVar6));
      uVar2 = (ulonglong)(iVar3 + 1);
    } while (iVar3 + 1 < iVar4);
  }
  return;
}


// 0x035b698 (0xdc bytes)
void M388_0035b698(int param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  fVar2 = -(DAT_0071f408 * 0.2 - *(float *)(iVar1 + 0x1ec));
  *(float *)(iVar1 + 0x1ec) = fVar2;
  if (fVar2 <= -8.0) {
    *(float *)(iVar1 + 0x1ec) = fVar2 + 8.0;
  }
  uVar3 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar3);
  M388_0035aac0(param_1,iVar1,0x80,0x40,10);
  M388_0035aac0(param_1,iVar1 + 0xa0,0x30,0x10,0x14);
  return;
}


// 0x035b774 (0x14 bytes)
void M388_0035b774(void)

{
  DAT_008408bc = 0x10000;
  return;
}


// 0x035b790 (0x204 bytes)
undefined8 M388_0035b790(undefined8 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = rand();
  iVar3 = iVar3 - (iVar3 / param_4) * param_4;
  bVar1 = (&DAT_008409e8)[param_3 + iVar3];
  uVar5 = (uint)bVar1;
  if (param_3 < 0x1d) {
    if (param_3 < 0xc) {
      if (*(char *)(param_2 + 0x148) != '\0') {
        return 0;
      }
      if (0 < *(short *)(param_2 + 0x144)) {
        return 0;
      }
    }
    else {
      if (0 < *(short *)(param_2 + 0x146)) {
        return 0;
      }
      if (((*(char *)(param_2 + 0x148) != '\0') && (0x16 < param_3)) && (param_3 < 0x1b)) {
        return 0;
      }
    }
  }
  if (((g_SpeechPlaying.handle == 0) && (g_PendingSpeech == -1)) || (0x1c < param_3))
  {
    if (0x1c < param_3) {
      g_PendingSpeech = bVar1 + 50000;
      *(undefined1 *)(param_2 + 0x13a) = 1;
      return 1;
    }
    if (0 < param_4) {
      iVar6 = 0;
      uVar5 = (uint)bVar1;
      do {
        uVar2 = 1 << (uVar5 & 0x3f);
        if ((*(uint *)(param_2 + 0x13c) & uVar2) == 0) {
          g_PendingSpeech = uVar5 + 50000;
          *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) | uVar2;
          *(undefined1 *)(param_2 + 0x13a) = 1;
          return 1;
        }
        if ((param_3 < 0xc) && (iVar4 = MB_randInt(4), iVar4 == 0)) {
          *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) & ~uVar2;
        }
        iVar6 = iVar6 + 1;
        iVar3 = (iVar3 + 1) - ((iVar3 + 1) / param_4) * param_4;
        uVar5 = (uint)(byte)(&DAT_008409e8)[param_3 + iVar3];
      } while (iVar6 < param_4);
    }
    if (param_3 < 0xc) {
      *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) & ~(1 << (uVar5 & 0x3f));
    }
  }
  return 0;
}


// 0x035b9b0 (0x318 bytes)
void M388_0035b9b0(int param_1,int param_2)

{
  float fVar1;
  int iVar4;
  undefined8 uVar2;
  longlong lVar3;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auStack_b0;
  GPiece<40> local_a0;
  
  iVar5 = 0;
  dVar10 = 4.0;
  piVar7 = &DAT_00840998;
  dVar11 = 0.5;
  dVar12 = 350.0;
  dVar13 = 600.0;
  puVar6 = &DAT_008409b0;
  dVar14 = 100.0;
  dVar15 = 250.0;
  do {
    if (*(int *)(*piVar7 * 4 + param_2 + 0xc4) != 0) {
      dVar8 = (double)(float)((double)*(float *)(*(int *)(param_1 + 0x24) + 0x24) * dVar10);
      dVar9 = (double)(float)((double)*(float *)(param_1 + 0x2c) / dVar8);
      GetBonePosition(dVar8,param_1,*puVar6,auStack_b0);
      if ((worldUpdateTime & 1) == 0) {
        if (((*(byte *)(param_1 + 0xbc) == 0) ||
            (*(int *)(&DAT_0084090c + (uint)*(byte *)(param_1 + 0xbc) * 4) != *piVar7)) ||
           (iVar4 = MB_randInt(9), iVar4 == 0)) {
          iVar4 = MB_randRange(0xf,0x16);
          fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar11);
          uVar2 = FastDoubleToInt((double)(float)(dVar9 * dVar13));
          SpawnPart_4
                    (auStack_b0,local_a0,0x6000ffff,0x80,(int)fVar1,uVar2,0xffffffffffffff9c,1);
        }
      }
      else {
        iVar4 = MB_randRange(0xf,0x14);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar11);
        uVar2 = FastDoubleToInt((double)(float)(dVar9 * dVar12));
        SpawnPart_4
                  (auStack_b0,local_a0,0xffffffffcf0000ff,0xcf,(int)fVar1,uVar2,0xffffffffffffff9c,1
                  );
      }
      dVar8 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
      lVar3 = FastDoubleToInt((double)(float)(dVar8 * dVar9));
      iVar4 = MB_randRange(8,0xc);
      SpawnPart_4
                (auStack_b0,local_a0,0xffffffffefff7f4f,0xff0000,
                 (int)(animationSpeed * (float)((double)(longlong)iVar4 + dVar11)),lVar3,-lVar3,1);
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar5 < 6);
  return;
}


// 0x035bcf0 (0x2b8 bytes)
void M388_0035bcf0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float afStack_b0 [4];
  GPiece<32> local_a0;
  
  puVar6 = &DAT_008409c8;
  if (DAT_008409c8 != -1) {
    dVar9 = 4.0;
    dVar10 = 0.800000011920929;
    dVar11 = 1.100000023841858;
    dVar12 = 1.399999976158142;
    dVar13 = 0.5;
    dVar14 = 450.0;
    dVar15 = 550.0;
    dVar16 = 600.0;
    dVar17 = 800.0;
    iVar5 = 0;
    do {
      dVar8 = (double)(*(float *)(param_1 + 0x2c) /
                      (float)((double)*(float *)(*(int *)(param_1 + 0x24) + 0x24) * dVar9));
      dVar7 = (double)MB_randRangeFloat((float)dVar10,(float)dVar11);
      dVar7 = (double)(float)(dVar8 * dVar7);
      GetBonePosition(param_1,*puVar6,afStack_b0);
      MB_RandomizeVector((float)(dVar7 * dVar12),afStack_b0);
      if ((worldUpdateTime & 1) == 0) {
        if ((*(char *)(param_1 + 0xbc) == '\0') || (iVar4 = MB_randInt(0xc), iVar4 == 0))
        {
          iVar4 = MB_randRange(0x14,0x32);
          fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar13);
          dVar8 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
          uVar3 = FastDoubleToInt((double)(float)(dVar8 * dVar7));
          SpawnPart_4
                    (afStack_b0,local_a0,0xffffffff8000ffff,0x80,(int)fVar1,uVar3,0xffffffffffffff9c
                     ,1);
        }
      }
      else {
        iVar4 = MB_randRange(0x14,0x3c);
        fVar1 = animationSpeed * (float)((double)(longlong)iVar4 + dVar13);
        dVar8 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
        uVar3 = FastDoubleToInt((double)(float)(dVar8 * dVar7));
        SpawnPart_4
                  (afStack_b0,local_a0,0xffffffffdf000fff,0xcf,(int)fVar1,uVar3,0xffffffffffffff9c,1
                  );
      }
      puVar6 = puVar6 + 1;
      piVar2 = (int *)(iVar5 + 0x8409cc);
      iVar5 = iVar5 + 4;
    } while (*piVar2 != -1);
  }
  return;
}


// 0x035bfb0 (0x3f8 bytes)
void M388_0035bfb0(int param_1,int param_2)

{
  MobyInstance *moby;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  uVar8 = 0;
  uVar7 = param_1 + 0xc0;
  dVar12 = 22.0;
  dVar11 = 1001.0;
  do {
    iVar9 = *(int *)((int)((uVar8 & 0xffffffff) << 2) + param_2 + 0xc4);
    if (iVar9 != 0) {
      GetBonePosition(param_1,uVar8,iVar9 + 0x10);
      uVar1 = (int)*(uint *)(iVar9 + 0x10) >> 0x1f;
      uVar2 = (int)*(uint *)(iVar9 + 0x14) >> 0x1f;
      uVar3 = (int)*(uint *)(iVar9 + 0x18) >> 0x1f;
      dVar10 = (double)*(float *)(iVar9 + 0x10);
      if ((int)((uVar1 >> 1 ^ *(uint *)(iVar9 + 0x10)) - uVar1) < 0x41b00000) {
        *(undefined4 *)(iVar9 + 0x10) = 0x41b00000;
        dVar10 = dVar12;
      }
      if (dVar11 < dVar10) {
        *(undefined4 *)(iVar9 + 0x10) = 0x447a4000;
      }
      dVar10 = (double)*(float *)(iVar9 + 0x14);
      if ((int)((uVar2 >> 1 ^ *(uint *)(iVar9 + 0x14)) - uVar2) < 0x41b00000) {
        *(undefined4 *)(iVar9 + 0x14) = 0x41b00000;
        dVar10 = dVar12;
      }
      if (dVar11 < dVar10) {
        *(undefined4 *)(iVar9 + 0x14) = 0x447a4000;
      }
      dVar10 = (double)*(float *)(iVar9 + 0x18);
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar9 + 0x18)) - uVar3) < 0x41b00000) {
        *(undefined4 *)(iVar9 + 0x18) = 0x41b00000;
        dVar10 = dVar12;
      }
      if (dVar11 < dVar10) {
        *(undefined4 *)(iVar9 + 0x18) = 0x447a4000;
      }
      *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      puVar4 = (undefined4 *)(uVar7 & 0xfffffff0);
      uVar15 = puVar4[2];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
      uVar19 = puVar5[3];
      uVar18 = puVar5[2];
      uVar17 = puVar5[1];
      uVar16 = *puVar5;
      puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
      uVar23 = puVar5[3];
      uVar22 = puVar5[2];
      uVar21 = puVar5[1];
      uVar20 = *puVar5;
      puVar5 = (undefined4 *)(iVar9 + 0xc0U & 0xfffffff0);
      puVar5[3] = puVar4[3];
      puVar5[2] = uVar15;
      puVar5[1] = uVar14;
      *puVar5 = uVar13;
      puVar4 = (undefined4 *)(iVar9 + 0xd0U & 0xfffffff0);
      puVar4[3] = uVar19;
      puVar4[2] = uVar18;
      puVar4[1] = uVar17;
      *puVar4 = uVar16;
      puVar4 = (undefined4 *)(iVar9 + 0xe0U & 0xfffffff0);
      puVar4[3] = uVar23;
      puVar4[2] = uVar22;
      puVar4[1] = uVar21;
      *puVar4 = uVar20;
    }
    iVar9 = (int)uVar8 + 1;
    uVar8 = (ulonglong)iVar9;
  } while (iVar9 < 10);
  iVar9 = *(int *)(&DAT_0084093c + (uint)*(byte *)(param_1 + 0xbc) * 4);
  if ((*(char *)(param_1 + 0x20) == '\x05') || (iVar9 == -1)) {
    moby = *(MobyInstance **)(param_2 + 0xf0);
    if ((moby != (MobyInstance *)0x0) && (moby->state != 0xfd && moby->state != 0xfe)) {
      DeleteMoby(moby);
      *(undefined4 *)(param_2 + 0xf0) = 0;
    }
  }
  else {
    iVar6 = *(int *)(param_2 + 0xf0);
    if (((iVar6 == 0) || (*(char *)(iVar6 + 0x20) == -2)) || (*(char *)(iVar6 + 0x20) == -3)) {
      iVar6 = M388_003621c8(param_1,iVar9,0x191);
      *(int *)(param_2 + 0xf0) = iVar6;
    }
    if (iVar6 != 0) {
      if (*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2) {
        GetBonePosition(param_1,iVar9,iVar6 + 0x10);
        uVar1 = (int)*(uint *)(iVar6 + 0x10) >> 0x1f;
        uVar2 = (int)*(uint *)(iVar6 + 0x14) >> 0x1f;
        uVar3 = (int)*(uint *)(iVar6 + 0x18) >> 0x1f;
        dVar10 = (double)*(float *)(iVar6 + 0x10);
        if ((int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x10)) - uVar1) < 0x41b00000) {
          *(undefined4 *)(iVar6 + 0x10) = 0x41b00000;
          dVar10 = dVar12;
        }
        if (dVar11 < dVar10) {
          *(undefined4 *)(iVar6 + 0x10) = 0x447a4000;
        }
        dVar10 = (double)*(float *)(iVar6 + 0x14);
        if ((int)((uVar2 >> 1 ^ *(uint *)(iVar6 + 0x14)) - uVar2) < 0x41b00000) {
          *(undefined4 *)(iVar6 + 0x14) = 0x41b00000;
          dVar10 = dVar12;
        }
        if (dVar11 < dVar10) {
          *(undefined4 *)(iVar6 + 0x14) = 0x447a4000;
        }
        dVar10 = (double)*(float *)(iVar6 + 0x18);
        if ((int)((uVar3 >> 1 ^ *(uint *)(iVar6 + 0x18)) - uVar3) < 0x41b00000) {
          *(undefined4 *)(iVar6 + 0x18) = 0x41b00000;
          dVar10 = dVar12;
        }
        if (dVar11 < dVar10) {
          *(undefined4 *)(iVar6 + 0x18) = 0x447a4000;
        }
        *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        puVar4 = (undefined4 *)(uVar7 & 0xfffffff0);
        uVar15 = puVar4[2];
        uVar14 = puVar4[1];
        uVar13 = *puVar4;
        puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
        uVar19 = puVar5[3];
        uVar18 = puVar5[2];
        uVar17 = puVar5[1];
        uVar16 = *puVar5;
        puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
        uVar23 = puVar5[3];
        uVar22 = puVar5[2];
        uVar21 = puVar5[1];
        uVar20 = *puVar5;
        puVar5 = (undefined4 *)(iVar6 + 0xc0U & 0xfffffff0);
        puVar5[3] = puVar4[3];
        puVar5[2] = uVar15;
        puVar5[1] = uVar14;
        *puVar5 = uVar13;
        puVar4 = (undefined4 *)(iVar6 + 0xd0U & 0xfffffff0);
        puVar4[3] = uVar19;
        puVar4[2] = uVar18;
        puVar4[1] = uVar17;
        *puVar4 = uVar16;
        puVar4 = (undefined4 *)(iVar6 + 0xe0U & 0xfffffff0);
        puVar4[3] = uVar23;
        puVar4[2] = uVar22;
        puVar4[1] = uVar21;
        *puVar4 = uVar20;
      }
    }
  }
  iVar9 = *(int *)(param_2 + 0x110);
  if (iVar9 != 0) {
    *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar9 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    puVar4 = (undefined4 *)(uVar7 & 0xfffffff0);
    uVar15 = puVar4[2];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    puVar5 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar19 = puVar5[3];
    uVar18 = puVar5[2];
    uVar17 = puVar5[1];
    uVar16 = *puVar5;
    puVar5 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar23 = puVar5[3];
    uVar22 = puVar5[2];
    uVar21 = puVar5[1];
    uVar20 = *puVar5;
    puVar5 = (undefined4 *)(iVar9 + 0xc0U & 0xfffffff0);
    puVar5[3] = puVar4[3];
    puVar5[2] = uVar15;
    puVar5[1] = uVar14;
    *puVar5 = uVar13;
    puVar4 = (undefined4 *)(iVar9 + 0xd0U & 0xfffffff0);
    puVar4[3] = uVar19;
    puVar4[2] = uVar18;
    puVar4[1] = uVar17;
    *puVar4 = uVar16;
    puVar4 = (undefined4 *)(iVar9 + 0xe0U & 0xfffffff0);
    puVar4[3] = uVar23;
    puVar4[2] = uVar22;
    puVar4[1] = uVar21;
    *puVar4 = uVar20;
  }
  return;
}


// 0x035c3c8 (0x120 bytes)
double M388_0035c3c8
                 (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = 3.1415927410125732;
  dVar1 = 6.2831854820251465;
  OrganicDeltAngSpeed
            (param_1,(double)(g_FrameTimeSq * 3.1415927),(double)(g_FrameTimeSq * 6.2831855),
             (double)(g_FrameTime * 6.2831855),param_3,param_4,param_4 + 0xa8);
  dVar1 = (double)MB_DeltAngSpeed
                            ((double)*(float *)(param_3 + 0x44),param_2,
                             (double)(float)((double)g_FrameTimeSq * dVar2),
                             (double)(float)((double)g_FrameTimeSq * dVar1),
                             (double)(float)((double)g_FrameTime * dVar1));
  *(float *)(param_3 + 0x44) = (float)dVar1;
  fVar3 = *(float *)(param_4 + 0xa8) * (1.5707964 - ABS(*(float *)(param_3 + 0x40))) * 0.63661975 *
          -0.5 + *(float *)(param_3 + 0x40);
  if (1.5707964 - fVar3 < 0.0) {
    fVar3 = 1.5707964;
  }
  if (fVar3 - -1.5707964 < 0.0) {
    fVar3 = -1.5707964;
  }
  *(float *)(param_3 + 0x40) = fVar3 * 0.985;
  fVar3 = MB_WrapRot(fVar3 * 0.985);
  return (double)fVar3;
}


// 0x035c4f8 (0x998 bytes)
// inlined: FastAtan2 @0x35c840, FastAtan2 @0x35c9e0, FastAtan2 @0x35cb98, FastAtan2 @0x35cd3c
bool M388_0035c4f8(int param_1,int param_2,longlong param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  short sVar18;
  longlong lVar17;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong unaff_r31;
  bool bVar23;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x180;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x32] = in_LR;
  puVar12[0x26] = in_f22;
  puVar12[0x27] = in_f23;
  puVar12[0x28] = in_f24;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  iVar10 = (int)((longlong)*(short *)(param_2 + 0x9e) << 4);
  sVar18 = *(short *)(param_2 + 0x9c);
  pSVar11 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0xb0)];
  dVar30 = (double)*(float *)(param_1 + 0x14);
  dVar29 = (double)*(float *)(param_1 + 0x10);
  iVar22 = (int)((longlong)sVar18 << 4);
  dVar26 = (double)*(float *)((int)&pSVar11->points[0].y + iVar10);
  dVar27 = (double)*(float *)((int)&pSVar11->points[0].x + iVar10);
  dVar32 = (double)*(float *)((int)&pSVar11->points[0].z + iVar10);
  fVar1 = (float)(dVar26 - dVar30);
  fVar2 = (float)(dVar27 - dVar29);
  fVar3 = (float)(dVar26 - (double)*(float *)((int)&pSVar11->points[0].y + iVar22));
  fVar4 = (float)(dVar27 - (double)*(float *)((int)&pSVar11->points[0].x + iVar22));
  dVar26 = (double)*(float *)(param_1 + 0x18);
  fVar5 = (float)(dVar32 - dVar26);
  fVar6 = (float)(dVar32 - (double)*(float *)((int)&pSVar11->points[0].z + iVar22));
  dVar27 = 0.0;
  puVar12[0x25] = unaff_r31;
  bVar23 = false;
  fVar2 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar1 = *(float *)(param_2 + 0xac);
  fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar4 = fVar3 - fVar2;
  if (fVar1 <= fVar4 || fVar4 < 0.0) {
    dVar32 = (double)(fVar2 / fVar3);
  }
  else {
    *(short *)(param_2 + 0x9e) = sVar18;
    iVar10 = pSVar11->cnt;
    sVar18 = sVar18 + *(char *)(param_2 + 0x10c);
    iVar22 = (int)sVar18;
    *(short *)(param_2 + 0x9c) = sVar18;
    if (iVar10 <= iVar22) {
      sVar18 = 0;
      *(undefined2 *)(param_2 + 0x9c) = 0;
    }
    bVar23 = sVar18 < 0;
    if (bVar23) {
      sVar18 = (short)iVar10 + -1;
      *(short *)(param_2 + 0x9c) = sVar18;
    }
    bVar23 = bVar23 || iVar10 <= iVar22;
    dVar32 = dVar27;
  }
  iVar10 = (int)((longlong)sVar18 << 4);
  fVar2 = (float)((double)*(float *)((int)&pSVar11->points[0].y + iVar10) - dVar30);
  fVar3 = (float)((double)*(float *)((int)&pSVar11->points[0].x + iVar10) - dVar29);
  fVar4 = (float)((double)*(float *)((int)&pSVar11->points[0].z + iVar10) - dVar26);
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar32 - 0.05000000074505806 < 0.0) {
    dVar32 = 0.05000000074505806;
  }
  if (1.0 - dVar32 < 0.0) {
    dVar32 = 1.0;
  }
  fVar6 = (float)(1.0 - dVar32);
  fVar9 = fVar1 / fVar5;
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  dVar31 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar2 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar3 * fVar9);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar31 = (double)(fVar4 * fVar9);
  }
  fVar2 = (float)(dVar25 * dVar32);
  fVar3 = (float)(dVar28 * dVar32);
  fVar4 = (float)(dVar31 * dVar32);
  fVar7 = *(float *)(param_2 + 0x74) * fVar6 + fVar2;
  fVar9 = *(float *)(param_2 + 0x70) * fVar6 + fVar3;
  fVar6 = *(float *)(param_2 + 0x78) * fVar6 + fVar4;
  *(float *)((int)puVar12 + 0x94) = fVar3;
  *(float *)(puVar12 + 0x13) = fVar2;
  *(float *)((int)puVar12 + 0x9c) = ABS(fVar3) - ABS(fVar2);
  fVar5 = SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar1 = fVar1 / fVar5;
  uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1d) & 4;
  fVar8 = ABS(*(float *)(puVar12 + 0x13));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar13 = ABS(*(float *)((int)puVar12 + 0x94));
  if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
    fVar13 = ABS(fVar2);
  }
  dVar32 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  dVar25 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  dVar28 = dVar27;
  if (0.0 - fVar5 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar32 = (double)(fVar9 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar7 * fVar1);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar28 = (double)(fVar6 * fVar1);
  }
  fVar1 = (float)(dVar29 + dVar32);
  fVar5 = (float)(dVar30 + dVar25);
  *(float *)(param_2 + 0x70) = (float)dVar32;
  *(float *)(param_2 + 0x74) = (float)dVar25;
  *(float *)(param_2 + 0x78) = (float)dVar28;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar5;
  *(float *)(param_1 + 0x18) = (float)(dVar26 + dVar28);
  fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar29 = dVar27;
  if (0.0 < fVar13) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0x80;
    lVar19 = uVar14 - 0x70;
    lVar24 = 2;
    fVar8 = (fVar8 - fVar13) / (fVar8 + fVar13);
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar12 + 0x20) = fVar8;
    *(float *)((int)puVar12 + 0x104) = fVar8;
    *(float *)(puVar12 + 0x21) = fVar8;
    *(float *)((int)puVar12 + 0x10c) = fVar8;
    fVar8 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar7;
    *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar8;
    *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar8 * fVar7;
    do {
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0xf0) * fVar8 * fVar8;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar8 * fVar8;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0x80;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar8 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x100) = *(float *)((int)lVar15 + 0x100) * fVar8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0x100)) +
                        *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar9 + fVar6);
  }
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar3 = ABS(fVar2);
  *(float *)(puVar12 + 0x11) = fVar2;
  *(float *)(puVar12 + 0x12) = fVar3 - ABS(fVar4);
  uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar2 = ABS(fVar4);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar9 = fVar3;
  }
  dVar30 = dVar27;
  if (0.0 < fVar2) {
    lVar15 = uVar14 - 0x170;
    lVar17 = uVar14 - 0xa0;
    lVar19 = uVar14 - 0x90;
    lVar24 = 2;
    fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x1c) = fVar2;
    *(float *)((int)puVar12 + 0xe4) = fVar2;
    *(float *)(puVar12 + 0x1d) = fVar2;
    *(float *)((int)puVar12 + 0xec) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar3;
    *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar2;
    *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xd0) * fVar2 * fVar2;
      iVar10 = (int)lVar17;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar19 = uVar14 - 0xa0;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar19;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xe0) = *(float *)((int)lVar15 + 0xe0) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
      lVar17 = lVar17 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar10 + 0xe0)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar6 + fVar4);
  }
  fVar3 = g_heroPosition.y;
  fVar2 = g_heroPosition.x;
  if (*(char *)(param_1 + 0x20) == '\x05') {
    fVar4 = g_heroPosition.y - fVar5;
    fVar9 = ABS(g_heroPosition.x - fVar1);
    fVar6 = ABS(fVar4);
    *(float *)((int)puVar12 + 0x7c) = g_heroPosition.x - fVar1;
    *(float *)(puVar12 + 0x10) = fVar4;
    *(float *)((int)puVar12 + 0x84) = fVar9 - fVar6;
    uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)((int)puVar12 + 0x7c));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar8 = ABS(*(float *)(puVar12 + 0x10));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar8 = fVar9;
    }
    fVar9 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar29 = dVar27;
    if (0.0 < fVar4) {
      lVar15 = uVar14 - 0x170;
      lVar17 = uVar14 - 0xc0;
      lVar19 = uVar14 - 0xb0;
      lVar24 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar8 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x18) = fVar4;
      *(float *)((int)puVar12 + 0xc4) = fVar4;
      *(float *)(puVar12 + 0x19) = fVar4;
      *(float *)((int)puVar12 + 0xcc) = fVar4;
      fVar4 = fVar8 * fVar8;
      *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar8;
      *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar4;
      *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar4 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xb0) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xc0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xc0) = *(float *)((int)lVar15 + 0xc0) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar22 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xc0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar9);
    }
    fVar4 = g_heroPosition.z - (float)(dVar26 + dVar28);
    fVar1 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) + (fVar5 - fVar3) * (fVar5 - fVar3));
    *(float *)((int)puVar12 + 0x74) = fVar4;
    fVar4 = ABS(fVar4);
    fVar2 = ABS(fVar1);
    *(float *)(puVar12 + 0xe) = fVar1;
    *(float *)(puVar12 + 0xf) = fVar2 - fVar4;
    uVar21 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar12 + 0xe));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0x74));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    dVar30 = dVar27;
    if (0.0 < fVar1) {
      lVar24 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar12 + 0x14) = fVar1;
      *(float *)((int)puVar12 + 0xa4) = fVar1;
      *(float *)(puVar12 + 0x15) = fVar1;
      *(float *)((int)puVar12 + 0xac) = fVar1;
      lVar19 = uVar14 - 0x170;
      fVar1 = fVar2 * fVar2;
      lVar15 = uVar14 - 0xe0;
      lVar17 = uVar14 - 0xd0;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar2;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar1;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar19 + 0xa0) = *(float *)((int)lVar19 + 0x90) * fVar1 * fVar1;
        iVar10 = (int)lVar15;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar1 * fVar1;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar19 = uVar14 - 0xe0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar2 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xa0) = *(float *)((int)lVar15 + 0xa0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar15 = 2;
      do {
        iVar10 = (int)lVar16;
        iVar22 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar10 + 0xa0)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar30 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar3);
    }
  }
  if (param_4 != '\0') {
    M388_0035c3c8(dVar29,-dVar30);
  }
  return bVar23;
}


// 0x035ceb0 (0x2b8 bytes)
longlong M388_0035ceb0
                   (int param_1,int param_2,longlong param_3,undefined1 param_4)

{
  float fVar1;
  short sVar2;
  Spline *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  uVar10 = 0;
  pSVar3 = Splines[*(int *)(param_2 + (int)(param_3 << 2) + 0xb0)];
  if (pSVar3 != (Spline *)0x0) {
    sVar2 = *(short *)(param_2 + 0x9c);
    uVar10 = (longlong)sVar2 + 1;
    lVar12 = (longlong)sVar2 + -1;
    iVar11 = (int)(((longlong)(uVar10 - (longlong)pSVar3->cnt) >> 0x3f & uVar10) << 4);
    iVar9 = (int)lVar12;
    iVar9 = iVar9 + ((uint)(lVar12 >> 0x3f) & (pSVar3->cnt + -1) - iVar9);
    fVar1 = *(float *)((int)&pSVar3->points[0].y + iVar11) - g_heroPosition.y;
    fVar7 = *(float *)((int)&pSVar3->points[0].x + iVar11) - g_heroPosition.x;
    fVar5 = *(float *)((int)&pSVar3->points[0].z + iVar11) - g_heroPosition.z;
    fVar4 = pSVar3->points[iVar9].y - g_heroPosition.y;
    fVar8 = pSVar3->points[iVar9].x - g_heroPosition.x;
    fVar6 = pSVar3->points[iVar9].z - g_heroPosition.z;
    iVar11 = -1;
    fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar1 * fVar1);
    fVar4 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4);
    if ((fVar4 <= fVar1) && (iVar11 = 1, fVar1 <= fVar4)) {
      iVar11 = ((uint)(ZERO_MASK((1 - (uint)*(byte *)(param_2 + 0x10c)))) & 2) - 1;
    }
    if (iVar11 == *(char *)(param_2 + 0x10c)) {
      fVar4 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
      fVar6 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
      fVar5 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
      fVar1 = 1.0;
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        fVar1 = 3.0;
      }
      fVar1 = DAT_0071f408 * 0.12 *
              ((fVar1 * 30.0) / SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) -
              *(float *)(param_2 + 0xac)) + *(float *)(param_2 + 0xac);
      *(float *)(param_2 + 0xac) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_2 + 0xac) = 0;
      }
    }
    else {
      fVar1 = *(float *)(param_2 + 0xac) * (DAT_0071f408 * -0.100000024 + 1.0);
      *(float *)(param_2 + 0xac) = fVar1;
      if (fVar1 < DAT_0071f408 * 0.15) {
        *(char *)(param_2 + 0x10c) = (char)iVar11;
        *(undefined2 *)(param_2 + 0x9c) = *(undefined2 *)(param_2 + 0x9e);
        *(short *)(param_2 + 0x9e) = sVar2;
      }
    }
    uVar10 = M388_0035c4f8(param_1,param_2,param_3,param_4);
  }
  return uVar10 + (-(longlong)
                    *(int *)((int)&pSVar3->points[0].w +
                            (int)((longlong)*(short *)(param_2 + 0x9c) << 4)) >> 0x3f &
                  (uVar10 | 2) - uVar10);
}


// 0x035d190 (0x190 bytes)
void M388_0035d190(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = param_2 + (int)(param_3 << 2);
  iVar1 = *(int *)(iVar3 + 0xc4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x78);
    MB_SpawnExplosionSparks
              (0x4000000000000000,0x402a000000000000,param_1,iVar1 + 0x10,param_3 << 2,
               0xffffffffffffffff);
    *(float *)(iVar2 + 0x10) = *(float *)(param_2 + 0x70) * 0.95;
    *(float *)(iVar2 + 0x14) = *(float *)(param_2 + 0x74) * 0.95;
    *(float *)(iVar2 + 0x18) = *(float *)(param_2 + 0x78) * 0.95;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x7c);
    MB_RandomizeVector(g_FrameTime * 30.0,(float *)(iVar2 + 0x10));
    *(undefined1 *)(iVar1 + 0x20) = 3;
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + *(float *)(iVar2 + 0x10);
    *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x14);
    *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 0x18) + *(float *)(iVar2 + 0x18);
    dVar4 = (double)MB_randRangeFloat
                              (g_FrameTime * -0.34906584,
                               g_FrameTime * 0.34906584);
    *(float *)(iVar2 + 0x30) = (float)dVar4;
    dVar6 = -3.1415927410125732;
    dVar5 = 3.1415927410125732;
    dVar4 = (double)MB_randRangeFloat
                              (g_FrameTime * -3.1415927,g_FrameTime * 3.1415927)
    ;
    *(float *)(iVar2 + 0x34) = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar6),
                               (float)((double)g_FrameTime * dVar5));
    *(float *)(iVar2 + 0x38) = (float)dVar4;
    *(undefined1 *)(iVar1 + 0xa4) = 0xff;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined8 *)(iVar1 + 0x38) = 0x40404000000000;
  }
  return;
}


// 0x035d338 (0x5f8 bytes)
// inlined: FastAtan2 @0x35d544, FastAtan2 @0x35d70c
void M388_0035d338(int param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  int importIdx;
  int iVar8;
  Spline *pSVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  Cuboid *pCVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xf0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar16;
  puVar11[0x20] = in_LR;
  puVar11[0x1d] = in_f31;
  puVar11[0x1c] = unaff_r31;
  puVar11[0x1a] = unaff_r29;
  puVar11[0x19] = unaff_r28;
  puVar11[0x1b] = unaff_r30;
  uVar6 = *(ushort *)(param_1 + 0x34);
  dVar27 = 0.0;
  *param_3 = 0;
  *(ushort *)(param_1 + 0x34) = uVar6 & 0xefff;
  MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  iVar12 = (int)param_2;
  *(undefined1 *)(iVar12 + 0x67) = 0x78;
  MB_UpdateLightsTransition(param_1,param_2 + 0x60);
  *(undefined1 *)(iVar12 + 0x13b) = 4;
  pCVar13 = Cuboids + *(int *)(iVar12 + 0x130);
  fVar1 = (pCVar13->matrix).v0.y;
  fVar2 = (pCVar13->matrix).v0.x;
  fVar3 = (pCVar13->matrix).v0.z;
  *(undefined2 *)(iVar12 + 0x9c) = 0;
  uVar7 = *(uint *)(iVar12 + 0x134);
  importIdx = *(int *)(iVar12 + 300);
  iVar8 = *(int *)(iVar12 + 0xc0);
  dVar24 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (dVar24 == dVar27) {
    fVar4 = (pCVar13->matrix).v0.w;
    dVar24 = dVar27;
    dVar25 = dVar27;
    dVar26 = dVar27;
  }
  else {
    fVar5 = (float)((double)(g_FrameTime * 10.0) / dVar24);
    fVar4 = (pCVar13->matrix).v0.w;
    dVar26 = (double)(fVar2 * fVar5);
    dVar25 = (double)(fVar1 * fVar5);
    dVar24 = (double)(fVar3 * fVar5);
  }
  *(float *)(iVar12 + 0x70) = (float)dVar26;
  *(float *)(iVar12 + 0x74) = (float)dVar25;
  *(float *)(iVar12 + 0x78) = (float)dVar24;
  pSVar9 = Splines[iVar8];
  *(float *)(iVar12 + 0x7c) = fVar4;
  *(float *)(param_1 + 0x10) = pSVar9->points[0].x;
  *(float *)(param_1 + 0x14) = pSVar9->points[0].y;
  *(float *)(param_1 + 0x18) = pSVar9->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar9->points[0].w;
  fVar1 = pSVar9->points[1].x - pSVar9->points[0].x;
  fVar2 = pSVar9->points[1].y - pSVar9->points[0].y;
  dVar25 = ABS((double)fVar1);
  dVar26 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x7c) = fVar1;
  *(float *)(puVar11 + 0x10) = fVar2;
  *(float *)((int)puVar11 + 0x84) = (float)(dVar25 - dVar26);
  uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if ((double)*(float *)((int)puVar11 + 0x84) - dVar27 < 0.0) {
    dVar24 = dVar26;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar26 = ABS((double)*(float *)(puVar11 + 0x10));
  if ((double)*(float *)((int)puVar11 + 0x84) - dVar27 < 0.0) {
    dVar26 = dVar25;
  }
  fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar25 = dVar27;
  if (dVar27 < dVar24) {
    lVar17 = uVar16 - 0xe0;
    lVar20 = uVar16 - 0x38;
    lVar19 = uVar16 - 0x48;
    lVar23 = 2;
    fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0xb4) = fVar3;
    *(float *)((int)puVar11 + 0xac) = fVar3;
    *(float *)(puVar11 + 0x16) = fVar3;
    *(float *)(puVar11 + 0x15) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar5;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar3;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0x98) * fVar3 * fVar3;
      iVar14 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x48;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar3 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xa8) = *(float *)((int)lVar17 + 0xa8) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar24 = dVar27;
    do {
      iVar14 = (int)lVar17;
      iVar15 = (int)lVar20;
      lVar17 = lVar17 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0xa8)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar24 + 0.7853981852531433) * fVar1 + fVar2);
  }
  pSVar9 = Splines[iVar8];
  *(float *)(param_1 + 0x48) = (float)dVar25;
  fVar1 = pSVar9->points[0].y - pSVar9->points[1].y;
  fVar2 = pSVar9->points[0].x - pSVar9->points[1].x;
  fVar3 = pSVar9->points[1].z - pSVar9->points[0].z;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar11 + 0x74) = fVar3;
  dVar26 = ABS((double)fVar3);
  dVar25 = ABS((double)fVar1);
  *(float *)(puVar11 + 0xe) = fVar1;
  *(float *)(puVar11 + 0xf) = (float)(dVar25 - dVar26);
  uVar22 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar27 < 0.0) {
    dVar24 = dVar26;
  }
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar27 < 0.0) {
    dVar26 = dVar25;
  }
  fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (dVar27 < dVar24) {
    lVar17 = uVar16 - 0xe0;
    lVar20 = uVar16 - 0x58;
    lVar19 = uVar16 - 0x68;
    lVar23 = 2;
    fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
    fVar5 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0x94) = fVar3;
    *(float *)((int)puVar11 + 0x8c) = fVar3;
    *(float *)(puVar11 + 0x12) = fVar3;
    *(float *)(puVar11 + 0x11) = fVar3;
    fVar3 = fVar5 * fVar5;
    *(float *)((int)puVar11 + 0x8c) = *(float *)((int)puVar11 + 0x8c) * fVar5;
    *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) * fVar3;
    *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar3 * fVar5;
    do {
      *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar3 * fVar3;
      iVar8 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x68;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar3 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x88) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    do {
      iVar8 = (int)lVar18;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar8 + 0x88)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
  }
  *(float *)(param_1 + 0x44) = (float)-dVar27;
  *(undefined1 *)(iVar12 + 0x10c) = 1;
  iVar8 = (int)(((ulonglong)uVar7 & 0xffffff) << 8);
  *(ushort *)((int)&g_MobyInstance->modeBits + iVar8) =
       *(ushort *)((int)&g_MobyInstance->modeBits + iVar8) | 2;
  *(ushort *)((int)&g_MobyInstance->modeBits + iVar8) =
       *(ushort *)((int)&g_MobyInstance->modeBits + iVar8) | 1;
  (&g_MobyInstance->enabled)[iVar8] = '\0';
  Cam19_Enable(importIdx);
  auVar28 = ZEXT416(0xffffffff);
  auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
  *(undefined1 *)(param_1 + 0x20) = 7;
  auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  *(float *)(iVar12 + 0xac) = g_FrameTime * 80.0;
  auVar28 = loadVectorLeftIndexed(0x10,0x35d320);
  auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29
                      );
  auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
  auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xf8,param_2);
  *(undefined4 *)(iVar12 + 0xf8U & 0xfffffffc) = uVar10;
  M388_0035b790(param_1,param_2,0x22,1);
  *(undefined2 *)(iVar12 + 0x138) = 0;
  *(undefined1 *)(iVar12 + 0x148) = 0;
  if (*(int *)(iVar12 + 0x104) != -1) {
    Hud_SetEntryValueById(*(int *)(iVar12 + 0x104),0);
    *(undefined4 *)(iVar12 + 0x104) = 0xffffffff;
  }
  *(undefined4 *)(iVar12 + 0x13c) = 0xffffffff;
  return;
}


// 0x035d950 (0x94c bytes)
void M388_0035d950(MobyInstance *param_1,longlong param_2)

{
  char cVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  byte bVar14;
  longlong lVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  int local_90 [2];
  longlong local_88;
  
  if (5 < param_1->state) goto LAB_0035e244;
  iVar8 = (int)param_2;
  iVar12 = 0;
  local_88 = (longlong)(int)*(short *)(iVar8 + 0x24);
  lVar18 = param_2 + 0x20;
  bVar9 = false;
  dVar22 = (double)((float)local_88 * 0.16666667);
  dVar19 = (double)FastIntToDouble(param_1->setByGroup);
  dVar20 = 6.0;
  if (4 < (byte)param_1->setByGroup) {
    dVar19 = (double)FastIntToDouble((ulonglong)(byte)param_1->setByGroup - 1);
  }
  dVar21 = 0.30000001192092896;
  dVar19 = (double)(float)((double)(float)(dVar20 - dVar19) * dVar22);
  dVar20 = (double)(float)(dVar22 * 0.30000001192092896 + dVar19);
  if (*(int *)(iVar8 + 0xf0) != 0) {
    iVar10 = MB_damage(*(int *)(iVar8 + 0xf0),0x230000,0);
    MB_HandleDamage(param_1,iVar10,lVar18,0,local_90,0,0,4);
    cVar1 = param_1->setByGroup;
    fVar3 = *(float *)(iVar8 + 0x20);
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x20) != 0)) {
      sVar5 = *(short *)(*(int *)(iVar10 + 0x20) + 0xa6);
      if ((sVar5 == 0x53 || sVar5 == 0x52) || (sVar5 == 0xd4)) {
        *(undefined1 *)(*(int *)(iVar8 + 0xf0) + 0xa4) = 0xff;
        goto LAB_0035dd4c;
      }
    }
    if (1 < local_90[0]) {
      dVar22 = (double)*(float *)(iVar10 + 0x2c);
      if ((0 < *(int *)(iVar10 + 0x2c)) && (*(short *)(iVar10 + 0x2a) == 0x3f1)) {
        *(undefined4 *)(iVar10 + 0x2c) = 0x3e99999a;
        dVar22 = dVar21;
      }
      if ((iVar10 != 0) && (cVar1 == '\a')) {
        dVar21 = dVar22 * 1.5;
        dVar22 = (double)(float)dVar21;
        *(float *)(iVar10 + 0x2c) = (float)dVar21;
      }
      if (dVar22 < (double)fVar3) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        *(undefined1 *)(iVar8 + 0x67) = 0xfa;
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        iVar12 = 1;
        *(float *)(iVar8 + 0x20) = (float)((double)fVar3 - dVar22);
        auVar23 = loadVectorLeftIndexed(0x10,0x35d930);
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                             auVar24);
        auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
        auVar23 = vectorSplatHalfWord(auVar23,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x26,param_2);
        *(undefined2 *)(iVar8 + 0x26) = uVar6;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        *(undefined1 *)(*(int *)(iVar8 + 0xf0) + 0xa4) = 0xff;
      }
      else {
        M388_0035d338(param_1,param_2,lVar18,iVar10);
        iVar12 = 3;
        *(undefined1 *)(*(int *)(iVar8 + 0xf0) + 0xa4) = 0xff;
      }
      uVar2 = param_1->state;
      if (uVar2 == '\a') {
        bVar9 = true;
        param_1->setByGroup = param_1->setByGroup + '\x01';
        iVar10 = *(int *)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(iVar10 + 0x88) = 0;
        *(undefined4 *)(iVar10 + 0xec) = 0;
        *(undefined4 *)(iVar10 + 0x8c) = 0;
        *(undefined4 *)(iVar10 + 0x118) = 0;
      }
      else if (dVar19 <= (double)*(float *)(iVar8 + 0x20)) {
        if ((double)*(float *)(iVar8 + 0x20) < dVar20) {
          *(undefined1 *)(iVar8 + 0x148) = 1;
        }
      }
      else {
        bVar14 = param_1->setByGroup;
        iVar12 = *(int *)(&DAT_0084090c + (uint)bVar14 * 4);
        if (iVar12 != -1) {
          PlayMobySound(7,0,param_1);
          M388_0035d190(param_1,param_2,iVar12);
          uVar2 = param_1->state;
          bVar14 = param_1->setByGroup;
        }
        if (uVar2 == '\x05') {
          param_1->state = '\x04';
        }
        param_1->setByGroup = bVar14 + 1;
        iVar12 = *(int *)(iVar8 + 0x11c);
        if (iVar12 != -1) {
          if (((iVar12 != -1) && (g_SoundChannels[iVar12].pMoby == param_1)) &&
             (g_SoundChannels[iVar12].state != '\0')) {
            sound_Kill(iVar12);
          }
          *(undefined4 *)(iVar8 + 0x11c) = 0xffffffff;
        }
        iVar12 = 2;
        bVar9 = true;
        iVar10 = *(int *)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(iVar10 + 0x88) = 0;
        *(undefined4 *)(iVar10 + 0xec) = 0;
        *(undefined4 *)(iVar10 + 0x8c) = 0;
        *(undefined4 *)(iVar10 + 0x118) = 0;
        *(undefined2 *)(iVar8 + 0x138) = 0;
        *(undefined1 *)(iVar8 + 0x148) = 0;
        if (param_1->setByGroup == 7) {
          iVar10 = (byte)param_1->setByGroup - 1;
          if (iVar10 < 10) {
            puVar16 = (undefined4 *)(&DAT_00840910 + iVar10 * 4);
            do {
              M388_0035d190(param_1,param_2,*puVar16);
              iVar10 = iVar10 + 1;
              puVar16 = puVar16 + 1;
            } while (iVar10 < 10);
          }
          PlayMobySound(7,0,param_1);
        }
      }
    }
  }
LAB_0035dd4c:
  iVar10 = 0;
  lVar15 = param_2;
  do {
    if (iVar12 != 0) break;
    iVar17 = (int)lVar15;
    if (*(int *)(iVar17 + 0xc4) != 0) {
      iVar11 = MB_damage(*(int *)(iVar17 + 0xc4),0x230000,0);
      MB_HandleDamage(param_1,iVar11,lVar18,0,local_90,0,0,4);
      cVar1 = param_1->setByGroup;
      fVar3 = *(float *)(iVar8 + 0x20);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x20) != 0)) {
        sVar5 = *(short *)(*(int *)(iVar11 + 0x20) + 0xa6);
        if ((sVar5 == 0x53 || sVar5 == 0x52) || (sVar5 == 0xd4)) {
          *(undefined1 *)(*(int *)(iVar17 + 0xc4) + 0xa4) = 0xff;
          goto LAB_0035e0b4;
        }
      }
      if (1 < local_90[0]) {
        fVar4 = *(float *)(iVar11 + 0x2c);
        if (0 < *(int *)(iVar11 + 0x2c)) {
          uVar13 = *(ushort *)(iVar11 + 0x2a);
          if (uVar13 < 0x128) {
            if (0x126 < uVar13) {
              fVar4 = fVar4 * 0.5;
              *(float *)(iVar11 + 0x2c) = fVar4;
            }
          }
          else if (uVar13 == 0x3f1) {
            *(undefined4 *)(iVar11 + 0x2c) = 0x3dcccccd;
            fVar4 = 0.1;
          }
        }
        if ((iVar11 != 0) && (cVar1 == '\a')) {
          fVar4 = fVar4 * 1.5;
          *(float *)(iVar11 + 0x2c) = fVar4;
        }
        if (fVar4 < fVar3) {
          auVar23 = ZEXT416(0xffffffff);
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          *(undefined1 *)(iVar8 + 0x67) = 0xfa;
          auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
          iVar12 = 1;
          *(float *)(iVar8 + 0x20) = fVar3 - fVar4;
          auVar23 = loadVectorLeftIndexed(0x10,0x35d930);
          auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = vectorMultiplyAddFloatingPoint
                              (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60
                               ,auVar24);
          auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
          auVar23 = vectorSplatHalfWord(auVar23,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar23,0x26,param_2);
          *(undefined2 *)(iVar8 + 0x26) = uVar6;
          MB_UpdateLightsTransition(param_1,param_2 + 0x60);
          *(undefined1 *)(*(int *)(iVar17 + 0xc4) + 0xa4) = 0xff;
        }
        else {
          M388_0035d338(param_1,param_2,lVar18,iVar11);
          iVar12 = 3;
          *(undefined1 *)(*(int *)(iVar17 + 0xc4) + 0xa4) = 0xff;
        }
        if (param_1->state == '\a') {
          bVar9 = true;
          param_1->setByGroup = param_1->setByGroup + '\x01';
          iVar17 = *(int *)(DAT_0096b2d0 + 0x78);
          *(undefined4 *)(iVar17 + 0x88) = 0;
          *(undefined4 *)(iVar17 + 0xec) = 0;
          *(undefined4 *)(iVar17 + 0x8c) = 0;
          *(undefined4 *)(iVar17 + 0x118) = 0;
        }
        else if (dVar19 <= (double)*(float *)(iVar8 + 0x20)) {
          if ((double)*(float *)(iVar8 + 0x20) < dVar20) {
            *(undefined1 *)(iVar8 + 0x148) = 1;
          }
        }
        else {
          if (*(int *)(&DAT_0084090c + (uint)(byte)param_1->setByGroup * 4) != -1) {
            M388_0035d190(param_1,param_2,
                          *(int *)(&DAT_0084090c + (uint)(byte)param_1->setByGroup * 4));
          }
          PlayMobySound(7,0,param_1);
          iVar12 = *(int *)(iVar8 + 0x11c);
          if (param_1->state == '\x05') {
            param_1->state = '\x04';
          }
          param_1->setByGroup = param_1->setByGroup + '\x01';
          if (iVar12 != -1) {
            if (((iVar12 != -1) && (g_SoundChannels[iVar12].pMoby == param_1)) &&
               (g_SoundChannels[iVar12].state != '\0')) {
              sound_Kill(iVar12);
            }
            *(undefined4 *)(iVar8 + 0x11c) = 0xffffffff;
          }
          bVar9 = true;
          iVar12 = 2;
          iVar17 = *(int *)(DAT_0096b2d0 + 0x78);
          *(undefined4 *)(iVar17 + 0x88) = 0;
          *(undefined4 *)(iVar17 + 0xec) = 0;
          *(undefined4 *)(iVar17 + 0x8c) = 0;
          *(undefined4 *)(iVar17 + 0x118) = 0;
          *(undefined2 *)(iVar8 + 0x138) = 0;
          *(undefined1 *)(iVar8 + 0x148) = 0;
          if (param_1->setByGroup == 7) {
            iVar17 = (byte)param_1->setByGroup - 1;
            if (iVar17 < 10) {
              puVar16 = (undefined4 *)(&DAT_00840910 + iVar17 * 4);
              do {
                M388_0035d190(param_1,param_2,*puVar16);
                iVar17 = iVar17 + 1;
                puVar16 = puVar16 + 1;
              } while (iVar17 < 10);
            }
            PlayMobySound(7,0,param_1);
          }
        }
      }
    }
LAB_0035e0b4:
    iVar10 = iVar10 + 1;
    lVar15 = lVar15 + 4;
  } while (iVar10 < 0xb);
  if (iVar12 != 0) {
    if (bVar9) {
      cVar1 = param_1->setByGroup;
      if (cVar1 != '\b') {
        if (cVar1 == '\a') {
          M388_0035b790(param_1,param_2,0x16,1);
        }
        else if (cVar1 == '\x06') {
          M388_0035b790(param_1,param_2,0x13,1);
        }
        else if (cVar1 != '\x05') {
          if (cVar1 == '\x04') {
            M388_0035b790(param_1,param_2,0x11,1);
          }
          else if (cVar1 == '\x03') {
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar25 = loadVectorLeftIndexed(0x18,0x35d930);
            auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar23 = vectorMultiplyAddFloatingPoint
                                (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 |
                                         auVar23 << 0x60,auVar24);
            auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
            auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x100,
                               param_2);
            *(undefined4 *)(iVar8 + 0x100U & 0xfffffffc) = uVar7;
            M388_0035b790(param_1,param_2,0x10,1);
          }
          else if (cVar1 == '\x02') {
            M388_0035b790(param_1,param_2,0xc,4);
          }
        }
      }
    }
    else if ((param_1->setByGroup == '\a') && (*(char *)(iVar8 + 0x148) != '\0')) {
      uVar13 = *(ushort *)(iVar8 + 0x138);
      if ((uVar13 & 1) == 0) {
        iVar12 = M388_0035b790(param_1,param_2,0x14,2);
        uVar13 = *(ushort *)(iVar8 + 0x138);
        if (iVar12 != 0) {
          uVar13 = uVar13 | 1;
          *(ushort *)(iVar8 + 0x138) = uVar13;
        }
      }
      if (((uVar13 & 2) == 0) && (iVar12 = M388_0035b790(param_1,param_2,0x14,2), iVar12 != 0)) {
        *(ushort *)(iVar8 + 0x138) = *(ushort *)(iVar8 + 0x138) | 2;
      }
    }
  }
LAB_0035e244:
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x035e29c (0x120 bytes)
void M388_0035e29c(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  iVar3 = *(int *)(DAT_0096b2d0 + 0x78);
  dVar5 = (double)FastWrapRot(*(float *)(DAT_0096b2d0 + 0x48),*(float *)(iVar3 + 0x90));
  dVar6 = (double)FastWrapRot(*(float *)(DAT_0096b2d0 + 0x44),*(float *)(iVar3 + 0x94));
  fVar1 = param_3[1] - *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *param_3 - *(float *)(DAT_0096b2d0 + 0x10);
  fVar4 = param_3[2] - *(float *)(DAT_0096b2d0 + 0x18);
  MB_SphericalToVector
            ((float)((double)(SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar1 * fVar1) /
                             (float)((double)*(float *)(iVar3 + 100) + param_1)) *
                    (double)*(float *)(iVar3 + 100)),(float)dVar5,(float)-dVar6,param_2);
  fVar1 = *(float *)(DAT_0096b2d0 + 0x14);
  fVar2 = *(float *)(DAT_0096b2d0 + 0x18);
  *param_2 = *param_2 + *(float *)(DAT_0096b2d0 + 0x10);
  param_2[1] = param_2[1] + fVar1;
  param_2[2] = param_2[2] + fVar2;
  return;
}


// 0x035e3c8 (0x7dc bytes)
// inlined: FastAtan2 @0x35e528, FastAtan2 @0x35e6e0, FastAtan2 @0x35e8a8, FastAtan2 @0x35ea64
void M388_0035e3c8
               (double param_1,float *param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar20;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x29] = in_f31;
  puVar10[0x28] = unaff_r31;
  puVar10[0x27] = unaff_r30;
  puVar10[0x26] = unaff_r29;
  iVar11 = DAT_0096b2d0;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = g_heroPosition.x - fVar4;
    fVar6 = g_heroPosition.y - fVar5;
    fVar8 = ABS(fVar9);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar10 + 0x8c) = fVar9;
    *(float *)(puVar10 + 0x12) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar8 - fVar7;
    dVar26 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
    fVar9 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar9 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)(puVar10 + 0x12));
    if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
      fVar13 = fVar8;
    }
    dVar24 = dVar26;
    if (0.0 < fVar9) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x80;
      lVar19 = uVar14 - 0x70;
      lVar21 = 2;
      fVar9 = (fVar13 - fVar9) / (fVar13 + fVar9);
      fVar8 = fVar9 * fVar9;
      *(float *)((int)puVar10 + 0xdc) = fVar9;
      *(float *)((int)puVar10 + 0xd4) = fVar9;
      *(float *)(puVar10 + 0x1b) = fVar9;
      *(float *)(puVar10 + 0x1a) = fVar9;
      fVar9 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar8;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar9;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar9 * fVar8;
      do {
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xc0) * fVar9 * fVar9;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x80;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar9 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd0) = *(float *)((int)lVar15 + 0xd0) * fVar9;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0xd0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar7 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    fVar2 = ABS(fVar3 - param_2[2]);
    *(float *)((int)puVar10 + 0x84) = fVar3 - param_2[2];
    fVar3 = ABS(fVar1);
    *(float *)(puVar10 + 0x10) = fVar1;
    *(float *)(puVar10 + 0x11) = fVar3 - fVar2;
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar1 = fVar2;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar10 + 0x84));
    if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (0.0 < fVar1) {
      lVar15 = uVar14 - 0x140;
      lVar19 = uVar14 - 0x90;
      lVar17 = uVar14 - 0xa0;
      lVar21 = 2;
      fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)((int)puVar10 + 0xbc) = fVar1;
      *(float *)((int)puVar10 + 0xb4) = fVar1;
      *(float *)(puVar10 + 0x17) = fVar1;
      *(float *)(puVar10 + 0x16) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar3;
      *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar1;
      *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xa0) * fVar1 * fVar1;
        iVar11 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0xa0;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xb0) * fVar1;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xb0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar2);
    }
  }
  else {
    dVar26 = 0.0;
    if (param_1 <= 0.0) {
      fVar1 = *(float *)(DAT_0096b2d0 + 0x10);
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar2 = *(float *)(iVar11 + 0x14);
      *(float *)((int)puVar10 + 0x74) = fVar2;
      fVar3 = *(float *)(iVar11 + 0x18);
      *(float *)(puVar10 + 0xf) = fVar3;
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(iVar11 + 0x1c);
    }
    else {
      M388_0035e29c(param_1,uVar14 - 0xe0,param_2);
      fVar1 = *(float *)(puVar10 + 0xe);
      fVar2 = *(float *)((int)puVar10 + 0x74);
      fVar3 = *(float *)(puVar10 + 0xf);
    }
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar9 = fVar1 - fVar4;
    fVar6 = fVar2 - fVar5;
    dVar24 = ABS((double)fVar9);
    dVar25 = ABS((double)fVar6);
    *(float *)((int)puVar10 + 0xa4) = fVar9;
    *(float *)(puVar10 + 0x15) = fVar6;
    *(float *)((int)puVar10 + 0xac) = (float)(dVar24 - dVar25);
    uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)((int)puVar10 + 0xa4));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar23 = dVar25;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar25 = ABS((double)*(float *)(puVar10 + 0x15));
    if ((double)*(float *)((int)puVar10 + 0xac) - dVar26 < 0.0) {
      dVar25 = dVar24;
    }
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x40;
      lVar19 = uVar14 - 0x30;
      lVar21 = 2;
      fVar7 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x11c) = fVar7;
      *(float *)((int)puVar10 + 0x114) = fVar7;
      *(float *)(puVar10 + 0x23) = fVar7;
      *(float *)(puVar10 + 0x22) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)((int)puVar10 + 0x114) = *(float *)((int)puVar10 + 0x114) * fVar8;
      *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar7;
      *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x100) * fVar7 * fVar7;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x40;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar7 = *pfVar20;
        fVar8 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0x110) = *(float *)((int)lVar15 + 0x110) * fVar7;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar8;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      lVar15 = lVar16;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar11 + 0x110)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar9 + fVar6);
    }
    fVar5 = fVar5 - fVar2;
    fVar4 = fVar4 - fVar1;
    fVar1 = param_2[2];
    fVar2 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    *(float *)((int)puVar10 + 0x9c) = fVar3 - fVar1;
    dVar22 = ABS((double)(fVar3 - fVar1));
    dVar25 = ABS((double)fVar2);
    *(float *)(puVar10 + 0x13) = fVar2;
    *(float *)(puVar10 + 0x14) = (float)(dVar25 - dVar22);
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1d) & 4;
    dVar23 = ABS((double)*(float *)(puVar10 + 0x13));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar23 = dVar22;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar22 = ABS((double)*(float *)((int)puVar10 + 0x9c));
    if ((double)*(float *)(puVar10 + 0x14) - dVar26 < 0.0) {
      dVar22 = dVar25;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (dVar26 < dVar23) {
      lVar15 = uVar14 - 0x140;
      lVar17 = uVar14 - 0x60;
      lVar19 = uVar14 - 0x50;
      lVar21 = 2;
      fVar3 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar10 + 0xfc) = fVar3;
      *(float *)((int)puVar10 + 0xf4) = fVar3;
      *(float *)(puVar10 + 0x1f) = fVar3;
      *(float *)(puVar10 + 0x1e) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar10 + 0xf4) = *(float *)((int)puVar10 + 0xf4) * fVar4;
      *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar3;
      *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xe0) * fVar3 * fVar3;
        iVar11 = (int)lVar17;
        lVar15 = lVar15 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar14 - 0x60;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xf0) = *(float *)((int)lVar15 + 0xf0) * fVar3;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar19;
        lVar16 = lVar16 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xf0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (float)dVar24;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = (float)-dVar26;
  }
  return;
}


// 0x035ebb8 (0x1a0 bytes)
undefined8 M388_0035ebb8(MobyInstance *param_1,int param_2)

{
  uint uVar1;
  uint uVar3;
  byte bVar4;
  undefined8 uVar2;
  GPiece<16> auStack_50;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<32> local_38;
  
  bVar4 = *(byte *)(param_2 + 0xfc);
  uVar1 = (uint)bVar4;
  if (param_1->setByGroup == '\x06') {
    uVar3 = rand();
    if ((uVar3 & 1) == 0) goto LAB_0035ec34;
    bVar4 = *(byte *)(param_2 + 0xfc);
  }
  *(byte *)(param_2 + 0xfc) = bVar4 ^ 1;
LAB_0035ec34:
  GetBonePosition
            (param_1,(ZERO_MASK((uVar1 & 1)) & 0xfffffffffffffffeU) + 0x12,
             auStack_50);
  if (param_1->state == '\x05') {
    M388_0035e3c8(0xbff0000000000000,auStack_50,&DAT_0035eba4,local_3c,local_38);
  }
  else {
    M388_0035e3c8((double)(g_FrameTime * 17.0),auStack_50,&DAT_00720000,local_3c,local_38)
    ;
  }
  uVar2 = M819_00471930((double)(g_FrameTime * 18.0 + *(float *)(param_2 + 0xac)),
                        (double)(g_FrameTime * 18.0),param_1,auStack_50,DAT_0096b2d0,
                        local_40);
  if ((int)uVar2 != 0) {
    PlayMobySound(2,0,param_1);
  }
  return uVar2;
}


// 0x035ed70 (0x36c bytes)
undefined8 M388_0035ed70(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 local_90 [4];
  GPiece<16> local_80;
  undefined4 local_70 [6];
  
  GetBonePosition(param_1,0xe,local_90);
  dVar3 = 30.0;
  if ((DAT_0096b2d0 == 0) || (*(short *)(DAT_0096b2d0 + 0xa6) != 0x45)) {
    MB_randSphere(0,(double)(g_FrameTime * 30.0),local_80);
  }
  else {
    M388_0035e29c((double)(g_FrameTime * 20.0),local_70,local_90);
    dVar2 = -30.0;
    MB_randRangeFloat
              ((float)((double)g_FrameTime * -30.0),
               (float)((double)g_FrameTime * dVar3));
    MB_randRangeFloat
              ((float)((double)g_FrameTime * dVar2),
               (float)((double)g_FrameTime * dVar3));
    MB_randRangeFloat
              ((float)((double)g_FrameTime * 5.0),
               (float)((double)g_FrameTime * dVar3));
  }
  uVar1 = M829_0047df40(param_1,local_90,local_80);
  if ((int)uVar1 != 0) {
    PlayMobySound(3,0,(MobyInstance *)param_1);
  }
  return uVar1;
}


// 0x035f100 (0x548 bytes)
void M388_0035f100(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float local_150;
  float local_14c;
  float local_148;
  GPiece<152> local_140;
  
  iVar1 = *(int *)(param_1 + 0x78);
  GetEffectTex(0x34);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  dVar9 = 0.0;
  dVar7 = 1.0;
  GetBonePosition(param_1,0x13,&local_150);
  fVar3 = *(float *)(iVar1 + 0x84) - local_14c;
  fVar4 = *(float *)(iVar1 + 0x80) - local_150;
  fVar5 = *(float *)(iVar1 + 0x88) - local_148;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar6 = 100.0 / fVar2;
  if (100.0 - fVar2 < 0.0) {
    fVar3 = fVar3 * fVar6;
  }
  if (100.0 - fVar2 < 0.0) {
    fVar4 = fVar4 * fVar6;
  }
  if (100.0 - fVar2 < 0.0) {
    fVar5 = fVar5 * fVar6;
  }
  dVar8 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  dVar12 = (double)(float)(dVar8 * 0.009999999776482582);
  if ((double)(float)(dVar8 * 0.009999999776482582) - dVar7 < 0.0) {
    dVar12 = dVar7;
  }
  FastIntToDouble(worldUpdateTime % 0x14);
  if (dVar9 < dVar8) {
    dVar7 = 10.0;
    dVar11 = 6.400000095367432;
    dVar10 = (double)(float)(dVar8 - 10.0);
    do {
      if ((dVar7 < dVar8) && (dVar10 < dVar9)) {
        FastDoubleToInt((double)(float)((double)(float)(dVar8 - dVar9) * dVar11));
      }
      FastDrawQuad(local_140,0,1,EffectTexHeaders,9);
      dVar9 = (double)(float)(dVar9 + dVar12);
    } while (dVar9 < dVar8);
  }
  return;
}


// 0x035f670 (0x8dc bytes)
undefined * M388_0035f670(MobyInstance *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  bVar7 = param_1->setByGroup;
  iVar2 = (int)param_2;
  if (bVar7 < 3) {
    if (bVar7 == 0) {
      return (undefined *)(uint)bVar7;
    }
    if (bVar7 < 2) {
      if (param_1->state != '\x04') {
        iVar5 = FastDecTimerS32(param_2 + 0xf8);
        if (iVar5 == 0) {
          return (undefined *)0x0;
        }
        if (((*(ushort *)(iVar2 + 0x138) & 1) == 0) &&
           (iVar5 = M388_0035b790(param_1,param_2,1,2), iVar5 != 0)) {
          *(ushort *)(iVar2 + 0x138) = *(ushort *)(iVar2 + 0x138) | 1;
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(8,0x35f648);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        param_1->state = '\x04';
        return (undefined *)0xf8;
      }
      iVar5 = FastDecTimerS32(param_2 + 0xf8);
      if (iVar5 == 0) {
        return (undefined *)0x0;
      }
      M388_0035ebb8(param_1,param_2);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      bVar7 = *(char *)(iVar2 + 0xfd) + 1;
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      *(byte *)(iVar2 + 0xfd) = bVar7;
      if (bVar7 < 0xb) {
        return (undefined *)0xf8;
      }
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      *(undefined1 *)(iVar2 + 0xfd) = 0;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      param_1->state = '\x03';
      auVar8 = loadVectorLeftIndexed(4,0x35f648);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      return (undefined *)0xf8;
    }
  }
  else {
    if (bVar7 < 7) {
      if (bVar7 == 4) {
        param_1->state = '\x03';
        if (*(byte *)(iVar2 + 0x10e) != 0) {
          return (undefined *)(uint)*(byte *)(iVar2 + 0x10e);
        }
        param_1->setByGroup = '\x05';
        M388_0035b790(param_1,param_2,0x1b,2);
        puVar4 = *(undefined **)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(puVar4 + 0x88) = 0;
        *(undefined4 *)(puVar4 + 0xec) = 0;
        *(undefined4 *)(puVar4 + 0x8c) = 0;
        *(undefined4 *)(puVar4 + 0x118) = 0;
        return puVar4;
      }
      FastDecTimerS32(param_2 + 0x124);
      FastDecTimerS32(param_2 + 0x100);
      FastDecTimerS32(param_2 + 0xf8);
      if (param_1->state == '\x05') {
        if (*(int *)(iVar2 + 0x100) == 0) {
          if (*(undefined **)(iVar2 + 0x124) != (undefined *)0x0) {
            return *(undefined **)(iVar2 + 0x124);
          }
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = loadVectorLeftIndexed(0x14,0x35f648);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar9 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x100,param_2
                            );
          *(undefined4 *)(iVar2 + 0x100U & 0xfffffffc) = uVar1;
          auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
          auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar10);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2)
          ;
          *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
          param_1->state = '\x04';
          puVar4 = (undefined *)PlayMobySound(5,0,param_1);
          return puVar4;
        }
        if (*(byte *)(iVar2 + 0xff) != 1) {
          return (undefined *)(uint)*(byte *)(iVar2 + 0xff);
        }
        if (*(undefined **)(iVar2 + 0xf8) != (undefined *)0x0) {
          return *(undefined **)(iVar2 + 0xf8);
        }
        M388_0035ebb8(param_1,param_2);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
        *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
        return &DAT_0035f648;
      }
      iVar5 = *(int *)(iVar2 + 0x11c);
      if (iVar5 != -1) {
        if (((iVar5 != -1) && (g_SoundChannels[iVar5].pMoby == param_1)) &&
           (g_SoundChannels[iVar5].state != '\0')) {
          sound_Kill(iVar5);
        }
        *(undefined4 *)(iVar2 + 0x11c) = 0xffffffff;
      }
      GetBonePosition(param_1,0x13,&local_20);
      puVar4 = *(undefined **)(iVar2 + 0xf8);
      fVar3 = SQRT((local_18 - g_heroPosition.z) * (local_18 - g_heroPosition.z) +
                   (local_20 - g_heroPosition.x) * (local_20 - g_heroPosition.x) +
                   (local_1c - g_heroPosition.y) * (local_1c - g_heroPosition.y));
      if (((*(int *)(iVar2 + 0x100) == 0) && (fVar3 < 100.0)) && (60.0 < fVar3)) {
        if (puVar4 != (undefined *)0x0) {
          return puVar4;
        }
        if (*(undefined **)(iVar2 + 0x124) != (undefined *)0x0) {
          return *(undefined **)(iVar2 + 0x124);
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(0x14,0x35f648);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x100,param_2);
        *(undefined4 *)(iVar2 + 0x100U & 0xfffffffc) = uVar1;
        *(float *)(iVar2 + 0x80) = local_20;
        *(float *)(iVar2 + 0x84) = local_1c;
        *(float *)(iVar2 + 0x88) = local_18;
        *(undefined4 *)(iVar2 + 0x8c) = local_14;
        *(undefined1 *)(iVar2 + 0xff) = 0;
        param_1->state = '\x05';
        return (undefined *)0x100;
      }
      if (param_1->setByGroup == '\x03') {
        param_1->state = '\x04';
        if (puVar4 != (undefined *)0x0) {
          return puVar4;
        }
        M388_0035ebb8(param_1,param_2);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
        *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
        return &DAT_0035f648;
      }
      if (puVar4 != (undefined *)0x0) {
        return puVar4;
      }
      iVar5 = FastDecTimerU8(param_2 + 0xfd);
      if ((iVar5 != 0) && (*(int *)(iVar2 + 0x124) == 0)) {
        bVar7 = *(byte *)(iVar2 + 0xfe) ^ 1;
        *(byte *)(iVar2 + 0xfe) = bVar7;
        if (bVar7 == 0) {
          uVar6 = MB_randRange(4,6);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x04';
        }
        else {
          uVar6 = MB_randRange(0x14,0x32);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x03';
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        return (undefined *)0xf8;
      }
      if (*(byte *)(iVar2 + 0xfe) == 0) {
        M388_0035ebb8(param_1,param_2);
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        auVar8 = loadVectorLeftIndexed(0x18,0x35f648);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
        *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
        return &DAT_0035f648;
      }
      M388_0035ed70(param_1,param_2);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(0x1c,0x35f648);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      auVar8 = loadVectorLeftIndexed(0x20,0x35f648);
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x124,param_2);
      *(undefined4 *)(iVar2 + 0x124U & 0xfffffffc) = uVar1;
      return &DAT_0035f648;
    }
    if (7 < bVar7) {
      return (undefined *)(uint)bVar7;
    }
  }
  puVar4 = (undefined *)FastDecTimerS32(param_2 + 0xf8);
  if (puVar4 != (undefined *)0x0) {
    if (param_1->setByGroup == '\x02') {
      iVar5 = FastDecTimerU8(param_2 + 0xfd);
      if (iVar5 == 0) {
        if (*(char *)(iVar2 + 0xfe) == '\0') {
          M388_0035ebb8(param_1,param_2);
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          puVar4 = (undefined *)0xf8;
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2)
          ;
          *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        }
        else {
          M388_0035ed70(param_1,param_2);
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          auVar8 = loadVectorLeftIndexed(0x1c,0x35f648);
          puVar4 = (undefined *)0xf8;
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar1 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2)
          ;
          *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
        }
      }
      else {
        bVar7 = *(byte *)(iVar2 + 0xfe) ^ 1;
        *(byte *)(iVar2 + 0xfe) = bVar7;
        if (bVar7 == 0) {
          uVar6 = MB_randRange(4,6);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x04';
        }
        else {
          uVar6 = MB_randRange(0x14,0x32);
          *(undefined1 *)(iVar2 + 0xfd) = uVar6;
          param_1->state = '\x03';
        }
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar8 = loadVectorLeftIndexed(in_LR,0x35f648);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        puVar4 = (undefined *)0xf8;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
        *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
      }
    }
    else {
      param_1->state = '\x03';
      M388_0035ed70(param_1,param_2);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(0x1c,0x35f648);
      puVar4 = (undefined *)0xf8;
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0xf8,param_2);
      *(undefined4 *)(iVar2 + 0xf8U & 0xfffffffc) = uVar1;
    }
  }
  return puVar4;
}


// 0x035ffd8 (0x21d4 bytes)
// strings: 0065660c: 'M388_bossStartTime: %d (%d -> %d)\n' | 00656634: '40 min adj\n' | 00656644: '25s min adj\n' | 00656654: 'tractor off screen, abort\n' | 00656674: 'tractor too long_, abort\n'

/* Moby 388 */

void UpdateMoby_388(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  void *pvVar3;
  u16 *puVar4;
  MobyInstance *pMVar5;
  f32 fVar6;
  Spline *pSVar7;
  float fVar8;
  MobyInstance *pMVar9;
  longlong lVar10;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  short sVar16;
  longlong lVar11;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  short sVar21;
  uint uVar20;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  float fVar37;
  GPiece<16> auStack_130;
  GPiece<16> auStack_120;
  GPiece<16> auStack_110;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  GPiece<16> auStack_c0;
  Vec4 VStack_b0;
  longlong local_a0;
  
  lVar10 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  uVar24 = ZEXT48(pvVar3);
  dVar32 = 16.0;
  uVar12 = FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0x20) * 16.0));
  local_a0 = (longlong)(int)*(short *)((int)pvVar3 + 0x24);
  *(uint *)((int)pvVar3 + 0x108) = uVar12 & 0xfff0;
  dVar27 = 0.5;
  iVar13 = FastDoubleToInt
                     ((double)(float)((double)(float)((double)local_a0 - 0.5) * dVar32));
  uVar20 = (int)*(uint *)((int)pvVar3 + 0x20) >> 0x1f;
  if (iVar13 <= (int)(uVar12 & 0xfff0)) {
    *(uint *)((int)pvVar3 + 0x108) = *(uint *)((int)pvVar3 + 0x108) | 0xf;
  }
  iVar13 = 0;
  if (0x3f000000 < (int)((uVar20 >> 1 ^ *(uint *)((int)pvVar3 + 0x20)) - uVar20)) {
    iVar14 = FastDoubleToInt((double)*(float *)((int)pvVar3 + 0x20));
    iVar18 = (int)*(short *)((int)pvVar3 + 0x24);
    iVar13 = iVar18 >> 0x1f;
    iVar19 = (int)*(short *)((int)pvVar3 + 0x24);
    iVar13 = ((iVar14 - (iVar14 / ((iVar18 / 6 + iVar13) - (iVar18 / 6 + iVar13 >> 0x1f))) *
                        ((iVar18 / 6 + iVar13) - (iVar18 / 6 + iVar13 >> 0x1f))) * 0x10) /
             ((iVar19 / 6 + (iVar19 >> 0x1f)) - (iVar19 / 6 + (iVar19 >> 0x1f) >> 0x1f));
    iVar13 = *(int *)((int)pvVar3 + 0x108) + (iVar13 + (iVar13 >> 0x1f & -iVar13) & 0xfU);
  }
  *(int *)((int)pvVar3 + 0x108) = iVar13;
  iVar14 = DAT_0096b2d0;
  iVar13 = DAT_008409e4;
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        DeleteMoby(moby);
        return;
      }
      uVar23 = 0;
      moby->scale = moby->pClass->gScale * 4.0;
      do {
        iVar13 = (int)((uVar23 & 0xffffffff) << 2);
        uVar15 = M388_003621c8
                           (lVar10,uVar23,*(undefined4 *)(&DAT_0084096c + iVar13));
        iVar14 = (int)uVar23 + 1;
        uVar23 = (ulonglong)iVar14;
        *(undefined4 *)((int)pvVar3 + iVar13 + 0xc4) = uVar15;
      } while (iVar14 < 10);
      *(MobyInstance **)((int)pvVar3 + 0xec) = moby;
      iVar13 = 0;
      uVar23 = uVar24;
      do {
        pSVar7 = Splines[*(int *)((int)uVar23 + 0xb0)];
        dVar32 = (double)FUN_005e8548(pSVar7->points,pSVar7->points + pSVar7->cnt + -1);
        if (dVar32 < dVar27) {
          pSVar7->cnt = pSVar7->cnt + -1;
        }
        iVar13 = iVar13 + 1;
        uVar23 = uVar23 + 4;
      } while (iVar13 < 5);
      *(float *)((int)pvVar3 + 0xac) = g_FrameTime * 42.0 * 0.1;
      dVar32 = (double)cosf((moby->rotation).z);
      *(float *)((int)pvVar3 + 0x70) = (float)(dVar32 * (double)*(float *)((int)pvVar3 + 0xac));
      dVar32 = (double)FUN_005e8128((double)(moby->rotation).z);
      *(undefined4 *)((int)pvVar3 + 0x78) = 0;
      pSVar7 = Splines[*(int *)((int)pvVar3 + 0xb0)];
      *(float *)((int)pvVar3 + 0x74) = (float)(dVar32 * (double)*(float *)((int)pvVar3 + 0xac));
      FUN_005e7e98(lVar10 + 0x10,ZEXT48(pSVar7) + 0x10);
      *(undefined2 *)((int)pvVar3 + 0x9e) = 0;
      auVar35 = ZEXT416(0xfffffff0);
      *(undefined2 *)((int)pvVar3 + 0x9c) = 1;
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      *(undefined1 *)((int)pvVar3 + 0xfe) = 0;
      *(undefined1 *)((int)pvVar3 + 0xfc) = 0;
      *(undefined1 *)((int)pvVar3 + 0x10c) = 1;
      moby->state = '\x01';
      auVar34 = loadVectorLeftIndexed(0x24,uVar24);
      auVar36 = loadVectorRightIndexed(0x34,uVar24);
      *(undefined4 *)((int)pvVar3 + 0x110) = 0;
      *(undefined1 *)((int)pvVar3 + 0x10e) = 8;
      *(undefined4 *)((int)pvVar3 + 0x114) = 0xffffffff;
      auVar35 = vectorShiftRightAlgebraicWord
                          (auVar34 | auVar36,
                           auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
      *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
      *(undefined4 *)((int)pvVar3 + 0x11c) = 0xffffffff;
      *(undefined4 *)((int)pvVar3 + 0x120) = 0xffffffff;
      auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0);
      *(undefined2 *)((int)pvVar3 + 0x138) = 0;
      *(undefined1 *)((int)pvVar3 + 0x148) = 0;
      *(undefined4 *)((int)pvVar3 + 0x13c) = 0;
      iVar13 = *(int *)((int)pvVar3 + 0x104);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,uVar24)
      ;
      *(undefined4 *)((int)pvVar3 + 0x20U & 0xfffffffc) = uVar15;
      if (iVar13 != -1) {
        Hud_SetEntryValueById(iVar13,0);
        *(undefined4 *)((int)pvVar3 + 0x104) = 0xffffffff;
      }
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    else if (bVar1 < 2) {
      if ((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        puVar4 = moby->pClass->collision;
        moby->drawDistance = 0x3ff;
        moby->collision = puVar4;
        iVar14 = *(int *)(iVar14 + 0x78);
        if (iVar13 == -1) {
          DAT_008409e4 = g_GameFrameCount;
          printf("M388_bossStartTime: %d (%d -> %d)\n",g_GameFrameCount,
                       g_GameFrameCount / 0x3c,g_GameFrameCount / 0x168);
          iVar13 = DAT_008409e4;
        }
        uVar20 = (uint)(g_GameFrameCount - iVar13) / 0x168;
        if (uVar20 < 0x29) {
          if (0x19 < uVar20) {
            printf("25s min adj\n");
            *(undefined2 *)((int)pvVar3 + 0x24) = 0x78;
            auVar35 = loadVectorLeftIndexed(0x18,0x35ff4c);
            auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar15 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,
                                uVar24);
            *(undefined4 *)((int)pvVar3 + 0x20U & 0xfffffffc) = uVar15;
            *(undefined4 *)(iVar14 + 0x138) = 0x234;
          }
        }
        else {
          printf("40 min adj\n");
          *(undefined2 *)((int)pvVar3 + 0x24) = 0x66;
          auVar35 = loadVectorLeftIndexed(0x14,0x35ff4c);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x20,
                              uVar24);
          *(undefined4 *)((int)pvVar3 + 0x20U & 0xfffffffc) = uVar15;
          *(undefined4 *)(iVar14 + 0x138) = 0x221;
        }
        moby->state = '\x02';
      }
    }
    else if (bVar1 < 3) {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      iVar13 = RegisterHUDCallback
                         (0x11,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                          (int *)((int)pvVar3 + 0x108),
                          (int)((longlong)*(short *)((int)pvVar3 + 0x24) << 4) + 0xf);
      *(int *)((int)pvVar3 + 0x104) = iVar13;
      *(float *)((int)pvVar3 + 0xac) =
           (g_FrameTime * 42.0 - *(float *)((int)pvVar3 + 0xac)) * 0.1 +
           *(float *)((int)pvVar3 + 0xac);
      iVar13 = M388_0035c4f8(lVar10,uVar24,0,1);
      if (iVar13 != 0) {
        moby->setByGroup = '\x01';
        iVar13 = *(int *)(DAT_0096b2d0 + 0x78);
        *(undefined4 *)(iVar13 + 0x88) = 0;
        *(undefined4 *)(iVar13 + 0xec) = 0;
        *(undefined4 *)(iVar13 + 0x8c) = 0;
        *(undefined4 *)(iVar13 + 0x118) = 0;
        *(char *)((int)pvVar3 + 0x13b) =
             (char)*(undefined4 *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4);
        uVar15 = idol::GetAnimDuration(0x14);
        *(undefined4 *)((int)pvVar3 + 0xf8) = uVar15;
        moby->state = '\x03';
        iVar13 = PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar3 +
                                            (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]);
        *(short *)((int)pvVar3 + 0x9c) = (short)iVar13;
        sVar16 = MB_randRange(3,7);
        bVar1 = *(byte *)((int)pvVar3 + 0x13b);
        sVar16 = *(short *)((int)pvVar3 + 0x9c) + sVar16;
        iVar13 = *(int *)((int)pvVar3 + (uint)bVar1 * 4 + 0xb0);
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        sVar16 = sVar16 - (short)((int)sVar16 / Splines[iVar13]->cnt) *
                          (short)Splines[*(int *)((int)pvVar3 + (uint)bVar1 * 4 + 0xb0)]->cnt;
        sVar21 = sVar16 + -1;
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        *(short *)((int)pvVar3 + 0x9e) = sVar21;
        if (sVar21 < 0) {
          *(short *)((int)pvVar3 + 0x9e) =
               (short)Splines[*(int *)((int)pvVar3 + (uint)bVar1 * 4 + 0xb0)]->cnt + -1;
        }
      }
    }
    else {
      iVar13 = RegisterHUDCallback
                         (0x11,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                          (int *)((int)pvVar3 + 0x108),
                          (int)((longlong)*(short *)((int)pvVar3 + 0x24) << 4) + 0xf);
      *(int *)((int)pvVar3 + 0x104) = iVar13;
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      M388_0035f670(lVar10,uVar24);
      uVar23 = M388_0035ceb0
                         (lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),1);
      if (((uVar23 & 2) != 0) &&
         ((uint)*(byte *)((int)pvVar3 + 0x13b) !=
          *(uint *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4))) {
        *(char *)((int)pvVar3 + 0x13b) =
             (char)*(undefined4 *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4);
        iVar13 = PathFindClosestPnt
                           (0.0,(Vec4 *)&moby->pos,
                            Splines[*(int *)((int)pvVar3 +
                                            *(int *)(&DAT_008408e0 +
                                                    (uint)(byte)moby->setByGroup * 4) * 4 + 0xb0)]);
        *(short *)((int)pvVar3 + 0x9c) = (short)iVar13;
        sVar16 = MB_randRange(3,7);
        sVar16 = *(short *)((int)pvVar3 + 0x9c) + sVar16;
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        sVar16 = sVar16 - (short)((int)sVar16 /
                                 Splines[*(int *)((int)pvVar3 +
                                                 *(int *)(&DAT_008408e0 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0xb0)]->cnt) *
                          (short)Splines[*(int *)((int)pvVar3 +
                                                 *(int *)(&DAT_008408e0 +
                                                         (uint)(byte)moby->setByGroup * 4) * 4 +
                                                 0xb0)]->cnt;
        sVar21 = sVar16 + -1;
        *(short *)((int)pvVar3 + 0x9c) = sVar16;
        *(short *)((int)pvVar3 + 0x9e) = sVar21;
        if (sVar21 < 0) {
          *(short *)((int)pvVar3 + 0x9e) =
               (short)Splines[*(int *)((int)pvVar3 +
                                      *(int *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4) * 4
                                      + 0xb0)]->cnt + -1;
        }
      }
      if (moby->setByGroup == '\x04') {
        MB_ColorDyingMoby(lVar10,uVar24 + 0x60);
      }
      else {
        M388_0035d950(lVar10,uVar24);
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      iVar13 = RegisterHUDCallback
                         (0x11,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                          (int *)((int)pvVar3 + 0x108),
                          (int)((longlong)*(short *)((int)pvVar3 + 0x24) << 4) + 0xf);
      *(int *)((int)pvVar3 + 0x104) = iVar13;
      M388_0035f670(lVar10,uVar24);
      GetBonePosition(lVar10,0x13,auStack_120);
      lVar11 = uVar24 + 0x80;
      dVar32 = (double)FUN_005e8548(lVar11,&g_heroPosition);
      iVar13 = *(int *)((int)pvVar3 + 0x11c);
      if (((iVar13 == -1) || (g_SoundChannels[iVar13].pMoby != moby)) ||
         (g_SoundChannels[iVar13].state == '\0')) {
        *(undefined4 *)((int)pvVar3 + 0x11c) = 0xffffffff;
        iVar13 = PlayMobySound(4,4,moby);
        *(int *)((int)pvVar3 + 0x11c) = iVar13;
      }
      if (*(char *)((int)pvVar3 + 0xff) == '\0') {
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
        }
        fVar37 = g_FrameTime;
        *(float *)((int)pvVar3 + 0xac) =
             (g_FrameTime * 30.0 - *(float *)((int)pvVar3 + 0xac)) * 0.1 +
             *(float *)((int)pvVar3 + 0xac);
        dVar29 = 40.0;
        if (dVar32 <= (double)(fVar37 * 40.0)) {
          FUN_005e7e98(auStack_130,&g_heroPosition);
          uVar15 = idol::GetAnimDuration(0x78);
          *(undefined4 *)((int)pvVar3 + 0xf8) = uVar15;
          if (((*(ushort *)((int)pvVar3 + 0x138) & 4) == 0) &&
             (iVar13 = M388_0035b790(lVar10,uVar24,0x17,4), iVar13 != 0)) {
            *(ushort *)((int)pvVar3 + 0x138) = *(ushort *)((int)pvVar3 + 0x138) | 4;
          }
          *(undefined1 *)((int)pvVar3 + 0xff) = 1;
        }
        else {
          FUN_005e81f0(auStack_130,&g_heroPosition,lVar11);
          FUN_005e7f98((double)(float)((double)g_FrameTime * dVar29),auStack_130,
                       auStack_130);
          FUN_005e7f54(lVar11,lVar11,auStack_130);
        }
        uVar23 = M388_0035c4f8
                           (lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),1);
        if (((uVar23 & 2) != 0) &&
           ((uint)*(byte *)((int)pvVar3 + 0x13b) !=
            *(uint *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4))) {
          *(char *)((int)pvVar3 + 0x13b) =
               (char)*(undefined4 *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4);
          iVar13 = PathFindClosestPnt
                             (0.0,(Vec4 *)&moby->pos,
                              Splines[*(int *)((int)pvVar3 +
                                              *(int *)(&DAT_008408e0 +
                                                      (uint)(byte)moby->setByGroup * 4) * 4 + 0xb0)]
                             );
          *(short *)((int)pvVar3 + 0x9c) = (short)iVar13;
          sVar16 = MB_randRange(3,7);
          sVar16 = *(short *)((int)pvVar3 + 0x9c) + sVar16;
          *(short *)((int)pvVar3 + 0x9c) = sVar16;
          sVar16 = sVar16 - (short)((int)sVar16 /
                                   Splines[*(int *)((int)pvVar3 +
                                                   *(int *)(&DAT_008408e0 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0xb0)]->cnt) *
                            (short)Splines[*(int *)((int)pvVar3 +
                                                   *(int *)(&DAT_008408e0 +
                                                           (uint)(byte)moby->setByGroup * 4) * 4 +
                                                   0xb0)]->cnt;
          sVar21 = sVar16 + -1;
          *(short *)((int)pvVar3 + 0x9c) = sVar16;
          *(short *)((int)pvVar3 + 0x9e) = sVar21;
          if (sVar21 < 0) {
            *(short *)((int)pvVar3 + 0x9e) =
                 (short)Splines[*(int *)((int)pvVar3 +
                                        *(int *)(&DAT_008408e0 + (uint)(byte)moby->setByGroup * 4) *
                                        4 + 0xb0)]->cnt + -1;
          }
        }
        FUN_005e81f0(auStack_110,lVar11,auStack_120);
        FUN_005e7f98(0x4020000000000000,auStack_110,auStack_110);
        FUN_005e7f54(auStack_110,auStack_110,auStack_120);
        iVar13 = CollLine(auStack_110,lVar11,0,lVar10,0);
        if ((iVar13 != 0) &&
           ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
            ((g_CollOutput.pMoby)->oClass == ASTEROID_00D4)))) {
          *(undefined4 *)((int)pvVar3 + 0x100) = 0;
        }
        FUN_005e7e98(auStack_100,lVar11);
        dVar32 = 100.0;
        iVar13 = FastCheckBsphereInView(0x4059000000000000,auStack_100);
        if ((iVar13 < 1) && (moby->enabled == '\0')) {
          printf("tractor off screen, abort\n");
          *(undefined4 *)((int)pvVar3 + 0x100) = 0;
        }
        dVar29 = (double)FUN_005e8548(auStack_110,&g_heroPosition);
        if (dVar32 < dVar29) {
          printf("tractor too long_, abort\n");
          *(undefined4 *)((int)pvVar3 + 0x100) = 0;
        }
      }
      else {
        uVar25 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        lVar22 = lVar10 + 0x10;
        uVar26 = FUN_005e8588(lVar22,&g_heroPosition);
        dVar32 = (double)FUN_005e8338(uVar26,(double)(g_heroPosition.z - (moby->pos).z));
        M388_0035c3c8(uVar25,-dVar32,lVar10,uVar24);
        if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
          *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 1;
        }
        *(float *)((int)pvVar3 + 0xac) = *(float *)((int)pvVar3 + 0xac) * 0.8;
        FUN_005e8548(lVar22,&g_heroPosition);
        GetBonePosition(lVar10,0x13,auStack_e0);
        FUN_005e81f0(auStack_f0,lVar11,auStack_e0);
        dVar29 = 30.0;
        FUN_005e7f98(0x403e000000000000,auStack_f0,auStack_f0);
        FUN_005e7f54(auStack_f0,auStack_f0,auStack_e0);
        FUN_005e81f0(auStack_130,auStack_f0,lVar11);
        dVar32 = (double)FUN_005e8548(auStack_f0,&g_heroPosition);
        if (dVar32 != dVar29) {
          if ((double)(g_FrameTime * 15.0) - dVar32 < 0.0) {
            dVar32 = (double)(g_FrameTime * 15.0);
          }
          FUN_005e7f98(dVar32,auStack_130,auStack_130);
          FUN_005e7f54(lVar11,lVar11,auStack_130);
        }
        if (DAT_0096b2d0 != 0) {
          FUN_005e7e98(DAT_0096b2d0 + 0x10,lVar11);
          iVar13 = *(int *)(DAT_0096b2d0 + 0x78);
          uVar25 = FUN_005e8338((double)((moby->pos).x - *(float *)(DAT_0096b2d0 + 0x10)),
                                (double)((moby->pos).y - *(float *)(DAT_0096b2d0 + 0x14)));
          dVar32 = (double)FastDiffRots(uVar25,(double)*(float *)(iVar13 + 0x38));
          dVar31 = ABS(dVar32);
          uVar25 = FUN_005e8588(DAT_0096b2d0 + 0x10,lVar22);
          dVar29 = (double)FUN_005e8338(uVar25,(double)((moby->pos).z -
                                                       *(float *)(DAT_0096b2d0 + 0x18)));
          dVar29 = (double)FastDiffRots(-dVar29,(double)*(float *)(iVar13 + 0x34));
          dVar33 = 0.3839724361896515;
          dVar30 = 5.729578018188477;
          dVar28 = ABS(dVar29);
          if (0.3839724361896515 < dVar31) {
            fVar37 = MB_WrapRot
                               ((float)((double)((float)(dVar31 - 0.3839724361896515) * 5.729578) *
                                       dVar32));
            dVar32 = (double)FastWrapRot(*(float *)(iVar13 + 0x38),fVar37);
            *(float *)(iVar13 + 0x38) = (float)dVar32;
          }
          if (dVar33 < dVar28) {
            fVar37 = MB_WrapRot
                               ((float)((double)(float)((double)(float)(dVar28 - dVar33) * dVar30) *
                                       dVar29));
            dVar32 = (double)FastWrapRot(*(float *)(iVar13 + 0x34),fVar37);
            *(float *)(iVar13 + 0x34) = (float)dVar32;
          }
        }
      }
      if (moby->setByGroup == '\x04') {
        MB_ColorDyingMoby(lVar10,uVar24 + 0x60);
      }
      else {
        M388_0035d950(lVar10,uVar24);
      }
      dVar29 = (double)(moby->rotation).z;
      dVar32 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar32 = (double)FastSubRots((float)dVar29,(float)dVar32);
      if (dVar32 < 1.0471975803375244) {
        RegisterMobyDraw(&PTR_M388_0035f100_0070c738,moby);
      }
    }
    else if (bVar1 < 7) {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      M388_0035c4f8(lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),1);
      if ((((g_SpeechPlaying.handle == 0) && (g_PendingSpeech == -1)) &&
          (*(short *)((int)pvVar3 + 0x138) < 1)) &&
         (iVar13 = M388_0035b790(lVar10,uVar24,DAT_010c511c + 0x1d,1),
         iVar13 != 0)) {
        uVar20 = DAT_010c511c + 1;
        *(short *)((int)pvVar3 + 0x138) = *(short *)((int)pvVar3 + 0x138) + 1;
        DAT_010c511c = uVar20 + (((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0))
                                * -4;
      }
    }
    else {
      if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
        *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
      }
      if (*(int *)((int)pvVar3 + 0xf8) == 1) {
        M388_0035d190(lVar10,uVar24,8);
        PlayMobySound(7,0,moby);
      }
      FastDecTimerS32(uVar24 + 0xf8);
      iVar13 = M388_0035c4f8
                         (lVar10,uVar24,*(undefined1 *)((int)pvVar3 + 0x13b),0);
      if ((iVar13 != 0) ||
         (Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt + -1
          <= (int)*(short *)((int)pvVar3 + 0x9c))) {
        uVar15 = idol::GetAnimDuration(0xb4);
        *(undefined4 *)((int)pvVar3 + 0xf8) = uVar15;
        moby->state = '\b';
      }
      dVar32 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 4.1887903);
      (moby->rotation).x = (float)dVar32;
      lVar22 = (longlong)*(short *)((int)pvVar3 + 0x9c) + 3;
      pSVar7 = Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)];
      iVar13 = pSVar7->cnt + -1;
      lVar11 = lVar22;
      if (iVar13 <= (int)lVar22) {
        lVar11 = (ulonglong)
                 (uint)Splines[*(int *)((int)pvVar3 +
                                       (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt - 1;
      }
      iVar14 = (int)((longlong)*(short *)((int)pvVar3 + 0x9c) << 4);
      uVar25 = FUN_005e8338((double)(*(float *)((int)&Splines[*(int *)((int)pvVar3 +
                                                                      (uint)*(byte *)((int)pvVar3 +
                                                                                     0x13b) * 4 +
                                                                      0xb0)]->points[0].x +
                                               (int)(lVar11 << 4)) -
                                    *(float *)((int)&pSVar7->points[0].x + iVar14)),
                            (double)(pSVar7->points
                                     [((uint)(lVar22 - iVar13 >> 0x3f) & (int)lVar22 - iVar13) +
                                      pSVar7->cnt + -1].y -
                                    *(float *)((int)&pSVar7->points[0].y + iVar14)));
      iVar13 = *(short *)((int)pvVar3 + 0x9c) + 3;
      if (Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt + -1
          <= iVar13) {
        iVar13 = Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->
                 cnt + -1;
      }
      uVar26 = FUN_005e8588(Splines[*(int *)((int)pvVar3 +
                                            (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->
                            points + *(short *)((int)pvVar3 + 0x9c),
                            Splines[*(int *)((int)pvVar3 +
                                            (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->
                            points + iVar13);
      lVar11 = (longlong)*(short *)((int)pvVar3 + 0x9c) + 3;
      if (Splines[*(int *)((int)pvVar3 + (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt + -1
          <= (int)lVar11) {
        lVar11 = (ulonglong)
                 (uint)Splines[*(int *)((int)pvVar3 +
                                       (uint)*(byte *)((int)pvVar3 + 0x13b) * 4 + 0xb0)]->cnt - 1;
      }
      dVar32 = (double)FUN_005e8338(uVar26,(double)(*(float *)((int)&Splines[*(int *)((int)pvVar3 +
                                                                                     (uint)*(byte *)
                                                  ((int)pvVar3 + 0x13b) * 4 + 0xb0)]->points[0].z +
                                                  (int)(lVar11 << 4)) -
                                                  *(float *)((int)&Splines[*(int *)((int)pvVar3 +
                                                                                   (uint)*(byte *)((
                                                  int)pvVar3 + 0x13b) * 4 + 0xb0)]->points[0].z +
                                                  (int)((longlong)*(short *)((int)pvVar3 + 0x9c) <<
                                                       4))));
      dVar32 = -dVar32;
      dVar30 = 3.1415927410125732;
      dVar29 = 6.2831854820251465;
      OrganicDeltAngSpeed
                (uVar25,(double)(g_FrameTimeSq * 3.1415927),(double)(g_FrameTimeSq * 6.2831855),
                 (double)(g_FrameTime * 6.2831855),lVar10);
      dVar32 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar32,
                                  (double)(float)((double)g_FrameTimeSq * dVar30),
                                  (double)(float)((double)g_FrameTimeSq * dVar29),
                                  (double)(float)((double)g_FrameTime * dVar29));
      (moby->rotation).y = (float)dVar32;
      moby->scale = moby->scale * 0.99925;
      *(float *)((int)pvVar3 + 0xac) = *(float *)((int)pvVar3 + 0xac) * 0.9992;
      iVar13 = MB_randInt(0x11);
      if (iVar13 == 0) {
        dVar33 = (double)(moby->scale / (moby->pClass->gScale * 3.0));
        dVar32 = (double)MB_randRangeFloat(-5.0,5.0);
        FUN_005e7f98((double)(float)(dVar32 * dVar33),auStack_c0,lVar10 + 0xc0);
        FUN_005e7f54(auStack_d0,lVar10 + 0x10,auStack_c0);
        dVar30 = -4.0;
        dVar29 = 4.0;
        dVar32 = (double)MB_randRangeFloat(-4.0,4.0);
        FUN_005e7f98((double)(float)(dVar32 * dVar33),auStack_c0,lVar10 + 0xd0);
        FUN_005e7f54(auStack_d0,auStack_d0,auStack_c0);
        dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar29);
        FUN_005e7f98((double)(float)(dVar32 * dVar33),auStack_c0,lVar10 + 0xe0);
        FUN_005e7f54(auStack_d0,auStack_d0,auStack_c0);
        MB_SpawnExplosionSparks
                  ((double)(float)(dVar33 * 1.600000023841858),0x402a000000000000,lVar10,auStack_d0)
        ;
      }
      M388_0035bcf0(lVar10,uVar24);
      if ((g_SpeechPlaying.handle == 0) && (g_PendingSpeech == -1)) {
        iVar13 = *(int *)((int)pvVar3 + 0xf8);
        iVar14 = idol::GetAnimDuration(0x1a4);
        if ((iVar13 < iVar14) && ((*(uint *)((int)pvVar3 + 0x13c) & 0x80000000) != 0)) {
          iVar13 = M388_0035b790(lVar10,uVar24,0x23,1);
          if (iVar13 != 0) {
            *(uint *)((int)pvVar3 + 0x13c) = *(uint *)((int)pvVar3 + 0x13c) & 0x7fffffff;
          }
        }
        else {
          iVar13 = *(int *)((int)pvVar3 + 0xf8);
          iVar14 = idol::GetAnimDuration(0xb4);
          if (((iVar13 < iVar14) && ((*(uint *)((int)pvVar3 + 0x13c) & 0x40000000) != 0)) &&
             (iVar13 = M388_0035b790(lVar10,uVar24,0x24,1), iVar13 != 0)) {
            *(uint *)((int)pvVar3 + 0x13c) = *(uint *)((int)pvVar3 + 0x13c) & 0xbfffffff;
          }
        }
      }
    }
  }
  else if (bVar1 < 9) {
    if ((DAT_0096b2d0 != 0) && (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) {
      *(undefined1 *)(DAT_0096b2d0 + 0xbc) = 0;
    }
    dVar32 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 4.1887903);
    (moby->rotation).x = (float)dVar32;
    fVar37 = moby->scale;
    (moby->rotation).z = GameCamera.rot.radius;
    (moby->rotation).y = GameCamera.rot.elevation;
    moby->scale = fVar37 * 0.98;
    iVar13 = *(int *)((int)pvVar3 + 0xf8);
    iVar14 = idol::GetAnimDuration(0x1e);
    if (iVar13 == iVar14) {
      MB_genericExplosion
                (0,0,0x4014000000000000,0x4008000000000000,0,0x3ff0000000000000,0,lVar10,
                 uVar24 + 0x70,0,0xffffffffffffffff,7,0x1e,8,0x20);
    }
    M388_0035bcf0(lVar10,uVar24);
    iVar13 = FastDecTimerS32(uVar24 + 0xf8);
    pMVar5 = g_MobyInstance;
    if (iVar13 != 0) {
      iVar13 = *(int *)((int)pvVar3 + 0x134);
      pMVar9 = g_MobyInstance + iVar13;
      g_MobyInstance[iVar13].state = '\b';
      pMVar5[iVar13].modeBits = pMVar9->modeBits | NO_UPDATE;
      if (*(int *)((int)pvVar3 + 0x120) != -1) {
        DeletePointLight(*(int *)((int)pvVar3 + 0x120));
      }
      Cam19_Disable(*(int *)((int)pvVar3 + 300));
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 < 10) {
    if (*(MobyInstance **)((int)pvVar3 + 0xf0) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0xf0));
      *(undefined4 *)((int)pvVar3 + 0xf0) = 0;
    }
    if (*(MobyInstance **)((int)pvVar3 + 0x110) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x110));
      *(undefined4 *)((int)pvVar3 + 0x110) = 0;
    }
    iVar13 = 0;
    do {
      pMVar5 = *(MobyInstance **)((int)uVar24 + 0xc4);
      if (pMVar5 != (MobyInstance *)0x0) {
        DeleteMoby(pMVar5);
        *(undefined4 *)((int)uVar24 + 0xc4) = 0;
      }
      iVar13 = iVar13 + 1;
      uVar24 = uVar24 + 4;
    } while (iVar13 < 10);
    iVar13 = *(int *)((int)pvVar3 + 0x118);
    if (iVar13 != -1) {
      if (((iVar13 != -1) && (g_SoundChannels[iVar13].pMoby == moby)) &&
         (g_SoundChannels[iVar13].state != '\0')) {
        sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
    }
    iVar13 = *(int *)((int)pvVar3 + 0x114);
    if (iVar13 != -1) {
      if (((iVar13 != -1) && (g_SoundChannels[iVar13].pMoby == moby)) &&
         (g_SoundChannels[iVar13].state != '\0')) {
        sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x114) = 0xffffffff;
    }
    iVar13 = *(int *)((int)pvVar3 + 0x11c);
    if (iVar13 != -1) {
      if (((iVar13 != -1) && (g_SoundChannels[iVar13].pMoby == moby)) &&
         (g_SoundChannels[iVar13].state != '\0')) {
        sound_Kill(iVar13);
      }
      *(undefined4 *)((int)pvVar3 + 0x11c) = 0xffffffff;
    }
    if (*(int *)((int)pvVar3 + 0x120) != -1) {
      DeletePointLight(*(int *)((int)pvVar3 + 0x120));
    }
    if (*(int *)((int)pvVar3 + 0x104) != -1) {
      Hud_SetEntryValueById(*(int *)((int)pvVar3 + 0x104),0);
      *(undefined4 *)((int)pvVar3 + 0x104) = 0xffffffff;
    }
    FUN_005e7e98(lVar10 + 0x10,ZEXT48(Splines[*(int *)((int)pvVar3 + 0xb0)]) + 0x10);
    dVar27 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar3 + 0xb0)]->points[1].x -
                                          (moby->pos).x),
                                  (double)(Splines[*(int *)((int)pvVar3 + 0xb0)]->points[1].y -
                                          (moby->pos).y));
    (moby->rotation).z = (float)dVar27;
    *(undefined2 *)((int)pvVar3 + 0x9c) = 0;
    *(undefined2 *)((int)pvVar3 + 0x9e) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa0) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa8) = 0;
    *(undefined4 *)((int)pvVar3 + 0xac) = 0;
    *(undefined4 *)((int)pvVar3 + 0xf4) = 0;
    *(undefined4 *)((int)pvVar3 + 0xf8) = 0;
    *(undefined1 *)((int)pvVar3 + 0xfc) = 0;
    *(undefined1 *)((int)pvVar3 + 0xfd) = 0;
    *(undefined1 *)((int)pvVar3 + 0xfe) = 0;
    *(undefined1 *)((int)pvVar3 + 0xff) = 0;
    *(undefined4 *)((int)pvVar3 + 0x100) = 0;
    *(undefined1 *)((int)pvVar3 + 0x10c) = 1;
    *(undefined1 *)((int)pvVar3 + 0x10d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x10e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x10f) = 0;
    *(undefined4 *)((int)pvVar3 + 0x124) = 0;
    *(undefined2 *)((int)pvVar3 + 0x138) = 0;
    *(undefined1 *)((int)pvVar3 + 0x13a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x13b) = 0;
    *(undefined4 *)((int)pvVar3 + 0x13c) = 0;
    *(undefined2 *)((int)pvVar3 + 0x144) = 0;
    *(undefined2 *)((int)pvVar3 + 0x146) = 0;
    *(undefined1 *)((int)pvVar3 + 0x148) = 0;
    moby->setByGroup = '\0';
    *(undefined1 *)((int)pvVar3 + 0x70) = 0;
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
    *(undefined1 *)((int)pvVar3 + 0x80) = 0;
    *(undefined1 *)((int)pvVar3 + 0x81) = 0;
    *(undefined1 *)((int)pvVar3 + 0x82) = 0;
    *(undefined1 *)((int)pvVar3 + 0x83) = 0;
    *(undefined1 *)((int)pvVar3 + 0x84) = 0;
    *(undefined1 *)((int)pvVar3 + 0x85) = 0;
    *(undefined1 *)((int)pvVar3 + 0x86) = 0;
    *(undefined1 *)((int)pvVar3 + 0x87) = 0;
    *(undefined1 *)((int)pvVar3 + 0x88) = 0;
    *(undefined1 *)((int)pvVar3 + 0x89) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8a) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8b) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8d) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8e) = 0;
    *(undefined1 *)((int)pvVar3 + 0x8f) = 0;
    moby->state = '\0';
    return;
  }
  fVar6 = (moby->pos).x;
  uVar20 = (int)fVar6 >> 0x1f;
  fVar8 = 22.0;
  fVar37 = (moby->pos).x;
  if ((int)((uVar20 >> 1 ^ (uint)fVar6) - uVar20) < 0x41b00000) {
    (moby->pos).x = 22.0;
    fVar37 = fVar8;
  }
  if (1001.0 < fVar37) {
    (moby->pos).x = 1001.0;
  }
  fVar6 = (moby->pos).y;
  uVar20 = (int)fVar6 >> 0x1f;
  fVar37 = (moby->pos).y;
  if ((int)((uVar20 >> 1 ^ (uint)fVar6) - uVar20) < 0x41b00000) {
    (moby->pos).y = 22.0;
    fVar37 = fVar8;
  }
  if (1001.0 < fVar37) {
    (moby->pos).y = 1001.0;
  }
  fVar6 = (moby->pos).z;
  uVar20 = (int)fVar6 >> 0x1f;
  fVar37 = (moby->pos).z;
  if ((int)((uVar20 >> 1 ^ (uint)fVar6) - uVar20) < 0x41b00000) {
    (moby->pos).z = 22.0;
    fVar37 = fVar8;
  }
  if (1001.0 < fVar37) {
    (moby->pos).z = 1001.0;
  }
  if (moby->setByGroup == '\x04') {
    iVar13 = *(int *)((int)pvVar3 + 0x110);
    if (iVar13 == 0) {
      uVar15 = Spawn_Moby352(lVar10);
      *(undefined4 *)((int)pvVar3 + 0x110) = uVar15;
    }
    else if (2 < *(byte *)(iVar13 + 0x20)) {
      *(undefined1 *)(iVar13 + 0x20) = 1;
    }
    iVar13 = *(int *)((int)pvVar3 + 0x118);
    if (((iVar13 == -1) || (g_SoundChannels[iVar13].pMoby != moby)) ||
       (g_SoundChannels[iVar13].state == '\0')) {
      *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
      iVar13 = PlayMobySound(6,4,moby);
      *(int *)((int)pvVar3 + 0x118) = iVar13;
    }
  }
  else {
    iVar13 = *(int *)((int)pvVar3 + 0x110);
    if (iVar13 != 0) {
      iVar14 = *(int *)((int)pvVar3 + 0x118);
      if (iVar14 != -1) {
        if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
           (g_SoundChannels[iVar14].state != '\0')) {
          sound_Kill(iVar14);
          iVar13 = *(int *)((int)pvVar3 + 0x110);
        }
        *(undefined4 *)((int)pvVar3 + 0x118) = 0xffffffff;
      }
      if ((iVar13 != 0) && (*(short *)(iVar13 + 0xa6) == 0x160)) {
        bVar1 = *(byte *)(iVar13 + 0x20);
        if ((bVar1 != 0xfe) && (bVar1 != 0xfd)) {
          if (bVar1 < 3) {
            *(undefined1 *)(iVar13 + 0x20) = 3;
          }
          goto LAB_00361e30;
        }
      }
      *(undefined4 *)((int)pvVar3 + 0x110) = 0;
    }
  }
LAB_00361e30:
  if (1 < moby->state) {
    M388_0035bfb0(lVar10,uVar24);
    if ((moby->state != '\b') ||
       (iVar13 = *(int *)((int)pvVar3 + 0xf8), iVar14 = idol::GetAnimDuration(0x78), iVar14 < iVar13
       )) {
      M388_0035b9b0(lVar10,uVar24);
    }
    iVar13 = *(int *)((int)pvVar3 + 0x114);
    if (((iVar13 == -1) || (g_SoundChannels[iVar13].pMoby != moby)) ||
       (g_SoundChannels[iVar13].state == '\0')) {
      *(undefined4 *)((int)pvVar3 + 0x114) = 0xffffffff;
      iVar13 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0x114) = iVar13;
    }
    FUN_005e7d64(&VStack_b0,&DAT_007350a0,lVar10 + 0xc0);
    FUN_005e7f98(0x401c000000000000,&VStack_b0,&VStack_b0);
    FUN_005e81f0(&VStack_b0,lVar10 + 0x10,&VStack_b0);
    VStack_b0.w = 50.0;
    if (*(int *)((int)pvVar3 + 0x120) == -1) {
      uVar15 = CreatePointLight2
                         (50.0,0,0x4008000000000000,dVar27,0x3f847ae140000000,&VStack_b0);
      *(undefined4 *)((int)pvVar3 + 0x120) = uVar15;
    }
    else {
      FUN_005e7e98(&PointLights[*(int *)((int)pvVar3 + 0x120)].pos,&VStack_b0);
    }
  }
  *(undefined1 *)((int)pvVar3 + 0x10f) = 0;
  pMVar5 = g_MobyInstance + *(int *)((int)pvVar3 + 0x134);
  if ((moby->state != '\x06') &&
     (((pMVar5 == (MobyInstance *)0x0 || (pMVar5->oClass != FIGHTER_JET_0045)) ||
      ((uVar2 = pMVar5->state, uVar2 == 0xfd || uVar2 == 0xfe || (uVar2 == '\a')))))) {
    moby->state = '\x06';
    iVar13 = M388_0035b790(lVar10,uVar24,DAT_010c511c + 0x1d,1);
    if (iVar13 == 0) {
      *(undefined2 *)((int)pvVar3 + 0x138) = 0;
    }
    else {
      *(undefined2 *)((int)pvVar3 + 0x138) = 1;
      uVar20 = DAT_010c511c + 1;
      DAT_010c511c = uVar20 + (((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0)) *
                              -4;
    }
  }
  if (*(char *)((int)pvVar3 + 0x13a) == '\0') {
    if (((moby->state != '\x06') && (g_heroState == TURRET_PLANE_UI)) &&
       ((DAT_0096b2d0 != 0 &&
        (((*(short *)(DAT_0096b2d0 + 0xa6) == 0x45 &&
          (iVar13 = *(int *)(*(int *)(DAT_0096b2d0 + 0x78) + 0x120), 0 < iVar13 && iVar13 < 10000))
         && (iVar13 = MB_randInt(2), iVar13 == 0)))))) {
      M388_0035b790(lVar10,uVar24,3,9);
    }
  }
  else if (g_SpeechPlaying.status == 3) {
    music_PlayPreseekedSpeech();
    uVar17 = idol::GetAnimDuration(0x168);
    *(undefined2 *)((int)pvVar3 + 0x144) = uVar17;
    uVar17 = idol::GetAnimDuration(0x3c);
    *(undefined2 *)((int)pvVar3 + 0x146) = uVar17;
    *(undefined1 *)((int)pvVar3 + 0x13a) = 0;
  }
  FastDecTimerS16(uVar24 + 0x144);
  FastDecTimerS16(uVar24 + 0x146);
  if (((1 < moby->state) && (moby->state < 6)) && ((DAT_0096b2ef & 1) != 0)) {
    moby->state = '\t';
  }
  return;
}


// 0x03621ac (0x14 bytes)
void M401_003621ac(void)

{
  DAT_00840a5c = 0x10000;
  return;
}


