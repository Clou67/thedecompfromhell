// game/update/moby1031.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1907cc-0x190b38
#include "game/update/moby1031.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01907cc (0x14 bytes)
void M1031_001907cc(void)

{
  DAT_0073fd44 = 0x10000;
  return;
}


// 0x01907f0 (0x348 bytes)
/* Moby 1031 */

void UpdateMoby_1031(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  MobyInstance *pMoby;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  
  piVar1 = (int *)moby->pVar;
  uVar7 = ZEXT48(piVar1);
  bVar3 = false;
  if (*piVar1 == -1) {
    SetColorOfMoby(moby,8,8,8);
    return;
  }
  pMoby = g_MobyInstance + *piVar1;
  iVar4 = CollMobySphere
                    (0x3ff0000000000000,(longlong)(int)moby + 0x10,&DAT_001907e0,0,
                     (longlong)(int)moby,0);
  if ((iVar4 != 0) && (iVar5 = 0, 0 < iVar4)) {
    puVar6 = &DAT_00a14a00;
    uVar9 = 0x3fe0000000000000;
    dVar10 = 0.10000000149011612;
    bVar3 = false;
    do {
      dVar8 = (double)GetGroundZ(uVar9,(ulonglong)*puVar6 + 0x10,0);
      if (((g_CollOutput.pMoby == moby) &&
          (ABS((double)(float)(dVar8 - (double)*(float *)(*puVar6 + 0x18))) < dVar10)) &&
         (*(short *)(*puVar6 + 0xa6) != 0x3ef)) {
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < iVar4);
  }
  FastDecTimerS32(uVar7 + 0x10);
  if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) || (bVar3)) {
    if (piVar1[1] != -1) {
      *(undefined4 *)((int)g_MobyInstance[piVar1[1]].pVar + 0xc) = 1;
      goto LAB_001909b8;
    }
  }
  else if (piVar1[3] == 0) {
    if ((pMoby->state == '\x04') && (pMoby->state = '\x01', piVar1[4] == 0)) {
      PlayMobySound(1,0,pMoby);
      PlayMobySound(0,0,moby);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = loadVectorLeftIndexed(0xc,0x1907e0);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x10,uVar7);
      *(undefined4 *)((uint)(piVar1 + 4) & 0xfffffffc) = uVar2;
    }
    SetColorOfMoby(moby,8,8,8);
    return;
  }
  piVar1[3] = 0;
LAB_001909b8:
  if (((pMoby->state == '\x01') || (pMoby->state == '\x02')) &&
     (pMoby->state = '\x03', piVar1[4] == 0)) {
    PlayMobySound(0,0,pMoby);
    PlayMobySound(0,0,moby);
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(0xc,0x1907e0);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x10,uVar7);
    *(undefined4 *)((uint)(piVar1 + 4) & 0xfffffffc) = uVar2;
  }
  SetColorOfMoby(moby,0x7f,0x7f,0x7f);
  return;
}


