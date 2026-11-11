// game/update/moby1219.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x20b7a8-0x20bb5c
#include <stdio.h>
#include "game/update/moby1219.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x020b7a8 (0x238 bytes)
// strings: 00654f30: 'Moby class %d Damage Received: %f\n'

void M1219_0020b7a8(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
  
  if (param_1->state != '\x04') {
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
        auVar8 = loadVectorLeftIndexed(in_LR,0x20b7a0);
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
        if (param_1->animationId != '\x04') {
          MB_SetAnimation(param_1,4,0,3);
        }
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
        if (param_1->animationId != '\x02') {
          MB_SetAnimation(param_1,2,0,3);
        }
        iVar5 = *(int *)(iVar6 + 0x70);
        if ((iVar5 != 0) && (*(char *)(iVar5 + 0x20) != -3 && *(char *)(iVar5 + 0x20) != -2)) {
          *(undefined1 *)(iVar5 + 0x20) = 3;
        }
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x020b9e8 (0x174 bytes)
/* Moby 1219 */

void UpdateMoby_1219(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  void *pvVar3;
  double dVar4;
  
  pvVar3 = moby->pVar;
  bVar1 = moby->state;
  if ((((*(int *)((int)pvVar3 + 0x70) == 0) ||
       (cVar2 = *(char *)(*(int *)((int)pvVar3 + 0x70) + 0x20), cVar2 == -2)) || (cVar2 == -3)) &&
     (bVar1 < 3)) {
    moby->state = '\x04';
  }
  else if (bVar1 != 4) {
    if (bVar1 == 3) {
      if (moby->alpha != '\0') {
        moby->alpha = moby->alpha + -1;
      }
      dVar4 = (double)BlendAnimFrame(moby);
      if (dVar4 <= 13.5) {
        return;
      }
      moby->state = '\x04';
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 == 1) {
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        moby->damage = -1;
        moby->state = '\x02';
        return;
      }
      if (bVar1 != 0) {
        return;
      }
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,0xf);
      }
      moby->state = '\x01';
      return;
    }
    M1219_0020b7a8(moby,pvVar3,(int)pvVar3 + 0x20);
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    if (moby->animationId == '\x01') {
      return;
    }
    MB_SetAnimation(moby,1,0,10);
    return;
  }
  DeleteMoby(moby);
  return;
}


