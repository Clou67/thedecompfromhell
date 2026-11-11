// game/update/moby158.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2a0108-0x2a0bbc
#include <stdio.h>
#include "game/update/moby158.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby112.h"
#include "game/update/moby1488.h"
#include "idol/fastfunc.h"

// 0x02a0108 (0x708 bytes)
void M158_002a0108(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  int iVar10;
  longlong lVar8;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  GPiece<16> local_120;
  GPiece<16> auStack_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [12];
  longlong local_a0;
  
  uVar23 = 0x3feccccce0000000;
  uVar14 = 0x40083d70a0000000;
  uVar17 = 0x3fa99999a0000000;
  uVar20 = 0x41024f8000000000;
  SpawnPart_13
            (0x3feccccce0000000,0x40083d70a0000000,0x4009cccce0000000,0x3fa99999a0000000,
             0x41024f8000000000,local_120);
  iVar10 = 0;
  uVar24 = 0x4009ae1480000000;
  do {
    SpawnPart_13(uVar23,uVar14,uVar24,uVar17,uVar20,local_120);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 5);
  iVar10 = 0;
  dVar25 = 0.0;
  dVar15 = -1.875;
  dVar18 = 1.875;
  dVar21 = 3.75;
  uVar14 = 0x3ffccccce0000000;
  do {
    MB_randRangeFloat((float)dVar15,(float)dVar18);
    MB_randRangeFloat((float)dVar15,(float)dVar18);
    MB_randRangeFloat((float)dVar25,(float)dVar21);
    M1488_0028cce0(uVar23,uVar14,param_1,auStack_110,local_100,&DAT_00a15d30,0x162);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  iVar10 = 0;
  uVar14 = 0x3ff3333340000000;
  uVar17 = 0x4000ccccc0000000;
  do {
    MB_randRangeFloat((float)dVar15,(float)dVar18);
    MB_randRangeFloat((float)dVar15,(float)dVar18);
    MB_randRangeFloat((float)dVar25,(float)dVar21);
    iVar9 = MB_randInt(2);
    M1488_0028cce0(uVar14,uVar17,param_1,auStack_110,local_f0,&DAT_00a15d30,iVar9 + 0x163);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  if (param_2 != '\0') {
    fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
    fVar6 = GameCamera.posX - *(float *)(param_1 + 0x10);
    fVar7 = GameCamera.posZ - *(float *)(param_1 + 0x18);
    iVar10 = 10;
    dVar18 = 8.0;
    dVar15 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    if (dVar15 < 8.0) {
      iVar10 = FastDoubleToInt(dVar15);
      iVar10 = iVar10 + 2;
    }
    iVar9 = 0;
    if (dVar15 - 7.0 < 0.0) {
      dVar25 = (double)(float)(7.0 - dVar15);
    }
    if (0 < iVar10) {
      dVar15 = 10.0;
      uVar14 = 0x41324f8000000000;
      dVar21 = 15.5;
      dVar16 = 20.5;
      dVar19 = 25.5;
      dVar22 = 30.5;
      do {
        dVar11 = (double)MB_randRangeFloat((float)dVar18,(float)dVar15);
        dVar12 = (double)g_FrameTime;
        local_d0[0] = 0x4f008fff;
        local_d0[1] = 0x4f008fff;
        local_d0[3] = 0x4f006fff;
        local_d0[4] = 0x2fffffff;
        local_d0[2] = 0x4f007fff;
        local_d0[5] = 0x2fffffff;
        dVar13 = (double)(float)(dVar11 * dVar12 - (double)(float)(dVar12 * dVar25));
        local_d0[6] = 0x2f005f7f;
        local_d0[7] = 0x2f004f7f;
        local_d0[8] = 0x2f003f7f;
        local_d0[9] = 0x2f00004f;
        local_d0[10] = 0x2f000000;
        local_d0[0xb] = 0x3f000000;
        lVar8 = MB_randInt(dVar11,dVar12,(double)(float)(dVar12 * dVar25),6);
        uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2));
        lVar8 = MB_randInt(6);
        uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar16);
        local_a0 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
        iVar1 = (int)((double)animationSpeed * dVar22);
        local_a0 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
        SpawnPart_11(uVar14,dVar13,param_1 + 0x10,local_e0,uVar2,uVar3);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
    }
    uVar4 = (int)DAT_00a10714 >> 0x1f;
    uVar14 = 0x4022000000000000;
    uVar17 = 0x4018000000000000;
    if ((int)((uVar4 >> 1 ^ DAT_00a10714) - uVar4) < 0x3f733333) {
      local_a0 = (longlong)(int)(animationSpeed * 15.5);
      FUN_001d4d88(0x4022000000000000,param_1,param_1 + 0x10,local_e0,uVar4,
                   (int)(animationSpeed * 15.5),0x7f,0x7f,0x7f);
      local_a0 = (longlong)(int)(animationSpeed * 24.5);
      FUN_001d4d88(uVar17,param_1,param_1 + 0x10,local_e0);
    }
    iVar10 = param_1 + 0x10;
    local_a0 = (longlong)(int)(animationSpeed * 20.5);
    FUN_001d4d88(uVar14,param_1,iVar10,local_e0,0x30,(int)(animationSpeed * 20.5),0x7f,0x40,0);
    local_a0 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(uVar17,param_1,iVar10,local_e0,0x40,(int)(animationSpeed * 27.5),0x60,0x10,0);
    local_a0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88(0x4008000000000000,param_1,iVar10,local_e0,0x20,(int)(animationSpeed * 29.5),0x20,0
                 ,0);
  }
  return;
}


// 0x02a0818 (0x1dc bytes)
// strings: 00655948: 'Moby class %d Damage Received: %f\n'

void M158_002a0818(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  int local_30 [4];
  
  if (param_1->state != '\x02') {
    iVar5 = MB_damage(param_1,0x330000,0);
    if (iVar5 != 0) {
      printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar5 + 0x2c));
    }
    iVar6 = MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    pfVar7 = (float *)param_3;
    if ((0 < iVar6) && (iVar6 < 3)) {
      *pfVar7 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar2 = (int)*pfVar7 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
      iVar6 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x2a0810);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
        *(undefined2 *)(iVar6 + 0x26) = uVar4;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar7 = 0.0;
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar6 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x02';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x02a0a10 (0x1ac bytes)
/* Moby 158 */

void UpdateMoby_158(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  GPiece<24> local_60;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    M158_002a0818(moby,ZEXT48(moby->pVar),ZEXT48(moby->pVar) + 0x20);
  }
  else if (bVar1 < 3) {
    iVar2 = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0,0x3ff0000000000000,0x4034000000000000,
               moby,local_60,0,1,0xffffffffffffffff,10,3,0x10);
    dVar3 = (double)(moby->pos).x;
    dVar4 = (double)(moby->pos).y;
    dVar5 = (double)(moby->pos).z;
    dVar7 = 1.5;
    dVar6 = (double)(moby->pos).w;
    do {
      (moby->pos).x = (float)dVar3;
      (moby->pos).y = (float)dVar4;
      (moby->pos).z = (float)dVar5;
      (moby->pos).w = (float)dVar6;
      MB_RandomizeVector((float)dVar7,&(moby->pos).x);
      M158_002a0108(moby,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    (moby->pos).w = (float)dVar6;
    (moby->pos).z = (float)dVar5;
    (moby->pos).y = (float)dVar4;
    (moby->pos).x = (float)dVar3;
    DeleteMoby(moby);
  }
  return;
}


