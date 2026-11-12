// game/update/moby30.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x336fb8-0x338150
#include <stdio.h>
#include "game/update/moby30.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby681.h"
#include "idol/fastfunc.h"

// 0x0336fb8 (0x198 bytes)
void M30_00336fb8(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == 0x2a9)))) {
    iVar5 = 0;
  }
  iVar5 = MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\x06')) goto LAB_0033711c;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_003370d8:
    param_1->state = '\x06';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_003370d8;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      *(undefined1 *)((int)pvVar3 + 0x67) = 200;
    }
    else {
      *(undefined1 *)((int)pvVar3 + 0x67) = 100;
    }
  }
  MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_0033711c:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}


// 0x03371a0 (0xfb0 bytes)
// inlined: FastAtan2 @0x3378bc
// strings: 006561bc: 'Turret with no aiming cuboid. UID: %d\n' | 006561e4: 'Turret with no waking cuboid. UID: %d\n' | 00810a40: '?333' (raw)

/* Moby 30 */

void UpdateMoby_30(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  void *pvVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar22;
  longlong lVar20;
  longlong lVar21;
  MobyInstance *pMVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
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
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x1f0;
  puVar16 = (ulonglong *)lVar21;
  *puVar16 = uVar18;
  puVar16[0x40] = in_LR;
  puVar16[0x3b] = in_f29;
  puVar16[0x3c] = in_f30;
  puVar16[0x3d] = in_f31;
  puVar16[0x3a] = unaff_r31;
  puVar16[0x39] = unaff_r30;
  puVar16[0x38] = unaff_r29;
  pvVar13 = moby->pVar;
  uVar28 = ZEXT48(pvVar13);
  M30_00336fb8();
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    puVar16[0x12] = 0;
    puVar16[0x14] = 1;
    puVar16[0x15] = 1;
    puVar16[0x16] = 0xffffffffffffffff;
    puVar16[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar19,uVar28 + 0x40,lVar19 + 0x10,0,1,5,2,4);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x05') {
    auVar41 = ZEXT416(0xffffffff);
    auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x74,uVar28);
    auVar42 = loadVectorRightIndexed(0x84,uVar28);
    auVar44 = loadVectorLeftIndexed(0x78,uVar28);
    auVar41 = ZEXT416(0xfffffff0);
    auVar41 = vectorShiftRightAlgebraicWord
                        (auVar40 | auVar42,
                         auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar42 = loadVectorRightIndexed(0x88,uVar28);
    auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
    auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar46 = loadVectorLeftIndexed(0xa40,0x810000);
    auVar45 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar40,auVar44 | auVar42,auVar43);
    auVar41 = loadVectorLeftIndexed(0x3c,0x337150);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar42 = vectorMultiplyAddFloatingPoint(auVar46,auVar40,auVar45);
    auVar44 = loadVectorLeftIndexed(0x70,uVar28);
    auVar43 = loadVectorRightIndexed(0x80,uVar28);
    bVar2 = moby->field43_0x70;
    auVar41 = vectorAddFloatingPoint
                        (auVar46,SPLAT(auVar41) ^
                                 auVar42);
    auVar41 = vectorSubtractFloatingPoint(auVar44 | auVar43,auVar41);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x18,lVar19);
    *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar15;
    auVar41 = loadVectorLeftIndexed(0x84,uVar28);
    auVar42 = loadVectorRightIndexed(0x94,uVar28);
    auVar43 = loadVectorLeftIndexed(0x8c,uVar28);
    auVar44 = loadVectorRightIndexed(0x9c,uVar28);
    auVar44 = vectorSubtractFloatingPoint(auVar43 | auVar44,auVar41 | auVar42);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar40,auVar41 | auVar42);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x48,lVar19);
    *(undefined4 *)((uint)&(moby->rotation).z & 0xfffffffc) = uVar15;
    if (((bVar2 & 2) != 0) && (moby->updateId == '\x04')) {
      MB_SetAnimationNoBlend(lVar19,0,0);
      moby->unk58 = 1.0;
    }
    puVar16[0x36] = (longlong)(DAT_00810a44 >> 1);
    sVar12 = *(short *)((int)pvVar13 + 0x74);
    puVar16[0x36] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x36] + 0.5));
    if ((int)sVar12 < *(int *)((int)puVar16 + 0x1b4)) {
      moby->collision = (ushort *)0x0;
    }
    iVar22 = FastDecTimerS16(uVar28 + 0x74);
    if (iVar22 == 0) {
      return;
    }
    fVar3 = *(f32 *)((int)pvVar13 + 0x84);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    moby->state = '\x01';
    (moby->rotation).z = fVar3;
    auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = loadVectorLeftIndexed(8,0x337150);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar40 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar40);
    auVar42 = loadVectorLeftIndexed(0x94,uVar28);
    auVar43 = loadVectorRightIndexed(0xa4,uVar28);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorConvertFromSignedFixedPointWord(auVar42 | auVar43,0);
    auVar43 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
    *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
    *(undefined2 *)((int)pvVar13 + 0x88) = 0;
    auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    fVar4 = *(float *)((int)pvVar13 + 0x70);
    auVar41 = vectorAddFloatingPoint
                        (auVar42,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar41,auVar43);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar15 = storeVectorElementWordIndexed
                       (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x98,uVar28);
    *(undefined4 *)((int)pvVar13 + 0x98U & 0xfffffffc) = uVar15;
    fVar4 = fVar4 - DAT_00810a40;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    (moby->pos).z = fVar4;
    return;
  }
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      iVar22 = MB_getTarget(0x4041000000000000,lVar19,&DAT_00337150,uVar18 - 0x110);
      if ((iVar22 != 2) &&
         (iVar22 = MB_IsPntInCuboid
                             ((Vec4 *)(puVar16 + 0x1c),(longlong)*(int *)((int)pvVar13 + 0x90)),
         iVar22 != 0)) {
        moby->state = '\x04';
        MB_SetAnimationNoBlend(lVar19,3,0);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(0x10,0x337150);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar40);
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
        *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
        auVar41 = loadVectorLeftIndexed(0x14,0x337150);
        auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x9c,uVar28);
        *(undefined2 *)((int)pvVar13 + 0x9c) = uVar14;
        return;
      }
      if (*(char *)((int)pvVar13 + 0x8a) != '\0') {
        return;
      }
      iVar22 = FastDecTimerS16(uVar28 + 0x76);
      if (iVar22 == 0) {
        return;
      }
      *(undefined1 *)((int)pvVar13 + 0x8b) = 1;
      return;
    }
    if (uVar1 == '\x02') {
      auVar41 = ZEXT416(0xffffffff);
      auVar43 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar40 = loadVectorLeftIndexed(0x74,uVar28);
      auVar42 = loadVectorRightIndexed(0x84,uVar28);
      auVar44 = loadVectorLeftIndexed(0x78,uVar28);
      auVar41 = ZEXT416(0xfffffff0);
      auVar41 = vectorShiftRightAlgebraicWord
                          (auVar40 | auVar42,
                           auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar40 = loadVectorRightIndexed(0x88,uVar28);
      auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
      auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = loadVectorLeftIndexed(0x70,uVar28);
      auVar45 = loadVectorRightIndexed(0x80,uVar28);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar44 | auVar40,auVar42);
      auVar40 = loadVectorLeftIndexed(0xa40,0x810000);
      bVar2 = moby->field43_0x70;
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar41,auVar43 | auVar45);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x18,lVar19)
      ;
      *(undefined4 *)((uint)&(moby->pos).z & 0xfffffffc) = uVar15;
      if (((bVar2 & 2) != 0) && (moby->updateId == '\x01')) {
        MB_SetAnimationNoBlend(lVar19,2,0);
        moby->unk58 = 1.0;
      }
      puVar16[0x36] = (longlong)(DAT_00810a44 >> 1);
      sVar12 = *(short *)((int)pvVar13 + 0x74);
      puVar16[0x36] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x36] + 0.5));
      if ((int)sVar12 < *(int *)((int)puVar16 + 0x1b4)) {
        moby->collision = moby->pClass->collision;
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      }
      iVar22 = FastDecTimerS16(uVar28 + 0x74);
      if (iVar22 == 0) {
        return;
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0xa6c,0x810000);
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
      auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorAddFloatingPoint
                          (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar44);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x76,uVar28);
      *(undefined2 *)((int)pvVar13 + 0x76) = uVar14;
      moby->state = '\x03';
      auVar41 = loadVectorLeftIndexed(8,0x337150);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
      *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
      (moby->pos).z = *(f32 *)((int)pvVar13 + 0x70);
      *(undefined4 *)((int)pvVar13 + 0x8c) = 0;
      return;
    }
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') {
        return;
      }
      *(f32 *)((int)pvVar13 + 0x70) = (moby->pos).z;
      fVar3 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar13 + 0x8c) = 0;
      *(f32 *)((int)pvVar13 + 0x84) = fVar3;
      *(undefined2 *)((int)pvVar13 + 0x74) = 0;
      if (*(int *)((int)pvVar13 + 0x80) == -1) {
        printf("Turret with no aiming cuboid. UID: %d\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar13 + 0x90) == -1) {
        printf("Turret with no waking cuboid. UID: %d\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0xa6c,0x810000);
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
      auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorAddFloatingPoint(auVar40,auVar41);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar44,auVar40,auVar42);
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      auVar40 = vectorSplatHalfWord(auVar40,1);
      uVar14 = storeVectorElementHalfWordIndexed(auVar40,0x76,uVar28);
      *(undefined2 *)((int)pvVar13 + 0x76) = uVar14;
      *(undefined1 *)((int)pvVar13 + 0x8b) = 0;
      if (*(short *)((int)pvVar13 + 0x88) == 0) {
        moby->state = '\x01';
        fVar11 = DAT_00810a40;
        fVar4 = (moby->pos).z;
        moby->collision = (ushort *)0x0;
        (moby->pos).z = fVar4 - fVar11;
        *(undefined1 *)((int)pvVar13 + 0x8a) = 0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      else {
        moby->state = '\x03';
        *(undefined1 *)((int)pvVar13 + 0x8a) = 1;
      }
      auVar42 = loadVectorLeftIndexed(0x94,uVar28);
      auVar44 = loadVectorRightIndexed(0xa4,uVar28);
      auVar40 = ZEXT416(0xffffffff);
      auVar43 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar40 = vectorConvertFromSignedFixedPointWord(auVar42 | auVar44,0);
      auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorAddFloatingPoint(auVar40,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar41,auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar15 = storeVectorElementWordIndexed
                         (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x98,uVar28)
      ;
      *(undefined4 *)((int)pvVar13 + 0x98U & 0xfffffffc) = uVar15;
      return;
    }
    if (*(short *)((int)pvVar13 + 0x88) == 0) {
      return;
    }
    iVar22 = FastDecTimerS32(uVar28 + 0x98);
    if (iVar22 == 0) {
      return;
    }
    moby->state = '\x02';
    auVar41 = ZEXT416(0xffffffff);
    auVar44 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    puVar16[0x36] = (longlong)DAT_00810a44;
    auVar41 = loadVectorLeftIndexed(0xa44,0x810000);
    auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
    auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
    auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = vectorAddFloatingPoint
                        (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar40 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar40);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    puVar16[0x36] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar16[0x36] + 0.5));
    uVar15 = *(undefined4 *)((int)puVar16 + 0x1b4);
    uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x74,uVar28);
    *(undefined2 *)((int)pvVar13 + 0x74) = uVar14;
    dVar30 = (double)FastIntToDouble((short)uVar15);
    dVar32 = 1.0;
    *(float *)((int)pvVar13 + 0x78) = (float)(1.0 / dVar30);
    MB_SetAnimationNoBlend(lVar19,1,0);
    dVar30 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar13 + 0x74));
    moby->unk58 = (float)(dVar32 / (double)(float)(dVar30 * (double)DAT_00810a48));
    return;
  }
  fVar4 = DAT_00810a4c;
  if (*(short *)((int)pvVar13 + 0x9e) != 0) {
    fVar4 = -DAT_00810a4c;
  }
  dVar30 = (double)FastWrapRot(*(float *)((int)pvVar13 + 0x8c),fVar4);
  *(float *)((int)pvVar13 + 0x8c) = (float)dVar30;
  dVar32 = (double)FastWrapRot
                             ((float)dVar30,*(float *)((int)pvVar13 + 0x84) * 0.017453292);
  dVar30 = (double)(float)(3.141592502593994 - dVar32);
  if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
    dVar30 = dVar32;
  }
  dVar37 = (double)(float)(-3.141592502593994 - dVar32);
  if ((double)(float)(-3.141592502593994 - dVar32) - dVar30 < 0.0) {
    dVar37 = dVar30;
  }
  iVar22 = *(int *)((int)pvVar13 + 0x80);
  dVar30 = (double)(float)(dVar37 * dVar37);
  dVar32 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar37));
  dVar39 = (double)(float)(dVar30 * dVar32);
  fVar4 = (float)(dVar30 * dVar39) * 2.601887e-06 +
          (float)(dVar39 * -0.0001980741071747616 +
                 (double)(float)(dVar32 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar30 * dVar37) *
                                                -0.16666656732559204 + dVar37)));
  fVar11 = (Cuboids[iVar22].matrix.v1.x * fVar4 + Cuboids[iVar22].pos.x) - (moby->pos).x;
  fVar4 = (Cuboids[iVar22].matrix.v1.y * fVar4 + Cuboids[iVar22].pos.y) - (moby->pos).y;
  fVar5 = ABS(fVar11);
  fVar6 = ABS(fVar4);
  *(float *)(puVar16 + 0x30) = fVar11;
  *(float *)((int)puVar16 + 0x184) = fVar4;
  *(float *)(puVar16 + 0x31) = fVar5 - fVar6;
  dVar30 = 0.0;
  uVar26 = (ulonglong)(*(uint *)(puVar16 + 0x30) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar16 + 0x31) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar16 + 0x184) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)(puVar16 + 0x30));
  if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
    fVar4 = fVar6;
  }
  fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
  fVar6 = ABS(*(float *)((int)puVar16 + 0x184));
  if (*(float *)(puVar16 + 0x31) - 0.0 < 0.0) {
    fVar6 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  dVar32 = dVar30;
  if (0.0 < fVar4) {
    lVar20 = uVar18 - 0x1e0;
    lVar27 = uVar18 - 0x54;
    lVar24 = uVar18 - 100;
    lVar29 = 2;
    fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
    fVar6 = fVar4 * fVar4;
    *(float *)(puVar16 + 0x33) = fVar4;
    *(float *)(puVar16 + 0x32) = fVar4;
    *(float *)((int)puVar16 + 0x194) = fVar4;
    *(float *)((int)puVar16 + 0x18c) = fVar4;
    fVar4 = fVar6 * fVar6;
    *(float *)(puVar16 + 0x32) = *(float *)(puVar16 + 0x32) * fVar6;
    *(float *)((int)puVar16 + 0x194) = *(float *)((int)puVar16 + 0x194) * fVar4;
    *(float *)(puVar16 + 0x33) = *(float *)(puVar16 + 0x33) * fVar4 * fVar6;
    do {
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x17c) * fVar4 * fVar4;
      iVar22 = (int)lVar24;
      lVar24 = lVar24 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
      lVar27 = lVar27 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar27 = uVar18 - 100;
    pfVar25 = (float *)&DAT_007358e0;
    lVar20 = lVar21;
    lVar24 = lVar27;
    do {
      fVar4 = *pfVar25;
      fVar6 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar20 + 0x18c) = *(float *)((int)lVar20 + 0x18c) * fVar4;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
      lVar24 = lVar24 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar20 = 2;
    do {
      iVar22 = (int)lVar21;
      iVar17 = (int)lVar27;
      lVar21 = lVar21 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 0x18c)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar11 + fVar5);
  }
  (moby->rotation).z = (float)dVar32;
  FastDecTimerS16(uVar28 + 0x9c);
  if (worldUpdateTime != (worldUpdateTime / DAT_00810a68) * DAT_00810a68) goto LAB_00337d9c;
  iVar22 = MB_randInt(3);
  if (iVar22 < 1) {
    if (iVar22 < 0) {
LAB_00337b80:
      fVar4 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
      if (dVar32 == dVar30) {
        fVar7 = (moby->transform).v2.w;
        dVar32 = dVar30;
        dVar37 = dVar30;
        dVar39 = dVar30;
      }
      else {
        fVar5 = (float)((double)DAT_00810a5c / dVar32);
        fVar7 = (moby->transform).v2.w;
        dVar32 = (double)(fVar11 * fVar5);
        dVar37 = (double)(fVar4 * fVar5);
        dVar39 = (double)(fVar6 * fVar5);
      }
      fVar11 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.x;
      fVar5 = (moby->transform).v1.z;
      dVar38 = (double)DAT_00810a64;
      *(float *)((int)puVar16 + 0xc4) = (float)dVar37;
      *(float *)(puVar16 + 0x19) = (float)dVar39;
      *(float *)((int)puVar16 + 0xcc) = fVar7;
      *(float *)(puVar16 + 0x18) = (float)dVar32;
      dVar31 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar11 * fVar11);
      fVar4 = (float)(-dVar38 / dVar31);
      dVar38 = dVar30;
      if (dVar30 - dVar31 < 0.0) {
        dVar38 = (double)(fVar5 * fVar4);
      }
      dVar34 = dVar30;
      if (dVar30 - dVar31 < 0.0) {
        dVar34 = (double)(fVar11 * fVar4);
      }
      dVar36 = dVar30;
      if (dVar30 - dVar31 < 0.0) {
        dVar36 = (double)(fVar6 * fVar4);
      }
      if (dVar31 - dVar30 < 0.0) {
        dVar38 = (double)(fVar5 * fVar4);
      }
      if (dVar31 - dVar30 < 0.0) {
        dVar34 = (double)(fVar11 * fVar4);
      }
      if (dVar31 - dVar30 < 0.0) {
        dVar36 = (double)(fVar6 * fVar4);
      }
      dVar31 = (double)(float)(dVar39 + dVar38);
      dVar33 = (double)(float)(dVar37 + dVar34);
      dVar35 = (double)(float)(dVar32 + dVar36);
      *(float *)(puVar16 + 0x19) = (float)(dVar39 + dVar38);
      *(float *)((int)puVar16 + 0xc4) = (float)(dVar37 + dVar34);
      *(float *)(puVar16 + 0x18) = (float)(dVar32 + dVar36);
    }
    else {
      fVar4 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
      if (dVar32 == dVar30) {
        fVar7 = (moby->transform).v2.w;
        dVar31 = dVar30;
        dVar33 = dVar30;
        dVar35 = dVar30;
      }
      else {
        fVar5 = (float)((double)DAT_00810a58 / dVar32);
        fVar7 = (moby->transform).v2.w;
        dVar35 = (double)(fVar11 * fVar5);
        dVar33 = (double)(fVar4 * fVar5);
        dVar31 = (double)(fVar6 * fVar5);
      }
      *(float *)(puVar16 + 0x18) = (float)dVar35;
      *(float *)((int)puVar16 + 0xc4) = (float)dVar33;
      *(float *)((int)puVar16 + 0xcc) = fVar7;
      *(float *)(puVar16 + 0x19) = (float)dVar31;
    }
  }
  else {
    if (1 < iVar22) goto LAB_00337b80;
    fVar4 = (moby->transform).v2.y;
    fVar11 = (moby->transform).v2.x;
    fVar6 = (moby->transform).v2.z;
    dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
    if (dVar32 == dVar30) {
      fVar7 = (moby->transform).v2.w;
      dVar32 = dVar30;
      dVar37 = dVar30;
      dVar39 = dVar30;
    }
    else {
      fVar5 = (float)((double)DAT_00810a5c / dVar32);
      fVar7 = (moby->transform).v2.w;
      dVar32 = (double)(fVar11 * fVar5);
      dVar37 = (double)(fVar4 * fVar5);
      dVar39 = (double)(fVar6 * fVar5);
    }
    fVar11 = (moby->transform).v1.y;
    fVar6 = (moby->transform).v1.x;
    fVar5 = (moby->transform).v1.z;
    dVar38 = (double)DAT_00810a64;
    *(float *)((int)puVar16 + 0xc4) = (float)dVar37;
    *(float *)(puVar16 + 0x19) = (float)dVar39;
    *(float *)((int)puVar16 + 0xcc) = fVar7;
    *(float *)(puVar16 + 0x18) = (float)dVar32;
    dVar31 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar11 * fVar11);
    fVar4 = (float)(dVar38 / dVar31);
    dVar38 = dVar30;
    if (dVar30 - dVar31 < 0.0) {
      dVar38 = (double)(fVar5 * fVar4);
    }
    dVar34 = dVar30;
    if (dVar30 - dVar31 < 0.0) {
      dVar34 = (double)(fVar11 * fVar4);
    }
    dVar36 = dVar30;
    if (dVar30 - dVar31 < 0.0) {
      dVar36 = (double)(fVar6 * fVar4);
    }
    if (dVar31 - dVar30 < 0.0) {
      dVar38 = (double)(fVar5 * fVar4);
    }
    if (dVar31 - dVar30 < 0.0) {
      dVar34 = (double)(fVar11 * fVar4);
    }
    if (dVar31 - dVar30 < 0.0) {
      dVar36 = (double)(fVar6 * fVar4);
    }
    dVar31 = (double)(float)(dVar39 + dVar38);
    dVar33 = (double)(float)(dVar37 + dVar34);
    dVar35 = (double)(float)(dVar32 + dVar36);
    *(float *)(puVar16 + 0x19) = (float)(dVar39 + dVar38);
    *(float *)((int)puVar16 + 0xc4) = (float)(dVar37 + dVar34);
    *(float *)(puVar16 + 0x18) = (float)(dVar32 + dVar36);
  }
  fVar4 = (moby->transform).v0.y;
  fVar11 = (moby->transform).v0.x;
  fVar6 = (moby->transform).v0.z;
  dVar32 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar4 * fVar4);
  if (dVar32 == dVar30) {
    fVar7 = (moby->transform).v0.w;
    dVar37 = dVar30;
    dVar39 = dVar30;
    dVar38 = dVar30;
  }
  else {
    fVar5 = (float)((double)DAT_00810a60 / dVar32);
    fVar7 = (moby->transform).v0.w;
    dVar38 = (double)(fVar11 * fVar5);
    dVar39 = (double)(fVar4 * fVar5);
    dVar37 = (double)(fVar6 * fVar5);
  }
  fVar5 = g_FrameTime * DAT_00810a54;
  fVar8 = (moby->pos).x;
  fVar9 = (moby->pos).y;
  fVar10 = (moby->pos).z;
  *(float *)(puVar16 + 0x1a) = (float)dVar38;
  *(float *)((int)puVar16 + 0xd4) = (float)dVar39;
  *(float *)(puVar16 + 0x1b) = (float)dVar37;
  *(float *)((int)puVar16 + 0xdc) = fVar7;
  *(float *)((int)puVar16 + 0xdc) = fVar7;
  fVar5 = (float)((double)fVar5 / dVar32);
  *(float *)(puVar16 + 0x18) = (float)(dVar35 + dVar38) + fVar8;
  *(float *)((int)puVar16 + 0xc4) = (float)(dVar33 + dVar39) + fVar9;
  *(float *)(puVar16 + 0x19) = (float)(dVar31 + dVar37) + fVar10;
  dVar37 = dVar30;
  if (dVar30 - dVar32 < 0.0) {
    dVar37 = (double)(fVar11 * fVar5);
  }
  dVar39 = dVar30;
  if (dVar30 - dVar32 < 0.0) {
    dVar39 = (double)(fVar4 * fVar5);
  }
  dVar38 = dVar30;
  if (dVar30 - dVar32 < 0.0) {
    dVar38 = (double)(fVar6 * fVar5);
  }
  if (dVar32 - dVar30 < 0.0) {
    dVar37 = (double)(fVar11 * fVar5);
  }
  if (dVar32 - dVar30 < 0.0) {
    dVar39 = (double)(fVar4 * fVar5);
  }
  if (dVar32 - dVar30 < 0.0) {
    dVar38 = (double)(fVar6 * fVar5);
  }
  *(float *)(puVar16 + 0x1a) = (float)dVar37;
  *(float *)((int)puVar16 + 0xd4) = (float)dVar39;
  *(float *)(puVar16 + 0x1b) = (float)dVar38;
  if ((*(short *)((int)pvVar13 + 0x9c) == 0) &&
     (pMVar23 = (MobyInstance *)FUN_00410528(uVar18 - 0x130,uVar18 - 0x120,lVar19,1),
     pMVar23 != (MobyInstance *)0x0)) {
    SetColorOfMoby(pMVar23,0xe0,0xe0,0xe0);
  }
LAB_00337d9c:
  iVar22 = MB_getTarget(0x4041000000000000,lVar19,&DAT_00337150,uVar18 - 0xc0);
  if ((((iVar22 == 2) ||
       (iVar22 = MB_IsPntInCuboid
                           ((Vec4 *)(puVar16 + 0x26),(longlong)*(int *)((int)pvVar13 + 0x90)),
       iVar22 == 0)) && (iVar22 = FastDecTimerS16(uVar28 + 0x74), iVar22 != 0)) &&
     (((moby->field43_0x70 & 2U) != 0 && (moby->updateId == '\x03')))) {
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar41 = loadVectorLeftIndexed(0xa6c,0x810000);
    auVar40 = vectorConvertFromSignedFixedPointWord(auVar41,0);
    auVar41 = loadVectorLeftIndexed(in_LR,0x337150);
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = vectorAddFloatingPoint
                        (auVar40,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar44,auVar41,auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar14 = storeVectorElementHalfWordIndexed(auVar41,0x76,uVar28);
    *(undefined2 *)((int)pvVar13 + 0x76) = uVar14;
    moby->state = '\x03';
    MB_SetAnimationNoBlend(lVar19,2,0);
    moby->unk58 = 1.0;
  }
  return;
}


