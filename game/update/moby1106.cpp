// game/update/moby1106.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 26 functions, 0x1bf888-0x1c909c
#include <math.h>
#include <stdlib.h>
#include "game/update/moby1106.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1045.h"
#include "game/update/moby1046.h"
#include "game/update/moby1049.h"
#include "game/update/moby388.h"
#include "game/update/moby58.h"
#include "game/update/moby751.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x01bf888 (0x14 bytes)
void M1106_001bf888(void)

{
  DAT_00763ed0 = 0x10000;
  return;
}


// 0x01bf8b0 (0x298 bytes)
void M1106_001bf8b0
               (float param_1,undefined8 param_2,int param_3,short param_4,float *param_5,
               short param_6,ulonglong param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  Vec4 local_50;
  
  dVar7 = (double)param_1;
  sVar4 = *(short *)(param_3 + 0x280);
  if (param_5 == (float *)0x0) {
    local_50.x = *(float *)(param_2.piece<4,4>() + 0x10);
    local_50.y = *(float *)(param_2.piece<4,4>() + 0x14);
    local_50.z = *(float *)(param_2.piece<4,4>() + 0x18);
    local_50.w = *(float *)(param_2.piece<4,4>() + 0x1c);
  }
  else {
    local_50.x = *param_5;
    local_50.y = param_5[1];
    local_50.z = param_5[2];
    local_50.w = param_5[3];
  }
  if ((sVar4 == -1) && (0 < param_6)) {
    lVar1 = -param_7;
    uVar5 = ZERO_MASK((-1 - (int)param_7)) & lVar1 - 0x7fffbf80U;
    param_7 = param_7 + uVar5;
    dVar8 = 15.0;
    if (-1.0 - dVar7 < 0.0) {
      dVar8 = dVar7;
    }
    if (dVar7 - -1.0 < 0.0) {
      dVar8 = dVar7;
    }
    dVar7 = dVar8;
    sVar4 = CreatePointLight3(dVar7,0,&local_50,uVar5,lVar1 - 0x7fffbf80U,(int)param_7);
    *(undefined2 *)(param_3 + 0x284) = 0;
    *(short *)(param_3 + 0x280) = sVar4;
    param_8 = param_8 + ((uint)(ZERO_MASK((-1 - param_8))) & -param_8);
  }
  if (sVar4 != -1) {
    iVar2 = (int)((longlong)sVar4 << 5);
    if (((*(short *)(param_3 + 0x282) == param_4) && (param_4 != -1)) &&
       (*(short *)(param_3 + 0x284) != 0)) {
      if (param_6 != -1) {
        uVar3 = (int)((longlong)*(short *)(param_3 + 0x286) << 3) - (int)*(short *)(param_3 + 0x286)
        ;
        iVar6 = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0);
        if (*(short *)(param_3 + 0x284) <= iVar6) {
          *(short *)(param_3 + 0x284) = (short)iVar6;
        }
      }
    }
    else if (param_6 != -1) {
      *(short *)(param_3 + 0x284) = param_6;
      *(short *)(param_3 + 0x286) = param_6;
    }
    iVar6 = (int)param_7;
    if (dVar7 != -1.0) {
      *(float *)((int)&PointLights[0].pos.w + iVar2) = (float)dVar7;
    }
    if (iVar6 != -1) {
      *(int *)(param_3 + 0x288) = iVar6;
      dVar7 = (double)FastIntToDouble(param_7 & 0xff);
      dVar8 = 0.0078125;
      *(float *)((int)&PointLights[0].color.x + iVar2) = (float)(dVar7 * 0.0078125);
      dVar7 = (double)FastIntToDouble(iVar6 >> 8 & 0xff);
      *(float *)((int)&PointLights[0].color.y + iVar2) = (float)(dVar7 * dVar8);
      dVar7 = (double)FastIntToDouble(iVar6 >> 0x10 & 0xff);
      *(float *)((int)&PointLights[0].color.z + iVar2) = (float)(dVar7 * dVar8);
    }
    if (param_8 != -1) {
      *(int *)(param_3 + 0x28c) = param_8;
    }
    if (param_5 != (float *)0x0) {
      *(float *)((int)&PointLights[0].pos.x + iVar2) = *param_5;
      *(float *)((int)&PointLights[0].pos.y + iVar2) = param_5[1];
      *(float *)((int)&PointLights[0].pos.z + iVar2) = param_5[2];
    }
    if (param_4 != -1) {
      *(short *)(param_3 + 0x282) = param_4;
    }
  }
  return;
}


// 0x01bfb58 (0x74 bytes)
void M1106_001bfb58(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x14) - GameCamera.posY;
  fVar2 = *(float *)(param_1 + 0x10) - GameCamera.posX;
  fVar3 = *(float *)(param_1 + 0x18) - GameCamera.posZ;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  GameCamera.shake.time = 0x14;
  if (80.0 - fVar1 < 0.0) {
    fVar1 = 80.0;
  }
  GameCamera.shake.strength = (80.0 - fVar1) * 0.0125 * 0.1;
  return;
}


// 0x01bfbd8 (0x1c0 bytes)
// strings: 001bfccc: 'H4*e`' (raw)

void M1106_001bfbd8(int param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = FastDecTimerS16(param_1 + 0x284);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x280) != -1) {
      uVar2 = (int)((longlong)*(short *)(param_1 + 0x286) << 3) - (int)*(short *)(param_1 + 0x286);
      dVar5 = 1.0;
      iVar1 = ((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0);
      if (iVar1 < *(short *)(param_1 + 0x284)) {
        dVar3 = (double)FastIntToDouble(*(short *)(param_1 + 0x284) - iVar1);
        dVar4 = (double)FastIntToDouble(*(short *)(param_1 + 0x286) - iVar1);
        uVar2 = FastLerpColor
                          ((double)(float)(dVar5 - (double)(float)(dVar3 / dVar4)),0,
                           *(undefined4 *)(param_1 + 0x288));
      }
      else {
        dVar3 = (double)FastIntToDouble();
        dVar4 = (double)FastIntToDouble(iVar1);
        uVar2 = FastLerpColor
                          ((double)(float)(dVar5 - (double)(float)(dVar3 / dVar4)),
                           *(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c));
      }
      iVar1 = (int)((longlong)*(short *)(param_1 + 0x280) << 5);
      dVar5 = (double)FastIntToDouble(uVar2 & 0xff);
      dVar3 = 0.0078125;
      *(float *)((int)&PointLights[0].color.x + iVar1) = (float)(dVar5 * 0.0078125);
      dVar5 = (double)FastIntToDouble((int)uVar2 >> 8 & 0xff);
      *(float *)((int)&PointLights[0].color.y + iVar1) = (float)(dVar5 * dVar3);
      dVar5 = (double)FastIntToDouble((int)uVar2 >> 0x10 & 0xff);
      *(float *)((int)&PointLights[0].color.z + iVar1) = (float)(dVar5 * dVar3);
    }
  }
  else if (*(short *)(param_1 + 0x280) != -1) {
    DeletePointLight();
    *(undefined2 *)(param_1 + 0x280) = 0xffff;
    *(undefined2 *)(param_1 + 0x282) = 0xffff;
  }
  return;
}


// 0x01bfdb8 (0x2b0 bytes)
// strings: 001bfd98: 'A+33_q' (raw)

u8 M1106_001bfdb8(undefined8 param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  float local_60 [4];
  GPiece<40> local_50;
  
  iVar3 = FastDecTimerS32(param_2 + 0x160);
  if (iVar3 != 0) {
    iVar3 = (int)param_2;
    GetBonePosition(param_1,*(uint *)(iVar3 + 0x164) & 1,local_60);
    M1049_001a1f28(local_60,local_50,param_1);
    PlayMobySound(0,0,(MobyInstance *)param_1);
    M1106_001bf8b0(10.0,param_1,iVar3,0,local_60,(short)(int)(animationSpeed * 30.5),
                   0xffffffff800060ff,0);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(0x18,0x1bfd98);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    iVar4 = *(int *)(iVar3 + 0x164) + 1;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
    *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
    *(int *)(iVar3 + 0x164) = iVar4;
    if (0x14 < iVar4) {
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = loadVectorLeftIndexed(0x1c,0x1bfd98);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar5 = vectorSplatHalfWord(auVar5,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar5,0x198,param_2);
      *(undefined2 *)(iVar3 + 0x198) = uVar1;
      auVar5 = loadVectorLeftIndexed(0x10,0x1bfd98);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar5 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar7);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
      *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
      return '\x01';
    }
  }
  return ((MobyInstance *)param_1)->state;
}


// 0x01c00b8 (0x948 bytes)
void M1106_001c00b8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  GPiece<16> local_1b0;
  float local_1a0 [4];
  undefined4 local_190 [4];
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<168> local_160;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar8 = (double)FastIntToDouble(worldUpdateTime);
  dVar10 = 0.10000000149011612;
  fVar14 = MB_WrapRot((float)(dVar8 * 0.09090909361839294));
  fVar14 = fVar14 + 1.5707963;
  fVar4 = 3.1415925 - fVar14;
  if (fVar14 - (3.1415925 - fVar14) < 0.0) {
    fVar4 = fVar14;
  }
  fVar5 = -3.1415925 - fVar14;
  if ((-3.1415925 - fVar14) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar14 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar2 * fVar14;
  MB_WrapRot
            ((float)(dVar8 * dVar10 +
                    (double)((fVar2 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar14 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                            1.5707964)));
  GetBonePosition(param_1,2,local_1a0);
  dVar8 = 0.0;
  iVar6 = CollLine(local_1a0,local_1b0,2,param_1,0);
  fVar5 = g_CollOutput.ip.z;
  fVar4 = g_CollOutput.ip.y;
  fVar14 = g_CollOutput.ip.x;
  if (iVar6 != 0) {
    uVar7 = rand();
    dVar10 = 0.5;
    fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 1) + 0x2d) + 0.5);
    uVar7 = rand();
    fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 7) + 0x37) + dVar10);
    uVar7 = rand();
    dVar8 = 1.0;
    SpawnPart_58
              (0x3ff0000000000000,0x3ff0000000000000,local_1b0,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff
               ,1,(int)(animationSpeed *
                       (float)((double)(longlong)(int)((uVar7 & 3) + 0xd) + dVar10)) & 0xff,param_1)
    ;
    if (*(int *)(iVar1 + 0x15c) != 0) {
      dVar13 = 45.5;
      iVar6 = 0;
      dVar12 = 55.5;
      dVar11 = 13.5;
      do {
        CollLine(local_180,local_170,2,param_1,0);
        if (iVar6 == 2) {
          uVar7 = rand();
          fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 1) + 0x2d) + dVar10);
          uVar7 = rand();
          fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar7 & 7) + 0x37) + dVar10);
          uVar7 = rand();
          SpawnPart_58
                    (dVar8,dVar8,local_190,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff,1,
                     (int)(animationSpeed *
                          (float)((double)(longlong)(int)((uVar7 & 3) + 0xd) + dVar10)) & 0xff,
                     param_1);
        }
        else {
          dVar9 = (double)animationSpeed;
          SpawnPart_58
                    (dVar8,dVar8,local_190,1,(int)(dVar9 * dVar13) & 0xff,
                     (int)(dVar9 * dVar12) & 0xff,1,(int)(dVar9 * dVar11) & 0xff,param_1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    *(float *)(iVar1 + 0x150) = fVar14;
    *(float *)(iVar1 + 0x154) = fVar4;
    *(float *)(iVar1 + 0x158) = fVar5;
  }
  *(float *)(iVar1 + 0x15c) = (float)dVar8;
  GetEffectTex(0x3b);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  FastDrawQuad(local_160,0,1,EffectTexHeaders,9);
  return;
}


// 0x01c0a10 (0x30c bytes)
void M1106_001c0a10(undefined4 param_1)

{
  float local_100 [4];
  GPiece<152> local_f0;
  
  GetBonePosition(param_1,4,local_100);
  GetEffectTex(0x3c);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  FastDrawQuad(local_f0,0,1,EffectTexHeaders,9);
  return;
}


// 0x01c0d58 (0x660 bytes)
void M1106_001c0d58
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               int param_6,int param_7)

{
  byte bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double extraout_f1;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float ang1;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  GPiece<32> local_1c0;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  GPiece<8> auStack_130;
  ulonglong local_128;
  double local_120;
  double local_118;
  double local_110;
  float local_108;
  float local_104;
  ulonglong local_100;
  double local_f8;
  double local_f0;
  float local_e8;
  double local_e0;
  float local_d8;
  float local_d4;
  
  local_e8 = (float)param_3;
  bVar1 = *(byte *)(*(int *)(param_6 + 0x78) + 0x1c6);
  uVar9 = (ulonglong)bVar1 << 0x18 | (ulonglong)bVar1 << 0x10 | (ulonglong)CONCAT11(bVar1,bVar1);
  local_128 = ZEXT48(&GSmem);
  local_100 = uVar9;
  local_f8 = param_4;
  uVar3 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  SetGSReg(0x21,uVar3);
  uVar3 = GetEffectTex(0x3c);
  uVar4 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  uVar5 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  uVar6 = idol_draw::PackCmd(1,2,2,0,0xa0);
  dVar10 = (double)FastIntToDouble(0);
  uVar7 = FastDoubleToInt((double)(float)(dVar10 * param_4));
  local_180 = (uint)((uVar7 & 0xffffffff) << 0x18) | 0x404040 | (uint)uVar9;
  local_17c = local_180;
  local_178 = local_180;
  local_174 = local_180;
  local_150 = uVar5;
  local_148 = uVar3;
  local_140 = uVar4;
  local_138 = uVar6;
  dVar10 = (double)FastIntToDouble(param_7 + worldUpdateTime);
  local_104 = (float)(dVar10 * param_1);
  dVar10 = (double)local_104;
  uVar3 = GetBonePosition(param_6,9,&local_1d0);
  local_118 = (double)local_1d0;
  local_d4 = local_1cc;
  local_110 = (double)local_1c4;
  local_108 = local_1c8 - (float)(param_2 - 0.800000011920929);
  uVar3 = FastFrac((double)(float)(dVar10 * -0.009999999776482582),uVar3,auStack_130);
  local_170 = (float)extraout_f1;
  local_160 = (float)extraout_f1;
  dVar13 = 1.0;
  local_168 = (float)(extraout_f1 + 1.0);
  local_158 = local_168;
  dVar10 = (double)FastFrac((double)(float)(dVar10 * -0.019999999552965164),uVar3,
                                      auStack_130);
  local_15c = (float)(dVar10 + dVar13);
  local_16c = (float)dVar10;
  local_164 = (float)dVar10;
  local_e0 = (double)(float)(param_5 - param_4);
  dVar10 = 0.0625;
  local_d8 = -2.7488937;
  local_120 = 3.1415927410125732;
  local_154 = local_15c;
  do {
    local_19c = local_d4;
    local_1a0 = (float)local_118;
    local_198 = local_108;
    local_194 = (float)local_110;
    local_190 = (float)local_118;
    local_18c = local_d4;
    local_188 = local_108;
    local_184 = (float)local_110;
    dVar13 = local_f8;
    dVar11 = (double)FastIntToDouble(0);
    uVar7 = FastDoubleToInt((double)(float)(dVar11 * dVar13));
    uVar9 = local_100 | 0x404040;
    uVar7 = (uVar7 & 0xff) << 0x18 | uVar9;
    local_178 = (uint)uVar7;
    dVar11 = (double)(float)((double)local_e8 * dVar10 + -1.5707963705062866);
    local_f0 = (double)(float)((double)local_e8 - 1.5707963705062866);
    local_174 = local_178;
    if (dVar11 <= local_f0) {
      dVar15 = 0.39269909262657166;
      dVar16 = 0.0;
      dVar14 = (double)(local_104 * 0.02 + local_d8);
      dVar17 = 0.6000000238418579;
      dVar18 = 0.375;
      uVar8 = uVar7;
      do {
        dVar13 = (double)(float)(local_e0 * dVar10 + dVar13);
        local_180 = (uint)uVar7;
        local_17c = (uint)uVar8;
        dVar12 = (double)FastIntToDouble(0);
        uVar7 = FastDoubleToInt((double)(float)(dVar12 * dVar13));
        local_178 = (uint)((uVar7 & 0xffffffff) << 0x18) | (uint)uVar9;
        local_174 = local_178;
        ang1 = MB_WrapRot((float)dVar14);
        dVar12 = (double)ang1;
        MB_SphericalToVector((float)param_2,ang1,(float)dVar11,&local_1a0);
        dVar12 = (double)FastWrapRot((float)dVar12,(float)dVar15);
        MB_SphericalToVector((float)param_2,(float)dVar12,(float)dVar11,&local_190);
        dVar12 = (double)local_188 - dVar18;
        if (dVar16 - dVar11 < 0.0) {
          dVar12 = (double)local_188 + dVar17;
        }
        local_190 = local_190 + local_1d0;
        dVar2 = (double)local_198 - dVar18;
        if (dVar16 - dVar11 < 0.0) {
          dVar2 = (double)local_198 + dVar17;
        }
        local_1a0 = local_1a0 + local_1d0;
        local_19c = local_19c + local_1cc;
        local_180 = local_180 >> 0x18 |
                    local_180 >> 8 & 0xff00 | local_180 << 0x18 | (local_180 & 0xff00) << 8;
        local_18c = local_18c + local_1cc;
        local_17c = local_17c >> 0x18 |
                    local_17c >> 8 & 0xff00 | local_17c << 0x18 | (local_17c & 0xff00) << 8;
        local_188 = (float)dVar12 + local_1c8;
        local_178 = local_178 >> 0x18 |
                    local_178 >> 8 & 0xff00 | local_178 << 0x18 | (local_178 & 0xff00) << 8;
        local_198 = (float)dVar2 + local_1c8;
        local_174 = local_174 >> 0x18 |
                    local_174 >> 8 & 0xff00 | local_174 << 0x18 | (local_174 & 0xff00) << 8;
        FastDrawQuad(local_1c0,0,1,EffectTexHeaders,9);
        dVar11 = (double)(float)((double)local_e8 * dVar10 + dVar11);
        local_180 = local_180 >> 0x18 |
                    local_180 >> 8 & 0xff00 | local_180 << 0x18 | (local_180 & 0xff00) << 8;
        local_17c = local_17c >> 0x18 |
                    local_17c >> 8 & 0xff00 | local_17c << 0x18 | (local_17c & 0xff00) << 8;
        uVar7 = (ulonglong)(local_178 >> 0x18) |
                (ulonglong)(local_178 >> 8) & 0xff00 |
                ((ulonglong)local_178 & 0xff) << 0x18 | ((ulonglong)local_178 & 0xff00) << 8;
        uVar8 = (ulonglong)(local_174 >> 0x18) |
                (ulonglong)(local_174 >> 8) & 0xff00 |
                ((ulonglong)local_174 & 0xff) << 0x18 | ((ulonglong)local_174 & 0xff00) << 8;
        local_178 = (uint)uVar7;
        local_174 = (uint)uVar8;
      } while (dVar11 <= local_f0);
    }
    local_d8 = local_d8 + 0.3926991;
  } while ((double)local_d8 < local_120);
  uVar3 = VU1_addGSregister(*(int *)((int)local_128 + 8) >> 0xd,1,0);
  SetGSReg(0x21,uVar3);
  return;
}


// 0x01c13d0 (0xa8 bytes)
void M1106_001c13d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x78) + 0x1c8);
  dVar3 = (double)*(float *)(*(int *)(param_1 + 0x78) + 0x1c8);
  uVar2 = (int)uVar1 >> 0x1f;
  dVar4 = 3.1415927410125732;
  if (((int)((uVar2 >> 1 ^ uVar1) - uVar2) < 0x3f4ccccd) &&
     (dVar4 = (double)((float)(dVar3 * 3.0434179306030273) * 1.25 + 0.09817477),
     3.1415927410125732 < dVar4)) {
    dVar4 = 3.1415927410125732;
  }
  M1106_001c0d58(0x3ff0000000000000,0x4017333340000000,dVar4,0x3ff0000000000000,dVar3,param_1,0);
  return;
}


