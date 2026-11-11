// game/update/moby276.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x3258b4-0x3262ec
// shared update function UpdateMoby_{276_1298_1299}; registered for oClasses 276, 1298, 1299
#include <stdlib.h>
#include "game/update/moby276.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby320.h"
#include "idol/fastfunc.h"

// 0x03258b4 (0x14 bytes)
void M1299_003258b4(void)

{
  DAT_008001a0 = 0x10000;
  return;
}


// 0x03258d0 (0x13c bytes)
longlong M1299_003258d0(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar4;
  undefined8 in_LR;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby((MOBY_OCLASSES)param_2);
  lVar2 = (longlong)(int)pMVar3;
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar3->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar3->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    auVar5 = loadVectorLeftIndexed(in_LR,0x3258c8);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xff;
    cVar1 = storeVectorElementByteIndexed
                      (auVar5 | auVar5 << 8 | auVar5 << 0x10 | auVar5 << 0x18 | auVar5 << 0x20 |
                       auVar5 << 0x28 | auVar5 << 0x30 | auVar5 << 0x38 | auVar5 << 0x40 |
                       auVar5 << 0x48 | auVar5 << 0x50 | auVar5 << 0x58 | auVar5 << 0x60 |
                       auVar5 << 0x68 | auVar5 << 0x70 | auVar5 << 0x78,0xbc,lVar2);
    pMVar3->setByGroup = cVar1;
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(lVar2);
    pMVar3->modeBits = *(MobyModeBit *)(param_1 + 0x34);
    if ((param_2 == 0x514) && (uVar4 = rand(), (uVar4 & 1) != 0)) {
      pMVar3->modeBits = pMVar3->modeBits | MIRROR;
    }
  }
  return lVar2;
}


// shared update function, registered for oClasses 276, 1298, 1299
// 0x0325a50 (0x774 bytes)
/* Moby 276
   Moby 1298
   Moby 1299 */

void UpdateMoby_276(MobyInstance *moby)

