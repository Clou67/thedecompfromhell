// game/update/moby1045.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 16 functions, 0x196d68-0x19d944
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby1045.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update.h"
#include "game/update/moby1046.h"
#include "game/update/moby1049.h"
#include "game/update/moby388.h"
#include "game/update/moby58.h"
#include "game/update/moby751.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x0196d68 (0x210 bytes)
undefined1 M1045_00196d68(int param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  undefined4 local_40 [4];
  GPiece<24> local_30;
  
  iVar3 = FastDecTimerS32(param_2 + 0x160);
  if (iVar3 != 0) {
    iVar3 = (int)param_2;
    GetBonePosition(param_1,*(uint *)(iVar3 + 0x164) & 1,local_40);
    M1049_001a1f28(local_40,local_30,param_1);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(0xc,0x196d50);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    iVar4 = *(int *)(iVar3 + 0x164) + 1;
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
      auVar5 = loadVectorLeftIndexed(0x10,0x196d50);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar5 = vectorSplatHalfWord(auVar5,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar5,0x198,param_2);
      *(undefined2 *)(iVar3 + 0x198) = uVar1;
      auVar5 = loadVectorLeftIndexed(0x14,0x196d50);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar5 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar7);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
      *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
      return 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x20);
}


// 0x0196fc8 (0x964 bytes)
void M1045_00196fc8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  GPiece<16> local_1b0;
  float local_1a0 [4];
  undefined4 local_190 [4];
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<168> local_160;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar9 = (double)FastIntToDouble(worldUpdateTime);
  dVar11 = 0.10000000149011612;
  fVar15 = MB_WrapRot((float)(dVar9 * 0.09090909361839294));
  fVar15 = fVar15 + 1.5707963;
  fVar4 = 3.1415925 - fVar15;
  if (fVar15 - (3.1415925 - fVar15) < 0.0) {
    fVar4 = fVar15;
  }
  fVar5 = -3.1415925 - fVar15;
  if ((-3.1415925 - fVar15) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar15 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar2 * fVar15;
  MB_WrapRot
            ((float)(dVar9 * dVar11 +
                    (double)((fVar2 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar15 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                            1.5707964)));
  GetBonePosition(param_1,2,local_1a0);
  dVar9 = 0.0;
  iVar7 = CollLine(local_1a0,local_1b0,2,param_1,0);
  fVar5 = g_CollOutput.ip.z;
  fVar4 = g_CollOutput.ip.y;
  fVar15 = g_CollOutput.ip.x;
  if (iVar7 != 0) {
    uVar8 = rand();
    dVar11 = 0.5;
    fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 1) + 0x2d) + 0.5);
    uVar8 = rand();
    fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 7) + 0x37) + dVar11);
    uVar8 = rand();
    dVar9 = 1.0;
    SpawnPart_58
              (0x3ff0000000000000,0x3ff0000000000000,local_1b0,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff
               ,1,(int)(animationSpeed *
                       (float)((double)(longlong)(int)((uVar8 & 3) + 0xd) + dVar11)) & 0xff,param_1)
    ;
    if (*(int *)(iVar1 + 0x15c) != 0) {
      dVar14 = 45.5;
      iVar7 = 0;
      dVar13 = 55.5;
      dVar12 = 13.5;
      do {
        CollLine(local_180,local_170,2,param_1,0);
        if (iVar7 == 2) {
          uVar8 = rand();
          fVar2 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 1) + 0x2d) + dVar11);
          uVar8 = rand();
          fVar3 = animationSpeed * (float)((double)(longlong)(int)((uVar8 & 7) + 0x37) + dVar11);
          uVar8 = rand();
          SpawnPart_58
                    (dVar9,dVar9,local_190,0,(int)fVar2 & 0xff,(int)fVar3 & 0xff,1,
                     (int)(animationSpeed *
                          (float)((double)(longlong)(int)((uVar8 & 3) + 0xd) + dVar11)) & 0xff,
                     param_1);
        }
        else {
          dVar10 = (double)animationSpeed;
          SpawnPart_58
                    (dVar9,dVar9,local_190,1,(int)(dVar10 * dVar14) & 0xff,
                     (int)(dVar10 * dVar13) & 0xff,1,(int)(dVar10 * dVar12) & 0xff,param_1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    *(float *)(iVar1 + 0x150) = fVar15;
    *(float *)(iVar1 + 0x154) = fVar4;
    *(float *)(iVar1 + 0x158) = fVar5;
  }
  uVar6 = DAT_007402b0;
  *(float *)(iVar1 + 0x15c) = (float)dVar9;
  GetEffectTex(uVar6);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_00e5ff40,DAT_007402a0,DAT_00e5ff44,DAT_007402a4,DAT_007402a8);
  FastDrawQuad(local_160,0,1,EffectTexHeaders,9);
  return;
}


// 0x0197938 (0x334 bytes)
void M1045_00197938(undefined4 param_1)

{
  float local_100 [4];
  GPiece<152> local_f0;
  
  GetBonePosition(param_1,4,local_100);
  GetEffectTex(DAT_007402c4);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  idol_draw::PackCmd(DAT_00e5ff48,DAT_007402b4,DAT_00e5ff4c,DAT_007402b8,DAT_007402bc);
  FastDrawQuad(local_f0,0,1,EffectTexHeaders,9);
  return;
}


// 0x0197c88 (0x5d0 bytes)
void M1045_00197c88
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               int param_6,int param_7)

{
  byte bVar1;
  uint uVar2;
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
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float ang1;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  GPiece<32> local_180;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  GPiece<16> auStack_f0;
  
  bVar1 = *(byte *)(*(int *)(param_6 + 0x78) + 0x1c6);
  uVar9 = (ulonglong)bVar1 << 0x18 | (ulonglong)bVar1 << 0x10 | (ulonglong)CONCAT11(bVar1,bVar1);
  uVar3 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  SetGSReg(0x21,uVar3);
  uVar3 = GetEffectTex(DAT_007402d8);
  uVar4 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  uVar5 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  uVar6 = idol_draw::PackCmd(DAT_007402c8,DAT_00e5ff50,DAT_00e5ff54,DAT_007402cc,DAT_007402d0);
  dVar10 = (double)FastIntToDouble((int)DAT_007402d4 >> 0x18);
  uVar7 = FastDoubleToInt((double)(float)(dVar10 * param_4));
  uVar2 = (uint)uVar9;
  local_140 = (uint)((uVar7 & 0xffffffff) << 0x18) | uVar2 | DAT_007402d4 & 0xffffff;
  local_13c = local_140;
  local_138 = local_140;
  local_134 = local_140;
  local_110 = uVar5;
  local_108 = uVar3;
  local_100 = uVar4;
  local_f8 = uVar6;
  dVar10 = (double)FastIntToDouble(param_7 + worldUpdateTime);
  dVar23 = (double)(float)(dVar10 * param_1);
  GetBonePosition(param_6,9,&local_190);
  dVar14 = (double)local_190;
  dVar13 = (double)local_18c;
  dVar21 = (double)local_184;
  dVar22 = (double)(local_188 - (float)(param_2 - (double)DAT_007402f8));
  dVar10 = (double)FastFrac((double)(float)((double)DAT_007402fc * dVar23),0x740000,
                                      auStack_f0);
  local_130 = (float)dVar10;
  local_120 = (float)dVar10;
  dVar19 = 1.0;
  local_128 = (float)(dVar10 + 1.0);
  local_118 = local_128;
  dVar10 = (double)FastFrac((double)(float)((double)DAT_00740300 * dVar23),0x740000,
                                      auStack_f0);
  local_11c = (float)(dVar10 + dVar19);
  local_12c = (float)dVar10;
  local_124 = (float)dVar10;
  dVar18 = (double)(6.2831855 / DAT_007402e0);
  dVar19 = 3.1415927410125732;
  dVar10 = (double)(float)(param_5 - param_4);
  dVar20 = (double)(float)(param_3 / (double)DAT_007402dc);
  dVar17 = (double)(float)(dVar10 / (double)DAT_007402dc);
  dVar16 = (double)(float)(dVar18 + -3.1415927410125732);
  local_114 = local_11c;
  if (dVar16 < 3.1415927410125732) {
    do {
      local_160 = (float)dVar14;
      local_15c = (float)dVar13;
      local_158 = (float)dVar22;
      local_154 = (float)dVar21;
      local_150 = (float)dVar14;
      local_14c = (float)dVar13;
      local_148 = (float)dVar22;
      local_144 = (float)dVar21;
      dVar24 = param_4;
      dVar10 = (double)FastIntToDouble(dVar10,(int)DAT_007402d4 >> 0x18);
      uVar7 = FastDoubleToInt((double)(float)(dVar10 * param_4));
      uVar7 = (uVar7 & 0xff) << 0x18 | uVar9 | (ulonglong)DAT_007402d4 & 0xffffff;
      local_138 = (uint)uVar7;
      dVar15 = (double)(float)(dVar20 + -1.5707963705062866);
      dVar12 = (double)(float)(param_3 - 1.5707963705062866);
      dVar10 = extraout_f1;
      local_134 = local_138;
      if (dVar15 <= dVar12) {
        dVar11 = 0.0;
        uVar8 = uVar7;
        do {
          param_4 = (double)(float)(param_4 + dVar17);
          local_140 = (uint)uVar7;
          local_13c = (uint)uVar8;
          dVar10 = (double)FastIntToDouble((int)DAT_007402d4 >> 0x18);
          uVar7 = FastDoubleToInt((double)(float)(dVar10 * param_4));
          local_138 = (uint)((uVar7 & 0xffffffff) << 0x18) | uVar2 | DAT_007402d4 & 0xffffff;
          local_134 = local_138;
          ang1 = MB_WrapRot((float)((double)DAT_007402f4 * dVar23 + dVar16));
          dVar10 = (double)ang1;
          MB_SphericalToVector((float)param_2,ang1,(float)dVar15,&local_160);
          dVar10 = (double)FastWrapRot((float)dVar10,(float)dVar18);
          MB_SphericalToVector((float)param_2,(float)dVar10,(float)dVar15,&local_150);
          if (dVar15 <= dVar11) {
            local_158 = local_158 * DAT_007402ec - DAT_007402f0;
            local_148 = local_148 * DAT_007402ec - DAT_007402f0;
          }
          else {
            local_158 = local_158 + DAT_007402e8;
            local_148 = local_148 + DAT_007402e8;
          }
          local_160 = local_160 + local_190;
          local_15c = local_15c + local_18c;
          local_158 = local_158 + local_188;
          local_150 = local_150 + local_190;
          local_14c = local_14c + local_18c;
          local_148 = local_148 + local_188;
          dVar10 = (double)FastDrawQuad(local_180,0,1,EffectTexHeaders,9);
          dVar15 = (double)(float)(dVar15 + dVar20);
          uVar7 = (ulonglong)local_138;
          uVar8 = (ulonglong)local_134;
        } while (dVar15 <= dVar12);
      }
      dVar16 = (double)(float)(dVar16 + dVar18);
      param_4 = dVar24;
    } while (dVar16 < dVar19);
  }
  uVar3 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  SetGSReg(0x21,uVar3);
  return;
}


// 0x0198280 (0x13c bytes)
void M1045_00198280(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x78) + 0x1c8);
  dVar5 = (double)*(float *)(*(int *)(param_1 + 0x78) + 0x1c8);
  uVar2 = (int)uVar1 >> 0x1f;
  dVar4 = 3.1415927410125732;
  if (((int)((uVar2 >> 1 ^ uVar1) - uVar2) < 0x3f4ccccd) &&
     (dVar4 = (double)((float)(dVar5 * 3.0434179306030273) * 1.25 + 0.09817477),
     3.1415927410125732 < dVar4)) {
    dVar4 = 3.1415927410125732;
  }
  uVar3 = 0x3ff0000000000000;
  M1045_00197c88(0x3ff0000000000000,(double)(DAT_007402e4 + 1.8),dVar4,0x3ff0000000000000,dVar5,
                 param_1,0);
  M1045_00197c88(0x3ff19999a0000000,(double)(DAT_007402e4 + 0.9),dVar4,uVar3,dVar5,param_1,10);
  M1045_00197c88(0x3ff3333340000000,(double)DAT_007402e4,dVar4,uVar3,dVar5,param_1,0x14);
  return;
}