// 0x01c14d0 (0x560 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M1106_001c14d0
               (double param_1,double param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6,uint param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar26;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  float fVar39;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar9 = (ulonglong *)(uVar10 - 0x230);
  *puVar9 = uVar10;
  puVar9[0x48] = in_LR;
  puVar9[0x38] = in_f18;
  puVar9[0x39] = in_f19;
  puVar9[0x3a] = in_f20;
  puVar9[0x3b] = in_f21;
  puVar9[0x3c] = in_f22;
  puVar9[0x3d] = in_f23;
  puVar9[0x3e] = in_f24;
  puVar9[0x3f] = in_f25;
  puVar9[0x40] = in_f26;
  puVar9[0x41] = in_f27;
  puVar9[0x42] = in_f28;
  puVar9[0x43] = in_f29;
  puVar9[0x44] = in_f30;
  puVar9[0x45] = in_f31;
  puVar9[0x37] = unaff_r31;
  puVar9[0x35] = unaff_r29;
  puVar9[0x36] = unaff_r30;
  uVar7 = *(uint *)(param_3 + 0x78);
  param_5 = param_5 + worldUpdateTime;
  puVar9[0x34] = unaff_r28;
  puVar9[0x33] = unaff_r27;
  puVar9[0x32] = unaff_r26;
  dVar15 = (double)FastIntToDouble(param_5);
  dVar15 = (double)(float)(dVar15 * param_2);
  if (*(int *)(uVar7 + 0x164) == 4) {
    dVar16 = (double)FastIntToDouble((int)param_7 >> 0x18);
    dVar17 = (double)FastIntToDouble(*(undefined4 *)(uVar7 + 0x160));
    dVar16 = (double)(float)(dVar16 * (double)(float)(dVar17 / (double)(longlong)
                                                                       (animationSpeed * 20.5)));
    if (dVar16 - 0.0 < 0.0) {
      dVar16 = 0.0;
    }
    uVar11 = FastDoubleToInt(dVar16);
    param_7 = (uint)((uVar11 & 0xff) << 0x18) | param_7 & 0xffffff;
  }
  else if (4 < *(int *)(uVar7 + 0x164)) {
    return;
  }
  uVar11 = GetEffectTex(0x3d);
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  uVar13 = SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  uVar14 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar9[0x1d] = uVar11;
  *(undefined4 *)(puVar9 + 0x18) = 0;
  *(undefined4 *)(puVar9 + 0x1a) = 0;
  *(undefined4 *)(puVar9 + 0x19) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x1b) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0xc4) = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = 0;
  *(undefined4 *)((int)puVar9 + 0xd4) = 0x3f000000;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0x3f000000;
  uVar2 = *(undefined4 *)(uVar7 + 0x110);
  puVar9[0x1e] = uVar12;
  puVar9[0x1c] = uVar13;
  *(undefined4 *)(puVar9 + 0x10) = uVar2;
  puVar9[0x1f] = uVar14;
  *(undefined4 *)((int)puVar9 + 0x84) = *(undefined4 *)(uVar7 + 0x114);
  *(undefined4 *)(puVar9 + 0x11) = *(undefined4 *)(uVar7 + 0x118);
  uVar2 = *(undefined4 *)(uVar7 + 0x11c);
  *(uint *)((int)puVar9 + 0xbc) = param_7;
  *(undefined4 *)((int)puVar9 + 0x8c) = uVar2;
  uVar2 = *(undefined4 *)(uVar7 + 0x140);
  *(uint *)(puVar9 + 0x17) = param_7;
  *(undefined4 *)(puVar9 + 0x14) = uVar2;
  *(uint *)((int)puVar9 + 0xb4) = param_7;
  uVar2 = *(undefined4 *)(uVar7 + 0x144);
  *(uint *)(puVar9 + 0x16) = param_7;
  *(undefined4 *)((int)puVar9 + 0xa4) = uVar2;
  *(undefined4 *)(puVar9 + 0x15) = *(undefined4 *)(uVar7 + 0x148);
  auVar36 = loadVectorLeftIndexed(0x14c,(ulonglong)uVar7);
  auVar38 = loadVectorRightIndexed(0x15c,(ulonglong)uVar7);
  uVar2 = *(undefined4 *)(uVar7 + 0x14c);
  auVar37 = (auVar36 | auVar38) >> 0x60 & (GPiece<16>)0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xac,
                     uVar10 - 0x230);
  *(undefined4 *)((int)puVar9 + 0xac) = uVar8;
  auVar37 = vectorPermute(*(undefined1 (*) [16])(puVar9 + 0x14),auVar36 | auVar38,_DAT_001c1490);
  *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)((int)puVar9 + 0x7c);
  *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(puVar9 + 0xf);
  *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)((int)puVar9 + 0x74);
  *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(puVar9 + 0xe);
  *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)((int)puVar9 + 0x8c);
  *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(puVar9 + 0x11);
  *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)((int)puVar9 + 0x84);
  *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(puVar9 + 0x10);
  *(undefined4 *)((int)puVar9 + 300) = *(undefined4 *)((int)puVar9 + 0x9c);
  *(undefined4 *)(puVar9 + 0x25) = *(undefined4 *)(puVar9 + 0x13);
  *(undefined4 *)((int)puVar9 + 0x124) = *(undefined4 *)((int)puVar9 + 0x94);
  *(undefined4 *)(puVar9 + 0x24) = *(undefined4 *)(puVar9 + 0x12);
  *(undefined1 (*) [16])(puVar9 + 0x26) = auVar37;
  *(undefined4 *)((int)puVar9 + 0x14c) = *(undefined4 *)((int)puVar9 + 0xbc);
  *(undefined4 *)(puVar9 + 0x29) = *(undefined4 *)(puVar9 + 0x17);
  *(undefined4 *)((int)puVar9 + 0x144) = *(undefined4 *)((int)puVar9 + 0xb4);
  *(undefined4 *)(puVar9 + 0x28) = *(undefined4 *)(puVar9 + 0x16);
  *(undefined4 *)((int)puVar9 + 0x15c) = *(undefined4 *)((int)puVar9 + 0xcc);
  *(undefined4 *)(puVar9 + 0x2b) = *(undefined4 *)(puVar9 + 0x19);
  *(undefined4 *)((int)puVar9 + 0x154) = *(undefined4 *)((int)puVar9 + 0xc4);
  *(undefined4 *)(puVar9 + 0x2a) = *(undefined4 *)(puVar9 + 0x18);
  *(undefined4 *)((int)puVar9 + 0x16c) = *(undefined4 *)((int)puVar9 + 0xdc);
  *(undefined4 *)(puVar9 + 0x2d) = *(undefined4 *)(puVar9 + 0x1b);
  *(undefined4 *)((int)puVar9 + 0x164) = *(undefined4 *)((int)puVar9 + 0xd4);
  *(undefined4 *)(puVar9 + 0x2c) = *(undefined4 *)(puVar9 + 0x1a);
  *(undefined4 *)((int)puVar9 + 0x17c) = *(undefined4 *)((int)puVar9 + 0xec);
  *(undefined4 *)(puVar9 + 0x2f) = *(undefined4 *)(puVar9 + 0x1d);
  *(undefined4 *)((int)puVar9 + 0x174) = *(undefined4 *)((int)puVar9 + 0xe4);
  *(undefined4 *)(puVar9 + 0x2e) = *(undefined4 *)(puVar9 + 0x1c);
  *(undefined4 *)((int)puVar9 + 0x18c) = *(undefined4 *)((int)puVar9 + 0xfc);
  *(undefined4 *)(puVar9 + 0x31) = *(undefined4 *)(puVar9 + 0x1f);
  *(undefined4 *)((int)puVar9 + 0x184) = *(undefined4 *)((int)puVar9 + 0xf4);
  *(undefined4 *)(puVar9 + 0x30) = *(undefined4 *)(puVar9 + 0x1e);
  *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(uVar7 + 0x120);
  *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)(uVar7 + 0x124);
  *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(uVar7 + 0x128);
  *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)(uVar7 + 300);
  *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(uVar7 + 0x120);
  *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)(uVar7 + 0x124);
  *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(uVar7 + 0x128);
  *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)(uVar7 + 300);
  dVar17 = -3.1415927410125732;
  dVar26 = 3.665191650390625;
  dVar27 = 0.019999999552965164;
  dVar28 = 1.570796251296997;
  dVar29 = 3.141592502593994;
  dVar30 = -3.141592502593994;
  dVar31 = -0.16666656732559204;
  dVar32 = 0.008333025500178337;
  dVar33 = -0.0001980741071747616;
  dVar34 = 2.601886990305502e-06;
  dVar35 = 0.5235987901687622;
  dVar16 = dVar17;
  do {
    *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar9 + 0x10);
    *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)((int)puVar9 + 0x84);
    *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x11);
    *(undefined4 *)((int)puVar9 + 0x7c) = *(undefined4 *)((int)puVar9 + 0x8c);
    *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0xa4);
    *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x15);
    *(undefined4 *)((int)puVar9 + 0x9c) = uVar2;
    fVar39 = MB_WrapRot((float)(dVar27 * dVar15 + dVar17));
    uVar8 = EffectTexHeaders;
    dVar21 = (double)fVar39;
    dVar20 = (double)(float)(dVar21 + dVar28);
    dVar18 = (double)(float)(dVar29 - dVar21);
    if (dVar21 - (double)(float)(dVar29 - dVar21) < 0.0) {
      dVar18 = dVar21;
    }
    dVar22 = (double)(float)(dVar29 - dVar20);
    if (dVar20 - (double)(float)(dVar29 - dVar20) < 0.0) {
      dVar22 = dVar20;
    }
    dVar19 = (double)(float)(dVar30 - dVar21);
    if ((double)(float)(dVar30 - dVar21) - dVar18 < 0.0) {
      dVar19 = dVar18;
    }
    dVar18 = (double)(float)(dVar30 - dVar20);
    if ((double)(float)(dVar30 - dVar20) - dVar22 < 0.0) {
      dVar18 = dVar22;
    }
    dVar21 = (double)(float)(dVar19 * dVar19);
    dVar20 = (double)(float)(dVar18 * dVar18);
    dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar19));
    dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
    dVar23 = (double)(float)(dVar21 * dVar24);
    fVar3 = *(float *)(param_3 + 0xe4);
    dVar25 = (double)(float)(dVar20 * dVar22);
    fVar4 = *(float *)(param_3 + 0xd4);
    fVar5 = *(float *)(param_3 + 0xe8);
    fVar39 = (float)((double)(float)((double)(float)(dVar21 * dVar23) * dVar34 +
                                    (double)(float)(dVar23 * dVar33 +
                                                   (double)(float)(dVar24 * dVar32 +
                                                                  (double)(float)((double)(float)(
                                                  dVar21 * dVar19) * dVar31 + dVar19)))) * param_1);
    fVar1 = (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar34 +
                                   (double)(float)(dVar25 * dVar33 +
                                                  (double)(float)(dVar22 * dVar32 +
                                                                 (double)(float)((double)(float)(
                                                  dVar20 * dVar18) * dVar31 + dVar18)))) * param_1);
    fVar6 = *(float *)(param_3 + 0xd8);
    *(float *)(puVar9 + 0x14) =
         *(float *)(param_3 + 0xd0) * fVar1 +
         *(float *)(param_3 + 0xe0) * fVar39 + *(float *)(uVar7 + 0x140);
    *(float *)((int)puVar9 + 0xa4) = fVar4 * fVar1 + fVar3 * fVar39 + *(float *)(uVar7 + 0x144);
    *(float *)(puVar9 + 0x15) = fVar6 * fVar1 + fVar5 * fVar39 + *(float *)(uVar7 + 0x148);
    uVar2 = *(undefined4 *)(uVar7 + 0x14c);
    *(undefined4 *)((int)puVar9 + 0xac) = uVar2;
    if (dVar17 != dVar16) {
      FastDrawQuad(uVar10 - 0x1c0,0,1,uVar8,9);
      *(undefined4 *)(puVar9 + 0x24) = *(undefined4 *)(puVar9 + 0x12);
      *(undefined4 *)((int)puVar9 + 0x124) = *(undefined4 *)((int)puVar9 + 0x94);
      *(undefined4 *)(puVar9 + 0x25) = *(undefined4 *)(puVar9 + 0x13);
      *(undefined4 *)((int)puVar9 + 300) = *(undefined4 *)((int)puVar9 + 0x9c);
      *(undefined4 *)(puVar9 + 0x26) = *(undefined4 *)(puVar9 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x134) = *(undefined4 *)((int)puVar9 + 0xa4);
      *(undefined4 *)(puVar9 + 0x27) = *(undefined4 *)(puVar9 + 0x15);
      uVar2 = EffectTexHeaders;
      *(undefined4 *)((int)puVar9 + 0x13c) = *(undefined4 *)((int)puVar9 + 0xac);
      FastDrawQuad(uVar10 - 0x130,0,0,uVar2,9);
      uVar2 = *(undefined4 *)((int)puVar9 + 0xac);
    }
    dVar17 = (double)(float)(dVar17 + dVar35);
  } while (dVar17 < dVar26);
                    /* WARNING: Read-only address (ram,0x001c1490) is written */
  return;
}


// 0x01c1a58 (0x2d0 bytes)
// inlined: FastRSqrt @0x1c1c38
// strings: 001c1a3c: '?333@' (raw)

void M1106_001c1a58
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_70;
  GPiece<56> auStack_60;
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar5 + 0x134);
  fVar2 = *(float *)(iVar5 + 0x130);
  fVar3 = *(float *)(iVar5 + 0x138);
  dVar14 = 0.0;
  fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar6 == 0.0) {
    uVar4 = *(undefined4 *)(iVar5 + 0x13c);
    dVar10 = dVar14;
    dVar12 = dVar14;
    dVar13 = dVar14;
  }
  else {
    fVar6 = (*(float *)(iVar5 + 0x16c) * 0.8) / fVar6;
    uVar4 = *(undefined4 *)(iVar5 + 0x13c);
    dVar10 = (double)(fVar2 * fVar6);
    dVar13 = (double)(fVar1 * fVar6);
    dVar12 = (double)(fVar3 * fVar6);
  }
  *(undefined4 *)(iVar5 + 0x14c) = uVar4;
  *(undefined4 *)(iVar5 + 300) = uVar4;
  *(float *)(iVar5 + 0x140) = (float)(dVar10 + (double)*(float *)(iVar5 + 0x110));
  *(float *)(iVar5 + 0x144) = (float)(dVar13 + (double)*(float *)(iVar5 + 0x114));
  *(float *)(iVar5 + 0x148) = (float)(dVar12 + (double)*(float *)(iVar5 + 0x118));
  fVar1 = SQRT((float)(dVar12 * dVar12 +
                      (double)(float)(dVar10 * dVar10 + (double)(float)(dVar13 * dVar13))));
  dVar8 = (double)(*(float *)(iVar5 + 0x16c) / fVar1);
  dVar9 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar9 = (double)(float)(dVar10 * dVar8);
  }
  dVar11 = dVar14;
  if (0.0 - fVar1 < 0.0) {
    dVar11 = (double)(float)(dVar13 * dVar8);
  }
  if (0.0 - fVar1 < 0.0) {
    dVar14 = (double)(float)(dVar12 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = (double)(float)(dVar10 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar11 = (double)(float)(dVar13 * dVar8);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar14 = (double)(float)(dVar12 * dVar8);
  }
  *(float *)(iVar5 + 0x120) = (float)(dVar9 + (double)*(float *)(iVar5 + 0x110));
  *(float *)(iVar5 + 0x124) = (float)(dVar11 + (double)*(float *)(iVar5 + 0x114));
  *(float *)(iVar5 + 0x128) = (float)(dVar14 + (double)*(float *)(iVar5 + 0x118));
  M1106_001c14d0(0x3ff0000000000000,0x3ff0000000000000,param_1,&DAT_001c1a30,0,param_4,0x20000080);
  M1106_001c14d0(0x3fe6666660000000,0x4000000000000000,param_1);
  M1106_001c14d0(0x3fd99999a0000000,0x4008000000000000,param_1);
  SetCollDamIn(0x3ff0008100000000,auStack_60,param_1,0x30000,&DAT_001c1a30,local_70);
  iVar7 = CollLine(iVar5 + 0x110,iVar5 + 0x120,0,param_1,auStack_60);
  if (iVar7 == 0) {
    CollMobySphere(0x3fe0000000000000,iVar5 + 0x120,&DAT_001c1a30,0,param_1,auStack_60);
  }
  return;
}


// 0x01c1d28 (0xc4 bytes)
ulonglong M1106_001c1d28(undefined8 param_1,int param_2,int *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  
  bVar1 = *(int *)(param_2 + 0x170) != -1;
  if (bVar1) {
    *param_3 = *(int *)(param_2 + 0x170);
  }
  uVar3 = (ulonglong)bVar1;
  if (*(int *)(param_2 + 0x174) != -1) {
    uVar3 = uVar3 + 1;
    param_3[bVar1] = *(int *)(param_2 + 0x174);
  }
  if (*(int *)(param_2 + 0x178) != -1) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x178);
  }
  bVar4 = *(byte *)(param_2 + 0x19c);
  if (((bVar4 & 1) == 0) && (*(int *)(param_2 + 0x17c) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x17c);
    bVar4 = *(byte *)(param_2 + 0x19c);
  }
  if (((bVar4 & 2) == 0) && (*(int *)(param_2 + 0x180) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x180);
    bVar4 = *(byte *)(param_2 + 0x19c);
  }
  if (((bVar4 & 4) == 0) && (*(int *)(param_2 + 0x184) != -1)) {
    lVar2 = uVar3 << 2;
    uVar3 = uVar3 + 1;
    *(int *)((int)param_3 + (int)lVar2) = *(int *)(param_2 + 0x184);
  }
  return uVar3;
}


// 0x01c1e18 (0x668 bytes)
void M1106_001c1e18(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  u8 uVar2;
  float fVar3;
  short sVar4;
  MobyModeBit MVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  ulonglong uVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x120;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x26] = in_LR;
  puVar10[0x21] = unaff_r29;
  lVar12 = uVar14 - 0x40;
  puVar13 = (undefined4 *)lVar12;
  puVar13[3] = in_vr31_32_3;
  puVar13[2] = in_vr31_32_2;
  puVar13[1] = in_vr31_32_1;
  *puVar13 = in_vr31_32_0;
  puVar10[0x22] = unaff_r30;
  uVar2 = param_1->state;
  puVar10[0x23] = unaff_r31;
  puVar10[0x20] = unaff_r28;
  puVar10[0x1f] = unaff_r27;
  iVar11 = (int)param_2;
  if (uVar2 == '\n') goto LAB_001c23ec;
  uVar15 = MB_damage(param_1,0x330000,0);
  iVar17 = (int)uVar15;
  MB_HandleDamage(param_1,iVar17,param_3,0,puVar10 + 0xe,0,0,4);
  if (iVar17 != 0) {
    if (0 < *(int *)(iVar17 + 0x2c)) {
      sVar4 = *(short *)(iVar17 + 0x2a);
      in_cr6 = (sVar4 == 0xba) << 1;
      if (sVar4 == 0x131) {
        *(undefined4 *)(iVar17 + 0x2c) = 0x3e4ccccd;
      }
      else if (sVar4 == 0xba) {
        *(undefined4 *)(iVar17 + 0x2c) = 0x3f800000;
      }
      else if (sVar4 == 0x79) {
        *(undefined4 *)(iVar17 + 0x2c) = 0x3f800000;
      }
    }
    if (((*(int *)(iVar17 + 0x20) == 0) ||
        (sVar4 = *(short *)(*(int *)(iVar17 + 0x20) + 0xa6), sVar4 == 0x419)) || (sVar4 == 0x416)) {
      *(undefined4 *)(puVar10 + 0xe) = 1;
    }
  }
  if ((*(int *)(iVar11 + 0x1c8) < 1) && (*(char *)(iVar11 + 0x1c5) == '\0')) {
    if (1 < *(int *)(puVar10 + 0xe)) {
      auVar20 = loadVectorLeftIndexed(0x2c,uVar15);
      auVar30 = loadVectorLeftIndexed(lVar12,param_3);
      auVar21 = loadVectorRightIndexed(0x3c,uVar15);
      auVar22 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      pfVar18 = (float *)param_3;
      fVar3 = *pfVar18;
      auVar22 = (auVar20 | auVar21) >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar31,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        MVar5 = param_1->modeBits;
        *pfVar18 = 0.0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar11 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if (param_1->animationId != '\x02') {
          uVar15 = MB_randRange(10,0xd);
          MB_SetAnimation(param_1,2,0,uVar15);
        }
        if (g_heroState == UNK_78) {
          TransitionMovement(0,1);
        }
        if (*(int *)(iVar11 + 0x1f0) != -1) {
          FUN_004d407c(param_1,1);
          MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
          SetLevelFlag(param_1->levelFlagIdx);
          SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)(iVar11 + 0x1f0)].pos,
                     (Vec4 *)&Cuboids[*(int *)(iVar11 + 0x1f0)].rot);
        }
        param_1->state = '\n';
      }
      else {
        auVar22 = ZEXT416(0xffffffff);
        auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = ZEXT416(0xfffffff0);
        auVar29 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = loadVectorLeftIndexed(4,param_3);
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = vectorShiftRightAlgebraicWord(auVar22,auVar29);
        puVar10[0xf] = (longlong)(int)*(short *)(pfVar18 + 1);
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar22 = loadVectorLeftIndexed(0xc,0x1c1dec);
        auVar28 = loadVectorLeftIndexed(lVar12,0x1c1dec);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar25 = vectorConvertFromSignedFixedPointWord(auVar23,0);
        auVar22 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar23 = vectorMultiplyAddFloatingPoint(auVar20 | auVar21,auVar27,auVar24);
        auVar20 = loadVectorLeftIndexed(4,0x1c1dec);
        uVar19 = puVar10[0xf];
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar21 = loadVectorLeftIndexed(0x10,0x1c1dec);
        auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                             auVar26);
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar26 = loadVectorLeftIndexed(8,0x1c1dec);
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar27);
        auVar24 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar23 = vectorConditionalSelect(auVar23,auVar27,auVar22);
        auVar22 = ZEXT416(0xffffffff);
        auVar25 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar26 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar24);
        auVar20 = (SPLAT(auVar21) ^ auVar23) >>
                  0x60 & (GPiece<16>)0xffffffff;
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                             auVar25);
        uVar9 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x1fc,
                           param_2);
        *(undefined4 *)(iVar11 + 0x1fcU & 0xfffffffc) = uVar9;
        FastFrac((double)(fVar3 / ((float)(longlong)uVar19 * 0.16666667)),0x1fc,
                           uVar14 - 0xac);
        auVar22 = ZEXT416(0xffffffff);
        auVar23 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar22 = loadVectorLeftIndexed(0x24,param_2);
        auVar21 = loadVectorLeftIndexed(0x14,0x1c1dec);
        auVar20 = vectorShiftRightAlgebraicWord(auVar22,auVar29);
        auVar22 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
        auVar20 = loadVectorLeftIndexed(0x18,0x1c1dec);
        auVar24 = loadVectorLeftIndexed(0x74,lVar1);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar3 = *pfVar18;
        auVar21 = vectorSubtractFloatingPoint
                            (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
        auVar22 = ZEXT416(0xffffffff);
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar21);
        auVar22 = vectorConditionalSelect
                            (auVar24,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar22);
        auVar22 = vectorMultiplyAddFloatingPoint(auVar28,auVar22,auVar25);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x74,lVar1)
        ;
        *(undefined4 *)((int)puVar10 + 0x74) = uVar9;
        *pfVar18 = fVar3 - *(float *)(iVar17 + 0x2c);
        *(undefined1 *)(iVar11 + 0x67) = 0xfa;
        auVar22 = loadVectorLeftIndexed(0x1c,0x1c1dec);
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = vectorMultiplyAddFloatingPoint
                            (auVar20,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                             auVar23);
        auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
        auVar22 = vectorSplatHalfWord(auVar22,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar22,0x26,param_2);
        *(undefined2 *)(iVar11 + 0x26) = uVar8;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if ((param_1->state < 10) &&
           (uVar6 = (int)*pfVar18 >> 0x1f, uVar7 = (int)*(uint *)((int)puVar10 + 0x74) >> 0x1f,
           (int)((uVar6 >> 1 ^ (uint)*pfVar18) - uVar6) <
           (int)((uVar7 >> 1 ^ *(uint *)((int)puVar10 + 0x74)) - uVar7))) {
          if (g_heroState == UNK_78) {
            TransitionMovement(0,1);
          }
          if (param_1->animationId != '\x02') {
            uVar15 = MB_randRange(0,2);
            uVar16 = MB_randRange(0x14,0x16);
            MB_SetAnimation(param_1,2,uVar15,uVar16);
          }
          iVar17 = *(int *)(iVar11 + 0x1f8);
          *(undefined4 *)(iVar11 + 0x1c8) = 0;
          *(undefined1 *)(iVar11 + 0x1c5) = 1;
          if (((iVar17 != -1) && (g_SoundChannels[iVar17].pMoby == param_1)) &&
             (g_SoundChannels[iVar17].state != '\0')) {
            sound_Kill(iVar17);
          }
          *(undefined4 *)(iVar11 + 0x1f8) = 0xffffffff;
          iVar17 = PlayMobySound(0xf,4,param_1);
          *(int *)(iVar11 + 0x1f8) = iVar17;
          param_1->state = '\v';
          param_1->setByGroup = param_1->setByGroup + '\x01';
        }
        auVar22 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar31,auVar22);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          auVar20 = loadVectorLeftIndexed(lVar12,param_3);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanFloatingPoint
                    (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar22);
          if ((bool)(in_cr6 >> 1 & 1)) {
            *(undefined1 *)(iVar11 + 0x1c7) = 1;
            goto LAB_001c23bc;
          }
        }
        auVar22 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar31,auVar22);
        if (!(bool)(in_cr6 >> 1 & 1)) {
          auVar20 = loadVectorLeftIndexed(lVar12,param_3);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanFloatingPoint
                    (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,auVar22);
          if ((bool)(in_cr6 >> 1 & 1)) {
            *(undefined1 *)(iVar11 + 0x1c7) = 1;
          }
        }
      }
    }
  }
  else if (1 < *(int *)(puVar10 + 0xe)) {
    *(undefined1 *)(iVar11 + 0x1c6) = 0xff;
  }
