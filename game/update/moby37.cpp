// game/update/moby37.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x35511c-0x3552f0
#include <stdio.h>
#include "game/update/moby37.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"

// 0x035511c (0x6c bytes)
void FUN_0035511c(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar2 = *puVar4 & 0x7fff;
      if (g_MobyInstance[uVar2].oClass == 0x16f) {
        pMVar3 = g_MobyInstance + uVar2;
        g_MobyInstance[uVar2].state = '\x02';
        *(undefined4 *)((int)pMVar3->pVar + 0x28) = 0x3f800000;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0355188 (0x6c bytes)
void FUN_00355188(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar4 != (ushort *)0x0) {
    do {
      uVar2 = *puVar4 & 0x7fff;
      if (g_MobyInstance[uVar2].oClass == 0x16f) {
        pMVar3 = g_MobyInstance + uVar2;
        g_MobyInstance[uVar2].state = '\x02';
        *(undefined4 *)((int)pMVar3->pVar + 0x28) = 0;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x0355200 (0xf0 bytes)
// strings: 00656574: 'Raritanium Acquired'

/* Moby 37 */

void UpdateMoby_37(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  fVar1 = (moby->pos).y - g_heroPosition.y;
  fVar2 = (moby->pos).x - g_heroPosition.x;
  fVar3 = (moby->pos).z - g_heroPosition.z;
  if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 2.0) {
    g_MiscLevelFlags.Raritanium = true;
    snprintf(&g_toastMsgBuff,"Raritanium Acquired");
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    auVar4 = loadVectorLeftIndexed(4,0x3551f8);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    g_toastMsgTimer =
         storeVectorElementWordIndexed
                   (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x5c80,0xa10000);
    DeleteMoby(moby);
  }
  return;
}


