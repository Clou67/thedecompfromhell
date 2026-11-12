// game/update/moby1172.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1ed1d0-0x1ed784
#include <stdio.h>
#include "game/update/moby1172.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x01ed1d0 (0x14 bytes)
void M1172_001ed1d0(void)

{
  DAT_00765d0c = 0x10000;
  return;
}


// 0x01ed1f0 (0x23c bytes)
// strings: 00654c2c: 'Moby class %d Damage Received: %f\n'

void M1172_001ed1f0(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  MOBY_OCLASSES MVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined8 in_LR;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  int local_30 [4];
  
  if (param_1->state != '\x03') {
    iVar7 = MB_damage(param_1,0x330000,0);
    if (iVar7 != 0) {
      printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar7 + 0x2c));
    }
    iVar8 = MB_HandleDamage(param_1,iVar7,param_3,0,local_30,0,0,4);
    pfVar9 = (float *)param_3;
    if ((0 < iVar8) && (iVar8 < 3)) {
      *pfVar9 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar3 = (int)*pfVar9 >> 0x1f;
      uVar4 = (int)*(uint *)(iVar7 + 0x2c) >> 0x1f;
      iVar8 = (int)param_2;
      if ((int)((uVar4 >> 1 ^ *(uint *)(iVar7 + 0x2c)) - uVar4) <
          (int)((uVar3 >> 1 ^ (uint)*pfVar9) - uVar3)) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        *pfVar9 = *pfVar9 - *(float *)(iVar7 + 0x2c);
        *(undefined1 *)(iVar8 + 0x67) = 0xfa;
        auVar10 = loadVectorLeftIndexed(in_LR,0x1ed1e8);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = vectorSplatHalfWord(auVar10,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x26,param_2);
        *(undefined2 *)(iVar8 + 0x26) = uVar5;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar9 = 0.0;
        iVar7 = *(int *)(iVar8 + 0x70);
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (iVar7 != -1) {
          pMVar6 = g_MobyInstance + iVar7;
          if ((pMVar6 != (MobyInstance *)0x0) && (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
            MVar2 = pMVar6->oClass;
            if ((MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION) ||
               (MVar2 == AIRSHIP_PART_04A0)) {
              pMVar6->setByGroup = '\x01';
            }
          }
        }
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar8 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x03';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x01ed448 (0x33c bytes)
/* Moby 1172 */

void UpdateMoby_1172(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  void *pvVar3;
  undefined2 uVar4;
  MobyInstance *pMVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> local_20;
  
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  M1172_001ed1f0(moby,uVar7,uVar7 + 0x20);
  bVar1 = moby->state;
  if (1 < bVar1) {
    if (bVar1 < 3) {
      iVar6 = FastDecTimerS16(uVar7 + 0x74);
      if (iVar6 == 0) {
        return;
      }
      if ((((*(int *)((int)pvVar3 + 0x70) != -1) &&
           (pMVar5 = g_MobyInstance + *(int *)((int)pvVar3 + 0x70), pMVar5 != (MobyInstance *)0x0)) &&
          (pMVar5->state != 0xfd && pMVar5->state != 0xfe)) &&
         ((MVar2 = pMVar5->oClass, MVar2 == AIRSHIP_PART_049D || MVar2 == REFUELING_STATION ||
          (MVar2 == AIRSHIP_PART_04A0)))) {
        pMVar5->updateDistance = -1;
        pMVar5->setByGroup = '\x01';
      }
      moby->state = '\x03';
      return;
    }
    if (3 < bVar1) {
      return;
    }
    MB_genericExplosion
              (0,0,0x4024000000000000,0x401c000000000000,0x4034000000000000,0x4000000000000000,
               0x4044000000000000,moby,local_20,0,0,1,0x14,9,0x20);
    DeleteMoby(moby);
    return;
  }
  if (bVar1 == 0) {
    if ((*(short *)((int)pvVar3 + 0x76) != -1) &&
       ((&g_MiscLevelFlags.field57_0x39)[*(short *)((int)pvVar3 + 0x76)] != 0)) {
      DeleteMoby(moby);
      return;
    }
    *(undefined4 *)((int)pvVar3 + 0x7c) = 0xffffffff;
    moby->state = '\x01';
    return;
  }
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    iVar6 = *(int *)((int)pvVar3 + 0x7c);
    if (iVar6 != -1) {
      iVar6 = IsMobyPlayingSound(moby,iVar6);
      if (iVar6 != 0) goto LAB_001ed550;
      iVar6 = *(int *)((int)pvVar3 + 0x7c);
    }
    if (iVar6 == -1) {
      iVar6 = PlayMobySound(1,4,moby);
      *(int *)((int)pvVar3 + 0x7c) = iVar6;
    }
  }
LAB_001ed550:
  if (moby->setByGroup == '\x01') {
    iVar6 = *(int *)((int)pvVar3 + 0x78);
    if ((iVar6 != -1) && (g_MobyInstance[iVar6].state == '\x01')) {
      g_MobyInstance[iVar6].setByGroup = '\x01';
    }
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = loadVectorLeftIndexed(in_LR,0x1ed42c);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    iVar6 = *(int *)((int)pvVar3 + 0x7c);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x74,uVar7);
    *(undefined2 *)((int)pvVar3 + 0x74) = uVar4;
    if (((iVar6 != -1) && (g_SoundChannels[iVar6].pMoby == moby)) &&
       (g_SoundChannels[iVar6].state != '\0')) {
      sound_Kill(iVar6);
    }
    *(undefined4 *)((int)pvVar3 + 0x7c) = 0xffffffff;
    moby->updateDistance = -1;
    moby->state = '\x02';
  }
  return;
}


