// game/update/moby867.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x499bf4-0x49a3b0
#include "game/update/moby867.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0499bf4 (0x14 bytes)
void M867_00499bf4(void)

{
  DAT_008c7ea4 = 0x10000;
  return;
}


// 0x0499c40 (0x770 bytes)
/* Moby 867 */

void UpdateMoby_867(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  f32 fVar5;
  short sVar6;
  MOBY_OCLASSES MVar7;
  void *pvVar8;
  u16 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<48> auStack_c0;
  float local_90;
  float local_8c;
  float local_88;
  int local_50;
  int local_40 [4];
  
  if (moby != (MobyInstance *)0x0) {
    pvVar8 = moby->pVar;
    uVar14 = ZEXT48(pvVar8);
    if (pvVar8 != (void *)0x0) {
      dVar21 = 8.0;
      MB_getTarget(0x4020000000000000,moby,&DAT_00499c08,&local_90);
      iVar13 = MB_damage(moby,0x230000,0);
      MB_HandleDamage(moby,iVar13,uVar14 + 0x20,0,local_40,0,0,4);
      bVar4 = moby->state;
      fVar5 = (moby->pos).x;
      if ((((local_40[0] < 2) || (iVar13 == 0)) ||
          (sVar6 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6), sVar6 == 0x365 || sVar6 == 0x363)) ||
         (sVar6 == 0x367)) {
        if (bVar4 == 0) {
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          *(f32 *)((int)pvVar8 + 0x60) = fVar5;
          *(f32 *)((int)pvVar8 + 100) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x68) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x6c) = (moby->pos).w;
          puVar9 = moby->pClass->collision;
          moby->state = '\x01';
          moby->collision = puVar9;
        }
        else if (bVar4 < 2) {
          auVar23 = ZEXT416(0xffffffff);
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
          auVar23 = loadVectorLeftIndexed(0x18,0x499c08);
          auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar23 = vectorMultiplyAddFloatingPoint
                              (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60
                               ,auVar24);
          auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
          auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
          uVar10 = storeVectorElementWordIndexed(auVar23,0x78,uVar14);
          *(undefined4 *)((int)pvVar8 + 0x78U & 0xfffffffc) = uVar10;
          if ((local_50 != 0) &&
             (fVar1 = (moby->pos).y - local_8c, fVar2 = (moby->pos).x - local_90,
             fVar3 = (moby->pos).z - local_88,
             (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar21)) {
            *(undefined4 *)((int)pvVar8 + 0x70) = 0;
            uVar10 = storeVectorElementWordIndexed(auVar23,0x78,uVar14);
            *(undefined4 *)((int)pvVar8 + 0x78U & 0xfffffffc) = uVar10;
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            moby->setByGroup = '\x01';
            auVar25 = loadVectorLeftIndexed(0x1c,0x499c08);
            auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar23 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar23 = vectorMultiplyAddFloatingPoint
                                (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 |
                                         auVar23 << 0x60,auVar24);
            auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
            auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c,
                                uVar14);
            *(undefined4 *)((int)pvVar8 + 0x7cU & 0xfffffffc) = uVar10;
            moby->state = '\x02';
            if (*(int *)((int)pvVar8 + 0x74) != -1) {
              MB_SetStateByGroup(*(int *)((int)pvVar8 + 0x74),2);
            }
          }
        }
        else if (bVar4 < 3) {
          fVar1 = DAT_0071f418 * 30.0 + *(float *)((int)pvVar8 + 0x70);
          *(float *)((int)pvVar8 + 0x70) = fVar1;
          if (g_FrameTime * 6.0 < fVar1) {
            *(float *)((int)pvVar8 + 0x70) = g_FrameTime * 6.0;
          }
          if (moby->setByGroup == '\x01') {
            (moby->pos).z = DAT_0071f408 * 0.1 + (moby->pos).z;
            iVar13 = FastDecTimerS32(uVar14 + 0x7c);
            if (iVar13 != 0) {
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar23 = loadVectorLeftIndexed(0x1c,0x499c08);
              auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorMultiplyAddFloatingPoint
                                  (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 |
                                           auVar23 << 0x60,auVar24);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar10 = storeVectorElementWordIndexed
                                 (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x7c
                                  ,uVar14);
              *(undefined4 *)((int)pvVar8 + 0x7cU & 0xfffffffc) = uVar10;
              moby->setByGroup = '\x02';
            }
          }
          else if (moby->setByGroup == '\x02') {
            (moby->pos).z = -(DAT_0071f408 * 0.1 - (moby->pos).z);
            iVar13 = FastDecTimerS32(uVar14 + 0x7c);
            if (iVar13 != 0) {
              moby->setByGroup = '\0';
            }
          }
          dVar16 = (double)(moby->pos).y;
          fVar1 = (float)((double)local_8c - dVar16);
          dVar17 = (double)(moby->pos).x;
          fVar2 = (float)((double)local_90 - dVar17);
          dVar19 = (double)(moby->pos).z;
          fVar3 = (float)((double)local_88 - dVar19);
          dVar20 = 0.0;
          fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
          fVar12 = *(float *)((int)pvVar8 + 0x70) / fVar11;
          dVar21 = dVar20;
          if (0.0 - fVar11 < 0.0) {
            dVar21 = (double)(fVar2 * fVar12);
          }
          dVar15 = dVar20;
          if (0.0 - fVar11 < 0.0) {
            dVar15 = (double)(fVar1 * fVar12);
          }
          dVar18 = dVar20;
          if (0.0 - fVar11 < 0.0) {
            dVar18 = (double)(fVar3 * fVar12);
          }
          if (fVar11 - 0.0 < 0.0) {
            dVar21 = (double)(fVar2 * fVar12);
          }
          if (fVar11 - 0.0 < 0.0) {
            dVar15 = (double)(fVar1 * fVar12);
          }
          if (fVar11 - 0.0 < 0.0) {
            dVar18 = (double)(fVar3 * fVar12);
          }
          fVar1 = (float)(dVar17 + dVar21);
          fVar2 = (float)(dVar16 + dVar15);
          fVar3 = (float)(dVar19 + dVar18);
          (moby->pos).x = fVar1;
          (moby->pos).y = fVar2;
          (moby->pos).z = fVar3;
          fVar2 = fVar2 - *(float *)((int)pvVar8 + 100);
          fVar1 = fVar1 - *(float *)((int)pvVar8 + 0x60);
          fVar3 = fVar3 - *(float *)((int)pvVar8 + 0x68);
          if (64.0 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2)) {
            DeleteMoby(moby);
            return;
          }
          uVar22 = 0x3ff0000000000000;
          SetCollDamIn(0x3ff0000000000000,auStack_c0,moby,0x10001);
          iVar13 = CollMobySphere(local_d0);
          fVar1 = (moby->pos).x;
          fVar2 = (moby->pos).y;
          fVar3 = (moby->pos).z;
          if (((iVar13 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
             ((MVar7 = (g_CollOutput.pMoby)->oClass, MVar7 != 0x365 && MVar7 != 0x363 &&
              (MVar7 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))) {
            MB_genericExplosion
                      (dVar20,dVar20,0x4000000000000000,uVar22,0x4010000000000000,uVar22,
                       0x401c000000000000,moby,local_e0,0,&DAT_00499c08,0,3,3,5);
            DeleteMoby(moby);
            return;
          }
          iVar13 = CollSphere(local_d0);
          if (iVar13 != 0) {
            fVar2 = g_CollOutput.push.y - fVar2;
            fVar3 = g_CollOutput.push.z - (fVar3 + 0.55);
            (moby->pos).x = (moby->pos).x + (g_CollOutput.push.x - fVar1);
            (moby->pos).y = (moby->pos).y + fVar2;
            (moby->pos).z = (moby->pos).z + fVar3;
          }
          iVar13 = FastDecTimerS32(uVar14 + 0x78);
          if (iVar13 != 0) {
            MB_genericExplosion
                      (dVar20,dVar20,0x4000000000000000,uVar22,0x4010000000000000,uVar22,
                       0x401c000000000000,moby,local_e0,0,&DAT_00499c08,0,3,3,5);
            DeleteMoby(moby);
            return;
          }
        }
        MB_RegisterLameShadow(1.0,moby);
      }
      else {
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,moby,local_f0,0,0,1,3,3,5);
        MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
        DeleteMoby(moby);
      }
    }
  }
  return;
}


