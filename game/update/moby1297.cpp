// game/update/moby1297.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x23f9f8-0x240654
#include "game/update/moby1297.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1293.h"
#include "idol/fastfunc.h"

// 0x023f9f8 (0x270 bytes)
void M1297_0023f9f8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 in_r9;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<32> local_70;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  dVar8 = 0.3330000042915344;
  dVar9 = 0.02500000037252903;
  iVar6 = iVar1;
  do {
    uVar2 = FastLerpColor
                      ((double)(float)((double)(longlong)iVar5 * dVar8),DAT_0078e060,DAT_0078e064);
    bVar4 = *(char *)(iVar6 + 0x10) + *(char *)(iVar6 + 0x14);
    *(byte *)(iVar6 + 0x10) = bVar4;
    uVar3 = FastDoubleToInt((double)bVar4);
    dVar7 = (double)FastIntToDouble(*(undefined1 *)(iVar6 + 0x18));
    SpawnPart_59
              ((double)(float)((double)(float)((double)*(float *)(iVar1 + 0x1c) * dVar7) * dVar9),
               local_70,uVar2,uVar3,0x35,1,2,in_r9,0);
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar5 < 4);
  return;
}


// 0x023fc90 (0x398 bytes)
/* Moby 1297 */

void UpdateMoby_1297(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar8;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar9;
  double extraout_f1;
  double dVar10;
  double dVar11;
  float fVar12;
  GPiece<16> local_80;
  GPiece<16> auStack_70;
  GPiece<16> auStack_60;
  
  lVar5 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  M1297_0023f9f8();
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      iVar8 = FastDecTimerS32(pfVar2 + 8);
      dVar10 = extraout_f1;
      if (iVar8 != 0) {
        dVar10 = 20.5;
        fVar12 = moby->pClass->gScale;
        Delt(fVar12,fVar12 / (float)(longlong)(animationSpeed * 20.5),&moby->scale);
        fVar12 = Delt(DAT_0078e068,
                                DAT_0078e068 / (float)(longlong)((double)animationSpeed * dVar10),
                                pfVar2 + 7);
        dVar10 = (double)fVar12;
      }
      iVar8 = FastDecTimerS32(dVar10,pfVar2 + 10);
      if (iVar8 != 0) {
        DeleteMoby(moby);
      }
    }
  }
  else if (bVar1 < 3) {
    MB_randSphere
              ((double)(DAT_0078e08c * g_FrameTime),
               (double)(DAT_0078e090 * g_FrameTime),auStack_70);
    MB_randSphere
              ((double)(DAT_0078e08c * g_FrameTime),
               (double)(DAT_0078e090 * g_FrameTime),auStack_60);
    uVar4 = DAT_0078e0a0;
    uVar3 = DAT_0078e09c;
    dVar10 = 0.0;
    dVar11 = 1.0;
    MB_randRangeFloat(0.0,1.0);
    uVar6 = FastLerpColor(uVar3,uVar4);
    uVar4 = DAT_0078e0a0;
    uVar3 = DAT_0078e09c;
    MB_randRangeFloat((float)dVar10,(float)dVar11);
    uVar7 = FastLerpColor(uVar3,uVar4);
    lVar9 = lVar5 + 0x10;
    SpawnPart_2
              (lVar9,auStack_70,auStack_60,uVar6,uVar7,DAT_0078e0a4,DAT_0078e0a8,DAT_0078e0ac);
    (moby->pos).x = (moby->pos).x + *pfVar2;
    (moby->pos).y = (moby->pos).y + pfVar2[1];
    (moby->pos).z = (moby->pos).z + pfVar2[2];
    iVar8 = FastDecTimerS32(pfVar2 + 8);
    if (((iVar8 != 0) || (iVar8 = CollLine(local_80,lVar9,0,lVar5,0), iVar8 != 0)) ||
       (iVar8 = CollMobySphere(0x3fd54fdf40000000,lVar9,&DAT_0023fc68,0,pfVar2[9],0),
       iVar8 != 0)) {
      MB_genericExplosion
                (0x3ff8000000000000,0x4000000000000000,0x4010000000000000,0x4000000000000000,
                 0x4022000000000000,dVar11,0x402e000000000000,lVar5,pfVar2,lVar9,1,
                 0xffffffffffffffff,10,3,0x10);
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x0240058 (0x348 bytes)
void M1297_00240058(void)

{
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<32> local_a0;
  
  MB_randRangeFloat(2.5,3.0);
  MB_randRot();
  SpawnPart_2
            (local_c0,local_b0,local_a0,DAT_0078e06c,DAT_0078e070,DAT_0078e074,DAT_0078e078,
             DAT_0078e07c);
  return;
}


// 0x02403a8 (0x1e8 bytes)
longlong FUN_002403a8(int param_1,f32 *param_2,undefined4 param_3)

{
  f32 fVar1;
  f32 fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar10;
  ulonglong uVar11;
  uint uVar12;
  char cVar14;
  int iVar13;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  MobyInstance *pMVar9;
  
  uVar6 = 0x70;
  auVar16.piece<0,4>() = param_3;
  auVar16.piece<4,4>() = param_3;
  auVar16.piece<8,4>() = param_3;
  auVar16.piece<12,4>() = param_3;
  pMVar9 = CreateMoby(ENERGY_SPHERE_0511);
  lVar7 = (longlong)(int)pMVar9;
  if (pMVar9 != (MobyInstance *)0x0) {
    uVar12 = 0;
    auVar15 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    pMVar9->scale = 0.0;
    pMVar9->drawDistance = 0x40;
    pMVar9->updateDistance = -1;
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    pMVar9->enabled = '\x01';
    pMVar9->color = (int)((ulonglong)uVar8 >> 0x20);
    pMVar9->light = (int)uVar8;
    pMVar9->state = '\x01';
    puVar3 = (undefined4 *)pMVar9->pVar;
    uVar11 = ZEXT48(puVar3);
    (pMVar9->pos).x = *param_2;
    auVar16 = ZEXT416(0xffffffff);
    auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
    (pMVar9->pos).y = param_2[1];
    fVar1 = *(f32 *)(param_1 + 0x40);
    (pMVar9->pos).z = param_2[2];
    fVar2 = *(f32 *)(param_1 + 0x44);
    (pMVar9->pos).w = param_2[3];
    (pMVar9->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar9->rotation).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x4c);
    (pMVar9->rotation).z = fVar1;
    (pMVar9->rotation).w = fVar2;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[9] = param_1;
    auVar16 = loadVectorLeftIndexed(uVar6,0x2403a0);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = vectorAddFloatingPoint
                        (auVar15,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60);
    auVar15 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar16,auVar15);
    auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
    auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x20,uVar11);
    *(undefined4 *)((uint)(puVar3 + 8) & 0xfffffffc) = uVar4;
    puVar3[10] = 5;
    FastEulerToMtx(lVar7 + 0xc0,lVar7 + 0x40);
    cVar14 = '\0';
    do {
      uVar10 = MB_randInt(0xff);
      iVar5 = uVar12 * (uVar12 & 1);
      iVar13 = (int)uVar11;
      *(undefined1 *)(iVar13 + 0x10) = uVar10;
      cVar14 = cVar14 + '\n';
      *(char *)(iVar13 + 0x18) = cVar14;
      uVar12 = uVar12 + 1;
      *(byte *)(iVar13 + 0x14) = ((byte)(ZERO_MASK(iVar5)) & 2) - 1;
      uVar11 = uVar11 + 1;
    } while ((int)uVar12 < 4);
    iVar13 = 0;
    do {
      M1297_00240058(lVar7);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x32);
  }
  return lVar7;
}


// 0x0240590 (0x30 bytes)
void M1297_00240590(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x28) = 5;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  return;
}


// 0x02405c8 (0x68 bytes)
void FUN_002405c8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  *(undefined1 *)(param_1 + 0x20) = 2;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  auVar3 = loadVectorLeftIndexed(in_r0,0x2405c0);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x20,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 8) & 0xfffffffc) = uVar2;
  return;
}


// 0x0240630 (0x24 bytes)
void M1297_00240630(MobyInstance *param_1)

{
  DeleteMoby(param_1);
  return;
}


