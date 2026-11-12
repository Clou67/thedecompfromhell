// game/update/moby1281.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x237660-0x237ca4
#include "game/update/moby1281.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0237660 (0x198 bytes)
void M1281_00237660(MobyInstance *param_1)

{
  f32 fVar1;
  float fVar2;
  f32 fVar3;
  MobyClass *pMVar4;
  u16 *puVar5;
  undefined4 uVar6;
  MobyInstance *moby;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  iVar10 = 0;
  fVar1 = (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  fVar3 = (param_1->pos).w;
  moby = g_MobyInstance +
         *(int *)((int)param_1->pVar + *(int *)((int)param_1->pVar + 0xf0) * 4 + 0xc0);
  (moby->pos).x = (param_1->pos).x;
  (moby->pos).y = fVar1;
  (moby->pos).z = fVar2;
  (moby->pos).w = fVar3;
  pMVar4 = moby->pClass;
  moby->state = '\0';
  moby->setByGroup = '\0';
  uVar7 = param_1->color;
  uVar8 = param_1->light;
  (moby->pos).z = fVar2 - 0.35;
  moby->modeBits = *(MobyModeBit *)&pMVar4->mode_bits;
  fVar2 = pMVar4->gScale;
  moby->updateDistance = -1;
  moby->scale = fVar2;
  moby->drawDistance = 0xff;
  moby->enabled = '\x01';
  moby->occlIndex = 0x7f80;
  moby->unk71 = -1;
  moby->unk72 = -1;
  moby->damage = -1;
  puVar5 = pMVar4->collision;
  moby->color = uVar7;
  moby->light = uVar8;
  moby->collision = puVar5;
  UpdateMobyTransform(moby);
  moby->field80_0xb8 = param_1;
  dVar11 = 3.0;
  dVar12 = 5.0;
  do {
    MB_randRangeFloat
              ((float)((double)g_FrameTime * dVar11),
               (float)((double)g_FrameTime * dVar12));
    SpawnPart_28(&param_1->pos,0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xe);
  uVar9 = MB_GetPvarsIfMobyHasThem(moby);
  if ((uint)uVar9 != 0) {
    auVar13 = ZEXT416(0xfffffff0);
    auVar14 = loadVectorLeftIndexed(4,uVar9);
    auVar15 = loadVectorRightIndexed(0x14,uVar9);
    auVar13 = vectorShiftRightAlgebraicWord
                        (auVar14 | auVar15,
                         auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0,uVar9);
    *(undefined4 *)((uint)uVar9 & 0xfffffffc) = uVar6;
  }
  return;
}


// 0x0237808 (0x14c bytes)
void M1281_00237808(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  int iVar5;
  undefined8 in_LR;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(int *)(uVar2 + 0x38) != 0) {
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(in_LR,0x2377f8);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = vectorSplatHalfWord(auVar6,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar6,0xfe,(ulonglong)uVar2);
      *(undefined2 *)(uVar2 + 0xfe) = uVar3;
    }
    *(undefined4 *)(uVar2 + 0x38) = 0;
    iVar5 = FastDecTimerS16((ulonglong)uVar2 + 0xfe);
    if (iVar5 == 0) {
      fVar1 = *(float *)(uVar2 + 0xf4) + 5.0;
    }
    else {
      fVar1 = *(float *)(uVar2 + 0xf4);
    }
    *(float *)(uVar2 + 0xf8) = fVar1;
    iVar5 = MB_getTarget(param_1);
    if ((iVar5 != 2) && (3.0 < ABS(*(float *)(param_1 + 0x18) - *(float *)(uVar2 + 0x78)))) {
      *(undefined4 *)(uVar2 + 0xb4) = 2;
    }
    pMVar4 = g_heroMobyPtr;
    if (*(int *)(uVar2 + 0xb0) == 0) {
      *(float *)(uVar2 + 0x70) = g_heroPosition.x;
      fVar1 = g_heroPosition.y;
      *(MobyInstance **)(uVar2 + 0xb0) = pMVar4;
      *(float *)(uVar2 + 0x74) = fVar1;
      *(float *)(uVar2 + 0x78) = g_heroPosition.z;
      *(float *)(uVar2 + 0x7c) = g_heroPosition.w;
    }
  }
  return;
}


// 0x0237960 (0x344 bytes)
/* Moby 1281 */

void UpdateMoby_1281(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  MobyInstance *moby_00;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  pvVar2 = moby->pVar;
  uVar8 = ZEXT48(pvVar2);
  M1281_00237808();
  uVar1 = moby->state;
  if (uVar1 != '\x05') {
    if (uVar1 == '\x04') {
      uVar1 = moby->animationId;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      if (uVar1 != '\x03') {
        MB_SetAnimation(moby,3,0,(int)(animationSpeed * 2.5));
        uVar1 = moby->animationId;
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (uVar1 != '\0') {
          MB_SetAnimation(moby,0,0,(int)(animationSpeed * 2.5));
        }
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      iVar6 = FastDecTimerS16(uVar8 + 0xfc);
      iVar7 = *(int *)((int)pvVar2 + 0xf0);
      if (iVar6 != 0) {
        if (*(int *)((int)pvVar2 + iVar7 * 4 + 0xc0) != -1) {
          M1281_00237660(moby);
          auVar9 = ZEXT416(0xffffffff);
          auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
          auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
          moby->setByGroup =
               (char)((ulonglong)(LZCOUNT((uint)(byte)moby->setByGroup) << 0x20) >> 0x25);
          auVar9 = loadVectorLeftIndexed(4,0x237954);
          auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          iVar7 = *(int *)((int)pvVar2 + 0xf0);
          auVar9 = vectorMultiplyAddFloatingPoint
                             (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                              auVar10);
          auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
          auVar9 = vectorSplatHalfWord(auVar9,1);
          uVar3 = storeVectorElementHalfWordIndexed(auVar9,0xfc,uVar8);
          *(undefined2 *)((int)pvVar2 + 0xfc) = uVar3;
        }
        iVar7 = iVar7 + 1;
        *(int *)((int)pvVar2 + 0xf0) = iVar7;
      }
      if ((iVar7 == 0xc) || (*(int *)((int)pvVar2 + iVar7 * 4 + 0xc0) == -1)) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x02') {
      uVar1 = moby->animationId;
      if (uVar1 != '\x01') {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 2.5));
        uVar1 = moby->animationId;
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (uVar1 != '\x02') {
          MB_SetAnimation(moby,2,0,(int)(animationSpeed * 2.5));
        }
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      if ((*(int *)((int)pvVar2 + 0xb4) != 2) &&
         (fVar4 = (moby->pos).y - *(float *)((int)pvVar2 + 0x74),
         fVar5 = (moby->pos).x - *(float *)((int)pvVar2 + 0x70),
         SQRT(fVar5 * fVar5 + fVar4 * fVar4) < *(float *)((int)pvVar2 + 0xf8))) {
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      iVar7 = 0;
      do {
        iVar6 = *(int *)((int)uVar8 + 0xc0);
        if ((iVar6 != -1) && (moby_00 = g_MobyInstance + iVar6, moby_00 != (MobyInstance *)0x0)) {
          if (moby_00->state != 0xfd && moby_00->state != 0xfe) {
            DeleteMoby(moby_00);
          }
        }
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 + 4;
      } while (iVar7 < 0xc);
      moby->state = '\x01';
    }
  }
  return;
}