LAB_001c23bc:
  *(byte *)(iVar11 + 0x1c6) =
       (byte)((longlong)(0x14 - (ulonglong)*(byte *)(iVar11 + 0x1c6)) >> 0x3f) &
       *(byte *)(iVar11 + 0x1c6) - 0x14;
  param_1->damage = -1;
LAB_001c23ec:
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  fVar3 = *(float *)(iVar11 + 0x1fc) + 0.3;
  *(float *)(iVar11 + 0x1fc) = fVar3;
  if (0.0 < fVar3) {
    *(undefined4 *)(iVar11 + 0x1fc) = 0;
  }
  return;
}


// 0x01c2480 (0x78 bytes)
void M1106_001c2480(double param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = -param_1;
  dVar1 = (double)MB_randRangeFloat((float)dVar2,(float)param_1);
  *param_2 = (float)((double)*param_2 + dVar1);
  dVar1 = (double)MB_randRangeFloat((float)dVar2,(float)param_1);
  param_2[1] = (float)((double)param_2[1] + dVar1);
  return;
}


// 0x01c2500 (0x1c4 bytes)
void M1106_001c2500
               (undefined8 param_1,int param_2,Vec4 *param_3,undefined8 param_4)

{
  Spline *pSVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  Vec4 *position;
  undefined4 *puVar6;
  double dVar7;
  GPiece<32> auStack_60;
  
  uVar4 = param_4;
  uVar2 = M1106_001c1d28(param_1,param_2,auStack_60);
  dVar7 = 0.0;
  position = (Vec4 *)((int)param_1 + 0x10);
  puVar6 = (undefined4 *)param_4;
  iVar3 = MB_SplineFindRouteNode
                    (0.0,auStack_60,uVar2,(longlong)*(int *)(param_2 + 0x188),uVar4,position,param_3
                     ,puVar6);
  if (iVar3 == 0) {
    iVar3 = PathFindClosestPnt((float)dVar7,param_3,Splines[*(int *)(param_2 + 0x290)]);
    iVar3 = PathFindClosestPnt
                      ((float)dVar7,
                       (Vec4 *)((int)&Splines[*(int *)(param_2 + 0x290)]->points[0].x +
                               (int)((longlong)iVar3 << 4)),Splines[*(int *)(param_2 + 0x188)]);
    lVar5 = ZEXT48(Splines[*(int *)(param_2 + 0x188)]) + (longlong)iVar3 * 0x10;
    iVar3 = MB_SplineFindRouteNode
                      ((float)dVar7,auStack_60,uVar2,(longlong)*(int *)(param_2 + 0x188),lVar5,
                       position,(int)lVar5 + 0x10,puVar6);
    if (iVar3 == 0) {
      iVar3 = PathFindClosestPnt((float)dVar7,position,Splines[*(int *)(param_2 + 0x188)]);
      iVar3 = (int)((longlong)iVar3 << 4);
      pSVar1 = Splines[*(int *)(param_2 + 0x188)];
      *puVar6 = *(undefined4 *)((int)&pSVar1->points[0].x + iVar3);
      puVar6[1] = *(undefined4 *)((int)&pSVar1->points[0].y + iVar3);
      puVar6[2] = *(undefined4 *)((int)&pSVar1->points[0].z + iVar3);
      puVar6[3] = *(undefined4 *)((int)&pSVar1->points[0].w + iVar3);
    }
  }
  return;
}


// 0x01c26e0 (0x42c bytes)
// inlined: FastAtan2 @0x1c28e4
ulonglong M1106_001c26e0
                    (double param_1,int param_2,int param_3,float *param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Spline *spline;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar14;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0xc0;
  puVar5 = (ulonglong *)lVar13;
  *puVar5 = uVar10;
  puVar5[0x1a] = in_LR;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x10);
  fVar4 = fVar1 - param_4[1];
  fVar3 = *param_4;
  puVar5[0x17] = unaff_r31;
  fVar3 = fVar2 - fVar3;
  iVar14 = *(int *)(param_3 + 0x290);
  puVar5[0x14] = unaff_r28;
  puVar5[0x15] = unaff_r29;
  puVar5[0x16] = unaff_r30;
  spline = Splines[iVar14];
  if ((double)SQRT(fVar3 * fVar3 + fVar4 * fVar4) <= param_1) {
    uVar11 = 4;
    fVar2 = g_heroPosition.x - fVar2;
    fVar1 = g_heroPosition.y - fVar1;
    fVar4 = ABS(fVar2);
    fVar3 = ABS(fVar1);
    *(float *)(puVar5 + 0xe) = fVar2;
    *(float *)((int)puVar5 + 0x74) = fVar1;
    *(float *)(puVar5 + 0xf) = fVar4 - fVar3;
    dVar20 = 0.0;
    uVar12 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar5 + 0xe));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
    fVar2 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    if (0.0 < fVar1) {
      lVar17 = uVar10 - 0xb0;
      lVar16 = uVar10 - 0x44;
      lVar15 = uVar10 - 0x34;
      lVar19 = 2;
      fVar1 = (fVar6 - fVar1) / (fVar6 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar5 + 0x11) = fVar1;
      *(float *)(puVar5 + 0x10) = fVar1;
      *(float *)((int)puVar5 + 0x84) = fVar1;
      *(float *)((int)puVar5 + 0x7c) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar4;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar1;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar1 * fVar1;
        iVar14 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 0x44;
      lVar19 = 4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar15 = lVar17;
      lVar16 = lVar13;
      do {
        fVar1 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar1;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar14 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar14 + 0x7c)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar3 + fVar2);
    }
    OrganicDeltAngSpeed
              (dVar20,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
               (double)(g_FrameTime * 2.0943952),param_2,&DAT_00720000,param_3 + 0x168);
  }
  else {
    uVar11 = MB_UpdateNavMoveTurning(param_2,param_3 + 0x70,param_5,param_3 + 0x100);
    if ((uVar11 & 2) != 0) {
      iVar14 = PathFindClosestPnt(0.0,(Vec4 *)(param_2 + 0x10),spline);
      iVar14 = (int)((longlong)iVar14 << 4);
      fVar2 = *(float *)((int)&spline->points[0].y + iVar14) - *(float *)(param_2 + 0x14);
      fVar3 = *(float *)((int)&spline->points[0].x + iVar14) - *(float *)(param_2 + 0x10);
      fVar4 = *(float *)((int)&spline->points[0].z + iVar14) - *(float *)(param_2 + 0x18);
      fVar1 = *(float *)(param_3 + 0x94);
      fVar7 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar6 = fVar1 / fVar7;
      if (fVar1 - fVar7 < 0.0) {
        fVar4 = fVar4 * fVar6;
      }
      if (fVar1 - fVar7 < 0.0) {
        fVar2 = fVar2 * fVar6;
      }
      if (fVar1 - fVar7 < 0.0) {
        fVar3 = fVar3 * fVar6;
      }
      *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + fVar4;
      *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + fVar2;
      *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + fVar3;
    }
  }
  if (((((worldUpdateTime & 3) == 3) &&
       (iVar14 = CollLineValidate(0x3fb99999a0000000,0x3ff0000000000000,param_2 + 0x10),
       pMVar9 = g_CollOutput.pMoby, iVar14 != 0)) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
     (((0 < g_CollOutput.poly && ((g_CollOutput.pMoby)->oClass == 0x42d)) &&
      ((g_CollOutput.pMoby)->setByGroup == '\0')))) {
    if (*(char *)((int)(g_CollOutput.pMoby)->pVar + 0xbe) != '\0') {
      fVar1 = ((g_CollOutput.pMoby)->pos).y;
      *(float *)(param_2 + 0x10) =
           (((g_CollOutput.pMoby)->pos).x - *(float *)(param_2 + 0x10)) * 0.5 +
           *(float *)(param_2 + 0x10);
      *(float *)(param_2 + 0x14) =
           (fVar1 - *(float *)(param_2 + 0x14)) * 0.5 + *(float *)(param_2 + 0x14);
    }
    pMVar9->setByGroup = '\x01';
  }
  return uVar11;
}


// 0x01c2b20 (0x8c bytes)
double M1106_001c2b20
                 (double param_1,double param_2,double param_3,int param_4,int param_5)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)(float)((double)DAT_0071f408 * 0.05999999865889549);
  if (param_2 < param_1) {
    fVar1 = (float)(param_1 - param_2);
    if (50.0 - (float)(param_1 - param_2) < 0.0) {
      fVar1 = 50.0;
    }
    if (fVar1 - 0.0 < 0.0) {
      fVar1 = 0.0;
    }
    dVar2 = (double)(float)((double)(fVar1 * 0.02 * fVar1 * 0.02) *
                            (double)(float)((double)DAT_0071f408 * 0.10000000149011612 - dVar2) +
                           dVar2);
  }
  *(float *)(param_5 + 0x1bc) = (float)dVar2;
  *(float *)(param_5 + 0x94) = (float)dVar2;
  *(float *)(param_4 + 0x58) =
       (float)((double)(*(float *)(param_5 + 0x80) / (DAT_0071f408 * 0.06)) * param_3);
  return dVar2;
}


// 0x01c2bb8 (0x4f0 bytes)
// inlined: FastAtan2 @0x1c2cc4, FastAtan2 @0x1c2ec8
undefined8
M1106_001c2bb8
          (int param_1,int param_2,float *param_3,undefined1 param_4,undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float *pfVar15;
  longlong lVar14;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f30;
  double dVar22;
  ulonglong in_f31;
  double dVar23;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x110;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x24] = in_LR;
  puVar6[0x20] = in_f30;
  puVar6[0x21] = in_f31;
  fVar1 = param_3[1];
  fVar2 = *(float *)(param_1 + 0x14);
  fVar5 = *param_3 - *(float *)(param_1 + 0x10);
  puVar6[0x1a] = unaff_r26;
  fVar1 = fVar1 - fVar2;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1e] = unaff_r30;
  fVar3 = ABS(fVar5);
  fVar4 = ABS(fVar1);
  *(float *)((int)puVar6 + 0x7c) = fVar5;
  *(float *)(puVar6 + 0x10) = fVar1;
  puVar6[0x1d] = unaff_r29;
  fVar1 = *(float *)(param_1 + 0x48);
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1b] = unaff_r27;
  *(float *)((int)puVar6 + 0x84) = fVar3 - fVar4;
  dVar22 = 0.0;
  dVar23 = 0.7853981852531433;
  uVar17 = (ulonglong)(*(uint *)((int)puVar6 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)((int)puVar6 + 0x7c));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar2 = fVar4;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar4 = ABS(*(float *)(puVar6 + 0x10));
  if (*(float *)((int)puVar6 + 0x84) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar19 = dVar22;
  if (0.0 < fVar2) {
    lVar10 = uVar9 - 0x100;
    lVar14 = uVar9 - 0x68;
    lVar16 = uVar9 - 0x58;
    lVar18 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)((int)puVar6 + 0xb4) = fVar2;
    *(float *)((int)puVar6 + 0xac) = fVar2;
    *(float *)(puVar6 + 0x16) = fVar2;
    *(float *)(puVar6 + 0x15) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar4;
    *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2;
    *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0x98) * fVar2 * fVar2;
      iVar7 = (int)lVar14;
      lVar10 = lVar10 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar2 * fVar2;
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar9 - 0x68;
    pfVar15 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar10 = lVar11;
    lVar14 = lVar16;
    do {
      fVar2 = *pfVar15;
      fVar4 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0xa8) * fVar2;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    lVar10 = lVar11;
    do {
      iVar7 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar8 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0xa8)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar5 + fVar3);
  }
  dVar19 = (double)FastSubRots(fVar1,(float)dVar19);
  if (dVar19 <= (double)*(float *)(param_2 + 0x98)) {
    uVar12 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
    *(undefined1 *)(param_2 + 500) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)(param_2 + 0x1f6) = param_4;
    *(undefined1 *)(param_2 + 0x1f5) = param_5;
    *(float *)(param_2 + 0xc0) = *param_3;
    *(float *)(param_2 + 0xc4) = param_3[1];
    *(float *)(param_2 + 200) = param_3[2];
    *(float *)(param_2 + 0xcc) = param_3[3];
    fVar1 = *param_3 - *(float *)(param_1 + 0x10);
    fVar2 = param_3[1] - *(float *)(param_1 + 0x14);
    dVar20 = ABS((double)fVar1);
    dVar21 = ABS((double)fVar2);
    *(float *)(puVar6 + 0xe) = fVar1;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)(puVar6 + 0xf) = (float)(dVar20 - dVar21);
    uVar17 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    dVar19 = ABS((double)*(float *)(puVar6 + 0xe));
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar19 = dVar21;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    dVar21 = ABS((double)*(float *)((int)puVar6 + 0x74));
    if ((double)*(float *)(puVar6 + 0xf) - dVar22 < 0.0) {
      dVar21 = dVar20;
    }
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    dVar20 = dVar22;
    if (dVar22 < dVar19) {
      lVar10 = uVar9 - 0x100;
      lVar16 = uVar9 - 0x78;
      lVar14 = uVar9 - 0x88;
      lVar18 = 2;
      fVar5 = (float)(dVar21 - dVar19) / (float)(dVar21 + dVar19);
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar6 + 0x94) = fVar5;
      *(float *)((int)puVar6 + 0x8c) = fVar5;
      *(float *)(puVar6 + 0x12) = fVar5;
      *(float *)(puVar6 + 0x11) = fVar5;
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar4;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar5;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar5 * fVar4;
      do {
        *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x78) * fVar5 * fVar5;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
        lVar16 = lVar16 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar18 = 4;
      lVar16 = uVar9 - 0x88;
      pfVar15 = (float *)&DAT_007358e0;
      lVar10 = lVar11;
      lVar14 = lVar16;
      do {
        fVar5 = *pfVar15;
        fVar4 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x88) * fVar5;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar10 = 2;
      dVar19 = dVar22;
      do {
        iVar7 = (int)lVar11;
        iVar8 = (int)lVar16;
        lVar11 = lVar11 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar7 + 0x88)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar20 = (double)((float)(dVar19 + dVar23) * fVar1 + fVar2);
    }
    if (dVar22 <= dVar20) {
      if (*(char *)(param_1 + 0x53) != '\x0e') {
        uVar12 = MB_randRange(0,1);
        uVar13 = MB_randRange(0xf,0x14);
        MB_SetAnimation(param_1,0xe,uVar12,uVar13);
      }
    }
    else if (*(char *)(param_1 + 0x53) != '\x03') {
      uVar12 = MB_randRange(0,1);
      uVar13 = MB_randRange(0xf,0x14);
      MB_SetAnimation(param_1,3,uVar12,uVar13);
    }
    uVar12 = 1;
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return uVar12;
}


// 0x01c30c0 (0x2b0 bytes)
// inlined: FastAtan2 @0x1c31a8
void M1106_001c30c0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0xb0;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  puVar5[0x18] = in_LR;
  puVar5[0x14] = unaff_r30;
  puVar5[0x15] = unaff_r31;
  if (*(byte *)(param_1 + 0x20) < 10) {
    fVar2 = *param_3 - *(float *)(param_1 + 0x10);
    fVar1 = param_3[1] - *(float *)(param_1 + 0x14);
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar5 + 0xe) = fVar2;
    *(float *)((int)puVar5 + 0x74) = fVar1;
    *(float *)(puVar5 + 0xf) = fVar3 - fVar4;
    dVar17 = 0.0;
    uVar10 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar5 + 0xe));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar10 << 2));
    fVar1 = *(float *)(((uint)(uVar10 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar9 - 0xa0;
      lVar12 = uVar9 - 0x24;
      lVar13 = uVar9 - 0x34;
      lVar16 = 2;
      fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x11) = fVar2;
      *(float *)(puVar5 + 0x10) = fVar2;
      *(float *)((int)puVar5 + 0x84) = fVar2;
      *(float *)((int)puVar5 + 0x7c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar2 * fVar2;
        iVar6 = (int)lVar13;
        lVar13 = lVar13 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar14 = uVar9 - 0x34;
      lVar16 = 4;
      pfVar15 = (float *)&DAT_007358e0;
      lVar12 = lVar14;
      lVar13 = lVar11;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar12 = 2;
      do {
        iVar6 = (int)lVar11;
        iVar7 = (int)lVar14;
        lVar11 = lVar11 + 0x10;
        lVar14 = lVar14 + 0x10;
        dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
    }
    dVar17 = (double)FastDiffRots(dVar17,(double)*(float *)(param_1 + 0x48));
  }
  else {
    dVar17 = 0.0;
  }
  *(float *)(param_2 + 0x268) = (float)dVar17;
  if (dVar17 <= 1.3962633609771729) {
    if (dVar17 < -1.3962633609771729) {
      *(undefined4 *)(param_2 + 0x268) = 0xbfb2b8c2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x268) = 0x3fb2b8c2;
  }
  *(undefined4 *)(param_2 + 0x264) = *(undefined4 *)(param_2 + 0x1fc);
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),param_1,param_2 + 0x200,0xb)
  ;
  return;
}


// 0x01c3370 (0x108 bytes)
// strings: 0096c074: 'None'

