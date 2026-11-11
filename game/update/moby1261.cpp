// game/update/moby1261.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x22b8ec-0x22caa0
#include <stdio.h>
#include "game/update/moby1261.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "game/update/moby1242.h"
#include "game/update/moby1634.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x022b8ec (0x14 bytes)
void M1261_0022b8ec(void)

{
  DAT_007750ac = 0x10000;
  return;
}


// 0x022b928 (0x1c8 bytes)
void M1261_0022b928(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  GPiece<24> local_50;
  
  MB_randRot();
  dVar4 = 0.0;
  MB_randRangeFloat(0.0,DAT_00775108);
  uVar2 = MB_randRangeFloat((float)dVar4,DAT_007750f8);
  uVar3 = MB_randRangeFloat(DAT_007750f8,DAT_007750fc);
  uVar1 = MB_randRange(DAT_00775100,DAT_00775104);
  SpawnPart_52(uVar2,uVar3,local_50,DAT_007750f0,DAT_007750f4,in_r6,in_r7,uVar1);
  return;
}


// 0x022bb60 (0xa30 bytes)
void M1261_0022bb60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
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
  undefined8 uVar23;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  undefined4 local_120 [12];
  longlong local_f0;
  
  dVar21 = 0.0;
  dVar20 = 1.0;
  iVar9 = 0;
  dVar19 = 1.5;
  fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
  fVar4 = GameCamera.posX - *(float *)(param_1 + 0x10);
  fVar6 = GameCamera.posZ - (*(float *)(param_1 + 0x18) + 1.0);
  dVar17 = -1.0;
  dVar16 = 3.5;
  dVar15 = 6.5;
  dVar14 = 60.5;
  dVar13 = 120.5;
  dVar22 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  do {
    MB_randRangeFloat((float)dVar17,(float)dVar20);
    MB_randRangeFloat((float)dVar17,(float)dVar20);
    MB_randRangeFloat((float)dVar21,(float)dVar20);
    MB_randRangeFloat((float)dVar16,(float)dVar15);
    iVar10 = (int)((double)animationSpeed * dVar13);
    local_f0 = (longlong)iVar10;
    uVar7 = MB_randRange((int)((double)animationSpeed * dVar14),iVar10);
    M1634_002a57a0(local_160,local_150,uVar7,0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 10);
  iVar9 = 0;
  dVar16 = 10.0;
  dVar13 = 90.5;
  do {
    MB_randRangeFloat((float)dVar17,(float)dVar20);
    MB_randRangeFloat((float)dVar17,(float)dVar20);
    MB_randRangeFloat((float)dVar21,(float)dVar20);
    MB_randRangeFloat((float)dVar15,(float)dVar16);
    iVar10 = (int)((double)animationSpeed * dVar13);
    local_f0 = (longlong)iVar10;
    uVar7 = MB_randRange((int)((double)animationSpeed * dVar14),iVar10);
    M1634_002a57a0(local_160,local_130,uVar7,1);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  MB_randRangeFloat((float)dVar17,(float)dVar20);
  MB_randRangeFloat((float)dVar17,(float)dVar20);
  MB_randRangeFloat((float)dVar17,(float)dVar20);
  iVar9 = (int)((double)animationSpeed * dVar13);
  local_f0 = (longlong)iVar9;
  uVar7 = MB_randRange((int)((double)animationSpeed * dVar14),iVar9);
  M1634_002a57a0(local_160,local_140,uVar7,1);
  iVar9 = 4;
  uVar7 = 0x4018000000000000;
  if (dVar22 < 6.0) {
    iVar9 = FastDoubleToInt(dVar22);
    iVar9 = iVar9 + 1;
  }
  iVar10 = 0;
  if (dVar22 - 7.0 < 0.0) {
    dVar21 = (double)(float)(7.0 - dVar22);
  }
  if (0 < iVar9) {
    dVar20 = 8.0;
    uVar23 = 0x41224f8000000000;
    dVar17 = 15.5;
    dVar15 = 20.5;
    dVar14 = 25.5;
    dVar13 = 30.5;
    do {
      dVar11 = (double)MB_randRangeFloat((float)dVar20,(float)dVar16);
      dVar12 = (double)g_FrameTime;
      local_120[0] = 0x4f00ff8f;
      local_120[1] = 0x4f00ff8f;
      local_120[2] = 0x4f00ff7f;
      local_120[3] = 0x4f00ff6f;
      local_120[4] = 0x2fffffff;
      local_120[5] = 0x2fffffff;
      local_120[6] = 0x2f007f5f;
      local_120[7] = 0x2f007f4f;
      local_120[8] = 0x2f007f3f;
      local_120[9] = 0x2f004f00;
      dVar18 = (double)(float)((double)(float)(dVar11 * dVar19) * dVar12 -
                              (double)(float)(dVar12 * dVar21));
      local_120[10] = 0x2f000000;
      local_120[0xb] = 0x3f000000;
      lVar8 = MB_randInt
                        ((double)(float)(dVar11 * dVar19),dVar12,(double)(float)(dVar12 * dVar21),6)
      ;
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar8 << 2));
      lVar8 = MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar8 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar15);
      local_f0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar17),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar13);
      local_f0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
      SpawnPart_11(uVar23,dVar18,local_160,local_170,uVar2,uVar3);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  if (9.0 < dVar22) {
    local_f0 = (longlong)(int)(animationSpeed * 15.5);
    FUN_004d4138(uVar7,param_1,local_160,local_170);
    local_f0 = (longlong)(int)(animationSpeed * 24.5);
    FUN_004d4138(uVar7,param_1,local_160,local_170);
  }
  local_f0 = (longlong)(int)(animationSpeed * 20.5);
  FUN_004d4138(uVar7,param_1,local_160,local_170,0x30,(int)(animationSpeed * 20.5),0x3f,0x7f,0);
  local_f0 = (longlong)(int)(animationSpeed * 27.5);
  FUN_004d4138(0x4015000000000000,param_1,local_160,local_170,0x40,(int)(animationSpeed * 27.5),0x10
               ,0x60,0);
  local_f0 = (longlong)(int)(animationSpeed * 29.5);
  FUN_004d4138(0x4012000000000000,param_1,local_160,local_170,0x20,(int)(animationSpeed * 29.5),0,
               0x20,0);
  return;
}