// 0x0198408 (0x5a4 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void M1045_00198408
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
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar26;
  ulonglong in_f23;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  float fVar38;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar9 = (ulonglong *)(uVar10 - 0x230);
  *puVar9 = uVar10;
  puVar9[0x48] = in_LR;
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
  puVar9[0x38] = unaff_r31;
  puVar9[0x36] = unaff_r29;
  puVar9[0x37] = unaff_r30;
  uVar7 = *(uint *)(param_3 + 0x78);
  param_5 = param_5 + worldUpdateTime;
  puVar9[0x35] = unaff_r28;
  puVar9[0x34] = unaff_r27;
  puVar9[0x33] = unaff_r26;
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
  uVar11 = GetEffectTex(DAT_0074031c);
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  uVar13 = SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  uVar14 = idol_draw::PackCmd(DAT_00e5ff58,DAT_00740304,DAT_00e5ff5c,DAT_00740308,DAT_0074030c);
  *(uint *)((int)puVar9 + 0xbc) = param_7;
  *(uint *)(puVar9 + 0x17) = param_7;
  *(uint *)((int)puVar9 + 0xb4) = param_7;
  *(uint *)(puVar9 + 0x16) = param_7;
  puVar9[0x1d] = uVar11;
  puVar9[0x1e] = uVar12;
  puVar9[0x1c] = uVar13;
  puVar9[0x1f] = uVar14;
  *(undefined4 *)(puVar9 + 0x18) = 0;
  *(undefined4 *)(puVar9 + 0x1a) = 0;
  *(undefined4 *)(puVar9 + 0x19) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x1b) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0xc4) = 0;
  *(undefined4 *)((int)puVar9 + 0xcc) = 0;
  *(undefined4 *)((int)puVar9 + 0xd4) = 0x3f000000;
  *(undefined4 *)((int)puVar9 + 0xdc) = 0x3f000000;
  *(undefined4 *)(puVar9 + 0x10) = *(undefined4 *)(uVar7 + 0x110);
  dVar16 = (double)(6.2831855 / DAT_00740320);
  *(undefined4 *)((int)puVar9 + 0x84) = *(undefined4 *)(uVar7 + 0x114);
  *(undefined4 *)(puVar9 + 0x11) = *(undefined4 *)(uVar7 + 0x118);
  *(undefined4 *)((int)puVar9 + 0x8c) = *(undefined4 *)(uVar7 + 0x11c);
  *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(uVar7 + 0x140);
  *(undefined4 *)((int)puVar9 + 0xa4) = *(undefined4 *)(uVar7 + 0x144);
  *(undefined4 *)(puVar9 + 0x15) = *(undefined4 *)(uVar7 + 0x148);
  uVar2 = *(undefined4 *)(uVar7 + 0x14c);
  auVar35 = loadVectorLeftIndexed(0x14c,(ulonglong)uVar7);
  auVar37 = loadVectorRightIndexed(0x15c,(ulonglong)uVar7);
  auVar36 = (auVar35 | auVar37) >> 0x60 & (GPiece<16>)0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xac,
                     uVar10 - 0x230);
  *(undefined4 *)((int)puVar9 + 0xac) = uVar8;
  auVar36 = vectorPermute(*(undefined1 (*) [16])(puVar9 + 0x14),auVar35 | auVar37,_DAT_001983d0);
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
  *(undefined1 (*) [16])(puVar9 + 0x26) = auVar36;
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
  dVar26 = (double)(float)(dVar16 + 3.1415927410125732);
  if (-3.1415927410125732 < dVar26) {
    dVar28 = 1.570796251296997;
    dVar29 = 3.141592502593994;
    dVar30 = -3.141592502593994;
    dVar31 = -0.16666656732559204;
    dVar32 = 0.008333025500178337;
    dVar33 = -0.0001980741071747616;
    dVar34 = 2.601886990305502e-06;
    dVar27 = dVar17;
    do {
      *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar9 + 0x10);
      *(undefined4 *)((int)puVar9 + 0x74) = *(undefined4 *)((int)puVar9 + 0x84);
      *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x11);
      *(undefined4 *)((int)puVar9 + 0x7c) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0xa4);
      *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x15);
      dVar19 = (double)DAT_00740324;
      *(undefined4 *)((int)puVar9 + 0x9c) = uVar2;
      fVar38 = MB_WrapRot((float)(dVar19 * dVar15 + dVar17));
      uVar8 = EffectTexHeaders;
      dVar21 = (double)fVar38;
      dVar20 = (double)(float)(dVar21 + dVar28);
      dVar19 = (double)(float)(dVar29 - dVar21);
      if (dVar21 - (double)(float)(dVar29 - dVar21) < 0.0) {
        dVar19 = dVar21;
      }
      dVar22 = (double)(float)(dVar29 - dVar20);
      if (dVar20 - (double)(float)(dVar29 - dVar20) < 0.0) {
        dVar22 = dVar20;
      }
      dVar18 = (double)(float)(dVar30 - dVar21);
      if ((double)(float)(dVar30 - dVar21) - dVar19 < 0.0) {
        dVar18 = dVar19;
      }
      dVar19 = (double)(float)(dVar30 - dVar20);
      if ((double)(float)(dVar30 - dVar20) - dVar22 < 0.0) {
        dVar19 = dVar22;
      }
      dVar21 = (double)(float)(dVar18 * dVar18);
      dVar20 = (double)(float)(dVar19 * dVar19);
      dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar18));
      dVar22 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar19));
      dVar23 = (double)(float)(dVar21 * dVar24);
      fVar3 = *(float *)(param_3 + 0xe4);
      dVar25 = (double)(float)(dVar20 * dVar22);
      fVar4 = *(float *)(param_3 + 0xd4);
      fVar5 = *(float *)(param_3 + 0xe8);
      fVar38 = (float)((double)(float)((double)(float)(dVar21 * dVar23) * dVar34 +
                                      (double)(float)(dVar23 * dVar33 +
                                                     (double)(float)(dVar24 * dVar32 +
                                                                    (double)(float)((double)(float)(
                                                  dVar21 * dVar18) * dVar31 + dVar18)))) * param_1);
      fVar1 = (float)((double)(float)((double)(float)(dVar20 * dVar25) * dVar34 +
                                     (double)(float)(dVar25 * dVar33 +
                                                    (double)(float)(dVar22 * dVar32 +
                                                                   (double)(float)((double)(float)(
                                                  dVar20 * dVar19) * dVar31 + dVar19)))) * param_1);
      fVar6 = *(float *)(param_3 + 0xd8);
      *(float *)(puVar9 + 0x14) =
           *(float *)(param_3 + 0xd0) * fVar1 +
           *(float *)(param_3 + 0xe0) * fVar38 + *(float *)(uVar7 + 0x140);
      *(float *)((int)puVar9 + 0xa4) = fVar4 * fVar1 + fVar3 * fVar38 + *(float *)(uVar7 + 0x144);
      *(float *)(puVar9 + 0x15) = fVar6 * fVar1 + fVar5 * fVar38 + *(float *)(uVar7 + 0x148);
      uVar2 = *(undefined4 *)(uVar7 + 0x14c);
      *(undefined4 *)((int)puVar9 + 0xac) = uVar2;
      if (dVar17 != dVar27) {
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
      dVar17 = (double)(float)(dVar17 + dVar16);
    } while (dVar17 < dVar26);
  }
                    /* WARNING: Read-only address (ram,0x001983d0) is written */
  return;
}


// 0x01989d0 (0x2dc bytes)
// inlined: FastRSqrt @0x198bbc
// strings: 001989b8: '?333@' (raw)

void M1045_001989d0
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
  uVar4 = DAT_00740310;
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
  M1045_00198408(0x3ff0000000000000,0x3ff0000000000000,param_1,0x740000,0,param_4,uVar4);
  M1045_00198408(0x3fe6666660000000,0x4000000000000000,param_1,0x740000,10);
  M1045_00198408(0x3fd99999a0000000,0x4008000000000000,param_1,0x740000,0x14);
  SetCollDamIn(0x3ff0008100000000,auStack_60,param_1,0x30000,&DAT_001989ac,local_70);
  iVar7 = CollLine(iVar5 + 0x110,iVar5 + 0x120,0,param_1,auStack_60);
  if (iVar7 == 0) {
    CollMobySphere(0x3fe0000000000000,iVar5 + 0x120,&DAT_001989ac,0,param_1,auStack_60);
  }
  return;
}


// 0x0198cac (0xc4 bytes)
ulonglong M1045_00198cac(undefined8 param_1,int param_2,int *param_3)

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


// 0x0198d88 (0x500 bytes)
// strings: 0065435c: 'Moby class %d Damage Received: %f\n'

void M1045_00198d88(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  u8 uVar1;
  float fVar2;
  short sVar3;
  MOBY_OCLASSES MVar4;
  MobyModeBit MVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  byte bVar16;
  int iVar18;
  longlong lVar17;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x100;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar13;
  puVar10[0x22] = in_LR;
  puVar10[0x1d] = unaff_r29;
  lVar11 = uVar13 - 0x40;
  puVar12 = (undefined4 *)lVar11;
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  puVar10[0x1e] = unaff_r30;
  uVar1 = param_1->state;
  puVar10[0x1f] = unaff_r31;
  puVar10[0x1c] = unaff_r28;
  puVar10[0x1b] = unaff_r27;
  if (uVar1 == '\t') goto LAB_00199234;
  uVar14 = MB_damage(param_1,0x330000,0);
  iVar18 = (int)uVar14;
  iVar15 = MB_HandleDamage(param_1,iVar18,param_3,0,puVar10 + 0xe,0,0,4);
  pfVar19 = (float *)param_3;
  if (iVar18 == 0) {
LAB_00198ea4:
    if (((iVar15 < 3) && (-1 < iVar15)) && (0 < iVar15)) {
      *pfVar19 = 0.0;
    }
  }
  else {
    if (*(short *)(iVar18 + 0x2a) == 0x131) {
      *(float *)(iVar18 + 0x2c) = *(float *)(iVar18 + 0x2c) * 0.25;
    }
    if ((*(int *)(iVar18 + 0x20) != 0) &&
       (sVar3 = *(short *)(*(int *)(iVar18 + 0x20) + 0xa6), sVar3 != 0x416 && sVar3 != 0x419)) {
      MVar4 = param_1->oClass;
      puVar10[8] = (ulonglong)(double)*(float *)(iVar18 + 0x2c);
      printf("Moby class %d Damage Received: %f\n",MVar4,puVar10[8]);
      goto LAB_00198ea4;
    }
    *(undefined4 *)(puVar10 + 0xe) = 1;
  }
  iVar15 = (int)param_2;
  if ((param_1->state < 9) && (param_1->state != 5)) {
LAB_00198f08:
    if (1 < *(int *)(puVar10 + 0xe)) {
      auVar20 = loadVectorLeftIndexed(0x2c,uVar14);
      auVar25 = loadVectorLeftIndexed(lVar11,param_3);
      auVar21 = loadVectorRightIndexed(0x3c,uVar14);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      fVar2 = *pfVar19;
      auVar25 = (auVar20 | auVar21) >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        MVar5 = param_1->modeBits;
        *pfVar19 = 0.0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar15 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        if (param_1->animationId != '\x0e') {
          MB_SetAnimation(param_1,0xe,0,10);
        }
        if (g_heroState == UNK_78) {
          TransitionMovement(0,1);
        }
        param_1->state = '\t';
      }
      else {
        auVar25 = ZEXT416(0xfffffff0);
        auVar20 = ZEXT416(0xffffffff);
        auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar20 = loadVectorLeftIndexed(4,param_3);
        auVar25 = vectorShiftRightAlgebraicWord
                            (auVar20,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        puVar10[0xf] = (longlong)(int)*(short *)(pfVar19 + 1);
        auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
        auVar20 = vectorConvertFromSignedFixedPointWord(auVar25,0);
        auVar25 = loadVectorLeftIndexed(4,0x198d70);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar20,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar21);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar20 = loadVectorLeftIndexed(8,0x198d70);
        auVar23 = loadVectorLeftIndexed(0xc,0x198d70);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = ZEXT416(0xffffffff);
        auVar22 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar24,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar22 = vectorMultiplyAddFloatingPoint
                            (auVar24,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar20);
        FastFrac((double)((fVar2 - 0.01) / ((float)(longlong)puVar10[0xf] * 0.16666667)),8
                           ,uVar13 - 0x8c);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar20 = loadVectorLeftIndexed(0x74,lVar17);
        fVar2 = *pfVar19;
        auVar20 = vectorMultiplyAddFloatingPoint(auVar24,auVar20,auVar25);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar21 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x74,lVar17
                          );
        *(undefined4 *)((int)puVar10 + 0x74) = uVar9;
        *pfVar19 = fVar2 - *(float *)(iVar18 + 0x2c);
        *(undefined1 *)(iVar15 + 0x67) = 0xfa;
        auVar25 = loadVectorLeftIndexed(0x14,0x198d70);
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar20,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar21);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = vectorSplatHalfWord(auVar25,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar25,0x26,param_2);
        *(undefined2 *)(iVar15 + 0x26) = uVar8;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        uVar6 = (int)*pfVar19 >> 0x1f;
        auVar25 = loadVectorLeftIndexed(lVar11,param_3);
        uVar7 = (int)*(uint *)((int)puVar10 + 0x74) >> 0x1f;
        if ((int)((uVar6 >> 1 ^ (uint)*pfVar19) - uVar6) <=
            (int)((uVar7 >> 1 ^ *(uint *)((int)puVar10 + 0x74)) - uVar7)) {
          if (g_heroState == UNK_78) {
            TransitionMovement(0,1);
          }
          bVar16 = param_1->setByGroup;
          lVar17 = ((((ulonglong)bVar16 + 1) * 0x55 << 0x20) >> 0x28) + 2;
          if ((uint)param_1->animationId != (uint)lVar17) {
            MB_SetAnimation(param_1,lVar17,0,10);
            bVar16 = param_1->setByGroup;
          }
          *(undefined4 *)(iVar15 + 0x1c8) = 0;
          *(undefined1 *)(iVar15 + 0x1c5) = 1;
          param_1->state = '\n';
          param_1->setByGroup = bVar16 + 1;
          auVar25 = loadVectorLeftIndexed(lVar11,param_3);
        }
        auVar20 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        vectorCompareGreaterThanFloatingPoint(auVar26,auVar20);
        if (((bool)(in_cr6 >> 1 & 1)) ||
           (vectorCompareGreaterThanFloatingPoint(auVar25,auVar20), !(bool)(in_cr6 >> 1 & 1))) {
          auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          vectorCompareGreaterThanFloatingPoint(auVar26,auVar20);
          if ((!(bool)(in_cr6 >> 1 & 1)) &&
             (vectorCompareGreaterThanFloatingPoint(auVar25,auVar20), (bool)(in_cr6 >> 1 & 1))) {
            *(undefined1 *)(iVar15 + 0x1c7) = 1;
          }
        }
        else {
          *(undefined1 *)(iVar15 + 0x1c7) = 1;
        }
      }
    }
  }
  else {
    if ((uint)(byte)param_1->setByGroup + (((byte)param_1->setByGroup + 1) * 0x55 >> 8) * -3 == 0)
    goto LAB_00198f08;
    if (1 < *(int *)(puVar10 + 0xe)) {
      *(undefined1 *)(iVar15 + 0x1c6) = 0xff;
    }
  }
  *(byte *)(iVar15 + 0x1c6) =
       (byte)((longlong)(0x14 - (ulonglong)*(byte *)(iVar15 + 0x1c6)) >> 0x3f) &
       *(byte *)(iVar15 + 0x1c6) - 0x14;
  param_1->damage = -1;
