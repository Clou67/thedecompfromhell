// game/update/moby674.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x40f2b0-0x40f5e4
// shared update function UpdateMoby_{674_677_680}; registered for oClasses 674, 677, 680
#include <stdio.h>
#include "game/update/moby674.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 674, 677, 680
// 0x040f2b0 (0x334 bytes)
// strings: 00657100: 'Moby %d(%d) has no check moby! Deleting!\n'

/* Moby 674
   Moby 677
   Moby 680 */

void UpdateMoby_674(MobyInstance *moby)

{
  u8 uVar1;
  MobyModeBit MVar2;
  int *piVar3;
  MobyClass *pMVar4;
  u16 *puVar5;
  float fVar6;
  s8 sVar7;
  int iVar8;
  undefined8 uVar9;
  MobyInstance *pMVar10;
  bool bVar11;
  bool bVar12;
  int *piVar13;
  int iVar14;
  
  pMVar10 = (MobyInstance *)0x0;
  piVar3 = (int *)moby->pVar;
  uVar1 = moby->state;
  if (*piVar3 != -1) {
    pMVar10 = g_MobyInstance + *piVar3;
  }
  bVar12 = false;
  bVar11 = false;
  if (uVar1 != '\0') {
    iVar14 = 0;
    piVar13 = piVar3;
    do {
      if ((uint)pMVar10->state == (int)*(char *)(piVar13 + 1)) {
        bVar12 = true;
        break;
      }
      iVar14 = iVar14 + 1;
      piVar13 = (int *)((int)piVar13 + 1);
    } while (iVar14 < 6);
    iVar14 = 0;
    piVar13 = piVar3;
    do {
      if ((uint)pMVar10->state == (int)*(char *)((int)piVar13 + 10)) {
        bVar11 = true;
        break;
      }
      iVar14 = iVar14 + 1;
      piVar13 = (int *)((int)piVar13 + 1);
    } while (iVar14 < 6);
  }
  if (uVar1 == '\x04') {
    if (bVar11) {
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
    }
    fVar6 = DAT_0071f408 * 0.05 + (float)piVar3[4];
    piVar3[4] = (int)fVar6;
    if (1.0 < fVar6) {
      pMVar4 = moby->pClass;
      piVar3[4] = 0x3f800000;
      moby->state = '\x01';
      moby->collision = pMVar4->collision;
    }
  }
  else if (uVar1 == '\x03') {
    if (bVar12) {
      moby->state = '\x04';
      puVar5 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar5;
      moby->enabled = '\x01';
    }
  }
  else if (uVar1 == '\x02') {
    if (bVar12) {
      moby->state = '\x04';
      moby->collision = moby->pClass->collision;
    }
    fVar6 = -(DAT_0071f408 * 0.05 - (float)piVar3[4]);
    piVar3[4] = (int)fVar6;
    if (fVar6 < 0.0) {
      MVar2 = moby->modeBits;
      piVar3[4] = 0;
      moby->state = '\x03';
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits = MVar2 | DISABLED;
    }
  }
  else if (uVar1 == '\x01') {
    if (bVar11) {
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
    }
  }
  else if (uVar1 == '\0') {
    if (pMVar10 == (MobyInstance *)0x0) {
      printf("Moby %d(%d) has no check moby! Deleting!\n",moby->uid,moby->oClass);
      DeleteMoby(moby);
      return;
    }
    SetColorOfMoby(moby,0x80,0x80,0x80);
    iVar14 = piVar3[6];
    moby->modeBits = moby->modeBits | (DISABLE_Z_WRITE|DRAW_TRANSPARENT_WEIRD|TRANSPARENT);
    if (iVar14 == 0) {
      pMVar4 = moby->pClass;
      piVar3[4] = 0x3f800000;
      moby->state = '\x01';
      puVar5 = pMVar4->collision;
      moby->alpha = '\x14';
      moby->collision = puVar5;
    }
    else {
      piVar3[4] = 0;
      moby->state = '\x03';
      moby->collision = (ushort *)0x0;
      moby->alpha = '\0';
    }
  }
  sVar7 = FastDoubleToInt((double)((float)piVar3[4] * 20.0));
  moby->alpha = sVar7;
  iVar14 = piVar3[5];
  uVar9 = 0xc0;
  iVar8 = iVar14 + 0xc0;
  piVar3[5] = iVar8;
  if (iVar8 < 0x1001) {
    if (iVar8 < 0) {
      uVar9 = 0x10c0;
      piVar3[5] = iVar14 + 0x10c0;
    }
  }
  else {
    uVar9 = 0xfffffffffffff0c0;
    piVar3[5] = iVar14 + -0xf40;
  }
  MB_AddShortPairOffset(moby->pClass,uVar9,0);
  return;
}


