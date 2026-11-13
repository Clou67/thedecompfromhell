// game/update/moby250.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x316950-0x316b90
#include "game/update/moby250.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0316950 (0x240 bytes)
/* Moby 250 */

void UpdateMoby_250(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  u16 *puVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  puVar6 = (u16 *)0x0;
  piVar3 = (int *)moby->pVar;
  uVar7 = ZEXT48(piVar3);
  uVar1 = moby->state;
  bVar2 = moby->field43_0x70;
  if (g_heroType != '\x02') {
    puVar6 = moby->pClass->collision;
  }
  moby->collision = puVar6;
  if (uVar1 == '\a') {
    if ((bVar2 & 2) != 0) {
      moby->state = '\0';
      MB_SetAnimationNoBlend(moby,0,0);
    }
  }
  else if (uVar1 == '\x06') {
    iVar5 = FastDecTimerS32(uVar7 + 8);
    if (iVar5 != 0) {
      MB_SetAnimationNoBlend(moby,3,0);
      moby->state = '\a';
    }
  }
  else if (uVar1 == '\x05') {
    if ((bVar2 & 2) != 0) {
      moby->state = '\x06';
      MB_SetAnimationNoBlend(moby,2,0);
    }
  }
  else if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x14) {
        MB_SetAnimationNoBlend(moby,0,0);
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x02') {
      if ((bVar2 & 2) != 0) {
        moby->state = '\x03';
        MB_SetAnimationNoBlend(moby,2,0);
      }
    }
    else if (uVar1 == '\x01') {
      iVar5 = FastDecTimerS32(uVar7 + 8);
      if (iVar5 != 0) {
        moby->state = '\x02';
        MB_SetAnimationNoBlend(moby,1,0);
      }
    }
    else if (((uVar1 == '\0') && (*piVar3 != 0)) &&
            (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x14)) {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      moby->state = '\x01';
      auVar10 = loadVectorLeftIndexed(4,uVar7);
      auVar8 = loadVectorRightIndexed(0x14,uVar7);
      auVar9 = loadVectorLeftIndexed(in_LR,0x316948);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar10 | auVar8,0);
      auVar10 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorAddFloatingPoint
                          (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
      auVar10 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar11);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,uVar7);
      *(undefined4 *)((uint)(piVar3 + 2) & 0xfffffffc) = uVar4;
    }
  }
  return;
}