void M1106_001c3370(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    cVar2 = Cheats[0];
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if (((((MobyInstance *)puVar4[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
            (cVar2 != '\0')) && (DAT_00763fd1 == '\0')) {
          AttachManipulator((MobyInstance *)puVar4[0x5e],0xb,&DAT_00763fd0);
          DAT_00763ff0 = 0x40300000;
          DAT_00763ff4 = 0x40300000;
          DAT_00763ff8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
          cVar2 = Cheats[0];
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar1);
    }
  }
  return;
}


// 0x01c3478 (0x88 bytes)
void M1106_001c3478(MobyInstance *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  if (0 < DAT_00ef0db8) {
    psVar2 = &DAT_00ef0db8;
    lVar3 = 10;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 + ((ushort)(0x40 - (longlong)sVar1 >> 0x3f) & 0x40U - sVar1) + -4;
      psVar2 = psVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    RegisterMobyDraw(&PTR_M1107_001c90b0_00708cb0,param_1);
  }
  return;
}


// 0x01c3510 (0x254 bytes)
void M1106_001c3510(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  short *psVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  
  DAT_00764010 = 1;
  DAT_00764018 = DAT_00764018 * 0.5;
  DAT_00764014 = 1;
  PlayMobySound(10,0,param_1);
  fVar1 = 0.0;
  iVar21 = 0;
  psVar19 = &DAT_00eefa28;
  piVar20 = &DAT_00eefa3c;
  pfVar18 = (float *)&DAT_00eefa2c;
  do {
    iVar10 = *piVar20;
    if (iVar10 != 0) {
      iVar17 = (int)((longlong)*psVar19 << 4);
      fVar2 = *(float *)((int)&DAT_00ef0cf4 + iVar17);
      fVar13 = *(float *)((int)&DAT_00ef0ce4 + iVar17) - fVar2;
      fVar3 = *(float *)((int)&DAT_00ef0cf0 + iVar17);
      fVar15 = *(float *)((int)&DAT_00ef0ce0 + iVar17) - fVar3;
      fVar4 = *(float *)((int)&DAT_00ef0cf8 + iVar17);
      fVar14 = *(float *)((int)&DAT_00ef0ce8 + iVar17) - fVar4;
      fVar5 = *pfVar18;
      fVar6 = *(float *)(iVar10 + 0x14);
      fVar7 = *(float *)(iVar10 + 0x10);
      fVar8 = *(float *)(iVar10 + 0x18);
      fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
      *piVar20 = 0;
      *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar10 + 0x1c);
      *(undefined2 *)(iVar10 + 10) = 0x46;
      fVar5 = fVar5 / fVar16;
      fVar16 = 0.1 / fVar16;
      fVar6 = fVar6 - (fVar2 + fVar13 * fVar5);
      fVar7 = fVar7 - (fVar3 + fVar15 * fVar5);
      fVar8 = fVar8 - (fVar4 + fVar14 * fVar5);
      fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      fVar3 = 0.03 / fVar4;
      fVar2 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      fVar12 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      fVar11 = fVar1;
      if (0.0 - fVar4 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar2 = fVar3 * fVar8;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar12 = fVar3 * fVar6;
      }
      if (fVar4 - 0.0 < 0.0) {
        fVar11 = fVar3 * fVar7;
      }
      *(float *)(iVar10 + 0x38) = fVar14 * fVar5 * fVar16 + fVar2;
      *(float *)(iVar10 + 0x34) = fVar13 * fVar5 * fVar16 + fVar12;
      *(float *)(iVar10 + 0x30) = fVar15 * fVar5 * fVar16 + fVar11;
    }
    iVar21 = iVar21 + 1;
    piVar20 = piVar20 + 6;
    psVar19 = psVar19 + 0xc;
    pfVar18 = pfVar18 + 6;
  } while (iVar21 < 200);
  if (0 < DAT_00ef0db8) {
    psVar19 = &DAT_00ef0db8;
    lVar22 = 10;
    do {
      sVar9 = *psVar19;
      *psVar19 = sVar9 + ((ushort)(0x40 - (longlong)sVar9 >> 0x3f) & 0x40U - sVar9) + -4;
      psVar19 = psVar19 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    RegisterMobyDraw(&PTR_M1107_001c90b0_00708cb0,param_1);
  }
  return;
}


// 0x01c3770 (0x21c bytes)
// strings: 001c3768: '@333`'

void M1106_001c3770(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  longlong lVar14;
  double dVar15;
  float local_30 [8];
  
  if (DAT_00764010 != 0) {
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar3 = *(float *)(param_1 + 200);
    DAT_00764010 = 0;
    fVar7 = 0.0;
    DAT_00ef0cf0 = *param_2;
    pfVar10 = (float *)&DAT_00ef0cf0;
    DAT_00ef0cf4 = param_2[1];
    DAT_00ef0cf8 = param_2[2];
    puVar13 = &DAT_00ef0dba;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    DAT_00ef0cfc = param_2[3];
    pfVar12 = (float *)&DAT_00ef0d00;
    DAT_00ef0db8 = 0;
    lVar14 = 9;
    fVar6 = 2.8 / fVar4;
    fVar8 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    fVar9 = fVar7;
    if (0.0 - fVar4 < 0.0) {
      fVar9 = fVar1 * fVar6;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar8 = fVar3 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar9 = fVar1 * fVar6;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar6;
    }
    do {
      *pfVar12 = *pfVar10 + fVar7;
      pfVar12[1] = pfVar10[1] + fVar9;
      pfVar12[2] = pfVar10[2] + fVar8;
      pfVar5 = pfVar10 + 3;
      pfVar10 = pfVar10 + 4;
      pfVar12[3] = *pfVar5;
      *puVar13 = 0;
      pfVar12 = pfVar12 + 4;
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    DAT_00eefa00 = 0;
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    DAT_00eefa0c = 0;
    DAT_00eefa08 = 0;
    DAT_00eefa04 = 0;
    local_30[2] = 0.1;
    local_30[3] = 1.0;
    local_30[4] = 1.0;
    local_30[5] = 0.0;
    local_30[6] = 0.0;
    local_30[7] = 1.0;
    dVar15 = (double)MB_randRot();
    MB_RotateQuatAxisAngle((float)dVar15,(float *)&DAT_00eefa10,local_30);
    DAT_00eefa20 = (float)dVar15;
    DAT_00eef9f0 = 0;
    DAT_00eefa24 = 0;
    DAT_00764018 = 0x3bc49ba6;
    if (DAT_00764014 != 0) {
      puVar11 = &DAT_00eefa3c;
      lVar14 = 0x19;
      DAT_00764014 = 0;
      do {
        *puVar11 = 0;
        puVar11[6] = 0;
        puVar11[0xc] = 0;
        puVar11[0x12] = 0;
        puVar11[0x18] = 0;
        puVar11[0x1e] = 0;
        puVar11[0x24] = 0;
        puVar11[0x2a] = 0;
        puVar11 = puVar11 + 0x30;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}


// 0x01c3a18 (0x1550 bytes)
// inlined: FastRSqrt @0x1c3e7c, FastRSqrt @0x1c4394, FastRSqrt @0x1c4430
// strings: 001c3994: '@333Br' (raw)

double M1106_001c3a18(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Vec4 *start;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined2 uVar10;
  short sVar11;
  short *psVar12;
  Vec4 *end;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
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
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  Vec4 local_290;
  float local_280;
  float local_27c;
  float local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_260 [9];
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  Vec4 VStack_1f0;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  double local_140;
  float local_138;
  longlong local_130;
  
  M1106_001c3770();
  fVar5 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  psVar6 = &DAT_00ef0db8;
  lVar19 = 9;
  local_290.x = g_heroPosition.x;
  local_290.y = g_heroPosition.y;
  local_290.z = g_heroPosition.z + 0.6;
  DAT_00ef0db8 = DAT_00ef0db8 + 4;
  local_290.w = g_heroPosition.w;
  DAT_00ef0cf0 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  dVar40 = (double)g_heroPosition.w;
  psVar12 = psVar6;
  do {
    psVar12 = psVar12 + 1;
    sVar11 = *psVar6;
    psVar6 = psVar6 + 1;
    *psVar12 = sVar11 + -0x20;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  fVar2 = fVar2 - fVar3;
  fVar1 = fVar1 - DAT_00ef0cf0;
  dVar35 = 2.799999952316284;
  dVar38 = 0.0;
  fVar3 = (fVar5 - fVar4) + 0.6;
  DAT_00ef0cf4 = param_2[1];
  DAT_00ef0cf8 = param_2[2];
  DAT_00ef0cfc = param_2[3];
  fVar4 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar5 = 2.8 / fVar4;
  dVar20 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar20 = (double)(fVar1 * fVar5);
  }
  dVar43 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar43 = (double)(fVar2 * fVar5);
  }
  dVar41 = dVar38;
  if (0.0 - fVar4 < 0.0) {
    dVar41 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar20 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar43 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar41 = (double)(fVar3 * fVar5);
  }
  FUN_005e7d64(&local_280,&DAT_00eefa00,param_1 + 0xc0);
  local_280 = (float)((double)local_280 + dVar20);
  local_27c = (float)((double)local_27c + dVar43);
  local_278 = (float)((double)local_278 + dVar41);
  FUN_005e7d64(&local_270,&DAT_00eefa10,param_1 + 0xc0);
  local_270 = (float)((double)local_270 + dVar20);
  local_26c = (float)((double)local_26c + dVar43);
  local_268 = (float)((double)local_268 + dVar41);
  dVar44 = 60.5;
  local_130 = (longlong)(int)(animationSpeed * 60.5);
  dVar20 = (double)FastIntToDouble((int)(animationSpeed * 60.5));
  lVar19 = (longlong)DAT_00eef9f0;
  DAT_00eef9f0 = DAT_00eef9f0 + 1;
  local_130 = (longlong)(int)((double)animationSpeed * dVar44);
  fVar3 = (float)((double)lVar19 / dVar20);
  dVar20 = (double)((local_270 - local_280) * fVar3 + local_280);
  dVar43 = (double)((local_26c - local_27c) * fVar3 + local_27c);
  dVar41 = (double)((local_268 - local_278) * fVar3 + local_278);
  if ((int)((double)animationSpeed * dVar44) <= DAT_00eef9f0) {
    DAT_00eefa00 = DAT_00eefa10;
    DAT_00eefa04 = DAT_00eefa14;
    DAT_00eefa08 = DAT_00eefa18;
    DAT_00eefa0c = DAT_00eefa1c;
    local_260[0] = 0.0;
    local_260[1] = 0.0;
    local_260[2] = 0.1;
    local_260[3] = 1.0;
    local_260[4] = 1.0;
    local_260[5] = 0.0;
    local_260[6] = 0.0;
    local_260[7] = 1.0;
    dVar44 = (double)MB_randRangeFloat(45.0,315.0);
    dVar44 = (double)FastWrapRot(DAT_00eefa20,(float)(dVar44 * 0.01745329238474369));
    MB_RotateQuatAxisAngle((float)dVar44,(float *)&DAT_00eefa10,local_260);
    DAT_00eefa20 = (float)dVar44;
    DAT_00eef9f0 = 0;
  }
  local_138 = 0.1;
  dVar44 = (double)FastWrapRot(DAT_00eefa24,0.1);
  DAT_00eefa24 = (float)dVar44;
  dVar33 = -1.0;
  dVar21 = (double)SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                        g_heroGravityDir.x * g_heroGravityDir.x +
                        g_heroGravityDir.y * g_heroGravityDir.y);
  local_174 = g_heroGravityDir.w;
  local_184 = 0;
  fVar3 = (float)(-1.0 / dVar21);
  dVar44 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar44 = (double)(g_heroGravityDir.x * fVar3);
  }
  dVar37 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar37 = (double)(g_heroGravityDir.z * fVar3);
  }
  dVar36 = dVar38;
  if (dVar38 - dVar21 < 0.0) {
    dVar36 = (double)(g_heroGravityDir.y * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar44 = (double)(g_heroGravityDir.x * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar37 = (double)(g_heroGravityDir.z * fVar3);
  }
  if (dVar21 - dVar38 < 0.0) {
    dVar36 = (double)(g_heroGravityDir.y * fVar3);
  }
  local_180 = (float)dVar44;
  local_17c = (float)dVar36;
  local_178 = (float)dVar37;
  fVar3 = (float)(dVar37 * dVar20 - (double)(float)(dVar44 * dVar41));
  fVar4 = (float)(dVar36 * dVar41 - (double)(float)(dVar37 * dVar43));
  fVar1 = (float)(dVar44 * dVar43 - (double)(float)(dVar36 * dVar20));
  fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar21 = dVar38;
  dVar25 = dVar38;
  dVar34 = dVar38;
  if ((double)SQRT(fVar2) != dVar38) {
    fVar5 = 1.0 / SQRT(fVar2);
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar25 = (double)(fVar4 * fVar5);
    dVar21 = (double)(fVar3 * fVar5);
    dVar34 = (double)(fVar1 * fVar5);
  }
  local_190 = (float)dVar25;
  local_18c = (float)dVar21;
  local_188 = (float)dVar34;
  local_194 = 0;
  pfVar8 = (float *)&DAT_00ef0dd0;
  iVar16 = 0;
  local_1a0 = (float)(dVar21 * dVar37 - (double)(float)(dVar34 * dVar36));
  local_19c = (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37));
  local_198 = (float)(dVar25 * dVar36 - (double)(float)(dVar21 * dVar44));
  dVar21 = 0.019999999552965164;
  pfVar14 = (float *)&DAT_00764020;
  pfVar13 = pfVar8;
  do {
    local_260[8] = (float)((double)*pfVar14 * dVar21);
    local_23c = (float)((double)pfVar14[1] * dVar21);
    local_238 = (float)((double)pfVar14[2] * dVar21);
    local_234 = pfVar14[3];
    FUN_005e7d64(local_260 + 8,local_260 + 8,&local_1a0);
    iVar16 = iVar16 + 1;
    pfVar14 = pfVar14 + 4;
    *pfVar13 = DAT_00ef0cf0 + local_260[8];
    pfVar13[1] = DAT_00ef0cf4 + local_23c;
    pfVar13[2] = DAT_00ef0cf8 + local_238;
    pfVar13[3] = DAT_00ef0cfc;
    pfVar13 = pfVar13 + 4;
  } while (iVar16 < 0x14);
  iVar16 = 1;
  dVar25 = 1000.0;
  start = (Vec4 *)&DAT_00ef0cf0;
  do {
    end = start + 1;
    pfVar8 = pfVar8 + 0x50;
    local_230 = end->x - start->x;
    dVar34 = (double)local_230;
    local_22c = start[1].y - start->y;
    dVar26 = (double)local_22c;
    local_228 = start[1].z - start->z;
    dVar30 = (double)local_228;
    local_224 = start[1].w;
    local_214 = 0;
    local_220 = (float)(dVar26 * dVar41 - (double)(float)(dVar30 * dVar43));
    local_21c = (float)(dVar30 * dVar20 - (double)(float)(dVar34 * dVar41));
    local_218 = (float)(dVar34 * dVar43 - (double)(float)(dVar26 * dVar20));
    dVar34 = (double)FUN_005e8e08((double)((float)(dVar30 * dVar41 +
                                                  (double)(float)(dVar34 * dVar20 +
                                                                 (double)(float)(dVar26 * dVar43)))
                                          / (float)((double)SQRT((float)(dVar30 * dVar30 +
                                                                        (double)(float)(dVar34 * 
                                                  dVar34 + (double)(float)(dVar26 * dVar26)))) *
                                                  dVar35)));
    dVar30 = 0.20000000298023224;
    dVar26 = (double)(float)(1.5707963705062866 - dVar34);
    dVar34 = (double)Cam_InterpAngles
                               (dVar38,dVar26,0x3faeb851e0000000,0x3fc99999a0000000,dVar38);
    dVar26 = (double)FastDiffRots(dVar26,dVar34);
    if (0.3141592741012573 < ABS(dVar26)) {
      dVar26 = (double)FastDiffRots();
      dVar34 = (double)FastWrapRot((float)dVar34,(float)dVar26);
    }
    MB_RotateQuatAxisAngle((float)dVar34,&local_210,&local_230);
    dVar26 = (double)local_20c;
    dVar39 = (double)local_210;
    dVar29 = (double)local_208;
    dVar27 = (double)SQRT((float)(dVar29 * dVar29 +
                                 (double)(float)(dVar39 * dVar39 + (double)(float)(dVar26 * dVar26))
                                 ));
    dVar31 = (double)(float)(dVar35 / dVar27);
    dVar34 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar34 = (double)(float)(dVar26 * dVar31);
    }
    dVar22 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar22 = (double)(float)(dVar39 * dVar31);
    }
    dVar23 = dVar38;
    if (dVar38 - dVar27 < 0.0) {
      dVar23 = (double)(float)(dVar29 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar34 = (double)(float)(dVar26 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar22 = (double)(float)(dVar39 * dVar31);
    }
    if (dVar27 - dVar38 < 0.0) {
      dVar23 = (double)(float)(dVar29 * dVar31);
    }
    local_20c = (float)((double)(float)(dVar34 - dVar26) + dVar26);
    local_210 = (float)((double)(float)(dVar22 - dVar39) + dVar39);
    local_208 = (float)((double)(float)(dVar23 - dVar29) + dVar29);
    fVar3 = SQRT(local_208 * local_208 + local_210 * local_210 + local_20c * local_20c);
    if (3.9 < fVar3) {
      fVar3 = 3.9 / fVar3;
      local_210 = local_210 * fVar3;
      local_20c = local_20c * fVar3;
      local_208 = local_208 * fVar3;
    }
    if (5 < iVar16) {
      dVar34 = (double)FastIntToDouble(10);
      local_130 = (longlong)iVar16;
      fVar3 = (float)((double)local_130 / dVar34);
      local_204 = local_224;
      local_210 = fVar3 * (local_230 - local_210) + local_210;
      local_20c = fVar3 * (local_22c - local_20c) + local_20c;
      local_208 = fVar3 * (local_228 - local_208) + local_208;
    }
    fVar3 = start->y;
    fVar4 = start->z;
    fVar1 = start->w;
    end->x = start->x + local_210;
    start[1].y = fVar3 + local_20c;
    start[1].w = fVar1;
    start[1].z = fVar4 + local_208;
    dVar34 = ClosestPntOnSegmentAtDist
                       ((float)dVar38,&VStack_1f0,&local_290,&local_290,start,end);
    local_140 = dVar25;
    if (dVar34 - dVar25 < 0.0) {
      local_140 = dVar34;
    }
    if (ABS(dVar41) <= 2.0999999046325684) {
      dVar25 = (double)SQRT(g_heroGravityDir.z * g_heroGravityDir.z +
                            g_heroGravityDir.x * g_heroGravityDir.x +
                            g_heroGravityDir.y * g_heroGravityDir.y);
      dVar37 = dVar38;
      dVar44 = dVar38;
      dVar36 = dVar38;
      if (dVar25 != dVar38) {
        fVar3 = (float)(dVar33 / dVar25);
        dVar44 = (double)(g_heroGravityDir.x * fVar3);
        dVar36 = (double)(g_heroGravityDir.y * fVar3);
        dVar37 = (double)(g_heroGravityDir.z * fVar3);
      }
    }
    else {
      dVar25 = (double)(start[-1].x - start->x);
      dVar34 = (double)(start[-1].z - start->z);
      dVar26 = (double)(start[-1].y - start->y);
      if (dVar38 < (double)((float)(dVar20 * dVar36 - (double)(float)(dVar43 * dVar44)) *
                            (float)(dVar25 * dVar36 - (double)(float)(dVar26 * dVar44)) +
                           (float)(dVar43 * dVar37 - (double)(float)(dVar41 * dVar36)) *
                           (float)(dVar26 * dVar37 - (double)(float)(dVar34 * dVar36)) +
                           (float)(dVar41 * dVar44 - (double)(float)(dVar20 * dVar37)) *
                           (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37)))) {
        dVar37 = -dVar37;
        dVar44 = -dVar44;
        dVar36 = -dVar36;
      }
    }
    fVar3 = (float)(dVar41 * dVar41 +
                   (double)(float)(dVar20 * dVar20 + (double)(float)(dVar43 * dVar43)));
    dVar25 = dVar38;
    dVar34 = dVar38;
    dVar26 = dVar38;
    if ((double)SQRT(fVar3) != dVar38) {
      fVar4 = 1.0 / SQRT(fVar3);
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
      dVar25 = (double)(-(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4);
      dVar26 = (double)(float)(dVar20 * dVar25);
      dVar34 = (double)(float)(dVar43 * dVar25);
      dVar25 = (double)(float)(dVar41 * dVar25);
    }
    local_164 = (float)dVar40;
    local_170 = (float)dVar26;
    local_16c = (float)dVar34;
    fVar3 = (float)(dVar37 * dVar26 - (double)(float)(dVar44 * dVar25));
    fVar4 = (float)(dVar36 * dVar25 - (double)(float)(dVar37 * dVar34));
    fVar1 = (float)(dVar44 * dVar34 - (double)(float)(dVar36 * dVar26));
    local_168 = (float)dVar25;
    local_154 = 0;
    fVar2 = fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3;
    dVar40 = dVar38;
    dVar20 = dVar38;
    dVar43 = dVar38;
    if ((double)SQRT(fVar2) != dVar38) {
      fVar5 = 1.0 / SQRT(fVar2);
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      fVar5 = -(fVar2 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
      dVar20 = (double)(fVar4 * fVar5);
      dVar40 = (double)(fVar3 * fVar5);
      dVar43 = (double)(fVar1 * fVar5);
    }
    local_130 = (longlong)iVar16;
    local_160 = (float)dVar20;
    local_15c = (float)dVar40;
    local_158 = (float)dVar43;
    local_144 = 0;
    iVar15 = 0;
    local_150 = (float)(dVar34 * dVar43 - (double)(float)(dVar25 * dVar40));
    dVar44 = (double)local_150;
    local_14c = (float)(dVar25 * dVar20 - (double)(float)(dVar26 * dVar43));
    dVar36 = (double)local_14c;
    local_148 = (float)(dVar26 * dVar40 - (double)(float)(dVar34 * dVar20));
    dVar37 = (double)local_148;
    dVar40 = 0.699999988079071;
    dVar20 = 3.141592502593994;
    dVar43 = -3.141592502593994;
    dVar41 = -0.16666656732559204;
    dVar25 = 0.008333025500178337;
    dVar34 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    dVar29 = (double)local_130;
    dVar31 = (double)(float)(dVar29 * dVar30 + dVar21);
    dVar27 = (double)(float)(dVar31 * 0.25);
    pfVar14 = (float *)&DAT_00764020;
    pfVar13 = pfVar8;
    do {
      dVar22 = (double)FastWrapRot
                                 ((float)(dVar29 * dVar40 + (double)DAT_00eefa24),(float)dVar38);
      dVar39 = (double)(float)(dVar20 - dVar22);
      if (dVar22 - (double)(float)(dVar20 - dVar22) < 0.0) {
        dVar39 = dVar22;
      }
      dVar23 = (double)(float)(dVar43 - dVar22);
      if ((double)(float)(dVar43 - dVar22) - dVar39 < 0.0) {
        dVar23 = dVar39;
      }
      dVar39 = (double)(float)(dVar23 * dVar23);
      dVar32 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar23));
      dVar22 = (double)(float)(dVar39 * dVar32);
      local_1f8 = (float)((double)(float)((double)(float)(dVar39 * dVar22) * dVar26 +
                                         (double)(float)(dVar22 * dVar34 +
                                                        (double)(float)(dVar32 * dVar25 +
                                                                       (double)(float)((double)(
                                                  float)(dVar39 * dVar23) * dVar41 + dVar23)))) *
                          dVar27 + dVar31);
      local_200 = *pfVar14 * local_1f8;
      local_1fc = pfVar14[1] * local_1f8;
      local_1f8 = pfVar14[2] * local_1f8;
      local_1f4 = pfVar14[3];
      FUN_005e7d64(&local_200,&local_200,&local_170);
      iVar15 = iVar15 + 1;
      pfVar14 = pfVar14 + 4;
      *pfVar13 = end->x + local_200;
      pfVar13[1] = start[1].y + local_1fc;
      pfVar13[2] = start[1].z + local_1f8;
      pfVar13[3] = start[1].w;
      pfVar13 = pfVar13 + 4;
    } while (iVar15 < 0x14);
    iVar16 = iVar16 + 1;
    dVar40 = (double)local_204;
    dVar25 = (double)SQRT(local_208 * local_208 + local_210 * local_210 + local_20c * local_20c);
    fVar3 = (float)(dVar35 / dVar25);
    dVar20 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar20 = (double)(local_210 * fVar3);
    }
    dVar43 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar43 = (double)(local_20c * fVar3);
    }
    dVar41 = dVar38;
    if (dVar38 - dVar25 < 0.0) {
      dVar41 = (double)(local_208 * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar20 = (double)(local_210 * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar43 = (double)(local_20c * fVar3);
    }
    if (dVar25 - dVar38 < 0.0) {
      dVar41 = (double)(local_208 * fVar3);
    }
    dVar25 = local_140;
    start = end;
  } while (iVar16 < 10);
  RegisterMobyDraw(&PTR_M1107_001c90b0_00708cb0,(MobyInstance *)param_1);
  iVar17 = 0;
  iVar15 = 0;
  iVar18 = 0;
  iVar16 = 0;
  do {
    iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
    if (iVar18 < 5 && iVar9 == 0) {
      lVar19 = 9;
      iVar7 = 0x12;
      do {
        if (0x3f < *(short *)((int)&DAT_00ef0db8 + iVar7)) break;
        lVar19 = lVar19 + -1;
        iVar7 = iVar7 + -2;
      } while (-1 < (int)lVar19);
      if (0 < (int)lVar19) {
        if (iVar17 < 2 && 1 < (int)lVar19) {
          iVar7 = MB_randInt(0x14);
          uVar42 = 0x3ff0000000000000;
          dVar40 = (double)MB_randRangeFloat((float)dVar30,1.0);
          pfVar8 = (float *)((int)(&DAT_00ef0dd0 + iVar7 * 4) +
                            (int)(lVar19 << 8) + (int)(lVar19 << 6));
          dVar20 = (double)(float)(&DAT_00ef0dd0)[iVar7 * 4];
          local_1d4 = pfVar8[3];
          iVar9 = (int)(lVar19 << 4);
          local_1e0 = (float)(dVar40 * (double)(float)((double)*pfVar8 - dVar20) + dVar20);
          local_1dc = (float)(dVar40 * (double)(pfVar8[1] - (float)(&DAT_00ef0dd4)[iVar7 * 4]) +
                             (double)(float)(&DAT_00ef0dd4)[iVar7 * 4]);
          local_1d8 = (float)(dVar40 * (double)(pfVar8[2] - (float)(&DAT_00ef0dd8)[iVar7 * 4]) +
                             (double)(float)(&DAT_00ef0dd8)[iVar7 * 4]);
          dVar35 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00ef0cf0 +
                                                                              iVar9) -
                                                           (double)DAT_00ef0cf0) +
                                  (double)DAT_00ef0cf0);
          dVar20 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00ef0cf4 +
                                                                              iVar9) -
                                                           (double)DAT_00ef0cf4) +
                                  (double)DAT_00ef0cf4);
          dVar40 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00ef0cf8 +
                                                                              iVar9) -
                                                           (double)DAT_00ef0cf8) +
                                  (double)DAT_00ef0cf8);
          uVar24 = MB_randRangeFloat(60000.0,180000.0);
          uVar28 = 0x3ff07ae140000000;
          MB_randInt(uVar24,0x3ff07ae140000000,5);
          iVar9 = SpawnPart_23(dVar38,uVar42,uVar28,uVar24,&local_1e0);
          if (iVar9 != 0) {
            fVar4 = (float)((double)local_1dc - dVar20);
            fVar1 = (float)((double)local_1e0 - dVar35);
            fVar2 = (float)((double)local_1d8 - dVar40);
            *(float *)(iVar9 + 0x3c) = local_1d4;
            iVar17 = iVar17 + 1;
            dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
            fVar3 = (float)(0.009999999776482582 / dVar20);
            dVar40 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar40 = (double)(fVar2 * fVar3);
            }
            dVar35 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar35 = (double)(fVar1 * fVar3);
            }
            dVar43 = dVar38;
            if (dVar38 - dVar20 < 0.0) {
              dVar43 = (double)(fVar4 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar40 = (double)(fVar2 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar35 = (double)(fVar1 * fVar3);
            }
            if (dVar20 - dVar38 < 0.0) {
              dVar43 = (double)(fVar4 * fVar3);
            }
            *(float *)(iVar9 + 0x30) = (float)dVar35;
            *(float *)(iVar9 + 0x34) = (float)dVar43;
            *(float *)(iVar9 + 0x38) = (float)(dVar40 + dVar21);
          }
        }
        iVar9 = (int)(lVar19 << 4);
        local_1e0 = *(float *)((int)&DAT_00ef0cf0 + iVar9);
        local_1dc = *(float *)((int)&DAT_00ef0cf4 + iVar9);
        local_1d8 = *(float *)((int)&DAT_00ef0cf8 + iVar9);
        local_1d4 = *(float *)((int)&DAT_00ef0cfc + iVar9);
        local_1c4 = 0;
        local_1c8 = 0;
        local_1cc = 0;
        local_1d0 = 0;
        uVar24 = MB_randRangeFloat(60000.0,180000.0);
        iVar9 = SpawnPart_23
                          (dVar38,0x3ff0000000000000,0x3ff0000000000000,uVar24,&local_1e0);
        *(int *)((int)&DAT_00eefa3c + iVar16) = iVar9;
        if (iVar9 != 0) {
          iVar18 = iVar18 + 1;
          *(undefined2 *)(iVar9 + 10) = 200;
          *(undefined4 *)(iVar9 + 0x24) = 2;
          *(undefined1 *)(iVar9 + 0x2a) = 0x7f;
          *(undefined1 *)(iVar9 + 0x2b) = 200;
        }
        dVar20 = (double)local_138;
        *(short *)((int)&DAT_00eefa28 + iVar16) = (short)lVar19;
        *(undefined4 *)((int)&DAT_00eefa2c + iVar16) = 0;
        *(undefined4 *)((int)&DAT_00eefa30 + iVar16) = 0;
        uVar10 = MB_randInt(0x14);
        *(undefined2 *)((int)&DAT_00eefa2a + iVar16) = uVar10;
        dVar40 = (double)MB_randRangeFloat((float)dVar20,0.8);
        *(float *)((int)&DAT_00eefa34 + iVar16) = (float)dVar40;
        dVar40 = (double)MB_randRangeFloat((float)dVar20,0.4);
        iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
        *(float *)((int)&DAT_00eefa38 + iVar16) = (float)dVar40;
      }
    }
    if (iVar9 != 0) {
      iVar7 = (int)((longlong)*(short *)((int)&DAT_00eefa28 + iVar16) << 4);
      dVar35 = (double)(*(float *)((int)&DAT_00ef0ce4 + iVar7) -
                       *(float *)((int)&DAT_00ef0cf4 + iVar7));
      dVar43 = (double)(*(float *)((int)&DAT_00ef0ce0 + iVar7) -
                       *(float *)((int)&DAT_00ef0cf0 + iVar7));
      dVar20 = (double)(*(float *)((int)&DAT_00ef0ce8 + iVar7) -
                       *(float *)((int)&DAT_00ef0cf8 + iVar7));
      dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                   (double)(float)(dVar43 * dVar43 +
                                                  (double)(float)(dVar35 * dVar35))));
      *(float *)((int)&DAT_00eefa2c + iVar16) =
           *(float *)((int)&DAT_00eefa2c + iVar16) + *(float *)((int)&DAT_00eefa38 + iVar16);
      *(undefined2 *)(iVar9 + 10) = 200;
      if (dVar40 < (double)*(float *)((int)&DAT_00eefa2c + iVar16)) {
        sVar11 = *(short *)((int)&DAT_00eefa28 + iVar16) + -1;
        *(short *)((int)&DAT_00eefa28 + iVar16) = sVar11;
        if (sVar11 < 1) {
          DeletePart(*(undefined4 *)((int)&DAT_00eefa3c + iVar16));
          *(undefined4 *)((int)&DAT_00eefa3c + iVar16) = 0;
        }
        else {
          iVar9 = (int)((longlong)*(short *)((int)&DAT_00eefa28 + iVar16) << 4);
          *(float *)((int)&DAT_00eefa2c + iVar16) =
               (float)((double)*(float *)((int)&DAT_00eefa2c + iVar16) - dVar40);
          dVar35 = (double)(*(float *)((int)&DAT_00ef0ce4 + iVar9) -
                           *(float *)((int)&DAT_00ef0cf4 + iVar9));
          dVar43 = (double)(*(float *)((int)&DAT_00ef0ce0 + iVar9) -
                           *(float *)((int)&DAT_00ef0cf0 + iVar9));
          dVar20 = (double)(*(float *)((int)&DAT_00ef0ce8 + iVar9) -
                           *(float *)((int)&DAT_00ef0cf8 + iVar9));
          dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                       (double)(float)(dVar43 * dVar43 +
                                                      (double)(float)(dVar35 * dVar35))));
        }
      }
      if (*(int *)((int)&DAT_00eefa3c + iVar16) != 0) {
        dVar40 = (double)(float)((double)*(float *)((int)&DAT_00eefa2c + iVar16) / dVar40);
        if (*(short *)((int)&DAT_00eefa28 + iVar16) == 2) {
          *(undefined2 *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) = 100;
        }
        else if (*(short *)((int)&DAT_00eefa28 + iVar16) < 2) {
          uVar10 = FastDoubleToInt((double)((float)(1.0 - dVar40) * 100.0));
          *(undefined2 *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) = uVar10;
          if (*(short *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) < 0x3d) {
            *(undefined2 *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 10) = 0x3c;
          }
        }
        if (*(short *)((int)&DAT_00eefa28 + iVar16) == 1) {
          iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
          fVar4 = (float)((double)param_2[1] - (double)*(float *)(iVar9 + 0x14));
          fVar1 = (float)((double)*param_2 - (double)*(float *)(iVar9 + 0x10));
          fVar2 = (float)((double)param_2[2] - (double)*(float *)(iVar9 + 0x18));
          dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
          fVar3 = (float)((double)*(float *)((int)&DAT_00eefa38 + iVar16) / dVar20);
          dVar40 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar40 = (double)(fVar3 * fVar2);
          }
          dVar35 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar35 = (double)(fVar3 * fVar4);
          }
          dVar43 = dVar38;
          if (dVar38 - dVar20 < 0.0) {
            dVar43 = (double)(fVar3 * fVar1);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar40 = (double)(fVar3 * fVar2);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar35 = (double)(fVar3 * fVar4);
          }
          if (dVar20 - dVar38 < 0.0) {
            dVar43 = (double)(fVar3 * fVar1);
          }
          *(float *)(iVar9 + 0x18) = (float)((double)*(float *)(iVar9 + 0x18) + dVar40);
          *(float *)(iVar9 + 0x14) = (float)((double)*(float *)(iVar9 + 0x14) + dVar35);
          *(float *)(iVar9 + 0x10) = (float)((double)*(float *)(iVar9 + 0x10) + dVar43);
          *(float *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 0xc) =
               *(float *)(*(int *)((int)&DAT_00eefa3c + iVar16) + 0xc) *
               (DAT_0071f408 * -0.050000012 + 1.0);
        }
        else {
          iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
          iVar7 = (int)((longlong)*(short *)((int)&DAT_00eefa28 + iVar16) << 4);
          *(float *)(iVar9 + 0x10) =
               (float)(dVar43 * dVar40 + (double)*(float *)((int)&DAT_00ef0cf0 + iVar7));
          *(float *)(iVar9 + 0x14) =
               (float)(dVar35 * dVar40 + (double)*(float *)((int)&DAT_00ef0cf4 + iVar7));
          *(float *)(iVar9 + 0x18) =
               (float)(dVar20 * dVar40 + (double)*(float *)((int)&DAT_00ef0cf8 + iVar7));
          *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)((int)&DAT_00ef0cfc + iVar7);
          sVar11 = *(short *)((int)&DAT_00eefa2a + iVar16);
          Lerp_vec4((float)dVar40,&local_1c0);
          iVar7 = sVar11 + 0x13;
          Lerp_vec4((float)dVar40,local_1b0);
          Lerp_vec4(*(float *)((int)&DAT_00eefa30 + iVar16),&local_1c0);
          fVar3 = *(float *)((int)&DAT_00eefa30 + iVar16) + *(float *)((int)&DAT_00eefa34 + iVar16);
          iVar9 = *(int *)((int)&DAT_00eefa3c + iVar16);
          *(float *)((int)&DAT_00eefa30 + iVar16) = fVar3;
          if (1.0 <= fVar3) {
            *(short *)((int)&DAT_00eefa2a + iVar16) = (short)iVar7 + (short)(iVar7 / 0x14) * -0x14;
            *(float *)((int)&DAT_00eefa30 + iVar16) = fVar3 - 1.0;
          }
          *(float *)(iVar9 + 0x10) = *(float *)(iVar9 + 0x10) + local_1c0;
          *(float *)(iVar9 + 0x14) = *(float *)(iVar9 + 0x14) + local_1bc;
          *(float *)(iVar9 + 0x18) = *(float *)(iVar9 + 0x18) + local_1b8;
        }
      }
    }
    iVar15 = iVar15 + 1;
    iVar16 = iVar16 + 0x18;
    if (199 < iVar15) {
      return local_140;
    }
  } while( true );
}


