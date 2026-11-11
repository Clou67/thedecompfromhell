// game/update/moby231.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x300130-0x3008f8
#include <stdio.h>
#include "game/update/moby231.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0300130 (0x14 bytes)
void M231_00300130(void)

{
  DAT_007ff2d8 = 0x10000;
  return;
}


// 0x0300150 (0x190 bytes)
undefined8
M231_00300150(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 in_LR;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  int local_30 [2];
  
  uVar8 = 0;
  iVar5 = MB_damage(param_1,0x330000,0);
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
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
      *(undefined1 *)(iVar6 + 0x67) = 0xfa;
      auVar9 = loadVectorLeftIndexed(in_LR,0x300148);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = vectorSplatHalfWord(auVar9,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar9,0x26,param_2);
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
      *(undefined1 *)(iVar6 + 0x67) = 0x78;
      MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      uVar8 = 1;
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return uVar8;
}


// 0x03002f8 (0x600 bytes)
// strings: 00655d30: 'moby:%d(%d) opened at %d\n' | 00655d50: 'moby:%d(%d) failed at %d\n' | 00655d70: 'moby:%d(%d) closed at %d\n'

/* Moby 231 */

void UpdateMoby_231(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 in_LR;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  MobyInstance *local_30 [2];
  longlong local_28;
  
  pvVar2 = moby->pVar;
  uVar9 = ZEXT48(pvVar2);
  iVar7 = 0;
  if ((*(short *)((int)pvVar2 + 0x74) == 0) && ((moby->state == '\x01' || (moby->state == '\x02'))))
  {
    iVar7 = M231_00300150(moby,uVar9,uVar9 + 0x20);
  }
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(char *)((int)pvVar2 + 0x79) == '\0') {
        *(undefined1 *)((int)pvVar2 + 0x7b) = 0;
        *(MobyInstance **)((int)pvVar2 + 0x80) = moby;
        MB_GetFirstMobyInGroup(local_30,(uint)(byte)moby->group,'\0','\0');
        while (local_30[0] != (MobyInstance *)0x0) {
          if ((local_30[0] != moby) && (local_30[0]->oClass == 0xe7)) {
            pvVar3 = local_30[0]->pVar;
            *(MobyInstance **)((int)pvVar3 + 0x80) = moby;
            *(undefined1 *)((int)pvVar3 + 0x79) = 1;
          }
          *(char *)((int)pvVar2 + 0x7b) = *(char *)((int)pvVar2 + 0x7b) + '\x01';
          MB_GetNextMobyInGroup(local_30,local_30[0],'\0','\0');
        }
      }
      *(undefined2 *)((int)pvVar2 + 0x70) = 0;
      *(undefined2 *)((int)pvVar2 + 0x72) = 0;
      *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
      *(undefined2 *)((int)pvVar2 + 0x74) = 0;
      *(undefined2 *)((int)pvVar2 + 0x76) = 0;
      SetColorOfMoby(moby,0x80,0x80,0x80);
      moby->state = '\x01';
    }
    else {
      if (*(short *)((int)pvVar2 + 0x74) == 0 && iVar7 != 0) {
        iVar7 = *(int *)((int)pvVar2 + 0x80);
        uVar4 = *(uint *)(iVar7 + 0x78);
        if (*(char *)(iVar7 + 0x20) == '\x01') {
          *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
          *(undefined1 *)(iVar7 + 0x20) = 2;
          if (0 < *(int *)(uVar4 + 0x7c)) {
            auVar10 = ZEXT416(0xffffffff);
            auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
            auVar10 = loadVectorLeftIndexed(0x7c,uVar9);
            auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
            auVar12 = loadVectorRightIndexed(0x8c,uVar9);
            auVar11 = loadVectorLeftIndexed(in_LR,0x3002e0);
            auVar12 = vectorConvertFromSignedFixedPointWord(auVar10 | auVar12,0);
            auVar10 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar10 = vectorAddFloatingPoint
                                (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 |
                                         auVar10 << 0x60);
            auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar13);
            auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
            auVar10 = vectorSplatHalfWord(auVar10,1);
            uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x70,(ulonglong)uVar4);
            *(undefined2 *)(uVar4 + 0x70) = uVar5;
          }
        }
        *(char *)(uVar4 + 0x7a) = *(char *)(uVar4 + 0x7a) + '\x01';
        PlayMobySound(3,0,moby);
        SetColorOfMoby(moby,0,0xff,0);
        *(undefined2 *)((int)pvVar2 + 0x74) = 1;
        bVar1 = moby->state;
      }
      if (bVar1 == 2) {
        if (*(byte *)((int)pvVar2 + 0x7a) < *(byte *)((int)pvVar2 + 0x7b)) {
          if (-1 < *(int *)((int)pvVar2 + 0x7c)) {
            iVar7 = FastDecTimerS16(uVar9 + 0x70);
            if (iVar7 == 0) {
              iVar7 = FastDecTimerS16(uVar9 + 0x72);
              if (iVar7 != 0) {
                PlayMobySound(0,0,moby);
                iVar8 = (int)(animationSpeed * 5.5) +
                        (int)*(short *)((int)pvVar2 + 0x70) / (int)(animationSpeed * 40.5);
                iVar7 = (int)(animationSpeed * 45.5);
                if (iVar8 <= (int)(animationSpeed * 45.5)) {
                  iVar7 = iVar8;
                }
                *(short *)((int)pvVar2 + 0x72) = (short)iVar7;
              }
            }
            else {
              *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
              *(undefined2 *)((int)pvVar2 + 0x74) = 0;
              PlayMobySound(2,0,moby);
              MB_SetStateByGroup(moby->group,3);
              printf("moby:%d(%d) failed at %d\n",moby->uid,moby->oClass,worldUpdateTime);
              moby->state = '\x03';
            }
          }
        }
        else {
          MB_SetStateByGroup(moby->group,4);
          PlayMobySound(1,0,moby);
          *(short *)((int)pvVar2 + 0x70) = (short)*(undefined4 *)((int)pvVar2 + 0x84);
          printf("moby:%d(%d) opened at %d\n",moby->uid,moby->oClass,worldUpdateTime);
          moby->state = '\x04';
        }
      }
    }
  }
  else if (bVar1 < 4) {
    SetColorOfMoby(moby,0x80,0x80,0x80);
    auVar10 = ZEXT416(0xfffffff0);
    auVar12 = loadVectorLeftIndexed(0x24,uVar9);
    auVar11 = loadVectorRightIndexed(0x34,uVar9);
    *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
    *(undefined2 *)((int)pvVar2 + 0x74) = 0;
    auVar10 = vectorShiftRightAlgebraicWord
                        (auVar12 | auVar11,
                         auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x20,uVar9);
    *(undefined4 *)((int)pvVar2 + 0x20U & 0xfffffffc) = uVar6;
    moby->state = '\x01';
  }
  else if (bVar1 < 5) {
    if ((*(char *)((int)pvVar2 + 0x79) == '\0') && (*(short *)((int)pvVar2 + 0x70) != -1)) {
      iVar7 = FastDecTimerS16(uVar9 + 0x70);
      if (iVar7 == 0) {
        iVar7 = FastDecTimerS16(uVar9 + 0x72);
        if (iVar7 != 0) {
          PlayMobySound(0,0,moby);
          local_28 = (longlong)(int)(animationSpeed * 40.5);
          iVar8 = (int)(animationSpeed * 5.5) +
                  (int)*(short *)((int)pvVar2 + 0x70) / (int)(animationSpeed * 40.5);
          iVar7 = (int)(animationSpeed * 45.5);
          if (iVar8 <= (int)(animationSpeed * 45.5)) {
            iVar7 = iVar8;
          }
          *(short *)((int)pvVar2 + 0x72) = (short)iVar7;
        }
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
        *(undefined2 *)((int)pvVar2 + 0x74) = 0;
        PlayMobySound(2,0,moby);
        MB_SetStateByGroup(moby->group,3);
        printf("moby:%d(%d) closed at %d\n",moby->uid,moby->oClass,worldUpdateTime);
        moby->state = '\x03';
      }
    }
    iVar7 = FastDecTimerS16(uVar9 + 0x76);
    if (iVar7 != 0) {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(0x10,0x3002e0);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar12);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = vectorSplatHalfWord(auVar10,1);
      uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x76,uVar9);
      *(undefined2 *)((int)pvVar2 + 0x76) = uVar5;
      if (*(char *)((int)pvVar2 + 0x78) == '\0') {
        SetColorOfMoby(moby,0,0,0xff);
        *(undefined1 *)((int)pvVar2 + 0x78) = 1;
      }
      else {
        SetColorOfMoby(moby,0,0xff,0);
        *(undefined1 *)((int)pvVar2 + 0x78) = 0;
      }
    }
  }
  return;
}


