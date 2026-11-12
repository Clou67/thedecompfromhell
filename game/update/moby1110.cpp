// game/update/moby1110.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1d058c-0x1d0f18
#include "game/update/moby1110.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x01d058c (0x14 bytes)
void M1110_001d058c(void)

{
  DAT_007643c8 = 0x10000;
  return;
}


// 0x01d05f0 (0x928 bytes)
// strings: 001d05e8: '?333`'

/* Moby 1110 */

void UpdateMoby_1110(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  u16 *puVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<48> auStack_d0;
  float local_a0;
  float local_9c;
  float local_98;
  int local_60;
  int local_50 [8];
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar9 = moby->pVar;
  uVar15 = ZEXT48(pvVar9);
  if (pvVar9 == (void *)0x0) {
    return;
  }
  dVar22 = 8.0;
  MB_getTarget(0x4020000000000000,moby,&DAT_001d05a0,&local_a0);
  if ((moby->enabled != '\0') &&
     (fVar5 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
     fVar1 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) < 27.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x15';
  }
  iVar14 = MB_damage(moby,0x230000,0);
  MB_HandleDamage(moby,iVar14,uVar15 + 0x20,0,local_50,0,0,4);
  bVar2 = moby->state;
  uVar3 = moby->animationId;
  fVar4 = (moby->pos).x;
  if ((((1 < local_50[0]) && (iVar14 != 0)) &&
      (sVar7 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6), sVar7 != 0x365 && sVar7 != 0x456)) &&
     (sVar7 != 0x367)) {
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
               0x401c000000000000,moby,local_100,0,0,0xffffffffffffffff,3,3,5);
    MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    DeleteMoby(moby);
    return;
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar9 + 0x60) = fVar4;
      *(f32 *)((int)pvVar9 + 100) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x68) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x6c) = (moby->pos).w;
      puVar10 = moby->pClass->collision;
      moby->state = '\x01';
      moby->collision = puVar10;
    }
    else {
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(0x1c,0x1d05a0);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar26 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar26,auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x78,uVar15)
      ;
      *(undefined4 *)((int)pvVar9 + 0x78U & 0xfffffffc) = uVar11;
      dVar16 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 6.2831855);
      (moby->rotation).z = (float)dVar16;
      iVar14 = *(int *)((int)pvVar9 + 0x38);
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      if ((((iVar14 != 0) &&
           (fVar12 = fVar6 - *(float *)(iVar14 + 0x14), fVar1 = fVar5 - *(float *)(iVar14 + 0x10),
           SQRT(fVar1 * fVar1 + fVar12 * fVar12) < 20.0)) &&
          (ABS((moby->pos).z - *(float *)(iVar14 + 0x18)) < 3.0)) ||
         ((local_60 != 0 &&
          (fVar6 = fVar6 - local_9c, fVar5 = fVar5 - local_a0, fVar1 = (moby->pos).z - local_98,
          (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6) < dVar22)))) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        *(undefined4 *)((int)pvVar9 + 0x70) = 0;
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x78,
                            uVar15);
        *(undefined4 *)((int)pvVar9 + 0x78U & 0xfffffffc) = uVar11;
        moby->setByGroup = '\x01';
        auVar24 = loadVectorLeftIndexed(0x2c,0x1d05a0);
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar26);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x7c,
                            uVar15);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar11;
        moby->state = '\x03';
        if (*(int *)((int)pvVar9 + 0x74) != -1) {
          MB_SetStateByGroup(*(int *)((int)pvVar9 + 0x74),2);
        }
        moby->state = '\x02';
      }
    }
  }
  else {
    if (bVar2 < 3) {
      if (uVar3 != '\x01') {
        MB_SetAnimation(moby,1,0,10);
        uVar3 = moby->animationId;
      }
      moby->state = '\x03';
    }
    else if (3 < bVar2) goto LAB_001d0ed0;
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == '\x01' && uVar3 != '\x02')) {
      MB_SetAnimation(moby,2,0,10);
    }
    fVar5 = g_FrameTimeSq * 30.0 + *(float *)((int)pvVar9 + 0x70);
    *(float *)((int)pvVar9 + 0x70) = fVar5;
    if (g_FrameTime * 6.0 < fVar5) {
      *(float *)((int)pvVar9 + 0x70) = g_FrameTime * 6.0;
    }
    if (moby->setByGroup == '\x01') {
      (moby->pos).z = DAT_0071f408 * 0.1 + (moby->pos).z;
      iVar14 = FastDecTimerS32(uVar15 + 0x7c);
      if (iVar14 != 0) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0x2c,0x1d05a0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x7c,
                            uVar15);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar11;
        moby->setByGroup = '\x02';
      }
    }
    else if (moby->setByGroup == '\x02') {
      (moby->pos).z = -(DAT_0071f408 * 0.1 - (moby->pos).z);
      iVar14 = FastDecTimerS32(uVar15 + 0x7c);
      if (iVar14 != 0) {
        moby->setByGroup = '\0';
      }
    }
    dVar16 = (double)(moby->pos).y;
    fVar5 = (float)((double)local_9c - dVar16);
    dVar18 = (double)(moby->pos).x;
    fVar6 = (float)((double)local_a0 - dVar18);
    dVar20 = (double)(moby->pos).z;
    fVar1 = (float)((double)local_98 - dVar20);
    dVar21 = 0.0;
    fVar12 = SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5);
    fVar13 = *(float *)((int)pvVar9 + 0x70) / fVar12;
    dVar22 = dVar21;
    if (0.0 - fVar12 < 0.0) {
      dVar22 = (double)(fVar6 * fVar13);
    }
    dVar17 = dVar21;
    if (0.0 - fVar12 < 0.0) {
      dVar17 = (double)(fVar5 * fVar13);
    }
    dVar19 = dVar21;
    if (0.0 - fVar12 < 0.0) {
      dVar19 = (double)(fVar1 * fVar13);
    }
    if (fVar12 - 0.0 < 0.0) {
      dVar22 = (double)(fVar6 * fVar13);
    }
    if (fVar12 - 0.0 < 0.0) {
      dVar17 = (double)(fVar5 * fVar13);
    }
    if (fVar12 - 0.0 < 0.0) {
      dVar19 = (double)(fVar1 * fVar13);
    }
    fVar5 = (float)(dVar18 + dVar22);
    fVar6 = (float)(dVar16 + dVar17);
    fVar1 = (float)(dVar20 + dVar19);
    (moby->pos).x = fVar5;
    (moby->pos).y = fVar6;
    (moby->pos).z = fVar1;
    fVar6 = fVar6 - *(float *)((int)pvVar9 + 100);
    fVar5 = fVar5 - *(float *)((int)pvVar9 + 0x60);
    fVar1 = fVar1 - *(float *)((int)pvVar9 + 0x68);
    if (64.0 < SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6)) {
      DeleteMoby(moby);
      return;
    }
    uVar23 = 0x3ff0000000000000;
    SetCollDamIn(0x3ff0000000000000,auStack_d0,moby,0x10001);
    iVar14 = CollMobySphere(local_e0);
    fVar5 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar1 = (moby->pos).z;
    if (((iVar14 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
       ((MVar8 = (g_CollOutput.pMoby)->oClass, MVar8 != MINE_0456 && MVar8 != 0x363 &&
        (((MVar8 != MINE_0458 && (MVar8 != 0x365)) &&
         (MVar8 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))))) {
      MB_genericExplosion
                (dVar21,dVar21,0x4000000000000000,uVar23,0x4010000000000000,uVar23,
                 0x401c000000000000,moby,local_f0,0,0xffffffffffffffff,2,3,3,5);
      DeleteMoby(moby);
      return;
    }
    iVar14 = CollSphere(local_e0);
    if (iVar14 != 0) {
      fVar6 = g_CollOutput.push.y - fVar6;
      fVar1 = g_CollOutput.push.z - (fVar1 + 0.55);
      (moby->pos).x = (moby->pos).x + (g_CollOutput.push.x - fVar5);
      (moby->pos).y = (moby->pos).y + fVar6;
      (moby->pos).z = (moby->pos).z + fVar1;
    }
    iVar14 = FastDecTimerS32(uVar15 + 0x78);
    if (iVar14 != 0) {
      MB_genericExplosion
                (dVar21,dVar21,0x4000000000000000,uVar23,0x4010000000000000,uVar23,
                 0x401c000000000000,moby,local_f0,0,2,&DAT_001d05a0,3,3,5);
      DeleteMoby(moby);
      return;
    }
  }
LAB_001d0ed0:
  MB_RegisterLameShadow((float)0x3f333333,moby);
  return;
}