// 0x01c4f68 (0x24 bytes)
void M1106_001c4f68(void)

{
  DAT_00764010 = 1;
  DAT_00764014 = 1;
  DAT_00ef0db8 = 0;
  return;
}


// 0x01c50b0 (0x3fec bytes)
// strings: 001c508c: '?fffA@' (raw)

/* WARNING: Removing unreachable block (ram,0x001c7350) */
/* WARNING: Removing unreachable block (ram,0x001c7360) */
/* WARNING: Removing unreachable block (ram,0x001c736c) */
/* WARNING: Removing unreachable block (ram,0x001c7374) */
/* WARNING: Type propagation algorithm not settling */
/* Moby 1106 */

void UpdateMoby_1106(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  char cVar24;
  ulonglong uVar13;
  byte bVar25;
  undefined1 uVar26;
  u8 uVar27;
  undefined2 uVar21;
  short sVar22;
  short sVar23;
  uint uVar20;
  int iVar28;
  int iVar29;
  char *pcVar30;
  longlong lVar31;
  longlong lVar32;
  char *pcVar33;
  void **ppvVar34;
  uint uVar35;
  Spline *pSVar36;
  Vec4 *pVVar37;
  u8 *puVar38;
  vec4 *pvVar39;
  uint *puVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  GPiece<16> auStack_3b0;
  GPiece<16> auStack_3a0;
  float afStack_390 [4];
  GPiece<16> auStack_380;
  GPiece<16> auStack_370;
  GPiece<16> auStack_360;
  GPiece<16> auStack_350;
  GPiece<16> local_340;
  GPiece<16> auStack_330;
  GPiece<16> auStack_320;
  GPiece<16> auStack_310;
  GPiece<16> auStack_300;
  GPiece<16> auStack_2f0;
  float local_2e0;
  float local_2dc;
  Vec4 VStack_2d0;
  GPiece<16> auStack_2c0;
  GPiece<16> auStack_2b0;
  GPiece<16> auStack_2a0;
  GPiece<16> auStack_290;
  GPiece<16> auStack_280;
  MobyInstance MStack_270;
  float local_168;
  GPiece<16> auStack_150;
  MobyInstance *local_140;
  undefined4 local_130;
  int local_12c [2];
  GPiece<24> auStack_124;
  GPiece<28> auStack_10c;
  longlong local_f0;
  
  lVar12 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  dVar51 = 2.5;
  DoManipulator(0x4004000000000000,moby,0xb,(Manipulator *)((int)pvVar4 + 0x2a0));
  M1106_001c3370(lVar12);
  if (g_gameMode == GAME_MODE_SCENE) {
    return;
  }
  if ((*(int *)((int)pvVar4 + 0x1a4) != -1) &&
     (iVar14 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x1a4)),
     iVar14 == 0)) {
    return;
  }
  if ((moby->enabled != '\0') &&
     (dVar41 = (double)FUN_005e8548(lVar12 + 0x10,0x951500), dVar41 < 35.0)) {
    MB_SetZBoundsFromGround(lVar12);
    moby->shadow = '\x1c';
  }
  lVar32 = lVar12 + 0x10;
  FUN_005e7e98(auStack_3b0,lVar32);
  M1106_001c1e18(lVar12,pvVar4,(int)pvVar4 + 0x20);
  pVVar37 = &MStack_270.transform.v3;
  dVar50 = 30.0;
  MB_getTarget(0x403e000000000000,lVar12,&DAT_001c4f8c,pVVar37);
  dVar41 = (double)FUN_005e8588(pVVar37,lVar32);
  uVar42 = FUN_005e8338((double)(MStack_270.transform.v3.x - (moby->pos).x),
                        (double)(MStack_270.transform.v3.y - (moby->pos).y));
  dVar43 = (double)FUN_005e8588(lVar32,&g_heroPosition);
  uVar44 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                        (double)(g_heroPosition.y - (moby->pos).y));
  iVar14 = 0;
  iVar15 = FastDecTimerU8((int)pvVar4 + 0x1f7);
  if ((iVar15 != 0) &&
     (((dVar45 = (double)FUN_005e8588(lVar32,&g_heroPosition), 8.0 < dVar45 &&
       (moby->state != '\x05')) ||
      ((dVar45 = (double)FUN_005e8588(lVar32,&g_heroPosition), 6.0 < dVar45 &&
       ((moby->state == '\x05' ||
        ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 1))))))))
  {
    iVar14 = 1;
  }
  uVar16 = FastDecTimerS16((int)pvVar4 + 0x194);
  bVar1 = false;
  uVar35 = (uVar16 != 0);
  iVar15 = FastDecTimerS16((int)pvVar4 + 0x19a);
  if ((iVar15 != 0) && (9.0 < dVar41)) {
    bVar1 = true;
  }
  bVar9 = false;
  if ((((*(char *)((int)pvVar4 + 0x1c7) != '\0') && (local_140 == g_heroMobyPtr)) &&
      (dVar41 < dVar50)) &&
     (dVar45 = (double)FastDiffRots(uVar42,(double)(moby->rotation).z),
     ABS(dVar45) < 1.3962633609771729)) {
    bVar9 = true;
  }
  uVar20 = 0;
  iVar15 = FastDecTimerS16((int)pvVar4 + 0x198);
  uVar27 = moby->state;
  if ((iVar15 != 0) &&
     ((((uVar27 == '\x05' ||
        ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 1)) &&
       (dVar41 < 14.0)) || ((uVar27 != '\x05' && (dVar41 < 10.0)))))) {
    uVar20 = 1;
  }
  iVar15 = 0;
  bVar11 = false;
  dVar45 = 1.0;
  if ((((moby->pos).z + 1.0 < g_heroGroundZ) && (g_standingOnMoby != 0)) &&
     (*(short *)(g_standingOnMoby + 0xa6) < 0x45d && 0x458 < *(short *)(g_standingOnMoby + 0xa6))) {
    bVar11 = true;
  }
  bVar25 = moby->setByGroup;
  if (bVar25 < 4) {
    if (bVar25 == 0) {
      bVar9 = false;
      iVar14 = 0;
    }
    else if (bVar25 < 2) {
      bVar9 = false;
      uVar35 = 0;
      if (uVar27 != '\x01') {
        bVar1 = false;
      }
    }
    else if (bVar25 < 3) {
      uVar20 = 0;
      uVar35 = 0;
      bVar9 = false;
      bVar1 = false;
    }
    else {
      iVar14 = *(int *)((int)pvVar4 + 0x1a8);
      uVar35 = (uint)(ZERO_MASK((-1 - iVar14))) & uVar35;
      uVar20 = (uint)(ZERO_MASK((-1 - iVar14))) & uVar20;
      iVar15 = (int)(ZERO_MASK((-1 - iVar14))) + 1;
      bVar9 = false;
      iVar14 = iVar15;
    }
  }
  else if (bVar25 < 7) {
    if (bVar25 < 5) {
      bVar9 = false;
      uVar35 = 0;
      if (uVar27 != '\x01') {
        bVar1 = false;
      }
    }
    else if (bVar25 < 6) {
      uVar20 = 0;
      uVar35 = 0;
      bVar9 = false;
      bVar1 = false;
    }
    else if (*(int *)((int)pvVar4 + 0x1a8) == -1) {
      iVar14 = 0;
    }
    else {
      iVar15 = 1;
      uVar20 = 0;
      iVar14 = 1;
      uVar35 = 0;
    }
  }
  else if (bVar25 < 8) {
    bVar9 = false;
    uVar35 = 0;
    if (uVar27 != '\x01') {
      bVar1 = false;
    }
  }
  else if (bVar25 < 9) {
    uVar20 = 0;
    uVar35 = 0;
    bVar1 = false;
    bVar9 = false;
  }
  dVar49 = 16.0;
  uVar17 = FastDoubleToInt((double)(*(float *)((int)pvVar4 + 0x20) * 16.0));
  local_f0 = (longlong)(int)*(short *)((int)pvVar4 + 0x24);
  *(uint *)((int)pvVar4 + 0x1b4) = uVar17 & 0xfff0;
  uVar48 = 0x3fe0000000000000;
  iVar18 = FastDoubleToInt
                     ((double)(float)((double)(float)((double)local_f0 - 0.5) * dVar49));
  if (iVar18 <= (int)(uVar17 & 0xfff0)) {
    *(uint *)((int)pvVar4 + 0x1b4) = *(uint *)((int)pvVar4 + 0x1b4) | 0xf;
  }
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 0) {
    uVar17 = (int)*(uint *)((int)pvVar4 + 0x20) >> 0x1f;
    if ((int)((uVar17 >> 1 ^ *(uint *)((int)pvVar4 + 0x20)) - uVar17) < 0x3f000001) {
      *(undefined4 *)((int)pvVar4 + 0x1b4) = 0;
    }
    else {
      iVar19 = FastDoubleToInt((double)*(float *)((int)pvVar4 + 0x20));
      iVar28 = (int)*(short *)((int)pvVar4 + 0x24);
      iVar18 = iVar28 >> 0x1f;
      iVar29 = (int)*(short *)((int)pvVar4 + 0x24);
      iVar18 = ((iVar19 - (iVar19 / ((iVar28 / 6 + iVar18) - (iVar28 / 6 + iVar18 >> 0x1f))) *
                          ((iVar28 / 6 + iVar18) - (iVar28 / 6 + iVar18 >> 0x1f))) * 0x10) /
               ((iVar29 / 6 + (iVar29 >> 0x1f)) - (iVar29 / 6 + (iVar29 >> 0x1f) >> 0x1f));
      *(uint *)((int)pvVar4 + 0x1b4) =
           *(int *)((int)pvVar4 + 0x1b4) + (iVar18 + (iVar18 >> 0x1f & -iVar18) & 0xfU);
    }
  }
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 2) {
    *(int *)((int)pvVar4 + 0x1b4) = *(int *)((int)pvVar4 + 0x1b4) + 0xf;
  }
  if (moby->state != '\0' && moby->state != '\b') {
    M1106_001c3478(lVar12);
  }
  cVar24 = *(char *)((int)pvVar4 + 0x1c5);
  if (cVar24 == '\x01') {
    cVar24 = '\x01';
    if (*(int *)((int)pvVar4 + 0x1f8) == -1) {
      iVar18 = PlayMobySound(0xf,4,moby);
      *(int *)((int)pvVar4 + 0x1f8) = iVar18;
      cVar24 = *(char *)((int)pvVar4 + 0x1c5);
    }
    fVar2 = DAT_0071f408 * 0.01 + *(float *)((int)pvVar4 + 0x1c8);
    dVar46 = (double)fVar2;
    *(float *)((int)pvVar4 + 0x1c8) = fVar2;
    if (dVar45 <= dVar46) {
      cVar24 = '\0';
      *(undefined1 *)((int)pvVar4 + 0x1c5) = 0;
    }
    if (dVar45 < dVar46) {
      *(undefined4 *)((int)pvVar4 + 0x1c8) = 0x3f800000;
    }
  }
  if (cVar24 == '\x02') {
    uVar13 = (ulonglong)*(uint *)((int)pvVar4 + 0x1f8);
    if (*(uint *)((int)pvVar4 + 0x1f8) == 0xffffffff) {
      iVar18 = PlayMobySound(0xf,4,moby);
      uVar13 = (ulonglong)iVar18;
      *(int *)((int)pvVar4 + 0x1f8) = iVar18;
    }
    dVar46 = -(double)(DAT_0071f408 * 0.01 - *(float *)((int)pvVar4 + 0x1c8));
    *(float *)((int)pvVar4 + 0x1c8) = (float)dVar46;
    dVar47 = 0.0;
    if (dVar46 <= 0.0) {
      if ((((int)uVar13 != -1) &&
          (iVar18 = (int)(uVar13 << 7) - (int)(uVar13 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar18 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar18 + 4) != '\0')) {
        sound_Kill((int)uVar13);
        dVar46 = (double)*(float *)((int)pvVar4 + 0x1c8);
      }
      *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
      *(undefined1 *)((int)pvVar4 + 0x1c5) = 0;
    }
    if (dVar46 < dVar47) {
      *(undefined4 *)((int)pvVar4 + 0x1c8) = 0;
    }
  }
  dVar46 = 0.0;
  if (0 < *(int *)((int)pvVar4 + 0x1c8)) {
    RegisterMobyDraw(&PTR_M1106_001c13d0_00708ba8,moby);
  }
  M1106_001c30c0(lVar12,pvVar4,&g_heroPosition);
  bVar25 = moby->state;
  if ((bVar25 != 0) && (bVar25 != 0x10 && bVar25 != 10)) {
    iVar18 = RegisterHUDCallback
                       (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                        &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                        (int *)((int)pvVar4 + 0x1b4),
                        (int)((longlong)*(short *)((int)pvVar4 + 0x24) << 4) + 0xf);
    *(int *)((int)pvVar4 + 0x1b0) = iVar18;
    bVar25 = moby->state;
  }
  iVar18 = g_standingOnMoby;
  if (8 < bVar25) {
    if (bVar25 < 0xe) {
      if (bVar25 < 0xb) {
        if (bVar25 < 10) {
          if ((0 < *(int *)((int)pvVar4 + 0x164)) ||
             (iVar14 = M1106_001c2bb8(lVar12,pvVar4,(int)pvVar4 + 0x150,7,1),
             iVar14 == 0)) {
            uVar42 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x150) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar4 + 0x154) - (moby->pos).y));
            OrganicDeltAngSpeed
                      (uVar42,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                       (double)(g_FrameTime * 2.0943952),lVar12,&DAT_00720000,
                       (int)pvVar4 + 0x168);
            iVar14 = *(int *)((int)pvVar4 + 0x164);
            if (iVar14 == 5) {
              moby->unk58 = 1.0;
              *(undefined4 *)((int)pvVar4 + 0x164) = 0;
              *(undefined4 *)((int)pvVar4 + 0x160) = 0;
              bVar25 = moby->animationId;
              uVar35 = rand();
              if ((uint)bVar25 != (uVar35 & 1)) {
                uVar35 = rand();
                uVar42 = MB_randRange(0,7);
                uVar44 = MB_randRange(0x1b,0x2d);
                MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
              }
              moby->state = '\x01';
            }
            else if (iVar14 == 4) {
              iVar14 = (int)pvVar4 + 0x110;
              puVar40 = &MStack_270.glowRgba;
              FUN_005e81f0(puVar40,(int)pvVar4 + 0x120,iVar14);
              FUN_005e7f98((double)DAT_0071f408,puVar40,puVar40);
              FUN_005e7f54(iVar14,iVar14,puVar40);
              uVar21 = idol::GetAnimDuration(0x1e);
              M1106_001bf8b0
                        (10.0,lVar12,pvVar4,3,iVar14,uVar21,0xffffffff800060ff,0);
              if ((*(int *)((int)pvVar4 + 0x164) != 0) &&
                 (iVar14 = FastDecTimerS32((int)pvVar4 + 0x160), iVar14 != 0)) {
                *(undefined4 *)((int)pvVar4 + 0x164) = 5;
              }
              RegisterMobyDraw(&PTR_M1106_001c1a58_00708bb8,moby);
            }
            else if (iVar14 == 3) {
              dVar41 = (double)FUN_005e8588(lVar32,auStack_150);
              fVar2 = *(float *)((int)pvVar4 + 0x16c) + DAT_0071f408;
              *(float *)((int)pvVar4 + 0x16c) = fVar2;
              if (dVar41 <= (double)fVar2) {
                *(undefined4 *)((int)pvVar4 + 0x164) = 4;
              }
              iVar14 = FastDecTimerS32((int)pvVar4 + 0x160);
              if (iVar14 != 0) {
                uVar16 = idol::GetAnimDuration(0x14);
                *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
              }
              RegisterMobyDraw(&PTR_M1106_001c1a58_00708bb8,moby);
            }
            else if (iVar14 == 2) {
              bVar1 = moby->animationId != '\a';
              if (((moby->updateId != '\a') || (bVar1)) && (bVar1)) {
                uVar42 = MB_randRange(7,10);
                MB_SetAnimation(lVar12,7,0,uVar42);
              }
              iVar14 = FastDecTimerS32((int)pvVar4 + 0x160);
              if (iVar14 != 0) {
                uVar16 = idol::GetAnimDuration(10);
                *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
                uVar44 = 0x41286a0000000000;
                uVar42 = 0x4014000000000000;
                SpawnPart_61(0x41286a0000000000,0x4014000000000000,lVar12,0);
                SpawnPart_61(uVar44,uVar42,lVar12,1);
              }
              dVar41 = (double)BlendAnimFrame(moby);
              if (31.5 <= dVar41) {
                *(undefined4 *)((int)pvVar4 + 0x16c) = 0;
                *(undefined4 *)((int)pvVar4 + 0x164) = 3;
                *(undefined4 *)((int)pvVar4 + 0x11c) = 0;
              }
            }
            else if (iVar14 == 1) {
              uVar27 = moby->updateId;
              bVar1 = moby->animationId != '\a';
              if (((uVar27 != '\a') || (bVar1)) && (bVar1)) {
                uVar42 = MB_randRange(10,0xd);
                MB_SetAnimation(lVar12,7,0,uVar42);
                uVar27 = moby->updateId;
              }
              if ((uVar27 == '\a') &&
                 (dVar41 = (double)BlendAnimFrame(moby), 9.5 <= dVar41)) {
                GetBonePosition(lVar12,0,&MStack_270.field43_0x70);
                GetBonePosition(lVar12,1,&MStack_270.colorManipulator);
                ppvVar34 = &MStack_270.pAnimationLayers;
                FUN_005e7f54(ppvVar34,&MStack_270.field43_0x70,&MStack_270.colorManipulator);
                FUN_005e822c(uVar48,ppvVar34,ppvVar34);
                FUN_005e7e98((int)pvVar4 + 0x110,ppvVar34);
                iVar14 = (int)pvVar4 + 0x130;
                FUN_005e81f0(iVar14,(int)pvVar4 + 0x150,(int)pvVar4 + 0x110);
                FUN_005e7f98((double)DAT_0071f408,iVar14,iVar14);
                *(undefined4 *)((int)pvVar4 + 0x164) = 2;
              }
            }
            else if (iVar14 == 0) {
              if (moby->animationId != '\a') {
                uVar42 = MB_randRange(10,0xd);
                MB_SetAnimation(lVar12,7,0,uVar42);
              }
              *(undefined4 *)((int)pvVar4 + 0x160) = 0;
              *(undefined4 *)((int)pvVar4 + 0x164) = 1;
            }
          }
        }
        else {
          if (*(int *)((int)pvVar4 + 0x1b0) != -1) {
            Hud_SetEntryValueById(*(int *)((int)pvVar4 + 0x1b0),0);
            *(undefined4 *)((int)pvVar4 + 0x1b0) = 0xffffffff;
          }
          if ((moby->field43_0x70 & 2U) != 0) {
            iVar14 = (int)pvVar4 + 0x100;
            FUN_005e7f98(dVar45,iVar14,iVar14);
            *(undefined4 *)((int)pvVar4 + 0x108) = 0x3f800000;
            FUN_005e7e98(&MStack_270.collCount,lVar32);
            MStack_270.handle = (int)(float)((double)*(float *)((int)pvVar4 + 0x1b8) + dVar45)
            ;
            MB_genericExplosion
                      (dVar46,dVar46,0x401c000000000000,0x4014000000000000,0x4024000000000000,dVar45
                       ,0x4049000000000000,lVar12,iVar14,&MStack_270.collCount,&DAT_001c4f8c,1,0x14,
                       0xc,0x40);
            iVar14 = *(int *)((int)pvVar4 + 0x1cc);
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            if (iVar14 != -1) {
              FUN_0044cddc(g_MobyInstance + iVar14);
            }
            (moby->pos).z = 20.0;
            moby->state = '\x10';
          }
        }
      }
      else if (bVar25 < 0xc) {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (bVar11) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            FUN_005e7e98((int)pvVar4 + 0x150,iVar18 + 0x10);
            *(float *)((int)pvVar4 + 0x158) = *(float *)((int)pvVar4 + 0x158) + 3.0;
            moby->state = '\t';
          }
          else {
            moby->state = '\x01';
          }
        }
      }
      else if (bVar25 < 0xd) {
        dVar43 = (double)*(float *)((int)pvVar4 + 0x20);
        iVar14 = (int)*(short *)((int)pvVar4 + 0x24);
        dVar41 = (double)FastIntToDouble
                                   ((iVar14 / 6 + (iVar14 >> 0x1f)) -
                                    (iVar14 / 6 + (iVar14 >> 0x1f) >> 0x1f));
        if (dVar41 < dVar43) {
          if (moby->animationId != '\v') {
            MB_SetAnimation(lVar12,0xb,0x3d,1);
          }
        }
        else if (moby->animationId != '\b') {
          uVar42 = MB_randRange(10,0xd);
          MB_SetAnimation(lVar12,8,0x35,uVar42);
        }
        moby->state = '\r';
        *(undefined4 *)((int)pvVar4 + 0x108) = 0;
        bVar25 = moby->setByGroup;
        uVar20 = bVar25 + 1;
        uVar35 = (uint)bVar25;
        if ((int)((uint)bVar25 + (uVar20 * 0x55 >> 8) * -3) < 2) {
          moby->setByGroup = (char)uVar20;
          uVar35 = uVar20;
        }
        uVar35 = uVar35 & 0xff;
        uVar20 = uVar35 + 1;
        if ((int)(uVar35 - ((uVar20 * 0x55 >> 8) + (uVar20 * 0x55 >> 8) * 2)) < 2) {
          moby->setByGroup = (char)uVar20;
          uVar35 = uVar20;
        }
        if (7 < (uVar35 & 0xff)) {
          moby->setByGroup = '\b';
        }
        bVar25 = *(byte *)((int)pvVar4 + 0x19d);
        uVar13 = (ulonglong)bVar25;
        iVar14 = *(int *)((int)pvVar4 + (uint)bVar25 * 4 + 0x1d8);
        if (iVar14 != -1) {
          if ((iVar14 != -1) &&
             (iVar15 = *(int *)((int)pvVar4 + (uint)bVar25 * 4 + 0x1e4), iVar15 != -1)) {
            pvVar5 = g_MobyInstance[iVar14].pVar;
            pvVar6 = g_MobyInstance[iVar15].pVar;
            iVar14 = *(int *)((int)pvVar5 + 0x28);
            if ((iVar14 != -1) && (*(int *)((int)pvVar6 + 0x28) != -1)) {
              dVar41 = (double)FUN_005e8588(&g_heroPosition,&Cuboids[iVar14].pos);
              dVar43 = (double)FUN_005e8588(&g_heroPosition,
                                            &Cuboids[*(int *)((int)pvVar6 + 0x28)].pos);
              if (dVar41 <= dVar43) {
                iVar14 = *(int *)((int)pvVar5 + 0x28);
                dVar41 = (double)FUN_005e8338((double)(Cuboids[iVar14].pos.x - (moby->pos).x),
                                              (double)(Cuboids[iVar14].pos.y - (moby->pos).y));
                (moby->rotation).z = (float)dVar41;
              }
              else {
                uVar13 = uVar13 + 3;
                dVar41 = (double)FUN_005e8338((double)(Cuboids[*(int *)((int)pvVar6 + 0x28)].pos.x -
                                                      (moby->pos).x),
                                              (double)(Cuboids[*(int *)((int)pvVar6 + 0x28)].pos.y -
                                                      (moby->pos).y));
                (moby->rotation).z = (float)dVar41;
              }
            }
          }
          g_MobyInstance[*(int *)((int)pvVar4 + (int)(uVar13 << 2) + 0x1d8)].setByGroup = '\x01';
        }
      }
      else {
        dVar41 = (double)BlendAnimFrame(moby);
        if (10.0 < dVar41) {
          GetBonePosition(lVar12,10,auStack_2c0);
          iVar14 = MB_randInt(0x1a);
          if (iVar14 == 0) {
            SpawnPart_45
                      (0x3ff99999a0000000,0x40ccb60000000000,auStack_2c0,&DAT_001c4f8c,0,0x40103080)
            ;
          }
        }
        if (moby->setByGroup == '\b') {
          dVar41 = (double)*(float *)((int)pvVar4 + 0x108);
          iVar14 = (int)pvVar4 + 0x100;
          FUN_005e822c(0x3fe6666660000000,iVar14,iVar14);
          *(float *)((int)pvVar4 + 0x108) =
               -(float)((double)g_FrameTime * 9.800000190734863 - dVar41);
          FUN_005e7f54(lVar32,lVar32,iVar14);
          fVar7 = (moby->pos).z;
          uVar35 = (int)fVar7 >> 0x1f;
          uVar20 = (int)*(uint *)((int)pvVar4 + 0x1b8) >> 0x1f;
          if ((int)((uVar20 >> 1 ^ *(uint *)((int)pvVar4 + 0x1b8)) - uVar20) <=
              (int)((uVar35 >> 1 ^ (uint)fVar7) - uVar35)) goto LAB_001c8fe8;
        }
        else {
          dVar41 = (double)BlendAnimFrame(moby);
          if (dVar41 <= 79.0) goto LAB_001c8fe8;
        }
        uVar16 = idol::GetAnimDuration(10);
        *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
        *(undefined1 *)((int)pvVar4 + 0x1c5) = 2;
        moby->state = '\x0e';
        *(int *)((int)pvVar4 + 0x164) = (int)*(short *)((int)pvVar4 + 0x24) / 6;
      }
    }
    else if (bVar25 < 0x10) {
      if (bVar25 < 0xf) {
        iVar14 = (int)pvVar4 + 0x100;
        FUN_005e822c(0x3fd99999a0000000,iVar14,iVar14);
        FUN_005e7f54(lVar32,lVar32,iVar14);
        dVar41 = (double)BlendAnimFrame(moby);
        dVar43 = 168.0;
        if (dVar41 < 168.0) {
          GetBonePosition(lVar12,10,auStack_2b0);
          iVar14 = MB_randInt(0x1a);
          if (iVar14 == 0) {
            SpawnPart_45
                      (0x3ff99999a0000000,0x40ccb60000000000,auStack_2b0,&DAT_001c4f8c,0,0x40103080)
            ;
          }
        }
        iVar14 = MB_MayaFrameTrigger((float)dVar43,moby);
        if (iVar14 != 0) {
          GetBonePosition(lVar12,5,auStack_2a0);
          Spawn_Moby1046
                    (dVar45,0x4039000000000000,0x4000000000000000,
                     (double)(g_FrameTime * 8.0),dVar45,lVar12,auStack_2a0);
        }
        iVar14 = MB_MayaFrameTrigger(168.5,moby);
        if (iVar14 != 0) {
          GetBonePosition(lVar12,6,auStack_290);
          Spawn_Moby1046
                    (dVar45,0x4039000000000000,0x4000000000000000,
                     (double)(g_FrameTime * 8.0),dVar45,lVar12,auStack_290);
          M1106_001bfb58(lVar12);
        }
        if (*(int *)((int)pvVar4 + 0x164) < 1) {
          iVar14 = FastDecTimerS32((int)pvVar4 + 0x160);
          if (iVar14 != 0) {
            bVar25 = *(byte *)((int)pvVar4 + 0x19d);
            if (bVar25 == 0) {
              FUN_005e7e98((int)pvVar4 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x10
                          );
              *(byte *)((int)pvVar4 + 0x19c) = *(byte *)((int)pvVar4 + 0x19c) & 0xfe;
            }
            else if (bVar25 < 2) {
              FUN_005e7e98((int)pvVar4 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x20
                          );
              *(byte *)((int)pvVar4 + 0x19c) = *(byte *)((int)pvVar4 + 0x19c) & 0xfd;
            }
            else if (bVar25 < 3) {
              dVar41 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x30);
              dVar43 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x40);
              if (dVar41 <= dVar43) {
                FUN_005e7e98((int)pvVar4 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x40);
              }
              else {
                FUN_005e7e98((int)pvVar4 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar4 + 0x1a0)]) + 0x30);
              }
              *(byte *)((int)pvVar4 + 0x19c) = *(byte *)((int)pvVar4 + 0x19c) & 0xfb;
            }
            *(uint *)((int)pvVar4 + 0x1a8) =
                 (uint)*(byte *)((int)pvVar4 + *(byte *)((int)pvVar4 + 0x19d) + 0x1d4);
            uVar42 = M1106_001c1d28(lVar12,pvVar4,auStack_10c);
            MB_SplineMarkCrossings
                      (auStack_10c,uVar42,*(undefined4 *)((int)pvVar4 + 0x188));
            moby->state = '\x0f';
          }
        }
        else {
          iVar14 = FastDecTimerS32((int)pvVar4 + 0x160);
          if (iVar14 != 0) {
            *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
            *(int *)((int)pvVar4 + 0x164) = *(int *)((int)pvVar4 + 0x164) + -1;
            *(float *)((int)pvVar4 + 0x20) =
                 (float)((double)*(float *)((int)pvVar4 + 0x20) - dVar45);
            MB_UpdateLightsTransition(lVar12,(int)pvVar4 + 0x60);
            if (*(int *)((int)pvVar4 + 0x20) < 1) {
              *(undefined4 *)((int)pvVar4 + 0x20) = 0;
              if (moby->animationId != '\b') {
                uVar42 = MB_randRange(10,0xd);
                MB_SetAnimation(lVar12,8,0,uVar42);
              }
              if (*(int *)((int)pvVar4 + 0x1f0) != -1) {
                FUN_004d407c(lVar12,1);
                MB_SpawnBoltsFromCrate(lVar12,0,0xffffffffffffffff);
                SetLevelFlag(moby->levelFlagIdx);
                SetSpawnPoint
                          ((Vec4 *)&Cuboids[*(int *)((int)pvVar4 + 0x1f0)].pos,
                           (Vec4 *)&Cuboids[*(int *)((int)pvVar4 + 0x1f0)].rot);
              }
              moby->state = '\n';
            }
            else {
              if (*(int *)((int)pvVar4 + 0x164) < 1) {
                uVar16 = idol::GetAnimDuration(0x14);
              }
              else {
                uVar16 = idol::GetAnimDuration(10);
              }
              *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
            }
          }
        }
      }
      else {
        dVar41 = (double)BlendAnimFrame(moby);
        if (198.0 < dVar41) {
          if (moby->animationId != '\n') {
            MB_SetAnimation(lVar12,10,0,0);
          }
          GetBonePosition(lVar12,10,auStack_280);
          FUN_005e7e98((int)pvVar4 + 0xc0,auStack_280);
          *(undefined4 *)((int)pvVar4 + 200) = *(undefined4 *)((int)pvVar4 + 0x128);
          local_130 = 10;
          MB_ComputeSelectedJoints(lVar12,1,&local_130,&MStack_270.levelFlagIdx);
          MB_MtxToEuler((int)&MStack_270.levelFlagIdx,&MStack_270);
          dVar41 = (double)FastWrapRot((moby->rotation).z,MStack_270.bSphere.z);
          *(float *)((int)pvVar4 + 0xcc) = (float)dVar41;
        }
        if (moby->updateId == '\n') {
          FUN_005e7e98(lVar32,(int)pvVar4 + 0xc0);
          (moby->rotation).z = *(f32 *)((int)pvVar4 + 0xcc);
          if (*(int *)((int)pvVar4 + (uint)*(byte *)((int)pvVar4 + 0x19d) * 4 + 0x1d8) != -1) {
            g_MobyInstance[*(int *)((int)pvVar4 + (uint)*(byte *)((int)pvVar4 + 0x19d) * 4 + 0x1d8)].
            setByGroup = '\0';
          }
          moby->unk58 = 1.5;
          moby->setByGroup = moby->setByGroup + '\x01';
          *(undefined4 *)((int)pvVar4 + 0x298) = 0;
          moby->state = '\x06';
          uVar16 = idol::GetAnimDuration(0x37);
          *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
        }
      }
    }
    else if (bVar25 < 0x11) {
      if (*(short *)((int)pvVar4 + 0x280) != -1) {
        DeletePointLight();
      }
      iVar14 = *(int *)((int)pvVar4 + 0x1d0);
      if (iVar14 == -1) {
        DeleteMoby(moby);
        return;
      }
      fVar7 = g_MobyInstance[iVar14].pos.z;
      fVar2 = g_MobyInstance[iVar14].pos.z;
      uVar35 = (int)fVar7 >> 0x1f;
      if (0x4209ffff < (int)((uVar35 >> 1 ^ (uint)fVar7) - uVar35)) {
        DeleteMoby(moby);
        return;
      }
      g_MobyInstance[iVar14].pos.z = (34.6 - fVar2) * 0.1 + fVar2;
    }
    goto LAB_001c8fe8;
  }
  if (2 < bVar25) {
    if (bVar25 < 5) {
      if (bVar25 < 4) {
        OrganicDeltAngSpeed
                  (uVar42,(double)(g_FrameTimeSq * 1.5707964),(double)(g_FrameTimeSq * 0.6981317),
                   (double)(g_FrameTime * 1.0471976),lVar12);
        iVar14 = MB_MayaFrameTrigger(31.0,moby);
        if (((iVar14 != 0) || (iVar14 = MB_MayaFrameTrigger(67.0,moby), iVar14 != 0)) ||
           (iVar14 = MB_MayaFrameTrigger(101.0,moby), iVar14 != 0)) {
          *(int *)((int)pvVar4 + 0x164) = *(int *)((int)pvVar4 + 0x164) + 1;
          FUN_005e7e98(auStack_3a0,lVar32);
          *(undefined4 *)((int)pvVar4 + 0x168) = 0;
          Spawn_Moby1046
                    (dVar45,0x4039000000000000,0x4000000000000000,
                     (double)(g_FrameTime * 8.0),dVar45,lVar12,auStack_3a0);
          GetBonePosition(lVar12,(*(uint *)((int)pvVar4 + 0x164) & 1) + 5,auStack_3a0);
          uVar21 = idol::GetAnimDuration(0x1e);
          M1106_001bf8b0
                    (10.0,lVar12,pvVar4,1,auStack_3a0,uVar21,0xffffffff800060ff,0);
          iVar14 = 0;
          dVar41 = 0.39269909262657166;
          dVar50 = 0.7853981852531433;
          dVar43 = 5.0;
          uVar42 = 0x3fe8000000000000;
          do {
            dVar45 = (double)MB_randRot();
            dVar49 = (double)MB_randRangeFloat((float)dVar41,(float)dVar50);
            MB_SphericalToVector
                      ((float)((double)g_FrameTime * dVar43),(float)dVar45,(float)dVar49,
                       afStack_390);
            FUN_005e7f98(uVar42,auStack_380,afStack_390);
            FUN_005e7f54(auStack_380,auStack_380,auStack_3a0);
            SpawnPart_65(auStack_380,afStack_390);
            iVar14 = iVar14 + 1;
          } while (iVar14 < 0x37);
          M1106_001bfb58(lVar12);
        }
        if ((2 < *(int *)((int)pvVar4 + 0x164)) &&
           (iVar14 = MB_MayaFrameTrigger(51.0,moby), iVar14 != 0)) {
          if (bVar1) {
            *(undefined2 *)((int)pvVar4 + 0x194) = 0xc0;
            *(undefined4 *)((int)pvVar4 + 0x160) = 0xaa;
          }
          else {
            uVar21 = idol::GetAnimDuration(0x3c);
            *(undefined2 *)((int)pvVar4 + 0x194) = uVar21;
            uVar16 = idol::GetAnimDuration(0x37);
            sVar23 = *(short *)((int)pvVar4 + 0x19a);
            *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
            sVar22 = idol::GetAnimDuration(0x37);
            if (sVar23 <= sVar22) {
              sVar23 = idol::GetAnimDuration(0x3c);
              *(short *)((int)pvVar4 + 0x19a) = *(short *)((int)pvVar4 + 0x19a) + sVar23;
            }
          }
          moby->unk58 = 1.0;
          bVar25 = moby->animationId;
          uVar35 = rand();
          if ((uint)bVar25 != (uVar35 & 1)) {
            uVar35 = rand();
            uVar42 = MB_randRange(0,0xf);
            uVar44 = MB_randRange(0x1e,0x2a);
            MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
          }
          moby->state = '\x01';
        }
      }
      else {
        iVar14 = M1106_001c2bb8(lVar12,pvVar4,&g_heroPosition,5,0);
        if (iVar14 == 0) {
          iVar14 = *(int *)((int)pvVar4 + 0x160);
          uVar35 = idol::GetAnimDuration(0x3c);
          if (iVar14 < (int)(((int)uVar35 >> 1) + (uint)((int)uVar35 < 0 && (uVar35 & 1) != 0))) {
            GetBonePosition(lVar12,2,auStack_370);
            uVar21 = idol::GetAnimDuration(0x1e);
            M1106_001bf8b0
                      (10.0,lVar12,pvVar4,2,auStack_370,uVar21,0xffffffff800060ff,0);
            uVar42 = 0x3fc99999a0000000;
            if (worldUpdateTime ==
                (((int)worldUpdateTime >> 3) +
                (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8) {
              SpawnPart_61(dVar46,0x3fc99999a0000000,lVar12,2);
            }
            uVar35 = worldUpdateTime - 4;
            if (uVar35 == (((int)uVar35 >> 3) + (uint)((int)uVar35 < 0 && (uVar35 & 7) != 0)) * 8) {
              SpawnPart_61(dVar46,uVar42,lVar12,3);
            }
          }
          if (moby->updateId == '\x05') {
            FUN_005e7e98(auStack_360,&MStack_270.transform.v3);
            GetGroundZ(uVar48,auStack_360,0);
            iVar14 = *(int *)((int)pvVar4 + 0x160) + 1;
            *(int *)((int)pvVar4 + 0x160) = iVar14;
            if (*(int *)((int)pvVar4 + 0x164) == 0) {
              FUN_005e81f0(auStack_350,lVar32,auStack_360);
              FUN_005e7f98(dVar45,auStack_350,auStack_350);
              FUN_005e7f98(0x3fb3333340000000,auStack_310,auStack_350);
              cosf(local_168);
              FUN_005e8128((double)local_168);
              FUN_005e81c0(local_340,auStack_350);
              FUN_005e7f98(auStack_300,auStack_350);
              FUN_005e81f0(local_340,local_340,auStack_300);
              uVar42 = 0x4020000000000000;
              FUN_005e7f98(0x4020000000000000,auStack_330,auStack_350);
              FUN_005e7f98(0x4010000000000000,local_340,local_340);
              FUN_005e7f54(auStack_330,auStack_330,auStack_360);
              FUN_005e81f0(auStack_330,auStack_330,local_340);
              FUN_005e7f98(uVar42,local_340,local_340);
              FUN_005e7f54(local_340,local_340,auStack_360);
              FUN_005e7f98(0x4000000000000000,auStack_350,auStack_350);
              FUN_005e81f0(local_340,local_340,auStack_350);
              FUN_005e7e98(auStack_2f0,&DAT_00969de0);
              iVar14 = idol::GetAnimDuration(0x28);
              local_f0 = (longlong)iVar14;
              FUN_005e822c((double)local_f0,auStack_320,auStack_2f0);
              FUN_005e81f0(auStack_350,local_340,auStack_330);
              FUN_005e822c(uVar48,auStack_350,auStack_350);
              FUN_005e7f54(auStack_350,auStack_350,auStack_330);
              FUN_005e81f0(auStack_350,auStack_350,auStack_360);
              FUN_005e81f0(auStack_350,auStack_350,auStack_310);
              FUN_005e81f0(auStack_350,auStack_320,auStack_350);
              FUN_005e7f54(auStack_330,auStack_330,auStack_350);
              FUN_005e7f54(local_340,local_340,auStack_350);
              FUN_005e7e98((int)pvVar4 + 0x110,auStack_330);
              FUN_005e7e98((int)pvVar4 + 0x120,local_340);
              FUN_005e7e98((int)pvVar4 + 0x140,auStack_330);
              iVar15 = (int)pvVar4 + 0x130;
              FUN_005e81f0(iVar15,local_340,auStack_330);
              iVar14 = idol::GetAnimDuration(0x3c);
              local_f0 = (longlong)iVar14;
              FUN_005e822c((double)(float)(dVar45 / (double)local_f0),iVar15,iVar15);
              FUN_005e7e98((int)pvVar4 + 0x150,(int)pvVar4 + 0x140);
              *(undefined4 *)((int)pvVar4 + 0x15c) = 0;
              *(undefined4 *)((int)pvVar4 + 0x164) = 1;
            }
            else {
              iVar15 = idol::GetAnimDuration(0x3c);
              if (iVar14 < iVar15) {
                FUN_005e7f54((int)pvVar4 + 0x140,(int)pvVar4 + 0x140,(int)pvVar4 + 0x130);
                RegisterMobyDraw(&PTR_M1106_001c00b8_00708b90,moby);
                *(undefined4 *)((int)pvVar4 + 0x164) = 2;
              }
              else {
                *(undefined4 *)((int)pvVar4 + 0x164) = 0;
                uVar21 = idol::GetAnimDuration(0xf0);
                *(undefined2 *)((int)pvVar4 + 0x19a) = uVar21;
                uVar16 = idol::GetAnimDuration(200);
                *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
                moby->state = '\x01';
              }
            }
          }
        }
      }
    }
    else if (bVar25 < 7) {
      dVar43 = (double)(moby->rotation).z;
      uVar42 = 0x4000000000000000;
      M1106_001c1d28(lVar12,pvVar4,auStack_124);
      if (iVar15 == 0) {
        uVar42 = 0x4018000000000000;
        if (((*(int *)((int)pvVar4 + 0x29c) == -1) || ((*(byte *)((int)pvVar4 + 0x19c) & 3) != 0))
           || (iVar18 = MB_IsPntInCuboid
                                  (&MStack_270.transform.v3,(longlong)*(int *)((int)pvVar4 + 0x29c))
              , iVar18 == 0)) {
          FUN_005e7e98(&VStack_2d0,&MStack_270.transform.v3);
          iVar18 = PathFindClosestPnt
                             ((float)dVar46,&VStack_2d0,Splines[*(int *)((int)pvVar4 + 0x290)]);
          FUN_005e7e98(&VStack_2d0,Splines[*(int *)((int)pvVar4 + 0x290)]->points + iVar18);
          dVar50 = (double)FUN_005e8588(lVar32,&VStack_2d0);
          if (dVar50 < (double)(float)((double)*(float *)((int)pvVar4 + 0x9c) + dVar45)) {
            FUN_005e7e98(&VStack_2d0,&MStack_270.transform.v3);
          }
        }
        else {
          iVar18 = PathFindClosestPnt
                             ((float)dVar46,(Vec4 *)&MStack_270.transform.v3,
                              Splines[*(int *)((int)pvVar4 + 0x1a0)]);
          FUN_005e7e98(&VStack_2d0,Splines[*(int *)((int)pvVar4 + 0x1a0)]->points + iVar18);
          dVar50 = (double)FUN_005e8588(lVar32,&VStack_2d0);
        }
      }
      else {
        FUN_005e7e98(&VStack_2d0,
                     Splines[*(int *)((int)pvVar4 + 0x188)]->points + *(int *)((int)pvVar4 + 0x1a8))
        ;
        dVar50 = (double)FUN_005e8588(lVar32,&VStack_2d0);
      }
      M1106_001c2b20(dVar50,uVar42,0x3ff8000000000000,lVar12,pvVar4);
      if ((*(uint *)((int)pvVar4 + 0x298) & 3) == 0) {
        M1106_001c2500(lVar12,pvVar4,&VStack_2d0,(int)pvVar4 + 0x140);
      }
      FUN_005e7e98(&local_2e0,(int)pvVar4 + 0x140);
      dVar45 = (double)(moby->rotation).z;
      fVar2 = (moby->pos).x;
      *(int *)((int)pvVar4 + 0x298) = *(int *)((int)pvVar4 + 0x298) + 1;
      dVar50 = (double)FUN_005e8338((double)(local_2e0 - fVar2),(double)(local_2dc - (moby->pos).y))
      ;
      dVar50 = (double)FastSubRots((float)dVar45,(float)dVar50);
      if (dVar50 <= (double)*(float *)((int)pvVar4 + 0x98)) {
        uVar20 = M1106_001c26e0(uVar42,lVar12,pvVar4,&VStack_2d0,&local_2e0);
        FastSubRots((moby->rotation).z,(float)dVar43);
        dVar43 = (double)FUN_005e8030((int)pvVar4 + 0x100);
        bVar10 = false;
        if ((iVar15 == 0) && (dVar41 < 20.0)) {
          bVar10 = true;
        }
        if (((uVar20 & 4) != 0) || (dVar43 <= (double)(g_FrameTime * 0.01))) {
          uVar26 = idol::GetAnimDuration(0x5a);
          *(undefined1 *)((int)pvVar4 + 0x1f7) = uVar26;
          bVar25 = moby->animationId;
          uVar35 = rand();
          if ((uint)bVar25 != (uVar35 & 1)) {
            uVar35 = rand();
            uVar42 = MB_randRange(0,9);
            uVar44 = MB_randRange(0x14,0x28);
            MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
          }
          *(undefined4 *)((int)pvVar4 + 0x1a8) = 0xffffffff;
          moby->state = '\x01';
          goto LAB_001c8fe8;
        }
        if (moby->animationId == '\n') {
          if ((bVar10) && ((moby->field43_0x70 & 2U) != 0)) {
            uVar42 = MB_randRange(10,0xd);
            MB_SetAnimation(lVar12,0xc,5,uVar42);
          }
        }
        else if (((!bVar10) && ((moby->field43_0x70 & 2U) != 0)) && (moby->animationId != '\n')) {
          uVar42 = MB_randRange(10,0xd);
          MB_SetAnimation(lVar12,10,5,uVar42);
        }
        iVar15 = FastDecTimerS32((int)pvVar4 + 0x160);
        if (iVar15 != 0) {
          if (bVar1) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            *(undefined4 *)((int)pvVar4 + 0x160) = 0;
            moby->unk58 = 1.0;
            if (moby->animationId != '\x05') {
              uVar42 = MB_randRange(0,2);
              uVar44 = MB_randRange(0x14,0x19);
              MB_SetAnimation(lVar12,5,uVar42,uVar44);
            }
            moby->state = '\x04';
          }
          if (uVar35 != 0) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            if (moby->animationId != '\x04') {
              uVar42 = MB_randRange(0,5);
              uVar44 = MB_randRange(0x14,0x28);
              MB_SetAnimation(lVar12,4,uVar42,uVar44);
            }
            moby->unk58 = 1.0;
            moby->state = '\x03';
          }
          iVar15 = g_standingOnMoby;
          if (bVar11) {
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            FUN_005e7e98((int)pvVar4 + 0x150,iVar15 + 0x10);
            *(float *)((int)pvVar4 + 0x158) = *(float *)((int)pvVar4 + 0x158) + 3.0;
            moby->state = '\t';
          }
          if (bVar9) {
            moby->unk58 = 1.0;
            if (moby->animationId != '\x06') {
              uVar42 = MB_randRange(0,2);
              uVar44 = MB_randRange(0x14,0x19);
              MB_SetAnimation(lVar12,6,uVar42,uVar44);
            }
            *(undefined4 *)((int)pvVar4 + 0x164) = 0;
            *(undefined4 *)((int)pvVar4 + 0x16c) = 0;
            *(undefined1 *)((int)pvVar4 + 0x1c4) = 0;
            *(undefined4 *)((int)pvVar4 + 0x294) = 0;
            moby->state = '\b';
            iVar15 = PlayMobySound(9,4,moby);
            *(int *)((int)pvVar4 + 0x1f8) = iVar15;
          }
        }
        if (iVar14 == 0) {
          moby->unk58 = 1.0;
          bVar25 = moby->animationId;
          uVar35 = rand();
          if ((uint)bVar25 != (uVar35 & 1)) {
            uVar35 = rand();
            uVar42 = MB_randRange(0,2);
            uVar44 = MB_randRange(0x1c,0x28);
            MB_SetAnimation(lVar12,uVar35 & 1,uVar42,uVar44);
          }
          moby->state = '\x01';
        }
        if (moby->updateId == '\f') {
          M1106_001bfdb8(lVar12,pvVar4,&MStack_270.transform.v3);
        }
      }
      else {
        moby->unk58 = 1.0;
        *(u8 *)((int)pvVar4 + 500) = moby->state;
        *(undefined1 *)((int)pvVar4 + 0x1f6) = 10;
        *(undefined1 *)((int)pvVar4 + 0x1f5) = 1;
        FUN_005e7e98((int)pvVar4 + 0xc0,&local_2e0);
        if (moby->animationId != '\x03') {
          uVar42 = MB_randRange(0,1);
          uVar44 = MB_randRange(0xf,0x16);
          MB_SetAnimation(lVar12,3,uVar42,uVar44);
        }
        moby->state = '\a';
      }
      if ((moby->updateId == '\n') || (moby->updateId == '\f')) {
        iVar14 = MB_MayaFrameTrigger(27.5,moby);
        if (iVar14 != 0) {
          M1106_001bfb58(lVar12);
        }
        iVar14 = MB_MayaFrameTrigger(73.0,moby);
        if (iVar14 != 0) {
          M1106_001bfb58(lVar12);
        }
      }
    }
    else if (bVar25 < 8) {
      if (*(char *)((int)pvVar4 + 0x1f5) == '\0') {
        FUN_005e7e98((int)pvVar4 + 0xc0,&g_heroPosition);
      }
      uVar42 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0xc0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar4 + 0xc4) - (moby->pos).y));
      dVar41 = (double)FastDiffRots(uVar42,(double)(moby->rotation).z);
      if ((uVar20 == 0) && ((moby->field43_0x70 & 2U) != 0)) {
        if (9.999999747378752e-05 <= dVar41) {
          if (moby->animationId != '\x0e') {
            uVar42 = MB_randRange(10,0xd);
            MB_SetAnimation(lVar12,0xe,5,uVar42);
          }
        }
        else if (moby->animationId != '\x03') {
          uVar42 = MB_randRange(10,0xd);
          MB_SetAnimation(lVar12,3,5,uVar42);
        }
      }
      uVar27 = moby->updateId;
      if ((uVar27 == '\x0e' || uVar27 == '\x03') || (uVar27 == '\r')) {
        dVar43 = (double)BlendAnimFrame(moby);
        if ((dVar43 < 14.5) || (((19.0 < dVar43 && (dVar43 < 35.5)) || (40.5 < dVar43)))) {
          uVar42 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0xc0) - (moby->pos).x),
                                (double)(*(float *)((int)pvVar4 + 0xc4) - (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar42,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                     (double)(g_FrameTime * 2.0943952),lVar12,&DAT_001c4f8c,
                     (int)pvVar4 + 0x168);
        }
        if ((dVar41 <= 0.0010000000474974513) || (moby->animationId != '\x03')) {
          if ((dVar41 < 0.0010000000474974513) && (moby->animationId == '\x0e')) {
            uVar42 = MB_randRange(10,0xd);
            MB_SetAnimation(lVar12,3,5,uVar42);
          }
        }
        else if (moby->animationId != '\x0e') {
          uVar42 = MB_randRange(10,0xd);
          MB_SetAnimation(lVar12,0xe,5,uVar42);
        }
      }
      else {
        *(undefined4 *)((int)pvVar4 + 0x84) = 0;
      }
      dVar43 = (double)(moby->rotation).z;
      dVar41 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0xc0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar4 + 0xc4) - (moby->pos).y));
      dVar41 = (double)FastSubRots((float)dVar43,(float)dVar41);
      if (dVar41 < (double)(*(float *)((int)pvVar4 + 0x98) * 0.25)) {
        *(undefined1 *)((int)pvVar4 + 0x100) = 0;
        *(undefined1 *)((int)pvVar4 + 0x101) = 0;
        *(undefined1 *)((int)pvVar4 + 0x102) = 0;
        *(undefined1 *)((int)pvVar4 + 0x103) = 0;
        *(undefined1 *)((int)pvVar4 + 0x104) = 0;
        *(undefined1 *)((int)pvVar4 + 0x105) = 0;
        *(undefined1 *)((int)pvVar4 + 0x106) = 0;
        *(undefined1 *)((int)pvVar4 + 0x107) = 0;
        *(undefined1 *)((int)pvVar4 + 0x108) = 0;
        *(undefined1 *)((int)pvVar4 + 0x109) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10a) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10b) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10c) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10d) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10e) = 0;
        *(undefined1 *)((int)pvVar4 + 0x10f) = 0;
        uVar27 = *(u8 *)((int)pvVar4 + 0x1f6);
        if (moby->animationId != uVar27) {
          uVar42 = MB_randRange(0,2);
          uVar44 = MB_randRange(0xf,0x1b);
          MB_SetAnimation(lVar12,uVar27,uVar42,uVar44);
        }
        moby->state = *(u8 *)((int)pvVar4 + 500);
      }
      uVar27 = moby->updateId;
      if ((uVar27 == '\x03') || (uVar27 == '\x0e')) {
        iVar14 = MB_MayaFrameTrigger((float)dVar49,moby);
        if (iVar14 != 0) {
          M1106_001bfb58(lVar12);
        }
        iVar14 = MB_MayaFrameTrigger(37.0,moby);
        if (iVar14 != 0) {
          M1106_001bfb58(lVar12);
        }
      }
      else if (uVar27 == '\r') {
        iVar14 = MB_MayaFrameTrigger(13.0,moby);
        if (iVar14 != 0) {
          M1106_001bfb58(lVar12);
        }
        iVar14 = MB_MayaFrameTrigger(34.0,moby);
        if (iVar14 != 0) {
          M1106_001bfb58(lVar12);
        }
      }
    }
    else if ((0 < *(int *)((int)pvVar4 + 0x294)) ||
            (iVar14 = M1106_001c2bb8(lVar12,pvVar4,&g_heroPosition,6,0),
            iVar14 == 0)) {
      *(undefined4 *)((int)pvVar4 + 0x294) = 1;
      OrganicDeltAngSpeed
                (uVar44,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                 (double)(g_FrameTime * 2.0943952),lVar12,&DAT_001c4f8c,
                 (int)pvVar4 + 0x168);
      GetBonePosition(lVar12,4,&MStack_270.pos);
      dVar41 = (double)M1106_001c3a18(lVar12,&MStack_270.pos);
      if (moby->updateId == '\x06') {
        FUN_005e7e98((int)pvVar4 + 0x140,&g_heroPosition);
        dVar50 = 0.6000000238418579;
        *(float *)((int)pvVar4 + 0x148) = *(float *)((int)pvVar4 + 0x148) + 0.6;
        if (dVar43 <= (double)*(float *)((int)pvVar4 + 0x16c)) {
          if ((*(char *)((int)pvVar4 + 0x1c4) != '\0') ||
             ((iVar14 = FastDecTimerS32((int)pvVar4 + 0x160), iVar14 != 0 &&
              (dVar41 < dVar50)))) {
            *(undefined1 *)((int)pvVar4 + 0x1c4) = 1;
            if (g_heroState != UNK_78) {
              FUN_005e7e98((int)pvVar4 + 0x110,&g_heroPosition);
              FUN_005e7e98((int)pvVar4 + 0x120,&g_heroPosition);
              fVar2 = (moby->pos).z;
              if (fVar2 - g_heroPosition.z < 0.0) {
                fVar2 = g_heroPosition.z;
              }
              *(float *)((int)pvVar4 + 0x128) = fVar2 + 2.0;
              TransitionMovement(0x78,1);
              *(undefined4 *)((int)pvVar4 + 0x164) = 0;
              *(undefined2 *)((int)pvVar4 + 0x19e) = 0;
              *(undefined4 *)((int)pvVar4 + 0x1ac) = 0x41a00000;
            }
            puVar38 = &MStack_270.state;
            iVar14 = (int)pvVar4 + 0x110;
            FUN_005e81f0(puVar38,(int)pvVar4 + 0x120,iVar14);
            FUN_005e822c((double)(DAT_0071f408 * 0.1),puVar38,puVar38);
            FUN_005e7f54(iVar14,iVar14,puVar38);
            FUN_005e7e98(&DAT_0096ba10,iVar14);
            FUN_005e7e98(&g_heroPosition,iVar14);
            dVar50 = 25.132741928100586;
            dVar41 = (double)FastWrapRot(DAT_0096ba28,g_FrameTime * 25.132742);
            DAT_0096ba28 = (float)dVar41;
            dVar41 = (double)FastWrapRot
                                       ((float)dVar41,
                                        (float)((double)g_FrameTime * dVar50));
            g_heroRotation.z = (float)dVar41;
            *(float *)((int)pvVar4 + 0x16c) = (float)dVar43;
            iVar14 = *(int *)(&DAT_00763f04 + *(int *)((int)pvVar4 + 0x164) * 0x10);
            if (iVar14 == -1) {
              *(undefined4 *)((int)pvVar4 + 0x164) = 0;
              uVar21 = idol::GetAnimDuration(800);
              *(undefined2 *)((int)pvVar4 + 0x196) = uVar21;
              uVar16 = idol::GetAnimDuration(0xf0);
              *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
              M1106_001c3510(lVar12);
              if (g_heroState == UNK_78) {
                TransitionMovement(0,1);
              }
              iVar14 = *(int *)((int)pvVar4 + 0x1f8);
              *(undefined1 *)((int)pvVar4 + 0x1c7) = 0;
              if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
                 (g_SoundChannels[iVar14].state != '\0')) {
                sound_Kill(iVar14);
              }
              *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
              moby->state = '\x01';
            }
            else {
              sVar23 = *(short *)((int)pvVar4 + 0x19e);
              sVar22 = *(short *)(&DAT_0072103c +
                                 iVar14 * 0x10 + (int)((longlong)iVar14 * -0xf) * -4);
              if (sVar23 == 0) {
                uVar35 = (&currentAmmoArray.field0_0x0)[iVar14];
                sVar23 = (short)((int)uVar35 >> 3) + (ushort)((int)uVar35 < 0 && (uVar35 & 7) != 0);
                *(short *)((int)pvVar4 + 0x19e) = sVar23;
                if (sVar23 < sVar22) {
                  *(short *)((int)pvVar4 + 0x19e) = sVar22;
                }
                dVar41 = (double)MB_randRangeFloat
                                           (*(float *)((int)pvVar4 + 0x1ac) + 20.0,
                                            *(float *)((int)pvVar4 + 0x1ac) + 100.0);
                *(float *)((int)pvVar4 + 0x1ac) = (float)dVar41;
                sVar23 = *(short *)((int)pvVar4 + 0x19e);
              }
              lVar31 = (longlong)sVar23;
              uVar35 = (&currentAmmoArray.field0_0x0)[iVar14];
              if ((int)uVar35 < (int)sVar23) {
                lVar31 = (longlong)(int)uVar35;
                *(undefined2 *)((int)pvVar4 + 0x19e) = 0;
                *(int *)((int)pvVar4 + 0x164) = *(int *)((int)pvVar4 + 0x164) + 1;
                uVar35 = (&currentAmmoArray.field0_0x0)[iVar14];
              }
              iVar15 = uVar35 - (int)(lVar31 << 3);
              lVar31 = lVar31 + (-(longlong)iVar15 >> 0x3f & ((int)lVar31 + iVar15) - lVar31);
              iVar15 = (int)lVar31;
              if (0 < iVar15) {
                if (*(int *)((int)pvVar4 + 0x18c) == -1) {
                  MB_randSphere
                            ((double)(g_FrameTime * 4.0),
                             (double)(g_FrameTime * 10.0),&MStack_270.updateDistance);
                  if ((float)MStack_270.color < g_FrameTime * 2.0) {
                    dVar41 = (double)MB_randRangeFloat
                                               (g_FrameTime * 3.0,
                                                g_FrameTime * 6.0);
                    MStack_270.color = (uint)(float)dVar41;
                  }
                  pvVar39 = &MStack_270.rotation;
                  FUN_005e7f98(0x3fecccccc0000000,pvVar39,&MStack_270.updateDistance);
                  FUN_005e7f54(pvVar39,pvVar39,&g_heroPosition);
                }
                else {
                  local_12c[0] = 0;
                  local_12c[1] = 0;
                  pSVar8 = Splines[*(int *)((int)pvVar4 + 0x18c)];
                  local_12c[0] = PathFindClosestPnt
                                           ((float)dVar46,(Vec4 *)&g_heroPosition,pSVar8);
                  pcVar33 = &MStack_270.previousAnimationFrame;
                  dVar41 = 8.0;
                  dVar50 = 12.0;
                  dVar43 = 10.0;
                  do {
                    do {
                      *(float *)((int)pvVar4 + 0x1ac) =
                           (float)((double)*(float *)((int)pvVar4 + 0x1ac) + dVar43);
                      MB_PathMoveDist(pSVar8,pcVar33,local_12c,local_12c + 1);
                      dVar45 = (double)FUN_005e8588(&g_heroPosition,pcVar33);
                      dVar49 = (double)FUN_005e8588(lVar32,pcVar33);
                    } while (dVar45 < dVar41);
                  } while (dVar49 < dVar50);
                  M1106_001c2480(uVar48,pcVar33);
                  pvVar39 = &MStack_270.rotation;
                  FUN_005e81f0(pvVar39,pcVar33,&g_heroPosition);
                  dVar46 = (double)MStack_270.unk58;
                  FUN_005e7f98(0x3fecccccc0000000,pvVar39,pvVar39);
                  pcVar30 = &MStack_270.updateDistance;
                  FUN_005e7e98(pcVar30,pvVar39);
                  MStack_270.color = 0;
                  dVar41 = 15.0;
                  FUN_005e7f98((double)(g_FrameTime * 15.0),pcVar30,pcVar30);
                  FUN_005e7f54(pvVar39,pvVar39,&g_heroPosition);
                  dVar41 = (double)MB_computeLobVelocity
                                             ((double)(float)((double)g_FrameTime * dVar41
                                                             ),(double)(g_FrameTimeSq * -9.8),pvVar39
                                              ,pcVar33);
                  MStack_270.color = (uint)(float)dVar41;
                  dVar41 = (double)MB_randRangeFloat(0.7,2.0);
                  *(float *)((int)pvVar4 + 0x1ac) =
                       (float)((double)*(float *)((int)pvVar4 + 0x1ac) + dVar41);
                }
                PlayMobySound(0xb,0,moby);
                iVar18 = FUN_002ea758(&MStack_270.rotation,(longlong)iVar14,lVar31,0);
                if (iVar18 != 0) {
                  iVar18 = *(int *)(iVar18 + 0x78);
                  FUN_005e7e98(iVar18 + 0x10,&MStack_270.updateDistance);
                  *(float *)(iVar18 + 0x28) = (float)dVar46;
                  (&currentAmmoArray.field0_0x0)[iVar14] =
                       (&currentAmmoArray.field0_0x0)[iVar14] - iVar15;
                  uVar16 = idol::GetAnimDuration(0);
                  *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
                }
              }
            }
          }
        }
        else {
          dVar41 = (double)g_FrameTime;
          *(undefined4 *)((int)pvVar4 + 0x160) = 0;
          *(float *)((int)pvVar4 + 0x16c) =
               (float)(dVar41 * 15.0 + (double)*(float *)((int)pvVar4 + 0x16c));
        }
        if (!bVar9) {
          *(undefined4 *)((int)pvVar4 + 0x164) = 0;
          uVar21 = idol::GetAnimDuration(0xf);
          *(undefined2 *)((int)pvVar4 + 0x196) = uVar21;
          M1106_001c3510(lVar12);
          if (g_heroState == UNK_78) {
            TransitionMovement(0,1);
          }
          uVar16 = idol::GetAnimDuration(0x46);
          *(undefined1 *)((int)pvVar4 + 0x1c7) = 0;
          iVar14 = *(int *)((int)pvVar4 + 0x1f8);
          *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
          if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
             (g_SoundChannels[iVar14].state != '\0')) {
            sound_Kill(iVar14);
          }
          *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
          moby->state = '\x01';
        }
        if (uVar20 != 0) {
          uVar21 = idol::GetAnimDuration(0x1e);
          *(undefined2 *)((int)pvVar4 + 0x196) = uVar21;
          if (moby->animationId != '\t') {
            uVar42 = MB_randRange(0,2);
            uVar44 = MB_randRange(0x10,0x19);
            MB_SetAnimation(lVar12,9,uVar42,uVar44);
          }
          M1106_001c3510(lVar12);
          if (g_heroState == UNK_78) {
            TransitionMovement(0,1);
          }
          iVar14 = *(int *)((int)pvVar4 + 0x1f8);
          if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
             (g_SoundChannels[iVar14].state != '\0')) {
            sound_Kill(iVar14);
          }
          *(undefined4 *)((int)pvVar4 + 0x1f8) = 0xffffffff;
          moby->state = '\x02';
        }
      }
    }
    goto LAB_001c8fe8;
  }
  if (bVar25 == 0) {
    DAT_00eef9e0 = 0;
    moby->state = '\x01';
    moby->setByGroup = '\0';
    iVar14 = *(int *)((int)pvVar4 + 0x18c);
    *(undefined4 *)((int)pvVar4 + 400) = 0;
    *(undefined2 *)((int)pvVar4 + 0x280) = 0xffff;
    if ((iVar14 != -1) && (iVar15 = 0, 0 < Splines[iVar14]->cnt)) {
      iVar18 = 0;
      do {
        iVar15 = iVar15 + 1;
        pSVar8 = Splines[iVar14];
        dVar41 = (double)FUN_005e8548((int)&pSVar8->points[0].x + iVar18,
                                      (int)pSVar8 +
                                      ((iVar15 - (iVar15 / pSVar8->cnt) * pSVar8->cnt) * 4 + 4) * 4)
        ;
        *(float *)((int)&Splines[*(int *)((int)pvVar4 + 0x18c)]->points[0].w + iVar18) =
             (float)dVar41;
        iVar14 = *(int *)((int)pvVar4 + 0x18c);
        pSVar8 = Splines[iVar14];
        *(float *)((int)pvVar4 + 400) =
             *(float *)((int)pvVar4 + 400) + *(float *)((int)&pSVar8->points[0].w + iVar18);
        iVar18 = iVar18 + 0x10;
      } while (iVar15 < pSVar8->cnt);
    }
    if (*(int *)((int)pvVar4 + 0x290) != -1) {
      iVar15 = 0;
      pSVar8 = Splines[*(int *)((int)pvVar4 + 0x290)];
      iVar14 = pSVar8->cnt;
      pSVar36 = pSVar8;
      if (0 < iVar14) {
        do {
          iVar15 = iVar15 + 1;
          dVar41 = (double)FUN_005e8548(pSVar36->points,
                                        (int)pSVar8 +
                                        ((iVar15 - (iVar15 / iVar14) * iVar14) * 4 + 4) * 4);
          pSVar36->points[0].w = (float)dVar41;
          iVar14 = pSVar8->cnt;
          pSVar36 = (Spline *)pSVar36->points;
        } while (iVar15 < iVar14);
      }
    }
    iVar14 = *(int *)((int)pvVar4 + 0x188);
    if ((iVar14 != -1) && (iVar15 = 0, 0 < Splines[iVar14]->cnt)) {
      iVar18 = 0;
      do {
        iVar14 = FastDoubleToInt
                           ((double)*(float *)((int)&Splines[iVar14]->points[0].w + iVar18));
        if ((-1 < iVar14) && (iVar14 < 4)) {
          *(char *)((int)pvVar4 + iVar14 + 0x1d4) = (char)iVar15;
        }
        iVar14 = *(int *)((int)pvVar4 + 0x188);
        iVar15 = iVar15 + 1;
        iVar18 = iVar18 + 0x10;
      } while (iVar15 < Splines[iVar14]->cnt);
    }
    MVar3 = moby->modeBits;
    uVar16 = *(undefined4 *)((int)pvVar4 + 0x188);
    *(uint *)((int)pvVar4 + 0xa8) = *(uint *)((int)pvVar4 + 0xa8) & 0xfffffff7;
    moby->modeBits = MVar3 | CAN_BE_AUTO_TARGETED;
    MB_SplineMarkCrossings((int)pvVar4 + 0x170,3,uVar16);
    *(undefined1 *)((int)pvVar4 + 0x19c) = 7;
    moby->updateDistance = -1;
    iVar14 = *(int *)((int)pvVar4 + 0x188);
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar4 + 0x1a8) = 0xffffffff;
    *(undefined4 *)((int)pvVar4 + 0x1b0) = 0xffffffff;
    iVar14 = PathFindClosestPnt((float)dVar46,(Vec4 *)lVar32,Splines[iVar14]);
    *(int *)((int)pvVar4 + 0x1c0) = iVar14;
    DAT_00764010 = 1;
    DAT_00764014 = 1;
    DAT_00ef0db8 = 0;
    moby->scale = moby->scale * 1.75;
    *(undefined1 *)((int)pvVar4 + 0x1c7) = 0;
    *(undefined4 *)((int)pvVar4 + 0x98) = 0x3fdf66f3;
    *(undefined1 *)((int)pvVar4 + 0x29) = 1;
    uVar26 = FastDoubleToInt(dVar50);
    *(undefined1 *)((int)pvVar4 + 0x58) = uVar26;
    uVar26 = FastDoubleToInt(0x4044000000000000);
    *(undefined1 *)((int)pvVar4 + 0x5a) = uVar26;
    goto LAB_001c8fe8;
  }
  if (bVar25 < 2) {
    if (((moby->field43_0x70 & 2U) != 0) &&
       (bVar25 = moby->animationId, uVar17 = rand(), (uint)bVar25 != (uVar17 & 1))) {
      uVar17 = rand();
      uVar42 = MB_randRange(0,0xf);
      uVar44 = MB_randRange(0x1e,0x2a);
      MB_SetAnimation(lVar12,uVar17 & 1,uVar42,uVar44);
    }
    iVar15 = FastDecTimerS32((int)pvVar4 + 0x160);
    if (iVar15 != 0) {
      uVar27 = moby->state;
      if (bVar1) {
        *(undefined4 *)((int)pvVar4 + 0x164) = 0;
        *(undefined4 *)((int)pvVar4 + 0x160) = 0;
        if (moby->animationId != '\x05') {
          uVar42 = MB_randRange(0,2);
          uVar44 = MB_randRange(0x12,0x14);
          MB_SetAnimation(lVar12,5,uVar42,uVar44);
        }
        uVar27 = '\x04';
        moby->state = '\x04';
      }
      if ((uVar35 != 0) && ((uVar27 != '\x05' || (iVar15 = MB_randInt(4), iVar15 == 0))))
      {
        *(undefined4 *)((int)pvVar4 + 0x164) = 0;
        if (moby->animationId != '\x04') {
          uVar42 = MB_randRange(0,9);
          uVar44 = MB_randRange(0x14,0x28);
          MB_SetAnimation(lVar12,4,uVar42,uVar44);
        }
        moby->unk58 = 1.0;
        moby->state = '\x03';
      }
      if (bVar9) {
        if (moby->animationId != '\x06') {
          uVar42 = MB_randRange(0,2);
          uVar44 = MB_randRange(0xf,0x19);
          MB_SetAnimation(lVar12,6,uVar42,uVar44);
        }
        *(undefined4 *)((int)pvVar4 + 0x164) = 0;
        *(undefined4 *)((int)pvVar4 + 0x16c) = 0;
        *(undefined1 *)((int)pvVar4 + 0x1c4) = 0;
        moby->state = '\b';
        *(undefined4 *)((int)pvVar4 + 0x294) = 0;
        iVar15 = PlayMobySound(9,4,moby);
        *(int *)((int)pvVar4 + 0x1f8) = iVar15;
      }
      if (uVar20 != 0) {
        if (moby->animationId != '\t') {
          uVar42 = MB_randRange(0,2);
          uVar44 = MB_randRange(0x11,0x19);
          MB_SetAnimation(lVar12,9,uVar42,uVar44);
        }
        moby->state = '\x02';
      }
    }
    if ((iVar14 != 0) && (moby->state != '\b')) {
      if (moby->animationId != '\n') {
        uVar42 = MB_randRange(0,4);
        uVar44 = MB_randRange(0x14,0x1e);
        MB_SetAnimation(lVar12,10,uVar42,uVar44);
      }
      *(undefined4 *)((int)pvVar4 + 0x298) = 0;
      moby->unk58 = 1.5;
      moby->state = '\x05';
    }
    goto LAB_001c8fe8;
  }
  dVar41 = (double)(moby->rotation).z;
  if ((int)worldUpdateTime % 6 == 0) {
    SpawnPart_61(0x41224f8000000000,0x4014000000000000,lVar12,0);
  }
  if ((int)(worldUpdateTime - 2) % 6 == 0) {
    SpawnPart_61(0x41224f8000000000,0x4014000000000000,lVar12,1);
  }
  iVar14 = M1106_001c2bb8(lVar12,pvVar4,&g_heroPosition,9,0);
  if (iVar14 != 0) goto LAB_001c8fe8;
  OrganicDeltAngSpeed
            (uVar42,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
             (double)(g_FrameTime * 2.0943952),lVar12);
  dVar41 = (double)FastSubRots((moby->rotation).z,(float)dVar41);
  if (dVar41 <= (double)(g_FrameTime * 0.17453292)) {
    bVar1 = moby->animationId != '\t';
    if ((bVar1) && (bVar1)) {
      uVar42 = MB_randRange(0,1);
      uVar44 = MB_randRange(0xf,0x16);
      MB_SetAnimation(lVar12,9,uVar42,uVar44);
    }
  }
  else {
    bVar1 = moby->animationId != '\r';
    if ((bVar1) && (bVar1)) {
      uVar42 = MB_randRange(0,1);
      uVar44 = MB_randRange(0xf,0x16);
      MB_SetAnimation(lVar12,0xd,uVar42,uVar44);
    }
  }
  if ((moby->updateId == '\t') || (moby->updateId == '\r')) {
    uVar27 = M1106_001bfdb8(lVar12,pvVar4,&MStack_270.transform.v3);
    moby->state = uVar27;
  }
  bVar25 = moby->setByGroup;
  uVar35 = (bVar25 + 1) * 0x55;
  if ((uint)bVar25 == (uVar35 >> 8) + (uVar35 >> 8) * 2) {
    dVar41 = (double)FUN_005e8588(&MStack_270.transform.v3,lVar32);
    if (dVar41 <= 13.0) {
      bVar25 = moby->setByGroup;
      goto LAB_001c6290;
    }
  }
  else {
LAB_001c6290:
    uVar35 = (bVar25 + 1) * 0x55;
    if (((uint)bVar25 - ((uVar35 >> 8) + (uVar35 >> 8) * 2) != 1) ||
       (dVar41 = (double)FUN_005e8588(&MStack_270.transform.v3,lVar32), dVar41 <= 20.0))
    goto LAB_001c8fe8;
  }
  uVar21 = idol::GetAnimDuration(0x23);
  *(undefined2 *)((int)pvVar4 + 0x198) = uVar21;
  uVar16 = idol::GetAnimDuration(0x1e);
  *(undefined4 *)((int)pvVar4 + 0x160) = uVar16;
  moby->state = '\x01';
LAB_001c8fe8:
  FUN_005e81f0((int)pvVar4 + 0x100,lVar32,auStack_3b0);
  if (moby->state < 10) {
    MB_RegisterLameShadow((float)dVar51,moby);
  }
  M1106_001bfbd8(pvVar4);
  return;
}