LAB_00199234:
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x0199288 (0x78 bytes)
void M1045_00199288(double param_1,float *param_2)

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


// 0x0199300 (0x88 bytes)
void M1045_00199300(MobyInstance *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  if (0 < DAT_00e61328) {
    psVar2 = &DAT_00e61328;
    lVar3 = 10;
    do {
      sVar1 = *psVar2;
      *psVar2 = sVar1 + ((ushort)(0x40 - (longlong)sVar1 >> 0x3f) & 0x40U - sVar1) + -4;
      psVar2 = psVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    RegisterMobyDraw(&PTR_M1046_0019d958_007086a0,param_1);
  }
  return;
}


// 0x0199398 (0x23c bytes)
void M1045_00199398(MobyInstance *param_1)

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
  
  iVar21 = 0;
  DAT_00740388 = 1;
  DAT_00740390 = DAT_00740390 * 0.5;
  DAT_0074038c = 1;
  psVar19 = &DAT_00e5ff98;
  piVar20 = &DAT_00e5ffac;
  pfVar18 = (float *)&DAT_00e5ff9c;
  fVar1 = 0.0;
  do {
    iVar10 = *piVar20;
    if (iVar10 != 0) {
      iVar17 = (int)((longlong)*psVar19 << 4);
      fVar2 = *(float *)((int)&DAT_00e61264 + iVar17);
      fVar13 = *(float *)((int)&DAT_00e61254 + iVar17) - fVar2;
      fVar3 = *(float *)((int)&DAT_00e61260 + iVar17);
      fVar15 = *(float *)((int)&DAT_00e61250 + iVar17) - fVar3;
      fVar4 = *(float *)((int)&DAT_00e61268 + iVar17);
      fVar14 = *(float *)((int)&DAT_00e61258 + iVar17) - fVar4;
      fVar5 = *pfVar18;
      fVar6 = *(float *)(iVar10 + 0x14);
      fVar7 = *(float *)(iVar10 + 0x10);
      fVar8 = *(float *)(iVar10 + 0x18);
      fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13);
      *piVar20 = 0;
      *(undefined2 *)(iVar10 + 10) = 0x46;
      *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar10 + 0x1c);
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
  if (0 < DAT_00e61328) {
    psVar19 = &DAT_00e61328;
    lVar22 = 10;
    do {
      sVar9 = *psVar19;
      *psVar19 = sVar9 + ((ushort)(0x40 - (longlong)sVar9 >> 0x3f) & 0x40U - sVar9) + -4;
      psVar19 = psVar19 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    RegisterMobyDraw(&PTR_M1046_0019d958_007086a0,param_1);
  }
  return;
}


// 0x01995e0 (0x21c bytes)
// strings: 001995d8: '@333`'

void M1045_001995e0(int param_1,undefined4 *param_2)

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
  
  if (DAT_00740388 != 0) {
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar3 = *(float *)(param_1 + 200);
    DAT_00740388 = 0;
    fVar7 = 0.0;
    DAT_00e61260 = *param_2;
    pfVar10 = (float *)&DAT_00e61260;
    DAT_00e61264 = param_2[1];
    DAT_00e61268 = param_2[2];
    puVar13 = &DAT_00e6132a;
    fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    DAT_00e6126c = param_2[3];
    pfVar12 = (float *)&DAT_00e61270;
    DAT_00e61328 = 0;
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
    DAT_00e5ff70 = 0;
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    DAT_00e5ff7c = 0;
    DAT_00e5ff78 = 0;
    DAT_00e5ff74 = 0;
    local_30[2] = 0.1;
    local_30[3] = 1.0;
    local_30[4] = 1.0;
    local_30[5] = 0.0;
    local_30[6] = 0.0;
    local_30[7] = 1.0;
    dVar15 = (double)MB_randRot();
    MB_RotateQuatAxisAngle((float)dVar15,(float *)&DAT_00e5ff80,local_30);
    DAT_00e5ff90 = (float)dVar15;
    DAT_00e5ff68 = 0;
    DAT_00e5ff94 = 0;
    DAT_00740390 = 0x3bc49ba6;
    if (DAT_0074038c != 0) {
      puVar11 = &DAT_00e5ffac;
      lVar14 = 0x19;
      DAT_0074038c = 0;
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


// 0x0199888 (0x1550 bytes)
// inlined: FastRSqrt @0x199cec, FastRSqrt @0x19a204, FastRSqrt @0x19a2a0
// strings: 00199804: '@333Br' (raw)

double M1045_00199888(longlong param_1,float *param_2)

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
  
  M1045_001995e0();
  fVar5 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  psVar6 = &DAT_00e61328;
  lVar19 = 9;
  local_290.x = g_heroPosition.x;
  local_290.y = g_heroPosition.y;
  local_290.z = g_heroPosition.z + 0.6;
  DAT_00e61328 = DAT_00e61328 + 4;
  local_290.w = g_heroPosition.w;
  DAT_00e61260 = *param_2;
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
  fVar1 = fVar1 - DAT_00e61260;
  dVar35 = 2.799999952316284;
  dVar38 = 0.0;
  fVar3 = (fVar5 - fVar4) + 0.6;
  DAT_00e61264 = param_2[1];
  DAT_00e61268 = param_2[2];
  DAT_00e6126c = param_2[3];
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
  FUN_005e7d64(&local_280,&DAT_00e5ff70,param_1 + 0xc0);
  local_280 = (float)((double)local_280 + dVar20);
  local_27c = (float)((double)local_27c + dVar43);
  local_278 = (float)((double)local_278 + dVar41);
  FUN_005e7d64(&local_270,&DAT_00e5ff80,param_1 + 0xc0);
  local_270 = (float)((double)local_270 + dVar20);
  local_26c = (float)((double)local_26c + dVar43);
  local_268 = (float)((double)local_268 + dVar41);
  dVar44 = 60.5;
  local_130 = (longlong)(int)(animationSpeed * 60.5);
  dVar20 = (double)FastIntToDouble((int)(animationSpeed * 60.5));
  lVar19 = (longlong)DAT_00e5ff68;
  DAT_00e5ff68 = DAT_00e5ff68 + 1;
  local_130 = (longlong)(int)((double)animationSpeed * dVar44);
  fVar3 = (float)((double)lVar19 / dVar20);
  dVar20 = (double)((local_270 - local_280) * fVar3 + local_280);
  dVar43 = (double)((local_26c - local_27c) * fVar3 + local_27c);
  dVar41 = (double)((local_268 - local_278) * fVar3 + local_278);
  if ((int)((double)animationSpeed * dVar44) <= DAT_00e5ff68) {
    DAT_00e5ff70 = DAT_00e5ff80;
    DAT_00e5ff74 = DAT_00e5ff84;
    DAT_00e5ff78 = DAT_00e5ff88;
    DAT_00e5ff7c = DAT_00e5ff8c;
    local_260[0] = 0.0;
    local_260[1] = 0.0;
    local_260[2] = 0.1;
    local_260[3] = 1.0;
    local_260[4] = 1.0;
    local_260[5] = 0.0;
    local_260[6] = 0.0;
    local_260[7] = 1.0;
    dVar44 = (double)MB_randRangeFloat(45.0,315.0);
    dVar44 = (double)FastWrapRot(DAT_00e5ff90,(float)(dVar44 * 0.01745329238474369));
    MB_RotateQuatAxisAngle((float)dVar44,(float *)&DAT_00e5ff80,local_260);
    DAT_00e5ff90 = (float)dVar44;
    DAT_00e5ff68 = 0;
  }
  local_138 = 0.1;
  dVar44 = (double)FastWrapRot(DAT_00e5ff94,0.1);
  DAT_00e5ff94 = (float)dVar44;
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
  pfVar8 = (float *)&DAT_00e61340;
  iVar16 = 0;
  local_1a0 = (float)(dVar21 * dVar37 - (double)(float)(dVar34 * dVar36));
  local_19c = (float)(dVar34 * dVar44 - (double)(float)(dVar25 * dVar37));
  local_198 = (float)(dVar25 * dVar36 - (double)(float)(dVar21 * dVar44));
  dVar21 = 0.019999999552965164;
  pfVar14 = (float *)&DAT_007403a0;
  pfVar13 = pfVar8;
  do {
    local_260[8] = (float)((double)*pfVar14 * dVar21);
    local_23c = (float)((double)pfVar14[1] * dVar21);
    local_238 = (float)((double)pfVar14[2] * dVar21);
    local_234 = pfVar14[3];
    FUN_005e7d64(local_260 + 8,local_260 + 8,&local_1a0);
    iVar16 = iVar16 + 1;
    pfVar14 = pfVar14 + 4;
    *pfVar13 = DAT_00e61260 + local_260[8];
    pfVar13[1] = DAT_00e61264 + local_23c;
    pfVar13[2] = DAT_00e61268 + local_238;
    pfVar13[3] = DAT_00e6126c;
    pfVar13 = pfVar13 + 4;
  } while (iVar16 < 0x14);
  iVar16 = 1;
  dVar25 = 1000.0;
  start = (Vec4 *)&DAT_00e61260;
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
    pfVar14 = (float *)&DAT_007403a0;
    pfVar13 = pfVar8;
    do {
      dVar22 = (double)FastWrapRot
                                 ((float)(dVar29 * dVar40 + (double)DAT_00e5ff94),(float)dVar38);
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
  RegisterMobyDraw(&PTR_M1046_0019d958_007086a0,(MobyInstance *)param_1);
  iVar17 = 0;
  iVar15 = 0;
  iVar18 = 0;
  iVar16 = 0;
  do {
    iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
    if (iVar18 < 5 && iVar9 == 0) {
      lVar19 = 9;
      iVar7 = 0x12;
      do {
        if (0x3f < *(short *)((int)&DAT_00e61328 + iVar7)) break;
        lVar19 = lVar19 + -1;
        iVar7 = iVar7 + -2;
      } while (-1 < (int)lVar19);
      if (0 < (int)lVar19) {
        if (iVar17 < 2 && 1 < (int)lVar19) {
          iVar7 = MB_randInt(0x14);
          uVar42 = 0x3ff0000000000000;
          dVar40 = (double)MB_randRangeFloat((float)dVar30,1.0);
          pfVar8 = (float *)((int)(&DAT_00e61340 + iVar7 * 4) +
                            (int)(lVar19 << 8) + (int)(lVar19 << 6));
          dVar20 = (double)(float)(&DAT_00e61340)[iVar7 * 4];
          local_1d4 = pfVar8[3];
          iVar9 = (int)(lVar19 << 4);
          local_1e0 = (float)(dVar40 * (double)(float)((double)*pfVar8 - dVar20) + dVar20);
          local_1dc = (float)(dVar40 * (double)(pfVar8[1] - (float)(&DAT_00e61344)[iVar7 * 4]) +
                             (double)(float)(&DAT_00e61344)[iVar7 * 4]);
          local_1d8 = (float)(dVar40 * (double)(pfVar8[2] - (float)(&DAT_00e61348)[iVar7 * 4]) +
                             (double)(float)(&DAT_00e61348)[iVar7 * 4]);
          dVar35 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00e61260 +
                                                                              iVar9) -
                                                           (double)DAT_00e61260) +
                                  (double)DAT_00e61260);
          dVar20 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00e61264 +
                                                                              iVar9) -
                                                           (double)DAT_00e61264) +
                                  (double)DAT_00e61264);
          dVar40 = (double)(float)(dVar40 * (double)(float)((double)*(float *)((int)&DAT_00e61268 +
                                                                              iVar9) -
                                                           (double)DAT_00e61268) +
                                  (double)DAT_00e61268);
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
        local_1e0 = *(float *)((int)&DAT_00e61260 + iVar9);
        local_1dc = *(float *)((int)&DAT_00e61264 + iVar9);
        local_1d8 = *(float *)((int)&DAT_00e61268 + iVar9);
        local_1d4 = *(float *)((int)&DAT_00e6126c + iVar9);
        local_1c4 = 0;
        local_1c8 = 0;
        local_1cc = 0;
        local_1d0 = 0;
        uVar24 = MB_randRangeFloat(60000.0,180000.0);
        iVar9 = SpawnPart_23
                          (dVar38,0x3ff0000000000000,0x3ff0000000000000,uVar24,&local_1e0);
        *(int *)((int)&DAT_00e5ffac + iVar16) = iVar9;
        if (iVar9 != 0) {
          iVar18 = iVar18 + 1;
          *(undefined2 *)(iVar9 + 10) = 200;
          *(undefined4 *)(iVar9 + 0x24) = 2;
          *(undefined1 *)(iVar9 + 0x2a) = 0x7f;
          *(undefined1 *)(iVar9 + 0x2b) = 200;
        }
        dVar20 = (double)local_138;
        *(short *)((int)&DAT_00e5ff98 + iVar16) = (short)lVar19;
        *(undefined4 *)((int)&DAT_00e5ff9c + iVar16) = 0;
        *(undefined4 *)((int)&DAT_00e5ffa0 + iVar16) = 0;
        uVar10 = MB_randInt(0x14);
        *(undefined2 *)((int)&DAT_00e5ff9a + iVar16) = uVar10;
        dVar40 = (double)MB_randRangeFloat((float)dVar20,0.8);
        *(float *)((int)&DAT_00e5ffa4 + iVar16) = (float)dVar40;
        dVar40 = (double)MB_randRangeFloat((float)dVar20,0.4);
        iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
        *(float *)((int)&DAT_00e5ffa8 + iVar16) = (float)dVar40;
      }
    }
    if (iVar9 != 0) {
      iVar7 = (int)((longlong)*(short *)((int)&DAT_00e5ff98 + iVar16) << 4);
      dVar35 = (double)(*(float *)((int)&DAT_00e61254 + iVar7) -
                       *(float *)((int)&DAT_00e61264 + iVar7));
      dVar43 = (double)(*(float *)((int)&DAT_00e61250 + iVar7) -
                       *(float *)((int)&DAT_00e61260 + iVar7));
      dVar20 = (double)(*(float *)((int)&DAT_00e61258 + iVar7) -
                       *(float *)((int)&DAT_00e61268 + iVar7));
      dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                   (double)(float)(dVar43 * dVar43 +
                                                  (double)(float)(dVar35 * dVar35))));
      *(float *)((int)&DAT_00e5ff9c + iVar16) =
           *(float *)((int)&DAT_00e5ff9c + iVar16) + *(float *)((int)&DAT_00e5ffa8 + iVar16);
      *(undefined2 *)(iVar9 + 10) = 200;
      if (dVar40 < (double)*(float *)((int)&DAT_00e5ff9c + iVar16)) {
        sVar11 = *(short *)((int)&DAT_00e5ff98 + iVar16) + -1;
        *(short *)((int)&DAT_00e5ff98 + iVar16) = sVar11;
        if (sVar11 < 1) {
          DeletePart(*(undefined4 *)((int)&DAT_00e5ffac + iVar16));
          *(undefined4 *)((int)&DAT_00e5ffac + iVar16) = 0;
        }
        else {
          iVar9 = (int)((longlong)*(short *)((int)&DAT_00e5ff98 + iVar16) << 4);
          *(float *)((int)&DAT_00e5ff9c + iVar16) =
               (float)((double)*(float *)((int)&DAT_00e5ff9c + iVar16) - dVar40);
          dVar35 = (double)(*(float *)((int)&DAT_00e61254 + iVar9) -
                           *(float *)((int)&DAT_00e61264 + iVar9));
          dVar43 = (double)(*(float *)((int)&DAT_00e61250 + iVar9) -
                           *(float *)((int)&DAT_00e61260 + iVar9));
          dVar20 = (double)(*(float *)((int)&DAT_00e61258 + iVar9) -
                           *(float *)((int)&DAT_00e61268 + iVar9));
          dVar40 = (double)SQRT((float)(dVar20 * dVar20 +
                                       (double)(float)(dVar43 * dVar43 +
                                                      (double)(float)(dVar35 * dVar35))));
        }
      }
      if (*(int *)((int)&DAT_00e5ffac + iVar16) != 0) {
        dVar40 = (double)(float)((double)*(float *)((int)&DAT_00e5ff9c + iVar16) / dVar40);
        if (*(short *)((int)&DAT_00e5ff98 + iVar16) == 2) {
          *(undefined2 *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) = 100;
        }
        else if (*(short *)((int)&DAT_00e5ff98 + iVar16) < 2) {
          uVar10 = FastDoubleToInt((double)((float)(1.0 - dVar40) * 100.0));
          *(undefined2 *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) = uVar10;
          if (*(short *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) < 0x3d) {
            *(undefined2 *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 10) = 0x3c;
          }
        }
        if (*(short *)((int)&DAT_00e5ff98 + iVar16) == 1) {
          iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
          fVar4 = (float)((double)param_2[1] - (double)*(float *)(iVar9 + 0x14));
          fVar1 = (float)((double)*param_2 - (double)*(float *)(iVar9 + 0x10));
          fVar2 = (float)((double)param_2[2] - (double)*(float *)(iVar9 + 0x18));
          dVar20 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
          fVar3 = (float)((double)*(float *)((int)&DAT_00e5ffa8 + iVar16) / dVar20);
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
          *(float *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 0xc) =
               *(float *)(*(int *)((int)&DAT_00e5ffac + iVar16) + 0xc) *
               (DAT_0071f408 * -0.050000012 + 1.0);
        }
        else {
          iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
          iVar7 = (int)((longlong)*(short *)((int)&DAT_00e5ff98 + iVar16) << 4);
          *(float *)(iVar9 + 0x10) =
               (float)(dVar43 * dVar40 + (double)*(float *)((int)&DAT_00e61260 + iVar7));
          *(float *)(iVar9 + 0x14) =
               (float)(dVar35 * dVar40 + (double)*(float *)((int)&DAT_00e61264 + iVar7));
          *(float *)(iVar9 + 0x18) =
               (float)(dVar20 * dVar40 + (double)*(float *)((int)&DAT_00e61268 + iVar7));
          *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)((int)&DAT_00e6126c + iVar7);
          sVar11 = *(short *)((int)&DAT_00e5ff9a + iVar16);
          Lerp_vec4((float)dVar40,&local_1c0);
          iVar7 = sVar11 + 0x13;
          Lerp_vec4((float)dVar40,local_1b0);
          Lerp_vec4(*(float *)((int)&DAT_00e5ffa0 + iVar16),&local_1c0);
          fVar3 = *(float *)((int)&DAT_00e5ffa0 + iVar16) + *(float *)((int)&DAT_00e5ffa4 + iVar16);
          iVar9 = *(int *)((int)&DAT_00e5ffac + iVar16);
          *(float *)((int)&DAT_00e5ffa0 + iVar16) = fVar3;
          if (1.0 <= fVar3) {
            *(short *)((int)&DAT_00e5ff9a + iVar16) = (short)iVar7 + (short)(iVar7 / 0x14) * -0x14;
            *(float *)((int)&DAT_00e5ffa0 + iVar16) = fVar3 - 1.0;
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


// 0x019add8 (0x24 bytes)
void M1045_0019add8(void)

{
  DAT_00740388 = 1;
  DAT_0074038c = 1;
  DAT_00e61328 = 0;
  return;
}


// 0x019aea0 (0x2aa4 bytes)
// strings: 00654380: 'Correcting!\n' | 0019ae98: 'B\nff`'

/* WARNING: Type propagation algorithm not settling */
/* Moby 1045 */

void UpdateMoby_1045(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  MobyModeBit MVar4;
  void *pvVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  char cVar21;
  Vec4 *position;
  u8 uVar22;
  undefined2 uVar20;
  int iVar19;
  int iVar23;
  int iVar24;
  short sVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  GPiece<16> auStack_2e0;
  GPiece<16> auStack_2d0;
  GPiece<16> auStack_2c0;
  GPiece<16> auStack_2b0;
  GPiece<16> local_2a0;
  GPiece<16> auStack_290;
  GPiece<16> auStack_280;
  GPiece<16> auStack_270;
  GPiece<16> auStack_260;
  GPiece<16> auStack_250;
  GPiece<16> auStack_240;
  GPiece<16> auStack_230;
  Vec4 VStack_220;
  GPiece<16> auStack_210;
  GPiece<16> auStack_200;
  GPiece<16> auStack_1f0;
  GPiece<16> auStack_1e0;
  GPiece<8> auStack_1d0;
  float local_1c8;
  GPiece<16> auStack_1c0;
  GPiece<16> auStack_1b0;
  GPiece<16> auStack_1a0;
  GPiece<16> auStack_190;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  float local_160;
  float local_15c;
  float local_148;
  GPiece<16> auStack_130;
  MobyInstance *local_120;
  int local_110 [2];
  GPiece<24> auStack_108;
  GPiece<24> auStack_f0;
  longlong local_d8;
  
  lVar13 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  if ((*(int *)((int)pvVar5 + 0x1a4) != -1) &&
     (iVar14 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x1a4)),
     iVar14 == 0)) {
    return;
  }
  lVar28 = lVar13 + 0x10;
  FUN_005e7e98(auStack_2e0,lVar28);
  M1045_00198d88(lVar13,pvVar5,(int)pvVar5 + 0x20);
  dVar37 = 30.0;
  MB_getTarget(0x403e000000000000,lVar13,&DAT_0019adfc,&local_160);
  dVar31 = (double)FUN_005e8588(&local_160,lVar28);
  uVar32 = FUN_005e8338((double)(local_160 - (moby->pos).x),(double)(local_15c - (moby->pos).y));
  dVar33 = (double)FUN_005e8588(lVar28,&g_heroPosition);
  uVar34 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                        (double)(g_heroPosition.y - (moby->pos).y));
  iVar14 = 1;
  uVar15 = FastDecTimerS16((int)pvVar5 + 0x194);
  bVar11 = false;
  uVar30 = (uVar15 != 0);
  iVar16 = FastDecTimerS16((int)pvVar5 + 0x19a);
  if ((iVar16 != 0) && (4.0 < dVar31)) {
    bVar11 = true;
  }
  bVar12 = false;
  if (((*(char *)((int)pvVar5 + 0x1c7) != '\0') && (local_120 == g_heroMobyPtr)) &&
     (dVar31 < dVar37)) {
    bVar12 = true;
  }
  uVar29 = 0;
  iVar16 = FastDecTimerS16((int)pvVar5 + 0x198);
  bVar2 = moby->setByGroup;
  if ((iVar16 != 0) && (dVar31 < 10.0)) {
    uVar29 = 1;
  }
  iVar16 = 0;
  bVar1 = false;
  dVar31 = 1.0;
  if ((((moby->pos).z + 1.0 < g_heroGroundZ) && (g_standingOnMoby != 0)) &&
     (*(short *)(g_standingOnMoby + 0xa6) < 0x45d && 0x458 < *(short *)(g_standingOnMoby + 0xa6))) {
    bVar1 = true;
  }
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      bVar12 = false;
      iVar14 = 0;
    }
    else if (bVar2 < 2) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else if (bVar2 < 3) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else {
      iVar14 = *(int *)((int)pvVar5 + 0x1a8);
      uVar30 = (uint)(ZERO_MASK((-1 - iVar14))) & uVar30;
      uVar29 = (uint)(ZERO_MASK((-1 - iVar14))) & uVar29;
      iVar16 = (int)(ZERO_MASK((-1 - iVar14))) + 1;
      bVar12 = false;
      iVar14 = iVar16;
    }
  }
  else if (bVar2 < 7) {
    if (bVar2 < 5) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else if (bVar2 < 6) {
      uVar29 = 0;
      uVar30 = 0;
      bVar12 = false;
      bVar11 = false;
    }
    else if (*(int *)((int)pvVar5 + 0x1a8) == -1) {
      iVar14 = 0;
    }
    else {
      uVar29 = 0;
      iVar16 = 1;
      uVar30 = 0;
    }
  }
  else if (bVar2 < 8) {
    uVar29 = 0;
    uVar30 = 0;
    bVar11 = false;
    bVar12 = false;
  }
  else if (bVar2 < 9) {
    uVar29 = 0;
    uVar30 = 0;
    bVar11 = false;
    bVar12 = false;
  }
  dVar36 = 16.0;
  uVar17 = FastDoubleToInt((double)(*(float *)((int)pvVar5 + 0x20) * 16.0));
  uVar17 = uVar17 & 0xfff0;
  *(uint *)((int)pvVar5 + 0x1b4) = uVar17;
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 0) {
    uVar17 = (int)*(uint *)((int)pvVar5 + 0x20) >> 0x1f;
    if ((int)((uVar17 >> 1 ^ *(uint *)((int)pvVar5 + 0x20)) - uVar17) < 0x3f000001) {
      uVar17 = 0;
      *(undefined4 *)((int)pvVar5 + 0x1b4) = 0;
    }
    else {
      iVar18 = FastDoubleToInt((double)(*(float *)((int)pvVar5 + 0x20) - 0.5));
      iVar23 = (int)*(short *)((int)pvVar5 + 0x24);
      iVar19 = iVar23 >> 0x1f;
      iVar24 = (int)*(short *)((int)pvVar5 + 0x24);
      iVar19 = ((iVar18 - (iVar18 / ((iVar23 / 6 + iVar19) - (iVar23 / 6 + iVar19 >> 0x1f))) *
                          ((iVar23 / 6 + iVar19) - (iVar23 / 6 + iVar19 >> 0x1f))) * 0x10) /
               ((iVar24 / 6 + (iVar24 >> 0x1f)) - (iVar24 / 6 + (iVar24 >> 0x1f) >> 0x1f));
      uVar17 = *(int *)((int)pvVar5 + 0x1b4) + (iVar19 + (iVar19 >> 0x1f & -iVar19) & 0xfU);
      *(uint *)((int)pvVar5 + 0x1b4) = uVar17;
    }
  }
  if ((uint)(byte)moby->setByGroup + (((byte)moby->setByGroup + 1) * 0x55 >> 8) * -3 == 2) {
    *(uint *)((int)pvVar5 + 0x1b4) = uVar17 + 0xf;
  }
  if (moby->state != '\0' && moby->state != '\a') {
    M1045_00199300(lVar13);
  }
  cVar21 = *(char *)((int)pvVar5 + 0x1c5);
  if (cVar21 == '\x01') {
    fVar3 = DAT_0071f408 * 0.01 + *(float *)((int)pvVar5 + 0x1c8);
    dVar35 = (double)fVar3;
    *(float *)((int)pvVar5 + 0x1c8) = fVar3;
    if (dVar31 <= dVar35) {
      cVar21 = '\0';
      *(undefined1 *)((int)pvVar5 + 0x1c5) = 0;
    }
    if (dVar31 < dVar35) {
      *(undefined4 *)((int)pvVar5 + 0x1c8) = 0x3f800000;
    }
  }
  if (cVar21 == '\x02') {
    fVar3 = -(DAT_0071f408 * 0.01 - *(float *)((int)pvVar5 + 0x1c8));
    *(float *)((int)pvVar5 + 0x1c8) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined1 *)((int)pvVar5 + 0x1c5) = 0;
    }
    if (fVar3 < 0.0) {
      *(undefined4 *)((int)pvVar5 + 0x1c8) = 0;
    }
  }
  dVar35 = 0.0;
  if (0 < *(int *)((int)pvVar5 + 0x1c8)) {
    RegisterMobyDraw(&PTR_M1045_00198280_007085c8,moby);
  }
  iVar19 = g_standingOnMoby;
  bVar2 = moby->state;
  if (8 < bVar2) {
    if (bVar2 != 0x10) {
      if (bVar2 == 0xf) {
        iVar14 = *(int *)((int)pvVar5 + 0x1f0);
        if (iVar14 != -1) {
          SetSpawnPoint((Vec4 *)&Cuboids[iVar14].pos,(Vec4 *)&Cuboids[iVar14].rot);
          memcard_Save(0,-1);
        }
        iVar14 = *(int *)((int)pvVar5 + 0x1d0);
        if (iVar14 == -1) {
          DeleteMoby(moby);
          return;
        }
        fVar7 = g_MobyInstance[iVar14].pos.z;
        fVar3 = g_MobyInstance[iVar14].pos.z;
        uVar30 = (int)fVar7 >> 0x1f;
        if (0x4209ffff < (int)((uVar30 >> 1 ^ (uint)fVar7) - uVar30)) {
          DeleteMoby(moby);
          return;
        }
        g_MobyInstance[iVar14].pos.z = ((float)0x420a6666 - fVar3) * 0.1 + fVar3;
      }
      else if (bVar2 == 0xe) {
        iVar14 = MB_updateJump(lVar13,(int)pvVar5 + 0xc0);
        if ((iVar14 == 4) ||
           ((*(char *)((int)pvVar5 + 0xef) == '\x02' &&
            (fVar7 = (moby->pos).z, uVar30 = (int)fVar7 >> 0x1f,
            uVar29 = (int)*(uint *)((int)pvVar5 + 0x128) >> 0x1f,
            (int)((uVar30 >> 1 ^ (uint)fVar7) - uVar30) <=
            (int)((uVar29 >> 1 ^ *(uint *)((int)pvVar5 + 0x128)) - uVar29))))) {
          (moby->pos).z = *(f32 *)((int)pvVar5 + 0x128);
          GetBonePosition(lVar13,5,auStack_200);
          uVar32 = 0x4039000000000000;
          dVar33 = 8.0;
          Spawn_Moby1046
                    (dVar31,0x4039000000000000,dVar31,(double)(g_FrameTime * 8.0),dVar31,
                     lVar13,auStack_200);
          GetBonePosition(lVar13,6,auStack_200);
          Spawn_Moby1046
                    (dVar31,uVar32,dVar31,(double)(float)((double)g_FrameTime * dVar33),
                     dVar31,lVar13,auStack_200);
          if (*(int *)((int)pvVar5 + (uint)*(byte *)((int)pvVar5 + 0x19d) * 4 + 0x1d8) != -1) {
            g_MobyInstance[*(int *)((int)pvVar5 + (uint)*(byte *)((int)pvVar5 + 0x19d) * 4 + 0x1d8)].
            setByGroup = '\0';
          }
          if (moby->animationId != '\x05') {
            MB_SetAnimation(lVar13,5,0,10);
          }
          moby->unk58 = 0.5;
          moby->state = '\x06';
          moby->setByGroup = moby->setByGroup + '\x01';
          uVar15 = idol::GetAnimDuration(0x37);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
        }
      }
      else if (bVar2 == 0xd) {
        iVar14 = (int)pvVar5 + 0x100;
        FUN_005e822c(0x3fd99999a0000000,iVar14,iVar14);
        FUN_005e7f54(lVar28,lVar28,iVar14);
        if (*(int *)((int)pvVar5 + 0x164) < 1) {
          iVar14 = FastDecTimerS32((int)pvVar5 + 0x160);
          if (iVar14 != 0) {
            bVar2 = *(byte *)((int)pvVar5 + 0x19d);
            if (bVar2 == 0) {
              FUN_005e7e98((int)pvVar5 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x10
                          );
              *(byte *)((int)pvVar5 + 0x19c) = *(byte *)((int)pvVar5 + 0x19c) & 0xfe;
            }
            else if (bVar2 < 2) {
              FUN_005e7e98((int)pvVar5 + 0x120,ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x20
                          );
              *(byte *)((int)pvVar5 + 0x19c) = *(byte *)((int)pvVar5 + 0x19c) & 0xfd;
            }
            else if (bVar2 < 3) {
              dVar31 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x30);
              dVar33 = (double)FUN_005e8588(&g_heroPosition,
                                            ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x40);
              if (dVar31 <= dVar33) {
                FUN_005e7e98((int)pvVar5 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x40);
              }
              else {
                FUN_005e7e98((int)pvVar5 + 0x120,
                             ZEXT48(Splines[*(int *)((int)pvVar5 + 0x1a0)]) + 0x30);
              }
              *(byte *)((int)pvVar5 + 0x19c) = *(byte *)((int)pvVar5 + 0x19c) & 0xfb;
            }
            *(uint *)((int)pvVar5 + 0x1a8) =
                 (uint)*(byte *)((int)pvVar5 + *(byte *)((int)pvVar5 + 0x19d) + 0x1d4);
            uVar32 = M1045_00198cac(lVar13,pvVar5,auStack_f0);
            MB_SplineMarkCrossings(auStack_f0,uVar32,*(undefined4 *)((int)pvVar5 + 0x188))
            ;
            MB_initJump(lVar13,(int)pvVar5 + 0xc0,(int)pvVar5 + 0x120);
            moby->state = '\x0e';
          }
        }
        else {
          iVar14 = FastDecTimerS32((int)pvVar5 + 0x160);
          if (iVar14 != 0) {
            *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
            *(int *)((int)pvVar5 + 0x164) = *(int *)((int)pvVar5 + 0x164) + -1;
            *(float *)((int)pvVar5 + 0x20) =
                 (float)((double)*(float *)((int)pvVar5 + 0x20) - dVar31);
            MB_UpdateLightsTransition(lVar13,(int)pvVar5 + 0x60);
            if (*(int *)((int)pvVar5 + 0x20) < 1) {
              if (moby->animationId != '\r') {
                MB_SetAnimation(lVar13,0xd,0,10);
              }
              moby->state = '\t';
            }
            else {
              if (*(int *)((int)pvVar5 + 0x164) < 1) {
                uVar15 = idol::GetAnimDuration(0x14);
              }
              else {
                uVar15 = idol::GetAnimDuration(10);
              }
              *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
            }
          }
        }
      }
      else if (bVar2 == 0xc) {
        iVar14 = (int)pvVar5 + 0x100;
        dVar31 = (double)*(float *)((int)pvVar5 + 0x108);
        FUN_005e822c(0x3fe6666660000000,iVar14,iVar14);
        *(float *)((int)pvVar5 + 0x108) =
             -(float)((double)g_FrameTime * 9.800000190734863 - dVar31);
        FUN_005e7f54(lVar28,lVar28,iVar14);
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\v')) {
          MB_SetAnimation(lVar13,0xb,0,10);
        }
        fVar7 = (moby->pos).z;
        uVar30 = (int)fVar7 >> 0x1f;
        uVar29 = (int)*(uint *)((int)pvVar5 + 0x1b8) >> 0x1f;
        if ((int)((uVar30 >> 1 ^ (uint)fVar7) - uVar30) <
            (int)((uVar29 >> 1 ^ *(uint *)((int)pvVar5 + 0x1b8)) - uVar29)) {
          if (moby->animationId != '\v') {
            MB_SetAnimation(lVar13,0xb,0,10);
          }
          uVar15 = idol::GetAnimDuration(10);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          *(undefined1 *)((int)pvVar5 + 0x1c5) = 2;
          moby->state = '\r';
          *(int *)((int)pvVar5 + 0x164) = (int)*(short *)((int)pvVar5 + 0x24) / 6;
        }
      }
      else if (bVar2 == 0xb) {
        if (moby->animationId != '\n') {
          MB_SetAnimation(lVar13,10,0,10);
        }
        bVar2 = moby->setByGroup;
        uVar29 = bVar2 + 1;
        moby->state = '\f';
        uVar30 = (uint)bVar2;
        if ((int)((uint)bVar2 + (uVar29 * 0x55 >> 8) * -3) < 2) {
          moby->setByGroup = (char)uVar29;
          uVar30 = uVar29;
        }
        uVar30 = uVar30 & 0xff;
        uVar29 = uVar30 + 1;
        if ((int)(uVar30 - ((uVar29 * 0x55 >> 8) + (uVar29 * 0x55 >> 8) * 2)) < 2) {
          moby->setByGroup = (char)uVar29;
          uVar30 = uVar29;
        }
        if (7 < (uVar30 & 0xff)) {
          moby->setByGroup = '\b';
        }
        bVar2 = *(byte *)((int)pvVar5 + 0x19d);
        uVar26 = (ulonglong)bVar2;
        iVar14 = *(int *)((int)pvVar5 + (uint)bVar2 * 4 + 0x1d8);
        if (iVar14 != -1) {
          if ((iVar14 != -1) &&
             (iVar16 = *(int *)((int)pvVar5 + (uint)bVar2 * 4 + 0x1e4), iVar16 != -1)) {
            pvVar6 = g_MobyInstance[iVar16].pVar;
            iVar14 = *(int *)((int)g_MobyInstance[iVar14].pVar + 0x28);
            if ((iVar14 != -1) && (*(int *)((int)pvVar6 + 0x28) != -1)) {
              dVar31 = (double)FUN_005e8588(&g_heroPosition,&Cuboids[iVar14].pos);
              dVar33 = (double)FUN_005e8588(&g_heroPosition,
                                            &Cuboids[*(int *)((int)pvVar6 + 0x28)].pos);
              if (dVar33 < dVar31) {
                uVar26 = uVar26 + 3;
              }
            }
          }
          g_MobyInstance[*(int *)((int)pvVar5 + (int)(uVar26 << 2) + 0x1d8)].setByGroup = '\x01';
        }
      }
      else if (bVar2 == 10) {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (bVar1) {
            *(undefined4 *)((int)pvVar5 + 0x164) = 0;
            FUN_005e7e98((int)pvVar5 + 0x150,iVar19 + 0x10);
            *(float *)((int)pvVar5 + 0x158) = *(float *)((int)pvVar5 + 0x158) + 3.0;
            moby->state = '\b';
          }
          else {
            moby->state = '\x01';
          }
        }
      }
      else if (bVar2 == 9) {
        if (*(int *)((int)pvVar5 + 0x1b0) != -1) {
          Hud_SetEntryValueById(*(int *)((int)pvVar5 + 0x1b0),0);
          *(undefined4 *)((int)pvVar5 + 0x1b0) = 0xffffffff;
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          iVar14 = (int)pvVar5 + 0x100;
          FUN_005e7f98(dVar31,iVar14,iVar14);
          *(undefined4 *)((int)pvVar5 + 0x108) = 0x3f800000;
          MB_genericExplosion
                    (dVar35,dVar35,0x4014000000000000,0x4008000000000000,0x4024000000000000,dVar31,
                     dVar37,lVar13,iVar14,0,&DAT_0019adfc,0xffffffffffffffff,0x14,6,0x20);
          iVar14 = *(int *)((int)pvVar5 + 0x1cc);
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          if (iVar14 != -1) {
            FUN_0044cddc(g_MobyInstance + iVar14);
          }
          (moby->pos).z = 20.0;
          moby->state = '\x0f';
        }
      }
    }
    goto LAB_0019d8bc;
  }
  position = (Vec4 *)lVar28;
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      moby->state = '\x01';
      moby->setByGroup = '\0';
      iVar14 = *(int *)((int)pvVar5 + 0x18c);
      *(undefined4 *)((int)pvVar5 + 400) = 0;
      if ((iVar14 != -1) && (iVar16 = 0, 0 < Splines[iVar14]->cnt)) {
        iVar19 = 0;
        do {
          iVar16 = iVar16 + 1;
          pSVar8 = Splines[iVar14];
          dVar31 = (double)FUN_005e8548((int)&pSVar8->points[0].x + iVar19,
                                        (int)pSVar8 +
                                        ((iVar16 - (iVar16 / pSVar8->cnt) * pSVar8->cnt) * 4 + 4) *
                                        4);
          *(float *)((int)&Splines[*(int *)((int)pvVar5 + 0x18c)]->points[0].w + iVar19) =
               (float)dVar31;
          iVar14 = *(int *)((int)pvVar5 + 0x18c);
          pSVar8 = Splines[iVar14];
          *(float *)((int)pvVar5 + 400) =
               *(float *)((int)pvVar5 + 400) + *(float *)((int)&pSVar8->points[0].w + iVar19);
          iVar19 = iVar19 + 0x10;
        } while (iVar16 < pSVar8->cnt);
      }
      iVar14 = *(int *)((int)pvVar5 + 0x188);
      if ((iVar14 != -1) && (iVar16 = 0, 0 < Splines[iVar14]->cnt)) {
        iVar19 = 0;
        do {
          iVar14 = FastDoubleToInt
                             ((double)*(float *)((int)&Splines[iVar14]->points[0].w + iVar19));
          if ((-1 < iVar14) && (iVar14 < 4)) {
            *(char *)((int)pvVar5 + iVar14 + 0x1d4) = (char)iVar16;
          }
          iVar14 = *(int *)((int)pvVar5 + 0x188);
          iVar16 = iVar16 + 1;
          iVar19 = iVar19 + 0x10;
        } while (iVar16 < Splines[iVar14]->cnt);
      }
      MVar4 = moby->modeBits;
      uVar15 = *(undefined4 *)((int)pvVar5 + 0x188);
      *(uint *)((int)pvVar5 + 0xa8) = *(uint *)((int)pvVar5 + 0xa8) & 0xfffffff7;
      moby->modeBits = MVar4 | CAN_BE_AUTO_TARGETED;
      MB_SplineMarkCrossings((int)pvVar5 + 0x170,3,uVar15);
      *(undefined1 *)((int)pvVar5 + 0x19c) = 7;
      moby->updateDistance = -1;
      iVar14 = *(int *)((int)pvVar5 + 0x188);
      moby->drawDistance = 0xff;
      *(undefined4 *)((int)pvVar5 + 0x1a8) = 0xffffffff;
      *(undefined4 *)((int)pvVar5 + 0x1b0) = 0xffffffff;
      iVar14 = PathFindClosestPnt((float)dVar35,position,Splines[iVar14]);
      *(int *)((int)pvVar5 + 0x1c0) = iVar14;
      DAT_00740388 = 1;
      DAT_0074038c = 1;
      DAT_00e61328 = 0;
      moby->scale = moby->scale * 1.5;
      *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
    }
    else if (bVar2 < 2) {
      if (*(int *)((int)pvVar5 + 0x1b0) == -1) {
        iVar16 = RegisterHUDCallback
                           (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                            &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868
                            ,(int *)((int)pvVar5 + 0x1b4),
                            (int)((longlong)*(short *)((int)pvVar5 + 0x24) << 4) + 0xf);
        *(int *)((int)pvVar5 + 0x1b0) = iVar16;
      }
      if (((moby->field43_0x70 & 2U) != 0) &&
         (bVar2 = moby->animationId, uVar17 = rand(), (uint)bVar2 != (uVar17 & 1))) {
        uVar17 = rand();
        MB_SetAnimation(lVar13,uVar17 & 1,0,10);
      }
      iVar16 = FastDecTimerS32((int)pvVar5 + 0x160);
      if (iVar16 != 0) {
        if (bVar11) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          *(undefined4 *)((int)pvVar5 + 0x160) = 0;
          if (moby->animationId != '\b') {
            MB_SetAnimation(lVar13,8,0,10);
          }
          moby->state = '\x04';
        }
        if (uVar30 != 0) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          if (moby->animationId != '\a') {
            MB_SetAnimation(lVar13,7,0,10);
          }
          moby->state = '\x03';
          moby->unk58 = 0.42;
        }
        if (bVar12) {
          if (moby->animationId != '\t') {
            MB_SetAnimation(lVar13,9,0,10);
          }
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
          *(undefined1 *)((int)pvVar5 + 0x1c4) = 0;
          moby->state = '\a';
        }
        if (uVar29 != 0) {
          if (moby->animationId != '\x06') {
            MB_SetAnimation(lVar13,6,0,10);
          }
          moby->state = '\x02';
        }
      }
      if (iVar14 != 0) {
        if (moby->animationId != '\x05') {
          MB_SetAnimation(lVar13,5,0,10);
        }
        moby->unk58 = 0.5;
        moby->state = '\x05';
      }
    }
    else {
      OrganicDeltAngSpeed
                (uVar32,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                 (double)(g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      if (moby->updateId == '\x06') {
        uVar22 = M1045_00196d68(lVar13,pvVar5,&local_160);
        moby->state = uVar22;
      }
      dVar31 = (double)FUN_005e8588(&local_160,lVar28);
      if (12.0 < dVar31) {
        uVar20 = idol::GetAnimDuration(0x1e);
        *(undefined2 *)((int)pvVar5 + 0x198) = uVar20;
        uVar15 = idol::GetAnimDuration(0x19);
        *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
        moby->state = '\x01';
      }
    }
    goto LAB_0019d8bc;
  }
  if (bVar2 < 5) {
    if (bVar2 < 4) {
      OrganicDeltAngSpeed
                (uVar32,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                 (double)(g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      iVar14 = MB_MayaFrameTrigger((float)dVar36,moby);
      if (((iVar14 != 0) ||
          (iVar14 = MB_MayaFrameTrigger((float)dVar37,moby), iVar14 != 0)) ||
         (iVar14 = MB_MayaFrameTrigger(46.0,moby), iVar14 != 0)) {
        *(int *)((int)pvVar5 + 0x164) = *(int *)((int)pvVar5 + 0x164) + 1;
        FUN_005e7e98(auStack_2d0,lVar28);
        Spawn_Moby1046
                  (dVar31,0x4039000000000000,dVar31,(double)(g_FrameTime * 8.0),dVar31,
                   lVar13,auStack_2d0);
        if (2 < *(int *)((int)pvVar5 + 0x164)) {
          uVar20 = idol::GetAnimDuration(0x3c);
          *(undefined2 *)((int)pvVar5 + 0x194) = uVar20;
          uVar15 = idol::GetAnimDuration(0x37);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          moby->state = '\x01';
          moby->unk58 = 1.0;
        }
      }
    }
    else {
      OrganicDeltAngSpeed
                (uVar32,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                 (double)(g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      if (moby->updateId == '\b') {
        FUN_005e7e98(auStack_2c0,&local_160);
        uVar32 = 0x3fe0000000000000;
        GetGroundZ(0x3fe0000000000000,auStack_2c0,0);
        iVar14 = *(int *)((int)pvVar5 + 0x160) + 1;
        *(int *)((int)pvVar5 + 0x160) = iVar14;
        if (*(int *)((int)pvVar5 + 0x164) == 0) {
          FUN_005e81f0(auStack_2b0,lVar28,auStack_2c0);
          FUN_005e7f98(dVar31,auStack_2b0,auStack_2b0);
          FUN_005e7f98(0x3fb3333340000000,auStack_270,auStack_2b0);
          cosf(local_148);
          FUN_005e8128((double)local_148);
          FUN_005e81c0(local_2a0,auStack_2b0);
          FUN_005e7f98(auStack_260,auStack_2b0);
          FUN_005e81f0(local_2a0,local_2a0,auStack_260);
          uVar34 = 0x4020000000000000;
          FUN_005e7f98(0x4020000000000000,auStack_290,auStack_2b0);
          FUN_005e7f98(0x4010000000000000,local_2a0,local_2a0);
          FUN_005e7f54(auStack_290,auStack_290,auStack_2c0);
          FUN_005e81f0(auStack_290,auStack_290,local_2a0);
          FUN_005e7f98(uVar34,local_2a0,local_2a0);
          FUN_005e7f54(local_2a0,local_2a0,auStack_2c0);
          FUN_005e7f98(0x4000000000000000,auStack_2b0,auStack_2b0);
          FUN_005e81f0(local_2a0,local_2a0,auStack_2b0);
          FUN_005e7e98(auStack_250,&DAT_00969de0);
          iVar14 = idol::GetAnimDuration(0x28);
          local_d8 = (longlong)iVar14;
          FUN_005e822c((double)local_d8,auStack_280,auStack_250);
          FUN_005e81f0(auStack_2b0,local_2a0,auStack_290);
          FUN_005e822c(uVar32,auStack_2b0,auStack_2b0);
          FUN_005e7f54(auStack_2b0,auStack_2b0,auStack_290);
          FUN_005e81f0(auStack_2b0,auStack_2b0,auStack_2c0);
          FUN_005e81f0(auStack_2b0,auStack_2b0,auStack_270);
          FUN_005e81f0(auStack_2b0,auStack_280,auStack_2b0);
          FUN_005e7f54(auStack_290,auStack_290,auStack_2b0);
          FUN_005e7f54(local_2a0,local_2a0,auStack_2b0);
          FUN_005e7e98((int)pvVar5 + 0x110,auStack_290);
          FUN_005e7e98((int)pvVar5 + 0x120,local_2a0);
          FUN_005e7e98((int)pvVar5 + 0x140,auStack_290);
          iVar16 = (int)pvVar5 + 0x130;
          FUN_005e81f0(iVar16,local_2a0,auStack_290);
          iVar14 = idol::GetAnimDuration(0x3c);
          local_d8 = (longlong)iVar14;
          FUN_005e822c((double)(float)(dVar31 / (double)local_d8),iVar16,iVar16);
          FUN_005e7e98((int)pvVar5 + 0x150,(int)pvVar5 + 0x140);
          *(undefined4 *)((int)pvVar5 + 0x15c) = 0;
          *(undefined4 *)((int)pvVar5 + 0x164) = 1;
        }
        else {
          iVar16 = idol::GetAnimDuration(0x3c);
          if (iVar14 < iVar16) {
            FUN_005e7f54((int)pvVar5 + 0x140,(int)pvVar5 + 0x140,(int)pvVar5 + 0x130);
            RegisterMobyDraw(&PTR_M1045_00196fc8_007085b0,moby);
            *(undefined4 *)((int)pvVar5 + 0x164) = 2;
          }
          else {
            *(undefined4 *)((int)pvVar5 + 0x164) = 0;
            uVar20 = idol::GetAnimDuration(0xf0);
            *(undefined2 *)((int)pvVar5 + 0x19a) = uVar20;
            uVar15 = idol::GetAnimDuration(200);
            *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
            moby->state = '\x01';
          }
        }
        STUB_00065468(auStack_2c0,(int)pvVar5 + 0x110);
        STUB_00065468(auStack_2c0,(int)pvVar5 + 0x120);
        STUB_00065468((int)pvVar5 + 0x110,(int)pvVar5 + 0x120);
        STUB_00065468(auStack_2c0,(int)pvVar5 + 0x140);
      }
    }
    goto LAB_0019d8bc;
  }
  if (6 < bVar2) {
    if (bVar2 < 8) {
      OrganicDeltAngSpeed
                (uVar34,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                 (double)(g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      GetBonePosition(lVar13,4,auStack_1f0);
      dVar31 = (double)M1045_00199888(lVar13,auStack_1f0);
      if (moby->updateId == '\t') {
        FUN_005e7e98((int)pvVar5 + 0x140,&g_heroPosition);
        dVar37 = 0.6000000238418579;
        *(float *)((int)pvVar5 + 0x148) = *(float *)((int)pvVar5 + 0x148) + 0.6;
        if (dVar33 <= (double)*(float *)((int)pvVar5 + 0x16c)) {
          if ((*(char *)((int)pvVar5 + 0x1c4) != '\0') ||
             ((iVar14 = FastDecTimerS32((int)pvVar5 + 0x160), iVar14 != 0 &&
              (dVar31 < dVar37)))) {
            *(undefined1 *)((int)pvVar5 + 0x1c4) = 1;
            if (g_heroState != UNK_78) {
              FUN_005e7e98((int)pvVar5 + 0x110,&g_heroPosition);
              FUN_005e7e98((int)pvVar5 + 0x120,&g_heroPosition);
              fVar3 = (moby->pos).z;
              if (fVar3 - g_heroPosition.z < 0.0) {
                fVar3 = g_heroPosition.z;
              }
              *(float *)((int)pvVar5 + 0x128) = fVar3 + 2.0;
              TransitionMovement(0x78,1);
              *(undefined4 *)((int)pvVar5 + 0x164) = 0;
              *(undefined2 *)((int)pvVar5 + 0x19e) = 0;
              *(undefined4 *)((int)pvVar5 + 0x1ac) = 0x41a00000;
            }
            iVar14 = (int)pvVar5 + 0x110;
            FUN_005e81f0(auStack_1e0,(int)pvVar5 + 0x120,iVar14);
            FUN_005e822c((double)(DAT_0071f408 * 0.1),auStack_1e0,auStack_1e0);
            FUN_005e7f54(iVar14,iVar14,auStack_1e0);
            FUN_005e7e98(&DAT_0096ba10,iVar14);
            FUN_005e7e98(&g_heroPosition,iVar14);
            dVar37 = 25.132741928100586;
            dVar31 = (double)FastWrapRot(DAT_0096ba28,g_FrameTime * 25.132742);
            DAT_0096ba28 = (float)dVar31;
            dVar31 = (double)FastWrapRot
                                       ((float)dVar31,
                                        (float)((double)g_FrameTime * dVar37));
            g_heroRotation.z = (float)dVar31;
            iVar16 = *(int *)((int)pvVar5 + 0x164) * 8;
            *(float *)((int)pvVar5 + 0x16c) = (float)dVar33;
            iVar14 = *(int *)(&DAT_00740328 + iVar16);
            if (iVar14 == -1) {
              *(undefined4 *)((int)pvVar5 + 0x164) = 0;
              uVar20 = idol::GetAnimDuration(800);
              *(undefined2 *)((int)pvVar5 + 0x196) = uVar20;
              uVar15 = idol::GetAnimDuration(0xf0);
              *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
              M1045_00199398(lVar13);
              if (g_heroState == UNK_78) {
                TransitionMovement(0,1);
              }
              *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
              moby->state = '\x01';
            }
            else {
              sVar25 = *(short *)((int)pvVar5 + 0x19e);
              iVar16 = *(int *)(&DAT_0074032c + iVar16);
              if (sVar25 == 0) {
                uVar30 = (&currentAmmoArray.field0_0x0)[iVar14];
                sVar25 = (short)((int)uVar30 >> 3) + (ushort)((int)uVar30 < 0 && (uVar30 & 7) != 0);
                *(short *)((int)pvVar5 + 0x19e) = sVar25;
                if (sVar25 < iVar16) {
                  *(short *)((int)pvVar5 + 0x19e) = (short)iVar16;
                }
                dVar31 = (double)MB_randRangeFloat
                                           (*(float *)((int)pvVar5 + 0x1ac) + 20.0,
                                            *(float *)((int)pvVar5 + 0x1ac) + 100.0);
                *(float *)((int)pvVar5 + 0x1ac) = (float)dVar31;
                sVar25 = *(short *)((int)pvVar5 + 0x19e);
              }
              lVar27 = (longlong)sVar25;
              uVar30 = (&currentAmmoArray.field0_0x0)[iVar14];
              if ((int)uVar30 < (int)sVar25) {
                lVar27 = (longlong)(int)uVar30;
                *(undefined2 *)((int)pvVar5 + 0x19e) = 0;
                *(int *)((int)pvVar5 + 0x164) = *(int *)((int)pvVar5 + 0x164) + 1;
                uVar30 = (&currentAmmoArray.field0_0x0)[iVar14];
              }
              iVar16 = uVar30 - (int)(lVar27 << 3);
              lVar27 = lVar27 + (-(longlong)iVar16 >> 0x3f & ((int)lVar27 + iVar16) - lVar27);
              iVar16 = (int)lVar27;
              if (0 < iVar16) {
                if (*(int *)((int)pvVar5 + 0x18c) == -1) {
                  MB_randSphere
                            ((double)(g_FrameTime * 4.0),
                             (double)(g_FrameTime * 10.0),auStack_1d0);
                  if (local_1c8 < g_FrameTime * 2.0) {
                    dVar31 = (double)MB_randRangeFloat
                                               (g_FrameTime * 3.0,
                                                g_FrameTime * 6.0);
                    local_1c8 = (float)dVar31;
                  }
                  FUN_005e7f98(0x3fe6666660000000,auStack_1c0,auStack_1d0);
                  FUN_005e7f54(auStack_1c0,auStack_1c0,&g_heroPosition);
                }
                else {
                  local_110[0] = 0;
                  local_110[1] = 0;
                  pSVar8 = Splines[*(int *)((int)pvVar5 + 0x18c)];
                  local_110[0] = PathFindClosestPnt
                                           ((float)dVar35,(Vec4 *)&g_heroPosition,pSVar8);
                  dVar31 = 5.0;
                  dVar37 = 12.0;
                  dVar33 = 10.0;
                  do {
                    do {
                      *(float *)((int)pvVar5 + 0x1ac) =
                           (float)((double)*(float *)((int)pvVar5 + 0x1ac) + dVar33);
                      MB_PathMoveDist(pSVar8,auStack_1b0,local_110,local_110 + 1);
                      dVar36 = (double)FUN_005e8588(&g_heroPosition,auStack_1b0);
                      dVar35 = (double)FUN_005e8588(lVar28,auStack_1b0);
                    } while (dVar36 < dVar31);
                  } while (dVar35 < dVar37);
                  M1045_00199288(0x3fe0000000000000,auStack_1b0);
                  FUN_005e81f0(auStack_1c0,auStack_1b0,&g_heroPosition);
                  dVar33 = 0.699999988079071;
                  FUN_005e7f98(0x3fe6666660000000,auStack_1c0,auStack_1c0);
                  FUN_005e7e98(auStack_1d0,auStack_1c0);
                  local_1c8 = 0.0;
                  dVar31 = 15.0;
                  FUN_005e7f98((double)(g_FrameTime * 15.0),auStack_1d0,auStack_1d0);
                  FUN_005e7f54(auStack_1c0,auStack_1c0,&g_heroPosition);
                  dVar31 = (double)MB_computeLobVelocity
                                             ((double)(float)((double)g_FrameTime * dVar31
                                                             ),(double)(g_FrameTimeSq * -9.8),
                                              auStack_1c0,auStack_1b0);
                  local_1c8 = (float)dVar31;
                  dVar31 = (double)MB_randRangeFloat((float)dVar33,2.0);
                  *(float *)((int)pvVar5 + 0x1ac) =
                       (float)((double)*(float *)((int)pvVar5 + 0x1ac) + dVar31);
                }
                iVar19 = FUN_002ea758(auStack_1c0,iVar14,lVar27,0);
                if (iVar19 != 0) {
                  FUN_005e7e98((ulonglong)*(uint *)(iVar19 + 0x78) + 0x10,auStack_1d0);
                  (&currentAmmoArray.field0_0x0)[iVar14] =
                       (&currentAmmoArray.field0_0x0)[iVar14] - iVar16;
                  uVar15 = idol::GetAnimDuration(0);
                  *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
                }
              }
            }
          }
        }
        else {
          dVar31 = (double)g_FrameTime;
          *(undefined4 *)((int)pvVar5 + 0x160) = 0;
          *(float *)((int)pvVar5 + 0x16c) =
               (float)(dVar31 * 15.0 + (double)*(float *)((int)pvVar5 + 0x16c));
        }
        if (!bVar12) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 0;
          uVar20 = idol::GetAnimDuration(0xf);
          *(undefined2 *)((int)pvVar5 + 0x196) = uVar20;
          M1045_00199398(lVar13);
          if (g_heroState == UNK_78) {
            TransitionMovement(0,1);
          }
          uVar15 = idol::GetAnimDuration(0x46);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
          moby->state = '\x01';
        }
        if (uVar29 != 0) {
          uVar20 = idol::GetAnimDuration(0x1e);
          *(undefined2 *)((int)pvVar5 + 0x196) = uVar20;
          if (moby->animationId != '\x06') {
            MB_SetAnimation(lVar13,6,0,10);
          }
          M1045_00199398(lVar13);
          if (g_heroState == UNK_78) {
            TransitionMovement(0,1);
          }
          *(undefined1 *)((int)pvVar5 + 0x1c7) = 0;
          moby->state = '\x02';
        }
      }
    }
    else {
      OrganicDeltAngSpeed
                (uVar34,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
                 (double)(g_FrameTime * 2.0943952),lVar13,&DAT_00720000,
                 (int)pvVar5 + 0x168);
      iVar14 = *(int *)((int)pvVar5 + 0x164);
      if (iVar14 == 5) {
        moby->unk58 = 1.0;
        *(undefined4 *)((int)pvVar5 + 0x164) = 0;
        *(undefined4 *)((int)pvVar5 + 0x160) = 0;
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar13,0,0,10);
        }
        moby->state = '\x01';
      }
      else if (iVar14 == 4) {
        iVar14 = (int)pvVar5 + 0x110;
        FUN_005e81f0(auStack_170,(int)pvVar5 + 0x120,iVar14);
        FUN_005e7f98((double)DAT_0071f408,auStack_170,auStack_170);
        FUN_005e7f54(iVar14,iVar14,auStack_170);
        if ((*(int *)((int)pvVar5 + 0x164) != 0) &&
           (iVar14 = FastDecTimerS32((int)pvVar5 + 0x160), iVar14 != 0)) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 5;
        }
        RegisterMobyDraw(&PTR_M1045_001989d0_007085d8,moby);
      }
      else if (iVar14 == 3) {
        dVar31 = (double)FUN_005e8588(lVar28,auStack_130);
        fVar3 = *(float *)((int)pvVar5 + 0x16c) + DAT_0071f408;
        *(float *)((int)pvVar5 + 0x16c) = fVar3;
        if (dVar31 <= (double)fVar3) {
          *(undefined4 *)((int)pvVar5 + 0x164) = 4;
        }
        iVar14 = FastDecTimerS32((int)pvVar5 + 0x160);
        if (iVar14 != 0) {
          uVar15 = idol::GetAnimDuration(0x14);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
        }
        RegisterMobyDraw(&PTR_M1045_001989d0_007085d8,moby);
      }
      else if (iVar14 == 2) {
        iVar14 = FastDecTimerS32((int)pvVar5 + 0x160);
        if (iVar14 != 0) {
          uVar15 = idol::GetAnimDuration(10);
          *(undefined4 *)((int)pvVar5 + 0x160) = uVar15;
          uVar34 = 0x41286a0000000000;
          uVar32 = 0x4014000000000000;
          SpawnPart_29(0x41286a0000000000,0x4014000000000000,lVar13,0);
          SpawnPart_29(uVar34,uVar32,lVar13,1);
        }
        dVar31 = (double)BlendAnimFrame(moby);
        if (31.0 <= dVar31) {
          *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
          *(undefined4 *)((int)pvVar5 + 0x164) = 3;
          *(undefined4 *)((int)pvVar5 + 0x11c) = 0;
        }
      }
      else if (iVar14 == 1) {
        if ((moby->updateId == '\x12') &&
           (dVar31 = (double)BlendAnimFrame(moby), 6.5 <= dVar31)) {
          GetBonePosition(lVar13,0,auStack_190);
          GetBonePosition(lVar13,1,auStack_180);
          FUN_005e7f54(auStack_1a0,auStack_190,auStack_180);
          FUN_005e822c(0x3fe0000000000000,auStack_1a0,auStack_1a0);
          FUN_005e7e98((int)pvVar5 + 0x110,auStack_1a0);
          iVar14 = (int)pvVar5 + 0x130;
          FUN_005e81f0(iVar14,(int)pvVar5 + 0x150,(int)pvVar5 + 0x110);
          FUN_005e7f98((double)DAT_0071f408,iVar14,iVar14);
          *(undefined4 *)((int)pvVar5 + 0x164) = 2;
        }
      }
      else if (iVar14 == 0) {
        if (moby->animationId != '\x12') {
          MB_SetAnimation(lVar13,0x12,0,10);
        }
        *(undefined4 *)((int)pvVar5 + 0x160) = 0;
        *(undefined4 *)((int)pvVar5 + 0x164) = 1;
      }
    }
    goto LAB_0019d8bc;
  }
  uVar26 = ZEXT48(&DAT_0019adfc);
  dVar33 = 2.0;
  uVar32 = M1045_00198cac(lVar13,pvVar5,auStack_108);
  if (iVar16 == 0) {
    dVar33 = 6.0;
    FUN_005e7e98(&VStack_220,&local_160);
  }
  else {
    uVar26 = (ulonglong)(*(int *)((int)pvVar5 + 0x188) * 4);
    FUN_005e7e98(&VStack_220,
                 Splines[*(int *)((int)pvVar5 + 0x188)]->points + *(int *)((int)pvVar5 + 0x1a8));
  }
  dVar37 = (double)FUN_005e8588(lVar28,&VStack_220);
  if (dVar33 < dVar37) {
    fVar9 = DAT_0071f408 * 0.06;
    fVar10 = DAT_0071f408 * 0.3 - DAT_0071f408 * 0.06;
    fVar3 = (float)(dVar37 - dVar33);
    if (50.0 - (float)(dVar37 - dVar33) < 0.0) {
      fVar3 = 50.0;
    }
    fVar3 = fVar3 * 0.02 * fVar3 * 0.02 * fVar10 + DAT_0071f408 * 0.06;
    *(float *)((int)pvVar5 + 0x1bc) = fVar3;
    *(float *)((int)pvVar5 + 0x94) = fVar3;
    moby->unk58 = (float)((double)(-(fVar9 - *(float *)((int)pvVar5 + 0x80)) / fVar10) + dVar31) *
                  0.5;
  }
  dVar36 = 0.20000000298023224;
  iVar19 = MB_SplineFindRouteNode
                     (0.2,auStack_108,uVar32,(longlong)*(int *)((int)pvVar5 + 0x188),uVar26,position
                      ,&VStack_220,auStack_240);
  if (iVar19 == 0) {
    iVar19 = PathFindClosestPnt
                       ((float)dVar35,&VStack_220,Splines[*(int *)((int)pvVar5 + 0x188)]);
    lVar27 = ZEXT48(Splines[*(int *)((int)pvVar5 + 0x188)]) + (longlong)iVar19 * 0x10;
    iVar19 = MB_SplineFindRouteNode
                       ((float)dVar36,auStack_108,uVar32,(longlong)*(int *)((int)pvVar5 + 0x188),
                        lVar27,position,(int)lVar27 + 0x10,auStack_240);
    if (iVar19 == 0) {
      iVar19 = PathFindClosestPnt
                         ((float)dVar35,position,Splines[*(int *)((int)pvVar5 + 0x188)]);
      FUN_005e7e98(auStack_240,Splines[*(int *)((int)pvVar5 + 0x188)]->points + iVar19);
    }
  }
  if (dVar37 <= dVar33) {
    OrganicDeltAngSpeed
              (uVar34,(double)(g_FrameTimeSq * 2.0943952),(double)(g_FrameTimeSq * 0.6981317),
               (double)(g_FrameTime * 2.0943952),lVar13,&DAT_00720000,(int)pvVar5 + 0x168)
    ;
LAB_0019c298:
    if (moby->animationId != '\0') {
      MB_SetAnimation(lVar13,0,0,0x14);
    }
    if (iVar16 != 0) {
      *(undefined4 *)((int)pvVar5 + 0x1a8) = 0xffffffff;
      moby->state = '\x01';
      goto LAB_0019d8bc;
    }
  }
  else {
    iVar19 = MB_UpdateNavMoveTurning
                       (lVar13,(int)pvVar5 + 0x70,auStack_240,(int)pvVar5 + 0x100);
    if (iVar19 == 2) {
      printf("Correcting!\n");
      iVar18 = PathFindClosestPnt
                         ((float)dVar35,position,Splines[*(int *)((int)pvVar5 + 0x188)]);
      FUN_005e81f0(auStack_210,Splines[*(int *)((int)pvVar5 + 0x188)]->points + iVar18,lVar28);
      FUN_005e8e80((double)*(float *)((int)pvVar5 + 0x94),auStack_210,auStack_210);
      FUN_005e7f54(lVar28,lVar28,auStack_210);
    }
    if (iVar19 == 4) goto LAB_0019c298;
    bVar1 = moby->animationId != '\x05';
    if (bVar1) {
      if (bVar1) {
        MB_SetAnimation(lVar13,5,0,10);
      }
      moby->unk58 = 0.5;
    }
  }
  if (moby->updateId == '\x05') {
    dVar33 = 8.0;
    iVar19 = MB_MayaFrameTrigger(8.0,moby);
    if (iVar19 != 0) {
      GetBonePosition(lVar13,6,auStack_230);
      Spawn_Moby1046
                (dVar36,0x4010000000000000,0x3fe0000000000000,
                 (double)(float)((double)g_FrameTime * dVar33),dVar31,lVar13,auStack_230);
    }
    iVar19 = MB_MayaFrameTrigger(24.0,moby);
    if (iVar19 != 0) {
      GetBonePosition(lVar13,5,auStack_230);
      Spawn_Moby1046
                (dVar36,0x4010000000000000,0x3fe0000000000000,
                 (double)(float)((double)g_FrameTime * dVar33),dVar31,lVar13,auStack_230);
    }
  }
  iVar19 = FastDecTimerS32((int)pvVar5 + 0x160);
  if (iVar19 != 0) {
    if (bVar11) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x160) = 0;
      moby->unk58 = 1.0;
      if (moby->animationId != '\b') {
        MB_SetAnimation(lVar13,8,0,10);
      }
      moby->state = '\x04';
    }
    if (uVar30 != 0) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      if (moby->animationId != '\a') {
        MB_SetAnimation(lVar13,7,0,10);
      }
      moby->state = '\x03';
      moby->unk58 = 0.42;
    }
    if (bVar12) {
      moby->unk58 = 1.0;
      if (moby->animationId != '\t') {
        MB_SetAnimation(lVar13,9,0,10);
      }
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
      *(undefined1 *)((int)pvVar5 + 0x1c4) = 0;
      moby->state = '\a';
    }
    if (uVar29 != 0) {
      moby->unk58 = 1.0;
      if (moby->animationId != '\x06') {
        MB_SetAnimation(lVar13,6,0,10);
      }
      moby->state = '\x02';
    }
  }
  if (iVar14 == 0) {
    moby->unk58 = 1.0;
    if (moby->animationId != '\0') {
      MB_SetAnimation(lVar13,0,0,10);
    }
    moby->state = '\x01';
  }
  if ((iVar16 == 0) && (dVar37 < 20.0)) {
    M1045_00196d68(lVar13,pvVar5,&local_160);
  }
LAB_0019d8bc:
  FUN_005e81f0((int)pvVar5 + 0x100,lVar28,auStack_2e0);
  return;
}


