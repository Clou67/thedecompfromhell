// game/update/moby1285.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x23d33c-0x23dcb0
// shared update function UpdateMoby_{1285_1286_1287_1288}; registered for oClasses 1285, 1286, 1287, 1288
#include "game/update/moby1285.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "game/update/moby320.h"
#include "idol/fastfunc.h"

// 0x023d33c (0x14 bytes)
void M1288_0023d33c(void)

{
  DAT_0078dd60 = 0x10000;
  return;
}


// 0x023d358 (0x118 bytes)
longlong M1288_0023d358(int param_1,MOBY_OCLASSES param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_LR;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(param_2);
  lVar2 = (longlong)(int)pMVar3;
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar3->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar3->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    auVar4 = loadVectorLeftIndexed(in_LR,0x23d350);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xff;
    cVar1 = storeVectorElementByteIndexed
                      (auVar4 | auVar4 << 8 | auVar4 << 0x10 | auVar4 << 0x18 | auVar4 << 0x20 |
                       auVar4 << 0x28 | auVar4 << 0x30 | auVar4 << 0x38 | auVar4 << 0x40 |
                       auVar4 << 0x48 | auVar4 << 0x50 | auVar4 << 0x58 | auVar4 << 0x60 |
                       auVar4 << 0x68 | auVar4 << 0x70 | auVar4 << 0x78,0xbc,lVar2);
    pMVar3->setByGroup = cVar1;
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(lVar2);
    pMVar3->scale = *(float *)(param_1 + 0x2c);
    pMVar3->modeBits = *(MobyModeBit *)(param_1 + 0x34);
    *(undefined4 *)pMVar3->pVar = **(undefined4 **)(param_1 + 0x78);
  }
  return lVar2;
}


// shared update function, registered for oClasses 1285, 1286, 1287, 1288
// 0x023d4d8 (0x7d8 bytes)
/* Moby 1285
   Moby 1286
   Moby 1287
   Moby 1288 */

void UpdateMoby_1285(MobyInstance *moby)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  MOBY_OCLASSES MVar8;
  undefined8 in_LR;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> local_170;
  GPiece<24> local_160;
  double local_148;
  double local_140;
  
  lVar4 = (longlong)(int)moby;
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    if (*piVar1 != -1) {
      (&g_MiscLevelFlags.field67_0x43)[*piVar1] = 0;
    }
    moby->state = '\x01';
  }
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    bVar3 = false;
    iVar5 = MB_damage(lVar4,0x40000,0);
    iVar6 = FastDecTimerS8(lVar4 + 0xbc);
    if ((iVar6 != 0) && (iVar5 != 0)) {
      if (((short)moby->oClass < 0x508) &&
         (iVar6 = M1288_0023d358(lVar4,(longlong)(short)moby->oClass + 1),
         iVar6 != 0)) {
        bVar3 = true;
      }
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = loadVectorLeftIndexed(in_LR,0x23d470);
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar17,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar16);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xff;
      cVar2 = storeVectorElementByteIndexed
                        (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                         auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                         auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                         auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0xbc,
                         lVar4);
      moby->setByGroup = cVar2;
      if ((short)moby->oClass < 0x508) {
        PlayMobySound(0,0,moby);
      }
      else {
        PlayMobySound(0,0,moby);
      }
      iVar6 = 0x28;
      moby->damage = -1;
      if ((0x3f59999a <
           (int)(FLOAT_ORDER(g_FrameLoad))) ||
         (0x3f59999a <
          (int)(FLOAT_ORDER(g_PerfLoad)))) {
        iVar6 = 0x1e;
      }
      iVar7 = 0;
      if (iVar6 != 0) {
        uVar12 = 0;
        dVar10 = 0.30000001192092896;
        local_140 = -0.4000000059604645;
        local_148 = 0.4000000059604645;
        dVar11 = 8.0;
        do {
          dVar13 = local_140;
          dVar14 = local_148;
          MB_randRangeFloat(-0.4,0.4);
          MB_randRangeFloat(-0.6,0.6);
          MB_randRangeFloat((float)dVar13,(float)dVar14);
          MB_randRangeFloat((float)dVar10,2.6);
          MB_randRangeFloat(5.0,(float)dVar11);
          if (moby->oClass == BARRIER_0508) {
            MB_randRangeFloat(1.0,1.3);
            FUN_00341590(lVar4);
          }
          if (iVar7 % 3 == 0) {
            uVar9 = MB_randRangeFloat((float)dVar10,0.6);
            MB_SpawnExplosionSparks(uVar9,uVar12,lVar4,local_160);
          }
          iVar7 = iVar7 + 1;
          FastIntToDouble(iVar6);
        } while (iVar7 < iVar6);
      }
      MB_genericExplosion
                (0,0,0x4008000000000000,0x4000000000000000,0x3ff0000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar4,iVar5 + 0x10,local_170,1,0xffffffffffffffff,10,3,0x10);
      MVar8 = moby->oClass;
      if ((MVar8 == BARRIER_0508) && (*piVar1 != -1)) {
        (&g_MiscLevelFlags.field67_0x43)[*piVar1] = 1;
        MVar8 = moby->oClass;
      }
      if ((MVar8 == BARRIER_0508) || (bVar3)) {
        DeleteMoby(moby);
      }
    }
  }
  else {
    if (*piVar1 != -1) {
      (&g_MiscLevelFlags.field67_0x43)[*piVar1] = 1;
    }
    DeleteMoby(moby);
  }
  return;
}