{
  MOBY_OCLASSES MVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float fVar8;
  longlong lVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar10;
  int iVar13;
  double dVar14;
  undefined8 uVar15;
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
  double dVar26;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  double local_e0;
  double local_d8;
  float local_d0;
  
  lVar9 = (longlong)(int)moby;
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    iVar11 = MB_damage(lVar9,0x40000,0);
    bVar7 = false;
    if (moby->state == '\0') {
      moby->state = '\x01';
    }
    iVar12 = FastDecTimerS8(lVar9 + 0xbc);
    if ((iVar12 != 0) && (iVar11 != 0)) {
      MVar1 = moby->oClass;
      if ((short)MVar1 < 0x514) {
        uVar10 = 0x512;
        if ((short)MVar1 < 0x513) {
          if (0x511 < (short)MVar1) {
            uVar10 = 0x513;
          }
        }
        else if ((short)MVar1 < 0x514) {
          dVar17 = (double)(moby->pos).z;
          dVar27 = (double)(moby->pos).x;
          dVar26 = (double)(moby->pos).y;
          dVar25 = (double)(moby->pos).w;
          (moby->pos).z = (float)(dVar17 + 4.0);
          MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
          (moby->pos).x = (float)dVar27;
          uVar10 = 0x514;
          (moby->pos).y = (float)dVar26;
          (moby->pos).z = (float)dVar17;
          (moby->pos).w = (float)dVar25;
        }
        iVar12 = M1299_003258d0(lVar9,uVar10);
        if (iVar12 != 0) {
          bVar7 = true;
        }
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(4,0x325a0c);
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      local_108 = (moby->pos).z;
      local_110 = (moby->pos).x;
      dVar27 = (double)local_110;
      local_10c = (moby->pos).y;
      dVar26 = (double)local_10c;
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                           auVar29);
      local_104 = (moby->pos).w;
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xff;
      cVar2 = storeVectorElementByteIndexed
                        (auVar28 | auVar28 << 8 | auVar28 << 0x10 | auVar28 << 0x18 |
                         auVar28 << 0x20 | auVar28 << 0x28 | auVar28 << 0x30 | auVar28 << 0x38 |
                         auVar28 << 0x40 | auVar28 << 0x48 | auVar28 << 0x50 | auVar28 << 0x58 |
                         auVar28 << 0x60 | auVar28 << 0x68 | auVar28 << 0x70 | auVar28 << 0x78,0xbc,
                         lVar9);
      moby->setByGroup = cVar2;
      local_108 = local_108 + 1.25;
      dVar25 = (double)local_108;
      MB_RandomizeVector(0.4,&local_110);
      local_e4 = (float)dVar25;
      local_e0 = dVar26;
      local_d8 = dVar27;
      if ((short)moby->oClass < 0x513) {
        PlayMobySound(0,0,moby);
      }
      else {
        PlayMobySound(0,0,moby);
      }
      moby->damage = -1;
      fVar3 = GameCamera.posY - local_10c;
      fVar4 = GameCamera.posX - local_110;
      fVar5 = GameCamera.posZ - local_108;
      dVar26 = 2.0;
      dVar27 = 0.0;
      fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar8 = 2.0 / fVar6;
      dVar25 = dVar27;
      if (0.0 - fVar6 < 0.0) {
        dVar25 = (double)(fVar8 * fVar5);
      }
      dVar17 = dVar27;
      if (0.0 - fVar6 < 0.0) {
        dVar17 = (double)(fVar8 * fVar3);
      }
      dVar18 = dVar27;
      if (0.0 - fVar6 < 0.0) {
        dVar18 = (double)(fVar8 * fVar4);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar25 = (double)(fVar8 * fVar5);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar17 = (double)(fVar8 * fVar3);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar18 = (double)(fVar8 * fVar4);
      }
      local_e8 = (float)dVar25;
      local_ec = (float)dVar17;
      local_f0 = (float)dVar18;
      dVar25 = 4.0;
      if (moby->oClass != DISPLAY) {
        dVar25 = dVar26;
      }
      dVar20 = -dVar25;
      iVar12 = 0;
      dVar17 = -0.5;
      dVar18 = 0.5;
      dVar19 = -2.0;
      uVar10 = 0x4008000000000000;
      dVar21 = 6.0;
      dVar22 = 10.0;
      dVar24 = 1.0;
      dVar23 = 1.600000023841858;
      do {
        local_100 = 0.0;
        local_fc = 0.0;
        local_f8 = 0.0;
        local_f4 = 0.0;
        dVar14 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_100 = (float)dVar14;
        dVar14 = (double)MB_randRangeFloat((float)dVar19,(float)dVar26);
        local_fc = (float)dVar14;
        dVar14 = (double)MB_randRangeFloat((float)dVar20,(float)dVar25);
        dVar16 = (double)local_100;
        local_100 = (moby->transform).v1.x * local_fc +
                    (float)((double)(moby->transform).v2.x * dVar14 +
                           (double)(float)((double)(moby->transform).v0.x * dVar16 + local_d8));
        local_f8 = (moby->transform).v1.z * local_fc +
                   (float)((double)(moby->transform).v2.z * dVar14 +
                          (double)(float)((double)(moby->transform).v0.z * dVar16 + (double)local_e4
                                         ));
        local_f4 = (float)((double)(moby->transform).v2.w * dVar14 +
                          (double)(float)((double)(moby->transform).v0.w * dVar16 +
                                         (double)((moby->transform).v1.w * local_fc))) + local_f4;
        local_fc = (moby->transform).v1.y * local_fc +
                   (float)((double)(moby->transform).v2.y * dVar14 +
                          (double)(float)((double)(moby->transform).v0.y * dVar16 + local_e0));
        local_d0 = local_f4;
        MB_randRangeFloat((float)dVar21,(float)dVar22);
        local_100 = local_100 + local_f0;
        local_fc = local_fc + local_ec;
        local_f8 = local_f8 + local_e8;
        if ((moby->oClass == DISPLAY_DAMAGED_0514) ||
           (iVar13 = MB_randInt(4), iVar13 == 0)) {
          MB_randRangeFloat((float)dVar24,(float)dVar26);
          FUN_00341590(lVar9);
        }
        if (iVar12 % 3 == 0) {
          uVar15 = MB_randRangeFloat((float)dVar24,(float)dVar23);
          MB_SpawnExplosionSparks(uVar15,dVar27,lVar9,&local_100);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
      local_110 = local_110 + local_f0;
      local_10c = local_10c + local_ec;
      local_108 = local_108 + local_e8;
      MB_genericExplosion
                (dVar27,dVar27,uVar10,dVar26,dVar24,dVar24,0x402e000000000000,lVar9,iVar11 + 0x10,
                 &local_110,&DAT_00325a0c,1,10,3,0x10);
      if ((moby->oClass == DISPLAY_DAMAGED_0514) || (bVar7)) {
        DeleteMoby(moby);
      }
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


// 0x03261c4 (0x14 bytes)
void M1299_003261c4(void)

{
  DAT_00800210 = 0x10000;
  return;
}


// 0x03261d8 (0x114 bytes)
MobyInstance *
M1299_003261d8
          (double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  undefined4 *puVar5;
  MobyInstance *pMVar6;
  undefined8 uVar7;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar6 = CreateMoby(0x117);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->updateDistance = *(char *)(param_2 + 0x30);
    bVar1 = *(byte *)(param_2 + 0x30);
    pMVar6->enabled = '\x01';
    pMVar6->drawDistance = (ushort)bVar1;
    fStack00000044 = (f32)param_4;
    fStack0000004c = (f32)param_5;
    (pMVar6->pos).y = fStack00000044;
    fVar2 = *(f32 *)(param_2 + 0x40);
    (pMVar6->pos).w = fStack0000004c;
    fVar3 = *(f32 *)(param_2 + 0x44);
    fVar4 = *(f32 *)(param_2 + 0x48);
    (pMVar6->rotation).x = fVar2;
    (pMVar6->rotation).y = fVar3;
    fVar2 = *(f32 *)(param_2 + 0x4c);
    (pMVar6->rotation).z = fVar4;
    puVar5 = (undefined4 *)pMVar6->pVar;
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    (pMVar6->rotation).w = fVar2;
    fStack00000040 = (f32)((ulonglong)param_4 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    (pMVar6->pos).x = fStack00000040;
    (pMVar6->pos).z = fStack00000048;
    (pMVar6->rotation).z = (float)param_1;
    pMVar6->color = (int)((ulonglong)uVar7 >> 0x20);
    pMVar6->light = (int)uVar7;
    *puVar5 = 0x40a00000;
    *(undefined2 *)(puVar5 + 1) = 5;
    *(undefined1 *)(puVar5 + 2) = 4;
    UpdateMobyTransform(pMVar6);
  }
  return pMVar6;
}


