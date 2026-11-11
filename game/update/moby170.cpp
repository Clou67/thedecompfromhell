// game/update/moby170.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2ad088-0x2ae394
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby170.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "game/update/moby1488.h"
#include "game/update/moby1632.h"
#include "idol/fastfunc.h"
#include "sdk/lUnk.h"

// 0x02ad088 (0x14 bytes)
void M170_002ad088(void)

{
  DAT_007b72ec = 0x10000;
  return;
}


// 0x02ad118 (0x884 bytes)
void M170_002ad118
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [12];
  longlong local_a0;
  
  uVar12 = 0x3fd3333340000000;
  uVar14 = 0x3ff028f5c0000000;
  uVar16 = 0x3fa99999a0000000;
  uVar19 = 0x41024f8000000000;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff347ae20000000,0x3fa99999a0000000,
             0x41024f8000000000,local_120);
  iVar7 = 0;
  uVar21 = 0x3ff2e147c0000000;
  do {
    SpawnPart_13(uVar12,uVar14,uVar21,uVar16,uVar19,local_120);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  iVar7 = 0;
  dVar22 = 0.0;
  dVar11 = -1.875;
  dVar13 = 1.875;
  dVar15 = 3.75;
  dVar17 = 0.02500000037252903;
  dVar20 = 0.23000000417232513;
  uVar12 = 0x3feccccce0000000;
  uVar14 = 0x4000ccccc0000000;
  do {
    MB_randRangeFloat((float)dVar11,(float)dVar13);
    MB_randRangeFloat((float)dVar11,(float)dVar13);
    MB_randRangeFloat((float)dVar22,(float)dVar15);
    MB_randRangeFloat((float)dVar17,(float)dVar20);
    M1488_0028cce0(uVar12,uVar14,param_1,local_110,local_100,&DAT_00a15d30,0x162);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  uVar12 = 0x3ff3333340000000;
  uVar14 = 0x4003333340000000;
  do {
    MB_randRangeFloat((float)dVar11,(float)dVar13);
    MB_randRangeFloat((float)dVar11,(float)dVar13);
    MB_randRangeFloat((float)dVar22,(float)dVar15);
    MB_randRangeFloat((float)dVar17,(float)dVar20);
    iVar6 = MB_randInt(2);
    M1488_0028cce0(uVar12,uVar14,param_1,local_110,local_f0,&DAT_00a15d30,iVar6 + 0x163);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  if (param_5 != '\0') {
    iVar7 = 10;
    dVar13 = 8.0;
    dVar11 = (double)SQRT((GameCamera.posZ - fStack00000048) * (GameCamera.posZ - fStack00000048) +
                          (GameCamera.posX - fStack00000040) * (GameCamera.posX - fStack00000040) +
                          (GameCamera.posY - fStack00000044) * (GameCamera.posY - fStack00000044));
    if (dVar11 < 8.0) {
      iVar7 = FastDoubleToInt(dVar11);
      iVar7 = iVar7 + 2;
    }
    iVar6 = 0;
    if (dVar11 - 7.0 < 0.0) {
      dVar22 = (double)(float)(7.0 - dVar11);
    }
    if (0 < iVar7) {
      dVar11 = 10.0;
      uVar12 = 0x41324f8000000000;
      dVar15 = 15.5;
      dVar17 = 20.5;
      dVar20 = 25.5;
      dVar18 = 30.5;
      do {
        dVar8 = (double)MB_randRangeFloat((float)dVar13,(float)dVar11);
        dVar9 = (double)g_FrameTime;
        local_d0[0] = 0x4f008fff;
        local_d0[1] = 0x4f008fff;
        local_d0[3] = 0x4f006fff;
        local_d0[4] = 0x2fffffff;
        local_d0[2] = 0x4f007fff;
        local_d0[5] = 0x2fffffff;
        dVar10 = (double)(float)(dVar8 * dVar9 - (double)(float)(dVar9 * dVar22));
        local_d0[6] = 0x2f005f7f;
        local_d0[7] = 0x2f004f7f;
        local_d0[8] = 0x2f003f7f;
        local_d0[9] = 0x2f00004f;
        local_d0[10] = 0x2f000000;
        local_d0[0xb] = 0x3f000000;
        lVar5 = MB_randInt(dVar8,dVar9,(double)(float)(dVar9 * dVar22),6);
        uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2));
        lVar5 = MB_randInt(6);
        uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar17);
        local_a0 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
        iVar1 = (int)((double)animationSpeed * dVar18);
        local_a0 = (longlong)iVar1;
        MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
        SpawnPart_11(uVar12,dVar10,&stack0x00000040,local_e0,uVar2,uVar3);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
    uVar4 = (int)DAT_00a10714 >> 0x1f;
    uVar14 = 0x4018000000000000;
    uVar12 = 0x4022000000000000;
    if ((int)((uVar4 >> 1 ^ DAT_00a10714) - uVar4) < 0x3f733333) {
      local_a0 = (longlong)(int)(animationSpeed * 15.5);
      FUN_001d4d88(0x4022000000000000,param_1,&stack0x00000040,local_e0,uVar4,
                   (int)(animationSpeed * 15.5),0x7f,0x7f,0x7f);
      local_a0 = (longlong)(int)(animationSpeed * 24.5);
      FUN_001d4d88(uVar14,param_1,&stack0x00000040,local_e0);
    }
    local_a0 = (longlong)(int)(animationSpeed * 20.5);
    FUN_001d4d88(uVar12,param_1,&stack0x00000040,local_e0,0x30,(int)(animationSpeed * 20.5),0x7f,
                 0x40,0);
    local_a0 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(uVar14,param_1,&stack0x00000040,local_e0,0x40,(int)(animationSpeed * 27.5),0x60,
                 0x10,0);
    local_a0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88(0x4008000000000000,param_1,&stack0x00000040,local_e0,0x20,
                 (int)(animationSpeed * 29.5),0x20,0,0);
  }
  return;
}


// 0x02ad9c0 (0x380 bytes)
// strings: 006559e4: 'Moby class %d Damage Received: %f\n' | 00655a0c: 'pDam->primIndex:%d ip%3.3f,%3.3f,%3.3f\n'

void M170_002ad9c0(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  MobyModeBit MVar2;
  int handle;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> local_60;
  GPiece<16> auStack_50;
  int local_40 [4];
  
  if (param_1->state != '\x02') {
    pfVar6 = (float *)MB_damage(param_1,0x330000,0);
    if (pfVar6 != (float *)0x0) {
      printf("Moby class %d Damage Received: %f\n",param_1->oClass,(double)pfVar6[0xb]);
      printf("pDam->primIndex:%d ip%3.3f,%3.3f,%3.3f\n",pfVar6[0xe],(double)*pfVar6,
                   (double)pfVar6[1],(double)pfVar6[2]);
    }
    iVar7 = MB_HandleDamage(param_1,pfVar6,param_3,0,local_40,0,0,4);
    fVar1 = (param_1->pos).z;
    pfVar8 = (float *)param_3;
    if ((0 < iVar7) && (iVar7 < 3)) {
      *pfVar8 = 0.0;
    }
    if ((((1 < local_40[0]) && (pfVar6 != (float *)0x0)) && (pfVar6[8] != 0.0)) &&
       (fVar1 + 8.7 < *(float *)((int)pfVar6[8] + 0x18))) {
      uVar3 = (int)*pfVar8 >> 0x1f;
      uVar4 = (int)pfVar6[0xb] >> 0x1f;
      iVar7 = (int)param_2;
      if ((int)((uVar4 >> 1 ^ (uint)pfVar6[0xb]) - uVar4) <
          (int)((uVar3 >> 1 ^ (uint)*pfVar8) - uVar3)) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        *pfVar8 = *pfVar8 - pfVar6[0xb];
        *(undefined1 *)(iVar7 + 0x67) = 0xfa;
        auVar10 = loadVectorLeftIndexed(0x1c,0x2ad99c);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = vectorSplatHalfWord(auVar10,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x26,param_2);
        *(undefined2 *)(iVar7 + 0x26) = uVar5;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        uVar9 = 0;
        MVar2 = param_1->modeBits;
        *pfVar8 = 0.0;
        param_1->modeBits =
             MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar7 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        GetBonePosition(param_1,0,auStack_50);
        MB_genericExplosion
                  (uVar9,uVar9,0x4010000000000000,0x4000000000000000,uVar9,0x3ff0000000000000,
                   0x4034000000000000,param_1,local_60,auStack_50,1,0xffffffffffffffff,10,3,0x10);
        if (param_1->animationId != '\x01') {
          MB_SetAnimation(param_1,1,0,0);
        }
        handle = *(int *)(iVar7 + 0x70);
        if (((handle != -1) && (g_SoundChannels[handle].pMoby == param_1)) &&
           (g_SoundChannels[handle].state != '\0')) {
          sound_Kill(handle);
        }
        *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
        param_1->state = '\x02';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x02add88 (0x60c bytes)
/* Moby 170 */

void UpdateMoby_170(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined8 uVar14;
  double dVar15;
  ulonglong in_f30;
  double dVar16;
  ulonglong in_f31;
  double dVar17;
  GPiece<16> auVar18;
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar9 - 0x180);
  *puVar8 = uVar9;
  puVar8[0x32] = in_LR;
  puVar8[0x2e] = in_f30;
  puVar8[0x2f] = in_f31;
  puVar8[0x2d] = unaff_r31;
  bVar1 = moby->state;
  puVar8[0x2c] = unaff_r30;
  pvVar6 = moby->pVar;
  puVar8[0x2b] = unaff_r29;
  puVar8[0x2a] = unaff_r28;
  puVar8[0x29] = unaff_r27;
  puVar8[0x28] = unaff_r26;
  puVar8[0x27] = unaff_r25;
  if (bVar1 == 0) {
    moby->setByGroup = '\0';
    moby->state = '\x01';
    if ((short)(ushort)(byte)moby->updateDistance < moby->drawDistance) {
      moby->updateDistance = (char)moby->drawDistance;
    }
    uVar5 = moby->uid;
    *(undefined4 *)((int)pvVar6 + 0x70) = 0xffffffff;
    if ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar5 >> 5) << 2)) &
        1 << (uVar5 & 0x1f)) != 0) {
      if (*(int *)((int)pvVar6 + 0x74) != -1) {
        (&DAT_00a20828)[*(int *)((int)pvVar6 + 0x74)] = 1;
      }
      DeleteMoby(moby);
      return;
    }
    GetBonePosition(moby,0,uVar9 - 0xc0);
    *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) + 1.1;
    FUN_002a4e90(0x4006666660000000,moby,uVar9 - 0xc0);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    return;
  }
  if (1 < bVar1) {
    if (2 < bVar1) {
      return;
    }
    dVar17 = 0.0;
    *(undefined4 *)(puVar8 + 0x1e) = 0;
    *(undefined4 *)((int)puVar8 + 0xf4) = 0;
    *(undefined4 *)(puVar8 + 0x1f) = 0;
    *(undefined4 *)((int)puVar8 + 0xfc) = 0;
    bVar1 = moby->setByGroup;
    *(float *)(puVar8 + 0x1f) = g_FrameTime * 8.0;
    fVar2 = 1000.0;
    if (bVar1 == 0) {
      if (-1 < (int)(uint)bVar1) {
        fVar2 = 8.5;
      }
    }
    else if ((bVar1 < 2) || (bVar1 < 3)) {
      fVar2 = 17.0;
    }
    if ((fVar2 < 100.0) && (iVar13 = MB_MayaFrameTrigger(fVar2,moby), iVar13 != 0)) {
      GetBonePosition(moby,(ulonglong)(byte)moby->setByGroup + 1,uVar9 - 0x80);
      puVar8[0x12] = 0xffffffffffffffff;
      puVar8[0x14] = 1;
      puVar8[0x15] = 1;
      puVar8[0x16] = 0xffffffffffffffff;
      puVar8[0x17] = 0;
      MB_genericExplosion
                (dVar17,dVar17,0x4010000000000000,0x4000000000000000,dVar17,0x3ff0000000000000,
                 0x4034000000000000,moby,uVar9 - 0x90,uVar9 - 0x80,1,&DAT_002add40,10,3,0x10);
      moby->setByGroup = moby->setByGroup + '\x01';
    }
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    iVar13 = 0;
    puVar8[0x12] = 0xffffffffffffffff;
    puVar8[0x14] = 1;
    puVar8[0x15] = 1;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    MB_genericExplosion
              (dVar17,dVar17,0x4010000000000000,0x4000000000000000,dVar17,0x3ff0000000000000,
               0x4034000000000000,moby,uVar9 - 0x90,0,1,0xffffffffffffffff,10,3,0x10);
    GetBonePosition(moby,3,uVar9 - 0x70);
    fVar2 = (moby->pos).y;
    fVar3 = (moby->pos).z;
    *(float *)(puVar8 + 0x22) = *(float *)(puVar8 + 0x22) - (moby->pos).x;
    *(float *)((int)puVar8 + 0x114) = *(float *)((int)puVar8 + 0x114) - fVar2;
    *(float *)(puVar8 + 0x23) = *(float *)(puVar8 + 0x23) - fVar3;
    dVar16 = 3.0;
    do {
      dVar15 = (double)MB_randRangeFloat((float)dVar17,(float)dVar16);
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).z;
      fVar4 = (moby->pos).y;
      *(undefined4 *)((int)puVar8 + 0x4c) = *(undefined4 *)((int)puVar8 + 0x11c);
      *(float *)(puVar8 + 8) = (float)((double)*(float *)(puVar8 + 0x22) * dVar15 + (double)fVar2);
      *(float *)(puVar8 + 9) = (float)((double)*(float *)(puVar8 + 0x23) * dVar15 + (double)fVar3);
      *(float *)((int)puVar8 + 0x44) =
           (float)((double)*(float *)((int)puVar8 + 0x114) * dVar15 + (double)fVar4);
      M170_002ad118(moby);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 5);
    if (*(int *)((int)pvVar6 + 0x74) != -1) {
      (&DAT_00a20828)[*(int *)((int)pvVar6 + 0x74)] = 1;
    }
    DeleteMoby(moby);
    return;
  }
  if (*(int *)((int)pvVar6 + 0x74) != -1) {
    (&DAT_00a20828)[*(int *)((int)pvVar6 + 0x74)] = 0;
  }
  iVar13 = *(int *)((int)pvVar6 + 0x70);
  if (iVar13 != -1) {
    iVar13 = IsMobyPlayingSound(moby,iVar13);
    if (iVar13 != 0) goto LAB_002adfa4;
    iVar13 = *(int *)((int)pvVar6 + 0x70);
  }
  if (iVar13 == -1) {
    iVar13 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar6 + 0x70) = iVar13;
  }
  if (iVar13 != -1) {
    *(undefined4 *)((int)puVar8 + 0xdc) = 0;
    *(undefined4 *)(puVar8 + 0x1b) = 0;
    *(undefined4 *)((int)puVar8 + 0xd4) = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0;
    auVar18 = loadVectorLeftIndexed(8,0x2add40);
    iVar13 = *(int *)((int)pvVar6 + 0x70);
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0xd8,
                       uVar9 - 0x180);
    *(undefined4 *)(puVar8 + 0x1b) = uVar7;
    sound_SetOffset(iVar13,(float *)(puVar8 + 0x1a));
  }
LAB_002adfa4:
  if ((moby->enabled != '\0') && (iVar13 = MB_randInt(9), iVar13 == 0)) {
    iVar13 = rand();
    iVar10 = rand();
    uVar11 = rand();
    GetBonePosition(moby,0,uVar9 - 0xa0);
    dVar17 = 0.5;
    *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) + 0.5;
    uVar14 = MB_randRangeFloat(900000.0,1.8e+06);
    iVar12 = rand();
    puVar8[0x24] = (longlong)(iVar12 % 0x28 + 0x28);
    puVar8[0x24] = (longlong)
                   (int)(animationSpeed * (float)((double)(longlong)puVar8[0x24] + dVar17));
    SpawnPart_5
              (uVar14,0,uVar9 - 0xa0,(longlong)iVar13 + 0x30U & 0x3f,(longlong)iVar10 + 0x20U & 0x3f
               ,uVar11 & 0x2f);
  }
  M170_002ad9c0(moby,pvVar6,(int)pvVar6 + 0x20);
  return;
}


