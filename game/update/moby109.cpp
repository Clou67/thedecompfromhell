// game/update/moby109.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1bb8c8-0x1bc080
#include "game/update/moby109.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1085.h"
#include "idol/fastfunc.h"

// 0x01bb8c8 (0xd0 bytes)
void M1089_001bb8c8(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  double dVar3;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar3 = 0.0;
  local_1c = 0.0;
  uVar2 = MB_damage(param_1,0x330000,0);
  MB_HandleDamage(param_1,uVar2,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if (((local_20 != 1) && (param_1->state != '\t' && param_1->state != '\b')) &&
     (local_1c = *(float *)((int)pvVar1 + 0x20) - local_1c,
     *(float *)((int)pvVar1 + 0x20) = local_1c, (double)local_1c <= dVar3)) {
    param_1->state = '\b';
  }
  param_1->damage = -1;
  return;
}


// 0x01bb9c0 (0x6c0 bytes)
/* Moby 109 */

void UpdateMoby_109(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  void *pvVar3;
  MobyClass *pMVar4;
  u16 *puVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  float fVar15;
  GPiece<16> local_60;
  int local_50;
  float local_4c;
  longlong local_48;
  
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  dVar10 = 0.0;
  local_4c = 0.0;
  uVar7 = MB_damage(moby,0x330000,0);
  MB_HandleDamage(moby,uVar7,uVar9 + 0x20,0,&local_50,&local_4c,0,4);
  if (((local_50 != 1) && (moby->state != '\t' && moby->state != '\b')) &&
     (fVar15 = *(float *)((int)pvVar3 + 0x20) - local_4c, *(float *)((int)pvVar3 + 0x20) = fVar15,
     (double)fVar15 <= dVar10)) {
    moby->state = '\b';
  }
  moby->damage = -1;
  bVar1 = moby->state;
  uVar6 = ZEXT48(Splines[*(int *)((int)pvVar3 + 0x70)]);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        fVar2 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar3 + 0x90) = fVar2;
        *(f32 *)((int)pvVar3 + 0x94) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x98) = (moby->pos).z;
        *(f32 *)((int)pvVar3 + 0x9c) = (moby->pos).w;
        *(f32 *)((int)pvVar3 + 0x9c) = (moby->rotation).z;
      }
      else {
        iVar8 = MB_IsPntInCuboid
                          ((Vec4 *)&g_heroCGPos,(longlong)*(int *)((int)pvVar3 + 0x88));
        if (iVar8 != 0) {
          auVar12 = ZEXT416(0xffffffff);
          auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
          auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          moby->state = '\x02';
          auVar12 = loadVectorLeftIndexed(0x78,uVar9);
          auVar11 = loadVectorRightIndexed(0x88,uVar9);
          auVar11 = vectorConvertFromSignedFixedPointWord(auVar12 | auVar11,0);
          auVar12 = loadVectorLeftIndexed(8,0x1bb998);
          auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar12 = vectorAddFloatingPoint
                              (auVar11,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60
                              );
          auVar12 = vectorMultiplyAddFloatingPoint(auVar14,auVar12,auVar13);
          auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
          auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,
                             uVar9);
          *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
        }
      }
    }
    else if (bVar1 < 3) {
      iVar8 = FastDecTimerS32(uVar9 + 0xa4);
      if (iVar8 != 0) {
        auVar12 = ZEXT416(0xffffffff);
        auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
        moby->state = '\x03';
        auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar12 = loadVectorLeftIndexed(0xc,0x1bb998);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                             auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
    else if (bVar1 < 4) {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      local_48 = (longlong)iVar8;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      M109_001bb7e0
                ((double)local_48,(double)(longlong)(animationSpeed * 30.5),moby,uVar9 + 0x90,
                 uVar6 + 0x10);
      if (*(int *)((int)pvVar3 + 0xa4) == 0) {
        auVar12 = ZEXT416(0xffffffff);
        auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
        *(f32 *)((int)pvVar3 + 0xa8) = (moby->rotation).z;
        moby->state = '\x06';
        auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar12 = loadVectorLeftIndexed(0xc,0x1bb998);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint
                            (auVar11,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                             auVar13);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
    else {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      local_48 = (longlong)iVar8;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      if (*(int *)((int)pvVar3 + 0xa0) == 0) {
        M109_001bb7e0
                  ((double)local_48,(double)(longlong)(animationSpeed * 120.5),moby,uVar6 + 0x10,
                   uVar6 + 0x20);
      }
      else {
        M109_001bb7e0
                  ((double)local_48,(double)(longlong)(animationSpeed * 120.5),moby,uVar6 + 0x20,
                   uVar6 + 0x10);
      }
      if (*(int *)((int)pvVar3 + 0xa4) == 0) {
        auVar12 = ZEXT416(0xffffffff);
        auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        *(uint *)((int)pvVar3 + 0xa0) = *(int *)((int)pvVar3 + 0xa0) + 1U & 1;
        moby->state = '\x06';
        auVar12 = loadVectorLeftIndexed(0xc,0x1bb998);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                             auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
        *(f32 *)((int)pvVar3 + 0xa8) = (moby->rotation).z;
      }
    }
  }
  else if (bVar1 == 10) {
    fVar15 = Delt(*(float *)((int)pvVar3 + 0x98),g_FrameTime * 2.0,
                            &(moby->pos).z);
    if ((double)fVar15 == dVar10) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 9) {
    if (*(int *)((int)pvVar3 + 0x74) != 0) {
      *(int *)((int)pvVar3 + 0x74) = *(int *)((int)pvVar3 + 0x74) + -1;
      (moby->pos).x = *(f32 *)((int)pvVar3 + 0x90);
      (moby->pos).y = *(f32 *)((int)pvVar3 + 0x94);
      fVar15 = *(float *)((int)pvVar3 + 0x98);
      (moby->pos).z = fVar15;
      (moby->pos).w = *(f32 *)((int)pvVar3 + 0x9c);
      (moby->rotation).z = *(f32 *)((int)pvVar3 + 0x9c);
      pMVar4 = moby->pClass;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      (moby->pos).z = fVar15 - 3.0;
      *(undefined4 *)((int)pvVar3 + 0xa0) = 0;
      moby->enabled = '\x01';
      puVar5 = pMVar4->collision;
      moby->state = '\n';
      moby->collision = puVar5;
    }
  }
  else if (bVar1 == 8) {
    MB_genericExplosion
              (dVar10,dVar10,0x3ff0000000000000,0x3fe0000000000000,0x3ff0000000000000,
               0x3fe0000000000000,0x401c000000000000,moby,&DAT_00a15d30,local_60,&DAT_001bb998,7,7,
               10,0x14);
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->state = '\t';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  else {
    auVar12 = loadVectorLeftIndexed(4,0x1bb998);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    if (bVar1 == 7) {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      if (iVar8 == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        moby->state = '\x04';
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
    else if (bVar1 == 6) {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      local_48 = (longlong)iVar8;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      dVar10 = (double)M109_001bb6f0
                                 ((double)*(float *)((int)pvVar3 + 0xa8),
                                  (double)Cuboids[*(int *)((int)pvVar3 +
                                                          *(int *)((int)pvVar3 + 0xa0) * 4 + 0x80)].
                                          rot.z,(double)local_48,
                                  (double)(longlong)(animationSpeed * 30.5),moby);
      (moby->rotation).z = (float)dVar10;
      if (*(int *)((int)pvVar3 + 0xa4) == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        moby->state = '\a';
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
  }
  return;
}


