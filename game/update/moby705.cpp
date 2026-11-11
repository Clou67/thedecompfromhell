// game/update/moby705.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x429d80-0x429f70
#include <stdlib.h>
#include "game/update/moby705.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0429d80 (0x1f0 bytes)
/* Moby 705 */

void UpdateMoby_705(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<48> local_50;
  
  lVar5 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  if (moby->state == '\0') {
    MB_CopyHeroLights(lVar5);
    moby->state = '\x01';
    dVar9 = -1.0;
    dVar10 = 1.0;
    dVar8 = (double)MB_randRangeFloat(-1.0,1.0);
    *pfVar2 = (float)dVar8;
    uVar6 = rand();
    if ((uVar6 & 1) != 0) {
      dVar9 = dVar10;
    }
    pfVar2[1] = (float)dVar9;
  }
  CollMobySphere(0x3ff3333340000000,lVar5 + 0x10,0,0x10,lVar5,local_50);
  fVar1 = pfVar2[1];
  if (pfVar2[1] == *pfVar2) {
    iVar7 = FastDecTimerS32(ZEXT48(pfVar2) + 8);
    fVar1 = pfVar2[1];
    if (iVar7 != 0) {
      fVar1 = -fVar1;
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      pfVar2[1] = fVar1;
      auVar11 = loadVectorLeftIndexed(0xc,0x429d68);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar12);
      auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,8,
                         ZEXT48(pfVar2));
      *(undefined4 *)((uint)(pfVar2 + 2) & 0xfffffffc) = uVar3;
    }
  }
  fVar4 = g_FrameTime;
  fVar1 = g_FrameTime * 4.0 * fVar1 + *pfVar2;
  *pfVar2 = fVar1;
  if (1.0 < fVar1) {
    *pfVar2 = 1.0;
    fVar1 = 1.0;
  }
  if (fVar1 < -1.0) {
    *pfVar2 = -1.0;
    fVar1 = -1.0;
  }
  dVar9 = (double)FastWrapRot((moby->rotation).z,fVar4 * -12.566371 * fVar1);
  (moby->rotation).z = (float)dVar9;
  return;
}