// 0x022c5a8 (0x4f8 bytes)
// strings: 0022c590: '?333Br' | 0065525c: 'Moby class %d UID:%d  Damage Received: %f\n'

/* Moby 1261 */

void UpdateMoby_1261(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  void *pvVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar8;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  float fVar28;
  undefined8 local_e8;
  GPiece<16> local_90;
  int local_80 [2];
  longlong local_78;
  
  bVar1 = moby->state;
  pvVar4 = moby->pVar;
  uVar13 = ZEXT48(pvVar4);
  bVar14 = (bVar1 == 0xffffffff) << 1;
  if (bVar1 == 0) {
    if (-1 < (int)(uint)bVar1) {
      *(undefined1 *)((int)pvVar4 + 0x29) = 0;
      (moby->rotation).x = (moby->rotation).x * (float)0x3f333333;
      (moby->rotation).y = (moby->rotation).y * (float)0x3f333333;
      iVar9 = MB_damage(moby,0x330001,0);
      if (iVar9 != 0) {
        printf("Moby class %d UID:%d  Damage Received: %f\n",moby->oClass,moby->uid,
                     (double)*(float *)(iVar9 + 0x2c));
      }
      iVar10 = MB_HandleDamage(moby,iVar9,uVar13 + 0x20,0,local_80,0,0,4);
      if ((0 < iVar10) && (iVar10 < 3)) {
        *(undefined4 *)((int)pvVar4 + 0x20) = 0;
      }
      lVar12 = uVar13 + 0x60;
      if (1 < local_80[0]) {
        uVar11 = (int)*(uint *)((int)pvVar4 + 0x20) >> 0x1f;
        uVar5 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
        fVar2 = *(float *)(iVar9 + 0x2c);
        if ((int)((uVar5 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar5) <
            (int)((uVar11 >> 1 ^ *(uint *)((int)pvVar4 + 0x20)) - uVar11)) {
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          *(undefined1 *)((int)pvVar4 + 0x67) = 0xfa;
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - fVar2;
          auVar21 = loadVectorLeftIndexed(4,0x22c590);
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = vectorSplatHalfWord(auVar21,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x26,uVar13);
          *(undefined2 *)((int)pvVar4 + 0x26) = uVar6;
          MB_UpdateLightsTransition(moby,lVar12);
          dVar19 = -0.03490658476948738;
          dVar17 = 0.03490658476948738;
          dVar15 = (double)MB_randRangeFloat(-0.034906585,0.034906585);
          (moby->rotation).x = (float)dVar15;
          dVar15 = (double)MB_randRangeFloat((float)dVar19,(float)dVar17);
          (moby->rotation).y = (float)dVar15;
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x20) = 0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
          *(undefined1 *)((int)pvVar4 + 0x67) = 0x78;
          MB_UpdateLightsTransition(moby,lVar12);
          *(undefined4 *)((int)pvVar4 + 0x70) = 0;
          M1261_0022bb60(moby,uVar13);
          M1261_0022b928(moby);
          PlayMobySound(0,0,moby);
          moby->state = '\x01';
        }
      }
      moby->damage = -1;
      MB_ColorDyingMoby(moby,lVar12);
    }
  }
  else if (bVar1 < 2) {
    uVar7.piece<0,4>() = (moby->pos).x;
    uVar7.piece<4,4>() = (moby->pos).y;
    fVar3 = (moby->pos).w;
    uVar18 = 0x3ff0000000000000;
    fVar2 = (moby->pos).z;
    dVar16 = (double)DAT_007750e4;
    dVar19 = (double)DAT_007750e8;
    dVar15 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0x70));
    dVar20 = 0.5;
    auVar21 = loadVectorLeftIndexed(0x14,0x22c590);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar27 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)DAT_007750e0 + 0.5));
    local_78 = (longlong)iVar9;
    dVar17 = (double)FastIntToDouble(iVar9);
    fVar28 = Lerp((float)dVar16,(float)dVar19,(float)(dVar15 / dVar17));
    uVar8 = CollMobySphere((double)fVar28,local_90);
    local_e8 = CONCAT44(fVar2 + 1.0,fVar3);
    MB_DamageMobyList
              ((double)DAT_007750ec,uVar18,uVar18,moby,&PTR_DAT_00770000,uVar7,local_e8,
               &DAT_00a14a00,uVar8,0,&DAT_00830001);
    auVar21 = ZEXT416(0xffffffff);
    auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar21 = ZEXT416(0xffffffff);
    auVar24 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar23 = loadVectorLeftIndexed(0x50e0,0x770000);
    auVar21 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar23,0);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar23 = loadVectorLeftIndexed(0x70,uVar13);
    auVar25 = loadVectorRightIndexed(0x80,uVar13);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar23 = vectorConvertFromSignedFixedPointWord(auVar23 | auVar25,0);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar27,auVar21);
    auVar21 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = vectorMultiplyAddFloatingPoint(auVar26,auVar22,auVar24);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
               auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    if ((bool)(bVar14 >> 1 & 1)) {
      uVar11 = (uint)(byte)moby->alpha * 8 - (uint)(byte)moby->alpha;
      moby->alpha = (char)((int)uVar11 >> 3) + ((int)uVar11 < 0 && (uVar11 & 7) != 0);
    }
    else {
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      M1261_0022b928(moby);
    }
    iVar10 = *(int *)((int)pvVar4 + 0x70) + 1;
    *(int *)((int)pvVar4 + 0x70) = iVar10;
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)DAT_007750e0 + dVar20));
    local_78 = (longlong)iVar9;
    if (iVar9 < iVar10) {
      M1261_0022b928(moby);
      DeleteMoby(moby);
    }
  }
  return;
}


