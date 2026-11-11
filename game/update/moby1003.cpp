// game/update/moby1003.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1817d0-0x181be0
#include <stdio.h>
#include "game/update/moby1003.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x01817d0 (0x2a0 bytes)
void M1003_001817d0(MobyInstance *moby,longlong param_2,float *param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined8 in_LR;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (moby->state != '\x02') {
    iVar6 = MB_damage(moby,0x330000,0);
    MB_HandleDamage(moby,iVar6,(longlong)(int)param_3,0,local_30,0,0,4);
    if (1 < local_30[0]) {
      uVar2 = (int)*param_3 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar6 + 0x2c) >> 0x1f;
      iVar5 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar6 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*param_3) - uVar2)) {
        auVar7 = ZEXT416(0xffffffff);
        auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
        auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        *param_3 = *param_3 - *(float *)(iVar6 + 0x2c);
        *(undefined1 *)(iVar5 + 0x67) = 0xfa;
        auVar7 = loadVectorLeftIndexed(in_LR,0x1817c0);
        auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar7 = vectorMultiplyAddFloatingPoint
                           (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8)
        ;
        auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
        auVar7 = vectorSplatHalfWord(auVar7,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar7,0x26,param_2);
        *(undefined2 *)(iVar5 + 0x26) = uVar4;
        MB_UpdateLightsTransition(moby,param_2 + 0x60);
        local_40 = *(float *)(iVar6 + 0x10);
        local_38 = SQRT(*(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar6 + 0x14) * local_38;
          local_38 = *(float *)(iVar6 + 0x18) * local_38;
        }
        (moby->pos).x = (moby->pos).x + local_40;
        (moby->pos).y = (moby->pos).y + local_3c;
        (moby->pos).z = (moby->pos).z + local_38;
        MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (moby->pos).x = (moby->pos).x + local_40;
        (moby->pos).y = (moby->pos).y + local_3c;
        (moby->pos).z = (moby->pos).z + local_38;
      }
      else {
        MVar1 = moby->modeBits;
        *param_3 = 0.0;
        moby->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
        *(undefined1 *)(iVar5 + 0x67) = 0x78;
        MB_UpdateLightsTransition(moby,param_2 + 0x60);
        moby->state = '\x02';
      }
    }
  }
  moby->damage = -1;
  MB_ColorDyingMoby(moby,param_2 + 0x60);
  return;
}


// 0x0181a90 (0x150 bytes)
// strings: 00654168: 'M1003 #%d death\n'

/* Moby 1003 */

void UpdateMoby_1003(MobyInstance *moby)

{
  byte bVar1;
  GPiece<24> local_20;
  
  M1003_001817d0(moby,ZEXT48(moby->pVar),(int)moby->pVar + 0x20);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if ((1 < bVar1) && (bVar1 < 3)) {
    printf("M1003 #%d death\n",moby->uid);
    MB_genericExplosion
              (0,0,0x4024000000000000,0x401c000000000000,0x4034000000000000,0x4000000000000000,
               0x4044000000000000,moby,local_20,0,0,0xffffffffffffffff,0x14,9,0x20);
    DeleteMoby(moby);
    return;
  }
  MB_RegisterLameShadow(5.0,moby);
  return;
}


